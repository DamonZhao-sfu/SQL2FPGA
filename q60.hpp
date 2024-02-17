#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9722(Table &tbl_SerializeFromObject_TD_10711_input, Table &tbl_Filter_TD_9722_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#4112) AND isnotnull(d_moy#4114)) AND ((d_year#4112 = 1998) AND (d_moy#4114 = 9))) AND isnotnull(d_date_sk#4106)))
    // Input: ListBuffer(d_date_sk#4106, d_year#4112, d_moy#4114)
    // Output: ListBuffer(d_date_sk#4106)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10711_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4112 = tbl_SerializeFromObject_TD_10711_input.getInt32(i, 1);
        int32_t _d_moy4114 = tbl_SerializeFromObject_TD_10711_input.getInt32(i, 2);
        int32_t _d_date_sk4106 = tbl_SerializeFromObject_TD_10711_input.getInt32(i, 0);
        if ((((_d_year4112!= 0) && (_d_moy4114!= 0)) && ((_d_year4112 == 1998) && (_d_moy4114 == 9))) && (_d_date_sk4106!= 0)) {
            int32_t _d_date_sk4106_t = tbl_SerializeFromObject_TD_10711_input.getInt32(i, 0);
            tbl_Filter_TD_9722_output.setInt32(r, 0, _d_date_sk4106_t);
            r++;
        }
    }
    tbl_Filter_TD_9722_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9722_output #Row: " << tbl_Filter_TD_9722_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9384(Table &tbl_SerializeFromObject_TD_10354_input, Table &tbl_Filter_TD_9384_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND (isnotnull(ws_bill_addr_sk#736) AND isnotnull(ws_item_sk#732))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10354_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10354_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk736 = tbl_SerializeFromObject_TD_10354_input.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_10354_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && ((_ws_bill_addr_sk736!= 0) && (_ws_item_sk732!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10354_input.getInt32(i, 0);
            tbl_Filter_TD_9384_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_10354_input.getInt32(i, 1);
            tbl_Filter_TD_9384_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_addr_sk736_t = tbl_SerializeFromObject_TD_10354_input.getInt32(i, 2);
            tbl_Filter_TD_9384_output.setInt32(r, 2, _ws_bill_addr_sk736_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_10354_input.getInt32(i, 3);
            tbl_Filter_TD_9384_output.setInt32(r, 3, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_9384_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9384_output #Row: " << tbl_Filter_TD_9384_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9467(Table &tbl_SerializeFromObject_TD_10951_input, Table &tbl_Filter_TD_9467_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#4049) AND isnotnull(d_moy#4051)) AND ((d_year#4049 = 1998) AND (d_moy#4051 = 9))) AND isnotnull(d_date_sk#4043)))
    // Input: ListBuffer(d_date_sk#4043, d_year#4049, d_moy#4051)
    // Output: ListBuffer(d_date_sk#4043)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10951_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4049 = tbl_SerializeFromObject_TD_10951_input.getInt32(i, 1);
        int32_t _d_moy4051 = tbl_SerializeFromObject_TD_10951_input.getInt32(i, 2);
        int32_t _d_date_sk4043 = tbl_SerializeFromObject_TD_10951_input.getInt32(i, 0);
        if ((((_d_year4049!= 0) && (_d_moy4051!= 0)) && ((_d_year4049 == 1998) && (_d_moy4051 == 9))) && (_d_date_sk4043!= 0)) {
            int32_t _d_date_sk4043_t = tbl_SerializeFromObject_TD_10951_input.getInt32(i, 0);
            tbl_Filter_TD_9467_output.setInt32(r, 0, _d_date_sk4043_t);
            r++;
        }
    }
    tbl_Filter_TD_9467_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9467_output #Row: " << tbl_Filter_TD_9467_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9634(Table &tbl_SerializeFromObject_TD_10726_input, Table &tbl_Filter_TD_9634_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND (isnotnull(cs_bill_addr_sk#1110) AND isnotnull(cs_item_sk#1119))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10726_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10726_input.getInt32(i, 0);
        int32_t _cs_bill_addr_sk1110 = tbl_SerializeFromObject_TD_10726_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_10726_input.getInt32(i, 2);
        if ((_cs_sold_date_sk1104!= 0) && ((_cs_bill_addr_sk1110!= 0) && (_cs_item_sk1119!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10726_input.getInt32(i, 0);
            tbl_Filter_TD_9634_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_addr_sk1110_t = tbl_SerializeFromObject_TD_10726_input.getInt32(i, 1);
            tbl_Filter_TD_9634_output.setInt32(r, 1, _cs_bill_addr_sk1110_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_10726_input.getInt32(i, 2);
            tbl_Filter_TD_9634_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_10726_input.getInt32(i, 3);
            tbl_Filter_TD_9634_output.setInt32(r, 3, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_9634_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9634_output #Row: " << tbl_Filter_TD_9634_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9960(Table &tbl_SerializeFromObject_TD_10454_input, Table &tbl_Filter_TD_9960_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 1998) AND (d_moy#128 = 9))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10454_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10454_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_10454_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10454_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 1998) && (_d_moy128 == 9))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10454_input.getInt32(i, 0);
            tbl_Filter_TD_9960_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9960_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9960_output #Row: " << tbl_Filter_TD_9960_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9721(Table &tbl_SerializeFromObject_TD_1085_input, Table &tbl_Filter_TD_9721_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND (isnotnull(ss_addr_sk#1212) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1085_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_1085_input.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_1085_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_1085_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && ((_ss_addr_sk1212!= 0) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_1085_input.getInt32(i, 0);
            tbl_Filter_TD_9721_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_1085_input.getInt32(i, 1);
            tbl_Filter_TD_9721_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_1085_input.getInt32(i, 2);
            tbl_Filter_TD_9721_output.setInt32(r, 2, _ss_addr_sk1212_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_1085_input.getInt32(i, 3);
            tbl_Filter_TD_9721_output.setInt32(r, 3, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_9721_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9721_output #Row: " << tbl_Filter_TD_9721_output.getNumRow() << std::endl;
}

void SW_Filter_TD_810(Table &tbl_SerializeFromObject_TD_9251_input, Table &tbl_Filter_TD_810_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#4225) AND (i_category#4225 = Music)))
    // Input: ListBuffer(i_item_id#4214, i_category#4225)
    // Output: ListBuffer(i_item_id#4214)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9251_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4225 = tbl_SerializeFromObject_TD_9251_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnulli_category4225.data()) != "NULL") && (std::string(_i_category4225.data()) == "Music")) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4214_t = tbl_SerializeFromObject_TD_9251_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_810_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id4214_t);
            r++;
        }
    }
    tbl_Filter_TD_810_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_810_output #Row: " << tbl_Filter_TD_810_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8155(Table &tbl_SerializeFromObject_TD_9413_input, Table &tbl_Filter_TD_8155_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#4147))
    // Input: ListBuffer(i_item_sk#4147, i_item_id#4148)
    // Output: ListBuffer(i_item_sk#4147, i_item_id#4148)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9413_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4147 = tbl_SerializeFromObject_TD_9413_input.getInt32(i, 0);
        if (_i_item_sk4147!= 0) {
            int32_t _i_item_sk4147_t = tbl_SerializeFromObject_TD_9413_input.getInt32(i, 0);
            tbl_Filter_TD_8155_output.setInt32(r, 0, _i_item_sk4147_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148_t = tbl_SerializeFromObject_TD_9413_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8155_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id4148_t);
            r++;
        }
    }
    tbl_Filter_TD_8155_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8155_output #Row: " << tbl_Filter_TD_8155_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8937(Table &tbl_SerializeFromObject_TD_9795_input, Table &tbl_Filter_TD_8937_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#4145) AND (ca_gmt_offset#4145 = -5.00)) AND isnotnull(ca_address_sk#4134)))
    // Input: ListBuffer(ca_address_sk#4134, ca_gmt_offset#4145)
    // Output: ListBuffer(ca_address_sk#4134)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9795_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset4145 = tbl_SerializeFromObject_TD_9795_input.getInt32(i, 1);
        int32_t _ca_address_sk4134 = tbl_SerializeFromObject_TD_9795_input.getInt32(i, 0);
        if (((_ca_gmt_offset4145!= 0) && (_ca_gmt_offset4145 == -5.00)) && (_ca_address_sk4134!= 0)) {
            int32_t _ca_address_sk4134_t = tbl_SerializeFromObject_TD_9795_input.getInt32(i, 0);
            tbl_Filter_TD_8937_output.setInt32(r, 0, _ca_address_sk4134_t);
            r++;
        }
    }
    tbl_Filter_TD_8937_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8937_output #Row: " << tbl_Filter_TD_8937_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8559_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_8559_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8559_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8559_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_8559_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_addr_sk736;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_8559_key_rightMajor {
    int32_t _d_date_sk4106;
    bool operator==(const SW_JOIN_INNER_TD_8559_key_rightMajor& other) const {
        return ((_d_date_sk4106 == other._d_date_sk4106));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8559_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8559_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4106));
    }
};
}
struct SW_JOIN_INNER_TD_8559_payload_rightMajor {
    int32_t _d_date_sk4106;
};
void SW_JOIN_INNER_TD_8559(Table &tbl_Filter_TD_9384_output, Table &tbl_Filter_TD_9722_output, Table &tbl_JOIN_INNER_TD_8559_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#4106))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Right Table: ListBuffer(d_date_sk#4106)
    // Output Table: ListBuffer(ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int left_nrow = tbl_Filter_TD_9384_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9722_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8559_key_leftMajor, SW_JOIN_INNER_TD_8559_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9384_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9384_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8559_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9384_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_9384_output.getInt32(i, 1);
            int32_t _ws_bill_addr_sk736 = tbl_Filter_TD_9384_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_9384_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8559_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_bill_addr_sk736, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9722_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4106_k = tbl_Filter_TD_9722_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8559_key_leftMajor{_d_date_sk4106_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _d_date_sk4106 = tbl_Filter_TD_9722_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8559_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_8559_output.setInt32(r, 1, _ws_bill_addr_sk736);
                tbl_JOIN_INNER_TD_8559_output.setInt32(r, 2, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8559_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8559_key_rightMajor, SW_JOIN_INNER_TD_8559_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9722_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4106_k = tbl_Filter_TD_9722_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8559_key_rightMajor keyA{_d_date_sk4106_k};
            int32_t _d_date_sk4106 = tbl_Filter_TD_9722_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8559_payload_rightMajor payloadA{_d_date_sk4106};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9384_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_9384_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8559_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4106 = (it->second)._d_date_sk4106;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9384_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_9384_output.getInt32(i, 1);
                int32_t _ws_bill_addr_sk736 = tbl_Filter_TD_9384_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_9384_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8559_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_8559_output.setInt32(r, 1, _ws_bill_addr_sk736);
                tbl_JOIN_INNER_TD_8559_output.setInt32(r, 2, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8559_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8559_output #Row: " << tbl_JOIN_INNER_TD_8559_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8692(Table &tbl_SerializeFromObject_TD_9187_input, Table &tbl_Filter_TD_8692_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#4203) AND (i_category#4203 = Music)))
    // Input: ListBuffer(i_item_id#4192, i_category#4203)
    // Output: ListBuffer(i_item_id#4192)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9187_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4203 = tbl_SerializeFromObject_TD_9187_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnulli_category4203.data()) != "NULL") && (std::string(_i_category4203.data()) == "Music")) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4192_t = tbl_SerializeFromObject_TD_9187_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8692_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id4192_t);
            r++;
        }
    }
    tbl_Filter_TD_8692_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8692_output #Row: " << tbl_Filter_TD_8692_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8855(Table &tbl_SerializeFromObject_TD_9987_input, Table &tbl_Filter_TD_8855_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#4084))
    // Input: ListBuffer(i_item_sk#4084, i_item_id#4085)
    // Output: ListBuffer(i_item_sk#4084, i_item_id#4085)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9987_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4084 = tbl_SerializeFromObject_TD_9987_input.getInt32(i, 0);
        if (_i_item_sk4084!= 0) {
            int32_t _i_item_sk4084_t = tbl_SerializeFromObject_TD_9987_input.getInt32(i, 0);
            tbl_Filter_TD_8855_output.setInt32(r, 0, _i_item_sk4084_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085_t = tbl_SerializeFromObject_TD_9987_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8855_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id4085_t);
            r++;
        }
    }
    tbl_Filter_TD_8855_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8855_output #Row: " << tbl_Filter_TD_8855_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8205(Table &tbl_SerializeFromObject_TD_9132_input, Table &tbl_Filter_TD_8205_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#4082) AND (ca_gmt_offset#4082 = -5.00)) AND isnotnull(ca_address_sk#4071)))
    // Input: ListBuffer(ca_address_sk#4071, ca_gmt_offset#4082)
    // Output: ListBuffer(ca_address_sk#4071)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9132_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset4082 = tbl_SerializeFromObject_TD_9132_input.getInt32(i, 1);
        int32_t _ca_address_sk4071 = tbl_SerializeFromObject_TD_9132_input.getInt32(i, 0);
        if (((_ca_gmt_offset4082!= 0) && (_ca_gmt_offset4082 == -5.00)) && (_ca_address_sk4071!= 0)) {
            int32_t _ca_address_sk4071_t = tbl_SerializeFromObject_TD_9132_input.getInt32(i, 0);
            tbl_Filter_TD_8205_output.setInt32(r, 0, _ca_address_sk4071_t);
            r++;
        }
    }
    tbl_Filter_TD_8205_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8205_output #Row: " << tbl_Filter_TD_8205_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8146_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_8146_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8146_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8146_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_8146_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_addr_sk1110;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_8146_key_rightMajor {
    int32_t _d_date_sk4043;
    bool operator==(const SW_JOIN_INNER_TD_8146_key_rightMajor& other) const {
        return ((_d_date_sk4043 == other._d_date_sk4043));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8146_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8146_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4043));
    }
};
}
struct SW_JOIN_INNER_TD_8146_payload_rightMajor {
    int32_t _d_date_sk4043;
};
void SW_JOIN_INNER_TD_8146(Table &tbl_Filter_TD_9634_output, Table &tbl_Filter_TD_9467_output, Table &tbl_JOIN_INNER_TD_8146_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#4043))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(d_date_sk#4043)
    // Output Table: ListBuffer(cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    int left_nrow = tbl_Filter_TD_9634_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9467_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8146_key_leftMajor, SW_JOIN_INNER_TD_8146_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9634_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9634_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8146_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9634_output.getInt32(i, 0);
            int32_t _cs_bill_addr_sk1110 = tbl_Filter_TD_9634_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_9634_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_9634_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8146_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_addr_sk1110, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9467_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4043_k = tbl_Filter_TD_9467_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8146_key_leftMajor{_d_date_sk4043_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_addr_sk1110 = (it->second)._cs_bill_addr_sk1110;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _d_date_sk4043 = tbl_Filter_TD_9467_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8146_output.setInt32(r, 0, _cs_bill_addr_sk1110);
                tbl_JOIN_INNER_TD_8146_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_8146_output.setInt32(r, 2, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8146_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8146_key_rightMajor, SW_JOIN_INNER_TD_8146_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9467_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4043_k = tbl_Filter_TD_9467_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8146_key_rightMajor keyA{_d_date_sk4043_k};
            int32_t _d_date_sk4043 = tbl_Filter_TD_9467_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8146_payload_rightMajor payloadA{_d_date_sk4043};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9634_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9634_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8146_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4043 = (it->second)._d_date_sk4043;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9634_output.getInt32(i, 0);
                int32_t _cs_bill_addr_sk1110 = tbl_Filter_TD_9634_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_9634_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_9634_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8146_output.setInt32(r, 0, _cs_bill_addr_sk1110);
                tbl_JOIN_INNER_TD_8146_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_8146_output.setInt32(r, 2, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8146_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8146_output #Row: " << tbl_JOIN_INNER_TD_8146_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8738(Table &tbl_SerializeFromObject_TD_9579_input, Table &tbl_Filter_TD_8738_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#4181) AND (i_category#4181 = Music)))
    // Input: ListBuffer(i_item_id#4170, i_category#4181)
    // Output: ListBuffer(i_item_id#4170)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9579_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4181 = tbl_SerializeFromObject_TD_9579_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnulli_category4181.data()) != "NULL") && (std::string(_i_category4181.data()) == "Music")) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4170_t = tbl_SerializeFromObject_TD_9579_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8738_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id4170_t);
            r++;
        }
    }
    tbl_Filter_TD_8738_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8738_output #Row: " << tbl_Filter_TD_8738_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8855(Table &tbl_SerializeFromObject_TD_99_input, Table &tbl_Filter_TD_8855_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_99_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_99_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_99_input.getInt32(i, 0);
            tbl_Filter_TD_8855_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_99_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8855_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_8855_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8855_output #Row: " << tbl_Filter_TD_8855_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8285(Table &tbl_SerializeFromObject_TD_9170_input, Table &tbl_Filter_TD_8285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#65) AND (ca_gmt_offset#65 = -5.00)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_gmt_offset#65)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9170_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset65 = tbl_SerializeFromObject_TD_9170_input.getInt32(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_9170_input.getInt32(i, 0);
        if (((_ca_gmt_offset65!= 0) && (_ca_gmt_offset65 == -5.00)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_9170_input.getInt32(i, 0);
            tbl_Filter_TD_8285_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_8285_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8285_output #Row: " << tbl_Filter_TD_8285_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8457_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8457_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8457_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8457_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8457_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_addr_sk1212;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_8457_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8457_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8457_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8457_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8457_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8457(Table &tbl_Filter_TD_9721_output, Table &tbl_Filter_TD_9960_output, Table &tbl_JOIN_INNER_TD_8457_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int left_nrow = tbl_Filter_TD_9721_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9960_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8457_key_leftMajor, SW_JOIN_INNER_TD_8457_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9721_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9721_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8457_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9721_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9721_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_Filter_TD_9721_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9721_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8457_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_addr_sk1212, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9960_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9960_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8457_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk120 = tbl_Filter_TD_9960_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8457_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8457_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8457_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8457_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8457_key_rightMajor, SW_JOIN_INNER_TD_8457_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9960_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9960_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8457_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9960_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8457_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9721_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_9721_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8457_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9721_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9721_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_Filter_TD_9721_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9721_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8457_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8457_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8457_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8457_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8457_output #Row: " << tbl_JOIN_INNER_TD_8457_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7500_key_leftMajor {
    std::string _i_item_id4148;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7500_key_leftMajor& other) const {
        return ((_i_item_id4148 == other._i_item_id4148));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7500_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7500_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id4148));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7500_payload_leftMajor {
    int32_t _i_item_sk4147;
    std::string _i_item_id4148;
};
struct SW_JOIN_LEFTSEMI_TD_7500_key_rightMajor {
    std::string _i_item_id4214;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7500_key_rightMajor& other) const {
        return ((_i_item_id4214 == other._i_item_id4214));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7500_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7500_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id4214));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7500_payload_rightMajor {
    std::string _i_item_id4214;
};
void SW_JOIN_LEFTSEMI_TD_7500(Table &tbl_Filter_TD_8155_output, Table &tbl_Filter_TD_810_output, Table &tbl_JOIN_LEFTSEMI_TD_7500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_id#4148 = i_item_id#4214))
    // Left Table: ListBuffer(i_item_sk#4147, i_item_id#4148)
    // Right Table: ListBuffer(i_item_id#4214)
    // Output Table: ListBuffer(i_item_sk#4147, i_item_id#4148)
    int left_nrow = tbl_Filter_TD_8155_output.getNumRow();
    int right_nrow = tbl_Filter_TD_810_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7500_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7500_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_810_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8155_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4214_k_n = tbl_Filter_TD_810_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id4214_k = std::string(_i_item_id4214_k_n.data());
            SW_JOIN_LEFTSEMI_TD_7500_key_rightMajor keyA{_i_item_id4214_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4214_n = tbl_Filter_TD_810_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id4214 = std::string(_i_item_id4214_n.data());
            SW_JOIN_LEFTSEMI_TD_7500_payload_rightMajor payloadA{_i_item_id4214};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148_k_n = tbl_Filter_TD_8155_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id4148_k = std::string(_i_item_id4148_k_n.data());
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7500_key_rightMajor{_i_item_id4148_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk4147 = tbl_Filter_TD_8155_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148 = tbl_Filter_TD_8155_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                tbl_JOIN_LEFTSEMI_TD_7500_output.setInt32(r, 0, _i_item_sk4147);
                tbl_JOIN_LEFTSEMI_TD_7500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id4148);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7500_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7500_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7500_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7199_key_leftMajor {
    int32_t _ws_bill_addr_sk736;
    bool operator==(const SW_JOIN_INNER_TD_7199_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk736 == other._ws_bill_addr_sk736));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7199_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7199_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk736));
    }
};
}
struct SW_JOIN_INNER_TD_7199_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_bill_addr_sk736;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_7199_key_rightMajor {
    int32_t _ca_address_sk4134;
    bool operator==(const SW_JOIN_INNER_TD_7199_key_rightMajor& other) const {
        return ((_ca_address_sk4134 == other._ca_address_sk4134));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7199_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7199_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk4134));
    }
};
}
struct SW_JOIN_INNER_TD_7199_payload_rightMajor {
    int32_t _ca_address_sk4134;
};
void SW_JOIN_INNER_TD_7199(Table &tbl_JOIN_INNER_TD_8559_output, Table &tbl_Filter_TD_8937_output, Table &tbl_JOIN_INNER_TD_7199_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#736 = ca_address_sk#4134))
    // Left Table: ListBuffer(ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Right Table: ListBuffer(ca_address_sk#4134)
    // Output Table: ListBuffer(ws_item_sk#732, ws_ext_sales_price#752)
    int left_nrow = tbl_JOIN_INNER_TD_8559_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8937_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7199_key_leftMajor, SW_JOIN_INNER_TD_7199_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8559_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_8559_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7199_key_leftMajor keyA{_ws_bill_addr_sk736_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_8559_output.getInt32(i, 0);
            int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_8559_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8559_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7199_payload_leftMajor payloadA{_ws_item_sk732, _ws_bill_addr_sk736, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8937_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk4134_k = tbl_Filter_TD_8937_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7199_key_leftMajor{_ca_address_sk4134_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ca_address_sk4134 = tbl_Filter_TD_8937_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7199_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_7199_output.setInt32(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7199_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7199_key_rightMajor, SW_JOIN_INNER_TD_7199_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8937_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk4134_k = tbl_Filter_TD_8937_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7199_key_rightMajor keyA{_ca_address_sk4134_k};
            int32_t _ca_address_sk4134 = tbl_Filter_TD_8937_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7199_payload_rightMajor payloadA{_ca_address_sk4134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8559_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_8559_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7199_key_rightMajor{_ws_bill_addr_sk736_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk4134 = (it->second)._ca_address_sk4134;
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_8559_output.getInt32(i, 0);
                int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_8559_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8559_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7199_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_7199_output.setInt32(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7199_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7199_output #Row: " << tbl_JOIN_INNER_TD_7199_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7497_key_leftMajor {
    std::string _i_item_id4085;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7497_key_leftMajor& other) const {
        return ((_i_item_id4085 == other._i_item_id4085));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7497_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7497_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id4085));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7497_payload_leftMajor {
    int32_t _i_item_sk4084;
    std::string _i_item_id4085;
};
struct SW_JOIN_LEFTSEMI_TD_7497_key_rightMajor {
    std::string _i_item_id4192;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7497_key_rightMajor& other) const {
        return ((_i_item_id4192 == other._i_item_id4192));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7497_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7497_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id4192));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7497_payload_rightMajor {
    std::string _i_item_id4192;
};
void SW_JOIN_LEFTSEMI_TD_7497(Table &tbl_Filter_TD_8855_output, Table &tbl_Filter_TD_8692_output, Table &tbl_JOIN_LEFTSEMI_TD_7497_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_id#4085 = i_item_id#4192))
    // Left Table: ListBuffer(i_item_sk#4084, i_item_id#4085)
    // Right Table: ListBuffer(i_item_id#4192)
    // Output Table: ListBuffer(i_item_sk#4084, i_item_id#4085)
    int left_nrow = tbl_Filter_TD_8855_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8692_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7497_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7497_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8692_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8855_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4192_k_n = tbl_Filter_TD_8692_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id4192_k = std::string(_i_item_id4192_k_n.data());
            SW_JOIN_LEFTSEMI_TD_7497_key_rightMajor keyA{_i_item_id4192_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4192_n = tbl_Filter_TD_8692_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id4192 = std::string(_i_item_id4192_n.data());
            SW_JOIN_LEFTSEMI_TD_7497_payload_rightMajor payloadA{_i_item_id4192};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085_k_n = tbl_Filter_TD_8855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id4085_k = std::string(_i_item_id4085_k_n.data());
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7497_key_rightMajor{_i_item_id4085_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk4084 = tbl_Filter_TD_8855_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085 = tbl_Filter_TD_8855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                tbl_JOIN_LEFTSEMI_TD_7497_output.setInt32(r, 0, _i_item_sk4084);
                tbl_JOIN_LEFTSEMI_TD_7497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id4085);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7497_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7497_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7497_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7352_key_leftMajor {
    int32_t _cs_bill_addr_sk1110;
    bool operator==(const SW_JOIN_INNER_TD_7352_key_leftMajor& other) const {
        return ((_cs_bill_addr_sk1110 == other._cs_bill_addr_sk1110));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7352_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7352_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_addr_sk1110));
    }
};
}
struct SW_JOIN_INNER_TD_7352_payload_leftMajor {
    int32_t _cs_bill_addr_sk1110;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_7352_key_rightMajor {
    int32_t _ca_address_sk4071;
    bool operator==(const SW_JOIN_INNER_TD_7352_key_rightMajor& other) const {
        return ((_ca_address_sk4071 == other._ca_address_sk4071));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7352_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7352_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk4071));
    }
};
}
struct SW_JOIN_INNER_TD_7352_payload_rightMajor {
    int32_t _ca_address_sk4071;
};
void SW_JOIN_INNER_TD_7352(Table &tbl_JOIN_INNER_TD_8146_output, Table &tbl_Filter_TD_8205_output, Table &tbl_JOIN_INNER_TD_7352_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_addr_sk#1110 = ca_address_sk#4071))
    // Left Table: ListBuffer(cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(ca_address_sk#4071)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_ext_sales_price#1127)
    int left_nrow = tbl_JOIN_INNER_TD_8146_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8205_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7352_key_leftMajor, SW_JOIN_INNER_TD_7352_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8146_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_addr_sk1110_k = tbl_JOIN_INNER_TD_8146_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7352_key_leftMajor keyA{_cs_bill_addr_sk1110_k};
            int32_t _cs_bill_addr_sk1110 = tbl_JOIN_INNER_TD_8146_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_8146_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8146_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7352_payload_leftMajor payloadA{_cs_bill_addr_sk1110, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8205_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk4071_k = tbl_Filter_TD_8205_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7352_key_leftMajor{_ca_address_sk4071_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_bill_addr_sk1110 = (it->second)._cs_bill_addr_sk1110;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _ca_address_sk4071 = tbl_Filter_TD_8205_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7352_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7352_output.setInt32(r, 1, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7352_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7352_key_rightMajor, SW_JOIN_INNER_TD_7352_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8205_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk4071_k = tbl_Filter_TD_8205_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7352_key_rightMajor keyA{_ca_address_sk4071_k};
            int32_t _ca_address_sk4071 = tbl_Filter_TD_8205_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7352_payload_rightMajor payloadA{_ca_address_sk4071};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8146_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_addr_sk1110_k = tbl_JOIN_INNER_TD_8146_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7352_key_rightMajor{_cs_bill_addr_sk1110_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk4071 = (it->second)._ca_address_sk4071;
                int32_t _cs_bill_addr_sk1110 = tbl_JOIN_INNER_TD_8146_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_8146_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_8146_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7352_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_7352_output.setInt32(r, 1, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7352_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7352_output #Row: " << tbl_JOIN_INNER_TD_7352_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7114_key_leftMajor {
    std::string _i_item_id229;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7114_key_leftMajor& other) const {
        return ((_i_item_id229 == other._i_item_id229));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7114_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7114_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7114_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
struct SW_JOIN_LEFTSEMI_TD_7114_key_rightMajor {
    std::string _i_item_id4170;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7114_key_rightMajor& other) const {
        return ((_i_item_id4170 == other._i_item_id4170));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7114_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7114_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id4170));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7114_payload_rightMajor {
    std::string _i_item_id4170;
};
void SW_JOIN_LEFTSEMI_TD_7114(Table &tbl_Filter_TD_8855_output, Table &tbl_Filter_TD_8738_output, Table &tbl_JOIN_LEFTSEMI_TD_7114_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_id#229 = i_item_id#4170))
    // Left Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Right Table: ListBuffer(i_item_id#4170)
    // Output Table: ListBuffer(i_item_sk#228, i_item_id#229)
    int left_nrow = tbl_Filter_TD_8855_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8738_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7114_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7114_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8738_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8855_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4170_k_n = tbl_Filter_TD_8738_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id4170_k = std::string(_i_item_id4170_k_n.data());
            SW_JOIN_LEFTSEMI_TD_7114_key_rightMajor keyA{_i_item_id4170_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4170_n = tbl_Filter_TD_8738_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_item_id4170 = std::string(_i_item_id4170_n.data());
            SW_JOIN_LEFTSEMI_TD_7114_payload_rightMajor payloadA{_i_item_id4170};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_k_n = tbl_Filter_TD_8855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229_k = std::string(_i_item_id229_k_n.data());
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7114_key_rightMajor{_i_item_id229_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk228 = tbl_Filter_TD_8855_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Filter_TD_8855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                tbl_JOIN_LEFTSEMI_TD_7114_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_LEFTSEMI_TD_7114_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7114_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7114_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7114_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7592_key_leftMajor {
    int32_t _ss_addr_sk1212;
    bool operator==(const SW_JOIN_INNER_TD_7592_key_leftMajor& other) const {
        return ((_ss_addr_sk1212 == other._ss_addr_sk1212));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7592_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7592_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk1212));
    }
};
}
struct SW_JOIN_INNER_TD_7592_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_addr_sk1212;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7592_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_7592_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7592_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7592_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_7592_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_7592(Table &tbl_JOIN_INNER_TD_8457_output, Table &tbl_Filter_TD_8285_output, Table &tbl_JOIN_INNER_TD_7592_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#1212 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_8457_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8285_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7592_key_leftMajor, SW_JOIN_INNER_TD_7592_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8457_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_8457_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7592_key_leftMajor keyA{_ss_addr_sk1212_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8457_output.getInt32(i, 0);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8457_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8457_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7592_payload_leftMajor payloadA{_ss_item_sk1208, _ss_addr_sk1212, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8285_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8285_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7592_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ca_address_sk54 = tbl_Filter_TD_8285_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7592_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7592_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7592_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7592_key_rightMajor, SW_JOIN_INNER_TD_7592_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8285_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7592_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_8285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7592_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8457_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_8457_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7592_key_rightMajor{_ss_addr_sk1212_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8457_output.getInt32(i, 0);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8457_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8457_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7592_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7592_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7592_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7592_output #Row: " << tbl_JOIN_INNER_TD_7592_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6293_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_6293_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6293_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6293_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_6293_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_6293_key_rightMajor {
    int32_t _i_item_sk4147;
    bool operator==(const SW_JOIN_INNER_TD_6293_key_rightMajor& other) const {
        return ((_i_item_sk4147 == other._i_item_sk4147));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6293_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6293_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4147));
    }
};
}
struct SW_JOIN_INNER_TD_6293_payload_rightMajor {
    int32_t _i_item_sk4147;
    std::string _i_item_id4148;
};
void SW_JOIN_INNER_TD_6293(Table &tbl_JOIN_INNER_TD_7199_output, Table &tbl_JOIN_LEFTSEMI_TD_7500_output, Table &tbl_JOIN_INNER_TD_6293_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#4147))
    // Left Table: ListBuffer(ws_item_sk#732, ws_ext_sales_price#752)
    // Right Table: ListBuffer(i_item_sk#4147, i_item_id#4148)
    // Output Table: ListBuffer(ws_ext_sales_price#752, i_item_id#4148)
    int left_nrow = tbl_JOIN_INNER_TD_7199_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7500_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6293_key_leftMajor, SW_JOIN_INNER_TD_6293_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7199_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_7199_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6293_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_7199_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7199_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6293_payload_leftMajor payloadA{_ws_item_sk732, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7500_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4147_k = tbl_JOIN_LEFTSEMI_TD_7500_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6293_key_leftMajor{_i_item_sk4147_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_item_sk4147 = tbl_JOIN_LEFTSEMI_TD_7500_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148_n = tbl_JOIN_LEFTSEMI_TD_7500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id4148 = std::string(_i_item_id4148_n.data());
                tbl_JOIN_INNER_TD_6293_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6293_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id4148_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6293_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6293_key_rightMajor, SW_JOIN_INNER_TD_6293_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7500_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4147_k = tbl_JOIN_LEFTSEMI_TD_7500_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6293_key_rightMajor keyA{_i_item_sk4147_k};
            int32_t _i_item_sk4147 = tbl_JOIN_LEFTSEMI_TD_7500_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148_n = tbl_JOIN_LEFTSEMI_TD_7500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id4148 = std::string(_i_item_id4148_n.data());
            SW_JOIN_INNER_TD_6293_payload_rightMajor payloadA{_i_item_sk4147, _i_item_id4148};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7199_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_7199_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6293_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4147 = (it->second)._i_item_sk4147;
                std::string _i_item_id4148 = (it->second)._i_item_id4148;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148_n{};
                memcpy(_i_item_id4148_n.data(), (_i_item_id4148).data(), (_i_item_id4148).length());
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_7199_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7199_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6293_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id4148_n);
                tbl_JOIN_INNER_TD_6293_output.setInt32(r, 0, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6293_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6293_output #Row: " << tbl_JOIN_INNER_TD_6293_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_683_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_683_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_683_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_683_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_683_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_683_key_rightMajor {
    int32_t _i_item_sk4084;
    bool operator==(const SW_JOIN_INNER_TD_683_key_rightMajor& other) const {
        return ((_i_item_sk4084 == other._i_item_sk4084));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_683_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_683_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4084));
    }
};
}
struct SW_JOIN_INNER_TD_683_payload_rightMajor {
    int32_t _i_item_sk4084;
    std::string _i_item_id4085;
};
void SW_JOIN_INNER_TD_683(Table &tbl_JOIN_INNER_TD_7352_output, Table &tbl_JOIN_LEFTSEMI_TD_7497_output, Table &tbl_JOIN_INNER_TD_683_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#4084))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(i_item_sk#4084, i_item_id#4085)
    // Output Table: ListBuffer(cs_ext_sales_price#1127, i_item_id#4085)
    int left_nrow = tbl_JOIN_INNER_TD_7352_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7497_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_683_key_leftMajor, SW_JOIN_INNER_TD_683_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7352_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_7352_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_683_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7352_output.getInt32(i, 0);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7352_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_683_payload_leftMajor payloadA{_cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7497_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4084_k = tbl_JOIN_LEFTSEMI_TD_7497_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_683_key_leftMajor{_i_item_sk4084_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_item_sk4084 = tbl_JOIN_LEFTSEMI_TD_7497_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085_n = tbl_JOIN_LEFTSEMI_TD_7497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id4085 = std::string(_i_item_id4085_n.data());
                tbl_JOIN_INNER_TD_683_output.setInt32(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id4085_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_683_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_683_key_rightMajor, SW_JOIN_INNER_TD_683_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7497_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4084_k = tbl_JOIN_LEFTSEMI_TD_7497_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_683_key_rightMajor keyA{_i_item_sk4084_k};
            int32_t _i_item_sk4084 = tbl_JOIN_LEFTSEMI_TD_7497_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085_n = tbl_JOIN_LEFTSEMI_TD_7497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id4085 = std::string(_i_item_id4085_n.data());
            SW_JOIN_INNER_TD_683_payload_rightMajor payloadA{_i_item_sk4084, _i_item_id4085};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7352_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_7352_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_683_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4084 = (it->second)._i_item_sk4084;
                std::string _i_item_id4085 = (it->second)._i_item_id4085;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085_n{};
                memcpy(_i_item_id4085_n.data(), (_i_item_id4085).data(), (_i_item_id4085).length());
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_7352_output.getInt32(i, 0);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_7352_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id4085_n);
                tbl_JOIN_INNER_TD_683_output.setInt32(r, 0, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_683_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_683_output #Row: " << tbl_JOIN_INNER_TD_683_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6329_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_6329_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6329_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6329_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_6329_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_6329_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_6329_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6329_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6329_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_6329_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_6329(Table &tbl_JOIN_INNER_TD_7592_output, Table &tbl_JOIN_LEFTSEMI_TD_7114_output, Table &tbl_JOIN_INNER_TD_6329_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_7592_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7114_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6329_key_leftMajor, SW_JOIN_INNER_TD_6329_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7592_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_7592_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6329_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7592_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7592_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6329_payload_leftMajor payloadA{_ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7114_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_LEFTSEMI_TD_7114_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6329_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_JOIN_LEFTSEMI_TD_7114_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_LEFTSEMI_TD_7114_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_6329_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6329_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6329_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6329_key_rightMajor, SW_JOIN_INNER_TD_6329_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7114_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_JOIN_LEFTSEMI_TD_7114_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6329_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_JOIN_LEFTSEMI_TD_7114_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_LEFTSEMI_TD_7114_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_6329_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7592_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_7592_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6329_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7592_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7592_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6329_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6329_output.setInt32(r, 0, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6329_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6329_output #Row: " << tbl_JOIN_INNER_TD_6329_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_5798_key;
struct SW_Aggregate_TD_5798_payload {
    int32_t _total_sales4041_sum_0;
};
void SW_Aggregate_TD_5798(Table &tbl_JOIN_INNER_TD_6293_output, Table &tbl_Aggregate_TD_5798_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#4148, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS total_sales#4041)
    // Input: ListBuffer(ws_ext_sales_price#752, i_item_id#4148)
    // Output: ListBuffer(i_item_id#4148, total_sales#4041)
    std::unordered_map<SW_Aggregate_TD_5798_key, SW_Aggregate_TD_5798_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6293_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6293_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148 = tbl_JOIN_INNER_TD_6293_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_5798_key k = std::string(_i_item_id4148.data());
        int64_t _total_sales4041_sum_0 = _ws_ext_sales_price752;
        SW_Aggregate_TD_5798_payload p{_total_sales4041_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales4041_sum_0 + _total_sales4041_sum_0;
            p._total_sales4041_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148{};
        memcpy(_i_item_id4148.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_5798_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id4148);
        int32_t _total_sales4041 = (it.second)._total_sales4041_sum_0;
        tbl_Aggregate_TD_5798_output.setInt32(r, 1, _total_sales4041);
        ++r;
    }
    tbl_Aggregate_TD_5798_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5798_output #Row: " << tbl_Aggregate_TD_5798_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_5794_key;
struct SW_Aggregate_TD_5794_payload {
    int32_t _total_sales4039_sum_0;
};
void SW_Aggregate_TD_5794(Table &tbl_JOIN_INNER_TD_683_output, Table &tbl_Aggregate_TD_5794_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#4085, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS total_sales#4039)
    // Input: ListBuffer(cs_ext_sales_price#1127, i_item_id#4085)
    // Output: ListBuffer(i_item_id#4085, total_sales#4039)
    std::unordered_map<SW_Aggregate_TD_5794_key, SW_Aggregate_TD_5794_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_683_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_683_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085 = tbl_JOIN_INNER_TD_683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_5794_key k = std::string(_i_item_id4085.data());
        int64_t _total_sales4039_sum_0 = _cs_ext_sales_price1127;
        SW_Aggregate_TD_5794_payload p{_total_sales4039_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales4039_sum_0 + _total_sales4039_sum_0;
            p._total_sales4039_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085{};
        memcpy(_i_item_id4085.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_5794_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id4085);
        int32_t _total_sales4039 = (it.second)._total_sales4039_sum_0;
        tbl_Aggregate_TD_5794_output.setInt32(r, 1, _total_sales4039);
        ++r;
    }
    tbl_Aggregate_TD_5794_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5794_output #Row: " << tbl_Aggregate_TD_5794_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_5994_key;
struct SW_Aggregate_TD_5994_payload {
    int32_t _total_sales4037_sum_0;
};
void SW_Aggregate_TD_5994(Table &tbl_JOIN_INNER_TD_6329_output, Table &tbl_Aggregate_TD_5994_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS total_sales#4037)
    // Input: ListBuffer(ss_ext_sales_price#1221, i_item_id#229)
    // Output: ListBuffer(i_item_id#229, total_sales#4037)
    std::unordered_map<SW_Aggregate_TD_5994_key, SW_Aggregate_TD_5994_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6329_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6329_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_6329_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_5994_key k = std::string(_i_item_id229.data());
        int64_t _total_sales4037_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_5994_payload p{_total_sales4037_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales4037_sum_0 + _total_sales4037_sum_0;
            p._total_sales4037_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_5994_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        int32_t _total_sales4037 = (it.second)._total_sales4037_sum_0;
        tbl_Aggregate_TD_5994_output.setInt32(r, 1, _total_sales4037);
        ++r;
    }
    tbl_Aggregate_TD_5994_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5994_output #Row: " << tbl_Aggregate_TD_5994_output.getNumRow() << std::endl;
}

void SW_Union_TD_4572(Table &tbl_Aggregate_TD_5994_output, Table &tbl_Aggregate_TD_5794_output, Table &tbl_Aggregate_TD_5798_output, Table &tbl_Union_TD_4572_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(i_item_id#229, total_sales#4037)
    int r = 0;
    int row0 = tbl_Aggregate_TD_5994_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Union_TD_4572_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4572_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_Union_TD_4572_output.setInt32(r, 1, tbl_Aggregate_TD_5994_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Aggregate_TD_5794_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id4085_n = tbl_Union_TD_4572_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4572_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id4085_n);
        tbl_Union_TD_4572_output.setInt32(r, 1, tbl_Aggregate_TD_5794_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Aggregate_TD_5798_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id4148_n = tbl_Union_TD_4572_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4572_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id4148_n);
        tbl_Union_TD_4572_output.setInt32(r, 1, tbl_Aggregate_TD_5798_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_4572_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4572_output #Row: " << tbl_Union_TD_4572_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3311_key;
struct SW_Aggregate_TD_3311_payload {
    int32_t _total_sales4036_sum_0;
};
void SW_Aggregate_TD_3311(Table &tbl_Union_TD_4572_output, Table &tbl_Aggregate_TD_3311_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, sum(total_sales#4037) AS total_sales#4036)
    // Input: ListBuffer(i_item_id#229, total_sales#4037)
    // Output: ListBuffer(i_item_id#229, total_sales#4036)
    std::unordered_map<SW_Aggregate_TD_3311_key, SW_Aggregate_TD_3311_payload> ht1;
    int nrow1 = tbl_Union_TD_4572_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Union_TD_4572_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _total_sales4037 = tbl_Union_TD_4572_output.getInt32(i, 1);
        SW_Aggregate_TD_3311_key k = std::string(_i_item_id229.data());
        int64_t _total_sales4036_sum_0 = _total_sales4037;
        SW_Aggregate_TD_3311_payload p{_total_sales4036_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._total_sales4036_sum_0 + _total_sales4036_sum_0;
            p._total_sales4036_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_3311_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229);
        int32_t _total_sales4036 = (it.second)._total_sales4036_sum_0;
        tbl_Aggregate_TD_3311_output.setInt32(r, 1, _total_sales4036);
        ++r;
    }
    tbl_Aggregate_TD_3311_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3311_output #Row: " << tbl_Aggregate_TD_3311_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2585(Table &tbl_Aggregate_TD_3311_output, Table &tbl_Sort_TD_2585_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_item_id#229 ASC NULLS FIRST, total_sales#4036 ASC NULLS FIRST)
    // Input: ListBuffer(i_item_id#229, total_sales#4036)
    // Output: ListBuffer(i_item_id#229, total_sales#4036)
    struct SW_Sort_TD_2585Row {
        std::string _i_item_id229;
        int32_t _total_sales4036;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2585Row& a, const SW_Sort_TD_2585Row& b) const { return 
 (a._i_item_id229 < b._i_item_id229) || 
 ((a._i_item_id229 == b._i_item_id229) && (a._total_sales4036 < b._total_sales4036)); 
}
    }SW_Sort_TD_2585_order; 

    int nrow1 = tbl_Aggregate_TD_3311_output.getNumRow();
    std::vector<SW_Sort_TD_2585Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_Aggregate_TD_3311_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _total_sales4036 = tbl_Aggregate_TD_3311_output.getInt32(i, 1);
        SW_Sort_TD_2585Row t = {std::string(_i_item_id229.data()),_total_sales4036};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2585_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229{};
        memcpy(_i_item_id229.data(), (it._i_item_id229).data(), (it._i_item_id229).length());
        tbl_Sort_TD_2585_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_item_id229);
        tbl_Sort_TD_2585_output.setInt32(r, 1, it._total_sales4036);
        ++r;
    }
    tbl_Sort_TD_2585_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2585_output #Row: " << tbl_Sort_TD_2585_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_194(Table &tbl_Sort_TD_2585_output, Table &tbl_LocalLimit_TD_194_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_item_id#229, total_sales#4036)
    // Output: ListBuffer(i_item_id#229, total_sales#4036)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Sort_TD_2585_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_194_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_LocalLimit_TD_194_output.setInt32(r, 1, tbl_Sort_TD_2585_output.getInt32(i, 1));
        r++;
    }
    tbl_LocalLimit_TD_194_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_194_output #Row: " << tbl_LocalLimit_TD_194_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0813(Table &tbl_LocalLimit_TD_194_output, Table &tbl_GlobalLimit_TD_0813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_item_id#229, total_sales#4036)
    // Output: ListBuffer(i_item_id#229, total_sales#4036)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_LocalLimit_TD_194_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0813_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id229_n);
        tbl_GlobalLimit_TD_0813_output.setInt32(r, 1, tbl_LocalLimit_TD_194_output.getInt32(i, 1));
        r++;
    }
    tbl_GlobalLimit_TD_0813_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0813_output #Row: " << tbl_GlobalLimit_TD_0813_output.getNumRow() << std::endl;
}

