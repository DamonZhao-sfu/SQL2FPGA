#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6217(Table &tbl_SerializeFromObject_TD_7269_input, Table &tbl_Filter_TD_6217_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7269_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_7269_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_7269_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_7269_input.getInt32(i, 0);
            tbl_Filter_TD_6217_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_7269_input.getInt32(i, 1);
            tbl_Filter_TD_6217_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_7269_input.getInt32(i, 2);
            tbl_Filter_TD_6217_output.setInt32(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_6217_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6217_output #Row: " << tbl_Filter_TD_6217_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6764(Table &tbl_SerializeFromObject_TD_7956_input, Table &tbl_Filter_TD_6764_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 11) AND (d_year#126 = 2000))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7956_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_7956_input.getInt32(i, 2);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_7956_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_7956_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 11) && (_d_year126 == 2000))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_7956_input.getInt32(i, 0);
            tbl_Filter_TD_6764_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_7956_input.getInt32(i, 1);
            tbl_Filter_TD_6764_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_6764_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6764_output #Row: " << tbl_Filter_TD_6764_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5368(Table &tbl_SerializeFromObject_TD_6575_input, Table &tbl_Filter_TD_5368_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manager_id#248) AND (i_manager_id#248 = 1)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236, i_manager_id#248)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6575_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_SerializeFromObject_TD_6575_input.getInt32(i, 3);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_6575_input.getInt32(i, 0);
        if (((_i_manager_id248!= 0) && (_i_manager_id248 == 1)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_6575_input.getInt32(i, 0);
            tbl_Filter_TD_5368_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_6575_input.getInt32(i, 1);
            tbl_Filter_TD_5368_output.setInt32(r, 1, _i_brand_id235_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_6575_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5368_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_t);
            r++;
        }
    }
    tbl_Filter_TD_5368_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5368_output #Row: " << tbl_Filter_TD_5368_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5488_key_leftMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_5488_key_leftMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5488_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5488_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_5488_payload_leftMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
struct SW_JOIN_INNER_TD_5488_key_rightMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_5488_key_rightMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5488_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5488_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_5488_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
};
void SW_JOIN_INNER_TD_5488(Table &tbl_Filter_TD_6764_output, Table &tbl_Filter_TD_6217_output, Table &tbl_JOIN_INNER_TD_5488_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(d_date_sk#120, d_year#126)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output Table: ListBuffer(d_year#126, ss_item_sk#1208, ss_ext_sales_price#1221)
    int left_nrow = tbl_Filter_TD_6764_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6217_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5488_key_leftMajor, SW_JOIN_INNER_TD_5488_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6764_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6764_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5488_key_leftMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_6764_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_6764_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5488_payload_leftMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6217_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_6217_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5488_key_leftMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6217_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_6217_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_6217_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5488_output.setInt32(r, 0, _d_year126);
                tbl_JOIN_INNER_TD_5488_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5488_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5488_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5488_key_rightMajor, SW_JOIN_INNER_TD_5488_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6217_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_6217_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5488_key_rightMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6217_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_6217_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_6217_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5488_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6764_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6764_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5488_key_rightMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk120 = tbl_Filter_TD_6764_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_6764_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5488_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5488_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_5488_output.setInt32(r, 0, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5488_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5488_output #Row: " << tbl_JOIN_INNER_TD_5488_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4906_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_4906_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4906_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4906_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_4906_payload_leftMajor {
    int32_t _d_year126;
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_4906_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4906_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4906_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4906_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4906_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    std::string _i_brand236;
};
void SW_JOIN_INNER_TD_4906(Table &tbl_JOIN_INNER_TD_5488_output, Table &tbl_Filter_TD_5368_output, Table &tbl_JOIN_INNER_TD_4906_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(d_year#126, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236)
    // Output Table: ListBuffer(d_year#126, ss_ext_sales_price#1221, i_brand_id#235, i_brand#236)
    int left_nrow = tbl_JOIN_INNER_TD_5488_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5368_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4906_key_leftMajor, SW_JOIN_INNER_TD_4906_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5488_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5488_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4906_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5488_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5488_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5488_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4906_payload_leftMajor payloadA{_d_year126, _ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5368_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5368_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4906_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_5368_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_5368_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_5368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                tbl_JOIN_INNER_TD_4906_output.setInt32(r, 0, _d_year126);
                tbl_JOIN_INNER_TD_4906_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_4906_output.setInt32(r, 2, _i_brand_id235);
                tbl_JOIN_INNER_TD_4906_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_brand236_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4906_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4906_key_rightMajor, SW_JOIN_INNER_TD_4906_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5368_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5368_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4906_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_5368_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_5368_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_5368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            SW_JOIN_INNER_TD_4906_payload_rightMajor payloadA{_i_item_sk228, _i_brand_id235, _i_brand236};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5488_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5488_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4906_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5488_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5488_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5488_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_4906_output.setInt32(r, 2, _i_brand_id235);
                tbl_JOIN_INNER_TD_4906_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_brand236_n);
                tbl_JOIN_INNER_TD_4906_output.setInt32(r, 0, _d_year126);
                tbl_JOIN_INNER_TD_4906_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4906_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4906_output #Row: " << tbl_JOIN_INNER_TD_4906_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3235_key {
    int32_t _d_year126;
    std::string _i_brand236;
    int32_t _i_brand_id235;
    bool operator==(const SW_Aggregate_TD_3235_key& other) const { return (_d_year126 == other._d_year126) && (_i_brand236 == other._i_brand236) && (_i_brand_id235 == other._i_brand_id235); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3235_key> {
    std::size_t operator() (const SW_Aggregate_TD_3235_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year126)) + (hash<string>()(k._i_brand236)) + (hash<int32_t>()(k._i_brand_id235));
    }
};
}
struct SW_Aggregate_TD_3235_payload {
    int32_t _brand_id7919;
    std::string _brand7920;
    int32_t _ext_price7921_sum_0;
};
void SW_Aggregate_TD_3235(Table &tbl_JOIN_INNER_TD_4906_output, Table &tbl_Aggregate_TD_3235_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#126, i_brand#236, i_brand_id#235, i_brand_id#235 AS brand_id#7919, i_brand#236 AS brand#7920, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS ext_price#7921)
    // Input: ListBuffer(d_year#126, ss_ext_sales_price#1221, i_brand_id#235, i_brand#236)
    // Output: ListBuffer(d_year#126, brand_id#7919, brand#7920, ext_price#7921)
    std::unordered_map<SW_Aggregate_TD_3235_key, SW_Aggregate_TD_3235_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4906_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4906_output.getInt32(i, 0);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_4906_output.getInt32(i, 1);
        int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_4906_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4906_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_3235_key k{_d_year126, std::string(_i_brand236.data()), _i_brand_id235};
        int32_t _brand_id7919 = _i_brand_id235;
        std::array<char, TPCDS_READ_MAX + 1> _brand7920 = _i_brand236;
        int64_t _ext_price7921_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_3235_payload p{_brand_id7919, std::string(_brand7920.data()), _ext_price7921_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ext_price7921_sum_0 + _ext_price7921_sum_0;
            p._ext_price7921_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_3235_output.setInt32(r, 0, (it.first)._d_year126);
        // _i_brand236 not required in the output table
        // _i_brand_id235 not required in the output table
        tbl_Aggregate_TD_3235_output.setInt32(r, 1, (it.second)._brand_id7919);
        std::array<char, TPCDS_READ_MAX + 1> _brand7920_n{};
        memcpy(_brand7920_n.data(), (it.second)._brand7920.data(), (it.second)._brand7920.length());
        tbl_Aggregate_TD_3235_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _brand7920_n);
        int32_t _ext_price7921 = (it.second)._ext_price7921_sum_0;
        tbl_Aggregate_TD_3235_output.setInt32(r, 3, _ext_price7921);
        ++r;
    }
    tbl_Aggregate_TD_3235_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3235_output #Row: " << tbl_Aggregate_TD_3235_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2276(Table &tbl_Aggregate_TD_3235_output, Table &tbl_Sort_TD_2276_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(d_year#126 ASC NULLS FIRST, ext_price#7921 DESC NULLS LAST, brand_id#7919 ASC NULLS FIRST)
    // Input: ListBuffer(d_year#126, brand_id#7919, brand#7920, ext_price#7921)
    // Output: ListBuffer(d_year#126, brand_id#7919, brand#7920, ext_price#7921)
    struct SW_Sort_TD_2276Row {
        int32_t _d_year126;
        int32_t _brand_id7919;
        std::string _brand7920;
        int32_t _ext_price7921;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2276Row& a, const SW_Sort_TD_2276Row& b) const { return 
 (a._d_year126 < b._d_year126) || 
 ((a._d_year126 == b._d_year126) && (a._ext_price7921 > b._ext_price7921)) || 
 ((a._d_year126 == b._d_year126) && (a._ext_price7921 == b._ext_price7921) && (a._brand_id7919 < b._brand_id7919)); 
}
    }SW_Sort_TD_2276_order; 

    int nrow1 = tbl_Aggregate_TD_3235_output.getNumRow();
    std::vector<SW_Sort_TD_2276Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Aggregate_TD_3235_output.getInt32(i, 0);
        int32_t _brand_id7919 = tbl_Aggregate_TD_3235_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _brand7920 = tbl_Aggregate_TD_3235_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int32_t _ext_price7921 = tbl_Aggregate_TD_3235_output.getInt32(i, 3);
        SW_Sort_TD_2276Row t = {_d_year126,_brand_id7919,std::string(_brand7920.data()),_ext_price7921};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2276_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2276_output.setInt32(r, 0, it._d_year126);
        tbl_Sort_TD_2276_output.setInt32(r, 1, it._brand_id7919);
        std::array<char, TPCDS_READ_MAX + 1> _brand7920{};
        memcpy(_brand7920.data(), (it._brand7920).data(), (it._brand7920).length());
        tbl_Sort_TD_2276_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _brand7920);
        tbl_Sort_TD_2276_output.setInt32(r, 3, it._ext_price7921);
        ++r;
    }
    tbl_Sort_TD_2276_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2276_output #Row: " << tbl_Sort_TD_2276_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1321(Table &tbl_Sort_TD_2276_output, Table &tbl_LocalLimit_TD_1321_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(d_year#126, brand_id#7919, brand#7920, ext_price#7921)
    // Output: ListBuffer(d_year#126, brand_id#7919, brand#7920, ext_price#7921)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1321_output.setInt32(r, 0, tbl_Sort_TD_2276_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1321_output.setInt32(r, 1, tbl_Sort_TD_2276_output.getInt32(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _brand7920_n = tbl_Sort_TD_2276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1321_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _brand7920_n);
        tbl_LocalLimit_TD_1321_output.setInt32(r, 3, tbl_Sort_TD_2276_output.getInt32(i, 3));
        r++;
    }
    tbl_LocalLimit_TD_1321_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1321_output #Row: " << tbl_LocalLimit_TD_1321_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0768(Table &tbl_LocalLimit_TD_1321_output, Table &tbl_GlobalLimit_TD_0768_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(d_year#126, brand_id#7919, brand#7920, ext_price#7921)
    // Output: ListBuffer(d_year#126, brand_id#7919, brand#7920, ext_price#7921)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0768_output.setInt32(r, 0, tbl_LocalLimit_TD_1321_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0768_output.setInt32(r, 1, tbl_LocalLimit_TD_1321_output.getInt32(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _brand7920_n = tbl_LocalLimit_TD_1321_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0768_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _brand7920_n);
        tbl_GlobalLimit_TD_0768_output.setInt32(r, 3, tbl_LocalLimit_TD_1321_output.getInt32(i, 3));
        r++;
    }
    tbl_GlobalLimit_TD_0768_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0768_output #Row: " << tbl_GlobalLimit_TD_0768_output.getNumRow() << std::endl;
}

