#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9547(Table &tbl_SerializeFromObject_TD_10751_input, Table &tbl_Filter_TD_9547_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(cd_gender#94) AND isnotnull(cd_marital_status#95)) AND isnotnull(cd_education_status#96)) AND (((cd_gender#94 = M) AND (cd_marital_status#95 = S)) AND (cd_education_status#96 = College))) AND isnotnull(cd_demo_sk#93)))
    // Input: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96)
    // Output: ListBuffer(cd_demo_sk#93)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10751_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_SerializeFromObject_TD_10751_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_10751_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_SerializeFromObject_TD_10751_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_10751_input.getInt32(i, 0);
        if ((((（std::string(_isnotnullcd_gender94.data()) != "NULL") && （std::string(_isnotnullcd_marital_status95.data()) != "NULL")) && （std::string(_isnotnullcd_education_status96.data()) != "NULL")) && (((std::string(_cd_gender94.data()) == "M") && (std::string(_cd_marital_status95.data()) == "S")) && (std::string(_cd_education_status96.data()) == "College"))) && (_cd_demo_sk93!= 0)) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_10751_input.getInt32(i, 0);
            tbl_Filter_TD_9547_output.setInt32(r, 0, _cd_demo_sk93_t);
            r++;
        }
    }
    tbl_Filter_TD_9547_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9547_output #Row: " << tbl_Filter_TD_9547_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9126(Table &tbl_SerializeFromObject_TD_10926_input, Table &tbl_Filter_TD_9126_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_cdemo_sk#1210) AND isnotnull(ss_sold_date_sk#1206)) AND (isnotnull(ss_store_sk#1213) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_cdemo_sk#1210, ss_store_sk#1213, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_cdemo_sk#1210, ss_store_sk#1213, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10926_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_cdemo_sk1210 = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 2);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 3);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 1);
        if (((_ss_cdemo_sk1210!= 0) && (_ss_sold_date_sk1206!= 0)) && ((_ss_store_sk1213!= 0) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 0);
            tbl_Filter_TD_9126_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 1);
            tbl_Filter_TD_9126_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_cdemo_sk1210_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 2);
            tbl_Filter_TD_9126_output.setInt32(r, 2, _ss_cdemo_sk1210_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 3);
            tbl_Filter_TD_9126_output.setInt32(r, 3, _ss_store_sk1213_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 4);
            tbl_Filter_TD_9126_output.setInt32(r, 4, _ss_quantity1216_t);
            int32_t _ss_list_price1218_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 5);
            tbl_Filter_TD_9126_output.setInt32(r, 5, _ss_list_price1218_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 6);
            tbl_Filter_TD_9126_output.setInt32(r, 6, _ss_sales_price1219_t);
            int32_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 7);
            tbl_Filter_TD_9126_output.setInt32(r, 7, _ss_coupon_amt1225_t);
            r++;
        }
    }
    tbl_Filter_TD_9126_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9126_output #Row: " << tbl_Filter_TD_9126_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8228(Table &tbl_SerializeFromObject_TD_9742_input, Table &tbl_Filter_TD_8228_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2002)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9742_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_9742_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9742_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2002)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9742_input.getInt32(i, 0);
            tbl_Filter_TD_8228_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_8228_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8228_output #Row: " << tbl_Filter_TD_8228_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8826_key_leftMajor {
    int32_t _ss_cdemo_sk1210;
    bool operator==(const SW_JOIN_INNER_TD_8826_key_leftMajor& other) const {
        return ((_ss_cdemo_sk1210 == other._ss_cdemo_sk1210));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8826_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8826_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_cdemo_sk1210));
    }
};
}
struct SW_JOIN_INNER_TD_8826_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _ss_list_price1218;
    int32_t _ss_sales_price1219;
    int32_t _ss_coupon_amt1225;
};
struct SW_JOIN_INNER_TD_8826_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_8826_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8826_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8826_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_8826_payload_rightMajor {
    int32_t _cd_demo_sk93;
};
void SW_JOIN_INNER_TD_8826(Table &tbl_Filter_TD_9126_output, Table &tbl_Filter_TD_9547_output, Table &tbl_JOIN_INNER_TD_8826_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_cdemo_sk#1210 = cd_demo_sk#93))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_cdemo_sk#1210, ss_store_sk#1213, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    // Right Table: ListBuffer(cd_demo_sk#93)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    int left_nrow = tbl_Filter_TD_9126_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9547_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8826_key_leftMajor, SW_JOIN_INNER_TD_8826_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9126_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_cdemo_sk1210_k = tbl_Filter_TD_9126_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8826_key_leftMajor keyA{_ss_cdemo_sk1210_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9126_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9126_output.getInt32(i, 1);
            int32_t _ss_cdemo_sk1210 = tbl_Filter_TD_9126_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_9126_output.getInt32(i, 3);
            int32_t _ss_quantity1216 = tbl_Filter_TD_9126_output.getInt32(i, 4);
            int32_t _ss_list_price1218 = tbl_Filter_TD_9126_output.getInt32(i, 5);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_9126_output.getInt32(i, 6);
            int32_t _ss_coupon_amt1225 = tbl_Filter_TD_9126_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8826_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_cdemo_sk1210, _ss_store_sk1213, _ss_quantity1216, _ss_list_price1218, _ss_sales_price1219, _ss_coupon_amt1225};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9547_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_9547_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8826_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_9547_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 4, _ss_list_price1218);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 5, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 6, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8826_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8826_key_rightMajor, SW_JOIN_INNER_TD_8826_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9547_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_9547_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8826_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_9547_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8826_payload_rightMajor payloadA{_cd_demo_sk93};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9126_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_cdemo_sk1210_k = tbl_Filter_TD_9126_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8826_key_rightMajor{_ss_cdemo_sk1210_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9126_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9126_output.getInt32(i, 1);
                int32_t _ss_cdemo_sk1210 = tbl_Filter_TD_9126_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_9126_output.getInt32(i, 3);
                int32_t _ss_quantity1216 = tbl_Filter_TD_9126_output.getInt32(i, 4);
                int32_t _ss_list_price1218 = tbl_Filter_TD_9126_output.getInt32(i, 5);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_9126_output.getInt32(i, 6);
                int32_t _ss_coupon_amt1225 = tbl_Filter_TD_9126_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 4, _ss_list_price1218);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 5, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_8826_output.setInt32(r, 6, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8826_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8826_output #Row: " << tbl_JOIN_INNER_TD_8826_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7158(Table &tbl_SerializeFromObject_TD_8979_input, Table &tbl_Filter_TD_7158_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_state#402) AND (s_state#402 = TN)) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_state#402)
    // Output: ListBuffer(s_store_sk#378, s_state#402)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8979_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_state402 = tbl_SerializeFromObject_TD_8979_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_8979_input.getInt32(i, 0);
        if ((（std::string(_isnotnulls_state402.data()) != "NULL") && (std::string(_s_state402.data()) == "TN")) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_8979_input.getInt32(i, 0);
            tbl_Filter_TD_7158_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_t = tbl_SerializeFromObject_TD_8979_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7158_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_state402_t);
            r++;
        }
    }
    tbl_Filter_TD_7158_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7158_output #Row: " << tbl_Filter_TD_7158_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7173_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_7173_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7173_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7173_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_7173_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _ss_list_price1218;
    int32_t _ss_sales_price1219;
    int32_t _ss_coupon_amt1225;
};
struct SW_JOIN_INNER_TD_7173_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7173_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7173_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7173_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7173_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_7173(Table &tbl_JOIN_INNER_TD_8826_output, Table &tbl_Filter_TD_8228_output, Table &tbl_JOIN_INNER_TD_7173_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    int left_nrow = tbl_JOIN_INNER_TD_8826_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8228_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7173_key_leftMajor, SW_JOIN_INNER_TD_7173_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8826_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7173_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 2);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 3);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 4);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 5);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_7173_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _ss_list_price1218, _ss_sales_price1219, _ss_coupon_amt1225};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8228_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8228_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7173_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_date_sk120 = tbl_Filter_TD_8228_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 3, _ss_list_price1218);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 4, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 5, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7173_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7173_key_rightMajor, SW_JOIN_INNER_TD_7173_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8228_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8228_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7173_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_8228_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7173_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8826_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7173_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 2);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 3);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 4);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 5);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_8826_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 3, _ss_list_price1218);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 4, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_7173_output.setInt32(r, 5, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7173_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7173_output #Row: " << tbl_JOIN_INNER_TD_7173_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6386(Table &tbl_SerializeFromObject_TD_7471_input, Table &tbl_Filter_TD_6386_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7471_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7471_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7471_input.getInt32(i, 0);
            tbl_Filter_TD_6386_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_7471_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6386_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_6386_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6386_output #Row: " << tbl_Filter_TD_6386_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6993_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_6993_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6993_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6993_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_6993_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_quantity1216;
    int32_t _ss_list_price1218;
    int32_t _ss_sales_price1219;
    int32_t _ss_coupon_amt1225;
};
struct SW_JOIN_INNER_TD_6993_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_6993_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6993_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6993_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_6993_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_state402;
};
void SW_JOIN_INNER_TD_6993(Table &tbl_JOIN_INNER_TD_7173_output, Table &tbl_Filter_TD_7158_output, Table &tbl_JOIN_INNER_TD_6993_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_store_sk#1213, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225)
    // Right Table: ListBuffer(s_store_sk#378, s_state#402)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, s_state#402)
    int left_nrow = tbl_JOIN_INNER_TD_7173_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7158_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6993_key_leftMajor, SW_JOIN_INNER_TD_6993_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7173_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6993_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 1);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 2);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 3);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 4);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_6993_payload_leftMajor payloadA{_ss_item_sk1208, _ss_store_sk1213, _ss_quantity1216, _ss_list_price1218, _ss_sales_price1219, _ss_coupon_amt1225};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7158_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7158_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6993_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _s_store_sk378 = tbl_Filter_TD_7158_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7158_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_state402 = std::string(_s_state402_n.data());
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_6993_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_state402_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6993_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6993_key_rightMajor, SW_JOIN_INNER_TD_6993_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7158_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_7158_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6993_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_7158_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7158_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_state402 = std::string(_s_state402_n.data());
            SW_JOIN_INNER_TD_6993_payload_rightMajor payloadA{_s_store_sk378, _s_state402};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7173_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6993_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 1);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 2);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 3);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 4);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_7173_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_6993_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_state402_n);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_6993_output.setInt32(r, 4, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6993_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6993_output #Row: " << tbl_JOIN_INNER_TD_6993_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5516_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_5516_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5516_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5516_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_5516_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_quantity1216;
    int32_t _ss_list_price1218;
    int32_t _ss_sales_price1219;
    int32_t _ss_coupon_amt1225;
    std::string _s_state402;
};
struct SW_JOIN_INNER_TD_5516_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5516_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5516_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5516_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5516_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_5516(Table &tbl_JOIN_INNER_TD_6993_output, Table &tbl_Filter_TD_6386_output, Table &tbl_JOIN_INNER_TD_5516_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, s_state#402)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, i_item_id#229, s_state#402)
    int left_nrow = tbl_JOIN_INNER_TD_6993_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6386_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5516_key_leftMajor, SW_JOIN_INNER_TD_5516_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6993_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5516_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 0);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 1);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 3);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_6993_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_state402 = std::string(_s_state402_n.data());
            SW_JOIN_INNER_TD_5516_payload_leftMajor payloadA{_ss_item_sk1208, _ss_quantity1216, _ss_list_price1218, _ss_sales_price1219, _ss_coupon_amt1225, _s_state402};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6386_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6386_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5516_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_6386_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6386_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_5516_output.setInt32(r, 0, _ss_quantity1216);
                tbl_JOIN_INNER_TD_5516_output.setInt32(r, 1, _ss_list_price1218);
                tbl_JOIN_INNER_TD_5516_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_5516_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_5516_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_state402_n);
                tbl_JOIN_INNER_TD_5516_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5516_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5516_key_rightMajor, SW_JOIN_INNER_TD_5516_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6386_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6386_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5516_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6386_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_6386_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_5516_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6993_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5516_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 0);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 1);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 3);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_6993_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_JOIN_INNER_TD_6993_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_state402 = std::string(_s_state402_n.data());
                tbl_JOIN_INNER_TD_5516_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_item_id229_n);
                tbl_JOIN_INNER_TD_5516_output.setInt32(r, 0, _ss_quantity1216);
                tbl_JOIN_INNER_TD_5516_output.setInt32(r, 1, _ss_list_price1218);
                tbl_JOIN_INNER_TD_5516_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_5516_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_5516_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_state402_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5516_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5516_output #Row: " << tbl_JOIN_INNER_TD_5516_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4782(Table &tbl_JOIN_INNER_TD_5516_output, Table &tbl_Expand_TD_4782_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, i_item_id#229, s_state#402)
    // Output: ListBuffer(ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, i_item_id#16368, s_state#16369, spark_grouping_id#16367L)
    std::cout << "tbl_Expand_TD_4782_output #Row: " << tbl_Expand_TD_4782_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3788_key {
    std::string _i_item_id16368;
    std::string _s_state16369;
    int64_t _spark_grouping_id16367L;
    bool operator==(const SW_Aggregate_TD_3788_key& other) const { return (_i_item_id16368 == other._i_item_id16368) && (_s_state16369 == other._s_state16369) && (_spark_grouping_id16367L == other._spark_grouping_id16367L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3788_key> {
    std::size_t operator() (const SW_Aggregate_TD_3788_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id16368)) + (hash<string>()(k._s_state16369)) + (hash<int64_t>()(k._spark_grouping_id16367L));
    }
};
}
struct SW_Aggregate_TD_3788_payload {
    // Unsupported Data Type
    int64_t _agg116357_avg_0;
    int32_t _agg216358_avg_1;
    int32_t _agg316359_avg_2;
    int32_t _agg416360_avg_3;
};
void SW_Aggregate_TD_3788(Table &tbl_Expand_TD_4782_output, Table &tbl_Aggregate_TD_3788_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#16368, s_state#16369, spark_grouping_id#16367L, cast((shiftright(spark_grouping_id#16367L, 0) & 1) as tinyint) AS g_state#16356, avg(ss_quantity#1216) AS agg1#16357, cast((avg(UnscaledValue(ss_list_price#1218)) / 100.0) as decimal(11,6)) AS agg2#16358, cast((avg(UnscaledValue(ss_coupon_amt#1225)) / 100.0) as decimal(11,6)) AS agg3#16359, cast((avg(UnscaledValue(ss_sales_price#1219)) / 100.0) as decimal(11,6)) AS agg4#16360)
    // Input: ListBuffer(ss_quantity#1216, ss_list_price#1218, ss_sales_price#1219, ss_coupon_amt#1225, i_item_id#16368, s_state#16369, spark_grouping_id#16367L)
    // Output: ListBuffer(i_item_id#16368, s_state#16369, g_state#16356, agg1#16357, agg2#16358, agg3#16359, agg4#16360)
    std::unordered_map<SW_Aggregate_TD_3788_key, SW_Aggregate_TD_3788_payload> ht1;
    int nrow1 = tbl_Expand_TD_4782_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_Expand_TD_4782_output.getInt32(i, 0);
        int32_t _ss_list_price1218 = tbl_Expand_TD_4782_output.getInt32(i, 1);
        int32_t _ss_sales_price1219 = tbl_Expand_TD_4782_output.getInt32(i, 2);
        int32_t _ss_coupon_amt1225 = tbl_Expand_TD_4782_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id16368 = tbl_Expand_TD_4782_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_state16369 = tbl_Expand_TD_4782_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int64_t _spark_grouping_id16367L = tbl_Expand_TD_4782_output.getInt64(i, 6);
        SW_Aggregate_TD_3788_key k{std::string(_i_item_id16368.data()), std::string(_s_state16369.data()), _spark_grouping_id16367L};
        // Unsupported output Type
        int64_t _agg116357_avg_0 = _ss_quantity1216;
        int64_t _agg216358_avg_1 = _ss_list_price1218;
        int64_t _agg316359_avg_2 = _ss_coupon_amt1225;
        int64_t _agg416360_avg_3 = _ss_sales_price1219;
        SW_Aggregate_TD_3788_payload p{    // Unsupported Data Type, _agg116357_avg_0, _agg216358_avg_1, _agg316359_avg_2, _agg416360_avg_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            // Unsupported payload Type
            p._agg116357_avg_0 = avg_0;
            int64_t avg_1 = ((it->second)._agg216358_avg_1 + _agg216358_avg_1);
            p._agg216358_avg_1 = avg_1;
            int64_t avg_2 = ((it->second)._agg316359_avg_2 + _agg316359_avg_2);
            p._agg316359_avg_2 = avg_2;
            int64_t avg_3 = ((it->second)._agg416360_avg_3 + _agg416360_avg_3);
            p._agg416360_avg_3 = avg_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id16368{};
        memcpy(_i_item_id16368.data(), ((it.first)._i_item_id16368).data(), ((it.first)._i_item_id16368).length());
        tbl_Aggregate_TD_3788_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id16368);
        std::array<char, TPCDS_READ_MAX + 1> _s_state16369{};
        memcpy(_s_state16369.data(), ((it.first)._s_state16369).data(), ((it.first)._s_state16369).length());
        tbl_Aggregate_TD_3788_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_state16369);
        // _spark_grouping_id16367L not required in the output table
        // Unsupported payload type: ByteType
        int64_t _agg116357 = (it.second)._agg116357_avg_0 / nrow1;
        // Unsupported payload type: DoubleType
        int32_t _agg216358 = ((it.second)._agg216358_avg_1 / nrow1 / 100.0);
        tbl_Aggregate_TD_3788_output.setInt32(r, 4, _agg216358);
        int32_t _agg316359 = ((it.second)._agg316359_avg_2 / nrow1 / 100.0);
        tbl_Aggregate_TD_3788_output.setInt32(r, 5, _agg316359);
        int32_t _agg416360 = ((it.second)._agg416360_avg_3 / nrow1 / 100.0);
        tbl_Aggregate_TD_3788_output.setInt32(r, 6, _agg416360);
        ++r;
    }
    tbl_Aggregate_TD_3788_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3788_output #Row: " << tbl_Aggregate_TD_3788_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2924(Table &tbl_Aggregate_TD_3788_output, Table &tbl_Sort_TD_2924_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#16368 ASC NULLS FIRST, s_state#16369 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#16368, s_state#16369, g_state#16356, agg1#16357, agg2#16358, agg3#16359, agg4#16360)
    // Output: ListBuffer(i_item_id#16368, s_state#16369, g_state#16356, agg1#16357, agg2#16358, agg3#16359, agg4#16360)
    struct SW_Sort_TD_2924Row {
        std::string _i_item_id16368;
        std::string _s_state16369;
        // Unsupported input column type
        int32_t _agg116357;
        int32_t _agg216358;
        int32_t _agg316359;
        int32_t _agg416360;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2924Row& a, const SW_Sort_TD_2924Row& b) const { return 
 (a._i_item_id16368 < b._i_item_id16368) || 
 ((a._i_item_id16368 == b._i_item_id16368) && (a._s_state16369 < b._s_state16369)); 
}
    }SW_Sort_TD_2924_order; 

    int nrow1 = tbl_Aggregate_TD_3788_output.getNumRow();
    std::vector<SW_Sort_TD_2924Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id16368 = tbl_Aggregate_TD_3788_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_state16369 = tbl_Aggregate_TD_3788_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        // Unsupported input column type
        int32_t _agg116357 = tbl_Aggregate_TD_3788_output.getInt32(i, 3);
        int32_t _agg216358 = tbl_Aggregate_TD_3788_output.getInt32(i, 4);
        int32_t _agg316359 = tbl_Aggregate_TD_3788_output.getInt32(i, 5);
        int32_t _agg416360 = tbl_Aggregate_TD_3788_output.getInt32(i, 6);
        SW_Sort_TD_2924Row t = {std::string(_i_item_id16368.data()),std::string(_s_state16369.data()),_agg116357,_agg216358,_agg316359,_agg416360};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2924_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id16368{};
        memcpy(_i_item_id16368.data(), (it._i_item_id16368).data(), (it._i_item_id16368).length());
        tbl_Sort_TD_2924_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id16368);
        std::array<char, TPCDS_READ_MAX + 1> _s_state16369{};
        memcpy(_s_state16369.data(), (it._s_state16369).data(), (it._s_state16369).length());
        tbl_Sort_TD_2924_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _s_state16369);
        // Unsupported input column type
        tbl_Sort_TD_2924_output.setInt32(r, 3, it._agg116357);
        tbl_Sort_TD_2924_output.setInt32(r, 4, it._agg216358);
        tbl_Sort_TD_2924_output.setInt32(r, 5, it._agg316359);
        tbl_Sort_TD_2924_output.setInt32(r, 6, it._agg416360);
        ++r;
    }
    tbl_Sort_TD_2924_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2924_output #Row: " << tbl_Sort_TD_2924_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1661(Table &tbl_Sort_TD_2924_output, Table &tbl_LocalLimit_TD_1661_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#16368, s_state#16369, g_state#16356, agg1#16357, agg2#16358, agg3#16359, agg4#16360)
    // Output: ListBuffer(i_item_id#16368, s_state#16369, g_state#16356, agg1#16357, agg2#16358, agg3#16359, agg4#16360)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id16368_n = tbl_Sort_TD_2924_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1661_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id16368_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_state16369_n = tbl_Sort_TD_2924_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1661_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_state16369_n);
        // Unsupported Union key type
        // Unsupported Union key type
        tbl_LocalLimit_TD_1661_output.setInt32(r, 4, tbl_Sort_TD_2924_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1661_output.setInt32(r, 5, tbl_Sort_TD_2924_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1661_output.setInt32(r, 6, tbl_Sort_TD_2924_output.getInt32(i, 6));
        r++;
    }
    tbl_LocalLimit_TD_1661_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1661_output #Row: " << tbl_LocalLimit_TD_1661_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0740(Table &tbl_LocalLimit_TD_1661_output, Table &tbl_GlobalLimit_TD_0740_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#16368, s_state#16369, g_state#16356, agg1#16357, agg2#16358, agg3#16359, agg4#16360)
    // Output: ListBuffer(i_item_id#16368, s_state#16369, g_state#16356, agg1#16357, agg2#16358, agg3#16359, agg4#16360)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id16368_n = tbl_LocalLimit_TD_1661_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0740_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id16368_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_state16369_n = tbl_LocalLimit_TD_1661_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0740_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_state16369_n);
        // Unsupported Union key type
        // Unsupported Union key type
        tbl_GlobalLimit_TD_0740_output.setInt32(r, 4, tbl_LocalLimit_TD_1661_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0740_output.setInt32(r, 5, tbl_LocalLimit_TD_1661_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0740_output.setInt32(r, 6, tbl_LocalLimit_TD_1661_output.getInt32(i, 6));
        r++;
    }
    tbl_GlobalLimit_TD_0740_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0740_output #Row: " << tbl_GlobalLimit_TD_0740_output.getNumRow() << std::endl;
}

