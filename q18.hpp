#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11937(Table &tbl_SerializeFromObject_TD_12590_input, Table &tbl_Filter_TD_11937_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(cd_gender#94) AND isnotnull(cd_education_status#96)) AND ((cd_gender#94 = F) AND (cd_education_status#96 = Unknown))) AND isnotnull(cd_demo_sk#93)))
    // Input: ListBuffer(cd_demo_sk#93, cd_dep_count#99, cd_gender#94, cd_education_status#96)
    // Output: ListBuffer(cd_demo_sk#93, cd_dep_count#99)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12590_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_SerializeFromObject_TD_12590_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_SerializeFromObject_TD_12590_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_12590_input.getInt32(i, 0);
        if (((（std::string(_isnotnullcd_gender94.data()) != "NULL") && （std::string(_isnotnullcd_education_status96.data()) != "NULL")) && ((std::string(_cd_gender94.data()) == "F") && (std::string(_cd_education_status96.data()) == "Unknown"))) && (_cd_demo_sk93!= 0)) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_12590_input.getInt32(i, 0);
            tbl_Filter_TD_11937_output.setInt32(r, 0, _cd_demo_sk93_t);
            int32_t _cd_dep_count99_t = tbl_SerializeFromObject_TD_12590_input.getInt32(i, 1);
            tbl_Filter_TD_11937_output.setInt32(r, 1, _cd_dep_count99_t);
            r++;
        }
    }
    tbl_Filter_TD_11937_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11937_output #Row: " << tbl_Filter_TD_11937_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11259(Table &tbl_SerializeFromObject_TD_12243_input, Table &tbl_Filter_TD_11259_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_bill_cdemo_sk#1108) AND isnotnull(cs_bill_customer_sk#1107)) AND (isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_item_sk#1119))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_bill_cdemo_sk#1108, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_bill_cdemo_sk#1108, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12243_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_cdemo_sk1108 = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 2);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 3);
        if (((_cs_bill_cdemo_sk1108!= 0) && (_cs_bill_customer_sk1107!= 0)) && ((_cs_sold_date_sk1104!= 0) && (_cs_item_sk1119!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 0);
            tbl_Filter_TD_11259_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 1);
            tbl_Filter_TD_11259_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_bill_cdemo_sk1108_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 2);
            tbl_Filter_TD_11259_output.setInt32(r, 2, _cs_bill_cdemo_sk1108_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 3);
            tbl_Filter_TD_11259_output.setInt32(r, 3, _cs_item_sk1119_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 4);
            tbl_Filter_TD_11259_output.setInt32(r, 4, _cs_quantity1122_t);
            int32_t _cs_list_price1124_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 5);
            tbl_Filter_TD_11259_output.setInt32(r, 5, _cs_list_price1124_t);
            int32_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 6);
            tbl_Filter_TD_11259_output.setInt32(r, 6, _cs_sales_price1125_t);
            int32_t _cs_coupon_amt1131_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 7);
            tbl_Filter_TD_11259_output.setInt32(r, 7, _cs_coupon_amt1131_t);
            int32_t _cs_net_profit1137_t = tbl_SerializeFromObject_TD_12243_input.getInt32(i, 8);
            tbl_Filter_TD_11259_output.setInt32(r, 8, _cs_net_profit1137_t);
            r++;
        }
    }
    tbl_Filter_TD_11259_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11259_output #Row: " << tbl_Filter_TD_11259_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10745(Table &tbl_SerializeFromObject_TD_11327_input, Table &tbl_Filter_TD_10745_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((c_birth_month#12 IN (1,6,8,9,12,2) AND isnotnull(c_customer_sk#0)) AND (isnotnull(c_current_cdemo_sk#2) AND isnotnull(c_current_addr_sk#4))))
    // Input: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, c_birth_year#13, c_birth_month#12)
    // Output: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, c_birth_year#13)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11327_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_birth_month12 = tbl_SerializeFromObject_TD_11327_input.getInt32(i, 4);
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_11327_input.getInt32(i, 0);
        int32_t _c_current_cdemo_sk2 = tbl_SerializeFromObject_TD_11327_input.getInt32(i, 1);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_11327_input.getInt32(i, 2);
        auto reuse_col_str_982 = _c_birth_month12;
        if ((((reuse_col_str_982 == 1) || (reuse_col_str_982 == 6) || (reuse_col_str_982 == 8) || (reuse_col_str_982 == 9) || (reuse_col_str_982 == 12) || (reuse_col_str_982 == 2) || (0)) && (_c_customer_sk0!= 0)) && ((_c_current_cdemo_sk2!= 0) && (_c_current_addr_sk4!= 0))) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_11327_input.getInt32(i, 0);
            tbl_Filter_TD_10745_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_cdemo_sk2_t = tbl_SerializeFromObject_TD_11327_input.getInt32(i, 1);
            tbl_Filter_TD_10745_output.setInt32(r, 1, _c_current_cdemo_sk2_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_11327_input.getInt32(i, 2);
            tbl_Filter_TD_10745_output.setInt32(r, 2, _c_current_addr_sk4_t);
            int32_t _c_birth_year13_t = tbl_SerializeFromObject_TD_11327_input.getInt32(i, 3);
            tbl_Filter_TD_10745_output.setInt32(r, 3, _c_birth_year13_t);
            r++;
        }
    }
    tbl_Filter_TD_10745_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10745_output #Row: " << tbl_Filter_TD_10745_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1065_key_leftMajor {
    int32_t _cs_bill_cdemo_sk1108;
    bool operator==(const SW_JOIN_INNER_TD_1065_key_leftMajor& other) const {
        return ((_cs_bill_cdemo_sk1108 == other._cs_bill_cdemo_sk1108));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1065_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1065_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_cdemo_sk1108));
    }
};
}
struct SW_JOIN_INNER_TD_1065_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_bill_cdemo_sk1108;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
    int32_t _cs_net_profit1137;
};
struct SW_JOIN_INNER_TD_1065_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_1065_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1065_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1065_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_1065_payload_rightMajor {
    int32_t _cd_demo_sk93;
    int32_t _cd_dep_count99;
};
void SW_JOIN_INNER_TD_1065(Table &tbl_Filter_TD_11259_output, Table &tbl_Filter_TD_11937_output, Table &tbl_JOIN_INNER_TD_1065_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_cdemo_sk#1108 = cd_demo_sk#93))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_bill_cdemo_sk#1108, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137)
    // Right Table: ListBuffer(cd_demo_sk#93, cd_dep_count#99)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99)
    int left_nrow = tbl_Filter_TD_11259_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11937_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1065_key_leftMajor, SW_JOIN_INNER_TD_1065_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11259_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_cdemo_sk1108_k = tbl_Filter_TD_11259_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_1065_key_leftMajor keyA{_cs_bill_cdemo_sk1108_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_11259_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_11259_output.getInt32(i, 1);
            int32_t _cs_bill_cdemo_sk1108 = tbl_Filter_TD_11259_output.getInt32(i, 2);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_11259_output.getInt32(i, 3);
            int32_t _cs_quantity1122 = tbl_Filter_TD_11259_output.getInt32(i, 4);
            int32_t _cs_list_price1124 = tbl_Filter_TD_11259_output.getInt32(i, 5);
            int32_t _cs_sales_price1125 = tbl_Filter_TD_11259_output.getInt32(i, 6);
            int32_t _cs_coupon_amt1131 = tbl_Filter_TD_11259_output.getInt32(i, 7);
            int32_t _cs_net_profit1137 = tbl_Filter_TD_11259_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_1065_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_bill_cdemo_sk1108, _cs_item_sk1119, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131, _cs_net_profit1137};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11937_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_11937_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1065_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_bill_cdemo_sk1108 = (it->second)._cs_bill_cdemo_sk1108;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_11937_output.getInt32(i, 0);
                int32_t _cd_dep_count99 = tbl_Filter_TD_11937_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 1, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 4, _cs_list_price1124);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 5, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 6, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 7, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 8, _cd_dep_count99);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1065_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1065_key_rightMajor, SW_JOIN_INNER_TD_1065_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11937_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_11937_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1065_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_11937_output.getInt32(i, 0);
            int32_t _cd_dep_count99 = tbl_Filter_TD_11937_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1065_payload_rightMajor payloadA{_cd_demo_sk93, _cd_dep_count99};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11259_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_cdemo_sk1108_k = tbl_Filter_TD_11259_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1065_key_rightMajor{_cs_bill_cdemo_sk1108_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_11259_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_11259_output.getInt32(i, 1);
                int32_t _cs_bill_cdemo_sk1108 = tbl_Filter_TD_11259_output.getInt32(i, 2);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_11259_output.getInt32(i, 3);
                int32_t _cs_quantity1122 = tbl_Filter_TD_11259_output.getInt32(i, 4);
                int32_t _cs_list_price1124 = tbl_Filter_TD_11259_output.getInt32(i, 5);
                int32_t _cs_sales_price1125 = tbl_Filter_TD_11259_output.getInt32(i, 6);
                int32_t _cs_coupon_amt1131 = tbl_Filter_TD_11259_output.getInt32(i, 7);
                int32_t _cs_net_profit1137 = tbl_Filter_TD_11259_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 8, _cd_dep_count99);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 1, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 2, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 4, _cs_list_price1124);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 5, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 6, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_1065_output.setInt32(r, 7, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1065_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1065_output #Row: " << tbl_JOIN_INNER_TD_1065_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9928(Table &tbl_SerializeFromObject_TD_10719_input, Table &tbl_Filter_TD_9928_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cd_demo_sk#14749))
    // Input: ListBuffer(cd_demo_sk#14749)
    // Output: ListBuffer(cd_demo_sk#14749)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10719_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk14749 = tbl_SerializeFromObject_TD_10719_input.getInt32(i, 0);
        if (_cd_demo_sk14749!= 0) {
            int32_t _cd_demo_sk14749_t = tbl_SerializeFromObject_TD_10719_input.getInt32(i, 0);
            tbl_Filter_TD_9928_output.setInt32(r, 0, _cd_demo_sk14749_t);
            r++;
        }
    }
    tbl_Filter_TD_9928_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9928_output #Row: " << tbl_Filter_TD_9928_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9978_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_INNER_TD_9978_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9978_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9978_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_INNER_TD_9978_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
    int32_t _cs_net_profit1137;
    int32_t _cd_dep_count99;
};
struct SW_JOIN_INNER_TD_9978_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_9978_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9978_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9978_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_9978_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
    int32_t _c_birth_year13;
};
void SW_JOIN_INNER_TD_9978(Table &tbl_JOIN_INNER_TD_1065_output, Table &tbl_Filter_TD_10745_output, Table &tbl_JOIN_INNER_TD_9978_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#0))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, c_birth_year#13)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_current_cdemo_sk#2, c_current_addr_sk#4, c_birth_year#13)
    int left_nrow = tbl_JOIN_INNER_TD_1065_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10745_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9978_key_leftMajor, SW_JOIN_INNER_TD_9978_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1065_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9978_key_leftMajor keyA{_cs_bill_customer_sk1107_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 2);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 3);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 4);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 5);
            int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 6);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 7);
            int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_9978_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_item_sk1119, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131, _cs_net_profit1137, _cd_dep_count99};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10745_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10745_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9978_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _c_customer_sk0 = tbl_Filter_TD_10745_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_10745_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_10745_output.getInt32(i, 2);
                int32_t _c_birth_year13 = tbl_Filter_TD_10745_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 3, _cs_list_price1124);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 5, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 6, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 7, _cd_dep_count99);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 8, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 9, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 10, _c_birth_year13);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9978_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9978_key_rightMajor, SW_JOIN_INNER_TD_9978_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10745_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10745_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9978_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_10745_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_10745_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_10745_output.getInt32(i, 2);
            int32_t _c_birth_year13 = tbl_Filter_TD_10745_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9978_payload_rightMajor payloadA{_c_customer_sk0, _c_current_cdemo_sk2, _c_current_addr_sk4, _c_birth_year13};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1065_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9978_key_rightMajor{_cs_bill_customer_sk1107_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _c_birth_year13 = (it->second)._c_birth_year13;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 2);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 3);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 4);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 5);
                int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 6);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 7);
                int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_1065_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 8, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 9, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 10, _c_birth_year13);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 3, _cs_list_price1124);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 5, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 6, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_9978_output.setInt32(r, 7, _cd_dep_count99);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9978_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9978_output #Row: " << tbl_JOIN_INNER_TD_9978_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8579(Table &tbl_SerializeFromObject_TD_9695_input, Table &tbl_Filter_TD_8579_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((ca_state#62 IN (MS,IN,ND,OK,NM,VA) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62, ca_country#64)
    // Output: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62, ca_country#64)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9695_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_9695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_9695_input.getInt32(i, 0);
        auto reuse_col_str_455 = std::string(_ca_state62.data());
        if (((reuse_col_str_455 == "MS") || (reuse_col_str_455 == "IN") || (reuse_col_str_455 == "ND") || (reuse_col_str_455 == "OK") || (reuse_col_str_455 == "NM") || (reuse_col_str_455 == "VA") || (0)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_9695_input.getInt32(i, 0);
            tbl_Filter_TD_8579_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_t = tbl_SerializeFromObject_TD_9695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8579_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county61_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_9695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8579_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_country64_t = tbl_SerializeFromObject_TD_9695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_8579_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_country64_t);
            r++;
        }
    }
    tbl_Filter_TD_8579_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8579_output #Row: " << tbl_Filter_TD_8579_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8896_key_leftMajor {
    int32_t _c_current_cdemo_sk2;
    bool operator==(const SW_JOIN_INNER_TD_8896_key_leftMajor& other) const {
        return ((_c_current_cdemo_sk2 == other._c_current_cdemo_sk2));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8896_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8896_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_cdemo_sk2));
    }
};
}
struct SW_JOIN_INNER_TD_8896_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
    int32_t _cs_net_profit1137;
    int32_t _cd_dep_count99;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
    int32_t _c_birth_year13;
};
struct SW_JOIN_INNER_TD_8896_key_rightMajor {
    int32_t _cd_demo_sk14749;
    bool operator==(const SW_JOIN_INNER_TD_8896_key_rightMajor& other) const {
        return ((_cd_demo_sk14749 == other._cd_demo_sk14749));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8896_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8896_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk14749));
    }
};
}
struct SW_JOIN_INNER_TD_8896_payload_rightMajor {
    int32_t _cd_demo_sk14749;
};
void SW_JOIN_INNER_TD_8896(Table &tbl_JOIN_INNER_TD_9978_output, Table &tbl_Filter_TD_9928_output, Table &tbl_JOIN_INNER_TD_8896_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_cdemo_sk#2 = cd_demo_sk#14749))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_current_cdemo_sk#2, c_current_addr_sk#4, c_birth_year#13)
    // Right Table: ListBuffer(cd_demo_sk#14749)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_current_addr_sk#4, c_birth_year#13)
    int left_nrow = tbl_JOIN_INNER_TD_9978_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9928_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8896_key_leftMajor, SW_JOIN_INNER_TD_8896_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9978_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_8896_key_leftMajor keyA{_c_current_cdemo_sk2_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 2);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 3);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 4);
            int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 5);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 6);
            int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 7);
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 8);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 9);
            int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 10);
            SW_JOIN_INNER_TD_8896_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131, _cs_net_profit1137, _cd_dep_count99, _c_current_cdemo_sk2, _c_current_addr_sk4, _c_birth_year13};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9928_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk14749_k = tbl_Filter_TD_9928_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8896_key_leftMajor{_cd_demo_sk14749_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _c_birth_year13 = (it->second)._c_birth_year13;
                int32_t _cd_demo_sk14749 = tbl_Filter_TD_9928_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 3, _cs_list_price1124);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 5, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 6, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 7, _cd_dep_count99);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 8, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 9, _c_birth_year13);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8896_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8896_key_rightMajor, SW_JOIN_INNER_TD_8896_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9928_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk14749_k = tbl_Filter_TD_9928_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8896_key_rightMajor keyA{_cd_demo_sk14749_k};
            int32_t _cd_demo_sk14749 = tbl_Filter_TD_9928_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8896_payload_rightMajor payloadA{_cd_demo_sk14749};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9978_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8896_key_rightMajor{_c_current_cdemo_sk2_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk14749 = (it->second)._cd_demo_sk14749;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 2);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 3);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 4);
                int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 5);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 6);
                int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 7);
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 8);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 9);
                int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_9978_output.getInt32(i, 10);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 3, _cs_list_price1124);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 5, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 6, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 7, _cd_dep_count99);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 8, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_8896_output.setInt32(r, 9, _c_birth_year13);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8896_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8896_output #Row: " << tbl_JOIN_INNER_TD_8896_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7184(Table &tbl_SerializeFromObject_TD_8170_input, Table &tbl_Filter_TD_7184_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 1998)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8170_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_8170_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8170_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 1998)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8170_input.getInt32(i, 0);
            tbl_Filter_TD_7184_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7184_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7184_output #Row: " << tbl_Filter_TD_7184_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_721_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_721_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_721_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_721_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_721_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
    int32_t _cs_net_profit1137;
    int32_t _cd_dep_count99;
    int32_t _c_current_addr_sk4;
    int32_t _c_birth_year13;
};
struct SW_JOIN_INNER_TD_721_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_721_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_721_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_721_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_721_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_county61;
    std::string _ca_state62;
    std::string _ca_country64;
};
void SW_JOIN_INNER_TD_721(Table &tbl_JOIN_INNER_TD_8896_output, Table &tbl_Filter_TD_8579_output, Table &tbl_JOIN_INNER_TD_721_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_current_addr_sk#4, c_birth_year#13)
    // Right Table: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62, ca_country#64)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_birth_year#13, ca_county#61, ca_state#62, ca_country#64)
    int left_nrow = tbl_JOIN_INNER_TD_8896_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8579_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_721_key_leftMajor, SW_JOIN_INNER_TD_721_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8896_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_721_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 2);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 3);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 4);
            int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 5);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 6);
            int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 7);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 8);
            int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_721_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131, _cs_net_profit1137, _cd_dep_count99, _c_current_addr_sk4, _c_birth_year13};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8579_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8579_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_721_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _c_birth_year13 = (it->second)._c_birth_year13;
                int32_t _ca_address_sk54 = tbl_Filter_TD_8579_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_8579_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_8579_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_Filter_TD_8579_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_country64 = std::string(_ca_country64_n.data());
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 3, _cs_list_price1124);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 5, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 6, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 7, _cd_dep_count99);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 8, _c_birth_year13);
                tbl_JOIN_INNER_TD_721_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county61_n);
                tbl_JOIN_INNER_TD_721_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state62_n);
                tbl_JOIN_INNER_TD_721_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_country64_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_721_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_721_key_rightMajor, SW_JOIN_INNER_TD_721_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8579_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8579_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_721_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_8579_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_8579_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_8579_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_Filter_TD_8579_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_country64 = std::string(_ca_country64_n.data());
            SW_JOIN_INNER_TD_721_payload_rightMajor payloadA{_ca_address_sk54, _ca_county61, _ca_state62, _ca_country64};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8896_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_721_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                std::string _ca_country64 = (it->second)._ca_country64;
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n{};
                memcpy(_ca_country64_n.data(), (_ca_country64).data(), (_ca_country64).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 2);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 3);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 4);
                int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 5);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 6);
                int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 7);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 8);
                int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_8896_output.getInt32(i, 9);
                tbl_JOIN_INNER_TD_721_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_county61_n);
                tbl_JOIN_INNER_TD_721_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_state62_n);
                tbl_JOIN_INNER_TD_721_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_country64_n);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 3, _cs_list_price1124);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 5, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 6, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 7, _cd_dep_count99);
                tbl_JOIN_INNER_TD_721_output.setInt32(r, 8, _c_birth_year13);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_721_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_721_output #Row: " << tbl_JOIN_INNER_TD_721_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6566(Table &tbl_SerializeFromObject_TD_7208_input, Table &tbl_Filter_TD_6566_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7208_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7208_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7208_input.getInt32(i, 0);
            tbl_Filter_TD_6566_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_7208_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6566_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_6566_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6566_output #Row: " << tbl_Filter_TD_6566_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6142_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_6142_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6142_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6142_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_6142_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
    int32_t _cs_net_profit1137;
    int32_t _cd_dep_count99;
    int32_t _c_birth_year13;
    std::string _ca_county61;
    std::string _ca_state62;
    std::string _ca_country64;
};
struct SW_JOIN_INNER_TD_6142_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6142_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6142_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6142_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6142_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_6142(Table &tbl_JOIN_INNER_TD_721_output, Table &tbl_Filter_TD_7184_output, Table &tbl_JOIN_INNER_TD_6142_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#120))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_birth_year#13, ca_county#61, ca_state#62, ca_country#64)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_birth_year#13, ca_county#61, ca_state#62, ca_country#64)
    int left_nrow = tbl_JOIN_INNER_TD_721_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7184_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6142_key_leftMajor, SW_JOIN_INNER_TD_6142_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_721_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_721_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6142_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 2);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 3);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 4);
            int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 5);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 6);
            int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 7);
            int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_721_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_721_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_JOIN_INNER_TD_721_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_country64 = std::string(_ca_country64_n.data());
            SW_JOIN_INNER_TD_6142_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131, _cs_net_profit1137, _cd_dep_count99, _c_birth_year13, _ca_county61, _ca_state62, _ca_country64};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7184_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7184_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6142_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _c_birth_year13 = (it->second)._c_birth_year13;
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                std::string _ca_country64 = (it->second)._ca_country64;
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n{};
                memcpy(_ca_country64_n.data(), (_ca_country64).data(), (_ca_country64).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_7184_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 2, _cs_list_price1124);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 4, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 5, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 6, _cd_dep_count99);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 7, _c_birth_year13);
                tbl_JOIN_INNER_TD_6142_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_county61_n);
                tbl_JOIN_INNER_TD_6142_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_state62_n);
                tbl_JOIN_INNER_TD_6142_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_country64_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6142_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6142_key_rightMajor, SW_JOIN_INNER_TD_6142_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7184_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7184_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6142_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7184_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6142_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_721_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_721_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6142_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 2);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 3);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 4);
                int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 5);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 6);
                int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 7);
                int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_721_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_721_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_721_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_JOIN_INNER_TD_721_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_country64 = std::string(_ca_country64_n.data());
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 2, _cs_list_price1124);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 4, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 5, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 6, _cd_dep_count99);
                tbl_JOIN_INNER_TD_6142_output.setInt32(r, 7, _c_birth_year13);
                tbl_JOIN_INNER_TD_6142_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_county61_n);
                tbl_JOIN_INNER_TD_6142_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_state62_n);
                tbl_JOIN_INNER_TD_6142_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_country64_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6142_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6142_output #Row: " << tbl_JOIN_INNER_TD_6142_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5770_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_5770_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5770_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5770_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_5770_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    int32_t _cs_sales_price1125;
    int32_t _cs_coupon_amt1131;
    int32_t _cs_net_profit1137;
    int32_t _cd_dep_count99;
    int32_t _c_birth_year13;
    std::string _ca_county61;
    std::string _ca_state62;
    std::string _ca_country64;
};
struct SW_JOIN_INNER_TD_5770_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5770_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5770_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5770_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5770_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_5770(Table &tbl_JOIN_INNER_TD_6142_output, Table &tbl_Filter_TD_6566_output, Table &tbl_JOIN_INNER_TD_5770_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#228))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_birth_year#13, ca_county#61, ca_state#62, ca_country#64)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_birth_year#13, i_item_id#229, ca_country#64, ca_state#62, ca_county#61)
    int left_nrow = tbl_JOIN_INNER_TD_6142_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6566_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5770_key_leftMajor, SW_JOIN_INNER_TD_5770_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6142_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5770_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 0);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 1);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 2);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 3);
            int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 4);
            int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 5);
            int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 6);
            int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_6142_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_6142_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_JOIN_INNER_TD_6142_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _ca_country64 = std::string(_ca_country64_n.data());
            SW_JOIN_INNER_TD_5770_payload_leftMajor payloadA{_cs_item_sk1119, _cs_quantity1122, _cs_list_price1124, _cs_sales_price1125, _cs_coupon_amt1131, _cs_net_profit1137, _cd_dep_count99, _c_birth_year13, _ca_county61, _ca_state62, _ca_country64};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6566_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6566_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5770_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_coupon_amt1131 = (it->second)._cs_coupon_amt1131;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _c_birth_year13 = (it->second)._c_birth_year13;
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                std::string _ca_country64 = (it->second)._ca_country64;
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n{};
                memcpy(_ca_country64_n.data(), (_ca_country64).data(), (_ca_country64).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_6566_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6566_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 3, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 4, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 5, _cd_dep_count99);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 6, _c_birth_year13);
                tbl_JOIN_INNER_TD_5770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_county61_n);
                tbl_JOIN_INNER_TD_5770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_state62_n);
                tbl_JOIN_INNER_TD_5770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_country64_n);
                tbl_JOIN_INNER_TD_5770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5770_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5770_key_rightMajor, SW_JOIN_INNER_TD_5770_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6566_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6566_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5770_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6566_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6566_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_5770_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6142_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5770_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 0);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 1);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 2);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 3);
                int32_t _cs_coupon_amt1131 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 4);
                int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 5);
                int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 6);
                int32_t _c_birth_year13 = tbl_JOIN_INNER_TD_6142_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_6142_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_6142_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_country64_n = tbl_JOIN_INNER_TD_6142_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _ca_country64 = std::string(_ca_country64_n.data());
                tbl_JOIN_INNER_TD_5770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 3, _cs_coupon_amt1131);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 4, _cs_net_profit1137);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 5, _cd_dep_count99);
                tbl_JOIN_INNER_TD_5770_output.setInt32(r, 6, _c_birth_year13);
                tbl_JOIN_INNER_TD_5770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_county61_n);
                tbl_JOIN_INNER_TD_5770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_state62_n);
                tbl_JOIN_INNER_TD_5770_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_country64_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5770_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5770_output #Row: " << tbl_JOIN_INNER_TD_5770_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4243(Table &tbl_JOIN_INNER_TD_5770_output, Table &tbl_Expand_TD_4243_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_birth_year#13, i_item_id#229, ca_country#64, ca_state#62, ca_county#61)
    // Output: ListBuffer(cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_birth_year#13, i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, spark_grouping_id#14769L)
    std::cout << "tbl_Expand_TD_4243_output #Row: " << tbl_Expand_TD_4243_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_386_key {
    std::string _i_item_id14770;
    std::string _ca_country14771;
    std::string _ca_state14772;
    std::string _ca_county14773;
    int64_t _spark_grouping_id14769L;
    bool operator==(const SW_Aggregate_TD_386_key& other) const { return (_i_item_id14770 == other._i_item_id14770) && (_ca_country14771 == other._ca_country14771) && (_ca_state14772 == other._ca_state14772) && (_ca_county14773 == other._ca_county14773) && (_spark_grouping_id14769L == other._spark_grouping_id14769L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_386_key> {
    std::size_t operator() (const SW_Aggregate_TD_386_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id14770)) + (hash<string>()(k._ca_country14771)) + (hash<string>()(k._ca_state14772)) + (hash<string>()(k._ca_county14773)) + (hash<int64_t>()(k._spark_grouping_id14769L));
    }
};
}
struct SW_Aggregate_TD_386_payload {
    int32_t _agg114742_avg_0;
    int32_t _agg214743_avg_1;
    int32_t _agg314744_avg_2;
    int32_t _agg414745_avg_3;
    int32_t _agg514746_avg_4;
    int32_t _agg614747_avg_5;
    int32_t _agg714748_avg_6;
};
void SW_Aggregate_TD_386(Table &tbl_Expand_TD_4243_output, Table &tbl_Aggregate_TD_386_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, spark_grouping_id#14769L, avg(cast(cs_quantity#1122 as decimal(12,2))) AS agg1#14742, avg(cast(cs_list_price#1124 as decimal(12,2))) AS agg2#14743, avg(cast(cs_coupon_amt#1131 as decimal(12,2))) AS agg3#14744, avg(cast(cs_sales_price#1125 as decimal(12,2))) AS agg4#14745, avg(cast(cs_net_profit#1137 as decimal(12,2))) AS agg5#14746, avg(cast(c_birth_year#13 as decimal(12,2))) AS agg6#14747, avg(cast(cd_dep_count#99 as decimal(12,2))) AS agg7#14748)
    // Input: ListBuffer(cs_quantity#1122, cs_list_price#1124, cs_sales_price#1125, cs_coupon_amt#1131, cs_net_profit#1137, cd_dep_count#99, c_birth_year#13, i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, spark_grouping_id#14769L)
    // Output: ListBuffer(i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, agg1#14742, agg2#14743, agg3#14744, agg4#14745, agg5#14746, agg6#14747, agg7#14748)
    std::unordered_map<SW_Aggregate_TD_386_key, SW_Aggregate_TD_386_payload> ht1;
    int nrow1 = tbl_Expand_TD_4243_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity1122 = tbl_Expand_TD_4243_output.getInt32(i, 0);
        int32_t _cs_list_price1124 = tbl_Expand_TD_4243_output.getInt32(i, 1);
        int32_t _cs_sales_price1125 = tbl_Expand_TD_4243_output.getInt32(i, 2);
        int32_t _cs_coupon_amt1131 = tbl_Expand_TD_4243_output.getInt32(i, 3);
        int32_t _cs_net_profit1137 = tbl_Expand_TD_4243_output.getInt32(i, 4);
        int32_t _cd_dep_count99 = tbl_Expand_TD_4243_output.getInt32(i, 5);
        int32_t _c_birth_year13 = tbl_Expand_TD_4243_output.getInt32(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id14770 = tbl_Expand_TD_4243_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country14771 = tbl_Expand_TD_4243_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state14772 = tbl_Expand_TD_4243_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county14773 = tbl_Expand_TD_4243_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        int64_t _spark_grouping_id14769L = tbl_Expand_TD_4243_output.getInt64(i, 11);
        SW_Aggregate_TD_386_key k{std::string(_i_item_id14770.data()), std::string(_ca_country14771.data()), std::string(_ca_state14772.data()), std::string(_ca_county14773.data()), _spark_grouping_id14769L};
        int64_t _agg114742_avg_0 = _cs_quantity1122;
        int64_t _agg214743_avg_1 = _cs_list_price1124;
        int64_t _agg314744_avg_2 = _cs_coupon_amt1131;
        int64_t _agg414745_avg_3 = _cs_sales_price1125;
        int64_t _agg514746_avg_4 = _cs_net_profit1137;
        int64_t _agg614747_avg_5 = _c_birth_year13;
        int64_t _agg714748_avg_6 = _cd_dep_count99;
        SW_Aggregate_TD_386_payload p{_agg114742_avg_0, _agg214743_avg_1, _agg314744_avg_2, _agg414745_avg_3, _agg514746_avg_4, _agg614747_avg_5, _agg714748_avg_6};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._agg114742_avg_0 + _agg114742_avg_0);
            p._agg114742_avg_0 = avg_0;
            int64_t avg_1 = ((it->second)._agg214743_avg_1 + _agg214743_avg_1);
            p._agg214743_avg_1 = avg_1;
            int64_t avg_2 = ((it->second)._agg314744_avg_2 + _agg314744_avg_2);
            p._agg314744_avg_2 = avg_2;
            int64_t avg_3 = ((it->second)._agg414745_avg_3 + _agg414745_avg_3);
            p._agg414745_avg_3 = avg_3;
            int64_t avg_4 = ((it->second)._agg514746_avg_4 + _agg514746_avg_4);
            p._agg514746_avg_4 = avg_4;
            int64_t avg_5 = ((it->second)._agg614747_avg_5 + _agg614747_avg_5);
            p._agg614747_avg_5 = avg_5;
            int64_t avg_6 = ((it->second)._agg714748_avg_6 + _agg714748_avg_6);
            p._agg714748_avg_6 = avg_6;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id14770{};
        memcpy(_i_item_id14770.data(), ((it.first)._i_item_id14770).data(), ((it.first)._i_item_id14770).length());
        tbl_Aggregate_TD_386_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id14770);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country14771{};
        memcpy(_ca_country14771.data(), ((it.first)._ca_country14771).data(), ((it.first)._ca_country14771).length());
        tbl_Aggregate_TD_386_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_country14771);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state14772{};
        memcpy(_ca_state14772.data(), ((it.first)._ca_state14772).data(), ((it.first)._ca_state14772).length());
        tbl_Aggregate_TD_386_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state14772);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county14773{};
        memcpy(_ca_county14773.data(), ((it.first)._ca_county14773).data(), ((it.first)._ca_county14773).length());
        tbl_Aggregate_TD_386_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county14773);
        // _spark_grouping_id14769L not required in the output table
        int32_t _agg114742 = (it.second)._agg114742_avg_0 / nrow1;
        tbl_Aggregate_TD_386_output.setInt32(r, 4, _agg114742);
        int32_t _agg214743 = (it.second)._agg214743_avg_1 / nrow1;
        tbl_Aggregate_TD_386_output.setInt32(r, 5, _agg214743);
        int32_t _agg314744 = (it.second)._agg314744_avg_2 / nrow1;
        tbl_Aggregate_TD_386_output.setInt32(r, 6, _agg314744);
        int32_t _agg414745 = (it.second)._agg414745_avg_3 / nrow1;
        tbl_Aggregate_TD_386_output.setInt32(r, 7, _agg414745);
        int32_t _agg514746 = (it.second)._agg514746_avg_4 / nrow1;
        tbl_Aggregate_TD_386_output.setInt32(r, 8, _agg514746);
        int32_t _agg614747 = (it.second)._agg614747_avg_5 / nrow1;
        tbl_Aggregate_TD_386_output.setInt32(r, 9, _agg614747);
        int32_t _agg714748 = (it.second)._agg714748_avg_6 / nrow1;
        tbl_Aggregate_TD_386_output.setInt32(r, 10, _agg714748);
        ++r;
    }
    tbl_Aggregate_TD_386_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_386_output #Row: " << tbl_Aggregate_TD_386_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2746(Table &tbl_Aggregate_TD_386_output, Table &tbl_Sort_TD_2746_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ca_country#14771 ASC NULLS FIRST, ca_state#14772 ASC NULLS FIRST, ca_county#14773 ASC NULLS FIRST, i_item_id#14770 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, agg1#14742, agg2#14743, agg3#14744, agg4#14745, agg5#14746, agg6#14747, agg7#14748)
    // Output: ListBuffer(i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, agg1#14742, agg2#14743, agg3#14744, agg4#14745, agg5#14746, agg6#14747, agg7#14748)
    struct SW_Sort_TD_2746Row {
        std::string _i_item_id14770;
        std::string _ca_country14771;
        std::string _ca_state14772;
        std::string _ca_county14773;
        int32_t _agg114742;
        int32_t _agg214743;
        int32_t _agg314744;
        int32_t _agg414745;
        int32_t _agg514746;
        int32_t _agg614747;
        int32_t _agg714748;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2746Row& a, const SW_Sort_TD_2746Row& b) const { return 
 (a._ca_country14771 < b._ca_country14771) || 
 ((a._ca_country14771 == b._ca_country14771) && (a._ca_state14772 < b._ca_state14772)) || 
 ((a._ca_country14771 == b._ca_country14771) && (a._ca_state14772 == b._ca_state14772) && (a._ca_county14773 < b._ca_county14773)) || 
 ((a._ca_country14771 == b._ca_country14771) && (a._ca_state14772 == b._ca_state14772) && (a._ca_county14773 == b._ca_county14773) && (a._i_item_id14770 < b._i_item_id14770)); 
}
    }SW_Sort_TD_2746_order; 

    int nrow1 = tbl_Aggregate_TD_386_output.getNumRow();
    std::vector<SW_Sort_TD_2746Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id14770 = tbl_Aggregate_TD_386_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country14771 = tbl_Aggregate_TD_386_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state14772 = tbl_Aggregate_TD_386_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county14773 = tbl_Aggregate_TD_386_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _agg114742 = tbl_Aggregate_TD_386_output.getInt32(i, 4);
        int32_t _agg214743 = tbl_Aggregate_TD_386_output.getInt32(i, 5);
        int32_t _agg314744 = tbl_Aggregate_TD_386_output.getInt32(i, 6);
        int32_t _agg414745 = tbl_Aggregate_TD_386_output.getInt32(i, 7);
        int32_t _agg514746 = tbl_Aggregate_TD_386_output.getInt32(i, 8);
        int32_t _agg614747 = tbl_Aggregate_TD_386_output.getInt32(i, 9);
        int32_t _agg714748 = tbl_Aggregate_TD_386_output.getInt32(i, 10);
        SW_Sort_TD_2746Row t = {std::string(_i_item_id14770.data()),std::string(_ca_country14771.data()),std::string(_ca_state14772.data()),std::string(_ca_county14773.data()),_agg114742,_agg214743,_agg314744,_agg414745,_agg514746,_agg614747,_agg714748};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2746_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id14770{};
        memcpy(_i_item_id14770.data(), (it._i_item_id14770).data(), (it._i_item_id14770).length());
        tbl_Sort_TD_2746_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id14770);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country14771{};
        memcpy(_ca_country14771.data(), (it._ca_country14771).data(), (it._ca_country14771).length());
        tbl_Sort_TD_2746_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _ca_country14771);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state14772{};
        memcpy(_ca_state14772.data(), (it._ca_state14772).data(), (it._ca_state14772).length());
        tbl_Sort_TD_2746_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _ca_state14772);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county14773{};
        memcpy(_ca_county14773.data(), (it._ca_county14773).data(), (it._ca_county14773).length());
        tbl_Sort_TD_2746_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _ca_county14773);
        tbl_Sort_TD_2746_output.setInt32(r, 4, it._agg114742);
        tbl_Sort_TD_2746_output.setInt32(r, 5, it._agg214743);
        tbl_Sort_TD_2746_output.setInt32(r, 6, it._agg314744);
        tbl_Sort_TD_2746_output.setInt32(r, 7, it._agg414745);
        tbl_Sort_TD_2746_output.setInt32(r, 8, it._agg514746);
        tbl_Sort_TD_2746_output.setInt32(r, 9, it._agg614747);
        tbl_Sort_TD_2746_output.setInt32(r, 10, it._agg714748);
        ++r;
    }
    tbl_Sort_TD_2746_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2746_output #Row: " << tbl_Sort_TD_2746_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1816(Table &tbl_Sort_TD_2746_output, Table &tbl_LocalLimit_TD_1816_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, agg1#14742, agg2#14743, agg3#14744, agg4#14745, agg5#14746, agg6#14747, agg7#14748)
    // Output: ListBuffer(i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, agg1#14742, agg2#14743, agg3#14744, agg4#14745, agg5#14746, agg6#14747, agg7#14748)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id14770_n = tbl_Sort_TD_2746_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1816_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id14770_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country14771_n = tbl_Sort_TD_2746_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1816_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_country14771_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state14772_n = tbl_Sort_TD_2746_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1816_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state14772_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county14773_n = tbl_Sort_TD_2746_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1816_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county14773_n);
        tbl_LocalLimit_TD_1816_output.setInt32(r, 4, tbl_Sort_TD_2746_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1816_output.setInt32(r, 5, tbl_Sort_TD_2746_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1816_output.setInt32(r, 6, tbl_Sort_TD_2746_output.getInt32(i, 6));
        tbl_LocalLimit_TD_1816_output.setInt32(r, 7, tbl_Sort_TD_2746_output.getInt32(i, 7));
        tbl_LocalLimit_TD_1816_output.setInt32(r, 8, tbl_Sort_TD_2746_output.getInt32(i, 8));
        tbl_LocalLimit_TD_1816_output.setInt32(r, 9, tbl_Sort_TD_2746_output.getInt32(i, 9));
        tbl_LocalLimit_TD_1816_output.setInt32(r, 10, tbl_Sort_TD_2746_output.getInt32(i, 10));
        r++;
    }
    tbl_LocalLimit_TD_1816_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1816_output #Row: " << tbl_LocalLimit_TD_1816_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0247(Table &tbl_LocalLimit_TD_1816_output, Table &tbl_GlobalLimit_TD_0247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, agg1#14742, agg2#14743, agg3#14744, agg4#14745, agg5#14746, agg6#14747, agg7#14748)
    // Output: ListBuffer(i_item_id#14770, ca_country#14771, ca_state#14772, ca_county#14773, agg1#14742, agg2#14743, agg3#14744, agg4#14745, agg5#14746, agg6#14747, agg7#14748)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id14770_n = tbl_LocalLimit_TD_1816_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id14770_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_country14771_n = tbl_LocalLimit_TD_1816_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_country14771_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state14772_n = tbl_LocalLimit_TD_1816_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state14772_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county14773_n = tbl_LocalLimit_TD_1816_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county14773_n);
        tbl_GlobalLimit_TD_0247_output.setInt32(r, 4, tbl_LocalLimit_TD_1816_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0247_output.setInt32(r, 5, tbl_LocalLimit_TD_1816_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0247_output.setInt32(r, 6, tbl_LocalLimit_TD_1816_output.getInt32(i, 6));
        tbl_GlobalLimit_TD_0247_output.setInt32(r, 7, tbl_LocalLimit_TD_1816_output.getInt32(i, 7));
        tbl_GlobalLimit_TD_0247_output.setInt32(r, 8, tbl_LocalLimit_TD_1816_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0247_output.setInt32(r, 9, tbl_LocalLimit_TD_1816_output.getInt32(i, 9));
        tbl_GlobalLimit_TD_0247_output.setInt32(r, 10, tbl_LocalLimit_TD_1816_output.getInt32(i, 10));
        r++;
    }
    tbl_GlobalLimit_TD_0247_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0247_output #Row: " << tbl_GlobalLimit_TD_0247_output.getNumRow() << std::endl;
}

