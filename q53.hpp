#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9688(Table &tbl_SerializeFromObject_TD_10177_input, Table &tbl_Filter_TD_9688_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10177_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10177_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10177_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10177_input.getInt32(i, 2);
        if ((1) && ((1) && (1))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10177_input.getInt32(i, 0);
            tbl_Filter_TD_9688_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10177_input.getInt32(i, 1);
            tbl_Filter_TD_9688_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10177_input.getInt32(i, 2);
            tbl_Filter_TD_9688_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_10177_input.getInt32(i, 3);
            tbl_Filter_TD_9688_output.setInt32(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_9688_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9688_output #Row: " << tbl_Filter_TD_9688_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9457(Table &tbl_SerializeFromObject_TD_10249_input, Table &tbl_Filter_TD_9457_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((i_category#240 IN (Books,Children,Electronics) AND i_class#238 IN (personal,portable,reference,self-help)) AND i_brand#236 IN (scholaramalgamalg #14,scholaramalgamalg #7,exportiunivamalg #9,scholaramalgamalg #9)) OR ((i_category#240 IN (Women,Music,Men) AND i_class#238 IN (accessories,classical,fragrances,pants)) AND i_brand#236 IN (amalgimporto #1,edu packscholar #1,exportiimporto #1,importoamalg #1))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_manufact_id#241, i_category#240, i_class#238, i_brand#236)
    // Output: ListBuffer(i_item_sk#228, i_manufact_id#241)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10249_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_10249_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_SerializeFromObject_TD_10249_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_10249_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10249_input.getInt32(i, 0);
        auto reuse_col_str_71 = std::string(_i_category240.data());
        auto reuse_col_str_563 = std::string(_i_class238.data());
        auto reuse_col_str_792 = std::string(_i_brand236.data());
        auto reuse_col_str_709 = std::string(_i_category240.data());
        auto reuse_col_str_595 = std::string(_i_class238.data());
        auto reuse_col_str_268 = std::string(_i_brand236.data());
        if ((((((reuse_col_str_71 == "Books") || (reuse_col_str_71 == "Children") || (reuse_col_str_71 == "Electronics") || (0)) && ((reuse_col_str_563 == "personal") || (reuse_col_str_563 == "portable") || (reuse_col_str_563 == "reference") || (reuse_col_str_563 == "self-help") || (0))) && ((reuse_col_str_792 == "scholaramalgamalg #14") || (reuse_col_str_792 == "scholaramalgamalg #7") || (reuse_col_str_792 == "exportiunivamalg #9") || (reuse_col_str_792 == "scholaramalgamalg #9") || (0))) || ((((reuse_col_str_709 == "Women") || (reuse_col_str_709 == "Music") || (reuse_col_str_709 == "Men") || (0)) && ((reuse_col_str_595 == "accessories") || (reuse_col_str_595 == "classical") || (reuse_col_str_595 == "fragrances") || (reuse_col_str_595 == "pants") || (0))) && ((reuse_col_str_268 == "amalgimporto #1") || (reuse_col_str_268 == "edu packscholar #1") || (reuse_col_str_268 == "exportiimporto #1") || (reuse_col_str_268 == "importoamalg #1") || (0)))) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10249_input.getInt32(i, 0);
            tbl_Filter_TD_9457_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_manufact_id241_t = tbl_SerializeFromObject_TD_10249_input.getInt32(i, 1);
            tbl_Filter_TD_9457_output.setInt32(r, 1, _i_manufact_id241_t);
            r++;
        }
    }
    tbl_Filter_TD_9457_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9457_output #Row: " << tbl_Filter_TD_9457_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8658(Table &tbl_SerializeFromObject_TD_952_input, Table &tbl_Filter_TD_8658_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_month_seq#123 INSET 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211 AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_qoy#130, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_qoy#130)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_952_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_952_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_952_input.getInt32(i, 0);
        std::vector<std::string>vec_885 = {
        1210,1208,1209,1204,1201,1203,1207,1200,1211,1206,1202,1205
        };
        auto reuse_col_str_964 = _d_month_seq123;
        bool elementExists = std::find(vec_885.begin(), vec_885.end(),reuse_col_str_964) != vec_885.end();
        if (((elementExists) || (0)) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_952_input.getInt32(i, 0);
            tbl_Filter_TD_8658_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_qoy130_t = tbl_SerializeFromObject_TD_952_input.getInt32(i, 1);
            tbl_Filter_TD_8658_output.setInt32(r, 1, _d_qoy130_t);
            r++;
        }
    }
    tbl_Filter_TD_8658_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8658_output #Row: " << tbl_Filter_TD_8658_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8719_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_8719_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8719_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8719_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_8719_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_manufact_id241;
};
struct SW_JOIN_INNER_TD_8719_key_rightMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_8719_key_rightMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8719_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8719_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_8719_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
void SW_JOIN_INNER_TD_8719(Table &tbl_Filter_TD_9457_output, Table &tbl_Filter_TD_9688_output, Table &tbl_JOIN_INNER_TD_8719_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_manufact_id#241)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output Table: ListBuffer(i_manufact_id#241, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    int left_nrow = tbl_Filter_TD_9457_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9688_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8719_key_leftMajor, SW_JOIN_INNER_TD_8719_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9457_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9457_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8719_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_9457_output.getInt32(i, 0);
            int32_t _i_manufact_id241 = tbl_Filter_TD_9457_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8719_payload_leftMajor payloadA{_i_item_sk228, _i_manufact_id241};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9688_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_9688_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8719_key_leftMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9688_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9688_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_9688_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_9688_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8719_output.setInt32(r, 0, _i_manufact_id241);
                tbl_JOIN_INNER_TD_8719_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8719_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8719_output.setInt32(r, 3, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8719_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8719_key_rightMajor, SW_JOIN_INNER_TD_8719_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9688_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_9688_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8719_key_rightMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9688_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9688_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_9688_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_9688_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8719_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9457_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9457_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8719_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _i_item_sk228 = tbl_Filter_TD_9457_output.getInt32(i, 0);
                int32_t _i_manufact_id241 = tbl_Filter_TD_9457_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8719_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8719_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8719_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_8719_output.setInt32(r, 0, _i_manufact_id241);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8719_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8719_output #Row: " << tbl_JOIN_INNER_TD_8719_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7479(Table &tbl_SerializeFromObject_TD_8887_input, Table &tbl_Filter_TD_7479_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8887_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_8887_input.getInt32(i, 0);
        if (1) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_8887_input.getInt32(i, 0);
            tbl_Filter_TD_7479_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_7479_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7479_output #Row: " << tbl_Filter_TD_7479_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7486_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_7486_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7486_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7486_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_7486_payload_leftMajor {
    int32_t _i_manufact_id241;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_7486_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7486_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7486_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7486_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7486_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_qoy130;
};
void SW_JOIN_INNER_TD_7486(Table &tbl_JOIN_INNER_TD_8719_output, Table &tbl_Filter_TD_8658_output, Table &tbl_JOIN_INNER_TD_7486_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(i_manufact_id#241, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_qoy#130)
    // Output Table: ListBuffer(i_manufact_id#241, ss_store_sk#1213, ss_sales_price#1219, d_qoy#130)
    int left_nrow = tbl_JOIN_INNER_TD_8719_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8658_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7486_key_leftMajor, SW_JOIN_INNER_TD_7486_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8719_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7486_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 0);
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7486_payload_leftMajor payloadA{_i_manufact_id241, _ss_sold_date_sk1206, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8658_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8658_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7486_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_8658_output.getInt32(i, 0);
                int32_t _d_qoy130 = tbl_Filter_TD_8658_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7486_output.setInt32(r, 0, _i_manufact_id241);
                tbl_JOIN_INNER_TD_7486_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7486_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_7486_output.setInt32(r, 3, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7486_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7486_key_rightMajor, SW_JOIN_INNER_TD_7486_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8658_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8658_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7486_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_8658_output.getInt32(i, 0);
            int32_t _d_qoy130 = tbl_Filter_TD_8658_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7486_payload_rightMajor payloadA{_d_date_sk120, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8719_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7486_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 0);
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8719_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7486_output.setInt32(r, 3, _d_qoy130);
                tbl_JOIN_INNER_TD_7486_output.setInt32(r, 0, _i_manufact_id241);
                tbl_JOIN_INNER_TD_7486_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7486_output.setInt32(r, 2, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7486_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7486_output #Row: " << tbl_JOIN_INNER_TD_7486_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6824_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_6824_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6824_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6824_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_6824_payload_leftMajor {
    int32_t _i_manufact_id241;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
    int32_t _d_qoy130;
};
struct SW_JOIN_INNER_TD_6824_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_6824_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6824_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6824_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_6824_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_6824(Table &tbl_JOIN_INNER_TD_7486_output, Table &tbl_Filter_TD_7479_output, Table &tbl_JOIN_INNER_TD_6824_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(i_manufact_id#241, ss_store_sk#1213, ss_sales_price#1219, d_qoy#130)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(i_manufact_id#241, ss_sales_price#1219, d_qoy#130)
    int left_nrow = tbl_JOIN_INNER_TD_7486_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7479_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6824_key_leftMajor, SW_JOIN_INNER_TD_6824_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7486_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6824_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 1);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 2);
            int32_t _d_qoy130 = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6824_payload_leftMajor payloadA{_i_manufact_id241, _ss_store_sk1213, _ss_sales_price1219, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7479_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7479_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6824_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _s_store_sk378 = tbl_Filter_TD_7479_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6824_output.setInt32(r, 0, _i_manufact_id241);
                tbl_JOIN_INNER_TD_6824_output.setInt32(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6824_output.setInt32(r, 2, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6824_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6824_key_rightMajor, SW_JOIN_INNER_TD_6824_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7479_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7479_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6824_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_7479_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6824_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7486_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6824_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 1);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 2);
                int32_t _d_qoy130 = tbl_JOIN_INNER_TD_7486_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6824_output.setInt32(r, 0, _i_manufact_id241);
                tbl_JOIN_INNER_TD_6824_output.setInt32(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6824_output.setInt32(r, 2, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6824_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6824_output #Row: " << tbl_JOIN_INNER_TD_6824_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5580_key {
    int32_t _i_manufact_id241;
    int32_t _d_qoy130;
    bool operator==(const SW_Aggregate_TD_5580_key& other) const { return (_i_manufact_id241 == other._i_manufact_id241) && (_d_qoy130 == other._d_qoy130); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5580_key> {
    std::size_t operator() (const SW_Aggregate_TD_5580_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_manufact_id241)) + (hash<int32_t>()(k._d_qoy130));
    }
};
}
struct SW_Aggregate_TD_5580_payload {
    int32_t _sum_sales6323_sum_0;
    int32_t __w06328_sum_1;
};
void SW_Aggregate_TD_5580(Table &tbl_JOIN_INNER_TD_6824_output, Table &tbl_Aggregate_TD_5580_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_manufact_id#241, d_qoy#130, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS sum_sales#6323, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS _w0#6328)
    // Input: ListBuffer(i_manufact_id#241, ss_sales_price#1219, d_qoy#130)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#6323, _w0#6328)
    std::unordered_map<SW_Aggregate_TD_5580_key, SW_Aggregate_TD_5580_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6824_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_6824_output.getInt32(i, 0);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6824_output.getInt32(i, 1);
        int32_t _d_qoy130 = tbl_JOIN_INNER_TD_6824_output.getInt32(i, 2);
        SW_Aggregate_TD_5580_key k{_i_manufact_id241, _d_qoy130};
        int64_t _sum_sales6323_sum_0 = _ss_sales_price1219;
        int64_t __w06328_sum_1 = _ss_sales_price1219;
        SW_Aggregate_TD_5580_payload p{_sum_sales6323_sum_0, __w06328_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales6323_sum_0 + _sum_sales6323_sum_0;
            p._sum_sales6323_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w06328_sum_1 + __w06328_sum_1;
            p.__w06328_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5580_output.setInt32(r, 0, (it.first)._i_manufact_id241);
        // _d_qoy130 not required in the output table
        int32_t _sum_sales6323 = (it.second)._sum_sales6323_sum_0;
        tbl_Aggregate_TD_5580_output.setInt32(r, 1, _sum_sales6323);
        int32_t __w06328 = (it.second).__w06328_sum_1;
        tbl_Aggregate_TD_5580_output.setInt32(r, 2, __w06328);
        ++r;
    }
    tbl_Aggregate_TD_5580_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5580_output #Row: " << tbl_Aggregate_TD_5580_output.getNumRow() << std::endl;
}

void SW_Window_TD_4144(Table &tbl_Aggregate_TD_5580_output, Table &tbl_Window_TD_4144_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#6328) windowspecdefinition(i_manufact_id#241, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_quarterly_sales#6324)
    // Input: ListBuffer(i_manufact_id#241, sum_sales#6323, _w0#6328)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#6323, _w0#6328, avg_quarterly_sales#6324)
    struct SW_Window_TD_4144Row {
        int32_t _i_manufact_id241;
        int32_t _sum_sales6323;
        int32_t __w06328;
    }; 

    int nrow = tbl_Aggregate_TD_5580_output.getNumRow();
    std::vector<SW_Window_TD_4144Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_5580_output.getInt32(i, 0);
        tbl_Window_TD_4144_output.setInt32(r, 0,_i_manufact_id241);
        int32_t _sum_sales6323 = tbl_Aggregate_TD_5580_output.getInt32(i, 1);
        tbl_Window_TD_4144_output.setInt32(r, 1,_sum_sales6323);
        int32_t __w06328 = tbl_Aggregate_TD_5580_output.getInt32(i, 2);
        tbl_Window_TD_4144_output.setInt32(r, 2,__w06328);
        r++;
        SW_Window_TD_4144Row t = {_i_manufact_id241,_sum_sales6323,__w06328};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4144Row& a, const SW_Window_TD_4144Row& b) const { return 
(a._i_manufact_id241 < b._i_manufact_id241); 
}
    }SW_Window_TD_4144_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4144_order0);
    int64_t sum0 = 0;
    int64_t currentRow0 = 0;
    int32_t current_i_manufact_id2410 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_i_manufact_id2410 != it._i_manufact_id241) {
            sum0 = 0;
            currentRow0 = 0;
            current_i_manufact_id2410 = it._i_manufact_id241;
        }
        sum0 += it.__w06328;
        currentRow0 +=1;
        tbl_Window_TD_4144_output.setInt64(r, 3, sum0 / currentRow0 );
    }
    tbl_Window_TD_4144_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4144_output #Row: " << tbl_Window_TD_4144_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3198(Table &tbl_Window_TD_4144_output, Table &tbl_Filter_TD_3198_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(avg_quarterly_sales#6324) AND ((avg_quarterly_sales#6324 > 0.000000) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#6323 as decimal(22,6))) - promote_precision(cast(avg_quarterly_sales#6324 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_quarterly_sales#6324 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000))))
    // Input: ListBuffer(i_manufact_id#241, sum_sales#6323, _w0#6328, avg_quarterly_sales#6324)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#6323, avg_quarterly_sales#6324)
    int r = 0;
    int nrow1 = tbl_Window_TD_4144_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avg_quarterly_sales6324 = tbl_Window_TD_4144_output.getInt32(i, 3);
        int32_t _sum_sales6323 = tbl_Window_TD_4144_output.getInt32(i, 1);
        if ((1) && ((_avg_quarterly_sales6324 > 0.000000) && (_sum_sales6323 > 0.1000000000000000))) {
            int32_t _i_manufact_id241_t = tbl_Window_TD_4144_output.getInt32(i, 0);
            tbl_Filter_TD_3198_output.setInt32(r, 0, _i_manufact_id241_t);
            int32_t _sum_sales6323_t = tbl_Window_TD_4144_output.getInt32(i, 1);
            tbl_Filter_TD_3198_output.setInt32(r, 1, _sum_sales6323_t);
            int32_t _avg_quarterly_sales6324_t = tbl_Window_TD_4144_output.getInt32(i, 3);
            tbl_Filter_TD_3198_output.setInt32(r, 2, _avg_quarterly_sales6324_t);
            r++;
        }
    }
    tbl_Filter_TD_3198_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3198_output #Row: " << tbl_Filter_TD_3198_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2614(Table &tbl_Filter_TD_3198_output, Table &tbl_Sort_TD_2614_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(avg_quarterly_sales#6324 ASC NULLS FIRST, sum_sales#6323 ASC NULLS FIRST, i_manufact_id#241 ASC NULLS FIRST)
    // Input: ListBuffer(i_manufact_id#241, sum_sales#6323, avg_quarterly_sales#6324)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#6323, avg_quarterly_sales#6324)
    struct SW_Sort_TD_2614Row {
        int32_t _i_manufact_id241;
        int32_t _sum_sales6323;
        int32_t _avg_quarterly_sales6324;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2614Row& a, const SW_Sort_TD_2614Row& b) const { return 
 (a._avg_quarterly_sales6324 < b._avg_quarterly_sales6324) || 
 ((a._avg_quarterly_sales6324 == b._avg_quarterly_sales6324) && (a._sum_sales6323 < b._sum_sales6323)) || 
 ((a._avg_quarterly_sales6324 == b._avg_quarterly_sales6324) && (a._sum_sales6323 == b._sum_sales6323) && (a._i_manufact_id241 < b._i_manufact_id241)); 
}
    }SW_Sort_TD_2614_order; 

    int nrow1 = tbl_Filter_TD_3198_output.getNumRow();
    std::vector<SW_Sort_TD_2614Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_Filter_TD_3198_output.getInt32(i, 0);
        int32_t _sum_sales6323 = tbl_Filter_TD_3198_output.getInt32(i, 1);
        int32_t _avg_quarterly_sales6324 = tbl_Filter_TD_3198_output.getInt32(i, 2);
        SW_Sort_TD_2614Row t = {_i_manufact_id241,_sum_sales6323,_avg_quarterly_sales6324};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2614_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2614_output.setInt32(r, 0, it._i_manufact_id241);
        tbl_Sort_TD_2614_output.setInt32(r, 1, it._sum_sales6323);
        tbl_Sort_TD_2614_output.setInt32(r, 2, it._avg_quarterly_sales6324);
        ++r;
    }
    tbl_Sort_TD_2614_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2614_output #Row: " << tbl_Sort_TD_2614_output.getNumRow() << std::endl;
}

