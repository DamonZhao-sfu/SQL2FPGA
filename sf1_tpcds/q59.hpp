#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_1025987(Table &tbl_SerializeFromObject_TD_11637062_input, Table &tbl_Filter_TD_1025987_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#120) AND isnotnull(d_week_seq#124)))
    // Input: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11637062_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11637062_input.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_SerializeFromObject_TD_11637062_input.getInt32(i, 1);
        if ((_d_date_sk120!= 0) && (_d_week_seq124!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11637062_input.getInt32(i, 0);
            tbl_Filter_TD_1025987_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_week_seq124_t = tbl_SerializeFromObject_TD_11637062_input.getInt32(i, 1);
            tbl_Filter_TD_1025987_output.setInt32(r, 1, _d_week_seq124_t);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_t = tbl_SerializeFromObject_TD_11637062_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_1025987_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_t);
            r++;
        }
    }
    tbl_Filter_TD_1025987_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1025987_output #Row: " << tbl_Filter_TD_1025987_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10180785(Table &tbl_SerializeFromObject_TD_11131468_input, Table &tbl_Filter_TD_10180785_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11131468_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11131468_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_11131468_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11131468_input.getInt32(i, 0);
            tbl_Filter_TD_10180785_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_11131468_input.getInt32(i, 1);
            tbl_Filter_TD_10180785_output.setInt32(r, 1, _ss_store_sk1213_t);
            int64_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_11131468_input.getInt64(i, 2);
            tbl_Filter_TD_10180785_output.setInt64(r, 2, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_10180785_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10180785_output #Row: " << tbl_Filter_TD_10180785_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10622206(Table &tbl_SerializeFromObject_TD_11143336_input, Table &tbl_Filter_TD_10622206_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#120) AND isnotnull(d_week_seq#124)))
    // Input: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11143336_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11143336_input.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_SerializeFromObject_TD_11143336_input.getInt32(i, 1);
        if ((_d_date_sk120!= 0) && (_d_week_seq124!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11143336_input.getInt32(i, 0);
            tbl_Filter_TD_10622206_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_week_seq124_t = tbl_SerializeFromObject_TD_11143336_input.getInt32(i, 1);
            tbl_Filter_TD_10622206_output.setInt32(r, 1, _d_week_seq124_t);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_t = tbl_SerializeFromObject_TD_11143336_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10622206_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_t);
            r++;
        }
    }
    tbl_Filter_TD_10622206_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10622206_output #Row: " << tbl_Filter_TD_10622206_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10517055(Table &tbl_SerializeFromObject_TD_11953518_input, Table &tbl_Filter_TD_10517055_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11953518_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11953518_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_11953518_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11953518_input.getInt32(i, 0);
            tbl_Filter_TD_10517055_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_11953518_input.getInt32(i, 1);
            tbl_Filter_TD_10517055_output.setInt32(r, 1, _ss_store_sk1213_t);
            int64_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_11953518_input.getInt64(i, 2);
            tbl_Filter_TD_10517055_output.setInt64(r, 2, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_10517055_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10517055_output #Row: " << tbl_Filter_TD_10517055_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9128274_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_9128274_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9128274_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9128274_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_9128274_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int64_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_9128274_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9128274_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9128274_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9128274_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9128274_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_week_seq124;
    std::string _d_day_name134;
};
void SW_JOIN_INNER_TD_9128274(Table &tbl_Filter_TD_10180785_output, Table &tbl_Filter_TD_1025987_output, Table &tbl_JOIN_INNER_TD_9128274_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output Table: ListBuffer(ss_store_sk#1213, ss_sales_price#1219, d_week_seq#124, d_day_name#134)
    int left_nrow = tbl_Filter_TD_10180785_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1025987_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9128274_key_leftMajor, SW_JOIN_INNER_TD_9128274_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10180785_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10180785_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9128274_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10180785_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_10180785_output.getInt32(i, 1);
            int64_t _ss_sales_price1219 = tbl_Filter_TD_10180785_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_9128274_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1025987_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_1025987_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9128274_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_1025987_output.getInt32(i, 0);
                int32_t _d_week_seq124 = tbl_Filter_TD_1025987_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_1025987_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _d_day_name134 = std::string(_d_day_name134_n.data());
                tbl_JOIN_INNER_TD_9128274_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9128274_output.setInt64(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_9128274_output.setInt32(r, 2, _d_week_seq124);
                tbl_JOIN_INNER_TD_9128274_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _d_day_name134_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9128274_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9128274_key_rightMajor, SW_JOIN_INNER_TD_9128274_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1025987_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_1025987_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9128274_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_1025987_output.getInt32(i, 0);
            int32_t _d_week_seq124 = tbl_Filter_TD_1025987_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_1025987_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _d_day_name134 = std::string(_d_day_name134_n.data());
            SW_JOIN_INNER_TD_9128274_payload_rightMajor payloadA{_d_date_sk120, _d_week_seq124, _d_day_name134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10180785_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10180785_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9128274_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                std::string _d_day_name134 = (it->second)._d_day_name134;
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n{};
                memcpy(_d_day_name134_n.data(), (_d_day_name134).data(), (_d_day_name134).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10180785_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_10180785_output.getInt32(i, 1);
                int64_t _ss_sales_price1219 = tbl_Filter_TD_10180785_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_9128274_output.setInt32(r, 2, _d_week_seq124);
                tbl_JOIN_INNER_TD_9128274_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _d_day_name134_n);
                tbl_JOIN_INNER_TD_9128274_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9128274_output.setInt64(r, 1, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9128274_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9128274_output #Row: " << tbl_JOIN_INNER_TD_9128274_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9109703_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_9109703_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9109703_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9109703_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_9109703_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int64_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_9109703_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9109703_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9109703_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9109703_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9109703_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_week_seq124;
    std::string _d_day_name134;
};
void SW_JOIN_INNER_TD_9109703(Table &tbl_Filter_TD_10517055_output, Table &tbl_Filter_TD_10622206_output, Table &tbl_JOIN_INNER_TD_9109703_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output Table: ListBuffer(ss_store_sk#1213, ss_sales_price#1219, d_week_seq#124, d_day_name#134)
    int left_nrow = tbl_Filter_TD_10517055_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10622206_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9109703_key_leftMajor, SW_JOIN_INNER_TD_9109703_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10517055_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10517055_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9109703_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10517055_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_10517055_output.getInt32(i, 1);
            int64_t _ss_sales_price1219 = tbl_Filter_TD_10517055_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_9109703_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10622206_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10622206_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9109703_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_10622206_output.getInt32(i, 0);
                int32_t _d_week_seq124 = tbl_Filter_TD_10622206_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_10622206_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _d_day_name134 = std::string(_d_day_name134_n.data());
                tbl_JOIN_INNER_TD_9109703_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9109703_output.setInt64(r, 1, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_9109703_output.setInt32(r, 2, _d_week_seq124);
                tbl_JOIN_INNER_TD_9109703_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _d_day_name134_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9109703_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9109703_key_rightMajor, SW_JOIN_INNER_TD_9109703_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10622206_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10622206_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9109703_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10622206_output.getInt32(i, 0);
            int32_t _d_week_seq124 = tbl_Filter_TD_10622206_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_10622206_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _d_day_name134 = std::string(_d_day_name134_n.data());
            SW_JOIN_INNER_TD_9109703_payload_rightMajor payloadA{_d_date_sk120, _d_week_seq124, _d_day_name134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10517055_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10517055_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9109703_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                std::string _d_day_name134 = (it->second)._d_day_name134;
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n{};
                memcpy(_d_day_name134_n.data(), (_d_day_name134).data(), (_d_day_name134).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10517055_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_10517055_output.getInt32(i, 1);
                int64_t _ss_sales_price1219 = tbl_Filter_TD_10517055_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_9109703_output.setInt32(r, 2, _d_week_seq124);
                tbl_JOIN_INNER_TD_9109703_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _d_day_name134_n);
                tbl_JOIN_INNER_TD_9109703_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9109703_output.setInt64(r, 1, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9109703_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9109703_output #Row: " << tbl_JOIN_INNER_TD_9109703_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8426158(Table &tbl_SerializeFromObject_TD_9832151_input, Table &tbl_Filter_TD_8426158_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#3599) AND isnotnull(s_store_id#3600)))
    // Input: ListBuffer(s_store_sk#3599, s_store_id#3600)
    // Output: ListBuffer(s_store_sk#3599, s_store_id#3600)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9832151_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk3599 = tbl_SerializeFromObject_TD_9832151_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600 = tbl_SerializeFromObject_TD_9832151_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_s_store_sk3599!= 0) && (std::string(_s_store_id3600.data()) != "NULL")) {
            int32_t _s_store_sk3599_t = tbl_SerializeFromObject_TD_9832151_input.getInt32(i, 0);
            tbl_Filter_TD_8426158_output.setInt32(r, 0, _s_store_sk3599_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600_t = tbl_SerializeFromObject_TD_9832151_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8426158_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id3600_t);
            r++;
        }
    }
    tbl_Filter_TD_8426158_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8426158_output #Row: " << tbl_Filter_TD_8426158_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8913145_key {
    int32_t _d_week_seq124;
    int32_t _ss_store_sk1213;
    bool operator==(const SW_Aggregate_TD_8913145_key& other) const { return (_d_week_seq124 == other._d_week_seq124) && (_ss_store_sk1213 == other._ss_store_sk1213); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8913145_key> {
    std::size_t operator() (const SW_Aggregate_TD_8913145_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq124)) + (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_Aggregate_TD_8913145_payload {
    int64_t _sun_sales3564_sum_0;
    int64_t _mon_sales3565_sum_1;
    int64_t _tue_sales3566_sum_2;
    int64_t _wed_sales3567_sum_3;
    int64_t _thu_sales3568_sum_4;
    int64_t _fri_sales3569_sum_5;
    int64_t _sat_sales3570_sum_6;
};
void SW_Aggregate_TD_8913145(Table &tbl_JOIN_INNER_TD_9128274_output, Table &tbl_Aggregate_TD_8913145_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_week_seq#124, ss_store_sk#1213, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Sunday) THEN ss_sales_price#1219 END)),17,2) AS sun_sales#3564, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Monday) THEN ss_sales_price#1219 END)),17,2) AS mon_sales#3565, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Tuesday) THEN ss_sales_price#1219 END)),17,2) AS tue_sales#3566, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Wednesday) THEN ss_sales_price#1219 END)),17,2) AS wed_sales#3567, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Thursday) THEN ss_sales_price#1219 END)),17,2) AS thu_sales#3568, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Friday) THEN ss_sales_price#1219 END)),17,2) AS fri_sales#3569, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Saturday) THEN ss_sales_price#1219 END)),17,2) AS sat_sales#3570)
    // Input: ListBuffer(ss_store_sk#1213, ss_sales_price#1219, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_week_seq#124, ss_store_sk#1213, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    std::unordered_map<SW_Aggregate_TD_8913145_key, SW_Aggregate_TD_8913145_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9128274_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9128274_output.getInt32(i, 0);
        int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_9128274_output.getInt64(i, 1);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_9128274_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _d_day_name134 = tbl_JOIN_INNER_TD_9128274_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_8913145_key k{_d_week_seq124, _ss_store_sk1213};
        int64_t _sun_sales3564_sum_0 = (std::string(_d_day_name134.data()) == "Sunday") ? _ss_sales_price1219 : 1;
        int64_t _mon_sales3565_sum_1 = (std::string(_d_day_name134.data()) == "Monday") ? _ss_sales_price1219 : 1;
        int64_t _tue_sales3566_sum_2 = (std::string(_d_day_name134.data()) == "Tuesday") ? _ss_sales_price1219 : 1;
        int64_t _wed_sales3567_sum_3 = (std::string(_d_day_name134.data()) == "Wednesday") ? _ss_sales_price1219 : 1;
        int64_t _thu_sales3568_sum_4 = (std::string(_d_day_name134.data()) == "Thursday") ? _ss_sales_price1219 : 1;
        int64_t _fri_sales3569_sum_5 = (std::string(_d_day_name134.data()) == "Friday") ? _ss_sales_price1219 : 1;
        int64_t _sat_sales3570_sum_6 = (std::string(_d_day_name134.data()) == "Saturday") ? _ss_sales_price1219 : 1;
        SW_Aggregate_TD_8913145_payload p{_sun_sales3564_sum_0, _mon_sales3565_sum_1, _tue_sales3566_sum_2, _wed_sales3567_sum_3, _thu_sales3568_sum_4, _fri_sales3569_sum_5, _sat_sales3570_sum_6};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sun_sales3564_sum_0 + _sun_sales3564_sum_0;
            p._sun_sales3564_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._mon_sales3565_sum_1 + _mon_sales3565_sum_1;
            p._mon_sales3565_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._tue_sales3566_sum_2 + _tue_sales3566_sum_2;
            p._tue_sales3566_sum_2 = sum_2;
            int64_t sum_3 = (it->second)._wed_sales3567_sum_3 + _wed_sales3567_sum_3;
            p._wed_sales3567_sum_3 = sum_3;
            int64_t sum_4 = (it->second)._thu_sales3568_sum_4 + _thu_sales3568_sum_4;
            p._thu_sales3568_sum_4 = sum_4;
            int64_t sum_5 = (it->second)._fri_sales3569_sum_5 + _fri_sales3569_sum_5;
            p._fri_sales3569_sum_5 = sum_5;
            int64_t sum_6 = (it->second)._sat_sales3570_sum_6 + _sat_sales3570_sum_6;
            p._sat_sales3570_sum_6 = sum_6;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8913145_output.setInt32(r, 0, (it.first)._d_week_seq124);
        tbl_Aggregate_TD_8913145_output.setInt32(r, 1, (it.first)._ss_store_sk1213);
        int64_t _sun_sales3564 = (it.second)._sun_sales3564_sum_0;
        tbl_Aggregate_TD_8913145_output.setInt64(r, 2, _sun_sales3564);
        int64_t _mon_sales3565 = (it.second)._mon_sales3565_sum_1;
        tbl_Aggregate_TD_8913145_output.setInt64(r, 3, _mon_sales3565);
        int64_t _tue_sales3566 = (it.second)._tue_sales3566_sum_2;
        tbl_Aggregate_TD_8913145_output.setInt64(r, 4, _tue_sales3566);
        int64_t _wed_sales3567 = (it.second)._wed_sales3567_sum_3;
        tbl_Aggregate_TD_8913145_output.setInt64(r, 5, _wed_sales3567);
        int64_t _thu_sales3568 = (it.second)._thu_sales3568_sum_4;
        tbl_Aggregate_TD_8913145_output.setInt64(r, 6, _thu_sales3568);
        int64_t _fri_sales3569 = (it.second)._fri_sales3569_sum_5;
        tbl_Aggregate_TD_8913145_output.setInt64(r, 7, _fri_sales3569);
        int64_t _sat_sales3570 = (it.second)._sat_sales3570_sum_6;
        tbl_Aggregate_TD_8913145_output.setInt64(r, 8, _sat_sales3570);
        ++r;
    }
    tbl_Aggregate_TD_8913145_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8913145_output #Row: " << tbl_Aggregate_TD_8913145_output.getNumRow() << std::endl;
}

void SW_Filter_TD_884436(Table &tbl_SerializeFromObject_TD_9137603_input, Table &tbl_Filter_TD_884436_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#378) AND isnotnull(s_store_id#379)))
    // Input: ListBuffer(s_store_sk#378, s_store_id#379, s_store_name#383)
    // Output: ListBuffer(s_store_sk#378, s_store_id#379, s_store_name#383)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9137603_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_9137603_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379 = tbl_SerializeFromObject_TD_9137603_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_s_store_sk378!= 0) && (std::string(_s_store_id379.data()) != "NULL")) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_9137603_input.getInt32(i, 0);
            tbl_Filter_TD_884436_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_t = tbl_SerializeFromObject_TD_9137603_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_884436_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id379_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_9137603_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_884436_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            r++;
        }
    }
    tbl_Filter_TD_884436_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_884436_output #Row: " << tbl_Filter_TD_884436_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8828940_key {
    int32_t _d_week_seq124;
    int32_t _ss_store_sk1213;
    bool operator==(const SW_Aggregate_TD_8828940_key& other) const { return (_d_week_seq124 == other._d_week_seq124) && (_ss_store_sk1213 == other._ss_store_sk1213); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8828940_key> {
    std::size_t operator() (const SW_Aggregate_TD_8828940_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq124)) + (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_Aggregate_TD_8828940_payload {
    int64_t _sun_sales3564_sum_0;
    int64_t _mon_sales3565_sum_1;
    int64_t _tue_sales3566_sum_2;
    int64_t _wed_sales3567_sum_3;
    int64_t _thu_sales3568_sum_4;
    int64_t _fri_sales3569_sum_5;
    int64_t _sat_sales3570_sum_6;
};
void SW_Aggregate_TD_8828940(Table &tbl_JOIN_INNER_TD_9109703_output, Table &tbl_Aggregate_TD_8828940_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_week_seq#124, ss_store_sk#1213, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Sunday) THEN ss_sales_price#1219 END)),17,2) AS sun_sales#3564, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Monday) THEN ss_sales_price#1219 END)),17,2) AS mon_sales#3565, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Tuesday) THEN ss_sales_price#1219 END)),17,2) AS tue_sales#3566, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Wednesday) THEN ss_sales_price#1219 END)),17,2) AS wed_sales#3567, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Thursday) THEN ss_sales_price#1219 END)),17,2) AS thu_sales#3568, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Friday) THEN ss_sales_price#1219 END)),17,2) AS fri_sales#3569, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Saturday) THEN ss_sales_price#1219 END)),17,2) AS sat_sales#3570)
    // Input: ListBuffer(ss_store_sk#1213, ss_sales_price#1219, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_week_seq#124, ss_store_sk#1213, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    std::unordered_map<SW_Aggregate_TD_8828940_key, SW_Aggregate_TD_8828940_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9109703_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9109703_output.getInt32(i, 0);
        int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_9109703_output.getInt64(i, 1);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_9109703_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _d_day_name134 = tbl_JOIN_INNER_TD_9109703_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_8828940_key k{_d_week_seq124, _ss_store_sk1213};
        int64_t _sun_sales3564_sum_0 = (std::string(_d_day_name134.data()) == "Sunday") ? _ss_sales_price1219 : 1;
        int64_t _mon_sales3565_sum_1 = (std::string(_d_day_name134.data()) == "Monday") ? _ss_sales_price1219 : 1;
        int64_t _tue_sales3566_sum_2 = (std::string(_d_day_name134.data()) == "Tuesday") ? _ss_sales_price1219 : 1;
        int64_t _wed_sales3567_sum_3 = (std::string(_d_day_name134.data()) == "Wednesday") ? _ss_sales_price1219 : 1;
        int64_t _thu_sales3568_sum_4 = (std::string(_d_day_name134.data()) == "Thursday") ? _ss_sales_price1219 : 1;
        int64_t _fri_sales3569_sum_5 = (std::string(_d_day_name134.data()) == "Friday") ? _ss_sales_price1219 : 1;
        int64_t _sat_sales3570_sum_6 = (std::string(_d_day_name134.data()) == "Saturday") ? _ss_sales_price1219 : 1;
        SW_Aggregate_TD_8828940_payload p{_sun_sales3564_sum_0, _mon_sales3565_sum_1, _tue_sales3566_sum_2, _wed_sales3567_sum_3, _thu_sales3568_sum_4, _fri_sales3569_sum_5, _sat_sales3570_sum_6};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sun_sales3564_sum_0 + _sun_sales3564_sum_0;
            p._sun_sales3564_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._mon_sales3565_sum_1 + _mon_sales3565_sum_1;
            p._mon_sales3565_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._tue_sales3566_sum_2 + _tue_sales3566_sum_2;
            p._tue_sales3566_sum_2 = sum_2;
            int64_t sum_3 = (it->second)._wed_sales3567_sum_3 + _wed_sales3567_sum_3;
            p._wed_sales3567_sum_3 = sum_3;
            int64_t sum_4 = (it->second)._thu_sales3568_sum_4 + _thu_sales3568_sum_4;
            p._thu_sales3568_sum_4 = sum_4;
            int64_t sum_5 = (it->second)._fri_sales3569_sum_5 + _fri_sales3569_sum_5;
            p._fri_sales3569_sum_5 = sum_5;
            int64_t sum_6 = (it->second)._sat_sales3570_sum_6 + _sat_sales3570_sum_6;
            p._sat_sales3570_sum_6 = sum_6;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8828940_output.setInt32(r, 0, (it.first)._d_week_seq124);
        tbl_Aggregate_TD_8828940_output.setInt32(r, 1, (it.first)._ss_store_sk1213);
        int64_t _sun_sales3564 = (it.second)._sun_sales3564_sum_0;
        tbl_Aggregate_TD_8828940_output.setInt64(r, 2, _sun_sales3564);
        int64_t _mon_sales3565 = (it.second)._mon_sales3565_sum_1;
        tbl_Aggregate_TD_8828940_output.setInt64(r, 3, _mon_sales3565);
        int64_t _tue_sales3566 = (it.second)._tue_sales3566_sum_2;
        tbl_Aggregate_TD_8828940_output.setInt64(r, 4, _tue_sales3566);
        int64_t _wed_sales3567 = (it.second)._wed_sales3567_sum_3;
        tbl_Aggregate_TD_8828940_output.setInt64(r, 5, _wed_sales3567);
        int64_t _thu_sales3568 = (it.second)._thu_sales3568_sum_4;
        tbl_Aggregate_TD_8828940_output.setInt64(r, 6, _thu_sales3568);
        int64_t _fri_sales3569 = (it.second)._fri_sales3569_sum_5;
        tbl_Aggregate_TD_8828940_output.setInt64(r, 7, _fri_sales3569);
        int64_t _sat_sales3570 = (it.second)._sat_sales3570_sum_6;
        tbl_Aggregate_TD_8828940_output.setInt64(r, 8, _sat_sales3570);
        ++r;
    }
    tbl_Aggregate_TD_8828940_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8828940_output #Row: " << tbl_Aggregate_TD_8828940_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7229147(Table &tbl_SerializeFromObject_TD_8346915_input, Table &tbl_Filter_TD_7229147_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3631) AND ((d_month_seq#3631 >= 1224) AND (d_month_seq#3631 <= 1235))) AND isnotnull(d_week_seq#3632)))
    // Input: ListBuffer(d_week_seq#3632, d_month_seq#3631)
    // Output: ListBuffer(d_week_seq#3632)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8346915_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3631 = tbl_SerializeFromObject_TD_8346915_input.getInt32(i, 1);
        int32_t _d_week_seq3632 = tbl_SerializeFromObject_TD_8346915_input.getInt32(i, 0);
        if (((_d_month_seq3631!= 0) && ((_d_month_seq3631 >= 1224) && (_d_month_seq3631 <= 1235))) && (_d_week_seq3632!= 0)) {
            int32_t _d_week_seq3632_t = tbl_SerializeFromObject_TD_8346915_input.getInt32(i, 0);
            tbl_Filter_TD_7229147_output.setInt32(r, 0, _d_week_seq3632_t);
            r++;
        }
    }
    tbl_Filter_TD_7229147_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7229147_output #Row: " << tbl_Filter_TD_7229147_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7649616_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_7649616_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7649616_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7649616_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_7649616_payload_leftMajor {
    int32_t _d_week_seq124;
    int32_t _ss_store_sk1213;
    int64_t _sun_sales3564;
    int64_t _mon_sales3565;
    int64_t _tue_sales3566;
    int64_t _wed_sales3567;
    int64_t _thu_sales3568;
    int64_t _fri_sales3569;
    int64_t _sat_sales3570;
};
struct SW_JOIN_INNER_TD_7649616_key_rightMajor {
    int32_t _s_store_sk3599;
    bool operator==(const SW_JOIN_INNER_TD_7649616_key_rightMajor& other) const {
        return ((_s_store_sk3599 == other._s_store_sk3599));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7649616_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7649616_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk3599));
    }
};
}
struct SW_JOIN_INNER_TD_7649616_payload_rightMajor {
    int32_t _s_store_sk3599;
    std::string _s_store_id3600;
};
void SW_JOIN_INNER_TD_7649616(Table &tbl_Aggregate_TD_8913145_output, Table &tbl_Filter_TD_8426158_output, Table &tbl_JOIN_INNER_TD_7649616_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#3599))
    // Left Table: ListBuffer(d_week_seq#124, ss_store_sk#1213, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    // Right Table: ListBuffer(s_store_sk#3599, s_store_id#3600)
    // Output Table: ListBuffer(d_week_seq#124, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570, s_store_id#3600)
    int left_nrow = tbl_Aggregate_TD_8913145_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8426158_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7649616_key_leftMajor, SW_JOIN_INNER_TD_7649616_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_8913145_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_Aggregate_TD_8913145_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7649616_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _d_week_seq124 = tbl_Aggregate_TD_8913145_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_Aggregate_TD_8913145_output.getInt32(i, 1);
            int64_t _sun_sales3564 = tbl_Aggregate_TD_8913145_output.getInt64(i, 2);
            int64_t _mon_sales3565 = tbl_Aggregate_TD_8913145_output.getInt64(i, 3);
            int64_t _tue_sales3566 = tbl_Aggregate_TD_8913145_output.getInt64(i, 4);
            int64_t _wed_sales3567 = tbl_Aggregate_TD_8913145_output.getInt64(i, 5);
            int64_t _thu_sales3568 = tbl_Aggregate_TD_8913145_output.getInt64(i, 6);
            int64_t _fri_sales3569 = tbl_Aggregate_TD_8913145_output.getInt64(i, 7);
            int64_t _sat_sales3570 = tbl_Aggregate_TD_8913145_output.getInt64(i, 8);
            SW_JOIN_INNER_TD_7649616_payload_leftMajor payloadA{_d_week_seq124, _ss_store_sk1213, _sun_sales3564, _mon_sales3565, _tue_sales3566, _wed_sales3567, _thu_sales3568, _fri_sales3569, _sat_sales3570};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8426158_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk3599_k = tbl_Filter_TD_8426158_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7649616_key_leftMajor{_s_store_sk3599_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _sun_sales3564 = (it->second)._sun_sales3564;
                int64_t _mon_sales3565 = (it->second)._mon_sales3565;
                int64_t _tue_sales3566 = (it->second)._tue_sales3566;
                int64_t _wed_sales3567 = (it->second)._wed_sales3567;
                int64_t _thu_sales3568 = (it->second)._thu_sales3568;
                int64_t _fri_sales3569 = (it->second)._fri_sales3569;
                int64_t _sat_sales3570 = (it->second)._sat_sales3570;
                int32_t _s_store_sk3599 = tbl_Filter_TD_8426158_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600_n = tbl_Filter_TD_8426158_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id3600 = std::string(_s_store_id3600_n.data());
                tbl_JOIN_INNER_TD_7649616_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 1, _sun_sales3564);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 2, _mon_sales3565);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 3, _tue_sales3566);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 4, _wed_sales3567);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 5, _thu_sales3568);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 6, _fri_sales3569);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 7, _sat_sales3570);
                tbl_JOIN_INNER_TD_7649616_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_id3600_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7649616_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7649616_key_rightMajor, SW_JOIN_INNER_TD_7649616_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8426158_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk3599_k = tbl_Filter_TD_8426158_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7649616_key_rightMajor keyA{_s_store_sk3599_k};
            int32_t _s_store_sk3599 = tbl_Filter_TD_8426158_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600_n = tbl_Filter_TD_8426158_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id3600 = std::string(_s_store_id3600_n.data());
            SW_JOIN_INNER_TD_7649616_payload_rightMajor payloadA{_s_store_sk3599, _s_store_id3600};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_8913145_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_Aggregate_TD_8913145_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7649616_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk3599 = (it->second)._s_store_sk3599;
                std::string _s_store_id3600 = (it->second)._s_store_id3600;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600_n{};
                memcpy(_s_store_id3600_n.data(), (_s_store_id3600).data(), (_s_store_id3600).length());
                int32_t _d_week_seq124 = tbl_Aggregate_TD_8913145_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_Aggregate_TD_8913145_output.getInt32(i, 1);
                int64_t _sun_sales3564 = tbl_Aggregate_TD_8913145_output.getInt64(i, 2);
                int64_t _mon_sales3565 = tbl_Aggregate_TD_8913145_output.getInt64(i, 3);
                int64_t _tue_sales3566 = tbl_Aggregate_TD_8913145_output.getInt64(i, 4);
                int64_t _wed_sales3567 = tbl_Aggregate_TD_8913145_output.getInt64(i, 5);
                int64_t _thu_sales3568 = tbl_Aggregate_TD_8913145_output.getInt64(i, 6);
                int64_t _fri_sales3569 = tbl_Aggregate_TD_8913145_output.getInt64(i, 7);
                int64_t _sat_sales3570 = tbl_Aggregate_TD_8913145_output.getInt64(i, 8);
                tbl_JOIN_INNER_TD_7649616_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_id3600_n);
                tbl_JOIN_INNER_TD_7649616_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 1, _sun_sales3564);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 2, _mon_sales3565);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 3, _tue_sales3566);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 4, _wed_sales3567);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 5, _thu_sales3568);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 6, _fri_sales3569);
                tbl_JOIN_INNER_TD_7649616_output.setInt64(r, 7, _sat_sales3570);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7649616_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7649616_output #Row: " << tbl_JOIN_INNER_TD_7649616_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7297408(Table &tbl_SerializeFromObject_TD_8781349_input, Table &tbl_Filter_TD_7297408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#3574) AND ((d_month_seq#3574 >= 1212) AND (d_month_seq#3574 <= 1223))) AND isnotnull(d_week_seq#3575)))
    // Input: ListBuffer(d_week_seq#3575, d_month_seq#3574)
    // Output: ListBuffer(d_week_seq#3575)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8781349_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq3574 = tbl_SerializeFromObject_TD_8781349_input.getInt32(i, 1);
        int32_t _d_week_seq3575 = tbl_SerializeFromObject_TD_8781349_input.getInt32(i, 0);
        if (((_d_month_seq3574!= 0) && ((_d_month_seq3574 >= 1212) && (_d_month_seq3574 <= 1223))) && (_d_week_seq3575!= 0)) {
            int32_t _d_week_seq3575_t = tbl_SerializeFromObject_TD_8781349_input.getInt32(i, 0);
            tbl_Filter_TD_7297408_output.setInt32(r, 0, _d_week_seq3575_t);
            r++;
        }
    }
    tbl_Filter_TD_7297408_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7297408_output #Row: " << tbl_Filter_TD_7297408_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7873929_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_7873929_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7873929_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7873929_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_7873929_payload_leftMajor {
    int32_t _d_week_seq124;
    int32_t _ss_store_sk1213;
    int64_t _sun_sales3564;
    int64_t _mon_sales3565;
    int64_t _tue_sales3566;
    int64_t _wed_sales3567;
    int64_t _thu_sales3568;
    int64_t _fri_sales3569;
    int64_t _sat_sales3570;
};
struct SW_JOIN_INNER_TD_7873929_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_7873929_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7873929_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7873929_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_7873929_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_id379;
    std::string _s_store_name383;
};
void SW_JOIN_INNER_TD_7873929(Table &tbl_Aggregate_TD_8828940_output, Table &tbl_Filter_TD_884436_output, Table &tbl_JOIN_INNER_TD_7873929_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(d_week_seq#124, ss_store_sk#1213, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    // Right Table: ListBuffer(s_store_sk#378, s_store_id#379, s_store_name#383)
    // Output Table: ListBuffer(d_week_seq#124, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570, s_store_id#379, s_store_name#383)
    int left_nrow = tbl_Aggregate_TD_8828940_output.getNumRow();
    int right_nrow = tbl_Filter_TD_884436_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7873929_key_leftMajor, SW_JOIN_INNER_TD_7873929_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_8828940_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_Aggregate_TD_8828940_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7873929_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _d_week_seq124 = tbl_Aggregate_TD_8828940_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_Aggregate_TD_8828940_output.getInt32(i, 1);
            int64_t _sun_sales3564 = tbl_Aggregate_TD_8828940_output.getInt64(i, 2);
            int64_t _mon_sales3565 = tbl_Aggregate_TD_8828940_output.getInt64(i, 3);
            int64_t _tue_sales3566 = tbl_Aggregate_TD_8828940_output.getInt64(i, 4);
            int64_t _wed_sales3567 = tbl_Aggregate_TD_8828940_output.getInt64(i, 5);
            int64_t _thu_sales3568 = tbl_Aggregate_TD_8828940_output.getInt64(i, 6);
            int64_t _fri_sales3569 = tbl_Aggregate_TD_8828940_output.getInt64(i, 7);
            int64_t _sat_sales3570 = tbl_Aggregate_TD_8828940_output.getInt64(i, 8);
            SW_JOIN_INNER_TD_7873929_payload_leftMajor payloadA{_d_week_seq124, _ss_store_sk1213, _sun_sales3564, _mon_sales3565, _tue_sales3566, _wed_sales3567, _thu_sales3568, _fri_sales3569, _sat_sales3570};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_884436_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_884436_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7873929_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _sun_sales3564 = (it->second)._sun_sales3564;
                int64_t _mon_sales3565 = (it->second)._mon_sales3565;
                int64_t _tue_sales3566 = (it->second)._tue_sales3566;
                int64_t _wed_sales3567 = (it->second)._wed_sales3567;
                int64_t _thu_sales3568 = (it->second)._thu_sales3568;
                int64_t _fri_sales3569 = (it->second)._fri_sales3569;
                int64_t _sat_sales3570 = (it->second)._sat_sales3570;
                int32_t _s_store_sk378 = tbl_Filter_TD_884436_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_884436_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_884436_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                tbl_JOIN_INNER_TD_7873929_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 1, _sun_sales3564);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 2, _mon_sales3565);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 3, _tue_sales3566);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 4, _wed_sales3567);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 5, _thu_sales3568);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 6, _fri_sales3569);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 7, _sat_sales3570);
                tbl_JOIN_INNER_TD_7873929_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_id379_n);
                tbl_JOIN_INNER_TD_7873929_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name383_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7873929_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7873929_key_rightMajor, SW_JOIN_INNER_TD_7873929_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_884436_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_884436_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7873929_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_884436_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_884436_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_884436_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            SW_JOIN_INNER_TD_7873929_payload_rightMajor payloadA{_s_store_sk378, _s_store_id379, _s_store_name383};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_8828940_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_Aggregate_TD_8828940_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7873929_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                int32_t _d_week_seq124 = tbl_Aggregate_TD_8828940_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_Aggregate_TD_8828940_output.getInt32(i, 1);
                int64_t _sun_sales3564 = tbl_Aggregate_TD_8828940_output.getInt64(i, 2);
                int64_t _mon_sales3565 = tbl_Aggregate_TD_8828940_output.getInt64(i, 3);
                int64_t _tue_sales3566 = tbl_Aggregate_TD_8828940_output.getInt64(i, 4);
                int64_t _wed_sales3567 = tbl_Aggregate_TD_8828940_output.getInt64(i, 5);
                int64_t _thu_sales3568 = tbl_Aggregate_TD_8828940_output.getInt64(i, 6);
                int64_t _fri_sales3569 = tbl_Aggregate_TD_8828940_output.getInt64(i, 7);
                int64_t _sat_sales3570 = tbl_Aggregate_TD_8828940_output.getInt64(i, 8);
                tbl_JOIN_INNER_TD_7873929_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_id379_n);
                tbl_JOIN_INNER_TD_7873929_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name383_n);
                tbl_JOIN_INNER_TD_7873929_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 1, _sun_sales3564);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 2, _mon_sales3565);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 3, _tue_sales3566);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 4, _wed_sales3567);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 5, _thu_sales3568);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 6, _fri_sales3569);
                tbl_JOIN_INNER_TD_7873929_output.setInt64(r, 7, _sat_sales3570);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7873929_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7873929_output #Row: " << tbl_JOIN_INNER_TD_7873929_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6360733_key_leftMajor {
    int32_t _d_week_seq124;
    bool operator==(const SW_JOIN_INNER_TD_6360733_key_leftMajor& other) const {
        return ((_d_week_seq124 == other._d_week_seq124));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6360733_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6360733_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq124));
    }
};
}
struct SW_JOIN_INNER_TD_6360733_payload_leftMajor {
    int32_t _d_week_seq124;
    int64_t _sun_sales3564;
    int64_t _mon_sales3565;
    int64_t _tue_sales3566;
    int64_t _wed_sales3567;
    int64_t _thu_sales3568;
    int64_t _fri_sales3569;
    int64_t _sat_sales3570;
    std::string _s_store_id3600;
};
struct SW_JOIN_INNER_TD_6360733_key_rightMajor {
    int32_t _d_week_seq3632;
    bool operator==(const SW_JOIN_INNER_TD_6360733_key_rightMajor& other) const {
        return ((_d_week_seq3632 == other._d_week_seq3632));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6360733_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6360733_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq3632));
    }
};
}
struct SW_JOIN_INNER_TD_6360733_payload_rightMajor {
    int32_t _d_week_seq3632;
};
void SW_JOIN_INNER_TD_6360733(Table &tbl_JOIN_INNER_TD_7649616_output, Table &tbl_Filter_TD_7229147_output, Table &tbl_JOIN_INNER_TD_6360733_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_week_seq#3632 = d_week_seq#124))
    // Left Table: ListBuffer(d_week_seq#124, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570, s_store_id#3600)
    // Right Table: ListBuffer(d_week_seq#3632)
    // Output Table: ListBuffer(d_week_seq#124, s_store_id#3600, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    int left_nrow = tbl_JOIN_INNER_TD_7649616_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7229147_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6360733_key_leftMajor, SW_JOIN_INNER_TD_6360733_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7649616_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq124_k = tbl_JOIN_INNER_TD_7649616_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6360733_key_leftMajor keyA{_d_week_seq124_k};
            int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_7649616_output.getInt32(i, 0);
            int64_t _sun_sales3564 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 1);
            int64_t _mon_sales3565 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 2);
            int64_t _tue_sales3566 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 3);
            int64_t _wed_sales3567 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 4);
            int64_t _thu_sales3568 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 5);
            int64_t _fri_sales3569 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 6);
            int64_t _sat_sales3570 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600_n = tbl_JOIN_INNER_TD_7649616_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _s_store_id3600 = std::string(_s_store_id3600_n.data());
            SW_JOIN_INNER_TD_6360733_payload_leftMajor payloadA{_d_week_seq124, _sun_sales3564, _mon_sales3565, _tue_sales3566, _wed_sales3567, _thu_sales3568, _fri_sales3569, _sat_sales3570, _s_store_id3600};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7229147_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq3632_k = tbl_Filter_TD_7229147_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6360733_key_leftMajor{_d_week_seq3632_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int64_t _sun_sales3564 = (it->second)._sun_sales3564;
                int64_t _mon_sales3565 = (it->second)._mon_sales3565;
                int64_t _tue_sales3566 = (it->second)._tue_sales3566;
                int64_t _wed_sales3567 = (it->second)._wed_sales3567;
                int64_t _thu_sales3568 = (it->second)._thu_sales3568;
                int64_t _fri_sales3569 = (it->second)._fri_sales3569;
                int64_t _sat_sales3570 = (it->second)._sat_sales3570;
                std::string _s_store_id3600 = (it->second)._s_store_id3600;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600_n{};
                memcpy(_s_store_id3600_n.data(), (_s_store_id3600).data(), (_s_store_id3600).length());
                int32_t _d_week_seq3632 = tbl_Filter_TD_7229147_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6360733_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 2, _sun_sales3564);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 3, _mon_sales3565);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 4, _tue_sales3566);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 5, _wed_sales3567);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 6, _thu_sales3568);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 7, _fri_sales3569);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 8, _sat_sales3570);
                tbl_JOIN_INNER_TD_6360733_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id3600_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6360733_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6360733_key_rightMajor, SW_JOIN_INNER_TD_6360733_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7229147_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq3632_k = tbl_Filter_TD_7229147_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6360733_key_rightMajor keyA{_d_week_seq3632_k};
            int32_t _d_week_seq3632 = tbl_Filter_TD_7229147_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6360733_payload_rightMajor payloadA{_d_week_seq3632};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7649616_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq124_k = tbl_JOIN_INNER_TD_7649616_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6360733_key_rightMajor{_d_week_seq124_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq3632 = (it->second)._d_week_seq3632;
                int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_7649616_output.getInt32(i, 0);
                int64_t _sun_sales3564 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 1);
                int64_t _mon_sales3565 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 2);
                int64_t _tue_sales3566 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 3);
                int64_t _wed_sales3567 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 4);
                int64_t _thu_sales3568 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 5);
                int64_t _fri_sales3569 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 6);
                int64_t _sat_sales3570 = tbl_JOIN_INNER_TD_7649616_output.getInt64(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600_n = tbl_JOIN_INNER_TD_7649616_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _s_store_id3600 = std::string(_s_store_id3600_n.data());
                tbl_JOIN_INNER_TD_6360733_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 2, _sun_sales3564);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 3, _mon_sales3565);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 4, _tue_sales3566);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 5, _wed_sales3567);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 6, _thu_sales3568);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 7, _fri_sales3569);
                tbl_JOIN_INNER_TD_6360733_output.setInt64(r, 8, _sat_sales3570);
                tbl_JOIN_INNER_TD_6360733_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id3600_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6360733_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6360733_output #Row: " << tbl_JOIN_INNER_TD_6360733_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6488639_key_leftMajor {
    int32_t _d_week_seq124;
    bool operator==(const SW_JOIN_INNER_TD_6488639_key_leftMajor& other) const {
        return ((_d_week_seq124 == other._d_week_seq124));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6488639_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6488639_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq124));
    }
};
}
struct SW_JOIN_INNER_TD_6488639_payload_leftMajor {
    int32_t _d_week_seq124;
    int64_t _sun_sales3564;
    int64_t _mon_sales3565;
    int64_t _tue_sales3566;
    int64_t _wed_sales3567;
    int64_t _thu_sales3568;
    int64_t _fri_sales3569;
    int64_t _sat_sales3570;
    std::string _s_store_id379;
    std::string _s_store_name383;
};
struct SW_JOIN_INNER_TD_6488639_key_rightMajor {
    int32_t _d_week_seq3575;
    bool operator==(const SW_JOIN_INNER_TD_6488639_key_rightMajor& other) const {
        return ((_d_week_seq3575 == other._d_week_seq3575));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6488639_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6488639_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq3575));
    }
};
}
struct SW_JOIN_INNER_TD_6488639_payload_rightMajor {
    int32_t _d_week_seq3575;
};
void SW_JOIN_INNER_TD_6488639(Table &tbl_JOIN_INNER_TD_7873929_output, Table &tbl_Filter_TD_7297408_output, Table &tbl_JOIN_INNER_TD_6488639_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_week_seq#3575 = d_week_seq#124))
    // Left Table: ListBuffer(d_week_seq#124, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570, s_store_id#379, s_store_name#383)
    // Right Table: ListBuffer(d_week_seq#3575)
    // Output Table: ListBuffer(s_store_name#383, d_week_seq#124, s_store_id#379, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    int left_nrow = tbl_JOIN_INNER_TD_7873929_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7297408_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6488639_key_leftMajor, SW_JOIN_INNER_TD_6488639_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7873929_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq124_k = tbl_JOIN_INNER_TD_7873929_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6488639_key_leftMajor keyA{_d_week_seq124_k};
            int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_7873929_output.getInt32(i, 0);
            int64_t _sun_sales3564 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 1);
            int64_t _mon_sales3565 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 2);
            int64_t _tue_sales3566 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 3);
            int64_t _wed_sales3567 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 4);
            int64_t _thu_sales3568 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 5);
            int64_t _fri_sales3569 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 6);
            int64_t _sat_sales3570 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_7873929_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_7873929_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            SW_JOIN_INNER_TD_6488639_payload_leftMajor payloadA{_d_week_seq124, _sun_sales3564, _mon_sales3565, _tue_sales3566, _wed_sales3567, _thu_sales3568, _fri_sales3569, _sat_sales3570, _s_store_id379, _s_store_name383};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7297408_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq3575_k = tbl_Filter_TD_7297408_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6488639_key_leftMajor{_d_week_seq3575_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int64_t _sun_sales3564 = (it->second)._sun_sales3564;
                int64_t _mon_sales3565 = (it->second)._mon_sales3565;
                int64_t _tue_sales3566 = (it->second)._tue_sales3566;
                int64_t _wed_sales3567 = (it->second)._wed_sales3567;
                int64_t _thu_sales3568 = (it->second)._thu_sales3568;
                int64_t _fri_sales3569 = (it->second)._fri_sales3569;
                int64_t _sat_sales3570 = (it->second)._sat_sales3570;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                int32_t _d_week_seq3575 = tbl_Filter_TD_7297408_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6488639_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 3, _sun_sales3564);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 4, _mon_sales3565);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 5, _tue_sales3566);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 6, _wed_sales3567);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 7, _thu_sales3568);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 8, _fri_sales3569);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 9, _sat_sales3570);
                tbl_JOIN_INNER_TD_6488639_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_id379_n);
                tbl_JOIN_INNER_TD_6488639_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6488639_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6488639_key_rightMajor, SW_JOIN_INNER_TD_6488639_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7297408_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq3575_k = tbl_Filter_TD_7297408_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6488639_key_rightMajor keyA{_d_week_seq3575_k};
            int32_t _d_week_seq3575 = tbl_Filter_TD_7297408_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6488639_payload_rightMajor payloadA{_d_week_seq3575};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7873929_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq124_k = tbl_JOIN_INNER_TD_7873929_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6488639_key_rightMajor{_d_week_seq124_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq3575 = (it->second)._d_week_seq3575;
                int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_7873929_output.getInt32(i, 0);
                int64_t _sun_sales3564 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 1);
                int64_t _mon_sales3565 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 2);
                int64_t _tue_sales3566 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 3);
                int64_t _wed_sales3567 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 4);
                int64_t _thu_sales3568 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 5);
                int64_t _fri_sales3569 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 6);
                int64_t _sat_sales3570 = tbl_JOIN_INNER_TD_7873929_output.getInt64(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_JOIN_INNER_TD_7873929_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_7873929_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                tbl_JOIN_INNER_TD_6488639_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 3, _sun_sales3564);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 4, _mon_sales3565);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 5, _tue_sales3566);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 6, _wed_sales3567);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 7, _thu_sales3568);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 8, _fri_sales3569);
                tbl_JOIN_INNER_TD_6488639_output.setInt64(r, 9, _sat_sales3570);
                tbl_JOIN_INNER_TD_6488639_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_id379_n);
                tbl_JOIN_INNER_TD_6488639_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6488639_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6488639_output #Row: " << tbl_JOIN_INNER_TD_6488639_output.getNumRow() << std::endl;
}

void SW_Project_TD_5751441(Table &tbl_JOIN_INNER_TD_6360733_output, Table &tbl_Project_TD_5751441_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(d_week_seq#124 AS d_week_seq2#3555, s_store_id#3600 AS s_store_id2#3556, sun_sales#3564 AS sun_sales2#3557, mon_sales#3565 AS mon_sales2#3558, tue_sales#3566 AS tue_sales2#3559, wed_sales#3567 AS wed_sales2#3560, thu_sales#3568 AS thu_sales2#3561, fri_sales#3569 AS fri_sales2#3562, sat_sales#3570 AS sat_sales2#3563)
    // Input: ListBuffer(d_week_seq#124, s_store_id#3600, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    // Output: ListBuffer(d_week_seq2#3555, s_store_id2#3556, sun_sales2#3557, mon_sales2#3558, tue_sales2#3559, wed_sales2#3560, thu_sales2#3561, fri_sales2#3562, sat_sales2#3563)
    int nrow1 = tbl_JOIN_INNER_TD_6360733_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_6360733_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id3600 = tbl_JOIN_INNER_TD_6360733_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _sun_sales3564 = tbl_JOIN_INNER_TD_6360733_output.getInt64(i, 2);
        int64_t _mon_sales3565 = tbl_JOIN_INNER_TD_6360733_output.getInt64(i, 3);
        int64_t _tue_sales3566 = tbl_JOIN_INNER_TD_6360733_output.getInt64(i, 4);
        int64_t _wed_sales3567 = tbl_JOIN_INNER_TD_6360733_output.getInt64(i, 5);
        int64_t _thu_sales3568 = tbl_JOIN_INNER_TD_6360733_output.getInt64(i, 6);
        int64_t _fri_sales3569 = tbl_JOIN_INNER_TD_6360733_output.getInt64(i, 7);
        int64_t _sat_sales3570 = tbl_JOIN_INNER_TD_6360733_output.getInt64(i, 8);
        int32_t _d_week_seq23555 = _d_week_seq124;
        tbl_Project_TD_5751441_output.setInt32(i, 0, _d_week_seq23555);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id23556 = _s_store_id3600;
        tbl_Project_TD_5751441_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _s_store_id23556);
        int64_t _sun_sales23557 = _sun_sales3564;
        tbl_Project_TD_5751441_output.setInt64(i, 2, _sun_sales23557);
        int64_t _mon_sales23558 = _mon_sales3565;
        tbl_Project_TD_5751441_output.setInt64(i, 3, _mon_sales23558);
        int64_t _tue_sales23559 = _tue_sales3566;
        tbl_Project_TD_5751441_output.setInt64(i, 4, _tue_sales23559);
        int64_t _wed_sales23560 = _wed_sales3567;
        tbl_Project_TD_5751441_output.setInt64(i, 5, _wed_sales23560);
        int64_t _thu_sales23561 = _thu_sales3568;
        tbl_Project_TD_5751441_output.setInt64(i, 6, _thu_sales23561);
        int64_t _fri_sales23562 = _fri_sales3569;
        tbl_Project_TD_5751441_output.setInt64(i, 7, _fri_sales23562);
        int64_t _sat_sales23563 = _sat_sales3570;
        tbl_Project_TD_5751441_output.setInt64(i, 8, _sat_sales23563);
    }
    tbl_Project_TD_5751441_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5751441_output #Row: " << tbl_Project_TD_5751441_output.getNumRow() << std::endl;
}

void SW_Project_TD_5200571(Table &tbl_JOIN_INNER_TD_6488639_output, Table &tbl_Project_TD_5200571_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(s_store_name#383 AS s_store_name1#3544, d_week_seq#124 AS d_week_seq1#3545, s_store_id#379 AS s_store_id1#3546, sun_sales#3564 AS sun_sales1#3547, mon_sales#3565 AS mon_sales1#3548, tue_sales#3566 AS tue_sales1#3549, wed_sales#3567 AS wed_sales1#3550, thu_sales#3568 AS thu_sales1#3551, fri_sales#3569 AS fri_sales1#3552, sat_sales#3570 AS sat_sales1#3553)
    // Input: ListBuffer(s_store_name#383, d_week_seq#124, s_store_id#379, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    // Output: ListBuffer(s_store_name1#3544, d_week_seq1#3545, s_store_id1#3546, sun_sales1#3547, mon_sales1#3548, tue_sales1#3549, wed_sales1#3550, thu_sales1#3551, fri_sales1#3552, sat_sales1#3553)
    int nrow1 = tbl_JOIN_INNER_TD_6488639_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_6488639_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_6488639_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379 = tbl_JOIN_INNER_TD_6488639_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _sun_sales3564 = tbl_JOIN_INNER_TD_6488639_output.getInt64(i, 3);
        int64_t _mon_sales3565 = tbl_JOIN_INNER_TD_6488639_output.getInt64(i, 4);
        int64_t _tue_sales3566 = tbl_JOIN_INNER_TD_6488639_output.getInt64(i, 5);
        int64_t _wed_sales3567 = tbl_JOIN_INNER_TD_6488639_output.getInt64(i, 6);
        int64_t _thu_sales3568 = tbl_JOIN_INNER_TD_6488639_output.getInt64(i, 7);
        int64_t _fri_sales3569 = tbl_JOIN_INNER_TD_6488639_output.getInt64(i, 8);
        int64_t _sat_sales3570 = tbl_JOIN_INNER_TD_6488639_output.getInt64(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544 = _s_store_name383;
        tbl_Project_TD_5200571_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _s_store_name13544);
        int32_t _d_week_seq13545 = _d_week_seq124;
        tbl_Project_TD_5200571_output.setInt32(i, 1, _d_week_seq13545);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546 = _s_store_id379;
        tbl_Project_TD_5200571_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_id13546);
        int64_t _sun_sales13547 = _sun_sales3564;
        tbl_Project_TD_5200571_output.setInt64(i, 3, _sun_sales13547);
        int64_t _mon_sales13548 = _mon_sales3565;
        tbl_Project_TD_5200571_output.setInt64(i, 4, _mon_sales13548);
        int64_t _tue_sales13549 = _tue_sales3566;
        tbl_Project_TD_5200571_output.setInt64(i, 5, _tue_sales13549);
        int64_t _wed_sales13550 = _wed_sales3567;
        tbl_Project_TD_5200571_output.setInt64(i, 6, _wed_sales13550);
        int64_t _thu_sales13551 = _thu_sales3568;
        tbl_Project_TD_5200571_output.setInt64(i, 7, _thu_sales13551);
        int64_t _fri_sales13552 = _fri_sales3569;
        tbl_Project_TD_5200571_output.setInt64(i, 8, _fri_sales13552);
        int64_t _sat_sales13553 = _sat_sales3570;
        tbl_Project_TD_5200571_output.setInt64(i, 9, _sat_sales13553);
    }
    tbl_Project_TD_5200571_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5200571_output #Row: " << tbl_Project_TD_5200571_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4344734_key_leftMajor {
    std::string _s_store_id13546;
    int32_t _d_week_seq13545;
    bool operator==(const SW_JOIN_INNER_TD_4344734_key_leftMajor& other) const {
        return ((_s_store_id13546 == other._s_store_id13546) && (_d_week_seq13545 == other._d_week_seq13545));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4344734_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4344734_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._s_store_id13546)) + (hash<int32_t>()(k._d_week_seq13545));
    }
};
}
struct SW_JOIN_INNER_TD_4344734_payload_leftMajor {
    std::string _s_store_name13544;
    int32_t _d_week_seq13545;
    std::string _s_store_id13546;
    int64_t _sun_sales13547;
    int64_t _mon_sales13548;
    int64_t _tue_sales13549;
    int64_t _wed_sales13550;
    int64_t _thu_sales13551;
    int64_t _fri_sales13552;
    int64_t _sat_sales13553;
};
struct SW_JOIN_INNER_TD_4344734_key_rightMajor {
    std::string _s_store_id23556;
    int32_t _d_week_seq23555;
    bool operator==(const SW_JOIN_INNER_TD_4344734_key_rightMajor& other) const {
        return ((_s_store_id23556 == other._s_store_id23556) && (_d_week_seq23555 == other._d_week_seq23555));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4344734_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4344734_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._s_store_id23556)) + (hash<int32_t>()(k._d_week_seq23555));
    }
};
}
struct SW_JOIN_INNER_TD_4344734_payload_rightMajor {
    int32_t _d_week_seq23555;
    std::string _s_store_id23556;
    int64_t _sun_sales23557;
    int64_t _mon_sales23558;
    int64_t _tue_sales23559;
    int64_t _wed_sales23560;
    int64_t _thu_sales23561;
    int64_t _fri_sales23562;
    int64_t _sat_sales23563;
};
void SW_JOIN_INNER_TD_4344734(Table &tbl_Project_TD_5200571_output, Table &tbl_Project_TD_5751441_output, Table &tbl_JOIN_INNER_TD_4344734_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((s_store_id1#3546 = s_store_id2#3556) AND (d_week_seq1#3545 = (d_week_seq2#3555 - 52))))
    // Left Table: ListBuffer(s_store_name1#3544, d_week_seq1#3545, s_store_id1#3546, sun_sales1#3547, mon_sales1#3548, tue_sales1#3549, wed_sales1#3550, thu_sales1#3551, fri_sales1#3552, sat_sales1#3553)
    // Right Table: ListBuffer(d_week_seq2#3555, s_store_id2#3556, sun_sales2#3557, mon_sales2#3558, tue_sales2#3559, wed_sales2#3560, thu_sales2#3561, fri_sales2#3562, sat_sales2#3563)
    // Output Table: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, sun_sales1#3547, sun_sales2#3557, mon_sales1#3548, mon_sales2#3558, tue_sales1#3549, tue_sales2#3559, wed_sales1#3550, wed_sales2#3560, thu_sales1#3551, thu_sales2#3561, fri_sales1#3552, fri_sales2#3562, sat_sales1#3553, sat_sales2#3563)
    int left_nrow = tbl_Project_TD_5200571_output.getNumRow();
    int right_nrow = tbl_Project_TD_5751441_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4344734_key_leftMajor, SW_JOIN_INNER_TD_4344734_payload_leftMajor> ht1;
        int nrow1 = tbl_Project_TD_5200571_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546_k_n = tbl_Project_TD_5200571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_id13546_k = std::string(_s_store_id13546_k_n.data());
            int32_t _d_week_seq13545_k = tbl_Project_TD_5200571_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4344734_key_leftMajor keyA{_s_store_id13546_k, _d_week_seq13545_k};
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544_n = tbl_Project_TD_5200571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _s_store_name13544 = std::string(_s_store_name13544_n.data());
            int32_t _d_week_seq13545 = tbl_Project_TD_5200571_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546_n = tbl_Project_TD_5200571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_id13546 = std::string(_s_store_id13546_n.data());
            int64_t _sun_sales13547 = tbl_Project_TD_5200571_output.getInt64(i, 3);
            int64_t _mon_sales13548 = tbl_Project_TD_5200571_output.getInt64(i, 4);
            int64_t _tue_sales13549 = tbl_Project_TD_5200571_output.getInt64(i, 5);
            int64_t _wed_sales13550 = tbl_Project_TD_5200571_output.getInt64(i, 6);
            int64_t _thu_sales13551 = tbl_Project_TD_5200571_output.getInt64(i, 7);
            int64_t _fri_sales13552 = tbl_Project_TD_5200571_output.getInt64(i, 8);
            int64_t _sat_sales13553 = tbl_Project_TD_5200571_output.getInt64(i, 9);
            SW_JOIN_INNER_TD_4344734_payload_leftMajor payloadA{_s_store_name13544, _d_week_seq13545, _s_store_id13546, _sun_sales13547, _mon_sales13548, _tue_sales13549, _wed_sales13550, _thu_sales13551, _fri_sales13552, _sat_sales13553};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5751441_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id23556_k_n = tbl_Project_TD_5751441_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id23556_k = std::string(_s_store_id23556_k_n.data());
            int32_t _d_week_seq23555_k = tbl_Project_TD_5751441_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4344734_key_leftMajor{_s_store_id23556_k, _d_week_seq23555_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _s_store_name13544 = (it->second)._s_store_name13544;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544_n{};
                memcpy(_s_store_name13544_n.data(), (_s_store_name13544).data(), (_s_store_name13544).length());
                int32_t _d_week_seq13545 = (it->second)._d_week_seq13545;
                std::string _s_store_id13546 = (it->second)._s_store_id13546;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546_n{};
                memcpy(_s_store_id13546_n.data(), (_s_store_id13546).data(), (_s_store_id13546).length());
                int64_t _sun_sales13547 = (it->second)._sun_sales13547;
                int64_t _mon_sales13548 = (it->second)._mon_sales13548;
                int64_t _tue_sales13549 = (it->second)._tue_sales13549;
                int64_t _wed_sales13550 = (it->second)._wed_sales13550;
                int64_t _thu_sales13551 = (it->second)._thu_sales13551;
                int64_t _fri_sales13552 = (it->second)._fri_sales13552;
                int64_t _sat_sales13553 = (it->second)._sat_sales13553;
                int32_t _d_week_seq23555 = tbl_Project_TD_5751441_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id23556_n = tbl_Project_TD_5751441_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id23556 = std::string(_s_store_id23556_n.data());
                int64_t _sun_sales23557 = tbl_Project_TD_5751441_output.getInt64(i, 2);
                int64_t _mon_sales23558 = tbl_Project_TD_5751441_output.getInt64(i, 3);
                int64_t _tue_sales23559 = tbl_Project_TD_5751441_output.getInt64(i, 4);
                int64_t _wed_sales23560 = tbl_Project_TD_5751441_output.getInt64(i, 5);
                int64_t _thu_sales23561 = tbl_Project_TD_5751441_output.getInt64(i, 6);
                int64_t _fri_sales23562 = tbl_Project_TD_5751441_output.getInt64(i, 7);
                int64_t _sat_sales23563 = tbl_Project_TD_5751441_output.getInt64(i, 8);
                if (_d_week_seq13545 == (_d_week_seq23555 - 52)) {
                    tbl_JOIN_INNER_TD_4344734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name13544_n);
                    tbl_JOIN_INNER_TD_4344734_output.setInt32(r, 2, _d_week_seq13545);
                    tbl_JOIN_INNER_TD_4344734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id13546_n);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 3, _sun_sales13547);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 5, _mon_sales13548);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 7, _tue_sales13549);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 9, _wed_sales13550);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 11, _thu_sales13551);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 13, _fri_sales13552);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 15, _sat_sales13553);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 4, _sun_sales23557);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 6, _mon_sales23558);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 8, _tue_sales23559);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 10, _wed_sales23560);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 12, _thu_sales23561);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 14, _fri_sales23562);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 16, _sat_sales23563);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4344734_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4344734_key_rightMajor, SW_JOIN_INNER_TD_4344734_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5751441_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id23556_k_n = tbl_Project_TD_5751441_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id23556_k = std::string(_s_store_id23556_k_n.data());
            int32_t _d_week_seq23555_k = tbl_Project_TD_5751441_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4344734_key_rightMajor keyA{_s_store_id23556_k, _d_week_seq23555_k};
            int32_t _d_week_seq23555 = tbl_Project_TD_5751441_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id23556_n = tbl_Project_TD_5751441_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id23556 = std::string(_s_store_id23556_n.data());
            int64_t _sun_sales23557 = tbl_Project_TD_5751441_output.getInt64(i, 2);
            int64_t _mon_sales23558 = tbl_Project_TD_5751441_output.getInt64(i, 3);
            int64_t _tue_sales23559 = tbl_Project_TD_5751441_output.getInt64(i, 4);
            int64_t _wed_sales23560 = tbl_Project_TD_5751441_output.getInt64(i, 5);
            int64_t _thu_sales23561 = tbl_Project_TD_5751441_output.getInt64(i, 6);
            int64_t _fri_sales23562 = tbl_Project_TD_5751441_output.getInt64(i, 7);
            int64_t _sat_sales23563 = tbl_Project_TD_5751441_output.getInt64(i, 8);
            SW_JOIN_INNER_TD_4344734_payload_rightMajor payloadA{_d_week_seq23555, _s_store_id23556, _sun_sales23557, _mon_sales23558, _tue_sales23559, _wed_sales23560, _thu_sales23561, _fri_sales23562, _sat_sales23563};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5200571_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546_k_n = tbl_Project_TD_5200571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_id13546_k = std::string(_s_store_id13546_k_n.data());
            int32_t _d_week_seq13545_k = tbl_Project_TD_5200571_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4344734_key_rightMajor{_s_store_id13546_k, _d_week_seq13545_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq23555 = (it->second)._d_week_seq23555;
                std::string _s_store_id23556 = (it->second)._s_store_id23556;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id23556_n{};
                memcpy(_s_store_id23556_n.data(), (_s_store_id23556).data(), (_s_store_id23556).length());
                int64_t _sun_sales23557 = (it->second)._sun_sales23557;
                int64_t _mon_sales23558 = (it->second)._mon_sales23558;
                int64_t _tue_sales23559 = (it->second)._tue_sales23559;
                int64_t _wed_sales23560 = (it->second)._wed_sales23560;
                int64_t _thu_sales23561 = (it->second)._thu_sales23561;
                int64_t _fri_sales23562 = (it->second)._fri_sales23562;
                int64_t _sat_sales23563 = (it->second)._sat_sales23563;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544_n = tbl_Project_TD_5200571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _s_store_name13544 = std::string(_s_store_name13544_n.data());
                int32_t _d_week_seq13545 = tbl_Project_TD_5200571_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546_n = tbl_Project_TD_5200571_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_id13546 = std::string(_s_store_id13546_n.data());
                int64_t _sun_sales13547 = tbl_Project_TD_5200571_output.getInt64(i, 3);
                int64_t _mon_sales13548 = tbl_Project_TD_5200571_output.getInt64(i, 4);
                int64_t _tue_sales13549 = tbl_Project_TD_5200571_output.getInt64(i, 5);
                int64_t _wed_sales13550 = tbl_Project_TD_5200571_output.getInt64(i, 6);
                int64_t _thu_sales13551 = tbl_Project_TD_5200571_output.getInt64(i, 7);
                int64_t _fri_sales13552 = tbl_Project_TD_5200571_output.getInt64(i, 8);
                int64_t _sat_sales13553 = tbl_Project_TD_5200571_output.getInt64(i, 9);
                if (_d_week_seq13545 == (_d_week_seq23555 - 52)) {
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 4, _sun_sales23557);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 6, _mon_sales23558);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 8, _tue_sales23559);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 10, _wed_sales23560);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 12, _thu_sales23561);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 14, _fri_sales23562);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 16, _sat_sales23563);
                    tbl_JOIN_INNER_TD_4344734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name13544_n);
                    tbl_JOIN_INNER_TD_4344734_output.setInt32(r, 2, _d_week_seq13545);
                    tbl_JOIN_INNER_TD_4344734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id13546_n);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 3, _sun_sales13547);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 5, _mon_sales13548);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 7, _tue_sales13549);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 9, _wed_sales13550);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 11, _thu_sales13551);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 13, _fri_sales13552);
                    tbl_JOIN_INNER_TD_4344734_output.setInt64(r, 15, _sat_sales13553);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4344734_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4344734_output #Row: " << tbl_JOIN_INNER_TD_4344734_output.getNumRow() << std::endl;
}

void SW_Project_TD_3897509(Table &tbl_JOIN_INNER_TD_4344734_output, Table &tbl_Project_TD_3897509_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(sun_sales1#3547) / promote_precision(sun_sales2#3557)), DecimalType(37,20), true) AS (sun_sales1 / sun_sales2)#3663, CheckOverflow((promote_precision(mon_sales1#3548) / promote_precision(mon_sales2#3558)), DecimalType(37,20), true) AS (mon_sales1 / mon_sales2)#3664, CheckOverflow((promote_precision(tue_sales1#3549) / promote_precision(tue_sales2#3559)), DecimalType(37,20), true) AS (tue_sales1 / tue_sales2)#3665, CheckOverflow((promote_precision(wed_sales1#3550) / promote_precision(wed_sales2#3560)), DecimalType(37,20), true) AS (wed_sales1 / wed_sales2)#3666, CheckOverflow((promote_precision(thu_sales1#3551) / promote_precision(thu_sales2#3561)), DecimalType(37,20), true) AS (thu_sales1 / thu_sales2)#3667, CheckOverflow((promote_precision(fri_sales1#3552) / promote_precision(fri_sales2#3562)), DecimalType(37,20), true) AS (fri_sales1 / fri_sales2)#3668, CheckOverflow((promote_precision(sat_sales1#3553) / promote_precision(sat_sales2#3563)), DecimalType(37,20), true) AS (sat_sales1 / sat_sales2)#3669)
    // Input: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, sun_sales1#3547, sun_sales2#3557, mon_sales1#3548, mon_sales2#3558, tue_sales1#3549, tue_sales2#3559, wed_sales1#3550, wed_sales2#3560, thu_sales1#3551, thu_sales2#3561, fri_sales1#3552, fri_sales2#3562, sat_sales1#3553, sat_sales2#3563)
    // Output: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, (sun_sales1 / sun_sales2)#3663, (mon_sales1 / mon_sales2)#3664, (tue_sales1 / tue_sales2)#3665, (wed_sales1 / wed_sales2)#3666, (thu_sales1 / thu_sales2)#3667, (fri_sales1 / fri_sales2)#3668, (sat_sales1 / sat_sales2)#3669)
    int nrow1 = tbl_JOIN_INNER_TD_4344734_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544 = tbl_JOIN_INNER_TD_4344734_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546 = tbl_JOIN_INNER_TD_4344734_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_week_seq13545 = tbl_JOIN_INNER_TD_4344734_output.getInt32(i, 2);
        int64_t _sun_sales13547 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 3);
        int64_t _sun_sales23557 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 4);
        int64_t _mon_sales13548 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 5);
        int64_t _mon_sales23558 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 6);
        int64_t _tue_sales13549 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 7);
        int64_t _tue_sales23559 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 8);
        int64_t _wed_sales13550 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 9);
        int64_t _wed_sales23560 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 10);
        int64_t _thu_sales13551 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 11);
        int64_t _thu_sales23561 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 12);
        int64_t _fri_sales13552 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 13);
        int64_t _fri_sales23562 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 14);
        int64_t _sat_sales13553 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 15);
        int64_t _sat_sales23563 = tbl_JOIN_INNER_TD_4344734_output.getInt64(i, 16);
        int64_t _sun_sales23663 = (_sun_sales13547 / _sun_sales23557);
        tbl_Project_TD_3897509_output.setInt64(i, 3, _sun_sales23663);
        int64_t _mon_sales23664 = (_mon_sales13548 / _mon_sales23558);
        tbl_Project_TD_3897509_output.setInt64(i, 4, _mon_sales23664);
        int64_t _tue_sales23665 = (_tue_sales13549 / _tue_sales23559);
        tbl_Project_TD_3897509_output.setInt64(i, 5, _tue_sales23665);
        int64_t _wed_sales23666 = (_wed_sales13550 / _wed_sales23560);
        tbl_Project_TD_3897509_output.setInt64(i, 6, _wed_sales23666);
        int64_t _thu_sales23667 = (_thu_sales13551 / _thu_sales23561);
        tbl_Project_TD_3897509_output.setInt64(i, 7, _thu_sales23667);
        int64_t _fri_sales23668 = (_fri_sales13552 / _fri_sales23562);
        tbl_Project_TD_3897509_output.setInt64(i, 8, _fri_sales23668);
        int64_t _sat_sales23669 = (_sat_sales13553 / _sat_sales23563);
        tbl_Project_TD_3897509_output.setInt64(i, 9, _sat_sales23669);
        tbl_Project_TD_3897509_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _s_store_name13544);
        tbl_Project_TD_3897509_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _s_store_id13546);
        tbl_Project_TD_3897509_output.setInt32(i, 2, _d_week_seq13545);
    }
    tbl_Project_TD_3897509_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3897509_output #Row: " << tbl_Project_TD_3897509_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2975885(Table &tbl_Project_TD_3897509_output, Table &tbl_Sort_TD_2975885_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(s_store_name1#3544 ASC NULLS FIRST, s_store_id1#3546 ASC NULLS FIRST, d_week_seq1#3545 ASC NULLS FIRST)
    // Input: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, (sun_sales1 / sun_sales2)#3663, (mon_sales1 / mon_sales2)#3664, (tue_sales1 / tue_sales2)#3665, (wed_sales1 / wed_sales2)#3666, (thu_sales1 / thu_sales2)#3667, (fri_sales1 / fri_sales2)#3668, (sat_sales1 / sat_sales2)#3669)
    // Output: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, (sun_sales1 / sun_sales2)#3663, (mon_sales1 / mon_sales2)#3664, (tue_sales1 / tue_sales2)#3665, (wed_sales1 / wed_sales2)#3666, (thu_sales1 / thu_sales2)#3667, (fri_sales1 / fri_sales2)#3668, (sat_sales1 / sat_sales2)#3669)
    struct SW_Sort_TD_2975885Row {
        std::string _s_store_name13544;
        std::string _s_store_id13546;
        int32_t _d_week_seq13545;
        int64_t _sun_sales23663;
        int64_t _mon_sales23664;
        int64_t _tue_sales23665;
        int64_t _wed_sales23666;
        int64_t _thu_sales23667;
        int64_t _fri_sales23668;
        int64_t _sat_sales23669;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2975885Row& a, const SW_Sort_TD_2975885Row& b) const { return 
 (a._s_store_name13544 < b._s_store_name13544) || 
 ((a._s_store_name13544 == b._s_store_name13544) && (a._s_store_id13546 < b._s_store_id13546)) || 
 ((a._s_store_name13544 == b._s_store_name13544) && (a._s_store_id13546 == b._s_store_id13546) && (a._d_week_seq13545 < b._d_week_seq13545)); 
}
    }SW_Sort_TD_2975885_order; 

    int nrow1 = tbl_Project_TD_3897509_output.getNumRow();
    std::vector<SW_Sort_TD_2975885Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544 = tbl_Project_TD_3897509_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546 = tbl_Project_TD_3897509_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _d_week_seq13545 = tbl_Project_TD_3897509_output.getInt32(i, 2);
        int64_t _sun_sales23663 = tbl_Project_TD_3897509_output.getInt64(i, 3);
        int64_t _mon_sales23664 = tbl_Project_TD_3897509_output.getInt64(i, 4);
        int64_t _tue_sales23665 = tbl_Project_TD_3897509_output.getInt64(i, 5);
        int64_t _wed_sales23666 = tbl_Project_TD_3897509_output.getInt64(i, 6);
        int64_t _thu_sales23667 = tbl_Project_TD_3897509_output.getInt64(i, 7);
        int64_t _fri_sales23668 = tbl_Project_TD_3897509_output.getInt64(i, 8);
        int64_t _sat_sales23669 = tbl_Project_TD_3897509_output.getInt64(i, 9);
        SW_Sort_TD_2975885Row t = {std::string(_s_store_name13544.data()),std::string(_s_store_id13546.data()),_d_week_seq13545,_sun_sales23663,_mon_sales23664,_tue_sales23665,_wed_sales23666,_thu_sales23667,_fri_sales23668,_sat_sales23669};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2975885_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544{};
        memcpy(_s_store_name13544.data(), (it._s_store_name13544).data(), (it._s_store_name13544).length());
        tbl_Sort_TD_2975885_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _s_store_name13544);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546{};
        memcpy(_s_store_id13546.data(), (it._s_store_id13546).data(), (it._s_store_id13546).length());
        tbl_Sort_TD_2975885_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _s_store_id13546);
        tbl_Sort_TD_2975885_output.setInt32(r, 2, it._d_week_seq13545);
        tbl_Sort_TD_2975885_output.setInt64(r, 3, it._sun_sales23663);
        tbl_Sort_TD_2975885_output.setInt64(r, 4, it._mon_sales23664);
        tbl_Sort_TD_2975885_output.setInt64(r, 5, it._tue_sales23665);
        tbl_Sort_TD_2975885_output.setInt64(r, 6, it._wed_sales23666);
        tbl_Sort_TD_2975885_output.setInt64(r, 7, it._thu_sales23667);
        tbl_Sort_TD_2975885_output.setInt64(r, 8, it._fri_sales23668);
        tbl_Sort_TD_2975885_output.setInt64(r, 9, it._sat_sales23669);
        ++r;
    }
    tbl_Sort_TD_2975885_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2975885_output #Row: " << tbl_Sort_TD_2975885_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1229133(Table &tbl_Sort_TD_2975885_output, Table &tbl_LocalLimit_TD_1229133_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, (sun_sales1 / sun_sales2)#3663, (mon_sales1 / mon_sales2)#3664, (tue_sales1 / tue_sales2)#3665, (wed_sales1 / wed_sales2)#3666, (thu_sales1 / thu_sales2)#3667, (fri_sales1 / fri_sales2)#3668, (sat_sales1 / sat_sales2)#3669)
    // Output: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, (sun_sales1 / sun_sales2)#3663, (mon_sales1 / mon_sales2)#3664, (tue_sales1 / tue_sales2)#3665, (wed_sales1 / wed_sales2)#3666, (thu_sales1 / thu_sales2)#3667, (fri_sales1 / fri_sales2)#3668, (sat_sales1 / sat_sales2)#3669)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544_n = tbl_Sort_TD_2975885_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1229133_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name13544_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546_n = tbl_Sort_TD_2975885_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1229133_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id13546_n);
        tbl_LocalLimit_TD_1229133_output.setInt32(r, 2, tbl_Sort_TD_2975885_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1229133_output.setInt64(r, 3, tbl_Sort_TD_2975885_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1229133_output.setInt64(r, 4, tbl_Sort_TD_2975885_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1229133_output.setInt64(r, 5, tbl_Sort_TD_2975885_output.getInt64(i, 5));
        tbl_LocalLimit_TD_1229133_output.setInt64(r, 6, tbl_Sort_TD_2975885_output.getInt64(i, 6));
        tbl_LocalLimit_TD_1229133_output.setInt64(r, 7, tbl_Sort_TD_2975885_output.getInt64(i, 7));
        tbl_LocalLimit_TD_1229133_output.setInt64(r, 8, tbl_Sort_TD_2975885_output.getInt64(i, 8));
        tbl_LocalLimit_TD_1229133_output.setInt64(r, 9, tbl_Sort_TD_2975885_output.getInt64(i, 9));
        r++;
    }
    tbl_LocalLimit_TD_1229133_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1229133_output #Row: " << tbl_LocalLimit_TD_1229133_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0349849(Table &tbl_LocalLimit_TD_1229133_output, Table &tbl_GlobalLimit_TD_0349849_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, (sun_sales1 / sun_sales2)#3663, (mon_sales1 / mon_sales2)#3664, (tue_sales1 / tue_sales2)#3665, (wed_sales1 / wed_sales2)#3666, (thu_sales1 / thu_sales2)#3667, (fri_sales1 / fri_sales2)#3668, (sat_sales1 / sat_sales2)#3669)
    // Output: ListBuffer(s_store_name1#3544, s_store_id1#3546, d_week_seq1#3545, (sun_sales1 / sun_sales2)#3663, (mon_sales1 / mon_sales2)#3664, (tue_sales1 / tue_sales2)#3665, (wed_sales1 / wed_sales2)#3666, (thu_sales1 / thu_sales2)#3667, (fri_sales1 / fri_sales2)#3668, (sat_sales1 / sat_sales2)#3669)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name13544_n = tbl_LocalLimit_TD_1229133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0349849_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name13544_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id13546_n = tbl_LocalLimit_TD_1229133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0349849_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id13546_n);
        tbl_GlobalLimit_TD_0349849_output.setInt32(r, 2, tbl_LocalLimit_TD_1229133_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0349849_output.setInt64(r, 3, tbl_LocalLimit_TD_1229133_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0349849_output.setInt64(r, 4, tbl_LocalLimit_TD_1229133_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0349849_output.setInt64(r, 5, tbl_LocalLimit_TD_1229133_output.getInt64(i, 5));
        tbl_GlobalLimit_TD_0349849_output.setInt64(r, 6, tbl_LocalLimit_TD_1229133_output.getInt64(i, 6));
        tbl_GlobalLimit_TD_0349849_output.setInt64(r, 7, tbl_LocalLimit_TD_1229133_output.getInt64(i, 7));
        tbl_GlobalLimit_TD_0349849_output.setInt64(r, 8, tbl_LocalLimit_TD_1229133_output.getInt64(i, 8));
        tbl_GlobalLimit_TD_0349849_output.setInt64(r, 9, tbl_LocalLimit_TD_1229133_output.getInt64(i, 9));
        r++;
    }
    tbl_GlobalLimit_TD_0349849_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0349849_output #Row: " << tbl_GlobalLimit_TD_0349849_output.getNumRow() << std::endl;
}

