#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_14290(Table &tbl_SerializeFromObject_TD_15146_input, Table &tbl_Filter_TD_14290_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15146_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_15146_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_15146_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_15146_input.getInt32(i, 2);
        if ((_ss_item_sk1208!= 0) && ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_15146_input.getInt32(i, 0);
            tbl_Filter_TD_14290_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_15146_input.getInt32(i, 1);
            tbl_Filter_TD_14290_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_15146_input.getInt32(i, 2);
            tbl_Filter_TD_14290_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_15146_input.getInt32(i, 3);
            tbl_Filter_TD_14290_output.setInt32(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_14290_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14290_output #Row: " << tbl_Filter_TD_14290_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14512(Table &tbl_SerializeFromObject_TD_15719_input, Table &tbl_Filter_TD_14512_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND (isnotnull(i_category#240) AND isnotnull(i_brand#236))))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15719_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_15719_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_15719_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_15719_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk228!= 0) && (（std::string(_isnotnulli_category240.data()) != "NULL") && （std::string(_isnotnulli_brand236.data()) != "NULL"))) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15719_input.getInt32(i, 0);
            tbl_Filter_TD_14512_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_15719_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_14512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_15719_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_14512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_14512_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14512_output #Row: " << tbl_Filter_TD_14512_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13273(Table &tbl_SerializeFromObject_TD_14493_input, Table &tbl_Filter_TD_13273_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#126 = 1999) OR ((d_year#126 = 1998) AND (d_moy#128 = 12))) OR ((d_year#126 = 2000) AND (d_moy#128 = 1))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14493_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_14493_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_14493_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_14493_input.getInt32(i, 0);
        if ((((_d_year126 == 1999) || ((_d_year126 == 1998) && (_d_moy128 == 12))) || ((_d_year126 == 2000) && (_d_moy128 == 1))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_14493_input.getInt32(i, 0);
            tbl_Filter_TD_13273_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_14493_input.getInt32(i, 1);
            tbl_Filter_TD_13273_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_14493_input.getInt32(i, 2);
            tbl_Filter_TD_13273_output.setInt32(r, 2, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_13273_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13273_output #Row: " << tbl_Filter_TD_13273_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13213_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_13213_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13213_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13213_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_13213_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_13213_key_rightMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_13213_key_rightMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13213_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13213_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_13213_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
void SW_JOIN_INNER_TD_13213(Table &tbl_Filter_TD_14512_output, Table &tbl_Filter_TD_14290_output, Table &tbl_JOIN_INNER_TD_13213_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    int left_nrow = tbl_Filter_TD_14512_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14290_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13213_key_leftMajor, SW_JOIN_INNER_TD_13213_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14512_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14512_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13213_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14512_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_13213_payload_leftMajor payloadA{_i_item_sk228, _i_brand236, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14290_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_14290_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13213_key_leftMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_14290_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_14290_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_14290_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_14290_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13213_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13213_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_13213_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_13213_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_13213_output.setInt32(r, 4, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13213_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13213_key_rightMajor, SW_JOIN_INNER_TD_13213_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14290_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_14290_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13213_key_rightMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_14290_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_14290_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_14290_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_14290_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13213_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14512_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14512_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13213_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _i_item_sk228 = tbl_Filter_TD_14512_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_13213_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_13213_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_13213_output.setInt32(r, 4, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_13213_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13213_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13213_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13213_output #Row: " << tbl_JOIN_INNER_TD_13213_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12948(Table &tbl_SerializeFromObject_TD_13947_input, Table &tbl_Filter_TD_12948_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_item_sk#6054) AND isnotnull(ss_sold_date_sk#6052)) AND isnotnull(ss_store_sk#6059)))
    // Input: ListBuffer(ss_sold_date_sk#6052, ss_item_sk#6054, ss_store_sk#6059, ss_sales_price#6065)
    // Output: ListBuffer(ss_sold_date_sk#6052, ss_item_sk#6054, ss_store_sk#6059, ss_sales_price#6065)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13947_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk6054 = tbl_SerializeFromObject_TD_13947_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk6052 = tbl_SerializeFromObject_TD_13947_input.getInt32(i, 0);
        int32_t _ss_store_sk6059 = tbl_SerializeFromObject_TD_13947_input.getInt32(i, 2);
        if (((_ss_item_sk6054!= 0) && (_ss_sold_date_sk6052!= 0)) && (_ss_store_sk6059!= 0)) {
            int32_t _ss_sold_date_sk6052_t = tbl_SerializeFromObject_TD_13947_input.getInt32(i, 0);
            tbl_Filter_TD_12948_output.setInt32(r, 0, _ss_sold_date_sk6052_t);
            int32_t _ss_item_sk6054_t = tbl_SerializeFromObject_TD_13947_input.getInt32(i, 1);
            tbl_Filter_TD_12948_output.setInt32(r, 1, _ss_item_sk6054_t);
            int32_t _ss_store_sk6059_t = tbl_SerializeFromObject_TD_13947_input.getInt32(i, 2);
            tbl_Filter_TD_12948_output.setInt32(r, 2, _ss_store_sk6059_t);
            int32_t _ss_sales_price6065_t = tbl_SerializeFromObject_TD_13947_input.getInt32(i, 3);
            tbl_Filter_TD_12948_output.setInt32(r, 3, _ss_sales_price6065_t);
            r++;
        }
    }
    tbl_Filter_TD_12948_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12948_output #Row: " << tbl_Filter_TD_12948_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12215(Table &tbl_SerializeFromObject_TD_13437_input, Table &tbl_Filter_TD_12215_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#6030) AND (isnotnull(i_category#6042) AND isnotnull(i_brand#6038))))
    // Input: ListBuffer(i_item_sk#6030, i_brand#6038, i_category#6042)
    // Output: ListBuffer(i_item_sk#6030, i_brand#6038, i_category#6042)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13437_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk6030 = tbl_SerializeFromObject_TD_13437_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category6042 = tbl_SerializeFromObject_TD_13437_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6038 = tbl_SerializeFromObject_TD_13437_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk6030!= 0) && (（std::string(_isnotnulli_category6042.data()) != "NULL") && （std::string(_isnotnulli_brand6038.data()) != "NULL"))) {
            int32_t _i_item_sk6030_t = tbl_SerializeFromObject_TD_13437_input.getInt32(i, 0);
            tbl_Filter_TD_12215_output.setInt32(r, 0, _i_item_sk6030_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_t = tbl_SerializeFromObject_TD_13437_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12215_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand6038_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category6042_t = tbl_SerializeFromObject_TD_13437_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12215_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category6042_t);
            r++;
        }
    }
    tbl_Filter_TD_12215_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12215_output #Row: " << tbl_Filter_TD_12215_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1276(Table &tbl_SerializeFromObject_TD_13842_input, Table &tbl_Filter_TD_1276_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#378) AND (isnotnull(s_store_name#383) AND isnotnull(s_company_name#395))))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13842_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_13842_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_SerializeFromObject_TD_13842_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_SerializeFromObject_TD_13842_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk378!= 0) && (（std::string(_isnotnulls_store_name383.data()) != "NULL") && （std::string(_isnotnulls_company_name395.data()) != "NULL"))) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_13842_input.getInt32(i, 0);
            tbl_Filter_TD_1276_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_13842_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_SerializeFromObject_TD_13842_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_1276_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name395_t);
            r++;
        }
    }
    tbl_Filter_TD_1276_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1276_output #Row: " << tbl_Filter_TD_1276_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12952_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_12952_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12952_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12952_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_12952_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_12952_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_12952_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12952_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12952_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_12952_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_12952(Table &tbl_JOIN_INNER_TD_13213_output, Table &tbl_Filter_TD_13273_output, Table &tbl_JOIN_INNER_TD_12952_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(i_brand#236, i_category#240, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_store_sk#1213, ss_sales_price#1219, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_13213_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13273_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12952_key_leftMajor, SW_JOIN_INNER_TD_12952_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13213_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_13213_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12952_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13213_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13213_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_13213_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_13213_output.getInt32(i, 3);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_13213_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_12952_payload_leftMajor payloadA{_i_brand236, _i_category240, _ss_sold_date_sk1206, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13273_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13273_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12952_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_13273_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_13273_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Filter_TD_13273_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_12952_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12952_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12952_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_12952_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_12952_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12952_output.setInt32(r, 5, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12952_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12952_key_rightMajor, SW_JOIN_INNER_TD_12952_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13273_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13273_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12952_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_13273_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_13273_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Filter_TD_13273_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12952_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13213_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_13213_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12952_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13213_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13213_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_13213_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_13213_output.getInt32(i, 3);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_13213_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_12952_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12952_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_12952_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12952_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12952_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_12952_output.setInt32(r, 3, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12952_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12952_output #Row: " << tbl_JOIN_INNER_TD_12952_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11301(Table &tbl_SerializeFromObject_TD_12771_input, Table &tbl_Filter_TD_11301_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_item_sk#6161) AND isnotnull(ss_sold_date_sk#6159)) AND isnotnull(ss_store_sk#6166)))
    // Input: ListBuffer(ss_sold_date_sk#6159, ss_item_sk#6161, ss_store_sk#6166, ss_sales_price#6172)
    // Output: ListBuffer(ss_sold_date_sk#6159, ss_item_sk#6161, ss_store_sk#6166, ss_sales_price#6172)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12771_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk6161 = tbl_SerializeFromObject_TD_12771_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk6159 = tbl_SerializeFromObject_TD_12771_input.getInt32(i, 0);
        int32_t _ss_store_sk6166 = tbl_SerializeFromObject_TD_12771_input.getInt32(i, 2);
        if (((_ss_item_sk6161!= 0) && (_ss_sold_date_sk6159!= 0)) && (_ss_store_sk6166!= 0)) {
            int32_t _ss_sold_date_sk6159_t = tbl_SerializeFromObject_TD_12771_input.getInt32(i, 0);
            tbl_Filter_TD_11301_output.setInt32(r, 0, _ss_sold_date_sk6159_t);
            int32_t _ss_item_sk6161_t = tbl_SerializeFromObject_TD_12771_input.getInt32(i, 1);
            tbl_Filter_TD_11301_output.setInt32(r, 1, _ss_item_sk6161_t);
            int32_t _ss_store_sk6166_t = tbl_SerializeFromObject_TD_12771_input.getInt32(i, 2);
            tbl_Filter_TD_11301_output.setInt32(r, 2, _ss_store_sk6166_t);
            int32_t _ss_sales_price6172_t = tbl_SerializeFromObject_TD_12771_input.getInt32(i, 3);
            tbl_Filter_TD_11301_output.setInt32(r, 3, _ss_sales_price6172_t);
            r++;
        }
    }
    tbl_Filter_TD_11301_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11301_output #Row: " << tbl_Filter_TD_11301_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11784(Table &tbl_SerializeFromObject_TD_12522_input, Table &tbl_Filter_TD_11784_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#6137) AND (isnotnull(i_category#6149) AND isnotnull(i_brand#6145))))
    // Input: ListBuffer(i_item_sk#6137, i_brand#6145, i_category#6149)
    // Output: ListBuffer(i_item_sk#6137, i_brand#6145, i_category#6149)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12522_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk6137 = tbl_SerializeFromObject_TD_12522_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category6149 = tbl_SerializeFromObject_TD_12522_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6145 = tbl_SerializeFromObject_TD_12522_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk6137!= 0) && (（std::string(_isnotnulli_category6149.data()) != "NULL") && （std::string(_isnotnulli_brand6145.data()) != "NULL"))) {
            int32_t _i_item_sk6137_t = tbl_SerializeFromObject_TD_12522_input.getInt32(i, 0);
            tbl_Filter_TD_11784_output.setInt32(r, 0, _i_item_sk6137_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_t = tbl_SerializeFromObject_TD_12522_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11784_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand6145_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category6149_t = tbl_SerializeFromObject_TD_12522_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_11784_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category6149_t);
            r++;
        }
    }
    tbl_Filter_TD_11784_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11784_output #Row: " << tbl_Filter_TD_11784_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11828(Table &tbl_SerializeFromObject_TD_12902_input, Table &tbl_Filter_TD_11828_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#6081 = 1999) OR ((d_year#6081 = 1998) AND (d_moy#6083 = 12))) OR ((d_year#6081 = 2000) AND (d_moy#6083 = 1))) AND isnotnull(d_date_sk#6075)))
    // Input: ListBuffer(d_date_sk#6075, d_year#6081, d_moy#6083)
    // Output: ListBuffer(d_date_sk#6075, d_year#6081, d_moy#6083)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12902_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6081 = tbl_SerializeFromObject_TD_12902_input.getInt32(i, 1);
        int32_t _d_moy6083 = tbl_SerializeFromObject_TD_12902_input.getInt32(i, 2);
        int32_t _d_date_sk6075 = tbl_SerializeFromObject_TD_12902_input.getInt32(i, 0);
        if ((((_d_year6081 == 1999) || ((_d_year6081 == 1998) && (_d_moy6083 == 12))) || ((_d_year6081 == 2000) && (_d_moy6083 == 1))) && (_d_date_sk6075!= 0)) {
            int32_t _d_date_sk6075_t = tbl_SerializeFromObject_TD_12902_input.getInt32(i, 0);
            tbl_Filter_TD_11828_output.setInt32(r, 0, _d_date_sk6075_t);
            int32_t _d_year6081_t = tbl_SerializeFromObject_TD_12902_input.getInt32(i, 1);
            tbl_Filter_TD_11828_output.setInt32(r, 1, _d_year6081_t);
            int32_t _d_moy6083_t = tbl_SerializeFromObject_TD_12902_input.getInt32(i, 2);
            tbl_Filter_TD_11828_output.setInt32(r, 2, _d_moy6083_t);
            r++;
        }
    }
    tbl_Filter_TD_11828_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11828_output #Row: " << tbl_Filter_TD_11828_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11390_key_leftMajor {
    int32_t _i_item_sk6030;
    bool operator==(const SW_JOIN_INNER_TD_11390_key_leftMajor& other) const {
        return ((_i_item_sk6030 == other._i_item_sk6030));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11390_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11390_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6030));
    }
};
}
struct SW_JOIN_INNER_TD_11390_payload_leftMajor {
    int32_t _i_item_sk6030;
    std::string _i_brand6038;
    std::string _i_category6042;
};
struct SW_JOIN_INNER_TD_11390_key_rightMajor {
    int32_t _ss_item_sk6054;
    bool operator==(const SW_JOIN_INNER_TD_11390_key_rightMajor& other) const {
        return ((_ss_item_sk6054 == other._ss_item_sk6054));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11390_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11390_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk6054));
    }
};
}
struct SW_JOIN_INNER_TD_11390_payload_rightMajor {
    int32_t _ss_sold_date_sk6052;
    int32_t _ss_item_sk6054;
    int32_t _ss_store_sk6059;
    int32_t _ss_sales_price6065;
};
void SW_JOIN_INNER_TD_11390(Table &tbl_Filter_TD_12215_output, Table &tbl_Filter_TD_12948_output, Table &tbl_JOIN_INNER_TD_11390_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#6054 = i_item_sk#6030))
    // Left Table: ListBuffer(i_item_sk#6030, i_brand#6038, i_category#6042)
    // Right Table: ListBuffer(ss_sold_date_sk#6052, ss_item_sk#6054, ss_store_sk#6059, ss_sales_price#6065)
    // Output Table: ListBuffer(i_brand#6038, i_category#6042, ss_sold_date_sk#6052, ss_store_sk#6059, ss_sales_price#6065)
    int left_nrow = tbl_Filter_TD_12215_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12948_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11390_key_leftMajor, SW_JOIN_INNER_TD_11390_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12215_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6030_k = tbl_Filter_TD_12215_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11390_key_leftMajor keyA{_i_item_sk6030_k};
            int32_t _i_item_sk6030 = tbl_Filter_TD_12215_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n = tbl_Filter_TD_12215_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand6038 = std::string(_i_brand6038_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n = tbl_Filter_TD_12215_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category6042 = std::string(_i_category6042_n.data());
            SW_JOIN_INNER_TD_11390_payload_leftMajor payloadA{_i_item_sk6030, _i_brand6038, _i_category6042};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12948_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk6054_k = tbl_Filter_TD_12948_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11390_key_leftMajor{_ss_item_sk6054_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6030 = (it->second)._i_item_sk6030;
                std::string _i_brand6038 = (it->second)._i_brand6038;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n{};
                memcpy(_i_brand6038_n.data(), (_i_brand6038).data(), (_i_brand6038).length());
                std::string _i_category6042 = (it->second)._i_category6042;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n{};
                memcpy(_i_category6042_n.data(), (_i_category6042).data(), (_i_category6042).length());
                int32_t _ss_sold_date_sk6052 = tbl_Filter_TD_12948_output.getInt32(i, 0);
                int32_t _ss_item_sk6054 = tbl_Filter_TD_12948_output.getInt32(i, 1);
                int32_t _ss_store_sk6059 = tbl_Filter_TD_12948_output.getInt32(i, 2);
                int32_t _ss_sales_price6065 = tbl_Filter_TD_12948_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11390_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6038_n);
                tbl_JOIN_INNER_TD_11390_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6042_n);
                tbl_JOIN_INNER_TD_11390_output.setInt32(r, 2, _ss_sold_date_sk6052);
                tbl_JOIN_INNER_TD_11390_output.setInt32(r, 3, _ss_store_sk6059);
                tbl_JOIN_INNER_TD_11390_output.setInt32(r, 4, _ss_sales_price6065);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11390_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11390_key_rightMajor, SW_JOIN_INNER_TD_11390_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12948_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk6054_k = tbl_Filter_TD_12948_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11390_key_rightMajor keyA{_ss_item_sk6054_k};
            int32_t _ss_sold_date_sk6052 = tbl_Filter_TD_12948_output.getInt32(i, 0);
            int32_t _ss_item_sk6054 = tbl_Filter_TD_12948_output.getInt32(i, 1);
            int32_t _ss_store_sk6059 = tbl_Filter_TD_12948_output.getInt32(i, 2);
            int32_t _ss_sales_price6065 = tbl_Filter_TD_12948_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11390_payload_rightMajor payloadA{_ss_sold_date_sk6052, _ss_item_sk6054, _ss_store_sk6059, _ss_sales_price6065};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12215_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6030_k = tbl_Filter_TD_12215_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11390_key_rightMajor{_i_item_sk6030_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk6052 = (it->second)._ss_sold_date_sk6052;
                int32_t _ss_item_sk6054 = (it->second)._ss_item_sk6054;
                int32_t _ss_store_sk6059 = (it->second)._ss_store_sk6059;
                int32_t _ss_sales_price6065 = (it->second)._ss_sales_price6065;
                int32_t _i_item_sk6030 = tbl_Filter_TD_12215_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n = tbl_Filter_TD_12215_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand6038 = std::string(_i_brand6038_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n = tbl_Filter_TD_12215_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category6042 = std::string(_i_category6042_n.data());
                tbl_JOIN_INNER_TD_11390_output.setInt32(r, 2, _ss_sold_date_sk6052);
                tbl_JOIN_INNER_TD_11390_output.setInt32(r, 3, _ss_store_sk6059);
                tbl_JOIN_INNER_TD_11390_output.setInt32(r, 4, _ss_sales_price6065);
                tbl_JOIN_INNER_TD_11390_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6038_n);
                tbl_JOIN_INNER_TD_11390_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6042_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11390_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11390_output #Row: " << tbl_JOIN_INNER_TD_11390_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11649_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_11649_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11649_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11649_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_11649_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
    int32_t _d_year126;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_11649_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_11649_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11649_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11649_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_11649_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
    std::string _s_company_name395;
};
void SW_JOIN_INNER_TD_11649(Table &tbl_JOIN_INNER_TD_12952_output, Table &tbl_Filter_TD_1276_output, Table &tbl_JOIN_INNER_TD_11649_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(i_brand#236, i_category#240, ss_store_sk#1213, ss_sales_price#1219, d_year#126, d_moy#128)
    // Right Table: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_sales_price#1219, d_year#126, d_moy#128, s_store_name#383, s_company_name#395)
    int left_nrow = tbl_JOIN_INNER_TD_12952_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1276_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11649_key_leftMajor, SW_JOIN_INNER_TD_11649_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12952_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11649_key_leftMajor keyA{_ss_store_sk1213_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12952_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12952_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11649_payload_leftMajor payloadA{_i_brand236, _i_category240, _ss_store_sk1213, _ss_sales_price1219, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1276_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_1276_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11649_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _s_store_sk378 = tbl_Filter_TD_1276_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                tbl_JOIN_INNER_TD_11649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11649_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_11649_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11649_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_11649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_11649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name395_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11649_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11649_key_rightMajor, SW_JOIN_INNER_TD_11649_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1276_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_1276_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11649_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_1276_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_1276_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            SW_JOIN_INNER_TD_11649_payload_rightMajor payloadA{_s_store_sk378, _s_store_name383, _s_company_name395};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12952_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11649_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_company_name395 = (it->second)._s_company_name395;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n{};
                memcpy(_s_company_name395_n.data(), (_s_company_name395).data(), (_s_company_name395).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12952_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12952_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_12952_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_11649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name395_n);
                tbl_JOIN_INNER_TD_11649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11649_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_11649_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11649_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11649_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11649_output #Row: " << tbl_JOIN_INNER_TD_11649_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10454(Table &tbl_SerializeFromObject_TD_11478_input, Table &tbl_Filter_TD_10454_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#6188 = 1999) OR ((d_year#6188 = 1998) AND (d_moy#6190 = 12))) OR ((d_year#6188 = 2000) AND (d_moy#6190 = 1))) AND isnotnull(d_date_sk#6182)))
    // Input: ListBuffer(d_date_sk#6182, d_year#6188, d_moy#6190)
    // Output: ListBuffer(d_date_sk#6182, d_year#6188, d_moy#6190)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11478_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6188 = tbl_SerializeFromObject_TD_11478_input.getInt32(i, 1);
        int32_t _d_moy6190 = tbl_SerializeFromObject_TD_11478_input.getInt32(i, 2);
        int32_t _d_date_sk6182 = tbl_SerializeFromObject_TD_11478_input.getInt32(i, 0);
        if ((((_d_year6188 == 1999) || ((_d_year6188 == 1998) && (_d_moy6190 == 12))) || ((_d_year6188 == 2000) && (_d_moy6190 == 1))) && (_d_date_sk6182!= 0)) {
            int32_t _d_date_sk6182_t = tbl_SerializeFromObject_TD_11478_input.getInt32(i, 0);
            tbl_Filter_TD_10454_output.setInt32(r, 0, _d_date_sk6182_t);
            int32_t _d_year6188_t = tbl_SerializeFromObject_TD_11478_input.getInt32(i, 1);
            tbl_Filter_TD_10454_output.setInt32(r, 1, _d_year6188_t);
            int32_t _d_moy6190_t = tbl_SerializeFromObject_TD_11478_input.getInt32(i, 2);
            tbl_Filter_TD_10454_output.setInt32(r, 2, _d_moy6190_t);
            r++;
        }
    }
    tbl_Filter_TD_10454_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10454_output #Row: " << tbl_Filter_TD_10454_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10168_key_leftMajor {
    int32_t _i_item_sk6137;
    bool operator==(const SW_JOIN_INNER_TD_10168_key_leftMajor& other) const {
        return ((_i_item_sk6137 == other._i_item_sk6137));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10168_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10168_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6137));
    }
};
}
struct SW_JOIN_INNER_TD_10168_payload_leftMajor {
    int32_t _i_item_sk6137;
    std::string _i_brand6145;
    std::string _i_category6149;
};
struct SW_JOIN_INNER_TD_10168_key_rightMajor {
    int32_t _ss_item_sk6161;
    bool operator==(const SW_JOIN_INNER_TD_10168_key_rightMajor& other) const {
        return ((_ss_item_sk6161 == other._ss_item_sk6161));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10168_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10168_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk6161));
    }
};
}
struct SW_JOIN_INNER_TD_10168_payload_rightMajor {
    int32_t _ss_sold_date_sk6159;
    int32_t _ss_item_sk6161;
    int32_t _ss_store_sk6166;
    int32_t _ss_sales_price6172;
};
void SW_JOIN_INNER_TD_10168(Table &tbl_Filter_TD_11784_output, Table &tbl_Filter_TD_11301_output, Table &tbl_JOIN_INNER_TD_10168_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#6161 = i_item_sk#6137))
    // Left Table: ListBuffer(i_item_sk#6137, i_brand#6145, i_category#6149)
    // Right Table: ListBuffer(ss_sold_date_sk#6159, ss_item_sk#6161, ss_store_sk#6166, ss_sales_price#6172)
    // Output Table: ListBuffer(i_brand#6145, i_category#6149, ss_sold_date_sk#6159, ss_store_sk#6166, ss_sales_price#6172)
    int left_nrow = tbl_Filter_TD_11784_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11301_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10168_key_leftMajor, SW_JOIN_INNER_TD_10168_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11784_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6137_k = tbl_Filter_TD_11784_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10168_key_leftMajor keyA{_i_item_sk6137_k};
            int32_t _i_item_sk6137 = tbl_Filter_TD_11784_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n = tbl_Filter_TD_11784_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand6145 = std::string(_i_brand6145_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n = tbl_Filter_TD_11784_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category6149 = std::string(_i_category6149_n.data());
            SW_JOIN_INNER_TD_10168_payload_leftMajor payloadA{_i_item_sk6137, _i_brand6145, _i_category6149};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11301_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk6161_k = tbl_Filter_TD_11301_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10168_key_leftMajor{_ss_item_sk6161_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6137 = (it->second)._i_item_sk6137;
                std::string _i_brand6145 = (it->second)._i_brand6145;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n{};
                memcpy(_i_brand6145_n.data(), (_i_brand6145).data(), (_i_brand6145).length());
                std::string _i_category6149 = (it->second)._i_category6149;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n{};
                memcpy(_i_category6149_n.data(), (_i_category6149).data(), (_i_category6149).length());
                int32_t _ss_sold_date_sk6159 = tbl_Filter_TD_11301_output.getInt32(i, 0);
                int32_t _ss_item_sk6161 = tbl_Filter_TD_11301_output.getInt32(i, 1);
                int32_t _ss_store_sk6166 = tbl_Filter_TD_11301_output.getInt32(i, 2);
                int32_t _ss_sales_price6172 = tbl_Filter_TD_11301_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6145_n);
                tbl_JOIN_INNER_TD_10168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6149_n);
                tbl_JOIN_INNER_TD_10168_output.setInt32(r, 2, _ss_sold_date_sk6159);
                tbl_JOIN_INNER_TD_10168_output.setInt32(r, 3, _ss_store_sk6166);
                tbl_JOIN_INNER_TD_10168_output.setInt32(r, 4, _ss_sales_price6172);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10168_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10168_key_rightMajor, SW_JOIN_INNER_TD_10168_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11301_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk6161_k = tbl_Filter_TD_11301_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10168_key_rightMajor keyA{_ss_item_sk6161_k};
            int32_t _ss_sold_date_sk6159 = tbl_Filter_TD_11301_output.getInt32(i, 0);
            int32_t _ss_item_sk6161 = tbl_Filter_TD_11301_output.getInt32(i, 1);
            int32_t _ss_store_sk6166 = tbl_Filter_TD_11301_output.getInt32(i, 2);
            int32_t _ss_sales_price6172 = tbl_Filter_TD_11301_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10168_payload_rightMajor payloadA{_ss_sold_date_sk6159, _ss_item_sk6161, _ss_store_sk6166, _ss_sales_price6172};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11784_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6137_k = tbl_Filter_TD_11784_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10168_key_rightMajor{_i_item_sk6137_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk6159 = (it->second)._ss_sold_date_sk6159;
                int32_t _ss_item_sk6161 = (it->second)._ss_item_sk6161;
                int32_t _ss_store_sk6166 = (it->second)._ss_store_sk6166;
                int32_t _ss_sales_price6172 = (it->second)._ss_sales_price6172;
                int32_t _i_item_sk6137 = tbl_Filter_TD_11784_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n = tbl_Filter_TD_11784_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand6145 = std::string(_i_brand6145_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n = tbl_Filter_TD_11784_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category6149 = std::string(_i_category6149_n.data());
                tbl_JOIN_INNER_TD_10168_output.setInt32(r, 2, _ss_sold_date_sk6159);
                tbl_JOIN_INNER_TD_10168_output.setInt32(r, 3, _ss_store_sk6166);
                tbl_JOIN_INNER_TD_10168_output.setInt32(r, 4, _ss_sales_price6172);
                tbl_JOIN_INNER_TD_10168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6145_n);
                tbl_JOIN_INNER_TD_10168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6149_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10168_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10168_output #Row: " << tbl_JOIN_INNER_TD_10168_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10585(Table &tbl_SerializeFromObject_TD_11249_input, Table &tbl_Filter_TD_10585_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#6103) AND (isnotnull(s_store_name#6108) AND isnotnull(s_company_name#6120))))
    // Input: ListBuffer(s_store_sk#6103, s_store_name#6108, s_company_name#6120)
    // Output: ListBuffer(s_store_sk#6103, s_store_name#6108, s_company_name#6120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11249_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk6103 = tbl_SerializeFromObject_TD_11249_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108 = tbl_SerializeFromObject_TD_11249_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120 = tbl_SerializeFromObject_TD_11249_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk6103!= 0) && (（std::string(_isnotnulls_store_name6108.data()) != "NULL") && （std::string(_isnotnulls_company_name6120.data()) != "NULL"))) {
            int32_t _s_store_sk6103_t = tbl_SerializeFromObject_TD_11249_input.getInt32(i, 0);
            tbl_Filter_TD_10585_output.setInt32(r, 0, _s_store_sk6103_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_t = tbl_SerializeFromObject_TD_11249_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10585_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name6108_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_t = tbl_SerializeFromObject_TD_11249_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10585_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name6120_t);
            r++;
        }
    }
    tbl_Filter_TD_10585_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10585_output #Row: " << tbl_Filter_TD_10585_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1059_key_leftMajor {
    int32_t _ss_sold_date_sk6052;
    bool operator==(const SW_JOIN_INNER_TD_1059_key_leftMajor& other) const {
        return ((_ss_sold_date_sk6052 == other._ss_sold_date_sk6052));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1059_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1059_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk6052));
    }
};
}
struct SW_JOIN_INNER_TD_1059_payload_leftMajor {
    std::string _i_brand6038;
    std::string _i_category6042;
    int32_t _ss_sold_date_sk6052;
    int32_t _ss_store_sk6059;
    int32_t _ss_sales_price6065;
};
struct SW_JOIN_INNER_TD_1059_key_rightMajor {
    int32_t _d_date_sk6075;
    bool operator==(const SW_JOIN_INNER_TD_1059_key_rightMajor& other) const {
        return ((_d_date_sk6075 == other._d_date_sk6075));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1059_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1059_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6075));
    }
};
}
struct SW_JOIN_INNER_TD_1059_payload_rightMajor {
    int32_t _d_date_sk6075;
    int32_t _d_year6081;
    int32_t _d_moy6083;
};
void SW_JOIN_INNER_TD_1059(Table &tbl_JOIN_INNER_TD_11390_output, Table &tbl_Filter_TD_11828_output, Table &tbl_JOIN_INNER_TD_1059_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#6052 = d_date_sk#6075))
    // Left Table: ListBuffer(i_brand#6038, i_category#6042, ss_sold_date_sk#6052, ss_store_sk#6059, ss_sales_price#6065)
    // Right Table: ListBuffer(d_date_sk#6075, d_year#6081, d_moy#6083)
    // Output Table: ListBuffer(i_brand#6038, i_category#6042, ss_store_sk#6059, ss_sales_price#6065, d_year#6081, d_moy#6083)
    int left_nrow = tbl_JOIN_INNER_TD_11390_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11828_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1059_key_leftMajor, SW_JOIN_INNER_TD_1059_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11390_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk6052_k = tbl_JOIN_INNER_TD_11390_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_1059_key_leftMajor keyA{_ss_sold_date_sk6052_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n = tbl_JOIN_INNER_TD_11390_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand6038 = std::string(_i_brand6038_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n = tbl_JOIN_INNER_TD_11390_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category6042 = std::string(_i_category6042_n.data());
            int32_t _ss_sold_date_sk6052 = tbl_JOIN_INNER_TD_11390_output.getInt32(i, 2);
            int32_t _ss_store_sk6059 = tbl_JOIN_INNER_TD_11390_output.getInt32(i, 3);
            int32_t _ss_sales_price6065 = tbl_JOIN_INNER_TD_11390_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_1059_payload_leftMajor payloadA{_i_brand6038, _i_category6042, _ss_sold_date_sk6052, _ss_store_sk6059, _ss_sales_price6065};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11828_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6075_k = tbl_Filter_TD_11828_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1059_key_leftMajor{_d_date_sk6075_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand6038 = (it->second)._i_brand6038;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n{};
                memcpy(_i_brand6038_n.data(), (_i_brand6038).data(), (_i_brand6038).length());
                std::string _i_category6042 = (it->second)._i_category6042;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n{};
                memcpy(_i_category6042_n.data(), (_i_category6042).data(), (_i_category6042).length());
                int32_t _ss_sold_date_sk6052 = (it->second)._ss_sold_date_sk6052;
                int32_t _ss_store_sk6059 = (it->second)._ss_store_sk6059;
                int32_t _ss_sales_price6065 = (it->second)._ss_sales_price6065;
                int32_t _d_date_sk6075 = tbl_Filter_TD_11828_output.getInt32(i, 0);
                int32_t _d_year6081 = tbl_Filter_TD_11828_output.getInt32(i, 1);
                int32_t _d_moy6083 = tbl_Filter_TD_11828_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_1059_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6038_n);
                tbl_JOIN_INNER_TD_1059_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6042_n);
                tbl_JOIN_INNER_TD_1059_output.setInt32(r, 2, _ss_store_sk6059);
                tbl_JOIN_INNER_TD_1059_output.setInt32(r, 3, _ss_sales_price6065);
                tbl_JOIN_INNER_TD_1059_output.setInt32(r, 4, _d_year6081);
                tbl_JOIN_INNER_TD_1059_output.setInt32(r, 5, _d_moy6083);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1059_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1059_key_rightMajor, SW_JOIN_INNER_TD_1059_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11828_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6075_k = tbl_Filter_TD_11828_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1059_key_rightMajor keyA{_d_date_sk6075_k};
            int32_t _d_date_sk6075 = tbl_Filter_TD_11828_output.getInt32(i, 0);
            int32_t _d_year6081 = tbl_Filter_TD_11828_output.getInt32(i, 1);
            int32_t _d_moy6083 = tbl_Filter_TD_11828_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_1059_payload_rightMajor payloadA{_d_date_sk6075, _d_year6081, _d_moy6083};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11390_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk6052_k = tbl_JOIN_INNER_TD_11390_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1059_key_rightMajor{_ss_sold_date_sk6052_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6075 = (it->second)._d_date_sk6075;
                int32_t _d_year6081 = (it->second)._d_year6081;
                int32_t _d_moy6083 = (it->second)._d_moy6083;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n = tbl_JOIN_INNER_TD_11390_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand6038 = std::string(_i_brand6038_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n = tbl_JOIN_INNER_TD_11390_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category6042 = std::string(_i_category6042_n.data());
                int32_t _ss_sold_date_sk6052 = tbl_JOIN_INNER_TD_11390_output.getInt32(i, 2);
                int32_t _ss_store_sk6059 = tbl_JOIN_INNER_TD_11390_output.getInt32(i, 3);
                int32_t _ss_sales_price6065 = tbl_JOIN_INNER_TD_11390_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_1059_output.setInt32(r, 4, _d_year6081);
                tbl_JOIN_INNER_TD_1059_output.setInt32(r, 5, _d_moy6083);
                tbl_JOIN_INNER_TD_1059_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6038_n);
                tbl_JOIN_INNER_TD_1059_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6042_n);
                tbl_JOIN_INNER_TD_1059_output.setInt32(r, 2, _ss_store_sk6059);
                tbl_JOIN_INNER_TD_1059_output.setInt32(r, 3, _ss_sales_price6065);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1059_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1059_output #Row: " << tbl_JOIN_INNER_TD_1059_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1067_key {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_1067_key& other) const { return (_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395) && (_d_year126 == other._d_year126) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1067_key> {
    std::size_t operator() (const SW_Aggregate_TD_1067_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_1067_payload {
    int32_t _sum_sales5266_sum_0;
    int32_t __w05280_sum_1;
};
void SW_Aggregate_TD_1067(Table &tbl_JOIN_INNER_TD_11649_output, Table &tbl_Aggregate_TD_1067_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS sum_sales#5266, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS _w0#5280)
    // Input: ListBuffer(i_brand#236, i_category#240, ss_sales_price#1219, d_year#126, d_moy#128, s_store_name#383, s_company_name#395)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, _w0#5280)
    std::unordered_map<SW_Aggregate_TD_1067_key, SW_Aggregate_TD_1067_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11649_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_11649_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_11649_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_11649_output.getInt32(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_11649_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_11649_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_11649_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_JOIN_INNER_TD_11649_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_1067_key k{std::string(_i_category240.data()), std::string(_i_brand236.data()), std::string(_s_store_name383.data()), std::string(_s_company_name395.data()), _d_year126, _d_moy128};
        int64_t _sum_sales5266_sum_0 = _ss_sales_price1219;
        int64_t __w05280_sum_1 = _ss_sales_price1219;
        SW_Aggregate_TD_1067_payload p{_sum_sales5266_sum_0, __w05280_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales5266_sum_0 + _sum_sales5266_sum_0;
            p._sum_sales5266_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w05280_sum_1 + __w05280_sum_1;
            p.__w05280_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_1067_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), ((it.first)._i_brand236).data(), ((it.first)._i_brand236).length());
        tbl_Aggregate_TD_1067_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), ((it.first)._s_store_name383).data(), ((it.first)._s_store_name383).length());
        tbl_Aggregate_TD_1067_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395{};
        memcpy(_s_company_name395.data(), ((it.first)._s_company_name395).data(), ((it.first)._s_company_name395).length());
        tbl_Aggregate_TD_1067_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395);
        tbl_Aggregate_TD_1067_output.setInt32(r, 4, (it.first)._d_year126);
        tbl_Aggregate_TD_1067_output.setInt32(r, 5, (it.first)._d_moy128);
        int32_t _sum_sales5266 = (it.second)._sum_sales5266_sum_0;
        tbl_Aggregate_TD_1067_output.setInt32(r, 6, _sum_sales5266);
        int32_t __w05280 = (it.second).__w05280_sum_1;
        tbl_Aggregate_TD_1067_output.setInt32(r, 7, __w05280);
        ++r;
    }
    tbl_Aggregate_TD_1067_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1067_output #Row: " << tbl_Aggregate_TD_1067_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9186(Table &tbl_SerializeFromObject_TD_10126_input, Table &tbl_Filter_TD_9186_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#6210) AND (isnotnull(s_store_name#6215) AND isnotnull(s_company_name#6227))))
    // Input: ListBuffer(s_store_sk#6210, s_store_name#6215, s_company_name#6227)
    // Output: ListBuffer(s_store_sk#6210, s_store_name#6215, s_company_name#6227)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10126_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk6210 = tbl_SerializeFromObject_TD_10126_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215 = tbl_SerializeFromObject_TD_10126_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227 = tbl_SerializeFromObject_TD_10126_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk6210!= 0) && (（std::string(_isnotnulls_store_name6215.data()) != "NULL") && （std::string(_isnotnulls_company_name6227.data()) != "NULL"))) {
            int32_t _s_store_sk6210_t = tbl_SerializeFromObject_TD_10126_input.getInt32(i, 0);
            tbl_Filter_TD_9186_output.setInt32(r, 0, _s_store_sk6210_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_t = tbl_SerializeFromObject_TD_10126_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9186_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name6215_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_t = tbl_SerializeFromObject_TD_10126_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9186_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name6227_t);
            r++;
        }
    }
    tbl_Filter_TD_9186_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9186_output #Row: " << tbl_Filter_TD_9186_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_974_key_leftMajor {
    int32_t _ss_sold_date_sk6159;
    bool operator==(const SW_JOIN_INNER_TD_974_key_leftMajor& other) const {
        return ((_ss_sold_date_sk6159 == other._ss_sold_date_sk6159));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_974_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_974_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk6159));
    }
};
}
struct SW_JOIN_INNER_TD_974_payload_leftMajor {
    std::string _i_brand6145;
    std::string _i_category6149;
    int32_t _ss_sold_date_sk6159;
    int32_t _ss_store_sk6166;
    int32_t _ss_sales_price6172;
};
struct SW_JOIN_INNER_TD_974_key_rightMajor {
    int32_t _d_date_sk6182;
    bool operator==(const SW_JOIN_INNER_TD_974_key_rightMajor& other) const {
        return ((_d_date_sk6182 == other._d_date_sk6182));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_974_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_974_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6182));
    }
};
}
struct SW_JOIN_INNER_TD_974_payload_rightMajor {
    int32_t _d_date_sk6182;
    int32_t _d_year6188;
    int32_t _d_moy6190;
};
void SW_JOIN_INNER_TD_974(Table &tbl_JOIN_INNER_TD_10168_output, Table &tbl_Filter_TD_10454_output, Table &tbl_JOIN_INNER_TD_974_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#6159 = d_date_sk#6182))
    // Left Table: ListBuffer(i_brand#6145, i_category#6149, ss_sold_date_sk#6159, ss_store_sk#6166, ss_sales_price#6172)
    // Right Table: ListBuffer(d_date_sk#6182, d_year#6188, d_moy#6190)
    // Output Table: ListBuffer(i_brand#6145, i_category#6149, ss_store_sk#6166, ss_sales_price#6172, d_year#6188, d_moy#6190)
    int left_nrow = tbl_JOIN_INNER_TD_10168_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10454_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_974_key_leftMajor, SW_JOIN_INNER_TD_974_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10168_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk6159_k = tbl_JOIN_INNER_TD_10168_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_974_key_leftMajor keyA{_ss_sold_date_sk6159_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n = tbl_JOIN_INNER_TD_10168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand6145 = std::string(_i_brand6145_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n = tbl_JOIN_INNER_TD_10168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category6149 = std::string(_i_category6149_n.data());
            int32_t _ss_sold_date_sk6159 = tbl_JOIN_INNER_TD_10168_output.getInt32(i, 2);
            int32_t _ss_store_sk6166 = tbl_JOIN_INNER_TD_10168_output.getInt32(i, 3);
            int32_t _ss_sales_price6172 = tbl_JOIN_INNER_TD_10168_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_974_payload_leftMajor payloadA{_i_brand6145, _i_category6149, _ss_sold_date_sk6159, _ss_store_sk6166, _ss_sales_price6172};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10454_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6182_k = tbl_Filter_TD_10454_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_974_key_leftMajor{_d_date_sk6182_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand6145 = (it->second)._i_brand6145;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n{};
                memcpy(_i_brand6145_n.data(), (_i_brand6145).data(), (_i_brand6145).length());
                std::string _i_category6149 = (it->second)._i_category6149;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n{};
                memcpy(_i_category6149_n.data(), (_i_category6149).data(), (_i_category6149).length());
                int32_t _ss_sold_date_sk6159 = (it->second)._ss_sold_date_sk6159;
                int32_t _ss_store_sk6166 = (it->second)._ss_store_sk6166;
                int32_t _ss_sales_price6172 = (it->second)._ss_sales_price6172;
                int32_t _d_date_sk6182 = tbl_Filter_TD_10454_output.getInt32(i, 0);
                int32_t _d_year6188 = tbl_Filter_TD_10454_output.getInt32(i, 1);
                int32_t _d_moy6190 = tbl_Filter_TD_10454_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_974_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6145_n);
                tbl_JOIN_INNER_TD_974_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6149_n);
                tbl_JOIN_INNER_TD_974_output.setInt32(r, 2, _ss_store_sk6166);
                tbl_JOIN_INNER_TD_974_output.setInt32(r, 3, _ss_sales_price6172);
                tbl_JOIN_INNER_TD_974_output.setInt32(r, 4, _d_year6188);
                tbl_JOIN_INNER_TD_974_output.setInt32(r, 5, _d_moy6190);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_974_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_974_key_rightMajor, SW_JOIN_INNER_TD_974_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10454_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6182_k = tbl_Filter_TD_10454_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_974_key_rightMajor keyA{_d_date_sk6182_k};
            int32_t _d_date_sk6182 = tbl_Filter_TD_10454_output.getInt32(i, 0);
            int32_t _d_year6188 = tbl_Filter_TD_10454_output.getInt32(i, 1);
            int32_t _d_moy6190 = tbl_Filter_TD_10454_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_974_payload_rightMajor payloadA{_d_date_sk6182, _d_year6188, _d_moy6190};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10168_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk6159_k = tbl_JOIN_INNER_TD_10168_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_974_key_rightMajor{_ss_sold_date_sk6159_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6182 = (it->second)._d_date_sk6182;
                int32_t _d_year6188 = (it->second)._d_year6188;
                int32_t _d_moy6190 = (it->second)._d_moy6190;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n = tbl_JOIN_INNER_TD_10168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand6145 = std::string(_i_brand6145_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n = tbl_JOIN_INNER_TD_10168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category6149 = std::string(_i_category6149_n.data());
                int32_t _ss_sold_date_sk6159 = tbl_JOIN_INNER_TD_10168_output.getInt32(i, 2);
                int32_t _ss_store_sk6166 = tbl_JOIN_INNER_TD_10168_output.getInt32(i, 3);
                int32_t _ss_sales_price6172 = tbl_JOIN_INNER_TD_10168_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_974_output.setInt32(r, 4, _d_year6188);
                tbl_JOIN_INNER_TD_974_output.setInt32(r, 5, _d_moy6190);
                tbl_JOIN_INNER_TD_974_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6145_n);
                tbl_JOIN_INNER_TD_974_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6149_n);
                tbl_JOIN_INNER_TD_974_output.setInt32(r, 2, _ss_store_sk6166);
                tbl_JOIN_INNER_TD_974_output.setInt32(r, 3, _ss_sales_price6172);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_974_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_974_output #Row: " << tbl_JOIN_INNER_TD_974_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9859_key_leftMajor {
    int32_t _ss_store_sk6059;
    bool operator==(const SW_JOIN_INNER_TD_9859_key_leftMajor& other) const {
        return ((_ss_store_sk6059 == other._ss_store_sk6059));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9859_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9859_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk6059));
    }
};
}
struct SW_JOIN_INNER_TD_9859_payload_leftMajor {
    std::string _i_brand6038;
    std::string _i_category6042;
    int32_t _ss_store_sk6059;
    int32_t _ss_sales_price6065;
    int32_t _d_year6081;
    int32_t _d_moy6083;
};
struct SW_JOIN_INNER_TD_9859_key_rightMajor {
    int32_t _s_store_sk6103;
    bool operator==(const SW_JOIN_INNER_TD_9859_key_rightMajor& other) const {
        return ((_s_store_sk6103 == other._s_store_sk6103));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9859_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9859_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk6103));
    }
};
}
struct SW_JOIN_INNER_TD_9859_payload_rightMajor {
    int32_t _s_store_sk6103;
    std::string _s_store_name6108;
    std::string _s_company_name6120;
};
void SW_JOIN_INNER_TD_9859(Table &tbl_JOIN_INNER_TD_1059_output, Table &tbl_Filter_TD_10585_output, Table &tbl_JOIN_INNER_TD_9859_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#6059 = s_store_sk#6103))
    // Left Table: ListBuffer(i_brand#6038, i_category#6042, ss_store_sk#6059, ss_sales_price#6065, d_year#6081, d_moy#6083)
    // Right Table: ListBuffer(s_store_sk#6103, s_store_name#6108, s_company_name#6120)
    // Output Table: ListBuffer(i_brand#6038, i_category#6042, ss_sales_price#6065, d_year#6081, d_moy#6083, s_store_name#6108, s_company_name#6120)
    int left_nrow = tbl_JOIN_INNER_TD_1059_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10585_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9859_key_leftMajor, SW_JOIN_INNER_TD_9859_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1059_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk6059_k = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9859_key_leftMajor keyA{_ss_store_sk6059_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n = tbl_JOIN_INNER_TD_1059_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand6038 = std::string(_i_brand6038_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n = tbl_JOIN_INNER_TD_1059_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category6042 = std::string(_i_category6042_n.data());
            int32_t _ss_store_sk6059 = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 2);
            int32_t _ss_sales_price6065 = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 3);
            int32_t _d_year6081 = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 4);
            int32_t _d_moy6083 = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9859_payload_leftMajor payloadA{_i_brand6038, _i_category6042, _ss_store_sk6059, _ss_sales_price6065, _d_year6081, _d_moy6083};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10585_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk6103_k = tbl_Filter_TD_10585_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9859_key_leftMajor{_s_store_sk6103_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand6038 = (it->second)._i_brand6038;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n{};
                memcpy(_i_brand6038_n.data(), (_i_brand6038).data(), (_i_brand6038).length());
                std::string _i_category6042 = (it->second)._i_category6042;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n{};
                memcpy(_i_category6042_n.data(), (_i_category6042).data(), (_i_category6042).length());
                int32_t _ss_store_sk6059 = (it->second)._ss_store_sk6059;
                int32_t _ss_sales_price6065 = (it->second)._ss_sales_price6065;
                int32_t _d_year6081 = (it->second)._d_year6081;
                int32_t _d_moy6083 = (it->second)._d_moy6083;
                int32_t _s_store_sk6103 = tbl_Filter_TD_10585_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_n = tbl_Filter_TD_10585_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name6108 = std::string(_s_store_name6108_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_n = tbl_Filter_TD_10585_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name6120 = std::string(_s_company_name6120_n.data());
                tbl_JOIN_INNER_TD_9859_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6038_n);
                tbl_JOIN_INNER_TD_9859_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6042_n);
                tbl_JOIN_INNER_TD_9859_output.setInt32(r, 2, _ss_sales_price6065);
                tbl_JOIN_INNER_TD_9859_output.setInt32(r, 3, _d_year6081);
                tbl_JOIN_INNER_TD_9859_output.setInt32(r, 4, _d_moy6083);
                tbl_JOIN_INNER_TD_9859_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6108_n);
                tbl_JOIN_INNER_TD_9859_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name6120_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9859_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9859_key_rightMajor, SW_JOIN_INNER_TD_9859_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10585_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk6103_k = tbl_Filter_TD_10585_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9859_key_rightMajor keyA{_s_store_sk6103_k};
            int32_t _s_store_sk6103 = tbl_Filter_TD_10585_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_n = tbl_Filter_TD_10585_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name6108 = std::string(_s_store_name6108_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_n = tbl_Filter_TD_10585_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name6120 = std::string(_s_company_name6120_n.data());
            SW_JOIN_INNER_TD_9859_payload_rightMajor payloadA{_s_store_sk6103, _s_store_name6108, _s_company_name6120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1059_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk6059_k = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9859_key_rightMajor{_ss_store_sk6059_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk6103 = (it->second)._s_store_sk6103;
                std::string _s_store_name6108 = (it->second)._s_store_name6108;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_n{};
                memcpy(_s_store_name6108_n.data(), (_s_store_name6108).data(), (_s_store_name6108).length());
                std::string _s_company_name6120 = (it->second)._s_company_name6120;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_n{};
                memcpy(_s_company_name6120_n.data(), (_s_company_name6120).data(), (_s_company_name6120).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n = tbl_JOIN_INNER_TD_1059_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand6038 = std::string(_i_brand6038_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n = tbl_JOIN_INNER_TD_1059_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category6042 = std::string(_i_category6042_n.data());
                int32_t _ss_store_sk6059 = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 2);
                int32_t _ss_sales_price6065 = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 3);
                int32_t _d_year6081 = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 4);
                int32_t _d_moy6083 = tbl_JOIN_INNER_TD_1059_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9859_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6108_n);
                tbl_JOIN_INNER_TD_9859_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name6120_n);
                tbl_JOIN_INNER_TD_9859_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6038_n);
                tbl_JOIN_INNER_TD_9859_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6042_n);
                tbl_JOIN_INNER_TD_9859_output.setInt32(r, 2, _ss_sales_price6065);
                tbl_JOIN_INNER_TD_9859_output.setInt32(r, 3, _d_year6081);
                tbl_JOIN_INNER_TD_9859_output.setInt32(r, 4, _d_moy6083);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9859_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9859_output #Row: " << tbl_JOIN_INNER_TD_9859_output.getNumRow() << std::endl;
}

void SW_Window_TD_9913(Table &tbl_Aggregate_TD_1067_output, Table &tbl_Window_TD_9913_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#126, d_moy#128) windowspecdefinition(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126 ASC NULLS FIRST, d_moy#128 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#5268)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, _w0#5280)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, _w0#5280, rn#5268)
    struct SW_Window_TD_9913Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _sum_sales5266;
        int32_t __w05280;
    }; 

    int nrow = tbl_Aggregate_TD_1067_output.getNumRow();
    std::vector<SW_Window_TD_9913Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_1067_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_9913_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Aggregate_TD_1067_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_9913_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Aggregate_TD_1067_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_9913_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Aggregate_TD_1067_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_9913_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        int32_t _d_year126 = tbl_Aggregate_TD_1067_output.getInt32(i, 4);
        tbl_Window_TD_9913_output.setInt32(r, 4,_d_year126);
        int32_t _d_moy128 = tbl_Aggregate_TD_1067_output.getInt32(i, 5);
        tbl_Window_TD_9913_output.setInt32(r, 5,_d_moy128);
        int32_t _sum_sales5266 = tbl_Aggregate_TD_1067_output.getInt32(i, 6);
        tbl_Window_TD_9913_output.setInt32(r, 6,_sum_sales5266);
        int32_t __w05280 = tbl_Aggregate_TD_1067_output.getInt32(i, 7);
        tbl_Window_TD_9913_output.setInt32(r, 7,__w05280);
        r++;
        SW_Window_TD_9913Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_sum_sales5266,__w05280};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_9913Row& a, const SW_Window_TD_9913Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 < b._s_store_name383)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 < b._s_company_name395)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 < b._d_year126)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 == b._d_year126) && (a._d_moy128 < b._d_moy128)); 
}
    }SW_Window_TD_9913_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_9913_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category240 == rows0[i-1]._i_category240 && rows0[i]._i_brand236 == rows0[i-1]._i_brand236 && rows0[i]._s_store_name383 == rows0[i-1]._s_store_name383 && rows0[i]._s_company_name395 == rows0[i-1]._s_company_name395);
        isSameOrderKey0 = ( rows0[i]._d_year126 == rows0[i-1]._d_year126 && rows0[i]._d_moy128 == rows0[i-1]._d_moy128);
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
        tbl_Window_TD_9913_output.setInt32(r, 8, ranks0[i]);
    }
    tbl_Window_TD_9913_output.setNumRow(r);
    std::cout << "tbl_Window_TD_9913_output #Row: " << tbl_Window_TD_9913_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8425_key_leftMajor {
    int32_t _ss_store_sk6166;
    bool operator==(const SW_JOIN_INNER_TD_8425_key_leftMajor& other) const {
        return ((_ss_store_sk6166 == other._ss_store_sk6166));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8425_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8425_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk6166));
    }
};
}
struct SW_JOIN_INNER_TD_8425_payload_leftMajor {
    std::string _i_brand6145;
    std::string _i_category6149;
    int32_t _ss_store_sk6166;
    int32_t _ss_sales_price6172;
    int32_t _d_year6188;
    int32_t _d_moy6190;
};
struct SW_JOIN_INNER_TD_8425_key_rightMajor {
    int32_t _s_store_sk6210;
    bool operator==(const SW_JOIN_INNER_TD_8425_key_rightMajor& other) const {
        return ((_s_store_sk6210 == other._s_store_sk6210));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8425_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8425_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk6210));
    }
};
}
struct SW_JOIN_INNER_TD_8425_payload_rightMajor {
    int32_t _s_store_sk6210;
    std::string _s_store_name6215;
    std::string _s_company_name6227;
};
void SW_JOIN_INNER_TD_8425(Table &tbl_JOIN_INNER_TD_974_output, Table &tbl_Filter_TD_9186_output, Table &tbl_JOIN_INNER_TD_8425_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#6166 = s_store_sk#6210))
    // Left Table: ListBuffer(i_brand#6145, i_category#6149, ss_store_sk#6166, ss_sales_price#6172, d_year#6188, d_moy#6190)
    // Right Table: ListBuffer(s_store_sk#6210, s_store_name#6215, s_company_name#6227)
    // Output Table: ListBuffer(i_brand#6145, i_category#6149, ss_sales_price#6172, d_year#6188, d_moy#6190, s_store_name#6215, s_company_name#6227)
    int left_nrow = tbl_JOIN_INNER_TD_974_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9186_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8425_key_leftMajor, SW_JOIN_INNER_TD_8425_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_974_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk6166_k = tbl_JOIN_INNER_TD_974_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8425_key_leftMajor keyA{_ss_store_sk6166_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n = tbl_JOIN_INNER_TD_974_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand6145 = std::string(_i_brand6145_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n = tbl_JOIN_INNER_TD_974_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category6149 = std::string(_i_category6149_n.data());
            int32_t _ss_store_sk6166 = tbl_JOIN_INNER_TD_974_output.getInt32(i, 2);
            int32_t _ss_sales_price6172 = tbl_JOIN_INNER_TD_974_output.getInt32(i, 3);
            int32_t _d_year6188 = tbl_JOIN_INNER_TD_974_output.getInt32(i, 4);
            int32_t _d_moy6190 = tbl_JOIN_INNER_TD_974_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8425_payload_leftMajor payloadA{_i_brand6145, _i_category6149, _ss_store_sk6166, _ss_sales_price6172, _d_year6188, _d_moy6190};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9186_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk6210_k = tbl_Filter_TD_9186_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8425_key_leftMajor{_s_store_sk6210_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand6145 = (it->second)._i_brand6145;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n{};
                memcpy(_i_brand6145_n.data(), (_i_brand6145).data(), (_i_brand6145).length());
                std::string _i_category6149 = (it->second)._i_category6149;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n{};
                memcpy(_i_category6149_n.data(), (_i_category6149).data(), (_i_category6149).length());
                int32_t _ss_store_sk6166 = (it->second)._ss_store_sk6166;
                int32_t _ss_sales_price6172 = (it->second)._ss_sales_price6172;
                int32_t _d_year6188 = (it->second)._d_year6188;
                int32_t _d_moy6190 = (it->second)._d_moy6190;
                int32_t _s_store_sk6210 = tbl_Filter_TD_9186_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_n = tbl_Filter_TD_9186_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name6215 = std::string(_s_store_name6215_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_n = tbl_Filter_TD_9186_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name6227 = std::string(_s_company_name6227_n.data());
                tbl_JOIN_INNER_TD_8425_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6145_n);
                tbl_JOIN_INNER_TD_8425_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6149_n);
                tbl_JOIN_INNER_TD_8425_output.setInt32(r, 2, _ss_sales_price6172);
                tbl_JOIN_INNER_TD_8425_output.setInt32(r, 3, _d_year6188);
                tbl_JOIN_INNER_TD_8425_output.setInt32(r, 4, _d_moy6190);
                tbl_JOIN_INNER_TD_8425_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6215_n);
                tbl_JOIN_INNER_TD_8425_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name6227_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8425_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8425_key_rightMajor, SW_JOIN_INNER_TD_8425_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9186_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk6210_k = tbl_Filter_TD_9186_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8425_key_rightMajor keyA{_s_store_sk6210_k};
            int32_t _s_store_sk6210 = tbl_Filter_TD_9186_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_n = tbl_Filter_TD_9186_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name6215 = std::string(_s_store_name6215_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_n = tbl_Filter_TD_9186_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name6227 = std::string(_s_company_name6227_n.data());
            SW_JOIN_INNER_TD_8425_payload_rightMajor payloadA{_s_store_sk6210, _s_store_name6215, _s_company_name6227};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_974_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk6166_k = tbl_JOIN_INNER_TD_974_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8425_key_rightMajor{_ss_store_sk6166_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk6210 = (it->second)._s_store_sk6210;
                std::string _s_store_name6215 = (it->second)._s_store_name6215;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_n{};
                memcpy(_s_store_name6215_n.data(), (_s_store_name6215).data(), (_s_store_name6215).length());
                std::string _s_company_name6227 = (it->second)._s_company_name6227;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_n{};
                memcpy(_s_company_name6227_n.data(), (_s_company_name6227).data(), (_s_company_name6227).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n = tbl_JOIN_INNER_TD_974_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand6145 = std::string(_i_brand6145_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n = tbl_JOIN_INNER_TD_974_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category6149 = std::string(_i_category6149_n.data());
                int32_t _ss_store_sk6166 = tbl_JOIN_INNER_TD_974_output.getInt32(i, 2);
                int32_t _ss_sales_price6172 = tbl_JOIN_INNER_TD_974_output.getInt32(i, 3);
                int32_t _d_year6188 = tbl_JOIN_INNER_TD_974_output.getInt32(i, 4);
                int32_t _d_moy6190 = tbl_JOIN_INNER_TD_974_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8425_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6215_n);
                tbl_JOIN_INNER_TD_8425_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name6227_n);
                tbl_JOIN_INNER_TD_8425_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand6145_n);
                tbl_JOIN_INNER_TD_8425_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6149_n);
                tbl_JOIN_INNER_TD_8425_output.setInt32(r, 2, _ss_sales_price6172);
                tbl_JOIN_INNER_TD_8425_output.setInt32(r, 3, _d_year6188);
                tbl_JOIN_INNER_TD_8425_output.setInt32(r, 4, _d_moy6190);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8425_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8425_output #Row: " << tbl_JOIN_INNER_TD_8425_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8312_key {
    std::string _i_category6042;
    std::string _i_brand6038;
    std::string _s_store_name6108;
    std::string _s_company_name6120;
    int32_t _d_year6081;
    int32_t _d_moy6083;
    bool operator==(const SW_Aggregate_TD_8312_key& other) const { return (_i_category6042 == other._i_category6042) && (_i_brand6038 == other._i_brand6038) && (_s_store_name6108 == other._s_store_name6108) && (_s_company_name6120 == other._s_company_name6120) && (_d_year6081 == other._d_year6081) && (_d_moy6083 == other._d_moy6083); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8312_key> {
    std::size_t operator() (const SW_Aggregate_TD_8312_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category6042)) + (hash<string>()(k._i_brand6038)) + (hash<string>()(k._s_store_name6108)) + (hash<string>()(k._s_company_name6120)) + (hash<int32_t>()(k._d_year6081)) + (hash<int32_t>()(k._d_moy6083));
    }
};
}
struct SW_Aggregate_TD_8312_payload {
    int32_t _sum_sales5266_sum_0;
};
void SW_Aggregate_TD_8312(Table &tbl_JOIN_INNER_TD_9859_output, Table &tbl_Aggregate_TD_8312_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#6042, i_brand#6038, s_store_name#6108, s_company_name#6120, d_year#6081, d_moy#6083, MakeDecimal(sum(UnscaledValue(ss_sales_price#6065)),17,2) AS sum_sales#5266)
    // Input: ListBuffer(i_brand#6038, i_category#6042, ss_sales_price#6065, d_year#6081, d_moy#6083, s_store_name#6108, s_company_name#6120)
    // Output: ListBuffer(i_category#6042, i_brand#6038, s_store_name#6108, s_company_name#6120, d_year#6081, d_moy#6083, sum_sales#5266)
    std::unordered_map<SW_Aggregate_TD_8312_key, SW_Aggregate_TD_8312_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9859_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6038 = tbl_JOIN_INNER_TD_9859_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category6042 = tbl_JOIN_INNER_TD_9859_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ss_sales_price6065 = tbl_JOIN_INNER_TD_9859_output.getInt32(i, 2);
        int32_t _d_year6081 = tbl_JOIN_INNER_TD_9859_output.getInt32(i, 3);
        int32_t _d_moy6083 = tbl_JOIN_INNER_TD_9859_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108 = tbl_JOIN_INNER_TD_9859_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120 = tbl_JOIN_INNER_TD_9859_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_8312_key k{std::string(_i_category6042.data()), std::string(_i_brand6038.data()), std::string(_s_store_name6108.data()), std::string(_s_company_name6120.data()), _d_year6081, _d_moy6083};
        int64_t _sum_sales5266_sum_0 = _ss_sales_price6065;
        SW_Aggregate_TD_8312_payload p{_sum_sales5266_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales5266_sum_0 + _sum_sales5266_sum_0;
            p._sum_sales5266_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6042{};
        memcpy(_i_category6042.data(), ((it.first)._i_category6042).data(), ((it.first)._i_category6042).length());
        tbl_Aggregate_TD_8312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category6042);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6038{};
        memcpy(_i_brand6038.data(), ((it.first)._i_brand6038).data(), ((it.first)._i_brand6038).length());
        tbl_Aggregate_TD_8312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand6038);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108{};
        memcpy(_s_store_name6108.data(), ((it.first)._s_store_name6108).data(), ((it.first)._s_store_name6108).length());
        tbl_Aggregate_TD_8312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name6108);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120{};
        memcpy(_s_company_name6120.data(), ((it.first)._s_company_name6120).data(), ((it.first)._s_company_name6120).length());
        tbl_Aggregate_TD_8312_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name6120);
        tbl_Aggregate_TD_8312_output.setInt32(r, 4, (it.first)._d_year6081);
        tbl_Aggregate_TD_8312_output.setInt32(r, 5, (it.first)._d_moy6083);
        int32_t _sum_sales5266 = (it.second)._sum_sales5266_sum_0;
        tbl_Aggregate_TD_8312_output.setInt32(r, 6, _sum_sales5266);
        ++r;
    }
    tbl_Aggregate_TD_8312_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8312_output #Row: " << tbl_Aggregate_TD_8312_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8853(Table &tbl_Window_TD_9913_output, Table &tbl_Filter_TD_8853_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_year#126) AND (d_year#126 = 1999)))
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, _w0#5280, rn#5268)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, _w0#5280, rn#5268)
    int r = 0;
    int nrow1 = tbl_Window_TD_9913_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Window_TD_9913_output.getInt32(i, 4);
        if ((_d_year126!= 0) && (_d_year126 == 1999)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_9913_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8853_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_9913_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8853_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_Window_TD_9913_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8853_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_Window_TD_9913_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_8853_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_t);
            int32_t _d_year126_t = tbl_Window_TD_9913_output.getInt32(i, 4);
            tbl_Filter_TD_8853_output.setInt32(r, 4, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_9913_output.getInt32(i, 5);
            tbl_Filter_TD_8853_output.setInt32(r, 5, _d_moy128_t);
            int32_t _sum_sales5266_t = tbl_Window_TD_9913_output.getInt32(i, 6);
            tbl_Filter_TD_8853_output.setInt32(r, 6, _sum_sales5266_t);
            int32_t __w05280_t = tbl_Window_TD_9913_output.getInt32(i, 7);
            tbl_Filter_TD_8853_output.setInt32(r, 7, __w05280_t);
            int32_t _rn5268_t = tbl_Window_TD_9913_output.getInt32(i, 8);
            tbl_Filter_TD_8853_output.setInt32(r, 8, _rn5268_t);
            r++;
        }
    }
    tbl_Filter_TD_8853_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8853_output #Row: " << tbl_Filter_TD_8853_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7942_key {
    std::string _i_category6149;
    std::string _i_brand6145;
    std::string _s_store_name6215;
    std::string _s_company_name6227;
    int32_t _d_year6188;
    int32_t _d_moy6190;
    bool operator==(const SW_Aggregate_TD_7942_key& other) const { return (_i_category6149 == other._i_category6149) && (_i_brand6145 == other._i_brand6145) && (_s_store_name6215 == other._s_store_name6215) && (_s_company_name6227 == other._s_company_name6227) && (_d_year6188 == other._d_year6188) && (_d_moy6190 == other._d_moy6190); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7942_key> {
    std::size_t operator() (const SW_Aggregate_TD_7942_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category6149)) + (hash<string>()(k._i_brand6145)) + (hash<string>()(k._s_store_name6215)) + (hash<string>()(k._s_company_name6227)) + (hash<int32_t>()(k._d_year6188)) + (hash<int32_t>()(k._d_moy6190));
    }
};
}
struct SW_Aggregate_TD_7942_payload {
    int32_t _sum_sales5266_sum_0;
};
void SW_Aggregate_TD_7942(Table &tbl_JOIN_INNER_TD_8425_output, Table &tbl_Aggregate_TD_7942_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#6149, i_brand#6145, s_store_name#6215, s_company_name#6227, d_year#6188, d_moy#6190, MakeDecimal(sum(UnscaledValue(ss_sales_price#6172)),17,2) AS sum_sales#5266)
    // Input: ListBuffer(i_brand#6145, i_category#6149, ss_sales_price#6172, d_year#6188, d_moy#6190, s_store_name#6215, s_company_name#6227)
    // Output: ListBuffer(i_category#6149, i_brand#6145, s_store_name#6215, s_company_name#6227, d_year#6188, d_moy#6190, sum_sales#5266)
    std::unordered_map<SW_Aggregate_TD_7942_key, SW_Aggregate_TD_7942_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8425_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6145 = tbl_JOIN_INNER_TD_8425_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category6149 = tbl_JOIN_INNER_TD_8425_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ss_sales_price6172 = tbl_JOIN_INNER_TD_8425_output.getInt32(i, 2);
        int32_t _d_year6188 = tbl_JOIN_INNER_TD_8425_output.getInt32(i, 3);
        int32_t _d_moy6190 = tbl_JOIN_INNER_TD_8425_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215 = tbl_JOIN_INNER_TD_8425_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227 = tbl_JOIN_INNER_TD_8425_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_7942_key k{std::string(_i_category6149.data()), std::string(_i_brand6145.data()), std::string(_s_store_name6215.data()), std::string(_s_company_name6227.data()), _d_year6188, _d_moy6190};
        int64_t _sum_sales5266_sum_0 = _ss_sales_price6172;
        SW_Aggregate_TD_7942_payload p{_sum_sales5266_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales5266_sum_0 + _sum_sales5266_sum_0;
            p._sum_sales5266_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6149{};
        memcpy(_i_category6149.data(), ((it.first)._i_category6149).data(), ((it.first)._i_category6149).length());
        tbl_Aggregate_TD_7942_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category6149);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6145{};
        memcpy(_i_brand6145.data(), ((it.first)._i_brand6145).data(), ((it.first)._i_brand6145).length());
        tbl_Aggregate_TD_7942_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand6145);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215{};
        memcpy(_s_store_name6215.data(), ((it.first)._s_store_name6215).data(), ((it.first)._s_store_name6215).length());
        tbl_Aggregate_TD_7942_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name6215);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227{};
        memcpy(_s_company_name6227.data(), ((it.first)._s_company_name6227).data(), ((it.first)._s_company_name6227).length());
        tbl_Aggregate_TD_7942_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name6227);
        tbl_Aggregate_TD_7942_output.setInt32(r, 4, (it.first)._d_year6188);
        tbl_Aggregate_TD_7942_output.setInt32(r, 5, (it.first)._d_moy6190);
        int32_t _sum_sales5266 = (it.second)._sum_sales5266_sum_0;
        tbl_Aggregate_TD_7942_output.setInt32(r, 6, _sum_sales5266);
        ++r;
    }
    tbl_Aggregate_TD_7942_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7942_output #Row: " << tbl_Aggregate_TD_7942_output.getNumRow() << std::endl;
}

void SW_Window_TD_7922(Table &tbl_Aggregate_TD_8312_output, Table &tbl_Window_TD_7922_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#6081, d_moy#6083) windowspecdefinition(i_category#6042, i_brand#6038, s_store_name#6108, s_company_name#6120, d_year#6081 ASC NULLS FIRST, d_moy#6083 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#6136)
    // Input: ListBuffer(i_category#6042, i_brand#6038, s_store_name#6108, s_company_name#6120, d_year#6081, d_moy#6083, sum_sales#5266)
    // Output: ListBuffer(i_category#6042, i_brand#6038, s_store_name#6108, s_company_name#6120, d_year#6081, d_moy#6083, sum_sales#5266, rn#6136)
    struct SW_Window_TD_7922Row {
        std::string _i_category6042;
        std::string _i_brand6038;
        std::string _s_store_name6108;
        std::string _s_company_name6120;
        int32_t _d_year6081;
        int32_t _d_moy6083;
        int32_t _sum_sales5266;
    }; 

    int nrow = tbl_Aggregate_TD_8312_output.getNumRow();
    std::vector<SW_Window_TD_7922Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6042 = tbl_Aggregate_TD_8312_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7922_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category6042);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6038 = tbl_Aggregate_TD_8312_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7922_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand6038);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108 = tbl_Aggregate_TD_8312_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7922_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name6108);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120 = tbl_Aggregate_TD_8312_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_7922_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name6120);
        int32_t _d_year6081 = tbl_Aggregate_TD_8312_output.getInt32(i, 4);
        tbl_Window_TD_7922_output.setInt32(r, 4,_d_year6081);
        int32_t _d_moy6083 = tbl_Aggregate_TD_8312_output.getInt32(i, 5);
        tbl_Window_TD_7922_output.setInt32(r, 5,_d_moy6083);
        int32_t _sum_sales5266 = tbl_Aggregate_TD_8312_output.getInt32(i, 6);
        tbl_Window_TD_7922_output.setInt32(r, 6,_sum_sales5266);
        r++;
        SW_Window_TD_7922Row t = {std::string(_i_category6042.data()),std::string(_i_brand6038.data()),std::string(_s_store_name6108.data()),std::string(_s_company_name6120.data()),_d_year6081,_d_moy6083,_sum_sales5266};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7922Row& a, const SW_Window_TD_7922Row& b) const { return 
(a._i_category6042 < b._i_category6042) || 
 ((a._i_category6042 == b._i_category6042) && (a._i_brand6038 < b._i_brand6038)) || 
 ((a._i_category6042 == b._i_category6042) && (a._i_brand6038 == b._i_brand6038) && (a._s_store_name6108 < b._s_store_name6108)) || 
 ((a._i_category6042 == b._i_category6042) && (a._i_brand6038 == b._i_brand6038) && (a._s_store_name6108 == b._s_store_name6108) && (a._s_company_name6120 < b._s_company_name6120)) || 
 ((a._i_category6042 == b._i_category6042) && (a._i_brand6038 == b._i_brand6038) && (a._s_store_name6108 == b._s_store_name6108) && (a._s_company_name6120 == b._s_company_name6120) && (a._d_year6081 < b._d_year6081)) || 
 ((a._i_category6042 == b._i_category6042) && (a._i_brand6038 == b._i_brand6038) && (a._s_store_name6108 == b._s_store_name6108) && (a._s_company_name6120 == b._s_company_name6120) && (a._d_year6081 == b._d_year6081) && (a._d_moy6083 < b._d_moy6083)); 
}
    }SW_Window_TD_7922_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7922_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category6042 == rows0[i-1]._i_category6042 && rows0[i]._i_brand6038 == rows0[i-1]._i_brand6038 && rows0[i]._s_store_name6108 == rows0[i-1]._s_store_name6108 && rows0[i]._s_company_name6120 == rows0[i-1]._s_company_name6120);
        isSameOrderKey0 = ( rows0[i]._d_year6081 == rows0[i-1]._d_year6081 && rows0[i]._d_moy6083 == rows0[i-1]._d_moy6083);
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
        tbl_Window_TD_7922_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_7922_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7922_output #Row: " << tbl_Window_TD_7922_output.getNumRow() << std::endl;
}

void SW_Window_TD_7542(Table &tbl_Filter_TD_8853_output, Table &tbl_Window_TD_7542_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#5280) windowspecdefinition(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#5267)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, _w0#5280, rn#5268)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, _w0#5280, rn#5268, avg_monthly_sales#5267)
    struct SW_Window_TD_7542Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _sum_sales5266;
        int32_t __w05280;
        int32_t _rn5268;
    }; 

    int nrow = tbl_Filter_TD_8853_output.getNumRow();
    std::vector<SW_Window_TD_7542Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_8853_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7542_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Filter_TD_8853_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7542_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Filter_TD_8853_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7542_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Filter_TD_8853_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_7542_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        int32_t _d_year126 = tbl_Filter_TD_8853_output.getInt32(i, 4);
        tbl_Window_TD_7542_output.setInt32(r, 4,_d_year126);
        int32_t _d_moy128 = tbl_Filter_TD_8853_output.getInt32(i, 5);
        tbl_Window_TD_7542_output.setInt32(r, 5,_d_moy128);
        int32_t _sum_sales5266 = tbl_Filter_TD_8853_output.getInt32(i, 6);
        tbl_Window_TD_7542_output.setInt32(r, 6,_sum_sales5266);
        int32_t __w05280 = tbl_Filter_TD_8853_output.getInt32(i, 7);
        tbl_Window_TD_7542_output.setInt32(r, 7,__w05280);
        int32_t _rn5268 = tbl_Filter_TD_8853_output.getInt32(i, 8);
        tbl_Window_TD_7542_output.setInt32(r, 8,_rn5268);
        r++;
        SW_Window_TD_7542Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_sum_sales5266,__w05280,_rn5268};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7542Row& a, const SW_Window_TD_7542Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 < b._s_store_name383)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 < b._s_company_name395)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 < b._d_year126)); 
}
    }SW_Window_TD_7542_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7542_order0);
    int64_t sum0 = 0;
    int64_t currentRow0 = 0;
    std::string current_i_category2400 = "";
    std::string current_i_brand2360 = "";
    std::string current_s_store_name3830 = "";
    std::string current_s_company_name3950 = "";
    int32_t current_d_year1260 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_i_category2400 != it._i_category240 || current_i_brand2360 != it._i_brand236 || current_s_store_name3830 != it._s_store_name383 || current_s_company_name3950 != it._s_company_name395 || current_d_year1260 != it._d_year126) {
            sum0 = 0;
            currentRow0 = 0;
            current_i_category2400 = it._i_category240;
            current_i_brand2360 = it._i_brand236;
            current_s_store_name3830 = it._s_store_name383;
            current_s_company_name3950 = it._s_company_name395;
            current_d_year1260 = it._d_year126;
        }
        sum0 += it.__w05280;
        currentRow0 +=1;
        tbl_Window_TD_7542_output.setInt64(r, 9, sum0 / currentRow0 );
    }
    tbl_Window_TD_7542_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7542_output #Row: " << tbl_Window_TD_7542_output.getNumRow() << std::endl;
}

void SW_Window_TD_6188(Table &tbl_Aggregate_TD_7942_output, Table &tbl_Window_TD_6188_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#6188, d_moy#6190) windowspecdefinition(i_category#6149, i_brand#6145, s_store_name#6215, s_company_name#6227, d_year#6188 ASC NULLS FIRST, d_moy#6190 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#6243)
    // Input: ListBuffer(i_category#6149, i_brand#6145, s_store_name#6215, s_company_name#6227, d_year#6188, d_moy#6190, sum_sales#5266)
    // Output: ListBuffer(i_category#6149, i_brand#6145, s_store_name#6215, s_company_name#6227, d_year#6188, d_moy#6190, sum_sales#5266, rn#6243)
    struct SW_Window_TD_6188Row {
        std::string _i_category6149;
        std::string _i_brand6145;
        std::string _s_store_name6215;
        std::string _s_company_name6227;
        int32_t _d_year6188;
        int32_t _d_moy6190;
        int32_t _sum_sales5266;
    }; 

    int nrow = tbl_Aggregate_TD_7942_output.getNumRow();
    std::vector<SW_Window_TD_6188Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6149 = tbl_Aggregate_TD_7942_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_6188_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category6149);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6145 = tbl_Aggregate_TD_7942_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_6188_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand6145);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215 = tbl_Aggregate_TD_7942_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_6188_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name6215);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227 = tbl_Aggregate_TD_7942_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_6188_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name6227);
        int32_t _d_year6188 = tbl_Aggregate_TD_7942_output.getInt32(i, 4);
        tbl_Window_TD_6188_output.setInt32(r, 4,_d_year6188);
        int32_t _d_moy6190 = tbl_Aggregate_TD_7942_output.getInt32(i, 5);
        tbl_Window_TD_6188_output.setInt32(r, 5,_d_moy6190);
        int32_t _sum_sales5266 = tbl_Aggregate_TD_7942_output.getInt32(i, 6);
        tbl_Window_TD_6188_output.setInt32(r, 6,_sum_sales5266);
        r++;
        SW_Window_TD_6188Row t = {std::string(_i_category6149.data()),std::string(_i_brand6145.data()),std::string(_s_store_name6215.data()),std::string(_s_company_name6227.data()),_d_year6188,_d_moy6190,_sum_sales5266};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_6188Row& a, const SW_Window_TD_6188Row& b) const { return 
(a._i_category6149 < b._i_category6149) || 
 ((a._i_category6149 == b._i_category6149) && (a._i_brand6145 < b._i_brand6145)) || 
 ((a._i_category6149 == b._i_category6149) && (a._i_brand6145 == b._i_brand6145) && (a._s_store_name6215 < b._s_store_name6215)) || 
 ((a._i_category6149 == b._i_category6149) && (a._i_brand6145 == b._i_brand6145) && (a._s_store_name6215 == b._s_store_name6215) && (a._s_company_name6227 < b._s_company_name6227)) || 
 ((a._i_category6149 == b._i_category6149) && (a._i_brand6145 == b._i_brand6145) && (a._s_store_name6215 == b._s_store_name6215) && (a._s_company_name6227 == b._s_company_name6227) && (a._d_year6188 < b._d_year6188)) || 
 ((a._i_category6149 == b._i_category6149) && (a._i_brand6145 == b._i_brand6145) && (a._s_store_name6215 == b._s_store_name6215) && (a._s_company_name6227 == b._s_company_name6227) && (a._d_year6188 == b._d_year6188) && (a._d_moy6190 < b._d_moy6190)); 
}
    }SW_Window_TD_6188_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_6188_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category6149 == rows0[i-1]._i_category6149 && rows0[i]._i_brand6145 == rows0[i-1]._i_brand6145 && rows0[i]._s_store_name6215 == rows0[i-1]._s_store_name6215 && rows0[i]._s_company_name6227 == rows0[i-1]._s_company_name6227);
        isSameOrderKey0 = ( rows0[i]._d_year6188 == rows0[i-1]._d_year6188 && rows0[i]._d_moy6190 == rows0[i-1]._d_moy6190);
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
        tbl_Window_TD_6188_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_6188_output.setNumRow(r);
    std::cout << "tbl_Window_TD_6188_output #Row: " << tbl_Window_TD_6188_output.getNumRow() << std::endl;
}

void SW_Project_TD_6176(Table &tbl_Window_TD_7922_output, Table &tbl_Project_TD_6176_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#5266 AS sum_sales#5287)
    // Input: ListBuffer(i_category#6042, i_brand#6038, s_store_name#6108, s_company_name#6120, d_year#6081, d_moy#6083, sum_sales#5266, rn#6136)
    // Output: ListBuffer(i_category#6042, i_brand#6038, s_store_name#6108, s_company_name#6120, sum_sales#5287, rn#6136)
    int nrow1 = tbl_Window_TD_7922_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6042 = tbl_Window_TD_7922_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6038 = tbl_Window_TD_7922_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108 = tbl_Window_TD_7922_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120 = tbl_Window_TD_7922_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year6081 = tbl_Window_TD_7922_output.getInt32(i, 4);
        int32_t _d_moy6083 = tbl_Window_TD_7922_output.getInt32(i, 5);
        int32_t _sum_sales5266 = tbl_Window_TD_7922_output.getInt32(i, 6);
        int32_t _rn6136 = tbl_Window_TD_7922_output.getInt32(i, 7);
        int32_t _sum_sales5287 = _sum_sales5266;
        tbl_Project_TD_6176_output.setInt32(i, 4, _sum_sales5287);
        tbl_Project_TD_6176_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category6042);
        tbl_Project_TD_6176_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand6038);
        tbl_Project_TD_6176_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name6108);
        tbl_Project_TD_6176_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name6120);
        tbl_Project_TD_6176_output.setInt32(i, 5, _rn6136);
    }
    tbl_Project_TD_6176_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6176_output #Row: " << tbl_Project_TD_6176_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6751(Table &tbl_Window_TD_7542_output, Table &tbl_Filter_TD_6751_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(avg_monthly_sales#5267) AND (avg_monthly_sales#5267 > 0.000000)) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#5266 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#5267 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#5267 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000)))
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, _w0#5280, rn#5268, avg_monthly_sales#5267)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, avg_monthly_sales#5267, rn#5268)
    int r = 0;
    int nrow1 = tbl_Window_TD_7542_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avg_monthly_sales5267 = tbl_Window_TD_7542_output.getInt32(i, 9);
        int32_t _sum_sales5266 = tbl_Window_TD_7542_output.getInt32(i, 6);
        if (((_avg_monthly_sales5267!= 0) && (_avg_monthly_sales5267 > 0.000000)) && (_sum_sales5266 > 0.1000000000000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_7542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6751_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_7542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6751_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_Window_TD_7542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6751_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_Window_TD_7542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_6751_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_t);
            int32_t _d_year126_t = tbl_Window_TD_7542_output.getInt32(i, 4);
            tbl_Filter_TD_6751_output.setInt32(r, 4, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_7542_output.getInt32(i, 5);
            tbl_Filter_TD_6751_output.setInt32(r, 5, _d_moy128_t);
            int32_t _sum_sales5266_t = tbl_Window_TD_7542_output.getInt32(i, 6);
            tbl_Filter_TD_6751_output.setInt32(r, 6, _sum_sales5266_t);
            int32_t _avg_monthly_sales5267_t = tbl_Window_TD_7542_output.getInt32(i, 9);
            tbl_Filter_TD_6751_output.setInt32(r, 7, _avg_monthly_sales5267_t);
            int32_t _rn5268_t = tbl_Window_TD_7542_output.getInt32(i, 8);
            tbl_Filter_TD_6751_output.setInt32(r, 8, _rn5268_t);
            r++;
        }
    }
    tbl_Filter_TD_6751_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6751_output #Row: " << tbl_Filter_TD_6751_output.getNumRow() << std::endl;
}

void SW_Project_TD_5547(Table &tbl_Window_TD_6188_output, Table &tbl_Project_TD_5547_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#5266 AS sum_sales#5296)
    // Input: ListBuffer(i_category#6149, i_brand#6145, s_store_name#6215, s_company_name#6227, d_year#6188, d_moy#6190, sum_sales#5266, rn#6243)
    // Output: ListBuffer(i_category#6149, i_brand#6145, s_store_name#6215, s_company_name#6227, sum_sales#5296, rn#6243)
    int nrow1 = tbl_Window_TD_6188_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6149 = tbl_Window_TD_6188_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand6145 = tbl_Window_TD_6188_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215 = tbl_Window_TD_6188_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227 = tbl_Window_TD_6188_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year6188 = tbl_Window_TD_6188_output.getInt32(i, 4);
        int32_t _d_moy6190 = tbl_Window_TD_6188_output.getInt32(i, 5);
        int32_t _sum_sales5266 = tbl_Window_TD_6188_output.getInt32(i, 6);
        int32_t _rn6243 = tbl_Window_TD_6188_output.getInt32(i, 7);
        int32_t _sum_sales5296 = _sum_sales5266;
        tbl_Project_TD_5547_output.setInt32(i, 4, _sum_sales5296);
        tbl_Project_TD_5547_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category6149);
        tbl_Project_TD_5547_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand6145);
        tbl_Project_TD_5547_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name6215);
        tbl_Project_TD_5547_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name6227);
        tbl_Project_TD_5547_output.setInt32(i, 5, _rn6243);
    }
    tbl_Project_TD_5547_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5547_output #Row: " << tbl_Project_TD_5547_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5295_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    bool operator==(const SW_JOIN_INNER_TD_5295_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5295_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5295_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395));
    }
};
}
struct SW_JOIN_INNER_TD_5295_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _sum_sales5266;
    int32_t _avg_monthly_sales5267;
    int32_t _rn5268;
};
struct SW_JOIN_INNER_TD_5295_key_rightMajor {
    std::string _i_category6042;
    std::string _i_brand6038;
    std::string _s_store_name6108;
    std::string _s_company_name6120;
    bool operator==(const SW_JOIN_INNER_TD_5295_key_rightMajor& other) const {
        return ((_i_category6042 == other._i_category6042) && (_i_brand6038 == other._i_brand6038) && (_s_store_name6108 == other._s_store_name6108) && (_s_company_name6120 == other._s_company_name6120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5295_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5295_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category6042)) + (hash<string>()(k._i_brand6038)) + (hash<string>()(k._s_store_name6108)) + (hash<string>()(k._s_company_name6120));
    }
};
}
struct SW_JOIN_INNER_TD_5295_payload_rightMajor {
    std::string _i_category6042;
    std::string _i_brand6038;
    std::string _s_store_name6108;
    std::string _s_company_name6120;
    int32_t _sum_sales5287;
    int32_t _rn6136;
};
void SW_JOIN_INNER_TD_5295(Table &tbl_Filter_TD_6751_output, Table &tbl_Project_TD_6176_output, Table &tbl_JOIN_INNER_TD_5295_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((i_category#240 = i_category#6042) AND (i_brand#236 = i_brand#6038)) AND (s_store_name#383 = s_store_name#6108)) AND (s_company_name#395 = s_company_name#6120)) AND (rn#5268 = (rn#6136 + 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, avg_monthly_sales#5267, rn#5268)
    // Right Table: ListBuffer(i_category#6042, i_brand#6038, s_store_name#6108, s_company_name#6120, sum_sales#5287, rn#6136)
    // Output Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, avg_monthly_sales#5267, rn#5268, sum_sales#5287)
    int left_nrow = tbl_Filter_TD_6751_output.getNumRow();
    int right_nrow = tbl_Project_TD_6176_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5295_key_leftMajor, SW_JOIN_INNER_TD_5295_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6751_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            SW_JOIN_INNER_TD_5295_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            int32_t _d_year126 = tbl_Filter_TD_6751_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_Filter_TD_6751_output.getInt32(i, 5);
            int32_t _sum_sales5266 = tbl_Filter_TD_6751_output.getInt32(i, 6);
            int32_t _avg_monthly_sales5267 = tbl_Filter_TD_6751_output.getInt32(i, 7);
            int32_t _rn5268 = tbl_Filter_TD_6751_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_5295_payload_leftMajor payloadA{_i_category240, _i_brand236, _s_store_name383, _s_company_name395, _d_year126, _d_moy128, _sum_sales5266, _avg_monthly_sales5267, _rn5268};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_6176_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category6042_k_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category6042_k = std::string(_i_category6042_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_k_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand6038_k = std::string(_i_brand6038_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_k_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name6108_k = std::string(_s_store_name6108_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_k_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name6120_k = std::string(_s_company_name6120_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5295_key_leftMajor{_i_category6042_k, _i_brand6038_k, _s_store_name6108_k, _s_company_name6120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_company_name395 = (it->second)._s_company_name395;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n{};
                memcpy(_s_company_name395_n.data(), (_s_company_name395).data(), (_s_company_name395).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _sum_sales5266 = (it->second)._sum_sales5266;
                int32_t _avg_monthly_sales5267 = (it->second)._avg_monthly_sales5267;
                int32_t _rn5268 = (it->second)._rn5268;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category6042 = std::string(_i_category6042_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand6038 = std::string(_i_brand6038_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name6108 = std::string(_s_store_name6108_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name6120 = std::string(_s_company_name6120_n.data());
                int32_t _sum_sales5287 = tbl_Project_TD_6176_output.getInt32(i, 4);
                int32_t _rn6136 = tbl_Project_TD_6176_output.getInt32(i, 5);
                if (_rn5268 == NULL) {
                    tbl_JOIN_INNER_TD_5295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_5295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 6, _sum_sales5266);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 7, _avg_monthly_sales5267);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 8, _rn5268);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 9, _sum_sales5287);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5295_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5295_key_rightMajor, SW_JOIN_INNER_TD_5295_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_6176_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category6042_k_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category6042_k = std::string(_i_category6042_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_k_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand6038_k = std::string(_i_brand6038_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_k_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name6108_k = std::string(_s_store_name6108_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_k_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name6120_k = std::string(_s_company_name6120_k_n.data());
            SW_JOIN_INNER_TD_5295_key_rightMajor keyA{_i_category6042_k, _i_brand6038_k, _s_store_name6108_k, _s_company_name6120_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category6042 = std::string(_i_category6042_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand6038 = std::string(_i_brand6038_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name6108 = std::string(_s_store_name6108_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_n = tbl_Project_TD_6176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name6120 = std::string(_s_company_name6120_n.data());
            int32_t _sum_sales5287 = tbl_Project_TD_6176_output.getInt32(i, 4);
            int32_t _rn6136 = tbl_Project_TD_6176_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_5295_payload_rightMajor payloadA{_i_category6042, _i_brand6038, _s_store_name6108, _s_company_name6120, _sum_sales5287, _rn6136};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6751_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5295_key_rightMajor{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category6042 = (it->second)._i_category6042;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6042_n{};
                memcpy(_i_category6042_n.data(), (_i_category6042).data(), (_i_category6042).length());
                std::string _i_brand6038 = (it->second)._i_brand6038;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6038_n{};
                memcpy(_i_brand6038_n.data(), (_i_brand6038).data(), (_i_brand6038).length());
                std::string _s_store_name6108 = (it->second)._s_store_name6108;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6108_n{};
                memcpy(_s_store_name6108_n.data(), (_s_store_name6108).data(), (_s_store_name6108).length());
                std::string _s_company_name6120 = (it->second)._s_company_name6120;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name6120_n{};
                memcpy(_s_company_name6120_n.data(), (_s_company_name6120).data(), (_s_company_name6120).length());
                int32_t _sum_sales5287 = (it->second)._sum_sales5287;
                int32_t _rn6136 = (it->second)._rn6136;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_6751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                int32_t _d_year126 = tbl_Filter_TD_6751_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_Filter_TD_6751_output.getInt32(i, 5);
                int32_t _sum_sales5266 = tbl_Filter_TD_6751_output.getInt32(i, 6);
                int32_t _avg_monthly_sales5267 = tbl_Filter_TD_6751_output.getInt32(i, 7);
                int32_t _rn5268 = tbl_Filter_TD_6751_output.getInt32(i, 8);
                if (_rn5268 == NULL) {
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 9, _sum_sales5287);
                    tbl_JOIN_INNER_TD_5295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_5295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 6, _sum_sales5266);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 7, _avg_monthly_sales5267);
                    tbl_JOIN_INNER_TD_5295_output.setInt32(r, 8, _rn5268);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5295_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5295_output #Row: " << tbl_JOIN_INNER_TD_5295_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4203_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _rn5268;
    bool operator==(const SW_JOIN_INNER_TD_4203_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395) && (_rn5268 == other._rn5268));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4203_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4203_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395)) + (hash<int32_t>()(k._rn5268));
    }
};
}
struct SW_JOIN_INNER_TD_4203_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _sum_sales5266;
    int32_t _avg_monthly_sales5267;
    int32_t _rn5268;
    int32_t _sum_sales5287;
};
struct SW_JOIN_INNER_TD_4203_key_rightMajor {
    std::string _i_category6149;
    std::string _i_brand6145;
    std::string _s_store_name6215;
    std::string _s_company_name6227;
    int32_t _rn6243;
    bool operator==(const SW_JOIN_INNER_TD_4203_key_rightMajor& other) const {
        return ((_i_category6149 == other._i_category6149) && (_i_brand6145 == other._i_brand6145) && (_s_store_name6215 == other._s_store_name6215) && (_s_company_name6227 == other._s_company_name6227) && (_rn6243 == other._rn6243));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4203_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4203_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category6149)) + (hash<string>()(k._i_brand6145)) + (hash<string>()(k._s_store_name6215)) + (hash<string>()(k._s_company_name6227)) + (hash<int32_t>()(k._rn6243));
    }
};
}
struct SW_JOIN_INNER_TD_4203_payload_rightMajor {
    std::string _i_category6149;
    std::string _i_brand6145;
    std::string _s_store_name6215;
    std::string _s_company_name6227;
    int32_t _sum_sales5296;
    int32_t _rn6243;
};
void SW_JOIN_INNER_TD_4203(Table &tbl_JOIN_INNER_TD_5295_output, Table &tbl_Project_TD_5547_output, Table &tbl_JOIN_INNER_TD_4203_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((i_category#240 = i_category#6149) AND (i_brand#236 = i_brand#6145)) AND (s_store_name#383 = s_store_name#6215)) AND (s_company_name#395 = s_company_name#6227)) AND (rn#5268 = (rn#6243 - 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#5266, avg_monthly_sales#5267, rn#5268, sum_sales#5287)
    // Right Table: ListBuffer(i_category#6149, i_brand#6145, s_store_name#6215, s_company_name#6227, sum_sales#5296, rn#6243)
    // Output Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, sum_sales#5287, sum_sales#5296)
    int left_nrow = tbl_JOIN_INNER_TD_5295_output.getNumRow();
    int right_nrow = tbl_Project_TD_5547_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4203_key_leftMajor, SW_JOIN_INNER_TD_4203_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5295_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            int32_t _rn5268_k = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_4203_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k, _rn5268_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 5);
            int32_t _sum_sales5266 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 6);
            int32_t _avg_monthly_sales5267 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 7);
            int32_t _rn5268 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 8);
            int32_t _sum_sales5287 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_4203_payload_leftMajor payloadA{_i_category240, _i_brand236, _s_store_name383, _s_company_name395, _d_year126, _d_moy128, _sum_sales5266, _avg_monthly_sales5267, _rn5268, _sum_sales5287};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5547_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category6149_k_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category6149_k = std::string(_i_category6149_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_k_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand6145_k = std::string(_i_brand6145_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_k_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name6215_k = std::string(_s_store_name6215_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_k_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name6227_k = std::string(_s_company_name6227_k_n.data());
            int32_t _rn6243_k = tbl_Project_TD_5547_output.getInt32(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4203_key_leftMajor{_i_category6149_k, _i_brand6145_k, _s_store_name6215_k, _s_company_name6227_k, _rn6243_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_company_name395 = (it->second)._s_company_name395;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n{};
                memcpy(_s_company_name395_n.data(), (_s_company_name395).data(), (_s_company_name395).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _sum_sales5266 = (it->second)._sum_sales5266;
                int32_t _avg_monthly_sales5267 = (it->second)._avg_monthly_sales5267;
                int32_t _rn5268 = (it->second)._rn5268;
                int32_t _sum_sales5287 = (it->second)._sum_sales5287;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category6149 = std::string(_i_category6149_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand6145 = std::string(_i_brand6145_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name6215 = std::string(_s_store_name6215_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name6227 = std::string(_s_company_name6227_n.data());
                int32_t _sum_sales5296 = tbl_Project_TD_5547_output.getInt32(i, 4);
                int32_t _rn6243 = tbl_Project_TD_5547_output.getInt32(i, 5);
                if (_rn5268 == (_rn6243 - 1)) {
                    tbl_JOIN_INNER_TD_4203_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4203_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4203_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_4203_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 7, _sum_sales5266);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 6, _avg_monthly_sales5267);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 8, _sum_sales5287);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 9, _sum_sales5296);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4203_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4203_key_rightMajor, SW_JOIN_INNER_TD_4203_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5547_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category6149_k_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category6149_k = std::string(_i_category6149_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_k_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand6145_k = std::string(_i_brand6145_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_k_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name6215_k = std::string(_s_store_name6215_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_k_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name6227_k = std::string(_s_company_name6227_k_n.data());
            int32_t _rn6243_k = tbl_Project_TD_5547_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_4203_key_rightMajor keyA{_i_category6149_k, _i_brand6145_k, _s_store_name6215_k, _s_company_name6227_k, _rn6243_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category6149 = std::string(_i_category6149_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand6145 = std::string(_i_brand6145_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name6215 = std::string(_s_store_name6215_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_n = tbl_Project_TD_5547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name6227 = std::string(_s_company_name6227_n.data());
            int32_t _sum_sales5296 = tbl_Project_TD_5547_output.getInt32(i, 4);
            int32_t _rn6243 = tbl_Project_TD_5547_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_4203_payload_rightMajor payloadA{_i_category6149, _i_brand6145, _s_store_name6215, _s_company_name6227, _sum_sales5296, _rn6243};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5295_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            int32_t _rn5268_k = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4203_key_rightMajor{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k, _rn5268_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category6149 = (it->second)._i_category6149;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6149_n{};
                memcpy(_i_category6149_n.data(), (_i_category6149).data(), (_i_category6149).length());
                std::string _i_brand6145 = (it->second)._i_brand6145;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand6145_n{};
                memcpy(_i_brand6145_n.data(), (_i_brand6145).data(), (_i_brand6145).length());
                std::string _s_store_name6215 = (it->second)._s_store_name6215;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6215_n{};
                memcpy(_s_store_name6215_n.data(), (_s_store_name6215).data(), (_s_store_name6215).length());
                std::string _s_company_name6227 = (it->second)._s_company_name6227;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name6227_n{};
                memcpy(_s_company_name6227_n.data(), (_s_company_name6227).data(), (_s_company_name6227).length());
                int32_t _sum_sales5296 = (it->second)._sum_sales5296;
                int32_t _rn6243 = (it->second)._rn6243;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_JOIN_INNER_TD_5295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 5);
                int32_t _sum_sales5266 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 6);
                int32_t _avg_monthly_sales5267 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 7);
                int32_t _rn5268 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 8);
                int32_t _sum_sales5287 = tbl_JOIN_INNER_TD_5295_output.getInt32(i, 9);
                if (_rn5268 == (_rn6243 - 1)) {
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 9, _sum_sales5296);
                    tbl_JOIN_INNER_TD_4203_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4203_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4203_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_4203_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 7, _sum_sales5266);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 6, _avg_monthly_sales5267);
                    tbl_JOIN_INNER_TD_4203_output.setInt32(r, 8, _sum_sales5287);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4203_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4203_output #Row: " << tbl_JOIN_INNER_TD_4203_output.getNumRow() << std::endl;
}

void SW_Project_TD_3198(Table &tbl_JOIN_INNER_TD_4203_output, Table &tbl_Project_TD_3198_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#5287 AS psum#5269, sum_sales#5296 AS nsum#5270)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, sum_sales#5287, sum_sales#5296)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, psum#5269, nsum#5270)
    int nrow1 = tbl_JOIN_INNER_TD_4203_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_4203_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4203_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_4203_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_JOIN_INNER_TD_4203_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4203_output.getInt32(i, 4);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_4203_output.getInt32(i, 5);
        int32_t _avg_monthly_sales5267 = tbl_JOIN_INNER_TD_4203_output.getInt32(i, 6);
        int32_t _sum_sales5266 = tbl_JOIN_INNER_TD_4203_output.getInt32(i, 7);
        int32_t _sum_sales5287 = tbl_JOIN_INNER_TD_4203_output.getInt32(i, 8);
        int32_t _sum_sales5296 = tbl_JOIN_INNER_TD_4203_output.getInt32(i, 9);
        int32_t _psum5269 = _sum_sales5287;
        tbl_Project_TD_3198_output.setInt32(i, 8, _psum5269);
        int32_t _nsum5270 = _sum_sales5296;
        tbl_Project_TD_3198_output.setInt32(i, 9, _nsum5270);
        tbl_Project_TD_3198_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category240);
        tbl_Project_TD_3198_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand236);
        tbl_Project_TD_3198_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name383);
        tbl_Project_TD_3198_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name395);
        tbl_Project_TD_3198_output.setInt32(i, 4, _d_year126);
        tbl_Project_TD_3198_output.setInt32(i, 5, _d_moy128);
        tbl_Project_TD_3198_output.setInt32(i, 6, _avg_monthly_sales5267);
        tbl_Project_TD_3198_output.setInt32(i, 7, _sum_sales5266);
    }
    tbl_Project_TD_3198_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3198_output #Row: " << tbl_Project_TD_3198_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2392(Table &tbl_Project_TD_3198_output, Table &tbl_Sort_TD_2392_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(sum_sales#5266 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#5267 as decimal(22,6)))), DecimalType(22,6), true) ASC NULLS FIRST, s_store_name#383 ASC NULLS FIRST)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, psum#5269, nsum#5270)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, psum#5269, nsum#5270)
    struct SW_Sort_TD_2392Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _avg_monthly_sales5267;
        int32_t _sum_sales5266;
        int32_t _psum5269;
        int32_t _nsum5270;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2392Row& a, const SW_Sort_TD_2392Row& b) const { return 
 || 
 ((a._true == b._true) && (a._s_store_name383 < b._s_store_name383)); 
}
    }SW_Sort_TD_2392_order; 

    int nrow1 = tbl_Project_TD_3198_output.getNumRow();
    std::vector<SW_Sort_TD_2392Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_3198_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Project_TD_3198_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Project_TD_3198_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Project_TD_3198_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _d_year126 = tbl_Project_TD_3198_output.getInt32(i, 4);
        int32_t _d_moy128 = tbl_Project_TD_3198_output.getInt32(i, 5);
        int32_t _avg_monthly_sales5267 = tbl_Project_TD_3198_output.getInt32(i, 6);
        int32_t _sum_sales5266 = tbl_Project_TD_3198_output.getInt32(i, 7);
        int32_t _psum5269 = tbl_Project_TD_3198_output.getInt32(i, 8);
        int32_t _nsum5270 = tbl_Project_TD_3198_output.getInt32(i, 9);
        SW_Sort_TD_2392Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_avg_monthly_sales5267,_sum_sales5266,_psum5269,_nsum5270};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2392_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2392_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), (it._i_brand236).data(), (it._i_brand236).length());
        tbl_Sort_TD_2392_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), (it._s_store_name383).data(), (it._s_store_name383).length());
        tbl_Sort_TD_2392_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395{};
        memcpy(_s_company_name395.data(), (it._s_company_name395).data(), (it._s_company_name395).length());
        tbl_Sort_TD_2392_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        tbl_Sort_TD_2392_output.setInt32(r, 4, it._d_year126);
        tbl_Sort_TD_2392_output.setInt32(r, 5, it._d_moy128);
        tbl_Sort_TD_2392_output.setInt32(r, 6, it._avg_monthly_sales5267);
        tbl_Sort_TD_2392_output.setInt32(r, 7, it._sum_sales5266);
        tbl_Sort_TD_2392_output.setInt32(r, 8, it._psum5269);
        tbl_Sort_TD_2392_output.setInt32(r, 9, it._nsum5270);
        ++r;
    }
    tbl_Sort_TD_2392_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2392_output #Row: " << tbl_Sort_TD_2392_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1604(Table &tbl_Sort_TD_2392_output, Table &tbl_LocalLimit_TD_1604_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, psum#5269, nsum#5270)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, psum#5269, nsum#5270)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2392_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1604_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Sort_TD_2392_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1604_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Sort_TD_2392_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1604_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Sort_TD_2392_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1604_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
        tbl_LocalLimit_TD_1604_output.setInt32(r, 4, tbl_Sort_TD_2392_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1604_output.setInt32(r, 5, tbl_Sort_TD_2392_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1604_output.setInt32(r, 6, tbl_Sort_TD_2392_output.getInt32(i, 6));
        tbl_LocalLimit_TD_1604_output.setInt32(r, 7, tbl_Sort_TD_2392_output.getInt32(i, 7));
        tbl_LocalLimit_TD_1604_output.setInt32(r, 8, tbl_Sort_TD_2392_output.getInt32(i, 8));
        tbl_LocalLimit_TD_1604_output.setInt32(r, 9, tbl_Sort_TD_2392_output.getInt32(i, 9));
        r++;
    }
    tbl_LocalLimit_TD_1604_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1604_output #Row: " << tbl_LocalLimit_TD_1604_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0910(Table &tbl_LocalLimit_TD_1604_output, Table &tbl_GlobalLimit_TD_0910_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, psum#5269, nsum#5270)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#5267, sum_sales#5266, psum#5269, nsum#5270)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1604_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_LocalLimit_TD_1604_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_LocalLimit_TD_1604_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_LocalLimit_TD_1604_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
        tbl_GlobalLimit_TD_0910_output.setInt32(r, 4, tbl_LocalLimit_TD_1604_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0910_output.setInt32(r, 5, tbl_LocalLimit_TD_1604_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0910_output.setInt32(r, 6, tbl_LocalLimit_TD_1604_output.getInt32(i, 6));
        tbl_GlobalLimit_TD_0910_output.setInt32(r, 7, tbl_LocalLimit_TD_1604_output.getInt32(i, 7));
        tbl_GlobalLimit_TD_0910_output.setInt32(r, 8, tbl_LocalLimit_TD_1604_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0910_output.setInt32(r, 9, tbl_LocalLimit_TD_1604_output.getInt32(i, 9));
        r++;
    }
    tbl_GlobalLimit_TD_0910_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0910_output #Row: " << tbl_GlobalLimit_TD_0910_output.getNumRow() << std::endl;
}

