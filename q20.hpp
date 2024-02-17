#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8314(Table &tbl_SerializeFromObject_TD_94_input, Table &tbl_Filter_TD_8314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((i_category#240 IN (Sports,Books,Home) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_94_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_94_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_94_input.getInt32(i, 0);
        auto reuse_col_str_728 = std::string(_i_category240.data());
        if (((reuse_col_str_728 == "Sports") || (reuse_col_str_728 == "Books") || (reuse_col_str_728 == "Home") || (0)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_94_input.getInt32(i, 0);
            tbl_Filter_TD_8314_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_94_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8314_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_94_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8314_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_94_input.getInt32(i, 3);
            tbl_Filter_TD_8314_output.setInt32(r, 3, _i_current_price233_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_t = tbl_SerializeFromObject_TD_94_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_8314_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_94_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_8314_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_8314_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8314_output #Row: " << tbl_Filter_TD_8314_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8407(Table &tbl_SerializeFromObject_TD_9195_input, Table &tbl_Filter_TD_8407_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9195_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_9195_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9195_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9195_input.getInt32(i, 0);
            tbl_Filter_TD_8407_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_9195_input.getInt32(i, 1);
            tbl_Filter_TD_8407_output.setInt32(r, 1, _cs_item_sk1119_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_9195_input.getInt32(i, 2);
            tbl_Filter_TD_8407_output.setInt32(r, 2, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_8407_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8407_output #Row: " << tbl_Filter_TD_8407_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7319(Table &tbl_SerializeFromObject_TD_8699_input, Table &tbl_Filter_TD_7319_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 1999-02-22) AND (d_date#122 <= 1999-03-24))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8699_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_8699_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8699_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 19990222) && (_d_date122 <= 19990324))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8699_input.getInt32(i, 0);
            tbl_Filter_TD_7319_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7319_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7319_output #Row: " << tbl_Filter_TD_7319_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7664_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_7664_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7664_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7664_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_7664_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_7664_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_7664_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7664_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7664_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_7664_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    std::string _i_class238;
    std::string _i_category240;
};
void SW_JOIN_INNER_TD_7664(Table &tbl_Filter_TD_8407_output, Table &tbl_Filter_TD_8314_output, Table &tbl_JOIN_INNER_TD_7664_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#228))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int left_nrow = tbl_Filter_TD_8407_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8314_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7664_key_leftMajor, SW_JOIN_INNER_TD_7664_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8407_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_8407_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7664_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8407_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_8407_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_8407_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7664_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8314_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8314_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7664_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_item_sk228 = tbl_Filter_TD_8314_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_8314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_8314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_Filter_TD_8314_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_8314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_7664_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_7664_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_7664_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_7664_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_7664_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_7664_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_class238_n);
                tbl_JOIN_INNER_TD_7664_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7664_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7664_key_rightMajor, SW_JOIN_INNER_TD_7664_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8314_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8314_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7664_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_8314_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_8314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_8314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_Filter_TD_8314_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_8314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_7664_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8407_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_8407_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7664_key_rightMajor{_cs_item_sk1119_k});
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
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8407_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_8407_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_8407_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7664_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_7664_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_7664_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_7664_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_class238_n);
                tbl_JOIN_INNER_TD_7664_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_category240_n);
                tbl_JOIN_INNER_TD_7664_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_7664_output.setInt32(r, 1, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7664_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7664_output #Row: " << tbl_JOIN_INNER_TD_7664_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6251_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_6251_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6251_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6251_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_6251_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ext_sales_price1127;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    std::string _i_class238;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_6251_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6251_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6251_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6251_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6251_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_6251(Table &tbl_JOIN_INNER_TD_7664_output, Table &tbl_Filter_TD_7319_output, Table &tbl_JOIN_INNER_TD_6251_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(cs_ext_sales_price#1127, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int left_nrow = tbl_JOIN_INNER_TD_7664_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7319_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6251_key_leftMajor, SW_JOIN_INNER_TD_6251_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7664_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_7664_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6251_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_7664_output.getInt32(i, 0);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7664_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_7664_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_7664_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_7664_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_7664_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7664_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_6251_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ext_sales_price1127, _i_item_id229, _i_item_desc232, _i_current_price233, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7319_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7319_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6251_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_7319_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6251_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6251_output.setInt32(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_n);
                tbl_JOIN_INNER_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6251_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6251_key_rightMajor, SW_JOIN_INNER_TD_6251_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7319_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7319_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6251_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7319_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6251_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7664_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_7664_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6251_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_7664_output.getInt32(i, 0);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7664_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_7664_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_7664_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_7664_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_7664_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7664_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_6251_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6251_output.setInt32(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_n);
                tbl_JOIN_INNER_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6251_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6251_output #Row: " << tbl_JOIN_INNER_TD_6251_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_515_key {
    std::string _i_item_id229;
    std::string _i_item_desc232;
    std::string _i_category240;
    std::string _i_class238;
    int32_t _i_current_price233;
    bool operator==(const SW_Aggregate_TD_515_key& other) const { return (_i_item_id229 == other._i_item_id229) && (_i_item_desc232 == other._i_item_desc232) && (_i_category240 == other._i_category240) && (_i_class238 == other._i_class238) && (_i_current_price233 == other._i_current_price233); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_515_key> {
    std::size_t operator() (const SW_Aggregate_TD_515_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229)) + (hash<string>()(k._i_item_desc232)) + (hash<string>()(k._i_category240)) + (hash<string>()(k._i_class238)) + (hash<int32_t>()(k._i_current_price233));
    }
};
}
struct SW_Aggregate_TD_515_payload {
    int32_t _itemrevenue15063_sum_0;
    int32_t __w015069_sum_1;
    int32_t __w115070_sum_2;
};
void SW_Aggregate_TD_515(Table &tbl_JOIN_INNER_TD_6251_output, Table &tbl_Aggregate_TD_515_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS itemrevenue#15063, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS _w0#15069, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS _w1#15070)
    // Input: ListBuffer(cs_ext_sales_price#1127, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, _w0#15069, _w1#15070)
    std::unordered_map<SW_Aggregate_TD_515_key, SW_Aggregate_TD_515_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6251_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_6251_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_6251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_6251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_current_price233 = tbl_JOIN_INNER_TD_6251_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_JOIN_INNER_TD_6251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_6251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_515_key k{std::string(_i_item_id229.data()), std::string(_i_item_desc232.data()), std::string(_i_category240.data()), std::string(_i_class238.data()), _i_current_price233};
        int64_t _itemrevenue15063_sum_0 = _cs_ext_sales_price1127;
        int64_t __w015069_sum_1 = _cs_ext_sales_price1127;
        int64_t __w115070_sum_2 = _cs_ext_sales_price1127;
        SW_Aggregate_TD_515_payload p{_itemrevenue15063_sum_0, __w015069_sum_1, __w115070_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._itemrevenue15063_sum_0 + _itemrevenue15063_sum_0;
            p._itemrevenue15063_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w015069_sum_1 + __w015069_sum_1;
            p.__w015069_sum_1 = sum_1;
            int32_t sum_2 = (it->second).__w115070_sum_2 + __w115070_sum_2;
            p.__w115070_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), ((it.first)._i_item_id229).data(), ((it.first)._i_item_id229).length());
        tbl_Aggregate_TD_515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238{};
        memcpy(_i_class238.data(), ((it.first)._i_class238).data(), ((it.first)._i_class238).length());
        tbl_Aggregate_TD_515_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238);
        tbl_Aggregate_TD_515_output.setInt32(r, 4, (it.first)._i_current_price233);
        int32_t _itemrevenue15063 = (it.second)._itemrevenue15063_sum_0;
        tbl_Aggregate_TD_515_output.setInt32(r, 5, _itemrevenue15063);
        int32_t __w015069 = (it.second).__w015069_sum_1;
        tbl_Aggregate_TD_515_output.setInt32(r, 6, __w015069);
        int32_t __w115070 = (it.second).__w115070_sum_2;
        tbl_Aggregate_TD_515_output.setInt32(r, 7, __w115070);
        ++r;
    }
    tbl_Aggregate_TD_515_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_515_output #Row: " << tbl_Aggregate_TD_515_output.getNumRow() << std::endl;
}

void SW_Window_TD_4799(Table &tbl_Aggregate_TD_515_output, Table &tbl_Window_TD_4799_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(sum(_w1#15070) windowspecdefinition(i_class#238, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS _we0#15071)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, _w0#15069, _w1#15070)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, _w0#15069, _w1#15070, _we0#15071)
    struct SW_Window_TD_4799Row {
        std::string _i_item_id229;
        std::string _i_item_desc232;
        std::string _i_category240;
        std::string _i_class238;
        int32_t _i_current_price233;
        int32_t _itemrevenue15063;
        int32_t __w015069;
        int32_t __w115070;
    }; 

    int nrow = tbl_Aggregate_TD_515_output.getNumRow();
    std::vector<SW_Window_TD_4799Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_515_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_4799_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_515_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_4799_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_515_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_4799_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Aggregate_TD_515_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_4799_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _i_class238);
        int32_t _i_current_price233 = tbl_Aggregate_TD_515_output.getInt32(i, 4);
        tbl_Window_TD_4799_output.setInt32(r, 4,_i_current_price233);
        int32_t _itemrevenue15063 = tbl_Aggregate_TD_515_output.getInt32(i, 5);
        tbl_Window_TD_4799_output.setInt32(r, 5,_itemrevenue15063);
        int32_t __w015069 = tbl_Aggregate_TD_515_output.getInt32(i, 6);
        tbl_Window_TD_4799_output.setInt32(r, 6,__w015069);
        int32_t __w115070 = tbl_Aggregate_TD_515_output.getInt32(i, 7);
        tbl_Window_TD_4799_output.setInt32(r, 7,__w115070);
        r++;
        SW_Window_TD_4799Row t = {std::string(_i_item_id229.data()),std::string(_i_item_desc232.data()),std::string(_i_category240.data()),std::string(_i_class238.data()),_i_current_price233,_itemrevenue15063,__w015069,__w115070};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4799Row& a, const SW_Window_TD_4799Row& b) const { return 
(a._i_class238 < b._i_class238); 
}
    }SW_Window_TD_4799_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4799_order0);
    int64_t sum0 = 0;
    std::string current_i_class2380 = "";
    for (auto& it : rows0) {
        if (current_i_class2380 != it._i_class238) {
            sum0 = 0;
            current_i_class2380 = it._i_class238;
        }
        sum0 += it.__w115070;
        tbl_Window_TD_4799_output.setInt64(r, 8, sum0 );
    }
    tbl_Window_TD_4799_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4799_output #Row: " << tbl_Window_TD_4799_output.getNumRow() << std::endl;
}

void SW_Project_TD_3653(Table &tbl_Window_TD_4799_output, Table &tbl_Project_TD_3653_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(_w0#15069) * 100.00), DecimalType(21,2), true) as decimal(27,2))) / promote_precision(_we0#15071)), DecimalType(38,17), true) AS revenueratio#15064)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, _w0#15069, _w1#15070, _we0#15071)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, revenueratio#15064)
    int nrow1 = tbl_Window_TD_4799_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Window_TD_4799_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Window_TD_4799_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Window_TD_4799_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Window_TD_4799_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _i_current_price233 = tbl_Window_TD_4799_output.getInt32(i, 4);
        int32_t _itemrevenue15063 = tbl_Window_TD_4799_output.getInt32(i, 5);
        int32_t __w015069 = tbl_Window_TD_4799_output.getInt32(i, 6);
        int32_t __w115070 = tbl_Window_TD_4799_output.getInt32(i, 7);
        int32_t __we015071 = tbl_Window_TD_4799_output.getInt32(i, 8);
        int32_t _revenueratio15064 = ((__w015069 * 100.00) / __we015071);
        tbl_Project_TD_3653_output.setInt32(i, 6, _revenueratio15064);
        tbl_Project_TD_3653_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_item_id229);
        tbl_Project_TD_3653_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_item_desc232);
        tbl_Project_TD_3653_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _i_category240);
        tbl_Project_TD_3653_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _i_class238);
        tbl_Project_TD_3653_output.setInt32(i, 4, _i_current_price233);
        tbl_Project_TD_3653_output.setInt32(i, 5, _itemrevenue15063);
    }
    tbl_Project_TD_3653_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3653_output #Row: " << tbl_Project_TD_3653_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2370(Table &tbl_Project_TD_3653_output, Table &tbl_Sort_TD_2370_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_category#240 ASC NULLS FIRST, i_class#238 ASC NULLS FIRST, i_item_id#229 ASC NULLS FIRST, i_item_desc#232 ASC NULLS FIRST, revenueratio#15064 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, revenueratio#15064)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, revenueratio#15064)
    struct SW_Sort_TD_2370Row {
        std::string _i_item_id229;
        std::string _i_item_desc232;
        std::string _i_category240;
        std::string _i_class238;
        int32_t _i_current_price233;
        int32_t _itemrevenue15063;
        int32_t _revenueratio15064;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2370Row& a, const SW_Sort_TD_2370Row& b) const { return 
 (a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 < b._i_class238)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 < b._i_item_id229)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 < b._i_item_desc232)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 == b._i_item_desc232) && (a._revenueratio15064 < b._revenueratio15064)); 
}
    }SW_Sort_TD_2370_order; 

    int nrow1 = tbl_Project_TD_3653_output.getNumRow();
    std::vector<SW_Sort_TD_2370Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Project_TD_3653_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Project_TD_3653_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_3653_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Project_TD_3653_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _i_current_price233 = tbl_Project_TD_3653_output.getInt32(i, 4);
        int32_t _itemrevenue15063 = tbl_Project_TD_3653_output.getInt32(i, 5);
        int32_t _revenueratio15064 = tbl_Project_TD_3653_output.getInt32(i, 6);
        SW_Sort_TD_2370Row t = {std::string(_i_item_id229.data()),std::string(_i_item_desc232.data()),std::string(_i_category240.data()),std::string(_i_class238.data()),_i_current_price233,_itemrevenue15063,_revenueratio15064};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2370_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2370_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2370_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2370_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238{};
        memcpy(_i_class238.data(), (it._i_class238).data(), (it._i_class238).length());
        tbl_Sort_TD_2370_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _i_class238);
        tbl_Sort_TD_2370_output.setInt32(r, 4, it._i_current_price233);
        tbl_Sort_TD_2370_output.setInt32(r, 5, it._itemrevenue15063);
        tbl_Sort_TD_2370_output.setInt32(r, 6, it._revenueratio15064);
        ++r;
    }
    tbl_Sort_TD_2370_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2370_output #Row: " << tbl_Sort_TD_2370_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1792(Table &tbl_Sort_TD_2370_output, Table &tbl_LocalLimit_TD_1792_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, revenueratio#15064)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, revenueratio#15064)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2370_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2370_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2370_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Sort_TD_2370_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
        tbl_LocalLimit_TD_1792_output.setInt32(r, 4, tbl_Sort_TD_2370_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1792_output.setInt32(r, 5, tbl_Sort_TD_2370_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1792_output.setInt32(r, 6, tbl_Sort_TD_2370_output.getInt32(i, 6));
        r++;
    }
    tbl_LocalLimit_TD_1792_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1792_output #Row: " << tbl_LocalLimit_TD_1792_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0150(Table &tbl_LocalLimit_TD_1792_output, Table &tbl_GlobalLimit_TD_0150_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, revenueratio#15064)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#15063, revenueratio#15064)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_1792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_LocalLimit_TD_1792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0150_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
        tbl_GlobalLimit_TD_0150_output.setInt32(r, 4, tbl_LocalLimit_TD_1792_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0150_output.setInt32(r, 5, tbl_LocalLimit_TD_1792_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0150_output.setInt32(r, 6, tbl_LocalLimit_TD_1792_output.getInt32(i, 6));
        r++;
    }
    tbl_GlobalLimit_TD_0150_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0150_output #Row: " << tbl_GlobalLimit_TD_0150_output.getNumRow() << std::endl;
}

