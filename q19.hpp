#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9382(Table &tbl_SerializeFromObject_TD_10122_input, Table &tbl_Filter_TD_9382_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND ((isnotnull(ss_item_sk#1208) AND isnotnull(ss_customer_sk#1209)) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10122_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 1);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 2);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 3);
        if ((_ss_sold_date_sk1206!= 0) && (((_ss_item_sk1208!= 0) && (_ss_customer_sk1209!= 0)) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 0);
            tbl_Filter_TD_9382_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 1);
            tbl_Filter_TD_9382_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 2);
            tbl_Filter_TD_9382_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 3);
            tbl_Filter_TD_9382_output.setInt32(r, 3, _ss_store_sk1213_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_10122_input.getInt32(i, 4);
            tbl_Filter_TD_9382_output.setInt32(r, 4, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_9382_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9382_output #Row: " << tbl_Filter_TD_9382_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9644(Table &tbl_SerializeFromObject_TD_10648_input, Table &tbl_Filter_TD_9644_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 11) AND (d_year#126 = 1998))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10648_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_10648_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10648_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10648_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 11) && (_d_year126 == 1998))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10648_input.getInt32(i, 0);
            tbl_Filter_TD_9644_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9644_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9644_output #Row: " << tbl_Filter_TD_9644_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8868(Table &tbl_SerializeFromObject_TD_969_input, Table &tbl_Filter_TD_8868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manager_id#248) AND (i_manager_id#248 = 8)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242, i_manager_id#248)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_969_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_SerializeFromObject_TD_969_input.getInt32(i, 5);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_969_input.getInt32(i, 0);
        if (((_i_manager_id248!= 0) && (_i_manager_id248 == 8)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_969_input.getInt32(i, 0);
            tbl_Filter_TD_8868_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_969_input.getInt32(i, 1);
            tbl_Filter_TD_8868_output.setInt32(r, 1, _i_brand_id235_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_969_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_t);
            int32_t _i_manufact_id241_t = tbl_SerializeFromObject_TD_969_input.getInt32(i, 3);
            tbl_Filter_TD_8868_output.setInt32(r, 3, _i_manufact_id241_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_t = tbl_SerializeFromObject_TD_969_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_8868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_manufact242_t);
            r++;
        }
    }
    tbl_Filter_TD_8868_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8868_output #Row: " << tbl_Filter_TD_8868_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8258_key_leftMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8258_key_leftMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8258_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8258_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8258_payload_leftMajor {
    int32_t _d_date_sk120;
};
struct SW_JOIN_INNER_TD_8258_key_rightMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8258_key_rightMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8258_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8258_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8258_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
};
void SW_JOIN_INNER_TD_8258(Table &tbl_Filter_TD_9644_output, Table &tbl_Filter_TD_9382_output, Table &tbl_JOIN_INNER_TD_8258_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(d_date_sk#120)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ext_sales_price#1221)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ext_sales_price#1221)
    int left_nrow = tbl_Filter_TD_9644_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9382_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8258_key_leftMajor, SW_JOIN_INNER_TD_8258_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9644_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9644_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8258_key_leftMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9644_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8258_payload_leftMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9382_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9382_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8258_key_leftMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9382_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9382_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_9382_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_9382_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9382_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 3, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8258_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8258_key_rightMajor, SW_JOIN_INNER_TD_8258_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9382_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9382_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8258_key_rightMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9382_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9382_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_9382_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_9382_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9382_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_8258_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9644_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9644_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8258_key_rightMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk120 = tbl_Filter_TD_9644_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 3, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8258_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8258_output #Row: " << tbl_JOIN_INNER_TD_8258_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7566(Table &tbl_SerializeFromObject_TD_8923_input, Table &tbl_Filter_TD_7566_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8923_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_8923_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_8923_input.getInt32(i, 1);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_8923_input.getInt32(i, 0);
            tbl_Filter_TD_7566_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_8923_input.getInt32(i, 1);
            tbl_Filter_TD_7566_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_7566_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7566_output #Row: " << tbl_Filter_TD_7566_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7558_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_7558_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7558_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7558_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_7558_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7558_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_7558_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7558_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7558_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_7558_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    std::string _i_brand236;
    int32_t _i_manufact_id241;
    std::string _i_manufact242;
};
void SW_JOIN_INNER_TD_7558(Table &tbl_JOIN_INNER_TD_8258_output, Table &tbl_Filter_TD_8868_output, Table &tbl_JOIN_INNER_TD_7558_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_store_sk#1213, ss_ext_sales_price#1221, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242)
    int left_nrow = tbl_JOIN_INNER_TD_8258_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8868_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7558_key_leftMajor, SW_JOIN_INNER_TD_7558_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8258_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7558_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7558_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8868_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8868_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7558_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_8868_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_8868_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_8868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                int32_t _i_manufact_id241 = tbl_Filter_TD_8868_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_Filter_TD_8868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_manufact242 = std::string(_i_manufact242_n.data());
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 3, _i_brand_id235);
                tbl_JOIN_INNER_TD_7558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_brand236_n);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 5, _i_manufact_id241);
                tbl_JOIN_INNER_TD_7558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_manufact242_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7558_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7558_key_rightMajor, SW_JOIN_INNER_TD_7558_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8868_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8868_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7558_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_8868_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_8868_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_8868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            int32_t _i_manufact_id241 = tbl_Filter_TD_8868_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_Filter_TD_8868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_manufact242 = std::string(_i_manufact242_n.data());
            SW_JOIN_INNER_TD_7558_payload_rightMajor payloadA{_i_item_sk228, _i_brand_id235, _i_brand236, _i_manufact_id241, _i_manufact242};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8258_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7558_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                std::string _i_manufact242 = (it->second)._i_manufact242;
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n{};
                memcpy(_i_manufact242_n.data(), (_i_manufact242).data(), (_i_manufact242).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 3, _i_brand_id235);
                tbl_JOIN_INNER_TD_7558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_brand236_n);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 5, _i_manufact_id241);
                tbl_JOIN_INNER_TD_7558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _i_manufact242_n);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7558_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7558_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7558_output #Row: " << tbl_JOIN_INNER_TD_7558_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6252(Table &tbl_SerializeFromObject_TD_7286_input, Table &tbl_Filter_TD_6252_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_zip#63)))
    // Input: ListBuffer(ca_address_sk#54, ca_zip#63)
    // Output: ListBuffer(ca_address_sk#54, ca_zip#63)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7286_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_7286_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_SerializeFromObject_TD_7286_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && （std::string(_isnotnullca_zip63.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_7286_input.getInt32(i, 0);
            tbl_Filter_TD_6252_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_t = tbl_SerializeFromObject_TD_7286_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6252_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_zip63_t);
            r++;
        }
    }
    tbl_Filter_TD_6252_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6252_output #Row: " << tbl_Filter_TD_6252_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6753_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_6753_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6753_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6753_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_6753_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _i_brand_id235;
    std::string _i_brand236;
    int32_t _i_manufact_id241;
    std::string _i_manufact242;
};
struct SW_JOIN_INNER_TD_6753_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_6753_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6753_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6753_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_6753_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_6753(Table &tbl_JOIN_INNER_TD_7558_output, Table &tbl_Filter_TD_7566_output, Table &tbl_JOIN_INNER_TD_6753_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_store_sk#1213, ss_ext_sales_price#1221, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242, c_current_addr_sk#4)
    int left_nrow = tbl_JOIN_INNER_TD_7558_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7566_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6753_key_leftMajor, SW_JOIN_INNER_TD_6753_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7558_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6753_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 2);
            int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_7558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_JOIN_INNER_TD_7558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _i_manufact242 = std::string(_i_manufact242_n.data());
            SW_JOIN_INNER_TD_6753_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_store_sk1213, _ss_ext_sales_price1221, _i_brand_id235, _i_brand236, _i_manufact_id241, _i_manufact242};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7566_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7566_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6753_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                std::string _i_manufact242 = (it->second)._i_manufact242;
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n{};
                memcpy(_i_manufact242_n.data(), (_i_manufact242).data(), (_i_manufact242).length());
                int32_t _c_customer_sk0 = tbl_Filter_TD_7566_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_7566_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 2, _i_brand_id235);
                tbl_JOIN_INNER_TD_6753_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_brand236_n);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 4, _i_manufact_id241);
                tbl_JOIN_INNER_TD_6753_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_manufact242_n);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 6, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6753_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6753_key_rightMajor, SW_JOIN_INNER_TD_6753_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7566_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7566_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6753_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_7566_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_7566_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6753_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7558_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6753_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 2);
                int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_7558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_7558_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_JOIN_INNER_TD_7558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _i_manufact242 = std::string(_i_manufact242_n.data());
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 6, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 2, _i_brand_id235);
                tbl_JOIN_INNER_TD_6753_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_brand236_n);
                tbl_JOIN_INNER_TD_6753_output.setInt32(r, 4, _i_manufact_id241);
                tbl_JOIN_INNER_TD_6753_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_manufact242_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6753_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6753_output #Row: " << tbl_JOIN_INNER_TD_6753_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5654(Table &tbl_SerializeFromObject_TD_6398_input, Table &tbl_Filter_TD_5654_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_zip#403) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_zip#403)
    // Output: ListBuffer(s_store_sk#378, s_zip#403)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6398_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_zip403 = tbl_SerializeFromObject_TD_6398_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_6398_input.getInt32(i, 0);
        if (（std::string(_isnotnulls_zip403.data()) != "NULL") && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_6398_input.getInt32(i, 0);
            tbl_Filter_TD_5654_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_t = tbl_SerializeFromObject_TD_6398_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5654_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_zip403_t);
            r++;
        }
    }
    tbl_Filter_TD_5654_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5654_output #Row: " << tbl_Filter_TD_5654_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5641_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_5641_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5641_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5641_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_5641_payload_leftMajor {
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _i_brand_id235;
    std::string _i_brand236;
    int32_t _i_manufact_id241;
    std::string _i_manufact242;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_5641_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_5641_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5641_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5641_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_5641_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_zip63;
};
void SW_JOIN_INNER_TD_5641(Table &tbl_JOIN_INNER_TD_6753_output, Table &tbl_Filter_TD_6252_output, Table &tbl_JOIN_INNER_TD_5641_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242, c_current_addr_sk#4)
    // Right Table: ListBuffer(ca_address_sk#54, ca_zip#63)
    // Output Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242, ca_zip#63)
    int left_nrow = tbl_JOIN_INNER_TD_6753_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6252_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5641_key_leftMajor, SW_JOIN_INNER_TD_5641_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6753_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_5641_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 1);
            int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_6753_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_JOIN_INNER_TD_6753_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_manufact242 = std::string(_i_manufact242_n.data());
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_5641_payload_leftMajor payloadA{_ss_store_sk1213, _ss_ext_sales_price1221, _i_brand_id235, _i_brand236, _i_manufact_id241, _i_manufact242, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6252_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6252_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5641_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                std::string _i_manufact242 = (it->second)._i_manufact242;
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n{};
                memcpy(_i_manufact242_n.data(), (_i_manufact242).data(), (_i_manufact242).length());
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_6252_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_6252_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                tbl_JOIN_INNER_TD_5641_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_5641_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_5641_output.setInt32(r, 2, _i_brand_id235);
                tbl_JOIN_INNER_TD_5641_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_brand236_n);
                tbl_JOIN_INNER_TD_5641_output.setInt32(r, 4, _i_manufact_id241);
                tbl_JOIN_INNER_TD_5641_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_manufact242_n);
                tbl_JOIN_INNER_TD_5641_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_zip63_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5641_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5641_key_rightMajor, SW_JOIN_INNER_TD_5641_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6252_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6252_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5641_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_6252_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_6252_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            SW_JOIN_INNER_TD_5641_payload_rightMajor payloadA{_ca_address_sk54, _ca_zip63};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6753_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 6);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5641_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 1);
                int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_6753_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_JOIN_INNER_TD_6753_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_manufact242 = std::string(_i_manufact242_n.data());
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_6753_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_5641_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_zip63_n);
                tbl_JOIN_INNER_TD_5641_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_5641_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_5641_output.setInt32(r, 2, _i_brand_id235);
                tbl_JOIN_INNER_TD_5641_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_brand236_n);
                tbl_JOIN_INNER_TD_5641_output.setInt32(r, 4, _i_manufact_id241);
                tbl_JOIN_INNER_TD_5641_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_manufact242_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5641_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5641_output #Row: " << tbl_JOIN_INNER_TD_5641_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4598_key_leftMajor {
    std::string substr_s_zip_1_5;
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_4598_key_leftMajor& other) const {
        return (
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4598_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4598_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_4598_payload_leftMajor {
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _i_brand_id235;
    std::string _i_brand236;
    int32_t _i_manufact_id241;
    std::string _i_manufact242;
    std::string _ca_zip63;
};
struct SW_JOIN_INNER_TD_4598_key_rightMajor {
    std::string substr_s_zip_1_5;
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_4598_key_rightMajor& other) const {
        return (
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4598_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4598_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_4598_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_zip403;
};
void SW_JOIN_INNER_TD_4598(Table &tbl_JOIN_INNER_TD_5641_output, Table &tbl_Filter_TD_5654_output, Table &tbl_JOIN_INNER_TD_4598_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((NOT (substr(ca_zip#63, 1, 5) = substr(s_zip#403, 1, 5)) AND (ss_store_sk#1213 = s_store_sk#378)))
    // Left Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242, ca_zip#63)
    // Right Table: ListBuffer(s_store_sk#378, s_zip#403)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242)
    int left_nrow = tbl_JOIN_INNER_TD_5641_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5654_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4598_key_leftMajor, SW_JOIN_INNER_TD_4598_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5641_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_s_zip_1_5_k_n = tbl_JOIN_INNER_TD_5641_output.getcharN<char, TPCDS_READ_MAX + 1>(i, -1);
            std::string substr_s_zip_1_5_k = std::string(substr_s_zip_1_5_k_n.data());
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4598_key_leftMajor keyA{substr_s_zip_1_5_k, _ss_store_sk1213_k};
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 1);
            int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5641_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_JOIN_INNER_TD_5641_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_manufact242 = std::string(_i_manufact242_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_5641_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            SW_JOIN_INNER_TD_4598_payload_leftMajor payloadA{_ss_store_sk1213, _ss_ext_sales_price1221, _i_brand_id235, _i_brand236, _i_manufact_id241, _i_manufact242, _ca_zip63};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5654_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_ca_zip_1_5_k_n = tbl_Filter_TD_5654_output.getcharN<char, TPCDS_READ_MAX + 1>(i, -1);
            std::string substr_ca_zip_1_5_k = std::string(substr_ca_zip_1_5_k_n.data());
            int32_t _s_store_sk378_k = tbl_Filter_TD_5654_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4598_key_leftMajor{substr_ca_zip_1_5_k, _s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                std::string _i_manufact242 = (it->second)._i_manufact242;
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n{};
                memcpy(_i_manufact242_n.data(), (_i_manufact242).data(), (_i_manufact242).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                int32_t _s_store_sk378 = tbl_Filter_TD_5654_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_5654_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_4598_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_4598_output.setInt32(r, 1, _i_brand_id235);
                tbl_JOIN_INNER_TD_4598_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                tbl_JOIN_INNER_TD_4598_output.setInt32(r, 3, _i_manufact_id241);
                tbl_JOIN_INNER_TD_4598_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_manufact242_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4598_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4598_key_rightMajor, SW_JOIN_INNER_TD_4598_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5654_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_s_zip_1_5_k_n = tbl_Filter_TD_5654_output.getcharN<char, TPCDS_READ_MAX + 1>(i, -1);
            std::string substr_s_zip_1_5_k = std::string(substr_s_zip_1_5_k_n.data());
            int32_t _s_store_sk378_k = tbl_Filter_TD_5654_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4598_key_rightMajor keyA{substr_s_zip_1_5_k, _s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_5654_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_5654_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_4598_payload_rightMajor payloadA{_s_store_sk378, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5641_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_ca_zip_1_5_k_n = tbl_JOIN_INNER_TD_5641_output.getcharN<char, TPCDS_READ_MAX + 1>(i, -1);
            std::string substr_ca_zip_1_5_k = std::string(substr_ca_zip_1_5_k_n.data());
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4598_key_rightMajor{substr_ca_zip_1_5_k, _ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 1);
                int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5641_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_5641_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_JOIN_INNER_TD_5641_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_manufact242 = std::string(_i_manufact242_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_5641_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                tbl_JOIN_INNER_TD_4598_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_4598_output.setInt32(r, 1, _i_brand_id235);
                tbl_JOIN_INNER_TD_4598_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                tbl_JOIN_INNER_TD_4598_output.setInt32(r, 3, _i_manufact_id241);
                tbl_JOIN_INNER_TD_4598_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_manufact242_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4598_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4598_output #Row: " << tbl_JOIN_INNER_TD_4598_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3538_key {
    std::string _i_brand236;
    int32_t _i_brand_id235;
    int32_t _i_manufact_id241;
    std::string _i_manufact242;
    bool operator==(const SW_Aggregate_TD_3538_key& other) const { return (_i_brand236 == other._i_brand236) && (_i_brand_id235 == other._i_brand_id235) && (_i_manufact_id241 == other._i_manufact_id241) && (_i_manufact242 == other._i_manufact242); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3538_key> {
    std::size_t operator() (const SW_Aggregate_TD_3538_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_brand236)) + (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_manufact_id241)) + (hash<string>()(k._i_manufact242));
    }
};
}
struct SW_Aggregate_TD_3538_payload {
    int32_t _brand_id15007;
    std::string _brand15008;
    int32_t _ext_price15009_sum_0;
};
void SW_Aggregate_TD_3538(Table &tbl_JOIN_INNER_TD_4598_output, Table &tbl_Aggregate_TD_3538_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand#236, i_brand_id#235, i_manufact_id#241, i_manufact#242, i_brand_id#235 AS brand_id#15007, i_brand#236 AS brand#15008, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS ext_price#15009)
    // Input: ListBuffer(ss_ext_sales_price#1221, i_brand_id#235, i_brand#236, i_manufact_id#241, i_manufact#242)
    // Output: ListBuffer(brand_id#15007, brand#15008, i_manufact_id#241, i_manufact#242, ext_price#15009)
    std::unordered_map<SW_Aggregate_TD_3538_key, SW_Aggregate_TD_3538_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4598_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_4598_output.getInt32(i, 0);
        int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_4598_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4598_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_4598_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact242 = tbl_JOIN_INNER_TD_4598_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_3538_key k{std::string(_i_brand236.data()), _i_brand_id235, _i_manufact_id241, std::string(_i_manufact242.data())};
        int32_t _brand_id15007 = _i_brand_id235;
        std::array<char, TPCDS_READ_MAX + 1> _brand15008 = _i_brand236;
        int64_t _ext_price15009_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_3538_payload p{_brand_id15007, std::string(_brand15008.data()), _ext_price15009_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ext_price15009_sum_0 + _ext_price15009_sum_0;
            p._ext_price15009_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_brand236 not required in the output table
        // _i_brand_id235 not required in the output table
        tbl_Aggregate_TD_3538_output.setInt32(r, 2, (it.first)._i_manufact_id241);
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact242{};
        memcpy(_i_manufact242.data(), ((it.first)._i_manufact242).data(), ((it.first)._i_manufact242).length());
        tbl_Aggregate_TD_3538_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_manufact242);
        tbl_Aggregate_TD_3538_output.setInt32(r, 0, (it.second)._brand_id15007);
        std::array<char, TPCDS_READ_MAX + 1> _brand15008_n{};
        memcpy(_brand15008_n.data(), (it.second)._brand15008.data(), (it.second)._brand15008.length());
        tbl_Aggregate_TD_3538_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand15008_n);
        int32_t _ext_price15009 = (it.second)._ext_price15009_sum_0;
        tbl_Aggregate_TD_3538_output.setInt32(r, 4, _ext_price15009);
        ++r;
    }
    tbl_Aggregate_TD_3538_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3538_output #Row: " << tbl_Aggregate_TD_3538_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2123(Table &tbl_Aggregate_TD_3538_output, Table &tbl_Sort_TD_2123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ext_price#15009 DESC NULLS LAST, brand#15008 ASC NULLS FIRST, brand_id#15007 ASC NULLS FIRST, i_manufact_id#241 ASC NULLS FIRST, i_manufact#242 ASC NULLS FIRST)
    // Input: ListBuffer(brand_id#15007, brand#15008, i_manufact_id#241, i_manufact#242, ext_price#15009)
    // Output: ListBuffer(brand_id#15007, brand#15008, i_manufact_id#241, i_manufact#242, ext_price#15009)
    struct SW_Sort_TD_2123Row {
        int32_t _brand_id15007;
        std::string _brand15008;
        int32_t _i_manufact_id241;
        std::string _i_manufact242;
        int32_t _ext_price15009;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2123Row& a, const SW_Sort_TD_2123Row& b) const { return 
 (a._ext_price15009 > b._ext_price15009) || 
 ((a._ext_price15009 == b._ext_price15009) && (a._brand15008 < b._brand15008)) || 
 ((a._ext_price15009 == b._ext_price15009) && (a._brand15008 == b._brand15008) && (a._brand_id15007 < b._brand_id15007)) || 
 ((a._ext_price15009 == b._ext_price15009) && (a._brand15008 == b._brand15008) && (a._brand_id15007 == b._brand_id15007) && (a._i_manufact_id241 < b._i_manufact_id241)) || 
 ((a._ext_price15009 == b._ext_price15009) && (a._brand15008 == b._brand15008) && (a._brand_id15007 == b._brand_id15007) && (a._i_manufact_id241 == b._i_manufact_id241) && (a._i_manufact242 < b._i_manufact242)); 
}
    }SW_Sort_TD_2123_order; 

    int nrow1 = tbl_Aggregate_TD_3538_output.getNumRow();
    std::vector<SW_Sort_TD_2123Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id15007 = tbl_Aggregate_TD_3538_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _brand15008 = tbl_Aggregate_TD_3538_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_3538_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact242 = tbl_Aggregate_TD_3538_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _ext_price15009 = tbl_Aggregate_TD_3538_output.getInt32(i, 4);
        SW_Sort_TD_2123Row t = {_brand_id15007,std::string(_brand15008.data()),_i_manufact_id241,std::string(_i_manufact242.data()),_ext_price15009};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2123_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2123_output.setInt32(r, 0, it._brand_id15007);
        std::array<char, TPCDS_READ_MAX + 1> _brand15008{};
        memcpy(_brand15008.data(), (it._brand15008).data(), (it._brand15008).length());
        tbl_Sort_TD_2123_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _brand15008);
        tbl_Sort_TD_2123_output.setInt32(r, 2, it._i_manufact_id241);
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact242{};
        memcpy(_i_manufact242.data(), (it._i_manufact242).data(), (it._i_manufact242).length());
        tbl_Sort_TD_2123_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _i_manufact242);
        tbl_Sort_TD_2123_output.setInt32(r, 4, it._ext_price15009);
        ++r;
    }
    tbl_Sort_TD_2123_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2123_output #Row: " << tbl_Sort_TD_2123_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1756(Table &tbl_Sort_TD_2123_output, Table &tbl_LocalLimit_TD_1756_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(brand_id#15007, brand#15008, i_manufact_id#241, i_manufact#242, ext_price#15009)
    // Output: ListBuffer(brand_id#15007, brand#15008, i_manufact_id#241, i_manufact#242, ext_price#15009)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1756_output.setInt32(r, 0, tbl_Sort_TD_2123_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _brand15008_n = tbl_Sort_TD_2123_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1756_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand15008_n);
        tbl_LocalLimit_TD_1756_output.setInt32(r, 2, tbl_Sort_TD_2123_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_Sort_TD_2123_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1756_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_manufact242_n);
        tbl_LocalLimit_TD_1756_output.setInt32(r, 4, tbl_Sort_TD_2123_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1756_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1756_output #Row: " << tbl_LocalLimit_TD_1756_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0781(Table &tbl_LocalLimit_TD_1756_output, Table &tbl_GlobalLimit_TD_0781_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(brand_id#15007, brand#15008, i_manufact_id#241, i_manufact#242, ext_price#15009)
    // Output: ListBuffer(brand_id#15007, brand#15008, i_manufact_id#241, i_manufact#242, ext_price#15009)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0781_output.setInt32(r, 0, tbl_LocalLimit_TD_1756_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _brand15008_n = tbl_LocalLimit_TD_1756_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0781_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand15008_n);
        tbl_GlobalLimit_TD_0781_output.setInt32(r, 2, tbl_LocalLimit_TD_1756_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_LocalLimit_TD_1756_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0781_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_manufact242_n);
        tbl_GlobalLimit_TD_0781_output.setInt32(r, 4, tbl_LocalLimit_TD_1756_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0781_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0781_output #Row: " << tbl_GlobalLimit_TD_0781_output.getNumRow() << std::endl;
}

