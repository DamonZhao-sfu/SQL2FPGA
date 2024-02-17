#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8354(Table &tbl_SerializeFromObject_TD_945_input, Table &tbl_Filter_TD_8354_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_945_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_945_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_945_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_945_input.getInt32(i, 0);
            tbl_Filter_TD_8354_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_8354_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8354_output #Row: " << tbl_Filter_TD_8354_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8585(Table &tbl_SerializeFromObject_TD_9359_input, Table &tbl_Filter_TD_8585_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(inv_date_sk#657) AND (isnotnull(inv_item_sk#658) AND isnotnull(inv_warehouse_sk#659))))
    // Input: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Output: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9359_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_date_sk657 = tbl_SerializeFromObject_TD_9359_input.getInt32(i, 0);
        int32_t _inv_item_sk658 = tbl_SerializeFromObject_TD_9359_input.getInt32(i, 1);
        int32_t _inv_warehouse_sk659 = tbl_SerializeFromObject_TD_9359_input.getInt32(i, 2);
        if ((_inv_date_sk657!= 0) && ((_inv_item_sk658!= 0) && (_inv_warehouse_sk659!= 0))) {
            int32_t _inv_date_sk657_t = tbl_SerializeFromObject_TD_9359_input.getInt32(i, 0);
            tbl_Filter_TD_8585_output.setInt32(r, 0, _inv_date_sk657_t);
            int32_t _inv_item_sk658_t = tbl_SerializeFromObject_TD_9359_input.getInt32(i, 1);
            tbl_Filter_TD_8585_output.setInt32(r, 1, _inv_item_sk658_t);
            int32_t _inv_warehouse_sk659_t = tbl_SerializeFromObject_TD_9359_input.getInt32(i, 2);
            tbl_Filter_TD_8585_output.setInt32(r, 2, _inv_warehouse_sk659_t);
            int32_t _inv_quantity_on_hand660_t = tbl_SerializeFromObject_TD_9359_input.getInt32(i, 3);
            tbl_Filter_TD_8585_output.setInt32(r, 3, _inv_quantity_on_hand660_t);
            r++;
        }
    }
    tbl_Filter_TD_8585_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8585_output #Row: " << tbl_Filter_TD_8585_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7330(Table &tbl_SerializeFromObject_TD_8328_input, Table &tbl_Filter_TD_7330_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240, i_product_name#249)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240, i_product_name#249)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8328_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_8328_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_8328_input.getInt32(i, 0);
            tbl_Filter_TD_7330_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_8328_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7330_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_t = tbl_SerializeFromObject_TD_8328_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7330_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class238_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_8328_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_7330_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_t = tbl_SerializeFromObject_TD_8328_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_7330_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_product_name249_t);
            r++;
        }
    }
    tbl_Filter_TD_7330_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7330_output #Row: " << tbl_Filter_TD_7330_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7831_key_leftMajor {
    int32_t _inv_date_sk657;
    bool operator==(const SW_JOIN_INNER_TD_7831_key_leftMajor& other) const {
        return ((_inv_date_sk657 == other._inv_date_sk657));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7831_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7831_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_date_sk657));
    }
};
}
struct SW_JOIN_INNER_TD_7831_payload_leftMajor {
    int32_t _inv_date_sk657;
    int32_t _inv_item_sk658;
    int32_t _inv_warehouse_sk659;
    int32_t _inv_quantity_on_hand660;
};
struct SW_JOIN_INNER_TD_7831_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7831_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7831_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7831_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7831_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_7831(Table &tbl_Filter_TD_8585_output, Table &tbl_Filter_TD_8354_output, Table &tbl_JOIN_INNER_TD_7831_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_date_sk#657 = d_date_sk#120))
    // Left Table: ListBuffer(inv_date_sk#657, inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    int left_nrow = tbl_Filter_TD_8585_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8354_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7831_key_leftMajor, SW_JOIN_INNER_TD_7831_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8585_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_date_sk657_k = tbl_Filter_TD_8585_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7831_key_leftMajor keyA{_inv_date_sk657_k};
            int32_t _inv_date_sk657 = tbl_Filter_TD_8585_output.getInt32(i, 0);
            int32_t _inv_item_sk658 = tbl_Filter_TD_8585_output.getInt32(i, 1);
            int32_t _inv_warehouse_sk659 = tbl_Filter_TD_8585_output.getInt32(i, 2);
            int32_t _inv_quantity_on_hand660 = tbl_Filter_TD_8585_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7831_payload_leftMajor payloadA{_inv_date_sk657, _inv_item_sk658, _inv_warehouse_sk659, _inv_quantity_on_hand660};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8354_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8354_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7831_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_date_sk657 = (it->second)._inv_date_sk657;
                int32_t _inv_item_sk658 = (it->second)._inv_item_sk658;
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _d_date_sk120 = tbl_Filter_TD_8354_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7831_output.setInt32(r, 0, _inv_item_sk658);
                tbl_JOIN_INNER_TD_7831_output.setInt32(r, 1, _inv_warehouse_sk659);
                tbl_JOIN_INNER_TD_7831_output.setInt32(r, 2, _inv_quantity_on_hand660);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7831_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7831_key_rightMajor, SW_JOIN_INNER_TD_7831_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8354_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8354_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7831_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_8354_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7831_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8585_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_date_sk657_k = tbl_Filter_TD_8585_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7831_key_rightMajor{_inv_date_sk657_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _inv_date_sk657 = tbl_Filter_TD_8585_output.getInt32(i, 0);
                int32_t _inv_item_sk658 = tbl_Filter_TD_8585_output.getInt32(i, 1);
                int32_t _inv_warehouse_sk659 = tbl_Filter_TD_8585_output.getInt32(i, 2);
                int32_t _inv_quantity_on_hand660 = tbl_Filter_TD_8585_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7831_output.setInt32(r, 0, _inv_item_sk658);
                tbl_JOIN_INNER_TD_7831_output.setInt32(r, 1, _inv_warehouse_sk659);
                tbl_JOIN_INNER_TD_7831_output.setInt32(r, 2, _inv_quantity_on_hand660);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7831_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7831_output #Row: " << tbl_JOIN_INNER_TD_7831_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6278(Table &tbl_SerializeFromObject_TD_7725_input, Table &tbl_Filter_TD_6278_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#495))
    // Input: ListBuffer(w_warehouse_sk#495)
    // Output: ListBuffer(w_warehouse_sk#495)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7725_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_SerializeFromObject_TD_7725_input.getInt32(i, 0);
        if (_w_warehouse_sk495!= 0) {
            int32_t _w_warehouse_sk495_t = tbl_SerializeFromObject_TD_7725_input.getInt32(i, 0);
            tbl_Filter_TD_6278_output.setInt32(r, 0, _w_warehouse_sk495_t);
            r++;
        }
    }
    tbl_Filter_TD_6278_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6278_output #Row: " << tbl_Filter_TD_6278_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6815_key_leftMajor {
    int32_t _inv_item_sk658;
    bool operator==(const SW_JOIN_INNER_TD_6815_key_leftMajor& other) const {
        return ((_inv_item_sk658 == other._inv_item_sk658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6815_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6815_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_item_sk658));
    }
};
}
struct SW_JOIN_INNER_TD_6815_payload_leftMajor {
    int32_t _inv_item_sk658;
    int32_t _inv_warehouse_sk659;
    int32_t _inv_quantity_on_hand660;
};
struct SW_JOIN_INNER_TD_6815_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_6815_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6815_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6815_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_6815_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_class238;
    std::string _i_category240;
    std::string _i_product_name249;
};
void SW_JOIN_INNER_TD_6815(Table &tbl_JOIN_INNER_TD_7831_output, Table &tbl_Filter_TD_7330_output, Table &tbl_JOIN_INNER_TD_6815_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_item_sk#658 = i_item_sk#228))
    // Left Table: ListBuffer(inv_item_sk#658, inv_warehouse_sk#659, inv_quantity_on_hand#660)
    // Right Table: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240, i_product_name#249)
    // Output Table: ListBuffer(inv_warehouse_sk#659, inv_quantity_on_hand#660, i_brand#236, i_class#238, i_category#240, i_product_name#249)
    int left_nrow = tbl_JOIN_INNER_TD_7831_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7330_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6815_key_leftMajor, SW_JOIN_INNER_TD_6815_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7831_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_item_sk658_k = tbl_JOIN_INNER_TD_7831_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6815_key_leftMajor keyA{_inv_item_sk658_k};
            int32_t _inv_item_sk658 = tbl_JOIN_INNER_TD_7831_output.getInt32(i, 0);
            int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_7831_output.getInt32(i, 1);
            int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_7831_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6815_payload_leftMajor payloadA{_inv_item_sk658, _inv_warehouse_sk659, _inv_quantity_on_hand660};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7330_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_7330_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6815_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_item_sk658 = (it->second)._inv_item_sk658;
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                int32_t _i_item_sk228 = tbl_Filter_TD_7330_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_7330_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_7330_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_7330_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_7330_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_6815_output.setInt32(r, 0, _inv_warehouse_sk659);
                tbl_JOIN_INNER_TD_6815_output.setInt32(r, 1, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_6815_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                tbl_JOIN_INNER_TD_6815_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_6815_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
                tbl_JOIN_INNER_TD_6815_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6815_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6815_key_rightMajor, SW_JOIN_INNER_TD_6815_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7330_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_7330_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6815_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_7330_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_7330_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_7330_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_7330_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_7330_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_6815_payload_rightMajor payloadA{_i_item_sk228, _i_brand236, _i_class238, _i_category240, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7831_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_item_sk658_k = tbl_JOIN_INNER_TD_7831_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6815_key_rightMajor{_inv_item_sk658_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                int32_t _inv_item_sk658 = tbl_JOIN_INNER_TD_7831_output.getInt32(i, 0);
                int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_7831_output.getInt32(i, 1);
                int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_7831_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6815_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                tbl_JOIN_INNER_TD_6815_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_6815_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
                tbl_JOIN_INNER_TD_6815_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_product_name249_n);
                tbl_JOIN_INNER_TD_6815_output.setInt32(r, 0, _inv_warehouse_sk659);
                tbl_JOIN_INNER_TD_6815_output.setInt32(r, 1, _inv_quantity_on_hand660);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6815_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6815_output #Row: " << tbl_JOIN_INNER_TD_6815_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5589_key_leftMajor {
    int32_t _inv_warehouse_sk659;
    bool operator==(const SW_JOIN_INNER_TD_5589_key_leftMajor& other) const {
        return ((_inv_warehouse_sk659 == other._inv_warehouse_sk659));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5589_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5589_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._inv_warehouse_sk659));
    }
};
}
struct SW_JOIN_INNER_TD_5589_payload_leftMajor {
    int32_t _inv_warehouse_sk659;
    int32_t _inv_quantity_on_hand660;
    std::string _i_brand236;
    std::string _i_class238;
    std::string _i_category240;
    std::string _i_product_name249;
};
struct SW_JOIN_INNER_TD_5589_key_rightMajor {
    int32_t _w_warehouse_sk495;
    bool operator==(const SW_JOIN_INNER_TD_5589_key_rightMajor& other) const {
        return ((_w_warehouse_sk495 == other._w_warehouse_sk495));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5589_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5589_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk495));
    }
};
}
struct SW_JOIN_INNER_TD_5589_payload_rightMajor {
    int32_t _w_warehouse_sk495;
};
void SW_JOIN_INNER_TD_5589(Table &tbl_JOIN_INNER_TD_6815_output, Table &tbl_Filter_TD_6278_output, Table &tbl_JOIN_INNER_TD_5589_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((inv_warehouse_sk#659 = w_warehouse_sk#495))
    // Left Table: ListBuffer(inv_warehouse_sk#659, inv_quantity_on_hand#660, i_brand#236, i_class#238, i_category#240, i_product_name#249)
    // Right Table: ListBuffer(w_warehouse_sk#495)
    // Output Table: ListBuffer(inv_quantity_on_hand#660, i_product_name#249, i_brand#236, i_class#238, i_category#240)
    int left_nrow = tbl_JOIN_INNER_TD_6815_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6278_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5589_key_leftMajor, SW_JOIN_INNER_TD_5589_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6815_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_6815_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5589_key_leftMajor keyA{_inv_warehouse_sk659_k};
            int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_6815_output.getInt32(i, 0);
            int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_6815_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_6815_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_6815_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_6815_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_JOIN_INNER_TD_6815_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_5589_payload_leftMajor payloadA{_inv_warehouse_sk659, _inv_quantity_on_hand660, _i_brand236, _i_class238, _i_category240, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6278_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_6278_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5589_key_leftMajor{_w_warehouse_sk495_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _inv_warehouse_sk659 = (it->second)._inv_warehouse_sk659;
                int32_t _inv_quantity_on_hand660 = (it->second)._inv_quantity_on_hand660;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                int32_t _w_warehouse_sk495 = tbl_Filter_TD_6278_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5589_output.setInt32(r, 0, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_5589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                tbl_JOIN_INNER_TD_5589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_5589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
                tbl_JOIN_INNER_TD_5589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5589_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5589_key_rightMajor, SW_JOIN_INNER_TD_5589_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6278_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_6278_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5589_key_rightMajor keyA{_w_warehouse_sk495_k};
            int32_t _w_warehouse_sk495 = tbl_Filter_TD_6278_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5589_payload_rightMajor payloadA{_w_warehouse_sk495};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6815_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _inv_warehouse_sk659_k = tbl_JOIN_INNER_TD_6815_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5589_key_rightMajor{_inv_warehouse_sk659_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                int32_t _inv_warehouse_sk659 = tbl_JOIN_INNER_TD_6815_output.getInt32(i, 0);
                int32_t _inv_quantity_on_hand660 = tbl_JOIN_INNER_TD_6815_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_6815_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_6815_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_6815_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_JOIN_INNER_TD_6815_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_5589_output.setInt32(r, 0, _inv_quantity_on_hand660);
                tbl_JOIN_INNER_TD_5589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                tbl_JOIN_INNER_TD_5589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_5589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
                tbl_JOIN_INNER_TD_5589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5589_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5589_output #Row: " << tbl_JOIN_INNER_TD_5589_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4167(Table &tbl_JOIN_INNER_TD_5589_output, Table &tbl_Expand_TD_4167_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(inv_quantity_on_hand#660, i_product_name#249, i_brand#236, i_class#238, i_category#240)
    // Output: ListBuffer(inv_quantity_on_hand#660, i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, spark_grouping_id#15220L)
    std::cout << "tbl_Expand_TD_4167_output #Row: " << tbl_Expand_TD_4167_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3617_key {
    std::string _i_product_name15221;
    std::string _i_brand15222;
    std::string _i_class15223;
    std::string _i_category15224;
    int64_t _spark_grouping_id15220L;
    bool operator==(const SW_Aggregate_TD_3617_key& other) const { return (_i_product_name15221 == other._i_product_name15221) && (_i_brand15222 == other._i_brand15222) && (_i_class15223 == other._i_class15223) && (_i_category15224 == other._i_category15224) && (_spark_grouping_id15220L == other._spark_grouping_id15220L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3617_key> {
    std::size_t operator() (const SW_Aggregate_TD_3617_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_product_name15221)) + (hash<string>()(k._i_brand15222)) + (hash<string>()(k._i_class15223)) + (hash<string>()(k._i_category15224)) + (hash<int64_t>()(k._spark_grouping_id15220L));
    }
};
}
struct SW_Aggregate_TD_3617_payload {
    int64_t _qoh15214_avg_0;
};
void SW_Aggregate_TD_3617(Table &tbl_Expand_TD_4167_output, Table &tbl_Aggregate_TD_3617_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, spark_grouping_id#15220L, avg(inv_quantity_on_hand#660) AS qoh#15214)
    // Input: ListBuffer(inv_quantity_on_hand#660, i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, spark_grouping_id#15220L)
    // Output: ListBuffer(i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, qoh#15214)
    std::unordered_map<SW_Aggregate_TD_3617_key, SW_Aggregate_TD_3617_payload> ht1;
    int nrow1 = tbl_Expand_TD_4167_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _inv_quantity_on_hand660 = tbl_Expand_TD_4167_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name15221 = tbl_Expand_TD_4167_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand15222 = tbl_Expand_TD_4167_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class15223 = tbl_Expand_TD_4167_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_category15224 = tbl_Expand_TD_4167_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int64_t _spark_grouping_id15220L = tbl_Expand_TD_4167_output.getInt64(i, 5);
        SW_Aggregate_TD_3617_key k{std::string(_i_product_name15221.data()), std::string(_i_brand15222.data()), std::string(_i_class15223.data()), std::string(_i_category15224.data()), _spark_grouping_id15220L};
        int64_t _qoh15214_avg_0 = _inv_quantity_on_hand660;
        SW_Aggregate_TD_3617_payload p{_qoh15214_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            // Unsupported payload Type
            p._qoh15214_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name15221{};
        memcpy(_i_product_name15221.data(), ((it.first)._i_product_name15221).data(), ((it.first)._i_product_name15221).length());
        tbl_Aggregate_TD_3617_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_product_name15221);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand15222{};
        memcpy(_i_brand15222.data(), ((it.first)._i_brand15222).data(), ((it.first)._i_brand15222).length());
        tbl_Aggregate_TD_3617_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand15222);
        std::array<char, TPCDS_READ_MAX + 1> _i_class15223{};
        memcpy(_i_class15223.data(), ((it.first)._i_class15223).data(), ((it.first)._i_class15223).length());
        tbl_Aggregate_TD_3617_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class15223);
        std::array<char, TPCDS_READ_MAX + 1> _i_category15224{};
        memcpy(_i_category15224.data(), ((it.first)._i_category15224).data(), ((it.first)._i_category15224).length());
        tbl_Aggregate_TD_3617_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category15224);
        // _spark_grouping_id15220L not required in the output table
        int64_t _qoh15214 = (it.second)._qoh15214_avg_0 / nrow1;
        // Unsupported payload type: DoubleType
        ++r;
    }
    tbl_Aggregate_TD_3617_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3617_output #Row: " << tbl_Aggregate_TD_3617_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2763(Table &tbl_Aggregate_TD_3617_output, Table &tbl_Sort_TD_2763_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(qoh#15214 ASC NULLS FIRST, i_product_name#15221 ASC NULLS FIRST, i_brand#15222 ASC NULLS FIRST, i_class#15223 ASC NULLS FIRST, i_category#15224 ASC NULLS FIRST)
    // Input: ListBuffer(i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, qoh#15214)
    // Output: ListBuffer(i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, qoh#15214)
    struct SW_Sort_TD_2763Row {
        std::string _i_product_name15221;
        std::string _i_brand15222;
        std::string _i_class15223;
        std::string _i_category15224;
        int32_t _qoh15214;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2763Row& a, const SW_Sort_TD_2763Row& b) const { return 
 (a._qoh15214 < b._qoh15214) || 
 ((a._qoh15214 == b._qoh15214) && (a._i_product_name15221 < b._i_product_name15221)) || 
 ((a._qoh15214 == b._qoh15214) && (a._i_product_name15221 == b._i_product_name15221) && (a._i_brand15222 < b._i_brand15222)) || 
 ((a._qoh15214 == b._qoh15214) && (a._i_product_name15221 == b._i_product_name15221) && (a._i_brand15222 == b._i_brand15222) && (a._i_class15223 < b._i_class15223)) || 
 ((a._qoh15214 == b._qoh15214) && (a._i_product_name15221 == b._i_product_name15221) && (a._i_brand15222 == b._i_brand15222) && (a._i_class15223 == b._i_class15223) && (a._i_category15224 < b._i_category15224)); 
}
    }SW_Sort_TD_2763_order; 

    int nrow1 = tbl_Aggregate_TD_3617_output.getNumRow();
    std::vector<SW_Sort_TD_2763Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name15221 = tbl_Aggregate_TD_3617_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand15222 = tbl_Aggregate_TD_3617_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_class15223 = tbl_Aggregate_TD_3617_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_category15224 = tbl_Aggregate_TD_3617_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _qoh15214 = tbl_Aggregate_TD_3617_output.getInt32(i, 4);
        SW_Sort_TD_2763Row t = {std::string(_i_product_name15221.data()),std::string(_i_brand15222.data()),std::string(_i_class15223.data()),std::string(_i_category15224.data()),_qoh15214};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2763_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name15221{};
        memcpy(_i_product_name15221.data(), (it._i_product_name15221).data(), (it._i_product_name15221).length());
        tbl_Sort_TD_2763_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_product_name15221);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand15222{};
        memcpy(_i_brand15222.data(), (it._i_brand15222).data(), (it._i_brand15222).length());
        tbl_Sort_TD_2763_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand15222);
        std::array<char, TPCDS_READ_MAX + 1> _i_class15223{};
        memcpy(_i_class15223.data(), (it._i_class15223).data(), (it._i_class15223).length());
        tbl_Sort_TD_2763_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_class15223);
        std::array<char, TPCDS_READ_MAX + 1> _i_category15224{};
        memcpy(_i_category15224.data(), (it._i_category15224).data(), (it._i_category15224).length());
        tbl_Sort_TD_2763_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _i_category15224);
        tbl_Sort_TD_2763_output.setInt32(r, 4, it._qoh15214);
        ++r;
    }
    tbl_Sort_TD_2763_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2763_output #Row: " << tbl_Sort_TD_2763_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_187(Table &tbl_Sort_TD_2763_output, Table &tbl_LocalLimit_TD_187_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, qoh#15214)
    // Output: ListBuffer(i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, qoh#15214)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name15221_n = tbl_Sort_TD_2763_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_187_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_product_name15221_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand15222_n = tbl_Sort_TD_2763_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_187_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand15222_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class15223_n = tbl_Sort_TD_2763_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_187_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class15223_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_category15224_n = tbl_Sort_TD_2763_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_187_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category15224_n);
        // Unsupported Union key type
        r++;
    }
    tbl_LocalLimit_TD_187_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_187_output #Row: " << tbl_LocalLimit_TD_187_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0646(Table &tbl_LocalLimit_TD_187_output, Table &tbl_GlobalLimit_TD_0646_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, qoh#15214)
    // Output: ListBuffer(i_product_name#15221, i_brand#15222, i_class#15223, i_category#15224, qoh#15214)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name15221_n = tbl_LocalLimit_TD_187_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0646_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_product_name15221_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand15222_n = tbl_LocalLimit_TD_187_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0646_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand15222_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class15223_n = tbl_LocalLimit_TD_187_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0646_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class15223_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_category15224_n = tbl_LocalLimit_TD_187_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0646_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category15224_n);
        // Unsupported Union key type
        r++;
    }
    tbl_GlobalLimit_TD_0646_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0646_output #Row: " << tbl_GlobalLimit_TD_0646_output.getNumRow() << std::endl;
}

