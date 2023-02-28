#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_8483739(Table &tbl_SerializeFromObject_TD_9825310_input, Table &tbl_Filter_TD_8483739_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(cd_gender#94) AND isnotnull(cd_marital_status#95)) AND isnotnull(cd_education_status#96)) AND (((cd_gender#94 = M) AND (cd_marital_status#95 = S)) AND (cd_education_status#96 = College))) AND isnotnull(cd_demo_sk#93)))
    // Input: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96)
    // Output: ListBuffer(cd_demo_sk#93)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9825310_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_SerializeFromObject_TD_9825310_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_9825310_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_SerializeFromObject_TD_9825310_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_9825310_input.getInt32(i, 0);
        if ((((_cd_gender94.data() != "NULL" && _cd_marital_status95.data() != "NULL") && _cd_education_status96.data() != "NULL") && (((std::string(_cd_gender94.data()) == "M") && (std::string(_cd_marital_status95.data()) == "S")) && (std::string(_cd_education_status96.data()) == "College"))) && (_cd_demo_sk93!= 0)) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_9825310_input.getInt32(i, 0);
            tbl_Filter_TD_8483739_output.setInt32(r, 0, _cd_demo_sk93_t);
            r++;
        }
    }
    tbl_Filter_TD_8483739_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8483739_output #Row: " << tbl_Filter_TD_8483739_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8342051(Table &tbl_SerializeFromObject_TD_9492981_input, Table &tbl_Filter_TD_8342051_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_cdemo_sk#1210) AND isnotnull(ss_sold_date_sk#1206)) AND (isnotnull(ss_item_sk#1208) AND isnotnull(ss_promo_sk#1214))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_cdemo_sk#1210, ss_promo_sk#1214, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_cdemo_sk#1210, ss_promo_sk#1214, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9492981_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_cdemo_sk1210 = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 2);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 1);
        int32_t _ss_promo_sk1214 = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 3);
        if (((_ss_cdemo_sk1210!= 0) && (_ss_sold_date_sk1206!= 0)) && ((_ss_item_sk1208!= 0) && (_ss_promo_sk1214!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 0);
            tbl_Filter_TD_8342051_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 1);
            tbl_Filter_TD_8342051_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_cdemo_sk1210_t = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 2);
            tbl_Filter_TD_8342051_output.setInt32(r, 2, _ss_cdemo_sk1210_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 3);
            tbl_Filter_TD_8342051_output.setInt32(r, 3, _ss_promo_sk1214_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_9492981_input.getInt32(i, 4);
            tbl_Filter_TD_8342051_output.setInt32(r, 4, _ss_quantity1216_t);
            int64_t _ss_list_price1218_t = tbl_SerializeFromObject_TD_9492981_input.getInt64(i, 5);
            tbl_Filter_TD_8342051_output.setInt64(r, 5, _ss_list_price1218_t);
            int64_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_9492981_input.getInt64(i, 6);
            tbl_Filter_TD_8342051_output.setInt64(r, 6, _ss_sales_price1219_t);
            int64_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_9492981_input.getInt64(i, 7);
            tbl_Filter_TD_8342051_output.setInt64(r, 7, _ss_coupon_amt1225_t);
            r++;
        }
    }
    tbl_Filter_TD_8342051_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8342051_output #Row: " << tbl_Filter_TD_8342051_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7131618(Table &tbl_SerializeFromObject_TD_8743802_input, Table &tbl_Filter_TD_7131618_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8743802_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_8743802_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8743802_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8743802_input.getInt32(i, 0);
            tbl_Filter_TD_7131618_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7131618_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7131618_output #Row: " << tbl_Filter_TD_7131618_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6288031(Table &tbl_SerializeFromObject_TD_7559948_input, Table &tbl_Filter_TD_6288031_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7559948_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7559948_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7559948_input.getInt32(i, 0);
            tbl_Filter_TD_6288031_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_7559948_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6288031_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_6288031_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6288031_output #Row: " << tbl_Filter_TD_6288031_output.getNumRow() << std::endl;
}


void SW_Filter_TD_5712314(Table &tbl_SerializeFromObject_TD_6808529_input, Table &tbl_Filter_TD_5712314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((p_channel_email#303 = N) OR (p_channel_event#308 = N)) AND isnotnull(p_promo_sk#294)))
    // Input: ListBuffer(p_promo_sk#294, p_channel_email#303, p_channel_event#308)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6808529_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_email303 = tbl_SerializeFromObject_TD_6808529_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_event308 = tbl_SerializeFromObject_TD_6808529_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_6808529_input.getInt32(i, 0);
        if (((std::string(_p_channel_email303.data()) == "N") || (std::string(_p_channel_event308.data()) == "N")) && (_p_promo_sk294!= 0)) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_6808529_input.getInt32(i, 0);
            tbl_Filter_TD_5712314_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_5712314_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5712314_output #Row: " << tbl_Filter_TD_5712314_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5176366_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_5176366_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5176366_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5176366_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_5176366_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_promo_sk1214;
    int32_t _ss_quantity1216;
    int64_t _ss_list_price1218;
    int64_t _ss_sales_price1219;
    int64_t _ss_coupon_amt1225;
};
struct SW_JOIN_INNER_TD_5176366_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5176366_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5176366_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5176366_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5176366_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_5176366(Table &tbl_JOIN_INNER_TD_6838353_output, Table &tbl_Filter_TD_6288031_output, Table &tbl_JOIN_INNER_TD_5176366_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_promo_sk#1214, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(ss_promo_sk#1214, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_6838353_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6288031_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5176366_key_leftMajor, SW_JOIN_INNER_TD_5176366_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6838353_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6838353_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5176366_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6838353_output.getInt32(i, 0);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_6838353_output.getInt32(i, 1);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_6838353_output.getInt32(i, 2);
            int64_t _ss_list_price1218 = tbl_JOIN_INNER_TD_6838353_output.getInt64(i, 3);
            int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6838353_output.getInt64(i, 4);
            int64_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_6838353_output.getInt64(i, 5);
            SW_JOIN_INNER_TD_5176366_payload_leftMajor payloadA{_ss_item_sk1208, _ss_promo_sk1214, _ss_quantity1216, _ss_list_price1218, _ss_sales_price1219, _ss_coupon_amt1225};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6288031_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6288031_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5176366_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int64_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int64_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int64_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _i_item_sk228 = tbl_Filter_TD_6288031_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6288031_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_5176366_output.setInt32(r, 0, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_5176366_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_5176366_output.setInt64(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_5176366_output.setInt64(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_5176366_output.setInt64(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_5176366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5176366_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5176366_key_rightMajor, SW_JOIN_INNER_TD_5176366_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6288031_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6288031_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5176366_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6288031_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6288031_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_5176366_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6838353_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6838353_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5176366_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6838353_output.getInt32(i, 0);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_6838353_output.getInt32(i, 1);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_6838353_output.getInt32(i, 2);
                int64_t _ss_list_price1218 = tbl_JOIN_INNER_TD_6838353_output.getInt64(i, 3);
                int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6838353_output.getInt64(i, 4);
                int64_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_6838353_output.getInt64(i, 5);
                tbl_JOIN_INNER_TD_5176366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5176366_output.setInt32(r, 0, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_5176366_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_5176366_output.setInt64(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_5176366_output.setInt64(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_5176366_output.setInt64(r, 4, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5176366_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5176366_output #Row: " << tbl_JOIN_INNER_TD_5176366_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4782636_key_leftMajor {
    int32_t _ss_promo_sk1214;
    bool operator==(const SW_JOIN_INNER_TD_4782636_key_leftMajor& other) const {
        return ((_ss_promo_sk1214 == other._ss_promo_sk1214));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4782636_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4782636_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_promo_sk1214));
    }
};
}
struct SW_JOIN_INNER_TD_4782636_payload_leftMajor {
    int32_t _ss_promo_sk1214;
    int32_t _ss_quantity1216;
    int64_t _ss_list_price1218;
    int64_t _ss_sales_price1219;
    int64_t _ss_coupon_amt1225;
    std::string _i_item_id229;
};
struct SW_JOIN_INNER_TD_4782636_key_rightMajor {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_INNER_TD_4782636_key_rightMajor& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4782636_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4782636_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_INNER_TD_4782636_payload_rightMajor {
    int32_t _p_promo_sk294;
};
void SW_JOIN_INNER_TD_4782636(Table &tbl_JOIN_INNER_TD_5176366_output, Table &tbl_Filter_TD_5712314_output, Table &tbl_JOIN_INNER_TD_4782636_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_promo_sk#1214 = p_promo_sk#294))
    // Left Table: ListBuffer(ss_promo_sk#1214, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, i_item_id#229)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_5176366_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5712314_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4782636_key_leftMajor, SW_JOIN_INNER_TD_4782636_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5176366_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_5176366_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4782636_key_leftMajor keyA{_ss_promo_sk1214_k};
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_5176366_output.getInt32(i, 0);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_5176366_output.getInt32(i, 1);
            int64_t _ss_list_price1218 = tbl_JOIN_INNER_TD_5176366_output.getInt64(i, 2);
            int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_5176366_output.getInt64(i, 3);
            int64_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_5176366_output.getInt64(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5176366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_4782636_payload_leftMajor payloadA{_ss_promo_sk1214, _ss_quantity1216, _ss_list_price1218, _ss_sales_price1219, _ss_coupon_amt1225, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5712314_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_5712314_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4782636_key_leftMajor{_p_promo_sk294_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int64_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int64_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int64_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _p_promo_sk294 = tbl_Filter_TD_5712314_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4782636_output.setInt32(r, 0, _ss_quantity1216);
                tbl_JOIN_INNER_TD_4782636_output.setInt64(r, 1, _ss_list_price1218);
                tbl_JOIN_INNER_TD_4782636_output.setInt64(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_4782636_output.setInt64(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_4782636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4782636_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4782636_key_rightMajor, SW_JOIN_INNER_TD_4782636_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5712314_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_5712314_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4782636_key_rightMajor keyA{_p_promo_sk294_k};
            int32_t _p_promo_sk294 = tbl_Filter_TD_5712314_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4782636_payload_rightMajor payloadA{_p_promo_sk294};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5176366_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_5176366_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4782636_key_rightMajor{_ss_promo_sk1214_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk294 = (it->second)._p_promo_sk294;
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_5176366_output.getInt32(i, 0);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_5176366_output.getInt32(i, 1);
                int64_t _ss_list_price1218 = tbl_JOIN_INNER_TD_5176366_output.getInt64(i, 2);
                int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_5176366_output.getInt64(i, 3);
                int64_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_5176366_output.getInt64(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5176366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_4782636_output.setInt32(r, 0, _ss_quantity1216);
                tbl_JOIN_INNER_TD_4782636_output.setInt64(r, 1, _ss_list_price1218);
                tbl_JOIN_INNER_TD_4782636_output.setInt64(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_4782636_output.setInt64(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_4782636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4782636_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4782636_output #Row: " << tbl_JOIN_INNER_TD_4782636_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3136577_key;
struct SW_Aggregate_TD_3136577_payload {
    int64_t _agg13544_avg_0;
    int64_t _agg23545_avg_1;
    int64_t _agg33546_avg_2;
    int64_t _agg43547_avg_3;
};
void SW_Aggregate_TD_3136577(Table &tbl_JOIN_INNER_TD_4782636_output, Table &tbl_Aggregate_TD_3136577_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, avg(ss_quantity#1216) AS agg1#3544, cast((avg(UnscaledValue(ss_list_price#1218)) / 100.0) as decimal(11,6)) AS agg2#3545, cast((avg(UnscaledValue(ss_coupon_amt#1225)) / 100.0) as decimal(11,6)) AS agg3#3546, cast((avg(UnscaledValue(ss_sales_price#1219)) / 100.0) as decimal(11,6)) AS agg4#3547)
    // Input: ListBuffer(ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, i_item_id#229)
    // Output: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    std::unordered_map<SW_Aggregate_TD_3136577_key, SW_Aggregate_TD_3136577_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4782636_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_4782636_output.getInt32(i, 0);
        int64_t _ss_list_price1218 = tbl_JOIN_INNER_TD_4782636_output.getInt64(i, 1);
        int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_4782636_output.getInt64(i, 2);
        int64_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_4782636_output.getInt64(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4782636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_3136577_key k = std::string(_i_item_id229.data());
        int64_t _agg13544_avg_0 = _ss_quantity1216;
        int64_t _agg23545_avg_1 = _ss_list_price1218;
        int64_t _agg33546_avg_2 = _ss_coupon_amt1225;
        int64_t _agg43547_avg_3 = _ss_sales_price1219;
        SW_Aggregate_TD_3136577_payload p{_agg13544_avg_0, _agg23545_avg_1, _agg33546_avg_2, _agg43547_avg_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._agg13544_avg_0 + _agg13544_avg_0);
            p._agg13544_avg_0 = avg_0;
            int64_t avg_1 = ((it->second)._agg23545_avg_1 + _agg23545_avg_1);
            p._agg23545_avg_1 = avg_1;
            int64_t avg_2 = ((it->second)._agg33546_avg_2 + _agg33546_avg_2);
            p._agg33546_avg_2 = avg_2;
            int64_t avg_3 = ((it->second)._agg43547_avg_3 + _agg43547_avg_3);
            p._agg43547_avg_3 = avg_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_3136577_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        int64_t _agg13544 = (it.second)._agg13544_avg_0 / nrow1;
        tbl_Aggregate_TD_3136577_output.setInt64(r, 1, _agg13544);
        int64_t _agg23545 = ((it.second)._agg23545_avg_1 / nrow1 / 100.0);
        tbl_Aggregate_TD_3136577_output.setInt64(r, 2, _agg23545);
        int64_t _agg33546 = ((it.second)._agg33546_avg_2 / nrow1 / 100.0);
        tbl_Aggregate_TD_3136577_output.setInt64(r, 3, _agg33546);
        int64_t _agg43547 = ((it.second)._agg43547_avg_3 / nrow1 / 100.0);
        tbl_Aggregate_TD_3136577_output.setInt64(r, 4, _agg43547);
        ++r;
    }
    tbl_Aggregate_TD_3136577_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3136577_output #Row: " << tbl_Aggregate_TD_3136577_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2219996(Table &tbl_Aggregate_TD_3136577_output, Table &tbl_Sort_TD_2219996_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#229 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    // Output: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    struct SW_Sort_TD_2219996Row {
        std::string _i_item_id229;
        int64_t _agg13544;
        int64_t _agg23545;
        int64_t _agg33546;
        int64_t _agg43547;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2219996Row& a, const SW_Sort_TD_2219996Row& b) const { return 
 (a._i_item_id229 < b._i_item_id229); 
}
    }SW_Sort_TD_2219996_order; 

    int nrow1 = tbl_Aggregate_TD_3136577_output.getNumRow();
    std::vector<SW_Sort_TD_2219996Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3136577_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _agg13544 = tbl_Aggregate_TD_3136577_output.getInt32(i, 1);
        int64_t _agg23545 = tbl_Aggregate_TD_3136577_output.getInt64(i, 2);
        int64_t _agg33546 = tbl_Aggregate_TD_3136577_output.getInt64(i, 3);
        int64_t _agg43547 = tbl_Aggregate_TD_3136577_output.getInt64(i, 4);
        SW_Sort_TD_2219996Row t = {std::string(_i_item_id229.data()),_agg13544,_agg23545,_agg33546,_agg43547};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2219996_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2219996_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        tbl_Sort_TD_2219996_output.setInt32(r, 1, it._agg13544);
        tbl_Sort_TD_2219996_output.setInt64(r, 2, it._agg23545);
        tbl_Sort_TD_2219996_output.setInt64(r, 3, it._agg33546);
        tbl_Sort_TD_2219996_output.setInt64(r, 4, it._agg43547);
        ++r;
    }
    tbl_Sort_TD_2219996_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2219996_output #Row: " << tbl_Sort_TD_2219996_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1892936(Table &tbl_Sort_TD_2219996_output, Table &tbl_LocalLimit_TD_1892936_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    // Output: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2219996_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1892936_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_LocalLimit_TD_1892936_output.setInt64(r, 1, tbl_Sort_TD_2219996_output.getInt64(i, 1));
        tbl_LocalLimit_TD_1892936_output.setInt64(r, 2, tbl_Sort_TD_2219996_output.getInt64(i, 2));
        tbl_LocalLimit_TD_1892936_output.setInt64(r, 3, tbl_Sort_TD_2219996_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1892936_output.setInt64(r, 4, tbl_Sort_TD_2219996_output.getInt64(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1892936_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1892936_output #Row: " << tbl_LocalLimit_TD_1892936_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0722063(Table &tbl_LocalLimit_TD_1892936_output, Table &tbl_GlobalLimit_TD_0722063_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    // Output: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1892936_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0722063_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_GlobalLimit_TD_0722063_output.setInt64(r, 1, tbl_LocalLimit_TD_1892936_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0722063_output.setInt64(r, 2, tbl_LocalLimit_TD_1892936_output.getInt64(i, 2));
        tbl_GlobalLimit_TD_0722063_output.setInt64(r, 3, tbl_LocalLimit_TD_1892936_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0722063_output.setInt64(r, 4, tbl_LocalLimit_TD_1892936_output.getInt64(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0722063_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0722063_output #Row: " << tbl_GlobalLimit_TD_0722063_output.getNumRow() << std::endl;
}

