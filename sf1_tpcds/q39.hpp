#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_7652124(Table &tbl_SerializeFromObject_TD_8121076_input, Table &tbl_Filter_TD_7652124_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3802))
    // Input: ListBuffer(i_item_sk#3802)
    // Output: ListBuffer(i_item_sk#3802)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8121076_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3802 = tbl_SerializeFromObject_TD_8121076_input.getInt32(i, 0);
        if (_i_item_sk3802!= 0) {
            int32_t _i_item_sk3802_t = tbl_SerializeFromObject_TD_8121076_input.getInt32(i, 0);
            tbl_Filter_TD_7652124_output.setInt32(r, 0, _i_item_sk3802_t);
            r++;
        }
    }
    tbl_Filter_TD_7652124_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7652124_output #Row: " << tbl_Filter_TD_7652124_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7630010(Table &tbl_SerializeFromObject_TD_8842881_input, Table &tbl_Filter_TD_7630010_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(inv_item_sk#3799) AND (isnotnull(inv_warehouse_sk#3800) AND isnotnull(inv_date_sk#3798))))
    // Input: ListBuffer(inv_date_sk#3798, inv_item_sk#3799, inv_warehouse_sk#3800, inv_quantity_on_hand#3801)
    // Output: ListBuffer(inv_date_sk#3798, inv_item_sk#3799, inv_warehouse_sk#3800, inv_quantity_on_hand#3801)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8842881_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_item_sk3799 = tbl_SerializeFromObject_TD_8842881_input.getInt32(i, 1);
        int32_t _inv_warehouse_sk3800 = tbl_SerializeFromObject_TD_8842881_input.getInt32(i, 2);
        int32_t _inv_date_sk3798 = tbl_SerializeFromObject_TD_8842881_input.getInt32(i, 0);
        if ((_inv_item_sk3799!= 0) && ((_inv_warehouse_sk3800!= 0) && (_inv_date_sk3798!= 0))) {
            int32_t _inv_date_sk3798_t = tbl_SerializeFromObject_TD_8842881_input.getInt32(i, 0);
            tbl_Filter_TD_7630010_output.setInt32(r, 0, _inv_date_sk3798_t);
            int32_t _inv_item_sk3799_t = tbl_SerializeFromObject_TD_8842881_input.getInt32(i, 1);
            tbl_Filter_TD_7630010_output.setInt32(r, 1, _inv_item_sk3799_t);
            int32_t _inv_warehouse_sk3800_t = tbl_SerializeFromObject_TD_8842881_input.getInt32(i, 2);
            tbl_Filter_TD_7630010_output.setInt32(r, 2, _inv_warehouse_sk3800_t);
            int32_t _inv_quantity_on_hand3801_t = tbl_SerializeFromObject_TD_8842881_input.getInt32(i, 3);
            tbl_Filter_TD_7630010_output.setInt32(r, 3, _inv_quantity_on_hand3801_t);
            r++;
        }
    }
    tbl_Filter_TD_7630010_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7630010_output #Row: " << tbl_Filter_TD_7630010_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7706078(Table &tbl_SerializeFromObject_TD_8374655_input, Table &tbl_Filter_TD_7706078_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8374655_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_8374655_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_8374655_input.getInt32(i, 0);
            tbl_Filter_TD_7706078_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_7706078_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7706078_output #Row: " << tbl_Filter_TD_7706078_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7203627(Table &tbl_SerializeFromObject_TD_8766547_input, Table &tbl_Filter_TD_7203627_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(inv_item_sk#658) AND (isnotnull(inv_warehouse_sk#659) AND isnotnull(inv_date_sk#657))))
    // Input: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Output: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8766547_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_item_sk658 = tbl_SerializeFromObject_TD_8766547_input.getInt32(i, 1);
        int32_t _inv_warehouse_sk659 = tbl_SerializeFromObject_TD_8766547_input.getInt32(i, 2);
        int32_t _inv_date_sk657 = tbl_SerializeFromObject_TD_8766547_input.getInt32(i, 0);
        if ((_inv_item_sk658!= 0) && ((_inv_warehouse_sk659!= 0) && (_inv_date_sk657!= 0))) {
            int32_t _inv_date_sk657_t = tbl_SerializeFromObject_TD_8766547_input.getInt32(i, 0);
            tbl_Filter_TD_7203627_output.setInt32(r, 0, _inv_date_sk657_t);
            int32_t _inv_item_sk658_t = tbl_SerializeFromObject_TD_8766547_input.getInt32(i, 1);
            tbl_Filter_TD_7203627_output.setInt32(r, 1, _inv_item_sk658_t);
            int32_t _inv_warehouse_sk659_t = tbl_SerializeFromObject_TD_8766547_input.getInt32(i, 2);
            tbl_Filter_TD_7203627_output.setInt32(r, 2, _inv_warehouse_sk659_t);
            int32_t _inv_quantity_on_hand660_t = tbl_SerializeFromObject_TD_8766547_input.getInt32(i, 3);
            tbl_Filter_TD_7203627_output.setInt32(r, 3, _inv_quantity_on_hand660_t);
            r++;
        }
    }
    tbl_Filter_TD_7203627_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7203627_output #Row: " << tbl_Filter_TD_7203627_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6734621(Table &tbl_SerializeFromObject_TD_778977_input, Table &tbl_Filter_TD_6734621_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#3824))
    // Input: ListBuffer(w_warehouse_sk#3824, w_warehouse_name#3826)
    // Output: ListBuffer(w_warehouse_sk#3824, w_warehouse_name#3826)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_778977_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk3824 = tbl_SerializeFromObject_TD_778977_input.getInt32(i, 0);
        if (_w_warehouse_sk3824!= 0) {
            int32_t _w_warehouse_sk3824_t = tbl_SerializeFromObject_TD_778977_input.getInt32(i, 0);
            tbl_Filter_TD_6734621_output.setInt32(r, 0, _w_warehouse_sk3824_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name3826_t = tbl_SerializeFromObject_TD_778977_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6734621_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name3826_t);
            r++;
        }
    }
    tbl_Filter_TD_6734621_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6734621_output #Row: " << tbl_Filter_TD_6734621_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6294642(Table &tbl_SerializeFromObject_TD_752315_input, Table &tbl_Filter_TD_6294642_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#495))
    // Input: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    // Output: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_752315_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_SerializeFromObject_TD_752315_input.getInt32(i, 0);
        if (_w_warehouse_sk495!= 0) {
            int32_t _w_warehouse_sk495_t = tbl_SerializeFromObject_TD_752315_input.getInt32(i, 0);
            tbl_Filter_TD_6294642_output.setInt32(r, 0, _w_warehouse_sk495_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_t = tbl_SerializeFromObject_TD_752315_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6294642_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_t);
            r++;
        }
    }
    tbl_Filter_TD_6294642_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6294642_output #Row: " << tbl_Filter_TD_6294642_output.getNumRow() << std::endl;
}


void SW_Filter_TD_560475(Table &tbl_SerializeFromObject_TD_6552494_input, Table &tbl_Filter_TD_560475_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#3846) AND isnotnull(d_year#3844)) AND ((d_moy#3846 = 2) AND (d_year#3844 = 2001))) AND isnotnull(d_date_sk#3838)))
    // Input: ListBuffer(d_date_sk#3838, d_moy#3846, d_year#3844)
    // Output: ListBuffer(d_date_sk#3838, d_moy#3846)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6552494_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy3846 = tbl_SerializeFromObject_TD_6552494_input.getInt32(i, 1);
        int32_t _d_year3844 = tbl_SerializeFromObject_TD_6552494_input.getInt32(i, 2);
        int32_t _d_date_sk3838 = tbl_SerializeFromObject_TD_6552494_input.getInt32(i, 0);
        if ((((_d_moy3846!= 0) && (_d_year3844!= 0)) && ((_d_moy3846 == 2) && (_d_year3844 == 2001))) && (_d_date_sk3838!= 0)) {
            int32_t _d_date_sk3838_t = tbl_SerializeFromObject_TD_6552494_input.getInt32(i, 0);
            tbl_Filter_TD_560475_output.setInt32(r, 0, _d_date_sk3838_t);
            int32_t _d_moy3846_t = tbl_SerializeFromObject_TD_6552494_input.getInt32(i, 1);
            tbl_Filter_TD_560475_output.setInt32(r, 1, _d_moy3846_t);
            r++;
        }
    }
    tbl_Filter_TD_560475_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_560475_output #Row: " << tbl_Filter_TD_560475_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_576365_key_leftMajor {
    int32_t _inv_warehouse_sk3800;
    bool operator==(const SW_JOIN_INNER_TD_576365_key_leftMajor& other) const {
        return ((_inv_warehouse_sk3800 == other._inv_warehouse_sk3800));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_576365_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_576365_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_warehouse_sk3800));
    }
};
}
struct SW_JOIN_INNER_TD_576365_payload_leftMajor {
    int32_t _inv_date_sk3798;
    int32_t _inv_warehouse_sk3800;
    int32_t _inv_quantity_on_hand3801;
    int32_t _i_item_sk3802;
};
struct SW_JOIN_INNER_TD_576365_key_rightMajor {
    int32_t _w_warehouse_sk3824;
    bool operator==(const SW_JOIN_INNER_TD_576365_key_rightMajor& other) const {
        return ((_w_warehouse_sk3824 == other._w_warehouse_sk3824));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_576365_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_576365_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk3824));
    }
};
}
struct SW_JOIN_INNER_TD_576365_payload_rightMajor {
    int32_t _w_warehouse_sk3824;
    std::string _w_warehouse_name3826;
};
void SW_JOIN_INNER_TD_576365(Table &tbl_JOIN_INNER_TD_659182_output, Table &tbl_Filter_TD_6734621_output, Table &tbl_JOIN_INNER_TD_576365_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_warehouse_sk#3800 = w_warehouse_sk#3824))
    // Left Table: ListBuffer(inv_date_sk#3798, inv_warehouse_sk#3800, inv_quantity_on_hand#3801, i_item_sk#3802)
    // Right Table: ListBuffer(w_warehouse_sk#3824, w_warehouse_name#3826)
    // Output Table: ListBuffer(inv_date_sk#3798, inv_quantity_on_hand#3801, i_item_sk#3802, w_warehouse_sk#3824, w_warehouse_name#3826)
    int left_nrow = tbl_JOIN_INNER_TD_659182_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6734621_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_576365_key_leftMajor, SW_JOIN_INNER_TD_576365_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_659182_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_warehouse_sk3800_k = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_576365_key_leftMajor keyA{_inv_warehouse_sk3800_k};
            int32_t _inv_date_sk3798 = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 0);
            int32_t _inv_warehouse_sk3800 = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 1);
            int32_t _inv_quantity_on_hand3801 = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 2);
            int32_t _i_item_sk3802 = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_576365_payload_leftMajor payloadA{_inv_date_sk3798, _inv_warehouse_sk3800, _inv_quantity_on_hand3801, _i_item_sk3802};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6734621_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk3824_k = tbl_Filter_TD_6734621_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_576365_key_leftMajor{_w_warehouse_sk3824_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk3798 = (it->second)._inv_date_sk3798;
                int32_t _inv_warehouse_sk3800 = (it->second)._inv_warehouse_sk3800;
                int32_t _inv_quantity_on_hand3801 = (it->second)._inv_quantity_on_hand3801;
                int32_t _i_item_sk3802 = (it->second)._i_item_sk3802;
                int32_t _w_warehouse_sk3824 = tbl_Filter_TD_6734621_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name3826_n = tbl_Filter_TD_6734621_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_warehouse_name3826 = std::string(_w_warehouse_name3826_n.data());
                tbl_JOIN_INNER_TD_576365_output.setInt32(r, 0, _inv_date_sk3798);
                tbl_JOIN_INNER_TD_576365_output.setInt32(r, 1, _inv_quantity_on_hand3801);
                tbl_JOIN_INNER_TD_576365_output.setInt32(r, 2, _i_item_sk3802);
                tbl_JOIN_INNER_TD_576365_output.setInt32(r, 3, _w_warehouse_sk3824);
                tbl_JOIN_INNER_TD_576365_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name3826_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_576365_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_576365_key_rightMajor, SW_JOIN_INNER_TD_576365_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6734621_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk3824_k = tbl_Filter_TD_6734621_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_576365_key_rightMajor keyA{_w_warehouse_sk3824_k};
            int32_t _w_warehouse_sk3824 = tbl_Filter_TD_6734621_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name3826_n = tbl_Filter_TD_6734621_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_warehouse_name3826 = std::string(_w_warehouse_name3826_n.data());
            SW_JOIN_INNER_TD_576365_payload_rightMajor payloadA{_w_warehouse_sk3824, _w_warehouse_name3826};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_659182_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_warehouse_sk3800_k = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_576365_key_rightMajor{_inv_warehouse_sk3800_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk3824 = (it->second)._w_warehouse_sk3824;
                std::string _w_warehouse_name3826 = (it->second)._w_warehouse_name3826;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name3826_n{};
                memcpy(_w_warehouse_name3826_n.data(), (_w_warehouse_name3826).data(), (_w_warehouse_name3826).length());
                int32_t _inv_date_sk3798 = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 0);
                int32_t _inv_warehouse_sk3800 = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 1);
                int32_t _inv_quantity_on_hand3801 = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 2);
                int32_t _i_item_sk3802 = tbl_JOIN_INNER_TD_659182_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_576365_output.setInt32(r, 3, _w_warehouse_sk3824);
                tbl_JOIN_INNER_TD_576365_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name3826_n);
                tbl_JOIN_INNER_TD_576365_output.setInt32(r, 0, _inv_date_sk3798);
                tbl_JOIN_INNER_TD_576365_output.setInt32(r, 1, _inv_quantity_on_hand3801);
                tbl_JOIN_INNER_TD_576365_output.setInt32(r, 2, _i_item_sk3802);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_576365_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_576365_output #Row: " << tbl_JOIN_INNER_TD_576365_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5190123(Table &tbl_SerializeFromObject_TD_6866264_input, Table &tbl_Filter_TD_5190123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 1) AND (d_year#126 = 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6866264_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_6866264_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_6866264_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_6866264_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 1) && (_d_year126 == 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_6866264_input.getInt32(i, 0);
            tbl_Filter_TD_5190123_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_6866264_input.getInt32(i, 1);
            tbl_Filter_TD_5190123_output.setInt32(r, 1, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_5190123_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5190123_output #Row: " << tbl_Filter_TD_5190123_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5811079_key_leftMajor {
    int32_t _inv_warehouse_sk659;
    bool operator==(const SW_JOIN_INNER_TD_5811079_key_leftMajor& other) const {
        return ((_inv_warehouse_sk659 == other._inv_warehouse_sk659));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5811079_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5811079_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_warehouse_sk659));
    }
};
}
struct SW_JOIN_INNER_TD_5811079_payload_leftMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_warehouse_sk659;
    int32_t _inv_quantity_on_hand660;
    int32_t _i_item_sk228;
};
struct SW_JOIN_INNER_TD_5811079_key_rightMajor {
    int32_t _w_warehouse_sk495;
    bool operator==(const SW_JOIN_INNER_TD_5811079_key_rightMajor& other) const {
        return ((_w_warehouse_sk495 == other._w_warehouse_sk495));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5811079_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5811079_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk495));
    }
};
}
struct SW_JOIN_INNER_TD_5811079_payload_rightMajor {
    int32_t _w_warehouse_sk495;
    std::string _w_warehouse_name497;
};
void SW_JOIN_INNER_TD_5811079(Table &tbl_JOIN_INNER_TD_6156238_output, Table &tbl_Filter_TD_6294642_output, Table &tbl_JOIN_INNER_TD_5811079_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_warehouse_sk#659 = w_warehouse_sk#495))
    // Left Table: ListBuffer(inv_date_sk#657, inv_warehouse_sk#659, inv_quantity_on_hand#660, i_item_sk#228)
    // Right Table: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497)
    // Output Table: ListBuffer(inv_date_sk#657, inv_quantity_on_hand#660, i_item_sk#228, w_warehouse_sk#495, w_warehouse_name#497)
    int left_nrow = tbl_JOIN_INNER_TD_6156238_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6294642_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5811079_key_leftMajor, SW_JOIN_INNER_TD_5811079_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6156238_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5811079_key_leftMajor keyA{_inv_warehouse_sk659_k};
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 0);
            int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 1);
            int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 2);
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_5811079_payload_leftMajor payloadA{_inv_date_sk657, _inv_warehouse_sk659, _inv_quantity_on_hand660, _i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6294642_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_6294642_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5811079_key_leftMajor{_w_warehouse_sk495_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _w_warehouse_sk495 = tbl_Filter_TD_6294642_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_6294642_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                tbl_JOIN_INNER_TD_5811079_output.setInt32(r, 0, _inv_date_sk657);
                tbl_JOIN_INNER_TD_5811079_output.setInt32(r, 1, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_5811079_output.setInt32(r, 2, _i_item_sk228);
                tbl_JOIN_INNER_TD_5811079_output.setInt32(r, 3, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_5811079_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5811079_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5811079_key_rightMajor, SW_JOIN_INNER_TD_5811079_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6294642_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_6294642_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5811079_key_rightMajor keyA{_w_warehouse_sk495_k};
            int32_t _w_warehouse_sk495 = tbl_Filter_TD_6294642_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_6294642_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            SW_JOIN_INNER_TD_5811079_payload_rightMajor payloadA{_w_warehouse_sk495, _w_warehouse_name497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6156238_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5811079_key_rightMajor{_inv_warehouse_sk659_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 0);
                int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 1);
                int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 2);
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_6156238_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_5811079_output.setInt32(r, 3, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_5811079_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_5811079_output.setInt32(r, 0, _inv_date_sk657);
                tbl_JOIN_INNER_TD_5811079_output.setInt32(r, 1, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_5811079_output.setInt32(r, 2, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5811079_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5811079_output #Row: " << tbl_JOIN_INNER_TD_5811079_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4920053_key_leftMajor {
    int32_t _inv_date_sk3798;
    bool operator==(const SW_JOIN_INNER_TD_4920053_key_leftMajor& other) const {
        return ((_inv_date_sk3798 == other._inv_date_sk3798));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4920053_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4920053_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_date_sk3798));
    }
};
}
struct SW_JOIN_INNER_TD_4920053_payload_leftMajor {
    int32_t _inv_date_sk3798;
    int32_t _inv_quantity_on_hand3801;
    int32_t _i_item_sk3802;
    int32_t _w_warehouse_sk3824;
    std::string _w_warehouse_name3826;
};
struct SW_JOIN_INNER_TD_4920053_key_rightMajor {
    int32_t _d_date_sk3838;
    bool operator==(const SW_JOIN_INNER_TD_4920053_key_rightMajor& other) const {
        return ((_d_date_sk3838 == other._d_date_sk3838));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4920053_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4920053_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3838));
    }
};
}
struct SW_JOIN_INNER_TD_4920053_payload_rightMajor {
    int32_t _d_date_sk3838;
    int32_t _d_moy3846;
};
void SW_JOIN_INNER_TD_4920053(Table &tbl_JOIN_INNER_TD_576365_output, Table &tbl_Filter_TD_560475_output, Table &tbl_JOIN_INNER_TD_4920053_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_date_sk#3798 = d_date_sk#3838))
    // Left Table: ListBuffer(inv_date_sk#3798, inv_quantity_on_hand#3801, i_item_sk#3802, w_warehouse_sk#3824, w_warehouse_name#3826)
    // Right Table: ListBuffer(d_date_sk#3838, d_moy#3846)
    // Output Table: ListBuffer(inv_quantity_on_hand#3801, i_item_sk#3802, w_warehouse_sk#3824, w_warehouse_name#3826, d_moy#3846)
    int left_nrow = tbl_JOIN_INNER_TD_576365_output.getNumRow();
    int right_nrow = tbl_Filter_TD_560475_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4920053_key_leftMajor, SW_JOIN_INNER_TD_4920053_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_576365_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_date_sk3798_k = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4920053_key_leftMajor keyA{_inv_date_sk3798_k};
            int32_t _inv_date_sk3798 = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 0);
            int32_t _inv_quantity_on_hand3801 = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 1);
            int32_t _i_item_sk3802 = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 2);
            int32_t _w_warehouse_sk3824 = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name3826_n = tbl_JOIN_INNER_TD_576365_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_warehouse_name3826 = std::string(_w_warehouse_name3826_n.data());
            SW_JOIN_INNER_TD_4920053_payload_leftMajor payloadA{_inv_date_sk3798, _inv_quantity_on_hand3801, _i_item_sk3802, _w_warehouse_sk3824, _w_warehouse_name3826};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_560475_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3838_k = tbl_Filter_TD_560475_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4920053_key_leftMajor{_d_date_sk3838_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk3798 = (it->second)._inv_date_sk3798;
                int32_t _inv_quantity_on_hand3801 = (it->second)._inv_quantity_on_hand3801;
                int32_t _i_item_sk3802 = (it->second)._i_item_sk3802;
                int32_t _w_warehouse_sk3824 = (it->second)._w_warehouse_sk3824;
                std::string _w_warehouse_name3826 = (it->second)._w_warehouse_name3826;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name3826_n{};
                memcpy(_w_warehouse_name3826_n.data(), (_w_warehouse_name3826).data(), (_w_warehouse_name3826).length());
                int32_t _d_date_sk3838 = tbl_Filter_TD_560475_output.getInt32(i, 0);
                int32_t _d_moy3846 = tbl_Filter_TD_560475_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4920053_output.setInt32(r, 0, _inv_quantity_on_hand3801);
                tbl_JOIN_INNER_TD_4920053_output.setInt32(r, 1, _i_item_sk3802);
                tbl_JOIN_INNER_TD_4920053_output.setInt32(r, 2, _w_warehouse_sk3824);
                tbl_JOIN_INNER_TD_4920053_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name3826_n);
                tbl_JOIN_INNER_TD_4920053_output.setInt32(r, 4, _d_moy3846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4920053_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4920053_key_rightMajor, SW_JOIN_INNER_TD_4920053_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_560475_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3838_k = tbl_Filter_TD_560475_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4920053_key_rightMajor keyA{_d_date_sk3838_k};
            int32_t _d_date_sk3838 = tbl_Filter_TD_560475_output.getInt32(i, 0);
            int32_t _d_moy3846 = tbl_Filter_TD_560475_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4920053_payload_rightMajor payloadA{_d_date_sk3838, _d_moy3846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_576365_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_date_sk3798_k = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4920053_key_rightMajor{_inv_date_sk3798_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3838 = (it->second)._d_date_sk3838;
                int32_t _d_moy3846 = (it->second)._d_moy3846;
                int32_t _inv_date_sk3798 = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 0);
                int32_t _inv_quantity_on_hand3801 = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 1);
                int32_t _i_item_sk3802 = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 2);
                int32_t _w_warehouse_sk3824 = tbl_JOIN_INNER_TD_576365_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name3826_n = tbl_JOIN_INNER_TD_576365_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_warehouse_name3826 = std::string(_w_warehouse_name3826_n.data());
                tbl_JOIN_INNER_TD_4920053_output.setInt32(r, 4, _d_moy3846);
                tbl_JOIN_INNER_TD_4920053_output.setInt32(r, 0, _inv_quantity_on_hand3801);
                tbl_JOIN_INNER_TD_4920053_output.setInt32(r, 1, _i_item_sk3802);
                tbl_JOIN_INNER_TD_4920053_output.setInt32(r, 2, _w_warehouse_sk3824);
                tbl_JOIN_INNER_TD_4920053_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name3826_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4920053_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4920053_output #Row: " << tbl_JOIN_INNER_TD_4920053_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4100788_key_leftMajor {
    int32_t _inv_date_sk657;
    bool operator==(const SW_JOIN_INNER_TD_4100788_key_leftMajor& other) const {
        return ((_inv_date_sk657 == other._inv_date_sk657));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4100788_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4100788_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_date_sk657));
    }
};
}
struct SW_JOIN_INNER_TD_4100788_payload_leftMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_quantity_on_hand660;
    int32_t _i_item_sk228;
    int32_t _w_warehouse_sk495;
    std::string _w_warehouse_name497;
};
struct SW_JOIN_INNER_TD_4100788_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_4100788_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4100788_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4100788_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_4100788_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_4100788(Table &tbl_JOIN_INNER_TD_5811079_output, Table &tbl_Filter_TD_5190123_output, Table &tbl_JOIN_INNER_TD_4100788_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_date_sk#657 = d_date_sk#120))
    // Left Table: ListBuffer(inv_date_sk#657, inv_quantity_on_hand#660, i_item_sk#228, w_warehouse_sk#495, w_warehouse_name#497)
    // Right Table: ListBuffer(d_date_sk#120, d_moy#128)
    // Output Table: ListBuffer(inv_quantity_on_hand#660, i_item_sk#228, w_warehouse_sk#495, w_warehouse_name#497, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_5811079_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5190123_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4100788_key_leftMajor, SW_JOIN_INNER_TD_4100788_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5811079_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4100788_key_leftMajor keyA{_inv_date_sk657_k};
            int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 0);
            int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 1);
            int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 2);
            int32_t _w_warehouse_sk495 = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_5811079_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            SW_JOIN_INNER_TD_4100788_payload_leftMajor payloadA{_inv_date_sk657, _inv_quantity_on_hand660, _i_item_sk228, _w_warehouse_sk495, _w_warehouse_name497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5190123_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5190123_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4100788_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_5190123_output.getInt32(i, 0);
                int32_t _d_moy128 = tbl_Filter_TD_5190123_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4100788_output.setInt32(r, 0, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_4100788_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_4100788_output.setInt32(r, 2, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_4100788_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_4100788_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4100788_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4100788_key_rightMajor, SW_JOIN_INNER_TD_4100788_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5190123_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5190123_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4100788_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_5190123_output.getInt32(i, 0);
            int32_t _d_moy128 = tbl_Filter_TD_5190123_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4100788_payload_rightMajor payloadA{_d_date_sk120, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5811079_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_date_sk657_k = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4100788_key_rightMajor{_inv_date_sk657_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _inv_date_sk657 = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 0);
                int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 1);
                int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 2);
                int32_t _w_warehouse_sk495 = tbl_JOIN_INNER_TD_5811079_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_5811079_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                tbl_JOIN_INNER_TD_4100788_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_4100788_output.setInt32(r, 0, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_4100788_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_4100788_output.setInt32(r, 2, _w_warehouse_sk495);
                tbl_JOIN_INNER_TD_4100788_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4100788_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4100788_output #Row: " << tbl_JOIN_INNER_TD_4100788_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3702847_key {
    std::string _w_warehouse_name3826;
    int32_t _w_warehouse_sk3824;
    int32_t _i_item_sk3802;
    int32_t _d_moy3846;
    bool operator==(const SW_Aggregate_TD_3702847_key& other) const { return (_w_warehouse_name3826 == other._w_warehouse_name3826) && (_w_warehouse_sk3824 == other._w_warehouse_sk3824) && (_i_item_sk3802 == other._i_item_sk3802) && (_d_moy3846 == other._d_moy3846); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3702847_key> {
    std::size_t operator() (const SW_Aggregate_TD_3702847_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._w_warehouse_name3826)) + (hash<int32_t>()(k._w_warehouse_sk3824)) + (hash<int32_t>()(k._i_item_sk3802)) + (hash<int32_t>()(k._d_moy3846));
    }
};
}
struct SW_Aggregate_TD_3702847_payload {
    int64_t _mean3558_avg_0;
};
void SW_Aggregate_TD_3702847(Table &tbl_JOIN_INNER_TD_4920053_output, Table &tbl_Aggregate_TD_3702847_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(w_warehouse_name#3826, w_warehouse_sk#3824, i_item_sk#3802, d_moy#3846, avg(inv_quantity_on_hand#3801) AS mean#3558)
    // Input: ListBuffer(inv_quantity_on_hand#3801, i_item_sk#3802, w_warehouse_sk#3824, w_warehouse_name#3826, d_moy#3846)
    // Output: ListBuffer(w_warehouse_sk#3824, i_item_sk#3802, d_moy#3846, mean#3558)
    std::unordered_map<SW_Aggregate_TD_3702847_key, SW_Aggregate_TD_3702847_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4920053_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand3801 = tbl_JOIN_INNER_TD_4920053_output.getInt32(i, 0);
        int32_t _i_item_sk3802 = tbl_JOIN_INNER_TD_4920053_output.getInt32(i, 1);
        int32_t _w_warehouse_sk3824 = tbl_JOIN_INNER_TD_4920053_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name3826 = tbl_JOIN_INNER_TD_4920053_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_moy3846 = tbl_JOIN_INNER_TD_4920053_output.getInt32(i, 4);
        SW_Aggregate_TD_3702847_key k{std::string(_w_warehouse_name3826.data()), _w_warehouse_sk3824, _i_item_sk3802, _d_moy3846};
        int64_t _mean3558_avg_0 = _inv_quantity_on_hand3801;
        SW_Aggregate_TD_3702847_payload p{_mean3558_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._mean3558_avg_0 + _mean3558_avg_0);
            p._mean3558_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _w_warehouse_name3826 not required in the output table
        tbl_Aggregate_TD_3702847_output.setInt32(r, 0, (it.first)._w_warehouse_sk3824);
        tbl_Aggregate_TD_3702847_output.setInt32(r, 1, (it.first)._i_item_sk3802);
        tbl_Aggregate_TD_3702847_output.setInt32(r, 2, (it.first)._d_moy3846);
        int64_t _mean3558 = (it.second)._mean3558_avg_0 / nrow1;
        tbl_Aggregate_TD_3702847_output.setInt64(r, 3, _mean3558);
        ++r;
    }
    tbl_Aggregate_TD_3702847_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3702847_output #Row: " << tbl_Aggregate_TD_3702847_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3765802_key {
    std::string _w_warehouse_name497;
    int32_t _w_warehouse_sk495;
    int32_t _i_item_sk228;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_3765802_key& other) const { return (_w_warehouse_name497 == other._w_warehouse_name497) && (_w_warehouse_sk495 == other._w_warehouse_sk495) && (_i_item_sk228 == other._i_item_sk228) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3765802_key> {
    std::size_t operator() (const SW_Aggregate_TD_3765802_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._w_warehouse_name497)) + (hash<int32_t>()(k._w_warehouse_sk495)) + (hash<int32_t>()(k._i_item_sk228)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_3765802_payload {
    int64_t _mean3552_avg_0;
};
void SW_Aggregate_TD_3765802(Table &tbl_JOIN_INNER_TD_4100788_output, Table &tbl_Aggregate_TD_3765802_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(w_warehouse_name#497, w_warehouse_sk#495, i_item_sk#228, d_moy#128, avg(inv_quantity_on_hand#660) AS mean#3552)
    // Input: ListBuffer(inv_quantity_on_hand#660, i_item_sk#228, w_warehouse_sk#495, w_warehouse_name#497, d_moy#128)
    // Output: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, mean#3552)
    std::unordered_map<SW_Aggregate_TD_3765802_key, SW_Aggregate_TD_3765802_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4100788_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_4100788_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_4100788_output.getInt32(i, 1);
        int32_t _w_warehouse_sk495 = tbl_JOIN_INNER_TD_4100788_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_INNER_TD_4100788_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_4100788_output.getInt32(i, 4);
        SW_Aggregate_TD_3765802_key k{std::string(_w_warehouse_name497.data()), _w_warehouse_sk495, _i_item_sk228, _d_moy128};
        int64_t _mean3552_avg_0 = _inv_quantity_on_hand660;
        SW_Aggregate_TD_3765802_payload p{_mean3552_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._mean3552_avg_0 + _mean3552_avg_0);
            p._mean3552_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _w_warehouse_name497 not required in the output table
        tbl_Aggregate_TD_3765802_output.setInt32(r, 0, (it.first)._w_warehouse_sk495);
        tbl_Aggregate_TD_3765802_output.setInt32(r, 1, (it.first)._i_item_sk228);
        tbl_Aggregate_TD_3765802_output.setInt32(r, 2, (it.first)._d_moy128);
        int64_t _mean3552 = (it.second)._mean3552_avg_0 / nrow1;
        tbl_Aggregate_TD_3765802_output.setInt64(r, 3, _mean3552);
        ++r;
    }
    tbl_Aggregate_TD_3765802_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3765802_output #Row: " << tbl_Aggregate_TD_3765802_output.getNumRow() << std::endl;
}


void SW_Project_TD_1710705(Table &tbl_JOIN_INNER_TD_2621802_output, Table &tbl_Project_TD_1710705_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(w_warehouse_sk#495 AS inv1_w_warehouse_sk#3544, i_item_sk#228 AS inv1_i_item_sk#3545, d_moy#128 AS inv1_d_moy#3546, mean#3552 AS inv1_mean#3547, w_warehouse_sk#3824 AS inv2_w_warehouse_sk#3548, i_item_sk#3802 AS inv2_i_item_sk#3549, d_moy#3846 AS inv2_d_moy#3550, mean#3558 AS inv2_mean#3551)
    // Input: ListBuffer(w_warehouse_sk#495, i_item_sk#228, d_moy#128, mean#3552, w_warehouse_sk#3824, i_item_sk#3802, d_moy#3846, mean#3558)
    // Output: ListBuffer(inv1_w_warehouse_sk#3544, inv1_i_item_sk#3545, inv1_d_moy#3546, inv1_mean#3547, inv2_w_warehouse_sk#3548, inv2_i_item_sk#3549, inv2_d_moy#3550, inv2_mean#3551)
    int nrow1 = tbl_JOIN_INNER_TD_2621802_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_JOIN_INNER_TD_2621802_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_2621802_output.getInt32(i, 1);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_2621802_output.getInt32(i, 2);
        int64_t _mean3552 = tbl_JOIN_INNER_TD_2621802_output.getInt64(i, 3);
        int32_t _w_warehouse_sk3824 = tbl_JOIN_INNER_TD_2621802_output.getInt32(i, 4);
        int32_t _i_item_sk3802 = tbl_JOIN_INNER_TD_2621802_output.getInt32(i, 5);
        int32_t _d_moy3846 = tbl_JOIN_INNER_TD_2621802_output.getInt32(i, 6);
        int64_t _mean3558 = tbl_JOIN_INNER_TD_2621802_output.getInt64(i, 7);
        int32_t _inv1_w_warehouse_sk3544 = _w_warehouse_sk495;
        tbl_Project_TD_1710705_output.setInt32(i, 0, _inv1_w_warehouse_sk3544);
        int32_t _inv1_i_item_sk3545 = _i_item_sk228;
        tbl_Project_TD_1710705_output.setInt32(i, 1, _inv1_i_item_sk3545);
        int32_t _inv1_d_moy3546 = _d_moy128;
        tbl_Project_TD_1710705_output.setInt32(i, 2, _inv1_d_moy3546);
        int64_t _inv1_mean3547 = _mean3552;
        tbl_Project_TD_1710705_output.setInt64(i, 3, _inv1_mean3547);
        int32_t _inv2_w_warehouse_sk3548 = _w_warehouse_sk3824;
        tbl_Project_TD_1710705_output.setInt32(i, 4, _inv2_w_warehouse_sk3548);
        int32_t _inv2_i_item_sk3549 = _i_item_sk3802;
        tbl_Project_TD_1710705_output.setInt32(i, 5, _inv2_i_item_sk3549);
        int32_t _inv2_d_moy3550 = _d_moy3846;
        tbl_Project_TD_1710705_output.setInt32(i, 6, _inv2_d_moy3550);
        int64_t _inv2_mean3551 = _mean3558;
        tbl_Project_TD_1710705_output.setInt64(i, 7, _inv2_mean3551);
    }
    tbl_Project_TD_1710705_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1710705_output #Row: " << tbl_Project_TD_1710705_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0957414(Table &tbl_Project_TD_1710705_output, Table &tbl_Sort_TD_0957414_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(inv1_w_warehouse_sk#3544 ASC NULLS FIRST, inv1_i_item_sk#3545 ASC NULLS FIRST, inv1_d_moy#3546 ASC NULLS FIRST, inv1_mean#3547 ASC NULLS FIRST, inv2_d_moy#3550 ASC NULLS FIRST, inv2_mean#3551 ASC NULLS FIRST)
    // Input: ListBuffer(inv1_w_warehouse_sk#3544, inv1_i_item_sk#3545, inv1_d_moy#3546, inv1_mean#3547, inv2_w_warehouse_sk#3548, inv2_i_item_sk#3549, inv2_d_moy#3550, inv2_mean#3551)
    // Output: ListBuffer(inv1_w_warehouse_sk#3544, inv1_i_item_sk#3545, inv1_d_moy#3546, inv1_mean#3547, inv2_w_warehouse_sk#3548, inv2_i_item_sk#3549, inv2_d_moy#3550, inv2_mean#3551)
    struct SW_Sort_TD_0957414Row {
        int32_t _inv1_w_warehouse_sk3544;
        int32_t _inv1_i_item_sk3545;
        int32_t _inv1_d_moy3546;
        int64_t _inv1_mean3547;
        int32_t _inv2_w_warehouse_sk3548;
        int32_t _inv2_i_item_sk3549;
        int32_t _inv2_d_moy3550;
        int64_t _inv2_mean3551;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0957414Row& a, const SW_Sort_TD_0957414Row& b) const { return 
 (a._inv1_w_warehouse_sk3544 < b._inv1_w_warehouse_sk3544) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 < b._inv1_i_item_sk3545)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 < b._inv1_d_moy3546)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 == b._inv1_d_moy3546) && (a._inv1_mean3547 < b._inv1_mean3547)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 == b._inv1_d_moy3546) && (a._inv1_mean3547 == b._inv1_mean3547) && (a._inv2_d_moy3550 < b._inv2_d_moy3550)) || 
 ((a._inv1_w_warehouse_sk3544 == b._inv1_w_warehouse_sk3544) && (a._inv1_i_item_sk3545 == b._inv1_i_item_sk3545) && (a._inv1_d_moy3546 == b._inv1_d_moy3546) && (a._inv1_mean3547 == b._inv1_mean3547) && (a._inv2_d_moy3550 == b._inv2_d_moy3550) && (a._inv2_mean3551 < b._inv2_mean3551)); 
}
    }SW_Sort_TD_0957414_order; 

    int nrow1 = tbl_Project_TD_1710705_output.getNumRow();
    std::vector<SW_Sort_TD_0957414Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv1_w_warehouse_sk3544 = tbl_Project_TD_1710705_output.getInt32(i, 0);
        int32_t _inv1_i_item_sk3545 = tbl_Project_TD_1710705_output.getInt32(i, 1);
        int32_t _inv1_d_moy3546 = tbl_Project_TD_1710705_output.getInt32(i, 2);
        int64_t _inv1_mean3547 = tbl_Project_TD_1710705_output.getInt64(i, 3);
        int32_t _inv2_w_warehouse_sk3548 = tbl_Project_TD_1710705_output.getInt32(i, 4);
        int32_t _inv2_i_item_sk3549 = tbl_Project_TD_1710705_output.getInt32(i, 5);
        int32_t _inv2_d_moy3550 = tbl_Project_TD_1710705_output.getInt32(i, 6);
        int64_t _inv2_mean3551 = tbl_Project_TD_1710705_output.getInt64(i, 7);
        SW_Sort_TD_0957414Row t = {_inv1_w_warehouse_sk3544,_inv1_i_item_sk3545,_inv1_d_moy3546,_inv1_mean3547,_inv2_w_warehouse_sk3548,_inv2_i_item_sk3549,_inv2_d_moy3550,_inv2_mean3551};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0957414_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0957414_output.setInt32(r, 0, it._inv1_w_warehouse_sk3544);
        tbl_Sort_TD_0957414_output.setInt32(r, 1, it._inv1_i_item_sk3545);
        tbl_Sort_TD_0957414_output.setInt32(r, 2, it._inv1_d_moy3546);
        tbl_Sort_TD_0957414_output.setInt64(r, 3, it._inv1_mean3547);
        tbl_Sort_TD_0957414_output.setInt32(r, 4, it._inv2_w_warehouse_sk3548);
        tbl_Sort_TD_0957414_output.setInt32(r, 5, it._inv2_i_item_sk3549);
        tbl_Sort_TD_0957414_output.setInt32(r, 6, it._inv2_d_moy3550);
        tbl_Sort_TD_0957414_output.setInt64(r, 7, it._inv2_mean3551);
        if (r < 10) {
            std::cout << it._inv1_w_warehouse_sk3544 << " " << it._inv1_i_item_sk3545 << " " << it._inv1_d_moy3546 << " " << it._inv1_mean3547 << " " << it._inv2_w_warehouse_sk3548 << " " << it._inv2_i_item_sk3549 << " " << it._inv2_d_moy3550 << " " << it._inv2_mean3551 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0957414_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0957414_output #Row: " << tbl_Sort_TD_0957414_output.getNumRow() << std::endl;
}

