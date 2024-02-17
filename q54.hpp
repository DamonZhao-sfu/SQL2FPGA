#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_15195(Table &tbl_SerializeFromObject_TD_16442_input, Table &tbl_Filter_TD_15195_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND (isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_customer_sk#733))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_16442_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_16442_input.getInt32(i, 2);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_16442_input.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_16442_input.getInt32(i, 1);
        if ((_ws_item_sk732!= 0) && ((_ws_sold_date_sk729!= 0) && (_ws_bill_customer_sk733!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_16442_input.getInt32(i, 0);
            tbl_Filter_TD_15195_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_16442_input.getInt32(i, 1);
            tbl_Filter_TD_15195_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_16442_input.getInt32(i, 2);
            tbl_Filter_TD_15195_output.setInt32(r, 2, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_15195_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_15195_output #Row: " << tbl_Filter_TD_15195_output.getNumRow() << std::endl;
}

void SW_Filter_TD_15377(Table &tbl_SerializeFromObject_TD_1633_input, Table &tbl_Filter_TD_15377_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND (isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_bill_customer_sk#1107))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1633_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_1633_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_1633_input.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_1633_input.getInt32(i, 1);
        if ((_cs_item_sk1119!= 0) && ((_cs_sold_date_sk1104!= 0) && (_cs_bill_customer_sk1107!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_1633_input.getInt32(i, 0);
            tbl_Filter_TD_15377_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_1633_input.getInt32(i, 1);
            tbl_Filter_TD_15377_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_1633_input.getInt32(i, 2);
            tbl_Filter_TD_15377_output.setInt32(r, 2, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_15377_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_15377_output #Row: " << tbl_Filter_TD_15377_output.getNumRow() << std::endl;
}

void SW_Project_TD_14709(Table &tbl_Filter_TD_15195_output, Table &tbl_Project_TD_14709_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_sold_date_sk#729 AS sold_date_sk#8029, ws_bill_customer_sk#733 AS customer_sk#8030, ws_item_sk#732 AS item_sk#8031)
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_item_sk#732)
    // Output: ListBuffer(sold_date_sk#8029, customer_sk#8030, item_sk#8031)
    int nrow1 = tbl_Filter_TD_15195_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_15195_output.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_15195_output.getInt32(i, 1);
        int32_t _ws_item_sk732 = tbl_Filter_TD_15195_output.getInt32(i, 2);
        int32_t _sold_date_sk8029 = _ws_sold_date_sk729;
        tbl_Project_TD_14709_output.setInt32(i, 0, _sold_date_sk8029);
        int32_t _customer_sk8030 = _ws_bill_customer_sk733;
        tbl_Project_TD_14709_output.setInt32(i, 1, _customer_sk8030);
        int32_t _item_sk8031 = _ws_item_sk732;
        tbl_Project_TD_14709_output.setInt32(i, 2, _item_sk8031);
    }
    tbl_Project_TD_14709_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_14709_output #Row: " << tbl_Project_TD_14709_output.getNumRow() << std::endl;
}

void SW_Project_TD_14824(Table &tbl_Filter_TD_15377_output, Table &tbl_Project_TD_14824_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_sold_date_sk#1104 AS sold_date_sk#8026, cs_bill_customer_sk#1107 AS customer_sk#8027, cs_item_sk#1119 AS item_sk#8028)
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Output: ListBuffer(sold_date_sk#8026, customer_sk#8027, item_sk#8028)
    int nrow1 = tbl_Filter_TD_15377_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_15377_output.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_15377_output.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_Filter_TD_15377_output.getInt32(i, 2);
        int32_t _sold_date_sk8026 = _cs_sold_date_sk1104;
        tbl_Project_TD_14824_output.setInt32(i, 0, _sold_date_sk8026);
        int32_t _customer_sk8027 = _cs_bill_customer_sk1107;
        tbl_Project_TD_14824_output.setInt32(i, 1, _customer_sk8027);
        int32_t _item_sk8028 = _cs_item_sk1119;
        tbl_Project_TD_14824_output.setInt32(i, 2, _item_sk8028);
    }
    tbl_Project_TD_14824_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_14824_output #Row: " << tbl_Project_TD_14824_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13727(Table &tbl_SerializeFromObject_TD_14101_input, Table &tbl_Filter_TD_13727_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(i_category#240) AND isnotnull(i_class#238)) AND ((i_category#240 = Women) AND (i_class#238 = maternity))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_category#240, i_class#238)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14101_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_14101_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_SerializeFromObject_TD_14101_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_14101_input.getInt32(i, 0);
        if (((（std::string(_isnotnulli_category240.data()) != "NULL") && （std::string(_isnotnulli_class238.data()) != "NULL")) && ((std::string(_i_category240.data()) == "Women") && (std::string(_i_class238.data()) == "maternity"))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_14101_input.getInt32(i, 0);
            tbl_Filter_TD_13727_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_13727_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13727_output #Row: " << tbl_Filter_TD_13727_output.getNumRow() << std::endl;
}

void SW_Union_TD_13516(Table &tbl_Project_TD_14824_output, Table &tbl_Project_TD_14709_output, Table &tbl_Union_TD_13516_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sold_date_sk#8026, customer_sk#8027, item_sk#8028)
    int r = 0;
    int row0 = tbl_Project_TD_14824_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_13516_output.setInt32(r, 0, tbl_Project_TD_14824_output.getInt32(i, 0));
        tbl_Union_TD_13516_output.setInt32(r, 1, tbl_Project_TD_14824_output.getInt32(i, 1));
        tbl_Union_TD_13516_output.setInt32(r, 2, tbl_Project_TD_14824_output.getInt32(i, 2));
        ++r;
    }
    int row1 = tbl_Project_TD_14709_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_13516_output.setInt32(r, 0, tbl_Project_TD_14709_output.getInt32(i, 0));
        tbl_Union_TD_13516_output.setInt32(r, 1, tbl_Project_TD_14709_output.getInt32(i, 1));
        tbl_Union_TD_13516_output.setInt32(r, 2, tbl_Project_TD_14709_output.getInt32(i, 2));
        ++r;
    }
    tbl_Union_TD_13516_output.setNumRow(r);
    std::cout << "tbl_Union_TD_13516_output #Row: " << tbl_Union_TD_13516_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12887(Table &tbl_SerializeFromObject_TD_13214_input, Table &tbl_Filter_TD_12887_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 12) AND (d_year#126 = 1998))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13214_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_13214_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_13214_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_13214_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 12) && (_d_year126 == 1998))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_13214_input.getInt32(i, 0);
            tbl_Filter_TD_12887_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_12887_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12887_output #Row: " << tbl_Filter_TD_12887_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12309_key_leftMajor {
    int32_t _item_sk8028;
    bool operator==(const SW_JOIN_INNER_TD_12309_key_leftMajor& other) const {
        return ((_item_sk8028 == other._item_sk8028));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12309_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12309_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk8028));
    }
};
}
struct SW_JOIN_INNER_TD_12309_payload_leftMajor {
    int32_t _sold_date_sk8026;
    int32_t _customer_sk8027;
    int32_t _item_sk8028;
};
struct SW_JOIN_INNER_TD_12309_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_12309_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12309_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12309_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_12309_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_12309(Table &tbl_Union_TD_13516_output, Table &tbl_Filter_TD_13727_output, Table &tbl_JOIN_INNER_TD_12309_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((item_sk#8028 = i_item_sk#228))
    // Left Table: ListBuffer(sold_date_sk#8026, customer_sk#8027, item_sk#8028)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(sold_date_sk#8026, customer_sk#8027)
    int left_nrow = tbl_Union_TD_13516_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13727_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12309_key_leftMajor, SW_JOIN_INNER_TD_12309_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_13516_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk8028_k = tbl_Union_TD_13516_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12309_key_leftMajor keyA{_item_sk8028_k};
            int32_t _sold_date_sk8026 = tbl_Union_TD_13516_output.getInt32(i, 0);
            int32_t _customer_sk8027 = tbl_Union_TD_13516_output.getInt32(i, 1);
            int32_t _item_sk8028 = tbl_Union_TD_13516_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12309_payload_leftMajor payloadA{_sold_date_sk8026, _customer_sk8027, _item_sk8028};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13727_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13727_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12309_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sold_date_sk8026 = (it->second)._sold_date_sk8026;
                int32_t _customer_sk8027 = (it->second)._customer_sk8027;
                int32_t _item_sk8028 = (it->second)._item_sk8028;
                int32_t _i_item_sk228 = tbl_Filter_TD_13727_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_12309_output.setInt32(r, 0, _sold_date_sk8026);
                tbl_JOIN_INNER_TD_12309_output.setInt32(r, 1, _customer_sk8027);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12309_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12309_key_rightMajor, SW_JOIN_INNER_TD_12309_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13727_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13727_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12309_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_13727_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12309_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_13516_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _item_sk8028_k = tbl_Union_TD_13516_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12309_key_rightMajor{_item_sk8028_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _sold_date_sk8026 = tbl_Union_TD_13516_output.getInt32(i, 0);
                int32_t _customer_sk8027 = tbl_Union_TD_13516_output.getInt32(i, 1);
                int32_t _item_sk8028 = tbl_Union_TD_13516_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_12309_output.setInt32(r, 0, _sold_date_sk8026);
                tbl_JOIN_INNER_TD_12309_output.setInt32(r, 1, _customer_sk8027);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12309_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12309_output #Row: " << tbl_JOIN_INNER_TD_12309_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11585(Table &tbl_SerializeFromObject_TD_12568_input, Table &tbl_Filter_TD_11585_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12568_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_12568_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_12568_input.getInt32(i, 1);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_12568_input.getInt32(i, 0);
            tbl_Filter_TD_11585_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_12568_input.getInt32(i, 1);
            tbl_Filter_TD_11585_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_11585_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11585_output #Row: " << tbl_Filter_TD_11585_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11840_key_leftMajor {
    int32_t _sold_date_sk8026;
    bool operator==(const SW_JOIN_INNER_TD_11840_key_leftMajor& other) const {
        return ((_sold_date_sk8026 == other._sold_date_sk8026));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11840_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11840_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sold_date_sk8026));
    }
};
}
struct SW_JOIN_INNER_TD_11840_payload_leftMajor {
    int32_t _sold_date_sk8026;
    int32_t _customer_sk8027;
};
struct SW_JOIN_INNER_TD_11840_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_11840_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11840_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11840_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_11840_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_11840(Table &tbl_JOIN_INNER_TD_12309_output, Table &tbl_Filter_TD_12887_output, Table &tbl_JOIN_INNER_TD_11840_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sold_date_sk#8026 = d_date_sk#120))
    // Left Table: ListBuffer(sold_date_sk#8026, customer_sk#8027)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(customer_sk#8027)
    int left_nrow = tbl_JOIN_INNER_TD_12309_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12887_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11840_key_leftMajor, SW_JOIN_INNER_TD_11840_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12309_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sold_date_sk8026_k = tbl_JOIN_INNER_TD_12309_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11840_key_leftMajor keyA{_sold_date_sk8026_k};
            int32_t _sold_date_sk8026 = tbl_JOIN_INNER_TD_12309_output.getInt32(i, 0);
            int32_t _customer_sk8027 = tbl_JOIN_INNER_TD_12309_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11840_payload_leftMajor payloadA{_sold_date_sk8026, _customer_sk8027};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12887_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_12887_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11840_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sold_date_sk8026 = (it->second)._sold_date_sk8026;
                int32_t _customer_sk8027 = (it->second)._customer_sk8027;
                int32_t _d_date_sk120 = tbl_Filter_TD_12887_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11840_output.setInt32(r, 0, _customer_sk8027);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11840_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11840_key_rightMajor, SW_JOIN_INNER_TD_11840_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12887_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_12887_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11840_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_12887_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11840_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12309_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sold_date_sk8026_k = tbl_JOIN_INNER_TD_12309_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11840_key_rightMajor{_sold_date_sk8026_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _sold_date_sk8026 = tbl_JOIN_INNER_TD_12309_output.getInt32(i, 0);
                int32_t _customer_sk8027 = tbl_JOIN_INNER_TD_12309_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_11840_output.setInt32(r, 0, _customer_sk8027);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11840_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11840_output #Row: " << tbl_JOIN_INNER_TD_11840_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10770_key_leftMajor {
    int32_t _customer_sk8027;
    bool operator==(const SW_JOIN_INNER_TD_10770_key_leftMajor& other) const {
        return ((_customer_sk8027 == other._customer_sk8027));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10770_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10770_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._customer_sk8027));
    }
};
}
struct SW_JOIN_INNER_TD_10770_payload_leftMajor {
    int32_t _customer_sk8027;
};
struct SW_JOIN_INNER_TD_10770_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_10770_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10770_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10770_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_10770_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_10770(Table &tbl_JOIN_INNER_TD_11840_output, Table &tbl_Filter_TD_11585_output, Table &tbl_JOIN_INNER_TD_10770_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = customer_sk#8027))
    // Left Table: ListBuffer(customer_sk#8027)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int left_nrow = tbl_JOIN_INNER_TD_11840_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11585_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10770_key_leftMajor, SW_JOIN_INNER_TD_10770_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11840_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _customer_sk8027_k = tbl_JOIN_INNER_TD_11840_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10770_key_leftMajor keyA{_customer_sk8027_k};
            int32_t _customer_sk8027 = tbl_JOIN_INNER_TD_11840_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10770_payload_leftMajor payloadA{_customer_sk8027};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11585_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_11585_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10770_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _customer_sk8027 = (it->second)._customer_sk8027;
                int32_t _c_customer_sk0 = tbl_Filter_TD_11585_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_11585_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10770_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_10770_output.setInt32(r, 1, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10770_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10770_key_rightMajor, SW_JOIN_INNER_TD_10770_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11585_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_11585_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10770_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_11585_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_11585_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10770_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11840_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _customer_sk8027_k = tbl_JOIN_INNER_TD_11840_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10770_key_rightMajor{_customer_sk8027_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _customer_sk8027 = tbl_JOIN_INNER_TD_11840_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10770_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_10770_output.setInt32(r, 1, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10770_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10770_output #Row: " << tbl_JOIN_INNER_TD_10770_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9863(Table &tbl_SerializeFromObject_TD_10449_input, Table &tbl_Filter_TD_9863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#8101) AND isnotnull(d_moy#8103)) AND ((d_year#8101 = 1998) AND (d_moy#8103 = 12))))
    // Input: ListBuffer(d_month_seq#8098, d_year#8101, d_moy#8103)
    // Output: ListBuffer(d_month_seq#8098)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10449_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year8101 = tbl_SerializeFromObject_TD_10449_input.getInt32(i, 1);
        int32_t _d_moy8103 = tbl_SerializeFromObject_TD_10449_input.getInt32(i, 2);
        if (((_d_year8101!= 0) && (_d_moy8103!= 0)) && ((_d_year8101 == 1998) && (_d_moy8103 == 12))) {
            int32_t _d_month_seq8098_t = tbl_SerializeFromObject_TD_10449_input.getInt32(i, 0);
            tbl_Filter_TD_9863_output.setInt32(r, 0, _d_month_seq8098_t);
            r++;
        }
    }
    tbl_Filter_TD_9863_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9863_output #Row: " << tbl_Filter_TD_9863_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9242(Table &tbl_SerializeFromObject_TD_1064_input, Table &tbl_Filter_TD_9242_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#8073) AND isnotnull(d_moy#8075)) AND ((d_year#8073 = 1998) AND (d_moy#8075 = 12))))
    // Input: ListBuffer(d_month_seq#8070, d_year#8073, d_moy#8075)
    // Output: ListBuffer(d_month_seq#8070)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1064_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year8073 = tbl_SerializeFromObject_TD_1064_input.getInt32(i, 1);
        int32_t _d_moy8075 = tbl_SerializeFromObject_TD_1064_input.getInt32(i, 2);
        if (((_d_year8073!= 0) && (_d_moy8075!= 0)) && ((_d_year8073 == 1998) && (_d_moy8075 == 12))) {
            int32_t _d_month_seq8070_t = tbl_SerializeFromObject_TD_1064_input.getInt32(i, 0);
            tbl_Filter_TD_9242_output.setInt32(r, 0, _d_month_seq8070_t);
            r++;
        }
    }
    tbl_Filter_TD_9242_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9242_output #Row: " << tbl_Filter_TD_9242_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9344(Table &tbl_SerializeFromObject_TD_10471_input, Table &tbl_Filter_TD_9344_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10471_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_10471_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10471_input.getInt32(i, 0);
        if ((_ss_customer_sk1209!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10471_input.getInt32(i, 0);
            tbl_Filter_TD_9344_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_10471_input.getInt32(i, 1);
            tbl_Filter_TD_9344_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_10471_input.getInt32(i, 2);
            tbl_Filter_TD_9344_output.setInt32(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_9344_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9344_output #Row: " << tbl_Filter_TD_9344_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_9618_key {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_Aggregate_TD_9618_key& other) const { return (_c_customer_sk0 == other._c_customer_sk0) && (_c_current_addr_sk4 == other._c_current_addr_sk4); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_9618_key> {
    std::size_t operator() (const SW_Aggregate_TD_9618_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0)) + (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_Aggregate_TD_9618_payload {
};
void SW_Aggregate_TD_9618(Table &tbl_JOIN_INNER_TD_10770_output, Table &tbl_Aggregate_TD_9618_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    std::unordered_map<SW_Aggregate_TD_9618_key, SW_Aggregate_TD_9618_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10770_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_10770_output.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_10770_output.getInt32(i, 1);
        SW_Aggregate_TD_9618_key k{_c_customer_sk0, _c_current_addr_sk4};
        SW_Aggregate_TD_9618_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_9618_output.setInt32(r, 0, (it.first)._c_customer_sk0);
        tbl_Aggregate_TD_9618_output.setInt32(r, 1, (it.first)._c_current_addr_sk4);
        ++r;
    }
    tbl_Aggregate_TD_9618_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9618_output #Row: " << tbl_Aggregate_TD_9618_output.getNumRow() << std::endl;
}

void SW_Project_TD_8588(Table &tbl_Filter_TD_9863_output, Table &tbl_Project_TD_8588_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((d_month_seq#8098 + 3) AS (d_month_seq + 3)#8066)
    // Input: ListBuffer(d_month_seq#8098)
    // Output: ListBuffer((d_month_seq + 3)#8066)
    int nrow1 = tbl_Filter_TD_9863_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq8098 = tbl_Filter_TD_9863_output.getInt32(i, 0);
        int32_t _d_month_seq38066 = (_d_month_seq8098 + 3);
        tbl_Project_TD_8588_output.setInt32(i, 0, _d_month_seq38066);
    }
    tbl_Project_TD_8588_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8588_output #Row: " << tbl_Project_TD_8588_output.getNumRow() << std::endl;
}

void SW_Project_TD_8689(Table &tbl_Filter_TD_9242_output, Table &tbl_Project_TD_8689_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((d_month_seq#8070 + 1) AS (d_month_seq + 1)#8065)
    // Input: ListBuffer(d_month_seq#8070)
    // Output: ListBuffer((d_month_seq + 1)#8065)
    int nrow1 = tbl_Filter_TD_9242_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq8070 = tbl_Filter_TD_9242_output.getInt32(i, 0);
        int32_t _d_month_seq18065 = (_d_month_seq8070 + 1);
        tbl_Project_TD_8689_output.setInt32(i, 0, _d_month_seq18065);
    }
    tbl_Project_TD_8689_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8689_output #Row: " << tbl_Project_TD_8689_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8888(Table &tbl_SerializeFromObject_TD_9712_input, Table &tbl_Filter_TD_8888_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND (isnotnull(ca_county#61) AND isnotnull(ca_state#62))))
    // Input: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9712_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_9712_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_SerializeFromObject_TD_9712_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_9712_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_ca_address_sk54!= 0) && (（std::string(_isnotnullca_county61.data()) != "NULL") && （std::string(_isnotnullca_state62.data()) != "NULL"))) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_9712_input.getInt32(i, 0);
            tbl_Filter_TD_8888_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_t = tbl_SerializeFromObject_TD_9712_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county61_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_9712_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8888_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_8888_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8888_output #Row: " << tbl_Filter_TD_8888_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8356_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_8356_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8356_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8356_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_8356_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_8356_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_8356_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8356_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8356_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_8356_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_ext_sales_price1221;
};
void SW_JOIN_INNER_TD_8356(Table &tbl_Aggregate_TD_9618_output, Table &tbl_Filter_TD_9344_output, Table &tbl_JOIN_INNER_TD_8356_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_sales_price#1221)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, ss_sold_date_sk#1206, ss_ext_sales_price#1221)
    int left_nrow = tbl_Aggregate_TD_9618_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9344_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8356_key_leftMajor, SW_JOIN_INNER_TD_8356_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_9618_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Aggregate_TD_9618_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8356_key_leftMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Aggregate_TD_9618_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Aggregate_TD_9618_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8356_payload_leftMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9344_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_9344_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8356_key_leftMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9344_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_9344_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9344_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8356_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_8356_output.setInt32(r, 1, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_8356_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8356_output.setInt32(r, 3, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8356_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8356_key_rightMajor, SW_JOIN_INNER_TD_8356_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9344_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_9344_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8356_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9344_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_9344_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9344_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8356_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_9618_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Aggregate_TD_9618_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8356_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _c_customer_sk0 = tbl_Aggregate_TD_9618_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Aggregate_TD_9618_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8356_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8356_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8356_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_8356_output.setInt32(r, 1, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8356_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8356_output #Row: " << tbl_JOIN_INNER_TD_8356_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_7514_key;
struct SW_Aggregate_TD_7514_payload {
};
void SW_Aggregate_TD_7514(Table &tbl_Project_TD_8588_output, Table &tbl_Aggregate_TD_7514_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer((d_month_seq + 3)#8066)
    // Input: ListBuffer((d_month_seq + 3)#8066)
    // Output: ListBuffer((d_month_seq + 3)#8066)
    std::unordered_map<SW_Aggregate_TD_7514_key, SW_Aggregate_TD_7514_payload> ht1;
    int nrow1 = tbl_Project_TD_8588_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq38066 = tbl_Project_TD_8588_output.getInt32(i, 0);
        SW_Aggregate_TD_7514_key k = _d_month_seq38066;
        SW_Aggregate_TD_7514_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_7514_output.setInt32(r, 0, (it.first));
        ++r;
    }
    tbl_Aggregate_TD_7514_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7514_output #Row: " << tbl_Aggregate_TD_7514_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_7536_key;
struct SW_Aggregate_TD_7536_payload {
};
void SW_Aggregate_TD_7536(Table &tbl_Project_TD_8689_output, Table &tbl_Aggregate_TD_7536_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer((d_month_seq + 1)#8065)
    // Input: ListBuffer((d_month_seq + 1)#8065)
    // Output: ListBuffer((d_month_seq + 1)#8065)
    std::unordered_map<SW_Aggregate_TD_7536_key, SW_Aggregate_TD_7536_payload> ht1;
    int nrow1 = tbl_Project_TD_8689_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq18065 = tbl_Project_TD_8689_output.getInt32(i, 0);
        SW_Aggregate_TD_7536_key k = _d_month_seq18065;
        SW_Aggregate_TD_7536_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_7536_output.setInt32(r, 0, (it.first));
        ++r;
    }
    tbl_Aggregate_TD_7536_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7536_output #Row: " << tbl_Aggregate_TD_7536_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7335(Table &tbl_SerializeFromObject_TD_8188_input, Table &tbl_Filter_TD_7335_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_county#401) AND isnotnull(s_state#402)))
    // Input: ListBuffer(s_county#401, s_state#402)
    // Output: ListBuffer(s_county#401, s_state#402)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8188_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_county401 = tbl_SerializeFromObject_TD_8188_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402 = tbl_SerializeFromObject_TD_8188_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (（std::string(_isnotnulls_county401.data()) != "NULL") && （std::string(_isnotnulls_state402.data()) != "NULL")) {
            std::array<char, TPCDS_READ_MAX + 1> _s_county401_t = tbl_SerializeFromObject_TD_8188_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_7335_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_county401_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_t = tbl_SerializeFromObject_TD_8188_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7335_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_state402_t);
            r++;
        }
    }
    tbl_Filter_TD_7335_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7335_output #Row: " << tbl_Filter_TD_7335_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7783_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_7783_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7783_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7783_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_7783_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7783_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_7783_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7783_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7783_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_7783_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_county61;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_7783(Table &tbl_JOIN_INNER_TD_8356_output, Table &tbl_Filter_TD_8888_output, Table &tbl_JOIN_INNER_TD_7783_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, ss_sold_date_sk#1206, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62)
    // Output Table: ListBuffer(c_customer_sk#0, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ca_county#61, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_8356_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8888_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7783_key_leftMajor, SW_JOIN_INNER_TD_7783_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8356_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7783_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 1);
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7783_payload_leftMajor payloadA{_c_customer_sk0, _c_current_addr_sk4, _ss_sold_date_sk1206, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8888_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8888_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7783_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ca_address_sk54 = tbl_Filter_TD_8888_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_8888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_8888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_7783_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_7783_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7783_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county61_n);
                tbl_JOIN_INNER_TD_7783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7783_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7783_key_rightMajor, SW_JOIN_INNER_TD_7783_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8888_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8888_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7783_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_8888_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_8888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_8888_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_7783_payload_rightMajor payloadA{_ca_address_sk54, _ca_county61, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8356_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7783_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 1);
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8356_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county61_n);
                tbl_JOIN_INNER_TD_7783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_state62_n);
                tbl_JOIN_INNER_TD_7783_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_7783_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7783_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7783_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7783_output #Row: " << tbl_JOIN_INNER_TD_7783_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6724(Table &tbl_SerializeFromObject_TD_7798_input, Table &tbl_Aggregate_TD_7536_output, Table &tbl_Aggregate_TD_7514_output, Table &tbl_Filter_TD_6724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#8039) AND ((d_month_seq#8039 >= scalar-subquery#8033 []) AND (d_month_seq#8039 <= scalar-subquery#8034 []))) AND isnotnull(d_date_sk#8036)))
    // Input: ListBuffer(d_date_sk#8036, d_month_seq#8039)
    // Output: ListBuffer(d_date_sk#8036)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7798_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq8039 = tbl_SerializeFromObject_TD_7798_input.getInt32(i, 1);
        int32_t _d_date_sk8036 = tbl_SerializeFromObject_TD_7798_input.getInt32(i, 0);
        if (((_d_month_seq8039!= 0) && ((_d_month_seq8039 >= tbl_Aggregate_TD_7536_output.getInt32(0, 0)) && (_d_month_seq8039 <= tbl_Aggregate_TD_7536_output.getInt32(0, 0)))) && (_d_date_sk8036!= 0)) {
            int32_t _d_date_sk8036_t = tbl_SerializeFromObject_TD_7798_input.getInt32(i, 0);
            tbl_Filter_TD_6724_output.setInt32(r, 0, _d_date_sk8036_t);
            r++;
        }
    }
    tbl_Filter_TD_6724_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6724_output #Row: " << tbl_Filter_TD_6724_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6499_key_leftMajor {
    std::string _ca_county61;
    std::string _ca_state62;
    bool operator==(const SW_JOIN_INNER_TD_6499_key_leftMajor& other) const {
        return ((_ca_county61 == other._ca_county61) && (_ca_state62 == other._ca_state62));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6499_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6499_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county61)) + (hash<string>()(k._ca_state62));
    }
};
}
struct SW_JOIN_INNER_TD_6499_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_ext_sales_price1221;
    std::string _ca_county61;
    std::string _ca_state62;
};
struct SW_JOIN_INNER_TD_6499_key_rightMajor {
    std::string _s_county401;
    std::string _s_state402;
    bool operator==(const SW_JOIN_INNER_TD_6499_key_rightMajor& other) const {
        return ((_s_county401 == other._s_county401) && (_s_state402 == other._s_state402));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6499_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6499_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._s_county401)) + (hash<string>()(k._s_state402));
    }
};
}
struct SW_JOIN_INNER_TD_6499_payload_rightMajor {
    std::string _s_county401;
    std::string _s_state402;
};
void SW_JOIN_INNER_TD_6499(Table &tbl_JOIN_INNER_TD_7783_output, Table &tbl_Filter_TD_7335_output, Table &tbl_JOIN_INNER_TD_6499_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ca_county#61 = s_county#401) AND (ca_state#62 = s_state#402)))
    // Left Table: ListBuffer(c_customer_sk#0, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ca_county#61, ca_state#62)
    // Right Table: ListBuffer(s_county#401, s_state#402)
    // Output Table: ListBuffer(c_customer_sk#0, ss_sold_date_sk#1206, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_7783_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7335_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6499_key_leftMajor, SW_JOIN_INNER_TD_6499_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7783_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_JOIN_INNER_TD_7783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_k_n = tbl_JOIN_INNER_TD_7783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_state62_k = std::string(_ca_state62_k_n.data());
            SW_JOIN_INNER_TD_6499_key_leftMajor keyA{_ca_county61_k, _ca_state62_k};
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_7783_output.getInt32(i, 0);
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7783_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7783_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_7783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_7783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_6499_payload_leftMajor payloadA{_c_customer_sk0, _ss_sold_date_sk1206, _ss_ext_sales_price1221, _ca_county61, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7335_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_county401_k_n = tbl_Filter_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_county401_k = std::string(_s_county401_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_k_n = tbl_Filter_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_state402_k = std::string(_s_state402_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6499_key_leftMajor{_s_county401_k, _s_state402_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                std::array<char, TPCDS_READ_MAX + 1> _s_county401_n = tbl_Filter_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _s_county401 = std::string(_s_county401_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_state402 = std::string(_s_state402_n.data());
                tbl_JOIN_INNER_TD_6499_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_6499_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_6499_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6499_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6499_key_rightMajor, SW_JOIN_INNER_TD_6499_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7335_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_county401_k_n = tbl_Filter_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_county401_k = std::string(_s_county401_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_k_n = tbl_Filter_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_state402_k = std::string(_s_state402_k_n.data());
            SW_JOIN_INNER_TD_6499_key_rightMajor keyA{_s_county401_k, _s_state402_k};
            std::array<char, TPCDS_READ_MAX + 1> _s_county401_n = tbl_Filter_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_county401 = std::string(_s_county401_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7335_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_state402 = std::string(_s_state402_n.data());
            SW_JOIN_INNER_TD_6499_payload_rightMajor payloadA{_s_county401, _s_state402};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7783_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_JOIN_INNER_TD_7783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_k_n = tbl_JOIN_INNER_TD_7783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_state62_k = std::string(_ca_state62_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6499_key_rightMajor{_ca_county61_k, _ca_state62_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _s_county401 = (it->second)._s_county401;
                std::array<char, TPCDS_READ_MAX + 1> _s_county401_n{};
                memcpy(_s_county401_n.data(), (_s_county401).data(), (_s_county401).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_7783_output.getInt32(i, 0);
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7783_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7783_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_7783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_7783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_6499_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_6499_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_6499_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6499_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6499_output #Row: " << tbl_JOIN_INNER_TD_6499_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5630_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_5630_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5630_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5630_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_5630_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_5630_key_rightMajor {
    int32_t _d_date_sk8036;
    bool operator==(const SW_JOIN_INNER_TD_5630_key_rightMajor& other) const {
        return ((_d_date_sk8036 == other._d_date_sk8036));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5630_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5630_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8036));
    }
};
}
struct SW_JOIN_INNER_TD_5630_payload_rightMajor {
    int32_t _d_date_sk8036;
};
void SW_JOIN_INNER_TD_5630(Table &tbl_JOIN_INNER_TD_6499_output, Table &tbl_Filter_TD_6724_output, Table &tbl_JOIN_INNER_TD_5630_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#8036))
    // Left Table: ListBuffer(c_customer_sk#0, ss_sold_date_sk#1206, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(d_date_sk#8036)
    // Output Table: ListBuffer(c_customer_sk#0, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_6499_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6724_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5630_key_leftMajor, SW_JOIN_INNER_TD_5630_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6499_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_6499_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5630_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_6499_output.getInt32(i, 0);
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_6499_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6499_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5630_payload_leftMajor payloadA{_c_customer_sk0, _ss_sold_date_sk1206, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6724_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8036_k = tbl_Filter_TD_6724_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5630_key_leftMajor{_d_date_sk8036_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk8036 = tbl_Filter_TD_6724_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5630_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_5630_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5630_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5630_key_rightMajor, SW_JOIN_INNER_TD_5630_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6724_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8036_k = tbl_Filter_TD_6724_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5630_key_rightMajor keyA{_d_date_sk8036_k};
            int32_t _d_date_sk8036 = tbl_Filter_TD_6724_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5630_payload_rightMajor payloadA{_d_date_sk8036};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6499_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_6499_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5630_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8036 = (it->second)._d_date_sk8036;
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_6499_output.getInt32(i, 0);
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_6499_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6499_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5630_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_5630_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5630_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5630_output #Row: " << tbl_JOIN_INNER_TD_5630_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_4680_key;
struct SW_Aggregate_TD_4680_payload {
    int32_t _segment8035_sum_0;
};
void SW_Aggregate_TD_4680(Table &tbl_JOIN_INNER_TD_5630_output, Table &tbl_Aggregate_TD_4680_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#0, cast(CheckOverflow((promote_precision(MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2)) / 50.00), DecimalType(21,6), true) as int) AS segment#8035)
    // Input: ListBuffer(c_customer_sk#0, ss_ext_sales_price#1221)
    // Output: ListBuffer(segment#8035)
    std::unordered_map<SW_Aggregate_TD_4680_key, SW_Aggregate_TD_4680_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5630_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_5630_output.getInt32(i, 0);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5630_output.getInt32(i, 1);
        SW_Aggregate_TD_4680_key k = _c_customer_sk0;
        int32_t _segment8035_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_4680_payload p{_segment8035_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._segment8035_sum_0 + _segment8035_sum_0;
            p._segment8035_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_sk0 not required in the output table
        int32_t _segment8035 = ((it.second)._segment8035_sum_0 / 50.00);
        tbl_Aggregate_TD_4680_output.setInt32(r, 0, _segment8035);
        ++r;
    }
    tbl_Aggregate_TD_4680_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4680_output #Row: " << tbl_Aggregate_TD_4680_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_3246_key;
struct SW_Aggregate_TD_3246_payload {
    int64_t _num_customers8024L_count_0;
    int32_t _segment_base8025;
};
void SW_Aggregate_TD_3246(Table &tbl_Aggregate_TD_4680_output, Table &tbl_Aggregate_TD_3246_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(segment#8035, count(1) AS num_customers#8024L, (segment#8035 * 50) AS segment_base#8025)
    // Input: ListBuffer(segment#8035)
    // Output: ListBuffer(segment#8035, num_customers#8024L, segment_base#8025)
    std::unordered_map<SW_Aggregate_TD_3246_key, SW_Aggregate_TD_3246_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_4680_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _segment8035 = tbl_Aggregate_TD_4680_output.getInt32(i, 0);
        SW_Aggregate_TD_3246_key k = _segment8035;
        int64_t _num_customers8024L_count_0 = 1 != 0 ? 1 : 0;
        int32_t _segment_base8025 = (_segment8035 * 50);
        SW_Aggregate_TD_3246_payload p{_num_customers8024L_count_0, _segment_base8025};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._num_customers8024L_count_0 + _num_customers8024L_count_0;
            p._num_customers8024L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_3246_output.setInt32(r, 0, (it.first));
        int64_t _num_customers8024L = (it.second)._num_customers8024L_count_0;
        tbl_Aggregate_TD_3246_output.setInt64(r, 1, _num_customers8024L);
        tbl_Aggregate_TD_3246_output.setInt32(r, 2, (it.second)._segment_base8025);
        ++r;
    }
    tbl_Aggregate_TD_3246_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3246_output #Row: " << tbl_Aggregate_TD_3246_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2405(Table &tbl_Aggregate_TD_3246_output, Table &tbl_Sort_TD_2405_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(segment#8035 ASC NULLS FIRST, num_customers#8024L ASC NULLS FIRST)
    // Input: ListBuffer(segment#8035, num_customers#8024L, segment_base#8025)
    // Output: ListBuffer(segment#8035, num_customers#8024L, segment_base#8025)
    struct SW_Sort_TD_2405Row {
        int32_t _segment8035;
        int64_t _num_customers8024L;
        int32_t _segment_base8025;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2405Row& a, const SW_Sort_TD_2405Row& b) const { return 
 (a._segment8035 < b._segment8035) || 
 ((a._segment8035 == b._segment8035) && (a._num_customers8024L < b._num_customers8024L)); 
}
    }SW_Sort_TD_2405_order; 

    int nrow1 = tbl_Aggregate_TD_3246_output.getNumRow();
    std::vector<SW_Sort_TD_2405Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _segment8035 = tbl_Aggregate_TD_3246_output.getInt32(i, 0);
        int64_t _num_customers8024L = tbl_Aggregate_TD_3246_output.getInt64(i, 1);
        int32_t _segment_base8025 = tbl_Aggregate_TD_3246_output.getInt32(i, 2);
        SW_Sort_TD_2405Row t = {_segment8035,_num_customers8024L,_segment_base8025};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2405_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2405_output.setInt32(r, 0, it._segment8035);
        tbl_Sort_TD_2405_output.setInt64(r, 1, it._num_customers8024L);
        tbl_Sort_TD_2405_output.setInt32(r, 2, it._segment_base8025);
        ++r;
    }
    tbl_Sort_TD_2405_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2405_output #Row: " << tbl_Sort_TD_2405_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1962(Table &tbl_Sort_TD_2405_output, Table &tbl_LocalLimit_TD_1962_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(segment#8035, num_customers#8024L, segment_base#8025)
    // Output: ListBuffer(segment#8035, num_customers#8024L, segment_base#8025)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1962_output.setInt32(r, 0, tbl_Sort_TD_2405_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1962_output.setInt32(r, 1, tbl_Sort_TD_2405_output.getInt64(i, 1));
        tbl_LocalLimit_TD_1962_output.setInt32(r, 2, tbl_Sort_TD_2405_output.getInt32(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1962_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1962_output #Row: " << tbl_LocalLimit_TD_1962_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0740(Table &tbl_LocalLimit_TD_1962_output, Table &tbl_GlobalLimit_TD_0740_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(segment#8035, num_customers#8024L, segment_base#8025)
    // Output: ListBuffer(segment#8035, num_customers#8024L, segment_base#8025)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0740_output.setInt32(r, 0, tbl_LocalLimit_TD_1962_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0740_output.setInt32(r, 1, tbl_LocalLimit_TD_1962_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0740_output.setInt32(r, 2, tbl_LocalLimit_TD_1962_output.getInt32(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0740_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0740_output #Row: " << tbl_GlobalLimit_TD_0740_output.getNumRow() << std::endl;
}

