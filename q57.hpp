#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_14577(Table &tbl_SerializeFromObject_TD_15424_input, Table &tbl_Filter_TD_14577_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND (isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_call_center_sk#1115))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15424_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_15424_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_15424_input.getInt32(i, 0);
        int32_t _cs_call_center_sk1115 = tbl_SerializeFromObject_TD_15424_input.getInt32(i, 1);
        if ((_cs_item_sk1119!= 0) && ((_cs_sold_date_sk1104!= 0) && (_cs_call_center_sk1115!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_15424_input.getInt32(i, 0);
            tbl_Filter_TD_14577_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_call_center_sk1115_t = tbl_SerializeFromObject_TD_15424_input.getInt32(i, 1);
            tbl_Filter_TD_14577_output.setInt32(r, 1, _cs_call_center_sk1115_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_15424_input.getInt32(i, 2);
            tbl_Filter_TD_14577_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_15424_input.getInt32(i, 3);
            tbl_Filter_TD_14577_output.setInt32(r, 3, _cs_sales_price1125_t);
            r++;
        }
    }
    tbl_Filter_TD_14577_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14577_output #Row: " << tbl_Filter_TD_14577_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14392(Table &tbl_SerializeFromObject_TD_1528_input, Table &tbl_Filter_TD_14392_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND (isnotnull(i_category#240) AND isnotnull(i_brand#236))))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1528_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_1528_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_1528_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_1528_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk228!= 0) && (（std::string(_isnotnulli_category240.data()) != "NULL") && （std::string(_isnotnulli_brand236.data()) != "NULL"))) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_1528_input.getInt32(i, 0);
            tbl_Filter_TD_14392_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_1528_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_14392_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_1528_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_14392_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_14392_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14392_output #Row: " << tbl_Filter_TD_14392_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13885(Table &tbl_SerializeFromObject_TD_14766_input, Table &tbl_Filter_TD_13885_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#126 = 1999) OR ((d_year#126 = 1998) AND (d_moy#128 = 12))) OR ((d_year#126 = 2000) AND (d_moy#128 = 1))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14766_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_14766_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_14766_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_14766_input.getInt32(i, 0);
        if ((((_d_year126 == 1999) || ((_d_year126 == 1998) && (_d_moy128 == 12))) || ((_d_year126 == 2000) && (_d_moy128 == 1))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_14766_input.getInt32(i, 0);
            tbl_Filter_TD_13885_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_14766_input.getInt32(i, 1);
            tbl_Filter_TD_13885_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_14766_input.getInt32(i, 2);
            tbl_Filter_TD_13885_output.setInt32(r, 2, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_13885_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13885_output #Row: " << tbl_Filter_TD_13885_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13748_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_13748_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13748_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13748_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_13748_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_13748_key_rightMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_13748_key_rightMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13748_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13748_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_13748_payload_rightMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_item_sk1119;
    int32_t _cs_sales_price1125;
};
void SW_JOIN_INNER_TD_13748(Table &tbl_Filter_TD_14392_output, Table &tbl_Filter_TD_14577_output, Table &tbl_JOIN_INNER_TD_13748_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Right Table: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_sales_price#1125)
    int left_nrow = tbl_Filter_TD_14392_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14577_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13748_key_leftMajor, SW_JOIN_INNER_TD_13748_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14392_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14392_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13748_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14392_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14392_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14392_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_13748_payload_leftMajor payloadA{_i_item_sk228, _i_brand236, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14577_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_14577_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13748_key_leftMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_14577_output.getInt32(i, 0);
                int32_t _cs_call_center_sk1115 = tbl_Filter_TD_14577_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_14577_output.getInt32(i, 2);
                int32_t _cs_sales_price1125 = tbl_Filter_TD_14577_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13748_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13748_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_13748_output.setInt32(r, 2, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_13748_output.setInt32(r, 3, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_13748_output.setInt32(r, 4, _cs_sales_price1125);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13748_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13748_key_rightMajor, SW_JOIN_INNER_TD_13748_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14577_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_14577_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13748_key_rightMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_14577_output.getInt32(i, 0);
            int32_t _cs_call_center_sk1115 = tbl_Filter_TD_14577_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_14577_output.getInt32(i, 2);
            int32_t _cs_sales_price1125 = tbl_Filter_TD_14577_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13748_payload_rightMajor payloadA{_cs_sold_date_sk1104, _cs_call_center_sk1115, _cs_item_sk1119, _cs_sales_price1125};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14392_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14392_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13748_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_call_center_sk1115 = (it->second)._cs_call_center_sk1115;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _i_item_sk228 = tbl_Filter_TD_14392_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14392_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14392_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_13748_output.setInt32(r, 2, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_13748_output.setInt32(r, 3, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_13748_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_13748_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13748_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13748_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13748_output #Row: " << tbl_JOIN_INNER_TD_13748_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12664(Table &tbl_SerializeFromObject_TD_13361_input, Table &tbl_Filter_TD_12664_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_item_sk#9397) AND isnotnull(cs_sold_date_sk#9382)) AND isnotnull(cs_call_center_sk#9393)))
    // Input: ListBuffer(cs_sold_date_sk#9382, cs_call_center_sk#9393, cs_item_sk#9397, cs_sales_price#9403)
    // Output: ListBuffer(cs_sold_date_sk#9382, cs_call_center_sk#9393, cs_item_sk#9397, cs_sales_price#9403)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13361_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk9397 = tbl_SerializeFromObject_TD_13361_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk9382 = tbl_SerializeFromObject_TD_13361_input.getInt32(i, 0);
        int32_t _cs_call_center_sk9393 = tbl_SerializeFromObject_TD_13361_input.getInt32(i, 1);
        if (((_cs_item_sk9397!= 0) && (_cs_sold_date_sk9382!= 0)) && (_cs_call_center_sk9393!= 0)) {
            int32_t _cs_sold_date_sk9382_t = tbl_SerializeFromObject_TD_13361_input.getInt32(i, 0);
            tbl_Filter_TD_12664_output.setInt32(r, 0, _cs_sold_date_sk9382_t);
            int32_t _cs_call_center_sk9393_t = tbl_SerializeFromObject_TD_13361_input.getInt32(i, 1);
            tbl_Filter_TD_12664_output.setInt32(r, 1, _cs_call_center_sk9393_t);
            int32_t _cs_item_sk9397_t = tbl_SerializeFromObject_TD_13361_input.getInt32(i, 2);
            tbl_Filter_TD_12664_output.setInt32(r, 2, _cs_item_sk9397_t);
            int32_t _cs_sales_price9403_t = tbl_SerializeFromObject_TD_13361_input.getInt32(i, 3);
            tbl_Filter_TD_12664_output.setInt32(r, 3, _cs_sales_price9403_t);
            r++;
        }
    }
    tbl_Filter_TD_12664_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12664_output #Row: " << tbl_Filter_TD_12664_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12243(Table &tbl_SerializeFromObject_TD_13326_input, Table &tbl_Filter_TD_12243_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#9360) AND (isnotnull(i_category#9372) AND isnotnull(i_brand#9368))))
    // Input: ListBuffer(i_item_sk#9360, i_brand#9368, i_category#9372)
    // Output: ListBuffer(i_item_sk#9360, i_brand#9368, i_category#9372)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13326_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk9360 = tbl_SerializeFromObject_TD_13326_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9372 = tbl_SerializeFromObject_TD_13326_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9368 = tbl_SerializeFromObject_TD_13326_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk9360!= 0) && (（std::string(_isnotnulli_category9372.data()) != "NULL") && （std::string(_isnotnulli_brand9368.data()) != "NULL"))) {
            int32_t _i_item_sk9360_t = tbl_SerializeFromObject_TD_13326_input.getInt32(i, 0);
            tbl_Filter_TD_12243_output.setInt32(r, 0, _i_item_sk9360_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_t = tbl_SerializeFromObject_TD_13326_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12243_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand9368_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category9372_t = tbl_SerializeFromObject_TD_13326_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12243_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category9372_t);
            r++;
        }
    }
    tbl_Filter_TD_12243_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12243_output #Row: " << tbl_Filter_TD_12243_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12694(Table &tbl_SerializeFromObject_TD_13190_input, Table &tbl_Filter_TD_12694_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#903) AND isnotnull(cc_name#909)))
    // Input: ListBuffer(cc_call_center_sk#903, cc_name#909)
    // Output: ListBuffer(cc_call_center_sk#903, cc_name#909)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13190_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk903 = tbl_SerializeFromObject_TD_13190_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_SerializeFromObject_TD_13190_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cc_call_center_sk903!= 0) && （std::string(_isnotnullcc_name909.data()) != "NULL")) {
            int32_t _cc_call_center_sk903_t = tbl_SerializeFromObject_TD_13190_input.getInt32(i, 0);
            tbl_Filter_TD_12694_output.setInt32(r, 0, _cc_call_center_sk903_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_SerializeFromObject_TD_13190_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name909_t);
            r++;
        }
    }
    tbl_Filter_TD_12694_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12694_output #Row: " << tbl_Filter_TD_12694_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12598_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_12598_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12598_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12598_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_12598_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_sales_price1125;
};
struct SW_JOIN_INNER_TD_12598_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_12598_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12598_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12598_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_12598_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_12598(Table &tbl_JOIN_INNER_TD_13748_output, Table &tbl_Filter_TD_13885_output, Table &tbl_JOIN_INNER_TD_12598_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(i_brand#236, i_category#240, cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_sales_price#1125)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_call_center_sk#1115, cs_sales_price#1125, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_13748_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13885_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12598_key_leftMajor, SW_JOIN_INNER_TD_12598_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13748_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_13748_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12598_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13748_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13748_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13748_output.getInt32(i, 2);
            int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_13748_output.getInt32(i, 3);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_13748_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_12598_payload_leftMajor payloadA{_i_brand236, _i_category240, _cs_sold_date_sk1104, _cs_call_center_sk1115, _cs_sales_price1125};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13885_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13885_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12598_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_call_center_sk1115 = (it->second)._cs_call_center_sk1115;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _d_date_sk120 = tbl_Filter_TD_13885_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_13885_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Filter_TD_13885_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_12598_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12598_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12598_output.setInt32(r, 2, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_12598_output.setInt32(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_12598_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12598_output.setInt32(r, 5, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12598_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12598_key_rightMajor, SW_JOIN_INNER_TD_12598_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13885_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13885_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12598_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_13885_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_13885_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Filter_TD_13885_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12598_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13748_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_13748_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12598_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13748_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13748_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13748_output.getInt32(i, 2);
                int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_13748_output.getInt32(i, 3);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_13748_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_12598_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12598_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_12598_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12598_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12598_output.setInt32(r, 2, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_12598_output.setInt32(r, 3, _cs_sales_price1125);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12598_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12598_output #Row: " << tbl_JOIN_INNER_TD_12598_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11165(Table &tbl_SerializeFromObject_TD_12767_input, Table &tbl_Filter_TD_11165_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_item_sk#9517) AND isnotnull(cs_sold_date_sk#9502)) AND isnotnull(cs_call_center_sk#9513)))
    // Input: ListBuffer(cs_sold_date_sk#9502, cs_call_center_sk#9513, cs_item_sk#9517, cs_sales_price#9523)
    // Output: ListBuffer(cs_sold_date_sk#9502, cs_call_center_sk#9513, cs_item_sk#9517, cs_sales_price#9523)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12767_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk9517 = tbl_SerializeFromObject_TD_12767_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk9502 = tbl_SerializeFromObject_TD_12767_input.getInt32(i, 0);
        int32_t _cs_call_center_sk9513 = tbl_SerializeFromObject_TD_12767_input.getInt32(i, 1);
        if (((_cs_item_sk9517!= 0) && (_cs_sold_date_sk9502!= 0)) && (_cs_call_center_sk9513!= 0)) {
            int32_t _cs_sold_date_sk9502_t = tbl_SerializeFromObject_TD_12767_input.getInt32(i, 0);
            tbl_Filter_TD_11165_output.setInt32(r, 0, _cs_sold_date_sk9502_t);
            int32_t _cs_call_center_sk9513_t = tbl_SerializeFromObject_TD_12767_input.getInt32(i, 1);
            tbl_Filter_TD_11165_output.setInt32(r, 1, _cs_call_center_sk9513_t);
            int32_t _cs_item_sk9517_t = tbl_SerializeFromObject_TD_12767_input.getInt32(i, 2);
            tbl_Filter_TD_11165_output.setInt32(r, 2, _cs_item_sk9517_t);
            int32_t _cs_sales_price9523_t = tbl_SerializeFromObject_TD_12767_input.getInt32(i, 3);
            tbl_Filter_TD_11165_output.setInt32(r, 3, _cs_sales_price9523_t);
            r++;
        }
    }
    tbl_Filter_TD_11165_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11165_output #Row: " << tbl_Filter_TD_11165_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11850(Table &tbl_SerializeFromObject_TD_12997_input, Table &tbl_Filter_TD_11850_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#9480) AND (isnotnull(i_category#9492) AND isnotnull(i_brand#9488))))
    // Input: ListBuffer(i_item_sk#9480, i_brand#9488, i_category#9492)
    // Output: ListBuffer(i_item_sk#9480, i_brand#9488, i_category#9492)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12997_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk9480 = tbl_SerializeFromObject_TD_12997_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9492 = tbl_SerializeFromObject_TD_12997_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9488 = tbl_SerializeFromObject_TD_12997_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk9480!= 0) && (（std::string(_isnotnulli_category9492.data()) != "NULL") && （std::string(_isnotnulli_brand9488.data()) != "NULL"))) {
            int32_t _i_item_sk9480_t = tbl_SerializeFromObject_TD_12997_input.getInt32(i, 0);
            tbl_Filter_TD_11850_output.setInt32(r, 0, _i_item_sk9480_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_t = tbl_SerializeFromObject_TD_12997_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11850_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand9488_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category9492_t = tbl_SerializeFromObject_TD_12997_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_11850_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category9492_t);
            r++;
        }
    }
    tbl_Filter_TD_11850_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11850_output #Row: " << tbl_Filter_TD_11850_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11655(Table &tbl_SerializeFromObject_TD_12636_input, Table &tbl_Filter_TD_11655_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#9422 = 1999) OR ((d_year#9422 = 1998) AND (d_moy#9424 = 12))) OR ((d_year#9422 = 2000) AND (d_moy#9424 = 1))) AND isnotnull(d_date_sk#9416)))
    // Input: ListBuffer(d_date_sk#9416, d_year#9422, d_moy#9424)
    // Output: ListBuffer(d_date_sk#9416, d_year#9422, d_moy#9424)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12636_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year9422 = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 1);
        int32_t _d_moy9424 = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 2);
        int32_t _d_date_sk9416 = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 0);
        if ((((_d_year9422 == 1999) || ((_d_year9422 == 1998) && (_d_moy9424 == 12))) || ((_d_year9422 == 2000) && (_d_moy9424 == 1))) && (_d_date_sk9416!= 0)) {
            int32_t _d_date_sk9416_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 0);
            tbl_Filter_TD_11655_output.setInt32(r, 0, _d_date_sk9416_t);
            int32_t _d_year9422_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 1);
            tbl_Filter_TD_11655_output.setInt32(r, 1, _d_year9422_t);
            int32_t _d_moy9424_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 2);
            tbl_Filter_TD_11655_output.setInt32(r, 2, _d_moy9424_t);
            r++;
        }
    }
    tbl_Filter_TD_11655_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11655_output #Row: " << tbl_Filter_TD_11655_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11291_key_leftMajor {
    int32_t _i_item_sk9360;
    bool operator==(const SW_JOIN_INNER_TD_11291_key_leftMajor& other) const {
        return ((_i_item_sk9360 == other._i_item_sk9360));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11291_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11291_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk9360));
    }
};
}
struct SW_JOIN_INNER_TD_11291_payload_leftMajor {
    int32_t _i_item_sk9360;
    std::string _i_brand9368;
    std::string _i_category9372;
};
struct SW_JOIN_INNER_TD_11291_key_rightMajor {
    int32_t _cs_item_sk9397;
    bool operator==(const SW_JOIN_INNER_TD_11291_key_rightMajor& other) const {
        return ((_cs_item_sk9397 == other._cs_item_sk9397));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11291_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11291_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk9397));
    }
};
}
struct SW_JOIN_INNER_TD_11291_payload_rightMajor {
    int32_t _cs_sold_date_sk9382;
    int32_t _cs_call_center_sk9393;
    int32_t _cs_item_sk9397;
    int32_t _cs_sales_price9403;
};
void SW_JOIN_INNER_TD_11291(Table &tbl_Filter_TD_12243_output, Table &tbl_Filter_TD_12664_output, Table &tbl_JOIN_INNER_TD_11291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#9397 = i_item_sk#9360))
    // Left Table: ListBuffer(i_item_sk#9360, i_brand#9368, i_category#9372)
    // Right Table: ListBuffer(cs_sold_date_sk#9382, cs_call_center_sk#9393, cs_item_sk#9397, cs_sales_price#9403)
    // Output Table: ListBuffer(i_brand#9368, i_category#9372, cs_sold_date_sk#9382, cs_call_center_sk#9393, cs_sales_price#9403)
    int left_nrow = tbl_Filter_TD_12243_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12664_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11291_key_leftMajor, SW_JOIN_INNER_TD_11291_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12243_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk9360_k = tbl_Filter_TD_12243_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11291_key_leftMajor keyA{_i_item_sk9360_k};
            int32_t _i_item_sk9360 = tbl_Filter_TD_12243_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n = tbl_Filter_TD_12243_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand9368 = std::string(_i_brand9368_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n = tbl_Filter_TD_12243_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category9372 = std::string(_i_category9372_n.data());
            SW_JOIN_INNER_TD_11291_payload_leftMajor payloadA{_i_item_sk9360, _i_brand9368, _i_category9372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12664_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk9397_k = tbl_Filter_TD_12664_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11291_key_leftMajor{_cs_item_sk9397_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk9360 = (it->second)._i_item_sk9360;
                std::string _i_brand9368 = (it->second)._i_brand9368;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n{};
                memcpy(_i_brand9368_n.data(), (_i_brand9368).data(), (_i_brand9368).length());
                std::string _i_category9372 = (it->second)._i_category9372;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n{};
                memcpy(_i_category9372_n.data(), (_i_category9372).data(), (_i_category9372).length());
                int32_t _cs_sold_date_sk9382 = tbl_Filter_TD_12664_output.getInt32(i, 0);
                int32_t _cs_call_center_sk9393 = tbl_Filter_TD_12664_output.getInt32(i, 1);
                int32_t _cs_item_sk9397 = tbl_Filter_TD_12664_output.getInt32(i, 2);
                int32_t _cs_sales_price9403 = tbl_Filter_TD_12664_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9368_n);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9372_n);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 2, _cs_sold_date_sk9382);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 3, _cs_call_center_sk9393);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 4, _cs_sales_price9403);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11291_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11291_key_rightMajor, SW_JOIN_INNER_TD_11291_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12664_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk9397_k = tbl_Filter_TD_12664_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11291_key_rightMajor keyA{_cs_item_sk9397_k};
            int32_t _cs_sold_date_sk9382 = tbl_Filter_TD_12664_output.getInt32(i, 0);
            int32_t _cs_call_center_sk9393 = tbl_Filter_TD_12664_output.getInt32(i, 1);
            int32_t _cs_item_sk9397 = tbl_Filter_TD_12664_output.getInt32(i, 2);
            int32_t _cs_sales_price9403 = tbl_Filter_TD_12664_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11291_payload_rightMajor payloadA{_cs_sold_date_sk9382, _cs_call_center_sk9393, _cs_item_sk9397, _cs_sales_price9403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12243_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk9360_k = tbl_Filter_TD_12243_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11291_key_rightMajor{_i_item_sk9360_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk9382 = (it->second)._cs_sold_date_sk9382;
                int32_t _cs_call_center_sk9393 = (it->second)._cs_call_center_sk9393;
                int32_t _cs_item_sk9397 = (it->second)._cs_item_sk9397;
                int32_t _cs_sales_price9403 = (it->second)._cs_sales_price9403;
                int32_t _i_item_sk9360 = tbl_Filter_TD_12243_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n = tbl_Filter_TD_12243_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand9368 = std::string(_i_brand9368_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n = tbl_Filter_TD_12243_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category9372 = std::string(_i_category9372_n.data());
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 2, _cs_sold_date_sk9382);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 3, _cs_call_center_sk9393);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 4, _cs_sales_price9403);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9368_n);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9372_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11291_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11291_output #Row: " << tbl_JOIN_INNER_TD_11291_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11869_key_leftMajor {
    int32_t _cs_call_center_sk1115;
    bool operator==(const SW_JOIN_INNER_TD_11869_key_leftMajor& other) const {
        return ((_cs_call_center_sk1115 == other._cs_call_center_sk1115));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11869_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11869_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk1115));
    }
};
}
struct SW_JOIN_INNER_TD_11869_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_sales_price1125;
    int32_t _d_year126;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_11869_key_rightMajor {
    int32_t _cc_call_center_sk903;
    bool operator==(const SW_JOIN_INNER_TD_11869_key_rightMajor& other) const {
        return ((_cc_call_center_sk903 == other._cc_call_center_sk903));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11869_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11869_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk903));
    }
};
}
struct SW_JOIN_INNER_TD_11869_payload_rightMajor {
    int32_t _cc_call_center_sk903;
    std::string _cc_name909;
};
void SW_JOIN_INNER_TD_11869(Table &tbl_JOIN_INNER_TD_12598_output, Table &tbl_Filter_TD_12694_output, Table &tbl_JOIN_INNER_TD_11869_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#903 = cs_call_center_sk#1115))
    // Left Table: ListBuffer(i_brand#236, i_category#240, cs_call_center_sk#1115, cs_sales_price#1125, d_year#126, d_moy#128)
    // Right Table: ListBuffer(cc_call_center_sk#903, cc_name#909)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_sales_price#1125, d_year#126, d_moy#128, cc_name#909)
    int left_nrow = tbl_JOIN_INNER_TD_12598_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12694_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11869_key_leftMajor, SW_JOIN_INNER_TD_11869_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12598_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk1115_k = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11869_key_leftMajor keyA{_cs_call_center_sk1115_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12598_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12598_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 2);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11869_payload_leftMajor payloadA{_i_brand236, _i_category240, _cs_call_center_sk1115, _cs_sales_price1125, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12694_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk903_k = tbl_Filter_TD_12694_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11869_key_leftMajor{_cc_call_center_sk903_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _cs_call_center_sk1115 = (it->second)._cs_call_center_sk1115;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _cc_call_center_sk903 = tbl_Filter_TD_12694_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_12694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                tbl_JOIN_INNER_TD_11869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11869_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_11869_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11869_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_11869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name909_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11869_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11869_key_rightMajor, SW_JOIN_INNER_TD_11869_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12694_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk903_k = tbl_Filter_TD_12694_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11869_key_rightMajor keyA{_cc_call_center_sk903_k};
            int32_t _cc_call_center_sk903 = tbl_Filter_TD_12694_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_12694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            SW_JOIN_INNER_TD_11869_payload_rightMajor payloadA{_cc_call_center_sk903, _cc_name909};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12598_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk1115_k = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11869_key_rightMajor{_cs_call_center_sk1115_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk903 = (it->second)._cc_call_center_sk903;
                std::string _cc_name909 = (it->second)._cc_name909;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n{};
                memcpy(_cc_name909_n.data(), (_cc_name909).data(), (_cc_name909).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12598_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12598_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 2);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_12598_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name909_n);
                tbl_JOIN_INNER_TD_11869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11869_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_11869_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11869_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11869_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11869_output #Row: " << tbl_JOIN_INNER_TD_11869_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10354(Table &tbl_SerializeFromObject_TD_11457_input, Table &tbl_Filter_TD_10354_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#9542 = 1999) OR ((d_year#9542 = 1998) AND (d_moy#9544 = 12))) OR ((d_year#9542 = 2000) AND (d_moy#9544 = 1))) AND isnotnull(d_date_sk#9536)))
    // Input: ListBuffer(d_date_sk#9536, d_year#9542, d_moy#9544)
    // Output: ListBuffer(d_date_sk#9536, d_year#9542, d_moy#9544)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11457_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year9542 = tbl_SerializeFromObject_TD_11457_input.getInt32(i, 1);
        int32_t _d_moy9544 = tbl_SerializeFromObject_TD_11457_input.getInt32(i, 2);
        int32_t _d_date_sk9536 = tbl_SerializeFromObject_TD_11457_input.getInt32(i, 0);
        if ((((_d_year9542 == 1999) || ((_d_year9542 == 1998) && (_d_moy9544 == 12))) || ((_d_year9542 == 2000) && (_d_moy9544 == 1))) && (_d_date_sk9536!= 0)) {
            int32_t _d_date_sk9536_t = tbl_SerializeFromObject_TD_11457_input.getInt32(i, 0);
            tbl_Filter_TD_10354_output.setInt32(r, 0, _d_date_sk9536_t);
            int32_t _d_year9542_t = tbl_SerializeFromObject_TD_11457_input.getInt32(i, 1);
            tbl_Filter_TD_10354_output.setInt32(r, 1, _d_year9542_t);
            int32_t _d_moy9544_t = tbl_SerializeFromObject_TD_11457_input.getInt32(i, 2);
            tbl_Filter_TD_10354_output.setInt32(r, 2, _d_moy9544_t);
            r++;
        }
    }
    tbl_Filter_TD_10354_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10354_output #Row: " << tbl_Filter_TD_10354_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10605_key_leftMajor {
    int32_t _i_item_sk9480;
    bool operator==(const SW_JOIN_INNER_TD_10605_key_leftMajor& other) const {
        return ((_i_item_sk9480 == other._i_item_sk9480));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10605_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10605_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk9480));
    }
};
}
struct SW_JOIN_INNER_TD_10605_payload_leftMajor {
    int32_t _i_item_sk9480;
    std::string _i_brand9488;
    std::string _i_category9492;
};
struct SW_JOIN_INNER_TD_10605_key_rightMajor {
    int32_t _cs_item_sk9517;
    bool operator==(const SW_JOIN_INNER_TD_10605_key_rightMajor& other) const {
        return ((_cs_item_sk9517 == other._cs_item_sk9517));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10605_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10605_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk9517));
    }
};
}
struct SW_JOIN_INNER_TD_10605_payload_rightMajor {
    int32_t _cs_sold_date_sk9502;
    int32_t _cs_call_center_sk9513;
    int32_t _cs_item_sk9517;
    int32_t _cs_sales_price9523;
};
void SW_JOIN_INNER_TD_10605(Table &tbl_Filter_TD_11850_output, Table &tbl_Filter_TD_11165_output, Table &tbl_JOIN_INNER_TD_10605_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#9517 = i_item_sk#9480))
    // Left Table: ListBuffer(i_item_sk#9480, i_brand#9488, i_category#9492)
    // Right Table: ListBuffer(cs_sold_date_sk#9502, cs_call_center_sk#9513, cs_item_sk#9517, cs_sales_price#9523)
    // Output Table: ListBuffer(i_brand#9488, i_category#9492, cs_sold_date_sk#9502, cs_call_center_sk#9513, cs_sales_price#9523)
    int left_nrow = tbl_Filter_TD_11850_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11165_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10605_key_leftMajor, SW_JOIN_INNER_TD_10605_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11850_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk9480_k = tbl_Filter_TD_11850_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10605_key_leftMajor keyA{_i_item_sk9480_k};
            int32_t _i_item_sk9480 = tbl_Filter_TD_11850_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n = tbl_Filter_TD_11850_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand9488 = std::string(_i_brand9488_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n = tbl_Filter_TD_11850_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category9492 = std::string(_i_category9492_n.data());
            SW_JOIN_INNER_TD_10605_payload_leftMajor payloadA{_i_item_sk9480, _i_brand9488, _i_category9492};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11165_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk9517_k = tbl_Filter_TD_11165_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10605_key_leftMajor{_cs_item_sk9517_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk9480 = (it->second)._i_item_sk9480;
                std::string _i_brand9488 = (it->second)._i_brand9488;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n{};
                memcpy(_i_brand9488_n.data(), (_i_brand9488).data(), (_i_brand9488).length());
                std::string _i_category9492 = (it->second)._i_category9492;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n{};
                memcpy(_i_category9492_n.data(), (_i_category9492).data(), (_i_category9492).length());
                int32_t _cs_sold_date_sk9502 = tbl_Filter_TD_11165_output.getInt32(i, 0);
                int32_t _cs_call_center_sk9513 = tbl_Filter_TD_11165_output.getInt32(i, 1);
                int32_t _cs_item_sk9517 = tbl_Filter_TD_11165_output.getInt32(i, 2);
                int32_t _cs_sales_price9523 = tbl_Filter_TD_11165_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10605_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9488_n);
                tbl_JOIN_INNER_TD_10605_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9492_n);
                tbl_JOIN_INNER_TD_10605_output.setInt32(r, 2, _cs_sold_date_sk9502);
                tbl_JOIN_INNER_TD_10605_output.setInt32(r, 3, _cs_call_center_sk9513);
                tbl_JOIN_INNER_TD_10605_output.setInt32(r, 4, _cs_sales_price9523);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10605_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10605_key_rightMajor, SW_JOIN_INNER_TD_10605_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11165_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk9517_k = tbl_Filter_TD_11165_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10605_key_rightMajor keyA{_cs_item_sk9517_k};
            int32_t _cs_sold_date_sk9502 = tbl_Filter_TD_11165_output.getInt32(i, 0);
            int32_t _cs_call_center_sk9513 = tbl_Filter_TD_11165_output.getInt32(i, 1);
            int32_t _cs_item_sk9517 = tbl_Filter_TD_11165_output.getInt32(i, 2);
            int32_t _cs_sales_price9523 = tbl_Filter_TD_11165_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10605_payload_rightMajor payloadA{_cs_sold_date_sk9502, _cs_call_center_sk9513, _cs_item_sk9517, _cs_sales_price9523};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11850_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk9480_k = tbl_Filter_TD_11850_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10605_key_rightMajor{_i_item_sk9480_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk9502 = (it->second)._cs_sold_date_sk9502;
                int32_t _cs_call_center_sk9513 = (it->second)._cs_call_center_sk9513;
                int32_t _cs_item_sk9517 = (it->second)._cs_item_sk9517;
                int32_t _cs_sales_price9523 = (it->second)._cs_sales_price9523;
                int32_t _i_item_sk9480 = tbl_Filter_TD_11850_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n = tbl_Filter_TD_11850_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand9488 = std::string(_i_brand9488_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n = tbl_Filter_TD_11850_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category9492 = std::string(_i_category9492_n.data());
                tbl_JOIN_INNER_TD_10605_output.setInt32(r, 2, _cs_sold_date_sk9502);
                tbl_JOIN_INNER_TD_10605_output.setInt32(r, 3, _cs_call_center_sk9513);
                tbl_JOIN_INNER_TD_10605_output.setInt32(r, 4, _cs_sales_price9523);
                tbl_JOIN_INNER_TD_10605_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9488_n);
                tbl_JOIN_INNER_TD_10605_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9492_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10605_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10605_output #Row: " << tbl_JOIN_INNER_TD_10605_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10160(Table &tbl_SerializeFromObject_TD_113_input, Table &tbl_Filter_TD_10160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#9444) AND isnotnull(cc_name#9450)))
    // Input: ListBuffer(cc_call_center_sk#9444, cc_name#9450)
    // Output: ListBuffer(cc_call_center_sk#9444, cc_name#9450)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_113_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk9444 = tbl_SerializeFromObject_TD_113_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9450 = tbl_SerializeFromObject_TD_113_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cc_call_center_sk9444!= 0) && （std::string(_isnotnullcc_name9450.data()) != "NULL")) {
            int32_t _cc_call_center_sk9444_t = tbl_SerializeFromObject_TD_113_input.getInt32(i, 0);
            tbl_Filter_TD_10160_output.setInt32(r, 0, _cc_call_center_sk9444_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_t = tbl_SerializeFromObject_TD_113_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10160_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name9450_t);
            r++;
        }
    }
    tbl_Filter_TD_10160_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10160_output #Row: " << tbl_Filter_TD_10160_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10116_key_leftMajor {
    int32_t _cs_sold_date_sk9382;
    bool operator==(const SW_JOIN_INNER_TD_10116_key_leftMajor& other) const {
        return ((_cs_sold_date_sk9382 == other._cs_sold_date_sk9382));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10116_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10116_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk9382));
    }
};
}
struct SW_JOIN_INNER_TD_10116_payload_leftMajor {
    std::string _i_brand9368;
    std::string _i_category9372;
    int32_t _cs_sold_date_sk9382;
    int32_t _cs_call_center_sk9393;
    int32_t _cs_sales_price9403;
};
struct SW_JOIN_INNER_TD_10116_key_rightMajor {
    int32_t _d_date_sk9416;
    bool operator==(const SW_JOIN_INNER_TD_10116_key_rightMajor& other) const {
        return ((_d_date_sk9416 == other._d_date_sk9416));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10116_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10116_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk9416));
    }
};
}
struct SW_JOIN_INNER_TD_10116_payload_rightMajor {
    int32_t _d_date_sk9416;
    int32_t _d_year9422;
    int32_t _d_moy9424;
};
void SW_JOIN_INNER_TD_10116(Table &tbl_JOIN_INNER_TD_11291_output, Table &tbl_Filter_TD_11655_output, Table &tbl_JOIN_INNER_TD_10116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#9382 = d_date_sk#9416))
    // Left Table: ListBuffer(i_brand#9368, i_category#9372, cs_sold_date_sk#9382, cs_call_center_sk#9393, cs_sales_price#9403)
    // Right Table: ListBuffer(d_date_sk#9416, d_year#9422, d_moy#9424)
    // Output Table: ListBuffer(i_brand#9368, i_category#9372, cs_call_center_sk#9393, cs_sales_price#9403, d_year#9422, d_moy#9424)
    int left_nrow = tbl_JOIN_INNER_TD_11291_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11655_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10116_key_leftMajor, SW_JOIN_INNER_TD_10116_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11291_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk9382_k = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10116_key_leftMajor keyA{_cs_sold_date_sk9382_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n = tbl_JOIN_INNER_TD_11291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand9368 = std::string(_i_brand9368_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n = tbl_JOIN_INNER_TD_11291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category9372 = std::string(_i_category9372_n.data());
            int32_t _cs_sold_date_sk9382 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 2);
            int32_t _cs_call_center_sk9393 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 3);
            int32_t _cs_sales_price9403 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_10116_payload_leftMajor payloadA{_i_brand9368, _i_category9372, _cs_sold_date_sk9382, _cs_call_center_sk9393, _cs_sales_price9403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11655_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk9416_k = tbl_Filter_TD_11655_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10116_key_leftMajor{_d_date_sk9416_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand9368 = (it->second)._i_brand9368;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n{};
                memcpy(_i_brand9368_n.data(), (_i_brand9368).data(), (_i_brand9368).length());
                std::string _i_category9372 = (it->second)._i_category9372;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n{};
                memcpy(_i_category9372_n.data(), (_i_category9372).data(), (_i_category9372).length());
                int32_t _cs_sold_date_sk9382 = (it->second)._cs_sold_date_sk9382;
                int32_t _cs_call_center_sk9393 = (it->second)._cs_call_center_sk9393;
                int32_t _cs_sales_price9403 = (it->second)._cs_sales_price9403;
                int32_t _d_date_sk9416 = tbl_Filter_TD_11655_output.getInt32(i, 0);
                int32_t _d_year9422 = tbl_Filter_TD_11655_output.getInt32(i, 1);
                int32_t _d_moy9424 = tbl_Filter_TD_11655_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9368_n);
                tbl_JOIN_INNER_TD_10116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9372_n);
                tbl_JOIN_INNER_TD_10116_output.setInt32(r, 2, _cs_call_center_sk9393);
                tbl_JOIN_INNER_TD_10116_output.setInt32(r, 3, _cs_sales_price9403);
                tbl_JOIN_INNER_TD_10116_output.setInt32(r, 4, _d_year9422);
                tbl_JOIN_INNER_TD_10116_output.setInt32(r, 5, _d_moy9424);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10116_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10116_key_rightMajor, SW_JOIN_INNER_TD_10116_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11655_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk9416_k = tbl_Filter_TD_11655_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10116_key_rightMajor keyA{_d_date_sk9416_k};
            int32_t _d_date_sk9416 = tbl_Filter_TD_11655_output.getInt32(i, 0);
            int32_t _d_year9422 = tbl_Filter_TD_11655_output.getInt32(i, 1);
            int32_t _d_moy9424 = tbl_Filter_TD_11655_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10116_payload_rightMajor payloadA{_d_date_sk9416, _d_year9422, _d_moy9424};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11291_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk9382_k = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10116_key_rightMajor{_cs_sold_date_sk9382_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk9416 = (it->second)._d_date_sk9416;
                int32_t _d_year9422 = (it->second)._d_year9422;
                int32_t _d_moy9424 = (it->second)._d_moy9424;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n = tbl_JOIN_INNER_TD_11291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand9368 = std::string(_i_brand9368_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n = tbl_JOIN_INNER_TD_11291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category9372 = std::string(_i_category9372_n.data());
                int32_t _cs_sold_date_sk9382 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 2);
                int32_t _cs_call_center_sk9393 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 3);
                int32_t _cs_sales_price9403 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_10116_output.setInt32(r, 4, _d_year9422);
                tbl_JOIN_INNER_TD_10116_output.setInt32(r, 5, _d_moy9424);
                tbl_JOIN_INNER_TD_10116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9368_n);
                tbl_JOIN_INNER_TD_10116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9372_n);
                tbl_JOIN_INNER_TD_10116_output.setInt32(r, 2, _cs_call_center_sk9393);
                tbl_JOIN_INNER_TD_10116_output.setInt32(r, 3, _cs_sales_price9403);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10116_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10116_output #Row: " << tbl_JOIN_INNER_TD_10116_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1045_key {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_1045_key& other) const { return (_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909) && (_d_year126 == other._d_year126) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1045_key> {
    std::size_t operator() (const SW_Aggregate_TD_1045_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_1045_payload {
    int32_t _sum_sales8552_sum_0;
    int32_t __w08566_sum_1;
};
void SW_Aggregate_TD_1045(Table &tbl_JOIN_INNER_TD_11869_output, Table &tbl_Aggregate_TD_1045_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, MakeDecimal(sum(UnscaledValue(cs_sales_price#1125)),17,2) AS sum_sales#8552, MakeDecimal(sum(UnscaledValue(cs_sales_price#1125)),17,2) AS _w0#8566)
    // Input: ListBuffer(i_brand#236, i_category#240, cs_sales_price#1125, d_year#126, d_moy#128, cc_name#909)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, _w0#8566)
    std::unordered_map<SW_Aggregate_TD_1045_key, SW_Aggregate_TD_1045_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11869_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_11869_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_11869_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_11869_output.getInt32(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_11869_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_11869_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_JOIN_INNER_TD_11869_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_1045_key k{std::string(_i_category240.data()), std::string(_i_brand236.data()), std::string(_cc_name909.data()), _d_year126, _d_moy128};
        int64_t _sum_sales8552_sum_0 = _cs_sales_price1125;
        int64_t __w08566_sum_1 = _cs_sales_price1125;
        SW_Aggregate_TD_1045_payload p{_sum_sales8552_sum_0, __w08566_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales8552_sum_0 + _sum_sales8552_sum_0;
            p._sum_sales8552_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w08566_sum_1 + __w08566_sum_1;
            p.__w08566_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_1045_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), ((it.first)._i_brand236).data(), ((it.first)._i_brand236).length());
        tbl_Aggregate_TD_1045_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909{};
        memcpy(_cc_name909.data(), ((it.first)._cc_name909).data(), ((it.first)._cc_name909).length());
        tbl_Aggregate_TD_1045_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909);
        tbl_Aggregate_TD_1045_output.setInt32(r, 3, (it.first)._d_year126);
        tbl_Aggregate_TD_1045_output.setInt32(r, 4, (it.first)._d_moy128);
        int32_t _sum_sales8552 = (it.second)._sum_sales8552_sum_0;
        tbl_Aggregate_TD_1045_output.setInt32(r, 5, _sum_sales8552);
        int32_t __w08566 = (it.second).__w08566_sum_1;
        tbl_Aggregate_TD_1045_output.setInt32(r, 6, __w08566);
        ++r;
    }
    tbl_Aggregate_TD_1045_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1045_output #Row: " << tbl_Aggregate_TD_1045_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9245(Table &tbl_SerializeFromObject_TD_10270_input, Table &tbl_Filter_TD_9245_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#9564) AND isnotnull(cc_name#9570)))
    // Input: ListBuffer(cc_call_center_sk#9564, cc_name#9570)
    // Output: ListBuffer(cc_call_center_sk#9564, cc_name#9570)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10270_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk9564 = tbl_SerializeFromObject_TD_10270_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9570 = tbl_SerializeFromObject_TD_10270_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cc_call_center_sk9564!= 0) && （std::string(_isnotnullcc_name9570.data()) != "NULL")) {
            int32_t _cc_call_center_sk9564_t = tbl_SerializeFromObject_TD_10270_input.getInt32(i, 0);
            tbl_Filter_TD_9245_output.setInt32(r, 0, _cc_call_center_sk9564_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_t = tbl_SerializeFromObject_TD_10270_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9245_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name9570_t);
            r++;
        }
    }
    tbl_Filter_TD_9245_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9245_output #Row: " << tbl_Filter_TD_9245_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9254_key_leftMajor {
    int32_t _cs_sold_date_sk9502;
    bool operator==(const SW_JOIN_INNER_TD_9254_key_leftMajor& other) const {
        return ((_cs_sold_date_sk9502 == other._cs_sold_date_sk9502));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9254_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9254_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk9502));
    }
};
}
struct SW_JOIN_INNER_TD_9254_payload_leftMajor {
    std::string _i_brand9488;
    std::string _i_category9492;
    int32_t _cs_sold_date_sk9502;
    int32_t _cs_call_center_sk9513;
    int32_t _cs_sales_price9523;
};
struct SW_JOIN_INNER_TD_9254_key_rightMajor {
    int32_t _d_date_sk9536;
    bool operator==(const SW_JOIN_INNER_TD_9254_key_rightMajor& other) const {
        return ((_d_date_sk9536 == other._d_date_sk9536));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9254_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9254_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk9536));
    }
};
}
struct SW_JOIN_INNER_TD_9254_payload_rightMajor {
    int32_t _d_date_sk9536;
    int32_t _d_year9542;
    int32_t _d_moy9544;
};
void SW_JOIN_INNER_TD_9254(Table &tbl_JOIN_INNER_TD_10605_output, Table &tbl_Filter_TD_10354_output, Table &tbl_JOIN_INNER_TD_9254_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#9502 = d_date_sk#9536))
    // Left Table: ListBuffer(i_brand#9488, i_category#9492, cs_sold_date_sk#9502, cs_call_center_sk#9513, cs_sales_price#9523)
    // Right Table: ListBuffer(d_date_sk#9536, d_year#9542, d_moy#9544)
    // Output Table: ListBuffer(i_brand#9488, i_category#9492, cs_call_center_sk#9513, cs_sales_price#9523, d_year#9542, d_moy#9544)
    int left_nrow = tbl_JOIN_INNER_TD_10605_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10354_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9254_key_leftMajor, SW_JOIN_INNER_TD_9254_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10605_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk9502_k = tbl_JOIN_INNER_TD_10605_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9254_key_leftMajor keyA{_cs_sold_date_sk9502_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n = tbl_JOIN_INNER_TD_10605_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand9488 = std::string(_i_brand9488_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n = tbl_JOIN_INNER_TD_10605_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category9492 = std::string(_i_category9492_n.data());
            int32_t _cs_sold_date_sk9502 = tbl_JOIN_INNER_TD_10605_output.getInt32(i, 2);
            int32_t _cs_call_center_sk9513 = tbl_JOIN_INNER_TD_10605_output.getInt32(i, 3);
            int32_t _cs_sales_price9523 = tbl_JOIN_INNER_TD_10605_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_9254_payload_leftMajor payloadA{_i_brand9488, _i_category9492, _cs_sold_date_sk9502, _cs_call_center_sk9513, _cs_sales_price9523};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10354_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk9536_k = tbl_Filter_TD_10354_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9254_key_leftMajor{_d_date_sk9536_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand9488 = (it->second)._i_brand9488;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n{};
                memcpy(_i_brand9488_n.data(), (_i_brand9488).data(), (_i_brand9488).length());
                std::string _i_category9492 = (it->second)._i_category9492;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n{};
                memcpy(_i_category9492_n.data(), (_i_category9492).data(), (_i_category9492).length());
                int32_t _cs_sold_date_sk9502 = (it->second)._cs_sold_date_sk9502;
                int32_t _cs_call_center_sk9513 = (it->second)._cs_call_center_sk9513;
                int32_t _cs_sales_price9523 = (it->second)._cs_sales_price9523;
                int32_t _d_date_sk9536 = tbl_Filter_TD_10354_output.getInt32(i, 0);
                int32_t _d_year9542 = tbl_Filter_TD_10354_output.getInt32(i, 1);
                int32_t _d_moy9544 = tbl_Filter_TD_10354_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9254_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9488_n);
                tbl_JOIN_INNER_TD_9254_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9492_n);
                tbl_JOIN_INNER_TD_9254_output.setInt32(r, 2, _cs_call_center_sk9513);
                tbl_JOIN_INNER_TD_9254_output.setInt32(r, 3, _cs_sales_price9523);
                tbl_JOIN_INNER_TD_9254_output.setInt32(r, 4, _d_year9542);
                tbl_JOIN_INNER_TD_9254_output.setInt32(r, 5, _d_moy9544);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9254_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9254_key_rightMajor, SW_JOIN_INNER_TD_9254_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10354_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk9536_k = tbl_Filter_TD_10354_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9254_key_rightMajor keyA{_d_date_sk9536_k};
            int32_t _d_date_sk9536 = tbl_Filter_TD_10354_output.getInt32(i, 0);
            int32_t _d_year9542 = tbl_Filter_TD_10354_output.getInt32(i, 1);
            int32_t _d_moy9544 = tbl_Filter_TD_10354_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9254_payload_rightMajor payloadA{_d_date_sk9536, _d_year9542, _d_moy9544};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10605_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk9502_k = tbl_JOIN_INNER_TD_10605_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9254_key_rightMajor{_cs_sold_date_sk9502_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk9536 = (it->second)._d_date_sk9536;
                int32_t _d_year9542 = (it->second)._d_year9542;
                int32_t _d_moy9544 = (it->second)._d_moy9544;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n = tbl_JOIN_INNER_TD_10605_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand9488 = std::string(_i_brand9488_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n = tbl_JOIN_INNER_TD_10605_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category9492 = std::string(_i_category9492_n.data());
                int32_t _cs_sold_date_sk9502 = tbl_JOIN_INNER_TD_10605_output.getInt32(i, 2);
                int32_t _cs_call_center_sk9513 = tbl_JOIN_INNER_TD_10605_output.getInt32(i, 3);
                int32_t _cs_sales_price9523 = tbl_JOIN_INNER_TD_10605_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_9254_output.setInt32(r, 4, _d_year9542);
                tbl_JOIN_INNER_TD_9254_output.setInt32(r, 5, _d_moy9544);
                tbl_JOIN_INNER_TD_9254_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9488_n);
                tbl_JOIN_INNER_TD_9254_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9492_n);
                tbl_JOIN_INNER_TD_9254_output.setInt32(r, 2, _cs_call_center_sk9513);
                tbl_JOIN_INNER_TD_9254_output.setInt32(r, 3, _cs_sales_price9523);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9254_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9254_output #Row: " << tbl_JOIN_INNER_TD_9254_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9247_key_leftMajor {
    int32_t _cs_call_center_sk9393;
    bool operator==(const SW_JOIN_INNER_TD_9247_key_leftMajor& other) const {
        return ((_cs_call_center_sk9393 == other._cs_call_center_sk9393));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9247_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9247_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk9393));
    }
};
}
struct SW_JOIN_INNER_TD_9247_payload_leftMajor {
    std::string _i_brand9368;
    std::string _i_category9372;
    int32_t _cs_call_center_sk9393;
    int32_t _cs_sales_price9403;
    int32_t _d_year9422;
    int32_t _d_moy9424;
};
struct SW_JOIN_INNER_TD_9247_key_rightMajor {
    int32_t _cc_call_center_sk9444;
    bool operator==(const SW_JOIN_INNER_TD_9247_key_rightMajor& other) const {
        return ((_cc_call_center_sk9444 == other._cc_call_center_sk9444));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9247_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9247_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk9444));
    }
};
}
struct SW_JOIN_INNER_TD_9247_payload_rightMajor {
    int32_t _cc_call_center_sk9444;
    std::string _cc_name9450;
};
void SW_JOIN_INNER_TD_9247(Table &tbl_JOIN_INNER_TD_10116_output, Table &tbl_Filter_TD_10160_output, Table &tbl_JOIN_INNER_TD_9247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#9444 = cs_call_center_sk#9393))
    // Left Table: ListBuffer(i_brand#9368, i_category#9372, cs_call_center_sk#9393, cs_sales_price#9403, d_year#9422, d_moy#9424)
    // Right Table: ListBuffer(cc_call_center_sk#9444, cc_name#9450)
    // Output Table: ListBuffer(i_brand#9368, i_category#9372, cs_sales_price#9403, d_year#9422, d_moy#9424, cc_name#9450)
    int left_nrow = tbl_JOIN_INNER_TD_10116_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10160_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9247_key_leftMajor, SW_JOIN_INNER_TD_9247_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10116_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk9393_k = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9247_key_leftMajor keyA{_cs_call_center_sk9393_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n = tbl_JOIN_INNER_TD_10116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand9368 = std::string(_i_brand9368_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n = tbl_JOIN_INNER_TD_10116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category9372 = std::string(_i_category9372_n.data());
            int32_t _cs_call_center_sk9393 = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 2);
            int32_t _cs_sales_price9403 = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 3);
            int32_t _d_year9422 = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 4);
            int32_t _d_moy9424 = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9247_payload_leftMajor payloadA{_i_brand9368, _i_category9372, _cs_call_center_sk9393, _cs_sales_price9403, _d_year9422, _d_moy9424};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10160_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk9444_k = tbl_Filter_TD_10160_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9247_key_leftMajor{_cc_call_center_sk9444_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand9368 = (it->second)._i_brand9368;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n{};
                memcpy(_i_brand9368_n.data(), (_i_brand9368).data(), (_i_brand9368).length());
                std::string _i_category9372 = (it->second)._i_category9372;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n{};
                memcpy(_i_category9372_n.data(), (_i_category9372).data(), (_i_category9372).length());
                int32_t _cs_call_center_sk9393 = (it->second)._cs_call_center_sk9393;
                int32_t _cs_sales_price9403 = (it->second)._cs_sales_price9403;
                int32_t _d_year9422 = (it->second)._d_year9422;
                int32_t _d_moy9424 = (it->second)._d_moy9424;
                int32_t _cc_call_center_sk9444 = tbl_Filter_TD_10160_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_n = tbl_Filter_TD_10160_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name9450 = std::string(_cc_name9450_n.data());
                tbl_JOIN_INNER_TD_9247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9368_n);
                tbl_JOIN_INNER_TD_9247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9372_n);
                tbl_JOIN_INNER_TD_9247_output.setInt32(r, 2, _cs_sales_price9403);
                tbl_JOIN_INNER_TD_9247_output.setInt32(r, 3, _d_year9422);
                tbl_JOIN_INNER_TD_9247_output.setInt32(r, 4, _d_moy9424);
                tbl_JOIN_INNER_TD_9247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name9450_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9247_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9247_key_rightMajor, SW_JOIN_INNER_TD_9247_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10160_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk9444_k = tbl_Filter_TD_10160_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9247_key_rightMajor keyA{_cc_call_center_sk9444_k};
            int32_t _cc_call_center_sk9444 = tbl_Filter_TD_10160_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_n = tbl_Filter_TD_10160_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name9450 = std::string(_cc_name9450_n.data());
            SW_JOIN_INNER_TD_9247_payload_rightMajor payloadA{_cc_call_center_sk9444, _cc_name9450};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10116_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk9393_k = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9247_key_rightMajor{_cs_call_center_sk9393_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk9444 = (it->second)._cc_call_center_sk9444;
                std::string _cc_name9450 = (it->second)._cc_name9450;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_n{};
                memcpy(_cc_name9450_n.data(), (_cc_name9450).data(), (_cc_name9450).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n = tbl_JOIN_INNER_TD_10116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand9368 = std::string(_i_brand9368_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n = tbl_JOIN_INNER_TD_10116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category9372 = std::string(_i_category9372_n.data());
                int32_t _cs_call_center_sk9393 = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 2);
                int32_t _cs_sales_price9403 = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 3);
                int32_t _d_year9422 = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 4);
                int32_t _d_moy9424 = tbl_JOIN_INNER_TD_10116_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name9450_n);
                tbl_JOIN_INNER_TD_9247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9368_n);
                tbl_JOIN_INNER_TD_9247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9372_n);
                tbl_JOIN_INNER_TD_9247_output.setInt32(r, 2, _cs_sales_price9403);
                tbl_JOIN_INNER_TD_9247_output.setInt32(r, 3, _d_year9422);
                tbl_JOIN_INNER_TD_9247_output.setInt32(r, 4, _d_moy9424);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9247_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9247_output #Row: " << tbl_JOIN_INNER_TD_9247_output.getNumRow() << std::endl;
}

void SW_Window_TD_984(Table &tbl_Aggregate_TD_1045_output, Table &tbl_Window_TD_984_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#126, d_moy#128) windowspecdefinition(i_category#240, i_brand#236, cc_name#909, d_year#126 ASC NULLS FIRST, d_moy#128 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#8554)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, _w0#8566)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, _w0#8566, rn#8554)
    struct SW_Window_TD_984Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _sum_sales8552;
        int32_t __w08566;
    }; 

    int nrow = tbl_Aggregate_TD_1045_output.getNumRow();
    std::vector<SW_Window_TD_984Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_1045_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_984_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Aggregate_TD_1045_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_984_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Aggregate_TD_1045_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_984_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        int32_t _d_year126 = tbl_Aggregate_TD_1045_output.getInt32(i, 3);
        tbl_Window_TD_984_output.setInt32(r, 3,_d_year126);
        int32_t _d_moy128 = tbl_Aggregate_TD_1045_output.getInt32(i, 4);
        tbl_Window_TD_984_output.setInt32(r, 4,_d_moy128);
        int32_t _sum_sales8552 = tbl_Aggregate_TD_1045_output.getInt32(i, 5);
        tbl_Window_TD_984_output.setInt32(r, 5,_sum_sales8552);
        int32_t __w08566 = tbl_Aggregate_TD_1045_output.getInt32(i, 6);
        tbl_Window_TD_984_output.setInt32(r, 6,__w08566);
        r++;
        SW_Window_TD_984Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_sum_sales8552,__w08566};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_984Row& a, const SW_Window_TD_984Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 < b._cc_name909)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 < b._d_year126)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 == b._d_year126) && (a._d_moy128 < b._d_moy128)); 
}
    }SW_Window_TD_984_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_984_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category240 == rows0[i-1]._i_category240 && rows0[i]._i_brand236 == rows0[i-1]._i_brand236 && rows0[i]._cc_name909 == rows0[i-1]._cc_name909);
        isSameOrderKey0 = ( rows0[i]._d_year126 == rows0[i-1]._d_year126 && rows0[i]._d_moy128 == rows0[i-1]._d_moy128);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_984_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_984_output.setNumRow(r);
    std::cout << "tbl_Window_TD_984_output #Row: " << tbl_Window_TD_984_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8636_key_leftMajor {
    int32_t _cs_call_center_sk9513;
    bool operator==(const SW_JOIN_INNER_TD_8636_key_leftMajor& other) const {
        return ((_cs_call_center_sk9513 == other._cs_call_center_sk9513));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8636_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8636_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk9513));
    }
};
}
struct SW_JOIN_INNER_TD_8636_payload_leftMajor {
    std::string _i_brand9488;
    std::string _i_category9492;
    int32_t _cs_call_center_sk9513;
    int32_t _cs_sales_price9523;
    int32_t _d_year9542;
    int32_t _d_moy9544;
};
struct SW_JOIN_INNER_TD_8636_key_rightMajor {
    int32_t _cc_call_center_sk9564;
    bool operator==(const SW_JOIN_INNER_TD_8636_key_rightMajor& other) const {
        return ((_cc_call_center_sk9564 == other._cc_call_center_sk9564));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8636_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8636_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk9564));
    }
};
}
struct SW_JOIN_INNER_TD_8636_payload_rightMajor {
    int32_t _cc_call_center_sk9564;
    std::string _cc_name9570;
};
void SW_JOIN_INNER_TD_8636(Table &tbl_JOIN_INNER_TD_9254_output, Table &tbl_Filter_TD_9245_output, Table &tbl_JOIN_INNER_TD_8636_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#9564 = cs_call_center_sk#9513))
    // Left Table: ListBuffer(i_brand#9488, i_category#9492, cs_call_center_sk#9513, cs_sales_price#9523, d_year#9542, d_moy#9544)
    // Right Table: ListBuffer(cc_call_center_sk#9564, cc_name#9570)
    // Output Table: ListBuffer(i_brand#9488, i_category#9492, cs_sales_price#9523, d_year#9542, d_moy#9544, cc_name#9570)
    int left_nrow = tbl_JOIN_INNER_TD_9254_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9245_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8636_key_leftMajor, SW_JOIN_INNER_TD_8636_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9254_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk9513_k = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8636_key_leftMajor keyA{_cs_call_center_sk9513_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n = tbl_JOIN_INNER_TD_9254_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand9488 = std::string(_i_brand9488_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n = tbl_JOIN_INNER_TD_9254_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category9492 = std::string(_i_category9492_n.data());
            int32_t _cs_call_center_sk9513 = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 2);
            int32_t _cs_sales_price9523 = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 3);
            int32_t _d_year9542 = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 4);
            int32_t _d_moy9544 = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8636_payload_leftMajor payloadA{_i_brand9488, _i_category9492, _cs_call_center_sk9513, _cs_sales_price9523, _d_year9542, _d_moy9544};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9245_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk9564_k = tbl_Filter_TD_9245_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8636_key_leftMajor{_cc_call_center_sk9564_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand9488 = (it->second)._i_brand9488;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n{};
                memcpy(_i_brand9488_n.data(), (_i_brand9488).data(), (_i_brand9488).length());
                std::string _i_category9492 = (it->second)._i_category9492;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n{};
                memcpy(_i_category9492_n.data(), (_i_category9492).data(), (_i_category9492).length());
                int32_t _cs_call_center_sk9513 = (it->second)._cs_call_center_sk9513;
                int32_t _cs_sales_price9523 = (it->second)._cs_sales_price9523;
                int32_t _d_year9542 = (it->second)._d_year9542;
                int32_t _d_moy9544 = (it->second)._d_moy9544;
                int32_t _cc_call_center_sk9564 = tbl_Filter_TD_9245_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_n = tbl_Filter_TD_9245_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name9570 = std::string(_cc_name9570_n.data());
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9488_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9492_n);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 2, _cs_sales_price9523);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 3, _d_year9542);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 4, _d_moy9544);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name9570_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8636_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8636_key_rightMajor, SW_JOIN_INNER_TD_8636_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9245_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk9564_k = tbl_Filter_TD_9245_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8636_key_rightMajor keyA{_cc_call_center_sk9564_k};
            int32_t _cc_call_center_sk9564 = tbl_Filter_TD_9245_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_n = tbl_Filter_TD_9245_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name9570 = std::string(_cc_name9570_n.data());
            SW_JOIN_INNER_TD_8636_payload_rightMajor payloadA{_cc_call_center_sk9564, _cc_name9570};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9254_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk9513_k = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8636_key_rightMajor{_cs_call_center_sk9513_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk9564 = (it->second)._cc_call_center_sk9564;
                std::string _cc_name9570 = (it->second)._cc_name9570;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_n{};
                memcpy(_cc_name9570_n.data(), (_cc_name9570).data(), (_cc_name9570).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n = tbl_JOIN_INNER_TD_9254_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand9488 = std::string(_i_brand9488_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n = tbl_JOIN_INNER_TD_9254_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category9492 = std::string(_i_category9492_n.data());
                int32_t _cs_call_center_sk9513 = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 2);
                int32_t _cs_sales_price9523 = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 3);
                int32_t _d_year9542 = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 4);
                int32_t _d_moy9544 = tbl_JOIN_INNER_TD_9254_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name9570_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand9488_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9492_n);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 2, _cs_sales_price9523);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 3, _d_year9542);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 4, _d_moy9544);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8636_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8636_output #Row: " << tbl_JOIN_INNER_TD_8636_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8665_key {
    std::string _i_category9372;
    std::string _i_brand9368;
    std::string _cc_name9450;
    int32_t _d_year9422;
    int32_t _d_moy9424;
    bool operator==(const SW_Aggregate_TD_8665_key& other) const { return (_i_category9372 == other._i_category9372) && (_i_brand9368 == other._i_brand9368) && (_cc_name9450 == other._cc_name9450) && (_d_year9422 == other._d_year9422) && (_d_moy9424 == other._d_moy9424); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8665_key> {
    std::size_t operator() (const SW_Aggregate_TD_8665_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category9372)) + (hash<string>()(k._i_brand9368)) + (hash<string>()(k._cc_name9450)) + (hash<int32_t>()(k._d_year9422)) + (hash<int32_t>()(k._d_moy9424));
    }
};
}
struct SW_Aggregate_TD_8665_payload {
    int32_t _sum_sales8552_sum_0;
};
void SW_Aggregate_TD_8665(Table &tbl_JOIN_INNER_TD_9247_output, Table &tbl_Aggregate_TD_8665_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#9372, i_brand#9368, cc_name#9450, d_year#9422, d_moy#9424, MakeDecimal(sum(UnscaledValue(cs_sales_price#9403)),17,2) AS sum_sales#8552)
    // Input: ListBuffer(i_brand#9368, i_category#9372, cs_sales_price#9403, d_year#9422, d_moy#9424, cc_name#9450)
    // Output: ListBuffer(i_category#9372, i_brand#9368, cc_name#9450, d_year#9422, d_moy#9424, sum_sales#8552)
    std::unordered_map<SW_Aggregate_TD_8665_key, SW_Aggregate_TD_8665_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9247_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9368 = tbl_JOIN_INNER_TD_9247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9372 = tbl_JOIN_INNER_TD_9247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _cs_sales_price9403 = tbl_JOIN_INNER_TD_9247_output.getInt32(i, 2);
        int32_t _d_year9422 = tbl_JOIN_INNER_TD_9247_output.getInt32(i, 3);
        int32_t _d_moy9424 = tbl_JOIN_INNER_TD_9247_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9450 = tbl_JOIN_INNER_TD_9247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_8665_key k{std::string(_i_category9372.data()), std::string(_i_brand9368.data()), std::string(_cc_name9450.data()), _d_year9422, _d_moy9424};
        int64_t _sum_sales8552_sum_0 = _cs_sales_price9403;
        SW_Aggregate_TD_8665_payload p{_sum_sales8552_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales8552_sum_0 + _sum_sales8552_sum_0;
            p._sum_sales8552_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9372{};
        memcpy(_i_category9372.data(), ((it.first)._i_category9372).data(), ((it.first)._i_category9372).length());
        tbl_Aggregate_TD_8665_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category9372);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9368{};
        memcpy(_i_brand9368.data(), ((it.first)._i_brand9368).data(), ((it.first)._i_brand9368).length());
        tbl_Aggregate_TD_8665_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand9368);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9450{};
        memcpy(_cc_name9450.data(), ((it.first)._cc_name9450).data(), ((it.first)._cc_name9450).length());
        tbl_Aggregate_TD_8665_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name9450);
        tbl_Aggregate_TD_8665_output.setInt32(r, 3, (it.first)._d_year9422);
        tbl_Aggregate_TD_8665_output.setInt32(r, 4, (it.first)._d_moy9424);
        int32_t _sum_sales8552 = (it.second)._sum_sales8552_sum_0;
        tbl_Aggregate_TD_8665_output.setInt32(r, 5, _sum_sales8552);
        ++r;
    }
    tbl_Aggregate_TD_8665_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8665_output #Row: " << tbl_Aggregate_TD_8665_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8814(Table &tbl_Window_TD_984_output, Table &tbl_Filter_TD_8814_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_year#126) AND (d_year#126 = 1999)))
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, _w0#8566, rn#8554)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, _w0#8566, rn#8554)
    int r = 0;
    int nrow1 = tbl_Window_TD_984_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Window_TD_984_output.getInt32(i, 3);
        if ((_d_year126!= 0) && (_d_year126 == 1999)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_984_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8814_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_984_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8814_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_Window_TD_984_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8814_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_t);
            int32_t _d_year126_t = tbl_Window_TD_984_output.getInt32(i, 3);
            tbl_Filter_TD_8814_output.setInt32(r, 3, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_984_output.getInt32(i, 4);
            tbl_Filter_TD_8814_output.setInt32(r, 4, _d_moy128_t);
            int32_t _sum_sales8552_t = tbl_Window_TD_984_output.getInt32(i, 5);
            tbl_Filter_TD_8814_output.setInt32(r, 5, _sum_sales8552_t);
            int32_t __w08566_t = tbl_Window_TD_984_output.getInt32(i, 6);
            tbl_Filter_TD_8814_output.setInt32(r, 6, __w08566_t);
            int32_t _rn8554_t = tbl_Window_TD_984_output.getInt32(i, 7);
            tbl_Filter_TD_8814_output.setInt32(r, 7, _rn8554_t);
            r++;
        }
    }
    tbl_Filter_TD_8814_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8814_output #Row: " << tbl_Filter_TD_8814_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7299_key {
    std::string _i_category9492;
    std::string _i_brand9488;
    std::string _cc_name9570;
    int32_t _d_year9542;
    int32_t _d_moy9544;
    bool operator==(const SW_Aggregate_TD_7299_key& other) const { return (_i_category9492 == other._i_category9492) && (_i_brand9488 == other._i_brand9488) && (_cc_name9570 == other._cc_name9570) && (_d_year9542 == other._d_year9542) && (_d_moy9544 == other._d_moy9544); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7299_key> {
    std::size_t operator() (const SW_Aggregate_TD_7299_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category9492)) + (hash<string>()(k._i_brand9488)) + (hash<string>()(k._cc_name9570)) + (hash<int32_t>()(k._d_year9542)) + (hash<int32_t>()(k._d_moy9544));
    }
};
}
struct SW_Aggregate_TD_7299_payload {
    int32_t _sum_sales8552_sum_0;
};
void SW_Aggregate_TD_7299(Table &tbl_JOIN_INNER_TD_8636_output, Table &tbl_Aggregate_TD_7299_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#9492, i_brand#9488, cc_name#9570, d_year#9542, d_moy#9544, MakeDecimal(sum(UnscaledValue(cs_sales_price#9523)),17,2) AS sum_sales#8552)
    // Input: ListBuffer(i_brand#9488, i_category#9492, cs_sales_price#9523, d_year#9542, d_moy#9544, cc_name#9570)
    // Output: ListBuffer(i_category#9492, i_brand#9488, cc_name#9570, d_year#9542, d_moy#9544, sum_sales#8552)
    std::unordered_map<SW_Aggregate_TD_7299_key, SW_Aggregate_TD_7299_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8636_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9488 = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9492 = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _cs_sales_price9523 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 2);
        int32_t _d_year9542 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 3);
        int32_t _d_moy9544 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9570 = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_7299_key k{std::string(_i_category9492.data()), std::string(_i_brand9488.data()), std::string(_cc_name9570.data()), _d_year9542, _d_moy9544};
        int64_t _sum_sales8552_sum_0 = _cs_sales_price9523;
        SW_Aggregate_TD_7299_payload p{_sum_sales8552_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales8552_sum_0 + _sum_sales8552_sum_0;
            p._sum_sales8552_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9492{};
        memcpy(_i_category9492.data(), ((it.first)._i_category9492).data(), ((it.first)._i_category9492).length());
        tbl_Aggregate_TD_7299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category9492);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9488{};
        memcpy(_i_brand9488.data(), ((it.first)._i_brand9488).data(), ((it.first)._i_brand9488).length());
        tbl_Aggregate_TD_7299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand9488);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9570{};
        memcpy(_cc_name9570.data(), ((it.first)._cc_name9570).data(), ((it.first)._cc_name9570).length());
        tbl_Aggregate_TD_7299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name9570);
        tbl_Aggregate_TD_7299_output.setInt32(r, 3, (it.first)._d_year9542);
        tbl_Aggregate_TD_7299_output.setInt32(r, 4, (it.first)._d_moy9544);
        int32_t _sum_sales8552 = (it.second)._sum_sales8552_sum_0;
        tbl_Aggregate_TD_7299_output.setInt32(r, 5, _sum_sales8552);
        ++r;
    }
    tbl_Aggregate_TD_7299_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7299_output #Row: " << tbl_Aggregate_TD_7299_output.getNumRow() << std::endl;
}

void SW_Window_TD_7335(Table &tbl_Aggregate_TD_8665_output, Table &tbl_Window_TD_7335_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#9422, d_moy#9424) windowspecdefinition(i_category#9372, i_brand#9368, cc_name#9450, d_year#9422 ASC NULLS FIRST, d_moy#9424 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#9479)
    // Input: ListBuffer(i_category#9372, i_brand#9368, cc_name#9450, d_year#9422, d_moy#9424, sum_sales#8552)
    // Output: ListBuffer(i_category#9372, i_brand#9368, cc_name#9450, d_year#9422, d_moy#9424, sum_sales#8552, rn#9479)
    struct SW_Window_TD_7335Row {
        std::string _i_category9372;
        std::string _i_brand9368;
        std::string _cc_name9450;
        int32_t _d_year9422;
        int32_t _d_moy9424;
        int32_t _sum_sales8552;
    }; 

    int nrow = tbl_Aggregate_TD_8665_output.getNumRow();
    std::vector<SW_Window_TD_7335Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9372 = tbl_Aggregate_TD_8665_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7335_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category9372);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9368 = tbl_Aggregate_TD_8665_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7335_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand9368);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9450 = tbl_Aggregate_TD_8665_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7335_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name9450);
        int32_t _d_year9422 = tbl_Aggregate_TD_8665_output.getInt32(i, 3);
        tbl_Window_TD_7335_output.setInt32(r, 3,_d_year9422);
        int32_t _d_moy9424 = tbl_Aggregate_TD_8665_output.getInt32(i, 4);
        tbl_Window_TD_7335_output.setInt32(r, 4,_d_moy9424);
        int32_t _sum_sales8552 = tbl_Aggregate_TD_8665_output.getInt32(i, 5);
        tbl_Window_TD_7335_output.setInt32(r, 5,_sum_sales8552);
        r++;
        SW_Window_TD_7335Row t = {std::string(_i_category9372.data()),std::string(_i_brand9368.data()),std::string(_cc_name9450.data()),_d_year9422,_d_moy9424,_sum_sales8552};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7335Row& a, const SW_Window_TD_7335Row& b) const { return 
(a._i_category9372 < b._i_category9372) || 
 ((a._i_category9372 == b._i_category9372) && (a._i_brand9368 < b._i_brand9368)) || 
 ((a._i_category9372 == b._i_category9372) && (a._i_brand9368 == b._i_brand9368) && (a._cc_name9450 < b._cc_name9450)) || 
 ((a._i_category9372 == b._i_category9372) && (a._i_brand9368 == b._i_brand9368) && (a._cc_name9450 == b._cc_name9450) && (a._d_year9422 < b._d_year9422)) || 
 ((a._i_category9372 == b._i_category9372) && (a._i_brand9368 == b._i_brand9368) && (a._cc_name9450 == b._cc_name9450) && (a._d_year9422 == b._d_year9422) && (a._d_moy9424 < b._d_moy9424)); 
}
    }SW_Window_TD_7335_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7335_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category9372 == rows0[i-1]._i_category9372 && rows0[i]._i_brand9368 == rows0[i-1]._i_brand9368 && rows0[i]._cc_name9450 == rows0[i-1]._cc_name9450);
        isSameOrderKey0 = ( rows0[i]._d_year9422 == rows0[i-1]._d_year9422 && rows0[i]._d_moy9424 == rows0[i-1]._d_moy9424);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7335_output.setInt32(r, 6, ranks0[i]);
    }
    tbl_Window_TD_7335_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7335_output #Row: " << tbl_Window_TD_7335_output.getNumRow() << std::endl;
}

void SW_Window_TD_7220(Table &tbl_Filter_TD_8814_output, Table &tbl_Window_TD_7220_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#8566) windowspecdefinition(i_category#240, i_brand#236, cc_name#909, d_year#126, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#8553)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, _w0#8566, rn#8554)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, _w0#8566, rn#8554, avg_monthly_sales#8553)
    struct SW_Window_TD_7220Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _sum_sales8552;
        int32_t __w08566;
        int32_t _rn8554;
    }; 

    int nrow = tbl_Filter_TD_8814_output.getNumRow();
    std::vector<SW_Window_TD_7220Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_8814_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7220_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Filter_TD_8814_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7220_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Filter_TD_8814_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7220_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        int32_t _d_year126 = tbl_Filter_TD_8814_output.getInt32(i, 3);
        tbl_Window_TD_7220_output.setInt32(r, 3,_d_year126);
        int32_t _d_moy128 = tbl_Filter_TD_8814_output.getInt32(i, 4);
        tbl_Window_TD_7220_output.setInt32(r, 4,_d_moy128);
        int32_t _sum_sales8552 = tbl_Filter_TD_8814_output.getInt32(i, 5);
        tbl_Window_TD_7220_output.setInt32(r, 5,_sum_sales8552);
        int32_t __w08566 = tbl_Filter_TD_8814_output.getInt32(i, 6);
        tbl_Window_TD_7220_output.setInt32(r, 6,__w08566);
        int32_t _rn8554 = tbl_Filter_TD_8814_output.getInt32(i, 7);
        tbl_Window_TD_7220_output.setInt32(r, 7,_rn8554);
        r++;
        SW_Window_TD_7220Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_sum_sales8552,__w08566,_rn8554};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7220Row& a, const SW_Window_TD_7220Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 < b._cc_name909)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 < b._d_year126)); 
}
    }SW_Window_TD_7220_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7220_order0);
    int64_t sum0 = 0;
    int64_t currentRow0 = 0;
    std::string current_i_category2400 = "";
    std::string current_i_brand2360 = "";
    std::string current_cc_name9090 = "";
    int32_t current_d_year1260 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_i_category2400 != it._i_category240 || current_i_brand2360 != it._i_brand236 || current_cc_name9090 != it._cc_name909 || current_d_year1260 != it._d_year126) {
            sum0 = 0;
            currentRow0 = 0;
            current_i_category2400 = it._i_category240;
            current_i_brand2360 = it._i_brand236;
            current_cc_name9090 = it._cc_name909;
            current_d_year1260 = it._d_year126;
        }
        sum0 += it.__w08566;
        currentRow0 +=1;
        tbl_Window_TD_7220_output.setInt64(r, 8, sum0 / currentRow0 );
    }
    tbl_Window_TD_7220_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7220_output #Row: " << tbl_Window_TD_7220_output.getNumRow() << std::endl;
}

void SW_Window_TD_652(Table &tbl_Aggregate_TD_7299_output, Table &tbl_Window_TD_652_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#9542, d_moy#9544) windowspecdefinition(i_category#9492, i_brand#9488, cc_name#9570, d_year#9542 ASC NULLS FIRST, d_moy#9544 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#9599)
    // Input: ListBuffer(i_category#9492, i_brand#9488, cc_name#9570, d_year#9542, d_moy#9544, sum_sales#8552)
    // Output: ListBuffer(i_category#9492, i_brand#9488, cc_name#9570, d_year#9542, d_moy#9544, sum_sales#8552, rn#9599)
    struct SW_Window_TD_652Row {
        std::string _i_category9492;
        std::string _i_brand9488;
        std::string _cc_name9570;
        int32_t _d_year9542;
        int32_t _d_moy9544;
        int32_t _sum_sales8552;
    }; 

    int nrow = tbl_Aggregate_TD_7299_output.getNumRow();
    std::vector<SW_Window_TD_652Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9492 = tbl_Aggregate_TD_7299_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_652_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category9492);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9488 = tbl_Aggregate_TD_7299_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_652_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand9488);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9570 = tbl_Aggregate_TD_7299_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_652_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name9570);
        int32_t _d_year9542 = tbl_Aggregate_TD_7299_output.getInt32(i, 3);
        tbl_Window_TD_652_output.setInt32(r, 3,_d_year9542);
        int32_t _d_moy9544 = tbl_Aggregate_TD_7299_output.getInt32(i, 4);
        tbl_Window_TD_652_output.setInt32(r, 4,_d_moy9544);
        int32_t _sum_sales8552 = tbl_Aggregate_TD_7299_output.getInt32(i, 5);
        tbl_Window_TD_652_output.setInt32(r, 5,_sum_sales8552);
        r++;
        SW_Window_TD_652Row t = {std::string(_i_category9492.data()),std::string(_i_brand9488.data()),std::string(_cc_name9570.data()),_d_year9542,_d_moy9544,_sum_sales8552};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_652Row& a, const SW_Window_TD_652Row& b) const { return 
(a._i_category9492 < b._i_category9492) || 
 ((a._i_category9492 == b._i_category9492) && (a._i_brand9488 < b._i_brand9488)) || 
 ((a._i_category9492 == b._i_category9492) && (a._i_brand9488 == b._i_brand9488) && (a._cc_name9570 < b._cc_name9570)) || 
 ((a._i_category9492 == b._i_category9492) && (a._i_brand9488 == b._i_brand9488) && (a._cc_name9570 == b._cc_name9570) && (a._d_year9542 < b._d_year9542)) || 
 ((a._i_category9492 == b._i_category9492) && (a._i_brand9488 == b._i_brand9488) && (a._cc_name9570 == b._cc_name9570) && (a._d_year9542 == b._d_year9542) && (a._d_moy9544 < b._d_moy9544)); 
}
    }SW_Window_TD_652_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_652_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category9492 == rows0[i-1]._i_category9492 && rows0[i]._i_brand9488 == rows0[i-1]._i_brand9488 && rows0[i]._cc_name9570 == rows0[i-1]._cc_name9570);
        isSameOrderKey0 = ( rows0[i]._d_year9542 == rows0[i-1]._d_year9542 && rows0[i]._d_moy9544 == rows0[i-1]._d_moy9544);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_652_output.setInt32(r, 6, ranks0[i]);
    }
    tbl_Window_TD_652_output.setNumRow(r);
    std::cout << "tbl_Window_TD_652_output #Row: " << tbl_Window_TD_652_output.getNumRow() << std::endl;
}

void SW_Project_TD_614(Table &tbl_Window_TD_7335_output, Table &tbl_Project_TD_614_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#8552 AS sum_sales#8572)
    // Input: ListBuffer(i_category#9372, i_brand#9368, cc_name#9450, d_year#9422, d_moy#9424, sum_sales#8552, rn#9479)
    // Output: ListBuffer(i_category#9372, i_brand#9368, cc_name#9450, sum_sales#8572, rn#9479)
    int nrow1 = tbl_Window_TD_7335_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9372 = tbl_Window_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9368 = tbl_Window_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9450 = tbl_Window_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year9422 = tbl_Window_TD_7335_output.getInt32(i, 3);
        int32_t _d_moy9424 = tbl_Window_TD_7335_output.getInt32(i, 4);
        int32_t _sum_sales8552 = tbl_Window_TD_7335_output.getInt32(i, 5);
        int32_t _rn9479 = tbl_Window_TD_7335_output.getInt32(i, 6);
        int32_t _sum_sales8572 = _sum_sales8552;
        tbl_Project_TD_614_output.setInt32(i, 3, _sum_sales8572);
        tbl_Project_TD_614_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category9372);
        tbl_Project_TD_614_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand9368);
        tbl_Project_TD_614_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name9450);
        tbl_Project_TD_614_output.setInt32(i, 4, _rn9479);
    }
    tbl_Project_TD_614_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_614_output #Row: " << tbl_Project_TD_614_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6127(Table &tbl_Window_TD_7220_output, Table &tbl_Filter_TD_6127_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(avg_monthly_sales#8553) AND (avg_monthly_sales#8553 > 0.000000)) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#8552 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#8553 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#8553 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000)))
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, _w0#8566, rn#8554, avg_monthly_sales#8553)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, avg_monthly_sales#8553, rn#8554)
    int r = 0;
    int nrow1 = tbl_Window_TD_7220_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avg_monthly_sales8553 = tbl_Window_TD_7220_output.getInt32(i, 8);
        int32_t _sum_sales8552 = tbl_Window_TD_7220_output.getInt32(i, 5);
        if (((_avg_monthly_sales8553!= 0) && (_avg_monthly_sales8553 > 0.000000)) && (_sum_sales8552 > 0.1000000000000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_7220_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6127_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_7220_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6127_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_Window_TD_7220_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6127_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_t);
            int32_t _d_year126_t = tbl_Window_TD_7220_output.getInt32(i, 3);
            tbl_Filter_TD_6127_output.setInt32(r, 3, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_7220_output.getInt32(i, 4);
            tbl_Filter_TD_6127_output.setInt32(r, 4, _d_moy128_t);
            int32_t _sum_sales8552_t = tbl_Window_TD_7220_output.getInt32(i, 5);
            tbl_Filter_TD_6127_output.setInt32(r, 5, _sum_sales8552_t);
            int32_t _avg_monthly_sales8553_t = tbl_Window_TD_7220_output.getInt32(i, 8);
            tbl_Filter_TD_6127_output.setInt32(r, 6, _avg_monthly_sales8553_t);
            int32_t _rn8554_t = tbl_Window_TD_7220_output.getInt32(i, 7);
            tbl_Filter_TD_6127_output.setInt32(r, 7, _rn8554_t);
            r++;
        }
    }
    tbl_Filter_TD_6127_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6127_output #Row: " << tbl_Filter_TD_6127_output.getNumRow() << std::endl;
}

void SW_Project_TD_5418(Table &tbl_Window_TD_652_output, Table &tbl_Project_TD_5418_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#8552 AS sum_sales#8580)
    // Input: ListBuffer(i_category#9492, i_brand#9488, cc_name#9570, d_year#9542, d_moy#9544, sum_sales#8552, rn#9599)
    // Output: ListBuffer(i_category#9492, i_brand#9488, cc_name#9570, sum_sales#8580, rn#9599)
    int nrow1 = tbl_Window_TD_652_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9492 = tbl_Window_TD_652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand9488 = tbl_Window_TD_652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name9570 = tbl_Window_TD_652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year9542 = tbl_Window_TD_652_output.getInt32(i, 3);
        int32_t _d_moy9544 = tbl_Window_TD_652_output.getInt32(i, 4);
        int32_t _sum_sales8552 = tbl_Window_TD_652_output.getInt32(i, 5);
        int32_t _rn9599 = tbl_Window_TD_652_output.getInt32(i, 6);
        int32_t _sum_sales8580 = _sum_sales8552;
        tbl_Project_TD_5418_output.setInt32(i, 3, _sum_sales8580);
        tbl_Project_TD_5418_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category9492);
        tbl_Project_TD_5418_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand9488);
        tbl_Project_TD_5418_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name9570);
        tbl_Project_TD_5418_output.setInt32(i, 4, _rn9599);
    }
    tbl_Project_TD_5418_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5418_output #Row: " << tbl_Project_TD_5418_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5275_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    bool operator==(const SW_JOIN_INNER_TD_5275_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5275_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5275_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909));
    }
};
}
struct SW_JOIN_INNER_TD_5275_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _sum_sales8552;
    int32_t _avg_monthly_sales8553;
    int32_t _rn8554;
};
struct SW_JOIN_INNER_TD_5275_key_rightMajor {
    std::string _i_category9372;
    std::string _i_brand9368;
    std::string _cc_name9450;
    bool operator==(const SW_JOIN_INNER_TD_5275_key_rightMajor& other) const {
        return ((_i_category9372 == other._i_category9372) && (_i_brand9368 == other._i_brand9368) && (_cc_name9450 == other._cc_name9450));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5275_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5275_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category9372)) + (hash<string>()(k._i_brand9368)) + (hash<string>()(k._cc_name9450));
    }
};
}
struct SW_JOIN_INNER_TD_5275_payload_rightMajor {
    std::string _i_category9372;
    std::string _i_brand9368;
    std::string _cc_name9450;
    int32_t _sum_sales8572;
    int32_t _rn9479;
};
void SW_JOIN_INNER_TD_5275(Table &tbl_Filter_TD_6127_output, Table &tbl_Project_TD_614_output, Table &tbl_JOIN_INNER_TD_5275_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((((i_category#240 = i_category#9372) AND (i_brand#236 = i_brand#9368)) AND (cc_name#909 = cc_name#9450)) AND (rn#8554 = (rn#9479 + 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, avg_monthly_sales#8553, rn#8554)
    // Right Table: ListBuffer(i_category#9372, i_brand#9368, cc_name#9450, sum_sales#8572, rn#9479)
    // Output Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, avg_monthly_sales#8553, rn#8554, sum_sales#8572)
    int left_nrow = tbl_Filter_TD_6127_output.getNumRow();
    int right_nrow = tbl_Project_TD_614_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5275_key_leftMajor, SW_JOIN_INNER_TD_5275_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6127_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            SW_JOIN_INNER_TD_5275_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _cc_name909_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            int32_t _d_year126 = tbl_Filter_TD_6127_output.getInt32(i, 3);
            int32_t _d_moy128 = tbl_Filter_TD_6127_output.getInt32(i, 4);
            int32_t _sum_sales8552 = tbl_Filter_TD_6127_output.getInt32(i, 5);
            int32_t _avg_monthly_sales8553 = tbl_Filter_TD_6127_output.getInt32(i, 6);
            int32_t _rn8554 = tbl_Filter_TD_6127_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_5275_payload_leftMajor payloadA{_i_category240, _i_brand236, _cc_name909, _d_year126, _d_moy128, _sum_sales8552, _avg_monthly_sales8553, _rn8554};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_614_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category9372_k_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category9372_k = std::string(_i_category9372_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_k_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand9368_k = std::string(_i_brand9368_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_k_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name9450_k = std::string(_cc_name9450_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5275_key_leftMajor{_i_category9372_k, _i_brand9368_k, _cc_name9450_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _cc_name909 = (it->second)._cc_name909;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n{};
                memcpy(_cc_name909_n.data(), (_cc_name909).data(), (_cc_name909).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _sum_sales8552 = (it->second)._sum_sales8552;
                int32_t _avg_monthly_sales8553 = (it->second)._avg_monthly_sales8553;
                int32_t _rn8554 = (it->second)._rn8554;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category9372 = std::string(_i_category9372_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand9368 = std::string(_i_brand9368_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name9450 = std::string(_cc_name9450_n.data());
                int32_t _sum_sales8572 = tbl_Project_TD_614_output.getInt32(i, 3);
                int32_t _rn9479 = tbl_Project_TD_614_output.getInt32(i, 4);
                if (_rn8554 == NULL) {
                    tbl_JOIN_INNER_TD_5275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 5, _sum_sales8552);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 6, _avg_monthly_sales8553);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 7, _rn8554);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 8, _sum_sales8572);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5275_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5275_key_rightMajor, SW_JOIN_INNER_TD_5275_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_614_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category9372_k_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category9372_k = std::string(_i_category9372_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_k_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand9368_k = std::string(_i_brand9368_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_k_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name9450_k = std::string(_cc_name9450_k_n.data());
            SW_JOIN_INNER_TD_5275_key_rightMajor keyA{_i_category9372_k, _i_brand9368_k, _cc_name9450_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category9372 = std::string(_i_category9372_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand9368 = std::string(_i_brand9368_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_n = tbl_Project_TD_614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name9450 = std::string(_cc_name9450_n.data());
            int32_t _sum_sales8572 = tbl_Project_TD_614_output.getInt32(i, 3);
            int32_t _rn9479 = tbl_Project_TD_614_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5275_payload_rightMajor payloadA{_i_category9372, _i_brand9368, _cc_name9450, _sum_sales8572, _rn9479};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6127_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5275_key_rightMajor{_i_category240_k, _i_brand236_k, _cc_name909_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category9372 = (it->second)._i_category9372;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9372_n{};
                memcpy(_i_category9372_n.data(), (_i_category9372).data(), (_i_category9372).length());
                std::string _i_brand9368 = (it->second)._i_brand9368;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9368_n{};
                memcpy(_i_brand9368_n.data(), (_i_brand9368).data(), (_i_brand9368).length());
                std::string _cc_name9450 = (it->second)._cc_name9450;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name9450_n{};
                memcpy(_cc_name9450_n.data(), (_cc_name9450).data(), (_cc_name9450).length());
                int32_t _sum_sales8572 = (it->second)._sum_sales8572;
                int32_t _rn9479 = (it->second)._rn9479;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_6127_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                int32_t _d_year126 = tbl_Filter_TD_6127_output.getInt32(i, 3);
                int32_t _d_moy128 = tbl_Filter_TD_6127_output.getInt32(i, 4);
                int32_t _sum_sales8552 = tbl_Filter_TD_6127_output.getInt32(i, 5);
                int32_t _avg_monthly_sales8553 = tbl_Filter_TD_6127_output.getInt32(i, 6);
                int32_t _rn8554 = tbl_Filter_TD_6127_output.getInt32(i, 7);
                if (_rn8554 == NULL) {
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 8, _sum_sales8572);
                    tbl_JOIN_INNER_TD_5275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 5, _sum_sales8552);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 6, _avg_monthly_sales8553);
                    tbl_JOIN_INNER_TD_5275_output.setInt32(r, 7, _rn8554);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5275_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5275_output #Row: " << tbl_JOIN_INNER_TD_5275_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4697_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _rn8554;
    bool operator==(const SW_JOIN_INNER_TD_4697_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909) && (_rn8554 == other._rn8554));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4697_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4697_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909)) + (hash<int32_t>()(k._rn8554));
    }
};
}
struct SW_JOIN_INNER_TD_4697_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _sum_sales8552;
    int32_t _avg_monthly_sales8553;
    int32_t _rn8554;
    int32_t _sum_sales8572;
};
struct SW_JOIN_INNER_TD_4697_key_rightMajor {
    std::string _i_category9492;
    std::string _i_brand9488;
    std::string _cc_name9570;
    int32_t _rn9599;
    bool operator==(const SW_JOIN_INNER_TD_4697_key_rightMajor& other) const {
        return ((_i_category9492 == other._i_category9492) && (_i_brand9488 == other._i_brand9488) && (_cc_name9570 == other._cc_name9570) && (_rn9599 == other._rn9599));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4697_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4697_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category9492)) + (hash<string>()(k._i_brand9488)) + (hash<string>()(k._cc_name9570)) + (hash<int32_t>()(k._rn9599));
    }
};
}
struct SW_JOIN_INNER_TD_4697_payload_rightMajor {
    std::string _i_category9492;
    std::string _i_brand9488;
    std::string _cc_name9570;
    int32_t _sum_sales8580;
    int32_t _rn9599;
};
void SW_JOIN_INNER_TD_4697(Table &tbl_JOIN_INNER_TD_5275_output, Table &tbl_Project_TD_5418_output, Table &tbl_JOIN_INNER_TD_4697_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((((i_category#240 = i_category#9492) AND (i_brand#236 = i_brand#9488)) AND (cc_name#909 = cc_name#9570)) AND (rn#8554 = (rn#9599 - 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#8552, avg_monthly_sales#8553, rn#8554, sum_sales#8572)
    // Right Table: ListBuffer(i_category#9492, i_brand#9488, cc_name#9570, sum_sales#8580, rn#9599)
    // Output Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, sum_sales#8572, sum_sales#8580)
    int left_nrow = tbl_JOIN_INNER_TD_5275_output.getNumRow();
    int right_nrow = tbl_Project_TD_5418_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4697_key_leftMajor, SW_JOIN_INNER_TD_4697_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5275_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            int32_t _rn8554_k = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_4697_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _cc_name909_k, _rn8554_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 3);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 4);
            int32_t _sum_sales8552 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 5);
            int32_t _avg_monthly_sales8553 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 6);
            int32_t _rn8554 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 7);
            int32_t _sum_sales8572 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_4697_payload_leftMajor payloadA{_i_category240, _i_brand236, _cc_name909, _d_year126, _d_moy128, _sum_sales8552, _avg_monthly_sales8553, _rn8554, _sum_sales8572};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5418_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category9492_k_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category9492_k = std::string(_i_category9492_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_k_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand9488_k = std::string(_i_brand9488_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_k_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name9570_k = std::string(_cc_name9570_k_n.data());
            int32_t _rn9599_k = tbl_Project_TD_5418_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4697_key_leftMajor{_i_category9492_k, _i_brand9488_k, _cc_name9570_k, _rn9599_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _cc_name909 = (it->second)._cc_name909;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n{};
                memcpy(_cc_name909_n.data(), (_cc_name909).data(), (_cc_name909).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _sum_sales8552 = (it->second)._sum_sales8552;
                int32_t _avg_monthly_sales8553 = (it->second)._avg_monthly_sales8553;
                int32_t _rn8554 = (it->second)._rn8554;
                int32_t _sum_sales8572 = (it->second)._sum_sales8572;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category9492 = std::string(_i_category9492_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand9488 = std::string(_i_brand9488_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name9570 = std::string(_cc_name9570_n.data());
                int32_t _sum_sales8580 = tbl_Project_TD_5418_output.getInt32(i, 3);
                int32_t _rn9599 = tbl_Project_TD_5418_output.getInt32(i, 4);
                if (_rn8554 == (_rn9599 - 1)) {
                    tbl_JOIN_INNER_TD_4697_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4697_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4697_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 6, _sum_sales8552);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 5, _avg_monthly_sales8553);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 7, _sum_sales8572);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 8, _sum_sales8580);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4697_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4697_key_rightMajor, SW_JOIN_INNER_TD_4697_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5418_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category9492_k_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category9492_k = std::string(_i_category9492_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_k_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand9488_k = std::string(_i_brand9488_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_k_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name9570_k = std::string(_cc_name9570_k_n.data());
            int32_t _rn9599_k = tbl_Project_TD_5418_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4697_key_rightMajor keyA{_i_category9492_k, _i_brand9488_k, _cc_name9570_k, _rn9599_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category9492 = std::string(_i_category9492_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand9488 = std::string(_i_brand9488_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_n = tbl_Project_TD_5418_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name9570 = std::string(_cc_name9570_n.data());
            int32_t _sum_sales8580 = tbl_Project_TD_5418_output.getInt32(i, 3);
            int32_t _rn9599 = tbl_Project_TD_5418_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4697_payload_rightMajor payloadA{_i_category9492, _i_brand9488, _cc_name9570, _sum_sales8580, _rn9599};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5275_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            int32_t _rn8554_k = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4697_key_rightMajor{_i_category240_k, _i_brand236_k, _cc_name909_k, _rn8554_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category9492 = (it->second)._i_category9492;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9492_n{};
                memcpy(_i_category9492_n.data(), (_i_category9492).data(), (_i_category9492).length());
                std::string _i_brand9488 = (it->second)._i_brand9488;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand9488_n{};
                memcpy(_i_brand9488_n.data(), (_i_brand9488).data(), (_i_brand9488).length());
                std::string _cc_name9570 = (it->second)._cc_name9570;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name9570_n{};
                memcpy(_cc_name9570_n.data(), (_cc_name9570).data(), (_cc_name9570).length());
                int32_t _sum_sales8580 = (it->second)._sum_sales8580;
                int32_t _rn9599 = (it->second)._rn9599;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_JOIN_INNER_TD_5275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 3);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 4);
                int32_t _sum_sales8552 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 5);
                int32_t _avg_monthly_sales8553 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 6);
                int32_t _rn8554 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 7);
                int32_t _sum_sales8572 = tbl_JOIN_INNER_TD_5275_output.getInt32(i, 8);
                if (_rn8554 == (_rn9599 - 1)) {
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 8, _sum_sales8580);
                    tbl_JOIN_INNER_TD_4697_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4697_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4697_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 6, _sum_sales8552);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 5, _avg_monthly_sales8553);
                    tbl_JOIN_INNER_TD_4697_output.setInt32(r, 7, _sum_sales8572);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4697_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4697_output #Row: " << tbl_JOIN_INNER_TD_4697_output.getNumRow() << std::endl;
}

void SW_Project_TD_3450(Table &tbl_JOIN_INNER_TD_4697_output, Table &tbl_Project_TD_3450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#8572 AS psum#8555, sum_sales#8580 AS nsum#8556)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, sum_sales#8572, sum_sales#8580)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, psum#8555, nsum#8556)
    int nrow1 = tbl_JOIN_INNER_TD_4697_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_4697_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4697_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_JOIN_INNER_TD_4697_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4697_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_4697_output.getInt32(i, 4);
        int32_t _avg_monthly_sales8553 = tbl_JOIN_INNER_TD_4697_output.getInt32(i, 5);
        int32_t _sum_sales8552 = tbl_JOIN_INNER_TD_4697_output.getInt32(i, 6);
        int32_t _sum_sales8572 = tbl_JOIN_INNER_TD_4697_output.getInt32(i, 7);
        int32_t _sum_sales8580 = tbl_JOIN_INNER_TD_4697_output.getInt32(i, 8);
        int32_t _psum8555 = _sum_sales8572;
        tbl_Project_TD_3450_output.setInt32(i, 7, _psum8555);
        int32_t _nsum8556 = _sum_sales8580;
        tbl_Project_TD_3450_output.setInt32(i, 8, _nsum8556);
        tbl_Project_TD_3450_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category240);
        tbl_Project_TD_3450_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand236);
        tbl_Project_TD_3450_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name909);
        tbl_Project_TD_3450_output.setInt32(i, 3, _d_year126);
        tbl_Project_TD_3450_output.setInt32(i, 4, _d_moy128);
        tbl_Project_TD_3450_output.setInt32(i, 5, _avg_monthly_sales8553);
        tbl_Project_TD_3450_output.setInt32(i, 6, _sum_sales8552);
    }
    tbl_Project_TD_3450_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3450_output #Row: " << tbl_Project_TD_3450_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2845(Table &tbl_Project_TD_3450_output, Table &tbl_Sort_TD_2845_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(sum_sales#8552 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#8553 as decimal(22,6)))), DecimalType(22,6), true) ASC NULLS FIRST, cc_name#909 ASC NULLS FIRST)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, psum#8555, nsum#8556)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, psum#8555, nsum#8556)
    struct SW_Sort_TD_2845Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _avg_monthly_sales8553;
        int32_t _sum_sales8552;
        int32_t _psum8555;
        int32_t _nsum8556;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2845Row& a, const SW_Sort_TD_2845Row& b) const { return 
 || 
 ((a._true == b._true) && (a._cc_name909 < b._cc_name909)); 
}
    }SW_Sort_TD_2845_order; 

    int nrow1 = tbl_Project_TD_3450_output.getNumRow();
    std::vector<SW_Sort_TD_2845Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_3450_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Project_TD_3450_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Project_TD_3450_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int32_t _d_year126 = tbl_Project_TD_3450_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_Project_TD_3450_output.getInt32(i, 4);
        int32_t _avg_monthly_sales8553 = tbl_Project_TD_3450_output.getInt32(i, 5);
        int32_t _sum_sales8552 = tbl_Project_TD_3450_output.getInt32(i, 6);
        int32_t _psum8555 = tbl_Project_TD_3450_output.getInt32(i, 7);
        int32_t _nsum8556 = tbl_Project_TD_3450_output.getInt32(i, 8);
        SW_Sort_TD_2845Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_avg_monthly_sales8553,_sum_sales8552,_psum8555,_nsum8556};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2845_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2845_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), (it._i_brand236).data(), (it._i_brand236).length());
        tbl_Sort_TD_2845_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909{};
        memcpy(_cc_name909.data(), (it._cc_name909).data(), (it._cc_name909).length());
        tbl_Sort_TD_2845_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        tbl_Sort_TD_2845_output.setInt32(r, 3, it._d_year126);
        tbl_Sort_TD_2845_output.setInt32(r, 4, it._d_moy128);
        tbl_Sort_TD_2845_output.setInt32(r, 5, it._avg_monthly_sales8553);
        tbl_Sort_TD_2845_output.setInt32(r, 6, it._sum_sales8552);
        tbl_Sort_TD_2845_output.setInt32(r, 7, it._psum8555);
        tbl_Sort_TD_2845_output.setInt32(r, 8, it._nsum8556);
        ++r;
    }
    tbl_Sort_TD_2845_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2845_output #Row: " << tbl_Sort_TD_2845_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1839(Table &tbl_Sort_TD_2845_output, Table &tbl_LocalLimit_TD_1839_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, psum#8555, nsum#8556)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, psum#8555, nsum#8556)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2845_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1839_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Sort_TD_2845_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1839_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Sort_TD_2845_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1839_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
        tbl_LocalLimit_TD_1839_output.setInt32(r, 3, tbl_Sort_TD_2845_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1839_output.setInt32(r, 4, tbl_Sort_TD_2845_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1839_output.setInt32(r, 5, tbl_Sort_TD_2845_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1839_output.setInt32(r, 6, tbl_Sort_TD_2845_output.getInt32(i, 6));
        tbl_LocalLimit_TD_1839_output.setInt32(r, 7, tbl_Sort_TD_2845_output.getInt32(i, 7));
        tbl_LocalLimit_TD_1839_output.setInt32(r, 8, tbl_Sort_TD_2845_output.getInt32(i, 8));
        r++;
    }
    tbl_LocalLimit_TD_1839_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1839_output #Row: " << tbl_LocalLimit_TD_1839_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0515(Table &tbl_LocalLimit_TD_1839_output, Table &tbl_GlobalLimit_TD_0515_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, psum#8555, nsum#8556)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#8553, sum_sales#8552, psum#8555, nsum#8556)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1839_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_LocalLimit_TD_1839_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_LocalLimit_TD_1839_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
        tbl_GlobalLimit_TD_0515_output.setInt32(r, 3, tbl_LocalLimit_TD_1839_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0515_output.setInt32(r, 4, tbl_LocalLimit_TD_1839_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0515_output.setInt32(r, 5, tbl_LocalLimit_TD_1839_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0515_output.setInt32(r, 6, tbl_LocalLimit_TD_1839_output.getInt32(i, 6));
        tbl_GlobalLimit_TD_0515_output.setInt32(r, 7, tbl_LocalLimit_TD_1839_output.getInt32(i, 7));
        tbl_GlobalLimit_TD_0515_output.setInt32(r, 8, tbl_LocalLimit_TD_1839_output.getInt32(i, 8));
        r++;
    }
    tbl_GlobalLimit_TD_0515_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0515_output #Row: " << tbl_GlobalLimit_TD_0515_output.getNumRow() << std::endl;
}

