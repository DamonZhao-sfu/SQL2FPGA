#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9501(Table &tbl_SerializeFromObject_TD_1033_input, Table &tbl_Filter_TD_9501_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#6544) AND isnotnull(d_moy#6546)) AND ((d_year#6544 = 1998) AND (d_moy#6546 = 5))) AND isnotnull(d_date_sk#6538)))
    // Input: ListBuffer(d_date_sk#6538, d_year#6544, d_moy#6546)
    // Output: ListBuffer(d_date_sk#6538)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1033_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6544 = tbl_SerializeFromObject_TD_1033_input.getInt32(i, 1);
        int32_t _d_moy6546 = tbl_SerializeFromObject_TD_1033_input.getInt32(i, 2);
        int32_t _d_date_sk6538 = tbl_SerializeFromObject_TD_1033_input.getInt32(i, 0);
        if ((((_d_year6544!= 0) && (_d_moy6546!= 0)) && ((_d_year6544 == 1998) && (_d_moy6546 == 5))) && (_d_date_sk6538!= 0)) {
            int32_t _d_date_sk6538_t = tbl_SerializeFromObject_TD_1033_input.getInt32(i, 0);
            tbl_Filter_TD_9501_output.setInt32(r, 0, _d_date_sk6538_t);
            r++;
        }
    }
    tbl_Filter_TD_9501_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9501_output #Row: " << tbl_Filter_TD_9501_output.getNumRow() << std::endl;
}

void SW_Filter_TD_945(Table &tbl_SerializeFromObject_TD_10903_input, Table &tbl_Filter_TD_945_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND (isnotnull(ws_bill_addr_sk#736) AND isnotnull(ws_item_sk#732))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10903_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10903_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk736 = tbl_SerializeFromObject_TD_10903_input.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_10903_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && ((_ws_bill_addr_sk736!= 0) && (_ws_item_sk732!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10903_input.getInt32(i, 0);
            tbl_Filter_TD_945_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_10903_input.getInt32(i, 1);
            tbl_Filter_TD_945_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_addr_sk736_t = tbl_SerializeFromObject_TD_10903_input.getInt32(i, 2);
            tbl_Filter_TD_945_output.setInt32(r, 2, _ws_bill_addr_sk736_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_10903_input.getInt32(i, 3);
            tbl_Filter_TD_945_output.setInt32(r, 3, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_945_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_945_output #Row: " << tbl_Filter_TD_945_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9406(Table &tbl_SerializeFromObject_TD_10624_input, Table &tbl_Filter_TD_9406_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#6481) AND isnotnull(d_moy#6483)) AND ((d_year#6481 = 1998) AND (d_moy#6483 = 5))) AND isnotnull(d_date_sk#6475)))
    // Input: ListBuffer(d_date_sk#6475, d_year#6481, d_moy#6483)
    // Output: ListBuffer(d_date_sk#6475)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10624_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6481 = tbl_SerializeFromObject_TD_10624_input.getInt32(i, 1);
        int32_t _d_moy6483 = tbl_SerializeFromObject_TD_10624_input.getInt32(i, 2);
        int32_t _d_date_sk6475 = tbl_SerializeFromObject_TD_10624_input.getInt32(i, 0);
        if ((((_d_year6481!= 0) && (_d_moy6483!= 0)) && ((_d_year6481 == 1998) && (_d_moy6483 == 5))) && (_d_date_sk6475!= 0)) {
            int32_t _d_date_sk6475_t = tbl_SerializeFromObject_TD_10624_input.getInt32(i, 0);
            tbl_Filter_TD_9406_output.setInt32(r, 0, _d_date_sk6475_t);
            r++;
        }
    }
    tbl_Filter_TD_9406_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9406_output #Row: " << tbl_Filter_TD_9406_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9547(Table &tbl_SerializeFromObject_TD_10411_input, Table &tbl_Filter_TD_9547_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND (isnotnull(cs_bill_addr_sk#1110) AND isnotnull(cs_item_sk#1119))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10411_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10411_input.getInt32(i, 0);
        int32_t _cs_bill_addr_sk1110 = tbl_SerializeFromObject_TD_10411_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_10411_input.getInt32(i, 2);
        if ((_cs_sold_date_sk1104!= 0) && ((_cs_bill_addr_sk1110!= 0) && (_cs_item_sk1119!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10411_input.getInt32(i, 0);
            tbl_Filter_TD_9547_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_addr_sk1110_t = tbl_SerializeFromObject_TD_10411_input.getInt32(i, 1);
            tbl_Filter_TD_9547_output.setInt32(r, 1, _cs_bill_addr_sk1110_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_10411_input.getInt32(i, 2);
            tbl_Filter_TD_9547_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_10411_input.getInt32(i, 3);
            tbl_Filter_TD_9547_output.setInt32(r, 3, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_9547_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9547_output #Row: " << tbl_Filter_TD_9547_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9493(Table &tbl_SerializeFromObject_TD_1022_input, Table &tbl_Filter_TD_9493_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 1998) AND (d_moy#128 = 5))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1022_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_1022_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_1022_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_1022_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 1998) && (_d_moy128 == 5))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_1022_input.getInt32(i, 0);
            tbl_Filter_TD_9493_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9493_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9493_output #Row: " << tbl_Filter_TD_9493_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9158(Table &tbl_SerializeFromObject_TD_1049_input, Table &tbl_Filter_TD_9158_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND (isnotnull(ss_addr_sk#1212) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1049_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_1049_input.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_1049_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_1049_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && ((_ss_addr_sk1212!= 0) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_1049_input.getInt32(i, 0);
            tbl_Filter_TD_9158_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_1049_input.getInt32(i, 1);
            tbl_Filter_TD_9158_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_1049_input.getInt32(i, 2);
            tbl_Filter_TD_9158_output.setInt32(r, 2, _ss_addr_sk1212_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_1049_input.getInt32(i, 3);
            tbl_Filter_TD_9158_output.setInt32(r, 3, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_9158_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9158_output #Row: " << tbl_Filter_TD_9158_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8351(Table &tbl_SerializeFromObject_TD_9370_input, Table &tbl_Filter_TD_8351_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#6657) AND (i_category#6657 = Electronics)))
    // Input: ListBuffer(i_manufact_id#6658, i_category#6657)
    // Output: ListBuffer(i_manufact_id#6658)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9370_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6657 = tbl_SerializeFromObject_TD_9370_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnulli_category6657.data()) != "NULL") && (std::string(_i_category6657.data()) == "Electronics")) {
            int32_t _i_manufact_id6658_t = tbl_SerializeFromObject_TD_9370_input.getInt32(i, 0);
            tbl_Filter_TD_8351_output.setInt32(r, 0, _i_manufact_id6658_t);
            r++;
        }
    }
    tbl_Filter_TD_8351_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8351_output #Row: " << tbl_Filter_TD_8351_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8412(Table &tbl_SerializeFromObject_TD_9150_input, Table &tbl_Filter_TD_8412_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#6579))
    // Input: ListBuffer(i_item_sk#6579, i_manufact_id#6592)
    // Output: ListBuffer(i_item_sk#6579, i_manufact_id#6592)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9150_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk6579 = tbl_SerializeFromObject_TD_9150_input.getInt32(i, 0);
        if (_i_item_sk6579!= 0) {
            int32_t _i_item_sk6579_t = tbl_SerializeFromObject_TD_9150_input.getInt32(i, 0);
            tbl_Filter_TD_8412_output.setInt32(r, 0, _i_item_sk6579_t);
            int32_t _i_manufact_id6592_t = tbl_SerializeFromObject_TD_9150_input.getInt32(i, 1);
            tbl_Filter_TD_8412_output.setInt32(r, 1, _i_manufact_id6592_t);
            r++;
        }
    }
    tbl_Filter_TD_8412_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8412_output #Row: " << tbl_Filter_TD_8412_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8837(Table &tbl_SerializeFromObject_TD_9426_input, Table &tbl_Filter_TD_8837_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#6577) AND (ca_gmt_offset#6577 = -5.00)) AND isnotnull(ca_address_sk#6566)))
    // Input: ListBuffer(ca_address_sk#6566, ca_gmt_offset#6577)
    // Output: ListBuffer(ca_address_sk#6566)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9426_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset6577 = tbl_SerializeFromObject_TD_9426_input.getInt32(i, 1);
        int32_t _ca_address_sk6566 = tbl_SerializeFromObject_TD_9426_input.getInt32(i, 0);
        if (((_ca_gmt_offset6577!= 0) && (_ca_gmt_offset6577 == -5.00)) && (_ca_address_sk6566!= 0)) {
            int32_t _ca_address_sk6566_t = tbl_SerializeFromObject_TD_9426_input.getInt32(i, 0);
            tbl_Filter_TD_8837_output.setInt32(r, 0, _ca_address_sk6566_t);
            r++;
        }
    }
    tbl_Filter_TD_8837_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8837_output #Row: " << tbl_Filter_TD_8837_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8325_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_8325_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8325_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8325_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_8325_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_addr_sk736;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_8325_key_rightMajor {
    int32_t _d_date_sk6538;
    bool operator==(const SW_JOIN_INNER_TD_8325_key_rightMajor& other) const {
        return ((_d_date_sk6538 == other._d_date_sk6538));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8325_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8325_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6538));
    }
};
}
struct SW_JOIN_INNER_TD_8325_payload_rightMajor {
    int32_t _d_date_sk6538;
};
void SW_JOIN_INNER_TD_8325(Table &tbl_Filter_TD_945_output, Table &tbl_Filter_TD_9501_output, Table &tbl_JOIN_INNER_TD_8325_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#6538))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Right Table: ListBuffer(d_date_sk#6538)
    // Output Table: ListBuffer(ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int left_nrow = tbl_Filter_TD_945_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9501_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8325_key_leftMajor, SW_JOIN_INNER_TD_8325_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_945_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_945_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8325_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_945_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_945_output.getInt32(i, 1);
            int32_t _ws_bill_addr_sk736 = tbl_Filter_TD_945_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_945_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8325_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_bill_addr_sk736, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9501_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6538_k = tbl_Filter_TD_9501_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8325_key_leftMajor{_d_date_sk6538_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _d_date_sk6538 = tbl_Filter_TD_9501_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 1, _ws_bill_addr_sk736);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 2, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8325_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8325_key_rightMajor, SW_JOIN_INNER_TD_8325_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9501_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6538_k = tbl_Filter_TD_9501_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8325_key_rightMajor keyA{_d_date_sk6538_k};
            int32_t _d_date_sk6538 = tbl_Filter_TD_9501_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8325_payload_rightMajor payloadA{_d_date_sk6538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_945_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_945_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8325_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6538 = (it->second)._d_date_sk6538;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_945_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_945_output.getInt32(i, 1);
                int32_t _ws_bill_addr_sk736 = tbl_Filter_TD_945_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_945_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 1, _ws_bill_addr_sk736);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 2, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8325_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8325_output #Row: " << tbl_JOIN_INNER_TD_8325_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8243(Table &tbl_SerializeFromObject_TD_9897_input, Table &tbl_Filter_TD_8243_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#6635) AND (i_category#6635 = Electronics)))
    // Input: ListBuffer(i_manufact_id#6636, i_category#6635)
    // Output: ListBuffer(i_manufact_id#6636)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9897_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6635 = tbl_SerializeFromObject_TD_9897_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnulli_category6635.data()) != "NULL") && (std::string(_i_category6635.data()) == "Electronics")) {
            int32_t _i_manufact_id6636_t = tbl_SerializeFromObject_TD_9897_input.getInt32(i, 0);
            tbl_Filter_TD_8243_output.setInt32(r, 0, _i_manufact_id6636_t);
            r++;
        }
    }
    tbl_Filter_TD_8243_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8243_output #Row: " << tbl_Filter_TD_8243_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8959(Table &tbl_SerializeFromObject_TD_9764_input, Table &tbl_Filter_TD_8959_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#6516))
    // Input: ListBuffer(i_item_sk#6516, i_manufact_id#6529)
    // Output: ListBuffer(i_item_sk#6516, i_manufact_id#6529)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9764_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk6516 = tbl_SerializeFromObject_TD_9764_input.getInt32(i, 0);
        if (_i_item_sk6516!= 0) {
            int32_t _i_item_sk6516_t = tbl_SerializeFromObject_TD_9764_input.getInt32(i, 0);
            tbl_Filter_TD_8959_output.setInt32(r, 0, _i_item_sk6516_t);
            int32_t _i_manufact_id6529_t = tbl_SerializeFromObject_TD_9764_input.getInt32(i, 1);
            tbl_Filter_TD_8959_output.setInt32(r, 1, _i_manufact_id6529_t);
            r++;
        }
    }
    tbl_Filter_TD_8959_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8959_output #Row: " << tbl_Filter_TD_8959_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8101(Table &tbl_SerializeFromObject_TD_9196_input, Table &tbl_Filter_TD_8101_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#6514) AND (ca_gmt_offset#6514 = -5.00)) AND isnotnull(ca_address_sk#6503)))
    // Input: ListBuffer(ca_address_sk#6503, ca_gmt_offset#6514)
    // Output: ListBuffer(ca_address_sk#6503)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9196_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset6514 = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 1);
        int32_t _ca_address_sk6503 = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 0);
        if (((_ca_gmt_offset6514!= 0) && (_ca_gmt_offset6514 == -5.00)) && (_ca_address_sk6503!= 0)) {
            int32_t _ca_address_sk6503_t = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 0);
            tbl_Filter_TD_8101_output.setInt32(r, 0, _ca_address_sk6503_t);
            r++;
        }
    }
    tbl_Filter_TD_8101_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8101_output #Row: " << tbl_Filter_TD_8101_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8469_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_8469_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8469_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8469_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_8469_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_addr_sk1110;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_8469_key_rightMajor {
    int32_t _d_date_sk6475;
    bool operator==(const SW_JOIN_INNER_TD_8469_key_rightMajor& other) const {
        return ((_d_date_sk6475 == other._d_date_sk6475));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8469_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8469_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6475));
    }
};
}
struct SW_JOIN_INNER_TD_8469_payload_rightMajor {
    int32_t _d_date_sk6475;
};
void SW_JOIN_INNER_TD_8469(Table &tbl_Filter_TD_9547_output, Table &tbl_Filter_TD_9406_output, Table &tbl_JOIN_INNER_TD_8469_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#6475))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(d_date_sk#6475)
    // Output Table: ListBuffer(cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    int left_nrow = tbl_Filter_TD_9547_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9406_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8469_key_leftMajor, SW_JOIN_INNER_TD_8469_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9547_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9547_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8469_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9547_output.getInt32(i, 0);
            int32_t _cs_bill_addr_sk1110 = tbl_Filter_TD_9547_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_9547_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_9547_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8469_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_addr_sk1110, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9406_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6475_k = tbl_Filter_TD_9406_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8469_key_leftMajor{_d_date_sk6475_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_addr_sk1110 = (it->second)._cs_bill_addr_sk1110;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _d_date_sk6475 = tbl_Filter_TD_9406_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8469_output.setInt32(r, 0, _cs_bill_addr_sk1110);
                tbl_JOIN_INNER_TD_8469_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_8469_output.setInt32(r, 2, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8469_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8469_key_rightMajor, SW_JOIN_INNER_TD_8469_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9406_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6475_k = tbl_Filter_TD_9406_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8469_key_rightMajor keyA{_d_date_sk6475_k};
            int32_t _d_date_sk6475 = tbl_Filter_TD_9406_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8469_payload_rightMajor payloadA{_d_date_sk6475};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9547_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9547_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8469_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6475 = (it->second)._d_date_sk6475;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9547_output.getInt32(i, 0);
                int32_t _cs_bill_addr_sk1110 = tbl_Filter_TD_9547_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_9547_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_9547_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8469_output.setInt32(r, 0, _cs_bill_addr_sk1110);
                tbl_JOIN_INNER_TD_8469_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_8469_output.setInt32(r, 2, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8469_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8469_output #Row: " << tbl_JOIN_INNER_TD_8469_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8784(Table &tbl_SerializeFromObject_TD_9558_input, Table &tbl_Filter_TD_8784_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#6613) AND (i_category#6613 = Electronics)))
    // Input: ListBuffer(i_manufact_id#6614, i_category#6613)
    // Output: ListBuffer(i_manufact_id#6614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9558_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6613 = tbl_SerializeFromObject_TD_9558_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnulli_category6613.data()) != "NULL") && (std::string(_i_category6613.data()) == "Electronics")) {
            int32_t _i_manufact_id6614_t = tbl_SerializeFromObject_TD_9558_input.getInt32(i, 0);
            tbl_Filter_TD_8784_output.setInt32(r, 0, _i_manufact_id6614_t);
            r++;
        }
    }
    tbl_Filter_TD_8784_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8784_output #Row: " << tbl_Filter_TD_8784_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8318(Table &tbl_SerializeFromObject_TD_9168_input, Table &tbl_Filter_TD_8318_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_manufact_id#241)
    // Output: ListBuffer(i_item_sk#228, i_manufact_id#241)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9168_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_9168_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_9168_input.getInt32(i, 0);
            tbl_Filter_TD_8318_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_manufact_id241_t = tbl_SerializeFromObject_TD_9168_input.getInt32(i, 1);
            tbl_Filter_TD_8318_output.setInt32(r, 1, _i_manufact_id241_t);
            r++;
        }
    }
    tbl_Filter_TD_8318_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8318_output #Row: " << tbl_Filter_TD_8318_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8992(Table &tbl_SerializeFromObject_TD_9257_input, Table &tbl_Filter_TD_8992_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#65) AND (ca_gmt_offset#65 = -5.00)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_gmt_offset#65)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9257_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset65 = tbl_SerializeFromObject_TD_9257_input.getInt32(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_9257_input.getInt32(i, 0);
        if (((_ca_gmt_offset65!= 0) && (_ca_gmt_offset65 == -5.00)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_9257_input.getInt32(i, 0);
            tbl_Filter_TD_8992_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_8992_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8992_output #Row: " << tbl_Filter_TD_8992_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8553_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8553_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8553_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8553_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8553_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_addr_sk1212;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_8553_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8553_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8553_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8553_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8553_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8553(Table &tbl_Filter_TD_9158_output, Table &tbl_Filter_TD_9493_output, Table &tbl_JOIN_INNER_TD_8553_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int left_nrow = tbl_Filter_TD_9158_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9493_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8553_key_leftMajor, SW_JOIN_INNER_TD_8553_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9158_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9158_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8553_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9158_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9158_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_Filter_TD_9158_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9158_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8553_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_addr_sk1212, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9493_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9493_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8553_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk120 = tbl_Filter_TD_9493_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8553_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8553_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8553_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8553_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8553_key_rightMajor, SW_JOIN_INNER_TD_8553_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9493_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9493_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8553_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9493_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8553_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9158_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9158_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8553_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9158_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9158_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_Filter_TD_9158_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9158_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8553_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8553_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8553_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8553_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8553_output #Row: " << tbl_JOIN_INNER_TD_8553_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_763_key_leftMajor {
    int32_t _i_manufact_id6592;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_763_key_leftMajor& other) const {
        return ((_i_manufact_id6592 == other._i_manufact_id6592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_763_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_763_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_manufact_id6592));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_763_payload_leftMajor {
    int32_t _i_item_sk6579;
    int32_t _i_manufact_id6592;
};
struct SW_JOIN_LEFTSEMI_TD_763_key_rightMajor {
    int32_t _i_manufact_id6658;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_763_key_rightMajor& other) const {
        return ((_i_manufact_id6658 == other._i_manufact_id6658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_763_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_763_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_manufact_id6658));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_763_payload_rightMajor {
    int32_t _i_manufact_id6658;
};
void SW_JOIN_LEFTSEMI_TD_763(Table &tbl_Filter_TD_8412_output, Table &tbl_Filter_TD_8351_output, Table &tbl_JOIN_LEFTSEMI_TD_763_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_manufact_id#6592 = i_manufact_id#6658))
    // Left Table: ListBuffer(i_item_sk#6579, i_manufact_id#6592)
    // Right Table: ListBuffer(i_manufact_id#6658)
    // Output Table: ListBuffer(i_item_sk#6579, i_manufact_id#6592)
    int left_nrow = tbl_Filter_TD_8412_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8351_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_763_key_rightMajor, SW_JOIN_LEFTSEMI_TD_763_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8351_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8412_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_manufact_id6658_k = tbl_Filter_TD_8351_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_763_key_rightMajor keyA{_i_manufact_id6658_k};
            int32_t _i_manufact_id6658 = tbl_Filter_TD_8351_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_763_payload_rightMajor payloadA{_i_manufact_id6658};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_manufact_id6592_k = tbl_Filter_TD_8412_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_763_key_rightMajor{_i_manufact_id6592_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk6579 = tbl_Filter_TD_8412_output.getInt32(i, 0);
                int32_t _i_manufact_id6592 = tbl_Filter_TD_8412_output.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_763_output.setInt32(r, 0, _i_item_sk6579);
                tbl_JOIN_LEFTSEMI_TD_763_output.setInt32(r, 1, _i_manufact_id6592);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_763_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_763_output #Row: " << tbl_JOIN_LEFTSEMI_TD_763_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7939_key_leftMajor {
    int32_t _ws_bill_addr_sk736;
    bool operator==(const SW_JOIN_INNER_TD_7939_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk736 == other._ws_bill_addr_sk736));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7939_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7939_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk736));
    }
};
}
struct SW_JOIN_INNER_TD_7939_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_bill_addr_sk736;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_7939_key_rightMajor {
    int32_t _ca_address_sk6566;
    bool operator==(const SW_JOIN_INNER_TD_7939_key_rightMajor& other) const {
        return ((_ca_address_sk6566 == other._ca_address_sk6566));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7939_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7939_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk6566));
    }
};
}
struct SW_JOIN_INNER_TD_7939_payload_rightMajor {
    int32_t _ca_address_sk6566;
};
void SW_JOIN_INNER_TD_7939(Table &tbl_JOIN_INNER_TD_8325_output, Table &tbl_Filter_TD_8837_output, Table &tbl_JOIN_INNER_TD_7939_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#736 = ca_address_sk#6566))
    // Left Table: ListBuffer(ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Right Table: ListBuffer(ca_address_sk#6566)
    // Output Table: ListBuffer(ws_item_sk#732, ws_ext_sales_price#752)
    int left_nrow = tbl_JOIN_INNER_TD_8325_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8837_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7939_key_leftMajor, SW_JOIN_INNER_TD_7939_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8325_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7939_key_leftMajor keyA{_ws_bill_addr_sk736_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 0);
            int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7939_payload_leftMajor payloadA{_ws_item_sk732, _ws_bill_addr_sk736, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8837_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk6566_k = tbl_Filter_TD_8837_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7939_key_leftMajor{_ca_address_sk6566_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ca_address_sk6566 = tbl_Filter_TD_8837_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7939_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7939_key_rightMajor, SW_JOIN_INNER_TD_7939_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8837_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk6566_k = tbl_Filter_TD_8837_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7939_key_rightMajor keyA{_ca_address_sk6566_k};
            int32_t _ca_address_sk6566 = tbl_Filter_TD_8837_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7939_payload_rightMajor payloadA{_ca_address_sk6566};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8325_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7939_key_rightMajor{_ws_bill_addr_sk736_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk6566 = (it->second)._ca_address_sk6566;
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 0);
                int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7939_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7939_output #Row: " << tbl_JOIN_INNER_TD_7939_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7353_key_leftMajor {
    int32_t _i_manufact_id6529;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7353_key_leftMajor& other) const {
        return ((_i_manufact_id6529 == other._i_manufact_id6529));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7353_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7353_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_manufact_id6529));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7353_payload_leftMajor {
    int32_t _i_item_sk6516;
    int32_t _i_manufact_id6529;
};
struct SW_JOIN_LEFTSEMI_TD_7353_key_rightMajor {
    int32_t _i_manufact_id6636;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7353_key_rightMajor& other) const {
        return ((_i_manufact_id6636 == other._i_manufact_id6636));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7353_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7353_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_manufact_id6636));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7353_payload_rightMajor {
    int32_t _i_manufact_id6636;
};
void SW_JOIN_LEFTSEMI_TD_7353(Table &tbl_Filter_TD_8959_output, Table &tbl_Filter_TD_8243_output, Table &tbl_JOIN_LEFTSEMI_TD_7353_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_manufact_id#6529 = i_manufact_id#6636))
    // Left Table: ListBuffer(i_item_sk#6516, i_manufact_id#6529)
    // Right Table: ListBuffer(i_manufact_id#6636)
    // Output Table: ListBuffer(i_item_sk#6516, i_manufact_id#6529)
    int left_nrow = tbl_Filter_TD_8959_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8243_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7353_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7353_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8243_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8959_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_manufact_id6636_k = tbl_Filter_TD_8243_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7353_key_rightMajor keyA{_i_manufact_id6636_k};
            int32_t _i_manufact_id6636 = tbl_Filter_TD_8243_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7353_payload_rightMajor payloadA{_i_manufact_id6636};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_manufact_id6529_k = tbl_Filter_TD_8959_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7353_key_rightMajor{_i_manufact_id6529_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk6516 = tbl_Filter_TD_8959_output.getInt32(i, 0);
                int32_t _i_manufact_id6529 = tbl_Filter_TD_8959_output.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_7353_output.setInt32(r, 0, _i_item_sk6516);
                tbl_JOIN_LEFTSEMI_TD_7353_output.setInt32(r, 1, _i_manufact_id6529);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7353_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7353_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7353_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7160_key_leftMajor {
    int32_t _cs_bill_addr_sk1110;
    bool operator==(const SW_JOIN_INNER_TD_7160_key_leftMajor& other) const {
        return ((_cs_bill_addr_sk1110 == other._cs_bill_addr_sk1110));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7160_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7160_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_addr_sk1110));
    }
};
}
struct SW_JOIN_INNER_TD_7160_payload_leftMajor {
    int32_t _cs_bill_addr_sk1110;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_7160_key_rightMajor {
    int32_t _ca_address_sk6503;
    bool operator==(const SW_JOIN_INNER_TD_7160_key_rightMajor& other) const {
        return ((_ca_address_sk6503 == other._ca_address_sk6503));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7160_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7160_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk6503));
    }
};
}
struct SW_JOIN_INNER_TD_7160_payload_rightMajor {
    int32_t _ca_address_sk6503;
};
void SW_JOIN_INNER_TD_7160(Table &tbl_JOIN_INNER_TD_8469_output, Table &tbl_Filter_TD_8101_output, Table &tbl_JOIN_INNER_TD_7160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_addr_sk#1110 = ca_address_sk#6503))
    // Left Table: ListBuffer(cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(ca_address_sk#6503)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_ext_sales_price#1127)
    int left_nrow = tbl_JOIN_INNER_TD_8469_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8101_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7160_key_leftMajor, SW_JOIN_INNER_TD_7160_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8469_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_addr_sk1110_k = tbl_JOIN_INNER_TD_8469_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7160_key_leftMajor keyA{_cs_bill_addr_sk1110_k};
            int32_t _cs_bill_addr_sk1110 = tbl_JOIN_INNER_TD_8469_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_8469_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8469_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7160_payload_leftMajor payloadA{_cs_bill_addr_sk1110, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8101_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk6503_k = tbl_Filter_TD_8101_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7160_key_leftMajor{_ca_address_sk6503_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_bill_addr_sk1110 = (it->second)._cs_bill_addr_sk1110;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _ca_address_sk6503 = tbl_Filter_TD_8101_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7160_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7160_output.setInt32(r, 1, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7160_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7160_key_rightMajor, SW_JOIN_INNER_TD_7160_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8101_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk6503_k = tbl_Filter_TD_8101_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7160_key_rightMajor keyA{_ca_address_sk6503_k};
            int32_t _ca_address_sk6503 = tbl_Filter_TD_8101_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7160_payload_rightMajor payloadA{_ca_address_sk6503};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8469_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_addr_sk1110_k = tbl_JOIN_INNER_TD_8469_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7160_key_rightMajor{_cs_bill_addr_sk1110_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk6503 = (it->second)._ca_address_sk6503;
                int32_t _cs_bill_addr_sk1110 = tbl_JOIN_INNER_TD_8469_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_8469_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8469_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7160_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7160_output.setInt32(r, 1, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7160_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7160_output #Row: " << tbl_JOIN_INNER_TD_7160_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7931_key_leftMajor {
    int32_t _i_manufact_id241;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7931_key_leftMajor& other) const {
        return ((_i_manufact_id241 == other._i_manufact_id241));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7931_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7931_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_manufact_id241));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7931_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_manufact_id241;
};
struct SW_JOIN_LEFTSEMI_TD_7931_key_rightMajor {
    int32_t _i_manufact_id6614;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7931_key_rightMajor& other) const {
        return ((_i_manufact_id6614 == other._i_manufact_id6614));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7931_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7931_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_manufact_id6614));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7931_payload_rightMajor {
    int32_t _i_manufact_id6614;
};
void SW_JOIN_LEFTSEMI_TD_7931(Table &tbl_Filter_TD_8318_output, Table &tbl_Filter_TD_8784_output, Table &tbl_JOIN_LEFTSEMI_TD_7931_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_manufact_id#241 = i_manufact_id#6614))
    // Left Table: ListBuffer(i_item_sk#228, i_manufact_id#241)
    // Right Table: ListBuffer(i_manufact_id#6614)
    // Output Table: ListBuffer(i_item_sk#228, i_manufact_id#241)
    int left_nrow = tbl_Filter_TD_8318_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8784_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7931_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7931_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8784_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8318_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_manufact_id6614_k = tbl_Filter_TD_8784_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7931_key_rightMajor keyA{_i_manufact_id6614_k};
            int32_t _i_manufact_id6614 = tbl_Filter_TD_8784_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7931_payload_rightMajor payloadA{_i_manufact_id6614};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_manufact_id241_k = tbl_Filter_TD_8318_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7931_key_rightMajor{_i_manufact_id241_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk228 = tbl_Filter_TD_8318_output.getInt32(i, 0);
                int32_t _i_manufact_id241 = tbl_Filter_TD_8318_output.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_7931_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_LEFTSEMI_TD_7931_output.setInt32(r, 1, _i_manufact_id241);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7931_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7931_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7931_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7265_key_leftMajor {
    int32_t _ss_addr_sk1212;
    bool operator==(const SW_JOIN_INNER_TD_7265_key_leftMajor& other) const {
        return ((_ss_addr_sk1212 == other._ss_addr_sk1212));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7265_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7265_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk1212));
    }
};
}
struct SW_JOIN_INNER_TD_7265_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_addr_sk1212;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7265_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_7265_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7265_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7265_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_7265_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_7265(Table &tbl_JOIN_INNER_TD_8553_output, Table &tbl_Filter_TD_8992_output, Table &tbl_JOIN_INNER_TD_7265_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#1212 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_8553_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8992_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7265_key_leftMajor, SW_JOIN_INNER_TD_7265_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8553_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_8553_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7265_key_leftMajor keyA{_ss_addr_sk1212_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8553_output.getInt32(i, 0);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8553_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8553_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7265_payload_leftMajor payloadA{_ss_item_sk1208, _ss_addr_sk1212, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8992_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8992_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7265_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ca_address_sk54 = tbl_Filter_TD_8992_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7265_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7265_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7265_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7265_key_rightMajor, SW_JOIN_INNER_TD_7265_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8992_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8992_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7265_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_8992_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7265_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8553_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_8553_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7265_key_rightMajor{_ss_addr_sk1212_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8553_output.getInt32(i, 0);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8553_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8553_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7265_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7265_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7265_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7265_output #Row: " << tbl_JOIN_INNER_TD_7265_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6642_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_6642_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6642_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6642_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_6642_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_6642_key_rightMajor {
    int32_t _i_item_sk6579;
    bool operator==(const SW_JOIN_INNER_TD_6642_key_rightMajor& other) const {
        return ((_i_item_sk6579 == other._i_item_sk6579));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6642_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6642_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6579));
    }
};
}
struct SW_JOIN_INNER_TD_6642_payload_rightMajor {
    int32_t _i_item_sk6579;
    int32_t _i_manufact_id6592;
};
void SW_JOIN_INNER_TD_6642(Table &tbl_JOIN_INNER_TD_7939_output, Table &tbl_JOIN_LEFTSEMI_TD_763_output, Table &tbl_JOIN_INNER_TD_6642_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#6579))
    // Left Table: ListBuffer(ws_item_sk#732, ws_ext_sales_price#752)
    // Right Table: ListBuffer(i_item_sk#6579, i_manufact_id#6592)
    // Output Table: ListBuffer(ws_ext_sales_price#752, i_manufact_id#6592)
    int left_nrow = tbl_JOIN_INNER_TD_7939_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_763_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6642_key_leftMajor, SW_JOIN_INNER_TD_6642_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7939_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6642_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6642_payload_leftMajor payloadA{_ws_item_sk732, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_763_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6579_k = tbl_JOIN_LEFTSEMI_TD_763_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6642_key_leftMajor{_i_item_sk6579_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_item_sk6579 = tbl_JOIN_LEFTSEMI_TD_763_output.getInt32(i, 0);
                int32_t _i_manufact_id6592 = tbl_JOIN_LEFTSEMI_TD_763_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6642_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6642_output.setInt32(r, 1, _i_manufact_id6592);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6642_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6642_key_rightMajor, SW_JOIN_INNER_TD_6642_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_763_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6579_k = tbl_JOIN_LEFTSEMI_TD_763_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6642_key_rightMajor keyA{_i_item_sk6579_k};
            int32_t _i_item_sk6579 = tbl_JOIN_LEFTSEMI_TD_763_output.getInt32(i, 0);
            int32_t _i_manufact_id6592 = tbl_JOIN_LEFTSEMI_TD_763_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6642_payload_rightMajor payloadA{_i_item_sk6579, _i_manufact_id6592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7939_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6642_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6579 = (it->second)._i_item_sk6579;
                int32_t _i_manufact_id6592 = (it->second)._i_manufact_id6592;
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6642_output.setInt32(r, 1, _i_manufact_id6592);
                tbl_JOIN_INNER_TD_6642_output.setInt32(r, 0, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6642_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6642_output #Row: " << tbl_JOIN_INNER_TD_6642_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6880_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_6880_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6880_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6880_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_6880_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_6880_key_rightMajor {
    int32_t _i_item_sk6516;
    bool operator==(const SW_JOIN_INNER_TD_6880_key_rightMajor& other) const {
        return ((_i_item_sk6516 == other._i_item_sk6516));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6880_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6880_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6516));
    }
};
}
struct SW_JOIN_INNER_TD_6880_payload_rightMajor {
    int32_t _i_item_sk6516;
    int32_t _i_manufact_id6529;
};
void SW_JOIN_INNER_TD_6880(Table &tbl_JOIN_INNER_TD_7160_output, Table &tbl_JOIN_LEFTSEMI_TD_7353_output, Table &tbl_JOIN_INNER_TD_6880_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#6516))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(i_item_sk#6516, i_manufact_id#6529)
    // Output Table: ListBuffer(cs_ext_sales_price#1127, i_manufact_id#6529)
    int left_nrow = tbl_JOIN_INNER_TD_7160_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7353_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6880_key_leftMajor, SW_JOIN_INNER_TD_6880_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7160_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_7160_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6880_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7160_output.getInt32(i, 0);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7160_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6880_payload_leftMajor payloadA{_cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7353_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6516_k = tbl_JOIN_LEFTSEMI_TD_7353_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6880_key_leftMajor{_i_item_sk6516_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_item_sk6516 = tbl_JOIN_LEFTSEMI_TD_7353_output.getInt32(i, 0);
                int32_t _i_manufact_id6529 = tbl_JOIN_LEFTSEMI_TD_7353_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6880_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_6880_output.setInt32(r, 1, _i_manufact_id6529);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6880_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6880_key_rightMajor, SW_JOIN_INNER_TD_6880_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7353_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6516_k = tbl_JOIN_LEFTSEMI_TD_7353_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6880_key_rightMajor keyA{_i_item_sk6516_k};
            int32_t _i_item_sk6516 = tbl_JOIN_LEFTSEMI_TD_7353_output.getInt32(i, 0);
            int32_t _i_manufact_id6529 = tbl_JOIN_LEFTSEMI_TD_7353_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6880_payload_rightMajor payloadA{_i_item_sk6516, _i_manufact_id6529};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7160_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_7160_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6880_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6516 = (it->second)._i_item_sk6516;
                int32_t _i_manufact_id6529 = (it->second)._i_manufact_id6529;
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7160_output.getInt32(i, 0);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7160_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6880_output.setInt32(r, 1, _i_manufact_id6529);
                tbl_JOIN_INNER_TD_6880_output.setInt32(r, 0, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6880_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6880_output #Row: " << tbl_JOIN_INNER_TD_6880_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6878_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_6878_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6878_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6878_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_6878_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_6878_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_6878_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6878_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6878_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_6878_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_manufact_id241;
};
void SW_JOIN_INNER_TD_6878(Table &tbl_JOIN_INNER_TD_7265_output, Table &tbl_JOIN_LEFTSEMI_TD_7931_output, Table &tbl_JOIN_INNER_TD_6878_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_manufact_id#241)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, i_manufact_id#241)
    int left_nrow = tbl_JOIN_INNER_TD_7265_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7931_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6878_key_leftMajor, SW_JOIN_INNER_TD_6878_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7265_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_7265_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6878_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7265_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7265_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6878_payload_leftMajor payloadA{_ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7931_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_LEFTSEMI_TD_7931_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6878_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_JOIN_LEFTSEMI_TD_7931_output.getInt32(i, 0);
                int32_t _i_manufact_id241 = tbl_JOIN_LEFTSEMI_TD_7931_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6878_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6878_output.setInt32(r, 1, _i_manufact_id241);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6878_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6878_key_rightMajor, SW_JOIN_INNER_TD_6878_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7931_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_LEFTSEMI_TD_7931_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6878_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_JOIN_LEFTSEMI_TD_7931_output.getInt32(i, 0);
            int32_t _i_manufact_id241 = tbl_JOIN_LEFTSEMI_TD_7931_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6878_payload_rightMajor payloadA{_i_item_sk228, _i_manufact_id241};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7265_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_7265_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6878_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7265_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7265_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6878_output.setInt32(r, 1, _i_manufact_id241);
                tbl_JOIN_INNER_TD_6878_output.setInt32(r, 0, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6878_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6878_output #Row: " << tbl_JOIN_INNER_TD_6878_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_5389_key;
struct SW_Aggregate_TD_5389_payload {
    int32_t _total_sales6473_sum_0;
};
void SW_Aggregate_TD_5389(Table &tbl_JOIN_INNER_TD_6642_output, Table &tbl_Aggregate_TD_5389_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_manufact_id#6592, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS total_sales#6473)
    // Input: ListBuffer(ws_ext_sales_price#752, i_manufact_id#6592)
    // Output: ListBuffer(i_manufact_id#6592, total_sales#6473)
    std::unordered_map<SW_Aggregate_TD_5389_key, SW_Aggregate_TD_5389_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6642_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6642_output.getInt32(i, 0);
        int32_t _i_manufact_id6592 = tbl_JOIN_INNER_TD_6642_output.getInt32(i, 1);
        SW_Aggregate_TD_5389_key k = _i_manufact_id6592;
        int64_t _total_sales6473_sum_0 = _ws_ext_sales_price752;
        SW_Aggregate_TD_5389_payload p{_total_sales6473_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales6473_sum_0 + _total_sales6473_sum_0;
            p._total_sales6473_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5389_output.setInt32(r, 0, (it.first));
        int32_t _total_sales6473 = (it.second)._total_sales6473_sum_0;
        tbl_Aggregate_TD_5389_output.setInt32(r, 1, _total_sales6473);
        ++r;
    }
    tbl_Aggregate_TD_5389_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5389_output #Row: " << tbl_Aggregate_TD_5389_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_553_key;
struct SW_Aggregate_TD_553_payload {
    int32_t _total_sales6471_sum_0;
};
void SW_Aggregate_TD_553(Table &tbl_JOIN_INNER_TD_6880_output, Table &tbl_Aggregate_TD_553_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_manufact_id#6529, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS total_sales#6471)
    // Input: ListBuffer(cs_ext_sales_price#1127, i_manufact_id#6529)
    // Output: ListBuffer(i_manufact_id#6529, total_sales#6471)
    std::unordered_map<SW_Aggregate_TD_553_key, SW_Aggregate_TD_553_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6880_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_6880_output.getInt32(i, 0);
        int32_t _i_manufact_id6529 = tbl_JOIN_INNER_TD_6880_output.getInt32(i, 1);
        SW_Aggregate_TD_553_key k = _i_manufact_id6529;
        int64_t _total_sales6471_sum_0 = _cs_ext_sales_price1127;
        SW_Aggregate_TD_553_payload p{_total_sales6471_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales6471_sum_0 + _total_sales6471_sum_0;
            p._total_sales6471_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_553_output.setInt32(r, 0, (it.first));
        int32_t _total_sales6471 = (it.second)._total_sales6471_sum_0;
        tbl_Aggregate_TD_553_output.setInt32(r, 1, _total_sales6471);
        ++r;
    }
    tbl_Aggregate_TD_553_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_553_output #Row: " << tbl_Aggregate_TD_553_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_5120_key;
struct SW_Aggregate_TD_5120_payload {
    int32_t _total_sales6469_sum_0;
};
void SW_Aggregate_TD_5120(Table &tbl_JOIN_INNER_TD_6878_output, Table &tbl_Aggregate_TD_5120_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_manufact_id#241, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS total_sales#6469)
    // Input: ListBuffer(ss_ext_sales_price#1221, i_manufact_id#241)
    // Output: ListBuffer(i_manufact_id#241, total_sales#6469)
    std::unordered_map<SW_Aggregate_TD_5120_key, SW_Aggregate_TD_5120_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6878_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6878_output.getInt32(i, 0);
        int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_6878_output.getInt32(i, 1);
        SW_Aggregate_TD_5120_key k = _i_manufact_id241;
        int64_t _total_sales6469_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_5120_payload p{_total_sales6469_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales6469_sum_0 + _total_sales6469_sum_0;
            p._total_sales6469_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5120_output.setInt32(r, 0, (it.first));
        int32_t _total_sales6469 = (it.second)._total_sales6469_sum_0;
        tbl_Aggregate_TD_5120_output.setInt32(r, 1, _total_sales6469);
        ++r;
    }
    tbl_Aggregate_TD_5120_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5120_output #Row: " << tbl_Aggregate_TD_5120_output.getNumRow() << std::endl;
}

void SW_Union_TD_4116(Table &tbl_Aggregate_TD_5120_output, Table &tbl_Aggregate_TD_553_output, Table &tbl_Aggregate_TD_5389_output, Table &tbl_Union_TD_4116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(i_manufact_id#241, total_sales#6469)
    int r = 0;
    int row0 = tbl_Aggregate_TD_5120_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_4116_output.setInt32(r, 0, tbl_Aggregate_TD_5120_output.getInt32(i, 0));
        tbl_Union_TD_4116_output.setInt32(r, 1, tbl_Aggregate_TD_5120_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Aggregate_TD_553_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_4116_output.setInt32(r, 0, tbl_Aggregate_TD_553_output.getInt32(i, 0));
        tbl_Union_TD_4116_output.setInt32(r, 1, tbl_Aggregate_TD_553_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Aggregate_TD_5389_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_4116_output.setInt32(r, 0, tbl_Aggregate_TD_5389_output.getInt32(i, 0));
        tbl_Union_TD_4116_output.setInt32(r, 1, tbl_Aggregate_TD_5389_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_4116_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4116_output #Row: " << tbl_Union_TD_4116_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_3865_key;
struct SW_Aggregate_TD_3865_payload {
    int32_t _total_sales6468_sum_0;
};
void SW_Aggregate_TD_3865(Table &tbl_Union_TD_4116_output, Table &tbl_Aggregate_TD_3865_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_manufact_id#241, sum(total_sales#6469) AS total_sales#6468)
    // Input: ListBuffer(i_manufact_id#241, total_sales#6469)
    // Output: ListBuffer(i_manufact_id#241, total_sales#6468)
    std::unordered_map<SW_Aggregate_TD_3865_key, SW_Aggregate_TD_3865_payload> ht1;
    int nrow1 = tbl_Union_TD_4116_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_Union_TD_4116_output.getInt32(i, 0);
        int32_t _total_sales6469 = tbl_Union_TD_4116_output.getInt32(i, 1);
        SW_Aggregate_TD_3865_key k = _i_manufact_id241;
        int64_t _total_sales6468_sum_0 = _total_sales6469;
        SW_Aggregate_TD_3865_payload p{_total_sales6468_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales6468_sum_0 + _total_sales6468_sum_0;
            p._total_sales6468_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_3865_output.setInt32(r, 0, (it.first));
        int32_t _total_sales6468 = (it.second)._total_sales6468_sum_0;
        tbl_Aggregate_TD_3865_output.setInt32(r, 1, _total_sales6468);
        ++r;
    }
    tbl_Aggregate_TD_3865_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3865_output #Row: " << tbl_Aggregate_TD_3865_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2533(Table &tbl_Aggregate_TD_3865_output, Table &tbl_Sort_TD_2533_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(total_sales#6468 ASC NULLS FIRST)
    // Input: ListBuffer(i_manufact_id#241, total_sales#6468)
    // Output: ListBuffer(i_manufact_id#241, total_sales#6468)
    struct SW_Sort_TD_2533Row {
        int32_t _i_manufact_id241;
        int32_t _total_sales6468;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2533Row& a, const SW_Sort_TD_2533Row& b) const { return 
 (a._total_sales6468 < b._total_sales6468); 
}
    }SW_Sort_TD_2533_order; 

    int nrow1 = tbl_Aggregate_TD_3865_output.getNumRow();
    std::vector<SW_Sort_TD_2533Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_3865_output.getInt32(i, 0);
        int32_t _total_sales6468 = tbl_Aggregate_TD_3865_output.getInt32(i, 1);
        SW_Sort_TD_2533Row t = {_i_manufact_id241,_total_sales6468};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2533_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2533_output.setInt32(r, 0, it._i_manufact_id241);
        tbl_Sort_TD_2533_output.setInt32(r, 1, it._total_sales6468);
        ++r;
    }
    tbl_Sort_TD_2533_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2533_output #Row: " << tbl_Sort_TD_2533_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1633(Table &tbl_Sort_TD_2533_output, Table &tbl_LocalLimit_TD_1633_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_manufact_id#241, total_sales#6468)
    // Output: ListBuffer(i_manufact_id#241, total_sales#6468)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1633_output.setInt32(r, 0, tbl_Sort_TD_2533_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1633_output.setInt32(r, 1, tbl_Sort_TD_2533_output.getInt32(i, 1));
        r++;
    }
    tbl_LocalLimit_TD_1633_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1633_output #Row: " << tbl_LocalLimit_TD_1633_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0447(Table &tbl_LocalLimit_TD_1633_output, Table &tbl_GlobalLimit_TD_0447_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_manufact_id#241, total_sales#6468)
    // Output: ListBuffer(i_manufact_id#241, total_sales#6468)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0447_output.setInt32(r, 0, tbl_LocalLimit_TD_1633_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0447_output.setInt32(r, 1, tbl_LocalLimit_TD_1633_output.getInt32(i, 1));
        r++;
    }
    tbl_GlobalLimit_TD_0447_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0447_output #Row: " << tbl_GlobalLimit_TD_0447_output.getNumRow() << std::endl;
}

