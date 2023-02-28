#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_888282(Table &tbl_SerializeFromObject_TD_9935731_input, Table &tbl_Filter_TD_888282_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3547) AND ((d_month_seq#3547 >= 1200) AND (d_month_seq#3547 <= 1211))) AND isnotnull(d_date_sk#3544)))
    // Input: ListBuffer(d_date_sk#3544, d_date#3546, d_month_seq#3547)
    // Output: ListBuffer(d_date_sk#3544, d_date#3546)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9935731_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3547 = tbl_SerializeFromObject_TD_9935731_input.getInt32(i, 2);
        int32_t _d_date_sk3544 = tbl_SerializeFromObject_TD_9935731_input.getInt32(i, 0);
        if (((_d_month_seq3547!= 0) && ((_d_month_seq3547 >= 1200) && (_d_month_seq3547 <= 1211))) && (_d_date_sk3544!= 0)) {
            int32_t _d_date_sk3544_t = tbl_SerializeFromObject_TD_9935731_input.getInt32(i, 0);
            tbl_Filter_TD_888282_output.setInt32(r, 0, _d_date_sk3544_t);
            int32_t _d_date3546_t = tbl_SerializeFromObject_TD_9935731_input.getInt32(i, 1);
            tbl_Filter_TD_888282_output.setInt32(r, 1, _d_date3546_t);
            r++;
        }
    }
    tbl_Filter_TD_888282_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_888282_output #Row: " << tbl_Filter_TD_888282_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8405416(Table &tbl_SerializeFromObject_TD_9640121_input, Table &tbl_Filter_TD_8405416_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_bill_customer_sk#1107)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9640121_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_9640121_input.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_9640121_input.getInt32(i, 1);
        if ((_cs_sold_date_sk1104!= 0) && (_cs_bill_customer_sk1107!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_9640121_input.getInt32(i, 0);
            tbl_Filter_TD_8405416_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_9640121_input.getInt32(i, 1);
            tbl_Filter_TD_8405416_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            r++;
        }
    }
    tbl_Filter_TD_8405416_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8405416_output #Row: " << tbl_Filter_TD_8405416_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8987276(Table &tbl_SerializeFromObject_TD_9263414_input, Table &tbl_Filter_TD_8987276_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9263414_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_9263414_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9263414_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9263414_input.getInt32(i, 0);
            tbl_Filter_TD_8987276_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_9263414_input.getInt32(i, 1);
            tbl_Filter_TD_8987276_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_8987276_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8987276_output #Row: " << tbl_Filter_TD_8987276_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8537167(Table &tbl_SerializeFromObject_TD_9537670_input, Table &tbl_Filter_TD_8537167_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_customer_sk#1209)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9537670_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9537670_input.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_9537670_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_customer_sk1209!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9537670_input.getInt32(i, 0);
            tbl_Filter_TD_8537167_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_9537670_input.getInt32(i, 1);
            tbl_Filter_TD_8537167_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_8537167_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8537167_output #Row: " << tbl_Filter_TD_8537167_output.getNumRow() << std::endl;
}

void SW_Filter_TD_71901(Table &tbl_SerializeFromObject_TD_8342999_input, Table &tbl_Filter_TD_71901_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3572))
    // Input: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    // Output: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8342999_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3572 = tbl_SerializeFromObject_TD_8342999_input.getInt32(i, 0);
        if (_c_customer_sk3572!= 0) {
            int32_t _c_customer_sk3572_t = tbl_SerializeFromObject_TD_8342999_input.getInt32(i, 0);
            tbl_Filter_TD_71901_output.setInt32(r, 0, _c_customer_sk3572_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_t = tbl_SerializeFromObject_TD_8342999_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_71901_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_t = tbl_SerializeFromObject_TD_8342999_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_71901_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3581_t);
            r++;
        }
    }
    tbl_Filter_TD_71901_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_71901_output #Row: " << tbl_Filter_TD_71901_output.getNumRow() << std::endl;
}


void SW_Filter_TD_7196343(Table &tbl_SerializeFromObject_TD_8737618_input, Table &tbl_Filter_TD_7196343_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8737618_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_8737618_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_8737618_input.getInt32(i, 0);
            tbl_Filter_TD_7196343_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_8737618_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7196343_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_8737618_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7196343_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_7196343_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7196343_output #Row: " << tbl_Filter_TD_7196343_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6736629(Table &tbl_SerializeFromObject_TD_7121252_input, Table &tbl_Filter_TD_6736629_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3593) AND ((d_month_seq#3593 >= 1200) AND (d_month_seq#3593 <= 1211))) AND isnotnull(d_date_sk#3590)))
    // Input: ListBuffer(d_date_sk#3590, d_date#3592, d_month_seq#3593)
    // Output: ListBuffer(d_date_sk#3590, d_date#3592)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7121252_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3593 = tbl_SerializeFromObject_TD_7121252_input.getInt32(i, 2);
        int32_t _d_date_sk3590 = tbl_SerializeFromObject_TD_7121252_input.getInt32(i, 0);
        if (((_d_month_seq3593!= 0) && ((_d_month_seq3593 >= 1200) && (_d_month_seq3593 <= 1211))) && (_d_date_sk3590!= 0)) {
            int32_t _d_date_sk3590_t = tbl_SerializeFromObject_TD_7121252_input.getInt32(i, 0);
            tbl_Filter_TD_6736629_output.setInt32(r, 0, _d_date_sk3590_t);
            int32_t _d_date3592_t = tbl_SerializeFromObject_TD_7121252_input.getInt32(i, 1);
            tbl_Filter_TD_6736629_output.setInt32(r, 1, _d_date3592_t);
            r++;
        }
    }
    tbl_Filter_TD_6736629_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6736629_output #Row: " << tbl_Filter_TD_6736629_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6651659(Table &tbl_SerializeFromObject_TD_7121715_input, Table &tbl_Filter_TD_6651659_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_customer_sk#733)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7121715_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_7121715_input.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_7121715_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && (_ws_bill_customer_sk733!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_7121715_input.getInt32(i, 0);
            tbl_Filter_TD_6651659_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_7121715_input.getInt32(i, 1);
            tbl_Filter_TD_6651659_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_6651659_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6651659_output #Row: " << tbl_Filter_TD_6651659_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6449902_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_INNER_TD_6449902_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6449902_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6449902_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_INNER_TD_6449902_payload_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    int32_t _d_date3546;
};
struct SW_JOIN_INNER_TD_6449902_key_rightMajor {
    int32_t _c_customer_sk3572;
    bool operator==(const SW_JOIN_INNER_TD_6449902_key_rightMajor& other) const {
        return ((_c_customer_sk3572 == other._c_customer_sk3572));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6449902_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6449902_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3572));
    }
};
}
struct SW_JOIN_INNER_TD_6449902_payload_rightMajor {
    int32_t _c_customer_sk3572;
    std::string _c_first_name3580;
    std::string _c_last_name3581;
};
void SW_JOIN_INNER_TD_6449902(Table &tbl_JOIN_INNER_TD_7987939_output, Table &tbl_Filter_TD_71901_output, Table &tbl_JOIN_INNER_TD_6449902_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#3572))
    // Left Table: ListBuffer(cs_bill_customer_sk#1107, d_date#3546)
    // Right Table: ListBuffer(c_customer_sk#3572, c_first_name#3580, c_last_name#3581)
    // Output Table: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    int left_nrow = tbl_JOIN_INNER_TD_7987939_output.getNumRow();
    int right_nrow = tbl_Filter_TD_71901_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6449902_key_leftMajor, SW_JOIN_INNER_TD_6449902_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7987939_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7987939_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6449902_key_leftMajor keyA{_cs_bill_customer_sk1107_k};
            int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7987939_output.getInt32(i, 0);
            int32_t _d_date3546 = tbl_JOIN_INNER_TD_7987939_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6449902_payload_leftMajor payloadA{_cs_bill_customer_sk1107, _d_date3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_71901_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3572_k = tbl_Filter_TD_71901_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6449902_key_leftMajor{_c_customer_sk3572_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _d_date3546 = (it->second)._d_date3546;
                int32_t _c_customer_sk3572 = tbl_Filter_TD_71901_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Filter_TD_71901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Filter_TD_71901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
                tbl_JOIN_INNER_TD_6449902_output.setInt32(r, 2, _d_date3546);
                tbl_JOIN_INNER_TD_6449902_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_n);
                tbl_JOIN_INNER_TD_6449902_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6449902_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6449902_key_rightMajor, SW_JOIN_INNER_TD_6449902_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_71901_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3572_k = tbl_Filter_TD_71901_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6449902_key_rightMajor keyA{_c_customer_sk3572_k};
            int32_t _c_customer_sk3572 = tbl_Filter_TD_71901_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Filter_TD_71901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Filter_TD_71901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
            SW_JOIN_INNER_TD_6449902_payload_rightMajor payloadA{_c_customer_sk3572, _c_first_name3580, _c_last_name3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7987939_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7987939_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6449902_key_rightMajor{_cs_bill_customer_sk1107_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk3572 = (it->second)._c_customer_sk3572;
                std::string _c_first_name3580 = (it->second)._c_first_name3580;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n{};
                memcpy(_c_first_name3580_n.data(), (_c_first_name3580).data(), (_c_first_name3580).length());
                std::string _c_last_name3581 = (it->second)._c_last_name3581;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n{};
                memcpy(_c_last_name3581_n.data(), (_c_last_name3581).data(), (_c_last_name3581).length());
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7987939_output.getInt32(i, 0);
                int32_t _d_date3546 = tbl_JOIN_INNER_TD_7987939_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6449902_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580_n);
                tbl_JOIN_INNER_TD_6449902_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581_n);
                tbl_JOIN_INNER_TD_6449902_output.setInt32(r, 2, _d_date3546);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6449902_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6449902_output #Row: " << tbl_JOIN_INNER_TD_6449902_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6135963_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_6135963_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6135963_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6135963_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_6135963_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_6135963_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_6135963_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6135963_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6135963_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_6135963_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_6135963(Table &tbl_JOIN_INNER_TD_7158615_output, Table &tbl_Filter_TD_7196343_output, Table &tbl_JOIN_INNER_TD_6135963_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_customer_sk#1209, d_date#122)
    // Right Table: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_JOIN_INNER_TD_7158615_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7196343_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6135963_key_leftMajor, SW_JOIN_INNER_TD_6135963_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7158615_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7158615_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6135963_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7158615_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_7158615_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6135963_payload_leftMajor payloadA{_ss_customer_sk1209, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7196343_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7196343_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6135963_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _c_customer_sk0 = tbl_Filter_TD_7196343_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7196343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7196343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_6135963_output.setInt32(r, 2, _d_date122);
                tbl_JOIN_INNER_TD_6135963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6135963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6135963_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6135963_key_rightMajor, SW_JOIN_INNER_TD_6135963_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7196343_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7196343_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6135963_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_7196343_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7196343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7196343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_6135963_payload_rightMajor payloadA{_c_customer_sk0, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7158615_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7158615_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6135963_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7158615_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_7158615_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6135963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6135963_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_6135963_output.setInt32(r, 2, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6135963_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6135963_output #Row: " << tbl_JOIN_INNER_TD_6135963_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5323794(Table &tbl_SerializeFromObject_TD_653513_input, Table &tbl_Filter_TD_5323794_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3618))
    // Input: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    // Output: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_653513_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3618 = tbl_SerializeFromObject_TD_653513_input.getInt32(i, 0);
        if (_c_customer_sk3618!= 0) {
            int32_t _c_customer_sk3618_t = tbl_SerializeFromObject_TD_653513_input.getInt32(i, 0);
            tbl_Filter_TD_5323794_output.setInt32(r, 0, _c_customer_sk3618_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_t = tbl_SerializeFromObject_TD_653513_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5323794_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_t = tbl_SerializeFromObject_TD_653513_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5323794_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3627_t);
            r++;
        }
    }
    tbl_Filter_TD_5323794_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5323794_output #Row: " << tbl_Filter_TD_5323794_output.getNumRow() << std::endl;
}


struct SW_Aggregate_TD_5686133_key {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
    bool operator==(const SW_Aggregate_TD_5686133_key& other) const { return (_c_last_name3581 == other._c_last_name3581) && (_c_first_name3580 == other._c_first_name3580) && (_d_date3546 == other._d_date3546); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5686133_key> {
    std::size_t operator() (const SW_Aggregate_TD_5686133_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3581)) + (hash<string>()(k._c_first_name3580)) + (hash<int32_t>()(k._d_date3546));
    }
};
}
struct SW_Aggregate_TD_5686133_payload {
};
void SW_Aggregate_TD_5686133(Table &tbl_JOIN_INNER_TD_6449902_output, Table &tbl_Aggregate_TD_5686133_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Input: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Output: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    std::unordered_map<SW_Aggregate_TD_5686133_key, SW_Aggregate_TD_5686133_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6449902_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581 = tbl_JOIN_INNER_TD_6449902_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580 = tbl_JOIN_INNER_TD_6449902_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date3546 = tbl_JOIN_INNER_TD_6449902_output.getInt32(i, 2);
        SW_Aggregate_TD_5686133_key k{std::string(_c_last_name3581.data()), std::string(_c_first_name3580.data()), _d_date3546};
        SW_Aggregate_TD_5686133_payload p{};
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
        tbl_Aggregate_TD_5686133_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3581);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580{};
        memcpy(_c_first_name3580.data(), ((it.first)._c_first_name3580).data(), ((it.first)._c_first_name3580).length());
        tbl_Aggregate_TD_5686133_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3580);
        tbl_Aggregate_TD_5686133_output.setInt32(r, 2, (it.first)._d_date3546);
        ++r;
    }
    tbl_Aggregate_TD_5686133_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5686133_output #Row: " << tbl_Aggregate_TD_5686133_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5210836_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_5210836_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5210836_key> {
    std::size_t operator() (const SW_Aggregate_TD_5210836_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_5210836_payload {
};
void SW_Aggregate_TD_5210836(Table &tbl_JOIN_INNER_TD_6135963_output, Table &tbl_Aggregate_TD_5210836_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_5210836_key, SW_Aggregate_TD_5210836_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6135963_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_6135963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_6135963_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_INNER_TD_6135963_output.getInt32(i, 2);
        SW_Aggregate_TD_5210836_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_5210836_payload p{};
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
        tbl_Aggregate_TD_5210836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_5210836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_5210836_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_5210836_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5210836_output #Row: " << tbl_Aggregate_TD_5210836_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4382945_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_INNER_TD_4382945_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4382945_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4382945_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_INNER_TD_4382945_payload_leftMajor {
    int32_t _ws_bill_customer_sk733;
    int32_t _d_date3592;
};
struct SW_JOIN_INNER_TD_4382945_key_rightMajor {
    int32_t _c_customer_sk3618;
    bool operator==(const SW_JOIN_INNER_TD_4382945_key_rightMajor& other) const {
        return ((_c_customer_sk3618 == other._c_customer_sk3618));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4382945_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4382945_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3618));
    }
};
}
struct SW_JOIN_INNER_TD_4382945_payload_rightMajor {
    int32_t _c_customer_sk3618;
    std::string _c_first_name3626;
    std::string _c_last_name3627;
};
void SW_JOIN_INNER_TD_4382945(Table &tbl_JOIN_INNER_TD_5956612_output, Table &tbl_Filter_TD_5323794_output, Table &tbl_JOIN_INNER_TD_4382945_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#3618))
    // Left Table: ListBuffer(ws_bill_customer_sk#733, d_date#3592)
    // Right Table: ListBuffer(c_customer_sk#3618, c_first_name#3626, c_last_name#3627)
    // Output Table: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    int left_nrow = tbl_JOIN_INNER_TD_5956612_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5323794_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4382945_key_leftMajor, SW_JOIN_INNER_TD_4382945_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5956612_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5956612_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4382945_key_leftMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5956612_output.getInt32(i, 0);
            int32_t _d_date3592 = tbl_JOIN_INNER_TD_5956612_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4382945_payload_leftMajor payloadA{_ws_bill_customer_sk733, _d_date3592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5323794_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3618_k = tbl_Filter_TD_5323794_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4382945_key_leftMajor{_c_customer_sk3618_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date3592 = (it->second)._d_date3592;
                int32_t _c_customer_sk3618 = tbl_Filter_TD_5323794_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Filter_TD_5323794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Filter_TD_5323794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
                tbl_JOIN_INNER_TD_4382945_output.setInt32(r, 2, _d_date3592);
                tbl_JOIN_INNER_TD_4382945_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_n);
                tbl_JOIN_INNER_TD_4382945_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4382945_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4382945_key_rightMajor, SW_JOIN_INNER_TD_4382945_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5323794_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3618_k = tbl_Filter_TD_5323794_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4382945_key_rightMajor keyA{_c_customer_sk3618_k};
            int32_t _c_customer_sk3618 = tbl_Filter_TD_5323794_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Filter_TD_5323794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Filter_TD_5323794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
            SW_JOIN_INNER_TD_4382945_payload_rightMajor payloadA{_c_customer_sk3618, _c_first_name3626, _c_last_name3627};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5956612_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5956612_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4382945_key_rightMajor{_ws_bill_customer_sk733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk3618 = (it->second)._c_customer_sk3618;
                std::string _c_first_name3626 = (it->second)._c_first_name3626;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n{};
                memcpy(_c_first_name3626_n.data(), (_c_first_name3626).data(), (_c_first_name3626).length());
                std::string _c_last_name3627 = (it->second)._c_last_name3627;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n{};
                memcpy(_c_last_name3627_n.data(), (_c_last_name3627).data(), (_c_last_name3627).length());
                int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5956612_output.getInt32(i, 0);
                int32_t _d_date3592 = tbl_JOIN_INNER_TD_5956612_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4382945_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626_n);
                tbl_JOIN_INNER_TD_4382945_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627_n);
                tbl_JOIN_INNER_TD_4382945_output.setInt32(r, 2, _d_date3592);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4382945_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4382945_output #Row: " << tbl_JOIN_INNER_TD_4382945_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_4535172_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTANTI_TD_4535172_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_4535172_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_4535172_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_4535172_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTANTI_TD_4535172_key_rightMajor {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
    bool operator==(const SW_JOIN_LEFTANTI_TD_4535172_key_rightMajor& other) const {
        return ((_c_last_name3581 == other._c_last_name3581) && (_c_first_name3580 == other._c_first_name3580) && (_d_date3546 == other._d_date3546));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_4535172_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_4535172_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3581)) + (hash<string>()(k._c_first_name3580)) + (hash<int32_t>()(k._d_date3546));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_4535172_payload_rightMajor {
    std::string _c_last_name3581;
    std::string _c_first_name3580;
    int32_t _d_date3546;
};
void SW_JOIN_LEFTANTI_TD_4535172(Table &tbl_Aggregate_TD_5210836_output, Table &tbl_Aggregate_TD_5686133_output, Table &tbl_JOIN_LEFTANTI_TD_4535172_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#3581) AND (c_first_name#8 <=> c_first_name#3580)) AND (d_date#122 <=> d_date#3546)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#3581, c_first_name#3580, d_date#3546)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_5210836_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5686133_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_4535172_key_rightMajor, SW_JOIN_LEFTANTI_TD_4535172_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5686133_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_5210836_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_k_n = tbl_Aggregate_TD_5686133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3581_k = std::string(_c_last_name3581_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_k_n = tbl_Aggregate_TD_5686133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580_k = std::string(_c_first_name3580_k_n.data());
            int32_t _d_date3546_k = tbl_Aggregate_TD_5686133_output.getInt32(i, 2);
            SW_JOIN_LEFTANTI_TD_4535172_key_rightMajor keyA{_c_last_name3581_k, _c_first_name3580_k, _d_date3546_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3581_n = tbl_Aggregate_TD_5686133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3581 = std::string(_c_last_name3581_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3580_n = tbl_Aggregate_TD_5686133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3580 = std::string(_c_first_name3580_n.data());
            int32_t _d_date3546 = tbl_Aggregate_TD_5686133_output.getInt32(i, 2);
            SW_JOIN_LEFTANTI_TD_4535172_payload_rightMajor payloadA{_c_last_name3581, _c_first_name3580, _d_date3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_5210836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_5210836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_5210836_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_4535172_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it == ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_5210836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_5210836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_5210836_output.getInt32(i, 2);
                tbl_JOIN_LEFTANTI_TD_4535172_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTANTI_TD_4535172_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTANTI_TD_4535172_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTANTI_TD_4535172_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_4535172_output #Row: " << tbl_JOIN_LEFTANTI_TD_4535172_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3740660_key {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
    bool operator==(const SW_Aggregate_TD_3740660_key& other) const { return (_c_last_name3627 == other._c_last_name3627) && (_c_first_name3626 == other._c_first_name3626) && (_d_date3592 == other._d_date3592); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3740660_key> {
    std::size_t operator() (const SW_Aggregate_TD_3740660_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3627)) + (hash<string>()(k._c_first_name3626)) + (hash<int32_t>()(k._d_date3592));
    }
};
}
struct SW_Aggregate_TD_3740660_payload {
};
void SW_Aggregate_TD_3740660(Table &tbl_JOIN_INNER_TD_4382945_output, Table &tbl_Aggregate_TD_3740660_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Input: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Output: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    std::unordered_map<SW_Aggregate_TD_3740660_key, SW_Aggregate_TD_3740660_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4382945_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627 = tbl_JOIN_INNER_TD_4382945_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626 = tbl_JOIN_INNER_TD_4382945_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date3592 = tbl_JOIN_INNER_TD_4382945_output.getInt32(i, 2);
        SW_Aggregate_TD_3740660_key k{std::string(_c_last_name3627.data()), std::string(_c_first_name3626.data()), _d_date3592};
        SW_Aggregate_TD_3740660_payload p{};
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
        tbl_Aggregate_TD_3740660_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3627);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626{};
        memcpy(_c_first_name3626.data(), ((it.first)._c_first_name3626).data(), ((it.first)._c_first_name3626).length());
        tbl_Aggregate_TD_3740660_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3626);
        tbl_Aggregate_TD_3740660_output.setInt32(r, 2, (it.first)._d_date3592);
        ++r;
    }
    tbl_Aggregate_TD_3740660_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3740660_output #Row: " << tbl_Aggregate_TD_3740660_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_334750_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_334750_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_334750_key> {
    std::size_t operator() (const SW_Aggregate_TD_334750_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_334750_payload {
};
void SW_Aggregate_TD_334750(Table &tbl_JOIN_LEFTANTI_TD_4535172_output, Table &tbl_Aggregate_TD_334750_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_334750_key, SW_Aggregate_TD_334750_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTANTI_TD_4535172_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTANTI_TD_4535172_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTANTI_TD_4535172_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTANTI_TD_4535172_output.getInt32(i, 2);
        SW_Aggregate_TD_334750_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_334750_payload p{};
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
        tbl_Aggregate_TD_334750_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_334750_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_334750_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_334750_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_334750_output #Row: " << tbl_Aggregate_TD_334750_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_2781583_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTANTI_TD_2781583_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_2781583_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_2781583_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_2781583_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTANTI_TD_2781583_key_rightMajor {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
    bool operator==(const SW_JOIN_LEFTANTI_TD_2781583_key_rightMajor& other) const {
        return ((_c_last_name3627 == other._c_last_name3627) && (_c_first_name3626 == other._c_first_name3626) && (_d_date3592 == other._d_date3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_2781583_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_2781583_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3627)) + (hash<string>()(k._c_first_name3626)) + (hash<int32_t>()(k._d_date3592));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_2781583_payload_rightMajor {
    std::string _c_last_name3627;
    std::string _c_first_name3626;
    int32_t _d_date3592;
};
void SW_JOIN_LEFTANTI_TD_2781583(Table &tbl_Aggregate_TD_334750_output, Table &tbl_Aggregate_TD_3740660_output, Table &tbl_JOIN_LEFTANTI_TD_2781583_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#3627) AND (c_first_name#8 <=> c_first_name#3626)) AND (d_date#122 <=> d_date#3592)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#3627, c_first_name#3626, d_date#3592)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_334750_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3740660_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_2781583_key_rightMajor, SW_JOIN_LEFTANTI_TD_2781583_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3740660_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_334750_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_k_n = tbl_Aggregate_TD_3740660_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3627_k = std::string(_c_last_name3627_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_k_n = tbl_Aggregate_TD_3740660_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626_k = std::string(_c_first_name3626_k_n.data());
            int32_t _d_date3592_k = tbl_Aggregate_TD_3740660_output.getInt32(i, 2);
            SW_JOIN_LEFTANTI_TD_2781583_key_rightMajor keyA{_c_last_name3627_k, _c_first_name3626_k, _d_date3592_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3627_n = tbl_Aggregate_TD_3740660_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name3627 = std::string(_c_last_name3627_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3626_n = tbl_Aggregate_TD_3740660_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3626 = std::string(_c_first_name3626_n.data());
            int32_t _d_date3592 = tbl_Aggregate_TD_3740660_output.getInt32(i, 2);
            SW_JOIN_LEFTANTI_TD_2781583_payload_rightMajor payloadA{_c_last_name3627, _c_first_name3626, _d_date3592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_334750_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_334750_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_334750_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_2781583_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it == ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_334750_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_334750_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_334750_output.getInt32(i, 2);
                tbl_JOIN_LEFTANTI_TD_2781583_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTANTI_TD_2781583_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTANTI_TD_2781583_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTANTI_TD_2781583_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_2781583_output #Row: " << tbl_JOIN_LEFTANTI_TD_2781583_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1207379_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_1207379_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1207379_key> {
    std::size_t operator() (const SW_Aggregate_TD_1207379_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_1207379_payload {
};
void SW_Aggregate_TD_1207379(Table &tbl_JOIN_LEFTANTI_TD_2781583_output, Table &tbl_Aggregate_TD_1207379_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_1207379_key, SW_Aggregate_TD_1207379_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTANTI_TD_2781583_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTANTI_TD_2781583_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTANTI_TD_2781583_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTANTI_TD_2781583_output.getInt32(i, 2);
        SW_Aggregate_TD_1207379_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_1207379_payload p{};
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
        tbl_Aggregate_TD_1207379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_1207379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_1207379_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_1207379_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1207379_output #Row: " << tbl_Aggregate_TD_1207379_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_045007(Table &tbl_Aggregate_TD_1207379_output, Table &tbl_Aggregate_TD_045007_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3637L)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(count(1)#3637L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Aggregate_TD_1207379_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_1207379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_1207379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_Aggregate_TD_1207379_output.getInt32(i, 2);
        int64_t _count13637L_count_0 = 1;
        count_0 += _count13637L_count_0;
    }
    int r = 0;
    int64_t _count13637L = count_0;
    tbl_Aggregate_TD_045007_output.setInt64(r++, 0, _count13637L);
    tbl_Aggregate_TD_045007_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_045007_output #Row: " << tbl_Aggregate_TD_045007_output.getNumRow() << std::endl;
}

