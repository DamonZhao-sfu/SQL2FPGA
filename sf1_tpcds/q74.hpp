#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_1031933(Table &tbl_SerializeFromObject_TD_11808107_input, Table &tbl_Filter_TD_1031933_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#4909) AND isnotnull(ws_sold_date_sk#4905)))
    // Input: ListBuffer(ws_sold_date_sk#4905, ws_bill_customer_sk#4909, ws_net_paid#4934)
    // Output: ListBuffer(ws_sold_date_sk#4905, ws_bill_customer_sk#4909, ws_net_paid#4934)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11808107_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk4909 = tbl_SerializeFromObject_TD_11808107_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk4905 = tbl_SerializeFromObject_TD_11808107_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk4909!= 0) && (_ws_sold_date_sk4905!= 0)) {
            int32_t _ws_sold_date_sk4905_t = tbl_SerializeFromObject_TD_11808107_input.getInt32(i, 0);
            tbl_Filter_TD_1031933_output.setInt32(r, 0, _ws_sold_date_sk4905_t);
            int32_t _ws_bill_customer_sk4909_t = tbl_SerializeFromObject_TD_11808107_input.getInt32(i, 1);
            tbl_Filter_TD_1031933_output.setInt32(r, 1, _ws_bill_customer_sk4909_t);
            int64_t _ws_net_paid4934_t = tbl_SerializeFromObject_TD_11808107_input.getInt64(i, 2);
            tbl_Filter_TD_1031933_output.setInt64(r, 2, _ws_net_paid4934_t);
            r++;
        }
    }
    tbl_Filter_TD_1031933_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1031933_output #Row: " << tbl_Filter_TD_1031933_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10741733(Table &tbl_SerializeFromObject_TD_11102132_input, Table &tbl_Filter_TD_10741733_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#4887) AND isnotnull(c_customer_id#4888)))
    // Input: ListBuffer(c_customer_sk#4887, c_customer_id#4888, c_first_name#4895, c_last_name#4896)
    // Output: ListBuffer(c_customer_sk#4887, c_customer_id#4888, c_first_name#4895, c_last_name#4896)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11102132_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk4887 = tbl_SerializeFromObject_TD_11102132_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888 = tbl_SerializeFromObject_TD_11102132_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk4887!= 0) && (std::string(_c_customer_id4888.data()) != "NULL")) {
            int32_t _c_customer_sk4887_t = tbl_SerializeFromObject_TD_11102132_input.getInt32(i, 0);
            tbl_Filter_TD_10741733_output.setInt32(r, 0, _c_customer_sk4887_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888_t = tbl_SerializeFromObject_TD_11102132_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10741733_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id4888_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4895_t = tbl_SerializeFromObject_TD_11102132_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10741733_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name4895_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4896_t = tbl_SerializeFromObject_TD_11102132_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10741733_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name4896_t);
            r++;
        }
    }
    tbl_Filter_TD_10741733_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10741733_output #Row: " << tbl_Filter_TD_10741733_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10539841(Table &tbl_SerializeFromObject_TD_1188870_input, Table &tbl_Filter_TD_10539841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_net_paid#1226)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_net_paid#1226)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1188870_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_1188870_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_1188870_input.getInt32(i, 0);
        if ((_ss_customer_sk1209!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_1188870_input.getInt32(i, 0);
            tbl_Filter_TD_10539841_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_1188870_input.getInt32(i, 1);
            tbl_Filter_TD_10539841_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int64_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_1188870_input.getInt64(i, 2);
            tbl_Filter_TD_10539841_output.setInt64(r, 2, _ss_net_paid1226_t);
            r++;
        }
    }
    tbl_Filter_TD_10539841_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10539841_output #Row: " << tbl_Filter_TD_10539841_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10767588(Table &tbl_SerializeFromObject_TD_11392681_input, Table &tbl_Filter_TD_10767588_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_customer_id#1)))
    // Input: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11392681_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_11392681_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_SerializeFromObject_TD_11392681_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk0!= 0) && (std::string(_c_customer_id1.data()) != "NULL")) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_11392681_input.getInt32(i, 0);
            tbl_Filter_TD_10767588_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_11392681_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10767588_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_11392681_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10767588_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_11392681_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10767588_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_10767588_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10767588_output #Row: " << tbl_Filter_TD_10767588_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9261802(Table &tbl_SerializeFromObject_TD_10993185_input, Table &tbl_Filter_TD_9261802_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#4945) AND ((d_year#4945 = 2001) AND d_year#4945 IN (2001,2002))) AND isnotnull(d_date_sk#4939)))
    // Input: ListBuffer(d_date_sk#4939, d_year#4945)
    // Output: ListBuffer(d_date_sk#4939, d_year#4945)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10993185_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4945 = tbl_SerializeFromObject_TD_10993185_input.getInt32(i, 1);
        int32_t _d_date_sk4939 = tbl_SerializeFromObject_TD_10993185_input.getInt32(i, 0);
        auto reuse_col_str_122 = _d_year4945;
        if (((_d_year4945!= 0) && ((_d_year4945 == 2001) && ((reuse_col_str_122 == 2001) || (reuse_col_str_122 == 2002) || (0)))) && (_d_date_sk4939!= 0)) {
            int32_t _d_date_sk4939_t = tbl_SerializeFromObject_TD_10993185_input.getInt32(i, 0);
            tbl_Filter_TD_9261802_output.setInt32(r, 0, _d_date_sk4939_t);
            int32_t _d_year4945_t = tbl_SerializeFromObject_TD_10993185_input.getInt32(i, 1);
            tbl_Filter_TD_9261802_output.setInt32(r, 1, _d_year4945_t);
            r++;
        }
    }
    tbl_Filter_TD_9261802_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9261802_output #Row: " << tbl_Filter_TD_9261802_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9695983_key_leftMajor {
    int32_t _c_customer_sk4887;
    bool operator==(const SW_JOIN_INNER_TD_9695983_key_leftMajor& other) const {
        return ((_c_customer_sk4887 == other._c_customer_sk4887));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9695983_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9695983_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk4887));
    }
};
}
struct SW_JOIN_INNER_TD_9695983_payload_leftMajor {
    int32_t _c_customer_sk4887;
    std::string _c_customer_id4888;
    std::string _c_first_name4895;
    std::string _c_last_name4896;
};
struct SW_JOIN_INNER_TD_9695983_key_rightMajor {
    int32_t _ws_bill_customer_sk4909;
    bool operator==(const SW_JOIN_INNER_TD_9695983_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk4909 == other._ws_bill_customer_sk4909));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9695983_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9695983_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk4909));
    }
};
}
struct SW_JOIN_INNER_TD_9695983_payload_rightMajor {
    int32_t _ws_sold_date_sk4905;
    int32_t _ws_bill_customer_sk4909;
    int64_t _ws_net_paid4934;
};
void SW_JOIN_INNER_TD_9695983(Table &tbl_Filter_TD_10741733_output, Table &tbl_Filter_TD_1031933_output, Table &tbl_JOIN_INNER_TD_9695983_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#4887 = ws_bill_customer_sk#4909))
    // Left Table: ListBuffer(c_customer_sk#4887, c_customer_id#4888, c_first_name#4895, c_last_name#4896)
    // Right Table: ListBuffer(ws_sold_date_sk#4905, ws_bill_customer_sk#4909, ws_net_paid#4934)
    // Output Table: ListBuffer(c_customer_id#4888, c_first_name#4895, c_last_name#4896, ws_sold_date_sk#4905, ws_net_paid#4934)
    int left_nrow = tbl_Filter_TD_10741733_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1031933_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9695983_key_leftMajor, SW_JOIN_INNER_TD_9695983_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10741733_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk4887_k = tbl_Filter_TD_10741733_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9695983_key_leftMajor keyA{_c_customer_sk4887_k};
            int32_t _c_customer_sk4887 = tbl_Filter_TD_10741733_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888_n = tbl_Filter_TD_10741733_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id4888 = std::string(_c_customer_id4888_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4895_n = tbl_Filter_TD_10741733_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name4895 = std::string(_c_first_name4895_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4896_n = tbl_Filter_TD_10741733_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name4896 = std::string(_c_last_name4896_n.data());
            SW_JOIN_INNER_TD_9695983_payload_leftMajor payloadA{_c_customer_sk4887, _c_customer_id4888, _c_first_name4895, _c_last_name4896};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1031933_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk4909_k = tbl_Filter_TD_1031933_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9695983_key_leftMajor{_ws_bill_customer_sk4909_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk4887 = (it->second)._c_customer_sk4887;
                std::string _c_customer_id4888 = (it->second)._c_customer_id4888;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888_n{};
                memcpy(_c_customer_id4888_n.data(), (_c_customer_id4888).data(), (_c_customer_id4888).length());
                std::string _c_first_name4895 = (it->second)._c_first_name4895;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4895_n{};
                memcpy(_c_first_name4895_n.data(), (_c_first_name4895).data(), (_c_first_name4895).length());
                std::string _c_last_name4896 = (it->second)._c_last_name4896;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4896_n{};
                memcpy(_c_last_name4896_n.data(), (_c_last_name4896).data(), (_c_last_name4896).length());
                int32_t _ws_sold_date_sk4905 = tbl_Filter_TD_1031933_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk4909 = tbl_Filter_TD_1031933_output.getInt32(i, 1);
                int64_t _ws_net_paid4934 = tbl_Filter_TD_1031933_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_9695983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4888_n);
                tbl_JOIN_INNER_TD_9695983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4895_n);
                tbl_JOIN_INNER_TD_9695983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4896_n);
                tbl_JOIN_INNER_TD_9695983_output.setInt32(r, 3, _ws_sold_date_sk4905);
                tbl_JOIN_INNER_TD_9695983_output.setInt64(r, 4, _ws_net_paid4934);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9695983_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9695983_key_rightMajor, SW_JOIN_INNER_TD_9695983_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1031933_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk4909_k = tbl_Filter_TD_1031933_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9695983_key_rightMajor keyA{_ws_bill_customer_sk4909_k};
            int32_t _ws_sold_date_sk4905 = tbl_Filter_TD_1031933_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk4909 = tbl_Filter_TD_1031933_output.getInt32(i, 1);
            int64_t _ws_net_paid4934 = tbl_Filter_TD_1031933_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_9695983_payload_rightMajor payloadA{_ws_sold_date_sk4905, _ws_bill_customer_sk4909, _ws_net_paid4934};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10741733_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk4887_k = tbl_Filter_TD_10741733_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9695983_key_rightMajor{_c_customer_sk4887_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk4905 = (it->second)._ws_sold_date_sk4905;
                int32_t _ws_bill_customer_sk4909 = (it->second)._ws_bill_customer_sk4909;
                int64_t _ws_net_paid4934 = (it->second)._ws_net_paid4934;
                int32_t _c_customer_sk4887 = tbl_Filter_TD_10741733_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888_n = tbl_Filter_TD_10741733_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id4888 = std::string(_c_customer_id4888_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4895_n = tbl_Filter_TD_10741733_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name4895 = std::string(_c_first_name4895_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4896_n = tbl_Filter_TD_10741733_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name4896 = std::string(_c_last_name4896_n.data());
                tbl_JOIN_INNER_TD_9695983_output.setInt32(r, 3, _ws_sold_date_sk4905);
                tbl_JOIN_INNER_TD_9695983_output.setInt64(r, 4, _ws_net_paid4934);
                tbl_JOIN_INNER_TD_9695983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4888_n);
                tbl_JOIN_INNER_TD_9695983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4895_n);
                tbl_JOIN_INNER_TD_9695983_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4896_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9695983_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9695983_output #Row: " << tbl_JOIN_INNER_TD_9695983_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9181945(Table &tbl_SerializeFromObject_TD_10324686_input, Table &tbl_Filter_TD_9181945_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#4684) AND isnotnull(ss_sold_date_sk#4681)))
    // Input: ListBuffer(ss_sold_date_sk#4681, ss_customer_sk#4684, ss_net_paid#4701)
    // Output: ListBuffer(ss_sold_date_sk#4681, ss_customer_sk#4684, ss_net_paid#4701)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10324686_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk4684 = tbl_SerializeFromObject_TD_10324686_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk4681 = tbl_SerializeFromObject_TD_10324686_input.getInt32(i, 0);
        if ((_ss_customer_sk4684!= 0) && (_ss_sold_date_sk4681!= 0)) {
            int32_t _ss_sold_date_sk4681_t = tbl_SerializeFromObject_TD_10324686_input.getInt32(i, 0);
            tbl_Filter_TD_9181945_output.setInt32(r, 0, _ss_sold_date_sk4681_t);
            int32_t _ss_customer_sk4684_t = tbl_SerializeFromObject_TD_10324686_input.getInt32(i, 1);
            tbl_Filter_TD_9181945_output.setInt32(r, 1, _ss_customer_sk4684_t);
            int64_t _ss_net_paid4701_t = tbl_SerializeFromObject_TD_10324686_input.getInt64(i, 2);
            tbl_Filter_TD_9181945_output.setInt64(r, 2, _ss_net_paid4701_t);
            r++;
        }
    }
    tbl_Filter_TD_9181945_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9181945_output #Row: " << tbl_Filter_TD_9181945_output.getNumRow() << std::endl;
}

void SW_Filter_TD_942668(Table &tbl_SerializeFromObject_TD_10143973_input, Table &tbl_Filter_TD_942668_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#4663) AND isnotnull(c_customer_id#4664)))
    // Input: ListBuffer(c_customer_sk#4663, c_customer_id#4664, c_first_name#4671, c_last_name#4672)
    // Output: ListBuffer(c_customer_sk#4663, c_customer_id#4664, c_first_name#4671, c_last_name#4672)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10143973_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk4663 = tbl_SerializeFromObject_TD_10143973_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664 = tbl_SerializeFromObject_TD_10143973_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk4663!= 0) && (std::string(_c_customer_id4664.data()) != "NULL")) {
            int32_t _c_customer_sk4663_t = tbl_SerializeFromObject_TD_10143973_input.getInt32(i, 0);
            tbl_Filter_TD_942668_output.setInt32(r, 0, _c_customer_sk4663_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664_t = tbl_SerializeFromObject_TD_10143973_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_942668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id4664_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4671_t = tbl_SerializeFromObject_TD_10143973_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_942668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name4671_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4672_t = tbl_SerializeFromObject_TD_10143973_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_942668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name4672_t);
            r++;
        }
    }
    tbl_Filter_TD_942668_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_942668_output #Row: " << tbl_Filter_TD_942668_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9467190(Table &tbl_SerializeFromObject_TD_10515404_input, Table &tbl_Filter_TD_9467190_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 = 2001) AND d_year#126 IN (2001,2002))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10515404_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10515404_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10515404_input.getInt32(i, 0);
        auto reuse_col_str_930 = _d_year126;
        if (((_d_year126!= 0) && ((_d_year126 == 2001) && ((reuse_col_str_930 == 2001) || (reuse_col_str_930 == 2002) || (0)))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10515404_input.getInt32(i, 0);
            tbl_Filter_TD_9467190_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_10515404_input.getInt32(i, 1);
            tbl_Filter_TD_9467190_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_9467190_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9467190_output #Row: " << tbl_Filter_TD_9467190_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9509211_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_9509211_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9509211_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9509211_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_9509211_payload_leftMajor {
    int32_t _c_customer_sk0;
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
struct SW_JOIN_INNER_TD_9509211_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_9509211_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9509211_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9509211_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_9509211_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int64_t _ss_net_paid1226;
};
void SW_JOIN_INNER_TD_9509211(Table &tbl_Filter_TD_10767588_output, Table &tbl_Filter_TD_10539841_output, Table &tbl_JOIN_INNER_TD_9509211_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_net_paid#1226)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, ss_sold_date_sk#1206, ss_net_paid#1226)
    int left_nrow = tbl_Filter_TD_10767588_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10539841_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9509211_key_leftMajor, SW_JOIN_INNER_TD_9509211_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10767588_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10767588_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9509211_key_leftMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_10767588_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_10767588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_10767588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_10767588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_9509211_payload_leftMajor payloadA{_c_customer_sk0, _c_customer_id1, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10539841_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_10539841_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9509211_key_leftMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10539841_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_10539841_output.getInt32(i, 1);
                int64_t _ss_net_paid1226 = tbl_Filter_TD_10539841_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_9509211_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_9509211_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_9509211_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_9509211_output.setInt32(r, 3, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9509211_output.setInt64(r, 4, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9509211_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9509211_key_rightMajor, SW_JOIN_INNER_TD_9509211_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10539841_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_10539841_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9509211_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10539841_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_10539841_output.getInt32(i, 1);
            int64_t _ss_net_paid1226 = tbl_Filter_TD_10539841_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_9509211_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10767588_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10767588_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9509211_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int64_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _c_customer_sk0 = tbl_Filter_TD_10767588_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_10767588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_10767588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_10767588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_9509211_output.setInt32(r, 3, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9509211_output.setInt64(r, 4, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_9509211_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_9509211_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_9509211_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9509211_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9509211_output #Row: " << tbl_JOIN_INNER_TD_9509211_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8295190_key_leftMajor {
    int32_t _ws_sold_date_sk4905;
    bool operator==(const SW_JOIN_INNER_TD_8295190_key_leftMajor& other) const {
        return ((_ws_sold_date_sk4905 == other._ws_sold_date_sk4905));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8295190_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8295190_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk4905));
    }
};
}
struct SW_JOIN_INNER_TD_8295190_payload_leftMajor {
    std::string _c_customer_id4888;
    std::string _c_first_name4895;
    std::string _c_last_name4896;
    int32_t _ws_sold_date_sk4905;
    int64_t _ws_net_paid4934;
};
struct SW_JOIN_INNER_TD_8295190_key_rightMajor {
    int32_t _d_date_sk4939;
    bool operator==(const SW_JOIN_INNER_TD_8295190_key_rightMajor& other) const {
        return ((_d_date_sk4939 == other._d_date_sk4939));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8295190_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8295190_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4939));
    }
};
}
struct SW_JOIN_INNER_TD_8295190_payload_rightMajor {
    int32_t _d_date_sk4939;
    int32_t _d_year4945;
};
void SW_JOIN_INNER_TD_8295190(Table &tbl_JOIN_INNER_TD_9695983_output, Table &tbl_Filter_TD_9261802_output, Table &tbl_JOIN_INNER_TD_8295190_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#4905 = d_date_sk#4939))
    // Left Table: ListBuffer(c_customer_id#4888, c_first_name#4895, c_last_name#4896, ws_sold_date_sk#4905, ws_net_paid#4934)
    // Right Table: ListBuffer(d_date_sk#4939, d_year#4945)
    // Output Table: ListBuffer(c_customer_id#4888, c_first_name#4895, c_last_name#4896, ws_net_paid#4934, d_year#4945)
    int left_nrow = tbl_JOIN_INNER_TD_9695983_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9261802_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8295190_key_leftMajor, SW_JOIN_INNER_TD_8295190_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9695983_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk4905_k = tbl_JOIN_INNER_TD_9695983_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8295190_key_leftMajor keyA{_ws_sold_date_sk4905_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888_n = tbl_JOIN_INNER_TD_9695983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id4888 = std::string(_c_customer_id4888_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4895_n = tbl_JOIN_INNER_TD_9695983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name4895 = std::string(_c_first_name4895_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4896_n = tbl_JOIN_INNER_TD_9695983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name4896 = std::string(_c_last_name4896_n.data());
            int32_t _ws_sold_date_sk4905 = tbl_JOIN_INNER_TD_9695983_output.getInt32(i, 3);
            int64_t _ws_net_paid4934 = tbl_JOIN_INNER_TD_9695983_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_8295190_payload_leftMajor payloadA{_c_customer_id4888, _c_first_name4895, _c_last_name4896, _ws_sold_date_sk4905, _ws_net_paid4934};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9261802_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4939_k = tbl_Filter_TD_9261802_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8295190_key_leftMajor{_d_date_sk4939_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id4888 = (it->second)._c_customer_id4888;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888_n{};
                memcpy(_c_customer_id4888_n.data(), (_c_customer_id4888).data(), (_c_customer_id4888).length());
                std::string _c_first_name4895 = (it->second)._c_first_name4895;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4895_n{};
                memcpy(_c_first_name4895_n.data(), (_c_first_name4895).data(), (_c_first_name4895).length());
                std::string _c_last_name4896 = (it->second)._c_last_name4896;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4896_n{};
                memcpy(_c_last_name4896_n.data(), (_c_last_name4896).data(), (_c_last_name4896).length());
                int32_t _ws_sold_date_sk4905 = (it->second)._ws_sold_date_sk4905;
                int64_t _ws_net_paid4934 = (it->second)._ws_net_paid4934;
                int32_t _d_date_sk4939 = tbl_Filter_TD_9261802_output.getInt32(i, 0);
                int32_t _d_year4945 = tbl_Filter_TD_9261802_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8295190_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4888_n);
                tbl_JOIN_INNER_TD_8295190_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4895_n);
                tbl_JOIN_INNER_TD_8295190_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4896_n);
                tbl_JOIN_INNER_TD_8295190_output.setInt64(r, 3, _ws_net_paid4934);
                tbl_JOIN_INNER_TD_8295190_output.setInt32(r, 4, _d_year4945);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8295190_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8295190_key_rightMajor, SW_JOIN_INNER_TD_8295190_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9261802_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4939_k = tbl_Filter_TD_9261802_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8295190_key_rightMajor keyA{_d_date_sk4939_k};
            int32_t _d_date_sk4939 = tbl_Filter_TD_9261802_output.getInt32(i, 0);
            int32_t _d_year4945 = tbl_Filter_TD_9261802_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8295190_payload_rightMajor payloadA{_d_date_sk4939, _d_year4945};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9695983_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk4905_k = tbl_JOIN_INNER_TD_9695983_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8295190_key_rightMajor{_ws_sold_date_sk4905_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4939 = (it->second)._d_date_sk4939;
                int32_t _d_year4945 = (it->second)._d_year4945;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888_n = tbl_JOIN_INNER_TD_9695983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id4888 = std::string(_c_customer_id4888_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4895_n = tbl_JOIN_INNER_TD_9695983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name4895 = std::string(_c_first_name4895_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4896_n = tbl_JOIN_INNER_TD_9695983_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name4896 = std::string(_c_last_name4896_n.data());
                int32_t _ws_sold_date_sk4905 = tbl_JOIN_INNER_TD_9695983_output.getInt32(i, 3);
                int64_t _ws_net_paid4934 = tbl_JOIN_INNER_TD_9695983_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_8295190_output.setInt32(r, 4, _d_year4945);
                tbl_JOIN_INNER_TD_8295190_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4888_n);
                tbl_JOIN_INNER_TD_8295190_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4895_n);
                tbl_JOIN_INNER_TD_8295190_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4896_n);
                tbl_JOIN_INNER_TD_8295190_output.setInt64(r, 3, _ws_net_paid4934);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8295190_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8295190_output #Row: " << tbl_JOIN_INNER_TD_8295190_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8262205(Table &tbl_SerializeFromObject_TD_91725_input, Table &tbl_Filter_TD_8262205_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#4710) AND ((d_year#4710 = 2002) AND d_year#4710 IN (2001,2002))) AND isnotnull(d_date_sk#4704)))
    // Input: ListBuffer(d_date_sk#4704, d_year#4710)
    // Output: ListBuffer(d_date_sk#4704, d_year#4710)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_91725_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4710 = tbl_SerializeFromObject_TD_91725_input.getInt32(i, 1);
        int32_t _d_date_sk4704 = tbl_SerializeFromObject_TD_91725_input.getInt32(i, 0);
        auto reuse_col_str_443 = _d_year4710;
        if (((_d_year4710!= 0) && ((_d_year4710 == 2002) && ((reuse_col_str_443 == 2001) || (reuse_col_str_443 == 2002) || (0)))) && (_d_date_sk4704!= 0)) {
            int32_t _d_date_sk4704_t = tbl_SerializeFromObject_TD_91725_input.getInt32(i, 0);
            tbl_Filter_TD_8262205_output.setInt32(r, 0, _d_date_sk4704_t);
            int32_t _d_year4710_t = tbl_SerializeFromObject_TD_91725_input.getInt32(i, 1);
            tbl_Filter_TD_8262205_output.setInt32(r, 1, _d_year4710_t);
            r++;
        }
    }
    tbl_Filter_TD_8262205_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8262205_output #Row: " << tbl_Filter_TD_8262205_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8389446_key_leftMajor {
    int32_t _c_customer_sk4663;
    bool operator==(const SW_JOIN_INNER_TD_8389446_key_leftMajor& other) const {
        return ((_c_customer_sk4663 == other._c_customer_sk4663));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8389446_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8389446_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk4663));
    }
};
}
struct SW_JOIN_INNER_TD_8389446_payload_leftMajor {
    int32_t _c_customer_sk4663;
    std::string _c_customer_id4664;
    std::string _c_first_name4671;
    std::string _c_last_name4672;
};
struct SW_JOIN_INNER_TD_8389446_key_rightMajor {
    int32_t _ss_customer_sk4684;
    bool operator==(const SW_JOIN_INNER_TD_8389446_key_rightMajor& other) const {
        return ((_ss_customer_sk4684 == other._ss_customer_sk4684));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8389446_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8389446_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk4684));
    }
};
}
struct SW_JOIN_INNER_TD_8389446_payload_rightMajor {
    int32_t _ss_sold_date_sk4681;
    int32_t _ss_customer_sk4684;
    int64_t _ss_net_paid4701;
};
void SW_JOIN_INNER_TD_8389446(Table &tbl_Filter_TD_942668_output, Table &tbl_Filter_TD_9181945_output, Table &tbl_JOIN_INNER_TD_8389446_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#4663 = ss_customer_sk#4684))
    // Left Table: ListBuffer(c_customer_sk#4663, c_customer_id#4664, c_first_name#4671, c_last_name#4672)
    // Right Table: ListBuffer(ss_sold_date_sk#4681, ss_customer_sk#4684, ss_net_paid#4701)
    // Output Table: ListBuffer(c_customer_id#4664, c_first_name#4671, c_last_name#4672, ss_sold_date_sk#4681, ss_net_paid#4701)
    int left_nrow = tbl_Filter_TD_942668_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9181945_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8389446_key_leftMajor, SW_JOIN_INNER_TD_8389446_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_942668_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk4663_k = tbl_Filter_TD_942668_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8389446_key_leftMajor keyA{_c_customer_sk4663_k};
            int32_t _c_customer_sk4663 = tbl_Filter_TD_942668_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664_n = tbl_Filter_TD_942668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id4664 = std::string(_c_customer_id4664_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4671_n = tbl_Filter_TD_942668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name4671 = std::string(_c_first_name4671_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4672_n = tbl_Filter_TD_942668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name4672 = std::string(_c_last_name4672_n.data());
            SW_JOIN_INNER_TD_8389446_payload_leftMajor payloadA{_c_customer_sk4663, _c_customer_id4664, _c_first_name4671, _c_last_name4672};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9181945_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk4684_k = tbl_Filter_TD_9181945_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8389446_key_leftMajor{_ss_customer_sk4684_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk4663 = (it->second)._c_customer_sk4663;
                std::string _c_customer_id4664 = (it->second)._c_customer_id4664;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664_n{};
                memcpy(_c_customer_id4664_n.data(), (_c_customer_id4664).data(), (_c_customer_id4664).length());
                std::string _c_first_name4671 = (it->second)._c_first_name4671;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4671_n{};
                memcpy(_c_first_name4671_n.data(), (_c_first_name4671).data(), (_c_first_name4671).length());
                std::string _c_last_name4672 = (it->second)._c_last_name4672;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4672_n{};
                memcpy(_c_last_name4672_n.data(), (_c_last_name4672).data(), (_c_last_name4672).length());
                int32_t _ss_sold_date_sk4681 = tbl_Filter_TD_9181945_output.getInt32(i, 0);
                int32_t _ss_customer_sk4684 = tbl_Filter_TD_9181945_output.getInt32(i, 1);
                int64_t _ss_net_paid4701 = tbl_Filter_TD_9181945_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_8389446_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4664_n);
                tbl_JOIN_INNER_TD_8389446_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4671_n);
                tbl_JOIN_INNER_TD_8389446_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4672_n);
                tbl_JOIN_INNER_TD_8389446_output.setInt32(r, 3, _ss_sold_date_sk4681);
                tbl_JOIN_INNER_TD_8389446_output.setInt64(r, 4, _ss_net_paid4701);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8389446_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8389446_key_rightMajor, SW_JOIN_INNER_TD_8389446_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9181945_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk4684_k = tbl_Filter_TD_9181945_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8389446_key_rightMajor keyA{_ss_customer_sk4684_k};
            int32_t _ss_sold_date_sk4681 = tbl_Filter_TD_9181945_output.getInt32(i, 0);
            int32_t _ss_customer_sk4684 = tbl_Filter_TD_9181945_output.getInt32(i, 1);
            int64_t _ss_net_paid4701 = tbl_Filter_TD_9181945_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_8389446_payload_rightMajor payloadA{_ss_sold_date_sk4681, _ss_customer_sk4684, _ss_net_paid4701};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_942668_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk4663_k = tbl_Filter_TD_942668_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8389446_key_rightMajor{_c_customer_sk4663_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk4681 = (it->second)._ss_sold_date_sk4681;
                int32_t _ss_customer_sk4684 = (it->second)._ss_customer_sk4684;
                int64_t _ss_net_paid4701 = (it->second)._ss_net_paid4701;
                int32_t _c_customer_sk4663 = tbl_Filter_TD_942668_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664_n = tbl_Filter_TD_942668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id4664 = std::string(_c_customer_id4664_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4671_n = tbl_Filter_TD_942668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name4671 = std::string(_c_first_name4671_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4672_n = tbl_Filter_TD_942668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name4672 = std::string(_c_last_name4672_n.data());
                tbl_JOIN_INNER_TD_8389446_output.setInt32(r, 3, _ss_sold_date_sk4681);
                tbl_JOIN_INNER_TD_8389446_output.setInt64(r, 4, _ss_net_paid4701);
                tbl_JOIN_INNER_TD_8389446_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4664_n);
                tbl_JOIN_INNER_TD_8389446_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4671_n);
                tbl_JOIN_INNER_TD_8389446_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4672_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8389446_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8389446_output #Row: " << tbl_JOIN_INNER_TD_8389446_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8433237_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8433237_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8433237_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8433237_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8433237_payload_leftMajor {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    int32_t _ss_sold_date_sk1206;
    int64_t _ss_net_paid1226;
};
struct SW_JOIN_INNER_TD_8433237_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8433237_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8433237_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8433237_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8433237_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_8433237(Table &tbl_JOIN_INNER_TD_9509211_output, Table &tbl_Filter_TD_9467190_output, Table &tbl_JOIN_INNER_TD_8433237_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, ss_sold_date_sk#1206, ss_net_paid#1226)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, ss_net_paid#1226, d_year#126)
    int left_nrow = tbl_JOIN_INNER_TD_9509211_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9467190_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8433237_key_leftMajor, SW_JOIN_INNER_TD_8433237_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9509211_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9509211_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8433237_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_9509211_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_9509211_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_9509211_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9509211_output.getInt32(i, 3);
            int64_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_9509211_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_8433237_payload_leftMajor payloadA{_c_customer_id1, _c_first_name8, _c_last_name9, _ss_sold_date_sk1206, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9467190_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9467190_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8433237_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int64_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _d_date_sk120 = tbl_Filter_TD_9467190_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_9467190_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8433237_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_8433237_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_8433237_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_8433237_output.setInt64(r, 3, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_8433237_output.setInt32(r, 4, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8433237_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8433237_key_rightMajor, SW_JOIN_INNER_TD_8433237_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9467190_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9467190_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8433237_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9467190_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_9467190_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8433237_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9509211_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9509211_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8433237_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_9509211_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_9509211_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_9509211_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9509211_output.getInt32(i, 3);
                int64_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_9509211_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_8433237_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_8433237_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_8433237_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_8433237_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_8433237_output.setInt64(r, 3, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8433237_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8433237_output #Row: " << tbl_JOIN_INNER_TD_8433237_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7968160(Table &tbl_SerializeFromObject_TD_8532321_input, Table &tbl_Filter_TD_7968160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#5064) AND isnotnull(ws_sold_date_sk#5060)))
    // Input: ListBuffer(ws_sold_date_sk#5060, ws_bill_customer_sk#5064, ws_net_paid#5089)
    // Output: ListBuffer(ws_sold_date_sk#5060, ws_bill_customer_sk#5064, ws_net_paid#5089)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8532321_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk5064 = tbl_SerializeFromObject_TD_8532321_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk5060 = tbl_SerializeFromObject_TD_8532321_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk5064!= 0) && (_ws_sold_date_sk5060!= 0)) {
            int32_t _ws_sold_date_sk5060_t = tbl_SerializeFromObject_TD_8532321_input.getInt32(i, 0);
            tbl_Filter_TD_7968160_output.setInt32(r, 0, _ws_sold_date_sk5060_t);
            int32_t _ws_bill_customer_sk5064_t = tbl_SerializeFromObject_TD_8532321_input.getInt32(i, 1);
            tbl_Filter_TD_7968160_output.setInt32(r, 1, _ws_bill_customer_sk5064_t);
            int64_t _ws_net_paid5089_t = tbl_SerializeFromObject_TD_8532321_input.getInt64(i, 2);
            tbl_Filter_TD_7968160_output.setInt64(r, 2, _ws_net_paid5089_t);
            r++;
        }
    }
    tbl_Filter_TD_7968160_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7968160_output #Row: " << tbl_Filter_TD_7968160_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7101571(Table &tbl_SerializeFromObject_TD_8387293_input, Table &tbl_Filter_TD_7101571_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#5042) AND isnotnull(c_customer_id#5043)))
    // Input: ListBuffer(c_customer_sk#5042, c_customer_id#5043, c_first_name#5050, c_last_name#5051)
    // Output: ListBuffer(c_customer_sk#5042, c_customer_id#5043, c_first_name#5050, c_last_name#5051)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8387293_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk5042 = tbl_SerializeFromObject_TD_8387293_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043 = tbl_SerializeFromObject_TD_8387293_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk5042!= 0) && (std::string(_c_customer_id5043.data()) != "NULL")) {
            int32_t _c_customer_sk5042_t = tbl_SerializeFromObject_TD_8387293_input.getInt32(i, 0);
            tbl_Filter_TD_7101571_output.setInt32(r, 0, _c_customer_sk5042_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043_t = tbl_SerializeFromObject_TD_8387293_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7101571_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id5043_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5050_t = tbl_SerializeFromObject_TD_8387293_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7101571_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name5050_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5051_t = tbl_SerializeFromObject_TD_8387293_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_7101571_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name5051_t);
            r++;
        }
    }
    tbl_Filter_TD_7101571_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7101571_output #Row: " << tbl_Filter_TD_7101571_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_763186_key {
    std::string _c_customer_id4888;
    std::string _c_first_name4895;
    std::string _c_last_name4896;
    int32_t _d_year4945;
    bool operator==(const SW_Aggregate_TD_763186_key& other) const { return (_c_customer_id4888 == other._c_customer_id4888) && (_c_first_name4895 == other._c_first_name4895) && (_c_last_name4896 == other._c_last_name4896) && (_d_year4945 == other._d_year4945); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_763186_key> {
    std::size_t operator() (const SW_Aggregate_TD_763186_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id4888)) + (hash<string>()(k._c_first_name4895)) + (hash<string>()(k._c_last_name4896)) + (hash<int32_t>()(k._d_year4945));
    }
};
}
struct SW_Aggregate_TD_763186_payload {
    std::string _customer_id3550;
    int64_t _year_total3554_sum_0;
};
void SW_Aggregate_TD_763186(Table &tbl_JOIN_INNER_TD_8295190_output, Table &tbl_Aggregate_TD_763186_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#4888, c_first_name#4895, c_last_name#4896, d_year#4945, c_customer_id#4888 AS customer_id#3550, MakeDecimal(sum(UnscaledValue(ws_net_paid#4934)),17,2) AS year_total#3554)
    // Input: ListBuffer(c_customer_id#4888, c_first_name#4895, c_last_name#4896, ws_net_paid#4934, d_year#4945)
    // Output: ListBuffer(customer_id#3550, year_total#3554)
    std::unordered_map<SW_Aggregate_TD_763186_key, SW_Aggregate_TD_763186_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8295190_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4888 = tbl_JOIN_INNER_TD_8295190_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name4895 = tbl_JOIN_INNER_TD_8295190_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name4896 = tbl_JOIN_INNER_TD_8295190_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _ws_net_paid4934 = tbl_JOIN_INNER_TD_8295190_output.getInt64(i, 3);
        int32_t _d_year4945 = tbl_JOIN_INNER_TD_8295190_output.getInt32(i, 4);
        SW_Aggregate_TD_763186_key k{std::string(_c_customer_id4888.data()), std::string(_c_first_name4895.data()), std::string(_c_last_name4896.data()), _d_year4945};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3550 = _c_customer_id4888;
        int64_t _year_total3554_sum_0 = _ws_net_paid4934;
        SW_Aggregate_TD_763186_payload p{std::string(_customer_id3550.data()), _year_total3554_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._year_total3554_sum_0 + _year_total3554_sum_0;
            p._year_total3554_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id4888 not required in the output table
        // _c_first_name4895 not required in the output table
        // _c_last_name4896 not required in the output table
        // _d_year4945 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3550_n{};
        memcpy(_customer_id3550_n.data(), (it.second)._customer_id3550.data(), (it.second)._customer_id3550.length());
        tbl_Aggregate_TD_763186_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3550_n);
        int64_t _year_total3554 = (it.second)._year_total3554_sum_0;
        tbl_Aggregate_TD_763186_output.setInt64(r, 1, _year_total3554);
        ++r;
    }
    tbl_Aggregate_TD_763186_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_763186_output #Row: " << tbl_Aggregate_TD_763186_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7178507_key_leftMajor {
    int32_t _ss_sold_date_sk4681;
    bool operator==(const SW_JOIN_INNER_TD_7178507_key_leftMajor& other) const {
        return ((_ss_sold_date_sk4681 == other._ss_sold_date_sk4681));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7178507_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7178507_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk4681));
    }
};
}
struct SW_JOIN_INNER_TD_7178507_payload_leftMajor {
    std::string _c_customer_id4664;
    std::string _c_first_name4671;
    std::string _c_last_name4672;
    int32_t _ss_sold_date_sk4681;
    int64_t _ss_net_paid4701;
};
struct SW_JOIN_INNER_TD_7178507_key_rightMajor {
    int32_t _d_date_sk4704;
    bool operator==(const SW_JOIN_INNER_TD_7178507_key_rightMajor& other) const {
        return ((_d_date_sk4704 == other._d_date_sk4704));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7178507_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7178507_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4704));
    }
};
}
struct SW_JOIN_INNER_TD_7178507_payload_rightMajor {
    int32_t _d_date_sk4704;
    int32_t _d_year4710;
};
void SW_JOIN_INNER_TD_7178507(Table &tbl_JOIN_INNER_TD_8389446_output, Table &tbl_Filter_TD_8262205_output, Table &tbl_JOIN_INNER_TD_7178507_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#4681 = d_date_sk#4704))
    // Left Table: ListBuffer(c_customer_id#4664, c_first_name#4671, c_last_name#4672, ss_sold_date_sk#4681, ss_net_paid#4701)
    // Right Table: ListBuffer(d_date_sk#4704, d_year#4710)
    // Output Table: ListBuffer(c_customer_id#4664, c_first_name#4671, c_last_name#4672, ss_net_paid#4701, d_year#4710)
    int left_nrow = tbl_JOIN_INNER_TD_8389446_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8262205_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7178507_key_leftMajor, SW_JOIN_INNER_TD_7178507_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8389446_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk4681_k = tbl_JOIN_INNER_TD_8389446_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7178507_key_leftMajor keyA{_ss_sold_date_sk4681_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664_n = tbl_JOIN_INNER_TD_8389446_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id4664 = std::string(_c_customer_id4664_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4671_n = tbl_JOIN_INNER_TD_8389446_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name4671 = std::string(_c_first_name4671_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4672_n = tbl_JOIN_INNER_TD_8389446_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name4672 = std::string(_c_last_name4672_n.data());
            int32_t _ss_sold_date_sk4681 = tbl_JOIN_INNER_TD_8389446_output.getInt32(i, 3);
            int64_t _ss_net_paid4701 = tbl_JOIN_INNER_TD_8389446_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_7178507_payload_leftMajor payloadA{_c_customer_id4664, _c_first_name4671, _c_last_name4672, _ss_sold_date_sk4681, _ss_net_paid4701};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8262205_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4704_k = tbl_Filter_TD_8262205_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7178507_key_leftMajor{_d_date_sk4704_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id4664 = (it->second)._c_customer_id4664;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664_n{};
                memcpy(_c_customer_id4664_n.data(), (_c_customer_id4664).data(), (_c_customer_id4664).length());
                std::string _c_first_name4671 = (it->second)._c_first_name4671;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4671_n{};
                memcpy(_c_first_name4671_n.data(), (_c_first_name4671).data(), (_c_first_name4671).length());
                std::string _c_last_name4672 = (it->second)._c_last_name4672;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4672_n{};
                memcpy(_c_last_name4672_n.data(), (_c_last_name4672).data(), (_c_last_name4672).length());
                int32_t _ss_sold_date_sk4681 = (it->second)._ss_sold_date_sk4681;
                int64_t _ss_net_paid4701 = (it->second)._ss_net_paid4701;
                int32_t _d_date_sk4704 = tbl_Filter_TD_8262205_output.getInt32(i, 0);
                int32_t _d_year4710 = tbl_Filter_TD_8262205_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7178507_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4664_n);
                tbl_JOIN_INNER_TD_7178507_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4671_n);
                tbl_JOIN_INNER_TD_7178507_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4672_n);
                tbl_JOIN_INNER_TD_7178507_output.setInt64(r, 3, _ss_net_paid4701);
                tbl_JOIN_INNER_TD_7178507_output.setInt32(r, 4, _d_year4710);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7178507_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7178507_key_rightMajor, SW_JOIN_INNER_TD_7178507_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8262205_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4704_k = tbl_Filter_TD_8262205_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7178507_key_rightMajor keyA{_d_date_sk4704_k};
            int32_t _d_date_sk4704 = tbl_Filter_TD_8262205_output.getInt32(i, 0);
            int32_t _d_year4710 = tbl_Filter_TD_8262205_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7178507_payload_rightMajor payloadA{_d_date_sk4704, _d_year4710};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8389446_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk4681_k = tbl_JOIN_INNER_TD_8389446_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7178507_key_rightMajor{_ss_sold_date_sk4681_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4704 = (it->second)._d_date_sk4704;
                int32_t _d_year4710 = (it->second)._d_year4710;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664_n = tbl_JOIN_INNER_TD_8389446_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id4664 = std::string(_c_customer_id4664_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4671_n = tbl_JOIN_INNER_TD_8389446_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name4671 = std::string(_c_first_name4671_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4672_n = tbl_JOIN_INNER_TD_8389446_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name4672 = std::string(_c_last_name4672_n.data());
                int32_t _ss_sold_date_sk4681 = tbl_JOIN_INNER_TD_8389446_output.getInt32(i, 3);
                int64_t _ss_net_paid4701 = tbl_JOIN_INNER_TD_8389446_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_7178507_output.setInt32(r, 4, _d_year4710);
                tbl_JOIN_INNER_TD_7178507_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4664_n);
                tbl_JOIN_INNER_TD_7178507_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4671_n);
                tbl_JOIN_INNER_TD_7178507_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4672_n);
                tbl_JOIN_INNER_TD_7178507_output.setInt64(r, 3, _ss_net_paid4701);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7178507_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7178507_output #Row: " << tbl_JOIN_INNER_TD_7178507_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7257614_key {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    int32_t _d_year126;
    bool operator==(const SW_Aggregate_TD_7257614_key& other) const { return (_c_customer_id1 == other._c_customer_id1) && (_c_first_name8 == other._c_first_name8) && (_c_last_name9 == other._c_last_name9) && (_d_year126 == other._d_year126); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7257614_key> {
    std::size_t operator() (const SW_Aggregate_TD_7257614_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id1)) + (hash<string>()(k._c_first_name8)) + (hash<string>()(k._c_last_name9)) + (hash<int32_t>()(k._d_year126));
    }
};
}
struct SW_Aggregate_TD_7257614_payload {
    std::string _customer_id3544;
    int64_t _year_total3548_sum_0;
};
void SW_Aggregate_TD_7257614(Table &tbl_JOIN_INNER_TD_8433237_output, Table &tbl_Aggregate_TD_7257614_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, d_year#126, c_customer_id#1 AS customer_id#3544, MakeDecimal(sum(UnscaledValue(ss_net_paid#1226)),17,2) AS year_total#3548)
    // Input: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, ss_net_paid#1226, d_year#126)
    // Output: ListBuffer(customer_id#3544, year_total#3548)
    std::unordered_map<SW_Aggregate_TD_7257614_key, SW_Aggregate_TD_7257614_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8433237_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_8433237_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_8433237_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_8433237_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_8433237_output.getInt64(i, 3);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_8433237_output.getInt32(i, 4);
        SW_Aggregate_TD_7257614_key k{std::string(_c_customer_id1.data()), std::string(_c_first_name8.data()), std::string(_c_last_name9.data()), _d_year126};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3544 = _c_customer_id1;
        int64_t _year_total3548_sum_0 = _ss_net_paid1226;
        SW_Aggregate_TD_7257614_payload p{std::string(_customer_id3544.data()), _year_total3548_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._year_total3548_sum_0 + _year_total3548_sum_0;
            p._year_total3548_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id1 not required in the output table
        // _c_first_name8 not required in the output table
        // _c_last_name9 not required in the output table
        // _d_year126 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n{};
        memcpy(_customer_id3544_n.data(), (it.second)._customer_id3544.data(), (it.second)._customer_id3544.length());
        tbl_Aggregate_TD_7257614_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3544_n);
        int64_t _year_total3548 = (it.second)._year_total3548_sum_0;
        tbl_Aggregate_TD_7257614_output.setInt64(r, 1, _year_total3548);
        ++r;
    }
    tbl_Aggregate_TD_7257614_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7257614_output #Row: " << tbl_Aggregate_TD_7257614_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6779394(Table &tbl_SerializeFromObject_TD_7635570_input, Table &tbl_Filter_TD_6779394_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#5100) AND ((d_year#5100 = 2002) AND d_year#5100 IN (2001,2002))) AND isnotnull(d_date_sk#5094)))
    // Input: ListBuffer(d_date_sk#5094, d_year#5100)
    // Output: ListBuffer(d_date_sk#5094, d_year#5100)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7635570_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5100 = tbl_SerializeFromObject_TD_7635570_input.getInt32(i, 1);
        int32_t _d_date_sk5094 = tbl_SerializeFromObject_TD_7635570_input.getInt32(i, 0);
        auto reuse_col_str_943 = _d_year5100;
        if (((_d_year5100!= 0) && ((_d_year5100 == 2002) && ((reuse_col_str_943 == 2001) || (reuse_col_str_943 == 2002) || (0)))) && (_d_date_sk5094!= 0)) {
            int32_t _d_date_sk5094_t = tbl_SerializeFromObject_TD_7635570_input.getInt32(i, 0);
            tbl_Filter_TD_6779394_output.setInt32(r, 0, _d_date_sk5094_t);
            int32_t _d_year5100_t = tbl_SerializeFromObject_TD_7635570_input.getInt32(i, 1);
            tbl_Filter_TD_6779394_output.setInt32(r, 1, _d_year5100_t);
            r++;
        }
    }
    tbl_Filter_TD_6779394_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6779394_output #Row: " << tbl_Filter_TD_6779394_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6168417_key_leftMajor {
    int32_t _c_customer_sk5042;
    bool operator==(const SW_JOIN_INNER_TD_6168417_key_leftMajor& other) const {
        return ((_c_customer_sk5042 == other._c_customer_sk5042));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6168417_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6168417_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk5042));
    }
};
}
struct SW_JOIN_INNER_TD_6168417_payload_leftMajor {
    int32_t _c_customer_sk5042;
    std::string _c_customer_id5043;
    std::string _c_first_name5050;
    std::string _c_last_name5051;
};
struct SW_JOIN_INNER_TD_6168417_key_rightMajor {
    int32_t _ws_bill_customer_sk5064;
    bool operator==(const SW_JOIN_INNER_TD_6168417_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk5064 == other._ws_bill_customer_sk5064));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6168417_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6168417_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk5064));
    }
};
}
struct SW_JOIN_INNER_TD_6168417_payload_rightMajor {
    int32_t _ws_sold_date_sk5060;
    int32_t _ws_bill_customer_sk5064;
    int64_t _ws_net_paid5089;
};
void SW_JOIN_INNER_TD_6168417(Table &tbl_Filter_TD_7101571_output, Table &tbl_Filter_TD_7968160_output, Table &tbl_JOIN_INNER_TD_6168417_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#5042 = ws_bill_customer_sk#5064))
    // Left Table: ListBuffer(c_customer_sk#5042, c_customer_id#5043, c_first_name#5050, c_last_name#5051)
    // Right Table: ListBuffer(ws_sold_date_sk#5060, ws_bill_customer_sk#5064, ws_net_paid#5089)
    // Output Table: ListBuffer(c_customer_id#5043, c_first_name#5050, c_last_name#5051, ws_sold_date_sk#5060, ws_net_paid#5089)
    int left_nrow = tbl_Filter_TD_7101571_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7968160_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6168417_key_leftMajor, SW_JOIN_INNER_TD_6168417_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7101571_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk5042_k = tbl_Filter_TD_7101571_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6168417_key_leftMajor keyA{_c_customer_sk5042_k};
            int32_t _c_customer_sk5042 = tbl_Filter_TD_7101571_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043_n = tbl_Filter_TD_7101571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id5043 = std::string(_c_customer_id5043_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5050_n = tbl_Filter_TD_7101571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name5050 = std::string(_c_first_name5050_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5051_n = tbl_Filter_TD_7101571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name5051 = std::string(_c_last_name5051_n.data());
            SW_JOIN_INNER_TD_6168417_payload_leftMajor payloadA{_c_customer_sk5042, _c_customer_id5043, _c_first_name5050, _c_last_name5051};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7968160_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk5064_k = tbl_Filter_TD_7968160_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6168417_key_leftMajor{_ws_bill_customer_sk5064_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk5042 = (it->second)._c_customer_sk5042;
                std::string _c_customer_id5043 = (it->second)._c_customer_id5043;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043_n{};
                memcpy(_c_customer_id5043_n.data(), (_c_customer_id5043).data(), (_c_customer_id5043).length());
                std::string _c_first_name5050 = (it->second)._c_first_name5050;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5050_n{};
                memcpy(_c_first_name5050_n.data(), (_c_first_name5050).data(), (_c_first_name5050).length());
                std::string _c_last_name5051 = (it->second)._c_last_name5051;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5051_n{};
                memcpy(_c_last_name5051_n.data(), (_c_last_name5051).data(), (_c_last_name5051).length());
                int32_t _ws_sold_date_sk5060 = tbl_Filter_TD_7968160_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk5064 = tbl_Filter_TD_7968160_output.getInt32(i, 1);
                int64_t _ws_net_paid5089 = tbl_Filter_TD_7968160_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_6168417_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5043_n);
                tbl_JOIN_INNER_TD_6168417_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5050_n);
                tbl_JOIN_INNER_TD_6168417_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5051_n);
                tbl_JOIN_INNER_TD_6168417_output.setInt32(r, 3, _ws_sold_date_sk5060);
                tbl_JOIN_INNER_TD_6168417_output.setInt64(r, 4, _ws_net_paid5089);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6168417_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6168417_key_rightMajor, SW_JOIN_INNER_TD_6168417_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7968160_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk5064_k = tbl_Filter_TD_7968160_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6168417_key_rightMajor keyA{_ws_bill_customer_sk5064_k};
            int32_t _ws_sold_date_sk5060 = tbl_Filter_TD_7968160_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk5064 = tbl_Filter_TD_7968160_output.getInt32(i, 1);
            int64_t _ws_net_paid5089 = tbl_Filter_TD_7968160_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_6168417_payload_rightMajor payloadA{_ws_sold_date_sk5060, _ws_bill_customer_sk5064, _ws_net_paid5089};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7101571_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk5042_k = tbl_Filter_TD_7101571_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6168417_key_rightMajor{_c_customer_sk5042_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk5060 = (it->second)._ws_sold_date_sk5060;
                int32_t _ws_bill_customer_sk5064 = (it->second)._ws_bill_customer_sk5064;
                int64_t _ws_net_paid5089 = (it->second)._ws_net_paid5089;
                int32_t _c_customer_sk5042 = tbl_Filter_TD_7101571_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043_n = tbl_Filter_TD_7101571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id5043 = std::string(_c_customer_id5043_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5050_n = tbl_Filter_TD_7101571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name5050 = std::string(_c_first_name5050_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5051_n = tbl_Filter_TD_7101571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name5051 = std::string(_c_last_name5051_n.data());
                tbl_JOIN_INNER_TD_6168417_output.setInt32(r, 3, _ws_sold_date_sk5060);
                tbl_JOIN_INNER_TD_6168417_output.setInt64(r, 4, _ws_net_paid5089);
                tbl_JOIN_INNER_TD_6168417_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5043_n);
                tbl_JOIN_INNER_TD_6168417_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5050_n);
                tbl_JOIN_INNER_TD_6168417_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5051_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6168417_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6168417_output #Row: " << tbl_JOIN_INNER_TD_6168417_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6563405(Table &tbl_Aggregate_TD_763186_output, Table &tbl_Filter_TD_6563405_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#3554) AND (year_total#3554 > 0.00)))
    // Input: ListBuffer(customer_id#3550, year_total#3554)
    // Output: ListBuffer(customer_id#3550, year_total#3554)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_763186_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _year_total3554 = tbl_Aggregate_TD_763186_output.getInt64(i, 1);
        if ((_year_total3554!= 0) && (_year_total3554 > 0.00)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3550_t = tbl_Aggregate_TD_763186_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6563405_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3550_t);
            int64_t _year_total3554_t = tbl_Aggregate_TD_763186_output.getInt64(i, 1);
            tbl_Filter_TD_6563405_output.setInt64(r, 1, _year_total3554_t);
            r++;
        }
    }
    tbl_Filter_TD_6563405_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6563405_output #Row: " << tbl_Filter_TD_6563405_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6564_key {
    std::string _c_customer_id4664;
    std::string _c_first_name4671;
    std::string _c_last_name4672;
    int32_t _d_year4710;
    bool operator==(const SW_Aggregate_TD_6564_key& other) const { return (_c_customer_id4664 == other._c_customer_id4664) && (_c_first_name4671 == other._c_first_name4671) && (_c_last_name4672 == other._c_last_name4672) && (_d_year4710 == other._d_year4710); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6564_key> {
    std::size_t operator() (const SW_Aggregate_TD_6564_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id4664)) + (hash<string>()(k._c_first_name4671)) + (hash<string>()(k._c_last_name4672)) + (hash<int32_t>()(k._d_year4710));
    }
};
}
struct SW_Aggregate_TD_6564_payload {
    std::string _customer_id3604;
    std::string _customer_first_name3605;
    std::string _customer_last_name3606;
    int64_t _year_total3608_sum_0;
};
void SW_Aggregate_TD_6564(Table &tbl_JOIN_INNER_TD_7178507_output, Table &tbl_Aggregate_TD_6564_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#4664, c_first_name#4671, c_last_name#4672, d_year#4710, c_customer_id#4664 AS customer_id#3604, c_first_name#4671 AS customer_first_name#3605, c_last_name#4672 AS customer_last_name#3606, MakeDecimal(sum(UnscaledValue(ss_net_paid#4701)),17,2) AS year_total#3608)
    // Input: ListBuffer(c_customer_id#4664, c_first_name#4671, c_last_name#4672, ss_net_paid#4701, d_year#4710)
    // Output: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606, year_total#3608)
    std::unordered_map<SW_Aggregate_TD_6564_key, SW_Aggregate_TD_6564_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7178507_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4664 = tbl_JOIN_INNER_TD_7178507_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name4671 = tbl_JOIN_INNER_TD_7178507_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name4672 = tbl_JOIN_INNER_TD_7178507_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _ss_net_paid4701 = tbl_JOIN_INNER_TD_7178507_output.getInt64(i, 3);
        int32_t _d_year4710 = tbl_JOIN_INNER_TD_7178507_output.getInt32(i, 4);
        SW_Aggregate_TD_6564_key k{std::string(_c_customer_id4664.data()), std::string(_c_first_name4671.data()), std::string(_c_last_name4672.data()), _d_year4710};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3604 = _c_customer_id4664;
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605 = _c_first_name4671;
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606 = _c_last_name4672;
        int64_t _year_total3608_sum_0 = _ss_net_paid4701;
        SW_Aggregate_TD_6564_payload p{std::string(_customer_id3604.data()), std::string(_customer_first_name3605.data()), std::string(_customer_last_name3606.data()), _year_total3608_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._year_total3608_sum_0 + _year_total3608_sum_0;
            p._year_total3608_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id4664 not required in the output table
        // _c_first_name4671 not required in the output table
        // _c_last_name4672 not required in the output table
        // _d_year4710 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n{};
        memcpy(_customer_id3604_n.data(), (it.second)._customer_id3604.data(), (it.second)._customer_id3604.length());
        tbl_Aggregate_TD_6564_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3604_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n{};
        memcpy(_customer_first_name3605_n.data(), (it.second)._customer_first_name3605.data(), (it.second)._customer_first_name3605.length());
        tbl_Aggregate_TD_6564_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3605_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n{};
        memcpy(_customer_last_name3606_n.data(), (it.second)._customer_last_name3606.data(), (it.second)._customer_last_name3606.length());
        tbl_Aggregate_TD_6564_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3606_n);
        int64_t _year_total3608 = (it.second)._year_total3608_sum_0;
        tbl_Aggregate_TD_6564_output.setInt64(r, 3, _year_total3608);
        ++r;
    }
    tbl_Aggregate_TD_6564_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6564_output #Row: " << tbl_Aggregate_TD_6564_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6630367(Table &tbl_Aggregate_TD_7257614_output, Table &tbl_Filter_TD_6630367_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#3548) AND (year_total#3548 > 0.00)))
    // Input: ListBuffer(customer_id#3544, year_total#3548)
    // Output: ListBuffer(customer_id#3544, year_total#3548)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7257614_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _year_total3548 = tbl_Aggregate_TD_7257614_output.getInt64(i, 1);
        if ((_year_total3548!= 0) && (_year_total3548 > 0.00)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_t = tbl_Aggregate_TD_7257614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6630367_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3544_t);
            int64_t _year_total3548_t = tbl_Aggregate_TD_7257614_output.getInt64(i, 1);
            tbl_Filter_TD_6630367_output.setInt64(r, 1, _year_total3548_t);
            r++;
        }
    }
    tbl_Filter_TD_6630367_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6630367_output #Row: " << tbl_Filter_TD_6630367_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5681857_key_leftMajor {
    int32_t _ws_sold_date_sk5060;
    bool operator==(const SW_JOIN_INNER_TD_5681857_key_leftMajor& other) const {
        return ((_ws_sold_date_sk5060 == other._ws_sold_date_sk5060));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5681857_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5681857_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk5060));
    }
};
}
struct SW_JOIN_INNER_TD_5681857_payload_leftMajor {
    std::string _c_customer_id5043;
    std::string _c_first_name5050;
    std::string _c_last_name5051;
    int32_t _ws_sold_date_sk5060;
    int64_t _ws_net_paid5089;
};
struct SW_JOIN_INNER_TD_5681857_key_rightMajor {
    int32_t _d_date_sk5094;
    bool operator==(const SW_JOIN_INNER_TD_5681857_key_rightMajor& other) const {
        return ((_d_date_sk5094 == other._d_date_sk5094));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5681857_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5681857_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5094));
    }
};
}
struct SW_JOIN_INNER_TD_5681857_payload_rightMajor {
    int32_t _d_date_sk5094;
    int32_t _d_year5100;
};
void SW_JOIN_INNER_TD_5681857(Table &tbl_JOIN_INNER_TD_6168417_output, Table &tbl_Filter_TD_6779394_output, Table &tbl_JOIN_INNER_TD_5681857_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#5060 = d_date_sk#5094))
    // Left Table: ListBuffer(c_customer_id#5043, c_first_name#5050, c_last_name#5051, ws_sold_date_sk#5060, ws_net_paid#5089)
    // Right Table: ListBuffer(d_date_sk#5094, d_year#5100)
    // Output Table: ListBuffer(c_customer_id#5043, c_first_name#5050, c_last_name#5051, ws_net_paid#5089, d_year#5100)
    int left_nrow = tbl_JOIN_INNER_TD_6168417_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6779394_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5681857_key_leftMajor, SW_JOIN_INNER_TD_5681857_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6168417_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk5060_k = tbl_JOIN_INNER_TD_6168417_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_5681857_key_leftMajor keyA{_ws_sold_date_sk5060_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043_n = tbl_JOIN_INNER_TD_6168417_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id5043 = std::string(_c_customer_id5043_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5050_n = tbl_JOIN_INNER_TD_6168417_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name5050 = std::string(_c_first_name5050_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5051_n = tbl_JOIN_INNER_TD_6168417_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name5051 = std::string(_c_last_name5051_n.data());
            int32_t _ws_sold_date_sk5060 = tbl_JOIN_INNER_TD_6168417_output.getInt32(i, 3);
            int64_t _ws_net_paid5089 = tbl_JOIN_INNER_TD_6168417_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_5681857_payload_leftMajor payloadA{_c_customer_id5043, _c_first_name5050, _c_last_name5051, _ws_sold_date_sk5060, _ws_net_paid5089};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6779394_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5094_k = tbl_Filter_TD_6779394_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5681857_key_leftMajor{_d_date_sk5094_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id5043 = (it->second)._c_customer_id5043;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043_n{};
                memcpy(_c_customer_id5043_n.data(), (_c_customer_id5043).data(), (_c_customer_id5043).length());
                std::string _c_first_name5050 = (it->second)._c_first_name5050;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5050_n{};
                memcpy(_c_first_name5050_n.data(), (_c_first_name5050).data(), (_c_first_name5050).length());
                std::string _c_last_name5051 = (it->second)._c_last_name5051;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5051_n{};
                memcpy(_c_last_name5051_n.data(), (_c_last_name5051).data(), (_c_last_name5051).length());
                int32_t _ws_sold_date_sk5060 = (it->second)._ws_sold_date_sk5060;
                int64_t _ws_net_paid5089 = (it->second)._ws_net_paid5089;
                int32_t _d_date_sk5094 = tbl_Filter_TD_6779394_output.getInt32(i, 0);
                int32_t _d_year5100 = tbl_Filter_TD_6779394_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5681857_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5043_n);
                tbl_JOIN_INNER_TD_5681857_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5050_n);
                tbl_JOIN_INNER_TD_5681857_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5051_n);
                tbl_JOIN_INNER_TD_5681857_output.setInt64(r, 3, _ws_net_paid5089);
                tbl_JOIN_INNER_TD_5681857_output.setInt32(r, 4, _d_year5100);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5681857_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5681857_key_rightMajor, SW_JOIN_INNER_TD_5681857_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6779394_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5094_k = tbl_Filter_TD_6779394_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5681857_key_rightMajor keyA{_d_date_sk5094_k};
            int32_t _d_date_sk5094 = tbl_Filter_TD_6779394_output.getInt32(i, 0);
            int32_t _d_year5100 = tbl_Filter_TD_6779394_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5681857_payload_rightMajor payloadA{_d_date_sk5094, _d_year5100};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6168417_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk5060_k = tbl_JOIN_INNER_TD_6168417_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5681857_key_rightMajor{_ws_sold_date_sk5060_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5094 = (it->second)._d_date_sk5094;
                int32_t _d_year5100 = (it->second)._d_year5100;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043_n = tbl_JOIN_INNER_TD_6168417_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id5043 = std::string(_c_customer_id5043_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5050_n = tbl_JOIN_INNER_TD_6168417_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name5050 = std::string(_c_first_name5050_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5051_n = tbl_JOIN_INNER_TD_6168417_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name5051 = std::string(_c_last_name5051_n.data());
                int32_t _ws_sold_date_sk5060 = tbl_JOIN_INNER_TD_6168417_output.getInt32(i, 3);
                int64_t _ws_net_paid5089 = tbl_JOIN_INNER_TD_6168417_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_5681857_output.setInt32(r, 4, _d_year5100);
                tbl_JOIN_INNER_TD_5681857_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5043_n);
                tbl_JOIN_INNER_TD_5681857_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5050_n);
                tbl_JOIN_INNER_TD_5681857_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5051_n);
                tbl_JOIN_INNER_TD_5681857_output.setInt64(r, 3, _ws_net_paid5089);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5681857_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5681857_output #Row: " << tbl_JOIN_INNER_TD_5681857_output.getNumRow() << std::endl;
}

void SW_Project_TD_5904404(Table &tbl_Filter_TD_6563405_output, Table &tbl_Project_TD_5904404_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(customer_id#3550 AS customer_id#4967, year_total#3554 AS year_total#4971)
    // Input: ListBuffer(customer_id#3550, year_total#3554)
    // Output: ListBuffer(customer_id#4967, year_total#4971)
    int nrow1 = tbl_Filter_TD_6563405_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3550 = tbl_Filter_TD_6563405_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int64_t _year_total3554 = tbl_Filter_TD_6563405_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4967 = _customer_id3550;
        tbl_Project_TD_5904404_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id4967);
        int64_t _year_total4971 = _year_total3554;
        tbl_Project_TD_5904404_output.setInt64(i, 1, _year_total4971);
    }
    tbl_Project_TD_5904404_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5904404_output #Row: " << tbl_Project_TD_5904404_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5729656_key_leftMajor {
    std::string _customer_id3544;
    bool operator==(const SW_JOIN_INNER_TD_5729656_key_leftMajor& other) const {
        return ((_customer_id3544 == other._customer_id3544));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5729656_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5729656_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3544));
    }
};
}
struct SW_JOIN_INNER_TD_5729656_payload_leftMajor {
    std::string _customer_id3544;
    int64_t _year_total3548;
};
struct SW_JOIN_INNER_TD_5729656_key_rightMajor {
    std::string _customer_id3604;
    bool operator==(const SW_JOIN_INNER_TD_5729656_key_rightMajor& other) const {
        return ((_customer_id3604 == other._customer_id3604));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5729656_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5729656_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3604));
    }
};
}
struct SW_JOIN_INNER_TD_5729656_payload_rightMajor {
    std::string _customer_id3604;
    std::string _customer_first_name3605;
    std::string _customer_last_name3606;
    int64_t _year_total3608;
};
void SW_JOIN_INNER_TD_5729656(Table &tbl_Filter_TD_6630367_output, Table &tbl_Aggregate_TD_6564_output, Table &tbl_JOIN_INNER_TD_5729656_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#3604 = customer_id#3544))
    // Left Table: ListBuffer(customer_id#3544, year_total#3548)
    // Right Table: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606, year_total#3608)
    // Output Table: ListBuffer(customer_id#3544, year_total#3548, customer_id#3604, customer_first_name#3605, customer_last_name#3606, year_total#3608)
    int left_nrow = tbl_Filter_TD_6630367_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6564_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5729656_key_leftMajor, SW_JOIN_INNER_TD_5729656_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6630367_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_k_n = tbl_Filter_TD_6630367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544_k = std::string(_customer_id3544_k_n.data());
            SW_JOIN_INNER_TD_5729656_key_leftMajor keyA{_customer_id3544_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n = tbl_Filter_TD_6630367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544 = std::string(_customer_id3544_n.data());
            int64_t _year_total3548 = tbl_Filter_TD_6630367_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_5729656_payload_leftMajor payloadA{_customer_id3544, _year_total3548};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6564_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_k_n = tbl_Aggregate_TD_6564_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3604_k = std::string(_customer_id3604_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5729656_key_leftMajor{_customer_id3604_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3544 = (it->second)._customer_id3544;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n{};
                memcpy(_customer_id3544_n.data(), (_customer_id3544).data(), (_customer_id3544).length());
                int64_t _year_total3548 = (it->second)._year_total3548;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n = tbl_Aggregate_TD_6564_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3604 = std::string(_customer_id3604_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n = tbl_Aggregate_TD_6564_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_first_name3605 = std::string(_customer_first_name3605_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n = tbl_Aggregate_TD_6564_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_last_name3606 = std::string(_customer_last_name3606_n.data());
                int64_t _year_total3608 = tbl_Aggregate_TD_6564_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_5729656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3544_n);
                tbl_JOIN_INNER_TD_5729656_output.setInt64(r, 1, _year_total3548);
                tbl_JOIN_INNER_TD_5729656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id3604_n);
                tbl_JOIN_INNER_TD_5729656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name3605_n);
                tbl_JOIN_INNER_TD_5729656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name3606_n);
                tbl_JOIN_INNER_TD_5729656_output.setInt64(r, 5, _year_total3608);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5729656_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5729656_key_rightMajor, SW_JOIN_INNER_TD_5729656_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6564_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_k_n = tbl_Aggregate_TD_6564_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3604_k = std::string(_customer_id3604_k_n.data());
            SW_JOIN_INNER_TD_5729656_key_rightMajor keyA{_customer_id3604_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n = tbl_Aggregate_TD_6564_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3604 = std::string(_customer_id3604_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n = tbl_Aggregate_TD_6564_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_first_name3605 = std::string(_customer_first_name3605_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n = tbl_Aggregate_TD_6564_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_last_name3606 = std::string(_customer_last_name3606_n.data());
            int64_t _year_total3608 = tbl_Aggregate_TD_6564_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_5729656_payload_rightMajor payloadA{_customer_id3604, _customer_first_name3605, _customer_last_name3606, _year_total3608};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6630367_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_k_n = tbl_Filter_TD_6630367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544_k = std::string(_customer_id3544_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5729656_key_rightMajor{_customer_id3544_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3604 = (it->second)._customer_id3604;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n{};
                memcpy(_customer_id3604_n.data(), (_customer_id3604).data(), (_customer_id3604).length());
                std::string _customer_first_name3605 = (it->second)._customer_first_name3605;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n{};
                memcpy(_customer_first_name3605_n.data(), (_customer_first_name3605).data(), (_customer_first_name3605).length());
                std::string _customer_last_name3606 = (it->second)._customer_last_name3606;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n{};
                memcpy(_customer_last_name3606_n.data(), (_customer_last_name3606).data(), (_customer_last_name3606).length());
                int64_t _year_total3608 = (it->second)._year_total3608;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n = tbl_Filter_TD_6630367_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3544 = std::string(_customer_id3544_n.data());
                int64_t _year_total3548 = tbl_Filter_TD_6630367_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_5729656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id3604_n);
                tbl_JOIN_INNER_TD_5729656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name3605_n);
                tbl_JOIN_INNER_TD_5729656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name3606_n);
                tbl_JOIN_INNER_TD_5729656_output.setInt64(r, 5, _year_total3608);
                tbl_JOIN_INNER_TD_5729656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3544_n);
                tbl_JOIN_INNER_TD_5729656_output.setInt64(r, 1, _year_total3548);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5729656_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5729656_output #Row: " << tbl_JOIN_INNER_TD_5729656_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4370616_key {
    std::string _c_customer_id5043;
    std::string _c_first_name5050;
    std::string _c_last_name5051;
    int32_t _d_year5100;
    bool operator==(const SW_Aggregate_TD_4370616_key& other) const { return (_c_customer_id5043 == other._c_customer_id5043) && (_c_first_name5050 == other._c_first_name5050) && (_c_last_name5051 == other._c_last_name5051) && (_d_year5100 == other._d_year5100); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4370616_key> {
    std::size_t operator() (const SW_Aggregate_TD_4370616_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id5043)) + (hash<string>()(k._c_first_name5050)) + (hash<string>()(k._c_last_name5051)) + (hash<int32_t>()(k._d_year5100));
    }
};
}
struct SW_Aggregate_TD_4370616_payload {
    std::string _customer_id3616;
    int64_t _year_total3620_sum_0;
};
void SW_Aggregate_TD_4370616(Table &tbl_JOIN_INNER_TD_5681857_output, Table &tbl_Aggregate_TD_4370616_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#5043, c_first_name#5050, c_last_name#5051, d_year#5100, c_customer_id#5043 AS customer_id#3616, MakeDecimal(sum(UnscaledValue(ws_net_paid#5089)),17,2) AS year_total#3620)
    // Input: ListBuffer(c_customer_id#5043, c_first_name#5050, c_last_name#5051, ws_net_paid#5089, d_year#5100)
    // Output: ListBuffer(customer_id#3616, year_total#3620)
    std::unordered_map<SW_Aggregate_TD_4370616_key, SW_Aggregate_TD_4370616_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5681857_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5043 = tbl_JOIN_INNER_TD_5681857_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name5050 = tbl_JOIN_INNER_TD_5681857_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name5051 = tbl_JOIN_INNER_TD_5681857_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _ws_net_paid5089 = tbl_JOIN_INNER_TD_5681857_output.getInt64(i, 3);
        int32_t _d_year5100 = tbl_JOIN_INNER_TD_5681857_output.getInt32(i, 4);
        SW_Aggregate_TD_4370616_key k{std::string(_c_customer_id5043.data()), std::string(_c_first_name5050.data()), std::string(_c_last_name5051.data()), _d_year5100};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3616 = _c_customer_id5043;
        int64_t _year_total3620_sum_0 = _ws_net_paid5089;
        SW_Aggregate_TD_4370616_payload p{std::string(_customer_id3616.data()), _year_total3620_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._year_total3620_sum_0 + _year_total3620_sum_0;
            p._year_total3620_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id5043 not required in the output table
        // _c_first_name5050 not required in the output table
        // _c_last_name5051 not required in the output table
        // _d_year5100 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3616_n{};
        memcpy(_customer_id3616_n.data(), (it.second)._customer_id3616.data(), (it.second)._customer_id3616.length());
        tbl_Aggregate_TD_4370616_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3616_n);
        int64_t _year_total3620 = (it.second)._year_total3620_sum_0;
        tbl_Aggregate_TD_4370616_output.setInt64(r, 1, _year_total3620);
        ++r;
    }
    tbl_Aggregate_TD_4370616_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4370616_output #Row: " << tbl_Aggregate_TD_4370616_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4885302_key_leftMajor {
    std::string _customer_id3544;
    bool operator==(const SW_JOIN_INNER_TD_4885302_key_leftMajor& other) const {
        return ((_customer_id3544 == other._customer_id3544));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4885302_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4885302_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3544));
    }
};
}
struct SW_JOIN_INNER_TD_4885302_payload_leftMajor {
    std::string _customer_id3544;
    int64_t _year_total3548;
    std::string _customer_id3604;
    std::string _customer_first_name3605;
    std::string _customer_last_name3606;
    int64_t _year_total3608;
};
struct SW_JOIN_INNER_TD_4885302_key_rightMajor {
    std::string _customer_id4967;
    bool operator==(const SW_JOIN_INNER_TD_4885302_key_rightMajor& other) const {
        return ((_customer_id4967 == other._customer_id4967));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4885302_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4885302_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4967));
    }
};
}
struct SW_JOIN_INNER_TD_4885302_payload_rightMajor {
    std::string _customer_id4967;
    int64_t _year_total4971;
};
void SW_JOIN_INNER_TD_4885302(Table &tbl_JOIN_INNER_TD_5729656_output, Table &tbl_Project_TD_5904404_output, Table &tbl_JOIN_INNER_TD_4885302_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#3544 = customer_id#4967))
    // Left Table: ListBuffer(customer_id#3544, year_total#3548, customer_id#3604, customer_first_name#3605, customer_last_name#3606, year_total#3608)
    // Right Table: ListBuffer(customer_id#4967, year_total#4971)
    // Output Table: ListBuffer(customer_id#3544, year_total#3548, customer_id#3604, customer_first_name#3605, customer_last_name#3606, year_total#3608, year_total#4971)
    int left_nrow = tbl_JOIN_INNER_TD_5729656_output.getNumRow();
    int right_nrow = tbl_Project_TD_5904404_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4885302_key_leftMajor, SW_JOIN_INNER_TD_4885302_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5729656_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_k_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544_k = std::string(_customer_id3544_k_n.data());
            SW_JOIN_INNER_TD_4885302_key_leftMajor keyA{_customer_id3544_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544 = std::string(_customer_id3544_n.data());
            int64_t _year_total3548 = tbl_JOIN_INNER_TD_5729656_output.getInt64(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id3604 = std::string(_customer_id3604_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name3605 = std::string(_customer_first_name3605_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name3606 = std::string(_customer_last_name3606_n.data());
            int64_t _year_total3608 = tbl_JOIN_INNER_TD_5729656_output.getInt64(i, 5);
            SW_JOIN_INNER_TD_4885302_payload_leftMajor payloadA{_customer_id3544, _year_total3548, _customer_id3604, _customer_first_name3605, _customer_last_name3606, _year_total3608};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5904404_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4967_k_n = tbl_Project_TD_5904404_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4967_k = std::string(_customer_id4967_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4885302_key_leftMajor{_customer_id4967_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3544 = (it->second)._customer_id3544;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n{};
                memcpy(_customer_id3544_n.data(), (_customer_id3544).data(), (_customer_id3544).length());
                int64_t _year_total3548 = (it->second)._year_total3548;
                std::string _customer_id3604 = (it->second)._customer_id3604;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n{};
                memcpy(_customer_id3604_n.data(), (_customer_id3604).data(), (_customer_id3604).length());
                std::string _customer_first_name3605 = (it->second)._customer_first_name3605;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n{};
                memcpy(_customer_first_name3605_n.data(), (_customer_first_name3605).data(), (_customer_first_name3605).length());
                std::string _customer_last_name3606 = (it->second)._customer_last_name3606;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n{};
                memcpy(_customer_last_name3606_n.data(), (_customer_last_name3606).data(), (_customer_last_name3606).length());
                int64_t _year_total3608 = (it->second)._year_total3608;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4967_n = tbl_Project_TD_5904404_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4967 = std::string(_customer_id4967_n.data());
                int64_t _year_total4971 = tbl_Project_TD_5904404_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_4885302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3544_n);
                tbl_JOIN_INNER_TD_4885302_output.setInt64(r, 1, _year_total3548);
                tbl_JOIN_INNER_TD_4885302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id3604_n);
                tbl_JOIN_INNER_TD_4885302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name3605_n);
                tbl_JOIN_INNER_TD_4885302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name3606_n);
                tbl_JOIN_INNER_TD_4885302_output.setInt64(r, 5, _year_total3608);
                tbl_JOIN_INNER_TD_4885302_output.setInt64(r, 6, _year_total4971);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4885302_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4885302_key_rightMajor, SW_JOIN_INNER_TD_4885302_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5904404_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4967_k_n = tbl_Project_TD_5904404_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4967_k = std::string(_customer_id4967_k_n.data());
            SW_JOIN_INNER_TD_4885302_key_rightMajor keyA{_customer_id4967_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4967_n = tbl_Project_TD_5904404_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4967 = std::string(_customer_id4967_n.data());
            int64_t _year_total4971 = tbl_Project_TD_5904404_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_4885302_payload_rightMajor payloadA{_customer_id4967, _year_total4971};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5729656_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_k_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544_k = std::string(_customer_id3544_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4885302_key_rightMajor{_customer_id3544_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4967 = (it->second)._customer_id4967;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4967_n{};
                memcpy(_customer_id4967_n.data(), (_customer_id4967).data(), (_customer_id4967).length());
                int64_t _year_total4971 = (it->second)._year_total4971;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3544 = std::string(_customer_id3544_n.data());
                int64_t _year_total3548 = tbl_JOIN_INNER_TD_5729656_output.getInt64(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id3604 = std::string(_customer_id3604_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name3605 = std::string(_customer_first_name3605_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n = tbl_JOIN_INNER_TD_5729656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name3606 = std::string(_customer_last_name3606_n.data());
                int64_t _year_total3608 = tbl_JOIN_INNER_TD_5729656_output.getInt64(i, 5);
                tbl_JOIN_INNER_TD_4885302_output.setInt64(r, 6, _year_total4971);
                tbl_JOIN_INNER_TD_4885302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3544_n);
                tbl_JOIN_INNER_TD_4885302_output.setInt64(r, 1, _year_total3548);
                tbl_JOIN_INNER_TD_4885302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id3604_n);
                tbl_JOIN_INNER_TD_4885302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name3605_n);
                tbl_JOIN_INNER_TD_4885302_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name3606_n);
                tbl_JOIN_INNER_TD_4885302_output.setInt64(r, 5, _year_total3608);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4885302_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4885302_output #Row: " << tbl_JOIN_INNER_TD_4885302_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3617649_key_leftMajor {
    std::string _customer_id3544;
    bool operator==(const SW_JOIN_INNER_TD_3617649_key_leftMajor& other) const {
        return ((_customer_id3544 == other._customer_id3544));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3617649_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3617649_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3544));
    }
};
}
struct SW_JOIN_INNER_TD_3617649_payload_leftMajor {
    std::string _customer_id3544;
    int64_t _year_total3548;
    std::string _customer_id3604;
    std::string _customer_first_name3605;
    std::string _customer_last_name3606;
    int64_t _year_total3608;
    int64_t _year_total4971;
};
struct SW_JOIN_INNER_TD_3617649_key_rightMajor {
    std::string _customer_id3616;
    bool operator==(const SW_JOIN_INNER_TD_3617649_key_rightMajor& other) const {
        return ((_customer_id3616 == other._customer_id3616));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3617649_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3617649_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3616));
    }
};
}
struct SW_JOIN_INNER_TD_3617649_payload_rightMajor {
    std::string _customer_id3616;
    int64_t _year_total3620;
};
void SW_JOIN_INNER_TD_3617649(Table &tbl_JOIN_INNER_TD_4885302_output, Table &tbl_Aggregate_TD_4370616_output, Table &tbl_JOIN_INNER_TD_3617649_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((customer_id#3544 = customer_id#3616) AND (CASE WHEN (year_total#4971 > 0.00) THEN CheckOverflow((promote_precision(year_total#3620) / promote_precision(year_total#4971)), DecimalType(37,20), true) END > CASE WHEN (year_total#3548 > 0.00) THEN CheckOverflow((promote_precision(year_total#3608) / promote_precision(year_total#3548)), DecimalType(37,20), true) END)))
    // Left Table: ListBuffer(customer_id#3544, year_total#3548, customer_id#3604, customer_first_name#3605, customer_last_name#3606, year_total#3608, year_total#4971)
    // Right Table: ListBuffer(customer_id#3616, year_total#3620)
    // Output Table: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606)
    int left_nrow = tbl_JOIN_INNER_TD_4885302_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4370616_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3617649_key_leftMajor, SW_JOIN_INNER_TD_3617649_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4885302_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_k_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544_k = std::string(_customer_id3544_k_n.data());
            SW_JOIN_INNER_TD_3617649_key_leftMajor keyA{_customer_id3544_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544 = std::string(_customer_id3544_n.data());
            int64_t _year_total3548 = tbl_JOIN_INNER_TD_4885302_output.getInt64(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id3604 = std::string(_customer_id3604_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name3605 = std::string(_customer_first_name3605_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name3606 = std::string(_customer_last_name3606_n.data());
            int64_t _year_total3608 = tbl_JOIN_INNER_TD_4885302_output.getInt64(i, 5);
            int64_t _year_total4971 = tbl_JOIN_INNER_TD_4885302_output.getInt64(i, 6);
            SW_JOIN_INNER_TD_3617649_payload_leftMajor payloadA{_customer_id3544, _year_total3548, _customer_id3604, _customer_first_name3605, _customer_last_name3606, _year_total3608, _year_total4971};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_4370616_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3616_k_n = tbl_Aggregate_TD_4370616_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3616_k = std::string(_customer_id3616_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3617649_key_leftMajor{_customer_id3616_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3544 = (it->second)._customer_id3544;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n{};
                memcpy(_customer_id3544_n.data(), (_customer_id3544).data(), (_customer_id3544).length());
                int64_t _year_total3548 = (it->second)._year_total3548;
                std::string _customer_id3604 = (it->second)._customer_id3604;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n{};
                memcpy(_customer_id3604_n.data(), (_customer_id3604).data(), (_customer_id3604).length());
                std::string _customer_first_name3605 = (it->second)._customer_first_name3605;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n{};
                memcpy(_customer_first_name3605_n.data(), (_customer_first_name3605).data(), (_customer_first_name3605).length());
                std::string _customer_last_name3606 = (it->second)._customer_last_name3606;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n{};
                memcpy(_customer_last_name3606_n.data(), (_customer_last_name3606).data(), (_customer_last_name3606).length());
                int64_t _year_total3608 = (it->second)._year_total3608;
                int64_t _year_total4971 = (it->second)._year_total4971;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3616_n = tbl_Aggregate_TD_4370616_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3616 = std::string(_customer_id3616_n.data());
                int64_t _year_total3620 = tbl_Aggregate_TD_4370616_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_3617649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3604_n);
                tbl_JOIN_INNER_TD_3617649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3605_n);
                tbl_JOIN_INNER_TD_3617649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3606_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3617649_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3617649_key_rightMajor, SW_JOIN_INNER_TD_3617649_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_4370616_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3616_k_n = tbl_Aggregate_TD_4370616_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3616_k = std::string(_customer_id3616_k_n.data());
            SW_JOIN_INNER_TD_3617649_key_rightMajor keyA{_customer_id3616_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3616_n = tbl_Aggregate_TD_4370616_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3616 = std::string(_customer_id3616_n.data());
            int64_t _year_total3620 = tbl_Aggregate_TD_4370616_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_3617649_payload_rightMajor payloadA{_customer_id3616, _year_total3620};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4885302_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_k_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3544_k = std::string(_customer_id3544_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3617649_key_rightMajor{_customer_id3544_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3616 = (it->second)._customer_id3616;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3616_n{};
                memcpy(_customer_id3616_n.data(), (_customer_id3616).data(), (_customer_id3616).length());
                int64_t _year_total3620 = (it->second)._year_total3620;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3544_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3544 = std::string(_customer_id3544_n.data());
                int64_t _year_total3548 = tbl_JOIN_INNER_TD_4885302_output.getInt64(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id3604 = std::string(_customer_id3604_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name3605 = std::string(_customer_first_name3605_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n = tbl_JOIN_INNER_TD_4885302_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name3606 = std::string(_customer_last_name3606_n.data());
                int64_t _year_total3608 = tbl_JOIN_INNER_TD_4885302_output.getInt64(i, 5);
                int64_t _year_total4971 = tbl_JOIN_INNER_TD_4885302_output.getInt64(i, 6);
                tbl_JOIN_INNER_TD_3617649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3604_n);
                tbl_JOIN_INNER_TD_3617649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3605_n);
                tbl_JOIN_INNER_TD_3617649_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3606_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3617649_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3617649_output #Row: " << tbl_JOIN_INNER_TD_3617649_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2685989(Table &tbl_JOIN_INNER_TD_3617649_output, Table &tbl_Sort_TD_2685989_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(customer_id#3604 ASC NULLS FIRST, customer_id#3604 ASC NULLS FIRST, customer_id#3604 ASC NULLS FIRST)
    // Input: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606)
    // Output: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606)
    struct SW_Sort_TD_2685989Row {
        std::string _customer_id3604;
        std::string _customer_first_name3605;
        std::string _customer_last_name3606;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2685989Row& a, const SW_Sort_TD_2685989Row& b) const { return 
 (a._customer_id3604 < b._customer_id3604) || 
 ((a._customer_id3604 == b._customer_id3604) && (a._customer_id3604 < b._customer_id3604)) || 
 ((a._customer_id3604 == b._customer_id3604) && (a._customer_id3604 == b._customer_id3604) && (a._customer_id3604 < b._customer_id3604)); 
}
    }SW_Sort_TD_2685989_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3617649_output.getNumRow();
    std::vector<SW_Sort_TD_2685989Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3604 = tbl_JOIN_INNER_TD_3617649_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605 = tbl_JOIN_INNER_TD_3617649_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606 = tbl_JOIN_INNER_TD_3617649_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        SW_Sort_TD_2685989Row t = {std::string(_customer_id3604.data()),std::string(_customer_first_name3605.data()),std::string(_customer_last_name3606.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2685989_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3604{};
        memcpy(_customer_id3604.data(), (it._customer_id3604).data(), (it._customer_id3604).length());
        tbl_Sort_TD_2685989_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _customer_id3604);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605{};
        memcpy(_customer_first_name3605.data(), (it._customer_first_name3605).data(), (it._customer_first_name3605).length());
        tbl_Sort_TD_2685989_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _customer_first_name3605);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606{};
        memcpy(_customer_last_name3606.data(), (it._customer_last_name3606).data(), (it._customer_last_name3606).length());
        tbl_Sort_TD_2685989_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _customer_last_name3606);
        ++r;
    }
    tbl_Sort_TD_2685989_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2685989_output #Row: " << tbl_Sort_TD_2685989_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1167695(Table &tbl_Sort_TD_2685989_output, Table &tbl_LocalLimit_TD_1167695_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606)
    // Output: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n = tbl_Sort_TD_2685989_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1167695_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3604_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n = tbl_Sort_TD_2685989_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1167695_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3605_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n = tbl_Sort_TD_2685989_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1167695_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3606_n);
        r++;
    }
    tbl_LocalLimit_TD_1167695_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1167695_output #Row: " << tbl_LocalLimit_TD_1167695_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0212813(Table &tbl_LocalLimit_TD_1167695_output, Table &tbl_GlobalLimit_TD_0212813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606)
    // Output: ListBuffer(customer_id#3604, customer_first_name#3605, customer_last_name#3606)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3604_n = tbl_LocalLimit_TD_1167695_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0212813_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3604_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3605_n = tbl_LocalLimit_TD_1167695_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0212813_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3605_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3606_n = tbl_LocalLimit_TD_1167695_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0212813_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3606_n);
        r++;
    }
    tbl_GlobalLimit_TD_0212813_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0212813_output #Row: " << tbl_GlobalLimit_TD_0212813_output.getNumRow() << std::endl;
}

