#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10965(Table &tbl_SerializeFromObject_TD_11998_input, Table &tbl_Filter_TD_10965_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128, d_qoy#130, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_moy#128, d_qoy#130)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11998_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_11998_input.getInt32(i, 4);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11998_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11998_input.getInt32(i, 0);
            tbl_Filter_TD_10965_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_11998_input.getInt32(i, 1);
            tbl_Filter_TD_10965_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_11998_input.getInt32(i, 2);
            tbl_Filter_TD_10965_output.setInt32(r, 2, _d_moy128_t);
            int32_t _d_qoy130_t = tbl_SerializeFromObject_TD_11998_input.getInt32(i, 3);
            tbl_Filter_TD_10965_output.setInt32(r, 3, _d_qoy130_t);
            r++;
        }
    }
    tbl_Filter_TD_10965_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10965_output #Row: " << tbl_Filter_TD_10965_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10327(Table &tbl_SerializeFromObject_TD_11507_input, Table &tbl_Filter_TD_10327_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND (isnotnull(ss_store_sk#1213) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11507_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11507_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_11507_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_11507_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && ((_ss_store_sk1213!= 0) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11507_input.getInt32(i, 0);
            tbl_Filter_TD_10327_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_11507_input.getInt32(i, 1);
            tbl_Filter_TD_10327_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_11507_input.getInt32(i, 2);
            tbl_Filter_TD_10327_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_11507_input.getInt32(i, 3);
            tbl_Filter_TD_10327_output.setInt32(r, 3, _ss_quantity1216_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_11507_input.getInt32(i, 4);
            tbl_Filter_TD_10327_output.setInt32(r, 4, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_10327_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10327_output #Row: " << tbl_Filter_TD_10327_output.getNumRow() << std::endl;
}

void SW_Filter_TD_941(Table &tbl_SerializeFromObject_TD_10885_input, Table &tbl_Filter_TD_941_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output: ListBuffer(s_store_sk#378, s_store_id#379)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10885_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_10885_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_10885_input.getInt32(i, 0);
            tbl_Filter_TD_941_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_t = tbl_SerializeFromObject_TD_10885_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_941_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id379_t);
            r++;
        }
    }
    tbl_Filter_TD_941_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_941_output #Row: " << tbl_Filter_TD_941_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_911_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_911_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_911_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_911_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_911_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_911_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_911_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_911_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_911_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_911_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _d_qoy130;
};
void SW_JOIN_INNER_TD_911(Table &tbl_Filter_TD_10327_output, Table &tbl_Filter_TD_10965_output, Table &tbl_JOIN_INNER_TD_911_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_moy#128, d_qoy#130)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_sales_price#1219, d_year#126, d_moy#128, d_qoy#130)
    int left_nrow = tbl_Filter_TD_10327_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10965_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_911_key_leftMajor, SW_JOIN_INNER_TD_911_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10327_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10327_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_911_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10327_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_10327_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_10327_output.getInt32(i, 2);
            int32_t _ss_quantity1216 = tbl_Filter_TD_10327_output.getInt32(i, 3);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_10327_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_911_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10965_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10965_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_911_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_10965_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_10965_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Filter_TD_10965_output.getInt32(i, 2);
                int32_t _d_qoy130 = tbl_Filter_TD_10965_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 6, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_911_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_911_key_rightMajor, SW_JOIN_INNER_TD_911_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10965_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10965_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_911_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10965_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_10965_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Filter_TD_10965_output.getInt32(i, 2);
            int32_t _d_qoy130 = tbl_Filter_TD_10965_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_911_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_moy128, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10327_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10327_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_911_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10327_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_10327_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_10327_output.getInt32(i, 2);
                int32_t _ss_quantity1216 = tbl_Filter_TD_10327_output.getInt32(i, 3);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_10327_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 6, _d_qoy130);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_911_output.setInt32(r, 3, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_911_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_911_output #Row: " << tbl_JOIN_INNER_TD_911_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8344(Table &tbl_SerializeFromObject_TD_9516_input, Table &tbl_Filter_TD_8344_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240, i_product_name#249)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240, i_product_name#249)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9516_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_9516_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_9516_input.getInt32(i, 0);
            tbl_Filter_TD_8344_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_9516_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8344_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_t = tbl_SerializeFromObject_TD_9516_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8344_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class238_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_9516_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_8344_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_t = tbl_SerializeFromObject_TD_9516_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_8344_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_product_name249_t);
            r++;
        }
    }
    tbl_Filter_TD_8344_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8344_output #Row: " << tbl_Filter_TD_8344_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8206_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_8206_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8206_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8206_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_8206_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _ss_sales_price1219;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _d_qoy130;
};
struct SW_JOIN_INNER_TD_8206_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_8206_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8206_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8206_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_8206_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_id379;
};
void SW_JOIN_INNER_TD_8206(Table &tbl_JOIN_INNER_TD_911_output, Table &tbl_Filter_TD_941_output, Table &tbl_JOIN_INNER_TD_8206_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_sales_price#1219, d_year#126, d_moy#128, d_qoy#130)
    // Right Table: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_sales_price#1219, d_year#126, d_moy#128, d_qoy#130, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_911_output.getNumRow();
    int right_nrow = tbl_Filter_TD_941_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8206_key_leftMajor, SW_JOIN_INNER_TD_8206_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_911_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_911_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8206_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 1);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 5);
            int32_t _d_qoy130 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_8206_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _ss_sales_price1219, _d_year126, _d_moy128, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_941_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_941_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8206_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _s_store_sk378 = tbl_Filter_TD_941_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 5, _d_qoy130);
                tbl_JOIN_INNER_TD_8206_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8206_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8206_key_rightMajor, SW_JOIN_INNER_TD_8206_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_941_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_941_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8206_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_941_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_8206_payload_rightMajor payloadA{_s_store_sk378, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_911_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_911_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8206_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 1);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 5);
                int32_t _d_qoy130 = tbl_JOIN_INNER_TD_911_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_8206_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_id379_n);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_8206_output.setInt32(r, 5, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8206_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8206_output #Row: " << tbl_JOIN_INNER_TD_8206_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7222_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_7222_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7222_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7222_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_7222_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_quantity1216;
    int32_t _ss_sales_price1219;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _d_qoy130;
    std::string _s_store_id379;
};
struct SW_JOIN_INNER_TD_7222_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_7222_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7222_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7222_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_7222_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_class238;
    std::string _i_category240;
    std::string _i_product_name249;
};
void SW_JOIN_INNER_TD_7222(Table &tbl_JOIN_INNER_TD_8206_output, Table &tbl_Filter_TD_8344_output, Table &tbl_JOIN_INNER_TD_7222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_sales_price#1219, d_year#126, d_moy#128, d_qoy#130, s_store_id#379)
    // Right Table: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240, i_product_name#249)
    // Output Table: ListBuffer(ss_quantity#1216, ss_sales_price#1219, i_category#240, i_class#238, i_brand#236, i_product_name#249, d_year#126, d_qoy#130, d_moy#128, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_8206_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8344_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7222_key_leftMajor, SW_JOIN_INNER_TD_7222_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8206_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7222_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 0);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 1);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 2);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 3);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 4);
            int32_t _d_qoy130 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_8206_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_7222_payload_leftMajor payloadA{_ss_item_sk1208, _ss_quantity1216, _ss_sales_price1219, _d_year126, _d_moy128, _d_qoy130, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8344_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8344_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7222_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_8344_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_8344_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_8344_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8344_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_8344_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 0, _ss_quantity1216);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 6, _d_year126);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 8, _d_moy128);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 7, _d_qoy130);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_id379_n);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_brand236_n);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7222_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7222_key_rightMajor, SW_JOIN_INNER_TD_7222_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8344_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8344_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7222_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_8344_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_8344_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_8344_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8344_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_8344_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_7222_payload_rightMajor payloadA{_i_item_sk228, _i_brand236, _i_class238, _i_category240, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8206_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7222_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 0);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 1);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 2);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 3);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 4);
                int32_t _d_qoy130 = tbl_JOIN_INNER_TD_8206_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_8206_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_brand236_n);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_class238_n);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_product_name249_n);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 0, _ss_quantity1216);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 6, _d_year126);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 8, _d_moy128);
                tbl_JOIN_INNER_TD_7222_output.setInt32(r, 7, _d_qoy130);
                tbl_JOIN_INNER_TD_7222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7222_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7222_output #Row: " << tbl_JOIN_INNER_TD_7222_output.getNumRow() << std::endl;
}

void SW_Expand_TD_6650(Table &tbl_JOIN_INNER_TD_7222_output, Table &tbl_Expand_TD_6650_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(ss_quantity#1216, ss_sales_price#1219, i_category#240, i_class#238, i_brand#236, i_product_name#249, d_year#126, d_qoy#130, d_moy#128, s_store_id#379)
    // Output: ListBuffer(ss_quantity#1216, ss_sales_price#1219, i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, spark_grouping_id#10304L)
    std::cout << "tbl_Expand_TD_6650_output #Row: " << tbl_Expand_TD_6650_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_574_key {
    std::string _i_category10305;
    std::string _i_class10306;
    std::string _i_brand10307;
    std::string _i_product_name10308;
    int32_t _d_year10309;
    int32_t _d_qoy10310;
    int32_t _d_moy10311;
    std::string _s_store_id10312;
    int64_t _spark_grouping_id10304L;
    bool operator==(const SW_Aggregate_TD_574_key& other) const { return (_i_category10305 == other._i_category10305) && (_i_class10306 == other._i_class10306) && (_i_brand10307 == other._i_brand10307) && (_i_product_name10308 == other._i_product_name10308) && (_d_year10309 == other._d_year10309) && (_d_qoy10310 == other._d_qoy10310) && (_d_moy10311 == other._d_moy10311) && (_s_store_id10312 == other._s_store_id10312) && (_spark_grouping_id10304L == other._spark_grouping_id10304L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_574_key> {
    std::size_t operator() (const SW_Aggregate_TD_574_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category10305)) + (hash<string>()(k._i_class10306)) + (hash<string>()(k._i_brand10307)) + (hash<string>()(k._i_product_name10308)) + (hash<int32_t>()(k._d_year10309)) + (hash<int32_t>()(k._d_qoy10310)) + (hash<int32_t>()(k._d_moy10311)) + (hash<string>()(k._s_store_id10312)) + (hash<int64_t>()(k._spark_grouping_id10304L));
    }
};
}
struct SW_Aggregate_TD_574_payload {
    int32_t _sumsales10291_sum_0;
};
void SW_Aggregate_TD_574(Table &tbl_Expand_TD_6650_output, Table &tbl_Aggregate_TD_574_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, spark_grouping_id#10304L, sum(coalesce(CheckOverflow((promote_precision(cast(ss_sales_price#1219 as decimal(12,2))) * promote_precision(cast(cast(ss_quantity#1216 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true), 0.00)) AS sumsales#10291)
    // Input: ListBuffer(ss_quantity#1216, ss_sales_price#1219, i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, spark_grouping_id#10304L)
    // Output: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291)
    std::unordered_map<SW_Aggregate_TD_574_key, SW_Aggregate_TD_574_payload> ht1;
    int nrow1 = tbl_Expand_TD_6650_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_Expand_TD_6650_output.getInt32(i, 0);
        int32_t _ss_sales_price1219 = tbl_Expand_TD_6650_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category10305 = tbl_Expand_TD_6650_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class10306 = tbl_Expand_TD_6650_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand10307 = tbl_Expand_TD_6650_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name10308 = tbl_Expand_TD_6650_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _d_year10309 = tbl_Expand_TD_6650_output.getInt32(i, 6);
        int32_t _d_qoy10310 = tbl_Expand_TD_6650_output.getInt32(i, 7);
        int32_t _d_moy10311 = tbl_Expand_TD_6650_output.getInt32(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id10312 = tbl_Expand_TD_6650_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        int64_t _spark_grouping_id10304L = tbl_Expand_TD_6650_output.getInt64(i, 10);
        SW_Aggregate_TD_574_key k{std::string(_i_category10305.data()), std::string(_i_class10306.data()), std::string(_i_brand10307.data()), std::string(_i_product_name10308.data()), _d_year10309, _d_qoy10310, _d_moy10311, std::string(_s_store_id10312.data()), _spark_grouping_id10304L};
        int64_t _sumsales10291_sum_0 = (_ss_sales_price1219 * _ss_quantity1216);
        SW_Aggregate_TD_574_payload p{_sumsales10291_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sumsales10291_sum_0 + _sumsales10291_sum_0;
            p._sumsales10291_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category10305{};
        memcpy(_i_category10305.data(), ((it.first)._i_category10305).data(), ((it.first)._i_category10305).length());
        tbl_Aggregate_TD_574_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category10305);
        std::array<char, TPCDS_READ_MAX + 1> _i_class10306{};
        memcpy(_i_class10306.data(), ((it.first)._i_class10306).data(), ((it.first)._i_class10306).length());
        tbl_Aggregate_TD_574_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class10306);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand10307{};
        memcpy(_i_brand10307.data(), ((it.first)._i_brand10307).data(), ((it.first)._i_brand10307).length());
        tbl_Aggregate_TD_574_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand10307);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name10308{};
        memcpy(_i_product_name10308.data(), ((it.first)._i_product_name10308).data(), ((it.first)._i_product_name10308).length());
        tbl_Aggregate_TD_574_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_product_name10308);
        tbl_Aggregate_TD_574_output.setInt32(r, 4, (it.first)._d_year10309);
        tbl_Aggregate_TD_574_output.setInt32(r, 5, (it.first)._d_qoy10310);
        tbl_Aggregate_TD_574_output.setInt32(r, 6, (it.first)._d_moy10311);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id10312{};
        memcpy(_s_store_id10312.data(), ((it.first)._s_store_id10312).data(), ((it.first)._s_store_id10312).length());
        tbl_Aggregate_TD_574_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_store_id10312);
        // _spark_grouping_id10304L not required in the output table
        int32_t _sumsales10291 = (it.second)._sumsales10291_sum_0;
        tbl_Aggregate_TD_574_output.setInt32(r, 8, _sumsales10291);
        ++r;
    }
    tbl_Aggregate_TD_574_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_574_output #Row: " << tbl_Aggregate_TD_574_output.getNumRow() << std::endl;
}

void SW_Window_TD_4295(Table &tbl_Aggregate_TD_574_output, Table &tbl_Window_TD_4295_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(sumsales#10291) windowspecdefinition(i_category#10305, sumsales#10291 DESC NULLS LAST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rk#10292)
    // Input: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291)
    // Output: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    struct SW_Window_TD_4295Row {
        std::string _i_category10305;
        std::string _i_class10306;
        std::string _i_brand10307;
        std::string _i_product_name10308;
        int32_t _d_year10309;
        int32_t _d_qoy10310;
        int32_t _d_moy10311;
        std::string _s_store_id10312;
        int32_t _sumsales10291;
    }; 

    int nrow = tbl_Aggregate_TD_574_output.getNumRow();
    std::vector<SW_Window_TD_4295Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category10305 = tbl_Aggregate_TD_574_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_4295_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category10305);
        std::array<char, TPCDS_READ_MAX + 1> _i_class10306 = tbl_Aggregate_TD_574_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_4295_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_class10306);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand10307 = tbl_Aggregate_TD_574_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_4295_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_brand10307);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name10308 = tbl_Aggregate_TD_574_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_4295_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _i_product_name10308);
        int32_t _d_year10309 = tbl_Aggregate_TD_574_output.getInt32(i, 4);
        tbl_Window_TD_4295_output.setInt32(r, 4,_d_year10309);
        int32_t _d_qoy10310 = tbl_Aggregate_TD_574_output.getInt32(i, 5);
        tbl_Window_TD_4295_output.setInt32(r, 5,_d_qoy10310);
        int32_t _d_moy10311 = tbl_Aggregate_TD_574_output.getInt32(i, 6);
        tbl_Window_TD_4295_output.setInt32(r, 6,_d_moy10311);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id10312 = tbl_Aggregate_TD_574_output.getcharN<char, TPCDS_READ_MAX +1>(i, 7);
        tbl_Window_TD_4295_output.setcharN<char, TPCDS_READ_MAX +1>(r, 7, _s_store_id10312);
        int32_t _sumsales10291 = tbl_Aggregate_TD_574_output.getInt32(i, 8);
        tbl_Window_TD_4295_output.setInt32(r, 8,_sumsales10291);
        r++;
        SW_Window_TD_4295Row t = {std::string(_i_category10305.data()),std::string(_i_class10306.data()),std::string(_i_brand10307.data()),std::string(_i_product_name10308.data()),_d_year10309,_d_qoy10310,_d_moy10311,std::string(_s_store_id10312.data()),_sumsales10291};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4295Row& a, const SW_Window_TD_4295Row& b) const { return 
(a._i_category10305 < b._i_category10305) || 
 ((a._i_category10305 == b._i_category10305) && (a._sumsales10291 > b._sumsales10291)); 
}
    }SW_Window_TD_4295_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4295_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category10305 == rows0[i-1]._i_category10305);
        isSameOrderKey0 = ( rows0[i]._sumsales10291 == rows0[i-1]._sumsales10291);
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
        tbl_Window_TD_4295_output.setInt32(r, 9, ranks0[i]);
    }
    tbl_Window_TD_4295_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4295_output #Row: " << tbl_Window_TD_4295_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3129(Table &tbl_Window_TD_4295_output, Table &tbl_Filter_TD_3129_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((rk#10292 <= 100))
    // Input: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    // Output: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    int r = 0;
    int nrow1 = tbl_Window_TD_4295_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rk10292 = tbl_Window_TD_4295_output.getInt32(i, 9);
        if (_rk10292 <= 100) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category10305_t = tbl_Window_TD_4295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_3129_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category10305_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class10306_t = tbl_Window_TD_4295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_3129_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class10306_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand10307_t = tbl_Window_TD_4295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_3129_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand10307_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name10308_t = tbl_Window_TD_4295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_3129_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_product_name10308_t);
            int32_t _d_year10309_t = tbl_Window_TD_4295_output.getInt32(i, 4);
            tbl_Filter_TD_3129_output.setInt32(r, 4, _d_year10309_t);
            int32_t _d_qoy10310_t = tbl_Window_TD_4295_output.getInt32(i, 5);
            tbl_Filter_TD_3129_output.setInt32(r, 5, _d_qoy10310_t);
            int32_t _d_moy10311_t = tbl_Window_TD_4295_output.getInt32(i, 6);
            tbl_Filter_TD_3129_output.setInt32(r, 6, _d_moy10311_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id10312_t = tbl_Window_TD_4295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_3129_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_store_id10312_t);
            int32_t _sumsales10291_t = tbl_Window_TD_4295_output.getInt32(i, 8);
            tbl_Filter_TD_3129_output.setInt32(r, 8, _sumsales10291_t);
            int32_t _rk10292_t = tbl_Window_TD_4295_output.getInt32(i, 9);
            tbl_Filter_TD_3129_output.setInt32(r, 9, _rk10292_t);
            r++;
        }
    }
    tbl_Filter_TD_3129_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3129_output #Row: " << tbl_Filter_TD_3129_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2909(Table &tbl_Filter_TD_3129_output, Table &tbl_Sort_TD_2909_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_category#10305 ASC NULLS FIRST, i_class#10306 ASC NULLS FIRST, i_brand#10307 ASC NULLS FIRST, i_product_name#10308 ASC NULLS FIRST, d_year#10309 ASC NULLS FIRST, d_qoy#10310 ASC NULLS FIRST, d_moy#10311 ASC NULLS FIRST, s_store_id#10312 ASC NULLS FIRST, sumsales#10291 ASC NULLS FIRST, rk#10292 ASC NULLS FIRST)
    // Input: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    // Output: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    struct SW_Sort_TD_2909Row {
        std::string _i_category10305;
        std::string _i_class10306;
        std::string _i_brand10307;
        std::string _i_product_name10308;
        int32_t _d_year10309;
        int32_t _d_qoy10310;
        int32_t _d_moy10311;
        std::string _s_store_id10312;
        int32_t _sumsales10291;
        int32_t _rk10292;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2909Row& a, const SW_Sort_TD_2909Row& b) const { return 
 (a._i_category10305 < b._i_category10305) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 < b._i_class10306)) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 == b._i_class10306) && (a._i_brand10307 < b._i_brand10307)) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 == b._i_class10306) && (a._i_brand10307 == b._i_brand10307) && (a._i_product_name10308 < b._i_product_name10308)) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 == b._i_class10306) && (a._i_brand10307 == b._i_brand10307) && (a._i_product_name10308 == b._i_product_name10308) && (a._d_year10309 < b._d_year10309)) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 == b._i_class10306) && (a._i_brand10307 == b._i_brand10307) && (a._i_product_name10308 == b._i_product_name10308) && (a._d_year10309 == b._d_year10309) && (a._d_qoy10310 < b._d_qoy10310)) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 == b._i_class10306) && (a._i_brand10307 == b._i_brand10307) && (a._i_product_name10308 == b._i_product_name10308) && (a._d_year10309 == b._d_year10309) && (a._d_qoy10310 == b._d_qoy10310) && (a._d_moy10311 < b._d_moy10311)) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 == b._i_class10306) && (a._i_brand10307 == b._i_brand10307) && (a._i_product_name10308 == b._i_product_name10308) && (a._d_year10309 == b._d_year10309) && (a._d_qoy10310 == b._d_qoy10310) && (a._d_moy10311 == b._d_moy10311) && (a._s_store_id10312 < b._s_store_id10312)) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 == b._i_class10306) && (a._i_brand10307 == b._i_brand10307) && (a._i_product_name10308 == b._i_product_name10308) && (a._d_year10309 == b._d_year10309) && (a._d_qoy10310 == b._d_qoy10310) && (a._d_moy10311 == b._d_moy10311) && (a._s_store_id10312 == b._s_store_id10312) && (a._sumsales10291 < b._sumsales10291)) || 
 ((a._i_category10305 == b._i_category10305) && (a._i_class10306 == b._i_class10306) && (a._i_brand10307 == b._i_brand10307) && (a._i_product_name10308 == b._i_product_name10308) && (a._d_year10309 == b._d_year10309) && (a._d_qoy10310 == b._d_qoy10310) && (a._d_moy10311 == b._d_moy10311) && (a._s_store_id10312 == b._s_store_id10312) && (a._sumsales10291 == b._sumsales10291) && (a._rk10292 < b._rk10292)); 
}
    }SW_Sort_TD_2909_order; 

    int nrow1 = tbl_Filter_TD_3129_output.getNumRow();
    std::vector<SW_Sort_TD_2909Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category10305 = tbl_Filter_TD_3129_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_class10306 = tbl_Filter_TD_3129_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand10307 = tbl_Filter_TD_3129_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name10308 = tbl_Filter_TD_3129_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _d_year10309 = tbl_Filter_TD_3129_output.getInt32(i, 4);
        int32_t _d_qoy10310 = tbl_Filter_TD_3129_output.getInt32(i, 5);
        int32_t _d_moy10311 = tbl_Filter_TD_3129_output.getInt32(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id10312 = tbl_Filter_TD_3129_output.getcharN<char, TPCDS_READ_MAX +1>(i, 7);
        int32_t _sumsales10291 = tbl_Filter_TD_3129_output.getInt32(i, 8);
        int32_t _rk10292 = tbl_Filter_TD_3129_output.getInt32(i, 9);
        SW_Sort_TD_2909Row t = {std::string(_i_category10305.data()),std::string(_i_class10306.data()),std::string(_i_brand10307.data()),std::string(_i_product_name10308.data()),_d_year10309,_d_qoy10310,_d_moy10311,std::string(_s_store_id10312.data()),_sumsales10291,_rk10292};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2909_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category10305{};
        memcpy(_i_category10305.data(), (it._i_category10305).data(), (it._i_category10305).length());
        tbl_Sort_TD_2909_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category10305);
        std::array<char, TPCDS_READ_MAX + 1> _i_class10306{};
        memcpy(_i_class10306.data(), (it._i_class10306).data(), (it._i_class10306).length());
        tbl_Sort_TD_2909_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_class10306);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand10307{};
        memcpy(_i_brand10307.data(), (it._i_brand10307).data(), (it._i_brand10307).length());
        tbl_Sort_TD_2909_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_brand10307);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name10308{};
        memcpy(_i_product_name10308.data(), (it._i_product_name10308).data(), (it._i_product_name10308).length());
        tbl_Sort_TD_2909_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _i_product_name10308);
        tbl_Sort_TD_2909_output.setInt32(r, 4, it._d_year10309);
        tbl_Sort_TD_2909_output.setInt32(r, 5, it._d_qoy10310);
        tbl_Sort_TD_2909_output.setInt32(r, 6, it._d_moy10311);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id10312{};
        memcpy(_s_store_id10312.data(), (it._s_store_id10312).data(), (it._s_store_id10312).length());
        tbl_Sort_TD_2909_output.setcharN<char, TPCDS_READ_MAX +1>(r, 7, _s_store_id10312);
        tbl_Sort_TD_2909_output.setInt32(r, 8, it._sumsales10291);
        tbl_Sort_TD_2909_output.setInt32(r, 9, it._rk10292);
        ++r;
    }
    tbl_Sort_TD_2909_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2909_output #Row: " << tbl_Sort_TD_2909_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1783(Table &tbl_Sort_TD_2909_output, Table &tbl_LocalLimit_TD_1783_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    // Output: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category10305_n = tbl_Sort_TD_2909_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category10305_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class10306_n = tbl_Sort_TD_2909_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class10306_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand10307_n = tbl_Sort_TD_2909_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand10307_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name10308_n = tbl_Sort_TD_2909_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_product_name10308_n);
        tbl_LocalLimit_TD_1783_output.setInt32(r, 4, tbl_Sort_TD_2909_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1783_output.setInt32(r, 5, tbl_Sort_TD_2909_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1783_output.setInt32(r, 6, tbl_Sort_TD_2909_output.getInt32(i, 6));
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id10312_n = tbl_Sort_TD_2909_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        tbl_LocalLimit_TD_1783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_store_id10312_n);
        tbl_LocalLimit_TD_1783_output.setInt32(r, 8, tbl_Sort_TD_2909_output.getInt32(i, 8));
        tbl_LocalLimit_TD_1783_output.setInt32(r, 9, tbl_Sort_TD_2909_output.getInt32(i, 9));
        r++;
    }
    tbl_LocalLimit_TD_1783_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1783_output #Row: " << tbl_LocalLimit_TD_1783_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0842(Table &tbl_LocalLimit_TD_1783_output, Table &tbl_GlobalLimit_TD_0842_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    // Output: ListBuffer(i_category#10305, i_class#10306, i_brand#10307, i_product_name#10308, d_year#10309, d_qoy#10310, d_moy#10311, s_store_id#10312, sumsales#10291, rk#10292)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category10305_n = tbl_LocalLimit_TD_1783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0842_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category10305_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class10306_n = tbl_LocalLimit_TD_1783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0842_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class10306_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand10307_n = tbl_LocalLimit_TD_1783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0842_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand10307_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name10308_n = tbl_LocalLimit_TD_1783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0842_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_product_name10308_n);
        tbl_GlobalLimit_TD_0842_output.setInt32(r, 4, tbl_LocalLimit_TD_1783_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0842_output.setInt32(r, 5, tbl_LocalLimit_TD_1783_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0842_output.setInt32(r, 6, tbl_LocalLimit_TD_1783_output.getInt32(i, 6));
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id10312_n = tbl_LocalLimit_TD_1783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        tbl_GlobalLimit_TD_0842_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_store_id10312_n);
        tbl_GlobalLimit_TD_0842_output.setInt32(r, 8, tbl_LocalLimit_TD_1783_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0842_output.setInt32(r, 9, tbl_LocalLimit_TD_1783_output.getInt32(i, 9));
        r++;
    }
    tbl_GlobalLimit_TD_0842_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0842_output #Row: " << tbl_GlobalLimit_TD_0842_output.getNumRow() << std::endl;
}

