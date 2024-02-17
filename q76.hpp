#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8788(Table &tbl_SerializeFromObject_TD_9127_input, Table &tbl_Filter_TD_8788_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#6780))
    // Input: ListBuffer(i_item_sk#6780, i_category#6792)
    // Output: ListBuffer(i_item_sk#6780, i_category#6792)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9127_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk6780 = tbl_SerializeFromObject_TD_9127_input.getInt32(i, 0);
        if (_i_item_sk6780!= 0) {
            int32_t _i_item_sk6780_t = tbl_SerializeFromObject_TD_9127_input.getInt32(i, 0);
            tbl_Filter_TD_8788_output.setInt32(r, 0, _i_item_sk6780_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category6792_t = tbl_SerializeFromObject_TD_9127_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8788_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6792_t);
            r++;
        }
    }
    tbl_Filter_TD_8788_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8788_output #Row: " << tbl_Filter_TD_8788_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8523(Table &tbl_SerializeFromObject_TD_9973_input, Table &tbl_Filter_TD_8523_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnull(cs_ship_addr_sk#1114) AND (isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9973_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ship_addr_sk1114 = tbl_SerializeFromObject_TD_9973_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_9973_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9973_input.getInt32(i, 0);
        if (_cs_ship_addr_sk1114 && ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9973_input.getInt32(i, 0);
            tbl_Filter_TD_8523_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ship_addr_sk1114_t = tbl_SerializeFromObject_TD_9973_input.getInt32(i, 1);
            tbl_Filter_TD_8523_output.setInt32(r, 1, _cs_ship_addr_sk1114_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_9973_input.getInt32(i, 2);
            tbl_Filter_TD_8523_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_9973_input.getInt32(i, 3);
            tbl_Filter_TD_8523_output.setInt32(r, 3, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_8523_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8523_output #Row: " << tbl_Filter_TD_8523_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8221(Table &tbl_SerializeFromObject_TD_9676_input, Table &tbl_Filter_TD_8221_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#6730))
    // Input: ListBuffer(i_item_sk#6730, i_category#6742)
    // Output: ListBuffer(i_item_sk#6730, i_category#6742)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9676_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk6730 = tbl_SerializeFromObject_TD_9676_input.getInt32(i, 0);
        if (_i_item_sk6730!= 0) {
            int32_t _i_item_sk6730_t = tbl_SerializeFromObject_TD_9676_input.getInt32(i, 0);
            tbl_Filter_TD_8221_output.setInt32(r, 0, _i_item_sk6730_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category6742_t = tbl_SerializeFromObject_TD_9676_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8221_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category6742_t);
            r++;
        }
    }
    tbl_Filter_TD_8221_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8221_output #Row: " << tbl_Filter_TD_8221_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8760(Table &tbl_SerializeFromObject_TD_9438_input, Table &tbl_Filter_TD_8760_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnull(ws_ship_customer_sk#737) AND (isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ship_customer_sk#737, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ship_customer_sk#737, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9438_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_customer_sk737 = tbl_SerializeFromObject_TD_9438_input.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_9438_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_9438_input.getInt32(i, 0);
        if (_ws_ship_customer_sk737 && ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_9438_input.getInt32(i, 0);
            tbl_Filter_TD_8760_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_9438_input.getInt32(i, 1);
            tbl_Filter_TD_8760_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_ship_customer_sk737_t = tbl_SerializeFromObject_TD_9438_input.getInt32(i, 2);
            tbl_Filter_TD_8760_output.setInt32(r, 2, _ws_ship_customer_sk737_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_9438_input.getInt32(i, 3);
            tbl_Filter_TD_8760_output.setInt32(r, 3, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_8760_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8760_output #Row: " << tbl_Filter_TD_8760_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8801(Table &tbl_SerializeFromObject_TD_9415_input, Table &tbl_Filter_TD_8801_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9415_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_9415_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_9415_input.getInt32(i, 0);
            tbl_Filter_TD_8801_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_9415_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8801_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_8801_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8801_output #Row: " << tbl_Filter_TD_8801_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8486(Table &tbl_SerializeFromObject_TD_9196_input, Table &tbl_Filter_TD_8486_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnull(ss_store_sk#1213) AND (isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9196_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 0);
        if (_ss_store_sk1213 && ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 0);
            tbl_Filter_TD_8486_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 1);
            tbl_Filter_TD_8486_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 2);
            tbl_Filter_TD_8486_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 3);
            tbl_Filter_TD_8486_output.setInt32(r, 3, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_8486_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8486_output #Row: " << tbl_Filter_TD_8486_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7540(Table &tbl_SerializeFromObject_TD_8603_input, Table &tbl_Filter_TD_7540_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#6802))
    // Input: ListBuffer(d_date_sk#6802, d_year#6808, d_qoy#6812)
    // Output: ListBuffer(d_date_sk#6802, d_year#6808, d_qoy#6812)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8603_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk6802 = tbl_SerializeFromObject_TD_8603_input.getInt32(i, 0);
        if (_d_date_sk6802!= 0) {
            int32_t _d_date_sk6802_t = tbl_SerializeFromObject_TD_8603_input.getInt32(i, 0);
            tbl_Filter_TD_7540_output.setInt32(r, 0, _d_date_sk6802_t);
            int32_t _d_year6808_t = tbl_SerializeFromObject_TD_8603_input.getInt32(i, 1);
            tbl_Filter_TD_7540_output.setInt32(r, 1, _d_year6808_t);
            int32_t _d_qoy6812_t = tbl_SerializeFromObject_TD_8603_input.getInt32(i, 2);
            tbl_Filter_TD_7540_output.setInt32(r, 2, _d_qoy6812_t);
            r++;
        }
    }
    tbl_Filter_TD_7540_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7540_output #Row: " << tbl_Filter_TD_7540_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_767_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_767_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_767_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_767_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_767_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_addr_sk1114;
    int32_t _cs_item_sk1119;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_767_key_rightMajor {
    int32_t _i_item_sk6780;
    bool operator==(const SW_JOIN_INNER_TD_767_key_rightMajor& other) const {
        return ((_i_item_sk6780 == other._i_item_sk6780));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_767_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_767_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6780));
    }
};
}
struct SW_JOIN_INNER_TD_767_payload_rightMajor {
    int32_t _i_item_sk6780;
    std::string _i_category6792;
};
void SW_JOIN_INNER_TD_767(Table &tbl_Filter_TD_8523_output, Table &tbl_Filter_TD_8788_output, Table &tbl_JOIN_INNER_TD_767_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#6780))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(i_item_sk#6780, i_category#6792)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_ext_sales_price#1127, i_category#6792)
    int left_nrow = tbl_Filter_TD_8523_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8788_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_767_key_leftMajor, SW_JOIN_INNER_TD_767_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8523_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_8523_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_767_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8523_output.getInt32(i, 0);
            int32_t _cs_ship_addr_sk1114 = tbl_Filter_TD_8523_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_8523_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_8523_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_767_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_addr_sk1114, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8788_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6780_k = tbl_Filter_TD_8788_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_767_key_leftMajor{_i_item_sk6780_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_addr_sk1114 = (it->second)._cs_ship_addr_sk1114;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_item_sk6780 = tbl_Filter_TD_8788_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_category6792_n = tbl_Filter_TD_8788_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category6792 = std::string(_i_category6792_n.data());
                tbl_JOIN_INNER_TD_767_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_767_output.setInt32(r, 1, _cs_ship_addr_sk1114);
                tbl_JOIN_INNER_TD_767_output.setInt32(r, 2, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_767_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category6792_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_767_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_767_key_rightMajor, SW_JOIN_INNER_TD_767_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8788_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6780_k = tbl_Filter_TD_8788_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_767_key_rightMajor keyA{_i_item_sk6780_k};
            int32_t _i_item_sk6780 = tbl_Filter_TD_8788_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_category6792_n = tbl_Filter_TD_8788_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category6792 = std::string(_i_category6792_n.data());
            SW_JOIN_INNER_TD_767_payload_rightMajor payloadA{_i_item_sk6780, _i_category6792};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8523_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_8523_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_767_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6780 = (it->second)._i_item_sk6780;
                std::string _i_category6792 = (it->second)._i_category6792;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6792_n{};
                memcpy(_i_category6792_n.data(), (_i_category6792).data(), (_i_category6792).length());
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8523_output.getInt32(i, 0);
                int32_t _cs_ship_addr_sk1114 = tbl_Filter_TD_8523_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_8523_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_8523_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_767_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category6792_n);
                tbl_JOIN_INNER_TD_767_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_767_output.setInt32(r, 1, _cs_ship_addr_sk1114);
                tbl_JOIN_INNER_TD_767_output.setInt32(r, 2, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_767_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_767_output #Row: " << tbl_JOIN_INNER_TD_767_output.getNumRow() << std::endl;
}

void SW_Filter_TD_779(Table &tbl_SerializeFromObject_TD_8569_input, Table &tbl_Filter_TD_779_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#6752))
    // Input: ListBuffer(d_date_sk#6752, d_year#6758, d_qoy#6762)
    // Output: ListBuffer(d_date_sk#6752, d_year#6758, d_qoy#6762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8569_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk6752 = tbl_SerializeFromObject_TD_8569_input.getInt32(i, 0);
        if (_d_date_sk6752!= 0) {
            int32_t _d_date_sk6752_t = tbl_SerializeFromObject_TD_8569_input.getInt32(i, 0);
            tbl_Filter_TD_779_output.setInt32(r, 0, _d_date_sk6752_t);
            int32_t _d_year6758_t = tbl_SerializeFromObject_TD_8569_input.getInt32(i, 1);
            tbl_Filter_TD_779_output.setInt32(r, 1, _d_year6758_t);
            int32_t _d_qoy6762_t = tbl_SerializeFromObject_TD_8569_input.getInt32(i, 2);
            tbl_Filter_TD_779_output.setInt32(r, 2, _d_qoy6762_t);
            r++;
        }
    }
    tbl_Filter_TD_779_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_779_output #Row: " << tbl_Filter_TD_779_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7937_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_7937_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7937_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7937_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_7937_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_ship_customer_sk737;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_7937_key_rightMajor {
    int32_t _i_item_sk6730;
    bool operator==(const SW_JOIN_INNER_TD_7937_key_rightMajor& other) const {
        return ((_i_item_sk6730 == other._i_item_sk6730));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7937_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7937_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6730));
    }
};
}
struct SW_JOIN_INNER_TD_7937_payload_rightMajor {
    int32_t _i_item_sk6730;
    std::string _i_category6742;
};
void SW_JOIN_INNER_TD_7937(Table &tbl_Filter_TD_8760_output, Table &tbl_Filter_TD_8221_output, Table &tbl_JOIN_INNER_TD_7937_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#6730))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ship_customer_sk#737, ws_ext_sales_price#752)
    // Right Table: ListBuffer(i_item_sk#6730, i_category#6742)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_ship_customer_sk#737, ws_ext_sales_price#752, i_category#6742)
    int left_nrow = tbl_Filter_TD_8760_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8221_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7937_key_leftMajor, SW_JOIN_INNER_TD_7937_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8760_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_8760_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7937_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_8760_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_8760_output.getInt32(i, 1);
            int32_t _ws_ship_customer_sk737 = tbl_Filter_TD_8760_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_8760_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7937_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_ship_customer_sk737, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8221_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6730_k = tbl_Filter_TD_8221_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7937_key_leftMajor{_i_item_sk6730_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_ship_customer_sk737 = (it->second)._ws_ship_customer_sk737;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_item_sk6730 = tbl_Filter_TD_8221_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_category6742_n = tbl_Filter_TD_8221_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category6742 = std::string(_i_category6742_n.data());
                tbl_JOIN_INNER_TD_7937_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7937_output.setInt32(r, 1, _ws_ship_customer_sk737);
                tbl_JOIN_INNER_TD_7937_output.setInt32(r, 2, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7937_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category6742_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7937_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7937_key_rightMajor, SW_JOIN_INNER_TD_7937_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8221_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6730_k = tbl_Filter_TD_8221_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7937_key_rightMajor keyA{_i_item_sk6730_k};
            int32_t _i_item_sk6730 = tbl_Filter_TD_8221_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_category6742_n = tbl_Filter_TD_8221_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category6742 = std::string(_i_category6742_n.data());
            SW_JOIN_INNER_TD_7937_payload_rightMajor payloadA{_i_item_sk6730, _i_category6742};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8760_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_8760_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7937_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6730 = (it->second)._i_item_sk6730;
                std::string _i_category6742 = (it->second)._i_category6742;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6742_n{};
                memcpy(_i_category6742_n.data(), (_i_category6742).data(), (_i_category6742).length());
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_8760_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_8760_output.getInt32(i, 1);
                int32_t _ws_ship_customer_sk737 = tbl_Filter_TD_8760_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_8760_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7937_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category6742_n);
                tbl_JOIN_INNER_TD_7937_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7937_output.setInt32(r, 1, _ws_ship_customer_sk737);
                tbl_JOIN_INNER_TD_7937_output.setInt32(r, 2, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7937_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7937_output #Row: " << tbl_JOIN_INNER_TD_7937_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7875(Table &tbl_SerializeFromObject_TD_8993_input, Table &tbl_Filter_TD_7875_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#120))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8993_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8993_input.getInt32(i, 0);
        if (_d_date_sk120!= 0) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8993_input.getInt32(i, 0);
            tbl_Filter_TD_7875_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_8993_input.getInt32(i, 1);
            tbl_Filter_TD_7875_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_qoy130_t = tbl_SerializeFromObject_TD_8993_input.getInt32(i, 2);
            tbl_Filter_TD_7875_output.setInt32(r, 2, _d_qoy130_t);
            r++;
        }
    }
    tbl_Filter_TD_7875_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7875_output #Row: " << tbl_Filter_TD_7875_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7711_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_7711_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7711_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7711_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_7711_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7711_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_7711_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7711_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7711_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_7711_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_category240;
};
void SW_JOIN_INNER_TD_7711(Table &tbl_Filter_TD_8486_output, Table &tbl_Filter_TD_8801_output, Table &tbl_JOIN_INNER_TD_7711_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_category#240)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, i_category#240)
    int left_nrow = tbl_Filter_TD_8486_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8801_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7711_key_leftMajor, SW_JOIN_INNER_TD_7711_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8486_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_8486_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7711_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8486_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_8486_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_8486_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_8486_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7711_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8801_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8801_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7711_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_8801_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8801_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_7711_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7711_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7711_output.setInt32(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7711_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7711_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7711_key_rightMajor, SW_JOIN_INNER_TD_7711_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8801_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8801_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7711_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_8801_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8801_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_7711_payload_rightMajor payloadA{_i_item_sk228, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8486_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_8486_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7711_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8486_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_8486_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_8486_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_8486_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7711_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                tbl_JOIN_INNER_TD_7711_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7711_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7711_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7711_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7711_output #Row: " << tbl_JOIN_INNER_TD_7711_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6434_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_6434_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6434_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6434_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_6434_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_addr_sk1114;
    int32_t _cs_ext_sales_price1127;
    std::string _i_category6792;
};
struct SW_JOIN_INNER_TD_6434_key_rightMajor {
    int32_t _d_date_sk6802;
    bool operator==(const SW_JOIN_INNER_TD_6434_key_rightMajor& other) const {
        return ((_d_date_sk6802 == other._d_date_sk6802));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6434_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6434_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6802));
    }
};
}
struct SW_JOIN_INNER_TD_6434_payload_rightMajor {
    int32_t _d_date_sk6802;
    int32_t _d_year6808;
    int32_t _d_qoy6812;
};
void SW_JOIN_INNER_TD_6434(Table &tbl_JOIN_INNER_TD_767_output, Table &tbl_Filter_TD_7540_output, Table &tbl_JOIN_INNER_TD_6434_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#6802))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_ext_sales_price#1127, i_category#6792)
    // Right Table: ListBuffer(d_date_sk#6802, d_year#6808, d_qoy#6812)
    // Output Table: ListBuffer(cs_ship_addr_sk#1114, d_year#6808, d_qoy#6812, i_category#6792, cs_ext_sales_price#1127)
    int left_nrow = tbl_JOIN_INNER_TD_767_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7540_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6434_key_leftMajor, SW_JOIN_INNER_TD_6434_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_767_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_767_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6434_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_767_output.getInt32(i, 0);
            int32_t _cs_ship_addr_sk1114 = tbl_JOIN_INNER_TD_767_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_767_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_category6792_n = tbl_JOIN_INNER_TD_767_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category6792 = std::string(_i_category6792_n.data());
            SW_JOIN_INNER_TD_6434_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_addr_sk1114, _cs_ext_sales_price1127, _i_category6792};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7540_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6802_k = tbl_Filter_TD_7540_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6434_key_leftMajor{_d_date_sk6802_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_addr_sk1114 = (it->second)._cs_ship_addr_sk1114;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                std::string _i_category6792 = (it->second)._i_category6792;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6792_n{};
                memcpy(_i_category6792_n.data(), (_i_category6792).data(), (_i_category6792).length());
                int32_t _d_date_sk6802 = tbl_Filter_TD_7540_output.getInt32(i, 0);
                int32_t _d_year6808 = tbl_Filter_TD_7540_output.getInt32(i, 1);
                int32_t _d_qoy6812 = tbl_Filter_TD_7540_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6434_output.setInt32(r, 0, _cs_ship_addr_sk1114);
                tbl_JOIN_INNER_TD_6434_output.setInt32(r, 4, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_6434_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category6792_n);
                tbl_JOIN_INNER_TD_6434_output.setInt32(r, 1, _d_year6808);
                tbl_JOIN_INNER_TD_6434_output.setInt32(r, 2, _d_qoy6812);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6434_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6434_key_rightMajor, SW_JOIN_INNER_TD_6434_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7540_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6802_k = tbl_Filter_TD_7540_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6434_key_rightMajor keyA{_d_date_sk6802_k};
            int32_t _d_date_sk6802 = tbl_Filter_TD_7540_output.getInt32(i, 0);
            int32_t _d_year6808 = tbl_Filter_TD_7540_output.getInt32(i, 1);
            int32_t _d_qoy6812 = tbl_Filter_TD_7540_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6434_payload_rightMajor payloadA{_d_date_sk6802, _d_year6808, _d_qoy6812};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_767_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_767_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6434_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6802 = (it->second)._d_date_sk6802;
                int32_t _d_year6808 = (it->second)._d_year6808;
                int32_t _d_qoy6812 = (it->second)._d_qoy6812;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_767_output.getInt32(i, 0);
                int32_t _cs_ship_addr_sk1114 = tbl_JOIN_INNER_TD_767_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_767_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_category6792_n = tbl_JOIN_INNER_TD_767_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category6792 = std::string(_i_category6792_n.data());
                tbl_JOIN_INNER_TD_6434_output.setInt32(r, 1, _d_year6808);
                tbl_JOIN_INNER_TD_6434_output.setInt32(r, 2, _d_qoy6812);
                tbl_JOIN_INNER_TD_6434_output.setInt32(r, 0, _cs_ship_addr_sk1114);
                tbl_JOIN_INNER_TD_6434_output.setInt32(r, 4, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_6434_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category6792_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6434_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6434_output #Row: " << tbl_JOIN_INNER_TD_6434_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6627_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_6627_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6627_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6627_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_6627_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_ship_customer_sk737;
    int32_t _ws_ext_sales_price752;
    std::string _i_category6742;
};
struct SW_JOIN_INNER_TD_6627_key_rightMajor {
    int32_t _d_date_sk6752;
    bool operator==(const SW_JOIN_INNER_TD_6627_key_rightMajor& other) const {
        return ((_d_date_sk6752 == other._d_date_sk6752));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6627_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6627_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6752));
    }
};
}
struct SW_JOIN_INNER_TD_6627_payload_rightMajor {
    int32_t _d_date_sk6752;
    int32_t _d_year6758;
    int32_t _d_qoy6762;
};
void SW_JOIN_INNER_TD_6627(Table &tbl_JOIN_INNER_TD_7937_output, Table &tbl_Filter_TD_779_output, Table &tbl_JOIN_INNER_TD_6627_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#6752))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_ship_customer_sk#737, ws_ext_sales_price#752, i_category#6742)
    // Right Table: ListBuffer(d_date_sk#6752, d_year#6758, d_qoy#6762)
    // Output Table: ListBuffer(ws_ship_customer_sk#737, d_year#6758, d_qoy#6762, i_category#6742, ws_ext_sales_price#752)
    int left_nrow = tbl_JOIN_INNER_TD_7937_output.getNumRow();
    int right_nrow = tbl_Filter_TD_779_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6627_key_leftMajor, SW_JOIN_INNER_TD_6627_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7937_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_7937_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6627_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7937_output.getInt32(i, 0);
            int32_t _ws_ship_customer_sk737 = tbl_JOIN_INNER_TD_7937_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7937_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_category6742_n = tbl_JOIN_INNER_TD_7937_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category6742 = std::string(_i_category6742_n.data());
            SW_JOIN_INNER_TD_6627_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_ship_customer_sk737, _ws_ext_sales_price752, _i_category6742};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_779_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6752_k = tbl_Filter_TD_779_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6627_key_leftMajor{_d_date_sk6752_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_ship_customer_sk737 = (it->second)._ws_ship_customer_sk737;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                std::string _i_category6742 = (it->second)._i_category6742;
                std::array<char, TPCDS_READ_MAX + 1> _i_category6742_n{};
                memcpy(_i_category6742_n.data(), (_i_category6742).data(), (_i_category6742).length());
                int32_t _d_date_sk6752 = tbl_Filter_TD_779_output.getInt32(i, 0);
                int32_t _d_year6758 = tbl_Filter_TD_779_output.getInt32(i, 1);
                int32_t _d_qoy6762 = tbl_Filter_TD_779_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6627_output.setInt32(r, 0, _ws_ship_customer_sk737);
                tbl_JOIN_INNER_TD_6627_output.setInt32(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6627_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category6742_n);
                tbl_JOIN_INNER_TD_6627_output.setInt32(r, 1, _d_year6758);
                tbl_JOIN_INNER_TD_6627_output.setInt32(r, 2, _d_qoy6762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6627_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6627_key_rightMajor, SW_JOIN_INNER_TD_6627_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_779_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6752_k = tbl_Filter_TD_779_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6627_key_rightMajor keyA{_d_date_sk6752_k};
            int32_t _d_date_sk6752 = tbl_Filter_TD_779_output.getInt32(i, 0);
            int32_t _d_year6758 = tbl_Filter_TD_779_output.getInt32(i, 1);
            int32_t _d_qoy6762 = tbl_Filter_TD_779_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6627_payload_rightMajor payloadA{_d_date_sk6752, _d_year6758, _d_qoy6762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7937_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_7937_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6627_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6752 = (it->second)._d_date_sk6752;
                int32_t _d_year6758 = (it->second)._d_year6758;
                int32_t _d_qoy6762 = (it->second)._d_qoy6762;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7937_output.getInt32(i, 0);
                int32_t _ws_ship_customer_sk737 = tbl_JOIN_INNER_TD_7937_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7937_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_category6742_n = tbl_JOIN_INNER_TD_7937_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category6742 = std::string(_i_category6742_n.data());
                tbl_JOIN_INNER_TD_6627_output.setInt32(r, 1, _d_year6758);
                tbl_JOIN_INNER_TD_6627_output.setInt32(r, 2, _d_qoy6762);
                tbl_JOIN_INNER_TD_6627_output.setInt32(r, 0, _ws_ship_customer_sk737);
                tbl_JOIN_INNER_TD_6627_output.setInt32(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6627_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category6742_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6627_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6627_output #Row: " << tbl_JOIN_INNER_TD_6627_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6988_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_6988_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6988_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6988_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_6988_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_6988_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6988_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6988_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6988_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6988_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_qoy130;
};
void SW_JOIN_INNER_TD_6988(Table &tbl_JOIN_INNER_TD_7711_output, Table &tbl_Filter_TD_7875_output, Table &tbl_JOIN_INNER_TD_6988_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, i_category#240)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    // Output Table: ListBuffer(ss_store_sk#1213, d_year#126, d_qoy#130, i_category#240, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_7711_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7875_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6988_key_leftMajor, SW_JOIN_INNER_TD_6988_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7711_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_7711_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6988_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7711_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7711_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7711_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7711_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_6988_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_store_sk1213, _ss_ext_sales_price1221, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7875_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7875_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6988_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_7875_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_7875_output.getInt32(i, 1);
                int32_t _d_qoy130 = tbl_Filter_TD_7875_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6988_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6988_output.setInt32(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6988_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                tbl_JOIN_INNER_TD_6988_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_6988_output.setInt32(r, 2, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6988_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6988_key_rightMajor, SW_JOIN_INNER_TD_6988_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7875_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7875_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6988_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7875_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_7875_output.getInt32(i, 1);
            int32_t _d_qoy130 = tbl_Filter_TD_7875_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6988_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7711_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_7711_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6988_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7711_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7711_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7711_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7711_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_6988_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_6988_output.setInt32(r, 2, _d_qoy130);
                tbl_JOIN_INNER_TD_6988_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6988_output.setInt32(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6988_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6988_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6988_output #Row: " << tbl_JOIN_INNER_TD_6988_output.getNumRow() << std::endl;
}

void SW_Project_TD_5271(Table &tbl_JOIN_INNER_TD_6434_output, Table &tbl_Project_TD_5271_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(catalog AS channel#6725, cs_ship_addr_sk#1114 AS col_name#6726, cs_ext_sales_price#1127 AS ext_sales_price#6727)
    // Input: ListBuffer(cs_ship_addr_sk#1114, d_year#6808, d_qoy#6812, i_category#6792, cs_ext_sales_price#1127)
    // Output: ListBuffer(channel#6725, col_name#6726, d_year#6808, d_qoy#6812, i_category#6792, ext_sales_price#6727)
    int nrow1 = tbl_JOIN_INNER_TD_6434_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ship_addr_sk1114 = tbl_JOIN_INNER_TD_6434_output.getInt32(i, 0);
        int32_t _d_year6808 = tbl_JOIN_INNER_TD_6434_output.getInt32(i, 1);
        int32_t _d_qoy6812 = tbl_JOIN_INNER_TD_6434_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_category6792 = tbl_JOIN_INNER_TD_6434_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_6434_output.getInt32(i, 4);
        std::string _channel6725_str = "catalog";
        std::array<char, TPCDS_READ_MAX + 1> _channel6725{};
        memcpy(_channel6725.data(), _channel6725_str.data(), (_channel6725_str).length());
        tbl_Project_TD_5271_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel6725);
        int32_t _col_name6726 = _cs_ship_addr_sk1114;
        tbl_Project_TD_5271_output.setInt32(i, 1, _col_name6726);
        int32_t _ext_sales_price6727 = _cs_ext_sales_price1127;
        tbl_Project_TD_5271_output.setInt32(i, 5, _ext_sales_price6727);
        tbl_Project_TD_5271_output.setInt32(i, 2, _d_year6808);
        tbl_Project_TD_5271_output.setInt32(i, 3, _d_qoy6812);
        tbl_Project_TD_5271_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 4, _i_category6792);
    }
    tbl_Project_TD_5271_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5271_output #Row: " << tbl_Project_TD_5271_output.getNumRow() << std::endl;
}

void SW_Project_TD_5567(Table &tbl_JOIN_INNER_TD_6627_output, Table &tbl_Project_TD_5567_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(web AS channel#6722, ws_ship_customer_sk#737 AS col_name#6723, ws_ext_sales_price#752 AS ext_sales_price#6724)
    // Input: ListBuffer(ws_ship_customer_sk#737, d_year#6758, d_qoy#6762, i_category#6742, ws_ext_sales_price#752)
    // Output: ListBuffer(channel#6722, col_name#6723, d_year#6758, d_qoy#6762, i_category#6742, ext_sales_price#6724)
    int nrow1 = tbl_JOIN_INNER_TD_6627_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_customer_sk737 = tbl_JOIN_INNER_TD_6627_output.getInt32(i, 0);
        int32_t _d_year6758 = tbl_JOIN_INNER_TD_6627_output.getInt32(i, 1);
        int32_t _d_qoy6762 = tbl_JOIN_INNER_TD_6627_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_category6742 = tbl_JOIN_INNER_TD_6627_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6627_output.getInt32(i, 4);
        std::string _channel6722_str = "web";
        std::array<char, TPCDS_READ_MAX + 1> _channel6722{};
        memcpy(_channel6722.data(), _channel6722_str.data(), (_channel6722_str).length());
        tbl_Project_TD_5567_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel6722);
        int32_t _col_name6723 = _ws_ship_customer_sk737;
        tbl_Project_TD_5567_output.setInt32(i, 1, _col_name6723);
        int32_t _ext_sales_price6724 = _ws_ext_sales_price752;
        tbl_Project_TD_5567_output.setInt32(i, 5, _ext_sales_price6724);
        tbl_Project_TD_5567_output.setInt32(i, 2, _d_year6758);
        tbl_Project_TD_5567_output.setInt32(i, 3, _d_qoy6762);
        tbl_Project_TD_5567_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 4, _i_category6742);
    }
    tbl_Project_TD_5567_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5567_output #Row: " << tbl_Project_TD_5567_output.getNumRow() << std::endl;
}

void SW_Project_TD_5741(Table &tbl_JOIN_INNER_TD_6988_output, Table &tbl_Project_TD_5741_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(store AS channel#6719, ss_store_sk#1213 AS col_name#6720, ss_ext_sales_price#1221 AS ext_sales_price#6721)
    // Input: ListBuffer(ss_store_sk#1213, d_year#126, d_qoy#130, i_category#240, ss_ext_sales_price#1221)
    // Output: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, ext_sales_price#6721)
    int nrow1 = tbl_JOIN_INNER_TD_6988_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6988_output.getInt32(i, 0);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_6988_output.getInt32(i, 1);
        int32_t _d_qoy130 = tbl_JOIN_INNER_TD_6988_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_6988_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6988_output.getInt32(i, 4);
        std::string _channel6719_str = "store";
        std::array<char, TPCDS_READ_MAX + 1> _channel6719{};
        memcpy(_channel6719.data(), _channel6719_str.data(), (_channel6719_str).length());
        tbl_Project_TD_5741_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel6719);
        int32_t _col_name6720 = _ss_store_sk1213;
        tbl_Project_TD_5741_output.setInt32(i, 1, _col_name6720);
        int32_t _ext_sales_price6721 = _ss_ext_sales_price1221;
        tbl_Project_TD_5741_output.setInt32(i, 5, _ext_sales_price6721);
        tbl_Project_TD_5741_output.setInt32(i, 2, _d_year126);
        tbl_Project_TD_5741_output.setInt32(i, 3, _d_qoy130);
        tbl_Project_TD_5741_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 4, _i_category240);
    }
    tbl_Project_TD_5741_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5741_output #Row: " << tbl_Project_TD_5741_output.getNumRow() << std::endl;
}

void SW_Union_TD_4792(Table &tbl_Project_TD_5741_output, Table &tbl_Project_TD_5567_output, Table &tbl_Project_TD_5271_output, Table &tbl_Union_TD_4792_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, ext_sales_price#6721)
    int r = 0;
    int row0 = tbl_Project_TD_5741_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6719_n = tbl_Union_TD_4792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6719_n);
        tbl_Union_TD_4792_output.setInt32(r, 1, tbl_Project_TD_5741_output.getInt32(i, 1));
        tbl_Union_TD_4792_output.setInt32(r, 2, tbl_Project_TD_5741_output.getInt32(i, 2));
        tbl_Union_TD_4792_output.setInt32(r, 3, tbl_Project_TD_5741_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Union_TD_4792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_4792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
        tbl_Union_TD_4792_output.setInt32(r, 5, tbl_Project_TD_5741_output.getInt32(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_5567_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6722_n = tbl_Union_TD_4792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6722_n);
        tbl_Union_TD_4792_output.setInt32(r, 1, tbl_Project_TD_5567_output.getInt32(i, 1));
        tbl_Union_TD_4792_output.setInt32(r, 2, tbl_Project_TD_5567_output.getInt32(i, 2));
        tbl_Union_TD_4792_output.setInt32(r, 3, tbl_Project_TD_5567_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category6742_n = tbl_Union_TD_4792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_4792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category6742_n);
        tbl_Union_TD_4792_output.setInt32(r, 5, tbl_Project_TD_5567_output.getInt32(i, 5));
        ++r;
    }
    int row2 = tbl_Project_TD_5271_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6725_n = tbl_Union_TD_4792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6725_n);
        tbl_Union_TD_4792_output.setInt32(r, 1, tbl_Project_TD_5271_output.getInt32(i, 1));
        tbl_Union_TD_4792_output.setInt32(r, 2, tbl_Project_TD_5271_output.getInt32(i, 2));
        tbl_Union_TD_4792_output.setInt32(r, 3, tbl_Project_TD_5271_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category6792_n = tbl_Union_TD_4792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_4792_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category6792_n);
        tbl_Union_TD_4792_output.setInt32(r, 5, tbl_Project_TD_5271_output.getInt32(i, 5));
        ++r;
    }
    tbl_Union_TD_4792_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4792_output #Row: " << tbl_Union_TD_4792_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3931_key {
    std::string _channel6719;
    int32_t _col_name6720;
    int32_t _d_year126;
    int32_t _d_qoy130;
    std::string _i_category240;
    bool operator==(const SW_Aggregate_TD_3931_key& other) const { return (_channel6719 == other._channel6719) && (_col_name6720 == other._col_name6720) && (_d_year126 == other._d_year126) && (_d_qoy130 == other._d_qoy130) && (_i_category240 == other._i_category240); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3931_key> {
    std::size_t operator() (const SW_Aggregate_TD_3931_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel6719)) + (hash<int32_t>()(k._col_name6720)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_qoy130)) + (hash<string>()(k._i_category240));
    }
};
}
struct SW_Aggregate_TD_3931_payload {
    int64_t _sales_cnt6728L_count_0;
    int32_t _sales_amt6729_sum_1;
};
void SW_Aggregate_TD_3931(Table &tbl_Union_TD_4792_output, Table &tbl_Aggregate_TD_3931_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, count(1) AS sales_cnt#6728L, MakeDecimal(sum(UnscaledValue(ext_sales_price#6721)),17,2) AS sales_amt#6729)
    // Input: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, ext_sales_price#6721)
    // Output: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, sales_cnt#6728L, sales_amt#6729)
    std::unordered_map<SW_Aggregate_TD_3931_key, SW_Aggregate_TD_3931_payload> ht1;
    int nrow1 = tbl_Union_TD_4792_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6719 = tbl_Union_TD_4792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _col_name6720 = tbl_Union_TD_4792_output.getInt32(i, 1);
        int32_t _d_year126 = tbl_Union_TD_4792_output.getInt32(i, 2);
        int32_t _d_qoy130 = tbl_Union_TD_4792_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Union_TD_4792_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _ext_sales_price6721 = tbl_Union_TD_4792_output.getInt32(i, 5);
        SW_Aggregate_TD_3931_key k{std::string(_channel6719.data()), _col_name6720, _d_year126, _d_qoy130, std::string(_i_category240.data())};
        int64_t _sales_cnt6728L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _sales_amt6729_sum_1 = _ext_sales_price6721;
        SW_Aggregate_TD_3931_payload p{_sales_cnt6728L_count_0, _sales_amt6729_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._sales_cnt6728L_count_0 + _sales_cnt6728L_count_0;
            p._sales_cnt6728L_count_0 = count_0;
            int32_t sum_1 = (it->second)._sales_amt6729_sum_1 + _sales_amt6729_sum_1;
            p._sales_amt6729_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6719{};
        memcpy(_channel6719.data(), ((it.first)._channel6719).data(), ((it.first)._channel6719).length());
        tbl_Aggregate_TD_3931_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6719);
        tbl_Aggregate_TD_3931_output.setInt32(r, 1, (it.first)._col_name6720);
        tbl_Aggregate_TD_3931_output.setInt32(r, 2, (it.first)._d_year126);
        tbl_Aggregate_TD_3931_output.setInt32(r, 3, (it.first)._d_qoy130);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_3931_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240);
        int64_t _sales_cnt6728L = (it.second)._sales_cnt6728L_count_0;
        tbl_Aggregate_TD_3931_output.setInt64(r, 5, _sales_cnt6728L);
        int32_t _sales_amt6729 = (it.second)._sales_amt6729_sum_1;
        tbl_Aggregate_TD_3931_output.setInt32(r, 6, _sales_amt6729);
        ++r;
    }
    tbl_Aggregate_TD_3931_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3931_output #Row: " << tbl_Aggregate_TD_3931_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2966(Table &tbl_Aggregate_TD_3931_output, Table &tbl_Sort_TD_2966_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#6719 ASC NULLS FIRST, col_name#6720 ASC NULLS FIRST, d_year#126 ASC NULLS FIRST, d_qoy#130 ASC NULLS FIRST, i_category#240 ASC NULLS FIRST)
    // Input: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, sales_cnt#6728L, sales_amt#6729)
    // Output: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, sales_cnt#6728L, sales_amt#6729)
    struct SW_Sort_TD_2966Row {
        std::string _channel6719;
        int32_t _col_name6720;
        int32_t _d_year126;
        int32_t _d_qoy130;
        std::string _i_category240;
        int64_t _sales_cnt6728L;
        int32_t _sales_amt6729;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2966Row& a, const SW_Sort_TD_2966Row& b) const { return 
 (a._channel6719 < b._channel6719) || 
 ((a._channel6719 == b._channel6719) && (a._col_name6720 < b._col_name6720)) || 
 ((a._channel6719 == b._channel6719) && (a._col_name6720 == b._col_name6720) && (a._d_year126 < b._d_year126)) || 
 ((a._channel6719 == b._channel6719) && (a._col_name6720 == b._col_name6720) && (a._d_year126 == b._d_year126) && (a._d_qoy130 < b._d_qoy130)) || 
 ((a._channel6719 == b._channel6719) && (a._col_name6720 == b._col_name6720) && (a._d_year126 == b._d_year126) && (a._d_qoy130 == b._d_qoy130) && (a._i_category240 < b._i_category240)); 
}
    }SW_Sort_TD_2966_order; 

    int nrow1 = tbl_Aggregate_TD_3931_output.getNumRow();
    std::vector<SW_Sort_TD_2966Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6719 = tbl_Aggregate_TD_3931_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _col_name6720 = tbl_Aggregate_TD_3931_output.getInt32(i, 1);
        int32_t _d_year126 = tbl_Aggregate_TD_3931_output.getInt32(i, 2);
        int32_t _d_qoy130 = tbl_Aggregate_TD_3931_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_3931_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        int64_t _sales_cnt6728L = tbl_Aggregate_TD_3931_output.getInt64(i, 5);
        int32_t _sales_amt6729 = tbl_Aggregate_TD_3931_output.getInt32(i, 6);
        SW_Sort_TD_2966Row t = {std::string(_channel6719.data()),_col_name6720,_d_year126,_d_qoy130,std::string(_i_category240.data()),_sales_cnt6728L,_sales_amt6729};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2966_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6719{};
        memcpy(_channel6719.data(), (it._channel6719).data(), (it._channel6719).length());
        tbl_Sort_TD_2966_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel6719);
        tbl_Sort_TD_2966_output.setInt32(r, 1, it._col_name6720);
        tbl_Sort_TD_2966_output.setInt32(r, 2, it._d_year126);
        tbl_Sort_TD_2966_output.setInt32(r, 3, it._d_qoy130);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2966_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _i_category240);
        tbl_Sort_TD_2966_output.setInt64(r, 5, it._sales_cnt6728L);
        tbl_Sort_TD_2966_output.setInt32(r, 6, it._sales_amt6729);
        ++r;
    }
    tbl_Sort_TD_2966_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2966_output #Row: " << tbl_Sort_TD_2966_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1798(Table &tbl_Sort_TD_2966_output, Table &tbl_LocalLimit_TD_1798_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, sales_cnt#6728L, sales_amt#6729)
    // Output: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, sales_cnt#6728L, sales_amt#6729)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6719_n = tbl_Sort_TD_2966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1798_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6719_n);
        tbl_LocalLimit_TD_1798_output.setInt32(r, 1, tbl_Sort_TD_2966_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1798_output.setInt32(r, 2, tbl_Sort_TD_2966_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1798_output.setInt32(r, 3, tbl_Sort_TD_2966_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_LocalLimit_TD_1798_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
        tbl_LocalLimit_TD_1798_output.setInt32(r, 5, tbl_Sort_TD_2966_output.getInt64(i, 5));
        tbl_LocalLimit_TD_1798_output.setInt32(r, 6, tbl_Sort_TD_2966_output.getInt32(i, 6));
        r++;
    }
    tbl_LocalLimit_TD_1798_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1798_output #Row: " << tbl_LocalLimit_TD_1798_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0129(Table &tbl_LocalLimit_TD_1798_output, Table &tbl_GlobalLimit_TD_0129_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, sales_cnt#6728L, sales_amt#6729)
    // Output: ListBuffer(channel#6719, col_name#6720, d_year#126, d_qoy#130, i_category#240, sales_cnt#6728L, sales_amt#6729)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6719_n = tbl_LocalLimit_TD_1798_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0129_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6719_n);
        tbl_GlobalLimit_TD_0129_output.setInt32(r, 1, tbl_LocalLimit_TD_1798_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0129_output.setInt32(r, 2, tbl_LocalLimit_TD_1798_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0129_output.setInt32(r, 3, tbl_LocalLimit_TD_1798_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1798_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_GlobalLimit_TD_0129_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
        tbl_GlobalLimit_TD_0129_output.setInt32(r, 5, tbl_LocalLimit_TD_1798_output.getInt64(i, 5));
        tbl_GlobalLimit_TD_0129_output.setInt32(r, 6, tbl_LocalLimit_TD_1798_output.getInt32(i, 6));
        r++;
    }
    tbl_GlobalLimit_TD_0129_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0129_output #Row: " << tbl_GlobalLimit_TD_0129_output.getNumRow() << std::endl;
}

