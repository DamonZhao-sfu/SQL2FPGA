#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9690(Table &tbl_SerializeFromObject_TD_10421_input, Table &tbl_Filter_TD_9690_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10421_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10421_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10421_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10421_input.getInt32(i, 2);
        if ((_ss_item_sk1208!= 0) && ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10421_input.getInt32(i, 0);
            tbl_Filter_TD_9690_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10421_input.getInt32(i, 1);
            tbl_Filter_TD_9690_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10421_input.getInt32(i, 2);
            tbl_Filter_TD_9690_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_10421_input.getInt32(i, 3);
            tbl_Filter_TD_9690_output.setInt32(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_9690_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9690_output #Row: " << tbl_Filter_TD_9690_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9895(Table &tbl_SerializeFromObject_TD_10953_input, Table &tbl_Filter_TD_9895_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((i_category#240 IN (Books,Children,Electronics) AND i_class#238 IN (personal,portable,reference,self-help)) AND i_brand#236 IN (scholaramalgamalg #14,scholaramalgamalg #7,exportiunivamalg #9,scholaramalgamalg #9)) OR ((i_category#240 IN (Women,Music,Men) AND i_class#238 IN (accessories,classical,fragrances,pants)) AND i_brand#236 IN (amalgimporto #1,edu packscholar #1,exportiimporto #1,importoamalg #1))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_manager_id#248, i_category#240, i_class#238, i_brand#236)
    // Output: ListBuffer(i_item_sk#228, i_manager_id#248)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10953_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_10953_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_SerializeFromObject_TD_10953_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_10953_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10953_input.getInt32(i, 0);
        auto reuse_col_str_823 = std::string(_i_category240.data());
        auto reuse_col_str_894 = std::string(_i_class238.data());
        auto reuse_col_str_875 = std::string(_i_brand236.data());
        auto reuse_col_str_758 = std::string(_i_category240.data());
        auto reuse_col_str_290 = std::string(_i_class238.data());
        auto reuse_col_str_735 = std::string(_i_brand236.data());
        if ((((((reuse_col_str_823 == "Books") || (reuse_col_str_823 == "Children") || (reuse_col_str_823 == "Electronics") || (0)) && ((reuse_col_str_894 == "personal") || (reuse_col_str_894 == "portable") || (reuse_col_str_894 == "reference") || (reuse_col_str_894 == "self-help") || (0))) && ((reuse_col_str_875 == "scholaramalgamalg #14") || (reuse_col_str_875 == "scholaramalgamalg #7") || (reuse_col_str_875 == "exportiunivamalg #9") || (reuse_col_str_875 == "scholaramalgamalg #9") || (0))) || ((((reuse_col_str_758 == "Women") || (reuse_col_str_758 == "Music") || (reuse_col_str_758 == "Men") || (0)) && ((reuse_col_str_290 == "accessories") || (reuse_col_str_290 == "classical") || (reuse_col_str_290 == "fragrances") || (reuse_col_str_290 == "pants") || (0))) && ((reuse_col_str_735 == "amalgimporto #1") || (reuse_col_str_735 == "edu packscholar #1") || (reuse_col_str_735 == "exportiimporto #1") || (reuse_col_str_735 == "importoamalg #1") || (0)))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10953_input.getInt32(i, 0);
            tbl_Filter_TD_9895_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_manager_id248_t = tbl_SerializeFromObject_TD_10953_input.getInt32(i, 1);
            tbl_Filter_TD_9895_output.setInt32(r, 1, _i_manager_id248_t);
            r++;
        }
    }
    tbl_Filter_TD_9895_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9895_output #Row: " << tbl_Filter_TD_9895_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8964(Table &tbl_SerializeFromObject_TD_9123_input, Table &tbl_Filter_TD_8964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_month_seq#123 INSET 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211 AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9123_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_9123_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9123_input.getInt32(i, 0);
        std::vector<std::string>vec_236 = {
        1210,1208,1209,1204,1201,1203,1207,1200,1211,1206,1202,1205
        };
        auto reuse_col_str_967 = _d_month_seq123;
        bool elementExists = std::find(vec_236.begin(), vec_236.end(),reuse_col_str_967) != vec_236.end();
        if (((elementExists) || (0)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9123_input.getInt32(i, 0);
            tbl_Filter_TD_8964_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_9123_input.getInt32(i, 1);
            tbl_Filter_TD_8964_output.setInt32(r, 1, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_8964_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8964_output #Row: " << tbl_Filter_TD_8964_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8601_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_8601_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8601_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8601_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_8601_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_manager_id248;
};
struct SW_JOIN_INNER_TD_8601_key_rightMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_8601_key_rightMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8601_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8601_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_8601_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
void SW_JOIN_INNER_TD_8601(Table &tbl_Filter_TD_9895_output, Table &tbl_Filter_TD_9690_output, Table &tbl_JOIN_INNER_TD_8601_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_manager_id#248)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output Table: ListBuffer(i_manager_id#248, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    int left_nrow = tbl_Filter_TD_9895_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9690_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8601_key_leftMajor, SW_JOIN_INNER_TD_8601_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9895_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9895_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8601_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_9895_output.getInt32(i, 0);
            int32_t _i_manager_id248 = tbl_Filter_TD_9895_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8601_payload_leftMajor payloadA{_i_item_sk228, _i_manager_id248};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9690_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_9690_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8601_key_leftMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9690_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9690_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_9690_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_9690_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8601_output.setInt32(r, 0, _i_manager_id248);
                tbl_JOIN_INNER_TD_8601_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8601_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8601_output.setInt32(r, 3, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8601_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8601_key_rightMajor, SW_JOIN_INNER_TD_8601_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9690_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_9690_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8601_key_rightMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9690_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9690_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_9690_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_9690_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8601_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9895_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9895_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8601_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _i_item_sk228 = tbl_Filter_TD_9895_output.getInt32(i, 0);
                int32_t _i_manager_id248 = tbl_Filter_TD_9895_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8601_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8601_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8601_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_8601_output.setInt32(r, 0, _i_manager_id248);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8601_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8601_output #Row: " << tbl_JOIN_INNER_TD_8601_output.getNumRow() << std::endl;
}

void SW_Filter_TD_722(Table &tbl_SerializeFromObject_TD_8820_input, Table &tbl_Filter_TD_722_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8820_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_8820_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_8820_input.getInt32(i, 0);
            tbl_Filter_TD_722_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_722_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_722_output #Row: " << tbl_Filter_TD_722_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7604_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_7604_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7604_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7604_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_7604_payload_leftMajor {
    int32_t _i_manager_id248;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_7604_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7604_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7604_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7604_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7604_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_7604(Table &tbl_JOIN_INNER_TD_8601_output, Table &tbl_Filter_TD_8964_output, Table &tbl_JOIN_INNER_TD_7604_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(i_manager_id#248, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_moy#128)
    // Output Table: ListBuffer(i_manager_id#248, ss_store_sk#1213, ss_sales_price#1219, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_8601_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8964_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7604_key_leftMajor, SW_JOIN_INNER_TD_7604_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8601_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7604_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 0);
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7604_payload_leftMajor payloadA{_i_manager_id248, _ss_sold_date_sk1206, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8964_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8964_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7604_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_8964_output.getInt32(i, 0);
                int32_t _d_moy128 = tbl_Filter_TD_8964_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 0, _i_manager_id248);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 3, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7604_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7604_key_rightMajor, SW_JOIN_INNER_TD_7604_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8964_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8964_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7604_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_8964_output.getInt32(i, 0);
            int32_t _d_moy128 = tbl_Filter_TD_8964_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7604_payload_rightMajor payloadA{_d_date_sk120, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8601_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7604_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 0);
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8601_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 3, _d_moy128);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 0, _i_manager_id248);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7604_output.setInt32(r, 2, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7604_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7604_output #Row: " << tbl_JOIN_INNER_TD_7604_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6760_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_6760_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6760_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6760_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_6760_payload_leftMajor {
    int32_t _i_manager_id248;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_6760_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_6760_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6760_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6760_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_6760_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_6760(Table &tbl_JOIN_INNER_TD_7604_output, Table &tbl_Filter_TD_722_output, Table &tbl_JOIN_INNER_TD_6760_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(i_manager_id#248, ss_store_sk#1213, ss_sales_price#1219, d_moy#128)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(i_manager_id#248, ss_sales_price#1219, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_7604_output.getNumRow();
    int right_nrow = tbl_Filter_TD_722_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6760_key_leftMajor, SW_JOIN_INNER_TD_6760_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7604_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6760_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 1);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 2);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6760_payload_leftMajor payloadA{_i_manager_id248, _ss_store_sk1213, _ss_sales_price1219, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_722_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_722_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6760_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_manager_id248 = (it->second)._i_manager_id248;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _s_store_sk378 = tbl_Filter_TD_722_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6760_output.setInt32(r, 0, _i_manager_id248);
                tbl_JOIN_INNER_TD_6760_output.setInt32(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6760_output.setInt32(r, 2, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6760_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6760_key_rightMajor, SW_JOIN_INNER_TD_6760_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_722_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_722_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6760_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_722_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6760_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7604_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6760_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 1);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 2);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_7604_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6760_output.setInt32(r, 0, _i_manager_id248);
                tbl_JOIN_INNER_TD_6760_output.setInt32(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6760_output.setInt32(r, 2, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6760_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6760_output #Row: " << tbl_JOIN_INNER_TD_6760_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_528_key {
    int32_t _i_manager_id248;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_528_key& other) const { return (_i_manager_id248 == other._i_manager_id248) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_528_key> {
    std::size_t operator() (const SW_Aggregate_TD_528_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_manager_id248)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_528_payload {
    int32_t _sum_sales4685_sum_0;
    int32_t __w04690_sum_1;
};
void SW_Aggregate_TD_528(Table &tbl_JOIN_INNER_TD_6760_output, Table &tbl_Aggregate_TD_528_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_manager_id#248, d_moy#128, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS sum_sales#4685, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS _w0#4690)
    // Input: ListBuffer(i_manager_id#248, ss_sales_price#1219, d_moy#128)
    // Output: ListBuffer(i_manager_id#248, sum_sales#4685, _w0#4690)
    std::unordered_map<SW_Aggregate_TD_528_key, SW_Aggregate_TD_528_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6760_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_JOIN_INNER_TD_6760_output.getInt32(i, 0);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6760_output.getInt32(i, 1);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_6760_output.getInt32(i, 2);
        SW_Aggregate_TD_528_key k{_i_manager_id248, _d_moy128};
        int64_t _sum_sales4685_sum_0 = _ss_sales_price1219;
        int64_t __w04690_sum_1 = _ss_sales_price1219;
        SW_Aggregate_TD_528_payload p{_sum_sales4685_sum_0, __w04690_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales4685_sum_0 + _sum_sales4685_sum_0;
            p._sum_sales4685_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w04690_sum_1 + __w04690_sum_1;
            p.__w04690_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_528_output.setInt32(r, 0, (it.first)._i_manager_id248);
        // _d_moy128 not required in the output table
        int32_t _sum_sales4685 = (it.second)._sum_sales4685_sum_0;
        tbl_Aggregate_TD_528_output.setInt32(r, 1, _sum_sales4685);
        int32_t __w04690 = (it.second).__w04690_sum_1;
        tbl_Aggregate_TD_528_output.setInt32(r, 2, __w04690);
        ++r;
    }
    tbl_Aggregate_TD_528_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_528_output #Row: " << tbl_Aggregate_TD_528_output.getNumRow() << std::endl;
}

void SW_Window_TD_4352(Table &tbl_Aggregate_TD_528_output, Table &tbl_Window_TD_4352_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#4690) windowspecdefinition(i_manager_id#248, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#4686)
    // Input: ListBuffer(i_manager_id#248, sum_sales#4685, _w0#4690)
    // Output: ListBuffer(i_manager_id#248, sum_sales#4685, _w0#4690, avg_monthly_sales#4686)
    struct SW_Window_TD_4352Row {
        int32_t _i_manager_id248;
        int32_t _sum_sales4685;
        int32_t __w04690;
    }; 

    int nrow = tbl_Aggregate_TD_528_output.getNumRow();
    std::vector<SW_Window_TD_4352Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _i_manager_id248 = tbl_Aggregate_TD_528_output.getInt32(i, 0);
        tbl_Window_TD_4352_output.setInt32(r, 0,_i_manager_id248);
        int32_t _sum_sales4685 = tbl_Aggregate_TD_528_output.getInt32(i, 1);
        tbl_Window_TD_4352_output.setInt32(r, 1,_sum_sales4685);
        int32_t __w04690 = tbl_Aggregate_TD_528_output.getInt32(i, 2);
        tbl_Window_TD_4352_output.setInt32(r, 2,__w04690);
        r++;
        SW_Window_TD_4352Row t = {_i_manager_id248,_sum_sales4685,__w04690};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4352Row& a, const SW_Window_TD_4352Row& b) const { return 
(a._i_manager_id248 < b._i_manager_id248); 
}
    }SW_Window_TD_4352_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4352_order0);
    int64_t sum0 = 0;
    int64_t currentRow0 = 0;
    int32_t current_i_manager_id2480 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_i_manager_id2480 != it._i_manager_id248) {
            sum0 = 0;
            currentRow0 = 0;
            current_i_manager_id2480 = it._i_manager_id248;
        }
        sum0 += it.__w04690;
        currentRow0 +=1;
        tbl_Window_TD_4352_output.setInt64(r, 3, sum0 / currentRow0 );
    }
    tbl_Window_TD_4352_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4352_output #Row: " << tbl_Window_TD_4352_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3541(Table &tbl_Window_TD_4352_output, Table &tbl_Filter_TD_3541_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(avg_monthly_sales#4686) AND ((avg_monthly_sales#4686 > 0.000000) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#4685 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#4686 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#4686 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000))))
    // Input: ListBuffer(i_manager_id#248, sum_sales#4685, _w0#4690, avg_monthly_sales#4686)
    // Output: ListBuffer(i_manager_id#248, sum_sales#4685, avg_monthly_sales#4686)
    int r = 0;
    int nrow1 = tbl_Window_TD_4352_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avg_monthly_sales4686 = tbl_Window_TD_4352_output.getInt32(i, 3);
        int32_t _sum_sales4685 = tbl_Window_TD_4352_output.getInt32(i, 1);
        if ((_avg_monthly_sales4686!= 0) && ((_avg_monthly_sales4686 > 0.000000) && (_sum_sales4685 > 0.1000000000000000))) {
            int32_t _i_manager_id248_t = tbl_Window_TD_4352_output.getInt32(i, 0);
            tbl_Filter_TD_3541_output.setInt32(r, 0, _i_manager_id248_t);
            int32_t _sum_sales4685_t = tbl_Window_TD_4352_output.getInt32(i, 1);
            tbl_Filter_TD_3541_output.setInt32(r, 1, _sum_sales4685_t);
            int32_t _avg_monthly_sales4686_t = tbl_Window_TD_4352_output.getInt32(i, 3);
            tbl_Filter_TD_3541_output.setInt32(r, 2, _avg_monthly_sales4686_t);
            r++;
        }
    }
    tbl_Filter_TD_3541_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3541_output #Row: " << tbl_Filter_TD_3541_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2698(Table &tbl_Filter_TD_3541_output, Table &tbl_Sort_TD_2698_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_manager_id#248 ASC NULLS FIRST, avg_monthly_sales#4686 ASC NULLS FIRST, sum_sales#4685 ASC NULLS FIRST)
    // Input: ListBuffer(i_manager_id#248, sum_sales#4685, avg_monthly_sales#4686)
    // Output: ListBuffer(i_manager_id#248, sum_sales#4685, avg_monthly_sales#4686)
    struct SW_Sort_TD_2698Row {
        int32_t _i_manager_id248;
        int32_t _sum_sales4685;
        int32_t _avg_monthly_sales4686;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2698Row& a, const SW_Sort_TD_2698Row& b) const { return 
 (a._i_manager_id248 < b._i_manager_id248) || 
 ((a._i_manager_id248 == b._i_manager_id248) && (a._avg_monthly_sales4686 < b._avg_monthly_sales4686)) || 
 ((a._i_manager_id248 == b._i_manager_id248) && (a._avg_monthly_sales4686 == b._avg_monthly_sales4686) && (a._sum_sales4685 < b._sum_sales4685)); 
}
    }SW_Sort_TD_2698_order; 

    int nrow1 = tbl_Filter_TD_3541_output.getNumRow();
    std::vector<SW_Sort_TD_2698Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_Filter_TD_3541_output.getInt32(i, 0);
        int32_t _sum_sales4685 = tbl_Filter_TD_3541_output.getInt32(i, 1);
        int32_t _avg_monthly_sales4686 = tbl_Filter_TD_3541_output.getInt32(i, 2);
        SW_Sort_TD_2698Row t = {_i_manager_id248,_sum_sales4685,_avg_monthly_sales4686};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2698_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2698_output.setInt32(r, 0, it._i_manager_id248);
        tbl_Sort_TD_2698_output.setInt32(r, 1, it._sum_sales4685);
        tbl_Sort_TD_2698_output.setInt32(r, 2, it._avg_monthly_sales4686);
        ++r;
    }
    tbl_Sort_TD_2698_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2698_output #Row: " << tbl_Sort_TD_2698_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1840(Table &tbl_Sort_TD_2698_output, Table &tbl_LocalLimit_TD_1840_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_manager_id#248, sum_sales#4685, avg_monthly_sales#4686)
    // Output: ListBuffer(i_manager_id#248, sum_sales#4685, avg_monthly_sales#4686)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1840_output.setInt32(r, 0, tbl_Sort_TD_2698_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1840_output.setInt32(r, 1, tbl_Sort_TD_2698_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1840_output.setInt32(r, 2, tbl_Sort_TD_2698_output.getInt32(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1840_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1840_output #Row: " << tbl_LocalLimit_TD_1840_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_030(Table &tbl_LocalLimit_TD_1840_output, Table &tbl_GlobalLimit_TD_030_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_manager_id#248, sum_sales#4685, avg_monthly_sales#4686)
    // Output: ListBuffer(i_manager_id#248, sum_sales#4685, avg_monthly_sales#4686)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_030_output.setInt32(r, 0, tbl_LocalLimit_TD_1840_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_030_output.setInt32(r, 1, tbl_LocalLimit_TD_1840_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_030_output.setInt32(r, 2, tbl_LocalLimit_TD_1840_output.getInt32(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_030_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_030_output #Row: " << tbl_GlobalLimit_TD_030_output.getNumRow() << std::endl;
}

