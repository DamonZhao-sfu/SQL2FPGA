#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_14503(Table &tbl_SerializeFromObject_TD_15793_input, Table &tbl_Filter_TD_14503_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#126 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15793_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_15793_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_15793_input.getInt32(i, 0);
        auto reuse_col_str_447 = _d_year126;
        if (((reuse_col_str_447 == 2000) || (reuse_col_str_447 == 2001) || (reuse_col_str_447 == 2002) || (reuse_col_str_447 == 2003) || (0)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_15793_input.getInt32(i, 0);
            tbl_Filter_TD_14503_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_15793_input.getInt32(i, 1);
            tbl_Filter_TD_14503_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_14503_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14503_output #Row: " << tbl_Filter_TD_14503_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14223(Table &tbl_SerializeFromObject_TD_15255_input, Table &tbl_Filter_TD_14223_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15255_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_15255_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_15255_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_15255_input.getInt32(i, 0);
            tbl_Filter_TD_14223_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_15255_input.getInt32(i, 1);
            tbl_Filter_TD_14223_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_14223_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14223_output #Row: " << tbl_Filter_TD_14223_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14458(Table &tbl_SerializeFromObject_TD_15913_input, Table &tbl_Filter_TD_14458_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#126 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15913_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_15913_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_15913_input.getInt32(i, 0);
        auto reuse_col_str_539 = _d_year126;
        if (((reuse_col_str_539 == 2000) || (reuse_col_str_539 == 2001) || (reuse_col_str_539 == 2002) || (reuse_col_str_539 == 2003) || (0)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_15913_input.getInt32(i, 0);
            tbl_Filter_TD_14458_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_15913_input.getInt32(i, 1);
            tbl_Filter_TD_14458_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_14458_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14458_output #Row: " << tbl_Filter_TD_14458_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1426(Table &tbl_SerializeFromObject_TD_15589_input, Table &tbl_Filter_TD_1426_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15589_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_15589_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_15589_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_15589_input.getInt32(i, 0);
            tbl_Filter_TD_1426_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_15589_input.getInt32(i, 1);
            tbl_Filter_TD_1426_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_1426_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1426_output #Row: " << tbl_Filter_TD_1426_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1388(Table &tbl_SerializeFromObject_TD_14793_input, Table &tbl_Filter_TD_1388_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0)
    // Output: ListBuffer(c_customer_sk#0)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14793_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_14793_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_14793_input.getInt32(i, 0);
            tbl_Filter_TD_1388_output.setInt32(r, 0, _c_customer_sk0_t);
            r++;
        }
    }
    tbl_Filter_TD_1388_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1388_output #Row: " << tbl_Filter_TD_1388_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13449(Table &tbl_SerializeFromObject_TD_14929_input, Table &tbl_Filter_TD_13449_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#15301) AND isnotnull(ss_sold_date_sk#15298)))
    // Input: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    // Output: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14929_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk15301 = tbl_SerializeFromObject_TD_14929_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk15298 = tbl_SerializeFromObject_TD_14929_input.getInt32(i, 0);
        if ((_ss_customer_sk15301!= 0) && (_ss_sold_date_sk15298!= 0)) {
            int32_t _ss_sold_date_sk15298_t = tbl_SerializeFromObject_TD_14929_input.getInt32(i, 0);
            tbl_Filter_TD_13449_output.setInt32(r, 0, _ss_sold_date_sk15298_t);
            int32_t _ss_customer_sk15301_t = tbl_SerializeFromObject_TD_14929_input.getInt32(i, 1);
            tbl_Filter_TD_13449_output.setInt32(r, 1, _ss_customer_sk15301_t);
            int32_t _ss_quantity15308_t = tbl_SerializeFromObject_TD_14929_input.getInt32(i, 2);
            tbl_Filter_TD_13449_output.setInt32(r, 2, _ss_quantity15308_t);
            int32_t _ss_sales_price15311_t = tbl_SerializeFromObject_TD_14929_input.getInt32(i, 3);
            tbl_Filter_TD_13449_output.setInt32(r, 3, _ss_sales_price15311_t);
            r++;
        }
    }
    tbl_Filter_TD_13449_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13449_output #Row: " << tbl_Filter_TD_13449_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13117(Table &tbl_SerializeFromObject_TD_14990_input, Table &tbl_Filter_TD_13117_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0)
    // Output: ListBuffer(c_customer_sk#0)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14990_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_14990_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_14990_input.getInt32(i, 0);
            tbl_Filter_TD_13117_output.setInt32(r, 0, _c_customer_sk0_t);
            r++;
        }
    }
    tbl_Filter_TD_13117_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13117_output #Row: " << tbl_Filter_TD_13117_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13663(Table &tbl_SerializeFromObject_TD_1489_input, Table &tbl_Filter_TD_13663_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#15301) AND isnotnull(ss_sold_date_sk#15298)))
    // Input: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    // Output: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1489_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk15301 = tbl_SerializeFromObject_TD_1489_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk15298 = tbl_SerializeFromObject_TD_1489_input.getInt32(i, 0);
        if ((_ss_customer_sk15301!= 0) && (_ss_sold_date_sk15298!= 0)) {
            int32_t _ss_sold_date_sk15298_t = tbl_SerializeFromObject_TD_1489_input.getInt32(i, 0);
            tbl_Filter_TD_13663_output.setInt32(r, 0, _ss_sold_date_sk15298_t);
            int32_t _ss_customer_sk15301_t = tbl_SerializeFromObject_TD_1489_input.getInt32(i, 1);
            tbl_Filter_TD_13663_output.setInt32(r, 1, _ss_customer_sk15301_t);
            int32_t _ss_quantity15308_t = tbl_SerializeFromObject_TD_1489_input.getInt32(i, 2);
            tbl_Filter_TD_13663_output.setInt32(r, 2, _ss_quantity15308_t);
            int32_t _ss_sales_price15311_t = tbl_SerializeFromObject_TD_1489_input.getInt32(i, 3);
            tbl_Filter_TD_13663_output.setInt32(r, 3, _ss_sales_price15311_t);
            r++;
        }
    }
    tbl_Filter_TD_13663_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13663_output #Row: " << tbl_Filter_TD_13663_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13146(Table &tbl_SerializeFromObject_TD_14319_input, Table &tbl_Filter_TD_13146_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(i_item_sk#228, i_item_desc#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14319_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_14319_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_14319_input.getInt32(i, 0);
            tbl_Filter_TD_13146_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_14319_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_13146_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_t);
            r++;
        }
    }
    tbl_Filter_TD_13146_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13146_output #Row: " << tbl_Filter_TD_13146_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13227_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_13227_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13227_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13227_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_13227_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_13227_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_13227_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13227_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13227_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_13227_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
void SW_JOIN_INNER_TD_13227(Table &tbl_Filter_TD_14223_output, Table &tbl_Filter_TD_14503_output, Table &tbl_JOIN_INNER_TD_13227_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122)
    // Output Table: ListBuffer(ss_item_sk#1208, d_date#122)
    int left_nrow = tbl_Filter_TD_14223_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14503_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13227_key_leftMajor, SW_JOIN_INNER_TD_13227_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14223_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_14223_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13227_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_14223_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_14223_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13227_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14503_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_14503_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13227_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date_sk120 = tbl_Filter_TD_14503_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_14503_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_13227_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_13227_output.setInt32(r, 1, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13227_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13227_key_rightMajor, SW_JOIN_INNER_TD_13227_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14503_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_14503_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13227_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_14503_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_14503_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13227_payload_rightMajor payloadA{_d_date_sk120, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14223_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_14223_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13227_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_14223_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_14223_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_13227_output.setInt32(r, 1, _d_date122);
                tbl_JOIN_INNER_TD_13227_output.setInt32(r, 0, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13227_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13227_output #Row: " << tbl_JOIN_INNER_TD_13227_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13254(Table &tbl_SerializeFromObject_TD_1448_input, Table &tbl_Filter_TD_13254_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0)
    // Output: ListBuffer(c_customer_sk#0)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1448_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_1448_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_1448_input.getInt32(i, 0);
            tbl_Filter_TD_13254_output.setInt32(r, 0, _c_customer_sk0_t);
            r++;
        }
    }
    tbl_Filter_TD_13254_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13254_output #Row: " << tbl_Filter_TD_13254_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13522(Table &tbl_SerializeFromObject_TD_14638_input, Table &tbl_Filter_TD_13522_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#15301) AND isnotnull(ss_sold_date_sk#15298)))
    // Input: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    // Output: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14638_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk15301 = tbl_SerializeFromObject_TD_14638_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk15298 = tbl_SerializeFromObject_TD_14638_input.getInt32(i, 0);
        if ((_ss_customer_sk15301!= 0) && (_ss_sold_date_sk15298!= 0)) {
            int32_t _ss_sold_date_sk15298_t = tbl_SerializeFromObject_TD_14638_input.getInt32(i, 0);
            tbl_Filter_TD_13522_output.setInt32(r, 0, _ss_sold_date_sk15298_t);
            int32_t _ss_customer_sk15301_t = tbl_SerializeFromObject_TD_14638_input.getInt32(i, 1);
            tbl_Filter_TD_13522_output.setInt32(r, 1, _ss_customer_sk15301_t);
            int32_t _ss_quantity15308_t = tbl_SerializeFromObject_TD_14638_input.getInt32(i, 2);
            tbl_Filter_TD_13522_output.setInt32(r, 2, _ss_quantity15308_t);
            int32_t _ss_sales_price15311_t = tbl_SerializeFromObject_TD_14638_input.getInt32(i, 3);
            tbl_Filter_TD_13522_output.setInt32(r, 3, _ss_sales_price15311_t);
            r++;
        }
    }
    tbl_Filter_TD_13522_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13522_output #Row: " << tbl_Filter_TD_13522_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13842(Table &tbl_SerializeFromObject_TD_14829_input, Table &tbl_Filter_TD_13842_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0)
    // Output: ListBuffer(c_customer_sk#0)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14829_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_14829_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_14829_input.getInt32(i, 0);
            tbl_Filter_TD_13842_output.setInt32(r, 0, _c_customer_sk0_t);
            r++;
        }
    }
    tbl_Filter_TD_13842_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13842_output #Row: " << tbl_Filter_TD_13842_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13938(Table &tbl_SerializeFromObject_TD_14964_input, Table &tbl_Filter_TD_13938_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#15301) AND isnotnull(ss_sold_date_sk#15298)))
    // Input: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    // Output: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14964_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk15301 = tbl_SerializeFromObject_TD_14964_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk15298 = tbl_SerializeFromObject_TD_14964_input.getInt32(i, 0);
        if ((_ss_customer_sk15301!= 0) && (_ss_sold_date_sk15298!= 0)) {
            int32_t _ss_sold_date_sk15298_t = tbl_SerializeFromObject_TD_14964_input.getInt32(i, 0);
            tbl_Filter_TD_13938_output.setInt32(r, 0, _ss_sold_date_sk15298_t);
            int32_t _ss_customer_sk15301_t = tbl_SerializeFromObject_TD_14964_input.getInt32(i, 1);
            tbl_Filter_TD_13938_output.setInt32(r, 1, _ss_customer_sk15301_t);
            int32_t _ss_quantity15308_t = tbl_SerializeFromObject_TD_14964_input.getInt32(i, 2);
            tbl_Filter_TD_13938_output.setInt32(r, 2, _ss_quantity15308_t);
            int32_t _ss_sales_price15311_t = tbl_SerializeFromObject_TD_14964_input.getInt32(i, 3);
            tbl_Filter_TD_13938_output.setInt32(r, 3, _ss_sales_price15311_t);
            r++;
        }
    }
    tbl_Filter_TD_13938_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13938_output #Row: " << tbl_Filter_TD_13938_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13640(Table &tbl_SerializeFromObject_TD_14519_input, Table &tbl_Filter_TD_13640_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(i_item_sk#228, i_item_desc#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14519_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_14519_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_14519_input.getInt32(i, 0);
            tbl_Filter_TD_13640_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_14519_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_13640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_t);
            r++;
        }
    }
    tbl_Filter_TD_13640_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13640_output #Row: " << tbl_Filter_TD_13640_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13946_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_13946_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13946_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13946_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_13946_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_13946_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_13946_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13946_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13946_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_13946_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
void SW_JOIN_INNER_TD_13946(Table &tbl_Filter_TD_1426_output, Table &tbl_Filter_TD_14458_output, Table &tbl_JOIN_INNER_TD_13946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122)
    // Output Table: ListBuffer(ss_item_sk#1208, d_date#122)
    int left_nrow = tbl_Filter_TD_1426_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14458_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13946_key_leftMajor, SW_JOIN_INNER_TD_13946_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1426_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_1426_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13946_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1426_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_1426_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13946_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14458_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_14458_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13946_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date_sk120 = tbl_Filter_TD_14458_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_14458_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_13946_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_13946_output.setInt32(r, 1, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13946_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13946_key_rightMajor, SW_JOIN_INNER_TD_13946_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14458_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_14458_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13946_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_14458_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_14458_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13946_payload_rightMajor payloadA{_d_date_sk120, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1426_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_1426_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13946_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1426_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_1426_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_13946_output.setInt32(r, 1, _d_date122);
                tbl_JOIN_INNER_TD_13946_output.setInt32(r, 0, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13946_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13946_output #Row: " << tbl_JOIN_INNER_TD_13946_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12201(Table &tbl_SerializeFromObject_TD_13395_input, Table &tbl_Filter_TD_12201_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#15327 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#15321)))
    // Input: ListBuffer(d_date_sk#15321, d_year#15327)
    // Output: ListBuffer(d_date_sk#15321)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13395_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year15327 = tbl_SerializeFromObject_TD_13395_input.getInt32(i, 1);
        int32_t _d_date_sk15321 = tbl_SerializeFromObject_TD_13395_input.getInt32(i, 0);
        auto reuse_col_str_57 = _d_year15327;
        if (((reuse_col_str_57 == 2000) || (reuse_col_str_57 == 2001) || (reuse_col_str_57 == 2002) || (reuse_col_str_57 == 2003) || (0)) && (_d_date_sk15321!= 0)) {
            int32_t _d_date_sk15321_t = tbl_SerializeFromObject_TD_13395_input.getInt32(i, 0);
            tbl_Filter_TD_12201_output.setInt32(r, 0, _d_date_sk15321_t);
            r++;
        }
    }
    tbl_Filter_TD_12201_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12201_output #Row: " << tbl_Filter_TD_12201_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12759_key_leftMajor {
    int32_t _ss_customer_sk15301;
    bool operator==(const SW_JOIN_INNER_TD_12759_key_leftMajor& other) const {
        return ((_ss_customer_sk15301 == other._ss_customer_sk15301));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12759_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12759_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk15301));
    }
};
}
struct SW_JOIN_INNER_TD_12759_payload_leftMajor {
    int32_t _ss_sold_date_sk15298;
    int32_t _ss_customer_sk15301;
    int32_t _ss_quantity15308;
    int32_t _ss_sales_price15311;
};
struct SW_JOIN_INNER_TD_12759_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_12759_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12759_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12759_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_12759_payload_rightMajor {
    int32_t _c_customer_sk0;
};
void SW_JOIN_INNER_TD_12759(Table &tbl_Filter_TD_13449_output, Table &tbl_Filter_TD_1388_output, Table &tbl_JOIN_INNER_TD_12759_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#15301 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    // Right Table: ListBuffer(c_customer_sk#0)
    // Output Table: ListBuffer(ss_sold_date_sk#15298, ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    int left_nrow = tbl_Filter_TD_13449_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1388_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12759_key_leftMajor, SW_JOIN_INNER_TD_12759_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_13449_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk15301_k = tbl_Filter_TD_13449_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_12759_key_leftMajor keyA{_ss_customer_sk15301_k};
            int32_t _ss_sold_date_sk15298 = tbl_Filter_TD_13449_output.getInt32(i, 0);
            int32_t _ss_customer_sk15301 = tbl_Filter_TD_13449_output.getInt32(i, 1);
            int32_t _ss_quantity15308 = tbl_Filter_TD_13449_output.getInt32(i, 2);
            int32_t _ss_sales_price15311 = tbl_Filter_TD_13449_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_12759_payload_leftMajor payloadA{_ss_sold_date_sk15298, _ss_customer_sk15301, _ss_quantity15308, _ss_sales_price15311};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1388_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_1388_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12759_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk15298 = (it->second)._ss_sold_date_sk15298;
                int32_t _ss_customer_sk15301 = (it->second)._ss_customer_sk15301;
                int32_t _ss_quantity15308 = (it->second)._ss_quantity15308;
                int32_t _ss_sales_price15311 = (it->second)._ss_sales_price15311;
                int32_t _c_customer_sk0 = tbl_Filter_TD_1388_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_12759_output.setInt32(r, 0, _ss_sold_date_sk15298);
                tbl_JOIN_INNER_TD_12759_output.setInt32(r, 1, _ss_quantity15308);
                tbl_JOIN_INNER_TD_12759_output.setInt32(r, 2, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_12759_output.setInt32(r, 3, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12759_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12759_key_rightMajor, SW_JOIN_INNER_TD_12759_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1388_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_1388_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12759_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_1388_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12759_payload_rightMajor payloadA{_c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13449_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk15301_k = tbl_Filter_TD_13449_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12759_key_rightMajor{_ss_customer_sk15301_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk15298 = tbl_Filter_TD_13449_output.getInt32(i, 0);
                int32_t _ss_customer_sk15301 = tbl_Filter_TD_13449_output.getInt32(i, 1);
                int32_t _ss_quantity15308 = tbl_Filter_TD_13449_output.getInt32(i, 2);
                int32_t _ss_sales_price15311 = tbl_Filter_TD_13449_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_12759_output.setInt32(r, 3, _c_customer_sk0);
                tbl_JOIN_INNER_TD_12759_output.setInt32(r, 0, _ss_sold_date_sk15298);
                tbl_JOIN_INNER_TD_12759_output.setInt32(r, 1, _ss_quantity15308);
                tbl_JOIN_INNER_TD_12759_output.setInt32(r, 2, _ss_sales_price15311);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12759_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12759_output #Row: " << tbl_JOIN_INNER_TD_12759_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12161(Table &tbl_SerializeFromObject_TD_13398_input, Table &tbl_Filter_TD_12161_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#15327 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#15321)))
    // Input: ListBuffer(d_date_sk#15321, d_year#15327)
    // Output: ListBuffer(d_date_sk#15321)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13398_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year15327 = tbl_SerializeFromObject_TD_13398_input.getInt32(i, 1);
        int32_t _d_date_sk15321 = tbl_SerializeFromObject_TD_13398_input.getInt32(i, 0);
        auto reuse_col_str_740 = _d_year15327;
        if (((reuse_col_str_740 == 2000) || (reuse_col_str_740 == 2001) || (reuse_col_str_740 == 2002) || (reuse_col_str_740 == 2003) || (0)) && (_d_date_sk15321!= 0)) {
            int32_t _d_date_sk15321_t = tbl_SerializeFromObject_TD_13398_input.getInt32(i, 0);
            tbl_Filter_TD_12161_output.setInt32(r, 0, _d_date_sk15321_t);
            r++;
        }
    }
    tbl_Filter_TD_12161_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12161_output #Row: " << tbl_Filter_TD_12161_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12533_key_leftMajor {
    int32_t _ss_customer_sk15301;
    bool operator==(const SW_JOIN_INNER_TD_12533_key_leftMajor& other) const {
        return ((_ss_customer_sk15301 == other._ss_customer_sk15301));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12533_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12533_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk15301));
    }
};
}
struct SW_JOIN_INNER_TD_12533_payload_leftMajor {
    int32_t _ss_sold_date_sk15298;
    int32_t _ss_customer_sk15301;
    int32_t _ss_quantity15308;
    int32_t _ss_sales_price15311;
};
struct SW_JOIN_INNER_TD_12533_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_12533_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12533_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12533_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_12533_payload_rightMajor {
    int32_t _c_customer_sk0;
};
void SW_JOIN_INNER_TD_12533(Table &tbl_Filter_TD_13663_output, Table &tbl_Filter_TD_13117_output, Table &tbl_JOIN_INNER_TD_12533_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#15301 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    // Right Table: ListBuffer(c_customer_sk#0)
    // Output Table: ListBuffer(ss_sold_date_sk#15298, ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    int left_nrow = tbl_Filter_TD_13663_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13117_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12533_key_leftMajor, SW_JOIN_INNER_TD_12533_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_13663_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk15301_k = tbl_Filter_TD_13663_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_12533_key_leftMajor keyA{_ss_customer_sk15301_k};
            int32_t _ss_sold_date_sk15298 = tbl_Filter_TD_13663_output.getInt32(i, 0);
            int32_t _ss_customer_sk15301 = tbl_Filter_TD_13663_output.getInt32(i, 1);
            int32_t _ss_quantity15308 = tbl_Filter_TD_13663_output.getInt32(i, 2);
            int32_t _ss_sales_price15311 = tbl_Filter_TD_13663_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_12533_payload_leftMajor payloadA{_ss_sold_date_sk15298, _ss_customer_sk15301, _ss_quantity15308, _ss_sales_price15311};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13117_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_13117_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12533_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk15298 = (it->second)._ss_sold_date_sk15298;
                int32_t _ss_customer_sk15301 = (it->second)._ss_customer_sk15301;
                int32_t _ss_quantity15308 = (it->second)._ss_quantity15308;
                int32_t _ss_sales_price15311 = (it->second)._ss_sales_price15311;
                int32_t _c_customer_sk0 = tbl_Filter_TD_13117_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_12533_output.setInt32(r, 0, _ss_sold_date_sk15298);
                tbl_JOIN_INNER_TD_12533_output.setInt32(r, 1, _ss_quantity15308);
                tbl_JOIN_INNER_TD_12533_output.setInt32(r, 2, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_12533_output.setInt32(r, 3, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12533_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12533_key_rightMajor, SW_JOIN_INNER_TD_12533_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13117_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_13117_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12533_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_13117_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12533_payload_rightMajor payloadA{_c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13663_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk15301_k = tbl_Filter_TD_13663_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12533_key_rightMajor{_ss_customer_sk15301_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk15298 = tbl_Filter_TD_13663_output.getInt32(i, 0);
                int32_t _ss_customer_sk15301 = tbl_Filter_TD_13663_output.getInt32(i, 1);
                int32_t _ss_quantity15308 = tbl_Filter_TD_13663_output.getInt32(i, 2);
                int32_t _ss_sales_price15311 = tbl_Filter_TD_13663_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_12533_output.setInt32(r, 3, _c_customer_sk0);
                tbl_JOIN_INNER_TD_12533_output.setInt32(r, 0, _ss_sold_date_sk15298);
                tbl_JOIN_INNER_TD_12533_output.setInt32(r, 1, _ss_quantity15308);
                tbl_JOIN_INNER_TD_12533_output.setInt32(r, 2, _ss_sales_price15311);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12533_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12533_output #Row: " << tbl_JOIN_INNER_TD_12533_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12949_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_12949_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12949_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12949_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_12949_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_12949_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_12949_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12949_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12949_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_12949_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_desc232;
};
void SW_JOIN_INNER_TD_12949(Table &tbl_JOIN_INNER_TD_13227_output, Table &tbl_Filter_TD_13146_output, Table &tbl_JOIN_INNER_TD_12949_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, d_date#122)
    // Right Table: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output Table: ListBuffer(d_date#122, i_item_sk#228, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_13227_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13146_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12949_key_leftMajor, SW_JOIN_INNER_TD_12949_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13227_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_13227_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12949_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13227_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_13227_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_12949_payload_leftMajor payloadA{_ss_item_sk1208, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13146_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13146_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12949_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _i_item_sk228 = tbl_Filter_TD_13146_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_13146_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_12949_output.setInt32(r, 0, _d_date122);
                tbl_JOIN_INNER_TD_12949_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_12949_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12949_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12949_key_rightMajor, SW_JOIN_INNER_TD_12949_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13146_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13146_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12949_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_13146_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_13146_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_12949_payload_rightMajor payloadA{_i_item_sk228, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13227_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_13227_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12949_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13227_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_13227_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_12949_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_12949_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_12949_output.setInt32(r, 0, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12949_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12949_output #Row: " << tbl_JOIN_INNER_TD_12949_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12879(Table &tbl_SerializeFromObject_TD_13351_input, Table &tbl_Filter_TD_12879_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#15327 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#15321)))
    // Input: ListBuffer(d_date_sk#15321, d_year#15327)
    // Output: ListBuffer(d_date_sk#15321)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13351_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year15327 = tbl_SerializeFromObject_TD_13351_input.getInt32(i, 1);
        int32_t _d_date_sk15321 = tbl_SerializeFromObject_TD_13351_input.getInt32(i, 0);
        auto reuse_col_str_663 = _d_year15327;
        if (((reuse_col_str_663 == 2000) || (reuse_col_str_663 == 2001) || (reuse_col_str_663 == 2002) || (reuse_col_str_663 == 2003) || (0)) && (_d_date_sk15321!= 0)) {
            int32_t _d_date_sk15321_t = tbl_SerializeFromObject_TD_13351_input.getInt32(i, 0);
            tbl_Filter_TD_12879_output.setInt32(r, 0, _d_date_sk15321_t);
            r++;
        }
    }
    tbl_Filter_TD_12879_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12879_output #Row: " << tbl_Filter_TD_12879_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12863_key_leftMajor {
    int32_t _ss_customer_sk15301;
    bool operator==(const SW_JOIN_INNER_TD_12863_key_leftMajor& other) const {
        return ((_ss_customer_sk15301 == other._ss_customer_sk15301));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12863_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12863_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk15301));
    }
};
}
struct SW_JOIN_INNER_TD_12863_payload_leftMajor {
    int32_t _ss_sold_date_sk15298;
    int32_t _ss_customer_sk15301;
    int32_t _ss_quantity15308;
    int32_t _ss_sales_price15311;
};
struct SW_JOIN_INNER_TD_12863_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_12863_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12863_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12863_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_12863_payload_rightMajor {
    int32_t _c_customer_sk0;
};
void SW_JOIN_INNER_TD_12863(Table &tbl_Filter_TD_13522_output, Table &tbl_Filter_TD_13254_output, Table &tbl_JOIN_INNER_TD_12863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#15301 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    // Right Table: ListBuffer(c_customer_sk#0)
    // Output Table: ListBuffer(ss_sold_date_sk#15298, ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    int left_nrow = tbl_Filter_TD_13522_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13254_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12863_key_leftMajor, SW_JOIN_INNER_TD_12863_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_13522_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk15301_k = tbl_Filter_TD_13522_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_12863_key_leftMajor keyA{_ss_customer_sk15301_k};
            int32_t _ss_sold_date_sk15298 = tbl_Filter_TD_13522_output.getInt32(i, 0);
            int32_t _ss_customer_sk15301 = tbl_Filter_TD_13522_output.getInt32(i, 1);
            int32_t _ss_quantity15308 = tbl_Filter_TD_13522_output.getInt32(i, 2);
            int32_t _ss_sales_price15311 = tbl_Filter_TD_13522_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_12863_payload_leftMajor payloadA{_ss_sold_date_sk15298, _ss_customer_sk15301, _ss_quantity15308, _ss_sales_price15311};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13254_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_13254_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12863_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk15298 = (it->second)._ss_sold_date_sk15298;
                int32_t _ss_customer_sk15301 = (it->second)._ss_customer_sk15301;
                int32_t _ss_quantity15308 = (it->second)._ss_quantity15308;
                int32_t _ss_sales_price15311 = (it->second)._ss_sales_price15311;
                int32_t _c_customer_sk0 = tbl_Filter_TD_13254_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_12863_output.setInt32(r, 0, _ss_sold_date_sk15298);
                tbl_JOIN_INNER_TD_12863_output.setInt32(r, 1, _ss_quantity15308);
                tbl_JOIN_INNER_TD_12863_output.setInt32(r, 2, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_12863_output.setInt32(r, 3, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12863_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12863_key_rightMajor, SW_JOIN_INNER_TD_12863_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13254_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_13254_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12863_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_13254_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12863_payload_rightMajor payloadA{_c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13522_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk15301_k = tbl_Filter_TD_13522_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12863_key_rightMajor{_ss_customer_sk15301_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk15298 = tbl_Filter_TD_13522_output.getInt32(i, 0);
                int32_t _ss_customer_sk15301 = tbl_Filter_TD_13522_output.getInt32(i, 1);
                int32_t _ss_quantity15308 = tbl_Filter_TD_13522_output.getInt32(i, 2);
                int32_t _ss_sales_price15311 = tbl_Filter_TD_13522_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_12863_output.setInt32(r, 3, _c_customer_sk0);
                tbl_JOIN_INNER_TD_12863_output.setInt32(r, 0, _ss_sold_date_sk15298);
                tbl_JOIN_INNER_TD_12863_output.setInt32(r, 1, _ss_quantity15308);
                tbl_JOIN_INNER_TD_12863_output.setInt32(r, 2, _ss_sales_price15311);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12863_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12863_output #Row: " << tbl_JOIN_INNER_TD_12863_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1256(Table &tbl_SerializeFromObject_TD_13276_input, Table &tbl_Filter_TD_1256_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#15327 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#15321)))
    // Input: ListBuffer(d_date_sk#15321, d_year#15327)
    // Output: ListBuffer(d_date_sk#15321)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13276_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year15327 = tbl_SerializeFromObject_TD_13276_input.getInt32(i, 1);
        int32_t _d_date_sk15321 = tbl_SerializeFromObject_TD_13276_input.getInt32(i, 0);
        auto reuse_col_str_111 = _d_year15327;
        if (((reuse_col_str_111 == 2000) || (reuse_col_str_111 == 2001) || (reuse_col_str_111 == 2002) || (reuse_col_str_111 == 2003) || (0)) && (_d_date_sk15321!= 0)) {
            int32_t _d_date_sk15321_t = tbl_SerializeFromObject_TD_13276_input.getInt32(i, 0);
            tbl_Filter_TD_1256_output.setInt32(r, 0, _d_date_sk15321_t);
            r++;
        }
    }
    tbl_Filter_TD_1256_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1256_output #Row: " << tbl_Filter_TD_1256_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12888_key_leftMajor {
    int32_t _ss_customer_sk15301;
    bool operator==(const SW_JOIN_INNER_TD_12888_key_leftMajor& other) const {
        return ((_ss_customer_sk15301 == other._ss_customer_sk15301));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12888_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12888_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk15301));
    }
};
}
struct SW_JOIN_INNER_TD_12888_payload_leftMajor {
    int32_t _ss_sold_date_sk15298;
    int32_t _ss_customer_sk15301;
    int32_t _ss_quantity15308;
    int32_t _ss_sales_price15311;
};
struct SW_JOIN_INNER_TD_12888_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_12888_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12888_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12888_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_12888_payload_rightMajor {
    int32_t _c_customer_sk0;
};
void SW_JOIN_INNER_TD_12888(Table &tbl_Filter_TD_13938_output, Table &tbl_Filter_TD_13842_output, Table &tbl_JOIN_INNER_TD_12888_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#15301 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_sold_date_sk#15298, ss_customer_sk#15301, ss_quantity#15308, ss_sales_price#15311)
    // Right Table: ListBuffer(c_customer_sk#0)
    // Output Table: ListBuffer(ss_sold_date_sk#15298, ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    int left_nrow = tbl_Filter_TD_13938_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13842_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12888_key_leftMajor, SW_JOIN_INNER_TD_12888_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_13938_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk15301_k = tbl_Filter_TD_13938_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_12888_key_leftMajor keyA{_ss_customer_sk15301_k};
            int32_t _ss_sold_date_sk15298 = tbl_Filter_TD_13938_output.getInt32(i, 0);
            int32_t _ss_customer_sk15301 = tbl_Filter_TD_13938_output.getInt32(i, 1);
            int32_t _ss_quantity15308 = tbl_Filter_TD_13938_output.getInt32(i, 2);
            int32_t _ss_sales_price15311 = tbl_Filter_TD_13938_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_12888_payload_leftMajor payloadA{_ss_sold_date_sk15298, _ss_customer_sk15301, _ss_quantity15308, _ss_sales_price15311};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13842_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_13842_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12888_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk15298 = (it->second)._ss_sold_date_sk15298;
                int32_t _ss_customer_sk15301 = (it->second)._ss_customer_sk15301;
                int32_t _ss_quantity15308 = (it->second)._ss_quantity15308;
                int32_t _ss_sales_price15311 = (it->second)._ss_sales_price15311;
                int32_t _c_customer_sk0 = tbl_Filter_TD_13842_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_12888_output.setInt32(r, 0, _ss_sold_date_sk15298);
                tbl_JOIN_INNER_TD_12888_output.setInt32(r, 1, _ss_quantity15308);
                tbl_JOIN_INNER_TD_12888_output.setInt32(r, 2, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_12888_output.setInt32(r, 3, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12888_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12888_key_rightMajor, SW_JOIN_INNER_TD_12888_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13842_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_13842_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12888_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_13842_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12888_payload_rightMajor payloadA{_c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13938_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk15301_k = tbl_Filter_TD_13938_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12888_key_rightMajor{_ss_customer_sk15301_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk15298 = tbl_Filter_TD_13938_output.getInt32(i, 0);
                int32_t _ss_customer_sk15301 = tbl_Filter_TD_13938_output.getInt32(i, 1);
                int32_t _ss_quantity15308 = tbl_Filter_TD_13938_output.getInt32(i, 2);
                int32_t _ss_sales_price15311 = tbl_Filter_TD_13938_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_12888_output.setInt32(r, 3, _c_customer_sk0);
                tbl_JOIN_INNER_TD_12888_output.setInt32(r, 0, _ss_sold_date_sk15298);
                tbl_JOIN_INNER_TD_12888_output.setInt32(r, 1, _ss_quantity15308);
                tbl_JOIN_INNER_TD_12888_output.setInt32(r, 2, _ss_sales_price15311);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12888_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12888_output #Row: " << tbl_JOIN_INNER_TD_12888_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12484_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_12484_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12484_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12484_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_12484_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_12484_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_12484_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12484_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12484_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_12484_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_desc232;
};
void SW_JOIN_INNER_TD_12484(Table &tbl_JOIN_INNER_TD_13946_output, Table &tbl_Filter_TD_13640_output, Table &tbl_JOIN_INNER_TD_12484_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, d_date#122)
    // Right Table: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output Table: ListBuffer(d_date#122, i_item_sk#228, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_13946_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13640_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12484_key_leftMajor, SW_JOIN_INNER_TD_12484_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13946_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_13946_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12484_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13946_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_13946_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_12484_payload_leftMajor payloadA{_ss_item_sk1208, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13640_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13640_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12484_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _i_item_sk228 = tbl_Filter_TD_13640_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_13640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_12484_output.setInt32(r, 0, _d_date122);
                tbl_JOIN_INNER_TD_12484_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_12484_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12484_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12484_key_rightMajor, SW_JOIN_INNER_TD_12484_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13640_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13640_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12484_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_13640_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_13640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_12484_payload_rightMajor payloadA{_i_item_sk228, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13946_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_13946_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12484_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13946_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_13946_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_12484_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_12484_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_12484_output.setInt32(r, 0, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12484_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12484_output #Row: " << tbl_JOIN_INNER_TD_12484_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11233_key_leftMajor {
    int32_t _ss_sold_date_sk15298;
    bool operator==(const SW_JOIN_INNER_TD_11233_key_leftMajor& other) const {
        return ((_ss_sold_date_sk15298 == other._ss_sold_date_sk15298));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11233_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11233_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk15298));
    }
};
}
struct SW_JOIN_INNER_TD_11233_payload_leftMajor {
    int32_t _ss_sold_date_sk15298;
    int32_t _ss_quantity15308;
    int32_t _ss_sales_price15311;
    int32_t _c_customer_sk0;
};
struct SW_JOIN_INNER_TD_11233_key_rightMajor {
    int32_t _d_date_sk15321;
    bool operator==(const SW_JOIN_INNER_TD_11233_key_rightMajor& other) const {
        return ((_d_date_sk15321 == other._d_date_sk15321));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11233_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11233_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk15321));
    }
};
}
struct SW_JOIN_INNER_TD_11233_payload_rightMajor {
    int32_t _d_date_sk15321;
};
void SW_JOIN_INNER_TD_11233(Table &tbl_JOIN_INNER_TD_12759_output, Table &tbl_Filter_TD_12201_output, Table &tbl_JOIN_INNER_TD_11233_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#15298 = d_date_sk#15321))
    // Left Table: ListBuffer(ss_sold_date_sk#15298, ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    // Right Table: ListBuffer(d_date_sk#15321)
    // Output Table: ListBuffer(ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    int left_nrow = tbl_JOIN_INNER_TD_12759_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12201_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11233_key_leftMajor, SW_JOIN_INNER_TD_11233_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12759_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk15298_k = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11233_key_leftMajor keyA{_ss_sold_date_sk15298_k};
            int32_t _ss_sold_date_sk15298 = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 0);
            int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 1);
            int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 2);
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11233_payload_leftMajor payloadA{_ss_sold_date_sk15298, _ss_quantity15308, _ss_sales_price15311, _c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12201_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk15321_k = tbl_Filter_TD_12201_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11233_key_leftMajor{_d_date_sk15321_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk15298 = (it->second)._ss_sold_date_sk15298;
                int32_t _ss_quantity15308 = (it->second)._ss_quantity15308;
                int32_t _ss_sales_price15311 = (it->second)._ss_sales_price15311;
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _d_date_sk15321 = tbl_Filter_TD_12201_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 0, _ss_quantity15308);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 1, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 2, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11233_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11233_key_rightMajor, SW_JOIN_INNER_TD_11233_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12201_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk15321_k = tbl_Filter_TD_12201_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11233_key_rightMajor keyA{_d_date_sk15321_k};
            int32_t _d_date_sk15321 = tbl_Filter_TD_12201_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11233_payload_rightMajor payloadA{_d_date_sk15321};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12759_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk15298_k = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11233_key_rightMajor{_ss_sold_date_sk15298_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk15321 = (it->second)._d_date_sk15321;
                int32_t _ss_sold_date_sk15298 = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 0);
                int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 1);
                int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 2);
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_12759_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 0, _ss_quantity15308);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 1, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 2, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11233_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11233_output #Row: " << tbl_JOIN_INNER_TD_11233_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11663(Table &tbl_SerializeFromObject_TD_12570_input, Table &tbl_Filter_TD_11663_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#15372))
    // Input: ListBuffer(c_customer_sk#15372)
    // Output: ListBuffer(c_customer_sk#15372)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12570_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk15372 = tbl_SerializeFromObject_TD_12570_input.getInt32(i, 0);
        if (_c_customer_sk15372!= 0) {
            int32_t _c_customer_sk15372_t = tbl_SerializeFromObject_TD_12570_input.getInt32(i, 0);
            tbl_Filter_TD_11663_output.setInt32(r, 0, _c_customer_sk15372_t);
            r++;
        }
    }
    tbl_Filter_TD_11663_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11663_output #Row: " << tbl_Filter_TD_11663_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1135(Table &tbl_SerializeFromObject_TD_12474_input, Table &tbl_Filter_TD_1135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_customer_sk#15352))
    // Input: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    // Output: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12474_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk15352 = tbl_SerializeFromObject_TD_12474_input.getInt32(i, 0);
        if (_ss_customer_sk15352!= 0) {
            int32_t _ss_customer_sk15352_t = tbl_SerializeFromObject_TD_12474_input.getInt32(i, 0);
            tbl_Filter_TD_1135_output.setInt32(r, 0, _ss_customer_sk15352_t);
            int32_t _ss_quantity15359_t = tbl_SerializeFromObject_TD_12474_input.getInt32(i, 1);
            tbl_Filter_TD_1135_output.setInt32(r, 1, _ss_quantity15359_t);
            int32_t _ss_sales_price15362_t = tbl_SerializeFromObject_TD_12474_input.getInt32(i, 2);
            tbl_Filter_TD_1135_output.setInt32(r, 2, _ss_sales_price15362_t);
            r++;
        }
    }
    tbl_Filter_TD_1135_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1135_output #Row: " << tbl_Filter_TD_1135_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11921_key_leftMajor {
    int32_t _ss_sold_date_sk15298;
    bool operator==(const SW_JOIN_INNER_TD_11921_key_leftMajor& other) const {
        return ((_ss_sold_date_sk15298 == other._ss_sold_date_sk15298));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11921_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11921_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk15298));
    }
};
}
struct SW_JOIN_INNER_TD_11921_payload_leftMajor {
    int32_t _ss_sold_date_sk15298;
    int32_t _ss_quantity15308;
    int32_t _ss_sales_price15311;
    int32_t _c_customer_sk0;
};
struct SW_JOIN_INNER_TD_11921_key_rightMajor {
    int32_t _d_date_sk15321;
    bool operator==(const SW_JOIN_INNER_TD_11921_key_rightMajor& other) const {
        return ((_d_date_sk15321 == other._d_date_sk15321));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11921_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11921_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk15321));
    }
};
}
struct SW_JOIN_INNER_TD_11921_payload_rightMajor {
    int32_t _d_date_sk15321;
};
void SW_JOIN_INNER_TD_11921(Table &tbl_JOIN_INNER_TD_12533_output, Table &tbl_Filter_TD_12161_output, Table &tbl_JOIN_INNER_TD_11921_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#15298 = d_date_sk#15321))
    // Left Table: ListBuffer(ss_sold_date_sk#15298, ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    // Right Table: ListBuffer(d_date_sk#15321)
    // Output Table: ListBuffer(ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    int left_nrow = tbl_JOIN_INNER_TD_12533_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12161_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11921_key_leftMajor, SW_JOIN_INNER_TD_11921_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12533_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk15298_k = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11921_key_leftMajor keyA{_ss_sold_date_sk15298_k};
            int32_t _ss_sold_date_sk15298 = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 0);
            int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 1);
            int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 2);
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11921_payload_leftMajor payloadA{_ss_sold_date_sk15298, _ss_quantity15308, _ss_sales_price15311, _c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12161_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk15321_k = tbl_Filter_TD_12161_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11921_key_leftMajor{_d_date_sk15321_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk15298 = (it->second)._ss_sold_date_sk15298;
                int32_t _ss_quantity15308 = (it->second)._ss_quantity15308;
                int32_t _ss_sales_price15311 = (it->second)._ss_sales_price15311;
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _d_date_sk15321 = tbl_Filter_TD_12161_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11921_output.setInt32(r, 0, _ss_quantity15308);
                tbl_JOIN_INNER_TD_11921_output.setInt32(r, 1, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_11921_output.setInt32(r, 2, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11921_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11921_key_rightMajor, SW_JOIN_INNER_TD_11921_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12161_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk15321_k = tbl_Filter_TD_12161_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11921_key_rightMajor keyA{_d_date_sk15321_k};
            int32_t _d_date_sk15321 = tbl_Filter_TD_12161_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11921_payload_rightMajor payloadA{_d_date_sk15321};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12533_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk15298_k = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11921_key_rightMajor{_ss_sold_date_sk15298_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk15321 = (it->second)._d_date_sk15321;
                int32_t _ss_sold_date_sk15298 = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 0);
                int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 1);
                int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 2);
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_12533_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11921_output.setInt32(r, 0, _ss_quantity15308);
                tbl_JOIN_INNER_TD_11921_output.setInt32(r, 1, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_11921_output.setInt32(r, 2, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11921_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11921_output #Row: " << tbl_JOIN_INNER_TD_11921_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11729(Table &tbl_SerializeFromObject_TD_12970_input, Table &tbl_Filter_TD_11729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#15372))
    // Input: ListBuffer(c_customer_sk#15372)
    // Output: ListBuffer(c_customer_sk#15372)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12970_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk15372 = tbl_SerializeFromObject_TD_12970_input.getInt32(i, 0);
        if (_c_customer_sk15372!= 0) {
            int32_t _c_customer_sk15372_t = tbl_SerializeFromObject_TD_12970_input.getInt32(i, 0);
            tbl_Filter_TD_11729_output.setInt32(r, 0, _c_customer_sk15372_t);
            r++;
        }
    }
    tbl_Filter_TD_11729_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11729_output #Row: " << tbl_Filter_TD_11729_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11755(Table &tbl_SerializeFromObject_TD_12839_input, Table &tbl_Filter_TD_11755_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_customer_sk#15352))
    // Input: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    // Output: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12839_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk15352 = tbl_SerializeFromObject_TD_12839_input.getInt32(i, 0);
        if (_ss_customer_sk15352!= 0) {
            int32_t _ss_customer_sk15352_t = tbl_SerializeFromObject_TD_12839_input.getInt32(i, 0);
            tbl_Filter_TD_11755_output.setInt32(r, 0, _ss_customer_sk15352_t);
            int32_t _ss_quantity15359_t = tbl_SerializeFromObject_TD_12839_input.getInt32(i, 1);
            tbl_Filter_TD_11755_output.setInt32(r, 1, _ss_quantity15359_t);
            int32_t _ss_sales_price15362_t = tbl_SerializeFromObject_TD_12839_input.getInt32(i, 2);
            tbl_Filter_TD_11755_output.setInt32(r, 2, _ss_sales_price15362_t);
            r++;
        }
    }
    tbl_Filter_TD_11755_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11755_output #Row: " << tbl_Filter_TD_11755_output.getNumRow() << std::endl;
}

void SW_Project_TD_11749(Table &tbl_JOIN_INNER_TD_12949_output, Table &tbl_Project_TD_11749_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(substr(i_item_desc#232, 1, 30) AS _groupingexpression#15741)
    // Input: ListBuffer(d_date#122, i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(d_date#122, i_item_sk#228, _groupingexpression#15741)
    int nrow1 = tbl_JOIN_INNER_TD_12949_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_JOIN_INNER_TD_12949_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_12949_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_12949_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::string __groupingexpression15741_str = std::string(_i_item_desc232.data()).substr(0, 30);
        std::array<char, TPCDS_READ_MAX + 1> __groupingexpression15741{};
        memcpy(__groupingexpression15741.data(), __groupingexpression15741_str.data(), (__groupingexpression15741_str).length());
        tbl_Project_TD_11749_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, __groupingexpression15741);
        tbl_Project_TD_11749_output.setInt32(i, 0, _d_date122);
        tbl_Project_TD_11749_output.setInt32(i, 1, _i_item_sk228);
    }
    tbl_Project_TD_11749_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_11749_output #Row: " << tbl_Project_TD_11749_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11848_key_leftMajor {
    int32_t _ss_sold_date_sk15298;
    bool operator==(const SW_JOIN_INNER_TD_11848_key_leftMajor& other) const {
        return ((_ss_sold_date_sk15298 == other._ss_sold_date_sk15298));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11848_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11848_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk15298));
    }
};
}
struct SW_JOIN_INNER_TD_11848_payload_leftMajor {
    int32_t _ss_sold_date_sk15298;
    int32_t _ss_quantity15308;
    int32_t _ss_sales_price15311;
    int32_t _c_customer_sk0;
};
struct SW_JOIN_INNER_TD_11848_key_rightMajor {
    int32_t _d_date_sk15321;
    bool operator==(const SW_JOIN_INNER_TD_11848_key_rightMajor& other) const {
        return ((_d_date_sk15321 == other._d_date_sk15321));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11848_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11848_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk15321));
    }
};
}
struct SW_JOIN_INNER_TD_11848_payload_rightMajor {
    int32_t _d_date_sk15321;
};
void SW_JOIN_INNER_TD_11848(Table &tbl_JOIN_INNER_TD_12863_output, Table &tbl_Filter_TD_12879_output, Table &tbl_JOIN_INNER_TD_11848_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#15298 = d_date_sk#15321))
    // Left Table: ListBuffer(ss_sold_date_sk#15298, ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    // Right Table: ListBuffer(d_date_sk#15321)
    // Output Table: ListBuffer(ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    int left_nrow = tbl_JOIN_INNER_TD_12863_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12879_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11848_key_leftMajor, SW_JOIN_INNER_TD_11848_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12863_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk15298_k = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11848_key_leftMajor keyA{_ss_sold_date_sk15298_k};
            int32_t _ss_sold_date_sk15298 = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 0);
            int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 1);
            int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 2);
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11848_payload_leftMajor payloadA{_ss_sold_date_sk15298, _ss_quantity15308, _ss_sales_price15311, _c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12879_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk15321_k = tbl_Filter_TD_12879_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11848_key_leftMajor{_d_date_sk15321_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk15298 = (it->second)._ss_sold_date_sk15298;
                int32_t _ss_quantity15308 = (it->second)._ss_quantity15308;
                int32_t _ss_sales_price15311 = (it->second)._ss_sales_price15311;
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _d_date_sk15321 = tbl_Filter_TD_12879_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11848_output.setInt32(r, 0, _ss_quantity15308);
                tbl_JOIN_INNER_TD_11848_output.setInt32(r, 1, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_11848_output.setInt32(r, 2, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11848_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11848_key_rightMajor, SW_JOIN_INNER_TD_11848_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12879_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk15321_k = tbl_Filter_TD_12879_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11848_key_rightMajor keyA{_d_date_sk15321_k};
            int32_t _d_date_sk15321 = tbl_Filter_TD_12879_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11848_payload_rightMajor payloadA{_d_date_sk15321};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12863_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk15298_k = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11848_key_rightMajor{_ss_sold_date_sk15298_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk15321 = (it->second)._d_date_sk15321;
                int32_t _ss_sold_date_sk15298 = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 0);
                int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 1);
                int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 2);
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_12863_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11848_output.setInt32(r, 0, _ss_quantity15308);
                tbl_JOIN_INNER_TD_11848_output.setInt32(r, 1, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_11848_output.setInt32(r, 2, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11848_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11848_output #Row: " << tbl_JOIN_INNER_TD_11848_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11964(Table &tbl_SerializeFromObject_TD_12265_input, Table &tbl_Filter_TD_11964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#15372))
    // Input: ListBuffer(c_customer_sk#15372)
    // Output: ListBuffer(c_customer_sk#15372)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12265_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk15372 = tbl_SerializeFromObject_TD_12265_input.getInt32(i, 0);
        if (_c_customer_sk15372!= 0) {
            int32_t _c_customer_sk15372_t = tbl_SerializeFromObject_TD_12265_input.getInt32(i, 0);
            tbl_Filter_TD_11964_output.setInt32(r, 0, _c_customer_sk15372_t);
            r++;
        }
    }
    tbl_Filter_TD_11964_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11964_output #Row: " << tbl_Filter_TD_11964_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11982(Table &tbl_SerializeFromObject_TD_12760_input, Table &tbl_Filter_TD_11982_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_customer_sk#15352))
    // Input: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    // Output: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12760_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk15352 = tbl_SerializeFromObject_TD_12760_input.getInt32(i, 0);
        if (_ss_customer_sk15352!= 0) {
            int32_t _ss_customer_sk15352_t = tbl_SerializeFromObject_TD_12760_input.getInt32(i, 0);
            tbl_Filter_TD_11982_output.setInt32(r, 0, _ss_customer_sk15352_t);
            int32_t _ss_quantity15359_t = tbl_SerializeFromObject_TD_12760_input.getInt32(i, 1);
            tbl_Filter_TD_11982_output.setInt32(r, 1, _ss_quantity15359_t);
            int32_t _ss_sales_price15362_t = tbl_SerializeFromObject_TD_12760_input.getInt32(i, 2);
            tbl_Filter_TD_11982_output.setInt32(r, 2, _ss_sales_price15362_t);
            r++;
        }
    }
    tbl_Filter_TD_11982_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11982_output #Row: " << tbl_Filter_TD_11982_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11124_key_leftMajor {
    int32_t _ss_sold_date_sk15298;
    bool operator==(const SW_JOIN_INNER_TD_11124_key_leftMajor& other) const {
        return ((_ss_sold_date_sk15298 == other._ss_sold_date_sk15298));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11124_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11124_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk15298));
    }
};
}
struct SW_JOIN_INNER_TD_11124_payload_leftMajor {
    int32_t _ss_sold_date_sk15298;
    int32_t _ss_quantity15308;
    int32_t _ss_sales_price15311;
    int32_t _c_customer_sk0;
};
struct SW_JOIN_INNER_TD_11124_key_rightMajor {
    int32_t _d_date_sk15321;
    bool operator==(const SW_JOIN_INNER_TD_11124_key_rightMajor& other) const {
        return ((_d_date_sk15321 == other._d_date_sk15321));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11124_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11124_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk15321));
    }
};
}
struct SW_JOIN_INNER_TD_11124_payload_rightMajor {
    int32_t _d_date_sk15321;
};
void SW_JOIN_INNER_TD_11124(Table &tbl_JOIN_INNER_TD_12888_output, Table &tbl_Filter_TD_1256_output, Table &tbl_JOIN_INNER_TD_11124_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#15298 = d_date_sk#15321))
    // Left Table: ListBuffer(ss_sold_date_sk#15298, ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    // Right Table: ListBuffer(d_date_sk#15321)
    // Output Table: ListBuffer(ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    int left_nrow = tbl_JOIN_INNER_TD_12888_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1256_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11124_key_leftMajor, SW_JOIN_INNER_TD_11124_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12888_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk15298_k = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11124_key_leftMajor keyA{_ss_sold_date_sk15298_k};
            int32_t _ss_sold_date_sk15298 = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 0);
            int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 1);
            int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 2);
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11124_payload_leftMajor payloadA{_ss_sold_date_sk15298, _ss_quantity15308, _ss_sales_price15311, _c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1256_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk15321_k = tbl_Filter_TD_1256_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11124_key_leftMajor{_d_date_sk15321_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk15298 = (it->second)._ss_sold_date_sk15298;
                int32_t _ss_quantity15308 = (it->second)._ss_quantity15308;
                int32_t _ss_sales_price15311 = (it->second)._ss_sales_price15311;
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _d_date_sk15321 = tbl_Filter_TD_1256_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11124_output.setInt32(r, 0, _ss_quantity15308);
                tbl_JOIN_INNER_TD_11124_output.setInt32(r, 1, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_11124_output.setInt32(r, 2, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11124_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11124_key_rightMajor, SW_JOIN_INNER_TD_11124_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1256_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk15321_k = tbl_Filter_TD_1256_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11124_key_rightMajor keyA{_d_date_sk15321_k};
            int32_t _d_date_sk15321 = tbl_Filter_TD_1256_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11124_payload_rightMajor payloadA{_d_date_sk15321};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12888_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk15298_k = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11124_key_rightMajor{_ss_sold_date_sk15298_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk15321 = (it->second)._d_date_sk15321;
                int32_t _ss_sold_date_sk15298 = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 0);
                int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 1);
                int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 2);
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_12888_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11124_output.setInt32(r, 0, _ss_quantity15308);
                tbl_JOIN_INNER_TD_11124_output.setInt32(r, 1, _ss_sales_price15311);
                tbl_JOIN_INNER_TD_11124_output.setInt32(r, 2, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11124_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11124_output #Row: " << tbl_JOIN_INNER_TD_11124_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1141(Table &tbl_SerializeFromObject_TD_12414_input, Table &tbl_Filter_TD_1141_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#15372))
    // Input: ListBuffer(c_customer_sk#15372)
    // Output: ListBuffer(c_customer_sk#15372)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12414_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk15372 = tbl_SerializeFromObject_TD_12414_input.getInt32(i, 0);
        if (_c_customer_sk15372!= 0) {
            int32_t _c_customer_sk15372_t = tbl_SerializeFromObject_TD_12414_input.getInt32(i, 0);
            tbl_Filter_TD_1141_output.setInt32(r, 0, _c_customer_sk15372_t);
            r++;
        }
    }
    tbl_Filter_TD_1141_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1141_output #Row: " << tbl_Filter_TD_1141_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11326(Table &tbl_SerializeFromObject_TD_12765_input, Table &tbl_Filter_TD_11326_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_customer_sk#15352))
    // Input: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    // Output: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12765_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk15352 = tbl_SerializeFromObject_TD_12765_input.getInt32(i, 0);
        if (_ss_customer_sk15352!= 0) {
            int32_t _ss_customer_sk15352_t = tbl_SerializeFromObject_TD_12765_input.getInt32(i, 0);
            tbl_Filter_TD_11326_output.setInt32(r, 0, _ss_customer_sk15352_t);
            int32_t _ss_quantity15359_t = tbl_SerializeFromObject_TD_12765_input.getInt32(i, 1);
            tbl_Filter_TD_11326_output.setInt32(r, 1, _ss_quantity15359_t);
            int32_t _ss_sales_price15362_t = tbl_SerializeFromObject_TD_12765_input.getInt32(i, 2);
            tbl_Filter_TD_11326_output.setInt32(r, 2, _ss_sales_price15362_t);
            r++;
        }
    }
    tbl_Filter_TD_11326_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11326_output #Row: " << tbl_Filter_TD_11326_output.getNumRow() << std::endl;
}

void SW_Project_TD_11265(Table &tbl_JOIN_INNER_TD_12484_output, Table &tbl_Project_TD_11265_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(substr(i_item_desc#232, 1, 30) AS _groupingexpression#15740)
    // Input: ListBuffer(d_date#122, i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(d_date#122, i_item_sk#228, _groupingexpression#15740)
    int nrow1 = tbl_JOIN_INNER_TD_12484_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_JOIN_INNER_TD_12484_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_12484_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_12484_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::string __groupingexpression15740_str = std::string(_i_item_desc232.data()).substr(0, 30);
        std::array<char, TPCDS_READ_MAX + 1> __groupingexpression15740{};
        memcpy(__groupingexpression15740.data(), __groupingexpression15740_str.data(), (__groupingexpression15740_str).length());
        tbl_Project_TD_11265_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, __groupingexpression15740);
        tbl_Project_TD_11265_output.setInt32(i, 0, _d_date122);
        tbl_Project_TD_11265_output.setInt32(i, 1, _i_item_sk228);
    }
    tbl_Project_TD_11265_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_11265_output #Row: " << tbl_Project_TD_11265_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10133_key;
struct SW_Aggregate_TD_10133_payload {
    int32_t _csales15294_sum_0;
};
void SW_Aggregate_TD_10133(Table &tbl_JOIN_INNER_TD_11233_output, Table &tbl_Aggregate_TD_10133_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#0, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#15308 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#15311 as decimal(12,2)))), DecimalType(18,2), true)) AS csales#15294)
    // Input: ListBuffer(ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    // Output: ListBuffer(csales#15294)
    std::unordered_map<SW_Aggregate_TD_10133_key, SW_Aggregate_TD_10133_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11233_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_11233_output.getInt32(i, 0);
        int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_11233_output.getInt32(i, 1);
        int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_11233_output.getInt32(i, 2);
        SW_Aggregate_TD_10133_key k = _c_customer_sk0;
        int64_t _csales15294_sum_0 = (_ss_quantity15308 * _ss_sales_price15311);
        SW_Aggregate_TD_10133_payload p{_csales15294_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._csales15294_sum_0 + _csales15294_sum_0;
            p._csales15294_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_sk0 not required in the output table
        int32_t _csales15294 = (it.second)._csales15294_sum_0;
        tbl_Aggregate_TD_10133_output.setInt32(r, 0, _csales15294);
        ++r;
    }
    tbl_Aggregate_TD_10133_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10133_output #Row: " << tbl_Aggregate_TD_10133_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10243_key_leftMajor {
    int32_t _ss_customer_sk15352;
    bool operator==(const SW_JOIN_INNER_TD_10243_key_leftMajor& other) const {
        return ((_ss_customer_sk15352 == other._ss_customer_sk15352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10243_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10243_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk15352));
    }
};
}
struct SW_JOIN_INNER_TD_10243_payload_leftMajor {
    int32_t _ss_customer_sk15352;
    int32_t _ss_quantity15359;
    int32_t _ss_sales_price15362;
};
struct SW_JOIN_INNER_TD_10243_key_rightMajor {
    int32_t _c_customer_sk15372;
    bool operator==(const SW_JOIN_INNER_TD_10243_key_rightMajor& other) const {
        return ((_c_customer_sk15372 == other._c_customer_sk15372));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10243_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10243_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15372));
    }
};
}
struct SW_JOIN_INNER_TD_10243_payload_rightMajor {
    int32_t _c_customer_sk15372;
};
void SW_JOIN_INNER_TD_10243(Table &tbl_Filter_TD_1135_output, Table &tbl_Filter_TD_11663_output, Table &tbl_JOIN_INNER_TD_10243_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#15352 = c_customer_sk#15372))
    // Left Table: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    // Right Table: ListBuffer(c_customer_sk#15372)
    // Output Table: ListBuffer(ss_quantity#15359, ss_sales_price#15362, c_customer_sk#15372)
    int left_nrow = tbl_Filter_TD_1135_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11663_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10243_key_leftMajor, SW_JOIN_INNER_TD_10243_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1135_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk15352_k = tbl_Filter_TD_1135_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10243_key_leftMajor keyA{_ss_customer_sk15352_k};
            int32_t _ss_customer_sk15352 = tbl_Filter_TD_1135_output.getInt32(i, 0);
            int32_t _ss_quantity15359 = tbl_Filter_TD_1135_output.getInt32(i, 1);
            int32_t _ss_sales_price15362 = tbl_Filter_TD_1135_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10243_payload_leftMajor payloadA{_ss_customer_sk15352, _ss_quantity15359, _ss_sales_price15362};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11663_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_11663_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10243_key_leftMajor{_c_customer_sk15372_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk15352 = (it->second)._ss_customer_sk15352;
                int32_t _ss_quantity15359 = (it->second)._ss_quantity15359;
                int32_t _ss_sales_price15362 = (it->second)._ss_sales_price15362;
                int32_t _c_customer_sk15372 = tbl_Filter_TD_11663_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10243_output.setInt32(r, 0, _ss_quantity15359);
                tbl_JOIN_INNER_TD_10243_output.setInt32(r, 1, _ss_sales_price15362);
                tbl_JOIN_INNER_TD_10243_output.setInt32(r, 2, _c_customer_sk15372);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10243_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10243_key_rightMajor, SW_JOIN_INNER_TD_10243_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11663_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_11663_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10243_key_rightMajor keyA{_c_customer_sk15372_k};
            int32_t _c_customer_sk15372 = tbl_Filter_TD_11663_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10243_payload_rightMajor payloadA{_c_customer_sk15372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1135_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk15352_k = tbl_Filter_TD_1135_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10243_key_rightMajor{_ss_customer_sk15352_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk15372 = (it->second)._c_customer_sk15372;
                int32_t _ss_customer_sk15352 = tbl_Filter_TD_1135_output.getInt32(i, 0);
                int32_t _ss_quantity15359 = tbl_Filter_TD_1135_output.getInt32(i, 1);
                int32_t _ss_sales_price15362 = tbl_Filter_TD_1135_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10243_output.setInt32(r, 2, _c_customer_sk15372);
                tbl_JOIN_INNER_TD_10243_output.setInt32(r, 0, _ss_quantity15359);
                tbl_JOIN_INNER_TD_10243_output.setInt32(r, 1, _ss_sales_price15362);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10243_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10243_output #Row: " << tbl_JOIN_INNER_TD_10243_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10251_key;
struct SW_Aggregate_TD_10251_payload {
    int32_t _csales15294_sum_0;
};
void SW_Aggregate_TD_10251(Table &tbl_JOIN_INNER_TD_11921_output, Table &tbl_Aggregate_TD_10251_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#0, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#15308 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#15311 as decimal(12,2)))), DecimalType(18,2), true)) AS csales#15294)
    // Input: ListBuffer(ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    // Output: ListBuffer(csales#15294)
    std::unordered_map<SW_Aggregate_TD_10251_key, SW_Aggregate_TD_10251_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11921_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_11921_output.getInt32(i, 0);
        int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_11921_output.getInt32(i, 1);
        int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_11921_output.getInt32(i, 2);
        SW_Aggregate_TD_10251_key k = _c_customer_sk0;
        int64_t _csales15294_sum_0 = (_ss_quantity15308 * _ss_sales_price15311);
        SW_Aggregate_TD_10251_payload p{_csales15294_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._csales15294_sum_0 + _csales15294_sum_0;
            p._csales15294_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_sk0 not required in the output table
        int32_t _csales15294 = (it.second)._csales15294_sum_0;
        tbl_Aggregate_TD_10251_output.setInt32(r, 0, _csales15294);
        ++r;
    }
    tbl_Aggregate_TD_10251_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10251_output #Row: " << tbl_Aggregate_TD_10251_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10944_key_leftMajor {
    int32_t _ss_customer_sk15352;
    bool operator==(const SW_JOIN_INNER_TD_10944_key_leftMajor& other) const {
        return ((_ss_customer_sk15352 == other._ss_customer_sk15352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10944_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10944_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk15352));
    }
};
}
struct SW_JOIN_INNER_TD_10944_payload_leftMajor {
    int32_t _ss_customer_sk15352;
    int32_t _ss_quantity15359;
    int32_t _ss_sales_price15362;
};
struct SW_JOIN_INNER_TD_10944_key_rightMajor {
    int32_t _c_customer_sk15372;
    bool operator==(const SW_JOIN_INNER_TD_10944_key_rightMajor& other) const {
        return ((_c_customer_sk15372 == other._c_customer_sk15372));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10944_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10944_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15372));
    }
};
}
struct SW_JOIN_INNER_TD_10944_payload_rightMajor {
    int32_t _c_customer_sk15372;
};
void SW_JOIN_INNER_TD_10944(Table &tbl_Filter_TD_11755_output, Table &tbl_Filter_TD_11729_output, Table &tbl_JOIN_INNER_TD_10944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#15352 = c_customer_sk#15372))
    // Left Table: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    // Right Table: ListBuffer(c_customer_sk#15372)
    // Output Table: ListBuffer(ss_quantity#15359, ss_sales_price#15362, c_customer_sk#15372)
    int left_nrow = tbl_Filter_TD_11755_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11729_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10944_key_leftMajor, SW_JOIN_INNER_TD_10944_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11755_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk15352_k = tbl_Filter_TD_11755_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10944_key_leftMajor keyA{_ss_customer_sk15352_k};
            int32_t _ss_customer_sk15352 = tbl_Filter_TD_11755_output.getInt32(i, 0);
            int32_t _ss_quantity15359 = tbl_Filter_TD_11755_output.getInt32(i, 1);
            int32_t _ss_sales_price15362 = tbl_Filter_TD_11755_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10944_payload_leftMajor payloadA{_ss_customer_sk15352, _ss_quantity15359, _ss_sales_price15362};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11729_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_11729_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10944_key_leftMajor{_c_customer_sk15372_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk15352 = (it->second)._ss_customer_sk15352;
                int32_t _ss_quantity15359 = (it->second)._ss_quantity15359;
                int32_t _ss_sales_price15362 = (it->second)._ss_sales_price15362;
                int32_t _c_customer_sk15372 = tbl_Filter_TD_11729_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 0, _ss_quantity15359);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 1, _ss_sales_price15362);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 2, _c_customer_sk15372);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10944_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10944_key_rightMajor, SW_JOIN_INNER_TD_10944_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11729_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_11729_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10944_key_rightMajor keyA{_c_customer_sk15372_k};
            int32_t _c_customer_sk15372 = tbl_Filter_TD_11729_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10944_payload_rightMajor payloadA{_c_customer_sk15372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11755_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk15352_k = tbl_Filter_TD_11755_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10944_key_rightMajor{_ss_customer_sk15352_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk15372 = (it->second)._c_customer_sk15372;
                int32_t _ss_customer_sk15352 = tbl_Filter_TD_11755_output.getInt32(i, 0);
                int32_t _ss_quantity15359 = tbl_Filter_TD_11755_output.getInt32(i, 1);
                int32_t _ss_sales_price15362 = tbl_Filter_TD_11755_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 2, _c_customer_sk15372);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 0, _ss_quantity15359);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 1, _ss_sales_price15362);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10944_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10944_output #Row: " << tbl_JOIN_INNER_TD_10944_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_10592_key {
    std::string __groupingexpression15741;
    int32_t _i_item_sk228;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_10592_key& other) const { return (__groupingexpression15741 == other.__groupingexpression15741) && (_i_item_sk228 == other._i_item_sk228) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_10592_key> {
    std::size_t operator() (const SW_Aggregate_TD_10592_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k.__groupingexpression15741)) + (hash<int32_t>()(k._i_item_sk228)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_10592_payload {
    int32_t _item_sk15291;
    int64_t _cnt15293L_count_0;
};
void SW_Aggregate_TD_10592(Table &tbl_Project_TD_11749_output, Table &tbl_Aggregate_TD_10592_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(_groupingexpression#15741, i_item_sk#228, d_date#122, i_item_sk#228 AS item_sk#15291, count(1) AS cnt#15293L)
    // Input: ListBuffer(d_date#122, i_item_sk#228, _groupingexpression#15741)
    // Output: ListBuffer(item_sk#15291, cnt#15293L)
    std::unordered_map<SW_Aggregate_TD_10592_key, SW_Aggregate_TD_10592_payload> ht1;
    int nrow1 = tbl_Project_TD_11749_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_Project_TD_11749_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_Project_TD_11749_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> __groupingexpression15741 = tbl_Project_TD_11749_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_10592_key k{std::string(__groupingexpression15741.data()), _i_item_sk228, _d_date122};
        int32_t _item_sk15291 = _i_item_sk228;
        int64_t _cnt15293L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_10592_payload p{_item_sk15291, _cnt15293L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt15293L_count_0 + _cnt15293L_count_0;
            p._cnt15293L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // __groupingexpression15741 not required in the output table
        // _i_item_sk228 not required in the output table
        // _d_date122 not required in the output table
        tbl_Aggregate_TD_10592_output.setInt32(r, 0, (it.second)._item_sk15291);
        int64_t _cnt15293L = (it.second)._cnt15293L_count_0;
        tbl_Aggregate_TD_10592_output.setInt64(r, 1, _cnt15293L);
        ++r;
    }
    tbl_Aggregate_TD_10592_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10592_output #Row: " << tbl_Aggregate_TD_10592_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10214_key;
struct SW_Aggregate_TD_10214_payload {
    int32_t _csales15294_sum_0;
};
void SW_Aggregate_TD_10214(Table &tbl_JOIN_INNER_TD_11848_output, Table &tbl_Aggregate_TD_10214_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#0, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#15308 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#15311 as decimal(12,2)))), DecimalType(18,2), true)) AS csales#15294)
    // Input: ListBuffer(ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    // Output: ListBuffer(csales#15294)
    std::unordered_map<SW_Aggregate_TD_10214_key, SW_Aggregate_TD_10214_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11848_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_11848_output.getInt32(i, 0);
        int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_11848_output.getInt32(i, 1);
        int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_11848_output.getInt32(i, 2);
        SW_Aggregate_TD_10214_key k = _c_customer_sk0;
        int64_t _csales15294_sum_0 = (_ss_quantity15308 * _ss_sales_price15311);
        SW_Aggregate_TD_10214_payload p{_csales15294_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._csales15294_sum_0 + _csales15294_sum_0;
            p._csales15294_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_sk0 not required in the output table
        int32_t _csales15294 = (it.second)._csales15294_sum_0;
        tbl_Aggregate_TD_10214_output.setInt32(r, 0, _csales15294);
        ++r;
    }
    tbl_Aggregate_TD_10214_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10214_output #Row: " << tbl_Aggregate_TD_10214_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10166_key_leftMajor {
    int32_t _ss_customer_sk15352;
    bool operator==(const SW_JOIN_INNER_TD_10166_key_leftMajor& other) const {
        return ((_ss_customer_sk15352 == other._ss_customer_sk15352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10166_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10166_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk15352));
    }
};
}
struct SW_JOIN_INNER_TD_10166_payload_leftMajor {
    int32_t _ss_customer_sk15352;
    int32_t _ss_quantity15359;
    int32_t _ss_sales_price15362;
};
struct SW_JOIN_INNER_TD_10166_key_rightMajor {
    int32_t _c_customer_sk15372;
    bool operator==(const SW_JOIN_INNER_TD_10166_key_rightMajor& other) const {
        return ((_c_customer_sk15372 == other._c_customer_sk15372));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10166_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10166_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15372));
    }
};
}
struct SW_JOIN_INNER_TD_10166_payload_rightMajor {
    int32_t _c_customer_sk15372;
};
void SW_JOIN_INNER_TD_10166(Table &tbl_Filter_TD_11982_output, Table &tbl_Filter_TD_11964_output, Table &tbl_JOIN_INNER_TD_10166_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#15352 = c_customer_sk#15372))
    // Left Table: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    // Right Table: ListBuffer(c_customer_sk#15372)
    // Output Table: ListBuffer(ss_quantity#15359, ss_sales_price#15362, c_customer_sk#15372)
    int left_nrow = tbl_Filter_TD_11982_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11964_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10166_key_leftMajor, SW_JOIN_INNER_TD_10166_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11982_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk15352_k = tbl_Filter_TD_11982_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10166_key_leftMajor keyA{_ss_customer_sk15352_k};
            int32_t _ss_customer_sk15352 = tbl_Filter_TD_11982_output.getInt32(i, 0);
            int32_t _ss_quantity15359 = tbl_Filter_TD_11982_output.getInt32(i, 1);
            int32_t _ss_sales_price15362 = tbl_Filter_TD_11982_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10166_payload_leftMajor payloadA{_ss_customer_sk15352, _ss_quantity15359, _ss_sales_price15362};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11964_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_11964_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10166_key_leftMajor{_c_customer_sk15372_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk15352 = (it->second)._ss_customer_sk15352;
                int32_t _ss_quantity15359 = (it->second)._ss_quantity15359;
                int32_t _ss_sales_price15362 = (it->second)._ss_sales_price15362;
                int32_t _c_customer_sk15372 = tbl_Filter_TD_11964_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10166_output.setInt32(r, 0, _ss_quantity15359);
                tbl_JOIN_INNER_TD_10166_output.setInt32(r, 1, _ss_sales_price15362);
                tbl_JOIN_INNER_TD_10166_output.setInt32(r, 2, _c_customer_sk15372);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10166_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10166_key_rightMajor, SW_JOIN_INNER_TD_10166_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11964_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_11964_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10166_key_rightMajor keyA{_c_customer_sk15372_k};
            int32_t _c_customer_sk15372 = tbl_Filter_TD_11964_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10166_payload_rightMajor payloadA{_c_customer_sk15372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11982_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk15352_k = tbl_Filter_TD_11982_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10166_key_rightMajor{_ss_customer_sk15352_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk15372 = (it->second)._c_customer_sk15372;
                int32_t _ss_customer_sk15352 = tbl_Filter_TD_11982_output.getInt32(i, 0);
                int32_t _ss_quantity15359 = tbl_Filter_TD_11982_output.getInt32(i, 1);
                int32_t _ss_sales_price15362 = tbl_Filter_TD_11982_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10166_output.setInt32(r, 2, _c_customer_sk15372);
                tbl_JOIN_INNER_TD_10166_output.setInt32(r, 0, _ss_quantity15359);
                tbl_JOIN_INNER_TD_10166_output.setInt32(r, 1, _ss_sales_price15362);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10166_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10166_output #Row: " << tbl_JOIN_INNER_TD_10166_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10600_key;
struct SW_Aggregate_TD_10600_payload {
    int32_t _csales15294_sum_0;
};
void SW_Aggregate_TD_10600(Table &tbl_JOIN_INNER_TD_11124_output, Table &tbl_Aggregate_TD_10600_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#0, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#15308 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#15311 as decimal(12,2)))), DecimalType(18,2), true)) AS csales#15294)
    // Input: ListBuffer(ss_quantity#15308, ss_sales_price#15311, c_customer_sk#0)
    // Output: ListBuffer(csales#15294)
    std::unordered_map<SW_Aggregate_TD_10600_key, SW_Aggregate_TD_10600_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11124_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity15308 = tbl_JOIN_INNER_TD_11124_output.getInt32(i, 0);
        int32_t _ss_sales_price15311 = tbl_JOIN_INNER_TD_11124_output.getInt32(i, 1);
        int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_11124_output.getInt32(i, 2);
        SW_Aggregate_TD_10600_key k = _c_customer_sk0;
        int64_t _csales15294_sum_0 = (_ss_quantity15308 * _ss_sales_price15311);
        SW_Aggregate_TD_10600_payload p{_csales15294_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._csales15294_sum_0 + _csales15294_sum_0;
            p._csales15294_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_sk0 not required in the output table
        int32_t _csales15294 = (it.second)._csales15294_sum_0;
        tbl_Aggregate_TD_10600_output.setInt32(r, 0, _csales15294);
        ++r;
    }
    tbl_Aggregate_TD_10600_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10600_output #Row: " << tbl_Aggregate_TD_10600_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10314_key_leftMajor {
    int32_t _ss_customer_sk15352;
    bool operator==(const SW_JOIN_INNER_TD_10314_key_leftMajor& other) const {
        return ((_ss_customer_sk15352 == other._ss_customer_sk15352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10314_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10314_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk15352));
    }
};
}
struct SW_JOIN_INNER_TD_10314_payload_leftMajor {
    int32_t _ss_customer_sk15352;
    int32_t _ss_quantity15359;
    int32_t _ss_sales_price15362;
};
struct SW_JOIN_INNER_TD_10314_key_rightMajor {
    int32_t _c_customer_sk15372;
    bool operator==(const SW_JOIN_INNER_TD_10314_key_rightMajor& other) const {
        return ((_c_customer_sk15372 == other._c_customer_sk15372));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10314_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10314_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15372));
    }
};
}
struct SW_JOIN_INNER_TD_10314_payload_rightMajor {
    int32_t _c_customer_sk15372;
};
void SW_JOIN_INNER_TD_10314(Table &tbl_Filter_TD_11326_output, Table &tbl_Filter_TD_1141_output, Table &tbl_JOIN_INNER_TD_10314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#15352 = c_customer_sk#15372))
    // Left Table: ListBuffer(ss_customer_sk#15352, ss_quantity#15359, ss_sales_price#15362)
    // Right Table: ListBuffer(c_customer_sk#15372)
    // Output Table: ListBuffer(ss_quantity#15359, ss_sales_price#15362, c_customer_sk#15372)
    int left_nrow = tbl_Filter_TD_11326_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1141_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10314_key_leftMajor, SW_JOIN_INNER_TD_10314_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11326_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk15352_k = tbl_Filter_TD_11326_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10314_key_leftMajor keyA{_ss_customer_sk15352_k};
            int32_t _ss_customer_sk15352 = tbl_Filter_TD_11326_output.getInt32(i, 0);
            int32_t _ss_quantity15359 = tbl_Filter_TD_11326_output.getInt32(i, 1);
            int32_t _ss_sales_price15362 = tbl_Filter_TD_11326_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10314_payload_leftMajor payloadA{_ss_customer_sk15352, _ss_quantity15359, _ss_sales_price15362};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1141_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_1141_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10314_key_leftMajor{_c_customer_sk15372_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk15352 = (it->second)._ss_customer_sk15352;
                int32_t _ss_quantity15359 = (it->second)._ss_quantity15359;
                int32_t _ss_sales_price15362 = (it->second)._ss_sales_price15362;
                int32_t _c_customer_sk15372 = tbl_Filter_TD_1141_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10314_output.setInt32(r, 0, _ss_quantity15359);
                tbl_JOIN_INNER_TD_10314_output.setInt32(r, 1, _ss_sales_price15362);
                tbl_JOIN_INNER_TD_10314_output.setInt32(r, 2, _c_customer_sk15372);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10314_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10314_key_rightMajor, SW_JOIN_INNER_TD_10314_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1141_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_1141_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10314_key_rightMajor keyA{_c_customer_sk15372_k};
            int32_t _c_customer_sk15372 = tbl_Filter_TD_1141_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10314_payload_rightMajor payloadA{_c_customer_sk15372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11326_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk15352_k = tbl_Filter_TD_11326_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10314_key_rightMajor{_ss_customer_sk15352_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk15372 = (it->second)._c_customer_sk15372;
                int32_t _ss_customer_sk15352 = tbl_Filter_TD_11326_output.getInt32(i, 0);
                int32_t _ss_quantity15359 = tbl_Filter_TD_11326_output.getInt32(i, 1);
                int32_t _ss_sales_price15362 = tbl_Filter_TD_11326_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10314_output.setInt32(r, 2, _c_customer_sk15372);
                tbl_JOIN_INNER_TD_10314_output.setInt32(r, 0, _ss_quantity15359);
                tbl_JOIN_INNER_TD_10314_output.setInt32(r, 1, _ss_sales_price15362);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10314_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10314_output #Row: " << tbl_JOIN_INNER_TD_10314_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_10306_key {
    std::string __groupingexpression15740;
    int32_t _i_item_sk228;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_10306_key& other) const { return (__groupingexpression15740 == other.__groupingexpression15740) && (_i_item_sk228 == other._i_item_sk228) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_10306_key> {
    std::size_t operator() (const SW_Aggregate_TD_10306_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k.__groupingexpression15740)) + (hash<int32_t>()(k._i_item_sk228)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_10306_payload {
    int32_t _item_sk15291;
    int64_t _cnt15293L_count_0;
};
void SW_Aggregate_TD_10306(Table &tbl_Project_TD_11265_output, Table &tbl_Aggregate_TD_10306_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(_groupingexpression#15740, i_item_sk#228, d_date#122, i_item_sk#228 AS item_sk#15291, count(1) AS cnt#15293L)
    // Input: ListBuffer(d_date#122, i_item_sk#228, _groupingexpression#15740)
    // Output: ListBuffer(item_sk#15291, cnt#15293L)
    std::unordered_map<SW_Aggregate_TD_10306_key, SW_Aggregate_TD_10306_payload> ht1;
    int nrow1 = tbl_Project_TD_11265_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_Project_TD_11265_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_Project_TD_11265_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> __groupingexpression15740 = tbl_Project_TD_11265_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_10306_key k{std::string(__groupingexpression15740.data()), _i_item_sk228, _d_date122};
        int32_t _item_sk15291 = _i_item_sk228;
        int64_t _cnt15293L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_10306_payload p{_item_sk15291, _cnt15293L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt15293L_count_0 + _cnt15293L_count_0;
            p._cnt15293L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // __groupingexpression15740 not required in the output table
        // _i_item_sk228 not required in the output table
        // _d_date122 not required in the output table
        tbl_Aggregate_TD_10306_output.setInt32(r, 0, (it.second)._item_sk15291);
        int64_t _cnt15293L = (it.second)._cnt15293L_count_0;
        tbl_Aggregate_TD_10306_output.setInt64(r, 1, _cnt15293L);
        ++r;
    }
    tbl_Aggregate_TD_10306_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10306_output #Row: " << tbl_Aggregate_TD_10306_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9917(Table &tbl_Aggregate_TD_10133_output, Table &tbl_Aggregate_TD_9917_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(csales#15294) AS tpcds_cmax#15295)
    // Input: ListBuffer(csales#15294)
    // Output: ListBuffer(tpcds_cmax#15295)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_10133_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _csales15294 = tbl_Aggregate_TD_10133_output.getInt32(i, 0);
        int64_t _tpcds_cmax15295_max_0 = _csales15294;
        max_0 = max_0 < _tpcds_cmax15295_max_0 ? _tpcds_cmax15295_max_0 : max_0;
    }
    int r = 0;
    int32_t _tpcds_cmax15295 = max_0;
    tbl_Aggregate_TD_9917_output.setInt32(r++, 0, _tpcds_cmax15295);
    tbl_Aggregate_TD_9917_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9917_output #Row: " << tbl_Aggregate_TD_9917_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9865_key;
struct SW_Aggregate_TD_9865_payload {
    int32_t _ssales15296_sum_0;
};
void SW_Aggregate_TD_9865(Table &tbl_JOIN_INNER_TD_10243_output, Table &tbl_Aggregate_TD_9865_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#15372, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#15359 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#15362 as decimal(12,2)))), DecimalType(18,2), true)) AS ssales#15296)
    // Input: ListBuffer(ss_quantity#15359, ss_sales_price#15362, c_customer_sk#15372)
    // Output: ListBuffer(c_customer_sk#15372, ssales#15296)
    std::unordered_map<SW_Aggregate_TD_9865_key, SW_Aggregate_TD_9865_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10243_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity15359 = tbl_JOIN_INNER_TD_10243_output.getInt32(i, 0);
        int32_t _ss_sales_price15362 = tbl_JOIN_INNER_TD_10243_output.getInt32(i, 1);
        int32_t _c_customer_sk15372 = tbl_JOIN_INNER_TD_10243_output.getInt32(i, 2);
        SW_Aggregate_TD_9865_key k = _c_customer_sk15372;
        int64_t _ssales15296_sum_0 = (_ss_quantity15359 * _ss_sales_price15362);
        SW_Aggregate_TD_9865_payload p{_ssales15296_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ssales15296_sum_0 + _ssales15296_sum_0;
            p._ssales15296_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_9865_output.setInt32(r, 0, (it.first));
        int32_t _ssales15296 = (it.second)._ssales15296_sum_0;
        tbl_Aggregate_TD_9865_output.setInt32(r, 1, _ssales15296);
        ++r;
    }
    tbl_Aggregate_TD_9865_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9865_output #Row: " << tbl_Aggregate_TD_9865_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9186(Table &tbl_Aggregate_TD_10251_output, Table &tbl_Aggregate_TD_9186_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(csales#15294) AS tpcds_cmax#15295)
    // Input: ListBuffer(csales#15294)
    // Output: ListBuffer(tpcds_cmax#15295)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_10251_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _csales15294 = tbl_Aggregate_TD_10251_output.getInt32(i, 0);
        int64_t _tpcds_cmax15295_max_0 = _csales15294;
        max_0 = max_0 < _tpcds_cmax15295_max_0 ? _tpcds_cmax15295_max_0 : max_0;
    }
    int r = 0;
    int32_t _tpcds_cmax15295 = max_0;
    tbl_Aggregate_TD_9186_output.setInt32(r++, 0, _tpcds_cmax15295);
    tbl_Aggregate_TD_9186_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9186_output #Row: " << tbl_Aggregate_TD_9186_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9944_key;
struct SW_Aggregate_TD_9944_payload {
    int32_t _ssales15296_sum_0;
};
void SW_Aggregate_TD_9944(Table &tbl_JOIN_INNER_TD_10944_output, Table &tbl_Aggregate_TD_9944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#15372, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#15359 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#15362 as decimal(12,2)))), DecimalType(18,2), true)) AS ssales#15296)
    // Input: ListBuffer(ss_quantity#15359, ss_sales_price#15362, c_customer_sk#15372)
    // Output: ListBuffer(c_customer_sk#15372, ssales#15296)
    std::unordered_map<SW_Aggregate_TD_9944_key, SW_Aggregate_TD_9944_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10944_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity15359 = tbl_JOIN_INNER_TD_10944_output.getInt32(i, 0);
        int32_t _ss_sales_price15362 = tbl_JOIN_INNER_TD_10944_output.getInt32(i, 1);
        int32_t _c_customer_sk15372 = tbl_JOIN_INNER_TD_10944_output.getInt32(i, 2);
        SW_Aggregate_TD_9944_key k = _c_customer_sk15372;
        int64_t _ssales15296_sum_0 = (_ss_quantity15359 * _ss_sales_price15362);
        SW_Aggregate_TD_9944_payload p{_ssales15296_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ssales15296_sum_0 + _ssales15296_sum_0;
            p._ssales15296_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_9944_output.setInt32(r, 0, (it.first));
        int32_t _ssales15296 = (it.second)._ssales15296_sum_0;
        tbl_Aggregate_TD_9944_output.setInt32(r, 1, _ssales15296);
        ++r;
    }
    tbl_Aggregate_TD_9944_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9944_output #Row: " << tbl_Aggregate_TD_9944_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9232(Table &tbl_Aggregate_TD_10592_output, Table &tbl_Filter_TD_9232_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cnt#15293L > 4))
    // Input: ListBuffer(item_sk#15291, cnt#15293L)
    // Output: ListBuffer(item_sk#15291)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_10592_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt15293L = tbl_Aggregate_TD_10592_output.getInt64(i, 1);
        if (_cnt15293L > 4) {
            int32_t _item_sk15291_t = tbl_Aggregate_TD_10592_output.getInt32(i, 0);
            tbl_Filter_TD_9232_output.setInt32(r, 0, _item_sk15291_t);
            r++;
        }
    }
    tbl_Filter_TD_9232_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9232_output #Row: " << tbl_Filter_TD_9232_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9743(Table &tbl_SerializeFromObject_TD_10314_input, Table &tbl_Filter_TD_9743_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#733) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10314_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_10314_input.getInt32(i, 2);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10314_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk733!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10314_input.getInt32(i, 0);
            tbl_Filter_TD_9743_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_10314_input.getInt32(i, 1);
            tbl_Filter_TD_9743_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_10314_input.getInt32(i, 2);
            tbl_Filter_TD_9743_output.setInt32(r, 2, _ws_bill_customer_sk733_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_10314_input.getInt32(i, 3);
            tbl_Filter_TD_9743_output.setInt32(r, 3, _ws_quantity747_t);
            int32_t _ws_list_price749_t = tbl_SerializeFromObject_TD_10314_input.getInt32(i, 4);
            tbl_Filter_TD_9743_output.setInt32(r, 4, _ws_list_price749_t);
            r++;
        }
    }
    tbl_Filter_TD_9743_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9743_output #Row: " << tbl_Filter_TD_9743_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9685(Table &tbl_Aggregate_TD_10214_output, Table &tbl_Aggregate_TD_9685_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(csales#15294) AS tpcds_cmax#15295)
    // Input: ListBuffer(csales#15294)
    // Output: ListBuffer(tpcds_cmax#15295)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_10214_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _csales15294 = tbl_Aggregate_TD_10214_output.getInt32(i, 0);
        int64_t _tpcds_cmax15295_max_0 = _csales15294;
        max_0 = max_0 < _tpcds_cmax15295_max_0 ? _tpcds_cmax15295_max_0 : max_0;
    }
    int r = 0;
    int32_t _tpcds_cmax15295 = max_0;
    tbl_Aggregate_TD_9685_output.setInt32(r++, 0, _tpcds_cmax15295);
    tbl_Aggregate_TD_9685_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9685_output #Row: " << tbl_Aggregate_TD_9685_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9316_key;
struct SW_Aggregate_TD_9316_payload {
    int32_t _ssales15296_sum_0;
};
void SW_Aggregate_TD_9316(Table &tbl_JOIN_INNER_TD_10166_output, Table &tbl_Aggregate_TD_9316_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#15372, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#15359 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#15362 as decimal(12,2)))), DecimalType(18,2), true)) AS ssales#15296)
    // Input: ListBuffer(ss_quantity#15359, ss_sales_price#15362, c_customer_sk#15372)
    // Output: ListBuffer(c_customer_sk#15372, ssales#15296)
    std::unordered_map<SW_Aggregate_TD_9316_key, SW_Aggregate_TD_9316_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10166_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity15359 = tbl_JOIN_INNER_TD_10166_output.getInt32(i, 0);
        int32_t _ss_sales_price15362 = tbl_JOIN_INNER_TD_10166_output.getInt32(i, 1);
        int32_t _c_customer_sk15372 = tbl_JOIN_INNER_TD_10166_output.getInt32(i, 2);
        SW_Aggregate_TD_9316_key k = _c_customer_sk15372;
        int64_t _ssales15296_sum_0 = (_ss_quantity15359 * _ss_sales_price15362);
        SW_Aggregate_TD_9316_payload p{_ssales15296_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ssales15296_sum_0 + _ssales15296_sum_0;
            p._ssales15296_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_9316_output.setInt32(r, 0, (it.first));
        int32_t _ssales15296 = (it.second)._ssales15296_sum_0;
        tbl_Aggregate_TD_9316_output.setInt32(r, 1, _ssales15296);
        ++r;
    }
    tbl_Aggregate_TD_9316_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9316_output #Row: " << tbl_Aggregate_TD_9316_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9718(Table &tbl_Aggregate_TD_10600_output, Table &tbl_Aggregate_TD_9718_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(csales#15294) AS tpcds_cmax#15295)
    // Input: ListBuffer(csales#15294)
    // Output: ListBuffer(tpcds_cmax#15295)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_10600_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _csales15294 = tbl_Aggregate_TD_10600_output.getInt32(i, 0);
        int64_t _tpcds_cmax15295_max_0 = _csales15294;
        max_0 = max_0 < _tpcds_cmax15295_max_0 ? _tpcds_cmax15295_max_0 : max_0;
    }
    int r = 0;
    int32_t _tpcds_cmax15295 = max_0;
    tbl_Aggregate_TD_9718_output.setInt32(r++, 0, _tpcds_cmax15295);
    tbl_Aggregate_TD_9718_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9718_output #Row: " << tbl_Aggregate_TD_9718_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9321_key;
struct SW_Aggregate_TD_9321_payload {
    int32_t _ssales15296_sum_0;
};
void SW_Aggregate_TD_9321(Table &tbl_JOIN_INNER_TD_10314_output, Table &tbl_Aggregate_TD_9321_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#15372, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#15359 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_sales_price#15362 as decimal(12,2)))), DecimalType(18,2), true)) AS ssales#15296)
    // Input: ListBuffer(ss_quantity#15359, ss_sales_price#15362, c_customer_sk#15372)
    // Output: ListBuffer(c_customer_sk#15372, ssales#15296)
    std::unordered_map<SW_Aggregate_TD_9321_key, SW_Aggregate_TD_9321_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10314_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity15359 = tbl_JOIN_INNER_TD_10314_output.getInt32(i, 0);
        int32_t _ss_sales_price15362 = tbl_JOIN_INNER_TD_10314_output.getInt32(i, 1);
        int32_t _c_customer_sk15372 = tbl_JOIN_INNER_TD_10314_output.getInt32(i, 2);
        SW_Aggregate_TD_9321_key k = _c_customer_sk15372;
        int64_t _ssales15296_sum_0 = (_ss_quantity15359 * _ss_sales_price15362);
        SW_Aggregate_TD_9321_payload p{_ssales15296_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._ssales15296_sum_0 + _ssales15296_sum_0;
            p._ssales15296_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_9321_output.setInt32(r, 0, (it.first));
        int32_t _ssales15296 = (it.second)._ssales15296_sum_0;
        tbl_Aggregate_TD_9321_output.setInt32(r, 1, _ssales15296);
        ++r;
    }
    tbl_Aggregate_TD_9321_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9321_output #Row: " << tbl_Aggregate_TD_9321_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9908(Table &tbl_Aggregate_TD_10306_output, Table &tbl_Filter_TD_9908_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cnt#15293L > 4))
    // Input: ListBuffer(item_sk#15291, cnt#15293L)
    // Output: ListBuffer(item_sk#15291)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_10306_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt15293L = tbl_Aggregate_TD_10306_output.getInt64(i, 1);
        if (_cnt15293L > 4) {
            int32_t _item_sk15291_t = tbl_Aggregate_TD_10306_output.getInt32(i, 0);
            tbl_Filter_TD_9908_output.setInt32(r, 0, _item_sk15291_t);
            r++;
        }
    }
    tbl_Filter_TD_9908_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9908_output #Row: " << tbl_Filter_TD_9908_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9916(Table &tbl_SerializeFromObject_TD_10154_input, Table &tbl_Filter_TD_9916_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_bill_customer_sk#1107) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10154_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 0);
        if ((_cs_bill_customer_sk1107!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 0);
            tbl_Filter_TD_9916_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 1);
            tbl_Filter_TD_9916_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 2);
            tbl_Filter_TD_9916_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 3);
            tbl_Filter_TD_9916_output.setInt32(r, 3, _cs_quantity1122_t);
            int32_t _cs_list_price1124_t = tbl_SerializeFromObject_TD_10154_input.getInt32(i, 4);
            tbl_Filter_TD_9916_output.setInt32(r, 4, _cs_list_price1124_t);
            r++;
        }
    }
    tbl_Filter_TD_9916_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9916_output #Row: " << tbl_Filter_TD_9916_output.getNumRow() << std::endl;
}

void SW_Filter_TD_848(Table &tbl_Aggregate_TD_9865_output, Table &tbl_Aggregate_TD_9917_output, Table &tbl_Filter_TD_848_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ssales#15296) AND (cast(ssales#15296 as decimal(38,8)) > CheckOverflow((0.950000 * promote_precision(cast(scalar-subquery#15297 [] as decimal(32,6)))), DecimalType(38,8), true))))
    // Input: ListBuffer(c_customer_sk#15372, ssales#15296)
    // Output: ListBuffer(c_customer_sk#15372)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9865_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ssales15296 = tbl_Aggregate_TD_9865_output.getInt32(i, 1);
        if ((_ssales15296!= 0) && (_ssales15296 > (0.950000 * tbl_Aggregate_TD_9917_output.getInt32(0, 0)))) {
            int32_t _c_customer_sk15372_t = tbl_Aggregate_TD_9865_output.getInt32(i, 0);
            tbl_Filter_TD_848_output.setInt32(r, 0, _c_customer_sk15372_t);
            r++;
        }
    }
    tbl_Filter_TD_848_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_848_output #Row: " << tbl_Filter_TD_848_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8986(Table &tbl_SerializeFromObject_TD_9729_input, Table &tbl_Filter_TD_8986_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#15436))
    // Input: ListBuffer(c_customer_sk#15436, c_first_name#15444, c_last_name#15445)
    // Output: ListBuffer(c_customer_sk#15436, c_first_name#15444, c_last_name#15445)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9729_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk15436 = tbl_SerializeFromObject_TD_9729_input.getInt32(i, 0);
        if (_c_customer_sk15436!= 0) {
            int32_t _c_customer_sk15436_t = tbl_SerializeFromObject_TD_9729_input.getInt32(i, 0);
            tbl_Filter_TD_8986_output.setInt32(r, 0, _c_customer_sk15436_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444_t = tbl_SerializeFromObject_TD_9729_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8986_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15444_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445_t = tbl_SerializeFromObject_TD_9729_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8986_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name15445_t);
            r++;
        }
    }
    tbl_Filter_TD_8986_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8986_output #Row: " << tbl_Filter_TD_8986_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8268(Table &tbl_Aggregate_TD_9944_output, Table &tbl_Aggregate_TD_9186_output, Table &tbl_Filter_TD_8268_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ssales#15296) AND (cast(ssales#15296 as decimal(38,8)) > CheckOverflow((0.950000 * promote_precision(cast(scalar-subquery#15297 [] as decimal(32,6)))), DecimalType(38,8), true))))
    // Input: ListBuffer(c_customer_sk#15372, ssales#15296)
    // Output: ListBuffer(c_customer_sk#15372)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9944_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ssales15296 = tbl_Aggregate_TD_9944_output.getInt32(i, 1);
        if ((_ssales15296!= 0) && (_ssales15296 > (0.950000 * tbl_Aggregate_TD_9186_output.getInt32(0, 0)))) {
            int32_t _c_customer_sk15372_t = tbl_Aggregate_TD_9944_output.getInt32(i, 0);
            tbl_Filter_TD_8268_output.setInt32(r, 0, _c_customer_sk15372_t);
            r++;
        }
    }
    tbl_Filter_TD_8268_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8268_output #Row: " << tbl_Filter_TD_8268_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_8635_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8635_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8635_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8635_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8635_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_customer_sk733;
    int32_t _ws_quantity747;
    int32_t _ws_list_price749;
};
struct SW_JOIN_LEFTSEMI_TD_8635_key_rightMajor {
    int32_t _item_sk15291;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8635_key_rightMajor& other) const {
        return ((_item_sk15291 == other._item_sk15291));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8635_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8635_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk15291));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8635_payload_rightMajor {
    int32_t _item_sk15291;
};
void SW_JOIN_LEFTSEMI_TD_8635(Table &tbl_Filter_TD_9743_output, Table &tbl_Filter_TD_9232_output, Table &tbl_JOIN_LEFTSEMI_TD_8635_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((ws_item_sk#732 = item_sk#15291))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    // Right Table: ListBuffer(item_sk#15291)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    int left_nrow = tbl_Filter_TD_9743_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9232_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_8635_key_rightMajor, SW_JOIN_LEFTSEMI_TD_8635_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9232_output.getNumRow();
        int nrow2 = tbl_Filter_TD_9743_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk15291_k = tbl_Filter_TD_9232_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8635_key_rightMajor keyA{_item_sk15291_k};
            int32_t _item_sk15291 = tbl_Filter_TD_9232_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8635_payload_rightMajor payloadA{_item_sk15291};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_9743_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_8635_key_rightMajor{_ws_item_sk732_k});
            if (it != ht1.end()) {
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9743_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_9743_output.getInt32(i, 1);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_9743_output.getInt32(i, 2);
                int32_t _ws_quantity747 = tbl_Filter_TD_9743_output.getInt32(i, 3);
                int32_t _ws_list_price749 = tbl_Filter_TD_9743_output.getInt32(i, 4);
                tbl_JOIN_LEFTSEMI_TD_8635_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_LEFTSEMI_TD_8635_output.setInt32(r, 1, _ws_bill_customer_sk733);
                tbl_JOIN_LEFTSEMI_TD_8635_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_LEFTSEMI_TD_8635_output.setInt32(r, 3, _ws_list_price749);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_8635_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_8635_output #Row: " << tbl_JOIN_LEFTSEMI_TD_8635_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8372(Table &tbl_Aggregate_TD_9316_output, Table &tbl_Aggregate_TD_9685_output, Table &tbl_Filter_TD_8372_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ssales#15296) AND (cast(ssales#15296 as decimal(38,8)) > CheckOverflow((0.950000 * promote_precision(cast(scalar-subquery#15297 [] as decimal(32,6)))), DecimalType(38,8), true))))
    // Input: ListBuffer(c_customer_sk#15372, ssales#15296)
    // Output: ListBuffer(c_customer_sk#15372)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9316_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ssales15296 = tbl_Aggregate_TD_9316_output.getInt32(i, 1);
        if ((_ssales15296!= 0) && (_ssales15296 > (0.950000 * tbl_Aggregate_TD_9685_output.getInt32(0, 0)))) {
            int32_t _c_customer_sk15372_t = tbl_Aggregate_TD_9316_output.getInt32(i, 0);
            tbl_Filter_TD_8372_output.setInt32(r, 0, _c_customer_sk15372_t);
            r++;
        }
    }
    tbl_Filter_TD_8372_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8372_output #Row: " << tbl_Filter_TD_8372_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8126(Table &tbl_SerializeFromObject_TD_947_input, Table &tbl_Filter_TD_8126_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#15390))
    // Input: ListBuffer(c_customer_sk#15390, c_first_name#15398, c_last_name#15399)
    // Output: ListBuffer(c_customer_sk#15390, c_first_name#15398, c_last_name#15399)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_947_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk15390 = tbl_SerializeFromObject_TD_947_input.getInt32(i, 0);
        if (_c_customer_sk15390!= 0) {
            int32_t _c_customer_sk15390_t = tbl_SerializeFromObject_TD_947_input.getInt32(i, 0);
            tbl_Filter_TD_8126_output.setInt32(r, 0, _c_customer_sk15390_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_t = tbl_SerializeFromObject_TD_947_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8126_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15398_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_t = tbl_SerializeFromObject_TD_947_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8126_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name15399_t);
            r++;
        }
    }
    tbl_Filter_TD_8126_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8126_output #Row: " << tbl_Filter_TD_8126_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8459(Table &tbl_Aggregate_TD_9321_output, Table &tbl_Aggregate_TD_9718_output, Table &tbl_Filter_TD_8459_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ssales#15296) AND (cast(ssales#15296 as decimal(38,8)) > CheckOverflow((0.950000 * promote_precision(cast(scalar-subquery#15297 [] as decimal(32,6)))), DecimalType(38,8), true))))
    // Input: ListBuffer(c_customer_sk#15372, ssales#15296)
    // Output: ListBuffer(c_customer_sk#15372)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9321_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ssales15296 = tbl_Aggregate_TD_9321_output.getInt32(i, 1);
        if ((_ssales15296!= 0) && (_ssales15296 > (0.950000 * tbl_Aggregate_TD_9718_output.getInt32(0, 0)))) {
            int32_t _c_customer_sk15372_t = tbl_Aggregate_TD_9321_output.getInt32(i, 0);
            tbl_Filter_TD_8459_output.setInt32(r, 0, _c_customer_sk15372_t);
            r++;
        }
    }
    tbl_Filter_TD_8459_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8459_output #Row: " << tbl_Filter_TD_8459_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_8335_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8335_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8335_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8335_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8335_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
};
struct SW_JOIN_LEFTSEMI_TD_8335_key_rightMajor {
    int32_t _item_sk15291;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8335_key_rightMajor& other) const {
        return ((_item_sk15291 == other._item_sk15291));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8335_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8335_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk15291));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8335_payload_rightMajor {
    int32_t _item_sk15291;
};
void SW_JOIN_LEFTSEMI_TD_8335(Table &tbl_Filter_TD_9916_output, Table &tbl_Filter_TD_9908_output, Table &tbl_JOIN_LEFTSEMI_TD_8335_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((cs_item_sk#1119 = item_sk#15291))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124)
    // Right Table: ListBuffer(item_sk#15291)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_quantity#1122, cs_list_price#1124)
    int left_nrow = tbl_Filter_TD_9916_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9908_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_8335_key_rightMajor, SW_JOIN_LEFTSEMI_TD_8335_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9908_output.getNumRow();
        int nrow2 = tbl_Filter_TD_9916_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk15291_k = tbl_Filter_TD_9908_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8335_key_rightMajor keyA{_item_sk15291_k};
            int32_t _item_sk15291 = tbl_Filter_TD_9908_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8335_payload_rightMajor payloadA{_item_sk15291};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_9916_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_8335_key_rightMajor{_cs_item_sk1119_k});
            if (it != ht1.end()) {
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9916_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_9916_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_9916_output.getInt32(i, 2);
                int32_t _cs_quantity1122 = tbl_Filter_TD_9916_output.getInt32(i, 3);
                int32_t _cs_list_price1124 = tbl_Filter_TD_9916_output.getInt32(i, 4);
                tbl_JOIN_LEFTSEMI_TD_8335_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_LEFTSEMI_TD_8335_output.setInt32(r, 1, _cs_bill_customer_sk1107);
                tbl_JOIN_LEFTSEMI_TD_8335_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_LEFTSEMI_TD_8335_output.setInt32(r, 3, _cs_list_price1124);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_8335_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_8335_output #Row: " << tbl_JOIN_LEFTSEMI_TD_8335_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7610_key_leftMajor {
    int32_t _c_customer_sk15436;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7610_key_leftMajor& other) const {
        return ((_c_customer_sk15436 == other._c_customer_sk15436));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7610_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7610_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15436));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7610_payload_leftMajor {
    int32_t _c_customer_sk15436;
    std::string _c_first_name15444;
    std::string _c_last_name15445;
};
struct SW_JOIN_LEFTSEMI_TD_7610_key_rightMajor {
    int32_t _c_customer_sk15372;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7610_key_rightMajor& other) const {
        return ((_c_customer_sk15372 == other._c_customer_sk15372));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7610_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7610_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15372));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7610_payload_rightMajor {
    int32_t _c_customer_sk15372;
};
void SW_JOIN_LEFTSEMI_TD_7610(Table &tbl_Filter_TD_8986_output, Table &tbl_Filter_TD_848_output, Table &tbl_JOIN_LEFTSEMI_TD_7610_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((c_customer_sk#15436 = c_customer_sk#15372))
    // Left Table: ListBuffer(c_customer_sk#15436, c_first_name#15444, c_last_name#15445)
    // Right Table: ListBuffer(c_customer_sk#15372)
    // Output Table: ListBuffer(c_customer_sk#15436, c_first_name#15444, c_last_name#15445)
    int left_nrow = tbl_Filter_TD_8986_output.getNumRow();
    int right_nrow = tbl_Filter_TD_848_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7610_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7610_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_848_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8986_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_848_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7610_key_rightMajor keyA{_c_customer_sk15372_k};
            int32_t _c_customer_sk15372 = tbl_Filter_TD_848_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7610_payload_rightMajor payloadA{_c_customer_sk15372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk15436_k = tbl_Filter_TD_8986_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7610_key_rightMajor{_c_customer_sk15436_k});
            if (it != ht1.end()) {
                int32_t _c_customer_sk15436 = tbl_Filter_TD_8986_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444 = tbl_Filter_TD_8986_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445 = tbl_Filter_TD_8986_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                tbl_JOIN_LEFTSEMI_TD_7610_output.setInt32(r, 0, _c_customer_sk15436);
                tbl_JOIN_LEFTSEMI_TD_7610_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15444);
                tbl_JOIN_LEFTSEMI_TD_7610_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name15445);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7610_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7610_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7610_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7644_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7644_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7644_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7644_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7644_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
    int32_t _ws_quantity747;
    int32_t _ws_list_price749;
};
struct SW_JOIN_LEFTSEMI_TD_7644_key_rightMajor {
    int32_t _c_customer_sk15372;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7644_key_rightMajor& other) const {
        return ((_c_customer_sk15372 == other._c_customer_sk15372));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7644_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7644_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15372));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7644_payload_rightMajor {
    int32_t _c_customer_sk15372;
};
void SW_JOIN_LEFTSEMI_TD_7644(Table &tbl_JOIN_LEFTSEMI_TD_8635_output, Table &tbl_Filter_TD_8268_output, Table &tbl_JOIN_LEFTSEMI_TD_7644_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#15372))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    // Right Table: ListBuffer(c_customer_sk#15372)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_8635_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8268_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7644_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7644_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8268_output.getNumRow();
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_8635_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_8268_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7644_key_rightMajor keyA{_c_customer_sk15372_k};
            int32_t _c_customer_sk15372 = tbl_Filter_TD_8268_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7644_payload_rightMajor payloadA{_c_customer_sk15372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_LEFTSEMI_TD_8635_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7644_key_rightMajor{_ws_bill_customer_sk733_k});
            if (it != ht1.end()) {
                int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTSEMI_TD_8635_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_JOIN_LEFTSEMI_TD_8635_output.getInt32(i, 1);
                int32_t _ws_quantity747 = tbl_JOIN_LEFTSEMI_TD_8635_output.getInt32(i, 2);
                int32_t _ws_list_price749 = tbl_JOIN_LEFTSEMI_TD_8635_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_7644_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_LEFTSEMI_TD_7644_output.setInt32(r, 1, _ws_bill_customer_sk733);
                tbl_JOIN_LEFTSEMI_TD_7644_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_LEFTSEMI_TD_7644_output.setInt32(r, 3, _ws_list_price749);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7644_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7644_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7644_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_712_key_leftMajor {
    int32_t _c_customer_sk15390;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_712_key_leftMajor& other) const {
        return ((_c_customer_sk15390 == other._c_customer_sk15390));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_712_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_712_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15390));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_712_payload_leftMajor {
    int32_t _c_customer_sk15390;
    std::string _c_first_name15398;
    std::string _c_last_name15399;
};
struct SW_JOIN_LEFTSEMI_TD_712_key_rightMajor {
    int32_t _c_customer_sk15372;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_712_key_rightMajor& other) const {
        return ((_c_customer_sk15372 == other._c_customer_sk15372));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_712_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_712_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15372));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_712_payload_rightMajor {
    int32_t _c_customer_sk15372;
};
void SW_JOIN_LEFTSEMI_TD_712(Table &tbl_Filter_TD_8126_output, Table &tbl_Filter_TD_8372_output, Table &tbl_JOIN_LEFTSEMI_TD_712_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((c_customer_sk#15390 = c_customer_sk#15372))
    // Left Table: ListBuffer(c_customer_sk#15390, c_first_name#15398, c_last_name#15399)
    // Right Table: ListBuffer(c_customer_sk#15372)
    // Output Table: ListBuffer(c_customer_sk#15390, c_first_name#15398, c_last_name#15399)
    int left_nrow = tbl_Filter_TD_8126_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8372_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_712_key_rightMajor, SW_JOIN_LEFTSEMI_TD_712_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8372_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8126_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_8372_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_712_key_rightMajor keyA{_c_customer_sk15372_k};
            int32_t _c_customer_sk15372 = tbl_Filter_TD_8372_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_712_payload_rightMajor payloadA{_c_customer_sk15372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk15390_k = tbl_Filter_TD_8126_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_712_key_rightMajor{_c_customer_sk15390_k});
            if (it != ht1.end()) {
                int32_t _c_customer_sk15390 = tbl_Filter_TD_8126_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398 = tbl_Filter_TD_8126_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399 = tbl_Filter_TD_8126_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                tbl_JOIN_LEFTSEMI_TD_712_output.setInt32(r, 0, _c_customer_sk15390);
                tbl_JOIN_LEFTSEMI_TD_712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15398);
                tbl_JOIN_LEFTSEMI_TD_712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name15399);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_712_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_712_output #Row: " << tbl_JOIN_LEFTSEMI_TD_712_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_7638_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7638_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7638_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7638_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7638_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
};
struct SW_JOIN_LEFTSEMI_TD_7638_key_rightMajor {
    int32_t _c_customer_sk15372;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7638_key_rightMajor& other) const {
        return ((_c_customer_sk15372 == other._c_customer_sk15372));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7638_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7638_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15372));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7638_payload_rightMajor {
    int32_t _c_customer_sk15372;
};
void SW_JOIN_LEFTSEMI_TD_7638(Table &tbl_JOIN_LEFTSEMI_TD_8335_output, Table &tbl_Filter_TD_8459_output, Table &tbl_JOIN_LEFTSEMI_TD_7638_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#15372))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_quantity#1122, cs_list_price#1124)
    // Right Table: ListBuffer(c_customer_sk#15372)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_quantity#1122, cs_list_price#1124)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_8335_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8459_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7638_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7638_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8459_output.getNumRow();
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_8335_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15372_k = tbl_Filter_TD_8459_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7638_key_rightMajor keyA{_c_customer_sk15372_k};
            int32_t _c_customer_sk15372 = tbl_Filter_TD_8459_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7638_payload_rightMajor payloadA{_c_customer_sk15372};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_LEFTSEMI_TD_8335_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7638_key_rightMajor{_cs_bill_customer_sk1107_k});
            if (it != ht1.end()) {
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTSEMI_TD_8335_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_LEFTSEMI_TD_8335_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_LEFTSEMI_TD_8335_output.getInt32(i, 2);
                int32_t _cs_list_price1124 = tbl_JOIN_LEFTSEMI_TD_8335_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_7638_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_LEFTSEMI_TD_7638_output.setInt32(r, 1, _cs_bill_customer_sk1107);
                tbl_JOIN_LEFTSEMI_TD_7638_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_LEFTSEMI_TD_7638_output.setInt32(r, 3, _cs_list_price1124);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7638_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7638_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7638_output.getNumRow() << std::endl;
}

void SW_Filter_TD_659(Table &tbl_SerializeFromObject_TD_7330_input, Table &tbl_Filter_TD_659_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#15460) AND isnotnull(d_moy#15462)) AND ((d_year#15460 = 2000) AND (d_moy#15462 = 2))) AND isnotnull(d_date_sk#15454)))
    // Input: ListBuffer(d_date_sk#15454, d_year#15460, d_moy#15462)
    // Output: ListBuffer(d_date_sk#15454)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7330_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year15460 = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 1);
        int32_t _d_moy15462 = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 2);
        int32_t _d_date_sk15454 = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 0);
        if ((((_d_year15460!= 0) && (_d_moy15462!= 0)) && ((_d_year15460 == 2000) && (_d_moy15462 == 2))) && (_d_date_sk15454!= 0)) {
            int32_t _d_date_sk15454_t = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 0);
            tbl_Filter_TD_659_output.setInt32(r, 0, _d_date_sk15454_t);
            r++;
        }
    }
    tbl_Filter_TD_659_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_659_output #Row: " << tbl_Filter_TD_659_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6734_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_INNER_TD_6734_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6734_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6734_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_INNER_TD_6734_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
    int32_t _ws_quantity747;
    int32_t _ws_list_price749;
};
struct SW_JOIN_INNER_TD_6734_key_rightMajor {
    int32_t _c_customer_sk15436;
    bool operator==(const SW_JOIN_INNER_TD_6734_key_rightMajor& other) const {
        return ((_c_customer_sk15436 == other._c_customer_sk15436));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6734_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6734_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15436));
    }
};
}
struct SW_JOIN_INNER_TD_6734_payload_rightMajor {
    int32_t _c_customer_sk15436;
    std::string _c_first_name15444;
    std::string _c_last_name15445;
};
void SW_JOIN_INNER_TD_6734(Table &tbl_JOIN_LEFTSEMI_TD_7644_output, Table &tbl_JOIN_LEFTSEMI_TD_7610_output, Table &tbl_JOIN_INNER_TD_6734_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#15436))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    // Right Table: ListBuffer(c_customer_sk#15436, c_first_name#15444, c_last_name#15445)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_list_price#749, c_first_name#15444, c_last_name#15445)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_7644_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7610_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6734_key_leftMajor, SW_JOIN_INNER_TD_6734_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7644_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6734_key_leftMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 1);
            int32_t _ws_quantity747 = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 2);
            int32_t _ws_list_price749 = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6734_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733, _ws_quantity747, _ws_list_price749};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7610_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk15436_k = tbl_JOIN_LEFTSEMI_TD_7610_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6734_key_leftMajor{_c_customer_sk15436_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_list_price749 = (it->second)._ws_list_price749;
                int32_t _c_customer_sk15436 = tbl_JOIN_LEFTSEMI_TD_7610_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444_n = tbl_JOIN_LEFTSEMI_TD_7610_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name15444 = std::string(_c_first_name15444_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445_n = tbl_JOIN_LEFTSEMI_TD_7610_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name15445 = std::string(_c_last_name15445_n.data());
                tbl_JOIN_INNER_TD_6734_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_6734_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_6734_output.setInt32(r, 2, _ws_list_price749);
                tbl_JOIN_INNER_TD_6734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_first_name15444_n);
                tbl_JOIN_INNER_TD_6734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_last_name15445_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6734_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6734_key_rightMajor, SW_JOIN_INNER_TD_6734_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7610_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15436_k = tbl_JOIN_LEFTSEMI_TD_7610_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6734_key_rightMajor keyA{_c_customer_sk15436_k};
            int32_t _c_customer_sk15436 = tbl_JOIN_LEFTSEMI_TD_7610_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444_n = tbl_JOIN_LEFTSEMI_TD_7610_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name15444 = std::string(_c_first_name15444_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445_n = tbl_JOIN_LEFTSEMI_TD_7610_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name15445 = std::string(_c_last_name15445_n.data());
            SW_JOIN_INNER_TD_6734_payload_rightMajor payloadA{_c_customer_sk15436, _c_first_name15444, _c_last_name15445};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7644_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6734_key_rightMajor{_ws_bill_customer_sk733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk15436 = (it->second)._c_customer_sk15436;
                std::string _c_first_name15444 = (it->second)._c_first_name15444;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444_n{};
                memcpy(_c_first_name15444_n.data(), (_c_first_name15444).data(), (_c_first_name15444).length());
                std::string _c_last_name15445 = (it->second)._c_last_name15445;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445_n{};
                memcpy(_c_last_name15445_n.data(), (_c_last_name15445).data(), (_c_last_name15445).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 1);
                int32_t _ws_quantity747 = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 2);
                int32_t _ws_list_price749 = tbl_JOIN_LEFTSEMI_TD_7644_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_first_name15444_n);
                tbl_JOIN_INNER_TD_6734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_last_name15445_n);
                tbl_JOIN_INNER_TD_6734_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_6734_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_6734_output.setInt32(r, 2, _ws_list_price749);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6734_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6734_output #Row: " << tbl_JOIN_INNER_TD_6734_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6952(Table &tbl_SerializeFromObject_TD_7808_input, Table &tbl_Filter_TD_6952_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#15414) AND isnotnull(d_moy#15416)) AND ((d_year#15414 = 2000) AND (d_moy#15416 = 2))) AND isnotnull(d_date_sk#15408)))
    // Input: ListBuffer(d_date_sk#15408, d_year#15414, d_moy#15416)
    // Output: ListBuffer(d_date_sk#15408)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7808_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year15414 = tbl_SerializeFromObject_TD_7808_input.getInt32(i, 1);
        int32_t _d_moy15416 = tbl_SerializeFromObject_TD_7808_input.getInt32(i, 2);
        int32_t _d_date_sk15408 = tbl_SerializeFromObject_TD_7808_input.getInt32(i, 0);
        if ((((_d_year15414!= 0) && (_d_moy15416!= 0)) && ((_d_year15414 == 2000) && (_d_moy15416 == 2))) && (_d_date_sk15408!= 0)) {
            int32_t _d_date_sk15408_t = tbl_SerializeFromObject_TD_7808_input.getInt32(i, 0);
            tbl_Filter_TD_6952_output.setInt32(r, 0, _d_date_sk15408_t);
            r++;
        }
    }
    tbl_Filter_TD_6952_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6952_output #Row: " << tbl_Filter_TD_6952_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6903_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_INNER_TD_6903_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6903_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6903_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_INNER_TD_6903_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
};
struct SW_JOIN_INNER_TD_6903_key_rightMajor {
    int32_t _c_customer_sk15390;
    bool operator==(const SW_JOIN_INNER_TD_6903_key_rightMajor& other) const {
        return ((_c_customer_sk15390 == other._c_customer_sk15390));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6903_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6903_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk15390));
    }
};
}
struct SW_JOIN_INNER_TD_6903_payload_rightMajor {
    int32_t _c_customer_sk15390;
    std::string _c_first_name15398;
    std::string _c_last_name15399;
};
void SW_JOIN_INNER_TD_6903(Table &tbl_JOIN_LEFTSEMI_TD_7638_output, Table &tbl_JOIN_LEFTSEMI_TD_712_output, Table &tbl_JOIN_INNER_TD_6903_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#15390))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_quantity#1122, cs_list_price#1124)
    // Right Table: ListBuffer(c_customer_sk#15390, c_first_name#15398, c_last_name#15399)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_quantity#1122, cs_list_price#1124, c_first_name#15398, c_last_name#15399)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_7638_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_712_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6903_key_leftMajor, SW_JOIN_INNER_TD_6903_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7638_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6903_key_leftMajor keyA{_cs_bill_customer_sk1107_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 2);
            int32_t _cs_list_price1124 = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6903_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_quantity1122, _cs_list_price1124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_712_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk15390_k = tbl_JOIN_LEFTSEMI_TD_712_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6903_key_leftMajor{_c_customer_sk15390_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _c_customer_sk15390 = tbl_JOIN_LEFTSEMI_TD_712_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n = tbl_JOIN_LEFTSEMI_TD_712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name15398 = std::string(_c_first_name15398_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n = tbl_JOIN_LEFTSEMI_TD_712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name15399 = std::string(_c_last_name15399_n.data());
                tbl_JOIN_INNER_TD_6903_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_6903_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6903_output.setInt32(r, 2, _cs_list_price1124);
                tbl_JOIN_INNER_TD_6903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_first_name15398_n);
                tbl_JOIN_INNER_TD_6903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_last_name15399_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6903_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6903_key_rightMajor, SW_JOIN_INNER_TD_6903_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_712_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk15390_k = tbl_JOIN_LEFTSEMI_TD_712_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6903_key_rightMajor keyA{_c_customer_sk15390_k};
            int32_t _c_customer_sk15390 = tbl_JOIN_LEFTSEMI_TD_712_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n = tbl_JOIN_LEFTSEMI_TD_712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name15398 = std::string(_c_first_name15398_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n = tbl_JOIN_LEFTSEMI_TD_712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name15399 = std::string(_c_last_name15399_n.data());
            SW_JOIN_INNER_TD_6903_payload_rightMajor payloadA{_c_customer_sk15390, _c_first_name15398, _c_last_name15399};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7638_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6903_key_rightMajor{_cs_bill_customer_sk1107_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk15390 = (it->second)._c_customer_sk15390;
                std::string _c_first_name15398 = (it->second)._c_first_name15398;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n{};
                memcpy(_c_first_name15398_n.data(), (_c_first_name15398).data(), (_c_first_name15398).length());
                std::string _c_last_name15399 = (it->second)._c_last_name15399;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n{};
                memcpy(_c_last_name15399_n.data(), (_c_last_name15399).data(), (_c_last_name15399).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 2);
                int32_t _cs_list_price1124 = tbl_JOIN_LEFTSEMI_TD_7638_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_first_name15398_n);
                tbl_JOIN_INNER_TD_6903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_last_name15399_n);
                tbl_JOIN_INNER_TD_6903_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_6903_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6903_output.setInt32(r, 2, _cs_list_price1124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6903_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6903_output #Row: " << tbl_JOIN_INNER_TD_6903_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5458_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_5458_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5458_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5458_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_5458_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int32_t _ws_list_price749;
    std::string _c_first_name15444;
    std::string _c_last_name15445;
};
struct SW_JOIN_INNER_TD_5458_key_rightMajor {
    int32_t _d_date_sk15454;
    bool operator==(const SW_JOIN_INNER_TD_5458_key_rightMajor& other) const {
        return ((_d_date_sk15454 == other._d_date_sk15454));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5458_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5458_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk15454));
    }
};
}
struct SW_JOIN_INNER_TD_5458_payload_rightMajor {
    int32_t _d_date_sk15454;
};
void SW_JOIN_INNER_TD_5458(Table &tbl_JOIN_INNER_TD_6734_output, Table &tbl_Filter_TD_659_output, Table &tbl_JOIN_INNER_TD_5458_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#15454))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_list_price#749, c_first_name#15444, c_last_name#15445)
    // Right Table: ListBuffer(d_date_sk#15454)
    // Output Table: ListBuffer(ws_quantity#747, ws_list_price#749, c_first_name#15444, c_last_name#15445)
    int left_nrow = tbl_JOIN_INNER_TD_6734_output.getNumRow();
    int right_nrow = tbl_Filter_TD_659_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5458_key_leftMajor, SW_JOIN_INNER_TD_5458_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6734_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_6734_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5458_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_6734_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_6734_output.getInt32(i, 1);
            int32_t _ws_list_price749 = tbl_JOIN_INNER_TD_6734_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444_n = tbl_JOIN_INNER_TD_6734_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_first_name15444 = std::string(_c_first_name15444_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445_n = tbl_JOIN_INNER_TD_6734_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_last_name15445 = std::string(_c_last_name15445_n.data());
            SW_JOIN_INNER_TD_5458_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _ws_list_price749, _c_first_name15444, _c_last_name15445};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_659_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk15454_k = tbl_Filter_TD_659_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5458_key_leftMajor{_d_date_sk15454_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_list_price749 = (it->second)._ws_list_price749;
                std::string _c_first_name15444 = (it->second)._c_first_name15444;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444_n{};
                memcpy(_c_first_name15444_n.data(), (_c_first_name15444).data(), (_c_first_name15444).length());
                std::string _c_last_name15445 = (it->second)._c_last_name15445;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445_n{};
                memcpy(_c_last_name15445_n.data(), (_c_last_name15445).data(), (_c_last_name15445).length());
                int32_t _d_date_sk15454 = tbl_Filter_TD_659_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5458_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_5458_output.setInt32(r, 1, _ws_list_price749);
                tbl_JOIN_INNER_TD_5458_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name15444_n);
                tbl_JOIN_INNER_TD_5458_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name15445_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5458_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5458_key_rightMajor, SW_JOIN_INNER_TD_5458_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_659_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk15454_k = tbl_Filter_TD_659_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5458_key_rightMajor keyA{_d_date_sk15454_k};
            int32_t _d_date_sk15454 = tbl_Filter_TD_659_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5458_payload_rightMajor payloadA{_d_date_sk15454};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6734_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_6734_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5458_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk15454 = (it->second)._d_date_sk15454;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_6734_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_6734_output.getInt32(i, 1);
                int32_t _ws_list_price749 = tbl_JOIN_INNER_TD_6734_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444_n = tbl_JOIN_INNER_TD_6734_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_first_name15444 = std::string(_c_first_name15444_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445_n = tbl_JOIN_INNER_TD_6734_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_last_name15445 = std::string(_c_last_name15445_n.data());
                tbl_JOIN_INNER_TD_5458_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_5458_output.setInt32(r, 1, _ws_list_price749);
                tbl_JOIN_INNER_TD_5458_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name15444_n);
                tbl_JOIN_INNER_TD_5458_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name15445_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5458_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5458_output #Row: " << tbl_JOIN_INNER_TD_5458_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5285_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_5285_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5285_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5285_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_5285_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_quantity1122;
    int32_t _cs_list_price1124;
    std::string _c_first_name15398;
    std::string _c_last_name15399;
};
struct SW_JOIN_INNER_TD_5285_key_rightMajor {
    int32_t _d_date_sk15408;
    bool operator==(const SW_JOIN_INNER_TD_5285_key_rightMajor& other) const {
        return ((_d_date_sk15408 == other._d_date_sk15408));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5285_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5285_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk15408));
    }
};
}
struct SW_JOIN_INNER_TD_5285_payload_rightMajor {
    int32_t _d_date_sk15408;
};
void SW_JOIN_INNER_TD_5285(Table &tbl_JOIN_INNER_TD_6903_output, Table &tbl_Filter_TD_6952_output, Table &tbl_JOIN_INNER_TD_5285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#15408))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_quantity#1122, cs_list_price#1124, c_first_name#15398, c_last_name#15399)
    // Right Table: ListBuffer(d_date_sk#15408)
    // Output Table: ListBuffer(cs_quantity#1122, cs_list_price#1124, c_first_name#15398, c_last_name#15399)
    int left_nrow = tbl_JOIN_INNER_TD_6903_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6952_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5285_key_leftMajor, SW_JOIN_INNER_TD_5285_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6903_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_6903_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5285_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_6903_output.getInt32(i, 0);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6903_output.getInt32(i, 1);
            int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6903_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n = tbl_JOIN_INNER_TD_6903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_first_name15398 = std::string(_c_first_name15398_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n = tbl_JOIN_INNER_TD_6903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_last_name15399 = std::string(_c_last_name15399_n.data());
            SW_JOIN_INNER_TD_5285_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_quantity1122, _cs_list_price1124, _c_first_name15398, _c_last_name15399};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6952_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk15408_k = tbl_Filter_TD_6952_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5285_key_leftMajor{_d_date_sk15408_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                std::string _c_first_name15398 = (it->second)._c_first_name15398;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n{};
                memcpy(_c_first_name15398_n.data(), (_c_first_name15398).data(), (_c_first_name15398).length());
                std::string _c_last_name15399 = (it->second)._c_last_name15399;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n{};
                memcpy(_c_last_name15399_n.data(), (_c_last_name15399).data(), (_c_last_name15399).length());
                int32_t _d_date_sk15408 = tbl_Filter_TD_6952_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5285_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5285_output.setInt32(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name15398_n);
                tbl_JOIN_INNER_TD_5285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name15399_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5285_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5285_key_rightMajor, SW_JOIN_INNER_TD_5285_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6952_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk15408_k = tbl_Filter_TD_6952_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5285_key_rightMajor keyA{_d_date_sk15408_k};
            int32_t _d_date_sk15408 = tbl_Filter_TD_6952_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5285_payload_rightMajor payloadA{_d_date_sk15408};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6903_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_6903_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5285_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk15408 = (it->second)._d_date_sk15408;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_6903_output.getInt32(i, 0);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6903_output.getInt32(i, 1);
                int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6903_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n = tbl_JOIN_INNER_TD_6903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_first_name15398 = std::string(_c_first_name15398_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n = tbl_JOIN_INNER_TD_6903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_last_name15399 = std::string(_c_last_name15399_n.data());
                tbl_JOIN_INNER_TD_5285_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5285_output.setInt32(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name15398_n);
                tbl_JOIN_INNER_TD_5285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name15399_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5285_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5285_output #Row: " << tbl_JOIN_INNER_TD_5285_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4919_key {
    std::string _c_last_name15445;
    std::string _c_first_name15444;
    bool operator==(const SW_Aggregate_TD_4919_key& other) const { return (_c_last_name15445 == other._c_last_name15445) && (_c_first_name15444 == other._c_first_name15444); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4919_key> {
    std::size_t operator() (const SW_Aggregate_TD_4919_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name15445)) + (hash<string>()(k._c_first_name15444));
    }
};
}
struct SW_Aggregate_TD_4919_payload {
    int32_t _sales15287_sum_0;
};
void SW_Aggregate_TD_4919(Table &tbl_JOIN_INNER_TD_5458_output, Table &tbl_Aggregate_TD_4919_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#15445, c_first_name#15444, sum(CheckOverflow((promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ws_list_price#749 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#15287)
    // Input: ListBuffer(ws_quantity#747, ws_list_price#749, c_first_name#15444, c_last_name#15445)
    // Output: ListBuffer(c_last_name#15445, c_first_name#15444, sales#15287)
    std::unordered_map<SW_Aggregate_TD_4919_key, SW_Aggregate_TD_4919_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5458_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_5458_output.getInt32(i, 0);
        int32_t _ws_list_price749 = tbl_JOIN_INNER_TD_5458_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444 = tbl_JOIN_INNER_TD_5458_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445 = tbl_JOIN_INNER_TD_5458_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_4919_key k{std::string(_c_last_name15445.data()), std::string(_c_first_name15444.data())};
        int64_t _sales15287_sum_0 = (_ws_quantity747 * _ws_list_price749);
        SW_Aggregate_TD_4919_payload p{_sales15287_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales15287_sum_0 + _sales15287_sum_0;
            p._sales15287_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445{};
        memcpy(_c_last_name15445.data(), ((it.first)._c_last_name15445).data(), ((it.first)._c_last_name15445).length());
        tbl_Aggregate_TD_4919_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name15445);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444{};
        memcpy(_c_first_name15444.data(), ((it.first)._c_first_name15444).data(), ((it.first)._c_first_name15444).length());
        tbl_Aggregate_TD_4919_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15444);
        int32_t _sales15287 = (it.second)._sales15287_sum_0;
        tbl_Aggregate_TD_4919_output.setInt32(r, 2, _sales15287);
        ++r;
    }
    tbl_Aggregate_TD_4919_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4919_output #Row: " << tbl_Aggregate_TD_4919_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4154_key {
    std::string _c_last_name15399;
    std::string _c_first_name15398;
    bool operator==(const SW_Aggregate_TD_4154_key& other) const { return (_c_last_name15399 == other._c_last_name15399) && (_c_first_name15398 == other._c_first_name15398); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4154_key> {
    std::size_t operator() (const SW_Aggregate_TD_4154_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name15399)) + (hash<string>()(k._c_first_name15398));
    }
};
}
struct SW_Aggregate_TD_4154_payload {
    int32_t _sales15284_sum_0;
};
void SW_Aggregate_TD_4154(Table &tbl_JOIN_INNER_TD_5285_output, Table &tbl_Aggregate_TD_4154_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#15399, c_first_name#15398, sum(CheckOverflow((promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(cs_list_price#1124 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#15284)
    // Input: ListBuffer(cs_quantity#1122, cs_list_price#1124, c_first_name#15398, c_last_name#15399)
    // Output: ListBuffer(c_last_name#15399, c_first_name#15398, sales#15284)
    std::unordered_map<SW_Aggregate_TD_4154_key, SW_Aggregate_TD_4154_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5285_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_5285_output.getInt32(i, 0);
        int32_t _cs_list_price1124 = tbl_JOIN_INNER_TD_5285_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398 = tbl_JOIN_INNER_TD_5285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399 = tbl_JOIN_INNER_TD_5285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_4154_key k{std::string(_c_last_name15399.data()), std::string(_c_first_name15398.data())};
        int64_t _sales15284_sum_0 = (_cs_quantity1122 * _cs_list_price1124);
        SW_Aggregate_TD_4154_payload p{_sales15284_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales15284_sum_0 + _sales15284_sum_0;
            p._sales15284_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399{};
        memcpy(_c_last_name15399.data(), ((it.first)._c_last_name15399).data(), ((it.first)._c_last_name15399).length());
        tbl_Aggregate_TD_4154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name15399);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398{};
        memcpy(_c_first_name15398.data(), ((it.first)._c_first_name15398).data(), ((it.first)._c_first_name15398).length());
        tbl_Aggregate_TD_4154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15398);
        int32_t _sales15284 = (it.second)._sales15284_sum_0;
        tbl_Aggregate_TD_4154_output.setInt32(r, 2, _sales15284);
        ++r;
    }
    tbl_Aggregate_TD_4154_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4154_output #Row: " << tbl_Aggregate_TD_4154_output.getNumRow() << std::endl;
}

void SW_Union_TD_3904(Table &tbl_Aggregate_TD_4154_output, Table &tbl_Aggregate_TD_4919_output, Table &tbl_Union_TD_3904_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(c_last_name#15399, c_first_name#15398, sales#15284)
    int r = 0;
    int row0 = tbl_Aggregate_TD_4154_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n = tbl_Union_TD_3904_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_3904_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name15399_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n = tbl_Union_TD_3904_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_Union_TD_3904_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15398_n);
        tbl_Union_TD_3904_output.setInt32(r, 2, tbl_Aggregate_TD_4154_output.getInt32(i, 2));
        ++r;
    }
    int row1 = tbl_Aggregate_TD_4919_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15445_n = tbl_Union_TD_3904_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_3904_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name15445_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15444_n = tbl_Union_TD_3904_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_Union_TD_3904_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15444_n);
        tbl_Union_TD_3904_output.setInt32(r, 2, tbl_Aggregate_TD_4919_output.getInt32(i, 2));
        ++r;
    }
    tbl_Union_TD_3904_output.setNumRow(r);
    std::cout << "tbl_Union_TD_3904_output #Row: " << tbl_Union_TD_3904_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2569(Table &tbl_Union_TD_3904_output, Table &tbl_Sort_TD_2569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_last_name#15399 ASC NULLS FIRST, c_first_name#15398 ASC NULLS FIRST, sales#15284 ASC NULLS FIRST)
    // Input: ListBuffer(c_last_name#15399, c_first_name#15398, sales#15284)
    // Output: ListBuffer(c_last_name#15399, c_first_name#15398, sales#15284)
    struct SW_Sort_TD_2569Row {
        std::string _c_last_name15399;
        std::string _c_first_name15398;
        int32_t _sales15284;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2569Row& a, const SW_Sort_TD_2569Row& b) const { return 
 (a._c_last_name15399 < b._c_last_name15399) || 
 ((a._c_last_name15399 == b._c_last_name15399) && (a._c_first_name15398 < b._c_first_name15398)) || 
 ((a._c_last_name15399 == b._c_last_name15399) && (a._c_first_name15398 == b._c_first_name15398) && (a._sales15284 < b._sales15284)); 
}
    }SW_Sort_TD_2569_order; 

    int nrow1 = tbl_Union_TD_3904_output.getNumRow();
    std::vector<SW_Sort_TD_2569Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399 = tbl_Union_TD_3904_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398 = tbl_Union_TD_3904_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _sales15284 = tbl_Union_TD_3904_output.getInt32(i, 2);
        SW_Sort_TD_2569Row t = {std::string(_c_last_name15399.data()),std::string(_c_first_name15398.data()),_sales15284};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2569_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399{};
        memcpy(_c_last_name15399.data(), (it._c_last_name15399).data(), (it._c_last_name15399).length());
        tbl_Sort_TD_2569_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_last_name15399);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398{};
        memcpy(_c_first_name15398.data(), (it._c_first_name15398).data(), (it._c_first_name15398).length());
        tbl_Sort_TD_2569_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_first_name15398);
        tbl_Sort_TD_2569_output.setInt32(r, 2, it._sales15284);
        ++r;
    }
    tbl_Sort_TD_2569_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2569_output #Row: " << tbl_Sort_TD_2569_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1875(Table &tbl_Sort_TD_2569_output, Table &tbl_LocalLimit_TD_1875_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(c_last_name#15399, c_first_name#15398, sales#15284)
    // Output: ListBuffer(c_last_name#15399, c_first_name#15398, sales#15284)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n = tbl_Sort_TD_2569_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1875_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name15399_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n = tbl_Sort_TD_2569_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1875_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15398_n);
        tbl_LocalLimit_TD_1875_output.setInt32(r, 2, tbl_Sort_TD_2569_output.getInt32(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1875_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1875_output #Row: " << tbl_LocalLimit_TD_1875_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0259(Table &tbl_LocalLimit_TD_1875_output, Table &tbl_GlobalLimit_TD_0259_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(c_last_name#15399, c_first_name#15398, sales#15284)
    // Output: ListBuffer(c_last_name#15399, c_first_name#15398, sales#15284)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name15399_n = tbl_LocalLimit_TD_1875_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0259_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name15399_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name15398_n = tbl_LocalLimit_TD_1875_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0259_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name15398_n);
        tbl_GlobalLimit_TD_0259_output.setInt32(r, 2, tbl_LocalLimit_TD_1875_output.getInt32(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0259_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0259_output #Row: " << tbl_GlobalLimit_TD_0259_output.getNumRow() << std::endl;
}

