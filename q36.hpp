#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9577(Table &tbl_SerializeFromObject_TD_10246_input, Table &tbl_Filter_TD_9577_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2001)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10246_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10246_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10246_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2001)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10246_input.getInt32(i, 0);
            tbl_Filter_TD_9577_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9577_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9577_output #Row: " << tbl_Filter_TD_9577_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9350(Table &tbl_SerializeFromObject_TD_10662_input, Table &tbl_Filter_TD_9350_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND (isnotnull(ss_item_sk#1208) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10662_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10662_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10662_input.getInt32(i, 1);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10662_input.getInt32(i, 2);
        if ((_ss_sold_date_sk1206!= 0) && ((_ss_item_sk1208!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10662_input.getInt32(i, 0);
            tbl_Filter_TD_9350_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10662_input.getInt32(i, 1);
            tbl_Filter_TD_9350_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10662_input.getInt32(i, 2);
            tbl_Filter_TD_9350_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_10662_input.getInt32(i, 3);
            tbl_Filter_TD_9350_output.setInt32(r, 3, _ss_ext_sales_price1221_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_10662_input.getInt32(i, 4);
            tbl_Filter_TD_9350_output.setInt32(r, 4, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_9350_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9350_output #Row: " << tbl_Filter_TD_9350_output.getNumRow() << std::endl;
}

void SW_Filter_TD_85(Table &tbl_SerializeFromObject_TD_9833_input, Table &tbl_Filter_TD_85_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_class#238, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_class#238, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9833_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_9833_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_9833_input.getInt32(i, 0);
            tbl_Filter_TD_85_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_t = tbl_SerializeFromObject_TD_9833_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_85_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_9833_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_85_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_85_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_85_output #Row: " << tbl_Filter_TD_85_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8112_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8112_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8112_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8112_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8112_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_8112_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8112_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8112_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8112_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8112_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8112(Table &tbl_Filter_TD_9350_output, Table &tbl_Filter_TD_9577_output, Table &tbl_JOIN_INNER_TD_8112_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    int left_nrow = tbl_Filter_TD_9350_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9577_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8112_key_leftMajor, SW_JOIN_INNER_TD_8112_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9350_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9350_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8112_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9350_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9350_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_9350_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9350_output.getInt32(i, 3);
            int32_t _ss_net_profit1228 = tbl_Filter_TD_9350_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_8112_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_ext_sales_price1221, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9577_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9577_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8112_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _d_date_sk120 = tbl_Filter_TD_9577_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8112_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8112_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8112_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8112_output.setInt32(r, 3, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8112_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8112_key_rightMajor, SW_JOIN_INNER_TD_8112_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9577_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9577_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8112_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9577_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8112_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9350_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9350_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8112_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9350_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9350_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_9350_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9350_output.getInt32(i, 3);
                int32_t _ss_net_profit1228 = tbl_Filter_TD_9350_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_8112_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8112_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8112_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8112_output.setInt32(r, 3, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8112_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8112_output #Row: " << tbl_JOIN_INNER_TD_8112_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7810(Table &tbl_SerializeFromObject_TD_8912_input, Table &tbl_Filter_TD_7810_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_state#402) AND (s_state#402 = TN)) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_state#402)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8912_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_state402 = tbl_SerializeFromObject_TD_8912_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_state402.data()) != "NULL") && (std::string(_s_state402.data()) == "TN")) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_8912_input.getInt32(i, 0);
            tbl_Filter_TD_7810_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_7810_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7810_output #Row: " << tbl_Filter_TD_7810_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7275_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_7275_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7275_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7275_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_7275_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_7275_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_7275_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7275_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7275_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_7275_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_class238;
    std::string _i_category240;
};
void SW_JOIN_INNER_TD_7275(Table &tbl_JOIN_INNER_TD_8112_output, Table &tbl_Filter_TD_85_output, Table &tbl_JOIN_INNER_TD_7275_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = ss_item_sk#1208))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Right Table: ListBuffer(i_item_sk#228, i_class#238, i_category#240)
    // Output Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228, i_class#238, i_category#240)
    int left_nrow = tbl_JOIN_INNER_TD_8112_output.getNumRow();
    int right_nrow = tbl_Filter_TD_85_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7275_key_leftMajor, SW_JOIN_INNER_TD_7275_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8112_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7275_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 2);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7275_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_ext_sales_price1221, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_85_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_85_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7275_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _i_item_sk228 = tbl_Filter_TD_85_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_85_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_85_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_7275_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7275_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7275_output.setInt32(r, 2, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_7275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_7275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7275_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7275_key_rightMajor, SW_JOIN_INNER_TD_7275_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_85_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_85_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7275_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_85_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_85_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_85_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_7275_payload_rightMajor payloadA{_i_item_sk228, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8112_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7275_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 2);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_8112_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_7275_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
                tbl_JOIN_INNER_TD_7275_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7275_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7275_output.setInt32(r, 2, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7275_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7275_output #Row: " << tbl_JOIN_INNER_TD_7275_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6861_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_6861_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6861_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6861_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_6861_payload_leftMajor {
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
    std::string _i_class238;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_6861_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_6861_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6861_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6861_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_6861_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_6861(Table &tbl_JOIN_INNER_TD_7275_output, Table &tbl_Filter_TD_7810_output, Table &tbl_JOIN_INNER_TD_6861_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_store_sk#378 = ss_store_sk#1213))
    // Left Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228, i_class#238, i_category#240)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, i_category#240, i_class#238)
    int left_nrow = tbl_JOIN_INNER_TD_7275_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7810_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6861_key_leftMajor, SW_JOIN_INNER_TD_6861_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7275_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7275_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6861_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7275_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7275_output.getInt32(i, 1);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7275_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_7275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_6861_payload_leftMajor payloadA{_ss_store_sk1213, _ss_ext_sales_price1221, _ss_net_profit1228, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7810_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7810_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6861_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _s_store_sk378 = tbl_Filter_TD_7810_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6861_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6861_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_6861_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_6861_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6861_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6861_key_rightMajor, SW_JOIN_INNER_TD_6861_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7810_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7810_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6861_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_7810_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6861_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7275_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7275_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6861_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7275_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7275_output.getInt32(i, 1);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_7275_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_7275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7275_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_6861_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6861_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_6861_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_6861_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6861_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6861_output #Row: " << tbl_JOIN_INNER_TD_6861_output.getNumRow() << std::endl;
}

void SW_Expand_TD_5796(Table &tbl_JOIN_INNER_TD_6861_output, Table &tbl_Expand_TD_5796_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, i_category#240, i_class#238)
    // Output: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, i_category#7384, i_class#7385, spark_grouping_id#7383L)
    std::cout << "tbl_Expand_TD_5796_output #Row: " << tbl_Expand_TD_5796_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4504_key {
    std::string _i_category7384;
    std::string _i_class7385;
    int64_t _spark_grouping_id7383L;
    bool operator==(const SW_Aggregate_TD_4504_key& other) const { return (_i_category7384 == other._i_category7384) && (_i_class7385 == other._i_class7385) && (_spark_grouping_id7383L == other._spark_grouping_id7383L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4504_key> {
    std::size_t operator() (const SW_Aggregate_TD_4504_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category7384)) + (hash<string>()(k._i_class7385)) + (hash<int64_t>()(k._spark_grouping_id7383L));
    }
};
}
struct SW_Aggregate_TD_4504_payload {
    int32_t _gross_margin7372_sum_0;
    int32_t _gross_margin7372_sum_1;
    // Unsupported Data Type
    // Unsupported Data Type
    std::string __w27399;
    int32_t __w37400_sum_2;
    int32_t __w37400_sum_3;
};
void SW_Aggregate_TD_4504(Table &tbl_Expand_TD_5796_output, Table &tbl_Aggregate_TD_4504_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#7384, i_class#7385, spark_grouping_id#7383L, CheckOverflow((promote_precision(MakeDecimal(sum(UnscaledValue(ss_net_profit#1228)),17,2)) / promote_precision(MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2))), DecimalType(37,20), true) AS gross_margin#7372, (cast((shiftright(spark_grouping_id#7383L, 1) & 1) as tinyint) + cast((shiftright(spark_grouping_id#7383L, 0) & 1) as tinyint)) AS lochierarchy#7373, (cast((shiftright(spark_grouping_id#7383L, 1) & 1) as tinyint) + cast((shiftright(spark_grouping_id#7383L, 0) & 1) as tinyint)) AS _w1#7398, CASE WHEN (cast((shiftright(spark_grouping_id#7383L, 0) & 1) as tinyint) = 0) THEN i_category#7384 END AS _w2#7399, CheckOverflow((promote_precision(MakeDecimal(sum(UnscaledValue(ss_net_profit#1228)),17,2)) / promote_precision(MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2))), DecimalType(37,20), true) AS _w3#7400)
    // Input: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, i_category#7384, i_class#7385, spark_grouping_id#7383L)
    // Output: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, _w1#7398, _w2#7399, _w3#7400)
    std::unordered_map<SW_Aggregate_TD_4504_key, SW_Aggregate_TD_4504_payload> ht1;
    int nrow1 = tbl_Expand_TD_5796_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_Expand_TD_5796_output.getInt32(i, 0);
        int32_t _ss_net_profit1228 = tbl_Expand_TD_5796_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category7384 = tbl_Expand_TD_5796_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class7385 = tbl_Expand_TD_5796_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int64_t _spark_grouping_id7383L = tbl_Expand_TD_5796_output.getInt64(i, 4);
        SW_Aggregate_TD_4504_key k{std::string(_i_category7384.data()), std::string(_i_class7385.data()), _spark_grouping_id7383L};
        int64_t _gross_margin7372_sum_0 = _ss_net_profit1228;
        int64_t _gross_margin7372_sum_1 = _ss_ext_sales_price1221;
        // Unsupported output Type
        // Unsupported output Type
        std::array<char, TPCDS_READ_MAX + 1> __w27399 = (_spark_grouping_id7383L == 0) ? _i_category7384 : 1;
        int64_t __w37400_sum_2 = _ss_net_profit1228;
        int64_t __w37400_sum_3 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_4504_payload p{_gross_margin7372_sum_0, _gross_margin7372_sum_1,     // Unsupported Data Type,     // Unsupported Data Type, std::string(__w27399.data()), __w37400_sum_2, __w37400_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._gross_margin7372_sum_0 + _gross_margin7372_sum_0;
            p._gross_margin7372_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._gross_margin7372_sum_1 + _gross_margin7372_sum_1;
            p._gross_margin7372_sum_1 = sum_1;
            int32_t sum_2 = (it->second).__w37400_sum_2 + __w37400_sum_2;
            p.__w37400_sum_2 = sum_2;
            int32_t sum_3 = (it->second).__w37400_sum_3 + __w37400_sum_3;
            p.__w37400_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category7384{};
        memcpy(_i_category7384.data(), ((it.first)._i_category7384).data(), ((it.first)._i_category7384).length());
        tbl_Aggregate_TD_4504_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7384);
        std::array<char, TPCDS_READ_MAX + 1> _i_class7385{};
        memcpy(_i_class7385.data(), ((it.first)._i_class7385).data(), ((it.first)._i_class7385).length());
        tbl_Aggregate_TD_4504_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class7385);
        // _spark_grouping_id7383L not required in the output table
        int32_t _gross_margin7372 = ((it.second)._gross_margin7372_sum_0 / (it.second)._gross_margin7372_sum_1);
        tbl_Aggregate_TD_4504_output.setInt32(r, 0, _gross_margin7372);
        // Unsupported payload type: ByteType
        // Unsupported payload type: ByteType
        tbl_Aggregate_TD_4504_output.setInt64(r, 5, (it.second).__w27399);
        int32_t __w37400 = ((it.second).__w37400_sum_2 / (it.second).__w37400_sum_3);
        tbl_Aggregate_TD_4504_output.setInt32(r, 6, __w37400);
        ++r;
    }
    tbl_Aggregate_TD_4504_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4504_output #Row: " << tbl_Aggregate_TD_4504_output.getNumRow() << std::endl;
}

void SW_Window_TD_3438(Table &tbl_Aggregate_TD_4504_output, Table &tbl_Window_TD_3438_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(_w3#7400) windowspecdefinition(_w1#7398, _w2#7399, _w3#7400 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rank_within_parent#7374)
    // Input: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, _w1#7398, _w2#7399, _w3#7400)
    // Output: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, _w1#7398, _w2#7399, _w3#7400, rank_within_parent#7374)
    struct SW_Window_TD_3438Row {
        int32_t _gross_margin7372;
        std::string _i_category7384;
        std::string _i_class7385;
        // Unsupported input column type
        // Unsupported input column type
        int64_t __w27399;
        int32_t __w37400;
    }; 

    int nrow = tbl_Aggregate_TD_4504_output.getNumRow();
    std::vector<SW_Window_TD_3438Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _gross_margin7372 = tbl_Aggregate_TD_4504_output.getInt32(i, 0);
        tbl_Window_TD_3438_output.setInt32(r, 0,_gross_margin7372);
        std::array<char, TPCDS_READ_MAX + 1> _i_category7384 = tbl_Aggregate_TD_4504_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_3438_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_category7384);
        std::array<char, TPCDS_READ_MAX + 1> _i_class7385 = tbl_Aggregate_TD_4504_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_3438_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_class7385);
        // Unsupported input column type
        // Unsupported input column type
        int64_t __w27399 = tbl_Aggregate_TD_4504_output.getInt64(i, 5);
        tbl_Window_TD_3438_output.setInt64(r, 5,__w27399);
        int32_t __w37400 = tbl_Aggregate_TD_4504_output.getInt32(i, 6);
        tbl_Window_TD_3438_output.setInt32(r, 6,__w37400);
        r++;
        SW_Window_TD_3438Row t = {_gross_margin7372,std::string(_i_category7384.data()),std::string(_i_class7385.data()),__w27399,__w37400};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_3438Row& a, const SW_Window_TD_3438Row& b) const { return 
(a.__w17398 < b.__w17398) || 
 ((a.__w17398 == b.__w17398) && (a.__w27399 < b.__w27399)) || 
 ((a.__w17398 == b.__w17398) && (a.__w27399 == b.__w27399) && (a.__w37400 < b.__w37400)); 
}
    }SW_Window_TD_3438_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_3438_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i].__w17398 == rows0[i-1].__w17398 && rows0[i].__w27399 == rows0[i-1].__w27399);
        isSameOrderKey0 = ( rows0[i].__w37400 == rows0[i-1].__w37400);
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
        tbl_Window_TD_3438_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_3438_output.setNumRow(r);
    std::cout << "tbl_Window_TD_3438_output #Row: " << tbl_Window_TD_3438_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2134(Table &tbl_Window_TD_3438_output, Table &tbl_Sort_TD_2134_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(lochierarchy#7373 DESC NULLS LAST, CASE WHEN (lochierarchy#7373 = 0) THEN i_category#7384 END ASC NULLS FIRST, rank_within_parent#7374 ASC NULLS FIRST)
    // Input: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, _w1#7398, _w2#7399, _w3#7400, rank_within_parent#7374)
    // Output: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, rank_within_parent#7374)
    struct SW_Sort_TD_2134Row {
        int32_t _gross_margin7372;
        std::string _i_category7384;
        std::string _i_class7385;
        // Unsupported input column type
        int32_t _rank_within_parent7374;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2134Row& a, const SW_Sort_TD_2134Row& b) const { return 
 (a._lochierarchy7373 > b._lochierarchy7373) || 
 ((a._lochierarchy7373 == b._lochierarchy7373) &&  || 
 ((a._lochierarchy7373 == b._lochierarchy7373) && (a._END == b._END) && (a._rank_within_parent7374 < b._rank_within_parent7374)); 
}
    }SW_Sort_TD_2134_order; 

    int nrow1 = tbl_Window_TD_3438_output.getNumRow();
    std::vector<SW_Sort_TD_2134Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _gross_margin7372 = tbl_Window_TD_3438_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category7384 = tbl_Window_TD_3438_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_class7385 = tbl_Window_TD_3438_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        // Unsupported input column type
        // Unsupported input column type
        int64_t __w27399 = tbl_Window_TD_3438_output.getInt64(i, 5);
        int32_t __w37400 = tbl_Window_TD_3438_output.getInt32(i, 6);
        int32_t _rank_within_parent7374 = tbl_Window_TD_3438_output.getInt32(i, 7);
        SW_Sort_TD_2134Row t = {_gross_margin7372,std::string(_i_category7384.data()),std::string(_i_class7385.data()),__w27399,__w37400,_rank_within_parent7374};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2134_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2134_output.setInt32(r, 0, it._gross_margin7372);
        std::array<char, TPCDS_READ_MAX + 1> _i_category7384{};
        memcpy(_i_category7384.data(), (it._i_category7384).data(), (it._i_category7384).length());
        tbl_Sort_TD_2134_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_category7384);
        std::array<char, TPCDS_READ_MAX + 1> _i_class7385{};
        memcpy(_i_class7385.data(), (it._i_class7385).data(), (it._i_class7385).length());
        tbl_Sort_TD_2134_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_class7385);
        // Unsupported input column type
        tbl_Sort_TD_2134_output.setInt32(r, 4, it._rank_within_parent7374);
        ++r;
    }
    tbl_Sort_TD_2134_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2134_output #Row: " << tbl_Sort_TD_2134_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1523(Table &tbl_Sort_TD_2134_output, Table &tbl_LocalLimit_TD_1523_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, rank_within_parent#7374)
    // Output: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, rank_within_parent#7374)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1523_output.setInt32(r, 0, tbl_Sort_TD_2134_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _i_category7384_n = tbl_Sort_TD_2134_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1523_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7384_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class7385_n = tbl_Sort_TD_2134_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1523_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class7385_n);
        // Unsupported Union key type
        tbl_LocalLimit_TD_1523_output.setInt32(r, 4, tbl_Sort_TD_2134_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1523_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1523_output #Row: " << tbl_LocalLimit_TD_1523_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0694(Table &tbl_LocalLimit_TD_1523_output, Table &tbl_GlobalLimit_TD_0694_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, rank_within_parent#7374)
    // Output: ListBuffer(gross_margin#7372, i_category#7384, i_class#7385, lochierarchy#7373, rank_within_parent#7374)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0694_output.setInt32(r, 0, tbl_LocalLimit_TD_1523_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _i_category7384_n = tbl_LocalLimit_TD_1523_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category7384_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class7385_n = tbl_LocalLimit_TD_1523_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class7385_n);
        // Unsupported Union key type
        tbl_GlobalLimit_TD_0694_output.setInt32(r, 4, tbl_LocalLimit_TD_1523_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0694_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0694_output #Row: " << tbl_GlobalLimit_TD_0694_output.getNumRow() << std::endl;
}

