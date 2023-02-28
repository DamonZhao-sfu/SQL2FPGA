#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_8411038(Table &tbl_SerializeFromObject_TD_951368_input, Table &tbl_Filter_TD_8411038_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(cd_gender#94) AND isnotnull(cd_marital_status#95)) AND isnotnull(cd_education_status#96)) AND (((cd_gender#94 = M) AND (cd_marital_status#95 = S)) AND (cd_education_status#96 = College))) AND isnotnull(cd_demo_sk#93)))
    // Input: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96)
    // Output: ListBuffer(cd_demo_sk#93)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_951368_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_SerializeFromObject_TD_951368_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_951368_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_SerializeFromObject_TD_951368_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_951368_input.getInt32(i, 0);
        if (((((std::string(_cd_gender94.data()) != "NULL") && (std::string(_cd_marital_status95.data()) != "NULL")) && (std::string(_cd_education_status96.data()) != "NULL")) && (((std::string(_cd_gender94.data()) == "M") && (std::string(_cd_marital_status95.data()) == "S")) && (std::string(_cd_education_status96.data()) == "College"))) && (_cd_demo_sk93!= 0)) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_951368_input.getInt32(i, 0);
            tbl_Filter_TD_8411038_output.setInt32(r, 0, _cd_demo_sk93_t);
            r++;
        }
    }
    tbl_Filter_TD_8411038_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8411038_output #Row: " << tbl_Filter_TD_8411038_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8301634(Table &tbl_SerializeFromObject_TD_9634658_input, Table &tbl_Filter_TD_8301634_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_bill_cdemo_sk#1108) AND isnotnull(cs_sold_date_sk#1104)) AND (isnotnull(cs_item_sk#1119) AND isnotnull(cs_promo_sk#1120))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_cdemo_sk#1108, cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_cdemo_sk#1108, cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9634658_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_cdemo_sk1108 = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 2);
        int32_t _cs_promo_sk1120 = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 3);
        if (((_cs_bill_cdemo_sk1108!= 0) && (_cs_sold_date_sk1104!= 0)) && ((_cs_item_sk1119!= 0) && (_cs_promo_sk1120!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 0);
            tbl_Filter_TD_8301634_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_cdemo_sk1108_t = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 1);
            tbl_Filter_TD_8301634_output.setInt32(r, 1, _cs_bill_cdemo_sk1108_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 2);
            tbl_Filter_TD_8301634_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_promo_sk1120_t = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 3);
            tbl_Filter_TD_8301634_output.setInt32(r, 3, _cs_promo_sk1120_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_9634658_input.getInt32(i, 4);
            tbl_Filter_TD_8301634_output.setInt32(r, 4, _cs_quantity1122_t);
            int64_t _cs_list_price1124_t = tbl_SerializeFromObject_TD_9634658_input.getInt64(i, 5);
            tbl_Filter_TD_8301634_output.setInt64(r, 5, _cs_list_price1124_t);
            int64_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_9634658_input.getInt64(i, 6);
            tbl_Filter_TD_8301634_output.setInt64(r, 6, _cs_sales_price1125_t);
            int64_t _cs_coupon_amt1131_t = tbl_SerializeFromObject_TD_9634658_input.getInt64(i, 7);
            tbl_Filter_TD_8301634_output.setInt64(r, 7, _cs_coupon_amt1131_t);
            r++;
        }
    }
    tbl_Filter_TD_8301634_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8301634_output #Row: " << tbl_Filter_TD_8301634_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7510349(Table &tbl_SerializeFromObject_TD_839714_input, Table &tbl_Filter_TD_7510349_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_839714_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_839714_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_839714_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_839714_input.getInt32(i, 0);
            tbl_Filter_TD_7510349_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7510349_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7510349_output #Row: " << tbl_Filter_TD_7510349_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6994985(Table &tbl_SerializeFromObject_TD_7825808_input, Table &tbl_Filter_TD_6994985_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7825808_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7825808_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7825808_input.getInt32(i, 0);
            tbl_Filter_TD_6994985_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_7825808_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6994985_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_6994985_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6994985_output #Row: " << tbl_Filter_TD_6994985_output.getNumRow() << std::endl;
}


void SW_Filter_TD_5872233(Table &tbl_SerializeFromObject_TD_6506664_input, Table &tbl_Filter_TD_5872233_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((p_channel_email#303 = N) OR (p_channel_event#308 = N)) AND isnotnull(p_promo_sk#294)))
    // Input: ListBuffer(p_promo_sk#294, p_channel_email#303, p_channel_event#308)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6506664_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_email303 = tbl_SerializeFromObject_TD_6506664_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_event308 = tbl_SerializeFromObject_TD_6506664_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_6506664_input.getInt32(i, 0);
        if (((std::string(_p_channel_email303.data()) == "N") || (std::string(_p_channel_event308.data()) == "N")) && (_p_promo_sk294!= 0)) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_6506664_input.getInt32(i, 0);
            tbl_Filter_TD_5872233_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_5872233_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5872233_output #Row: " << tbl_Filter_TD_5872233_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5580582_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_5580582_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5580582_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5580582_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_5580582_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_quantity1122;
    int64_t _cs_list_price1124;
    int64_t _cs_sales_price1125;
    int64_t _cs_coupon_amt1131;
};
struct SW_JOIN_INNER_TD_5580582_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5580582_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5580582_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5580582_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5580582_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_5580582(Table &tbl_JOIN_INNER_TD_6466058_output, Table &tbl_Filter_TD_6994985_output, Table &tbl_JOIN_INNER_TD_5580582_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#228))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_6466058_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6994985_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5580582_key_leftMajor, SW_JOIN_INNER_TD_5580582_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6466058_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_6466058_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5580582_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6466058_output.getInt32(i, 0);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_6466058_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6466058_output.getInt32(i, 2);
            int64_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6466058_output.getInt64(i, 3);
            int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6466058_output.getInt64(i, 4);
            int64_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_6466058_output.getInt64(i, 5);
            SW_JOIN_INNER_TD_5580582_payload_leftMajor payloadA{_cs_item_sk1119, _cs_promo_sk1120, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6994985_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6994985_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5580582_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int64_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int64_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int64_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _i_item_sk228 = tbl_Filter_TD_6994985_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6994985_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_5580582_output.setInt32(r, 0, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_5580582_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5580582_output.setInt64(r, 2, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5580582_output.setInt64(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_5580582_output.setInt64(r, 4, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_5580582_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5580582_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5580582_key_rightMajor, SW_JOIN_INNER_TD_5580582_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6994985_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6994985_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5580582_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6994985_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6994985_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_5580582_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6466058_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_6466058_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5580582_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6466058_output.getInt32(i, 0);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_6466058_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6466058_output.getInt32(i, 2);
                int64_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6466058_output.getInt64(i, 3);
                int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6466058_output.getInt64(i, 4);
                int64_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_6466058_output.getInt64(i, 5);
                tbl_JOIN_INNER_TD_5580582_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5580582_output.setInt32(r, 0, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_5580582_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5580582_output.setInt64(r, 2, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5580582_output.setInt64(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_5580582_output.setInt64(r, 4, _cs_coupon_amt1131);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5580582_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5580582_output #Row: " << tbl_JOIN_INNER_TD_5580582_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4952724_key_leftMajor {
    int32_t _cs_promo_sk1120;
    bool operator==(const SW_JOIN_INNER_TD_4952724_key_leftMajor& other) const {
        return ((_cs_promo_sk1120 == other._cs_promo_sk1120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4952724_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4952724_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_promo_sk1120));
    }
};
}
struct SW_JOIN_INNER_TD_4952724_payload_leftMajor {
    int32_t _cs_promo_sk1120;
    int32_t _cs_quantity1122;
    int64_t _cs_list_price1124;
    int64_t _cs_sales_price1125;
    int64_t _cs_coupon_amt1131;
    std::string _i_item_id229;
};
struct SW_JOIN_INNER_TD_4952724_key_rightMajor {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_INNER_TD_4952724_key_rightMajor& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4952724_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4952724_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_INNER_TD_4952724_payload_rightMajor {
    int32_t _p_promo_sk294;
};
void SW_JOIN_INNER_TD_4952724(Table &tbl_JOIN_INNER_TD_5580582_output, Table &tbl_Filter_TD_5872233_output, Table &tbl_JOIN_INNER_TD_4952724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_promo_sk#1120 = p_promo_sk#294))
    // Left Table: ListBuffer(cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, i_item_id#229)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_5580582_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5872233_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4952724_key_leftMajor, SW_JOIN_INNER_TD_4952724_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5580582_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_5580582_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4952724_key_leftMajor keyA{_cs_promo_sk1120_k};
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_5580582_output.getInt32(i, 0);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_5580582_output.getInt32(i, 1);
            int64_t _cs_list_price1124 = tbl_JOIN_INNER_TD_5580582_output.getInt64(i, 2);
            int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_5580582_output.getInt64(i, 3);
            int64_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_5580582_output.getInt64(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5580582_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_4952724_payload_leftMajor payloadA{_cs_promo_sk1120, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5872233_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_5872233_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4952724_key_leftMajor{_p_promo_sk294_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int64_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int64_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int64_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _p_promo_sk294 = tbl_Filter_TD_5872233_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4952724_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_4952724_output.setInt64(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_4952724_output.setInt64(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_4952724_output.setInt64(r, 3, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_4952724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4952724_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4952724_key_rightMajor, SW_JOIN_INNER_TD_4952724_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5872233_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_5872233_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4952724_key_rightMajor keyA{_p_promo_sk294_k};
            int32_t _p_promo_sk294 = tbl_Filter_TD_5872233_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4952724_payload_rightMajor payloadA{_p_promo_sk294};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5580582_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_5580582_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4952724_key_rightMajor{_cs_promo_sk1120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk294 = (it->second)._p_promo_sk294;
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_5580582_output.getInt32(i, 0);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_5580582_output.getInt32(i, 1);
                int64_t _cs_list_price1124 = tbl_JOIN_INNER_TD_5580582_output.getInt64(i, 2);
                int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_5580582_output.getInt64(i, 3);
                int64_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_5580582_output.getInt64(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5580582_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_4952724_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_4952724_output.setInt64(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_4952724_output.setInt64(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_4952724_output.setInt64(r, 3, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_4952724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4952724_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4952724_output #Row: " << tbl_JOIN_INNER_TD_4952724_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3752206_key;
struct SW_Aggregate_TD_3752206_payload {
    int64_t _agg13544_avg_0;
    int64_t _agg23545_avg_1;
    int64_t _agg33546_avg_2;
    int64_t _agg43547_avg_3;
};
void SW_Aggregate_TD_3752206(Table &tbl_JOIN_INNER_TD_4952724_output, Table &tbl_Aggregate_TD_3752206_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, avg(cs_quantity#1122) AS agg1#3544, cast((avg(UnscaledValue(cs_list_price#1124)) / 100.0) as decimal(11,6)) AS agg2#3545, cast((avg(UnscaledValue(cs_coupon_amt#1131)) / 100.0) as decimal(11,6)) AS agg3#3546, cast((avg(UnscaledValue(cs_sales_price#1125)) / 100.0) as decimal(11,6)) AS agg4#3547)
    // Input: ListBuffer(cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, i_item_id#229)
    // Output: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    std::unordered_map<SW_Aggregate_TD_3752206_key, SW_Aggregate_TD_3752206_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4952724_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_4952724_output.getInt32(i, 0);
        int64_t _cs_list_price1124 = tbl_JOIN_INNER_TD_4952724_output.getInt64(i, 1);
        int64_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_4952724_output.getInt64(i, 2);
        int64_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_4952724_output.getInt64(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4952724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_3752206_key k = std::string(_i_item_id229.data());
        int64_t _agg13544_avg_0 = _cs_quantity1122;
        int64_t _agg23545_avg_1 = _cs_list_price1124;
        int64_t _agg33546_avg_2 = _cs_coupon_amt1131;
        int64_t _agg43547_avg_3 = _cs_sales_price1125;
        SW_Aggregate_TD_3752206_payload p{_agg13544_avg_0, _agg23545_avg_1, _agg33546_avg_2, _agg43547_avg_3};
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
        tbl_Aggregate_TD_3752206_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        int64_t _agg13544 = (it.second)._agg13544_avg_0 / nrow1;
        tbl_Aggregate_TD_3752206_output.setInt64(r, 1, _agg13544);
        int64_t _agg23545 = ((it.second)._agg23545_avg_1 / nrow1 / 100.0);
        tbl_Aggregate_TD_3752206_output.setInt64(r, 2, _agg23545);
        int64_t _agg33546 = ((it.second)._agg33546_avg_2 / nrow1 / 100.0);
        tbl_Aggregate_TD_3752206_output.setInt64(r, 3, _agg33546);
        int64_t _agg43547 = ((it.second)._agg43547_avg_3 / nrow1 / 100.0);
        tbl_Aggregate_TD_3752206_output.setInt64(r, 4, _agg43547);
        ++r;
    }
    tbl_Aggregate_TD_3752206_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3752206_output #Row: " << tbl_Aggregate_TD_3752206_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2936640(Table &tbl_Aggregate_TD_3752206_output, Table &tbl_Sort_TD_2936640_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#229 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    // Output: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    struct SW_Sort_TD_2936640Row {
        std::string _i_item_id229;
        int64_t _agg13544;
        int64_t _agg23545;
        int64_t _agg33546;
        int64_t _agg43547;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2936640Row& a, const SW_Sort_TD_2936640Row& b) const { return 
 (a._i_item_id229 < b._i_item_id229); 
}
    }SW_Sort_TD_2936640_order; 

    int nrow1 = tbl_Aggregate_TD_3752206_output.getNumRow();
    std::vector<SW_Sort_TD_2936640Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3752206_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _agg13544 = tbl_Aggregate_TD_3752206_output.getInt32(i, 1);
        int64_t _agg23545 = tbl_Aggregate_TD_3752206_output.getInt64(i, 2);
        int64_t _agg33546 = tbl_Aggregate_TD_3752206_output.getInt64(i, 3);
        int64_t _agg43547 = tbl_Aggregate_TD_3752206_output.getInt64(i, 4);
        SW_Sort_TD_2936640Row t = {std::string(_i_item_id229.data()),_agg13544,_agg23545,_agg33546,_agg43547};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2936640_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2936640_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        tbl_Sort_TD_2936640_output.setInt32(r, 1, it._agg13544);
        tbl_Sort_TD_2936640_output.setInt64(r, 2, it._agg23545);
        tbl_Sort_TD_2936640_output.setInt64(r, 3, it._agg33546);
        tbl_Sort_TD_2936640_output.setInt64(r, 4, it._agg43547);
        ++r;
    }
    tbl_Sort_TD_2936640_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2936640_output #Row: " << tbl_Sort_TD_2936640_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1131871(Table &tbl_Sort_TD_2936640_output, Table &tbl_LocalLimit_TD_1131871_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    // Output: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2936640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1131871_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_LocalLimit_TD_1131871_output.setInt64(r, 1, tbl_Sort_TD_2936640_output.getInt64(i, 1));
        tbl_LocalLimit_TD_1131871_output.setInt64(r, 2, tbl_Sort_TD_2936640_output.getInt64(i, 2));
        tbl_LocalLimit_TD_1131871_output.setInt64(r, 3, tbl_Sort_TD_2936640_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1131871_output.setInt64(r, 4, tbl_Sort_TD_2936640_output.getInt64(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1131871_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1131871_output #Row: " << tbl_LocalLimit_TD_1131871_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0929814(Table &tbl_LocalLimit_TD_1131871_output, Table &tbl_GlobalLimit_TD_0929814_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    // Output: ListBuffer(i_item_id#229, agg1#3544, agg2#3545, agg3#3546, agg4#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1131871_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0929814_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_GlobalLimit_TD_0929814_output.setInt64(r, 1, tbl_LocalLimit_TD_1131871_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0929814_output.setInt64(r, 2, tbl_LocalLimit_TD_1131871_output.getInt64(i, 2));
        tbl_GlobalLimit_TD_0929814_output.setInt64(r, 3, tbl_LocalLimit_TD_1131871_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0929814_output.setInt64(r, 4, tbl_LocalLimit_TD_1131871_output.getInt64(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0929814_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0929814_output #Row: " << tbl_GlobalLimit_TD_0929814_output.getNumRow() << std::endl;
}

