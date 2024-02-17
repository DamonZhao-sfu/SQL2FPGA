#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6532(Table &tbl_SerializeFromObject_TD_7665_input, Table &tbl_Filter_TD_6532_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7665_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_7665_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_7665_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_7665_input.getInt32(i, 0);
            tbl_Filter_TD_6532_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_7665_input.getInt32(i, 1);
            tbl_Filter_TD_6532_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_7665_input.getInt32(i, 2);
            tbl_Filter_TD_6532_output.setInt32(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_6532_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6532_output #Row: " << tbl_Filter_TD_6532_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6927(Table &tbl_SerializeFromObject_TD_7573_input, Table &tbl_Filter_TD_6927_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 11) AND (d_year#126 = 1999))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7573_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_7573_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_7573_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_7573_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 11) && (_d_year126 == 1999))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_7573_input.getInt32(i, 0);
            tbl_Filter_TD_6927_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_6927_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6927_output #Row: " << tbl_Filter_TD_6927_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5871(Table &tbl_SerializeFromObject_TD_6329_input, Table &tbl_Filter_TD_5871_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manager_id#248) AND (i_manager_id#248 = 28)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236, i_manager_id#248)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6329_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_SerializeFromObject_TD_6329_input.getInt32(i, 3);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_6329_input.getInt32(i, 0);
        if (((_i_manager_id248!= 0) && (_i_manager_id248 == 28)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_6329_input.getInt32(i, 0);
            tbl_Filter_TD_5871_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_6329_input.getInt32(i, 1);
            tbl_Filter_TD_5871_output.setInt32(r, 1, _i_brand_id235_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_6329_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5871_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_t);
            r++;
        }
    }
    tbl_Filter_TD_5871_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5871_output #Row: " << tbl_Filter_TD_5871_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5312_key_leftMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_5312_key_leftMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5312_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5312_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_5312_payload_leftMajor {
    int32_t _d_date_sk120;
};
struct SW_JOIN_INNER_TD_5312_key_rightMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_5312_key_rightMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5312_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5312_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_5312_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
};
void SW_JOIN_INNER_TD_5312(Table &tbl_Filter_TD_6927_output, Table &tbl_Filter_TD_6532_output, Table &tbl_JOIN_INNER_TD_5312_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(d_date_sk#120)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    int left_nrow = tbl_Filter_TD_6927_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6532_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5312_key_leftMajor, SW_JOIN_INNER_TD_5312_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6927_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6927_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5312_key_leftMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_6927_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5312_payload_leftMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6532_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_6532_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5312_key_leftMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6532_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_6532_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_6532_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5312_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5312_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5312_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5312_key_rightMajor, SW_JOIN_INNER_TD_5312_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6532_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_6532_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5312_key_rightMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6532_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_6532_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_6532_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5312_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6927_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6927_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5312_key_rightMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk120 = tbl_Filter_TD_6927_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5312_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5312_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5312_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5312_output #Row: " << tbl_JOIN_INNER_TD_5312_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4139_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_4139_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4139_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4139_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_4139_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_4139_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4139_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4139_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4139_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4139_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    std::string _i_brand236;
};
void SW_JOIN_INNER_TD_4139(Table &tbl_JOIN_INNER_TD_5312_output, Table &tbl_Filter_TD_5871_output, Table &tbl_JOIN_INNER_TD_4139_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, i_brand_id#235, i_brand#236)
    int left_nrow = tbl_JOIN_INNER_TD_5312_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5871_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4139_key_leftMajor, SW_JOIN_INNER_TD_4139_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5312_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5312_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4139_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5312_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5312_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4139_payload_leftMajor payloadA{_ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5871_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5871_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4139_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_5871_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_5871_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_5871_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                tbl_JOIN_INNER_TD_4139_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_4139_output.setInt32(r, 1, _i_brand_id235);
                tbl_JOIN_INNER_TD_4139_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4139_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4139_key_rightMajor, SW_JOIN_INNER_TD_4139_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5871_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5871_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4139_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_5871_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_5871_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_5871_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            SW_JOIN_INNER_TD_4139_payload_rightMajor payloadA{_i_item_sk228, _i_brand_id235, _i_brand236};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5312_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5312_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4139_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5312_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5312_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4139_output.setInt32(r, 1, _i_brand_id235);
                tbl_JOIN_INNER_TD_4139_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                tbl_JOIN_INNER_TD_4139_output.setInt32(r, 0, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4139_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4139_output #Row: " << tbl_JOIN_INNER_TD_4139_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3300_key {
    std::string _i_brand236;
    int32_t _i_brand_id235;
    bool operator==(const SW_Aggregate_TD_3300_key& other) const { return (_i_brand236 == other._i_brand236) && (_i_brand_id235 == other._i_brand_id235); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3300_key> {
    std::size_t operator() (const SW_Aggregate_TD_3300_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_brand236)) + (hash<int32_t>()(k._i_brand_id235));
    }
};
}
struct SW_Aggregate_TD_3300_payload {
    int32_t _brand_id8185;
    std::string _brand8186;
    int32_t _ext_price8187_sum_0;
};
void SW_Aggregate_TD_3300(Table &tbl_JOIN_INNER_TD_4139_output, Table &tbl_Aggregate_TD_3300_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand#236, i_brand_id#235, i_brand_id#235 AS brand_id#8185, i_brand#236 AS brand#8186, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS ext_price#8187)
    // Input: ListBuffer(ss_ext_sales_price#1221, i_brand_id#235, i_brand#236)
    // Output: ListBuffer(brand_id#8185, brand#8186, ext_price#8187)
    std::unordered_map<SW_Aggregate_TD_3300_key, SW_Aggregate_TD_3300_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4139_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_4139_output.getInt32(i, 0);
        int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_4139_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_3300_key k{std::string(_i_brand236.data()), _i_brand_id235};
        int32_t _brand_id8185 = _i_brand_id235;
        std::array<char, TPCDS_READ_MAX + 1> _brand8186 = _i_brand236;
        int64_t _ext_price8187_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_3300_payload p{_brand_id8185, std::string(_brand8186.data()), _ext_price8187_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ext_price8187_sum_0 + _ext_price8187_sum_0;
            p._ext_price8187_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_brand236 not required in the output table
        // _i_brand_id235 not required in the output table
        tbl_Aggregate_TD_3300_output.setInt32(r, 0, (it.second)._brand_id8185);
        std::array<char, TPCDS_READ_MAX + 1> _brand8186_n{};
        memcpy(_brand8186_n.data(), (it.second)._brand8186.data(), (it.second)._brand8186.length());
        tbl_Aggregate_TD_3300_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand8186_n);
        int32_t _ext_price8187 = (it.second)._ext_price8187_sum_0;
        tbl_Aggregate_TD_3300_output.setInt32(r, 2, _ext_price8187);
        ++r;
    }
    tbl_Aggregate_TD_3300_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3300_output #Row: " << tbl_Aggregate_TD_3300_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2912(Table &tbl_Aggregate_TD_3300_output, Table &tbl_Sort_TD_2912_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ext_price#8187 DESC NULLS LAST, brand_id#8185 ASC NULLS FIRST)
    // Input: ListBuffer(brand_id#8185, brand#8186, ext_price#8187)
    // Output: ListBuffer(brand_id#8185, brand#8186, ext_price#8187)
    struct SW_Sort_TD_2912Row {
        int32_t _brand_id8185;
        std::string _brand8186;
        int32_t _ext_price8187;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2912Row& a, const SW_Sort_TD_2912Row& b) const { return 
 (a._ext_price8187 > b._ext_price8187) || 
 ((a._ext_price8187 == b._ext_price8187) && (a._brand_id8185 < b._brand_id8185)); 
}
    }SW_Sort_TD_2912_order; 

    int nrow1 = tbl_Aggregate_TD_3300_output.getNumRow();
    std::vector<SW_Sort_TD_2912Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id8185 = tbl_Aggregate_TD_3300_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _brand8186 = tbl_Aggregate_TD_3300_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _ext_price8187 = tbl_Aggregate_TD_3300_output.getInt32(i, 2);
        SW_Sort_TD_2912Row t = {_brand_id8185,std::string(_brand8186.data()),_ext_price8187};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2912_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2912_output.setInt32(r, 0, it._brand_id8185);
        std::array<char, TPCDS_READ_MAX + 1> _brand8186{};
        memcpy(_brand8186.data(), (it._brand8186).data(), (it._brand8186).length());
        tbl_Sort_TD_2912_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _brand8186);
        tbl_Sort_TD_2912_output.setInt32(r, 2, it._ext_price8187);
        ++r;
    }
    tbl_Sort_TD_2912_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2912_output #Row: " << tbl_Sort_TD_2912_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1795(Table &tbl_Sort_TD_2912_output, Table &tbl_LocalLimit_TD_1795_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(brand_id#8185, brand#8186, ext_price#8187)
    // Output: ListBuffer(brand_id#8185, brand#8186, ext_price#8187)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1795_output.setInt32(r, 0, tbl_Sort_TD_2912_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _brand8186_n = tbl_Sort_TD_2912_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand8186_n);
        tbl_LocalLimit_TD_1795_output.setInt32(r, 2, tbl_Sort_TD_2912_output.getInt32(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1795_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1795_output #Row: " << tbl_LocalLimit_TD_1795_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0356(Table &tbl_LocalLimit_TD_1795_output, Table &tbl_GlobalLimit_TD_0356_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(brand_id#8185, brand#8186, ext_price#8187)
    // Output: ListBuffer(brand_id#8185, brand#8186, ext_price#8187)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0356_output.setInt32(r, 0, tbl_LocalLimit_TD_1795_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _brand8186_n = tbl_LocalLimit_TD_1795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0356_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand8186_n);
        tbl_GlobalLimit_TD_0356_output.setInt32(r, 2, tbl_LocalLimit_TD_1795_output.getInt32(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0356_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0356_output #Row: " << tbl_GlobalLimit_TD_0356_output.getNumRow() << std::endl;
}

