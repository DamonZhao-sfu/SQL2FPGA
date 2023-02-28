#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_8583896(Table &tbl_SerializeFromObject_TD_9919821_input, Table &tbl_Filter_TD_8583896_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3605))
    // Input: ListBuffer(i_item_sk#3605, i_category#3617)
    // Output: ListBuffer(i_item_sk#3605, i_category#3617)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9919821_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3605 = tbl_SerializeFromObject_TD_9919821_input.getInt32(i, 0);
        if (_i_item_sk3605!= 0) {
            int32_t _i_item_sk3605_t = tbl_SerializeFromObject_TD_9919821_input.getInt32(i, 0);
            tbl_Filter_TD_8583896_output.setInt32(r, 0, _i_item_sk3605_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category3617_t = tbl_SerializeFromObject_TD_9919821_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8583896_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category3617_t);
            r++;
        }
    }
    tbl_Filter_TD_8583896_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8583896_output #Row: " << tbl_Filter_TD_8583896_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8604280(Table &tbl_SerializeFromObject_TD_9352570_input, Table &tbl_Filter_TD_8604280_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnull(cs_ship_addr_sk#1114) AND (isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9352570_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ship_addr_sk1114 = tbl_SerializeFromObject_TD_9352570_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_9352570_input.getInt32(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9352570_input.getInt32(i, 0);
        if ((_cs_ship_addr_sk1114 == 0) && ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9352570_input.getInt32(i, 0);
            tbl_Filter_TD_8604280_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ship_addr_sk1114_t = tbl_SerializeFromObject_TD_9352570_input.getInt32(i, 1);
            tbl_Filter_TD_8604280_output.setInt32(r, 1, _cs_ship_addr_sk1114_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_9352570_input.getInt32(i, 2);
            tbl_Filter_TD_8604280_output.setInt32(r, 2, _cs_item_sk1119_t);
            int64_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_9352570_input.getInt64(i, 3);
            tbl_Filter_TD_8604280_output.setInt64(r, 3, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_8604280_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8604280_output #Row: " << tbl_Filter_TD_8604280_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8973868(Table &tbl_SerializeFromObject_TD_9930217_input, Table &tbl_Filter_TD_8973868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3555))
    // Input: ListBuffer(i_item_sk#3555, i_category#3567)
    // Output: ListBuffer(i_item_sk#3555, i_category#3567)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9930217_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3555 = tbl_SerializeFromObject_TD_9930217_input.getInt32(i, 0);
        if (_i_item_sk3555!= 0) {
            int32_t _i_item_sk3555_t = tbl_SerializeFromObject_TD_9930217_input.getInt32(i, 0);
            tbl_Filter_TD_8973868_output.setInt32(r, 0, _i_item_sk3555_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category3567_t = tbl_SerializeFromObject_TD_9930217_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8973868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category3567_t);
            r++;
        }
    }
    tbl_Filter_TD_8973868_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8973868_output #Row: " << tbl_Filter_TD_8973868_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8603644(Table &tbl_SerializeFromObject_TD_9251509_input, Table &tbl_Filter_TD_8603644_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnull(ws_ship_customer_sk#737) AND (isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ship_customer_sk#737, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ship_customer_sk#737, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9251509_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_customer_sk737 = tbl_SerializeFromObject_TD_9251509_input.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_9251509_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_9251509_input.getInt32(i, 0);
        if ((_ws_ship_customer_sk737 == 0) && ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_9251509_input.getInt32(i, 0);
            tbl_Filter_TD_8603644_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_9251509_input.getInt32(i, 1);
            tbl_Filter_TD_8603644_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_ship_customer_sk737_t = tbl_SerializeFromObject_TD_9251509_input.getInt32(i, 2);
            tbl_Filter_TD_8603644_output.setInt32(r, 2, _ws_ship_customer_sk737_t);
            int64_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_9251509_input.getInt64(i, 3);
            tbl_Filter_TD_8603644_output.setInt64(r, 3, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_8603644_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8603644_output #Row: " << tbl_Filter_TD_8603644_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8144920(Table &tbl_SerializeFromObject_TD_9306116_input, Table &tbl_Filter_TD_8144920_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9306116_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_9306116_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_9306116_input.getInt32(i, 0);
            tbl_Filter_TD_8144920_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_9306116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8144920_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_8144920_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8144920_output #Row: " << tbl_Filter_TD_8144920_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8749274(Table &tbl_SerializeFromObject_TD_9925650_input, Table &tbl_Filter_TD_8749274_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnull(ss_store_sk#1213) AND (isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9925650_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_9925650_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_9925650_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9925650_input.getInt32(i, 0);
        if ((_ss_store_sk1213 == 0) && ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9925650_input.getInt32(i, 0);
            tbl_Filter_TD_8749274_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_9925650_input.getInt32(i, 1);
            tbl_Filter_TD_8749274_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_9925650_input.getInt32(i, 2);
            tbl_Filter_TD_8749274_output.setInt32(r, 2, _ss_store_sk1213_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_9925650_input.getInt64(i, 3);
            tbl_Filter_TD_8749274_output.setInt64(r, 3, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_8749274_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8749274_output #Row: " << tbl_Filter_TD_8749274_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7497659(Table &tbl_SerializeFromObject_TD_8176172_input, Table &tbl_Filter_TD_7497659_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#3627))
    // Input: ListBuffer(d_date_sk#3627, d_year#3633, d_qoy#3637)
    // Output: ListBuffer(d_date_sk#3627, d_year#3633, d_qoy#3637)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8176172_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk3627 = tbl_SerializeFromObject_TD_8176172_input.getInt32(i, 0);
        if (_d_date_sk3627!= 0) {
            int32_t _d_date_sk3627_t = tbl_SerializeFromObject_TD_8176172_input.getInt32(i, 0);
            tbl_Filter_TD_7497659_output.setInt32(r, 0, _d_date_sk3627_t);
            int32_t _d_year3633_t = tbl_SerializeFromObject_TD_8176172_input.getInt32(i, 1);
            tbl_Filter_TD_7497659_output.setInt32(r, 1, _d_year3633_t);
            int32_t _d_qoy3637_t = tbl_SerializeFromObject_TD_8176172_input.getInt32(i, 2);
            tbl_Filter_TD_7497659_output.setInt32(r, 2, _d_qoy3637_t);
            r++;
        }
    }
    tbl_Filter_TD_7497659_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7497659_output #Row: " << tbl_Filter_TD_7497659_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_738313_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_738313_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_738313_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_738313_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_738313_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_addr_sk1114;
    int32_t _cs_item_sk1119;
    int64_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_738313_key_rightMajor {
    int32_t _i_item_sk3605;
    bool operator==(const SW_JOIN_INNER_TD_738313_key_rightMajor& other) const {
        return ((_i_item_sk3605 == other._i_item_sk3605));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_738313_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_738313_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3605));
    }
};
}
struct SW_JOIN_INNER_TD_738313_payload_rightMajor {
    int32_t _i_item_sk3605;
    std::string _i_category3617;
};
void SW_JOIN_INNER_TD_738313(Table &tbl_Filter_TD_8604280_output, Table &tbl_Filter_TD_8583896_output, Table &tbl_JOIN_INNER_TD_738313_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#3605))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(i_item_sk#3605, i_category#3617)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_ext_sales_price#1127, i_category#3617)
    int left_nrow = tbl_Filter_TD_8604280_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8583896_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_738313_key_leftMajor, SW_JOIN_INNER_TD_738313_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8604280_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_8604280_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_738313_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8604280_output.getInt32(i, 0);
            int32_t _cs_ship_addr_sk1114 = tbl_Filter_TD_8604280_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_8604280_output.getInt32(i, 2);
            int64_t _cs_ext_sales_price1127 = tbl_Filter_TD_8604280_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_738313_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_addr_sk1114, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8583896_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3605_k = tbl_Filter_TD_8583896_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_738313_key_leftMajor{_i_item_sk3605_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_addr_sk1114 = (it->second)._cs_ship_addr_sk1114;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int64_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_item_sk3605 = tbl_Filter_TD_8583896_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_category3617_n = tbl_Filter_TD_8583896_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category3617 = std::string(_i_category3617_n.data());
                tbl_JOIN_INNER_TD_738313_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_738313_output.setInt32(r, 1, _cs_ship_addr_sk1114);
                tbl_JOIN_INNER_TD_738313_output.setInt64(r, 2, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_738313_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category3617_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_738313_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_738313_key_rightMajor, SW_JOIN_INNER_TD_738313_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8583896_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3605_k = tbl_Filter_TD_8583896_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_738313_key_rightMajor keyA{_i_item_sk3605_k};
            int32_t _i_item_sk3605 = tbl_Filter_TD_8583896_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_category3617_n = tbl_Filter_TD_8583896_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category3617 = std::string(_i_category3617_n.data());
            SW_JOIN_INNER_TD_738313_payload_rightMajor payloadA{_i_item_sk3605, _i_category3617};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8604280_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_8604280_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_738313_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3605 = (it->second)._i_item_sk3605;
                std::string _i_category3617 = (it->second)._i_category3617;
                std::array<char, TPCDS_READ_MAX + 1> _i_category3617_n{};
                memcpy(_i_category3617_n.data(), (_i_category3617).data(), (_i_category3617).length());
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8604280_output.getInt32(i, 0);
                int32_t _cs_ship_addr_sk1114 = tbl_Filter_TD_8604280_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_8604280_output.getInt32(i, 2);
                int64_t _cs_ext_sales_price1127 = tbl_Filter_TD_8604280_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_738313_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category3617_n);
                tbl_JOIN_INNER_TD_738313_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_738313_output.setInt32(r, 1, _cs_ship_addr_sk1114);
                tbl_JOIN_INNER_TD_738313_output.setInt64(r, 2, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_738313_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_738313_output #Row: " << tbl_JOIN_INNER_TD_738313_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7296672(Table &tbl_SerializeFromObject_TD_8375806_input, Table &tbl_Filter_TD_7296672_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#3577))
    // Input: ListBuffer(d_date_sk#3577, d_year#3583, d_qoy#3587)
    // Output: ListBuffer(d_date_sk#3577, d_year#3583, d_qoy#3587)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8375806_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk3577 = tbl_SerializeFromObject_TD_8375806_input.getInt32(i, 0);
        if (_d_date_sk3577!= 0) {
            int32_t _d_date_sk3577_t = tbl_SerializeFromObject_TD_8375806_input.getInt32(i, 0);
            tbl_Filter_TD_7296672_output.setInt32(r, 0, _d_date_sk3577_t);
            int32_t _d_year3583_t = tbl_SerializeFromObject_TD_8375806_input.getInt32(i, 1);
            tbl_Filter_TD_7296672_output.setInt32(r, 1, _d_year3583_t);
            int32_t _d_qoy3587_t = tbl_SerializeFromObject_TD_8375806_input.getInt32(i, 2);
            tbl_Filter_TD_7296672_output.setInt32(r, 2, _d_qoy3587_t);
            r++;
        }
    }
    tbl_Filter_TD_7296672_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7296672_output #Row: " << tbl_Filter_TD_7296672_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7417399_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_7417399_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7417399_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7417399_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_7417399_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_ship_customer_sk737;
    int64_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_7417399_key_rightMajor {
    int32_t _i_item_sk3555;
    bool operator==(const SW_JOIN_INNER_TD_7417399_key_rightMajor& other) const {
        return ((_i_item_sk3555 == other._i_item_sk3555));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7417399_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7417399_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3555));
    }
};
}
struct SW_JOIN_INNER_TD_7417399_payload_rightMajor {
    int32_t _i_item_sk3555;
    std::string _i_category3567;
};
void SW_JOIN_INNER_TD_7417399(Table &tbl_Filter_TD_8603644_output, Table &tbl_Filter_TD_8973868_output, Table &tbl_JOIN_INNER_TD_7417399_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#3555))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ship_customer_sk#737, ws_ext_sales_price#752)
    // Right Table: ListBuffer(i_item_sk#3555, i_category#3567)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_ship_customer_sk#737, ws_ext_sales_price#752, i_category#3567)
    int left_nrow = tbl_Filter_TD_8603644_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8973868_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7417399_key_leftMajor, SW_JOIN_INNER_TD_7417399_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8603644_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_8603644_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7417399_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_8603644_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_8603644_output.getInt32(i, 1);
            int32_t _ws_ship_customer_sk737 = tbl_Filter_TD_8603644_output.getInt32(i, 2);
            int64_t _ws_ext_sales_price752 = tbl_Filter_TD_8603644_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_7417399_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_ship_customer_sk737, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8973868_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3555_k = tbl_Filter_TD_8973868_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7417399_key_leftMajor{_i_item_sk3555_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_ship_customer_sk737 = (it->second)._ws_ship_customer_sk737;
                int64_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_item_sk3555 = tbl_Filter_TD_8973868_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_category3567_n = tbl_Filter_TD_8973868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category3567 = std::string(_i_category3567_n.data());
                tbl_JOIN_INNER_TD_7417399_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7417399_output.setInt32(r, 1, _ws_ship_customer_sk737);
                tbl_JOIN_INNER_TD_7417399_output.setInt64(r, 2, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7417399_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category3567_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7417399_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7417399_key_rightMajor, SW_JOIN_INNER_TD_7417399_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8973868_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3555_k = tbl_Filter_TD_8973868_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7417399_key_rightMajor keyA{_i_item_sk3555_k};
            int32_t _i_item_sk3555 = tbl_Filter_TD_8973868_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_category3567_n = tbl_Filter_TD_8973868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category3567 = std::string(_i_category3567_n.data());
            SW_JOIN_INNER_TD_7417399_payload_rightMajor payloadA{_i_item_sk3555, _i_category3567};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8603644_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_8603644_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7417399_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3555 = (it->second)._i_item_sk3555;
                std::string _i_category3567 = (it->second)._i_category3567;
                std::array<char, TPCDS_READ_MAX + 1> _i_category3567_n{};
                memcpy(_i_category3567_n.data(), (_i_category3567).data(), (_i_category3567).length());
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_8603644_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_8603644_output.getInt32(i, 1);
                int32_t _ws_ship_customer_sk737 = tbl_Filter_TD_8603644_output.getInt32(i, 2);
                int64_t _ws_ext_sales_price752 = tbl_Filter_TD_8603644_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_7417399_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category3567_n);
                tbl_JOIN_INNER_TD_7417399_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7417399_output.setInt32(r, 1, _ws_ship_customer_sk737);
                tbl_JOIN_INNER_TD_7417399_output.setInt64(r, 2, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7417399_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7417399_output #Row: " << tbl_JOIN_INNER_TD_7417399_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7806626(Table &tbl_SerializeFromObject_TD_8731347_input, Table &tbl_Filter_TD_7806626_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#120))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8731347_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8731347_input.getInt32(i, 0);
        if (_d_date_sk120!= 0) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8731347_input.getInt32(i, 0);
            tbl_Filter_TD_7806626_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_8731347_input.getInt32(i, 1);
            tbl_Filter_TD_7806626_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_qoy130_t = tbl_SerializeFromObject_TD_8731347_input.getInt32(i, 2);
            tbl_Filter_TD_7806626_output.setInt32(r, 2, _d_qoy130_t);
            r++;
        }
    }
    tbl_Filter_TD_7806626_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7806626_output #Row: " << tbl_Filter_TD_7806626_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7957052_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_7957052_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7957052_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7957052_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_7957052_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int64_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7957052_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_7957052_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7957052_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7957052_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_7957052_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_category240;
};
void SW_JOIN_INNER_TD_7957052(Table &tbl_Filter_TD_8749274_output, Table &tbl_Filter_TD_8144920_output, Table &tbl_JOIN_INNER_TD_7957052_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_category#240)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, i_category#240)
    int left_nrow = tbl_Filter_TD_8749274_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8144920_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7957052_key_leftMajor, SW_JOIN_INNER_TD_7957052_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8749274_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_8749274_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7957052_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8749274_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_8749274_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_8749274_output.getInt32(i, 2);
            int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_8749274_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_7957052_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8144920_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8144920_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7957052_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_8144920_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8144920_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_7957052_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7957052_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7957052_output.setInt64(r, 2, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7957052_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7957052_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7957052_key_rightMajor, SW_JOIN_INNER_TD_7957052_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8144920_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_8144920_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7957052_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_8144920_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_8144920_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_7957052_payload_rightMajor payloadA{_i_item_sk228, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8749274_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_8749274_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7957052_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8749274_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_8749274_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_8749274_output.getInt32(i, 2);
                int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_8749274_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_7957052_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                tbl_JOIN_INNER_TD_7957052_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7957052_output.setInt32(r, 1, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_7957052_output.setInt64(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7957052_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7957052_output #Row: " << tbl_JOIN_INNER_TD_7957052_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6345353_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_6345353_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6345353_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6345353_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_6345353_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_addr_sk1114;
    int64_t _cs_ext_sales_price1127;
    std::string _i_category3617;
};
struct SW_JOIN_INNER_TD_6345353_key_rightMajor {
    int32_t _d_date_sk3627;
    bool operator==(const SW_JOIN_INNER_TD_6345353_key_rightMajor& other) const {
        return ((_d_date_sk3627 == other._d_date_sk3627));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6345353_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6345353_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3627));
    }
};
}
struct SW_JOIN_INNER_TD_6345353_payload_rightMajor {
    int32_t _d_date_sk3627;
    int32_t _d_year3633;
    int32_t _d_qoy3637;
};
void SW_JOIN_INNER_TD_6345353(Table &tbl_JOIN_INNER_TD_738313_output, Table &tbl_Filter_TD_7497659_output, Table &tbl_JOIN_INNER_TD_6345353_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3627))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_addr_sk#1114, cs_ext_sales_price#1127, i_category#3617)
    // Right Table: ListBuffer(d_date_sk#3627, d_year#3633, d_qoy#3637)
    // Output Table: ListBuffer(cs_ship_addr_sk#1114, d_year#3633, d_qoy#3637, i_category#3617, cs_ext_sales_price#1127)
    int left_nrow = tbl_JOIN_INNER_TD_738313_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7497659_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6345353_key_leftMajor, SW_JOIN_INNER_TD_6345353_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_738313_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_738313_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6345353_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_738313_output.getInt32(i, 0);
            int32_t _cs_ship_addr_sk1114 = tbl_JOIN_INNER_TD_738313_output.getInt32(i, 1);
            int64_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_738313_output.getInt64(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_category3617_n = tbl_JOIN_INNER_TD_738313_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category3617 = std::string(_i_category3617_n.data());
            SW_JOIN_INNER_TD_6345353_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_addr_sk1114, _cs_ext_sales_price1127, _i_category3617};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7497659_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3627_k = tbl_Filter_TD_7497659_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6345353_key_leftMajor{_d_date_sk3627_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_addr_sk1114 = (it->second)._cs_ship_addr_sk1114;
                int64_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                std::string _i_category3617 = (it->second)._i_category3617;
                std::array<char, TPCDS_READ_MAX + 1> _i_category3617_n{};
                memcpy(_i_category3617_n.data(), (_i_category3617).data(), (_i_category3617).length());
                int32_t _d_date_sk3627 = tbl_Filter_TD_7497659_output.getInt32(i, 0);
                int32_t _d_year3633 = tbl_Filter_TD_7497659_output.getInt32(i, 1);
                int32_t _d_qoy3637 = tbl_Filter_TD_7497659_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6345353_output.setInt32(r, 0, _cs_ship_addr_sk1114);
                tbl_JOIN_INNER_TD_6345353_output.setInt64(r, 4, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_6345353_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category3617_n);
                tbl_JOIN_INNER_TD_6345353_output.setInt32(r, 1, _d_year3633);
                tbl_JOIN_INNER_TD_6345353_output.setInt32(r, 2, _d_qoy3637);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6345353_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6345353_key_rightMajor, SW_JOIN_INNER_TD_6345353_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7497659_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3627_k = tbl_Filter_TD_7497659_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6345353_key_rightMajor keyA{_d_date_sk3627_k};
            int32_t _d_date_sk3627 = tbl_Filter_TD_7497659_output.getInt32(i, 0);
            int32_t _d_year3633 = tbl_Filter_TD_7497659_output.getInt32(i, 1);
            int32_t _d_qoy3637 = tbl_Filter_TD_7497659_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6345353_payload_rightMajor payloadA{_d_date_sk3627, _d_year3633, _d_qoy3637};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_738313_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_738313_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6345353_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3627 = (it->second)._d_date_sk3627;
                int32_t _d_year3633 = (it->second)._d_year3633;
                int32_t _d_qoy3637 = (it->second)._d_qoy3637;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_738313_output.getInt32(i, 0);
                int32_t _cs_ship_addr_sk1114 = tbl_JOIN_INNER_TD_738313_output.getInt32(i, 1);
                int64_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_738313_output.getInt64(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_category3617_n = tbl_JOIN_INNER_TD_738313_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category3617 = std::string(_i_category3617_n.data());
                tbl_JOIN_INNER_TD_6345353_output.setInt32(r, 1, _d_year3633);
                tbl_JOIN_INNER_TD_6345353_output.setInt32(r, 2, _d_qoy3637);
                tbl_JOIN_INNER_TD_6345353_output.setInt32(r, 0, _cs_ship_addr_sk1114);
                tbl_JOIN_INNER_TD_6345353_output.setInt64(r, 4, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_6345353_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category3617_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6345353_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6345353_output #Row: " << tbl_JOIN_INNER_TD_6345353_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6824948_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_6824948_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6824948_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6824948_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_6824948_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_ship_customer_sk737;
    int64_t _ws_ext_sales_price752;
    std::string _i_category3567;
};
struct SW_JOIN_INNER_TD_6824948_key_rightMajor {
    int32_t _d_date_sk3577;
    bool operator==(const SW_JOIN_INNER_TD_6824948_key_rightMajor& other) const {
        return ((_d_date_sk3577 == other._d_date_sk3577));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6824948_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6824948_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3577));
    }
};
}
struct SW_JOIN_INNER_TD_6824948_payload_rightMajor {
    int32_t _d_date_sk3577;
    int32_t _d_year3583;
    int32_t _d_qoy3587;
};
void SW_JOIN_INNER_TD_6824948(Table &tbl_JOIN_INNER_TD_7417399_output, Table &tbl_Filter_TD_7296672_output, Table &tbl_JOIN_INNER_TD_6824948_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3577))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_ship_customer_sk#737, ws_ext_sales_price#752, i_category#3567)
    // Right Table: ListBuffer(d_date_sk#3577, d_year#3583, d_qoy#3587)
    // Output Table: ListBuffer(ws_ship_customer_sk#737, d_year#3583, d_qoy#3587, i_category#3567, ws_ext_sales_price#752)
    int left_nrow = tbl_JOIN_INNER_TD_7417399_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7296672_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6824948_key_leftMajor, SW_JOIN_INNER_TD_6824948_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7417399_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_7417399_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6824948_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7417399_output.getInt32(i, 0);
            int32_t _ws_ship_customer_sk737 = tbl_JOIN_INNER_TD_7417399_output.getInt32(i, 1);
            int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7417399_output.getInt64(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_category3567_n = tbl_JOIN_INNER_TD_7417399_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category3567 = std::string(_i_category3567_n.data());
            SW_JOIN_INNER_TD_6824948_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_ship_customer_sk737, _ws_ext_sales_price752, _i_category3567};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7296672_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3577_k = tbl_Filter_TD_7296672_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6824948_key_leftMajor{_d_date_sk3577_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_ship_customer_sk737 = (it->second)._ws_ship_customer_sk737;
                int64_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                std::string _i_category3567 = (it->second)._i_category3567;
                std::array<char, TPCDS_READ_MAX + 1> _i_category3567_n{};
                memcpy(_i_category3567_n.data(), (_i_category3567).data(), (_i_category3567).length());
                int32_t _d_date_sk3577 = tbl_Filter_TD_7296672_output.getInt32(i, 0);
                int32_t _d_year3583 = tbl_Filter_TD_7296672_output.getInt32(i, 1);
                int32_t _d_qoy3587 = tbl_Filter_TD_7296672_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6824948_output.setInt32(r, 0, _ws_ship_customer_sk737);
                tbl_JOIN_INNER_TD_6824948_output.setInt64(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6824948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category3567_n);
                tbl_JOIN_INNER_TD_6824948_output.setInt32(r, 1, _d_year3583);
                tbl_JOIN_INNER_TD_6824948_output.setInt32(r, 2, _d_qoy3587);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6824948_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6824948_key_rightMajor, SW_JOIN_INNER_TD_6824948_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7296672_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3577_k = tbl_Filter_TD_7296672_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6824948_key_rightMajor keyA{_d_date_sk3577_k};
            int32_t _d_date_sk3577 = tbl_Filter_TD_7296672_output.getInt32(i, 0);
            int32_t _d_year3583 = tbl_Filter_TD_7296672_output.getInt32(i, 1);
            int32_t _d_qoy3587 = tbl_Filter_TD_7296672_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6824948_payload_rightMajor payloadA{_d_date_sk3577, _d_year3583, _d_qoy3587};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7417399_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_7417399_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6824948_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3577 = (it->second)._d_date_sk3577;
                int32_t _d_year3583 = (it->second)._d_year3583;
                int32_t _d_qoy3587 = (it->second)._d_qoy3587;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7417399_output.getInt32(i, 0);
                int32_t _ws_ship_customer_sk737 = tbl_JOIN_INNER_TD_7417399_output.getInt32(i, 1);
                int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7417399_output.getInt64(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_category3567_n = tbl_JOIN_INNER_TD_7417399_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category3567 = std::string(_i_category3567_n.data());
                tbl_JOIN_INNER_TD_6824948_output.setInt32(r, 1, _d_year3583);
                tbl_JOIN_INNER_TD_6824948_output.setInt32(r, 2, _d_qoy3587);
                tbl_JOIN_INNER_TD_6824948_output.setInt32(r, 0, _ws_ship_customer_sk737);
                tbl_JOIN_INNER_TD_6824948_output.setInt64(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6824948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category3567_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6824948_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6824948_output #Row: " << tbl_JOIN_INNER_TD_6824948_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6876420_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_6876420_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6876420_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6876420_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_6876420_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int64_t _ss_ext_sales_price1221;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_6876420_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6876420_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6876420_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6876420_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6876420_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_qoy130;
};
void SW_JOIN_INNER_TD_6876420(Table &tbl_JOIN_INNER_TD_7957052_output, Table &tbl_Filter_TD_7806626_output, Table &tbl_JOIN_INNER_TD_6876420_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, i_category#240)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    // Output Table: ListBuffer(ss_store_sk#1213, d_year#126, d_qoy#130, i_category#240, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_7957052_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7806626_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6876420_key_leftMajor, SW_JOIN_INNER_TD_6876420_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7957052_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_7957052_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6876420_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7957052_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7957052_output.getInt32(i, 1);
            int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7957052_output.getInt64(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7957052_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_6876420_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_store_sk1213, _ss_ext_sales_price1221, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7806626_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7806626_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6876420_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_7806626_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_7806626_output.getInt32(i, 1);
                int32_t _d_qoy130 = tbl_Filter_TD_7806626_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6876420_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6876420_output.setInt64(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6876420_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                tbl_JOIN_INNER_TD_6876420_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_6876420_output.setInt32(r, 2, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6876420_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6876420_key_rightMajor, SW_JOIN_INNER_TD_6876420_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7806626_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7806626_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6876420_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7806626_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_7806626_output.getInt32(i, 1);
            int32_t _d_qoy130 = tbl_Filter_TD_7806626_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6876420_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7957052_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_7957052_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6876420_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7957052_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_7957052_output.getInt32(i, 1);
                int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7957052_output.getInt64(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_7957052_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_6876420_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_6876420_output.setInt32(r, 2, _d_qoy130);
                tbl_JOIN_INNER_TD_6876420_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_6876420_output.setInt64(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6876420_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6876420_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6876420_output #Row: " << tbl_JOIN_INNER_TD_6876420_output.getNumRow() << std::endl;
}

void SW_Project_TD_5712895(Table &tbl_JOIN_INNER_TD_6345353_output, Table &tbl_Project_TD_5712895_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(catalog AS channel#3550, cs_ship_addr_sk#1114 AS col_name#3551, cs_ext_sales_price#1127 AS ext_sales_price#3552)
    // Input: ListBuffer(cs_ship_addr_sk#1114, d_year#3633, d_qoy#3637, i_category#3617, cs_ext_sales_price#1127)
    // Output: ListBuffer(channel#3550, col_name#3551, d_year#3633, d_qoy#3637, i_category#3617, ext_sales_price#3552)
    int nrow1 = tbl_JOIN_INNER_TD_6345353_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ship_addr_sk1114 = tbl_JOIN_INNER_TD_6345353_output.getInt32(i, 0);
        int32_t _d_year3633 = tbl_JOIN_INNER_TD_6345353_output.getInt32(i, 1);
        int32_t _d_qoy3637 = tbl_JOIN_INNER_TD_6345353_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_category3617 = tbl_JOIN_INNER_TD_6345353_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int64_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_6345353_output.getInt64(i, 4);
        std::string _channel3550_str = "catalog";
        std::array<char, TPCDS_READ_MAX + 1> _channel3550{};
        memcpy(_channel3550.data(), _channel3550_str.data(), (_channel3550_str).length());
        tbl_Project_TD_5712895_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel3550);
        int32_t _col_name3551 = _cs_ship_addr_sk1114;
        tbl_Project_TD_5712895_output.setInt32(i, 1, _col_name3551);
        int64_t _ext_sales_price3552 = _cs_ext_sales_price1127;
        tbl_Project_TD_5712895_output.setInt64(i, 5, _ext_sales_price3552);
        tbl_Project_TD_5712895_output.setInt32(i, 2, _d_year3633);
        tbl_Project_TD_5712895_output.setInt32(i, 3, _d_qoy3637);
        tbl_Project_TD_5712895_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 4, _i_category3617);
    }
    tbl_Project_TD_5712895_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5712895_output #Row: " << tbl_Project_TD_5712895_output.getNumRow() << std::endl;
}

void SW_Project_TD_5228637(Table &tbl_JOIN_INNER_TD_6824948_output, Table &tbl_Project_TD_5228637_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(web AS channel#3547, ws_ship_customer_sk#737 AS col_name#3548, ws_ext_sales_price#752 AS ext_sales_price#3549)
    // Input: ListBuffer(ws_ship_customer_sk#737, d_year#3583, d_qoy#3587, i_category#3567, ws_ext_sales_price#752)
    // Output: ListBuffer(channel#3547, col_name#3548, d_year#3583, d_qoy#3587, i_category#3567, ext_sales_price#3549)
    int nrow1 = tbl_JOIN_INNER_TD_6824948_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_customer_sk737 = tbl_JOIN_INNER_TD_6824948_output.getInt32(i, 0);
        int32_t _d_year3583 = tbl_JOIN_INNER_TD_6824948_output.getInt32(i, 1);
        int32_t _d_qoy3587 = tbl_JOIN_INNER_TD_6824948_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_category3567 = tbl_JOIN_INNER_TD_6824948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6824948_output.getInt64(i, 4);
        std::string _channel3547_str = "web";
        std::array<char, TPCDS_READ_MAX + 1> _channel3547{};
        memcpy(_channel3547.data(), _channel3547_str.data(), (_channel3547_str).length());
        tbl_Project_TD_5228637_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel3547);
        int32_t _col_name3548 = _ws_ship_customer_sk737;
        tbl_Project_TD_5228637_output.setInt32(i, 1, _col_name3548);
        int64_t _ext_sales_price3549 = _ws_ext_sales_price752;
        tbl_Project_TD_5228637_output.setInt64(i, 5, _ext_sales_price3549);
        tbl_Project_TD_5228637_output.setInt32(i, 2, _d_year3583);
        tbl_Project_TD_5228637_output.setInt32(i, 3, _d_qoy3587);
        tbl_Project_TD_5228637_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 4, _i_category3567);
    }
    tbl_Project_TD_5228637_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5228637_output #Row: " << tbl_Project_TD_5228637_output.getNumRow() << std::endl;
}

void SW_Project_TD_553323(Table &tbl_JOIN_INNER_TD_6876420_output, Table &tbl_Project_TD_553323_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(store AS channel#3544, ss_store_sk#1213 AS col_name#3545, ss_ext_sales_price#1221 AS ext_sales_price#3546)
    // Input: ListBuffer(ss_store_sk#1213, d_year#126, d_qoy#130, i_category#240, ss_ext_sales_price#1221)
    // Output: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, ext_sales_price#3546)
    int nrow1 = tbl_JOIN_INNER_TD_6876420_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6876420_output.getInt32(i, 0);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_6876420_output.getInt32(i, 1);
        int32_t _d_qoy130 = tbl_JOIN_INNER_TD_6876420_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_6876420_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6876420_output.getInt64(i, 4);
        std::string _channel3544_str = "store";
        std::array<char, TPCDS_READ_MAX + 1> _channel3544{};
        memcpy(_channel3544.data(), _channel3544_str.data(), (_channel3544_str).length());
        tbl_Project_TD_553323_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel3544);
        int32_t _col_name3545 = _ss_store_sk1213;
        tbl_Project_TD_553323_output.setInt32(i, 1, _col_name3545);
        int64_t _ext_sales_price3546 = _ss_ext_sales_price1221;
        tbl_Project_TD_553323_output.setInt64(i, 5, _ext_sales_price3546);
        tbl_Project_TD_553323_output.setInt32(i, 2, _d_year126);
        tbl_Project_TD_553323_output.setInt32(i, 3, _d_qoy130);
        tbl_Project_TD_553323_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 4, _i_category240);
    }
    tbl_Project_TD_553323_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_553323_output #Row: " << tbl_Project_TD_553323_output.getNumRow() << std::endl;
}

void SW_Union_TD_4654963(Table &tbl_Project_TD_553323_output, Table &tbl_Project_TD_5228637_output, Table &tbl_Project_TD_5712895_output, Table &tbl_Union_TD_4654963_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, ext_sales_price#3546)
    int r = 0;
    int row0 = tbl_Project_TD_553323_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3544_n = tbl_Union_TD_4654963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4654963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3544_n);
        tbl_Union_TD_4654963_output.setInt32(r, 1, tbl_Project_TD_553323_output.getInt32(i, 1));
        tbl_Union_TD_4654963_output.setInt32(r, 2, tbl_Project_TD_553323_output.getInt32(i, 2));
        tbl_Union_TD_4654963_output.setInt32(r, 3, tbl_Project_TD_553323_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Union_TD_4654963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_4654963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
        tbl_Union_TD_4654963_output.setInt32(r, 5, tbl_Project_TD_553323_output.getInt64(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_5228637_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3547_n = tbl_Union_TD_4654963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4654963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3547_n);
        tbl_Union_TD_4654963_output.setInt32(r, 1, tbl_Project_TD_5228637_output.getInt32(i, 1));
        tbl_Union_TD_4654963_output.setInt32(r, 2, tbl_Project_TD_5228637_output.getInt32(i, 2));
        tbl_Union_TD_4654963_output.setInt32(r, 3, tbl_Project_TD_5228637_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category3567_n = tbl_Union_TD_4654963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_4654963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category3567_n);
        tbl_Union_TD_4654963_output.setInt32(r, 5, tbl_Project_TD_5228637_output.getInt64(i, 5));
        ++r;
    }
    int row2 = tbl_Project_TD_5712895_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3550_n = tbl_Union_TD_4654963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4654963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3550_n);
        tbl_Union_TD_4654963_output.setInt32(r, 1, tbl_Project_TD_5712895_output.getInt32(i, 1));
        tbl_Union_TD_4654963_output.setInt32(r, 2, tbl_Project_TD_5712895_output.getInt32(i, 2));
        tbl_Union_TD_4654963_output.setInt32(r, 3, tbl_Project_TD_5712895_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category3617_n = tbl_Union_TD_4654963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_4654963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category3617_n);
        tbl_Union_TD_4654963_output.setInt32(r, 5, tbl_Project_TD_5712895_output.getInt64(i, 5));
        ++r;
    }
    tbl_Union_TD_4654963_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4654963_output #Row: " << tbl_Union_TD_4654963_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3979786_key {
    std::string _channel3544;
    int32_t _col_name3545;
    int32_t _d_year126;
    int32_t _d_qoy130;
    std::string _i_category240;
    bool operator==(const SW_Aggregate_TD_3979786_key& other) const { return (_channel3544 == other._channel3544) && (_col_name3545 == other._col_name3545) && (_d_year126 == other._d_year126) && (_d_qoy130 == other._d_qoy130) && (_i_category240 == other._i_category240); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3979786_key> {
    std::size_t operator() (const SW_Aggregate_TD_3979786_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel3544)) + (hash<int32_t>()(k._col_name3545)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_qoy130)) + (hash<string>()(k._i_category240));
    }
};
}
struct SW_Aggregate_TD_3979786_payload {
    int64_t _sales_cnt3553L_count_0;
    int64_t _sales_amt3554_sum_1;
};
void SW_Aggregate_TD_3979786(Table &tbl_Union_TD_4654963_output, Table &tbl_Aggregate_TD_3979786_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, count(1) AS sales_cnt#3553L, MakeDecimal(sum(UnscaledValue(ext_sales_price#3546)),17,2) AS sales_amt#3554)
    // Input: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, ext_sales_price#3546)
    // Output: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, sales_cnt#3553L, sales_amt#3554)
    std::unordered_map<SW_Aggregate_TD_3979786_key, SW_Aggregate_TD_3979786_payload> ht1;
    int nrow1 = tbl_Union_TD_4654963_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3544 = tbl_Union_TD_4654963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _col_name3545 = tbl_Union_TD_4654963_output.getInt32(i, 1);
        int32_t _d_year126 = tbl_Union_TD_4654963_output.getInt32(i, 2);
        int32_t _d_qoy130 = tbl_Union_TD_4654963_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Union_TD_4654963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int64_t _ext_sales_price3546 = tbl_Union_TD_4654963_output.getInt64(i, 5);
        SW_Aggregate_TD_3979786_key k{std::string(_channel3544.data()), _col_name3545, _d_year126, _d_qoy130, std::string(_i_category240.data())};
        int64_t _sales_cnt3553L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _sales_amt3554_sum_1 = _ext_sales_price3546;
        SW_Aggregate_TD_3979786_payload p{_sales_cnt3553L_count_0, _sales_amt3554_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._sales_cnt3553L_count_0 + _sales_cnt3553L_count_0;
            p._sales_cnt3553L_count_0 = count_0;
            int64_t sum_1 = (it->second)._sales_amt3554_sum_1 + _sales_amt3554_sum_1;
            p._sales_amt3554_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3544{};
        memcpy(_channel3544.data(), ((it.first)._channel3544).data(), ((it.first)._channel3544).length());
        tbl_Aggregate_TD_3979786_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3544);
        tbl_Aggregate_TD_3979786_output.setInt32(r, 1, (it.first)._col_name3545);
        tbl_Aggregate_TD_3979786_output.setInt32(r, 2, (it.first)._d_year126);
        tbl_Aggregate_TD_3979786_output.setInt32(r, 3, (it.first)._d_qoy130);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_3979786_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240);
        int64_t _sales_cnt3553L = (it.second)._sales_cnt3553L_count_0;
        tbl_Aggregate_TD_3979786_output.setInt64(r, 5, _sales_cnt3553L);
        int64_t _sales_amt3554 = (it.second)._sales_amt3554_sum_1;
        tbl_Aggregate_TD_3979786_output.setInt64(r, 6, _sales_amt3554);
        ++r;
    }
    tbl_Aggregate_TD_3979786_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3979786_output #Row: " << tbl_Aggregate_TD_3979786_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2899364(Table &tbl_Aggregate_TD_3979786_output, Table &tbl_Sort_TD_2899364_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#3544 ASC NULLS FIRST, col_name#3545 ASC NULLS FIRST, d_year#126 ASC NULLS FIRST, d_qoy#130 ASC NULLS FIRST, i_category#240 ASC NULLS FIRST)
    // Input: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, sales_cnt#3553L, sales_amt#3554)
    // Output: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, sales_cnt#3553L, sales_amt#3554)
    struct SW_Sort_TD_2899364Row {
        std::string _channel3544;
        int32_t _col_name3545;
        int32_t _d_year126;
        int32_t _d_qoy130;
        std::string _i_category240;
        int64_t _sales_cnt3553L;
        int64_t _sales_amt3554;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2899364Row& a, const SW_Sort_TD_2899364Row& b) const { return 
 (a._channel3544 < b._channel3544) || 
 ((a._channel3544 == b._channel3544) && (a._col_name3545 < b._col_name3545)) || 
 ((a._channel3544 == b._channel3544) && (a._col_name3545 == b._col_name3545) && (a._d_year126 < b._d_year126)) || 
 ((a._channel3544 == b._channel3544) && (a._col_name3545 == b._col_name3545) && (a._d_year126 == b._d_year126) && (a._d_qoy130 < b._d_qoy130)) || 
 ((a._channel3544 == b._channel3544) && (a._col_name3545 == b._col_name3545) && (a._d_year126 == b._d_year126) && (a._d_qoy130 == b._d_qoy130) && (a._i_category240 < b._i_category240)); 
}
    }SW_Sort_TD_2899364_order; 

    int nrow1 = tbl_Aggregate_TD_3979786_output.getNumRow();
    std::vector<SW_Sort_TD_2899364Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3544 = tbl_Aggregate_TD_3979786_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _col_name3545 = tbl_Aggregate_TD_3979786_output.getInt32(i, 1);
        int32_t _d_year126 = tbl_Aggregate_TD_3979786_output.getInt32(i, 2);
        int32_t _d_qoy130 = tbl_Aggregate_TD_3979786_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_3979786_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        int64_t _sales_cnt3553L = tbl_Aggregate_TD_3979786_output.getInt64(i, 5);
        int64_t _sales_amt3554 = tbl_Aggregate_TD_3979786_output.getInt64(i, 6);
        SW_Sort_TD_2899364Row t = {std::string(_channel3544.data()),_col_name3545,_d_year126,_d_qoy130,std::string(_i_category240.data()),_sales_cnt3553L,_sales_amt3554};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2899364_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3544{};
        memcpy(_channel3544.data(), (it._channel3544).data(), (it._channel3544).length());
        tbl_Sort_TD_2899364_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel3544);
        tbl_Sort_TD_2899364_output.setInt32(r, 1, it._col_name3545);
        tbl_Sort_TD_2899364_output.setInt32(r, 2, it._d_year126);
        tbl_Sort_TD_2899364_output.setInt32(r, 3, it._d_qoy130);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2899364_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _i_category240);
        tbl_Sort_TD_2899364_output.setInt64(r, 5, it._sales_cnt3553L);
        tbl_Sort_TD_2899364_output.setInt64(r, 6, it._sales_amt3554);
        ++r;
    }
    tbl_Sort_TD_2899364_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2899364_output #Row: " << tbl_Sort_TD_2899364_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1113449(Table &tbl_Sort_TD_2899364_output, Table &tbl_LocalLimit_TD_1113449_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, sales_cnt#3553L, sales_amt#3554)
    // Output: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, sales_cnt#3553L, sales_amt#3554)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3544_n = tbl_Sort_TD_2899364_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1113449_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3544_n);
        tbl_LocalLimit_TD_1113449_output.setInt32(r, 1, tbl_Sort_TD_2899364_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1113449_output.setInt32(r, 2, tbl_Sort_TD_2899364_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1113449_output.setInt32(r, 3, tbl_Sort_TD_2899364_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2899364_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_LocalLimit_TD_1113449_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
        tbl_LocalLimit_TD_1113449_output.setInt64(r, 5, tbl_Sort_TD_2899364_output.getInt64(i, 5));
        tbl_LocalLimit_TD_1113449_output.setInt64(r, 6, tbl_Sort_TD_2899364_output.getInt64(i, 6));
        r++;
    }
    tbl_LocalLimit_TD_1113449_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1113449_output #Row: " << tbl_LocalLimit_TD_1113449_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0252279(Table &tbl_LocalLimit_TD_1113449_output, Table &tbl_GlobalLimit_TD_0252279_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, sales_cnt#3553L, sales_amt#3554)
    // Output: ListBuffer(channel#3544, col_name#3545, d_year#126, d_qoy#130, i_category#240, sales_cnt#3553L, sales_amt#3554)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3544_n = tbl_LocalLimit_TD_1113449_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0252279_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3544_n);
        tbl_GlobalLimit_TD_0252279_output.setInt32(r, 1, tbl_LocalLimit_TD_1113449_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0252279_output.setInt32(r, 2, tbl_LocalLimit_TD_1113449_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0252279_output.setInt32(r, 3, tbl_LocalLimit_TD_1113449_output.getInt32(i, 3));
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1113449_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_GlobalLimit_TD_0252279_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _i_category240_n);
        tbl_GlobalLimit_TD_0252279_output.setInt64(r, 5, tbl_LocalLimit_TD_1113449_output.getInt64(i, 5));
        tbl_GlobalLimit_TD_0252279_output.setInt64(r, 6, tbl_LocalLimit_TD_1113449_output.getInt64(i, 6));
        r++;
    }
    tbl_GlobalLimit_TD_0252279_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0252279_output #Row: " << tbl_GlobalLimit_TD_0252279_output.getNumRow() << std::endl;
}

