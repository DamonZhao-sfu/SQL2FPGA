#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_14333174(Table &tbl_SerializeFromObject_TD_15217870_input, Table &tbl_Filter_TD_14333174_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND (isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_call_center_sk#1115))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15217870_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_15217870_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_15217870_input.getInt32(i, 0);
        int32_t _cs_call_center_sk1115 = tbl_SerializeFromObject_TD_15217870_input.getInt32(i, 1);
        if ((_cs_item_sk1119!= 0) && ((_cs_sold_date_sk1104!= 0) && (_cs_call_center_sk1115!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_15217870_input.getInt32(i, 0);
            tbl_Filter_TD_14333174_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_call_center_sk1115_t = tbl_SerializeFromObject_TD_15217870_input.getInt32(i, 1);
            tbl_Filter_TD_14333174_output.setInt32(r, 1, _cs_call_center_sk1115_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_15217870_input.getInt32(i, 2);
            tbl_Filter_TD_14333174_output.setInt32(r, 2, _cs_item_sk1119_t);
            int64_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_15217870_input.getInt64(i, 3);
            tbl_Filter_TD_14333174_output.setInt64(r, 3, _cs_sales_price1125_t);
            r++;
        }
    }
    tbl_Filter_TD_14333174_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14333174_output #Row: " << tbl_Filter_TD_14333174_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14683796(Table &tbl_SerializeFromObject_TD_15392103_input, Table &tbl_Filter_TD_14683796_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND (isnotnull(i_category#240) AND isnotnull(i_brand#236))))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15392103_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_15392103_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_15392103_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_15392103_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk228!= 0) && ((std::string(_i_category240.data()) != "NULL") && (std::string(_i_brand236.data()) != "NULL"))) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15392103_input.getInt32(i, 0);
            tbl_Filter_TD_14683796_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_15392103_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_14683796_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_15392103_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_14683796_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_14683796_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14683796_output #Row: " << tbl_Filter_TD_14683796_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13380205(Table &tbl_SerializeFromObject_TD_14361224_input, Table &tbl_Filter_TD_13380205_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#126 = 1999) OR ((d_year#126 = 1998) AND (d_moy#128 = 12))) OR ((d_year#126 = 2000) AND (d_moy#128 = 1))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14361224_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_14361224_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_14361224_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_14361224_input.getInt32(i, 0);
        if ((((_d_year126 == 1999) || ((_d_year126 == 1998) && (_d_moy128 == 12))) || ((_d_year126 == 2000) && (_d_moy128 == 1))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_14361224_input.getInt32(i, 0);
            tbl_Filter_TD_13380205_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_14361224_input.getInt32(i, 1);
            tbl_Filter_TD_13380205_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_14361224_input.getInt32(i, 2);
            tbl_Filter_TD_13380205_output.setInt32(r, 2, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_13380205_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13380205_output #Row: " << tbl_Filter_TD_13380205_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13934565_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_13934565_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13934565_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13934565_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_13934565_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_13934565_key_rightMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_13934565_key_rightMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13934565_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13934565_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_13934565_payload_rightMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_item_sk1119;
    int64_t _cs_sales_price1125;
};
void SW_JOIN_INNER_TD_13934565(Table &tbl_Filter_TD_14683796_output, Table &tbl_Filter_TD_14333174_output, Table &tbl_JOIN_INNER_TD_13934565_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Right Table: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_item_sk#1119, cs_sales_price#1125)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_sales_price#1125)
    int left_nrow = tbl_Filter_TD_14683796_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14333174_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13934565_key_leftMajor, SW_JOIN_INNER_TD_13934565_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14683796_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14683796_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13934565_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14683796_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14683796_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14683796_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_13934565_payload_leftMajor payloadA{_i_item_sk228, _i_brand236, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14333174_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_14333174_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13934565_key_leftMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_14333174_output.getInt32(i, 0);
                int32_t _cs_call_center_sk1115 = tbl_Filter_TD_14333174_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_14333174_output.getInt32(i, 2);
                int64_t _cs_sales_price1125 = tbl_Filter_TD_14333174_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_13934565_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13934565_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_13934565_output.setInt32(r, 2, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_13934565_output.setInt32(r, 3, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_13934565_output.setInt64(r, 4, _cs_sales_price1125);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13934565_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13934565_key_rightMajor, SW_JOIN_INNER_TD_13934565_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14333174_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_14333174_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13934565_key_rightMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_14333174_output.getInt32(i, 0);
            int32_t _cs_call_center_sk1115 = tbl_Filter_TD_14333174_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_14333174_output.getInt32(i, 2);
            int64_t _cs_sales_price1125 = tbl_Filter_TD_14333174_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_13934565_payload_rightMajor payloadA{_cs_sold_date_sk1104, _cs_call_center_sk1115, _cs_item_sk1119, _cs_sales_price1125};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14683796_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14683796_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13934565_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_call_center_sk1115 = (it->second)._cs_call_center_sk1115;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int64_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _i_item_sk228 = tbl_Filter_TD_14683796_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14683796_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14683796_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_13934565_output.setInt32(r, 2, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_13934565_output.setInt32(r, 3, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_13934565_output.setInt64(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_13934565_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13934565_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13934565_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13934565_output #Row: " << tbl_JOIN_INNER_TD_13934565_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12565789(Table &tbl_SerializeFromObject_TD_13357180_input, Table &tbl_Filter_TD_12565789_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_item_sk#4389) AND isnotnull(cs_sold_date_sk#4374)) AND isnotnull(cs_call_center_sk#4385)))
    // Input: ListBuffer(cs_sold_date_sk#4374, cs_call_center_sk#4385, cs_item_sk#4389, cs_sales_price#4395)
    // Output: ListBuffer(cs_sold_date_sk#4374, cs_call_center_sk#4385, cs_item_sk#4389, cs_sales_price#4395)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13357180_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk4389 = tbl_SerializeFromObject_TD_13357180_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk4374 = tbl_SerializeFromObject_TD_13357180_input.getInt32(i, 0);
        int32_t _cs_call_center_sk4385 = tbl_SerializeFromObject_TD_13357180_input.getInt32(i, 1);
        if (((_cs_item_sk4389!= 0) && (_cs_sold_date_sk4374!= 0)) && (_cs_call_center_sk4385!= 0)) {
            int32_t _cs_sold_date_sk4374_t = tbl_SerializeFromObject_TD_13357180_input.getInt32(i, 0);
            tbl_Filter_TD_12565789_output.setInt32(r, 0, _cs_sold_date_sk4374_t);
            int32_t _cs_call_center_sk4385_t = tbl_SerializeFromObject_TD_13357180_input.getInt32(i, 1);
            tbl_Filter_TD_12565789_output.setInt32(r, 1, _cs_call_center_sk4385_t);
            int32_t _cs_item_sk4389_t = tbl_SerializeFromObject_TD_13357180_input.getInt32(i, 2);
            tbl_Filter_TD_12565789_output.setInt32(r, 2, _cs_item_sk4389_t);
            int64_t _cs_sales_price4395_t = tbl_SerializeFromObject_TD_13357180_input.getInt64(i, 3);
            tbl_Filter_TD_12565789_output.setInt64(r, 3, _cs_sales_price4395_t);
            r++;
        }
    }
    tbl_Filter_TD_12565789_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12565789_output #Row: " << tbl_Filter_TD_12565789_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12687373(Table &tbl_SerializeFromObject_TD_13927365_input, Table &tbl_Filter_TD_12687373_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#4352) AND (isnotnull(i_category#4364) AND isnotnull(i_brand#4360))))
    // Input: ListBuffer(i_item_sk#4352, i_brand#4360, i_category#4364)
    // Output: ListBuffer(i_item_sk#4352, i_brand#4360, i_category#4364)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13927365_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4352 = tbl_SerializeFromObject_TD_13927365_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4364 = tbl_SerializeFromObject_TD_13927365_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4360 = tbl_SerializeFromObject_TD_13927365_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk4352!= 0) && ((std::string(_i_category4364.data()) != "NULL") && (std::string(_i_brand4360.data()) != "NULL"))) {
            int32_t _i_item_sk4352_t = tbl_SerializeFromObject_TD_13927365_input.getInt32(i, 0);
            tbl_Filter_TD_12687373_output.setInt32(r, 0, _i_item_sk4352_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_t = tbl_SerializeFromObject_TD_13927365_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12687373_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4360_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category4364_t = tbl_SerializeFromObject_TD_13927365_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12687373_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category4364_t);
            r++;
        }
    }
    tbl_Filter_TD_12687373_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12687373_output #Row: " << tbl_Filter_TD_12687373_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12949450(Table &tbl_SerializeFromObject_TD_13785934_input, Table &tbl_Filter_TD_12949450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#903) AND isnotnull(cc_name#909)))
    // Input: ListBuffer(cc_call_center_sk#903, cc_name#909)
    // Output: ListBuffer(cc_call_center_sk#903, cc_name#909)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13785934_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk903 = tbl_SerializeFromObject_TD_13785934_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_SerializeFromObject_TD_13785934_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cc_call_center_sk903!= 0) && (std::string(_cc_name909.data()) != "NULL")) {
            int32_t _cc_call_center_sk903_t = tbl_SerializeFromObject_TD_13785934_input.getInt32(i, 0);
            tbl_Filter_TD_12949450_output.setInt32(r, 0, _cc_call_center_sk903_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_SerializeFromObject_TD_13785934_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12949450_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name909_t);
            r++;
        }
    }
    tbl_Filter_TD_12949450_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12949450_output #Row: " << tbl_Filter_TD_12949450_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12396774_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_12396774_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12396774_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12396774_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_12396774_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_call_center_sk1115;
    int64_t _cs_sales_price1125;
};
struct SW_JOIN_INNER_TD_12396774_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_12396774_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12396774_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12396774_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_12396774_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_12396774(Table &tbl_JOIN_INNER_TD_13934565_output, Table &tbl_Filter_TD_13380205_output, Table &tbl_JOIN_INNER_TD_12396774_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(i_brand#236, i_category#240, cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_sales_price#1125)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_call_center_sk#1115, cs_sales_price#1125, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_13934565_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13380205_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12396774_key_leftMajor, SW_JOIN_INNER_TD_12396774_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13934565_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_13934565_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12396774_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13934565_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13934565_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13934565_output.getInt32(i, 2);
            int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_13934565_output.getInt32(i, 3);
            int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_13934565_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_12396774_payload_leftMajor payloadA{_i_brand236, _i_category240, _cs_sold_date_sk1104, _cs_call_center_sk1115, _cs_sales_price1125};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13380205_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13380205_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12396774_key_leftMajor{_d_date_sk120_k});
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
                int64_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _d_date_sk120 = tbl_Filter_TD_13380205_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_13380205_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Filter_TD_13380205_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_12396774_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12396774_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12396774_output.setInt32(r, 2, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_12396774_output.setInt64(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_12396774_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12396774_output.setInt32(r, 5, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12396774_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12396774_key_rightMajor, SW_JOIN_INNER_TD_12396774_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13380205_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13380205_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12396774_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_13380205_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_13380205_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Filter_TD_13380205_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12396774_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13934565_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_13934565_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12396774_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13934565_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13934565_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_13934565_output.getInt32(i, 2);
                int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_13934565_output.getInt32(i, 3);
                int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_13934565_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_12396774_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12396774_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_12396774_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12396774_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12396774_output.setInt32(r, 2, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_12396774_output.setInt64(r, 3, _cs_sales_price1125);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12396774_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12396774_output #Row: " << tbl_JOIN_INNER_TD_12396774_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11821076(Table &tbl_SerializeFromObject_TD_12164565_input, Table &tbl_Filter_TD_11821076_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_item_sk#4509) AND isnotnull(cs_sold_date_sk#4494)) AND isnotnull(cs_call_center_sk#4505)))
    // Input: ListBuffer(cs_sold_date_sk#4494, cs_call_center_sk#4505, cs_item_sk#4509, cs_sales_price#4515)
    // Output: ListBuffer(cs_sold_date_sk#4494, cs_call_center_sk#4505, cs_item_sk#4509, cs_sales_price#4515)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12164565_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk4509 = tbl_SerializeFromObject_TD_12164565_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk4494 = tbl_SerializeFromObject_TD_12164565_input.getInt32(i, 0);
        int32_t _cs_call_center_sk4505 = tbl_SerializeFromObject_TD_12164565_input.getInt32(i, 1);
        if (((_cs_item_sk4509!= 0) && (_cs_sold_date_sk4494!= 0)) && (_cs_call_center_sk4505!= 0)) {
            int32_t _cs_sold_date_sk4494_t = tbl_SerializeFromObject_TD_12164565_input.getInt32(i, 0);
            tbl_Filter_TD_11821076_output.setInt32(r, 0, _cs_sold_date_sk4494_t);
            int32_t _cs_call_center_sk4505_t = tbl_SerializeFromObject_TD_12164565_input.getInt32(i, 1);
            tbl_Filter_TD_11821076_output.setInt32(r, 1, _cs_call_center_sk4505_t);
            int32_t _cs_item_sk4509_t = tbl_SerializeFromObject_TD_12164565_input.getInt32(i, 2);
            tbl_Filter_TD_11821076_output.setInt32(r, 2, _cs_item_sk4509_t);
            int64_t _cs_sales_price4515_t = tbl_SerializeFromObject_TD_12164565_input.getInt64(i, 3);
            tbl_Filter_TD_11821076_output.setInt64(r, 3, _cs_sales_price4515_t);
            r++;
        }
    }
    tbl_Filter_TD_11821076_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11821076_output #Row: " << tbl_Filter_TD_11821076_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11850311(Table &tbl_SerializeFromObject_TD_12431209_input, Table &tbl_Filter_TD_11850311_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#4472) AND (isnotnull(i_category#4484) AND isnotnull(i_brand#4480))))
    // Input: ListBuffer(i_item_sk#4472, i_brand#4480, i_category#4484)
    // Output: ListBuffer(i_item_sk#4472, i_brand#4480, i_category#4484)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12431209_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4472 = tbl_SerializeFromObject_TD_12431209_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4484 = tbl_SerializeFromObject_TD_12431209_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4480 = tbl_SerializeFromObject_TD_12431209_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk4472!= 0) && ((std::string(_i_category4484.data()) != "NULL") && (std::string(_i_brand4480.data()) != "NULL"))) {
            int32_t _i_item_sk4472_t = tbl_SerializeFromObject_TD_12431209_input.getInt32(i, 0);
            tbl_Filter_TD_11850311_output.setInt32(r, 0, _i_item_sk4472_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_t = tbl_SerializeFromObject_TD_12431209_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11850311_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4480_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category4484_t = tbl_SerializeFromObject_TD_12431209_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_11850311_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category4484_t);
            r++;
        }
    }
    tbl_Filter_TD_11850311_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11850311_output #Row: " << tbl_Filter_TD_11850311_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11947670(Table &tbl_SerializeFromObject_TD_12529394_input, Table &tbl_Filter_TD_11947670_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#4414 = 1999) OR ((d_year#4414 = 1998) AND (d_moy#4416 = 12))) OR ((d_year#4414 = 2000) AND (d_moy#4416 = 1))) AND isnotnull(d_date_sk#4408)))
    // Input: ListBuffer(d_date_sk#4408, d_year#4414, d_moy#4416)
    // Output: ListBuffer(d_date_sk#4408, d_year#4414, d_moy#4416)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12529394_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4414 = tbl_SerializeFromObject_TD_12529394_input.getInt32(i, 1);
        int32_t _d_moy4416 = tbl_SerializeFromObject_TD_12529394_input.getInt32(i, 2);
        int32_t _d_date_sk4408 = tbl_SerializeFromObject_TD_12529394_input.getInt32(i, 0);
        if ((((_d_year4414 == 1999) || ((_d_year4414 == 1998) && (_d_moy4416 == 12))) || ((_d_year4414 == 2000) && (_d_moy4416 == 1))) && (_d_date_sk4408!= 0)) {
            int32_t _d_date_sk4408_t = tbl_SerializeFromObject_TD_12529394_input.getInt32(i, 0);
            tbl_Filter_TD_11947670_output.setInt32(r, 0, _d_date_sk4408_t);
            int32_t _d_year4414_t = tbl_SerializeFromObject_TD_12529394_input.getInt32(i, 1);
            tbl_Filter_TD_11947670_output.setInt32(r, 1, _d_year4414_t);
            int32_t _d_moy4416_t = tbl_SerializeFromObject_TD_12529394_input.getInt32(i, 2);
            tbl_Filter_TD_11947670_output.setInt32(r, 2, _d_moy4416_t);
            r++;
        }
    }
    tbl_Filter_TD_11947670_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11947670_output #Row: " << tbl_Filter_TD_11947670_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11152755_key_leftMajor {
    int32_t _i_item_sk4352;
    bool operator==(const SW_JOIN_INNER_TD_11152755_key_leftMajor& other) const {
        return ((_i_item_sk4352 == other._i_item_sk4352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11152755_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11152755_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4352));
    }
};
}
struct SW_JOIN_INNER_TD_11152755_payload_leftMajor {
    int32_t _i_item_sk4352;
    std::string _i_brand4360;
    std::string _i_category4364;
};
struct SW_JOIN_INNER_TD_11152755_key_rightMajor {
    int32_t _cs_item_sk4389;
    bool operator==(const SW_JOIN_INNER_TD_11152755_key_rightMajor& other) const {
        return ((_cs_item_sk4389 == other._cs_item_sk4389));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11152755_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11152755_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk4389));
    }
};
}
struct SW_JOIN_INNER_TD_11152755_payload_rightMajor {
    int32_t _cs_sold_date_sk4374;
    int32_t _cs_call_center_sk4385;
    int32_t _cs_item_sk4389;
    int64_t _cs_sales_price4395;
};
void SW_JOIN_INNER_TD_11152755(Table &tbl_Filter_TD_12687373_output, Table &tbl_Filter_TD_12565789_output, Table &tbl_JOIN_INNER_TD_11152755_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#4389 = i_item_sk#4352))
    // Left Table: ListBuffer(i_item_sk#4352, i_brand#4360, i_category#4364)
    // Right Table: ListBuffer(cs_sold_date_sk#4374, cs_call_center_sk#4385, cs_item_sk#4389, cs_sales_price#4395)
    // Output Table: ListBuffer(i_brand#4360, i_category#4364, cs_sold_date_sk#4374, cs_call_center_sk#4385, cs_sales_price#4395)
    int left_nrow = tbl_Filter_TD_12687373_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12565789_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11152755_key_leftMajor, SW_JOIN_INNER_TD_11152755_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12687373_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4352_k = tbl_Filter_TD_12687373_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11152755_key_leftMajor keyA{_i_item_sk4352_k};
            int32_t _i_item_sk4352 = tbl_Filter_TD_12687373_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n = tbl_Filter_TD_12687373_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4360 = std::string(_i_brand4360_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n = tbl_Filter_TD_12687373_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category4364 = std::string(_i_category4364_n.data());
            SW_JOIN_INNER_TD_11152755_payload_leftMajor payloadA{_i_item_sk4352, _i_brand4360, _i_category4364};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12565789_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk4389_k = tbl_Filter_TD_12565789_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11152755_key_leftMajor{_cs_item_sk4389_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4352 = (it->second)._i_item_sk4352;
                std::string _i_brand4360 = (it->second)._i_brand4360;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n{};
                memcpy(_i_brand4360_n.data(), (_i_brand4360).data(), (_i_brand4360).length());
                std::string _i_category4364 = (it->second)._i_category4364;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n{};
                memcpy(_i_category4364_n.data(), (_i_category4364).data(), (_i_category4364).length());
                int32_t _cs_sold_date_sk4374 = tbl_Filter_TD_12565789_output.getInt32(i, 0);
                int32_t _cs_call_center_sk4385 = tbl_Filter_TD_12565789_output.getInt32(i, 1);
                int32_t _cs_item_sk4389 = tbl_Filter_TD_12565789_output.getInt32(i, 2);
                int64_t _cs_sales_price4395 = tbl_Filter_TD_12565789_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_11152755_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4360_n);
                tbl_JOIN_INNER_TD_11152755_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4364_n);
                tbl_JOIN_INNER_TD_11152755_output.setInt32(r, 2, _cs_sold_date_sk4374);
                tbl_JOIN_INNER_TD_11152755_output.setInt32(r, 3, _cs_call_center_sk4385);
                tbl_JOIN_INNER_TD_11152755_output.setInt64(r, 4, _cs_sales_price4395);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11152755_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11152755_key_rightMajor, SW_JOIN_INNER_TD_11152755_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12565789_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk4389_k = tbl_Filter_TD_12565789_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11152755_key_rightMajor keyA{_cs_item_sk4389_k};
            int32_t _cs_sold_date_sk4374 = tbl_Filter_TD_12565789_output.getInt32(i, 0);
            int32_t _cs_call_center_sk4385 = tbl_Filter_TD_12565789_output.getInt32(i, 1);
            int32_t _cs_item_sk4389 = tbl_Filter_TD_12565789_output.getInt32(i, 2);
            int64_t _cs_sales_price4395 = tbl_Filter_TD_12565789_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_11152755_payload_rightMajor payloadA{_cs_sold_date_sk4374, _cs_call_center_sk4385, _cs_item_sk4389, _cs_sales_price4395};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12687373_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4352_k = tbl_Filter_TD_12687373_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11152755_key_rightMajor{_i_item_sk4352_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk4374 = (it->second)._cs_sold_date_sk4374;
                int32_t _cs_call_center_sk4385 = (it->second)._cs_call_center_sk4385;
                int32_t _cs_item_sk4389 = (it->second)._cs_item_sk4389;
                int64_t _cs_sales_price4395 = (it->second)._cs_sales_price4395;
                int32_t _i_item_sk4352 = tbl_Filter_TD_12687373_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n = tbl_Filter_TD_12687373_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4360 = std::string(_i_brand4360_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n = tbl_Filter_TD_12687373_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category4364 = std::string(_i_category4364_n.data());
                tbl_JOIN_INNER_TD_11152755_output.setInt32(r, 2, _cs_sold_date_sk4374);
                tbl_JOIN_INNER_TD_11152755_output.setInt32(r, 3, _cs_call_center_sk4385);
                tbl_JOIN_INNER_TD_11152755_output.setInt64(r, 4, _cs_sales_price4395);
                tbl_JOIN_INNER_TD_11152755_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4360_n);
                tbl_JOIN_INNER_TD_11152755_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4364_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11152755_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11152755_output #Row: " << tbl_JOIN_INNER_TD_11152755_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11475424_key_leftMajor {
    int32_t _cs_call_center_sk1115;
    bool operator==(const SW_JOIN_INNER_TD_11475424_key_leftMajor& other) const {
        return ((_cs_call_center_sk1115 == other._cs_call_center_sk1115));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11475424_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11475424_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk1115));
    }
};
}
struct SW_JOIN_INNER_TD_11475424_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _cs_call_center_sk1115;
    int64_t _cs_sales_price1125;
    int32_t _d_year126;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_11475424_key_rightMajor {
    int32_t _cc_call_center_sk903;
    bool operator==(const SW_JOIN_INNER_TD_11475424_key_rightMajor& other) const {
        return ((_cc_call_center_sk903 == other._cc_call_center_sk903));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11475424_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11475424_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk903));
    }
};
}
struct SW_JOIN_INNER_TD_11475424_payload_rightMajor {
    int32_t _cc_call_center_sk903;
    std::string _cc_name909;
};
void SW_JOIN_INNER_TD_11475424(Table &tbl_JOIN_INNER_TD_12396774_output, Table &tbl_Filter_TD_12949450_output, Table &tbl_JOIN_INNER_TD_11475424_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#903 = cs_call_center_sk#1115))
    // Left Table: ListBuffer(i_brand#236, i_category#240, cs_call_center_sk#1115, cs_sales_price#1125, d_year#126, d_moy#128)
    // Right Table: ListBuffer(cc_call_center_sk#903, cc_name#909)
    // Output Table: ListBuffer(i_brand#236, i_category#240, cs_sales_price#1125, d_year#126, d_moy#128, cc_name#909)
    int left_nrow = tbl_JOIN_INNER_TD_12396774_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12949450_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11475424_key_leftMajor, SW_JOIN_INNER_TD_11475424_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12396774_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk1115_k = tbl_JOIN_INNER_TD_12396774_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11475424_key_leftMajor keyA{_cs_call_center_sk1115_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12396774_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12396774_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_12396774_output.getInt32(i, 2);
            int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_12396774_output.getInt64(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_12396774_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_12396774_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11475424_payload_leftMajor payloadA{_i_brand236, _i_category240, _cs_call_center_sk1115, _cs_sales_price1125, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12949450_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk903_k = tbl_Filter_TD_12949450_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11475424_key_leftMajor{_cc_call_center_sk903_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _cs_call_center_sk1115 = (it->second)._cs_call_center_sk1115;
                int64_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _cc_call_center_sk903 = tbl_Filter_TD_12949450_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_12949450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                tbl_JOIN_INNER_TD_11475424_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11475424_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11475424_output.setInt64(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_11475424_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11475424_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_11475424_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name909_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11475424_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11475424_key_rightMajor, SW_JOIN_INNER_TD_11475424_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12949450_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk903_k = tbl_Filter_TD_12949450_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11475424_key_rightMajor keyA{_cc_call_center_sk903_k};
            int32_t _cc_call_center_sk903 = tbl_Filter_TD_12949450_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_12949450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            SW_JOIN_INNER_TD_11475424_payload_rightMajor payloadA{_cc_call_center_sk903, _cc_name909};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12396774_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk1115_k = tbl_JOIN_INNER_TD_12396774_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11475424_key_rightMajor{_cs_call_center_sk1115_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk903 = (it->second)._cc_call_center_sk903;
                std::string _cc_name909 = (it->second)._cc_name909;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n{};
                memcpy(_cc_name909_n.data(), (_cc_name909).data(), (_cc_name909).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12396774_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12396774_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_12396774_output.getInt32(i, 2);
                int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_12396774_output.getInt64(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_12396774_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_12396774_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11475424_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name909_n);
                tbl_JOIN_INNER_TD_11475424_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11475424_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11475424_output.setInt64(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_11475424_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11475424_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11475424_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11475424_output #Row: " << tbl_JOIN_INNER_TD_11475424_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10193612(Table &tbl_SerializeFromObject_TD_11704370_input, Table &tbl_Filter_TD_10193612_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#4534 = 1999) OR ((d_year#4534 = 1998) AND (d_moy#4536 = 12))) OR ((d_year#4534 = 2000) AND (d_moy#4536 = 1))) AND isnotnull(d_date_sk#4528)))
    // Input: ListBuffer(d_date_sk#4528, d_year#4534, d_moy#4536)
    // Output: ListBuffer(d_date_sk#4528, d_year#4534, d_moy#4536)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11704370_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4534 = tbl_SerializeFromObject_TD_11704370_input.getInt32(i, 1);
        int32_t _d_moy4536 = tbl_SerializeFromObject_TD_11704370_input.getInt32(i, 2);
        int32_t _d_date_sk4528 = tbl_SerializeFromObject_TD_11704370_input.getInt32(i, 0);
        if ((((_d_year4534 == 1999) || ((_d_year4534 == 1998) && (_d_moy4536 == 12))) || ((_d_year4534 == 2000) && (_d_moy4536 == 1))) && (_d_date_sk4528!= 0)) {
            int32_t _d_date_sk4528_t = tbl_SerializeFromObject_TD_11704370_input.getInt32(i, 0);
            tbl_Filter_TD_10193612_output.setInt32(r, 0, _d_date_sk4528_t);
            int32_t _d_year4534_t = tbl_SerializeFromObject_TD_11704370_input.getInt32(i, 1);
            tbl_Filter_TD_10193612_output.setInt32(r, 1, _d_year4534_t);
            int32_t _d_moy4536_t = tbl_SerializeFromObject_TD_11704370_input.getInt32(i, 2);
            tbl_Filter_TD_10193612_output.setInt32(r, 2, _d_moy4536_t);
            r++;
        }
    }
    tbl_Filter_TD_10193612_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10193612_output #Row: " << tbl_Filter_TD_10193612_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10316981_key_leftMajor {
    int32_t _i_item_sk4472;
    bool operator==(const SW_JOIN_INNER_TD_10316981_key_leftMajor& other) const {
        return ((_i_item_sk4472 == other._i_item_sk4472));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10316981_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10316981_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4472));
    }
};
}
struct SW_JOIN_INNER_TD_10316981_payload_leftMajor {
    int32_t _i_item_sk4472;
    std::string _i_brand4480;
    std::string _i_category4484;
};
struct SW_JOIN_INNER_TD_10316981_key_rightMajor {
    int32_t _cs_item_sk4509;
    bool operator==(const SW_JOIN_INNER_TD_10316981_key_rightMajor& other) const {
        return ((_cs_item_sk4509 == other._cs_item_sk4509));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10316981_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10316981_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk4509));
    }
};
}
struct SW_JOIN_INNER_TD_10316981_payload_rightMajor {
    int32_t _cs_sold_date_sk4494;
    int32_t _cs_call_center_sk4505;
    int32_t _cs_item_sk4509;
    int64_t _cs_sales_price4515;
};
void SW_JOIN_INNER_TD_10316981(Table &tbl_Filter_TD_11850311_output, Table &tbl_Filter_TD_11821076_output, Table &tbl_JOIN_INNER_TD_10316981_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#4509 = i_item_sk#4472))
    // Left Table: ListBuffer(i_item_sk#4472, i_brand#4480, i_category#4484)
    // Right Table: ListBuffer(cs_sold_date_sk#4494, cs_call_center_sk#4505, cs_item_sk#4509, cs_sales_price#4515)
    // Output Table: ListBuffer(i_brand#4480, i_category#4484, cs_sold_date_sk#4494, cs_call_center_sk#4505, cs_sales_price#4515)
    int left_nrow = tbl_Filter_TD_11850311_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11821076_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10316981_key_leftMajor, SW_JOIN_INNER_TD_10316981_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11850311_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4472_k = tbl_Filter_TD_11850311_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10316981_key_leftMajor keyA{_i_item_sk4472_k};
            int32_t _i_item_sk4472 = tbl_Filter_TD_11850311_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n = tbl_Filter_TD_11850311_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4480 = std::string(_i_brand4480_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n = tbl_Filter_TD_11850311_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category4484 = std::string(_i_category4484_n.data());
            SW_JOIN_INNER_TD_10316981_payload_leftMajor payloadA{_i_item_sk4472, _i_brand4480, _i_category4484};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11821076_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk4509_k = tbl_Filter_TD_11821076_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10316981_key_leftMajor{_cs_item_sk4509_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4472 = (it->second)._i_item_sk4472;
                std::string _i_brand4480 = (it->second)._i_brand4480;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n{};
                memcpy(_i_brand4480_n.data(), (_i_brand4480).data(), (_i_brand4480).length());
                std::string _i_category4484 = (it->second)._i_category4484;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n{};
                memcpy(_i_category4484_n.data(), (_i_category4484).data(), (_i_category4484).length());
                int32_t _cs_sold_date_sk4494 = tbl_Filter_TD_11821076_output.getInt32(i, 0);
                int32_t _cs_call_center_sk4505 = tbl_Filter_TD_11821076_output.getInt32(i, 1);
                int32_t _cs_item_sk4509 = tbl_Filter_TD_11821076_output.getInt32(i, 2);
                int64_t _cs_sales_price4515 = tbl_Filter_TD_11821076_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_10316981_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4480_n);
                tbl_JOIN_INNER_TD_10316981_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4484_n);
                tbl_JOIN_INNER_TD_10316981_output.setInt32(r, 2, _cs_sold_date_sk4494);
                tbl_JOIN_INNER_TD_10316981_output.setInt32(r, 3, _cs_call_center_sk4505);
                tbl_JOIN_INNER_TD_10316981_output.setInt64(r, 4, _cs_sales_price4515);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10316981_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10316981_key_rightMajor, SW_JOIN_INNER_TD_10316981_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11821076_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk4509_k = tbl_Filter_TD_11821076_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10316981_key_rightMajor keyA{_cs_item_sk4509_k};
            int32_t _cs_sold_date_sk4494 = tbl_Filter_TD_11821076_output.getInt32(i, 0);
            int32_t _cs_call_center_sk4505 = tbl_Filter_TD_11821076_output.getInt32(i, 1);
            int32_t _cs_item_sk4509 = tbl_Filter_TD_11821076_output.getInt32(i, 2);
            int64_t _cs_sales_price4515 = tbl_Filter_TD_11821076_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_10316981_payload_rightMajor payloadA{_cs_sold_date_sk4494, _cs_call_center_sk4505, _cs_item_sk4509, _cs_sales_price4515};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11850311_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4472_k = tbl_Filter_TD_11850311_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10316981_key_rightMajor{_i_item_sk4472_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk4494 = (it->second)._cs_sold_date_sk4494;
                int32_t _cs_call_center_sk4505 = (it->second)._cs_call_center_sk4505;
                int32_t _cs_item_sk4509 = (it->second)._cs_item_sk4509;
                int64_t _cs_sales_price4515 = (it->second)._cs_sales_price4515;
                int32_t _i_item_sk4472 = tbl_Filter_TD_11850311_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n = tbl_Filter_TD_11850311_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4480 = std::string(_i_brand4480_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n = tbl_Filter_TD_11850311_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category4484 = std::string(_i_category4484_n.data());
                tbl_JOIN_INNER_TD_10316981_output.setInt32(r, 2, _cs_sold_date_sk4494);
                tbl_JOIN_INNER_TD_10316981_output.setInt32(r, 3, _cs_call_center_sk4505);
                tbl_JOIN_INNER_TD_10316981_output.setInt64(r, 4, _cs_sales_price4515);
                tbl_JOIN_INNER_TD_10316981_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4480_n);
                tbl_JOIN_INNER_TD_10316981_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4484_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10316981_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10316981_output #Row: " << tbl_JOIN_INNER_TD_10316981_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10549331(Table &tbl_SerializeFromObject_TD_11955267_input, Table &tbl_Filter_TD_10549331_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#4436) AND isnotnull(cc_name#4442)))
    // Input: ListBuffer(cc_call_center_sk#4436, cc_name#4442)
    // Output: ListBuffer(cc_call_center_sk#4436, cc_name#4442)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11955267_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk4436 = tbl_SerializeFromObject_TD_11955267_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4442 = tbl_SerializeFromObject_TD_11955267_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cc_call_center_sk4436!= 0) && (std::string(_cc_name4442.data()) != "NULL")) {
            int32_t _cc_call_center_sk4436_t = tbl_SerializeFromObject_TD_11955267_input.getInt32(i, 0);
            tbl_Filter_TD_10549331_output.setInt32(r, 0, _cc_call_center_sk4436_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_t = tbl_SerializeFromObject_TD_11955267_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10549331_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name4442_t);
            r++;
        }
    }
    tbl_Filter_TD_10549331_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10549331_output #Row: " << tbl_Filter_TD_10549331_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10117251_key_leftMajor {
    int32_t _cs_sold_date_sk4374;
    bool operator==(const SW_JOIN_INNER_TD_10117251_key_leftMajor& other) const {
        return ((_cs_sold_date_sk4374 == other._cs_sold_date_sk4374));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10117251_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10117251_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk4374));
    }
};
}
struct SW_JOIN_INNER_TD_10117251_payload_leftMajor {
    std::string _i_brand4360;
    std::string _i_category4364;
    int32_t _cs_sold_date_sk4374;
    int32_t _cs_call_center_sk4385;
    int64_t _cs_sales_price4395;
};
struct SW_JOIN_INNER_TD_10117251_key_rightMajor {
    int32_t _d_date_sk4408;
    bool operator==(const SW_JOIN_INNER_TD_10117251_key_rightMajor& other) const {
        return ((_d_date_sk4408 == other._d_date_sk4408));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10117251_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10117251_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4408));
    }
};
}
struct SW_JOIN_INNER_TD_10117251_payload_rightMajor {
    int32_t _d_date_sk4408;
    int32_t _d_year4414;
    int32_t _d_moy4416;
};
void SW_JOIN_INNER_TD_10117251(Table &tbl_JOIN_INNER_TD_11152755_output, Table &tbl_Filter_TD_11947670_output, Table &tbl_JOIN_INNER_TD_10117251_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#4374 = d_date_sk#4408))
    // Left Table: ListBuffer(i_brand#4360, i_category#4364, cs_sold_date_sk#4374, cs_call_center_sk#4385, cs_sales_price#4395)
    // Right Table: ListBuffer(d_date_sk#4408, d_year#4414, d_moy#4416)
    // Output Table: ListBuffer(i_brand#4360, i_category#4364, cs_call_center_sk#4385, cs_sales_price#4395, d_year#4414, d_moy#4416)
    int left_nrow = tbl_JOIN_INNER_TD_11152755_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11947670_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10117251_key_leftMajor, SW_JOIN_INNER_TD_10117251_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11152755_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk4374_k = tbl_JOIN_INNER_TD_11152755_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10117251_key_leftMajor keyA{_cs_sold_date_sk4374_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n = tbl_JOIN_INNER_TD_11152755_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4360 = std::string(_i_brand4360_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n = tbl_JOIN_INNER_TD_11152755_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4364 = std::string(_i_category4364_n.data());
            int32_t _cs_sold_date_sk4374 = tbl_JOIN_INNER_TD_11152755_output.getInt32(i, 2);
            int32_t _cs_call_center_sk4385 = tbl_JOIN_INNER_TD_11152755_output.getInt32(i, 3);
            int64_t _cs_sales_price4395 = tbl_JOIN_INNER_TD_11152755_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_10117251_payload_leftMajor payloadA{_i_brand4360, _i_category4364, _cs_sold_date_sk4374, _cs_call_center_sk4385, _cs_sales_price4395};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11947670_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4408_k = tbl_Filter_TD_11947670_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10117251_key_leftMajor{_d_date_sk4408_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4360 = (it->second)._i_brand4360;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n{};
                memcpy(_i_brand4360_n.data(), (_i_brand4360).data(), (_i_brand4360).length());
                std::string _i_category4364 = (it->second)._i_category4364;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n{};
                memcpy(_i_category4364_n.data(), (_i_category4364).data(), (_i_category4364).length());
                int32_t _cs_sold_date_sk4374 = (it->second)._cs_sold_date_sk4374;
                int32_t _cs_call_center_sk4385 = (it->second)._cs_call_center_sk4385;
                int64_t _cs_sales_price4395 = (it->second)._cs_sales_price4395;
                int32_t _d_date_sk4408 = tbl_Filter_TD_11947670_output.getInt32(i, 0);
                int32_t _d_year4414 = tbl_Filter_TD_11947670_output.getInt32(i, 1);
                int32_t _d_moy4416 = tbl_Filter_TD_11947670_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10117251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4360_n);
                tbl_JOIN_INNER_TD_10117251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4364_n);
                tbl_JOIN_INNER_TD_10117251_output.setInt32(r, 2, _cs_call_center_sk4385);
                tbl_JOIN_INNER_TD_10117251_output.setInt64(r, 3, _cs_sales_price4395);
                tbl_JOIN_INNER_TD_10117251_output.setInt32(r, 4, _d_year4414);
                tbl_JOIN_INNER_TD_10117251_output.setInt32(r, 5, _d_moy4416);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10117251_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10117251_key_rightMajor, SW_JOIN_INNER_TD_10117251_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11947670_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4408_k = tbl_Filter_TD_11947670_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10117251_key_rightMajor keyA{_d_date_sk4408_k};
            int32_t _d_date_sk4408 = tbl_Filter_TD_11947670_output.getInt32(i, 0);
            int32_t _d_year4414 = tbl_Filter_TD_11947670_output.getInt32(i, 1);
            int32_t _d_moy4416 = tbl_Filter_TD_11947670_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10117251_payload_rightMajor payloadA{_d_date_sk4408, _d_year4414, _d_moy4416};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11152755_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk4374_k = tbl_JOIN_INNER_TD_11152755_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10117251_key_rightMajor{_cs_sold_date_sk4374_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4408 = (it->second)._d_date_sk4408;
                int32_t _d_year4414 = (it->second)._d_year4414;
                int32_t _d_moy4416 = (it->second)._d_moy4416;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n = tbl_JOIN_INNER_TD_11152755_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4360 = std::string(_i_brand4360_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n = tbl_JOIN_INNER_TD_11152755_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4364 = std::string(_i_category4364_n.data());
                int32_t _cs_sold_date_sk4374 = tbl_JOIN_INNER_TD_11152755_output.getInt32(i, 2);
                int32_t _cs_call_center_sk4385 = tbl_JOIN_INNER_TD_11152755_output.getInt32(i, 3);
                int64_t _cs_sales_price4395 = tbl_JOIN_INNER_TD_11152755_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_10117251_output.setInt32(r, 4, _d_year4414);
                tbl_JOIN_INNER_TD_10117251_output.setInt32(r, 5, _d_moy4416);
                tbl_JOIN_INNER_TD_10117251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4360_n);
                tbl_JOIN_INNER_TD_10117251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4364_n);
                tbl_JOIN_INNER_TD_10117251_output.setInt32(r, 2, _cs_call_center_sk4385);
                tbl_JOIN_INNER_TD_10117251_output.setInt64(r, 3, _cs_sales_price4395);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10117251_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10117251_output #Row: " << tbl_JOIN_INNER_TD_10117251_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_10626150_key {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_10626150_key& other) const { return (_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909) && (_d_year126 == other._d_year126) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_10626150_key> {
    std::size_t operator() (const SW_Aggregate_TD_10626150_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_10626150_payload {
    int64_t _sum_sales3544_sum_0;
    int64_t __w03558_sum_1;
};
void SW_Aggregate_TD_10626150(Table &tbl_JOIN_INNER_TD_11475424_output, Table &tbl_Aggregate_TD_10626150_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, MakeDecimal(sum(UnscaledValue(cs_sales_price#1125)),17,2) AS sum_sales#3544, MakeDecimal(sum(UnscaledValue(cs_sales_price#1125)),17,2) AS _w0#3558)
    // Input: ListBuffer(i_brand#236, i_category#240, cs_sales_price#1125, d_year#126, d_moy#128, cc_name#909)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, _w0#3558)
    std::unordered_map<SW_Aggregate_TD_10626150_key, SW_Aggregate_TD_10626150_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11475424_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_11475424_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_11475424_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_11475424_output.getInt64(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_11475424_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_11475424_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_JOIN_INNER_TD_11475424_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_10626150_key k{std::string(_i_category240.data()), std::string(_i_brand236.data()), std::string(_cc_name909.data()), _d_year126, _d_moy128};
        int64_t _sum_sales3544_sum_0 = _cs_sales_price1125;
        int64_t __w03558_sum_1 = _cs_sales_price1125;
        SW_Aggregate_TD_10626150_payload p{_sum_sales3544_sum_0, __w03558_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sum_sales3544_sum_0 + _sum_sales3544_sum_0;
            p._sum_sales3544_sum_0 = sum_0;
            int64_t sum_1 = (it->second).__w03558_sum_1 + __w03558_sum_1;
            p.__w03558_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_10626150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), ((it.first)._i_brand236).data(), ((it.first)._i_brand236).length());
        tbl_Aggregate_TD_10626150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909{};
        memcpy(_cc_name909.data(), ((it.first)._cc_name909).data(), ((it.first)._cc_name909).length());
        tbl_Aggregate_TD_10626150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909);
        tbl_Aggregate_TD_10626150_output.setInt32(r, 3, (it.first)._d_year126);
        tbl_Aggregate_TD_10626150_output.setInt32(r, 4, (it.first)._d_moy128);
        int64_t _sum_sales3544 = (it.second)._sum_sales3544_sum_0;
        tbl_Aggregate_TD_10626150_output.setInt64(r, 5, _sum_sales3544);
        int64_t __w03558 = (it.second).__w03558_sum_1;
        tbl_Aggregate_TD_10626150_output.setInt64(r, 6, __w03558);
        ++r;
    }
    tbl_Aggregate_TD_10626150_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10626150_output #Row: " << tbl_Aggregate_TD_10626150_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9134941(Table &tbl_SerializeFromObject_TD_10736255_input, Table &tbl_Filter_TD_9134941_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cc_call_center_sk#4556) AND isnotnull(cc_name#4562)))
    // Input: ListBuffer(cc_call_center_sk#4556, cc_name#4562)
    // Output: ListBuffer(cc_call_center_sk#4556, cc_name#4562)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10736255_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cc_call_center_sk4556 = tbl_SerializeFromObject_TD_10736255_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4562 = tbl_SerializeFromObject_TD_10736255_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cc_call_center_sk4556!= 0) && (std::string(_cc_name4562.data()) != "NULL")) {
            int32_t _cc_call_center_sk4556_t = tbl_SerializeFromObject_TD_10736255_input.getInt32(i, 0);
            tbl_Filter_TD_9134941_output.setInt32(r, 0, _cc_call_center_sk4556_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_t = tbl_SerializeFromObject_TD_10736255_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9134941_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cc_name4562_t);
            r++;
        }
    }
    tbl_Filter_TD_9134941_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9134941_output #Row: " << tbl_Filter_TD_9134941_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9728343_key_leftMajor {
    int32_t _cs_sold_date_sk4494;
    bool operator==(const SW_JOIN_INNER_TD_9728343_key_leftMajor& other) const {
        return ((_cs_sold_date_sk4494 == other._cs_sold_date_sk4494));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9728343_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9728343_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk4494));
    }
};
}
struct SW_JOIN_INNER_TD_9728343_payload_leftMajor {
    std::string _i_brand4480;
    std::string _i_category4484;
    int32_t _cs_sold_date_sk4494;
    int32_t _cs_call_center_sk4505;
    int64_t _cs_sales_price4515;
};
struct SW_JOIN_INNER_TD_9728343_key_rightMajor {
    int32_t _d_date_sk4528;
    bool operator==(const SW_JOIN_INNER_TD_9728343_key_rightMajor& other) const {
        return ((_d_date_sk4528 == other._d_date_sk4528));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9728343_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9728343_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4528));
    }
};
}
struct SW_JOIN_INNER_TD_9728343_payload_rightMajor {
    int32_t _d_date_sk4528;
    int32_t _d_year4534;
    int32_t _d_moy4536;
};
void SW_JOIN_INNER_TD_9728343(Table &tbl_JOIN_INNER_TD_10316981_output, Table &tbl_Filter_TD_10193612_output, Table &tbl_JOIN_INNER_TD_9728343_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#4494 = d_date_sk#4528))
    // Left Table: ListBuffer(i_brand#4480, i_category#4484, cs_sold_date_sk#4494, cs_call_center_sk#4505, cs_sales_price#4515)
    // Right Table: ListBuffer(d_date_sk#4528, d_year#4534, d_moy#4536)
    // Output Table: ListBuffer(i_brand#4480, i_category#4484, cs_call_center_sk#4505, cs_sales_price#4515, d_year#4534, d_moy#4536)
    int left_nrow = tbl_JOIN_INNER_TD_10316981_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10193612_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9728343_key_leftMajor, SW_JOIN_INNER_TD_9728343_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10316981_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk4494_k = tbl_JOIN_INNER_TD_10316981_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9728343_key_leftMajor keyA{_cs_sold_date_sk4494_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n = tbl_JOIN_INNER_TD_10316981_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4480 = std::string(_i_brand4480_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n = tbl_JOIN_INNER_TD_10316981_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4484 = std::string(_i_category4484_n.data());
            int32_t _cs_sold_date_sk4494 = tbl_JOIN_INNER_TD_10316981_output.getInt32(i, 2);
            int32_t _cs_call_center_sk4505 = tbl_JOIN_INNER_TD_10316981_output.getInt32(i, 3);
            int64_t _cs_sales_price4515 = tbl_JOIN_INNER_TD_10316981_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_9728343_payload_leftMajor payloadA{_i_brand4480, _i_category4484, _cs_sold_date_sk4494, _cs_call_center_sk4505, _cs_sales_price4515};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10193612_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4528_k = tbl_Filter_TD_10193612_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9728343_key_leftMajor{_d_date_sk4528_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4480 = (it->second)._i_brand4480;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n{};
                memcpy(_i_brand4480_n.data(), (_i_brand4480).data(), (_i_brand4480).length());
                std::string _i_category4484 = (it->second)._i_category4484;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n{};
                memcpy(_i_category4484_n.data(), (_i_category4484).data(), (_i_category4484).length());
                int32_t _cs_sold_date_sk4494 = (it->second)._cs_sold_date_sk4494;
                int32_t _cs_call_center_sk4505 = (it->second)._cs_call_center_sk4505;
                int64_t _cs_sales_price4515 = (it->second)._cs_sales_price4515;
                int32_t _d_date_sk4528 = tbl_Filter_TD_10193612_output.getInt32(i, 0);
                int32_t _d_year4534 = tbl_Filter_TD_10193612_output.getInt32(i, 1);
                int32_t _d_moy4536 = tbl_Filter_TD_10193612_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9728343_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4480_n);
                tbl_JOIN_INNER_TD_9728343_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4484_n);
                tbl_JOIN_INNER_TD_9728343_output.setInt32(r, 2, _cs_call_center_sk4505);
                tbl_JOIN_INNER_TD_9728343_output.setInt64(r, 3, _cs_sales_price4515);
                tbl_JOIN_INNER_TD_9728343_output.setInt32(r, 4, _d_year4534);
                tbl_JOIN_INNER_TD_9728343_output.setInt32(r, 5, _d_moy4536);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9728343_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9728343_key_rightMajor, SW_JOIN_INNER_TD_9728343_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10193612_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4528_k = tbl_Filter_TD_10193612_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9728343_key_rightMajor keyA{_d_date_sk4528_k};
            int32_t _d_date_sk4528 = tbl_Filter_TD_10193612_output.getInt32(i, 0);
            int32_t _d_year4534 = tbl_Filter_TD_10193612_output.getInt32(i, 1);
            int32_t _d_moy4536 = tbl_Filter_TD_10193612_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9728343_payload_rightMajor payloadA{_d_date_sk4528, _d_year4534, _d_moy4536};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10316981_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk4494_k = tbl_JOIN_INNER_TD_10316981_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9728343_key_rightMajor{_cs_sold_date_sk4494_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4528 = (it->second)._d_date_sk4528;
                int32_t _d_year4534 = (it->second)._d_year4534;
                int32_t _d_moy4536 = (it->second)._d_moy4536;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n = tbl_JOIN_INNER_TD_10316981_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4480 = std::string(_i_brand4480_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n = tbl_JOIN_INNER_TD_10316981_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4484 = std::string(_i_category4484_n.data());
                int32_t _cs_sold_date_sk4494 = tbl_JOIN_INNER_TD_10316981_output.getInt32(i, 2);
                int32_t _cs_call_center_sk4505 = tbl_JOIN_INNER_TD_10316981_output.getInt32(i, 3);
                int64_t _cs_sales_price4515 = tbl_JOIN_INNER_TD_10316981_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_9728343_output.setInt32(r, 4, _d_year4534);
                tbl_JOIN_INNER_TD_9728343_output.setInt32(r, 5, _d_moy4536);
                tbl_JOIN_INNER_TD_9728343_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4480_n);
                tbl_JOIN_INNER_TD_9728343_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4484_n);
                tbl_JOIN_INNER_TD_9728343_output.setInt32(r, 2, _cs_call_center_sk4505);
                tbl_JOIN_INNER_TD_9728343_output.setInt64(r, 3, _cs_sales_price4515);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9728343_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9728343_output #Row: " << tbl_JOIN_INNER_TD_9728343_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9746555_key_leftMajor {
    int32_t _cs_call_center_sk4385;
    bool operator==(const SW_JOIN_INNER_TD_9746555_key_leftMajor& other) const {
        return ((_cs_call_center_sk4385 == other._cs_call_center_sk4385));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9746555_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9746555_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk4385));
    }
};
}
struct SW_JOIN_INNER_TD_9746555_payload_leftMajor {
    std::string _i_brand4360;
    std::string _i_category4364;
    int32_t _cs_call_center_sk4385;
    int64_t _cs_sales_price4395;
    int32_t _d_year4414;
    int32_t _d_moy4416;
};
struct SW_JOIN_INNER_TD_9746555_key_rightMajor {
    int32_t _cc_call_center_sk4436;
    bool operator==(const SW_JOIN_INNER_TD_9746555_key_rightMajor& other) const {
        return ((_cc_call_center_sk4436 == other._cc_call_center_sk4436));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9746555_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9746555_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk4436));
    }
};
}
struct SW_JOIN_INNER_TD_9746555_payload_rightMajor {
    int32_t _cc_call_center_sk4436;
    std::string _cc_name4442;
};
void SW_JOIN_INNER_TD_9746555(Table &tbl_JOIN_INNER_TD_10117251_output, Table &tbl_Filter_TD_10549331_output, Table &tbl_JOIN_INNER_TD_9746555_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#4436 = cs_call_center_sk#4385))
    // Left Table: ListBuffer(i_brand#4360, i_category#4364, cs_call_center_sk#4385, cs_sales_price#4395, d_year#4414, d_moy#4416)
    // Right Table: ListBuffer(cc_call_center_sk#4436, cc_name#4442)
    // Output Table: ListBuffer(i_brand#4360, i_category#4364, cs_sales_price#4395, d_year#4414, d_moy#4416, cc_name#4442)
    int left_nrow = tbl_JOIN_INNER_TD_10117251_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10549331_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9746555_key_leftMajor, SW_JOIN_INNER_TD_9746555_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10117251_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk4385_k = tbl_JOIN_INNER_TD_10117251_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9746555_key_leftMajor keyA{_cs_call_center_sk4385_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n = tbl_JOIN_INNER_TD_10117251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4360 = std::string(_i_brand4360_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n = tbl_JOIN_INNER_TD_10117251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4364 = std::string(_i_category4364_n.data());
            int32_t _cs_call_center_sk4385 = tbl_JOIN_INNER_TD_10117251_output.getInt32(i, 2);
            int64_t _cs_sales_price4395 = tbl_JOIN_INNER_TD_10117251_output.getInt64(i, 3);
            int32_t _d_year4414 = tbl_JOIN_INNER_TD_10117251_output.getInt32(i, 4);
            int32_t _d_moy4416 = tbl_JOIN_INNER_TD_10117251_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9746555_payload_leftMajor payloadA{_i_brand4360, _i_category4364, _cs_call_center_sk4385, _cs_sales_price4395, _d_year4414, _d_moy4416};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10549331_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk4436_k = tbl_Filter_TD_10549331_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9746555_key_leftMajor{_cc_call_center_sk4436_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4360 = (it->second)._i_brand4360;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n{};
                memcpy(_i_brand4360_n.data(), (_i_brand4360).data(), (_i_brand4360).length());
                std::string _i_category4364 = (it->second)._i_category4364;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n{};
                memcpy(_i_category4364_n.data(), (_i_category4364).data(), (_i_category4364).length());
                int32_t _cs_call_center_sk4385 = (it->second)._cs_call_center_sk4385;
                int64_t _cs_sales_price4395 = (it->second)._cs_sales_price4395;
                int32_t _d_year4414 = (it->second)._d_year4414;
                int32_t _d_moy4416 = (it->second)._d_moy4416;
                int32_t _cc_call_center_sk4436 = tbl_Filter_TD_10549331_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_n = tbl_Filter_TD_10549331_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name4442 = std::string(_cc_name4442_n.data());
                tbl_JOIN_INNER_TD_9746555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4360_n);
                tbl_JOIN_INNER_TD_9746555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4364_n);
                tbl_JOIN_INNER_TD_9746555_output.setInt64(r, 2, _cs_sales_price4395);
                tbl_JOIN_INNER_TD_9746555_output.setInt32(r, 3, _d_year4414);
                tbl_JOIN_INNER_TD_9746555_output.setInt32(r, 4, _d_moy4416);
                tbl_JOIN_INNER_TD_9746555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name4442_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9746555_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9746555_key_rightMajor, SW_JOIN_INNER_TD_9746555_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10549331_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk4436_k = tbl_Filter_TD_10549331_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9746555_key_rightMajor keyA{_cc_call_center_sk4436_k};
            int32_t _cc_call_center_sk4436 = tbl_Filter_TD_10549331_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_n = tbl_Filter_TD_10549331_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name4442 = std::string(_cc_name4442_n.data());
            SW_JOIN_INNER_TD_9746555_payload_rightMajor payloadA{_cc_call_center_sk4436, _cc_name4442};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10117251_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk4385_k = tbl_JOIN_INNER_TD_10117251_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9746555_key_rightMajor{_cs_call_center_sk4385_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk4436 = (it->second)._cc_call_center_sk4436;
                std::string _cc_name4442 = (it->second)._cc_name4442;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_n{};
                memcpy(_cc_name4442_n.data(), (_cc_name4442).data(), (_cc_name4442).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n = tbl_JOIN_INNER_TD_10117251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4360 = std::string(_i_brand4360_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n = tbl_JOIN_INNER_TD_10117251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4364 = std::string(_i_category4364_n.data());
                int32_t _cs_call_center_sk4385 = tbl_JOIN_INNER_TD_10117251_output.getInt32(i, 2);
                int64_t _cs_sales_price4395 = tbl_JOIN_INNER_TD_10117251_output.getInt64(i, 3);
                int32_t _d_year4414 = tbl_JOIN_INNER_TD_10117251_output.getInt32(i, 4);
                int32_t _d_moy4416 = tbl_JOIN_INNER_TD_10117251_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9746555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name4442_n);
                tbl_JOIN_INNER_TD_9746555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4360_n);
                tbl_JOIN_INNER_TD_9746555_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4364_n);
                tbl_JOIN_INNER_TD_9746555_output.setInt64(r, 2, _cs_sales_price4395);
                tbl_JOIN_INNER_TD_9746555_output.setInt32(r, 3, _d_year4414);
                tbl_JOIN_INNER_TD_9746555_output.setInt32(r, 4, _d_moy4416);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9746555_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9746555_output #Row: " << tbl_JOIN_INNER_TD_9746555_output.getNumRow() << std::endl;
}

void SW_Window_TD_9159445(Table &tbl_Aggregate_TD_10626150_output, Table &tbl_Window_TD_9159445_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#126, d_moy#128) windowspecdefinition(i_category#240, i_brand#236, cc_name#909, d_year#126 ASC NULLS FIRST, d_moy#128 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#3546)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, _w0#3558)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546)
    struct SW_Window_TD_9159445Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int64_t _sum_sales3544;
        int64_t __w03558;
    }; 

    int nrow = tbl_Aggregate_TD_10626150_output.getNumRow();
    std::vector<SW_Window_TD_9159445Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_10626150_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_9159445_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Aggregate_TD_10626150_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_9159445_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Aggregate_TD_10626150_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_9159445_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        int32_t _d_year126 = tbl_Aggregate_TD_10626150_output.getInt32(i, 3);
        tbl_Window_TD_9159445_output.setInt32(r, 3,_d_year126);
        int32_t _d_moy128 = tbl_Aggregate_TD_10626150_output.getInt32(i, 4);
        tbl_Window_TD_9159445_output.setInt32(r, 4,_d_moy128);
        int64_t _sum_sales3544 = tbl_Aggregate_TD_10626150_output.getInt64(i, 5);
        tbl_Window_TD_9159445_output.setInt64(r, 5,_sum_sales3544);
        int64_t __w03558 = tbl_Aggregate_TD_10626150_output.getInt64(i, 6);
        tbl_Window_TD_9159445_output.setInt64(r, 6,__w03558);
        r++;
        SW_Window_TD_9159445Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_sum_sales3544,__w03558};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_9159445Row& a, const SW_Window_TD_9159445Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 < b._cc_name909)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 < b._d_year126)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 == b._d_year126) && (a._d_moy128 < b._d_moy128)); 
}
    }SW_Window_TD_9159445_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_9159445_order0);
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
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_9159445_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_9159445_output.setNumRow(r);
    std::cout << "tbl_Window_TD_9159445_output #Row: " << tbl_Window_TD_9159445_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8968526_key_leftMajor {
    int32_t _cs_call_center_sk4505;
    bool operator==(const SW_JOIN_INNER_TD_8968526_key_leftMajor& other) const {
        return ((_cs_call_center_sk4505 == other._cs_call_center_sk4505));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8968526_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8968526_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_call_center_sk4505));
    }
};
}
struct SW_JOIN_INNER_TD_8968526_payload_leftMajor {
    std::string _i_brand4480;
    std::string _i_category4484;
    int32_t _cs_call_center_sk4505;
    int64_t _cs_sales_price4515;
    int32_t _d_year4534;
    int32_t _d_moy4536;
};
struct SW_JOIN_INNER_TD_8968526_key_rightMajor {
    int32_t _cc_call_center_sk4556;
    bool operator==(const SW_JOIN_INNER_TD_8968526_key_rightMajor& other) const {
        return ((_cc_call_center_sk4556 == other._cc_call_center_sk4556));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8968526_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8968526_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cc_call_center_sk4556));
    }
};
}
struct SW_JOIN_INNER_TD_8968526_payload_rightMajor {
    int32_t _cc_call_center_sk4556;
    std::string _cc_name4562;
};
void SW_JOIN_INNER_TD_8968526(Table &tbl_JOIN_INNER_TD_9728343_output, Table &tbl_Filter_TD_9134941_output, Table &tbl_JOIN_INNER_TD_8968526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cc_call_center_sk#4556 = cs_call_center_sk#4505))
    // Left Table: ListBuffer(i_brand#4480, i_category#4484, cs_call_center_sk#4505, cs_sales_price#4515, d_year#4534, d_moy#4536)
    // Right Table: ListBuffer(cc_call_center_sk#4556, cc_name#4562)
    // Output Table: ListBuffer(i_brand#4480, i_category#4484, cs_sales_price#4515, d_year#4534, d_moy#4536, cc_name#4562)
    int left_nrow = tbl_JOIN_INNER_TD_9728343_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9134941_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8968526_key_leftMajor, SW_JOIN_INNER_TD_8968526_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9728343_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_call_center_sk4505_k = tbl_JOIN_INNER_TD_9728343_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8968526_key_leftMajor keyA{_cs_call_center_sk4505_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n = tbl_JOIN_INNER_TD_9728343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4480 = std::string(_i_brand4480_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n = tbl_JOIN_INNER_TD_9728343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4484 = std::string(_i_category4484_n.data());
            int32_t _cs_call_center_sk4505 = tbl_JOIN_INNER_TD_9728343_output.getInt32(i, 2);
            int64_t _cs_sales_price4515 = tbl_JOIN_INNER_TD_9728343_output.getInt64(i, 3);
            int32_t _d_year4534 = tbl_JOIN_INNER_TD_9728343_output.getInt32(i, 4);
            int32_t _d_moy4536 = tbl_JOIN_INNER_TD_9728343_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8968526_payload_leftMajor payloadA{_i_brand4480, _i_category4484, _cs_call_center_sk4505, _cs_sales_price4515, _d_year4534, _d_moy4536};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9134941_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cc_call_center_sk4556_k = tbl_Filter_TD_9134941_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8968526_key_leftMajor{_cc_call_center_sk4556_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4480 = (it->second)._i_brand4480;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n{};
                memcpy(_i_brand4480_n.data(), (_i_brand4480).data(), (_i_brand4480).length());
                std::string _i_category4484 = (it->second)._i_category4484;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n{};
                memcpy(_i_category4484_n.data(), (_i_category4484).data(), (_i_category4484).length());
                int32_t _cs_call_center_sk4505 = (it->second)._cs_call_center_sk4505;
                int64_t _cs_sales_price4515 = (it->second)._cs_sales_price4515;
                int32_t _d_year4534 = (it->second)._d_year4534;
                int32_t _d_moy4536 = (it->second)._d_moy4536;
                int32_t _cc_call_center_sk4556 = tbl_Filter_TD_9134941_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_n = tbl_Filter_TD_9134941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cc_name4562 = std::string(_cc_name4562_n.data());
                tbl_JOIN_INNER_TD_8968526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4480_n);
                tbl_JOIN_INNER_TD_8968526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4484_n);
                tbl_JOIN_INNER_TD_8968526_output.setInt64(r, 2, _cs_sales_price4515);
                tbl_JOIN_INNER_TD_8968526_output.setInt32(r, 3, _d_year4534);
                tbl_JOIN_INNER_TD_8968526_output.setInt32(r, 4, _d_moy4536);
                tbl_JOIN_INNER_TD_8968526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name4562_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8968526_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8968526_key_rightMajor, SW_JOIN_INNER_TD_8968526_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9134941_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cc_call_center_sk4556_k = tbl_Filter_TD_9134941_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8968526_key_rightMajor keyA{_cc_call_center_sk4556_k};
            int32_t _cc_call_center_sk4556 = tbl_Filter_TD_9134941_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_n = tbl_Filter_TD_9134941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cc_name4562 = std::string(_cc_name4562_n.data());
            SW_JOIN_INNER_TD_8968526_payload_rightMajor payloadA{_cc_call_center_sk4556, _cc_name4562};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9728343_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_call_center_sk4505_k = tbl_JOIN_INNER_TD_9728343_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8968526_key_rightMajor{_cs_call_center_sk4505_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cc_call_center_sk4556 = (it->second)._cc_call_center_sk4556;
                std::string _cc_name4562 = (it->second)._cc_name4562;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_n{};
                memcpy(_cc_name4562_n.data(), (_cc_name4562).data(), (_cc_name4562).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n = tbl_JOIN_INNER_TD_9728343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4480 = std::string(_i_brand4480_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n = tbl_JOIN_INNER_TD_9728343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4484 = std::string(_i_category4484_n.data());
                int32_t _cs_call_center_sk4505 = tbl_JOIN_INNER_TD_9728343_output.getInt32(i, 2);
                int64_t _cs_sales_price4515 = tbl_JOIN_INNER_TD_9728343_output.getInt64(i, 3);
                int32_t _d_year4534 = tbl_JOIN_INNER_TD_9728343_output.getInt32(i, 4);
                int32_t _d_moy4536 = tbl_JOIN_INNER_TD_9728343_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8968526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cc_name4562_n);
                tbl_JOIN_INNER_TD_8968526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4480_n);
                tbl_JOIN_INNER_TD_8968526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4484_n);
                tbl_JOIN_INNER_TD_8968526_output.setInt64(r, 2, _cs_sales_price4515);
                tbl_JOIN_INNER_TD_8968526_output.setInt32(r, 3, _d_year4534);
                tbl_JOIN_INNER_TD_8968526_output.setInt32(r, 4, _d_moy4536);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8968526_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8968526_output #Row: " << tbl_JOIN_INNER_TD_8968526_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8646556_key {
    std::string _i_category4364;
    std::string _i_brand4360;
    std::string _cc_name4442;
    int32_t _d_year4414;
    int32_t _d_moy4416;
    bool operator==(const SW_Aggregate_TD_8646556_key& other) const { return (_i_category4364 == other._i_category4364) && (_i_brand4360 == other._i_brand4360) && (_cc_name4442 == other._cc_name4442) && (_d_year4414 == other._d_year4414) && (_d_moy4416 == other._d_moy4416); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8646556_key> {
    std::size_t operator() (const SW_Aggregate_TD_8646556_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4364)) + (hash<string>()(k._i_brand4360)) + (hash<string>()(k._cc_name4442)) + (hash<int32_t>()(k._d_year4414)) + (hash<int32_t>()(k._d_moy4416));
    }
};
}
struct SW_Aggregate_TD_8646556_payload {
    int64_t _sum_sales3544_sum_0;
};
void SW_Aggregate_TD_8646556(Table &tbl_JOIN_INNER_TD_9746555_output, Table &tbl_Aggregate_TD_8646556_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#4364, i_brand#4360, cc_name#4442, d_year#4414, d_moy#4416, MakeDecimal(sum(UnscaledValue(cs_sales_price#4395)),17,2) AS sum_sales#3544)
    // Input: ListBuffer(i_brand#4360, i_category#4364, cs_sales_price#4395, d_year#4414, d_moy#4416, cc_name#4442)
    // Output: ListBuffer(i_category#4364, i_brand#4360, cc_name#4442, d_year#4414, d_moy#4416, sum_sales#3544)
    std::unordered_map<SW_Aggregate_TD_8646556_key, SW_Aggregate_TD_8646556_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9746555_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4360 = tbl_JOIN_INNER_TD_9746555_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4364 = tbl_JOIN_INNER_TD_9746555_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _cs_sales_price4395 = tbl_JOIN_INNER_TD_9746555_output.getInt64(i, 2);
        int32_t _d_year4414 = tbl_JOIN_INNER_TD_9746555_output.getInt32(i, 3);
        int32_t _d_moy4416 = tbl_JOIN_INNER_TD_9746555_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4442 = tbl_JOIN_INNER_TD_9746555_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_8646556_key k{std::string(_i_category4364.data()), std::string(_i_brand4360.data()), std::string(_cc_name4442.data()), _d_year4414, _d_moy4416};
        int64_t _sum_sales3544_sum_0 = _cs_sales_price4395;
        SW_Aggregate_TD_8646556_payload p{_sum_sales3544_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sum_sales3544_sum_0 + _sum_sales3544_sum_0;
            p._sum_sales3544_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4364{};
        memcpy(_i_category4364.data(), ((it.first)._i_category4364).data(), ((it.first)._i_category4364).length());
        tbl_Aggregate_TD_8646556_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category4364);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4360{};
        memcpy(_i_brand4360.data(), ((it.first)._i_brand4360).data(), ((it.first)._i_brand4360).length());
        tbl_Aggregate_TD_8646556_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4360);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4442{};
        memcpy(_cc_name4442.data(), ((it.first)._cc_name4442).data(), ((it.first)._cc_name4442).length());
        tbl_Aggregate_TD_8646556_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name4442);
        tbl_Aggregate_TD_8646556_output.setInt32(r, 3, (it.first)._d_year4414);
        tbl_Aggregate_TD_8646556_output.setInt32(r, 4, (it.first)._d_moy4416);
        int64_t _sum_sales3544 = (it.second)._sum_sales3544_sum_0;
        tbl_Aggregate_TD_8646556_output.setInt64(r, 5, _sum_sales3544);
        ++r;
    }
    tbl_Aggregate_TD_8646556_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8646556_output #Row: " << tbl_Aggregate_TD_8646556_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8454835(Table &tbl_Window_TD_9159445_output, Table &tbl_Filter_TD_8454835_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_year#126) AND (d_year#126 = 1999)))
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546)
    int r = 0;
    int nrow1 = tbl_Window_TD_9159445_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Window_TD_9159445_output.getInt32(i, 3);
        if ((_d_year126!= 0) && (_d_year126 == 1999)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_9159445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8454835_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_9159445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8454835_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_Window_TD_9159445_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8454835_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_t);
            int32_t _d_year126_t = tbl_Window_TD_9159445_output.getInt32(i, 3);
            tbl_Filter_TD_8454835_output.setInt32(r, 3, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_9159445_output.getInt32(i, 4);
            tbl_Filter_TD_8454835_output.setInt32(r, 4, _d_moy128_t);
            int64_t _sum_sales3544_t = tbl_Window_TD_9159445_output.getInt64(i, 5);
            tbl_Filter_TD_8454835_output.setInt64(r, 5, _sum_sales3544_t);
            int64_t __w03558_t = tbl_Window_TD_9159445_output.getInt64(i, 6);
            tbl_Filter_TD_8454835_output.setInt64(r, 6, __w03558_t);
            int32_t _rn3546_t = tbl_Window_TD_9159445_output.getInt32(i, 7);
            tbl_Filter_TD_8454835_output.setInt32(r, 7, _rn3546_t);
            r++;
        }
    }
    tbl_Filter_TD_8454835_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8454835_output #Row: " << tbl_Filter_TD_8454835_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7141526_key {
    std::string _i_category4484;
    std::string _i_brand4480;
    std::string _cc_name4562;
    int32_t _d_year4534;
    int32_t _d_moy4536;
    bool operator==(const SW_Aggregate_TD_7141526_key& other) const { return (_i_category4484 == other._i_category4484) && (_i_brand4480 == other._i_brand4480) && (_cc_name4562 == other._cc_name4562) && (_d_year4534 == other._d_year4534) && (_d_moy4536 == other._d_moy4536); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7141526_key> {
    std::size_t operator() (const SW_Aggregate_TD_7141526_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4484)) + (hash<string>()(k._i_brand4480)) + (hash<string>()(k._cc_name4562)) + (hash<int32_t>()(k._d_year4534)) + (hash<int32_t>()(k._d_moy4536));
    }
};
}
struct SW_Aggregate_TD_7141526_payload {
    int64_t _sum_sales3544_sum_0;
};
void SW_Aggregate_TD_7141526(Table &tbl_JOIN_INNER_TD_8968526_output, Table &tbl_Aggregate_TD_7141526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#4484, i_brand#4480, cc_name#4562, d_year#4534, d_moy#4536, MakeDecimal(sum(UnscaledValue(cs_sales_price#4515)),17,2) AS sum_sales#3544)
    // Input: ListBuffer(i_brand#4480, i_category#4484, cs_sales_price#4515, d_year#4534, d_moy#4536, cc_name#4562)
    // Output: ListBuffer(i_category#4484, i_brand#4480, cc_name#4562, d_year#4534, d_moy#4536, sum_sales#3544)
    std::unordered_map<SW_Aggregate_TD_7141526_key, SW_Aggregate_TD_7141526_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8968526_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4480 = tbl_JOIN_INNER_TD_8968526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4484 = tbl_JOIN_INNER_TD_8968526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _cs_sales_price4515 = tbl_JOIN_INNER_TD_8968526_output.getInt64(i, 2);
        int32_t _d_year4534 = tbl_JOIN_INNER_TD_8968526_output.getInt32(i, 3);
        int32_t _d_moy4536 = tbl_JOIN_INNER_TD_8968526_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4562 = tbl_JOIN_INNER_TD_8968526_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_7141526_key k{std::string(_i_category4484.data()), std::string(_i_brand4480.data()), std::string(_cc_name4562.data()), _d_year4534, _d_moy4536};
        int64_t _sum_sales3544_sum_0 = _cs_sales_price4515;
        SW_Aggregate_TD_7141526_payload p{_sum_sales3544_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sum_sales3544_sum_0 + _sum_sales3544_sum_0;
            p._sum_sales3544_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4484{};
        memcpy(_i_category4484.data(), ((it.first)._i_category4484).data(), ((it.first)._i_category4484).length());
        tbl_Aggregate_TD_7141526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category4484);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4480{};
        memcpy(_i_brand4480.data(), ((it.first)._i_brand4480).data(), ((it.first)._i_brand4480).length());
        tbl_Aggregate_TD_7141526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4480);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4562{};
        memcpy(_cc_name4562.data(), ((it.first)._cc_name4562).data(), ((it.first)._cc_name4562).length());
        tbl_Aggregate_TD_7141526_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name4562);
        tbl_Aggregate_TD_7141526_output.setInt32(r, 3, (it.first)._d_year4534);
        tbl_Aggregate_TD_7141526_output.setInt32(r, 4, (it.first)._d_moy4536);
        int64_t _sum_sales3544 = (it.second)._sum_sales3544_sum_0;
        tbl_Aggregate_TD_7141526_output.setInt64(r, 5, _sum_sales3544);
        ++r;
    }
    tbl_Aggregate_TD_7141526_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7141526_output #Row: " << tbl_Aggregate_TD_7141526_output.getNumRow() << std::endl;
}

void SW_Window_TD_7153683(Table &tbl_Aggregate_TD_8646556_output, Table &tbl_Window_TD_7153683_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#4414, d_moy#4416) windowspecdefinition(i_category#4364, i_brand#4360, cc_name#4442, d_year#4414 ASC NULLS FIRST, d_moy#4416 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#4471)
    // Input: ListBuffer(i_category#4364, i_brand#4360, cc_name#4442, d_year#4414, d_moy#4416, sum_sales#3544)
    // Output: ListBuffer(i_category#4364, i_brand#4360, cc_name#4442, d_year#4414, d_moy#4416, sum_sales#3544, rn#4471)
    struct SW_Window_TD_7153683Row {
        std::string _i_category4364;
        std::string _i_brand4360;
        std::string _cc_name4442;
        int32_t _d_year4414;
        int32_t _d_moy4416;
        int64_t _sum_sales3544;
    }; 

    int nrow = tbl_Aggregate_TD_8646556_output.getNumRow();
    std::vector<SW_Window_TD_7153683Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4364 = tbl_Aggregate_TD_8646556_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7153683_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category4364);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4360 = tbl_Aggregate_TD_8646556_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7153683_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand4360);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4442 = tbl_Aggregate_TD_8646556_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7153683_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name4442);
        int32_t _d_year4414 = tbl_Aggregate_TD_8646556_output.getInt32(i, 3);
        tbl_Window_TD_7153683_output.setInt32(r, 3,_d_year4414);
        int32_t _d_moy4416 = tbl_Aggregate_TD_8646556_output.getInt32(i, 4);
        tbl_Window_TD_7153683_output.setInt32(r, 4,_d_moy4416);
        int64_t _sum_sales3544 = tbl_Aggregate_TD_8646556_output.getInt64(i, 5);
        tbl_Window_TD_7153683_output.setInt64(r, 5,_sum_sales3544);
        r++;
        SW_Window_TD_7153683Row t = {std::string(_i_category4364.data()),std::string(_i_brand4360.data()),std::string(_cc_name4442.data()),_d_year4414,_d_moy4416,_sum_sales3544};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7153683Row& a, const SW_Window_TD_7153683Row& b) const { return 
(a._i_category4364 < b._i_category4364) || 
 ((a._i_category4364 == b._i_category4364) && (a._i_brand4360 < b._i_brand4360)) || 
 ((a._i_category4364 == b._i_category4364) && (a._i_brand4360 == b._i_brand4360) && (a._cc_name4442 < b._cc_name4442)) || 
 ((a._i_category4364 == b._i_category4364) && (a._i_brand4360 == b._i_brand4360) && (a._cc_name4442 == b._cc_name4442) && (a._d_year4414 < b._d_year4414)) || 
 ((a._i_category4364 == b._i_category4364) && (a._i_brand4360 == b._i_brand4360) && (a._cc_name4442 == b._cc_name4442) && (a._d_year4414 == b._d_year4414) && (a._d_moy4416 < b._d_moy4416)); 
}
    }SW_Window_TD_7153683_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7153683_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category4364 == rows0[i-1]._i_category4364 && rows0[i]._i_brand4360 == rows0[i-1]._i_brand4360 && rows0[i]._cc_name4442 == rows0[i-1]._cc_name4442);
        isSameOrderKey0 = ( rows0[i]._d_year4414 == rows0[i-1]._d_year4414 && rows0[i]._d_moy4416 == rows0[i-1]._d_moy4416);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7153683_output.setInt32(r, 6, ranks0[i]);
    }
    tbl_Window_TD_7153683_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7153683_output #Row: " << tbl_Window_TD_7153683_output.getNumRow() << std::endl;
}

void SW_Window_TD_7795814(Table &tbl_Filter_TD_8454835_output, Table &tbl_Window_TD_7795814_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#3558) windowspecdefinition(i_category#240, i_brand#236, cc_name#909, d_year#126, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#3545)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546, avg_monthly_sales#3545)
    struct SW_Window_TD_7795814Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int64_t _sum_sales3544;
        int64_t __w03558;
        int32_t _rn3546;
    }; 

    int nrow = tbl_Filter_TD_8454835_output.getNumRow();
    std::vector<SW_Window_TD_7795814Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_8454835_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7795814_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Filter_TD_8454835_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7795814_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Filter_TD_8454835_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7795814_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        int32_t _d_year126 = tbl_Filter_TD_8454835_output.getInt32(i, 3);
        tbl_Window_TD_7795814_output.setInt32(r, 3,_d_year126);
        int32_t _d_moy128 = tbl_Filter_TD_8454835_output.getInt32(i, 4);
        tbl_Window_TD_7795814_output.setInt32(r, 4,_d_moy128);
        int64_t _sum_sales3544 = tbl_Filter_TD_8454835_output.getInt64(i, 5);
        tbl_Window_TD_7795814_output.setInt64(r, 5,_sum_sales3544);
        int64_t __w03558 = tbl_Filter_TD_8454835_output.getInt64(i, 6);
        tbl_Window_TD_7795814_output.setInt64(r, 6,__w03558);
        int32_t _rn3546 = tbl_Filter_TD_8454835_output.getInt32(i, 7);
        tbl_Window_TD_7795814_output.setInt32(r, 7,_rn3546);
        r++;
        SW_Window_TD_7795814Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_sum_sales3544,__w03558,_rn3546};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7795814Row& a, const SW_Window_TD_7795814Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 < b._cc_name909)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._cc_name909 == b._cc_name909) && (a._d_year126 < b._d_year126)); 
}
    }SW_Window_TD_7795814_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7795814_order0);
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
        sum0 += it.__w03558;
        currentRow0 +=1;
        tbl_Window_TD_7795814_output.setInt64(r, 8, sum0 / currentRow0 );
    }
    tbl_Window_TD_7795814_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7795814_output #Row: " << tbl_Window_TD_7795814_output.getNumRow() << std::endl;
}

void SW_Window_TD_667216(Table &tbl_Aggregate_TD_7141526_output, Table &tbl_Window_TD_667216_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#4534, d_moy#4536) windowspecdefinition(i_category#4484, i_brand#4480, cc_name#4562, d_year#4534 ASC NULLS FIRST, d_moy#4536 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#4591)
    // Input: ListBuffer(i_category#4484, i_brand#4480, cc_name#4562, d_year#4534, d_moy#4536, sum_sales#3544)
    // Output: ListBuffer(i_category#4484, i_brand#4480, cc_name#4562, d_year#4534, d_moy#4536, sum_sales#3544, rn#4591)
    struct SW_Window_TD_667216Row {
        std::string _i_category4484;
        std::string _i_brand4480;
        std::string _cc_name4562;
        int32_t _d_year4534;
        int32_t _d_moy4536;
        int64_t _sum_sales3544;
    }; 

    int nrow = tbl_Aggregate_TD_7141526_output.getNumRow();
    std::vector<SW_Window_TD_667216Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4484 = tbl_Aggregate_TD_7141526_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_667216_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category4484);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4480 = tbl_Aggregate_TD_7141526_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_667216_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand4480);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4562 = tbl_Aggregate_TD_7141526_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_667216_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name4562);
        int32_t _d_year4534 = tbl_Aggregate_TD_7141526_output.getInt32(i, 3);
        tbl_Window_TD_667216_output.setInt32(r, 3,_d_year4534);
        int32_t _d_moy4536 = tbl_Aggregate_TD_7141526_output.getInt32(i, 4);
        tbl_Window_TD_667216_output.setInt32(r, 4,_d_moy4536);
        int64_t _sum_sales3544 = tbl_Aggregate_TD_7141526_output.getInt64(i, 5);
        tbl_Window_TD_667216_output.setInt64(r, 5,_sum_sales3544);
        r++;
        SW_Window_TD_667216Row t = {std::string(_i_category4484.data()),std::string(_i_brand4480.data()),std::string(_cc_name4562.data()),_d_year4534,_d_moy4536,_sum_sales3544};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_667216Row& a, const SW_Window_TD_667216Row& b) const { return 
(a._i_category4484 < b._i_category4484) || 
 ((a._i_category4484 == b._i_category4484) && (a._i_brand4480 < b._i_brand4480)) || 
 ((a._i_category4484 == b._i_category4484) && (a._i_brand4480 == b._i_brand4480) && (a._cc_name4562 < b._cc_name4562)) || 
 ((a._i_category4484 == b._i_category4484) && (a._i_brand4480 == b._i_brand4480) && (a._cc_name4562 == b._cc_name4562) && (a._d_year4534 < b._d_year4534)) || 
 ((a._i_category4484 == b._i_category4484) && (a._i_brand4480 == b._i_brand4480) && (a._cc_name4562 == b._cc_name4562) && (a._d_year4534 == b._d_year4534) && (a._d_moy4536 < b._d_moy4536)); 
}
    }SW_Window_TD_667216_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_667216_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category4484 == rows0[i-1]._i_category4484 && rows0[i]._i_brand4480 == rows0[i-1]._i_brand4480 && rows0[i]._cc_name4562 == rows0[i-1]._cc_name4562);
        isSameOrderKey0 = ( rows0[i]._d_year4534 == rows0[i-1]._d_year4534 && rows0[i]._d_moy4536 == rows0[i-1]._d_moy4536);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_667216_output.setInt32(r, 6, ranks0[i]);
    }
    tbl_Window_TD_667216_output.setNumRow(r);
    std::cout << "tbl_Window_TD_667216_output #Row: " << tbl_Window_TD_667216_output.getNumRow() << std::endl;
}

void SW_Project_TD_6367829(Table &tbl_Window_TD_7153683_output, Table &tbl_Project_TD_6367829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3544 AS sum_sales#3564)
    // Input: ListBuffer(i_category#4364, i_brand#4360, cc_name#4442, d_year#4414, d_moy#4416, sum_sales#3544, rn#4471)
    // Output: ListBuffer(i_category#4364, i_brand#4360, cc_name#4442, sum_sales#3564, rn#4471)
    int nrow1 = tbl_Window_TD_7153683_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4364 = tbl_Window_TD_7153683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4360 = tbl_Window_TD_7153683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4442 = tbl_Window_TD_7153683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year4414 = tbl_Window_TD_7153683_output.getInt32(i, 3);
        int32_t _d_moy4416 = tbl_Window_TD_7153683_output.getInt32(i, 4);
        int64_t _sum_sales3544 = tbl_Window_TD_7153683_output.getInt64(i, 5);
        int32_t _rn4471 = tbl_Window_TD_7153683_output.getInt32(i, 6);
        int64_t _sum_sales3564 = _sum_sales3544;
        tbl_Project_TD_6367829_output.setInt64(i, 3, _sum_sales3564);
        tbl_Project_TD_6367829_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category4364);
        tbl_Project_TD_6367829_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand4360);
        tbl_Project_TD_6367829_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name4442);
        tbl_Project_TD_6367829_output.setInt32(i, 4, _rn4471);
    }
    tbl_Project_TD_6367829_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6367829_output #Row: " << tbl_Project_TD_6367829_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6280280(Table &tbl_Window_TD_7795814_output, Table &tbl_Filter_TD_6280280_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(avg_monthly_sales#3545) AND (avg_monthly_sales#3545 > 0.000000)) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#3544 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#3545 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#3545 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000)))
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546, avg_monthly_sales#3545)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, avg_monthly_sales#3545, rn#3546)
    int r = 0;
    int nrow1 = tbl_Window_TD_7795814_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _avg_monthly_sales3545 = tbl_Window_TD_7795814_output.getInt64(i, 8);
        int64_t _sum_sales3544 = tbl_Window_TD_7795814_output.getInt64(i, 5);
        if (((_avg_monthly_sales3545!= 0) && (_avg_monthly_sales3545 > 0.000000)) && (_sum_sales3544 > 0.1000000000000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_7795814_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6280280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_7795814_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6280280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_t = tbl_Window_TD_7795814_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6280280_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_t);
            int32_t _d_year126_t = tbl_Window_TD_7795814_output.getInt32(i, 3);
            tbl_Filter_TD_6280280_output.setInt32(r, 3, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_7795814_output.getInt32(i, 4);
            tbl_Filter_TD_6280280_output.setInt32(r, 4, _d_moy128_t);
            int64_t _sum_sales3544_t = tbl_Window_TD_7795814_output.getInt64(i, 5);
            tbl_Filter_TD_6280280_output.setInt64(r, 5, _sum_sales3544_t);
            int64_t _avg_monthly_sales3545_t = tbl_Window_TD_7795814_output.getInt64(i, 8);
            tbl_Filter_TD_6280280_output.setInt64(r, 6, _avg_monthly_sales3545_t);
            int32_t _rn3546_t = tbl_Window_TD_7795814_output.getInt32(i, 7);
            tbl_Filter_TD_6280280_output.setInt32(r, 7, _rn3546_t);
            r++;
        }
    }
    tbl_Filter_TD_6280280_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6280280_output #Row: " << tbl_Filter_TD_6280280_output.getNumRow() << std::endl;
}

void SW_Project_TD_5814840(Table &tbl_Window_TD_667216_output, Table &tbl_Project_TD_5814840_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3544 AS sum_sales#3572)
    // Input: ListBuffer(i_category#4484, i_brand#4480, cc_name#4562, d_year#4534, d_moy#4536, sum_sales#3544, rn#4591)
    // Output: ListBuffer(i_category#4484, i_brand#4480, cc_name#4562, sum_sales#3572, rn#4591)
    int nrow1 = tbl_Window_TD_667216_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4484 = tbl_Window_TD_667216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4480 = tbl_Window_TD_667216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name4562 = tbl_Window_TD_667216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year4534 = tbl_Window_TD_667216_output.getInt32(i, 3);
        int32_t _d_moy4536 = tbl_Window_TD_667216_output.getInt32(i, 4);
        int64_t _sum_sales3544 = tbl_Window_TD_667216_output.getInt64(i, 5);
        int32_t _rn4591 = tbl_Window_TD_667216_output.getInt32(i, 6);
        int64_t _sum_sales3572 = _sum_sales3544;
        tbl_Project_TD_5814840_output.setInt64(i, 3, _sum_sales3572);
        tbl_Project_TD_5814840_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category4484);
        tbl_Project_TD_5814840_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand4480);
        tbl_Project_TD_5814840_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name4562);
        tbl_Project_TD_5814840_output.setInt32(i, 4, _rn4591);
    }
    tbl_Project_TD_5814840_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5814840_output #Row: " << tbl_Project_TD_5814840_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5600253_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    bool operator==(const SW_JOIN_INNER_TD_5600253_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5600253_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5600253_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909));
    }
};
}
struct SW_JOIN_INNER_TD_5600253_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    int64_t _sum_sales3544;
    int64_t _avg_monthly_sales3545;
    int32_t _rn3546;
};
struct SW_JOIN_INNER_TD_5600253_key_rightMajor {
    std::string _i_category4364;
    std::string _i_brand4360;
    std::string _cc_name4442;
    bool operator==(const SW_JOIN_INNER_TD_5600253_key_rightMajor& other) const {
        return ((_i_category4364 == other._i_category4364) && (_i_brand4360 == other._i_brand4360) && (_cc_name4442 == other._cc_name4442));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5600253_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5600253_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4364)) + (hash<string>()(k._i_brand4360)) + (hash<string>()(k._cc_name4442));
    }
};
}
struct SW_JOIN_INNER_TD_5600253_payload_rightMajor {
    std::string _i_category4364;
    std::string _i_brand4360;
    std::string _cc_name4442;
    int64_t _sum_sales3564;
    int32_t _rn4471;
};
void SW_JOIN_INNER_TD_5600253(Table &tbl_Filter_TD_6280280_output, Table &tbl_Project_TD_6367829_output, Table &tbl_JOIN_INNER_TD_5600253_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((((i_category#240 = i_category#4364) AND (i_brand#236 = i_brand#4360)) AND (cc_name#909 = cc_name#4442)) AND (rn#3546 = (rn#4471 + 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, avg_monthly_sales#3545, rn#3546)
    // Right Table: ListBuffer(i_category#4364, i_brand#4360, cc_name#4442, sum_sales#3564, rn#4471)
    // Output Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, avg_monthly_sales#3545, rn#3546, sum_sales#3564)
    int left_nrow = tbl_Filter_TD_6280280_output.getNumRow();
    int right_nrow = tbl_Project_TD_6367829_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5600253_key_leftMajor, SW_JOIN_INNER_TD_5600253_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6280280_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            SW_JOIN_INNER_TD_5600253_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _cc_name909_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            int32_t _d_year126 = tbl_Filter_TD_6280280_output.getInt32(i, 3);
            int32_t _d_moy128 = tbl_Filter_TD_6280280_output.getInt32(i, 4);
            int64_t _sum_sales3544 = tbl_Filter_TD_6280280_output.getInt64(i, 5);
            int64_t _avg_monthly_sales3545 = tbl_Filter_TD_6280280_output.getInt64(i, 6);
            int32_t _rn3546 = tbl_Filter_TD_6280280_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_5600253_payload_leftMajor payloadA{_i_category240, _i_brand236, _cc_name909, _d_year126, _d_moy128, _sum_sales3544, _avg_monthly_sales3545, _rn3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_6367829_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4364_k_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4364_k = std::string(_i_category4364_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_k_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4360_k = std::string(_i_brand4360_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_k_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name4442_k = std::string(_cc_name4442_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5600253_key_leftMajor{_i_category4364_k, _i_brand4360_k, _cc_name4442_k});
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
                int64_t _sum_sales3544 = (it->second)._sum_sales3544;
                int64_t _avg_monthly_sales3545 = (it->second)._avg_monthly_sales3545;
                int32_t _rn3546 = (it->second)._rn3546;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category4364 = std::string(_i_category4364_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4360 = std::string(_i_brand4360_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name4442 = std::string(_cc_name4442_n.data());
                int64_t _sum_sales3564 = tbl_Project_TD_6367829_output.getInt64(i, 3);
                int32_t _rn4471 = tbl_Project_TD_6367829_output.getInt32(i, 4);
                if (_rn3546 == NULL) {
                    tbl_JOIN_INNER_TD_5600253_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5600253_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5600253_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_5600253_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_5600253_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_5600253_output.setInt64(r, 5, _sum_sales3544);
                    tbl_JOIN_INNER_TD_5600253_output.setInt64(r, 6, _avg_monthly_sales3545);
                    tbl_JOIN_INNER_TD_5600253_output.setInt32(r, 7, _rn3546);
                    tbl_JOIN_INNER_TD_5600253_output.setInt64(r, 8, _sum_sales3564);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5600253_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5600253_key_rightMajor, SW_JOIN_INNER_TD_5600253_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_6367829_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4364_k_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4364_k = std::string(_i_category4364_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_k_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4360_k = std::string(_i_brand4360_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_k_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name4442_k = std::string(_cc_name4442_k_n.data());
            SW_JOIN_INNER_TD_5600253_key_rightMajor keyA{_i_category4364_k, _i_brand4360_k, _cc_name4442_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4364 = std::string(_i_category4364_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4360 = std::string(_i_brand4360_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_n = tbl_Project_TD_6367829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name4442 = std::string(_cc_name4442_n.data());
            int64_t _sum_sales3564 = tbl_Project_TD_6367829_output.getInt64(i, 3);
            int32_t _rn4471 = tbl_Project_TD_6367829_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5600253_payload_rightMajor payloadA{_i_category4364, _i_brand4360, _cc_name4442, _sum_sales3564, _rn4471};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6280280_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5600253_key_rightMajor{_i_category240_k, _i_brand236_k, _cc_name909_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category4364 = (it->second)._i_category4364;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4364_n{};
                memcpy(_i_category4364_n.data(), (_i_category4364).data(), (_i_category4364).length());
                std::string _i_brand4360 = (it->second)._i_brand4360;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4360_n{};
                memcpy(_i_brand4360_n.data(), (_i_brand4360).data(), (_i_brand4360).length());
                std::string _cc_name4442 = (it->second)._cc_name4442;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name4442_n{};
                memcpy(_cc_name4442_n.data(), (_cc_name4442).data(), (_cc_name4442).length());
                int64_t _sum_sales3564 = (it->second)._sum_sales3564;
                int32_t _rn4471 = (it->second)._rn4471;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Filter_TD_6280280_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                int32_t _d_year126 = tbl_Filter_TD_6280280_output.getInt32(i, 3);
                int32_t _d_moy128 = tbl_Filter_TD_6280280_output.getInt32(i, 4);
                int64_t _sum_sales3544 = tbl_Filter_TD_6280280_output.getInt64(i, 5);
                int64_t _avg_monthly_sales3545 = tbl_Filter_TD_6280280_output.getInt64(i, 6);
                int32_t _rn3546 = tbl_Filter_TD_6280280_output.getInt32(i, 7);
                if (_rn3546 == NULL) {
                    tbl_JOIN_INNER_TD_5600253_output.setInt64(r, 8, _sum_sales3564);
                    tbl_JOIN_INNER_TD_5600253_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5600253_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5600253_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_5600253_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_5600253_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_5600253_output.setInt64(r, 5, _sum_sales3544);
                    tbl_JOIN_INNER_TD_5600253_output.setInt64(r, 6, _avg_monthly_sales3545);
                    tbl_JOIN_INNER_TD_5600253_output.setInt32(r, 7, _rn3546);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5600253_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5600253_output #Row: " << tbl_JOIN_INNER_TD_5600253_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4129517_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _rn3546;
    bool operator==(const SW_JOIN_INNER_TD_4129517_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_cc_name909 == other._cc_name909) && (_rn3546 == other._rn3546));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4129517_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4129517_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._cc_name909)) + (hash<int32_t>()(k._rn3546));
    }
};
}
struct SW_JOIN_INNER_TD_4129517_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _cc_name909;
    int32_t _d_year126;
    int32_t _d_moy128;
    int64_t _sum_sales3544;
    int64_t _avg_monthly_sales3545;
    int32_t _rn3546;
    int64_t _sum_sales3564;
};
struct SW_JOIN_INNER_TD_4129517_key_rightMajor {
    std::string _i_category4484;
    std::string _i_brand4480;
    std::string _cc_name4562;
    int32_t _rn4591;
    bool operator==(const SW_JOIN_INNER_TD_4129517_key_rightMajor& other) const {
        return ((_i_category4484 == other._i_category4484) && (_i_brand4480 == other._i_brand4480) && (_cc_name4562 == other._cc_name4562) && (_rn4591 == other._rn4591));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4129517_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4129517_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4484)) + (hash<string>()(k._i_brand4480)) + (hash<string>()(k._cc_name4562)) + (hash<int32_t>()(k._rn4591));
    }
};
}
struct SW_JOIN_INNER_TD_4129517_payload_rightMajor {
    std::string _i_category4484;
    std::string _i_brand4480;
    std::string _cc_name4562;
    int64_t _sum_sales3572;
    int32_t _rn4591;
};
void SW_JOIN_INNER_TD_4129517(Table &tbl_JOIN_INNER_TD_5600253_output, Table &tbl_Project_TD_5814840_output, Table &tbl_JOIN_INNER_TD_4129517_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((((i_category#240 = i_category#4484) AND (i_brand#236 = i_brand#4480)) AND (cc_name#909 = cc_name#4562)) AND (rn#3546 = (rn#4591 - 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, sum_sales#3544, avg_monthly_sales#3545, rn#3546, sum_sales#3564)
    // Right Table: ListBuffer(i_category#4484, i_brand#4480, cc_name#4562, sum_sales#3572, rn#4591)
    // Output Table: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, sum_sales#3564, sum_sales#3572)
    int left_nrow = tbl_JOIN_INNER_TD_5600253_output.getNumRow();
    int right_nrow = tbl_Project_TD_5814840_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4129517_key_leftMajor, SW_JOIN_INNER_TD_4129517_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5600253_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            int32_t _rn3546_k = tbl_JOIN_INNER_TD_5600253_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_4129517_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _cc_name909_k, _rn3546_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909 = std::string(_cc_name909_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5600253_output.getInt32(i, 3);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_5600253_output.getInt32(i, 4);
            int64_t _sum_sales3544 = tbl_JOIN_INNER_TD_5600253_output.getInt64(i, 5);
            int64_t _avg_monthly_sales3545 = tbl_JOIN_INNER_TD_5600253_output.getInt64(i, 6);
            int32_t _rn3546 = tbl_JOIN_INNER_TD_5600253_output.getInt32(i, 7);
            int64_t _sum_sales3564 = tbl_JOIN_INNER_TD_5600253_output.getInt64(i, 8);
            SW_JOIN_INNER_TD_4129517_payload_leftMajor payloadA{_i_category240, _i_brand236, _cc_name909, _d_year126, _d_moy128, _sum_sales3544, _avg_monthly_sales3545, _rn3546, _sum_sales3564};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5814840_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4484_k_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4484_k = std::string(_i_category4484_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_k_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4480_k = std::string(_i_brand4480_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_k_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name4562_k = std::string(_cc_name4562_k_n.data());
            int32_t _rn4591_k = tbl_Project_TD_5814840_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4129517_key_leftMajor{_i_category4484_k, _i_brand4480_k, _cc_name4562_k, _rn4591_k});
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
                int64_t _sum_sales3544 = (it->second)._sum_sales3544;
                int64_t _avg_monthly_sales3545 = (it->second)._avg_monthly_sales3545;
                int32_t _rn3546 = (it->second)._rn3546;
                int64_t _sum_sales3564 = (it->second)._sum_sales3564;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category4484 = std::string(_i_category4484_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4480 = std::string(_i_brand4480_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name4562 = std::string(_cc_name4562_n.data());
                int64_t _sum_sales3572 = tbl_Project_TD_5814840_output.getInt64(i, 3);
                int32_t _rn4591 = tbl_Project_TD_5814840_output.getInt32(i, 4);
                if (_rn3546 == (_rn4591 - 1)) {
                    tbl_JOIN_INNER_TD_4129517_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4129517_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4129517_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_4129517_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_4129517_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_4129517_output.setInt64(r, 6, _sum_sales3544);
                    tbl_JOIN_INNER_TD_4129517_output.setInt64(r, 5, _avg_monthly_sales3545);
                    tbl_JOIN_INNER_TD_4129517_output.setInt64(r, 7, _sum_sales3564);
                    tbl_JOIN_INNER_TD_4129517_output.setInt64(r, 8, _sum_sales3572);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4129517_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4129517_key_rightMajor, SW_JOIN_INNER_TD_4129517_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5814840_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4484_k_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4484_k = std::string(_i_category4484_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_k_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4480_k = std::string(_i_brand4480_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_k_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name4562_k = std::string(_cc_name4562_k_n.data());
            int32_t _rn4591_k = tbl_Project_TD_5814840_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4129517_key_rightMajor keyA{_i_category4484_k, _i_brand4480_k, _cc_name4562_k, _rn4591_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4484 = std::string(_i_category4484_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4480 = std::string(_i_brand4480_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_n = tbl_Project_TD_5814840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name4562 = std::string(_cc_name4562_n.data());
            int64_t _sum_sales3572 = tbl_Project_TD_5814840_output.getInt64(i, 3);
            int32_t _rn4591 = tbl_Project_TD_5814840_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4129517_payload_rightMajor payloadA{_i_category4484, _i_brand4480, _cc_name4562, _sum_sales3572, _rn4591};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5600253_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cc_name909_k_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cc_name909_k = std::string(_cc_name909_k_n.data());
            int32_t _rn3546_k = tbl_JOIN_INNER_TD_5600253_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4129517_key_rightMajor{_i_category240_k, _i_brand236_k, _cc_name909_k, _rn3546_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category4484 = (it->second)._i_category4484;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4484_n{};
                memcpy(_i_category4484_n.data(), (_i_category4484).data(), (_i_category4484).length());
                std::string _i_brand4480 = (it->second)._i_brand4480;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4480_n{};
                memcpy(_i_brand4480_n.data(), (_i_brand4480).data(), (_i_brand4480).length());
                std::string _cc_name4562 = (it->second)._cc_name4562;
                std::array<char, TPCDS_READ_MAX + 1> _cc_name4562_n{};
                memcpy(_cc_name4562_n.data(), (_cc_name4562).data(), (_cc_name4562).length());
                int64_t _sum_sales3572 = (it->second)._sum_sales3572;
                int32_t _rn4591 = (it->second)._rn4591;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_JOIN_INNER_TD_5600253_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cc_name909 = std::string(_cc_name909_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5600253_output.getInt32(i, 3);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_5600253_output.getInt32(i, 4);
                int64_t _sum_sales3544 = tbl_JOIN_INNER_TD_5600253_output.getInt64(i, 5);
                int64_t _avg_monthly_sales3545 = tbl_JOIN_INNER_TD_5600253_output.getInt64(i, 6);
                int32_t _rn3546 = tbl_JOIN_INNER_TD_5600253_output.getInt32(i, 7);
                int64_t _sum_sales3564 = tbl_JOIN_INNER_TD_5600253_output.getInt64(i, 8);
                if (_rn3546 == (_rn4591 - 1)) {
                    tbl_JOIN_INNER_TD_4129517_output.setInt64(r, 8, _sum_sales3572);
                    tbl_JOIN_INNER_TD_4129517_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4129517_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4129517_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
                    tbl_JOIN_INNER_TD_4129517_output.setInt32(r, 3, _d_year126);
                    tbl_JOIN_INNER_TD_4129517_output.setInt32(r, 4, _d_moy128);
                    tbl_JOIN_INNER_TD_4129517_output.setInt64(r, 6, _sum_sales3544);
                    tbl_JOIN_INNER_TD_4129517_output.setInt64(r, 5, _avg_monthly_sales3545);
                    tbl_JOIN_INNER_TD_4129517_output.setInt64(r, 7, _sum_sales3564);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4129517_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4129517_output #Row: " << tbl_JOIN_INNER_TD_4129517_output.getNumRow() << std::endl;
}

void SW_Project_TD_3281366(Table &tbl_JOIN_INNER_TD_4129517_output, Table &tbl_Project_TD_3281366_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3564 AS psum#3547, sum_sales#3572 AS nsum#3548)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, sum_sales#3564, sum_sales#3572)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    int nrow1 = tbl_JOIN_INNER_TD_4129517_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_4129517_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4129517_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_JOIN_INNER_TD_4129517_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4129517_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_4129517_output.getInt32(i, 4);
        int64_t _avg_monthly_sales3545 = tbl_JOIN_INNER_TD_4129517_output.getInt64(i, 5);
        int64_t _sum_sales3544 = tbl_JOIN_INNER_TD_4129517_output.getInt64(i, 6);
        int64_t _sum_sales3564 = tbl_JOIN_INNER_TD_4129517_output.getInt64(i, 7);
        int64_t _sum_sales3572 = tbl_JOIN_INNER_TD_4129517_output.getInt64(i, 8);
        int64_t _psum3547 = _sum_sales3564;
        tbl_Project_TD_3281366_output.setInt64(i, 7, _psum3547);
        int64_t _nsum3548 = _sum_sales3572;
        tbl_Project_TD_3281366_output.setInt64(i, 8, _nsum3548);
        tbl_Project_TD_3281366_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category240);
        tbl_Project_TD_3281366_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand236);
        tbl_Project_TD_3281366_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _cc_name909);
        tbl_Project_TD_3281366_output.setInt32(i, 3, _d_year126);
        tbl_Project_TD_3281366_output.setInt32(i, 4, _d_moy128);
        tbl_Project_TD_3281366_output.setInt64(i, 5, _avg_monthly_sales3545);
        tbl_Project_TD_3281366_output.setInt64(i, 6, _sum_sales3544);
    }
    tbl_Project_TD_3281366_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3281366_output #Row: " << tbl_Project_TD_3281366_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2143402(Table &tbl_Project_TD_3281366_output, Table &tbl_Sort_TD_2143402_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(sum_sales#3544 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#3545 as decimal(22,6)))), DecimalType(22,6), true) ASC NULLS FIRST, cc_name#909 ASC NULLS FIRST)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    struct SW_Sort_TD_2143402Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _cc_name909;
        int32_t _d_year126;
        int32_t _d_moy128;
        int64_t _avg_monthly_sales3545;
        int64_t _sum_sales3544;
        int64_t _psum3547;
        int64_t _nsum3548;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2143402Row& a, const SW_Sort_TD_2143402Row& b) const { return 
 (a._true < b._true) || 
 ((a._true == b._true) && (a._cc_name909 < b._cc_name909)); 
}
    }SW_Sort_TD_2143402_order; 

    int nrow1 = tbl_Project_TD_3281366_output.getNumRow();
    std::vector<SW_Sort_TD_2143402Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_3281366_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Project_TD_3281366_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909 = tbl_Project_TD_3281366_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int32_t _d_year126 = tbl_Project_TD_3281366_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_Project_TD_3281366_output.getInt32(i, 4);
        int64_t _avg_monthly_sales3545 = tbl_Project_TD_3281366_output.getInt64(i, 5);
        int64_t _sum_sales3544 = tbl_Project_TD_3281366_output.getInt64(i, 6);
        int64_t _psum3547 = tbl_Project_TD_3281366_output.getInt64(i, 7);
        int64_t _nsum3548 = tbl_Project_TD_3281366_output.getInt64(i, 8);
        SW_Sort_TD_2143402Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_cc_name909.data()),_d_year126,_d_moy128,_avg_monthly_sales3545,_sum_sales3544,_psum3547,_nsum3548};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2143402_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2143402_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), (it._i_brand236).data(), (it._i_brand236).length());
        tbl_Sort_TD_2143402_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909{};
        memcpy(_cc_name909.data(), (it._cc_name909).data(), (it._cc_name909).length());
        tbl_Sort_TD_2143402_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cc_name909);
        tbl_Sort_TD_2143402_output.setInt32(r, 3, it._d_year126);
        tbl_Sort_TD_2143402_output.setInt32(r, 4, it._d_moy128);
        tbl_Sort_TD_2143402_output.setInt64(r, 5, it._avg_monthly_sales3545);
        tbl_Sort_TD_2143402_output.setInt64(r, 6, it._sum_sales3544);
        tbl_Sort_TD_2143402_output.setInt64(r, 7, it._psum3547);
        tbl_Sort_TD_2143402_output.setInt64(r, 8, it._nsum3548);
        ++r;
    }
    tbl_Sort_TD_2143402_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2143402_output #Row: " << tbl_Sort_TD_2143402_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1612059(Table &tbl_Sort_TD_2143402_output, Table &tbl_LocalLimit_TD_1612059_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2143402_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1612059_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Sort_TD_2143402_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1612059_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_Sort_TD_2143402_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1612059_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
        tbl_LocalLimit_TD_1612059_output.setInt32(r, 3, tbl_Sort_TD_2143402_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1612059_output.setInt32(r, 4, tbl_Sort_TD_2143402_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1612059_output.setInt64(r, 5, tbl_Sort_TD_2143402_output.getInt64(i, 5));
        tbl_LocalLimit_TD_1612059_output.setInt64(r, 6, tbl_Sort_TD_2143402_output.getInt64(i, 6));
        tbl_LocalLimit_TD_1612059_output.setInt64(r, 7, tbl_Sort_TD_2143402_output.getInt64(i, 7));
        tbl_LocalLimit_TD_1612059_output.setInt64(r, 8, tbl_Sort_TD_2143402_output.getInt64(i, 8));
        r++;
    }
    tbl_LocalLimit_TD_1612059_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1612059_output #Row: " << tbl_LocalLimit_TD_1612059_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0149818(Table &tbl_LocalLimit_TD_1612059_output, Table &tbl_GlobalLimit_TD_0149818_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    // Output: ListBuffer(i_category#240, i_brand#236, cc_name#909, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1612059_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0149818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_LocalLimit_TD_1612059_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0149818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _cc_name909_n = tbl_LocalLimit_TD_1612059_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0149818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cc_name909_n);
        tbl_GlobalLimit_TD_0149818_output.setInt32(r, 3, tbl_LocalLimit_TD_1612059_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0149818_output.setInt32(r, 4, tbl_LocalLimit_TD_1612059_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0149818_output.setInt64(r, 5, tbl_LocalLimit_TD_1612059_output.getInt64(i, 5));
        tbl_GlobalLimit_TD_0149818_output.setInt64(r, 6, tbl_LocalLimit_TD_1612059_output.getInt64(i, 6));
        tbl_GlobalLimit_TD_0149818_output.setInt64(r, 7, tbl_LocalLimit_TD_1612059_output.getInt64(i, 7));
        tbl_GlobalLimit_TD_0149818_output.setInt64(r, 8, tbl_LocalLimit_TD_1612059_output.getInt64(i, 8));
        r++;
    }
    tbl_GlobalLimit_TD_0149818_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0149818_output #Row: " << tbl_GlobalLimit_TD_0149818_output.getNumRow() << std::endl;
}

