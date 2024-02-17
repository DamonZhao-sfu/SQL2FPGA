#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9668(Table &tbl_SerializeFromObject_TD_10698_input, Table &tbl_Filter_TD_9668_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10698_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10698_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10698_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10698_input.getInt32(i, 2);
        if ((_ss_item_sk1208!= 0) && ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10698_input.getInt32(i, 0);
            tbl_Filter_TD_9668_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10698_input.getInt32(i, 1);
            tbl_Filter_TD_9668_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10698_input.getInt32(i, 2);
            tbl_Filter_TD_9668_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_10698_input.getInt32(i, 3);
            tbl_Filter_TD_9668_output.setInt32(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_9668_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9668_output #Row: " << tbl_Filter_TD_9668_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9168(Table &tbl_SerializeFromObject_TD_1037_input, Table &tbl_Filter_TD_9168_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((i_category#240 IN (Books,Electronics,Sports) AND i_class#238 IN (computers,stereo,football)) OR (i_category#240 IN (Men,Jewelry,Women) AND i_class#238 IN (shirts,birdal,dresses))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1037_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_1037_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_SerializeFromObject_TD_1037_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_1037_input.getInt32(i, 0);
        auto reuse_col_str_165 = std::string(_i_category240.data());
        auto reuse_col_str_432 = std::string(_i_class238.data());
        auto reuse_col_str_219 = std::string(_i_category240.data());
        auto reuse_col_str_557 = std::string(_i_class238.data());
        if (((((reuse_col_str_165 == "Books") || (reuse_col_str_165 == "Electronics") || (reuse_col_str_165 == "Sports") || (0)) && ((reuse_col_str_432 == "computers") || (reuse_col_str_432 == "stereo") || (reuse_col_str_432 == "football") || (0))) || (((reuse_col_str_219 == "Men") || (reuse_col_str_219 == "Jewelry") || (reuse_col_str_219 == "Women") || (0)) && ((reuse_col_str_557 == "shirts") || (reuse_col_str_557 == "birdal") || (reuse_col_str_557 == "dresses") || (0)))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_1037_input.getInt32(i, 0);
            tbl_Filter_TD_9168_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_1037_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_t = tbl_SerializeFromObject_TD_1037_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_class238_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_1037_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_9168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_9168_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9168_output #Row: " << tbl_Filter_TD_9168_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8569(Table &tbl_SerializeFromObject_TD_9941_input, Table &tbl_Filter_TD_8569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 1999)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9941_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_9941_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9941_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 1999)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9941_input.getInt32(i, 0);
            tbl_Filter_TD_8569_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_9941_input.getInt32(i, 1);
            tbl_Filter_TD_8569_output.setInt32(r, 1, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_8569_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8569_output #Row: " << tbl_Filter_TD_8569_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_846_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_846_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_846_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_846_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_846_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_class238;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_846_key_rightMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_846_key_rightMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_846_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_846_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_846_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
void SW_JOIN_INNER_TD_846(Table &tbl_Filter_TD_9168_output, Table &tbl_Filter_TD_9668_output, Table &tbl_JOIN_INNER_TD_846_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_brand#236, i_class#238, i_category#240)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output Table: ListBuffer(i_brand#236, i_class#238, i_category#240, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    int left_nrow = tbl_Filter_TD_9168_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9668_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_846_key_leftMajor, SW_JOIN_INNER_TD_846_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9168_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9168_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_846_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_9168_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_9168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_9168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_9168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_846_payload_leftMajor payloadA{_i_item_sk228, _i_brand236, _i_class238, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9668_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_9668_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_846_key_leftMajor{_ss_item_sk1208_k});
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
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9668_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9668_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_9668_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_9668_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_n);
                tbl_JOIN_INNER_TD_846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                tbl_JOIN_INNER_TD_846_output.setInt32(r, 3, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_846_output.setInt32(r, 4, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_846_output.setInt32(r, 5, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_846_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_846_key_rightMajor, SW_JOIN_INNER_TD_846_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9668_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_9668_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_846_key_rightMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9668_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9668_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_9668_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_9668_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_846_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9168_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9168_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_846_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _i_item_sk228 = tbl_Filter_TD_9168_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_9168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Filter_TD_9168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_9168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_846_output.setInt32(r, 3, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_846_output.setInt32(r, 4, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_846_output.setInt32(r, 5, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_n);
                tbl_JOIN_INNER_TD_846_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_846_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_846_output #Row: " << tbl_JOIN_INNER_TD_846_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7396(Table &tbl_SerializeFromObject_TD_8890_input, Table &tbl_Filter_TD_7396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8890_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_8890_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_8890_input.getInt32(i, 0);
            tbl_Filter_TD_7396_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_8890_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_SerializeFromObject_TD_8890_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name395_t);
            r++;
        }
    }
    tbl_Filter_TD_7396_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7396_output #Row: " << tbl_Filter_TD_7396_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7324_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_7324_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7324_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7324_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_7324_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_class238;
    std::string _i_category240;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_7324_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7324_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7324_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7324_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7324_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_7324(Table &tbl_JOIN_INNER_TD_846_output, Table &tbl_Filter_TD_8569_output, Table &tbl_JOIN_INNER_TD_7324_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(i_brand#236, i_class#238, i_category#240, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_moy#128)
    // Output Table: ListBuffer(i_brand#236, i_class#238, i_category#240, ss_store_sk#1213, ss_sales_price#1219, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_846_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8569_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7324_key_leftMajor, SW_JOIN_INNER_TD_7324_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_846_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_846_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7324_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_846_output.getInt32(i, 3);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_846_output.getInt32(i, 4);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_846_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_7324_payload_leftMajor payloadA{_i_brand236, _i_class238, _i_category240, _ss_sold_date_sk1206, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8569_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8569_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7324_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_8569_output.getInt32(i, 0);
                int32_t _d_moy128 = tbl_Filter_TD_8569_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_7324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_n);
                tbl_JOIN_INNER_TD_7324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                tbl_JOIN_INNER_TD_7324_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7324_output.setInt32(r, 4, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_7324_output.setInt32(r, 5, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7324_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7324_key_rightMajor, SW_JOIN_INNER_TD_7324_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8569_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8569_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7324_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_8569_output.getInt32(i, 0);
            int32_t _d_moy128 = tbl_Filter_TD_8569_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7324_payload_rightMajor payloadA{_d_date_sk120, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_846_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_846_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7324_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_moy128 = (it->second)._d_moy128;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_846_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_846_output.getInt32(i, 3);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_846_output.getInt32(i, 4);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_846_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_7324_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_7324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_7324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_n);
                tbl_JOIN_INNER_TD_7324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                tbl_JOIN_INNER_TD_7324_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7324_output.setInt32(r, 4, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7324_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7324_output #Row: " << tbl_JOIN_INNER_TD_7324_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6795_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_6795_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6795_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6795_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_6795_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_class238;
    std::string _i_category240;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_6795_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_6795_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6795_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6795_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_6795_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
    std::string _s_company_name395;
};
void SW_JOIN_INNER_TD_6795(Table &tbl_JOIN_INNER_TD_7324_output, Table &tbl_Filter_TD_7396_output, Table &tbl_JOIN_INNER_TD_6795_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(i_brand#236, i_class#238, i_category#240, ss_store_sk#1213, ss_sales_price#1219, d_moy#128)
    // Right Table: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    // Output Table: ListBuffer(i_brand#236, i_class#238, i_category#240, ss_sales_price#1219, d_moy#128, s_store_name#383, s_company_name#395)
    int left_nrow = tbl_JOIN_INNER_TD_7324_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7396_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6795_key_leftMajor, SW_JOIN_INNER_TD_6795_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7324_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7324_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6795_key_leftMajor keyA{_ss_store_sk1213_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_7324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_7324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_class238 = std::string(_i_class238_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7324_output.getInt32(i, 3);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_7324_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_7324_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_6795_payload_leftMajor payloadA{_i_brand236, _i_class238, _i_category240, _ss_store_sk1213, _ss_sales_price1219, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7396_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7396_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6795_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_class238 = (it->second)._i_class238;
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n{};
                memcpy(_i_class238_n.data(), (_i_class238).data(), (_i_class238).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _s_store_sk378 = tbl_Filter_TD_7396_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_7396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_7396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_n);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                tbl_JOIN_INNER_TD_6795_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6795_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name395_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6795_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6795_key_rightMajor, SW_JOIN_INNER_TD_6795_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7396_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7396_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6795_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_7396_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_7396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_7396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            SW_JOIN_INNER_TD_6795_payload_rightMajor payloadA{_s_store_sk378, _s_store_name383, _s_company_name395};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7324_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7324_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6795_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_company_name395 = (it->second)._s_company_name395;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n{};
                memcpy(_s_company_name395_n.data(), (_s_company_name395).data(), (_s_company_name395).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_7324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_JOIN_INNER_TD_7324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_class238 = std::string(_i_class238_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7324_output.getInt32(i, 3);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_7324_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_7324_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name395_n);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_n);
                tbl_JOIN_INNER_TD_6795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
                tbl_JOIN_INNER_TD_6795_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6795_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6795_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6795_output #Row: " << tbl_JOIN_INNER_TD_6795_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5940_key {
    std::string _i_category240;
    std::string _i_class238;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_5940_key& other) const { return (_i_category240 == other._i_category240) && (_i_class238 == other._i_class238) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5940_key> {
    std::size_t operator() (const SW_Aggregate_TD_5940_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_class238)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_5940_payload {
    int32_t _sum_sales10195_sum_0;
    int32_t __w010200_sum_1;
};
void SW_Aggregate_TD_5940(Table &tbl_JOIN_INNER_TD_6795_output, Table &tbl_Aggregate_TD_5940_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS sum_sales#10195, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS _w0#10200)
    // Input: ListBuffer(i_brand#236, i_class#238, i_category#240, ss_sales_price#1219, d_moy#128, s_store_name#383, s_company_name#395)
    // Output: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, _w0#10200)
    std::unordered_map<SW_Aggregate_TD_5940_key, SW_Aggregate_TD_5940_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6795_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_6795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_JOIN_INNER_TD_6795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_6795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6795_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_6795_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_6795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_JOIN_INNER_TD_6795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_5940_key k{std::string(_i_category240.data()), std::string(_i_class238.data()), std::string(_i_brand236.data()), std::string(_s_store_name383.data()), std::string(_s_company_name395.data()), _d_moy128};
        int64_t _sum_sales10195_sum_0 = _ss_sales_price1219;
        int64_t __w010200_sum_1 = _ss_sales_price1219;
        SW_Aggregate_TD_5940_payload p{_sum_sales10195_sum_0, __w010200_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales10195_sum_0 + _sum_sales10195_sum_0;
            p._sum_sales10195_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w010200_sum_1 + __w010200_sum_1;
            p.__w010200_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_5940_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238{};
        memcpy(_i_class238.data(), ((it.first)._i_class238).data(), ((it.first)._i_class238).length());
        tbl_Aggregate_TD_5940_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), ((it.first)._i_brand236).data(), ((it.first)._i_brand236).length());
        tbl_Aggregate_TD_5940_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), ((it.first)._s_store_name383).data(), ((it.first)._s_store_name383).length());
        tbl_Aggregate_TD_5940_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395{};
        memcpy(_s_company_name395.data(), ((it.first)._s_company_name395).data(), ((it.first)._s_company_name395).length());
        tbl_Aggregate_TD_5940_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_company_name395);
        tbl_Aggregate_TD_5940_output.setInt32(r, 5, (it.first)._d_moy128);
        int32_t _sum_sales10195 = (it.second)._sum_sales10195_sum_0;
        tbl_Aggregate_TD_5940_output.setInt32(r, 6, _sum_sales10195);
        int32_t __w010200 = (it.second).__w010200_sum_1;
        tbl_Aggregate_TD_5940_output.setInt32(r, 7, __w010200);
        ++r;
    }
    tbl_Aggregate_TD_5940_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5940_output #Row: " << tbl_Aggregate_TD_5940_output.getNumRow() << std::endl;
}

void SW_Window_TD_4198(Table &tbl_Aggregate_TD_5940_output, Table &tbl_Window_TD_4198_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#10200) windowspecdefinition(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#10196)
    // Input: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, _w0#10200)
    // Output: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, _w0#10200, avg_monthly_sales#10196)
    struct SW_Window_TD_4198Row {
        std::string _i_category240;
        std::string _i_class238;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_moy128;
        int32_t _sum_sales10195;
        int32_t __w010200;
    }; 

    int nrow = tbl_Aggregate_TD_5940_output.getNumRow();
    std::vector<SW_Window_TD_4198Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_5940_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_4198_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Aggregate_TD_5940_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_4198_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_class238);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Aggregate_TD_5940_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_4198_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Aggregate_TD_5940_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_4198_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Aggregate_TD_5940_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        tbl_Window_TD_4198_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _s_company_name395);
        int32_t _d_moy128 = tbl_Aggregate_TD_5940_output.getInt32(i, 5);
        tbl_Window_TD_4198_output.setInt32(r, 5,_d_moy128);
        int32_t _sum_sales10195 = tbl_Aggregate_TD_5940_output.getInt32(i, 6);
        tbl_Window_TD_4198_output.setInt32(r, 6,_sum_sales10195);
        int32_t __w010200 = tbl_Aggregate_TD_5940_output.getInt32(i, 7);
        tbl_Window_TD_4198_output.setInt32(r, 7,__w010200);
        r++;
        SW_Window_TD_4198Row t = {std::string(_i_category240.data()),std::string(_i_class238.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_moy128,_sum_sales10195,__w010200};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4198Row& a, const SW_Window_TD_4198Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 < b._s_store_name383)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 < b._s_company_name395)); 
}
    }SW_Window_TD_4198_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4198_order0);
    int64_t sum0 = 0;
    int64_t currentRow0 = 0;
    std::string current_i_category2400 = "";
    std::string current_i_brand2360 = "";
    std::string current_s_store_name3830 = "";
    std::string current_s_company_name3950 = "";
    for (auto& it : rows0) {
        if (current_i_category2400 != it._i_category240 || current_i_brand2360 != it._i_brand236 || current_s_store_name3830 != it._s_store_name383 || current_s_company_name3950 != it._s_company_name395) {
            sum0 = 0;
            currentRow0 = 0;
            current_i_category2400 = it._i_category240;
            current_i_brand2360 = it._i_brand236;
            current_s_store_name3830 = it._s_store_name383;
            current_s_company_name3950 = it._s_company_name395;
        }
        sum0 += it.__w010200;
        currentRow0 +=1;
        tbl_Window_TD_4198_output.setInt64(r, 8, sum0 / currentRow0 );
    }
    tbl_Window_TD_4198_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4198_output #Row: " << tbl_Window_TD_4198_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3912(Table &tbl_Window_TD_4198_output, Table &tbl_Filter_TD_3912_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(avg_monthly_sales#10196) AND (NOT (avg_monthly_sales#10196 = 0.000000) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#10195 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#10196 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#10196 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000))))
    // Input: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, _w0#10200, avg_monthly_sales#10196)
    // Output: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, avg_monthly_sales#10196)
    int r = 0;
    int nrow1 = tbl_Window_TD_4198_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avg_monthly_sales10196 = tbl_Window_TD_4198_output.getInt32(i, 8);
        int32_t _sum_sales10195 = tbl_Window_TD_4198_output.getInt32(i, 6);
        if ((_avg_monthly_sales10196!= 0) && (!((_avg_monthly_sales10196 == 0.000000)) && (_sum_sales10195 > 0.1000000000000000))) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_4198_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_3912_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_class238_t = tbl_Window_TD_4198_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_3912_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_4198_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_3912_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_Window_TD_4198_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_3912_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_Window_TD_4198_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_3912_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_company_name395_t);
            int32_t _d_moy128_t = tbl_Window_TD_4198_output.getInt32(i, 5);
            tbl_Filter_TD_3912_output.setInt32(r, 5, _d_moy128_t);
            int32_t _sum_sales10195_t = tbl_Window_TD_4198_output.getInt32(i, 6);
            tbl_Filter_TD_3912_output.setInt32(r, 6, _sum_sales10195_t);
            int32_t _avg_monthly_sales10196_t = tbl_Window_TD_4198_output.getInt32(i, 8);
            tbl_Filter_TD_3912_output.setInt32(r, 7, _avg_monthly_sales10196_t);
            r++;
        }
    }
    tbl_Filter_TD_3912_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3912_output #Row: " << tbl_Filter_TD_3912_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2336(Table &tbl_Filter_TD_3912_output, Table &tbl_Sort_TD_2336_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(sum_sales#10195 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#10196 as decimal(22,6)))), DecimalType(22,6), true) ASC NULLS FIRST, s_store_name#383 ASC NULLS FIRST)
    // Input: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, avg_monthly_sales#10196)
    // Output: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, avg_monthly_sales#10196)
    struct SW_Sort_TD_2336Row {
        std::string _i_category240;
        std::string _i_class238;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_moy128;
        int32_t _sum_sales10195;
        int32_t _avg_monthly_sales10196;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2336Row& a, const SW_Sort_TD_2336Row& b) const { return 
 || 
 ((a._true == b._true) && (a._s_store_name383 < b._s_store_name383)); 
}
    }SW_Sort_TD_2336_order; 

    int nrow1 = tbl_Filter_TD_3912_output.getNumRow();
    std::vector<SW_Sort_TD_2336Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_3912_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_Filter_TD_3912_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Filter_TD_3912_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Filter_TD_3912_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Filter_TD_3912_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        int32_t _d_moy128 = tbl_Filter_TD_3912_output.getInt32(i, 5);
        int32_t _sum_sales10195 = tbl_Filter_TD_3912_output.getInt32(i, 6);
        int32_t _avg_monthly_sales10196 = tbl_Filter_TD_3912_output.getInt32(i, 7);
        SW_Sort_TD_2336Row t = {std::string(_i_category240.data()),std::string(_i_class238.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_moy128,_sum_sales10195,_avg_monthly_sales10196};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2336_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2336_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238{};
        memcpy(_i_class238.data(), (it._i_class238).data(), (it._i_class238).length());
        tbl_Sort_TD_2336_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_class238);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), (it._i_brand236).data(), (it._i_brand236).length());
        tbl_Sort_TD_2336_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), (it._s_store_name383).data(), (it._s_store_name383).length());
        tbl_Sort_TD_2336_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395{};
        memcpy(_s_company_name395.data(), (it._s_company_name395).data(), (it._s_company_name395).length());
        tbl_Sort_TD_2336_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _s_company_name395);
        tbl_Sort_TD_2336_output.setInt32(r, 5, it._d_moy128);
        tbl_Sort_TD_2336_output.setInt32(r, 6, it._sum_sales10195);
        tbl_Sort_TD_2336_output.setInt32(r, 7, it._avg_monthly_sales10196);
        ++r;
    }
    tbl_Sort_TD_2336_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2336_output #Row: " << tbl_Sort_TD_2336_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1348(Table &tbl_Sort_TD_2336_output, Table &tbl_LocalLimit_TD_1348_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, avg_monthly_sales#10196)
    // Output: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, avg_monthly_sales#10196)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_Sort_TD_2336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Sort_TD_2336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Sort_TD_2336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Sort_TD_2336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_LocalLimit_TD_1348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_company_name395_n);
        tbl_LocalLimit_TD_1348_output.setInt32(r, 5, tbl_Sort_TD_2336_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1348_output.setInt32(r, 6, tbl_Sort_TD_2336_output.getInt32(i, 6));
        tbl_LocalLimit_TD_1348_output.setInt32(r, 7, tbl_Sort_TD_2336_output.getInt32(i, 7));
        r++;
    }
    tbl_LocalLimit_TD_1348_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1348_output #Row: " << tbl_LocalLimit_TD_1348_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0863(Table &tbl_LocalLimit_TD_1348_output, Table &tbl_GlobalLimit_TD_0863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, avg_monthly_sales#10196)
    // Output: ListBuffer(i_category#240, i_class#238, i_brand#236, s_store_name#383, s_company_name#395, d_moy#128, sum_sales#10195, avg_monthly_sales#10196)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0863_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238_n = tbl_LocalLimit_TD_1348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0863_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_class238_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_LocalLimit_TD_1348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0863_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_LocalLimit_TD_1348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0863_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_store_name383_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_LocalLimit_TD_1348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_GlobalLimit_TD_0863_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_company_name395_n);
        tbl_GlobalLimit_TD_0863_output.setInt32(r, 5, tbl_LocalLimit_TD_1348_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0863_output.setInt32(r, 6, tbl_LocalLimit_TD_1348_output.getInt32(i, 6));
        tbl_GlobalLimit_TD_0863_output.setInt32(r, 7, tbl_LocalLimit_TD_1348_output.getInt32(i, 7));
        r++;
    }
    tbl_GlobalLimit_TD_0863_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0863_output #Row: " << tbl_GlobalLimit_TD_0863_output.getNumRow() << std::endl;
}

