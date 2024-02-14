#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_15281(Table &tbl_SerializeFromObject_TD_16408_input, Table &tbl_Filter_TD_15281_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND (isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_customer_sk#733))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_16408_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_16408_input.getInt32(i, 2);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_16408_input.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_16408_input.getInt32(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_16408_input.getInt32(i, 0);
            tbl_Filter_TD_15281_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_16408_input.getInt32(i, 1);
            tbl_Filter_TD_15281_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_16408_input.getInt32(i, 2);
            tbl_Filter_TD_15281_output.setInt32(r, 2, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_15281_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_15281_output #Row: " << tbl_Filter_TD_15281_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1538(Table &tbl_SerializeFromObject_TD_16720_input, Table &tbl_Filter_TD_1538_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND (isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_bill_customer_sk#1107))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_16720_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_16720_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_16720_input.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_16720_input.getInt32(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_16720_input.getInt32(i, 0);
            tbl_Filter_TD_1538_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_16720_input.getInt32(i, 1);
            tbl_Filter_TD_1538_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_16720_input.getInt32(i, 2);
            tbl_Filter_TD_1538_output.setInt32(r, 2, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_1538_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1538_output #Row: " << tbl_Filter_TD_1538_output.getNumRow() << std::endl;
}

void SW_Project_TD_14242(Table &tbl_Filter_TD_15281_output, Table &tbl_Project_TD_14242_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_sold_date_sk#729 AS sold_date_sk#3549, ws_bill_customer_sk#733 AS customer_sk#3550, ws_item_sk#732 AS item_sk#3551)
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_item_sk#732)
    // Output: ListBuffer(sold_date_sk#3549, customer_sk#3550, item_sk#3551)
    int nrow1 = tbl_Filter_TD_15281_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_15281_output.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_15281_output.getInt32(i, 1);
        int32_t _ws_item_sk732 = tbl_Filter_TD_15281_output.getInt32(i, 2);
        int32_t _sold_date_sk3549 = _ws_sold_date_sk729;
        tbl_Project_TD_14242_output.setInt32(i, 0, _sold_date_sk3549);
        int32_t _customer_sk3550 = _ws_bill_customer_sk733;
        tbl_Project_TD_14242_output.setInt32(i, 1, _customer_sk3550);
        int32_t _item_sk3551 = _ws_item_sk732;
        tbl_Project_TD_14242_output.setInt32(i, 2, _item_sk3551);
    }
    tbl_Project_TD_14242_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_14242_output #Row: " << tbl_Project_TD_14242_output.getNumRow() << std::endl;
}

void SW_Project_TD_14511(Table &tbl_Filter_TD_1538_output, Table &tbl_Project_TD_14511_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_sold_date_sk#1104 AS sold_date_sk#3546, cs_bill_customer_sk#1107 AS customer_sk#3547, cs_item_sk#1119 AS item_sk#3548)
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Output: ListBuffer(sold_date_sk#3546, customer_sk#3547, item_sk#3548)
    int nrow1 = tbl_Filter_TD_1538_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_1538_output.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_1538_output.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_Filter_TD_1538_output.getInt32(i, 2);
        int32_t _sold_date_sk3546 = _cs_sold_date_sk1104;
        tbl_Project_TD_14511_output.setInt32(i, 0, _sold_date_sk3546);
        int32_t _customer_sk3547 = _cs_bill_customer_sk1107;
        tbl_Project_TD_14511_output.setInt32(i, 1, _customer_sk3547);
        int32_t _item_sk3548 = _cs_item_sk1119;
        tbl_Project_TD_14511_output.setInt32(i, 2, _item_sk3548);
    }
    tbl_Project_TD_14511_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_14511_output #Row: " << tbl_Project_TD_14511_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1373(Table &tbl_SerializeFromObject_TD_14161_input, Table &tbl_Filter_TD_1373_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(i_category#240) AND isnotnull(i_class#238)) AND ((i_category#240 = Women) AND (i_class#238 = maternity))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_category#240, i_class#238)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14161_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_14161_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_SerializeFromObject_TD_14161_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_14161_input.getInt32(i, 0);
        if ((((1) && (1)) && ((std::string(_i_category240.data()) == "Women") && (std::string(_i_class238.data()) == "maternity"))) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_14161_input.getInt32(i, 0);
            tbl_Filter_TD_1373_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_1373_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1373_output #Row: " << tbl_Filter_TD_1373_output.getNumRow() << std::endl;
}

void SW_Union_TD_13999(Table &tbl_Project_TD_14511_output, Table &tbl_Project_TD_14242_output, Table &tbl_Union_TD_13999_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sold_date_sk#3546, customer_sk#3547, item_sk#3548)
    int r = 0;
    int row0 = tbl_Project_TD_14511_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_13999_output.setInt32(r, 0, tbl_Project_TD_14511_output.getInt32(i, 0));
        tbl_Union_TD_13999_output.setInt32(r, 1, tbl_Project_TD_14511_output.getInt32(i, 1));
        tbl_Union_TD_13999_output.setInt32(r, 2, tbl_Project_TD_14511_output.getInt32(i, 2));
        ++r;
    }
    int row1 = tbl_Project_TD_14242_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_13999_output.setInt32(r, 0, tbl_Project_TD_14242_output.getInt32(i, 0));
        tbl_Union_TD_13999_output.setInt32(r, 1, tbl_Project_TD_14242_output.getInt32(i, 1));
        tbl_Union_TD_13999_output.setInt32(r, 2, tbl_Project_TD_14242_output.getInt32(i, 2));
        ++r;
    }
    tbl_Union_TD_13999_output.setNumRow(r);
    std::cout << "tbl_Union_TD_13999_output #Row: " << tbl_Union_TD_13999_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12870(Table &tbl_SerializeFromObject_TD_13994_input, Table &tbl_Filter_TD_12870_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 12) AND (d_year#126 = 1998))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13994_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_13994_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_13994_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_13994_input.getInt32(i, 0);
        if ((((1) && (1)) && ((_d_moy128 == 12) && (_d_year126 == 1998))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_13994_input.getInt32(i, 0);
            tbl_Filter_TD_12870_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_12870_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12870_output #Row: " << tbl_Filter_TD_12870_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12920_key_leftMajor {
    int32_t _item_sk3548;
    bool operator==(const SW_JOIN_INNER_TD_12920_key_leftMajor& other) const {
        return ((_item_sk3548 == other._item_sk3548));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12920_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12920_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk3548));
    }
};
}
struct SW_JOIN_INNER_TD_12920_payload_leftMajor {
    int32_t _sold_date_sk3546;
    int32_t _customer_sk3547;
    int32_t _item_sk3548;
};
struct SW_JOIN_INNER_TD_12920_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_12920_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12920_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12920_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_12920_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_12920(Table &tbl_Union_TD_13999_output, Table &tbl_Filter_TD_1373_output, Table &tbl_JOIN_INNER_TD_12920_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((item_sk#3548 = i_item_sk#228))
    // Left Table: ListBuffer(sold_date_sk#3546, customer_sk#3547, item_sk#3548)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(sold_date_sk#3546, customer_sk#3547)
    int left_nrow = tbl_Union_TD_13999_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1373_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12920_key_leftMajor, SW_JOIN_INNER_TD_12920_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_13999_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk3548_k = tbl_Union_TD_13999_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12920_key_leftMajor keyA{_item_sk3548_k};
            int32_t _sold_date_sk3546 = tbl_Union_TD_13999_output.getInt32(i, 0);
            int32_t _customer_sk3547 = tbl_Union_TD_13999_output.getInt32(i, 1);
            int32_t _item_sk3548 = tbl_Union_TD_13999_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12920_payload_leftMajor payloadA{_sold_date_sk3546, _customer_sk3547, _item_sk3548};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1373_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_1373_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12920_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sold_date_sk3546 = (it->second)._sold_date_sk3546;
                int32_t _customer_sk3547 = (it->second)._customer_sk3547;
                int32_t _item_sk3548 = (it->second)._item_sk3548;
                int32_t _i_item_sk228 = tbl_Filter_TD_1373_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_12920_output.setInt32(r, 0, _sold_date_sk3546);
                tbl_JOIN_INNER_TD_12920_output.setInt32(r, 1, _customer_sk3547);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12920_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12920_key_rightMajor, SW_JOIN_INNER_TD_12920_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1373_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_1373_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12920_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_1373_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12920_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_13999_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _item_sk3548_k = tbl_Union_TD_13999_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12920_key_rightMajor{_item_sk3548_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _sold_date_sk3546 = tbl_Union_TD_13999_output.getInt32(i, 0);
                int32_t _customer_sk3547 = tbl_Union_TD_13999_output.getInt32(i, 1);
                int32_t _item_sk3548 = tbl_Union_TD_13999_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_12920_output.setInt32(r, 0, _sold_date_sk3546);
                tbl_JOIN_INNER_TD_12920_output.setInt32(r, 1, _customer_sk3547);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12920_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12920_output #Row: " << tbl_JOIN_INNER_TD_12920_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11630(Table &tbl_SerializeFromObject_TD_12177_input, Table &tbl_Filter_TD_11630_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12177_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_12177_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_12177_input.getInt32(i, 1);
        if ((1) && (1)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_12177_input.getInt32(i, 0);
            tbl_Filter_TD_11630_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_12177_input.getInt32(i, 1);
            tbl_Filter_TD_11630_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_11630_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11630_output #Row: " << tbl_Filter_TD_11630_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11146_key_leftMajor {
    int32_t _sold_date_sk3546;
    bool operator==(const SW_JOIN_INNER_TD_11146_key_leftMajor& other) const {
        return ((_sold_date_sk3546 == other._sold_date_sk3546));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11146_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11146_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sold_date_sk3546));
    }
};
}
struct SW_JOIN_INNER_TD_11146_payload_leftMajor {
    int32_t _sold_date_sk3546;
    int32_t _customer_sk3547;
};
struct SW_JOIN_INNER_TD_11146_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_11146_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11146_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11146_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_11146_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_11146(Table &tbl_JOIN_INNER_TD_12920_output, Table &tbl_Filter_TD_12870_output, Table &tbl_JOIN_INNER_TD_11146_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sold_date_sk#3546 = d_date_sk#120))
    // Left Table: ListBuffer(sold_date_sk#3546, customer_sk#3547)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(customer_sk#3547)
    int left_nrow = tbl_JOIN_INNER_TD_12920_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12870_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11146_key_leftMajor, SW_JOIN_INNER_TD_11146_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12920_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sold_date_sk3546_k = tbl_JOIN_INNER_TD_12920_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11146_key_leftMajor keyA{_sold_date_sk3546_k};
            int32_t _sold_date_sk3546 = tbl_JOIN_INNER_TD_12920_output.getInt32(i, 0);
            int32_t _customer_sk3547 = tbl_JOIN_INNER_TD_12920_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11146_payload_leftMajor payloadA{_sold_date_sk3546, _customer_sk3547};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12870_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_12870_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11146_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sold_date_sk3546 = (it->second)._sold_date_sk3546;
                int32_t _customer_sk3547 = (it->second)._customer_sk3547;
                int32_t _d_date_sk120 = tbl_Filter_TD_12870_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11146_output.setInt32(r, 0, _customer_sk3547);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11146_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11146_key_rightMajor, SW_JOIN_INNER_TD_11146_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12870_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_12870_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11146_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_12870_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11146_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12920_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sold_date_sk3546_k = tbl_JOIN_INNER_TD_12920_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11146_key_rightMajor{_sold_date_sk3546_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _sold_date_sk3546 = tbl_JOIN_INNER_TD_12920_output.getInt32(i, 0);
                int32_t _customer_sk3547 = tbl_JOIN_INNER_TD_12920_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_11146_output.setInt32(r, 0, _customer_sk3547);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11146_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11146_output #Row: " << tbl_JOIN_INNER_TD_11146_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10337_key_leftMajor {
    int32_t _customer_sk3547;
    bool operator==(const SW_JOIN_INNER_TD_10337_key_leftMajor& other) const {
        return ((_customer_sk3547 == other._customer_sk3547));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10337_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10337_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._customer_sk3547));
    }
};
}
struct SW_JOIN_INNER_TD_10337_payload_leftMajor {
    int32_t _customer_sk3547;
};
struct SW_JOIN_INNER_TD_10337_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_10337_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10337_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10337_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_10337_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_10337(Table &tbl_JOIN_INNER_TD_11146_output, Table &tbl_Filter_TD_11630_output, Table &tbl_JOIN_INNER_TD_10337_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = customer_sk#3547))
    // Left Table: ListBuffer(customer_sk#3547)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int left_nrow = tbl_JOIN_INNER_TD_11146_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11630_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10337_key_leftMajor, SW_JOIN_INNER_TD_10337_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11146_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _customer_sk3547_k = tbl_JOIN_INNER_TD_11146_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10337_key_leftMajor keyA{_customer_sk3547_k};
            int32_t _customer_sk3547 = tbl_JOIN_INNER_TD_11146_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10337_payload_leftMajor payloadA{_customer_sk3547};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11630_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_11630_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10337_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _customer_sk3547 = (it->second)._customer_sk3547;
                int32_t _c_customer_sk0 = tbl_Filter_TD_11630_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_11630_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10337_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_10337_output.setInt32(r, 1, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10337_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10337_key_rightMajor, SW_JOIN_INNER_TD_10337_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11630_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_11630_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10337_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_11630_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_11630_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10337_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11146_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _customer_sk3547_k = tbl_JOIN_INNER_TD_11146_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10337_key_rightMajor{_customer_sk3547_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _customer_sk3547 = tbl_JOIN_INNER_TD_11146_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10337_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_10337_output.setInt32(r, 1, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10337_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10337_output #Row: " << tbl_JOIN_INNER_TD_10337_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9398(Table &tbl_SerializeFromObject_TD_10926_input, Table &tbl_Filter_TD_9398_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3621) AND isnotnull(d_moy#3623)) AND ((d_year#3621 = 1998) AND (d_moy#3623 = 12))))
    // Input: ListBuffer(d_month_seq#3618, d_year#3621, d_moy#3623)
    // Output: ListBuffer(d_month_seq#3618)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10926_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3621 = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 1);
        int32_t _d_moy3623 = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 2);
        if (((1) && (1)) && ((_d_year3621 == 1998) && (_d_moy3623 == 12))) {
            int32_t _d_month_seq3618_t = tbl_SerializeFromObject_TD_10926_input.getInt32(i, 0);
            tbl_Filter_TD_9398_output.setInt32(r, 0, _d_month_seq3618_t);
            r++;
        }
    }
    tbl_Filter_TD_9398_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9398_output #Row: " << tbl_Filter_TD_9398_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9595(Table &tbl_SerializeFromObject_TD_10612_input, Table &tbl_Filter_TD_9595_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3593) AND isnotnull(d_moy#3595)) AND ((d_year#3593 = 1998) AND (d_moy#3595 = 12))))
    // Input: ListBuffer(d_month_seq#3590, d_year#3593, d_moy#3595)
    // Output: ListBuffer(d_month_seq#3590)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10612_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3593 = tbl_SerializeFromObject_TD_10612_input.getInt32(i, 1);
        int32_t _d_moy3595 = tbl_SerializeFromObject_TD_10612_input.getInt32(i, 2);
        if (((1) && (1)) && ((_d_year3593 == 1998) && (_d_moy3595 == 12))) {
            int32_t _d_month_seq3590_t = tbl_SerializeFromObject_TD_10612_input.getInt32(i, 0);
            tbl_Filter_TD_9595_output.setInt32(r, 0, _d_month_seq3590_t);
            r++;
        }
    }
    tbl_Filter_TD_9595_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9595_output #Row: " << tbl_Filter_TD_9595_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9339(Table &tbl_SerializeFromObject_TD_10676_input, Table &tbl_Filter_TD_9339_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10676_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_10676_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10676_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10676_input.getInt32(i, 0);
            tbl_Filter_TD_9339_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_10676_input.getInt32(i, 1);
            tbl_Filter_TD_9339_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_10676_input.getInt32(i, 2);
            tbl_Filter_TD_9339_output.setInt32(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_9339_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9339_output #Row: " << tbl_Filter_TD_9339_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_9899_key {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_Aggregate_TD_9899_key& other) const { return (_c_customer_sk0 == other._c_customer_sk0) && (_c_current_addr_sk4 == other._c_current_addr_sk4); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_9899_key> {
    std::size_t operator() (const SW_Aggregate_TD_9899_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0)) + (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_Aggregate_TD_9899_payload {
};
void SW_Aggregate_TD_9899(Table &tbl_JOIN_INNER_TD_10337_output, Table &tbl_Aggregate_TD_9899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    std::unordered_map<SW_Aggregate_TD_9899_key, SW_Aggregate_TD_9899_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10337_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_10337_output.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_10337_output.getInt32(i, 1);
        SW_Aggregate_TD_9899_key k{_c_customer_sk0, _c_current_addr_sk4};
        SW_Aggregate_TD_9899_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_9899_output.setInt32(r, 0, (it.first)._c_customer_sk0);
        tbl_Aggregate_TD_9899_output.setInt32(r, 1, (it.first)._c_current_addr_sk4);
        ++r;
    }
    tbl_Aggregate_TD_9899_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9899_output #Row: " << tbl_Aggregate_TD_9899_output.getNumRow() << std::endl;
}

void SW_Project_TD_8126(Table &tbl_Filter_TD_9398_output, Table &tbl_Project_TD_8126_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((d_month_seq#3618 + 3) AS (d_month_seq + 3)#3586)
    // Input: ListBuffer(d_month_seq#3618)
    // Output: ListBuffer((d_month_seq + 3)#3586)
    int nrow1 = tbl_Filter_TD_9398_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3618 = tbl_Filter_TD_9398_output.getInt32(i, 0);
        int32_t _d_month_seq33586 = (_d_month_seq3618 + 3);
        tbl_Project_TD_8126_output.setInt32(i, 0, _d_month_seq33586);
    }
    tbl_Project_TD_8126_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8126_output #Row: " << tbl_Project_TD_8126_output.getNumRow() << std::endl;
}

void SW_Project_TD_8253(Table &tbl_Filter_TD_9595_output, Table &tbl_Project_TD_8253_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((d_month_seq#3590 + 1) AS (d_month_seq + 1)#3585)
    // Input: ListBuffer(d_month_seq#3590)
    // Output: ListBuffer((d_month_seq + 1)#3585)
    int nrow1 = tbl_Filter_TD_9595_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3590 = tbl_Filter_TD_9595_output.getInt32(i, 0);
        int32_t _d_month_seq13585 = (_d_month_seq3590 + 1);
        tbl_Project_TD_8253_output.setInt32(i, 0, _d_month_seq13585);
    }
    tbl_Project_TD_8253_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8253_output #Row: " << tbl_Project_TD_8253_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8975(Table &tbl_SerializeFromObject_TD_9695_input, Table &tbl_Filter_TD_8975_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND (isnotnull(ca_county#61) AND isnotnull(ca_state#62))))
    // Input: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9695_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_9695_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_SerializeFromObject_TD_9695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_9695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((1) && ((1) && (1))) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_9695_input.getInt32(i, 0);
            tbl_Filter_TD_8975_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_t = tbl_SerializeFromObject_TD_9695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8975_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county61_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_9695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8975_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_8975_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8975_output #Row: " << tbl_Filter_TD_8975_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8990_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_8990_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8990_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8990_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_8990_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_8990_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_8990_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8990_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8990_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_8990_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_ext_sales_price1221;
};
void SW_JOIN_INNER_TD_8990(Table &tbl_Aggregate_TD_9899_output, Table &tbl_Filter_TD_9339_output, Table &tbl_JOIN_INNER_TD_8990_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_sales_price#1221)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, ss_sold_date_sk#1206, ss_ext_sales_price#1221)
    int left_nrow = tbl_Aggregate_TD_9899_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9339_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8990_key_leftMajor, SW_JOIN_INNER_TD_8990_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_9899_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Aggregate_TD_9899_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8990_key_leftMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Aggregate_TD_9899_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Aggregate_TD_9899_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8990_payload_leftMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9339_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_9339_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8990_key_leftMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9339_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_9339_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9339_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8990_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_8990_output.setInt32(r, 1, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_8990_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8990_output.setInt32(r, 3, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8990_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8990_key_rightMajor, SW_JOIN_INNER_TD_8990_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9339_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_9339_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8990_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9339_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_9339_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9339_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8990_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_9899_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Aggregate_TD_9899_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8990_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _c_customer_sk0 = tbl_Aggregate_TD_9899_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Aggregate_TD_9899_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8990_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8990_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8990_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_8990_output.setInt32(r, 1, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8990_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8990_output #Row: " << tbl_JOIN_INNER_TD_8990_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_7969_key;
struct SW_Aggregate_TD_7969_payload {
};
void SW_Aggregate_TD_7969(Table &tbl_Project_TD_8126_output, Table &tbl_Aggregate_TD_7969_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer((d_month_seq + 3)#3586)
    // Input: ListBuffer((d_month_seq + 3)#3586)
    // Output: ListBuffer((d_month_seq + 3)#3586)
    std::unordered_map<SW_Aggregate_TD_7969_key, SW_Aggregate_TD_7969_payload> ht1;
    int nrow1 = tbl_Project_TD_8126_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq33586 = tbl_Project_TD_8126_output.getInt32(i, 0);
        SW_Aggregate_TD_7969_key k = _d_month_seq33586;
        SW_Aggregate_TD_7969_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_7969_output.setInt32(r, 0, (it.first));
        ++r;
    }
    tbl_Aggregate_TD_7969_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7969_output #Row: " << tbl_Aggregate_TD_7969_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_7203_key;
struct SW_Aggregate_TD_7203_payload {
};
void SW_Aggregate_TD_7203(Table &tbl_Project_TD_8253_output, Table &tbl_Aggregate_TD_7203_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer((d_month_seq + 1)#3585)
    // Input: ListBuffer((d_month_seq + 1)#3585)
    // Output: ListBuffer((d_month_seq + 1)#3585)
    std::unordered_map<SW_Aggregate_TD_7203_key, SW_Aggregate_TD_7203_payload> ht1;
    int nrow1 = tbl_Project_TD_8253_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq13585 = tbl_Project_TD_8253_output.getInt32(i, 0);
        SW_Aggregate_TD_7203_key k = _d_month_seq13585;
        SW_Aggregate_TD_7203_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_7203_output.setInt32(r, 0, (it.first));
        ++r;
    }
    tbl_Aggregate_TD_7203_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7203_output #Row: " << tbl_Aggregate_TD_7203_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7921(Table &tbl_SerializeFromObject_TD_8234_input, Table &tbl_Filter_TD_7921_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_county#401) AND isnotnull(s_state#402)))
    // Input: ListBuffer(s_county#401, s_state#402)
    // Output: ListBuffer(s_county#401, s_state#402)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8234_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_county401 = tbl_SerializeFromObject_TD_8234_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_state402 = tbl_SerializeFromObject_TD_8234_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            std::array<char, TPCDS_READ_MAX + 1> _s_county401_t = tbl_SerializeFromObject_TD_8234_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_7921_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_county401_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_t = tbl_SerializeFromObject_TD_8234_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7921_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_state402_t);
            r++;
        }
    }
    tbl_Filter_TD_7921_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7921_output #Row: " << tbl_Filter_TD_7921_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7607_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_7607_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7607_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7607_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_7607_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7607_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_7607_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7607_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7607_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_7607_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_county61;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_7607(Table &tbl_JOIN_INNER_TD_8990_output, Table &tbl_Filter_TD_8975_output, Table &tbl_JOIN_INNER_TD_7607_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, ss_sold_date_sk#1206, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(ca_address_sk#54, ca_county#61, ca_state#62)
    // Output Table: ListBuffer(c_customer_sk#0, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ca_county#61, ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_8990_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8975_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7607_key_leftMajor, SW_JOIN_INNER_TD_7607_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8990_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7607_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 1);
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7607_payload_leftMajor payloadA{_c_customer_sk0, _c_current_addr_sk4, _ss_sold_date_sk1206, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8975_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8975_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7607_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ca_address_sk54 = tbl_Filter_TD_8975_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_8975_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_8975_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_7607_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_7607_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7607_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7607_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county61_n);
                tbl_JOIN_INNER_TD_7607_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7607_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7607_key_rightMajor, SW_JOIN_INNER_TD_7607_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8975_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_8975_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7607_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_8975_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_8975_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_8975_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_7607_payload_rightMajor payloadA{_ca_address_sk54, _ca_county61, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8990_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7607_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 1);
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8990_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7607_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county61_n);
                tbl_JOIN_INNER_TD_7607_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_state62_n);
                tbl_JOIN_INNER_TD_7607_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_7607_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7607_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7607_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7607_output #Row: " << tbl_JOIN_INNER_TD_7607_output.getNumRow() << std::endl;
}

void SW_Filter_TD_695(Table &tbl_SerializeFromObject_TD_7722_input, Table &tbl_Aggregate_TD_7203_output, Table &tbl_Aggregate_TD_7969_output, Table &tbl_Filter_TD_695_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3559) AND ((d_month_seq#3559 >= scalar-subquery#3553 []) AND (d_month_seq#3559 <= scalar-subquery#3554 []))) AND isnotnull(d_date_sk#3556)))
    // Input: ListBuffer(d_date_sk#3556, d_month_seq#3559)
    // Output: ListBuffer(d_date_sk#3556)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7722_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3559 = tbl_SerializeFromObject_TD_7722_input.getInt32(i, 1);
        int32_t _d_date_sk3556 = tbl_SerializeFromObject_TD_7722_input.getInt32(i, 0);
        if (((1) && ((_d_month_seq3559 >= tbl_Aggregate_TD_7203_output.getInt32(0, 0)) && (_d_month_seq3559 <= tbl_Aggregate_TD_7203_output.getInt32(0, 0)))) && (1)) {
            int32_t _d_date_sk3556_t = tbl_SerializeFromObject_TD_7722_input.getInt32(i, 0);
            tbl_Filter_TD_695_output.setInt32(r, 0, _d_date_sk3556_t);
            r++;
        }
    }
    tbl_Filter_TD_695_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_695_output #Row: " << tbl_Filter_TD_695_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6459_key_leftMajor {
    std::string _ca_county61;
    std::string _ca_state62;
    bool operator==(const SW_JOIN_INNER_TD_6459_key_leftMajor& other) const {
        return ((_ca_county61 == other._ca_county61) && (_ca_state62 == other._ca_state62));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6459_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6459_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county61)) + (hash<string>()(k._ca_state62));
    }
};
}
struct SW_JOIN_INNER_TD_6459_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_ext_sales_price1221;
    std::string _ca_county61;
    std::string _ca_state62;
};
struct SW_JOIN_INNER_TD_6459_key_rightMajor {
    std::string _s_county401;
    std::string _s_state402;
    bool operator==(const SW_JOIN_INNER_TD_6459_key_rightMajor& other) const {
        return ((_s_county401 == other._s_county401) && (_s_state402 == other._s_state402));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6459_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6459_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._s_county401)) + (hash<string>()(k._s_state402));
    }
};
}
struct SW_JOIN_INNER_TD_6459_payload_rightMajor {
    std::string _s_county401;
    std::string _s_state402;
};
void SW_JOIN_INNER_TD_6459(Table &tbl_JOIN_INNER_TD_7607_output, Table &tbl_Filter_TD_7921_output, Table &tbl_JOIN_INNER_TD_6459_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ca_county#61 = s_county#401) AND (ca_state#62 = s_state#402)))
    // Left Table: ListBuffer(c_customer_sk#0, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ca_county#61, ca_state#62)
    // Right Table: ListBuffer(s_county#401, s_state#402)
    // Output Table: ListBuffer(c_customer_sk#0, ss_sold_date_sk#1206, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_7607_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7921_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6459_key_leftMajor, SW_JOIN_INNER_TD_6459_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7607_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_JOIN_INNER_TD_7607_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_k_n = tbl_JOIN_INNER_TD_7607_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_state62_k = std::string(_ca_state62_k_n.data());
            SW_JOIN_INNER_TD_6459_key_leftMajor keyA{_ca_county61_k, _ca_state62_k};
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_7607_output.getInt32(i, 0);
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7607_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7607_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_7607_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_7607_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_6459_payload_leftMajor payloadA{_c_customer_sk0, _ss_sold_date_sk1206, _ss_ext_sales_price1221, _ca_county61, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7921_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_county401_k_n = tbl_Filter_TD_7921_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_county401_k = std::string(_s_county401_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_k_n = tbl_Filter_TD_7921_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_state402_k = std::string(_s_state402_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6459_key_leftMajor{_s_county401_k, _s_state402_k});
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
                std::array<char, TPCDS_READ_MAX + 1> _s_county401_n = tbl_Filter_TD_7921_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _s_county401 = std::string(_s_county401_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7921_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_state402 = std::string(_s_state402_n.data());
                tbl_JOIN_INNER_TD_6459_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_6459_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_6459_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6459_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6459_key_rightMajor, SW_JOIN_INNER_TD_6459_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7921_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_county401_k_n = tbl_Filter_TD_7921_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_county401_k = std::string(_s_county401_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_k_n = tbl_Filter_TD_7921_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_state402_k = std::string(_s_state402_k_n.data());
            SW_JOIN_INNER_TD_6459_key_rightMajor keyA{_s_county401_k, _s_state402_k};
            std::array<char, TPCDS_READ_MAX + 1> _s_county401_n = tbl_Filter_TD_7921_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_county401 = std::string(_s_county401_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_state402_n = tbl_Filter_TD_7921_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_state402 = std::string(_s_state402_n.data());
            SW_JOIN_INNER_TD_6459_payload_rightMajor payloadA{_s_county401, _s_state402};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7607_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_JOIN_INNER_TD_7607_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_k_n = tbl_JOIN_INNER_TD_7607_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_state62_k = std::string(_ca_state62_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6459_key_rightMajor{_ca_county61_k, _ca_state62_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _s_county401 = (it->second)._s_county401;
                std::array<char, TPCDS_READ_MAX + 1> _s_county401_n{};
                memcpy(_s_county401_n.data(), (_s_county401).data(), (_s_county401).length());
                std::string _s_state402 = (it->second)._s_state402;
                std::array<char, TPCDS_READ_MAX + 1> _s_state402_n{};
                memcpy(_s_state402_n.data(), (_s_state402).data(), (_s_state402).length());
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_7607_output.getInt32(i, 0);
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7607_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7607_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_7607_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_7607_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_6459_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_6459_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_6459_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6459_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6459_output #Row: " << tbl_JOIN_INNER_TD_6459_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5396_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_5396_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5396_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5396_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_5396_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_5396_key_rightMajor {
    int32_t _d_date_sk3556;
    bool operator==(const SW_JOIN_INNER_TD_5396_key_rightMajor& other) const {
        return ((_d_date_sk3556 == other._d_date_sk3556));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5396_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5396_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3556));
    }
};
}
struct SW_JOIN_INNER_TD_5396_payload_rightMajor {
    int32_t _d_date_sk3556;
};
void SW_JOIN_INNER_TD_5396(Table &tbl_JOIN_INNER_TD_6459_output, Table &tbl_Filter_TD_695_output, Table &tbl_JOIN_INNER_TD_5396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#3556))
    // Left Table: ListBuffer(c_customer_sk#0, ss_sold_date_sk#1206, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(d_date_sk#3556)
    // Output Table: ListBuffer(c_customer_sk#0, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_6459_output.getNumRow();
    int right_nrow = tbl_Filter_TD_695_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5396_key_leftMajor, SW_JOIN_INNER_TD_5396_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6459_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_6459_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5396_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_6459_output.getInt32(i, 0);
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_6459_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6459_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5396_payload_leftMajor payloadA{_c_customer_sk0, _ss_sold_date_sk1206, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_695_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3556_k = tbl_Filter_TD_695_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5396_key_leftMajor{_d_date_sk3556_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk3556 = tbl_Filter_TD_695_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5396_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_5396_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5396_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5396_key_rightMajor, SW_JOIN_INNER_TD_5396_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_695_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3556_k = tbl_Filter_TD_695_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5396_key_rightMajor keyA{_d_date_sk3556_k};
            int32_t _d_date_sk3556 = tbl_Filter_TD_695_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5396_payload_rightMajor payloadA{_d_date_sk3556};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6459_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_6459_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5396_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3556 = (it->second)._d_date_sk3556;
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_6459_output.getInt32(i, 0);
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_6459_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6459_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5396_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_INNER_TD_5396_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5396_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5396_output #Row: " << tbl_JOIN_INNER_TD_5396_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_4705_key;
struct SW_Aggregate_TD_4705_payload {
    int32_t _segment3555_sum_0;
};
void SW_Aggregate_TD_4705(Table &tbl_JOIN_INNER_TD_5396_output, Table &tbl_Aggregate_TD_4705_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_sk#0, cast(CheckOverflow((promote_precision(MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2)) / 50.00), DecimalType(21,6), true) as int) AS segment#3555)
    // Input: ListBuffer(c_customer_sk#0, ss_ext_sales_price#1221)
    // Output: ListBuffer(segment#3555)
    std::unordered_map<SW_Aggregate_TD_4705_key, SW_Aggregate_TD_4705_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5396_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_5396_output.getInt32(i, 0);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5396_output.getInt32(i, 1);
        SW_Aggregate_TD_4705_key k = _c_customer_sk0;
        int32_t _segment3555_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_4705_payload p{_segment3555_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._segment3555_sum_0 + _segment3555_sum_0;
            p._segment3555_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_sk0 not required in the output table
        int32_t _segment3555 = ((it.second)._segment3555_sum_0 / 50.00);
        tbl_Aggregate_TD_4705_output.setInt32(r, 0, _segment3555);
        ++r;
    }
    tbl_Aggregate_TD_4705_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4705_output #Row: " << tbl_Aggregate_TD_4705_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_3559_key;
struct SW_Aggregate_TD_3559_payload {
    int64_t _num_customers3544L_count_0;
    int32_t _segment_base3545;
};
void SW_Aggregate_TD_3559(Table &tbl_Aggregate_TD_4705_output, Table &tbl_Aggregate_TD_3559_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(segment#3555, count(1) AS num_customers#3544L, (segment#3555 * 50) AS segment_base#3545)
    // Input: ListBuffer(segment#3555)
    // Output: ListBuffer(segment#3555, num_customers#3544L, segment_base#3545)
    std::unordered_map<SW_Aggregate_TD_3559_key, SW_Aggregate_TD_3559_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_4705_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _segment3555 = tbl_Aggregate_TD_4705_output.getInt32(i, 0);
        SW_Aggregate_TD_3559_key k = _segment3555;
        int64_t _num_customers3544L_count_0 = 1 != 0 ? 1 : 0;
        int32_t _segment_base3545 = (_segment3555 * 50);
        SW_Aggregate_TD_3559_payload p{_num_customers3544L_count_0, _segment_base3545};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._num_customers3544L_count_0 + _num_customers3544L_count_0;
            p._num_customers3544L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_3559_output.setInt32(r, 0, (it.first));
        int64_t _num_customers3544L = (it.second)._num_customers3544L_count_0;
        tbl_Aggregate_TD_3559_output.setInt64(r, 1, _num_customers3544L);
        tbl_Aggregate_TD_3559_output.setInt32(r, 2, (it.second)._segment_base3545);
        ++r;
    }
    tbl_Aggregate_TD_3559_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3559_output #Row: " << tbl_Aggregate_TD_3559_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2177(Table &tbl_Aggregate_TD_3559_output, Table &tbl_Sort_TD_2177_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(segment#3555 ASC NULLS FIRST, num_customers#3544L ASC NULLS FIRST)
    // Input: ListBuffer(segment#3555, num_customers#3544L, segment_base#3545)
    // Output: ListBuffer(segment#3555, num_customers#3544L, segment_base#3545)
    struct SW_Sort_TD_2177Row {
        int32_t _segment3555;
        int64_t _num_customers3544L;
        int32_t _segment_base3545;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2177Row& a, const SW_Sort_TD_2177Row& b) const { return 
 (a._segment3555 < b._segment3555) || 
 ((a._segment3555 == b._segment3555) && (a._num_customers3544L < b._num_customers3544L)); 
}
    }SW_Sort_TD_2177_order; 

    int nrow1 = tbl_Aggregate_TD_3559_output.getNumRow();
    std::vector<SW_Sort_TD_2177Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _segment3555 = tbl_Aggregate_TD_3559_output.getInt32(i, 0);
        int64_t _num_customers3544L = tbl_Aggregate_TD_3559_output.getInt64(i, 1);
        int32_t _segment_base3545 = tbl_Aggregate_TD_3559_output.getInt32(i, 2);
        SW_Sort_TD_2177Row t = {_segment3555,_num_customers3544L,_segment_base3545};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2177_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2177_output.setInt32(r, 0, it._segment3555);
        tbl_Sort_TD_2177_output.setInt64(r, 1, it._num_customers3544L);
        tbl_Sort_TD_2177_output.setInt32(r, 2, it._segment_base3545);
        ++r;
    }
    tbl_Sort_TD_2177_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2177_output #Row: " << tbl_Sort_TD_2177_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_189(Table &tbl_Sort_TD_2177_output, Table &tbl_LocalLimit_TD_189_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(segment#3555, num_customers#3544L, segment_base#3545)
    // Output: ListBuffer(segment#3555, num_customers#3544L, segment_base#3545)
    std::cout << "tbl_LocalLimit_TD_189_output #Row: " << tbl_LocalLimit_TD_189_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0564(Table &tbl_LocalLimit_TD_189_output, Table &tbl_GlobalLimit_TD_0564_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(segment#3555, num_customers#3544L, segment_base#3545)
    // Output: ListBuffer(segment#3555, num_customers#3544L, segment_base#3545)
    std::cout << "tbl_GlobalLimit_TD_0564_output #Row: " << tbl_GlobalLimit_TD_0564_output.getNumRow() << std::endl;
}

