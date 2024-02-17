#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8696(Table &tbl_SerializeFromObject_TD_9881_input, Table &tbl_Filter_TD_8696_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((i_category#240 IN (Sports,Books,Home) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9881_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_9881_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_9881_input.getInt32(i, 0);
        auto reuse_col_str_840 = std::string(_i_category240.data());
        if (((reuse_col_str_840 == "Sports") || (reuse_col_str_840 == "Books") || (reuse_col_str_840 == "Home") || (0)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_9881_input.getInt32(i, 0);
            tbl_Filter_TD_8696_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_9881_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8696_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_9881_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8696_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_9881_input.getInt32(i, 3);
            tbl_Filter_TD_8696_output.setInt32(r, 3, _i_current_price233_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_t = tbl_SerializeFromObject_TD_9881_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_8696_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_9881_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_8696_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_8696_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8696_output #Row: " << tbl_Filter_TD_8696_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8941(Table &tbl_SerializeFromObject_TD_970_input, Table &tbl_Filter_TD_8941_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_970_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_970_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_970_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_970_input.getInt32(i, 0);
            tbl_Filter_TD_8941_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_970_input.getInt32(i, 1);
            tbl_Filter_TD_8941_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_970_input.getInt32(i, 2);
            tbl_Filter_TD_8941_output.setInt32(r, 2, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_8941_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8941_output #Row: " << tbl_Filter_TD_8941_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7230(Table &tbl_SerializeFromObject_TD_8535_input, Table &tbl_Filter_TD_7230_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 1999-02-22) AND (d_date#122 <= 1999-03-24))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8535_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_8535_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8535_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 19990222) && (_d_date122 <= 19990324))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8535_input.getInt32(i, 0);
            tbl_Filter_TD_7230_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7230_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7230_output #Row: " << tbl_Filter_TD_7230_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7775_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_7775_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7775_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7775_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_7775_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_7775_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_7775_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7775_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7775_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_7775_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    std::string _i_class238;
    std::string _i_category240;
};
void SW_JOIN_INNER_TD_7775(Table &tbl_Filter_TD_8941_output, Table &tbl_Filter_TD_8696_output, Table &tbl_JOIN_INNER_TD_7775_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#228))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_sales_price#752)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int left_nrow = tbl_Filter_TD_8941_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8696_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7775_key_leftMajor, SW_JOIN_INNER_TD_7775_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8941_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_8941_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7775_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_8941_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_8941_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_8941_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7775_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8696_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8696_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7775_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_item_sk228 = tbl_Filter_TD_8696_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_Filter_TD_8696_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_7775_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7775_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7775_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_7775_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_7775_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_7775_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_class238_n);
                tbl_JOIN_INNER_TD_7775_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7775_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7775_key_rightMajor, SW_JOIN_INNER_TD_7775_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8696_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8696_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7775_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_8696_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_Filter_TD_8696_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_7775_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229, _i_item_desc232, _i_current_price233, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8941_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_8941_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7775_key_rightMajor{_ws_item_sk732_k});
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
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_8941_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_8941_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_8941_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7775_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_7775_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_7775_output.setInt32(r, 4, _i_current_price233);
                tbl_JOIN_INNER_TD_7775_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_class238_n);
                tbl_JOIN_INNER_TD_7775_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_category240_n);
                tbl_JOIN_INNER_TD_7775_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7775_output.setInt32(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7775_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7775_output #Row: " << tbl_JOIN_INNER_TD_7775_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6805_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_6805_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6805_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6805_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_6805_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_ext_sales_price752;
    std::string _i_item_id229;
    std::string _i_item_desc232;
    int32_t _i_current_price233;
    std::string _i_class238;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_6805_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6805_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6805_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6805_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6805_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_6805(Table &tbl_JOIN_INNER_TD_7775_output, Table &tbl_Filter_TD_7230_output, Table &tbl_JOIN_INNER_TD_6805_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ws_ext_sales_price#752, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    int left_nrow = tbl_JOIN_INNER_TD_7775_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7230_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6805_key_leftMajor, SW_JOIN_INNER_TD_6805_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7775_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_7775_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6805_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7775_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7775_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_7775_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_7775_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            int32_t _i_current_price233 = tbl_JOIN_INNER_TD_7775_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_7775_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7775_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_6805_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_ext_sales_price752, _i_item_id229, _i_item_desc232, _i_current_price233, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7230_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7230_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6805_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
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
                int32_t _d_date_sk120 = tbl_Filter_TD_7230_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6805_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6805_output.setInt32(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_6805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_n);
                tbl_JOIN_INNER_TD_6805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6805_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6805_key_rightMajor, SW_JOIN_INNER_TD_6805_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7230_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7230_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6805_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7230_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6805_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7775_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_7775_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6805_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7775_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7775_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_7775_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_JOIN_INNER_TD_7775_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                int32_t _i_current_price233 = tbl_JOIN_INNER_TD_7775_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_7775_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7775_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_6805_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_6805_output.setInt32(r, 3, _i_current_price233);
                tbl_JOIN_INNER_TD_6805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_class238_n);
                tbl_JOIN_INNER_TD_6805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6805_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6805_output #Row: " << tbl_JOIN_INNER_TD_6805_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5212_key {
    std::string _i_item_id229;
    std::string _i_item_desc232;
    std::string _i_category240;
    std::string _i_class238;
    int32_t _i_current_price233;
    bool operator==(const SW_Aggregate_TD_5212_key& other) const { return (_i_item_id229 == other._i_item_id229) && (_i_item_desc232 == other._i_item_desc232) && (_i_category240 == other._i_category240) && (_i_class238 == other._i_class238) && (_i_current_price233 == other._i_current_price233); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5212_key> {
    std::size_t operator() (const SW_Aggregate_TD_5212_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229)) + (hash<string>()(k._i_item_desc232)) + (hash<string>()(k._i_category240)) + (hash<string>()(k._i_class238)) + (hash<int32_t>()(k._i_current_price233));
    }
};
}
struct SW_Aggregate_TD_5212_payload {
    int32_t _itemrevenue12090_sum_0;
    int32_t __w012096_sum_1;
    int32_t __w112097_sum_2;
};
void SW_Aggregate_TD_5212(Table &tbl_JOIN_INNER_TD_6805_output, Table &tbl_Aggregate_TD_5212_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS itemrevenue#12090, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS _w0#12096, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS _w1#12097)
    // Input: ListBuffer(ws_ext_sales_price#752, i_item_id#229, i_item_desc#232, i_current_price#233, i_class#238, i_category#240)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, _w0#12096, _w1#12097)
    std::unordered_map<SW_Aggregate_TD_5212_key, SW_Aggregate_TD_5212_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6805_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6805_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_6805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_6805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_current_price233 = tbl_JOIN_INNER_TD_6805_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_JOIN_INNER_TD_6805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_6805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        SW_Aggregate_TD_5212_key k{std::string(_i_item_id229.data()), std::string(_i_item_desc232.data()), std::string(_i_category240.data()), std::string(_i_class238.data()), _i_current_price233};
        int64_t _itemrevenue12090_sum_0 = _ws_ext_sales_price752;
        int64_t __w012096_sum_1 = _ws_ext_sales_price752;
        int64_t __w112097_sum_2 = _ws_ext_sales_price752;
        SW_Aggregate_TD_5212_payload p{_itemrevenue12090_sum_0, __w012096_sum_1, __w112097_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._itemrevenue12090_sum_0 + _itemrevenue12090_sum_0;
            p._itemrevenue12090_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w012096_sum_1 + __w012096_sum_1;
            p.__w012096_sum_1 = sum_1;
            int32_t sum_2 = (it->second).__w112097_sum_2 + __w112097_sum_2;
            p.__w112097_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), ((it.first)._i_item_id229).data(), ((it.first)._i_item_id229).length());
        tbl_Aggregate_TD_5212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), ((it.first)._i_item_desc232).data(), ((it.first)._i_item_desc232).length());
        tbl_Aggregate_TD_5212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_5212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238{};
        memcpy(_i_class238.data(), ((it.first)._i_class238).data(), ((it.first)._i_class238).length());
        tbl_Aggregate_TD_5212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238);
        tbl_Aggregate_TD_5212_output.setInt32(r, 4, (it.first)._i_current_price233);
        int32_t _itemrevenue12090 = (it.second)._itemrevenue12090_sum_0;
        tbl_Aggregate_TD_5212_output.setInt32(r, 5, _itemrevenue12090);
        int32_t __w012096 = (it.second).__w012096_sum_1;
        tbl_Aggregate_TD_5212_output.setInt32(r, 6, __w012096);
        int32_t __w112097 = (it.second).__w112097_sum_2;
        tbl_Aggregate_TD_5212_output.setInt32(r, 7, __w112097);
        ++r;
    }
    tbl_Aggregate_TD_5212_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5212_output #Row: " << tbl_Aggregate_TD_5212_output.getNumRow() << std::endl;
}

void SW_Window_TD_4675(Table &tbl_Aggregate_TD_5212_output, Table &tbl_Window_TD_4675_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(sum(_w1#12097) windowspecdefinition(i_class#238, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS _we0#12098)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, _w0#12096, _w1#12097)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, _w0#12096, _w1#12097, _we0#12098)
    struct SW_Window_TD_4675Row {
        std::string _i_item_id229;
        std::string _i_item_desc232;
        std::string _i_category240;
        std::string _i_class238;
        int32_t _i_current_price233;
        int32_t _itemrevenue12090;
        int32_t __w012096;
        int32_t __w112097;
    }; 

    int nrow = tbl_Aggregate_TD_5212_output.getNumRow();
    std::vector<SW_Window_TD_4675Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_5212_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_4675_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Aggregate_TD_5212_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_4675_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_5212_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_4675_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Aggregate_TD_5212_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_4675_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _i_class238);
        int32_t _i_current_price233 = tbl_Aggregate_TD_5212_output.getInt32(i, 4);
        tbl_Window_TD_4675_output.setInt32(r, 4,_i_current_price233);
        int32_t _itemrevenue12090 = tbl_Aggregate_TD_5212_output.getInt32(i, 5);
        tbl_Window_TD_4675_output.setInt32(r, 5,_itemrevenue12090);
        int32_t __w012096 = tbl_Aggregate_TD_5212_output.getInt32(i, 6);
        tbl_Window_TD_4675_output.setInt32(r, 6,__w012096);
        int32_t __w112097 = tbl_Aggregate_TD_5212_output.getInt32(i, 7);
        tbl_Window_TD_4675_output.setInt32(r, 7,__w112097);
        r++;
        SW_Window_TD_4675Row t = {std::string(_i_item_id229.data()),std::string(_i_item_desc232.data()),std::string(_i_category240.data()),std::string(_i_class238.data()),_i_current_price233,_itemrevenue12090,__w012096,__w112097};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4675Row& a, const SW_Window_TD_4675Row& b) const { return 
(a._i_class238 < b._i_class238); 
}
    }SW_Window_TD_4675_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4675_order0);
    int64_t sum0 = 0;
    std::string current_i_class2380 = "";
    for (auto& it : rows0) {
        if (current_i_class2380 != it._i_class238) {
            sum0 = 0;
            current_i_class2380 = it._i_class238;
        }
        sum0 += it.__w112097;
        tbl_Window_TD_4675_output.setInt64(r, 8, sum0 );
    }
    tbl_Window_TD_4675_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4675_output #Row: " << tbl_Window_TD_4675_output.getNumRow() << std::endl;
}

void SW_Project_TD_3499(Table &tbl_Window_TD_4675_output, Table &tbl_Project_TD_3499_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(_w0#12096) * 100.00), DecimalType(21,2), true) as decimal(27,2))) / promote_precision(_we0#12098)), DecimalType(38,17), true) AS revenueratio#12091)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, _w0#12096, _w1#12097, _we0#12098)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, revenueratio#12091)
    int nrow1 = tbl_Window_TD_4675_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Window_TD_4675_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Window_TD_4675_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Window_TD_4675_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Window_TD_4675_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _i_current_price233 = tbl_Window_TD_4675_output.getInt32(i, 4);
        int32_t _itemrevenue12090 = tbl_Window_TD_4675_output.getInt32(i, 5);
        int32_t __w012096 = tbl_Window_TD_4675_output.getInt32(i, 6);
        int32_t __w112097 = tbl_Window_TD_4675_output.getInt32(i, 7);
        int32_t __we012098 = tbl_Window_TD_4675_output.getInt32(i, 8);
        int32_t _revenueratio12091 = ((__w012096 * 100.00) / __we012098);
        tbl_Project_TD_3499_output.setInt32(i, 6, _revenueratio12091);
        tbl_Project_TD_3499_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_item_id229);
        tbl_Project_TD_3499_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_item_desc232);
        tbl_Project_TD_3499_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _i_category240);
        tbl_Project_TD_3499_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _i_class238);
        tbl_Project_TD_3499_output.setInt32(i, 4, _i_current_price233);
        tbl_Project_TD_3499_output.setInt32(i, 5, _itemrevenue12090);
    }
    tbl_Project_TD_3499_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3499_output #Row: " << tbl_Project_TD_3499_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2944(Table &tbl_Project_TD_3499_output, Table &tbl_Sort_TD_2944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_category#240 ASC NULLS FIRST, i_class#238 ASC NULLS FIRST, i_item_id#229 ASC NULLS FIRST, i_item_desc#232 ASC NULLS FIRST, revenueratio#12091 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, revenueratio#12091)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, revenueratio#12091)
    struct SW_Sort_TD_2944Row {
        std::string _i_item_id229;
        std::string _i_item_desc232;
        std::string _i_category240;
        std::string _i_class238;
        int32_t _i_current_price233;
        int32_t _itemrevenue12090;
        int32_t _revenueratio12091;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2944Row& a, const SW_Sort_TD_2944Row& b) const { return 
 (a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 < b._i_class238)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 < b._i_item_id229)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 < b._i_item_desc232)) || 
 ((a._i_category240 == b._i_category240) && (a._i_class238 == b._i_class238) && (a._i_item_id229 == b._i_item_id229) && (a._i_item_desc232 == b._i_item_desc232) && (a._revenueratio12091 < b._revenueratio12091)); 
}
    }SW_Sort_TD_2944_order; 

    int nrow1 = tbl_Project_TD_3499_output.getNumRow();
    std::vector<SW_Sort_TD_2944Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Project_TD_3499_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_Project_TD_3499_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_3499_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Project_TD_3499_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _i_current_price233 = tbl_Project_TD_3499_output.getInt32(i, 4);
        int32_t _itemrevenue12090 = tbl_Project_TD_3499_output.getInt32(i, 5);
        int32_t _revenueratio12091 = tbl_Project_TD_3499_output.getInt32(i, 6);
        SW_Sort_TD_2944Row t = {std::string(_i_item_id229.data()),std::string(_i_item_desc232.data()),std::string(_i_category240.data()),std::string(_i_class238.data()),_i_current_price233,_itemrevenue12090,_revenueratio12091};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2944_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2944_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232{};
        memcpy(_i_item_desc232.data(), (it._i_item_desc232).data(), (it._i_item_desc232).length());
        tbl_Sort_TD_2944_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_item_desc232);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2944_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238{};
        memcpy(_i_class238.data(), (it._i_class238).data(), (it._i_class238).length());
        tbl_Sort_TD_2944_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _i_class238);
        tbl_Sort_TD_2944_output.setInt32(r, 4, it._i_current_price233);
        tbl_Sort_TD_2944_output.setInt32(r, 5, it._itemrevenue12090);
        tbl_Sort_TD_2944_output.setInt32(r, 6, it._revenueratio12091);
        ++r;
    }
    tbl_Sort_TD_2944_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2944_output #Row: " << tbl_Sort_TD_2944_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1450(Table &tbl_Sort_TD_2944_output, Table &tbl_LocalLimit_TD_1450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, revenueratio#12091)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, revenueratio#12091)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1450_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Sort_TD_2944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1450_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1450_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Sort_TD_2944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1450_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
        tbl_LocalLimit_TD_1450_output.setInt32(r, 4, tbl_Sort_TD_2944_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1450_output.setInt32(r, 5, tbl_Sort_TD_2944_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1450_output.setInt32(r, 6, tbl_Sort_TD_2944_output.getInt32(i, 6));
        r++;
    }
    tbl_LocalLimit_TD_1450_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1450_output #Row: " << tbl_LocalLimit_TD_1450_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0801(Table &tbl_LocalLimit_TD_1450_output, Table &tbl_GlobalLimit_TD_0801_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, revenueratio#12091)
    // Output: ListBuffer(i_item_id#229, i_item_desc#232, i_category#240, i_class#238, i_current_price#233, itemrevenue#12090, revenueratio#12091)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0801_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_LocalLimit_TD_1450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0801_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0801_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_LocalLimit_TD_1450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0801_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
        tbl_GlobalLimit_TD_0801_output.setInt32(r, 4, tbl_LocalLimit_TD_1450_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0801_output.setInt32(r, 5, tbl_LocalLimit_TD_1450_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0801_output.setInt32(r, 6, tbl_LocalLimit_TD_1450_output.getInt32(i, 6));
        r++;
    }
    tbl_GlobalLimit_TD_0801_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0801_output #Row: " << tbl_GlobalLimit_TD_0801_output.getNumRow() << std::endl;
}

