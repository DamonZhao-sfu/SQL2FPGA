#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_8969833(Table &tbl_SerializeFromObject_TD_9638228_input, Table &tbl_Filter_TD_8969833_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3547) AND ((d_month_seq#3547 >= 1200) AND (d_month_seq#3547 <= 1211))) AND isnotnull(d_date_sk#3544)))
    // Input: ListBuffer(d_date_sk#3544, d_date#3546, d_month_seq#3547)
    // Output: ListBuffer(d_date_sk#3544, d_date#3546)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9638228_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3547 = tbl_SerializeFromObject_TD_9638228_input.getInt32(i, 2);
        int32_t _d_date_sk3544 = tbl_SerializeFromObject_TD_9638228_input.getInt32(i, 0);
        if (((_d_month_seq3547!= 0) && ((_d_month_seq3547 >= 1200) && (_d_month_seq3547 <= 1211))) && (_d_date_sk3544!= 0)) {
            int32_t _d_date_sk3544_t = tbl_SerializeFromObject_TD_9638228_input.getInt32(i, 0);
            tbl_Filter_TD_8969833_output.setInt32(r, 0, _d_date_sk3544_t);
            int32_t _d_date3546_t = tbl_SerializeFromObject_TD_9638228_input.getInt32(i, 1);
            tbl_Filter_TD_8969833_output.setInt32(r, 1, _d_date3546_t);
            r++;
        }
    }
    tbl_Filter_TD_8969833_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8969833_output #Row: " << tbl_Filter_TD_8969833_output.getNumRow() << std::endl;
}

void SW_Filter_TD_879780(Table &tbl_SerializeFromObject_TD_9850710_input, Table &tbl_Filter_TD_879780_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_bill_customer_sk#1107)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9850710_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9850710_input.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_9850710_input.getInt32(i, 1);
        if ((_cs_sold_date_sk1104!= 0) && (_cs_bill_customer_sk1107!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9850710_input.getInt32(i, 0);
            tbl_Filter_TD_879780_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_9850710_input.getInt32(i, 1);
            tbl_Filter_TD_879780_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            r++;
        }
    }
    tbl_Filter_TD_879780_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_879780_output #Row: " << tbl_Filter_TD_879780_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8995627(Table &tbl_SerializeFromObject_TD_9964270_input, Table &tbl_Filter_TD_8995627_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9964270_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_9964270_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9964270_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9964270_input.getInt32(i, 0);
            tbl_Filter_TD_8995627_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_9964270_input.getInt32(i, 1);
            tbl_Filter_TD_8995627_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_8995627_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8995627_output #Row: " << tbl_Filter_TD_8995627_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8255171(Table &tbl_SerializeFromObject_TD_9154852_input, Table &tbl_Filter_TD_8255171_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_customer_sk#1209)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9154852_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9154852_input.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_9154852_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_customer_sk1209!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9154852_input.getInt32(i, 0);
            tbl_Filter_TD_8255171_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_9154852_input.getInt32(i, 1);
            tbl_Filter_TD_8255171_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_8255171_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8255171_output #Row: " << tbl_Filter_TD_8255171_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7673479(Table &tbl_SerializeFromObject_TD_8513625_input, Table &tbl_Filter_TD_7673479_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3572))
    // Input: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    // Output: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8513625_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3572 = tbl_SerializeFromObject_TD_8513625_input.getInt32(i, 0);
        if (_c_customer_sk3572!= 0) {
            int32_t _c_customer_sk3572_t = tbl_SerializeFromObject_TD_8513625_input.getInt32(i, 0);
            tbl_Filter_TD_7673479_output.setInt32(r, 0, _c_customer_sk3572_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_t = tbl_SerializeFromObject_TD_8513625_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7673479_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_t = tbl_SerializeFromObject_TD_8513625_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7673479_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3581_t);
            r++;
        }
    }
    tbl_Filter_TD_7673479_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7673479_output #Row: " << tbl_Filter_TD_7673479_output.getNumRow() << std::endl;
}


void SW_Filter_TD_7104860(Table &tbl_SerializeFromObject_TD_857492_input, Table &tbl_Filter_TD_7104860_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_857492_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_857492_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_857492_input.getInt32(i, 0);
            tbl_Filter_TD_7104860_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_857492_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7104860_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_857492_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7104860_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_7104860_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7104860_output #Row: " << tbl_Filter_TD_7104860_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6502055(Table &tbl_SerializeFromObject_TD_7413064_input, Table &tbl_Filter_TD_6502055_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3593) AND ((d_month_seq#3593 >= 1200) AND (d_month_seq#3593 <= 1211))) AND isnotnull(d_date_sk#3590)))
    // Input: ListBuffer(d_date_sk#3590, d_date#3592, d_month_seq#3593)
    // Output: ListBuffer(d_date_sk#3590, d_date#3592)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7413064_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3593 = tbl_SerializeFromObject_TD_7413064_input.getInt32(i, 2);
        int32_t _d_date_sk3590 = tbl_SerializeFromObject_TD_7413064_input.getInt32(i, 0);
        if (((_d_month_seq3593!= 0) && ((_d_month_seq3593 >= 1200) && (_d_month_seq3593 <= 1211))) && (_d_date_sk3590!= 0)) {
            int32_t _d_date_sk3590_t = tbl_SerializeFromObject_TD_7413064_input.getInt32(i, 0);
            tbl_Filter_TD_6502055_output.setInt32(r, 0, _d_date_sk3590_t);
            int32_t _d_date3592_t = tbl_SerializeFromObject_TD_7413064_input.getInt32(i, 1);
            tbl_Filter_TD_6502055_output.setInt32(r, 1, _d_date3592_t);
            r++;
        }
    }
    tbl_Filter_TD_6502055_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6502055_output #Row: " << tbl_Filter_TD_6502055_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6111688(Table &tbl_SerializeFromObject_TD_7651396_input, Table &tbl_Filter_TD_6111688_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_customer_sk#733)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7651396_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_7651396_input.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_7651396_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && (_ws_bill_customer_sk733!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_7651396_input.getInt32(i, 0);
            tbl_Filter_TD_6111688_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_7651396_input.getInt32(i, 1);
            tbl_Filter_TD_6111688_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_6111688_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6111688_output #Row: " << tbl_Filter_TD_6111688_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6947388_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_INNER_TD_6947388_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6947388_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6947388_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_INNER_TD_6947388_payload_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    int32_t _d_date3546;
};
struct SW_JOIN_INNER_TD_6947388_key_rightMajor {
    int32_t _c_customer_sk3572;
    bool operator==(const SW_JOIN_INNER_TD_6947388_key_rightMajor& other) const {
        return ((_c_customer_sk3572 == other._c_customer_sk3572));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6947388_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6947388_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3572));
    }
};
}
struct SW_JOIN_INNER_TD_6947388_payload_rightMajor {
    int32_t _c_customer_sk3572;
    std::string _c_first_name3580;
    std::string _c_last_name3581;
};
void SW_JOIN_INNER_TD_6947388(Table &tbl_JOIN_INNER_TD_7779108_output, Table &tbl_Filter_TD_7673479_output, Table &tbl_JOIN_INNER_TD_6947388_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#3572))
    // Left Table: ListBuffer(cs_bill_customer_sk#1107, d_date#3546)
    // Right Table: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    // Output Table: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    int left_nrow = tbl_JOIN_INNER_TD_7779108_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7673479_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6947388_key_leftMajor, SW_JOIN_INNER_TD_6947388_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7779108_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7779108_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6947388_key_leftMajor keyA{_cs_bill_customer_sk1107_k};
            int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7779108_output.getInt32(i, 0);
            int32_t _d_date3546 = tbl_JOIN_INNER_TD_7779108_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6947388_payload_leftMajor payloadA{_cs_bill_customer_sk1107, _d_date3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7673479_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3572_k = tbl_Filter_TD_7673479_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6947388_key_leftMajor{_c_customer_sk3572_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _d_date3546 = (it->second)._d_date3546;
                int32_t _c_customer_sk3572 = tbl_Filter_TD_7673479_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Filter_TD_7673479_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Filter_TD_7673479_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
                tbl_JOIN_INNER_TD_6947388_output.setInt32(r, 2, _d_date3546);
                tbl_JOIN_INNER_TD_6947388_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_n);
                tbl_JOIN_INNER_TD_6947388_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6947388_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6947388_key_rightMajor, SW_JOIN_INNER_TD_6947388_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7673479_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3572_k = tbl_Filter_TD_7673479_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6947388_key_rightMajor keyA{_c_customer_sk3572_k};
            int32_t _c_customer_sk3572 = tbl_Filter_TD_7673479_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Filter_TD_7673479_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Filter_TD_7673479_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
            SW_JOIN_INNER_TD_6947388_payload_rightMajor payloadA{_c_customer_sk3572, _c_first_name3580, _c_last_name3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7779108_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7779108_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6947388_key_rightMajor{_cs_bill_customer_sk1107_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk3572 = (it->second)._c_customer_sk3572;
                std::string _c_first_name3580 = (it->second)._c_first_name3580;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n{};
                memcpy(_c_first_name3580_n.data(), (_c_first_name3580).data(), (_c_first_name3580).length());
                std::string _c_last_name3581 = (it->second)._c_last_name3581;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n{};
                memcpy(_c_last_name3581_n.data(), (_c_last_name3581).data(), (_c_last_name3581).length());
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7779108_output.getInt32(i, 0);
                int32_t _d_date3546 = tbl_JOIN_INNER_TD_7779108_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6947388_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_n);
                tbl_JOIN_INNER_TD_6947388_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581_n);
                tbl_JOIN_INNER_TD_6947388_output.setInt32(r, 2, _d_date3546);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6947388_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6947388_output #Row: " << tbl_JOIN_INNER_TD_6947388_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6237486_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_6237486_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6237486_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6237486_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_6237486_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_6237486_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_6237486_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6237486_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6237486_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_6237486_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_6237486(Table &tbl_JOIN_INNER_TD_7476448_output, Table &tbl_Filter_TD_7104860_output, Table &tbl_JOIN_INNER_TD_6237486_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_customer_sk#1209, d_date#122)
    // Right Table: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_JOIN_INNER_TD_7476448_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7104860_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6237486_key_leftMajor, SW_JOIN_INNER_TD_6237486_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7476448_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7476448_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6237486_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7476448_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_7476448_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6237486_payload_leftMajor payloadA{_ss_customer_sk1209, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7104860_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7104860_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6237486_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _c_customer_sk0 = tbl_Filter_TD_7104860_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7104860_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7104860_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_6237486_output.setInt32(r, 2, _d_date122);
                tbl_JOIN_INNER_TD_6237486_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6237486_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6237486_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6237486_key_rightMajor, SW_JOIN_INNER_TD_6237486_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7104860_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7104860_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6237486_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_7104860_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7104860_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7104860_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_6237486_payload_rightMajor payloadA{_c_customer_sk0, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7476448_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7476448_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6237486_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7476448_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_7476448_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6237486_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6237486_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_6237486_output.setInt32(r, 2, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6237486_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6237486_output #Row: " << tbl_JOIN_INNER_TD_6237486_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5713377(Table &tbl_SerializeFromObject_TD_6587582_input, Table &tbl_Filter_TD_5713377_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3618))
    // Input: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    // Output: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6587582_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3618 = tbl_SerializeFromObject_TD_6587582_input.getInt32(i, 0);
        if (_c_customer_sk3618!= 0) {
            int32_t _c_customer_sk3618_t = tbl_SerializeFromObject_TD_6587582_input.getInt32(i, 0);
            tbl_Filter_TD_5713377_output.setInt32(r, 0, _c_customer_sk3618_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_t = tbl_SerializeFromObject_TD_6587582_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5713377_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_t = tbl_SerializeFromObject_TD_6587582_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5713377_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3627_t);
            r++;
        }
    }
    tbl_Filter_TD_5713377_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5713377_output #Row: " << tbl_Filter_TD_5713377_output.getNumRow() << std::endl;
}


struct SW_Aggregate_TD_5849639_key {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
    bool operator==(const SW_Aggregate_TD_5849639_key& other) const { return (_c_last_name3581 == other._c_last_name3581) && (_c_first_name3580 == other._c_first_name3580) && (_d_date3546 == other._d_date3546); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5849639_key> {
    std::size_t operator() (const SW_Aggregate_TD_5849639_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3581)) + (hash<string>()(k._c_first_name3580)) + (hash<int32_t>()(k._d_date3546));
    }
};
}
struct SW_Aggregate_TD_5849639_payload {
};
void SW_Aggregate_TD_5849639(Table &tbl_JOIN_INNER_TD_6947388_output, Table &tbl_Aggregate_TD_5849639_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Input: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Output: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    std::unordered_map<SW_Aggregate_TD_5849639_key, SW_Aggregate_TD_5849639_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6947388_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581 = tbl_JOIN_INNER_TD_6947388_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580 = tbl_JOIN_INNER_TD_6947388_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date3546 = tbl_JOIN_INNER_TD_6947388_output.getInt32(i, 2);
        SW_Aggregate_TD_5849639_key k{std::string(_c_last_name3581.data()), std::string(_c_first_name3580.data()), _d_date3546};
        SW_Aggregate_TD_5849639_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581{};
        memcpy(_c_last_name3581.data(), ((it.first)._c_last_name3581).data(), ((it.first)._c_last_name3581).length());
        tbl_Aggregate_TD_5849639_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580{};
        memcpy(_c_first_name3580.data(), ((it.first)._c_first_name3580).data(), ((it.first)._c_first_name3580).length());
        tbl_Aggregate_TD_5849639_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580);
        tbl_Aggregate_TD_5849639_output.setInt32(r, 2, (it.first)._d_date3546);
        ++r;
    }
    tbl_Aggregate_TD_5849639_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5849639_output #Row: " << tbl_Aggregate_TD_5849639_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5858808_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_5858808_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5858808_key> {
    std::size_t operator() (const SW_Aggregate_TD_5858808_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_5858808_payload {
};
void SW_Aggregate_TD_5858808(Table &tbl_JOIN_INNER_TD_6237486_output, Table &tbl_Aggregate_TD_5858808_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_5858808_key, SW_Aggregate_TD_5858808_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6237486_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_6237486_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_6237486_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_INNER_TD_6237486_output.getInt32(i, 2);
        SW_Aggregate_TD_5858808_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_5858808_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_5858808_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_5858808_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_5858808_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_5858808_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5858808_output #Row: " << tbl_Aggregate_TD_5858808_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4940860_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_INNER_TD_4940860_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4940860_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4940860_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_INNER_TD_4940860_payload_leftMajor {
    int32_t _ws_bill_customer_sk733;
    int32_t _d_date3592;
};
struct SW_JOIN_INNER_TD_4940860_key_rightMajor {
    int32_t _c_customer_sk3618;
    bool operator==(const SW_JOIN_INNER_TD_4940860_key_rightMajor& other) const {
        return ((_c_customer_sk3618 == other._c_customer_sk3618));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4940860_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4940860_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3618));
    }
};
}
struct SW_JOIN_INNER_TD_4940860_payload_rightMajor {
    int32_t _c_customer_sk3618;
    std::string _c_first_name3626;
    std::string _c_last_name3627;
};
void SW_JOIN_INNER_TD_4940860(Table &tbl_JOIN_INNER_TD_5299444_output, Table &tbl_Filter_TD_5713377_output, Table &tbl_JOIN_INNER_TD_4940860_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#3618))
    // Left Table: ListBuffer(ws_bill_customer_sk#733, d_date#3592)
    // Right Table: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    // Output Table: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    int left_nrow = tbl_JOIN_INNER_TD_5299444_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5713377_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4940860_key_leftMajor, SW_JOIN_INNER_TD_4940860_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5299444_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5299444_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4940860_key_leftMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5299444_output.getInt32(i, 0);
            int32_t _d_date3592 = tbl_JOIN_INNER_TD_5299444_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4940860_payload_leftMajor payloadA{_ws_bill_customer_sk733, _d_date3592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5713377_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3618_k = tbl_Filter_TD_5713377_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4940860_key_leftMajor{_c_customer_sk3618_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date3592 = (it->second)._d_date3592;
                int32_t _c_customer_sk3618 = tbl_Filter_TD_5713377_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Filter_TD_5713377_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Filter_TD_5713377_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
                tbl_JOIN_INNER_TD_4940860_output.setInt32(r, 2, _d_date3592);
                tbl_JOIN_INNER_TD_4940860_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_n);
                tbl_JOIN_INNER_TD_4940860_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4940860_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4940860_key_rightMajor, SW_JOIN_INNER_TD_4940860_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5713377_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3618_k = tbl_Filter_TD_5713377_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4940860_key_rightMajor keyA{_c_customer_sk3618_k};
            int32_t _c_customer_sk3618 = tbl_Filter_TD_5713377_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Filter_TD_5713377_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Filter_TD_5713377_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
            SW_JOIN_INNER_TD_4940860_payload_rightMajor payloadA{_c_customer_sk3618, _c_first_name3626, _c_last_name3627};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5299444_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5299444_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4940860_key_rightMajor{_ws_bill_customer_sk733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk3618 = (it->second)._c_customer_sk3618;
                std::string _c_first_name3626 = (it->second)._c_first_name3626;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n{};
                memcpy(_c_first_name3626_n.data(), (_c_first_name3626).data(), (_c_first_name3626).length());
                std::string _c_last_name3627 = (it->second)._c_last_name3627;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n{};
                memcpy(_c_last_name3627_n.data(), (_c_last_name3627).data(), (_c_last_name3627).length());
                int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5299444_output.getInt32(i, 0);
                int32_t _d_date3592 = tbl_JOIN_INNER_TD_5299444_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4940860_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_n);
                tbl_JOIN_INNER_TD_4940860_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627_n);
                tbl_JOIN_INNER_TD_4940860_output.setInt32(r, 2, _d_date3592);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4940860_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4940860_output #Row: " << tbl_JOIN_INNER_TD_4940860_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_4707233_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_4707233_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_4707233_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_4707233_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_4707233_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTSEMI_TD_4707233_key_rightMajor {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_4707233_key_rightMajor& other) const {
        return ((_c_last_name3581 == other._c_last_name3581) && (_c_first_name3580 == other._c_first_name3580) && (_d_date3546 == other._d_date3546));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_4707233_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_4707233_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3581)) + (hash<string>()(k._c_first_name3580)) + (hash<int32_t>()(k._d_date3546));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_4707233_payload_rightMajor {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
};
void SW_JOIN_LEFTSEMI_TD_4707233(Table &tbl_Aggregate_TD_5858808_output, Table &tbl_Aggregate_TD_5849639_output, Table &tbl_JOIN_LEFTSEMI_TD_4707233_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#3581) AND (c_first_name#8 <=> c_first_name#3580)) AND (d_date#122 <=> d_date#3546)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_5858808_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5849639_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_4707233_key_rightMajor, SW_JOIN_LEFTSEMI_TD_4707233_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5849639_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_5858808_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_k_n = tbl_Aggregate_TD_5849639_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3581_k = std::string(_c_last_name3581_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_k_n = tbl_Aggregate_TD_5849639_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580_k = std::string(_c_first_name3580_k_n.data());
            int32_t _d_date3546_k = tbl_Aggregate_TD_5849639_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_4707233_key_rightMajor keyA{_c_last_name3581_k, _c_first_name3580_k, _d_date3546_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Aggregate_TD_5849639_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Aggregate_TD_5849639_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
            int32_t _d_date3546 = tbl_Aggregate_TD_5849639_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_4707233_payload_rightMajor payloadA{_c_last_name3581, _c_first_name3580, _d_date3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_5858808_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_5858808_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_5858808_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_4707233_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it != ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_5858808_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_5858808_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_5858808_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_4707233_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTSEMI_TD_4707233_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTSEMI_TD_4707233_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_4707233_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_4707233_output #Row: " << tbl_JOIN_LEFTSEMI_TD_4707233_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3372762_key {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
    bool operator==(const SW_Aggregate_TD_3372762_key& other) const { return (_c_last_name3627 == other._c_last_name3627) && (_c_first_name3626 == other._c_first_name3626) && (_d_date3592 == other._d_date3592); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3372762_key> {
    std::size_t operator() (const SW_Aggregate_TD_3372762_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3627)) + (hash<string>()(k._c_first_name3626)) + (hash<int32_t>()(k._d_date3592));
    }
};
}
struct SW_Aggregate_TD_3372762_payload {
};
void SW_Aggregate_TD_3372762(Table &tbl_JOIN_INNER_TD_4940860_output, Table &tbl_Aggregate_TD_3372762_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Input: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Output: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    std::unordered_map<SW_Aggregate_TD_3372762_key, SW_Aggregate_TD_3372762_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4940860_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627 = tbl_JOIN_INNER_TD_4940860_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626 = tbl_JOIN_INNER_TD_4940860_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date3592 = tbl_JOIN_INNER_TD_4940860_output.getInt32(i, 2);
        SW_Aggregate_TD_3372762_key k{std::string(_c_last_name3627.data()), std::string(_c_first_name3626.data()), _d_date3592};
        SW_Aggregate_TD_3372762_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627{};
        memcpy(_c_last_name3627.data(), ((it.first)._c_last_name3627).data(), ((it.first)._c_last_name3627).length());
        tbl_Aggregate_TD_3372762_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626{};
        memcpy(_c_first_name3626.data(), ((it.first)._c_first_name3626).data(), ((it.first)._c_first_name3626).length());
        tbl_Aggregate_TD_3372762_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626);
        tbl_Aggregate_TD_3372762_output.setInt32(r, 2, (it.first)._d_date3592);
        ++r;
    }
    tbl_Aggregate_TD_3372762_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3372762_output #Row: " << tbl_Aggregate_TD_3372762_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_364082_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_364082_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_364082_key> {
    std::size_t operator() (const SW_Aggregate_TD_364082_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_364082_payload {
};
void SW_Aggregate_TD_364082(Table &tbl_JOIN_LEFTSEMI_TD_4707233_output, Table &tbl_Aggregate_TD_364082_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_364082_key, SW_Aggregate_TD_364082_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_4707233_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTSEMI_TD_4707233_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTSEMI_TD_4707233_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTSEMI_TD_4707233_output.getInt32(i, 2);
        SW_Aggregate_TD_364082_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_364082_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_364082_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_364082_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_364082_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_364082_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_364082_output #Row: " << tbl_Aggregate_TD_364082_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_2756360_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2756360_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2756360_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2756360_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2756360_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTSEMI_TD_2756360_key_rightMajor {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2756360_key_rightMajor& other) const {
        return ((_c_last_name3627 == other._c_last_name3627) && (_c_first_name3626 == other._c_first_name3626) && (_d_date3592 == other._d_date3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2756360_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2756360_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3627)) + (hash<string>()(k._c_first_name3626)) + (hash<int32_t>()(k._d_date3592));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2756360_payload_rightMajor {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
};
void SW_JOIN_LEFTSEMI_TD_2756360(Table &tbl_Aggregate_TD_364082_output, Table &tbl_Aggregate_TD_3372762_output, Table &tbl_JOIN_LEFTSEMI_TD_2756360_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#3627) AND (c_first_name#8 <=> c_first_name#3626)) AND (d_date#122 <=> d_date#3592)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_364082_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3372762_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_2756360_key_rightMajor, SW_JOIN_LEFTSEMI_TD_2756360_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3372762_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_364082_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_k_n = tbl_Aggregate_TD_3372762_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3627_k = std::string(_c_last_name3627_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_k_n = tbl_Aggregate_TD_3372762_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626_k = std::string(_c_first_name3626_k_n.data());
            int32_t _d_date3592_k = tbl_Aggregate_TD_3372762_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2756360_key_rightMajor keyA{_c_last_name3627_k, _c_first_name3626_k, _d_date3592_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Aggregate_TD_3372762_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Aggregate_TD_3372762_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
            int32_t _d_date3592 = tbl_Aggregate_TD_3372762_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2756360_payload_rightMajor payloadA{_c_last_name3627, _c_first_name3626, _d_date3592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_364082_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_364082_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_364082_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_2756360_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it != ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_364082_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_364082_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_364082_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_2756360_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTSEMI_TD_2756360_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTSEMI_TD_2756360_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_2756360_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_2756360_output #Row: " << tbl_JOIN_LEFTSEMI_TD_2756360_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1147604_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_1147604_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1147604_key> {
    std::size_t operator() (const SW_Aggregate_TD_1147604_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_1147604_payload {
};
void SW_Aggregate_TD_1147604(Table &tbl_JOIN_LEFTSEMI_TD_2756360_output, Table &tbl_Aggregate_TD_1147604_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_1147604_key, SW_Aggregate_TD_1147604_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_2756360_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTSEMI_TD_2756360_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTSEMI_TD_2756360_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTSEMI_TD_2756360_output.getInt32(i, 2);
        SW_Aggregate_TD_1147604_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_1147604_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_1147604_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_1147604_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_1147604_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_1147604_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1147604_output #Row: " << tbl_Aggregate_TD_1147604_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0933263(Table &tbl_Aggregate_TD_1147604_output, Table &tbl_Aggregate_TD_0933263_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3637L)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(count(1)#3637L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Aggregate_TD_1147604_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_1147604_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_1147604_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_Aggregate_TD_1147604_output.getInt32(i, 2);
        int64_t _count13637L_count_0 = 1;
        count_0 += _count13637L_count_0;
    }
    int r = 0;
    int64_t _count13637L = count_0;
    tbl_Aggregate_TD_0933263_output.setInt64(r++, 0, _count13637L);
    tbl_Aggregate_TD_0933263_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0933263_output #Row: " << tbl_Aggregate_TD_0933263_output.getNumRow() << std::endl;
}

