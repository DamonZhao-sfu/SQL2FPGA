#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9134(Table &tbl_SerializeFromObject_TD_10190_input, Table &tbl_Filter_TD_9134_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#8303) AND isnotnull(d_moy#8305)) AND ((d_year#8303 = 2001) AND (d_moy#8305 = 2))) AND isnotnull(d_date_sk#8297)))
    // Input: ListBuffer(d_date_sk#8297, d_year#8303, d_moy#8305)
    // Output: ListBuffer(d_date_sk#8297)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10190_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year8303 = tbl_SerializeFromObject_TD_10190_input.getInt32(i, 1);
        int32_t _d_moy8305 = tbl_SerializeFromObject_TD_10190_input.getInt32(i, 2);
        int32_t _d_date_sk8297 = tbl_SerializeFromObject_TD_10190_input.getInt32(i, 0);
        if ((((_d_year8303!= 0) && (_d_moy8305!= 0)) && ((_d_year8303 == 2001) && (_d_moy8305 == 2))) && (_d_date_sk8297!= 0)) {
            int32_t _d_date_sk8297_t = tbl_SerializeFromObject_TD_10190_input.getInt32(i, 0);
            tbl_Filter_TD_9134_output.setInt32(r, 0, _d_date_sk8297_t);
            r++;
        }
    }
    tbl_Filter_TD_9134_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9134_output #Row: " << tbl_Filter_TD_9134_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9657(Table &tbl_SerializeFromObject_TD_10713_input, Table &tbl_Filter_TD_9657_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND (isnotnull(ws_bill_addr_sk#736) AND isnotnull(ws_item_sk#732))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10713_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk736 = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && ((_ws_bill_addr_sk736!= 0) && (_ws_item_sk732!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 0);
            tbl_Filter_TD_9657_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 1);
            tbl_Filter_TD_9657_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_addr_sk736_t = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 2);
            tbl_Filter_TD_9657_output.setInt32(r, 2, _ws_bill_addr_sk736_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 3);
            tbl_Filter_TD_9657_output.setInt32(r, 3, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_9657_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9657_output #Row: " << tbl_Filter_TD_9657_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9446(Table &tbl_SerializeFromObject_TD_10866_input, Table &tbl_Filter_TD_9446_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#8240) AND isnotnull(d_moy#8242)) AND ((d_year#8240 = 2001) AND (d_moy#8242 = 2))) AND isnotnull(d_date_sk#8234)))
    // Input: ListBuffer(d_date_sk#8234, d_year#8240, d_moy#8242)
    // Output: ListBuffer(d_date_sk#8234)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10866_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year8240 = tbl_SerializeFromObject_TD_10866_input.getInt32(i, 1);
        int32_t _d_moy8242 = tbl_SerializeFromObject_TD_10866_input.getInt32(i, 2);
        int32_t _d_date_sk8234 = tbl_SerializeFromObject_TD_10866_input.getInt32(i, 0);
        if ((((_d_year8240!= 0) && (_d_moy8242!= 0)) && ((_d_year8240 == 2001) && (_d_moy8242 == 2))) && (_d_date_sk8234!= 0)) {
            int32_t _d_date_sk8234_t = tbl_SerializeFromObject_TD_10866_input.getInt32(i, 0);
            tbl_Filter_TD_9446_output.setInt32(r, 0, _d_date_sk8234_t);
            r++;
        }
    }
    tbl_Filter_TD_9446_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9446_output #Row: " << tbl_Filter_TD_9446_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9313(Table &tbl_SerializeFromObject_TD_10137_input, Table &tbl_Filter_TD_9313_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND (isnotnull(cs_bill_addr_sk#1110) AND isnotnull(cs_item_sk#1119))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10137_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10137_input.getInt32(i, 0);
        int32_t _cs_bill_addr_sk1110 = tbl_SerializeFromObject_TD_10137_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_10137_input.getInt32(i, 2);
        if ((_cs_sold_date_sk1104!= 0) && ((_cs_bill_addr_sk1110!= 0) && (_cs_item_sk1119!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10137_input.getInt32(i, 0);
            tbl_Filter_TD_9313_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_addr_sk1110_t = tbl_SerializeFromObject_TD_10137_input.getInt32(i, 1);
            tbl_Filter_TD_9313_output.setInt32(r, 1, _cs_bill_addr_sk1110_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_10137_input.getInt32(i, 2);
            tbl_Filter_TD_9313_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_10137_input.getInt32(i, 3);
            tbl_Filter_TD_9313_output.setInt32(r, 3, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_9313_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9313_output #Row: " << tbl_Filter_TD_9313_output.getNumRow() << std::endl;
}

void SW_Filter_TD_939(Table &tbl_SerializeFromObject_TD_10381_input, Table &tbl_Filter_TD_939_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 2001) AND (d_moy#128 = 2))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10381_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10381_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_10381_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10381_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 2001) && (_d_moy128 == 2))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10381_input.getInt32(i, 0);
            tbl_Filter_TD_939_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_939_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_939_output #Row: " << tbl_Filter_TD_939_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9450(Table &tbl_SerializeFromObject_TD_10300_input, Table &tbl_Filter_TD_9450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND (isnotnull(ss_addr_sk#1212) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10300_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10300_input.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_10300_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10300_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && ((_ss_addr_sk1212!= 0) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10300_input.getInt32(i, 0);
            tbl_Filter_TD_9450_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10300_input.getInt32(i, 1);
            tbl_Filter_TD_9450_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_10300_input.getInt32(i, 2);
            tbl_Filter_TD_9450_output.setInt32(r, 2, _ss_addr_sk1212_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_10300_input.getInt32(i, 3);
            tbl_Filter_TD_9450_output.setInt32(r, 3, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_9450_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9450_output #Row: " << tbl_Filter_TD_9450_output.getNumRow() << std::endl;
}

void SW_Filter_TD_854(Table &tbl_SerializeFromObject_TD_9646_input, Table &tbl_Filter_TD_854_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(i_color#8421 IN (slate,blanched,burnished))
    // Input: ListBuffer(i_item_id#8405, i_color#8421)
    // Output: ListBuffer(i_item_id#8405)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9646_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_color8421 = tbl_SerializeFromObject_TD_9646_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        auto reuse_col_str_984 = std::string(_i_color8421.data());
        if ((reuse_col_str_984 == "slate") || (reuse_col_str_984 == "blanched") || (reuse_col_str_984 == "burnished") || (0)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8405_t = tbl_SerializeFromObject_TD_9646_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_854_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id8405_t);
            r++;
        }
    }
    tbl_Filter_TD_854_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_854_output #Row: " << tbl_Filter_TD_854_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8376(Table &tbl_SerializeFromObject_TD_9673_input, Table &tbl_Filter_TD_8376_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#8338))
    // Input: ListBuffer(i_item_sk#8338, i_item_id#8339)
    // Output: ListBuffer(i_item_sk#8338, i_item_id#8339)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9673_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk8338 = tbl_SerializeFromObject_TD_9673_input.getInt32(i, 0);
        if (_i_item_sk8338!= 0) {
            int32_t _i_item_sk8338_t = tbl_SerializeFromObject_TD_9673_input.getInt32(i, 0);
            tbl_Filter_TD_8376_output.setInt32(r, 0, _i_item_sk8338_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339_t = tbl_SerializeFromObject_TD_9673_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8339_t);
            r++;
        }
    }
    tbl_Filter_TD_8376_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8376_output #Row: " << tbl_Filter_TD_8376_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8903(Table &tbl_SerializeFromObject_TD_9134_input, Table &tbl_Filter_TD_8903_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#8336) AND (ca_gmt_offset#8336 = -5.00)) AND isnotnull(ca_address_sk#8325)))
    // Input: ListBuffer(ca_address_sk#8325, ca_gmt_offset#8336)
    // Output: ListBuffer(ca_address_sk#8325)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9134_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset8336 = tbl_SerializeFromObject_TD_9134_input.getInt32(i, 1);
        int32_t _ca_address_sk8325 = tbl_SerializeFromObject_TD_9134_input.getInt32(i, 0);
        if (((_ca_gmt_offset8336!= 0) && (_ca_gmt_offset8336 == -5.00)) && (_ca_address_sk8325!= 0)) {
            int32_t _ca_address_sk8325_t = tbl_SerializeFromObject_TD_9134_input.getInt32(i, 0);
            tbl_Filter_TD_8903_output.setInt32(r, 0, _ca_address_sk8325_t);
            r++;
        }
    }
    tbl_Filter_TD_8903_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8903_output #Row: " << tbl_Filter_TD_8903_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_856_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_856_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_856_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_856_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_856_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_addr_sk736;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_856_key_rightMajor {
    int32_t _d_date_sk8297;
    bool operator==(const SW_JOIN_INNER_TD_856_key_rightMajor& other) const {
        return ((_d_date_sk8297 == other._d_date_sk8297));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_856_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_856_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8297));
    }
};
}
struct SW_JOIN_INNER_TD_856_payload_rightMajor {
    int32_t _d_date_sk8297;
};
void SW_JOIN_INNER_TD_856(Table &tbl_Filter_TD_9657_output, Table &tbl_Filter_TD_9134_output, Table &tbl_JOIN_INNER_TD_856_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#8297))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Right Table: ListBuffer(d_date_sk#8297)
    // Output Table: ListBuffer(ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int left_nrow = tbl_Filter_TD_9657_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9134_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_856_key_leftMajor, SW_JOIN_INNER_TD_856_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9657_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9657_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_856_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9657_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_9657_output.getInt32(i, 1);
            int32_t _ws_bill_addr_sk736 = tbl_Filter_TD_9657_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_9657_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_856_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_bill_addr_sk736, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9134_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8297_k = tbl_Filter_TD_9134_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_856_key_leftMajor{_d_date_sk8297_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _d_date_sk8297 = tbl_Filter_TD_9134_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_856_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_856_output.setInt32(r, 1, _ws_bill_addr_sk736);
                tbl_JOIN_INNER_TD_856_output.setInt32(r, 2, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_856_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_856_key_rightMajor, SW_JOIN_INNER_TD_856_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9134_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8297_k = tbl_Filter_TD_9134_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_856_key_rightMajor keyA{_d_date_sk8297_k};
            int32_t _d_date_sk8297 = tbl_Filter_TD_9134_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_856_payload_rightMajor payloadA{_d_date_sk8297};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9657_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9657_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_856_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8297 = (it->second)._d_date_sk8297;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9657_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_9657_output.getInt32(i, 1);
                int32_t _ws_bill_addr_sk736 = tbl_Filter_TD_9657_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_9657_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_856_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_856_output.setInt32(r, 1, _ws_bill_addr_sk736);
                tbl_JOIN_INNER_TD_856_output.setInt32(r, 2, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_856_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_856_output #Row: " << tbl_JOIN_INNER_TD_856_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8724(Table &tbl_SerializeFromObject_TD_9672_input, Table &tbl_Filter_TD_8724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(i_color#8399 IN (slate,blanched,burnished))
    // Input: ListBuffer(i_item_id#8383, i_color#8399)
    // Output: ListBuffer(i_item_id#8383)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9672_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_color8399 = tbl_SerializeFromObject_TD_9672_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        auto reuse_col_str_174 = std::string(_i_color8399.data());
        if ((reuse_col_str_174 == "slate") || (reuse_col_str_174 == "blanched") || (reuse_col_str_174 == "burnished") || (0)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8383_t = tbl_SerializeFromObject_TD_9672_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id8383_t);
            r++;
        }
    }
    tbl_Filter_TD_8724_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8724_output #Row: " << tbl_Filter_TD_8724_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8587(Table &tbl_SerializeFromObject_TD_947_input, Table &tbl_Filter_TD_8587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#8275))
    // Input: ListBuffer(i_item_sk#8275, i_item_id#8276)
    // Output: ListBuffer(i_item_sk#8275, i_item_id#8276)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_947_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk8275 = tbl_SerializeFromObject_TD_947_input.getInt32(i, 0);
        if (_i_item_sk8275!= 0) {
            int32_t _i_item_sk8275_t = tbl_SerializeFromObject_TD_947_input.getInt32(i, 0);
            tbl_Filter_TD_8587_output.setInt32(r, 0, _i_item_sk8275_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276_t = tbl_SerializeFromObject_TD_947_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8276_t);
            r++;
        }
    }
    tbl_Filter_TD_8587_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8587_output #Row: " << tbl_Filter_TD_8587_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8597(Table &tbl_SerializeFromObject_TD_9125_input, Table &tbl_Filter_TD_8597_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#8273) AND (ca_gmt_offset#8273 = -5.00)) AND isnotnull(ca_address_sk#8262)))
    // Input: ListBuffer(ca_address_sk#8262, ca_gmt_offset#8273)
    // Output: ListBuffer(ca_address_sk#8262)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9125_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset8273 = tbl_SerializeFromObject_TD_9125_input.getInt32(i, 1);
        int32_t _ca_address_sk8262 = tbl_SerializeFromObject_TD_9125_input.getInt32(i, 0);
        if (((_ca_gmt_offset8273!= 0) && (_ca_gmt_offset8273 == -5.00)) && (_ca_address_sk8262!= 0)) {
            int32_t _ca_address_sk8262_t = tbl_SerializeFromObject_TD_9125_input.getInt32(i, 0);
            tbl_Filter_TD_8597_output.setInt32(r, 0, _ca_address_sk8262_t);
            r++;
        }
    }
    tbl_Filter_TD_8597_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8597_output #Row: " << tbl_Filter_TD_8597_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8495_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_8495_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8495_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8495_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_8495_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_addr_sk1110;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_8495_key_rightMajor {
    int32_t _d_date_sk8234;
    bool operator==(const SW_JOIN_INNER_TD_8495_key_rightMajor& other) const {
        return ((_d_date_sk8234 == other._d_date_sk8234));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8495_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8495_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8234));
    }
};
}
struct SW_JOIN_INNER_TD_8495_payload_rightMajor {
    int32_t _d_date_sk8234;
};
void SW_JOIN_INNER_TD_8495(Table &tbl_Filter_TD_9313_output, Table &tbl_Filter_TD_9446_output, Table &tbl_JOIN_INNER_TD_8495_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#8234))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(d_date_sk#8234)
    // Output Table: ListBuffer(cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    int left_nrow = tbl_Filter_TD_9313_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9446_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8495_key_leftMajor, SW_JOIN_INNER_TD_8495_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9313_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9313_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8495_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9313_output.getInt32(i, 0);
            int32_t _cs_bill_addr_sk1110 = tbl_Filter_TD_9313_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_9313_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_9313_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8495_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_addr_sk1110, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9446_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8234_k = tbl_Filter_TD_9446_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8495_key_leftMajor{_d_date_sk8234_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_addr_sk1110 = (it->second)._cs_bill_addr_sk1110;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _d_date_sk8234 = tbl_Filter_TD_9446_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8495_output.setInt32(r, 0, _cs_bill_addr_sk1110);
                tbl_JOIN_INNER_TD_8495_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_8495_output.setInt32(r, 2, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8495_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8495_key_rightMajor, SW_JOIN_INNER_TD_8495_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9446_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8234_k = tbl_Filter_TD_9446_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8495_key_rightMajor keyA{_d_date_sk8234_k};
            int32_t _d_date_sk8234 = tbl_Filter_TD_9446_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8495_payload_rightMajor payloadA{_d_date_sk8234};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9313_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9313_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8495_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8234 = (it->second)._d_date_sk8234;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9313_output.getInt32(i, 0);
                int32_t _cs_bill_addr_sk1110 = tbl_Filter_TD_9313_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_9313_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_9313_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8495_output.setInt32(r, 0, _cs_bill_addr_sk1110);
                tbl_JOIN_INNER_TD_8495_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_8495_output.setInt32(r, 2, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8495_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8495_output #Row: " << tbl_JOIN_INNER_TD_8495_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8692(Table &tbl_SerializeFromObject_TD_9422_input, Table &tbl_Filter_TD_8692_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(i_color#8377 IN (slate,blanched,burnished))
    // Input: ListBuffer(i_item_id#8361, i_color#8377)
    // Output: ListBuffer(i_item_id#8361)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9422_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_color8377 = tbl_SerializeFromObject_TD_9422_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        auto reuse_col_str_200 = std::string(_i_color8377.data());
        if ((reuse_col_str_200 == "slate") || (reuse_col_str_200 == "blanched") || (reuse_col_str_200 == "burnished") || (0)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8361_t = tbl_SerializeFromObject_TD_9422_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8692_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id8361_t);
            r++;
        }
    }
    tbl_Filter_TD_8692_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8692_output #Row: " << tbl_Filter_TD_8692_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8590(Table &tbl_SerializeFromObject_TD_921_input, Table &tbl_Filter_TD_8590_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_921_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_921_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_921_input.getInt32(i, 0);
            tbl_Filter_TD_8590_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_921_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8590_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_8590_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8590_output #Row: " << tbl_Filter_TD_8590_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8400(Table &tbl_SerializeFromObject_TD_9153_input, Table &tbl_Filter_TD_8400_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#65) AND (ca_gmt_offset#65 = -5.00)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_gmt_offset#65)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9153_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset65 = tbl_SerializeFromObject_TD_9153_input.getInt32(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_9153_input.getInt32(i, 0);
        if (((_ca_gmt_offset65!= 0) && (_ca_gmt_offset65 == -5.00)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_9153_input.getInt32(i, 0);
            tbl_Filter_TD_8400_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_8400_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8400_output #Row: " << tbl_Filter_TD_8400_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8890_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8890_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8890_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8890_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8890_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_addr_sk1212;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_8890_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8890_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8890_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8890_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8890_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8890(Table &tbl_Filter_TD_9450_output, Table &tbl_Filter_TD_939_output, Table &tbl_JOIN_INNER_TD_8890_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int left_nrow = tbl_Filter_TD_9450_output.getNumRow();
    int right_nrow = tbl_Filter_TD_939_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8890_key_leftMajor, SW_JOIN_INNER_TD_8890_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9450_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9450_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8890_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9450_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9450_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_Filter_TD_9450_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9450_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8890_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_addr_sk1212, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_939_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_939_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8890_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk120 = tbl_Filter_TD_939_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8890_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8890_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8890_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8890_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8890_key_rightMajor, SW_JOIN_INNER_TD_8890_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_939_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_939_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8890_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_939_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8890_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9450_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9450_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8890_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9450_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9450_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_Filter_TD_9450_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9450_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8890_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8890_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8890_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8890_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8890_output #Row: " << tbl_JOIN_INNER_TD_8890_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7189_key_leftMajor {
    std::string _i_item_id8339;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7189_key_leftMajor& other) const {
        return ((_i_item_id8339 == other._i_item_id8339));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7189_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7189_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id8339));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7189_payload_leftMajor {
    int32_t _i_item_sk8338;
    std::string _i_item_id8339;
};
struct SW_JOIN_LEFTSEMI_TD_7189_key_rightMajor {
    std::string _i_item_id8405;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7189_key_rightMajor& other) const {
        return ((_i_item_id8405 == other._i_item_id8405));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7189_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7189_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id8405));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7189_payload_rightMajor {
    std::string _i_item_id8405;
};
void SW_JOIN_LEFTSEMI_TD_7189(Table &tbl_Filter_TD_8376_output, Table &tbl_Filter_TD_854_output, Table &tbl_JOIN_LEFTSEMI_TD_7189_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_id#8339 = i_item_id#8405))
    // Left Table: ListBuffer(i_item_sk#8338, i_item_id#8339)
    // Right Table: ListBuffer(i_item_id#8405)
    // Output Table: ListBuffer(i_item_sk#8338, i_item_id#8339)
    int left_nrow = tbl_Filter_TD_8376_output.getNumRow();
    int right_nrow = tbl_Filter_TD_854_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7189_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7189_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_854_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8376_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8405_k_n = tbl_Filter_TD_854_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id8405_k = std::string(_i_item_id8405_k_n.data());
            SW_JOIN_LEFTSEMI_TD_7189_key_rightMajor keyA{_i_item_id8405_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8405_n = tbl_Filter_TD_854_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id8405 = std::string(_i_item_id8405_n.data());
            SW_JOIN_LEFTSEMI_TD_7189_payload_rightMajor payloadA{_i_item_id8405};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339_k_n = tbl_Filter_TD_8376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id8339_k = std::string(_i_item_id8339_k_n.data());
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7189_key_rightMajor{_i_item_id8339_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk8338 = tbl_Filter_TD_8376_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339 = tbl_Filter_TD_8376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                tbl_JOIN_LEFTSEMI_TD_7189_output.setInt32(r, 0, _i_item_sk8338);
                tbl_JOIN_LEFTSEMI_TD_7189_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8339);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7189_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7189_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7189_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7327_key_leftMajor {
    int32_t _ws_bill_addr_sk736;
    bool operator==(const SW_JOIN_INNER_TD_7327_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk736 == other._ws_bill_addr_sk736));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7327_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7327_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk736));
    }
};
}
struct SW_JOIN_INNER_TD_7327_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_bill_addr_sk736;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_7327_key_rightMajor {
    int32_t _ca_address_sk8325;
    bool operator==(const SW_JOIN_INNER_TD_7327_key_rightMajor& other) const {
        return ((_ca_address_sk8325 == other._ca_address_sk8325));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7327_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7327_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk8325));
    }
};
}
struct SW_JOIN_INNER_TD_7327_payload_rightMajor {
    int32_t _ca_address_sk8325;
};
void SW_JOIN_INNER_TD_7327(Table &tbl_JOIN_INNER_TD_856_output, Table &tbl_Filter_TD_8903_output, Table &tbl_JOIN_INNER_TD_7327_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#736 = ca_address_sk#8325))
    // Left Table: ListBuffer(ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Right Table: ListBuffer(ca_address_sk#8325)
    // Output Table: ListBuffer(ws_item_sk#732, ws_ext_sales_price#752)
    int left_nrow = tbl_JOIN_INNER_TD_856_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8903_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7327_key_leftMajor, SW_JOIN_INNER_TD_7327_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_856_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_856_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7327_key_leftMajor keyA{_ws_bill_addr_sk736_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_856_output.getInt32(i, 0);
            int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_856_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_856_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7327_payload_leftMajor payloadA{_ws_item_sk732, _ws_bill_addr_sk736, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8903_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk8325_k = tbl_Filter_TD_8903_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7327_key_leftMajor{_ca_address_sk8325_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ca_address_sk8325 = tbl_Filter_TD_8903_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7327_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_7327_output.setInt32(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7327_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7327_key_rightMajor, SW_JOIN_INNER_TD_7327_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8903_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk8325_k = tbl_Filter_TD_8903_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7327_key_rightMajor keyA{_ca_address_sk8325_k};
            int32_t _ca_address_sk8325 = tbl_Filter_TD_8903_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7327_payload_rightMajor payloadA{_ca_address_sk8325};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_856_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_856_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7327_key_rightMajor{_ws_bill_addr_sk736_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk8325 = (it->second)._ca_address_sk8325;
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_856_output.getInt32(i, 0);
                int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_856_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_856_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7327_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_7327_output.setInt32(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7327_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7327_output #Row: " << tbl_JOIN_INNER_TD_7327_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7271_key_leftMajor {
    std::string _i_item_id8276;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7271_key_leftMajor& other) const {
        return ((_i_item_id8276 == other._i_item_id8276));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7271_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7271_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id8276));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7271_payload_leftMajor {
    int32_t _i_item_sk8275;
    std::string _i_item_id8276;
};
struct SW_JOIN_LEFTSEMI_TD_7271_key_rightMajor {
    std::string _i_item_id8383;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7271_key_rightMajor& other) const {
        return ((_i_item_id8383 == other._i_item_id8383));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7271_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7271_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id8383));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7271_payload_rightMajor {
    std::string _i_item_id8383;
};
void SW_JOIN_LEFTSEMI_TD_7271(Table &tbl_Filter_TD_8587_output, Table &tbl_Filter_TD_8724_output, Table &tbl_JOIN_LEFTSEMI_TD_7271_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_id#8276 = i_item_id#8383))
    // Left Table: ListBuffer(i_item_sk#8275, i_item_id#8276)
    // Right Table: ListBuffer(i_item_id#8383)
    // Output Table: ListBuffer(i_item_sk#8275, i_item_id#8276)
    int left_nrow = tbl_Filter_TD_8587_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8724_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7271_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7271_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8724_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8587_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8383_k_n = tbl_Filter_TD_8724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id8383_k = std::string(_i_item_id8383_k_n.data());
            SW_JOIN_LEFTSEMI_TD_7271_key_rightMajor keyA{_i_item_id8383_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8383_n = tbl_Filter_TD_8724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id8383 = std::string(_i_item_id8383_n.data());
            SW_JOIN_LEFTSEMI_TD_7271_payload_rightMajor payloadA{_i_item_id8383};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276_k_n = tbl_Filter_TD_8587_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id8276_k = std::string(_i_item_id8276_k_n.data());
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7271_key_rightMajor{_i_item_id8276_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk8275 = tbl_Filter_TD_8587_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276 = tbl_Filter_TD_8587_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                tbl_JOIN_LEFTSEMI_TD_7271_output.setInt32(r, 0, _i_item_sk8275);
                tbl_JOIN_LEFTSEMI_TD_7271_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8276);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7271_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7271_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7271_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7792_key_leftMajor {
    int32_t _cs_bill_addr_sk1110;
    bool operator==(const SW_JOIN_INNER_TD_7792_key_leftMajor& other) const {
        return ((_cs_bill_addr_sk1110 == other._cs_bill_addr_sk1110));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7792_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7792_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_addr_sk1110));
    }
};
}
struct SW_JOIN_INNER_TD_7792_payload_leftMajor {
    int32_t _cs_bill_addr_sk1110;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_7792_key_rightMajor {
    int32_t _ca_address_sk8262;
    bool operator==(const SW_JOIN_INNER_TD_7792_key_rightMajor& other) const {
        return ((_ca_address_sk8262 == other._ca_address_sk8262));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7792_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7792_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk8262));
    }
};
}
struct SW_JOIN_INNER_TD_7792_payload_rightMajor {
    int32_t _ca_address_sk8262;
};
void SW_JOIN_INNER_TD_7792(Table &tbl_JOIN_INNER_TD_8495_output, Table &tbl_Filter_TD_8597_output, Table &tbl_JOIN_INNER_TD_7792_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_addr_sk#1110 = ca_address_sk#8262))
    // Left Table: ListBuffer(cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(ca_address_sk#8262)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_ext_sales_price#1127)
    int left_nrow = tbl_JOIN_INNER_TD_8495_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8597_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7792_key_leftMajor, SW_JOIN_INNER_TD_7792_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8495_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_addr_sk1110_k = tbl_JOIN_INNER_TD_8495_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7792_key_leftMajor keyA{_cs_bill_addr_sk1110_k};
            int32_t _cs_bill_addr_sk1110 = tbl_JOIN_INNER_TD_8495_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_8495_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8495_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7792_payload_leftMajor payloadA{_cs_bill_addr_sk1110, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8597_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk8262_k = tbl_Filter_TD_8597_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7792_key_leftMajor{_ca_address_sk8262_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_bill_addr_sk1110 = (it->second)._cs_bill_addr_sk1110;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _ca_address_sk8262 = tbl_Filter_TD_8597_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7792_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7792_output.setInt32(r, 1, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7792_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7792_key_rightMajor, SW_JOIN_INNER_TD_7792_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8597_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk8262_k = tbl_Filter_TD_8597_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7792_key_rightMajor keyA{_ca_address_sk8262_k};
            int32_t _ca_address_sk8262 = tbl_Filter_TD_8597_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7792_payload_rightMajor payloadA{_ca_address_sk8262};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8495_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_addr_sk1110_k = tbl_JOIN_INNER_TD_8495_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7792_key_rightMajor{_cs_bill_addr_sk1110_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk8262 = (it->second)._ca_address_sk8262;
                int32_t _cs_bill_addr_sk1110 = tbl_JOIN_INNER_TD_8495_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_8495_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8495_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7792_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7792_output.setInt32(r, 1, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7792_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7792_output #Row: " << tbl_JOIN_INNER_TD_7792_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7832_key_leftMajor {
    std::string _i_item_id229;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7832_key_leftMajor& other) const {
        return ((_i_item_id229 == other._i_item_id229));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7832_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7832_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7832_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
struct SW_JOIN_LEFTSEMI_TD_7832_key_rightMajor {
    std::string _i_item_id8361;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7832_key_rightMajor& other) const {
        return ((_i_item_id8361 == other._i_item_id8361));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7832_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7832_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id8361));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7832_payload_rightMajor {
    std::string _i_item_id8361;
};
void SW_JOIN_LEFTSEMI_TD_7832(Table &tbl_Filter_TD_8590_output, Table &tbl_Filter_TD_8692_output, Table &tbl_JOIN_LEFTSEMI_TD_7832_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_id#229 = i_item_id#8361))
    // Left Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Right Table: ListBuffer(i_item_id#8361)
    // Output Table: ListBuffer(i_item_sk#228, i_item_id#229)
    int left_nrow = tbl_Filter_TD_8590_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8692_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7832_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7832_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8692_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8590_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8361_k_n = tbl_Filter_TD_8692_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id8361_k = std::string(_i_item_id8361_k_n.data());
            SW_JOIN_LEFTSEMI_TD_7832_key_rightMajor keyA{_i_item_id8361_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8361_n = tbl_Filter_TD_8692_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id8361 = std::string(_i_item_id8361_n.data());
            SW_JOIN_LEFTSEMI_TD_7832_payload_rightMajor payloadA{_i_item_id8361};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_k_n = tbl_Filter_TD_8590_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229_k = std::string(_i_item_id229_k_n.data());
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7832_key_rightMajor{_i_item_id229_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk228 = tbl_Filter_TD_8590_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Filter_TD_8590_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                tbl_JOIN_LEFTSEMI_TD_7832_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_LEFTSEMI_TD_7832_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7832_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7832_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7832_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7613_key_leftMajor {
    int32_t _ss_addr_sk1212;
    bool operator==(const SW_JOIN_INNER_TD_7613_key_leftMajor& other) const {
        return ((_ss_addr_sk1212 == other._ss_addr_sk1212));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7613_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7613_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk1212));
    }
};
}
struct SW_JOIN_INNER_TD_7613_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_addr_sk1212;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7613_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_7613_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7613_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7613_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_7613_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_7613(Table &tbl_JOIN_INNER_TD_8890_output, Table &tbl_Filter_TD_8400_output, Table &tbl_JOIN_INNER_TD_7613_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#1212 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_8890_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8400_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7613_key_leftMajor, SW_JOIN_INNER_TD_7613_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8890_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_8890_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7613_key_leftMajor keyA{_ss_addr_sk1212_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8890_output.getInt32(i, 0);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8890_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8890_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7613_payload_leftMajor payloadA{_ss_item_sk1208, _ss_addr_sk1212, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8400_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8400_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7613_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ca_address_sk54 = tbl_Filter_TD_8400_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7613_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7613_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7613_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7613_key_rightMajor, SW_JOIN_INNER_TD_7613_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8400_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8400_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7613_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_8400_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7613_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8890_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_8890_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7613_key_rightMajor{_ss_addr_sk1212_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8890_output.getInt32(i, 0);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8890_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8890_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7613_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7613_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7613_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7613_output #Row: " << tbl_JOIN_INNER_TD_7613_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6222_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_6222_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6222_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6222_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_6222_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_6222_key_rightMajor {
    int32_t _i_item_sk8338;
    bool operator==(const SW_JOIN_INNER_TD_6222_key_rightMajor& other) const {
        return ((_i_item_sk8338 == other._i_item_sk8338));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6222_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6222_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk8338));
    }
};
}
struct SW_JOIN_INNER_TD_6222_payload_rightMajor {
    int32_t _i_item_sk8338;
    std::string _i_item_id8339;
};
void SW_JOIN_INNER_TD_6222(Table &tbl_JOIN_INNER_TD_7327_output, Table &tbl_JOIN_LEFTSEMI_TD_7189_output, Table &tbl_JOIN_INNER_TD_6222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#8338))
    // Left Table: ListBuffer(ws_item_sk#732, ws_ext_sales_price#752)
    // Right Table: ListBuffer(i_item_sk#8338, i_item_id#8339)
    // Output Table: ListBuffer(ws_ext_sales_price#752, i_item_id#8339)
    int left_nrow = tbl_JOIN_INNER_TD_7327_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7189_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6222_key_leftMajor, SW_JOIN_INNER_TD_6222_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7327_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_7327_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6222_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_7327_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7327_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6222_payload_leftMajor payloadA{_ws_item_sk732, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7189_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk8338_k = tbl_JOIN_LEFTSEMI_TD_7189_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6222_key_leftMajor{_i_item_sk8338_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_item_sk8338 = tbl_JOIN_LEFTSEMI_TD_7189_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339_n = tbl_JOIN_LEFTSEMI_TD_7189_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id8339 = std::string(_i_item_id8339_n.data());
                tbl_JOIN_INNER_TD_6222_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8339_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6222_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6222_key_rightMajor, SW_JOIN_INNER_TD_6222_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7189_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk8338_k = tbl_JOIN_LEFTSEMI_TD_7189_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6222_key_rightMajor keyA{_i_item_sk8338_k};
            int32_t _i_item_sk8338 = tbl_JOIN_LEFTSEMI_TD_7189_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339_n = tbl_JOIN_LEFTSEMI_TD_7189_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id8339 = std::string(_i_item_id8339_n.data());
            SW_JOIN_INNER_TD_6222_payload_rightMajor payloadA{_i_item_sk8338, _i_item_id8339};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7327_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_7327_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6222_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk8338 = (it->second)._i_item_sk8338;
                std::string _i_item_id8339 = (it->second)._i_item_id8339;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339_n{};
                memcpy(_i_item_id8339_n.data(), (_i_item_id8339).data(), (_i_item_id8339).length());
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_7327_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7327_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8339_n);
                tbl_JOIN_INNER_TD_6222_output.setInt32(r, 0, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6222_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6222_output #Row: " << tbl_JOIN_INNER_TD_6222_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6151_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_6151_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6151_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6151_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_6151_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_6151_key_rightMajor {
    int32_t _i_item_sk8275;
    bool operator==(const SW_JOIN_INNER_TD_6151_key_rightMajor& other) const {
        return ((_i_item_sk8275 == other._i_item_sk8275));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6151_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6151_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk8275));
    }
};
}
struct SW_JOIN_INNER_TD_6151_payload_rightMajor {
    int32_t _i_item_sk8275;
    std::string _i_item_id8276;
};
void SW_JOIN_INNER_TD_6151(Table &tbl_JOIN_INNER_TD_7792_output, Table &tbl_JOIN_LEFTSEMI_TD_7271_output, Table &tbl_JOIN_INNER_TD_6151_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#8275))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(i_item_sk#8275, i_item_id#8276)
    // Output Table: ListBuffer(cs_ext_sales_price#1127, i_item_id#8276)
    int left_nrow = tbl_JOIN_INNER_TD_7792_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7271_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6151_key_leftMajor, SW_JOIN_INNER_TD_6151_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7792_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_7792_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6151_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7792_output.getInt32(i, 0);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7792_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6151_payload_leftMajor payloadA{_cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7271_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk8275_k = tbl_JOIN_LEFTSEMI_TD_7271_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6151_key_leftMajor{_i_item_sk8275_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_item_sk8275 = tbl_JOIN_LEFTSEMI_TD_7271_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276_n = tbl_JOIN_LEFTSEMI_TD_7271_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id8276 = std::string(_i_item_id8276_n.data());
                tbl_JOIN_INNER_TD_6151_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_6151_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8276_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6151_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6151_key_rightMajor, SW_JOIN_INNER_TD_6151_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7271_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk8275_k = tbl_JOIN_LEFTSEMI_TD_7271_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6151_key_rightMajor keyA{_i_item_sk8275_k};
            int32_t _i_item_sk8275 = tbl_JOIN_LEFTSEMI_TD_7271_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276_n = tbl_JOIN_LEFTSEMI_TD_7271_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id8276 = std::string(_i_item_id8276_n.data());
            SW_JOIN_INNER_TD_6151_payload_rightMajor payloadA{_i_item_sk8275, _i_item_id8276};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7792_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_7792_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6151_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk8275 = (it->second)._i_item_sk8275;
                std::string _i_item_id8276 = (it->second)._i_item_id8276;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276_n{};
                memcpy(_i_item_id8276_n.data(), (_i_item_id8276).data(), (_i_item_id8276).length());
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7792_output.getInt32(i, 0);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7792_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6151_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8276_n);
                tbl_JOIN_INNER_TD_6151_output.setInt32(r, 0, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6151_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6151_output #Row: " << tbl_JOIN_INNER_TD_6151_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6287_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_6287_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6287_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6287_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_6287_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_6287_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_6287_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6287_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6287_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_6287_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_6287(Table &tbl_JOIN_INNER_TD_7613_output, Table &tbl_JOIN_LEFTSEMI_TD_7832_output, Table &tbl_JOIN_INNER_TD_6287_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_7613_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7832_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6287_key_leftMajor, SW_JOIN_INNER_TD_6287_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7613_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_7613_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6287_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7613_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7613_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6287_payload_leftMajor payloadA{_ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7832_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_LEFTSEMI_TD_7832_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6287_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_JOIN_LEFTSEMI_TD_7832_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_LEFTSEMI_TD_7832_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_6287_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6287_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6287_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6287_key_rightMajor, SW_JOIN_INNER_TD_6287_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7832_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_LEFTSEMI_TD_7832_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6287_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_JOIN_LEFTSEMI_TD_7832_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_LEFTSEMI_TD_7832_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_6287_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7613_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_7613_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6287_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7613_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7613_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6287_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6287_output.setInt32(r, 0, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6287_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6287_output #Row: " << tbl_JOIN_INNER_TD_6287_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_5244_key;
struct SW_Aggregate_TD_5244_payload {
    int32_t _total_sales8232_sum_0;
};
void SW_Aggregate_TD_5244(Table &tbl_JOIN_INNER_TD_6222_output, Table &tbl_Aggregate_TD_5244_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#8339, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS total_sales#8232)
    // Input: ListBuffer(ws_ext_sales_price#752, i_item_id#8339)
    // Output: ListBuffer(i_item_id#8339, total_sales#8232)
    std::unordered_map<SW_Aggregate_TD_5244_key, SW_Aggregate_TD_5244_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6222_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6222_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339 = tbl_JOIN_INNER_TD_6222_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_5244_key k = std::string(_i_item_id8339.data());
        int64_t _total_sales8232_sum_0 = _ws_ext_sales_price752;
        SW_Aggregate_TD_5244_payload p{_total_sales8232_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales8232_sum_0 + _total_sales8232_sum_0;
            p._total_sales8232_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339{};
        memcpy(_i_item_id8339.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_5244_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id8339);
        int32_t _total_sales8232 = (it.second)._total_sales8232_sum_0;
        tbl_Aggregate_TD_5244_output.setInt32(r, 1, _total_sales8232);
        ++r;
    }
    tbl_Aggregate_TD_5244_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5244_output #Row: " << tbl_Aggregate_TD_5244_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_5579_key;
struct SW_Aggregate_TD_5579_payload {
    int32_t _total_sales8230_sum_0;
};
void SW_Aggregate_TD_5579(Table &tbl_JOIN_INNER_TD_6151_output, Table &tbl_Aggregate_TD_5579_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#8276, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS total_sales#8230)
    // Input: ListBuffer(cs_ext_sales_price#1127, i_item_id#8276)
    // Output: ListBuffer(i_item_id#8276, total_sales#8230)
    std::unordered_map<SW_Aggregate_TD_5579_key, SW_Aggregate_TD_5579_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6151_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_6151_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276 = tbl_JOIN_INNER_TD_6151_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_5579_key k = std::string(_i_item_id8276.data());
        int64_t _total_sales8230_sum_0 = _cs_ext_sales_price1127;
        SW_Aggregate_TD_5579_payload p{_total_sales8230_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales8230_sum_0 + _total_sales8230_sum_0;
            p._total_sales8230_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276{};
        memcpy(_i_item_id8276.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_5579_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id8276);
        int32_t _total_sales8230 = (it.second)._total_sales8230_sum_0;
        tbl_Aggregate_TD_5579_output.setInt32(r, 1, _total_sales8230);
        ++r;
    }
    tbl_Aggregate_TD_5579_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5579_output #Row: " << tbl_Aggregate_TD_5579_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_5946_key;
struct SW_Aggregate_TD_5946_payload {
    int32_t _total_sales8228_sum_0;
};
void SW_Aggregate_TD_5946(Table &tbl_JOIN_INNER_TD_6287_output, Table &tbl_Aggregate_TD_5946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS total_sales#8228)
    // Input: ListBuffer(ss_ext_sales_price#1221, i_item_id#229)
    // Output: ListBuffer(i_item_id#229, total_sales#8228)
    std::unordered_map<SW_Aggregate_TD_5946_key, SW_Aggregate_TD_5946_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6287_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6287_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_6287_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_5946_key k = std::string(_i_item_id229.data());
        int64_t _total_sales8228_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_5946_payload p{_total_sales8228_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales8228_sum_0 + _total_sales8228_sum_0;
            p._total_sales8228_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_5946_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        int32_t _total_sales8228 = (it.second)._total_sales8228_sum_0;
        tbl_Aggregate_TD_5946_output.setInt32(r, 1, _total_sales8228);
        ++r;
    }
    tbl_Aggregate_TD_5946_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5946_output #Row: " << tbl_Aggregate_TD_5946_output.getNumRow() << std::endl;
}

void SW_Union_TD_4316(Table &tbl_Aggregate_TD_5946_output, Table &tbl_Aggregate_TD_5579_output, Table &tbl_Aggregate_TD_5244_output, Table &tbl_Union_TD_4316_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(i_item_id#229, total_sales#8228)
    int r = 0;
    int row0 = tbl_Aggregate_TD_5946_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Union_TD_4316_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4316_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_Union_TD_4316_output.setInt32(r, 1, tbl_Aggregate_TD_5946_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Aggregate_TD_5579_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8276_n = tbl_Union_TD_4316_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4316_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id8276_n);
        tbl_Union_TD_4316_output.setInt32(r, 1, tbl_Aggregate_TD_5579_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Aggregate_TD_5244_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8339_n = tbl_Union_TD_4316_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4316_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id8339_n);
        tbl_Union_TD_4316_output.setInt32(r, 1, tbl_Aggregate_TD_5244_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_4316_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4316_output #Row: " << tbl_Union_TD_4316_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3457_key;
struct SW_Aggregate_TD_3457_payload {
    int32_t _total_sales8227_sum_0;
};
void SW_Aggregate_TD_3457(Table &tbl_Union_TD_4316_output, Table &tbl_Aggregate_TD_3457_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, sum(total_sales#8228) AS total_sales#8227)
    // Input: ListBuffer(i_item_id#229, total_sales#8228)
    // Output: ListBuffer(i_item_id#229, total_sales#8227)
    std::unordered_map<SW_Aggregate_TD_3457_key, SW_Aggregate_TD_3457_payload> ht1;
    int nrow1 = tbl_Union_TD_4316_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Union_TD_4316_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _total_sales8228 = tbl_Union_TD_4316_output.getInt32(i, 1);
        SW_Aggregate_TD_3457_key k = std::string(_i_item_id229.data());
        int64_t _total_sales8227_sum_0 = _total_sales8228;
        SW_Aggregate_TD_3457_payload p{_total_sales8227_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales8227_sum_0 + _total_sales8227_sum_0;
            p._total_sales8227_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_3457_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        int32_t _total_sales8227 = (it.second)._total_sales8227_sum_0;
        tbl_Aggregate_TD_3457_output.setInt32(r, 1, _total_sales8227);
        ++r;
    }
    tbl_Aggregate_TD_3457_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3457_output #Row: " << tbl_Aggregate_TD_3457_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2325(Table &tbl_Aggregate_TD_3457_output, Table &tbl_Sort_TD_2325_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(total_sales#8227 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, total_sales#8227)
    // Output: ListBuffer(i_item_id#229, total_sales#8227)
    struct SW_Sort_TD_2325Row {
        std::string _i_item_id229;
        int32_t _total_sales8227;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2325Row& a, const SW_Sort_TD_2325Row& b) const { return 
 (a._total_sales8227 < b._total_sales8227); 
}
    }SW_Sort_TD_2325_order; 

    int nrow1 = tbl_Aggregate_TD_3457_output.getNumRow();
    std::vector<SW_Sort_TD_2325Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3457_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _total_sales8227 = tbl_Aggregate_TD_3457_output.getInt32(i, 1);
        SW_Sort_TD_2325Row t = {std::string(_i_item_id229.data()),_total_sales8227};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2325_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2325_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        tbl_Sort_TD_2325_output.setInt32(r, 1, it._total_sales8227);
        ++r;
    }
    tbl_Sort_TD_2325_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2325_output #Row: " << tbl_Sort_TD_2325_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1160(Table &tbl_Sort_TD_2325_output, Table &tbl_LocalLimit_TD_1160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, total_sales#8227)
    // Output: ListBuffer(i_item_id#229, total_sales#8227)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2325_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1160_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_LocalLimit_TD_1160_output.setInt32(r, 1, tbl_Sort_TD_2325_output.getInt32(i, 1));
        r++;
    }
    tbl_LocalLimit_TD_1160_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1160_output #Row: " << tbl_LocalLimit_TD_1160_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0357(Table &tbl_LocalLimit_TD_1160_output, Table &tbl_GlobalLimit_TD_0357_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, total_sales#8227)
    // Output: ListBuffer(i_item_id#229, total_sales#8227)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_1160_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_GlobalLimit_TD_0357_output.setInt32(r, 1, tbl_LocalLimit_TD_1160_output.getInt32(i, 1));
        r++;
    }
    tbl_GlobalLimit_TD_0357_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0357_output #Row: " << tbl_GlobalLimit_TD_0357_output.getNumRow() << std::endl;
}

