#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_1494(Table &tbl_SerializeFromObject_TD_15503_input, Table &tbl_Filter_TD_1494_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND (isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_call_center_sk#1115))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15503_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_15503_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_15503_input.getInt32(i, 0);
        int32_t _cs_call_center_sk1115 = tbl_SerializeFromObject_TD_15503_input.getInt32(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_15503_input.getInt32(i, 0);
            tbl_Filter_TD_1494_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_call_center_sk1115_t = tbl_SerializeFromObject_TD_15503_input.getInt32(i, 1);
            tbl_Filter_TD_1494_output.setInt32(r, 1, _cs_call_center_sk1115_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_15503_input.getInt32(i, 2);
            tbl_Filter_TD_1494_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_15503_input.getInt32(i, 3);
            tbl_Filter_TD_1494_output.setInt32(r, 3, _cs_sales_price1125_t);
            r++;
        }
    }
    tbl_Filter_TD_1494_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1494_output #Row: " << tbl_Filter_TD_1494_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14476(Table &tbl_SerializeFromObject_TD_15504_input, Table &tbl_Filter_TD_14476_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND (isnotnull(i_category#240) AND isnotnull(i_brand#236))))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15504_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_15504_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_15504_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_15504_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15504_input.getInt32(i, 0);
            tbl_Filter_TD_14476_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_15504_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_14476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_15504_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_14476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_14476_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14476_output #Row: " << tbl_Filter_TD_14476_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13842(Table &tbl_SerializeFromObject_TD_14908_input, Table &tbl_Filter_TD_13842_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#126 = 1999) OR ((d_year#126 = 1998) AND (d_moy#128 = 12))) OR ((d_year#126 = 2000) AND (d_moy#128 = 1))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14908_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_14908_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_14908_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_14908_input.getInt32(i, 0);
        if ((((_d_year126 == 1999) || ((_d_year126 == 1998) && (_d_moy128 == 12))) || ((_d_year126 == 2000) && (_d_moy128 == 1))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_14908_input.getInt32(i, 0);
            tbl_Filter_TD_13842_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_14908_input.getInt32(i, 1);
            tbl_Filter_TD_13842_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_14908_input.getInt32(i, 2);
            tbl_Filter_TD_13842_output.setInt32(r, 2, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_13842_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13842_output #Row: " << tbl_Filter_TD_13842_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13475_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_13475_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13475_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13475_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_13475_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_13475_key_rightMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_13475_key_rightMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13475_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13475_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_13475_payload_rightMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_item_sk1119;
    int32_t _cs_sales_price1125;
};
void SW_JOIN_INNER_TD_13475(Table &tbl_Filter_TD_14476_output, Table &tbl_Filter_TD_1494_output, Table &tbl_JOIN_INNER_TD_13475_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Right Table: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_sales_price#1125)
    int left_nrow = tbl_Filter_TD_14476_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1494_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13475_key_leftMajor, SW_JOIN_INNER_TD_13475_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14476_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14476_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13475_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14476_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_13475_payload_leftMajor payloadA{_i_item_sk228, _i_brand236, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1494_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_1494_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13475_key_leftMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_1494_output.getInt32(i, 0);
                int32_t _cs_call_center_sk1115 = tbl_Filter_TD_1494_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_1494_output.getInt32(i, 2);
                int32_t _cs_sales_price1125 = tbl_Filter_TD_1494_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13475_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13475_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_13475_output.setInt32(r, 2, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_13475_output.setInt32(r, 3, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_13475_output.setInt32(r, 4, _cs_sales_price1125);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13475_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13475_key_rightMajor, SW_JOIN_INNER_TD_13475_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1494_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_1494_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13475_key_rightMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_1494_output.getInt32(i, 0);
            int32_t _cs_call_center_sk1115 = tbl_Filter_TD_1494_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_1494_output.getInt32(i, 2);
            int32_t _cs_sales_price1125 = tbl_Filter_TD_1494_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13475_payload_rightMajor payloadA{_cs_sold_date_sk1104, _cs_call_center_sk1115, _cs_item_sk1119, _cs_sales_price1125};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14476_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14476_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13475_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_call_center_sk1115 = (it->second)._cs_call_center_sk1115;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _i_item_sk228 = tbl_Filter_TD_14476_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_13475_output.setInt32(r, 2, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_13475_output.setInt32(r, 3, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_13475_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_13475_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13475_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13475_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13475_output #Row: " << tbl_JOIN_INNER_TD_13475_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12642(Table &tbl_SerializeFromObject_TD_13313_input, Table &tbl_Filter_TD_12642_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_item_sk#7224) AND isnotnull(cs_sold_date_sk#7209)) AND isnotnull(cs_call_center_sk#7220)))
    // Input: ListBuffer(cs_sold_date_sk#7209, cs_call_center_sk#7220, cs_item_sk#7224, cs_sales_price#7230)
    // Output: ListBuffer(cs_sold_date_sk#7209, cs_call_center_sk#7220, cs_item_sk#7224, cs_sales_price#7230)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13313_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk7224 = tbl_SerializeFromObject_TD_13313_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk7209 = tbl_SerializeFromObject_TD_13313_input.getInt32(i, 0);
        int32_t _cs_call_center_sk7220 = tbl_SerializeFromObject_TD_13313_input.getInt32(i, 1);
        if (((1) && (1)) && (1)) {
            int32_t _cs_sold_date_sk7209_t = tbl_SerializeFromObject_TD_13313_input.getInt32(i, 0);
            tbl_Filter_TD_12642_output.setInt32(r, 0, _cs_sold_date_sk7209_t);
            int32_t _cs_call_center_sk7220_t = tbl_SerializeFromObject_TD_13313_input.getInt32(i, 1);
            tbl_Filter_TD_12642_output.setInt32(r, 1, _cs_call_center_sk7220_t);
            int32_t _cs_item_sk7224_t = tbl_SerializeFromObject_TD_13313_input.getInt32(i, 2);
            tbl_Filter_TD_12642_output.setInt32(r, 2, _cs_item_sk7224_t);
            int32_t _cs_sales_price7230_t = tbl_SerializeFromObject_TD_13313_input.getInt32(i, 3);
            tbl_Filter_TD_12642_output.setInt32(r, 3, _cs_sales_price7230_t);
            r++;
        }
    }
    tbl_Filter_TD_12642_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12642_output #Row: " << tbl_Filter_TD_12642_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12179(Table &tbl_SerializeFromObject_TD_13831_input, Table &tbl_Filter_TD_12179_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#7187) AND (isnotnull(i_category#7199) AND isnotnull(i_brand#7195))))
    // Input: ListBuffer(i_item_sk#7187, i_brand#7195, i_category#7199)
    // Output: ListBuffer(i_item_sk#7187, i_brand#7195, i_category#7199)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13831_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk7187 = tbl_SerializeFromObject_TD_13831_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category7199 = tbl_SerializeFromObject_TD_13831_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7195 = tbl_SerializeFromObject_TD_13831_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _i_item_sk7187_t = tbl_SerializeFromObject_TD_13831_input.getInt32(i, 0);
            tbl_Filter_TD_12179_output.setInt32(r, 0, _i_item_sk7187_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_t = tbl_SerializeFromObject_TD_13831_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12179_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand7195_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category7199_t = tbl_SerializeFromObject_TD_13831_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12179_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category7199_t);
            r++;
        }
    }
    tbl_Filter_TD_12179_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12179_output #Row: " << tbl_Filter_TD_12179_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12441(Table &tbl_SerializeFromObject_TD_13196_input, Table &tbl_Filter_TD_12441_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#903) AND isnotnull(cc_name#909)))
    // Input: ListBuffer(cc_call_center_sk#903, cc_name#909)
    // Output: ListBuffer(cc_call_center_sk#903, cc_name#909)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13196_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk903 = tbl_SerializeFromObject_TD_13196_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_SerializeFromObject_TD_13196_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _cc_call_center_sk903_t = tbl_SerializeFromObject_TD_13196_input.getInt32(i, 0);
            tbl_Filter_TD_12441_output.setInt32(r, 0, _cc_call_center_sk903_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_SerializeFromObject_TD_13196_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12441_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name909_t);
            r++;
        }
    }
    tbl_Filter_TD_12441_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12441_output #Row: " << tbl_Filter_TD_12441_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12539_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_12539_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12539_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12539_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_12539_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_sales_price1125;
};
struct SW_JOIN_INNER_TD_12539_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_12539_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12539_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12539_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_12539_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_12539(Table &tbl_JOIN_INNER_TD_13475_output, Table &tbl_Filter_TD_13842_output, Table &tbl_JOIN_INNER_TD_12539_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(i_brand#236, i_category#240, cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_sales_price#1125)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_call_center_sk#1115, cs_sales_price#1125, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_13475_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13842_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12539_key_leftMajor, SW_JOIN_INNER_TD_12539_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13475_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_13475_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12539_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13475_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13475_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13475_output.getInt32(i, 2);
            int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_13475_output.getInt32(i, 3);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_13475_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_12539_payload_leftMajor payloadA{_i_brand236, _i_category240, _cs_sold_date_sk1104, _cs_call_center_sk1115, _cs_sales_price1125};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13842_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13842_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12539_key_leftMajor{_d_date_sk120_k});
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
                int32_t _d_date_sk120 = tbl_Filter_TD_13842_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_13842_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Filter_TD_13842_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_12539_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12539_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12539_output.setInt32(r, 2, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_12539_output.setInt32(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_12539_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12539_output.setInt32(r, 5, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12539_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12539_key_rightMajor, SW_JOIN_INNER_TD_12539_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13842_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13842_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12539_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_13842_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_13842_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Filter_TD_13842_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12539_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13475_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_13475_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12539_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13475_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13475_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13475_output.getInt32(i, 2);
                int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_13475_output.getInt32(i, 3);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_13475_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_12539_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12539_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_12539_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12539_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12539_output.setInt32(r, 2, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_12539_output.setInt32(r, 3, _cs_sales_price1125);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12539_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12539_output #Row: " << tbl_JOIN_INNER_TD_12539_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11614(Table &tbl_SerializeFromObject_TD_12457_input, Table &tbl_Filter_TD_11614_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_item_sk#7344) AND isnotnull(cs_sold_date_sk#7329)) AND isnotnull(cs_call_center_sk#7340)))
    // Input: ListBuffer(cs_sold_date_sk#7329, cs_call_center_sk#7340, cs_item_sk#7344, cs_sales_price#7350)
    // Output: ListBuffer(cs_sold_date_sk#7329, cs_call_center_sk#7340, cs_item_sk#7344, cs_sales_price#7350)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12457_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk7344 = tbl_SerializeFromObject_TD_12457_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk7329 = tbl_SerializeFromObject_TD_12457_input.getInt32(i, 0);
        int32_t _cs_call_center_sk7340 = tbl_SerializeFromObject_TD_12457_input.getInt32(i, 1);
        if (((1) && (1)) && (1)) {
            int32_t _cs_sold_date_sk7329_t = tbl_SerializeFromObject_TD_12457_input.getInt32(i, 0);
            tbl_Filter_TD_11614_output.setInt32(r, 0, _cs_sold_date_sk7329_t);
            int32_t _cs_call_center_sk7340_t = tbl_SerializeFromObject_TD_12457_input.getInt32(i, 1);
            tbl_Filter_TD_11614_output.setInt32(r, 1, _cs_call_center_sk7340_t);
            int32_t _cs_item_sk7344_t = tbl_SerializeFromObject_TD_12457_input.getInt32(i, 2);
            tbl_Filter_TD_11614_output.setInt32(r, 2, _cs_item_sk7344_t);
            int32_t _cs_sales_price7350_t = tbl_SerializeFromObject_TD_12457_input.getInt32(i, 3);
            tbl_Filter_TD_11614_output.setInt32(r, 3, _cs_sales_price7350_t);
            r++;
        }
    }
    tbl_Filter_TD_11614_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11614_output #Row: " << tbl_Filter_TD_11614_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11946(Table &tbl_SerializeFromObject_TD_12156_input, Table &tbl_Filter_TD_11946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#7307) AND (isnotnull(i_category#7319) AND isnotnull(i_brand#7315))))
    // Input: ListBuffer(i_item_sk#7307, i_brand#7315, i_category#7319)
    // Output: ListBuffer(i_item_sk#7307, i_brand#7315, i_category#7319)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12156_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk7307 = tbl_SerializeFromObject_TD_12156_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category7319 = tbl_SerializeFromObject_TD_12156_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7315 = tbl_SerializeFromObject_TD_12156_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _i_item_sk7307_t = tbl_SerializeFromObject_TD_12156_input.getInt32(i, 0);
            tbl_Filter_TD_11946_output.setInt32(r, 0, _i_item_sk7307_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_t = tbl_SerializeFromObject_TD_12156_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11946_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand7315_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category7319_t = tbl_SerializeFromObject_TD_12156_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_11946_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category7319_t);
            r++;
        }
    }
    tbl_Filter_TD_11946_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11946_output #Row: " << tbl_Filter_TD_11946_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11892(Table &tbl_SerializeFromObject_TD_12387_input, Table &tbl_Filter_TD_11892_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#7249 = 1999) OR ((d_year#7249 = 1998) AND (d_moy#7251 = 12))) OR ((d_year#7249 = 2000) AND (d_moy#7251 = 1))) AND isnotnull(d_date_sk#7243)))
    // Input: ListBuffer(d_date_sk#7243, d_year#7249, d_moy#7251)
    // Output: ListBuffer(d_date_sk#7243, d_year#7249, d_moy#7251)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12387_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7249 = tbl_SerializeFromObject_TD_12387_input.getInt32(i, 1);
        int32_t _d_moy7251 = tbl_SerializeFromObject_TD_12387_input.getInt32(i, 2);
        int32_t _d_date_sk7243 = tbl_SerializeFromObject_TD_12387_input.getInt32(i, 0);
        if ((((_d_year7249 == 1999) || ((_d_year7249 == 1998) && (_d_moy7251 == 12))) || ((_d_year7249 == 2000) && (_d_moy7251 == 1))) && (1)) {
            int32_t _d_date_sk7243_t = tbl_SerializeFromObject_TD_12387_input.getInt32(i, 0);
            tbl_Filter_TD_11892_output.setInt32(r, 0, _d_date_sk7243_t);
            int32_t _d_year7249_t = tbl_SerializeFromObject_TD_12387_input.getInt32(i, 1);
            tbl_Filter_TD_11892_output.setInt32(r, 1, _d_year7249_t);
            int32_t _d_moy7251_t = tbl_SerializeFromObject_TD_12387_input.getInt32(i, 2);
            tbl_Filter_TD_11892_output.setInt32(r, 2, _d_moy7251_t);
            r++;
        }
    }
    tbl_Filter_TD_11892_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11892_output #Row: " << tbl_Filter_TD_11892_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11934_key_leftMajor {
    int32_t _i_item_sk7187;
    bool operator==(const SW_JOIN_INNER_TD_11934_key_leftMajor& other) const {
        return ((_i_item_sk7187 == other._i_item_sk7187));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11934_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11934_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk7187));
    }
};
}
struct SW_JOIN_INNER_TD_11934_payload_leftMajor {
    int32_t _i_item_sk7187;
    std::string _i_brand7195;
    std::string _i_category7199;
};
struct SW_JOIN_INNER_TD_11934_key_rightMajor {
    int32_t _cs_item_sk7224;
    bool operator==(const SW_JOIN_INNER_TD_11934_key_rightMajor& other) const {
        return ((_cs_item_sk7224 == other._cs_item_sk7224));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11934_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11934_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk7224));
    }
};
}
struct SW_JOIN_INNER_TD_11934_payload_rightMajor {
    int32_t _cs_sold_date_sk7209;
    int32_t _cs_call_center_sk7220;
    int32_t _cs_item_sk7224;
    int32_t _cs_sales_price7230;
};
void SW_JOIN_INNER_TD_11934(Table &tbl_Filter_TD_12179_output, Table &tbl_Filter_TD_12642_output, Table &tbl_JOIN_INNER_TD_11934_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#7224 = i_item_sk#7187))
    // Left Table: ListBuffer(i_item_sk#7187, i_brand#7195, i_category#7199)
    // Right Table: ListBuffer(cs_sold_date_sk#7209, cs_call_center_sk#7220, cs_item_sk#7224, cs_sales_price#7230)
    // Output Table: ListBuffer(i_brand#7195, i_category#7199, cs_sold_date_sk#7209, cs_call_center_sk#7220, cs_sales_price#7230)
    int left_nrow = tbl_Filter_TD_12179_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12642_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11934_key_leftMajor, SW_JOIN_INNER_TD_11934_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12179_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk7187_k = tbl_Filter_TD_12179_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11934_key_leftMajor keyA{_i_item_sk7187_k};
            int32_t _i_item_sk7187 = tbl_Filter_TD_12179_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n = tbl_Filter_TD_12179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand7195 = std::string(_i_brand7195_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n = tbl_Filter_TD_12179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category7199 = std::string(_i_category7199_n.data());
            SW_JOIN_INNER_TD_11934_payload_leftMajor payloadA{_i_item_sk7187, _i_brand7195, _i_category7199};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12642_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk7224_k = tbl_Filter_TD_12642_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11934_key_leftMajor{_cs_item_sk7224_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk7187 = (it->second)._i_item_sk7187;
                std::string _i_brand7195 = (it->second)._i_brand7195;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n{};
                memcpy(_i_brand7195_n.data(), (_i_brand7195).data(), (_i_brand7195).length());
                std::string _i_category7199 = (it->second)._i_category7199;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n{};
                memcpy(_i_category7199_n.data(), (_i_category7199).data(), (_i_category7199).length());
                int32_t _cs_sold_date_sk7209 = tbl_Filter_TD_12642_output.getInt32(i, 0);
                int32_t _cs_call_center_sk7220 = tbl_Filter_TD_12642_output.getInt32(i, 1);
                int32_t _cs_item_sk7224 = tbl_Filter_TD_12642_output.getInt32(i, 2);
                int32_t _cs_sales_price7230 = tbl_Filter_TD_12642_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7195_n);
                tbl_JOIN_INNER_TD_11934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7199_n);
                tbl_JOIN_INNER_TD_11934_output.setInt32(r, 2, _cs_sold_date_sk7209);
                tbl_JOIN_INNER_TD_11934_output.setInt32(r, 3, _cs_call_center_sk7220);
                tbl_JOIN_INNER_TD_11934_output.setInt32(r, 4, _cs_sales_price7230);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11934_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11934_key_rightMajor, SW_JOIN_INNER_TD_11934_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12642_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk7224_k = tbl_Filter_TD_12642_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11934_key_rightMajor keyA{_cs_item_sk7224_k};
            int32_t _cs_sold_date_sk7209 = tbl_Filter_TD_12642_output.getInt32(i, 0);
            int32_t _cs_call_center_sk7220 = tbl_Filter_TD_12642_output.getInt32(i, 1);
            int32_t _cs_item_sk7224 = tbl_Filter_TD_12642_output.getInt32(i, 2);
            int32_t _cs_sales_price7230 = tbl_Filter_TD_12642_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11934_payload_rightMajor payloadA{_cs_sold_date_sk7209, _cs_call_center_sk7220, _cs_item_sk7224, _cs_sales_price7230};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12179_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk7187_k = tbl_Filter_TD_12179_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11934_key_rightMajor{_i_item_sk7187_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk7209 = (it->second)._cs_sold_date_sk7209;
                int32_t _cs_call_center_sk7220 = (it->second)._cs_call_center_sk7220;
                int32_t _cs_item_sk7224 = (it->second)._cs_item_sk7224;
                int32_t _cs_sales_price7230 = (it->second)._cs_sales_price7230;
                int32_t _i_item_sk7187 = tbl_Filter_TD_12179_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n = tbl_Filter_TD_12179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand7195 = std::string(_i_brand7195_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n = tbl_Filter_TD_12179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category7199 = std::string(_i_category7199_n.data());
                tbl_JOIN_INNER_TD_11934_output.setInt32(r, 2, _cs_sold_date_sk7209);
                tbl_JOIN_INNER_TD_11934_output.setInt32(r, 3, _cs_call_center_sk7220);
                tbl_JOIN_INNER_TD_11934_output.setInt32(r, 4, _cs_sales_price7230);
                tbl_JOIN_INNER_TD_11934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7195_n);
                tbl_JOIN_INNER_TD_11934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7199_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11934_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11934_output #Row: " << tbl_JOIN_INNER_TD_11934_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11498_key_leftMajor {
    int32_t _cs_call_center_sk1115;
    bool operator==(const SW_JOIN_INNER_TD_11498_key_leftMajor& other) const {
        return ((_cs_call_center_sk1115 == other._cs_call_center_sk1115));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11498_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11498_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk1115));
    }
};
}
struct SW_JOIN_INNER_TD_11498_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_sales_price1125;
    int32_t _d_year126;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_11498_key_rightMajor {
    int32_t _cc_call_center_sk903;
    bool operator==(const SW_JOIN_INNER_TD_11498_key_rightMajor& other) const {
        return ((_cc_call_center_sk903 == other._cc_call_center_sk903));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11498_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11498_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk903));
    }
};
}
struct SW_JOIN_INNER_TD_11498_payload_rightMajor {
    int32_t _cc_call_center_sk903;
    std::string _cc_name909;
};
void SW_JOIN_INNER_TD_11498(Table &tbl_JOIN_INNER_TD_12539_output, Table &tbl_Filter_TD_12441_output, Table &tbl_JOIN_INNER_TD_11498_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#903 = cs_call_center_sk#1115))
    // Left Table: ListBuffer(i_brand#236, i_category#240, cs_call_center_sk#1115, cs_sales_price#1125, d_year#126, d_moy#128)
    // Right Table: ListBuffer(cc_call_center_sk#903, cc_name#909)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_sales_price#1125, d_year#126, d_moy#128, cc_name#909)
    int left_nrow = tbl_JOIN_INNER_TD_12539_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12441_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11498_key_leftMajor, SW_JOIN_INNER_TD_11498_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12539_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk1115_k = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11498_key_leftMajor keyA{_cs_call_center_sk1115_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12539_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12539_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 2);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11498_payload_leftMajor payloadA{_i_brand236, _i_category240, _cs_call_center_sk1115, _cs_sales_price1125, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12441_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk903_k = tbl_Filter_TD_12441_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11498_key_leftMajor{_cc_call_center_sk903_k});
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
                int32_t _cc_call_center_sk903 = tbl_Filter_TD_12441_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_12441_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                tbl_JOIN_INNER_TD_11498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11498_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_11498_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11498_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_11498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name909_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11498_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11498_key_rightMajor, SW_JOIN_INNER_TD_11498_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12441_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk903_k = tbl_Filter_TD_12441_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11498_key_rightMajor keyA{_cc_call_center_sk903_k};
            int32_t _cc_call_center_sk903 = tbl_Filter_TD_12441_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_12441_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            SW_JOIN_INNER_TD_11498_payload_rightMajor payloadA{_cc_call_center_sk903, _cc_name909};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12539_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk1115_k = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11498_key_rightMajor{_cs_call_center_sk1115_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk903 = (it->second)._cc_call_center_sk903;
                std::string _cc_name909 = (it->second)._cc_name909;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n{};
                memcpy(_cc_name909_n.data(), (_cc_name909).data(), (_cc_name909).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12539_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12539_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 2);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_12539_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name909_n);
                tbl_JOIN_INNER_TD_11498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11498_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_11498_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11498_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11498_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11498_output #Row: " << tbl_JOIN_INNER_TD_11498_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10758(Table &tbl_SerializeFromObject_TD_1148_input, Table &tbl_Filter_TD_10758_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#7369 = 1999) OR ((d_year#7369 = 1998) AND (d_moy#7371 = 12))) OR ((d_year#7369 = 2000) AND (d_moy#7371 = 1))) AND isnotnull(d_date_sk#7363)))
    // Input: ListBuffer(d_date_sk#7363, d_year#7369, d_moy#7371)
    // Output: ListBuffer(d_date_sk#7363, d_year#7369, d_moy#7371)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1148_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7369 = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 1);
        int32_t _d_moy7371 = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 2);
        int32_t _d_date_sk7363 = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 0);
        if ((((_d_year7369 == 1999) || ((_d_year7369 == 1998) && (_d_moy7371 == 12))) || ((_d_year7369 == 2000) && (_d_moy7371 == 1))) && (1)) {
            int32_t _d_date_sk7363_t = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 0);
            tbl_Filter_TD_10758_output.setInt32(r, 0, _d_date_sk7363_t);
            int32_t _d_year7369_t = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 1);
            tbl_Filter_TD_10758_output.setInt32(r, 1, _d_year7369_t);
            int32_t _d_moy7371_t = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 2);
            tbl_Filter_TD_10758_output.setInt32(r, 2, _d_moy7371_t);
            r++;
        }
    }
    tbl_Filter_TD_10758_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10758_output #Row: " << tbl_Filter_TD_10758_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10153_key_leftMajor {
    int32_t _i_item_sk7307;
    bool operator==(const SW_JOIN_INNER_TD_10153_key_leftMajor& other) const {
        return ((_i_item_sk7307 == other._i_item_sk7307));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10153_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10153_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk7307));
    }
};
}
struct SW_JOIN_INNER_TD_10153_payload_leftMajor {
    int32_t _i_item_sk7307;
    std::string _i_brand7315;
    std::string _i_category7319;
};
struct SW_JOIN_INNER_TD_10153_key_rightMajor {
    int32_t _cs_item_sk7344;
    bool operator==(const SW_JOIN_INNER_TD_10153_key_rightMajor& other) const {
        return ((_cs_item_sk7344 == other._cs_item_sk7344));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10153_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10153_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk7344));
    }
};
}
struct SW_JOIN_INNER_TD_10153_payload_rightMajor {
    int32_t _cs_sold_date_sk7329;
    int32_t _cs_call_center_sk7340;
    int32_t _cs_item_sk7344;
    int32_t _cs_sales_price7350;
};
void SW_JOIN_INNER_TD_10153(Table &tbl_Filter_TD_11946_output, Table &tbl_Filter_TD_11614_output, Table &tbl_JOIN_INNER_TD_10153_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#7344 = i_item_sk#7307))
    // Left Table: ListBuffer(i_item_sk#7307, i_brand#7315, i_category#7319)
    // Right Table: ListBuffer(cs_sold_date_sk#7329, cs_call_center_sk#7340, cs_item_sk#7344, cs_sales_price#7350)
    // Output Table: ListBuffer(i_brand#7315, i_category#7319, cs_sold_date_sk#7329, cs_call_center_sk#7340, cs_sales_price#7350)
    int left_nrow = tbl_Filter_TD_11946_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11614_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10153_key_leftMajor, SW_JOIN_INNER_TD_10153_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11946_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk7307_k = tbl_Filter_TD_11946_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10153_key_leftMajor keyA{_i_item_sk7307_k};
            int32_t _i_item_sk7307 = tbl_Filter_TD_11946_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n = tbl_Filter_TD_11946_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand7315 = std::string(_i_brand7315_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n = tbl_Filter_TD_11946_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category7319 = std::string(_i_category7319_n.data());
            SW_JOIN_INNER_TD_10153_payload_leftMajor payloadA{_i_item_sk7307, _i_brand7315, _i_category7319};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11614_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk7344_k = tbl_Filter_TD_11614_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10153_key_leftMajor{_cs_item_sk7344_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk7307 = (it->second)._i_item_sk7307;
                std::string _i_brand7315 = (it->second)._i_brand7315;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n{};
                memcpy(_i_brand7315_n.data(), (_i_brand7315).data(), (_i_brand7315).length());
                std::string _i_category7319 = (it->second)._i_category7319;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n{};
                memcpy(_i_category7319_n.data(), (_i_category7319).data(), (_i_category7319).length());
                int32_t _cs_sold_date_sk7329 = tbl_Filter_TD_11614_output.getInt32(i, 0);
                int32_t _cs_call_center_sk7340 = tbl_Filter_TD_11614_output.getInt32(i, 1);
                int32_t _cs_item_sk7344 = tbl_Filter_TD_11614_output.getInt32(i, 2);
                int32_t _cs_sales_price7350 = tbl_Filter_TD_11614_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10153_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7315_n);
                tbl_JOIN_INNER_TD_10153_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7319_n);
                tbl_JOIN_INNER_TD_10153_output.setInt32(r, 2, _cs_sold_date_sk7329);
                tbl_JOIN_INNER_TD_10153_output.setInt32(r, 3, _cs_call_center_sk7340);
                tbl_JOIN_INNER_TD_10153_output.setInt32(r, 4, _cs_sales_price7350);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10153_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10153_key_rightMajor, SW_JOIN_INNER_TD_10153_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11614_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk7344_k = tbl_Filter_TD_11614_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10153_key_rightMajor keyA{_cs_item_sk7344_k};
            int32_t _cs_sold_date_sk7329 = tbl_Filter_TD_11614_output.getInt32(i, 0);
            int32_t _cs_call_center_sk7340 = tbl_Filter_TD_11614_output.getInt32(i, 1);
            int32_t _cs_item_sk7344 = tbl_Filter_TD_11614_output.getInt32(i, 2);
            int32_t _cs_sales_price7350 = tbl_Filter_TD_11614_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10153_payload_rightMajor payloadA{_cs_sold_date_sk7329, _cs_call_center_sk7340, _cs_item_sk7344, _cs_sales_price7350};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11946_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk7307_k = tbl_Filter_TD_11946_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10153_key_rightMajor{_i_item_sk7307_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk7329 = (it->second)._cs_sold_date_sk7329;
                int32_t _cs_call_center_sk7340 = (it->second)._cs_call_center_sk7340;
                int32_t _cs_item_sk7344 = (it->second)._cs_item_sk7344;
                int32_t _cs_sales_price7350 = (it->second)._cs_sales_price7350;
                int32_t _i_item_sk7307 = tbl_Filter_TD_11946_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n = tbl_Filter_TD_11946_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand7315 = std::string(_i_brand7315_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n = tbl_Filter_TD_11946_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category7319 = std::string(_i_category7319_n.data());
                tbl_JOIN_INNER_TD_10153_output.setInt32(r, 2, _cs_sold_date_sk7329);
                tbl_JOIN_INNER_TD_10153_output.setInt32(r, 3, _cs_call_center_sk7340);
                tbl_JOIN_INNER_TD_10153_output.setInt32(r, 4, _cs_sales_price7350);
                tbl_JOIN_INNER_TD_10153_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7315_n);
                tbl_JOIN_INNER_TD_10153_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7319_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10153_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10153_output #Row: " << tbl_JOIN_INNER_TD_10153_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10729(Table &tbl_SerializeFromObject_TD_11506_input, Table &tbl_Filter_TD_10729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#7271) AND isnotnull(cc_name#7277)))
    // Input: ListBuffer(cc_call_center_sk#7271, cc_name#7277)
    // Output: ListBuffer(cc_call_center_sk#7271, cc_name#7277)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11506_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk7271 = tbl_SerializeFromObject_TD_11506_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7277 = tbl_SerializeFromObject_TD_11506_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _cc_call_center_sk7271_t = tbl_SerializeFromObject_TD_11506_input.getInt32(i, 0);
            tbl_Filter_TD_10729_output.setInt32(r, 0, _cc_call_center_sk7271_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_t = tbl_SerializeFromObject_TD_11506_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name7277_t);
            r++;
        }
    }
    tbl_Filter_TD_10729_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10729_output #Row: " << tbl_Filter_TD_10729_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10123_key_leftMajor {
    int32_t _cs_sold_date_sk7209;
    bool operator==(const SW_JOIN_INNER_TD_10123_key_leftMajor& other) const {
        return ((_cs_sold_date_sk7209 == other._cs_sold_date_sk7209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10123_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10123_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk7209));
    }
};
}
struct SW_JOIN_INNER_TD_10123_payload_leftMajor {
    std::string _i_brand7195;
    std::string _i_category7199;
    int32_t _cs_sold_date_sk7209;
    int32_t _cs_call_center_sk7220;
    int32_t _cs_sales_price7230;
};
struct SW_JOIN_INNER_TD_10123_key_rightMajor {
    int32_t _d_date_sk7243;
    bool operator==(const SW_JOIN_INNER_TD_10123_key_rightMajor& other) const {
        return ((_d_date_sk7243 == other._d_date_sk7243));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10123_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10123_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7243));
    }
};
}
struct SW_JOIN_INNER_TD_10123_payload_rightMajor {
    int32_t _d_date_sk7243;
    int32_t _d_year7249;
    int32_t _d_moy7251;
};
void SW_JOIN_INNER_TD_10123(Table &tbl_JOIN_INNER_TD_11934_output, Table &tbl_Filter_TD_11892_output, Table &tbl_JOIN_INNER_TD_10123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#7209 = d_date_sk#7243))
    // Left Table: ListBuffer(i_brand#7195, i_category#7199, cs_sold_date_sk#7209, cs_call_center_sk#7220, cs_sales_price#7230)
    // Right Table: ListBuffer(d_date_sk#7243, d_year#7249, d_moy#7251)
    // Output Table: ListBuffer(i_brand#7195, i_category#7199, cs_call_center_sk#7220, cs_sales_price#7230, d_year#7249, d_moy#7251)
    int left_nrow = tbl_JOIN_INNER_TD_11934_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11892_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10123_key_leftMajor, SW_JOIN_INNER_TD_10123_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11934_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk7209_k = tbl_JOIN_INNER_TD_11934_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10123_key_leftMajor keyA{_cs_sold_date_sk7209_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n = tbl_JOIN_INNER_TD_11934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand7195 = std::string(_i_brand7195_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n = tbl_JOIN_INNER_TD_11934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category7199 = std::string(_i_category7199_n.data());
            int32_t _cs_sold_date_sk7209 = tbl_JOIN_INNER_TD_11934_output.getInt32(i, 2);
            int32_t _cs_call_center_sk7220 = tbl_JOIN_INNER_TD_11934_output.getInt32(i, 3);
            int32_t _cs_sales_price7230 = tbl_JOIN_INNER_TD_11934_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_10123_payload_leftMajor payloadA{_i_brand7195, _i_category7199, _cs_sold_date_sk7209, _cs_call_center_sk7220, _cs_sales_price7230};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11892_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7243_k = tbl_Filter_TD_11892_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10123_key_leftMajor{_d_date_sk7243_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand7195 = (it->second)._i_brand7195;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n{};
                memcpy(_i_brand7195_n.data(), (_i_brand7195).data(), (_i_brand7195).length());
                std::string _i_category7199 = (it->second)._i_category7199;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n{};
                memcpy(_i_category7199_n.data(), (_i_category7199).data(), (_i_category7199).length());
                int32_t _cs_sold_date_sk7209 = (it->second)._cs_sold_date_sk7209;
                int32_t _cs_call_center_sk7220 = (it->second)._cs_call_center_sk7220;
                int32_t _cs_sales_price7230 = (it->second)._cs_sales_price7230;
                int32_t _d_date_sk7243 = tbl_Filter_TD_11892_output.getInt32(i, 0);
                int32_t _d_year7249 = tbl_Filter_TD_11892_output.getInt32(i, 1);
                int32_t _d_moy7251 = tbl_Filter_TD_11892_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10123_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7195_n);
                tbl_JOIN_INNER_TD_10123_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7199_n);
                tbl_JOIN_INNER_TD_10123_output.setInt32(r, 2, _cs_call_center_sk7220);
                tbl_JOIN_INNER_TD_10123_output.setInt32(r, 3, _cs_sales_price7230);
                tbl_JOIN_INNER_TD_10123_output.setInt32(r, 4, _d_year7249);
                tbl_JOIN_INNER_TD_10123_output.setInt32(r, 5, _d_moy7251);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10123_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10123_key_rightMajor, SW_JOIN_INNER_TD_10123_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11892_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7243_k = tbl_Filter_TD_11892_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10123_key_rightMajor keyA{_d_date_sk7243_k};
            int32_t _d_date_sk7243 = tbl_Filter_TD_11892_output.getInt32(i, 0);
            int32_t _d_year7249 = tbl_Filter_TD_11892_output.getInt32(i, 1);
            int32_t _d_moy7251 = tbl_Filter_TD_11892_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10123_payload_rightMajor payloadA{_d_date_sk7243, _d_year7249, _d_moy7251};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11934_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk7209_k = tbl_JOIN_INNER_TD_11934_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10123_key_rightMajor{_cs_sold_date_sk7209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7243 = (it->second)._d_date_sk7243;
                int32_t _d_year7249 = (it->second)._d_year7249;
                int32_t _d_moy7251 = (it->second)._d_moy7251;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n = tbl_JOIN_INNER_TD_11934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand7195 = std::string(_i_brand7195_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n = tbl_JOIN_INNER_TD_11934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category7199 = std::string(_i_category7199_n.data());
                int32_t _cs_sold_date_sk7209 = tbl_JOIN_INNER_TD_11934_output.getInt32(i, 2);
                int32_t _cs_call_center_sk7220 = tbl_JOIN_INNER_TD_11934_output.getInt32(i, 3);
                int32_t _cs_sales_price7230 = tbl_JOIN_INNER_TD_11934_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_10123_output.setInt32(r, 4, _d_year7249);
                tbl_JOIN_INNER_TD_10123_output.setInt32(r, 5, _d_moy7251);
                tbl_JOIN_INNER_TD_10123_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7195_n);
                tbl_JOIN_INNER_TD_10123_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7199_n);
                tbl_JOIN_INNER_TD_10123_output.setInt32(r, 2, _cs_call_center_sk7220);
                tbl_JOIN_INNER_TD_10123_output.setInt32(r, 3, _cs_sales_price7230);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10123_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10123_output #Row: " << tbl_JOIN_INNER_TD_10123_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_10672_key {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_10672_key& other) const { return (_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909) && (_d_year126 == other._d_year126) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_10672_key> {
    std::size_t operator() (const SW_Aggregate_TD_10672_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_10672_payload {
    int32_t _sum_sales6379_sum_0;
    int32_t __w06393_sum_1;
};
void SW_Aggregate_TD_10672(Table &tbl_JOIN_INNER_TD_11498_output, Table &tbl_Aggregate_TD_10672_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, MakeDecimal(sum(UnscaledValue(cs_sales_price#1125)),17,2) AS sum_sales#6379, MakeDecimal(sum(UnscaledValue(cs_sales_price#1125)),17,2) AS _w0#6393)
    // Input: ListBuffer(i_brand#236, i_category#240, cs_sales_price#1125, d_year#126, d_moy#128, cc_name#909)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, _w0#6393)
    std::unordered_map<SW_Aggregate_TD_10672_key, SW_Aggregate_TD_10672_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11498_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_11498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_11498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_11498_output.getInt32(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_11498_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_11498_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_JOIN_INNER_TD_11498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_10672_key k{std::string(_i_category240.data()), std::string(_i_brand236.data()), std::string(_cc_name909.data()), _d_year126, _d_moy128};
        int64_t _sum_sales6379_sum_0 = _cs_sales_price1125;
        int64_t __w06393_sum_1 = _cs_sales_price1125;
        SW_Aggregate_TD_10672_payload p{_sum_sales6379_sum_0, __w06393_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales6379_sum_0 + _sum_sales6379_sum_0;
            p._sum_sales6379_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w06393_sum_1 + __w06393_sum_1;
            p.__w06393_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_10672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), ((it.first)._i_brand236).data(), ((it.first)._i_brand236).length());
        tbl_Aggregate_TD_10672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909{};
        memcpy(_cc_name909.data(), ((it.first)._cc_name909).data(), ((it.first)._cc_name909).length());
        tbl_Aggregate_TD_10672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909);
        tbl_Aggregate_TD_10672_output.setInt32(r, 3, (it.first)._d_year126);
        tbl_Aggregate_TD_10672_output.setInt32(r, 4, (it.first)._d_moy128);
        int32_t _sum_sales6379 = (it.second)._sum_sales6379_sum_0;
        tbl_Aggregate_TD_10672_output.setInt32(r, 5, _sum_sales6379);
        int32_t __w06393 = (it.second).__w06393_sum_1;
        tbl_Aggregate_TD_10672_output.setInt32(r, 6, __w06393);
        ++r;
    }
    tbl_Aggregate_TD_10672_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10672_output #Row: " << tbl_Aggregate_TD_10672_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9205(Table &tbl_SerializeFromObject_TD_10920_input, Table &tbl_Filter_TD_9205_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#7391) AND isnotnull(cc_name#7397)))
    // Input: ListBuffer(cc_call_center_sk#7391, cc_name#7397)
    // Output: ListBuffer(cc_call_center_sk#7391, cc_name#7397)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10920_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk7391 = tbl_SerializeFromObject_TD_10920_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7397 = tbl_SerializeFromObject_TD_10920_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _cc_call_center_sk7391_t = tbl_SerializeFromObject_TD_10920_input.getInt32(i, 0);
            tbl_Filter_TD_9205_output.setInt32(r, 0, _cc_call_center_sk7391_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_t = tbl_SerializeFromObject_TD_10920_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9205_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name7397_t);
            r++;
        }
    }
    tbl_Filter_TD_9205_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9205_output #Row: " << tbl_Filter_TD_9205_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_961_key_leftMajor {
    int32_t _cs_sold_date_sk7329;
    bool operator==(const SW_JOIN_INNER_TD_961_key_leftMajor& other) const {
        return ((_cs_sold_date_sk7329 == other._cs_sold_date_sk7329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_961_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_961_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk7329));
    }
};
}
struct SW_JOIN_INNER_TD_961_payload_leftMajor {
    std::string _i_brand7315;
    std::string _i_category7319;
    int32_t _cs_sold_date_sk7329;
    int32_t _cs_call_center_sk7340;
    int32_t _cs_sales_price7350;
};
struct SW_JOIN_INNER_TD_961_key_rightMajor {
    int32_t _d_date_sk7363;
    bool operator==(const SW_JOIN_INNER_TD_961_key_rightMajor& other) const {
        return ((_d_date_sk7363 == other._d_date_sk7363));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_961_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_961_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7363));
    }
};
}
struct SW_JOIN_INNER_TD_961_payload_rightMajor {
    int32_t _d_date_sk7363;
    int32_t _d_year7369;
    int32_t _d_moy7371;
};
void SW_JOIN_INNER_TD_961(Table &tbl_JOIN_INNER_TD_10153_output, Table &tbl_Filter_TD_10758_output, Table &tbl_JOIN_INNER_TD_961_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#7329 = d_date_sk#7363))
    // Left Table: ListBuffer(i_brand#7315, i_category#7319, cs_sold_date_sk#7329, cs_call_center_sk#7340, cs_sales_price#7350)
    // Right Table: ListBuffer(d_date_sk#7363, d_year#7369, d_moy#7371)
    // Output Table: ListBuffer(i_brand#7315, i_category#7319, cs_call_center_sk#7340, cs_sales_price#7350, d_year#7369, d_moy#7371)
    int left_nrow = tbl_JOIN_INNER_TD_10153_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10758_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_961_key_leftMajor, SW_JOIN_INNER_TD_961_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10153_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk7329_k = tbl_JOIN_INNER_TD_10153_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_961_key_leftMajor keyA{_cs_sold_date_sk7329_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n = tbl_JOIN_INNER_TD_10153_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand7315 = std::string(_i_brand7315_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n = tbl_JOIN_INNER_TD_10153_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category7319 = std::string(_i_category7319_n.data());
            int32_t _cs_sold_date_sk7329 = tbl_JOIN_INNER_TD_10153_output.getInt32(i, 2);
            int32_t _cs_call_center_sk7340 = tbl_JOIN_INNER_TD_10153_output.getInt32(i, 3);
            int32_t _cs_sales_price7350 = tbl_JOIN_INNER_TD_10153_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_961_payload_leftMajor payloadA{_i_brand7315, _i_category7319, _cs_sold_date_sk7329, _cs_call_center_sk7340, _cs_sales_price7350};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10758_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7363_k = tbl_Filter_TD_10758_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_961_key_leftMajor{_d_date_sk7363_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand7315 = (it->second)._i_brand7315;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n{};
                memcpy(_i_brand7315_n.data(), (_i_brand7315).data(), (_i_brand7315).length());
                std::string _i_category7319 = (it->second)._i_category7319;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n{};
                memcpy(_i_category7319_n.data(), (_i_category7319).data(), (_i_category7319).length());
                int32_t _cs_sold_date_sk7329 = (it->second)._cs_sold_date_sk7329;
                int32_t _cs_call_center_sk7340 = (it->second)._cs_call_center_sk7340;
                int32_t _cs_sales_price7350 = (it->second)._cs_sales_price7350;
                int32_t _d_date_sk7363 = tbl_Filter_TD_10758_output.getInt32(i, 0);
                int32_t _d_year7369 = tbl_Filter_TD_10758_output.getInt32(i, 1);
                int32_t _d_moy7371 = tbl_Filter_TD_10758_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7315_n);
                tbl_JOIN_INNER_TD_961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7319_n);
                tbl_JOIN_INNER_TD_961_output.setInt32(r, 2, _cs_call_center_sk7340);
                tbl_JOIN_INNER_TD_961_output.setInt32(r, 3, _cs_sales_price7350);
                tbl_JOIN_INNER_TD_961_output.setInt32(r, 4, _d_year7369);
                tbl_JOIN_INNER_TD_961_output.setInt32(r, 5, _d_moy7371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_961_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_961_key_rightMajor, SW_JOIN_INNER_TD_961_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10758_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7363_k = tbl_Filter_TD_10758_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_961_key_rightMajor keyA{_d_date_sk7363_k};
            int32_t _d_date_sk7363 = tbl_Filter_TD_10758_output.getInt32(i, 0);
            int32_t _d_year7369 = tbl_Filter_TD_10758_output.getInt32(i, 1);
            int32_t _d_moy7371 = tbl_Filter_TD_10758_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_961_payload_rightMajor payloadA{_d_date_sk7363, _d_year7369, _d_moy7371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10153_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk7329_k = tbl_JOIN_INNER_TD_10153_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_961_key_rightMajor{_cs_sold_date_sk7329_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7363 = (it->second)._d_date_sk7363;
                int32_t _d_year7369 = (it->second)._d_year7369;
                int32_t _d_moy7371 = (it->second)._d_moy7371;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n = tbl_JOIN_INNER_TD_10153_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand7315 = std::string(_i_brand7315_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n = tbl_JOIN_INNER_TD_10153_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category7319 = std::string(_i_category7319_n.data());
                int32_t _cs_sold_date_sk7329 = tbl_JOIN_INNER_TD_10153_output.getInt32(i, 2);
                int32_t _cs_call_center_sk7340 = tbl_JOIN_INNER_TD_10153_output.getInt32(i, 3);
                int32_t _cs_sales_price7350 = tbl_JOIN_INNER_TD_10153_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_961_output.setInt32(r, 4, _d_year7369);
                tbl_JOIN_INNER_TD_961_output.setInt32(r, 5, _d_moy7371);
                tbl_JOIN_INNER_TD_961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7315_n);
                tbl_JOIN_INNER_TD_961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7319_n);
                tbl_JOIN_INNER_TD_961_output.setInt32(r, 2, _cs_call_center_sk7340);
                tbl_JOIN_INNER_TD_961_output.setInt32(r, 3, _cs_sales_price7350);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_961_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_961_output #Row: " << tbl_JOIN_INNER_TD_961_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9874_key_leftMajor {
    int32_t _cs_call_center_sk7220;
    bool operator==(const SW_JOIN_INNER_TD_9874_key_leftMajor& other) const {
        return ((_cs_call_center_sk7220 == other._cs_call_center_sk7220));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9874_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9874_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk7220));
    }
};
}
struct SW_JOIN_INNER_TD_9874_payload_leftMajor {
    std::string _i_brand7195;
    std::string _i_category7199;
    int32_t _cs_call_center_sk7220;
    int32_t _cs_sales_price7230;
    int32_t _d_year7249;
    int32_t _d_moy7251;
};
struct SW_JOIN_INNER_TD_9874_key_rightMajor {
    int32_t _cc_call_center_sk7271;
    bool operator==(const SW_JOIN_INNER_TD_9874_key_rightMajor& other) const {
        return ((_cc_call_center_sk7271 == other._cc_call_center_sk7271));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9874_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9874_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk7271));
    }
};
}
struct SW_JOIN_INNER_TD_9874_payload_rightMajor {
    int32_t _cc_call_center_sk7271;
    std::string _cc_name7277;
};
void SW_JOIN_INNER_TD_9874(Table &tbl_JOIN_INNER_TD_10123_output, Table &tbl_Filter_TD_10729_output, Table &tbl_JOIN_INNER_TD_9874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#7271 = cs_call_center_sk#7220))
    // Left Table: ListBuffer(i_brand#7195, i_category#7199, cs_call_center_sk#7220, cs_sales_price#7230, d_year#7249, d_moy#7251)
    // Right Table: ListBuffer(cc_call_center_sk#7271, cc_name#7277)
    // Output Table: ListBuffer(i_brand#7195, i_category#7199, cs_sales_price#7230, d_year#7249, d_moy#7251, cc_name#7277)
    int left_nrow = tbl_JOIN_INNER_TD_10123_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10729_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9874_key_leftMajor, SW_JOIN_INNER_TD_9874_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10123_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk7220_k = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9874_key_leftMajor keyA{_cs_call_center_sk7220_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n = tbl_JOIN_INNER_TD_10123_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand7195 = std::string(_i_brand7195_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n = tbl_JOIN_INNER_TD_10123_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category7199 = std::string(_i_category7199_n.data());
            int32_t _cs_call_center_sk7220 = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 2);
            int32_t _cs_sales_price7230 = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 3);
            int32_t _d_year7249 = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 4);
            int32_t _d_moy7251 = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9874_payload_leftMajor payloadA{_i_brand7195, _i_category7199, _cs_call_center_sk7220, _cs_sales_price7230, _d_year7249, _d_moy7251};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10729_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk7271_k = tbl_Filter_TD_10729_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9874_key_leftMajor{_cc_call_center_sk7271_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand7195 = (it->second)._i_brand7195;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n{};
                memcpy(_i_brand7195_n.data(), (_i_brand7195).data(), (_i_brand7195).length());
                std::string _i_category7199 = (it->second)._i_category7199;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n{};
                memcpy(_i_category7199_n.data(), (_i_category7199).data(), (_i_category7199).length());
                int32_t _cs_call_center_sk7220 = (it->second)._cs_call_center_sk7220;
                int32_t _cs_sales_price7230 = (it->second)._cs_sales_price7230;
                int32_t _d_year7249 = (it->second)._d_year7249;
                int32_t _d_moy7251 = (it->second)._d_moy7251;
                int32_t _cc_call_center_sk7271 = tbl_Filter_TD_10729_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_n = tbl_Filter_TD_10729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name7277 = std::string(_cc_name7277_n.data());
                tbl_JOIN_INNER_TD_9874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7195_n);
                tbl_JOIN_INNER_TD_9874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7199_n);
                tbl_JOIN_INNER_TD_9874_output.setInt32(r, 2, _cs_sales_price7230);
                tbl_JOIN_INNER_TD_9874_output.setInt32(r, 3, _d_year7249);
                tbl_JOIN_INNER_TD_9874_output.setInt32(r, 4, _d_moy7251);
                tbl_JOIN_INNER_TD_9874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name7277_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9874_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9874_key_rightMajor, SW_JOIN_INNER_TD_9874_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10729_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk7271_k = tbl_Filter_TD_10729_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9874_key_rightMajor keyA{_cc_call_center_sk7271_k};
            int32_t _cc_call_center_sk7271 = tbl_Filter_TD_10729_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_n = tbl_Filter_TD_10729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name7277 = std::string(_cc_name7277_n.data());
            SW_JOIN_INNER_TD_9874_payload_rightMajor payloadA{_cc_call_center_sk7271, _cc_name7277};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10123_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk7220_k = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9874_key_rightMajor{_cs_call_center_sk7220_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk7271 = (it->second)._cc_call_center_sk7271;
                std::string _cc_name7277 = (it->second)._cc_name7277;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_n{};
                memcpy(_cc_name7277_n.data(), (_cc_name7277).data(), (_cc_name7277).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n = tbl_JOIN_INNER_TD_10123_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand7195 = std::string(_i_brand7195_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n = tbl_JOIN_INNER_TD_10123_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category7199 = std::string(_i_category7199_n.data());
                int32_t _cs_call_center_sk7220 = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 2);
                int32_t _cs_sales_price7230 = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 3);
                int32_t _d_year7249 = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 4);
                int32_t _d_moy7251 = tbl_JOIN_INNER_TD_10123_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name7277_n);
                tbl_JOIN_INNER_TD_9874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7195_n);
                tbl_JOIN_INNER_TD_9874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7199_n);
                tbl_JOIN_INNER_TD_9874_output.setInt32(r, 2, _cs_sales_price7230);
                tbl_JOIN_INNER_TD_9874_output.setInt32(r, 3, _d_year7249);
                tbl_JOIN_INNER_TD_9874_output.setInt32(r, 4, _d_moy7251);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9874_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9874_output #Row: " << tbl_JOIN_INNER_TD_9874_output.getNumRow() << std::endl;
}

void SW_Window_TD_9391(Table &tbl_Aggregate_TD_10672_output, Table &tbl_Window_TD_9391_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#126, d_moy#128) windowspecdefinition(i_category#240, i_brand#236, cc_name#909, d_year#126 ASC NULLS FIRST, d_moy#128 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#6381)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, _w0#6393)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, _w0#6393, rn#6381)
    struct SW_Window_TD_9391Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _sum_sales6379;
        int32_t __w06393;
    }; 

    int nrow = tbl_Aggregate_TD_10672_output.getNumRow();
    std::vector<SW_Window_TD_9391Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_10672_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_9391_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Aggregate_TD_10672_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_9391_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Aggregate_TD_10672_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_9391_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        int32_t _d_year126 = tbl_Aggregate_TD_10672_output.getInt32(i, 3);
        tbl_Window_TD_9391_output.setInt32(r, 3,_d_year126);
        int32_t _d_moy128 = tbl_Aggregate_TD_10672_output.getInt32(i, 4);
        tbl_Window_TD_9391_output.setInt32(r, 4,_d_moy128);
        int32_t _sum_sales6379 = tbl_Aggregate_TD_10672_output.getInt32(i, 5);
        tbl_Window_TD_9391_output.setInt32(r, 5,_sum_sales6379);
        int32_t __w06393 = tbl_Aggregate_TD_10672_output.getInt32(i, 6);
        tbl_Window_TD_9391_output.setInt32(r, 6,__w06393);
        r++;
        SW_Window_TD_9391Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_sum_sales6379,__w06393};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_9391Row& a, const SW_Window_TD_9391Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 < b._cc_name909)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 < b._d_year126)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 == b._d_year126) && (a._d_moy128 < b._d_moy128)); 
}
    }SW_Window_TD_9391_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_9391_order0);
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
        tbl_Window_TD_9391_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_9391_output.setNumRow(r);
    std::cout << "tbl_Window_TD_9391_output #Row: " << tbl_Window_TD_9391_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8285_key_leftMajor {
    int32_t _cs_call_center_sk7340;
    bool operator==(const SW_JOIN_INNER_TD_8285_key_leftMajor& other) const {
        return ((_cs_call_center_sk7340 == other._cs_call_center_sk7340));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8285_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8285_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk7340));
    }
};
}
struct SW_JOIN_INNER_TD_8285_payload_leftMajor {
    std::string _i_brand7315;
    std::string _i_category7319;
    int32_t _cs_call_center_sk7340;
    int32_t _cs_sales_price7350;
    int32_t _d_year7369;
    int32_t _d_moy7371;
};
struct SW_JOIN_INNER_TD_8285_key_rightMajor {
    int32_t _cc_call_center_sk7391;
    bool operator==(const SW_JOIN_INNER_TD_8285_key_rightMajor& other) const {
        return ((_cc_call_center_sk7391 == other._cc_call_center_sk7391));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8285_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8285_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk7391));
    }
};
}
struct SW_JOIN_INNER_TD_8285_payload_rightMajor {
    int32_t _cc_call_center_sk7391;
    std::string _cc_name7397;
};
void SW_JOIN_INNER_TD_8285(Table &tbl_JOIN_INNER_TD_961_output, Table &tbl_Filter_TD_9205_output, Table &tbl_JOIN_INNER_TD_8285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#7391 = cs_call_center_sk#7340))
    // Left Table: ListBuffer(i_brand#7315, i_category#7319, cs_call_center_sk#7340, cs_sales_price#7350, d_year#7369, d_moy#7371)
    // Right Table: ListBuffer(cc_call_center_sk#7391, cc_name#7397)
    // Output Table: ListBuffer(i_brand#7315, i_category#7319, cs_sales_price#7350, d_year#7369, d_moy#7371, cc_name#7397)
    int left_nrow = tbl_JOIN_INNER_TD_961_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9205_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8285_key_leftMajor, SW_JOIN_INNER_TD_8285_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_961_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk7340_k = tbl_JOIN_INNER_TD_961_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8285_key_leftMajor keyA{_cs_call_center_sk7340_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n = tbl_JOIN_INNER_TD_961_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand7315 = std::string(_i_brand7315_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n = tbl_JOIN_INNER_TD_961_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category7319 = std::string(_i_category7319_n.data());
            int32_t _cs_call_center_sk7340 = tbl_JOIN_INNER_TD_961_output.getInt32(i, 2);
            int32_t _cs_sales_price7350 = tbl_JOIN_INNER_TD_961_output.getInt32(i, 3);
            int32_t _d_year7369 = tbl_JOIN_INNER_TD_961_output.getInt32(i, 4);
            int32_t _d_moy7371 = tbl_JOIN_INNER_TD_961_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8285_payload_leftMajor payloadA{_i_brand7315, _i_category7319, _cs_call_center_sk7340, _cs_sales_price7350, _d_year7369, _d_moy7371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9205_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk7391_k = tbl_Filter_TD_9205_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8285_key_leftMajor{_cc_call_center_sk7391_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand7315 = (it->second)._i_brand7315;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n{};
                memcpy(_i_brand7315_n.data(), (_i_brand7315).data(), (_i_brand7315).length());
                std::string _i_category7319 = (it->second)._i_category7319;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n{};
                memcpy(_i_category7319_n.data(), (_i_category7319).data(), (_i_category7319).length());
                int32_t _cs_call_center_sk7340 = (it->second)._cs_call_center_sk7340;
                int32_t _cs_sales_price7350 = (it->second)._cs_sales_price7350;
                int32_t _d_year7369 = (it->second)._d_year7369;
                int32_t _d_moy7371 = (it->second)._d_moy7371;
                int32_t _cc_call_center_sk7391 = tbl_Filter_TD_9205_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_n = tbl_Filter_TD_9205_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name7397 = std::string(_cc_name7397_n.data());
                tbl_JOIN_INNER_TD_8285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7315_n);
                tbl_JOIN_INNER_TD_8285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7319_n);
                tbl_JOIN_INNER_TD_8285_output.setInt32(r, 2, _cs_sales_price7350);
                tbl_JOIN_INNER_TD_8285_output.setInt32(r, 3, _d_year7369);
                tbl_JOIN_INNER_TD_8285_output.setInt32(r, 4, _d_moy7371);
                tbl_JOIN_INNER_TD_8285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name7397_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8285_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8285_key_rightMajor, SW_JOIN_INNER_TD_8285_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9205_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk7391_k = tbl_Filter_TD_9205_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8285_key_rightMajor keyA{_cc_call_center_sk7391_k};
            int32_t _cc_call_center_sk7391 = tbl_Filter_TD_9205_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_n = tbl_Filter_TD_9205_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name7397 = std::string(_cc_name7397_n.data());
            SW_JOIN_INNER_TD_8285_payload_rightMajor payloadA{_cc_call_center_sk7391, _cc_name7397};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_961_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk7340_k = tbl_JOIN_INNER_TD_961_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8285_key_rightMajor{_cs_call_center_sk7340_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk7391 = (it->second)._cc_call_center_sk7391;
                std::string _cc_name7397 = (it->second)._cc_name7397;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_n{};
                memcpy(_cc_name7397_n.data(), (_cc_name7397).data(), (_cc_name7397).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n = tbl_JOIN_INNER_TD_961_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand7315 = std::string(_i_brand7315_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n = tbl_JOIN_INNER_TD_961_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category7319 = std::string(_i_category7319_n.data());
                int32_t _cs_call_center_sk7340 = tbl_JOIN_INNER_TD_961_output.getInt32(i, 2);
                int32_t _cs_sales_price7350 = tbl_JOIN_INNER_TD_961_output.getInt32(i, 3);
                int32_t _d_year7369 = tbl_JOIN_INNER_TD_961_output.getInt32(i, 4);
                int32_t _d_moy7371 = tbl_JOIN_INNER_TD_961_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name7397_n);
                tbl_JOIN_INNER_TD_8285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand7315_n);
                tbl_JOIN_INNER_TD_8285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7319_n);
                tbl_JOIN_INNER_TD_8285_output.setInt32(r, 2, _cs_sales_price7350);
                tbl_JOIN_INNER_TD_8285_output.setInt32(r, 3, _d_year7369);
                tbl_JOIN_INNER_TD_8285_output.setInt32(r, 4, _d_moy7371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8285_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8285_output #Row: " << tbl_JOIN_INNER_TD_8285_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8324_key {
    std::string _i_category7199;
    std::string _i_brand7195;
    std::string _cc_name7277;
    int32_t _d_year7249;
    int32_t _d_moy7251;
    bool operator==(const SW_Aggregate_TD_8324_key& other) const { return (_i_category7199 == other._i_category7199) && (_i_brand7195 == other._i_brand7195) && (_cc_name7277 == other._cc_name7277) && (_d_year7249 == other._d_year7249) && (_d_moy7251 == other._d_moy7251); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8324_key> {
    std::size_t operator() (const SW_Aggregate_TD_8324_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category7199)) + (hash<string>()(k._i_brand7195)) + (hash<string>()(k._cc_name7277)) + (hash<int32_t>()(k._d_year7249)) + (hash<int32_t>()(k._d_moy7251));
    }
};
}
struct SW_Aggregate_TD_8324_payload {
    int32_t _sum_sales6379_sum_0;
};
void SW_Aggregate_TD_8324(Table &tbl_JOIN_INNER_TD_9874_output, Table &tbl_Aggregate_TD_8324_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#7199, i_brand#7195, cc_name#7277, d_year#7249, d_moy#7251, MakeDecimal(sum(UnscaledValue(cs_sales_price#7230)),17,2) AS sum_sales#6379)
    // Input: ListBuffer(i_brand#7195, i_category#7199, cs_sales_price#7230, d_year#7249, d_moy#7251, cc_name#7277)
    // Output: ListBuffer(i_category#7199, i_brand#7195, cc_name#7277, d_year#7249, d_moy#7251, sum_sales#6379)
    std::unordered_map<SW_Aggregate_TD_8324_key, SW_Aggregate_TD_8324_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9874_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7195 = tbl_JOIN_INNER_TD_9874_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category7199 = tbl_JOIN_INNER_TD_9874_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _cs_sales_price7230 = tbl_JOIN_INNER_TD_9874_output.getInt32(i, 2);
        int32_t _d_year7249 = tbl_JOIN_INNER_TD_9874_output.getInt32(i, 3);
        int32_t _d_moy7251 = tbl_JOIN_INNER_TD_9874_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7277 = tbl_JOIN_INNER_TD_9874_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_8324_key k{std::string(_i_category7199.data()), std::string(_i_brand7195.data()), std::string(_cc_name7277.data()), _d_year7249, _d_moy7251};
        int64_t _sum_sales6379_sum_0 = _cs_sales_price7230;
        SW_Aggregate_TD_8324_payload p{_sum_sales6379_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales6379_sum_0 + _sum_sales6379_sum_0;
            p._sum_sales6379_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category7199{};
        memcpy(_i_category7199.data(), ((it.first)._i_category7199).data(), ((it.first)._i_category7199).length());
        tbl_Aggregate_TD_8324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category7199);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7195{};
        memcpy(_i_brand7195.data(), ((it.first)._i_brand7195).data(), ((it.first)._i_brand7195).length());
        tbl_Aggregate_TD_8324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand7195);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7277{};
        memcpy(_cc_name7277.data(), ((it.first)._cc_name7277).data(), ((it.first)._cc_name7277).length());
        tbl_Aggregate_TD_8324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name7277);
        tbl_Aggregate_TD_8324_output.setInt32(r, 3, (it.first)._d_year7249);
        tbl_Aggregate_TD_8324_output.setInt32(r, 4, (it.first)._d_moy7251);
        int32_t _sum_sales6379 = (it.second)._sum_sales6379_sum_0;
        tbl_Aggregate_TD_8324_output.setInt32(r, 5, _sum_sales6379);
        ++r;
    }
    tbl_Aggregate_TD_8324_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8324_output #Row: " << tbl_Aggregate_TD_8324_output.getNumRow() << std::endl;
}

void SW_Filter_TD_825(Table &tbl_Window_TD_9391_output, Table &tbl_Filter_TD_825_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_year#126) AND (d_year#126 = 1999)))
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, _w0#6393, rn#6381)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, _w0#6393, rn#6381)
    int r = 0;
    int nrow1 = tbl_Window_TD_9391_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Window_TD_9391_output.getInt32(i, 3);
        if ((1) && (_d_year126 == 1999)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_9391_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_825_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_9391_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_825_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_Window_TD_9391_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_825_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_t);
            int32_t _d_year126_t = tbl_Window_TD_9391_output.getInt32(i, 3);
            tbl_Filter_TD_825_output.setInt32(r, 3, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_9391_output.getInt32(i, 4);
            tbl_Filter_TD_825_output.setInt32(r, 4, _d_moy128_t);
            int32_t _sum_sales6379_t = tbl_Window_TD_9391_output.getInt32(i, 5);
            tbl_Filter_TD_825_output.setInt32(r, 5, _sum_sales6379_t);
            int32_t __w06393_t = tbl_Window_TD_9391_output.getInt32(i, 6);
            tbl_Filter_TD_825_output.setInt32(r, 6, __w06393_t);
            int32_t _rn6381_t = tbl_Window_TD_9391_output.getInt32(i, 7);
            tbl_Filter_TD_825_output.setInt32(r, 7, _rn6381_t);
            r++;
        }
    }
    tbl_Filter_TD_825_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_825_output #Row: " << tbl_Filter_TD_825_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7310_key {
    std::string _i_category7319;
    std::string _i_brand7315;
    std::string _cc_name7397;
    int32_t _d_year7369;
    int32_t _d_moy7371;
    bool operator==(const SW_Aggregate_TD_7310_key& other) const { return (_i_category7319 == other._i_category7319) && (_i_brand7315 == other._i_brand7315) && (_cc_name7397 == other._cc_name7397) && (_d_year7369 == other._d_year7369) && (_d_moy7371 == other._d_moy7371); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7310_key> {
    std::size_t operator() (const SW_Aggregate_TD_7310_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category7319)) + (hash<string>()(k._i_brand7315)) + (hash<string>()(k._cc_name7397)) + (hash<int32_t>()(k._d_year7369)) + (hash<int32_t>()(k._d_moy7371));
    }
};
}
struct SW_Aggregate_TD_7310_payload {
    int32_t _sum_sales6379_sum_0;
};
void SW_Aggregate_TD_7310(Table &tbl_JOIN_INNER_TD_8285_output, Table &tbl_Aggregate_TD_7310_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#7319, i_brand#7315, cc_name#7397, d_year#7369, d_moy#7371, MakeDecimal(sum(UnscaledValue(cs_sales_price#7350)),17,2) AS sum_sales#6379)
    // Input: ListBuffer(i_brand#7315, i_category#7319, cs_sales_price#7350, d_year#7369, d_moy#7371, cc_name#7397)
    // Output: ListBuffer(i_category#7319, i_brand#7315, cc_name#7397, d_year#7369, d_moy#7371, sum_sales#6379)
    std::unordered_map<SW_Aggregate_TD_7310_key, SW_Aggregate_TD_7310_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8285_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7315 = tbl_JOIN_INNER_TD_8285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category7319 = tbl_JOIN_INNER_TD_8285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _cs_sales_price7350 = tbl_JOIN_INNER_TD_8285_output.getInt32(i, 2);
        int32_t _d_year7369 = tbl_JOIN_INNER_TD_8285_output.getInt32(i, 3);
        int32_t _d_moy7371 = tbl_JOIN_INNER_TD_8285_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7397 = tbl_JOIN_INNER_TD_8285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_7310_key k{std::string(_i_category7319.data()), std::string(_i_brand7315.data()), std::string(_cc_name7397.data()), _d_year7369, _d_moy7371};
        int64_t _sum_sales6379_sum_0 = _cs_sales_price7350;
        SW_Aggregate_TD_7310_payload p{_sum_sales6379_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales6379_sum_0 + _sum_sales6379_sum_0;
            p._sum_sales6379_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category7319{};
        memcpy(_i_category7319.data(), ((it.first)._i_category7319).data(), ((it.first)._i_category7319).length());
        tbl_Aggregate_TD_7310_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category7319);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7315{};
        memcpy(_i_brand7315.data(), ((it.first)._i_brand7315).data(), ((it.first)._i_brand7315).length());
        tbl_Aggregate_TD_7310_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand7315);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7397{};
        memcpy(_cc_name7397.data(), ((it.first)._cc_name7397).data(), ((it.first)._cc_name7397).length());
        tbl_Aggregate_TD_7310_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name7397);
        tbl_Aggregate_TD_7310_output.setInt32(r, 3, (it.first)._d_year7369);
        tbl_Aggregate_TD_7310_output.setInt32(r, 4, (it.first)._d_moy7371);
        int32_t _sum_sales6379 = (it.second)._sum_sales6379_sum_0;
        tbl_Aggregate_TD_7310_output.setInt32(r, 5, _sum_sales6379);
        ++r;
    }
    tbl_Aggregate_TD_7310_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7310_output #Row: " << tbl_Aggregate_TD_7310_output.getNumRow() << std::endl;
}

void SW_Window_TD_7766(Table &tbl_Aggregate_TD_8324_output, Table &tbl_Window_TD_7766_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#7249, d_moy#7251) windowspecdefinition(i_category#7199, i_brand#7195, cc_name#7277, d_year#7249 ASC NULLS FIRST, d_moy#7251 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#7306)
    // Input: ListBuffer(i_category#7199, i_brand#7195, cc_name#7277, d_year#7249, d_moy#7251, sum_sales#6379)
    // Output: ListBuffer(i_category#7199, i_brand#7195, cc_name#7277, d_year#7249, d_moy#7251, sum_sales#6379, rn#7306)
    struct SW_Window_TD_7766Row {
        std::string _i_category7199;
        std::string _i_brand7195;
        std::string _cc_name7277;
        int32_t _d_year7249;
        int32_t _d_moy7251;
        int32_t _sum_sales6379;
    }; 

    int nrow = tbl_Aggregate_TD_8324_output.getNumRow();
    std::vector<SW_Window_TD_7766Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category7199 = tbl_Aggregate_TD_8324_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7766_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category7199);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7195 = tbl_Aggregate_TD_8324_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7766_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand7195);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7277 = tbl_Aggregate_TD_8324_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7766_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name7277);
        int32_t _d_year7249 = tbl_Aggregate_TD_8324_output.getInt32(i, 3);
        tbl_Window_TD_7766_output.setInt32(r, 3,_d_year7249);
        int32_t _d_moy7251 = tbl_Aggregate_TD_8324_output.getInt32(i, 4);
        tbl_Window_TD_7766_output.setInt32(r, 4,_d_moy7251);
        int32_t _sum_sales6379 = tbl_Aggregate_TD_8324_output.getInt32(i, 5);
        tbl_Window_TD_7766_output.setInt32(r, 5,_sum_sales6379);
        r++;
        SW_Window_TD_7766Row t = {std::string(_i_category7199.data()),std::string(_i_brand7195.data()),std::string(_cc_name7277.data()),_d_year7249,_d_moy7251,_sum_sales6379};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7766Row& a, const SW_Window_TD_7766Row& b) const { return 
(a._i_category7199 < b._i_category7199) || 
 ((a._i_category7199 == b._i_category7199) && (a._i_brand7195 < b._i_brand7195)) || 
 ((a._i_category7199 == b._i_category7199) && (a._i_brand7195 == b._i_brand7195) && (a._cc_name7277 < b._cc_name7277)) || 
 ((a._i_category7199 == b._i_category7199) && (a._i_brand7195 == b._i_brand7195) && (a._cc_name7277 == b._cc_name7277) && (a._d_year7249 < b._d_year7249)) || 
 ((a._i_category7199 == b._i_category7199) && (a._i_brand7195 == b._i_brand7195) && (a._cc_name7277 == b._cc_name7277) && (a._d_year7249 == b._d_year7249) && (a._d_moy7251 < b._d_moy7251)); 
}
    }SW_Window_TD_7766_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7766_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category7199 == rows0[i-1]._i_category7199 && rows0[i]._i_brand7195 == rows0[i-1]._i_brand7195 && rows0[i]._cc_name7277 == rows0[i-1]._cc_name7277);
        isSameOrderKey0 = ( rows0[i]._d_year7249 == rows0[i-1]._d_year7249 && rows0[i]._d_moy7251 == rows0[i-1]._d_moy7251);
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
        tbl_Window_TD_7766_output.setInt32(r, 6, ranks0[i]);
    }
    tbl_Window_TD_7766_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7766_output #Row: " << tbl_Window_TD_7766_output.getNumRow() << std::endl;
}

void SW_Window_TD_7505(Table &tbl_Filter_TD_825_output, Table &tbl_Window_TD_7505_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#6393) windowspecdefinition(i_category#240, i_brand#236, cc_name#909, d_year#126, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#6380)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, _w0#6393, rn#6381)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, _w0#6393, rn#6381, avg_monthly_sales#6380)
    struct SW_Window_TD_7505Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _sum_sales6379;
        int32_t __w06393;
        int32_t _rn6381;
    }; 

    int nrow = tbl_Filter_TD_825_output.getNumRow();
    std::vector<SW_Window_TD_7505Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_825_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7505_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Filter_TD_825_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7505_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Filter_TD_825_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7505_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        int32_t _d_year126 = tbl_Filter_TD_825_output.getInt32(i, 3);
        tbl_Window_TD_7505_output.setInt32(r, 3,_d_year126);
        int32_t _d_moy128 = tbl_Filter_TD_825_output.getInt32(i, 4);
        tbl_Window_TD_7505_output.setInt32(r, 4,_d_moy128);
        int32_t _sum_sales6379 = tbl_Filter_TD_825_output.getInt32(i, 5);
        tbl_Window_TD_7505_output.setInt32(r, 5,_sum_sales6379);
        int32_t __w06393 = tbl_Filter_TD_825_output.getInt32(i, 6);
        tbl_Window_TD_7505_output.setInt32(r, 6,__w06393);
        int32_t _rn6381 = tbl_Filter_TD_825_output.getInt32(i, 7);
        tbl_Window_TD_7505_output.setInt32(r, 7,_rn6381);
        r++;
        SW_Window_TD_7505Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_sum_sales6379,__w06393,_rn6381};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7505Row& a, const SW_Window_TD_7505Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 < b._cc_name909)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 < b._d_year126)); 
}
    }SW_Window_TD_7505_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7505_order0);
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
        sum0 += it.__w06393;
        currentRow0 +=1;
        tbl_Window_TD_7505_output.setInt64(r, 8, sum0 / currentRow0 );
    }
    tbl_Window_TD_7505_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7505_output #Row: " << tbl_Window_TD_7505_output.getNumRow() << std::endl;
}

void SW_Window_TD_6404(Table &tbl_Aggregate_TD_7310_output, Table &tbl_Window_TD_6404_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#7369, d_moy#7371) windowspecdefinition(i_category#7319, i_brand#7315, cc_name#7397, d_year#7369 ASC NULLS FIRST, d_moy#7371 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#7426)
    // Input: ListBuffer(i_category#7319, i_brand#7315, cc_name#7397, d_year#7369, d_moy#7371, sum_sales#6379)
    // Output: ListBuffer(i_category#7319, i_brand#7315, cc_name#7397, d_year#7369, d_moy#7371, sum_sales#6379, rn#7426)
    struct SW_Window_TD_6404Row {
        std::string _i_category7319;
        std::string _i_brand7315;
        std::string _cc_name7397;
        int32_t _d_year7369;
        int32_t _d_moy7371;
        int32_t _sum_sales6379;
    }; 

    int nrow = tbl_Aggregate_TD_7310_output.getNumRow();
    std::vector<SW_Window_TD_6404Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category7319 = tbl_Aggregate_TD_7310_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_6404_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category7319);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7315 = tbl_Aggregate_TD_7310_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_6404_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand7315);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7397 = tbl_Aggregate_TD_7310_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_6404_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name7397);
        int32_t _d_year7369 = tbl_Aggregate_TD_7310_output.getInt32(i, 3);
        tbl_Window_TD_6404_output.setInt32(r, 3,_d_year7369);
        int32_t _d_moy7371 = tbl_Aggregate_TD_7310_output.getInt32(i, 4);
        tbl_Window_TD_6404_output.setInt32(r, 4,_d_moy7371);
        int32_t _sum_sales6379 = tbl_Aggregate_TD_7310_output.getInt32(i, 5);
        tbl_Window_TD_6404_output.setInt32(r, 5,_sum_sales6379);
        r++;
        SW_Window_TD_6404Row t = {std::string(_i_category7319.data()),std::string(_i_brand7315.data()),std::string(_cc_name7397.data()),_d_year7369,_d_moy7371,_sum_sales6379};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_6404Row& a, const SW_Window_TD_6404Row& b) const { return 
(a._i_category7319 < b._i_category7319) || 
 ((a._i_category7319 == b._i_category7319) && (a._i_brand7315 < b._i_brand7315)) || 
 ((a._i_category7319 == b._i_category7319) && (a._i_brand7315 == b._i_brand7315) && (a._cc_name7397 < b._cc_name7397)) || 
 ((a._i_category7319 == b._i_category7319) && (a._i_brand7315 == b._i_brand7315) && (a._cc_name7397 == b._cc_name7397) && (a._d_year7369 < b._d_year7369)) || 
 ((a._i_category7319 == b._i_category7319) && (a._i_brand7315 == b._i_brand7315) && (a._cc_name7397 == b._cc_name7397) && (a._d_year7369 == b._d_year7369) && (a._d_moy7371 < b._d_moy7371)); 
}
    }SW_Window_TD_6404_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_6404_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category7319 == rows0[i-1]._i_category7319 && rows0[i]._i_brand7315 == rows0[i-1]._i_brand7315 && rows0[i]._cc_name7397 == rows0[i-1]._cc_name7397);
        isSameOrderKey0 = ( rows0[i]._d_year7369 == rows0[i-1]._d_year7369 && rows0[i]._d_moy7371 == rows0[i-1]._d_moy7371);
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
        tbl_Window_TD_6404_output.setInt32(r, 6, ranks0[i]);
    }
    tbl_Window_TD_6404_output.setNumRow(r);
    std::cout << "tbl_Window_TD_6404_output #Row: " << tbl_Window_TD_6404_output.getNumRow() << std::endl;
}

void SW_Project_TD_6367(Table &tbl_Window_TD_7766_output, Table &tbl_Project_TD_6367_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#6379 AS sum_sales#6399)
    // Input: ListBuffer(i_category#7199, i_brand#7195, cc_name#7277, d_year#7249, d_moy#7251, sum_sales#6379, rn#7306)
    // Output: ListBuffer(i_category#7199, i_brand#7195, cc_name#7277, sum_sales#6399, rn#7306)
    int nrow1 = tbl_Window_TD_7766_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category7199 = tbl_Window_TD_7766_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7195 = tbl_Window_TD_7766_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7277 = tbl_Window_TD_7766_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year7249 = tbl_Window_TD_7766_output.getInt32(i, 3);
        int32_t _d_moy7251 = tbl_Window_TD_7766_output.getInt32(i, 4);
        int32_t _sum_sales6379 = tbl_Window_TD_7766_output.getInt32(i, 5);
        int32_t _rn7306 = tbl_Window_TD_7766_output.getInt32(i, 6);
        int32_t _sum_sales6399 = _sum_sales6379;
        tbl_Project_TD_6367_output.setInt32(i, 3, _sum_sales6399);
        tbl_Project_TD_6367_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category7199);
        tbl_Project_TD_6367_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand7195);
        tbl_Project_TD_6367_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name7277);
        tbl_Project_TD_6367_output.setInt32(i, 4, _rn7306);
    }
    tbl_Project_TD_6367_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6367_output #Row: " << tbl_Project_TD_6367_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6216(Table &tbl_Window_TD_7505_output, Table &tbl_Filter_TD_6216_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(avg_monthly_sales#6380) AND (avg_monthly_sales#6380 > 0.000000)) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#6379 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#6380 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#6380 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000)))
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, _w0#6393, rn#6381, avg_monthly_sales#6380)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, avg_monthly_sales#6380, rn#6381)
    int r = 0;
    int nrow1 = tbl_Window_TD_7505_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avg_monthly_sales6380 = tbl_Window_TD_7505_output.getInt32(i, 8);
        int32_t _sum_sales6379 = tbl_Window_TD_7505_output.getInt32(i, 5);
        if (((1) && (_avg_monthly_sales6380 > 0.000000)) && (_sum_sales6379 > 0.1000000000000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_7505_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_7505_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_Window_TD_7505_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_t);
            int32_t _d_year126_t = tbl_Window_TD_7505_output.getInt32(i, 3);
            tbl_Filter_TD_6216_output.setInt32(r, 3, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_7505_output.getInt32(i, 4);
            tbl_Filter_TD_6216_output.setInt32(r, 4, _d_moy128_t);
            int32_t _sum_sales6379_t = tbl_Window_TD_7505_output.getInt32(i, 5);
            tbl_Filter_TD_6216_output.setInt32(r, 5, _sum_sales6379_t);
            int32_t _avg_monthly_sales6380_t = tbl_Window_TD_7505_output.getInt32(i, 8);
            tbl_Filter_TD_6216_output.setInt32(r, 6, _avg_monthly_sales6380_t);
            int32_t _rn6381_t = tbl_Window_TD_7505_output.getInt32(i, 7);
            tbl_Filter_TD_6216_output.setInt32(r, 7, _rn6381_t);
            r++;
        }
    }
    tbl_Filter_TD_6216_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6216_output #Row: " << tbl_Filter_TD_6216_output.getNumRow() << std::endl;
}

void SW_Project_TD_5927(Table &tbl_Window_TD_6404_output, Table &tbl_Project_TD_5927_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#6379 AS sum_sales#6407)
    // Input: ListBuffer(i_category#7319, i_brand#7315, cc_name#7397, d_year#7369, d_moy#7371, sum_sales#6379, rn#7426)
    // Output: ListBuffer(i_category#7319, i_brand#7315, cc_name#7397, sum_sales#6407, rn#7426)
    int nrow1 = tbl_Window_TD_6404_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category7319 = tbl_Window_TD_6404_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand7315 = tbl_Window_TD_6404_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name7397 = tbl_Window_TD_6404_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year7369 = tbl_Window_TD_6404_output.getInt32(i, 3);
        int32_t _d_moy7371 = tbl_Window_TD_6404_output.getInt32(i, 4);
        int32_t _sum_sales6379 = tbl_Window_TD_6404_output.getInt32(i, 5);
        int32_t _rn7426 = tbl_Window_TD_6404_output.getInt32(i, 6);
        int32_t _sum_sales6407 = _sum_sales6379;
        tbl_Project_TD_5927_output.setInt32(i, 3, _sum_sales6407);
        tbl_Project_TD_5927_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category7319);
        tbl_Project_TD_5927_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand7315);
        tbl_Project_TD_5927_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name7397);
        tbl_Project_TD_5927_output.setInt32(i, 4, _rn7426);
    }
    tbl_Project_TD_5927_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5927_output #Row: " << tbl_Project_TD_5927_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5846_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    bool operator==(const SW_JOIN_INNER_TD_5846_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5846_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5846_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909));
    }
};
}
struct SW_JOIN_INNER_TD_5846_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _sum_sales6379;
    int32_t _avg_monthly_sales6380;
    int32_t _rn6381;
};
struct SW_JOIN_INNER_TD_5846_key_rightMajor {
    std::string _i_category7199;
    std::string _i_brand7195;
    std::string _cc_name7277;
    bool operator==(const SW_JOIN_INNER_TD_5846_key_rightMajor& other) const {
        return ((_i_category7199 == other._i_category7199) && (_i_brand7195 == other._i_brand7195) && (_cc_name7277 == other._cc_name7277));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5846_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5846_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category7199)) + (hash<string>()(k._i_brand7195)) + (hash<string>()(k._cc_name7277));
    }
};
}
struct SW_JOIN_INNER_TD_5846_payload_rightMajor {
    std::string _i_category7199;
    std::string _i_brand7195;
    std::string _cc_name7277;
    int32_t _sum_sales6399;
    int32_t _rn7306;
};
void SW_JOIN_INNER_TD_5846(Table &tbl_Filter_TD_6216_output, Table &tbl_Project_TD_6367_output, Table &tbl_JOIN_INNER_TD_5846_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((((i_category#240 = i_category#7199) AND (i_brand#236 = i_brand#7195)) AND (cc_name#909 = cc_name#7277)) AND (rn#6381 = (rn#7306 + 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, avg_monthly_sales#6380, rn#6381)
    // Right Table: ListBuffer(i_category#7199, i_brand#7195, cc_name#7277, sum_sales#6399, rn#7306)
    // Output Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, avg_monthly_sales#6380, rn#6381, sum_sales#6399)
    int left_nrow = tbl_Filter_TD_6216_output.getNumRow();
    int right_nrow = tbl_Project_TD_6367_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5846_key_leftMajor, SW_JOIN_INNER_TD_5846_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6216_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            SW_JOIN_INNER_TD_5846_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _cc_name909_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            int32_t _d_year126 = tbl_Filter_TD_6216_output.getInt32(i, 3);
            int32_t _d_moy128 = tbl_Filter_TD_6216_output.getInt32(i, 4);
            int32_t _sum_sales6379 = tbl_Filter_TD_6216_output.getInt32(i, 5);
            int32_t _avg_monthly_sales6380 = tbl_Filter_TD_6216_output.getInt32(i, 6);
            int32_t _rn6381 = tbl_Filter_TD_6216_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_5846_payload_leftMajor payloadA{_i_category240, _i_brand236, _cc_name909, _d_year126, _d_moy128, _sum_sales6379, _avg_monthly_sales6380, _rn6381};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_6367_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category7199_k_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category7199_k = std::string(_i_category7199_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_k_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand7195_k = std::string(_i_brand7195_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_k_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name7277_k = std::string(_cc_name7277_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5846_key_leftMajor{_i_category7199_k, _i_brand7195_k, _cc_name7277_k});
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
                int32_t _sum_sales6379 = (it->second)._sum_sales6379;
                int32_t _avg_monthly_sales6380 = (it->second)._avg_monthly_sales6380;
                int32_t _rn6381 = (it->second)._rn6381;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category7199 = std::string(_i_category7199_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand7195 = std::string(_i_brand7195_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name7277 = std::string(_cc_name7277_n.data());
                int32_t _sum_sales6399 = tbl_Project_TD_6367_output.getInt32(i, 3);
                int32_t _rn7306 = tbl_Project_TD_6367_output.getInt32(i, 4);
                if (_rn6381 == NULL) {
                    tbl_JOIN_INNER_TD_5846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 5, _sum_sales6379);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 6, _avg_monthly_sales6380);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 7, _rn6381);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 8, _sum_sales6399);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5846_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5846_key_rightMajor, SW_JOIN_INNER_TD_5846_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_6367_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category7199_k_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category7199_k = std::string(_i_category7199_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_k_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand7195_k = std::string(_i_brand7195_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_k_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name7277_k = std::string(_cc_name7277_k_n.data());
            SW_JOIN_INNER_TD_5846_key_rightMajor keyA{_i_category7199_k, _i_brand7195_k, _cc_name7277_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category7199 = std::string(_i_category7199_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand7195 = std::string(_i_brand7195_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_n = tbl_Project_TD_6367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name7277 = std::string(_cc_name7277_n.data());
            int32_t _sum_sales6399 = tbl_Project_TD_6367_output.getInt32(i, 3);
            int32_t _rn7306 = tbl_Project_TD_6367_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5846_payload_rightMajor payloadA{_i_category7199, _i_brand7195, _cc_name7277, _sum_sales6399, _rn7306};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6216_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5846_key_rightMajor{_i_category240_k, _i_brand236_k, _cc_name909_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category7199 = (it->second)._i_category7199;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7199_n{};
                memcpy(_i_category7199_n.data(), (_i_category7199).data(), (_i_category7199).length());
                std::string _i_brand7195 = (it->second)._i_brand7195;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7195_n{};
                memcpy(_i_brand7195_n.data(), (_i_brand7195).data(), (_i_brand7195).length());
                std::string _cc_name7277 = (it->second)._cc_name7277;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name7277_n{};
                memcpy(_cc_name7277_n.data(), (_cc_name7277).data(), (_cc_name7277).length());
                int32_t _sum_sales6399 = (it->second)._sum_sales6399;
                int32_t _rn7306 = (it->second)._rn7306;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_6216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                int32_t _d_year126 = tbl_Filter_TD_6216_output.getInt32(i, 3);
                int32_t _d_moy128 = tbl_Filter_TD_6216_output.getInt32(i, 4);
                int32_t _sum_sales6379 = tbl_Filter_TD_6216_output.getInt32(i, 5);
                int32_t _avg_monthly_sales6380 = tbl_Filter_TD_6216_output.getInt32(i, 6);
                int32_t _rn6381 = tbl_Filter_TD_6216_output.getInt32(i, 7);
                if (_rn6381 == NULL) {
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 8, _sum_sales6399);
                    tbl_JOIN_INNER_TD_5846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 5, _sum_sales6379);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 6, _avg_monthly_sales6380);
                    tbl_JOIN_INNER_TD_5846_output.setInt32(r, 7, _rn6381);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5846_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5846_output #Row: " << tbl_JOIN_INNER_TD_5846_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4531_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _rn6381;
    bool operator==(const SW_JOIN_INNER_TD_4531_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909) && (_rn6381 == other._rn6381));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4531_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4531_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909)) + (hash<int32_t>()(k._rn6381));
    }
};
}
struct SW_JOIN_INNER_TD_4531_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _sum_sales6379;
    int32_t _avg_monthly_sales6380;
    int32_t _rn6381;
    int32_t _sum_sales6399;
};
struct SW_JOIN_INNER_TD_4531_key_rightMajor {
    std::string _i_category7319;
    std::string _i_brand7315;
    std::string _cc_name7397;
    int32_t _rn7426;
    bool operator==(const SW_JOIN_INNER_TD_4531_key_rightMajor& other) const {
        return ((_i_category7319 == other._i_category7319) && (_i_brand7315 == other._i_brand7315) && (_cc_name7397 == other._cc_name7397) && (_rn7426 == other._rn7426));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4531_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4531_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category7319)) + (hash<string>()(k._i_brand7315)) + (hash<string>()(k._cc_name7397)) + (hash<int32_t>()(k._rn7426));
    }
};
}
struct SW_JOIN_INNER_TD_4531_payload_rightMajor {
    std::string _i_category7319;
    std::string _i_brand7315;
    std::string _cc_name7397;
    int32_t _sum_sales6407;
    int32_t _rn7426;
};
void SW_JOIN_INNER_TD_4531(Table &tbl_JOIN_INNER_TD_5846_output, Table &tbl_Project_TD_5927_output, Table &tbl_JOIN_INNER_TD_4531_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((((i_category#240 = i_category#7319) AND (i_brand#236 = i_brand#7315)) AND (cc_name#909 = cc_name#7397)) AND (rn#6381 = (rn#7426 - 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#6379, avg_monthly_sales#6380, rn#6381, sum_sales#6399)
    // Right Table: ListBuffer(i_category#7319, i_brand#7315, cc_name#7397, sum_sales#6407, rn#7426)
    // Output Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#6380, sum_sales#6379, sum_sales#6399, sum_sales#6407)
    int left_nrow = tbl_JOIN_INNER_TD_5846_output.getNumRow();
    int right_nrow = tbl_Project_TD_5927_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4531_key_leftMajor, SW_JOIN_INNER_TD_4531_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5846_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            int32_t _rn6381_k = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_4531_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _cc_name909_k, _rn6381_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 3);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 4);
            int32_t _sum_sales6379 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 5);
            int32_t _avg_monthly_sales6380 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 6);
            int32_t _rn6381 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 7);
            int32_t _sum_sales6399 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_4531_payload_leftMajor payloadA{_i_category240, _i_brand236, _cc_name909, _d_year126, _d_moy128, _sum_sales6379, _avg_monthly_sales6380, _rn6381, _sum_sales6399};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5927_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category7319_k_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category7319_k = std::string(_i_category7319_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_k_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand7315_k = std::string(_i_brand7315_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_k_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name7397_k = std::string(_cc_name7397_k_n.data());
            int32_t _rn7426_k = tbl_Project_TD_5927_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4531_key_leftMajor{_i_category7319_k, _i_brand7315_k, _cc_name7397_k, _rn7426_k});
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
                int32_t _sum_sales6379 = (it->second)._sum_sales6379;
                int32_t _avg_monthly_sales6380 = (it->second)._avg_monthly_sales6380;
                int32_t _rn6381 = (it->second)._rn6381;
                int32_t _sum_sales6399 = (it->second)._sum_sales6399;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category7319 = std::string(_i_category7319_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand7315 = std::string(_i_brand7315_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name7397 = std::string(_cc_name7397_n.data());
                int32_t _sum_sales6407 = tbl_Project_TD_5927_output.getInt32(i, 3);
                int32_t _rn7426 = tbl_Project_TD_5927_output.getInt32(i, 4);
                if (_rn6381 == (_rn7426 - 1)) {
                    tbl_JOIN_INNER_TD_4531_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4531_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4531_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 6, _sum_sales6379);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 5, _avg_monthly_sales6380);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 7, _sum_sales6399);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 8, _sum_sales6407);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4531_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4531_key_rightMajor, SW_JOIN_INNER_TD_4531_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5927_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category7319_k_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category7319_k = std::string(_i_category7319_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_k_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand7315_k = std::string(_i_brand7315_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_k_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name7397_k = std::string(_cc_name7397_k_n.data());
            int32_t _rn7426_k = tbl_Project_TD_5927_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4531_key_rightMajor keyA{_i_category7319_k, _i_brand7315_k, _cc_name7397_k, _rn7426_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category7319 = std::string(_i_category7319_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand7315 = std::string(_i_brand7315_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_n = tbl_Project_TD_5927_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name7397 = std::string(_cc_name7397_n.data());
            int32_t _sum_sales6407 = tbl_Project_TD_5927_output.getInt32(i, 3);
            int32_t _rn7426 = tbl_Project_TD_5927_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4531_payload_rightMajor payloadA{_i_category7319, _i_brand7315, _cc_name7397, _sum_sales6407, _rn7426};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5846_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            int32_t _rn6381_k = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4531_key_rightMajor{_i_category240_k, _i_brand236_k, _cc_name909_k, _rn6381_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category7319 = (it->second)._i_category7319;
                std::array<char, TPCDS_READ_MAX + 1> _i_category7319_n{};
                memcpy(_i_category7319_n.data(), (_i_category7319).data(), (_i_category7319).length());
                std::string _i_brand7315 = (it->second)._i_brand7315;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand7315_n{};
                memcpy(_i_brand7315_n.data(), (_i_brand7315).data(), (_i_brand7315).length());
                std::string _cc_name7397 = (it->second)._cc_name7397;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name7397_n{};
                memcpy(_cc_name7397_n.data(), (_cc_name7397).data(), (_cc_name7397).length());
                int32_t _sum_sales6407 = (it->second)._sum_sales6407;
                int32_t _rn7426 = (it->second)._rn7426;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_JOIN_INNER_TD_5846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 3);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 4);
                int32_t _sum_sales6379 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 5);
                int32_t _avg_monthly_sales6380 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 6);
                int32_t _rn6381 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 7);
                int32_t _sum_sales6399 = tbl_JOIN_INNER_TD_5846_output.getInt32(i, 8);
                if (_rn6381 == (_rn7426 - 1)) {
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 8, _sum_sales6407);
                    tbl_JOIN_INNER_TD_4531_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4531_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4531_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 6, _sum_sales6379);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 5, _avg_monthly_sales6380);
                    tbl_JOIN_INNER_TD_4531_output.setInt32(r, 7, _sum_sales6399);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4531_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4531_output #Row: " << tbl_JOIN_INNER_TD_4531_output.getNumRow() << std::endl;
}

void SW_Project_TD_3663(Table &tbl_JOIN_INNER_TD_4531_output, Table &tbl_Project_TD_3663_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#6399 AS psum#6382, sum_sales#6407 AS nsum#6383)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#6380, sum_sales#6379, sum_sales#6399, sum_sales#6407)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#6380, sum_sales#6379, psum#6382, nsum#6383)
    int nrow1 = tbl_JOIN_INNER_TD_4531_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_4531_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4531_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_JOIN_INNER_TD_4531_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4531_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_4531_output.getInt32(i, 4);
        int32_t _avg_monthly_sales6380 = tbl_JOIN_INNER_TD_4531_output.getInt32(i, 5);
        int32_t _sum_sales6379 = tbl_JOIN_INNER_TD_4531_output.getInt32(i, 6);
        int32_t _sum_sales6399 = tbl_JOIN_INNER_TD_4531_output.getInt32(i, 7);
        int32_t _sum_sales6407 = tbl_JOIN_INNER_TD_4531_output.getInt32(i, 8);
        int32_t _psum6382 = _sum_sales6399;
        tbl_Project_TD_3663_output.setInt32(i, 7, _psum6382);
        int32_t _nsum6383 = _sum_sales6407;
        tbl_Project_TD_3663_output.setInt32(i, 8, _nsum6383);
        tbl_Project_TD_3663_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category240);
        tbl_Project_TD_3663_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand236);
        tbl_Project_TD_3663_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name909);
        tbl_Project_TD_3663_output.setInt32(i, 3, _d_year126);
        tbl_Project_TD_3663_output.setInt32(i, 4, _d_moy128);
        tbl_Project_TD_3663_output.setInt32(i, 5, _avg_monthly_sales6380);
        tbl_Project_TD_3663_output.setInt32(i, 6, _sum_sales6379);
    }
    tbl_Project_TD_3663_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3663_output #Row: " << tbl_Project_TD_3663_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2251(Table &tbl_Project_TD_3663_output, Table &tbl_Sort_TD_2251_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(sum_sales#6379 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#6380 as decimal(22,6)))), DecimalType(22,6), true) ASC NULLS FIRST, cc_name#909 ASC NULLS FIRST)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#6380, sum_sales#6379, psum#6382, nsum#6383)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#6380, sum_sales#6379, psum#6382, nsum#6383)
    struct SW_Sort_TD_2251Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _avg_monthly_sales6380;
        int32_t _sum_sales6379;
        int32_t _psum6382;
        int32_t _nsum6383;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2251Row& a, const SW_Sort_TD_2251Row& b) const { return 
 || 
 ((a._true == b._true) && (a._cc_name909 < b._cc_name909)); 
}
    }SW_Sort_TD_2251_order; 

    int nrow1 = tbl_Project_TD_3663_output.getNumRow();
    std::vector<SW_Sort_TD_2251Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_3663_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Project_TD_3663_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Project_TD_3663_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int32_t _d_year126 = tbl_Project_TD_3663_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_Project_TD_3663_output.getInt32(i, 4);
        int32_t _avg_monthly_sales6380 = tbl_Project_TD_3663_output.getInt32(i, 5);
        int32_t _sum_sales6379 = tbl_Project_TD_3663_output.getInt32(i, 6);
        int32_t _psum6382 = tbl_Project_TD_3663_output.getInt32(i, 7);
        int32_t _nsum6383 = tbl_Project_TD_3663_output.getInt32(i, 8);
        SW_Sort_TD_2251Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_avg_monthly_sales6380,_sum_sales6379,_psum6382,_nsum6383};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2251_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2251_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), (it._i_brand236).data(), (it._i_brand236).length());
        tbl_Sort_TD_2251_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909{};
        memcpy(_cc_name909.data(), (it._cc_name909).data(), (it._cc_name909).length());
        tbl_Sort_TD_2251_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        tbl_Sort_TD_2251_output.setInt32(r, 3, it._d_year126);
        tbl_Sort_TD_2251_output.setInt32(r, 4, it._d_moy128);
        tbl_Sort_TD_2251_output.setInt32(r, 5, it._avg_monthly_sales6380);
        tbl_Sort_TD_2251_output.setInt32(r, 6, it._sum_sales6379);
        tbl_Sort_TD_2251_output.setInt32(r, 7, it._psum6382);
        tbl_Sort_TD_2251_output.setInt32(r, 8, it._nsum6383);
        ++r;
    }
    tbl_Sort_TD_2251_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2251_output #Row: " << tbl_Sort_TD_2251_output.getNumRow() << std::endl;
}

