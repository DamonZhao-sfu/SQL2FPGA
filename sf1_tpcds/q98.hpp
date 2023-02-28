#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_6325510(Table &tbl_SerializeFromObject_TD_7969726_input, Table &tbl_Filter_TD_6325510_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((i_category#240 IN (Sports,Books,Home) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7969726_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_7969726_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7969726_input.getInt32(i, 0);
        auto reuse_col_str_328 = std::string(_i_category240.data());
        if (((reuse_col_str_328 == "Sports") || (reuse_col_str_328 == "Books") || (reuse_col_str_328 == "Home") || (0)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7969726_input.getInt32(i, 0);
            tbl_Filter_TD_6325510_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_7969726_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6325510_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_7969726_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6325510_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_t);
            int64_t _i_current_price233_t = tbl_SerializeFromObject_TD_7969726_input.getInt64(i, 3);
            tbl_Filter_TD_6325510_output.setInt64(r, 3, _i_current_price233_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_t = tbl_SerializeFromObject_TD_7969726_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_6325510_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_7969726_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_6325510_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_6325510_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6325510_output #Row: " << tbl_Filter_TD_6325510_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6477952(Table &tbl_SerializeFromObject_TD_7319780_input, Table &tbl_Filter_TD_6477952_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7319780_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_7319780_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_7319780_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_7319780_input.getInt32(i, 0);
            tbl_Filter_TD_6477952_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_7319780_input.getInt32(i, 1);
            tbl_Filter_TD_6477952_output.setInt32(r, 1, _ss_item_sk1208_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_7319780_input.getInt64(i, 2);
            tbl_Filter_TD_6477952_output.setInt64(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_6477952_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6477952_output #Row: " << tbl_Filter_TD_6477952_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5924949(Table &tbl_SerializeFromObject_TD_6154996_input, Table &tbl_Filter_TD_5924949_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 1999-02-22) AND (d_date#122 <= 1999-03-24))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6154996_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_6154996_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_6154996_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 19990222) && (_d_date122 <= 19990324))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_6154996_input.getInt32(i, 0);
            tbl_Filter_TD_5924949_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_5924949_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5924949_output #Row: " << tbl_Filter_TD_5924949_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5456923_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_5456923_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5456923_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5456923_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_5456923_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int64_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_5456923_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5456923_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5456923_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5456923_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5456923_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int64_t _i_current_price233;
    std::string _i_class238;
    std::string _i_category240;
};
void SW_JOIN_INNER_TD_5456923(Table &tbl_Filter_TD_6477952_output, Table &tbl_Filter_TD_6325510_output, Table &tbl_JOIN_INNER_TD_5456923_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_ext_sales_price#1221, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int left_nrow = tbl_Filter_TD_6477952_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6325510_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5456923_key_leftMajor, SW_JOIN_INNER_TD_5456923_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6477952_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_6477952_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5456923_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6477952_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_6477952_output.getInt32(i, 1);
            int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_6477952_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_5456923_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6325510_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6325510_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5456923_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_6325510_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6325510_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_6325510_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int64_t _i_current_price233 = tbl_Filter_TD_6325510_output.getInt64(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_6325510_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6325510_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_5456923_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_5456923_output.setInt64(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_5456923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5456923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_5456923_output.setInt64(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_5456923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_class238_n);
                tbl_JOIN_INNER_TD_5456923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5456923_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5456923_key_rightMajor, SW_JOIN_INNER_TD_5456923_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6325510_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6325510_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5456923_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6325510_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6325510_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_6325510_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int64_t _i_current_price233 = tbl_Filter_TD_6325510_output.getInt64(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_6325510_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6325510_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_5456923_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6477952_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_6477952_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5456923_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int64_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6477952_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_6477952_output.getInt32(i, 1);
                int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_6477952_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_5456923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5456923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_5456923_output.setInt64(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_5456923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_class238_n);
                tbl_JOIN_INNER_TD_5456923_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_category240_n);
                tbl_JOIN_INNER_TD_5456923_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_5456923_output.setInt64(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5456923_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5456923_output #Row: " << tbl_JOIN_INNER_TD_5456923_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4246407_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_4246407_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4246407_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4246407_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_4246407_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int64_t _ss_ext_sales_price1221;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int64_t _i_current_price233;
    std::string _i_class238;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_4246407_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_4246407_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4246407_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4246407_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_4246407_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_4246407(Table &tbl_JOIN_INNER_TD_5456923_output, Table &tbl_Filter_TD_5924949_output, Table &tbl_JOIN_INNER_TD_4246407_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_ext_sales_price#1221, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int left_nrow = tbl_JOIN_INNER_TD_5456923_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5924949_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4246407_key_leftMajor, SW_JOIN_INNER_TD_4246407_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5456923_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_5456923_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4246407_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_5456923_output.getInt32(i, 0);
            int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5456923_output.getInt64(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5456923_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_5456923_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int64_t _i_current_price233 = tbl_JOIN_INNER_TD_5456923_output.getInt64(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_5456923_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5456923_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_4246407_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_ext_sales_price1221, _i_item_id229, _i_item_desc232, _i_current_price233, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5924949_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5924949_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4246407_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int64_t _i_current_price233 = (it->second)._i_current_price233;
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_5924949_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4246407_output.setInt64(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_4246407_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4246407_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_4246407_output.setInt64(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_4246407_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_n);
                tbl_JOIN_INNER_TD_4246407_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4246407_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4246407_key_rightMajor, SW_JOIN_INNER_TD_4246407_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5924949_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5924949_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4246407_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_5924949_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4246407_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5456923_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_5456923_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4246407_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_5456923_output.getInt32(i, 0);
                int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5456923_output.getInt64(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5456923_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_5456923_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int64_t _i_current_price233 = tbl_JOIN_INNER_TD_5456923_output.getInt64(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_5456923_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5456923_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_4246407_output.setInt64(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_4246407_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_4246407_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_4246407_output.setInt64(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_4246407_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_n);
                tbl_JOIN_INNER_TD_4246407_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4246407_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4246407_output #Row: " << tbl_JOIN_INNER_TD_4246407_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3985290_key {
    std::string _i_item_id229;
    std::string _i_item_desc232;
    std::string _i_category240;
    std::string _i_class238;
    int64_t _i_current_price233;
    bool operator==(const SW_Aggregate_TD_3985290_key& other) const { return (_i_item_id229 == other._i_item_id229) && (_i_item_desc232 == other._i_item_desc232) && (_i_category240 == other._i_category240) && (_i_class238 == other._i_class238) && (_i_current_price233 == other._i_current_price233); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3985290_key> {
    std::size_t operator() (const SW_Aggregate_TD_3985290_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229)) + (hash<string>()(k._i_item_desc232)) + (hash<string>()(k._i_category240)) + (hash<string>()(k._i_class238)) + (hash<int64_t>()(k._i_current_price233));
    }
};
}
struct SW_Aggregate_TD_3985290_payload {
    int64_t _itemrevenue3544_sum_0;
    int64_t __w03550_sum_1;
    int64_t __w13551_sum_2;
};
void SW_Aggregate_TD_3985290(Table &tbl_JOIN_INNER_TD_4246407_output, Table &tbl_Aggregate_TD_3985290_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS itemrevenue#3544, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS _w0#3550, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS _w1#3551)
    // Input: ListBuffer(ss_ext_sales_price#1221, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output: ListBuffer(i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#3544, _w0#3550, _w1#3551, i_item_id#229)
    std::unordered_map<SW_Aggregate_TD_3985290_key, SW_Aggregate_TD_3985290_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4246407_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_4246407_output.getInt64(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4246407_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_4246407_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _i_current_price233 = tbl_JOIN_INNER_TD_4246407_output.getInt64(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_JOIN_INNER_TD_4246407_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_4246407_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_3985290_key k{std::string(_i_item_id229.data()), std::string(_i_item_desc232.data()), std::string(_i_category240.data()), std::string(_i_class238.data()), _i_current_price233};
        int64_t _itemrevenue3544_sum_0 = _ss_ext_sales_price1221;
        int64_t __w03550_sum_1 = _ss_ext_sales_price1221;
        int64_t __w13551_sum_2 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_3985290_payload p{_itemrevenue3544_sum_0, __w03550_sum_1, __w13551_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._itemrevenue3544_sum_0 + _itemrevenue3544_sum_0;
            p._itemrevenue3544_sum_0 = sum_0;
            int64_t sum_1 = (it->second).__w03550_sum_1 + __w03550_sum_1;
            p.__w03550_sum_1 = sum_1;
            int64_t sum_2 = (it->second).__w13551_sum_2 + __w13551_sum_2;
            p.__w13551_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), ((it.first)._i_item_id229).data(), ((it.first)._i_item_id229).length());
        tbl_Aggregate_TD_3985290_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_3985290_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_3985290_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238{};
        memcpy(_i_class238.data(), ((it.first)._i_class238).data(), ((it.first)._i_class238).length());
        tbl_Aggregate_TD_3985290_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class238);
        tbl_Aggregate_TD_3985290_output.setInt64(r, 3, (it.first)._i_current_price233);
        int64_t _itemrevenue3544 = (it.second)._itemrevenue3544_sum_0;
        tbl_Aggregate_TD_3985290_output.setInt64(r, 4, _itemrevenue3544);
        int64_t __w03550 = (it.second).__w03550_sum_1;
        tbl_Aggregate_TD_3985290_output.setInt64(r, 5, __w03550);
        int64_t __w13551 = (it.second).__w13551_sum_2;
        tbl_Aggregate_TD_3985290_output.setInt64(r, 6, __w13551);
        ++r;
    }
    tbl_Aggregate_TD_3985290_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3985290_output #Row: " << tbl_Aggregate_TD_3985290_output.getNumRow() << std::endl;
}

void SW_Window_TD_280485(Table &tbl_Aggregate_TD_3985290_output, Table &tbl_Window_TD_280485_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(sum(_w1#3551) windowspecdefinition(i_class#238, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS _we0#3552)
    // Input: ListBuffer(i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#3544, _w0#3550, _w1#3551, i_item_id#229)
    // Output: ListBuffer(i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#3544, _w0#3550, _w1#3551, i_item_id#229, _we0#3552)
    struct SW_Window_TD_280485Row {
        std::string _i_item_desc232;
        std::string _i_category240;
        std::string _i_class238;
        int64_t _i_current_price233;
        int64_t _itemrevenue3544;
        int64_t __w03550;
        int64_t __w13551;
        std::string _i_item_id229;
    }; 

    int nrow = tbl_Aggregate_TD_3985290_output.getNumRow();
    std::vector<SW_Window_TD_280485Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_3985290_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_280485_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_3985290_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_280485_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Aggregate_TD_3985290_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_280485_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_class238);
        int64_t _i_current_price233 = tbl_Aggregate_TD_3985290_output.getInt64(i, 3);
        tbl_Window_TD_280485_output.setInt64(r, 3,_i_current_price233);
        int64_t _itemrevenue3544 = tbl_Aggregate_TD_3985290_output.getInt64(i, 4);
        tbl_Window_TD_280485_output.setInt64(r, 4,_itemrevenue3544);
        int64_t __w03550 = tbl_Aggregate_TD_3985290_output.getInt64(i, 5);
        tbl_Window_TD_280485_output.setInt64(r, 5,__w03550);
        int64_t __w13551 = tbl_Aggregate_TD_3985290_output.getInt64(i, 6);
        tbl_Window_TD_280485_output.setInt64(r, 6,__w13551);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3985290_output.getcharN<char, TPCDS_READ_MAX +1>(i, 7);
        tbl_Window_TD_280485_output.setcharN<char, TPCDS_READ_MAX +1>(r, 7, _i_item_id229);
        r++;
        SW_Window_TD_280485Row t = {std::string(_i_item_desc232.data()),std::string(_i_category240.data()),std::string(_i_class238.data()),_i_current_price233,_itemrevenue3544,__w03550,__w13551,std::string(_i_item_id229.data())};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_280485Row& a, const SW_Window_TD_280485Row& b) const { return 
(a._i_class238 < b._i_class238); 
}
    }SW_Window_TD_280485_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_280485_order0);
    int64_t sum0 = 0;
    std::string current_i_class2380 = "";
    for (auto& it : rows0) {
        if (current_i_class2380 != it._i_class238) {
            sum0 = 0;
            current_i_class2380 = it._i_class238;
        }
        sum0 += it.__w13551;
        tbl_Window_TD_280485_output.setInt64(r, 8, sum0 );
    }
    tbl_Window_TD_280485_output.setNumRow(r);
    std::cout << "tbl_Window_TD_280485_output #Row: " << tbl_Window_TD_280485_output.getNumRow() << std::endl;
}

void SW_Project_TD_1941039(Table &tbl_Window_TD_280485_output, Table &tbl_Project_TD_1941039_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(_w0#3550) * 100.00), DecimalType(21,2), true) as decimal(27,2))) / promote_precision(_we0#3552)), DecimalType(38,17), true) AS revenueratio#3545)
    // Input: ListBuffer(i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#3544, _w0#3550, _w1#3551, i_item_id#229, _we0#3552)
    // Output: ListBuffer(i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#3544, revenueratio#3545, i_item_id#229)
    int nrow1 = tbl_Window_TD_280485_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Window_TD_280485_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Window_TD_280485_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Window_TD_280485_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _i_current_price233 = tbl_Window_TD_280485_output.getInt64(i, 3);
        int64_t _itemrevenue3544 = tbl_Window_TD_280485_output.getInt64(i, 4);
        int64_t __w03550 = tbl_Window_TD_280485_output.getInt64(i, 5);
        int64_t __w13551 = tbl_Window_TD_280485_output.getInt64(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Window_TD_280485_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        int64_t __we03552 = tbl_Window_TD_280485_output.getInt64(i, 8);
        int64_t _revenueratio3545 = ((__w03550 * 100.00) / __we03552);
        tbl_Project_TD_1941039_output.setInt64(i, 5, _revenueratio3545);
        tbl_Project_TD_1941039_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_item_desc232);
        tbl_Project_TD_1941039_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_category240);
        tbl_Project_TD_1941039_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _i_class238);
        tbl_Project_TD_1941039_output.setInt64(i, 3, _i_current_price233);
        tbl_Project_TD_1941039_output.setInt64(i, 4, _itemrevenue3544);
        tbl_Project_TD_1941039_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 6, _i_item_id229);
    }
    tbl_Project_TD_1941039_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1941039_output #Row: " << tbl_Project_TD_1941039_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0716650(Table &tbl_Project_TD_1941039_output, Table &tbl_Sort_TD_0716650_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_category#240 ASC NULLS FIRST, i_class#238 ASC NULLS FIRST, i_item_id#229 ASC NULLS FIRST, i_item_desc#232 ASC NULLS FIRST, revenueratio#3545 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#3544, revenueratio#3545, i_item_id#229)
    // Output: ListBuffer(i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#3544, revenueratio#3545, i_item_id#229)
    struct SW_Sort_TD_0716650Row {
        std::string _i_item_desc232;
        std::string _i_category240;
        std::string _i_class238;
        int64_t _i_current_price233;
        int64_t _itemrevenue3544;
        int64_t _revenueratio3545;
        std::string _i_item_id229;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0716650Row& a, const SW_Sort_TD_0716650Row& b) const { return 
 (a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 < b._i_class238)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 < b._i_item_id229)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 < b._i_item_desc232)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 == b._i_item_desc232) && (a._revenueratio3545 < b._revenueratio3545)); 
}
    }SW_Sort_TD_0716650_order; 

    int nrow1 = tbl_Project_TD_1941039_output.getNumRow();
    std::vector<SW_Sort_TD_0716650Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Project_TD_1941039_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_1941039_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Project_TD_1941039_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int64_t _i_current_price233 = tbl_Project_TD_1941039_output.getInt64(i, 3);
        int64_t _itemrevenue3544 = tbl_Project_TD_1941039_output.getInt64(i, 4);
        int64_t _revenueratio3545 = tbl_Project_TD_1941039_output.getInt64(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Project_TD_1941039_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        SW_Sort_TD_0716650Row t = {std::string(_i_item_desc232.data()),std::string(_i_category240.data()),std::string(_i_class238.data()),_i_current_price233,_itemrevenue3544,_revenueratio3545,std::string(_i_item_id229.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0716650_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_0716650_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_0716650_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238{};
        memcpy(_i_class238.data(), (it._i_class238).data(), (it._i_class238).length());
        tbl_Sort_TD_0716650_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_class238);
        tbl_Sort_TD_0716650_output.setInt64(r, 3, it._i_current_price233);
        tbl_Sort_TD_0716650_output.setInt64(r, 4, it._itemrevenue3544);
        tbl_Sort_TD_0716650_output.setInt64(r, 5, it._revenueratio3545);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_0716650_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _i_item_id229);
        if (r < 10) {
            std::cout << (it._i_item_desc232).data() << " " << (it._i_category240).data() << " " << (it._i_class238).data() << " " << it._i_current_price233 << " " << it._itemrevenue3544 << " " << it._revenueratio3545 << " " << (it._i_item_id229).data() << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0716650_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0716650_output #Row: " << tbl_Sort_TD_0716650_output.getNumRow() << std::endl;
}

