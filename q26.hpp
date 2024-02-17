#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8694(Table &tbl_SerializeFromObject_TD_9506_input, Table &tbl_Filter_TD_8694_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(cd_gender#94) AND isnotnull(cd_marital_status#95)) AND isnotnull(cd_education_status#96)) AND (((cd_gender#94 = M) AND (cd_marital_status#95 = S)) AND (cd_education_status#96 = College))) AND isnotnull(cd_demo_sk#93)))
    // Input: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96)
    // Output: ListBuffer(cd_demo_sk#93)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9506_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_SerializeFromObject_TD_9506_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_9506_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_SerializeFromObject_TD_9506_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_9506_input.getInt32(i, 0);
        if ((((（std::string(_isnotnullcd_gender94.data()) != "NULL") && （std::string(_isnotnullcd_marital_status95.data()) != "NULL")) && （std::string(_isnotnullcd_education_status96.data()) != "NULL")) && (((std::string(_cd_gender94.data()) == "M") && (std::string(_cd_marital_status95.data()) == "S")) && (std::string(_cd_education_status96.data()) == "College"))) && (_cd_demo_sk93!= 0)) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_9506_input.getInt32(i, 0);
            tbl_Filter_TD_8694_output.setInt32(r, 0, _cd_demo_sk93_t);
            r++;
        }
    }
    tbl_Filter_TD_8694_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8694_output #Row: " << tbl_Filter_TD_8694_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8513(Table &tbl_SerializeFromObject_TD_9416_input, Table &tbl_Filter_TD_8513_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_bill_cdemo_sk#1108) AND isnotnull(cs_sold_date_sk#1104)) AND (isnotnull(cs_item_sk#1119) AND isnotnull(cs_promo_sk#1120))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_cdemo_sk#1108, cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_cdemo_sk#1108, cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9416_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_cdemo_sk1108 = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 2);
        int32_t _cs_promo_sk1120 = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 3);
        if (((_cs_bill_cdemo_sk1108!= 0) && (_cs_sold_date_sk1104!= 0)) && ((_cs_item_sk1119!= 0) && (_cs_promo_sk1120!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 0);
            tbl_Filter_TD_8513_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_cdemo_sk1108_t = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 1);
            tbl_Filter_TD_8513_output.setInt32(r, 1, _cs_bill_cdemo_sk1108_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 2);
            tbl_Filter_TD_8513_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_promo_sk1120_t = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 3);
            tbl_Filter_TD_8513_output.setInt32(r, 3, _cs_promo_sk1120_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 4);
            tbl_Filter_TD_8513_output.setInt32(r, 4, _cs_quantity1122_t);
            int32_t _cs_list_price1124_t = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 5);
            tbl_Filter_TD_8513_output.setInt32(r, 5, _cs_list_price1124_t);
            int32_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 6);
            tbl_Filter_TD_8513_output.setInt32(r, 6, _cs_sales_price1125_t);
            int32_t _cs_coupon_amt1131_t = tbl_SerializeFromObject_TD_9416_input.getInt32(i, 7);
            tbl_Filter_TD_8513_output.setInt32(r, 7, _cs_coupon_amt1131_t);
            r++;
        }
    }
    tbl_Filter_TD_8513_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8513_output #Row: " << tbl_Filter_TD_8513_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7802(Table &tbl_SerializeFromObject_TD_8674_input, Table &tbl_Filter_TD_7802_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8674_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_8674_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8674_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8674_input.getInt32(i, 0);
            tbl_Filter_TD_7802_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7802_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7802_output #Row: " << tbl_Filter_TD_7802_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7570_key_leftMajor {
    int32_t _cs_bill_cdemo_sk1108;
    bool operator==(const SW_JOIN_INNER_TD_7570_key_leftMajor& other) const {
        return ((_cs_bill_cdemo_sk1108 == other._cs_bill_cdemo_sk1108));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7570_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7570_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_cdemo_sk1108));
    }
};
}
struct SW_JOIN_INNER_TD_7570_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_cdemo_sk1108;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
};
struct SW_JOIN_INNER_TD_7570_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_7570_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7570_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7570_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_7570_payload_rightMajor {
    int32_t _cd_demo_sk93;
};
void SW_JOIN_INNER_TD_7570(Table &tbl_Filter_TD_8513_output, Table &tbl_Filter_TD_8694_output, Table &tbl_JOIN_INNER_TD_7570_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_cdemo_sk#1108 = cd_demo_sk#93))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_cdemo_sk#1108, cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    // Right Table: ListBuffer(cd_demo_sk#93)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    int left_nrow = tbl_Filter_TD_8513_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8694_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7570_key_leftMajor, SW_JOIN_INNER_TD_7570_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8513_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_cdemo_sk1108_k = tbl_Filter_TD_8513_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7570_key_leftMajor keyA{_cs_bill_cdemo_sk1108_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8513_output.getInt32(i, 0);
            int32_t _cs_bill_cdemo_sk1108 = tbl_Filter_TD_8513_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_8513_output.getInt32(i, 2);
            int32_t _cs_promo_sk1120 = tbl_Filter_TD_8513_output.getInt32(i, 3);
            int32_t _cs_quantity1122 = tbl_Filter_TD_8513_output.getInt32(i, 4);
            int32_t _cs_list_price1124 = tbl_Filter_TD_8513_output.getInt32(i, 5);
            int32_t _cs_sales_price1125 = tbl_Filter_TD_8513_output.getInt32(i, 6);
            int32_t _cs_coupon_amt1131 = tbl_Filter_TD_8513_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_7570_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_cdemo_sk1108, _cs_item_sk1119, _cs_promo_sk1120, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8694_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_8694_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7570_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_cdemo_sk1108 = (it->second)._cs_bill_cdemo_sk1108;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_8694_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 4, _cs_list_price1124);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 5, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 6, _cs_coupon_amt1131);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7570_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7570_key_rightMajor, SW_JOIN_INNER_TD_7570_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8694_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_8694_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7570_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_8694_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7570_payload_rightMajor payloadA{_cd_demo_sk93};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8513_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_cdemo_sk1108_k = tbl_Filter_TD_8513_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7570_key_rightMajor{_cs_bill_cdemo_sk1108_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8513_output.getInt32(i, 0);
                int32_t _cs_bill_cdemo_sk1108 = tbl_Filter_TD_8513_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_8513_output.getInt32(i, 2);
                int32_t _cs_promo_sk1120 = tbl_Filter_TD_8513_output.getInt32(i, 3);
                int32_t _cs_quantity1122 = tbl_Filter_TD_8513_output.getInt32(i, 4);
                int32_t _cs_list_price1124 = tbl_Filter_TD_8513_output.getInt32(i, 5);
                int32_t _cs_sales_price1125 = tbl_Filter_TD_8513_output.getInt32(i, 6);
                int32_t _cs_coupon_amt1131 = tbl_Filter_TD_8513_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 2, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 4, _cs_list_price1124);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 5, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_7570_output.setInt32(r, 6, _cs_coupon_amt1131);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7570_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7570_output #Row: " << tbl_JOIN_INNER_TD_7570_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6251(Table &tbl_SerializeFromObject_TD_7910_input, Table &tbl_Filter_TD_6251_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7910_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7910_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7910_input.getInt32(i, 0);
            tbl_Filter_TD_6251_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_7910_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6251_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_6251_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6251_output #Row: " << tbl_Filter_TD_6251_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6882_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_6882_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6882_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6882_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_6882_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
};
struct SW_JOIN_INNER_TD_6882_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6882_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6882_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6882_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6882_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_6882(Table &tbl_JOIN_INNER_TD_7570_output, Table &tbl_Filter_TD_7802_output, Table &tbl_JOIN_INNER_TD_6882_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    int left_nrow = tbl_JOIN_INNER_TD_7570_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7802_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6882_key_leftMajor, SW_JOIN_INNER_TD_6882_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7570_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6882_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 1);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 2);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 3);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 4);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 5);
            int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_6882_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_promo_sk1120, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7802_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7802_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6882_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _d_date_sk120 = tbl_Filter_TD_7802_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 3, _cs_list_price1124);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 5, _cs_coupon_amt1131);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6882_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6882_key_rightMajor, SW_JOIN_INNER_TD_6882_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7802_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7802_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6882_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7802_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6882_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7570_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6882_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 1);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 2);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 3);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 4);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 5);
                int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_7570_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 1, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 3, _cs_list_price1124);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_6882_output.setInt32(r, 5, _cs_coupon_amt1131);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6882_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6882_output #Row: " << tbl_JOIN_INNER_TD_6882_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5309(Table &tbl_SerializeFromObject_TD_6710_input, Table &tbl_Filter_TD_5309_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((p_channel_email#303 = N) OR (p_channel_event#308 = N)) AND isnotnull(p_promo_sk#294)))
    // Input: ListBuffer(p_promo_sk#294, p_channel_email#303, p_channel_event#308)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6710_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_email303 = tbl_SerializeFromObject_TD_6710_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_event308 = tbl_SerializeFromObject_TD_6710_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_6710_input.getInt32(i, 0);
        if (((std::string(_p_channel_email303.data()) == "N") || (std::string(_p_channel_event308.data()) == "N")) && (_p_promo_sk294!= 0)) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_6710_input.getInt32(i, 0);
            tbl_Filter_TD_5309_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_5309_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5309_output #Row: " << tbl_Filter_TD_5309_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5860_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_5860_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5860_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5860_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_5860_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int32_t _cs_promo_sk1120;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
};
struct SW_JOIN_INNER_TD_5860_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5860_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5860_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5860_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5860_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_5860(Table &tbl_JOIN_INNER_TD_6882_output, Table &tbl_Filter_TD_6251_output, Table &tbl_JOIN_INNER_TD_5860_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#228))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_6882_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6251_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5860_key_leftMajor, SW_JOIN_INNER_TD_5860_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6882_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5860_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 0);
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 2);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 3);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 4);
            int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_5860_payload_leftMajor payloadA{_cs_item_sk1119, _cs_promo_sk1120, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6251_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6251_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5860_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _i_item_sk228 = tbl_Filter_TD_6251_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 0, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 2, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 4, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_5860_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5860_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5860_key_rightMajor, SW_JOIN_INNER_TD_5860_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6251_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6251_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5860_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6251_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6251_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_5860_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6882_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5860_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 0);
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 2);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 3);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 4);
                int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_6882_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_5860_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 0, _cs_promo_sk1120);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 2, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_5860_output.setInt32(r, 4, _cs_coupon_amt1131);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5860_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5860_output #Row: " << tbl_JOIN_INNER_TD_5860_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4435_key_leftMajor {
    int32_t _cs_promo_sk1120;
    bool operator==(const SW_JOIN_INNER_TD_4435_key_leftMajor& other) const {
        return ((_cs_promo_sk1120 == other._cs_promo_sk1120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4435_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4435_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_promo_sk1120));
    }
};
}
struct SW_JOIN_INNER_TD_4435_payload_leftMajor {
    int32_t _cs_promo_sk1120;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
    std::string _i_item_id229;
};
struct SW_JOIN_INNER_TD_4435_key_rightMajor {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_INNER_TD_4435_key_rightMajor& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4435_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4435_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_INNER_TD_4435_payload_rightMajor {
    int32_t _p_promo_sk294;
};
void SW_JOIN_INNER_TD_4435(Table &tbl_JOIN_INNER_TD_5860_output, Table &tbl_Filter_TD_5309_output, Table &tbl_JOIN_INNER_TD_4435_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_promo_sk#1120 = p_promo_sk#294))
    // Left Table: ListBuffer(cs_promo_sk#1120, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, i_item_id#229)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_5860_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5309_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4435_key_leftMajor, SW_JOIN_INNER_TD_4435_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5860_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4435_key_leftMajor keyA{_cs_promo_sk1120_k};
            int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 0);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 1);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 2);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 3);
            int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5860_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_4435_payload_leftMajor payloadA{_cs_promo_sk1120, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5309_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_5309_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4435_key_leftMajor{_p_promo_sk294_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_promo_sk1120 = (it->second)._cs_promo_sk1120;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _p_promo_sk294 = tbl_Filter_TD_5309_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4435_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_4435_output.setInt32(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_4435_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_4435_output.setInt32(r, 3, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_4435_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4435_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4435_key_rightMajor, SW_JOIN_INNER_TD_4435_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5309_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_5309_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4435_key_rightMajor keyA{_p_promo_sk294_k};
            int32_t _p_promo_sk294 = tbl_Filter_TD_5309_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4435_payload_rightMajor payloadA{_p_promo_sk294};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5860_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_promo_sk1120_k = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4435_key_rightMajor{_cs_promo_sk1120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk294 = (it->second)._p_promo_sk294;
                int32_t _cs_promo_sk1120 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 0);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 1);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 2);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 3);
                int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_5860_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_5860_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_4435_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_4435_output.setInt32(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_4435_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_4435_output.setInt32(r, 3, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_4435_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4435_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4435_output #Row: " << tbl_JOIN_INNER_TD_4435_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3797_key;
struct SW_Aggregate_TD_3797_payload {
    int64_t _agg116199_avg_0;
    int32_t _agg216200_avg_1;
    int32_t _agg316201_avg_2;
    int32_t _agg416202_avg_3;
};
void SW_Aggregate_TD_3797(Table &tbl_JOIN_INNER_TD_4435_output, Table &tbl_Aggregate_TD_3797_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, avg(cs_quantity#1122) AS agg1#16199, cast((avg(UnscaledValue(cs_list_price#1124)) / 100.0) as decimal(11,6)) AS agg2#16200, cast((avg(UnscaledValue(cs_coupon_amt#1131)) / 100.0) as decimal(11,6)) AS agg3#16201, cast((avg(UnscaledValue(cs_sales_price#1125)) / 100.0) as decimal(11,6)) AS agg4#16202)
    // Input: ListBuffer(cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, i_item_id#229)
    // Output: ListBuffer(i_item_id#229, agg1#16199, agg2#16200, agg3#16201, agg4#16202)
    std::unordered_map<SW_Aggregate_TD_3797_key, SW_Aggregate_TD_3797_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4435_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_4435_output.getInt32(i, 0);
        int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_4435_output.getInt32(i, 1);
        int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_4435_output.getInt32(i, 2);
        int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_4435_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_4435_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_3797_key k = std::string(_i_item_id229.data());
        int64_t _agg116199_avg_0 = _cs_quantity1122;
        int64_t _agg216200_avg_1 = _cs_list_price1124;
        int64_t _agg316201_avg_2 = _cs_coupon_amt1131;
        int64_t _agg416202_avg_3 = _cs_sales_price1125;
        SW_Aggregate_TD_3797_payload p{_agg116199_avg_0, _agg216200_avg_1, _agg316201_avg_2, _agg416202_avg_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            // Unsupported payload Type
            p._agg116199_avg_0 = avg_0;
            int64_t avg_1 = ((it->second)._agg216200_avg_1 + _agg216200_avg_1);
            p._agg216200_avg_1 = avg_1;
            int64_t avg_2 = ((it->second)._agg316201_avg_2 + _agg316201_avg_2);
            p._agg316201_avg_2 = avg_2;
            int64_t avg_3 = ((it->second)._agg416202_avg_3 + _agg416202_avg_3);
            p._agg416202_avg_3 = avg_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_3797_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        int64_t _agg116199 = (it.second)._agg116199_avg_0 / nrow1;
        // Unsupported payload type: DoubleType
        int32_t _agg216200 = ((it.second)._agg216200_avg_1 / nrow1 / 100.0);
        tbl_Aggregate_TD_3797_output.setInt32(r, 2, _agg216200);
        int32_t _agg316201 = ((it.second)._agg316201_avg_2 / nrow1 / 100.0);
        tbl_Aggregate_TD_3797_output.setInt32(r, 3, _agg316201);
        int32_t _agg416202 = ((it.second)._agg416202_avg_3 / nrow1 / 100.0);
        tbl_Aggregate_TD_3797_output.setInt32(r, 4, _agg416202);
        ++r;
    }
    tbl_Aggregate_TD_3797_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3797_output #Row: " << tbl_Aggregate_TD_3797_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2748(Table &tbl_Aggregate_TD_3797_output, Table &tbl_Sort_TD_2748_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#229 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, agg1#16199, agg2#16200, agg3#16201, agg4#16202)
    // Output: ListBuffer(i_item_id#229, agg1#16199, agg2#16200, agg3#16201, agg4#16202)
    struct SW_Sort_TD_2748Row {
        std::string _i_item_id229;
        int32_t _agg116199;
        int32_t _agg216200;
        int32_t _agg316201;
        int32_t _agg416202;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2748Row& a, const SW_Sort_TD_2748Row& b) const { return 
 (a._i_item_id229 < b._i_item_id229); 
}
    }SW_Sort_TD_2748_order; 

    int nrow1 = tbl_Aggregate_TD_3797_output.getNumRow();
    std::vector<SW_Sort_TD_2748Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3797_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _agg116199 = tbl_Aggregate_TD_3797_output.getInt32(i, 1);
        int32_t _agg216200 = tbl_Aggregate_TD_3797_output.getInt32(i, 2);
        int32_t _agg316201 = tbl_Aggregate_TD_3797_output.getInt32(i, 3);
        int32_t _agg416202 = tbl_Aggregate_TD_3797_output.getInt32(i, 4);
        SW_Sort_TD_2748Row t = {std::string(_i_item_id229.data()),_agg116199,_agg216200,_agg316201,_agg416202};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2748_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2748_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        tbl_Sort_TD_2748_output.setInt32(r, 1, it._agg116199);
        tbl_Sort_TD_2748_output.setInt32(r, 2, it._agg216200);
        tbl_Sort_TD_2748_output.setInt32(r, 3, it._agg316201);
        tbl_Sort_TD_2748_output.setInt32(r, 4, it._agg416202);
        ++r;
    }
    tbl_Sort_TD_2748_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2748_output #Row: " << tbl_Sort_TD_2748_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1686(Table &tbl_Sort_TD_2748_output, Table &tbl_LocalLimit_TD_1686_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, agg1#16199, agg2#16200, agg3#16201, agg4#16202)
    // Output: ListBuffer(i_item_id#229, agg1#16199, agg2#16200, agg3#16201, agg4#16202)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2748_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1686_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        // Unsupported Union key type
        tbl_LocalLimit_TD_1686_output.setInt32(r, 2, tbl_Sort_TD_2748_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1686_output.setInt32(r, 3, tbl_Sort_TD_2748_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1686_output.setInt32(r, 4, tbl_Sort_TD_2748_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1686_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1686_output #Row: " << tbl_LocalLimit_TD_1686_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0793(Table &tbl_LocalLimit_TD_1686_output, Table &tbl_GlobalLimit_TD_0793_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, agg1#16199, agg2#16200, agg3#16201, agg4#16202)
    // Output: ListBuffer(i_item_id#229, agg1#16199, agg2#16200, agg3#16201, agg4#16202)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1686_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0793_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        // Unsupported Union key type
        tbl_GlobalLimit_TD_0793_output.setInt32(r, 2, tbl_LocalLimit_TD_1686_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0793_output.setInt32(r, 3, tbl_LocalLimit_TD_1686_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0793_output.setInt32(r, 4, tbl_LocalLimit_TD_1686_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0793_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0793_output #Row: " << tbl_GlobalLimit_TD_0793_output.getNumRow() << std::endl;
}

