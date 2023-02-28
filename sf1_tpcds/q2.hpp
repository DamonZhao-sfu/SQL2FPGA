#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_9773239(Table &tbl_SerializeFromObject_TD_10324965_input, Table &tbl_Filter_TD_9773239_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10324965_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10324965_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10324965_input.getInt32(i, 0);
            tbl_Filter_TD_9773239_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int64_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_10324965_input.getInt64(i, 1);
            tbl_Filter_TD_9773239_output.setInt64(r, 1, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_9773239_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9773239_output #Row: " << tbl_Filter_TD_9773239_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9825442(Table &tbl_SerializeFromObject_TD_10585026_input, Table &tbl_Filter_TD_9825442_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#729))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10585026_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10585026_input.getInt32(i, 0);
        if (_ws_sold_date_sk729!= 0) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10585026_input.getInt32(i, 0);
            tbl_Filter_TD_9825442_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int64_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_10585026_input.getInt64(i, 1);
            tbl_Filter_TD_9825442_output.setInt64(r, 1, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_9825442_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9825442_output #Row: " << tbl_Filter_TD_9825442_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9510183(Table &tbl_SerializeFromObject_TD_10592338_input, Table &tbl_Filter_TD_9510183_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10592338_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10592338_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10592338_input.getInt32(i, 0);
            tbl_Filter_TD_9510183_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int64_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_10592338_input.getInt64(i, 1);
            tbl_Filter_TD_9510183_output.setInt64(r, 1, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_9510183_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9510183_output #Row: " << tbl_Filter_TD_9510183_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9936457(Table &tbl_SerializeFromObject_TD_10972201_input, Table &tbl_Filter_TD_9936457_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#729))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10972201_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10972201_input.getInt32(i, 0);
        if (_ws_sold_date_sk729!= 0) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10972201_input.getInt32(i, 0);
            tbl_Filter_TD_9936457_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int64_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_10972201_input.getInt64(i, 1);
            tbl_Filter_TD_9936457_output.setInt64(r, 1, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_9936457_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9936457_output #Row: " << tbl_Filter_TD_9936457_output.getNumRow() << std::endl;
}

void SW_Project_TD_8208729(Table &tbl_Filter_TD_9773239_output, Table &tbl_Project_TD_8208729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_sold_date_sk#1104 AS sold_date_sk#3562, cs_ext_sales_price#1127 AS sales_price#3563)
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    // Output: ListBuffer(sold_date_sk#3562, sales_price#3563)
    int nrow1 = tbl_Filter_TD_9773239_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9773239_output.getInt32(i, 0);
        int64_t _cs_ext_sales_price1127 = tbl_Filter_TD_9773239_output.getInt64(i, 1);
        int32_t _sold_date_sk3562 = _cs_sold_date_sk1104;
        tbl_Project_TD_8208729_output.setInt32(i, 0, _sold_date_sk3562);
        int64_t _sales_price3563 = _cs_ext_sales_price1127;
        tbl_Project_TD_8208729_output.setInt64(i, 1, _sales_price3563);
    }
    tbl_Project_TD_8208729_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8208729_output #Row: " << tbl_Project_TD_8208729_output.getNumRow() << std::endl;
}

void SW_Project_TD_836089(Table &tbl_Filter_TD_9825442_output, Table &tbl_Project_TD_836089_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_sold_date_sk#729 AS sold_date_sk#3560, ws_ext_sales_price#752 AS sales_price#3561)
    // Input: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    // Output: ListBuffer(sold_date_sk#3560, sales_price#3561)
    int nrow1 = tbl_Filter_TD_9825442_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9825442_output.getInt32(i, 0);
        int64_t _ws_ext_sales_price752 = tbl_Filter_TD_9825442_output.getInt64(i, 1);
        int32_t _sold_date_sk3560 = _ws_sold_date_sk729;
        tbl_Project_TD_836089_output.setInt32(i, 0, _sold_date_sk3560);
        int64_t _sales_price3561 = _ws_ext_sales_price752;
        tbl_Project_TD_836089_output.setInt64(i, 1, _sales_price3561);
    }
    tbl_Project_TD_836089_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_836089_output #Row: " << tbl_Project_TD_836089_output.getNumRow() << std::endl;
}

void SW_Project_TD_8314740(Table &tbl_Filter_TD_9510183_output, Table &tbl_Project_TD_8314740_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_sold_date_sk#1104 AS sold_date_sk#3562, cs_ext_sales_price#1127 AS sales_price#3563)
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    // Output: ListBuffer(sold_date_sk#3562, sales_price#3563)
    int nrow1 = tbl_Filter_TD_9510183_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9510183_output.getInt32(i, 0);
        int64_t _cs_ext_sales_price1127 = tbl_Filter_TD_9510183_output.getInt64(i, 1);
        int32_t _sold_date_sk3562 = _cs_sold_date_sk1104;
        tbl_Project_TD_8314740_output.setInt32(i, 0, _sold_date_sk3562);
        int64_t _sales_price3563 = _cs_ext_sales_price1127;
        tbl_Project_TD_8314740_output.setInt64(i, 1, _sales_price3563);
    }
    tbl_Project_TD_8314740_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8314740_output #Row: " << tbl_Project_TD_8314740_output.getNumRow() << std::endl;
}

void SW_Project_TD_8895802(Table &tbl_Filter_TD_9936457_output, Table &tbl_Project_TD_8895802_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_sold_date_sk#729 AS sold_date_sk#3560, ws_ext_sales_price#752 AS sales_price#3561)
    // Input: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    // Output: ListBuffer(sold_date_sk#3560, sales_price#3561)
    int nrow1 = tbl_Filter_TD_9936457_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9936457_output.getInt32(i, 0);
        int64_t _ws_ext_sales_price752 = tbl_Filter_TD_9936457_output.getInt64(i, 1);
        int32_t _sold_date_sk3560 = _ws_sold_date_sk729;
        tbl_Project_TD_8895802_output.setInt32(i, 0, _sold_date_sk3560);
        int64_t _sales_price3561 = _ws_ext_sales_price752;
        tbl_Project_TD_8895802_output.setInt64(i, 1, _sales_price3561);
    }
    tbl_Project_TD_8895802_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8895802_output #Row: " << tbl_Project_TD_8895802_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7198621(Table &tbl_SerializeFromObject_TD_894845_input, Table &tbl_Filter_TD_7198621_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#120) AND isnotnull(d_week_seq#124)))
    // Input: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_894845_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_894845_input.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_SerializeFromObject_TD_894845_input.getInt32(i, 1);
        if ((_d_date_sk120!= 0) && (_d_week_seq124!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_894845_input.getInt32(i, 0);
            tbl_Filter_TD_7198621_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_week_seq124_t = tbl_SerializeFromObject_TD_894845_input.getInt32(i, 1);
            tbl_Filter_TD_7198621_output.setInt32(r, 1, _d_week_seq124_t);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_t = tbl_SerializeFromObject_TD_894845_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7198621_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_t);
            r++;
        }
    }
    tbl_Filter_TD_7198621_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7198621_output #Row: " << tbl_Filter_TD_7198621_output.getNumRow() << std::endl;
}

void SW_Union_TD_758796(Table &tbl_Project_TD_836089_output, Table &tbl_Project_TD_8208729_output, Table &tbl_Union_TD_758796_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sold_date_sk#3560, sales_price#3561)
    int r = 0;
    int row0 = tbl_Project_TD_836089_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_758796_output.setInt32(r, 0, tbl_Project_TD_836089_output.getInt32(i, 0));
        tbl_Union_TD_758796_output.setInt32(r, 1, tbl_Project_TD_836089_output.getInt64(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_8208729_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_758796_output.setInt32(r, 0, tbl_Project_TD_8208729_output.getInt32(i, 0));
        tbl_Union_TD_758796_output.setInt32(r, 1, tbl_Project_TD_8208729_output.getInt64(i, 1));
        ++r;
    }
    tbl_Union_TD_758796_output.setNumRow(r);
    std::cout << "tbl_Union_TD_758796_output #Row: " << tbl_Union_TD_758796_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7576765(Table &tbl_SerializeFromObject_TD_8331725_input, Table &tbl_Filter_TD_7576765_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#120) AND isnotnull(d_week_seq#124)))
    // Input: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8331725_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8331725_input.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_SerializeFromObject_TD_8331725_input.getInt32(i, 1);
        if ((_d_date_sk120!= 0) && (_d_week_seq124!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8331725_input.getInt32(i, 0);
            tbl_Filter_TD_7576765_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_week_seq124_t = tbl_SerializeFromObject_TD_8331725_input.getInt32(i, 1);
            tbl_Filter_TD_7576765_output.setInt32(r, 1, _d_week_seq124_t);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_t = tbl_SerializeFromObject_TD_8331725_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7576765_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_t);
            r++;
        }
    }
    tbl_Filter_TD_7576765_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7576765_output #Row: " << tbl_Filter_TD_7576765_output.getNumRow() << std::endl;
}

void SW_Union_TD_765942(Table &tbl_Project_TD_8895802_output, Table &tbl_Project_TD_8314740_output, Table &tbl_Union_TD_765942_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sold_date_sk#3560, sales_price#3561)
    int r = 0;
    int row0 = tbl_Project_TD_8895802_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_765942_output.setInt32(r, 0, tbl_Project_TD_8895802_output.getInt32(i, 0));
        tbl_Union_TD_765942_output.setInt32(r, 1, tbl_Project_TD_8895802_output.getInt64(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_8314740_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_765942_output.setInt32(r, 0, tbl_Project_TD_8314740_output.getInt32(i, 0));
        tbl_Union_TD_765942_output.setInt32(r, 1, tbl_Project_TD_8314740_output.getInt64(i, 1));
        ++r;
    }
    tbl_Union_TD_765942_output.setNumRow(r);
    std::cout << "tbl_Union_TD_765942_output #Row: " << tbl_Union_TD_765942_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_651345_key_leftMajor {
    int32_t _sold_date_sk3560;
    bool operator==(const SW_JOIN_INNER_TD_651345_key_leftMajor& other) const {
        return ((_sold_date_sk3560 == other._sold_date_sk3560));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_651345_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_651345_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sold_date_sk3560));
    }
};
}
struct SW_JOIN_INNER_TD_651345_payload_leftMajor {
    int32_t _sold_date_sk3560;
    int64_t _sales_price3561;
};
struct SW_JOIN_INNER_TD_651345_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_651345_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_651345_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_651345_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_651345_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_week_seq124;
    std::string _d_day_name134;
};
void SW_JOIN_INNER_TD_651345(Table &tbl_Union_TD_758796_output, Table &tbl_Filter_TD_7198621_output, Table &tbl_JOIN_INNER_TD_651345_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = sold_date_sk#3560))
    // Left Table: ListBuffer(sold_date_sk#3560, sales_price#3561)
    // Right Table: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output Table: ListBuffer(sales_price#3561, d_week_seq#124, d_day_name#134)
    int left_nrow = tbl_Union_TD_758796_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7198621_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_651345_key_leftMajor, SW_JOIN_INNER_TD_651345_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_758796_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sold_date_sk3560_k = tbl_Union_TD_758796_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_651345_key_leftMajor keyA{_sold_date_sk3560_k};
            int32_t _sold_date_sk3560 = tbl_Union_TD_758796_output.getInt32(i, 0);
            int64_t _sales_price3561 = tbl_Union_TD_758796_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_651345_payload_leftMajor payloadA{_sold_date_sk3560, _sales_price3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7198621_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7198621_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_651345_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sold_date_sk3560 = (it->second)._sold_date_sk3560;
                int64_t _sales_price3561 = (it->second)._sales_price3561;
                int32_t _d_date_sk120 = tbl_Filter_TD_7198621_output.getInt32(i, 0);
                int32_t _d_week_seq124 = tbl_Filter_TD_7198621_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_7198621_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _d_day_name134 = std::string(_d_day_name134_n.data());
                tbl_JOIN_INNER_TD_651345_output.setInt64(r, 0, _sales_price3561);
                tbl_JOIN_INNER_TD_651345_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_651345_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_651345_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_651345_key_rightMajor, SW_JOIN_INNER_TD_651345_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7198621_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7198621_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_651345_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7198621_output.getInt32(i, 0);
            int32_t _d_week_seq124 = tbl_Filter_TD_7198621_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_7198621_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _d_day_name134 = std::string(_d_day_name134_n.data());
            SW_JOIN_INNER_TD_651345_payload_rightMajor payloadA{_d_date_sk120, _d_week_seq124, _d_day_name134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_758796_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sold_date_sk3560_k = tbl_Union_TD_758796_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_651345_key_rightMajor{_sold_date_sk3560_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                std::string _d_day_name134 = (it->second)._d_day_name134;
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n{};
                memcpy(_d_day_name134_n.data(), (_d_day_name134).data(), (_d_day_name134).length());
                int32_t _sold_date_sk3560 = tbl_Union_TD_758796_output.getInt32(i, 0);
                int64_t _sales_price3561 = tbl_Union_TD_758796_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_651345_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_651345_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_n);
                tbl_JOIN_INNER_TD_651345_output.setInt64(r, 0, _sales_price3561);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_651345_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_651345_output #Row: " << tbl_JOIN_INNER_TD_651345_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6454560_key_leftMajor {
    int32_t _sold_date_sk3560;
    bool operator==(const SW_JOIN_INNER_TD_6454560_key_leftMajor& other) const {
        return ((_sold_date_sk3560 == other._sold_date_sk3560));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6454560_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6454560_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sold_date_sk3560));
    }
};
}
struct SW_JOIN_INNER_TD_6454560_payload_leftMajor {
    int32_t _sold_date_sk3560;
    int64_t _sales_price3561;
};
struct SW_JOIN_INNER_TD_6454560_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6454560_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6454560_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6454560_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6454560_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_week_seq124;
    std::string _d_day_name134;
};
void SW_JOIN_INNER_TD_6454560(Table &tbl_Union_TD_765942_output, Table &tbl_Filter_TD_7576765_output, Table &tbl_JOIN_INNER_TD_6454560_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = sold_date_sk#3560))
    // Left Table: ListBuffer(sold_date_sk#3560, sales_price#3561)
    // Right Table: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output Table: ListBuffer(sales_price#3561, d_week_seq#124, d_day_name#134)
    int left_nrow = tbl_Union_TD_765942_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7576765_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6454560_key_leftMajor, SW_JOIN_INNER_TD_6454560_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_765942_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sold_date_sk3560_k = tbl_Union_TD_765942_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6454560_key_leftMajor keyA{_sold_date_sk3560_k};
            int32_t _sold_date_sk3560 = tbl_Union_TD_765942_output.getInt32(i, 0);
            int64_t _sales_price3561 = tbl_Union_TD_765942_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_6454560_payload_leftMajor payloadA{_sold_date_sk3560, _sales_price3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7576765_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7576765_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6454560_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sold_date_sk3560 = (it->second)._sold_date_sk3560;
                int64_t _sales_price3561 = (it->second)._sales_price3561;
                int32_t _d_date_sk120 = tbl_Filter_TD_7576765_output.getInt32(i, 0);
                int32_t _d_week_seq124 = tbl_Filter_TD_7576765_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_7576765_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _d_day_name134 = std::string(_d_day_name134_n.data());
                tbl_JOIN_INNER_TD_6454560_output.setInt64(r, 0, _sales_price3561);
                tbl_JOIN_INNER_TD_6454560_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_6454560_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6454560_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6454560_key_rightMajor, SW_JOIN_INNER_TD_6454560_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7576765_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7576765_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6454560_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7576765_output.getInt32(i, 0);
            int32_t _d_week_seq124 = tbl_Filter_TD_7576765_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_7576765_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _d_day_name134 = std::string(_d_day_name134_n.data());
            SW_JOIN_INNER_TD_6454560_payload_rightMajor payloadA{_d_date_sk120, _d_week_seq124, _d_day_name134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_765942_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sold_date_sk3560_k = tbl_Union_TD_765942_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6454560_key_rightMajor{_sold_date_sk3560_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                std::string _d_day_name134 = (it->second)._d_day_name134;
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n{};
                memcpy(_d_day_name134_n.data(), (_d_day_name134).data(), (_d_day_name134).length());
                int32_t _sold_date_sk3560 = tbl_Union_TD_765942_output.getInt32(i, 0);
                int64_t _sales_price3561 = tbl_Union_TD_765942_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_6454560_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_6454560_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_n);
                tbl_JOIN_INNER_TD_6454560_output.setInt64(r, 0, _sales_price3561);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6454560_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6454560_output #Row: " << tbl_JOIN_INNER_TD_6454560_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5333220(Table &tbl_SerializeFromObject_TD_6341474_input, Table &tbl_Filter_TD_5333220_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3605) AND (d_year#3605 = 2002)) AND isnotnull(d_week_seq#3603)))
    // Input: ListBuffer(d_week_seq#3603, d_year#3605)
    // Output: ListBuffer(d_week_seq#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6341474_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3605 = tbl_SerializeFromObject_TD_6341474_input.getInt32(i, 1);
        int32_t _d_week_seq3603 = tbl_SerializeFromObject_TD_6341474_input.getInt32(i, 0);
        if (((_d_year3605!= 0) && (_d_year3605 == 2002)) && (_d_week_seq3603!= 0)) {
            int32_t _d_week_seq3603_t = tbl_SerializeFromObject_TD_6341474_input.getInt32(i, 0);
            tbl_Filter_TD_5333220_output.setInt32(r, 0, _d_week_seq3603_t);
            r++;
        }
    }
    tbl_Filter_TD_5333220_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5333220_output #Row: " << tbl_Filter_TD_5333220_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_5801716_key;
struct SW_Aggregate_TD_5801716_payload {
    int64_t _sun_sales3564_sum_0;
    int64_t _mon_sales3565_sum_1;
    int64_t _tue_sales3566_sum_2;
    int64_t _wed_sales3567_sum_3;
    int64_t _thu_sales3568_sum_4;
    int64_t _fri_sales3569_sum_5;
    int64_t _sat_sales3570_sum_6;
};
void SW_Aggregate_TD_5801716(Table &tbl_JOIN_INNER_TD_651345_output, Table &tbl_Aggregate_TD_5801716_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_week_seq#124, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Sunday) THEN sales_price#3561 END)),17,2) AS sun_sales#3564, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Monday) THEN sales_price#3561 END)),17,2) AS mon_sales#3565, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Tuesday) THEN sales_price#3561 END)),17,2) AS tue_sales#3566, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Wednesday) THEN sales_price#3561 END)),17,2) AS wed_sales#3567, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Thursday) THEN sales_price#3561 END)),17,2) AS thu_sales#3568, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Friday) THEN sales_price#3561 END)),17,2) AS fri_sales#3569, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Saturday) THEN sales_price#3561 END)),17,2) AS sat_sales#3570)
    // Input: ListBuffer(sales_price#3561, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_week_seq#124, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    std::unordered_map<SW_Aggregate_TD_5801716_key, SW_Aggregate_TD_5801716_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_651345_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales_price3561 = tbl_JOIN_INNER_TD_651345_output.getInt64(i, 0);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_651345_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _d_day_name134 = tbl_JOIN_INNER_TD_651345_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_5801716_key k = _d_week_seq124;
        int64_t _sun_sales3564_sum_0 = (std::string(_d_day_name134.data()) == "Sunday") ? _sales_price3561 : 1;
        int64_t _mon_sales3565_sum_1 = (std::string(_d_day_name134.data()) == "Monday") ? _sales_price3561 : 1;
        int64_t _tue_sales3566_sum_2 = (std::string(_d_day_name134.data()) == "Tuesday") ? _sales_price3561 : 1;
        int64_t _wed_sales3567_sum_3 = (std::string(_d_day_name134.data()) == "Wednesday") ? _sales_price3561 : 1;
        int64_t _thu_sales3568_sum_4 = (std::string(_d_day_name134.data()) == "Thursday") ? _sales_price3561 : 1;
        int64_t _fri_sales3569_sum_5 = (std::string(_d_day_name134.data()) == "Friday") ? _sales_price3561 : 1;
        int64_t _sat_sales3570_sum_6 = (std::string(_d_day_name134.data()) == "Saturday") ? _sales_price3561 : 1;
        SW_Aggregate_TD_5801716_payload p{_sun_sales3564_sum_0, _mon_sales3565_sum_1, _tue_sales3566_sum_2, _wed_sales3567_sum_3, _thu_sales3568_sum_4, _fri_sales3569_sum_5, _sat_sales3570_sum_6};
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
        tbl_Aggregate_TD_5801716_output.setInt32(r, 0, (it.first));
        int64_t _sun_sales3564 = (it.second)._sun_sales3564_sum_0;
        tbl_Aggregate_TD_5801716_output.setInt64(r, 1, _sun_sales3564);
        int64_t _mon_sales3565 = (it.second)._mon_sales3565_sum_1;
        tbl_Aggregate_TD_5801716_output.setInt64(r, 2, _mon_sales3565);
        int64_t _tue_sales3566 = (it.second)._tue_sales3566_sum_2;
        tbl_Aggregate_TD_5801716_output.setInt64(r, 3, _tue_sales3566);
        int64_t _wed_sales3567 = (it.second)._wed_sales3567_sum_3;
        tbl_Aggregate_TD_5801716_output.setInt64(r, 4, _wed_sales3567);
        int64_t _thu_sales3568 = (it.second)._thu_sales3568_sum_4;
        tbl_Aggregate_TD_5801716_output.setInt64(r, 5, _thu_sales3568);
        int64_t _fri_sales3569 = (it.second)._fri_sales3569_sum_5;
        tbl_Aggregate_TD_5801716_output.setInt64(r, 6, _fri_sales3569);
        int64_t _sat_sales3570 = (it.second)._sat_sales3570_sum_6;
        tbl_Aggregate_TD_5801716_output.setInt64(r, 7, _sat_sales3570);
        ++r;
    }
    tbl_Aggregate_TD_5801716_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5801716_output #Row: " << tbl_Aggregate_TD_5801716_output.getNumRow() << std::endl;
}

void SW_Filter_TD_558953(Table &tbl_SerializeFromObject_TD_6863873_input, Table &tbl_Filter_TD_558953_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3577) AND (d_year#3577 = 2001)) AND isnotnull(d_week_seq#3575)))
    // Input: ListBuffer(d_week_seq#3575, d_year#3577)
    // Output: ListBuffer(d_week_seq#3575)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6863873_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3577 = tbl_SerializeFromObject_TD_6863873_input.getInt32(i, 1);
        int32_t _d_week_seq3575 = tbl_SerializeFromObject_TD_6863873_input.getInt32(i, 0);
        if (((_d_year3577!= 0) && (_d_year3577 == 2001)) && (_d_week_seq3575!= 0)) {
            int32_t _d_week_seq3575_t = tbl_SerializeFromObject_TD_6863873_input.getInt32(i, 0);
            tbl_Filter_TD_558953_output.setInt32(r, 0, _d_week_seq3575_t);
            r++;
        }
    }
    tbl_Filter_TD_558953_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_558953_output #Row: " << tbl_Filter_TD_558953_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_5740714_key;
struct SW_Aggregate_TD_5740714_payload {
    int64_t _sun_sales3564_sum_0;
    int64_t _mon_sales3565_sum_1;
    int64_t _tue_sales3566_sum_2;
    int64_t _wed_sales3567_sum_3;
    int64_t _thu_sales3568_sum_4;
    int64_t _fri_sales3569_sum_5;
    int64_t _sat_sales3570_sum_6;
};
void SW_Aggregate_TD_5740714(Table &tbl_JOIN_INNER_TD_6454560_output, Table &tbl_Aggregate_TD_5740714_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_week_seq#124, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Sunday) THEN sales_price#3561 END)),17,2) AS sun_sales#3564, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Monday) THEN sales_price#3561 END)),17,2) AS mon_sales#3565, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Tuesday) THEN sales_price#3561 END)),17,2) AS tue_sales#3566, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Wednesday) THEN sales_price#3561 END)),17,2) AS wed_sales#3567, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Thursday) THEN sales_price#3561 END)),17,2) AS thu_sales#3568, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Friday) THEN sales_price#3561 END)),17,2) AS fri_sales#3569, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Saturday) THEN sales_price#3561 END)),17,2) AS sat_sales#3570)
    // Input: ListBuffer(sales_price#3561, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_week_seq#124, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    std::unordered_map<SW_Aggregate_TD_5740714_key, SW_Aggregate_TD_5740714_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6454560_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales_price3561 = tbl_JOIN_INNER_TD_6454560_output.getInt64(i, 0);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_6454560_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _d_day_name134 = tbl_JOIN_INNER_TD_6454560_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_5740714_key k = _d_week_seq124;
        int64_t _sun_sales3564_sum_0 = (std::string(_d_day_name134.data()) == "Sunday") ? _sales_price3561 : 1;
        int64_t _mon_sales3565_sum_1 = (std::string(_d_day_name134.data()) == "Monday") ? _sales_price3561 : 1;
        int64_t _tue_sales3566_sum_2 = (std::string(_d_day_name134.data()) == "Tuesday") ? _sales_price3561 : 1;
        int64_t _wed_sales3567_sum_3 = (std::string(_d_day_name134.data()) == "Wednesday") ? _sales_price3561 : 1;
        int64_t _thu_sales3568_sum_4 = (std::string(_d_day_name134.data()) == "Thursday") ? _sales_price3561 : 1;
        int64_t _fri_sales3569_sum_5 = (std::string(_d_day_name134.data()) == "Friday") ? _sales_price3561 : 1;
        int64_t _sat_sales3570_sum_6 = (std::string(_d_day_name134.data()) == "Saturday") ? _sales_price3561 : 1;
        SW_Aggregate_TD_5740714_payload p{_sun_sales3564_sum_0, _mon_sales3565_sum_1, _tue_sales3566_sum_2, _wed_sales3567_sum_3, _thu_sales3568_sum_4, _fri_sales3569_sum_5, _sat_sales3570_sum_6};
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
        tbl_Aggregate_TD_5740714_output.setInt32(r, 0, (it.first));
        int64_t _sun_sales3564 = (it.second)._sun_sales3564_sum_0;
        tbl_Aggregate_TD_5740714_output.setInt64(r, 1, _sun_sales3564);
        int64_t _mon_sales3565 = (it.second)._mon_sales3565_sum_1;
        tbl_Aggregate_TD_5740714_output.setInt64(r, 2, _mon_sales3565);
        int64_t _tue_sales3566 = (it.second)._tue_sales3566_sum_2;
        tbl_Aggregate_TD_5740714_output.setInt64(r, 3, _tue_sales3566);
        int64_t _wed_sales3567 = (it.second)._wed_sales3567_sum_3;
        tbl_Aggregate_TD_5740714_output.setInt64(r, 4, _wed_sales3567);
        int64_t _thu_sales3568 = (it.second)._thu_sales3568_sum_4;
        tbl_Aggregate_TD_5740714_output.setInt64(r, 5, _thu_sales3568);
        int64_t _fri_sales3569 = (it.second)._fri_sales3569_sum_5;
        tbl_Aggregate_TD_5740714_output.setInt64(r, 6, _fri_sales3569);
        int64_t _sat_sales3570 = (it.second)._sat_sales3570_sum_6;
        tbl_Aggregate_TD_5740714_output.setInt64(r, 7, _sat_sales3570);
        ++r;
    }
    tbl_Aggregate_TD_5740714_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5740714_output #Row: " << tbl_Aggregate_TD_5740714_output.getNumRow() << std::endl;
}



void SW_Project_TD_3157696(Table &tbl_JOIN_INNER_TD_4196728_output, Table &tbl_Project_TD_3157696_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(d_week_seq#124 AS d_week_seq2#3552, sun_sales#3564 AS sun_sales2#3553, mon_sales#3565 AS mon_sales2#3554, tue_sales#3566 AS tue_sales2#3555, wed_sales#3567 AS wed_sales2#3556, thu_sales#3568 AS thu_sales2#3557, fri_sales#3569 AS fri_sales2#3558, sat_sales#3570 AS sat_sales2#3559)
    // Input: ListBuffer(d_week_seq#124, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    // Output: ListBuffer(d_week_seq2#3552, sun_sales2#3553, mon_sales2#3554, tue_sales2#3555, wed_sales2#3556, thu_sales2#3557, fri_sales2#3558, sat_sales2#3559)
    int nrow1 = tbl_JOIN_INNER_TD_4196728_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_4196728_output.getInt32(i, 0);
        int64_t _sun_sales3564 = tbl_JOIN_INNER_TD_4196728_output.getInt64(i, 1);
        int64_t _mon_sales3565 = tbl_JOIN_INNER_TD_4196728_output.getInt64(i, 2);
        int64_t _tue_sales3566 = tbl_JOIN_INNER_TD_4196728_output.getInt64(i, 3);
        int64_t _wed_sales3567 = tbl_JOIN_INNER_TD_4196728_output.getInt64(i, 4);
        int64_t _thu_sales3568 = tbl_JOIN_INNER_TD_4196728_output.getInt64(i, 5);
        int64_t _fri_sales3569 = tbl_JOIN_INNER_TD_4196728_output.getInt64(i, 6);
        int64_t _sat_sales3570 = tbl_JOIN_INNER_TD_4196728_output.getInt64(i, 7);
        int32_t _d_week_seq23552 = _d_week_seq124;
        tbl_Project_TD_3157696_output.setInt32(i, 0, _d_week_seq23552);
        int64_t _sun_sales23553 = _sun_sales3564;
        tbl_Project_TD_3157696_output.setInt64(i, 1, _sun_sales23553);
        int64_t _mon_sales23554 = _mon_sales3565;
        tbl_Project_TD_3157696_output.setInt64(i, 2, _mon_sales23554);
        int64_t _tue_sales23555 = _tue_sales3566;
        tbl_Project_TD_3157696_output.setInt64(i, 3, _tue_sales23555);
        int64_t _wed_sales23556 = _wed_sales3567;
        tbl_Project_TD_3157696_output.setInt64(i, 4, _wed_sales23556);
        int64_t _thu_sales23557 = _thu_sales3568;
        tbl_Project_TD_3157696_output.setInt64(i, 5, _thu_sales23557);
        int64_t _fri_sales23558 = _fri_sales3569;
        tbl_Project_TD_3157696_output.setInt64(i, 6, _fri_sales23558);
        int64_t _sat_sales23559 = _sat_sales3570;
        tbl_Project_TD_3157696_output.setInt64(i, 7, _sat_sales23559);
    }
    tbl_Project_TD_3157696_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3157696_output #Row: " << tbl_Project_TD_3157696_output.getNumRow() << std::endl;
}

void SW_Project_TD_3338815(Table &tbl_JOIN_INNER_TD_4721950_output, Table &tbl_Project_TD_3338815_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(d_week_seq#124 AS d_week_seq1#3544, sun_sales#3564 AS sun_sales1#3545, mon_sales#3565 AS mon_sales1#3546, tue_sales#3566 AS tue_sales1#3547, wed_sales#3567 AS wed_sales1#3548, thu_sales#3568 AS thu_sales1#3549, fri_sales#3569 AS fri_sales1#3550, sat_sales#3570 AS sat_sales1#3551)
    // Input: ListBuffer(d_week_seq#124, sun_sales#3564, mon_sales#3565, tue_sales#3566, wed_sales#3567, thu_sales#3568, fri_sales#3569, sat_sales#3570)
    // Output: ListBuffer(d_week_seq1#3544, sun_sales1#3545, mon_sales1#3546, tue_sales1#3547, wed_sales1#3548, thu_sales1#3549, fri_sales1#3550, sat_sales1#3551)
    int nrow1 = tbl_JOIN_INNER_TD_4721950_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_4721950_output.getInt32(i, 0);
        int64_t _sun_sales3564 = tbl_JOIN_INNER_TD_4721950_output.getInt64(i, 1);
        int64_t _mon_sales3565 = tbl_JOIN_INNER_TD_4721950_output.getInt64(i, 2);
        int64_t _tue_sales3566 = tbl_JOIN_INNER_TD_4721950_output.getInt64(i, 3);
        int64_t _wed_sales3567 = tbl_JOIN_INNER_TD_4721950_output.getInt64(i, 4);
        int64_t _thu_sales3568 = tbl_JOIN_INNER_TD_4721950_output.getInt64(i, 5);
        int64_t _fri_sales3569 = tbl_JOIN_INNER_TD_4721950_output.getInt64(i, 6);
        int64_t _sat_sales3570 = tbl_JOIN_INNER_TD_4721950_output.getInt64(i, 7);
        int32_t _d_week_seq13544 = _d_week_seq124;
        tbl_Project_TD_3338815_output.setInt32(i, 0, _d_week_seq13544);
        int64_t _sun_sales13545 = _sun_sales3564;
        tbl_Project_TD_3338815_output.setInt64(i, 1, _sun_sales13545);
        int64_t _mon_sales13546 = _mon_sales3565;
        tbl_Project_TD_3338815_output.setInt64(i, 2, _mon_sales13546);
        int64_t _tue_sales13547 = _tue_sales3566;
        tbl_Project_TD_3338815_output.setInt64(i, 3, _tue_sales13547);
        int64_t _wed_sales13548 = _wed_sales3567;
        tbl_Project_TD_3338815_output.setInt64(i, 4, _wed_sales13548);
        int64_t _thu_sales13549 = _thu_sales3568;
        tbl_Project_TD_3338815_output.setInt64(i, 5, _thu_sales13549);
        int64_t _fri_sales13550 = _fri_sales3569;
        tbl_Project_TD_3338815_output.setInt64(i, 6, _fri_sales13550);
        int64_t _sat_sales13551 = _sat_sales3570;
        tbl_Project_TD_3338815_output.setInt64(i, 7, _sat_sales13551);
    }
    tbl_Project_TD_3338815_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3338815_output #Row: " << tbl_Project_TD_3338815_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2107122_key_leftMajor {
    int32_t _d_week_seq13544;
    bool operator==(const SW_JOIN_INNER_TD_2107122_key_leftMajor& other) const {
        return ((_d_week_seq13544 == other._d_week_seq13544));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2107122_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2107122_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq13544));
    }
};
}
struct SW_JOIN_INNER_TD_2107122_payload_leftMajor {
    int32_t _d_week_seq13544;
    int64_t _sun_sales13545;
    int64_t _mon_sales13546;
    int64_t _tue_sales13547;
    int64_t _wed_sales13548;
    int64_t _thu_sales13549;
    int64_t _fri_sales13550;
    int64_t _sat_sales13551;
};
struct SW_JOIN_INNER_TD_2107122_key_rightMajor {
    int32_t _d_week_seq23552;
    bool operator==(const SW_JOIN_INNER_TD_2107122_key_rightMajor& other) const {
        return ((_d_week_seq23552 == other._d_week_seq23552));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2107122_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2107122_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq23552));
    }
};
}
struct SW_JOIN_INNER_TD_2107122_payload_rightMajor {
    int32_t _d_week_seq23552;
    int64_t _sun_sales23553;
    int64_t _mon_sales23554;
    int64_t _tue_sales23555;
    int64_t _wed_sales23556;
    int64_t _thu_sales23557;
    int64_t _fri_sales23558;
    int64_t _sat_sales23559;
};
void SW_JOIN_INNER_TD_2107122(Table &tbl_Project_TD_3338815_output, Table &tbl_Project_TD_3157696_output, Table &tbl_JOIN_INNER_TD_2107122_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_week_seq1#3544 = (d_week_seq2#3552 - 53)))
    // Left Table: ListBuffer(d_week_seq1#3544, sun_sales1#3545, mon_sales1#3546, tue_sales1#3547, wed_sales1#3548, thu_sales1#3549, fri_sales1#3550, sat_sales1#3551)
    // Right Table: ListBuffer(d_week_seq2#3552, sun_sales2#3553, mon_sales2#3554, tue_sales2#3555, wed_sales2#3556, thu_sales2#3557, fri_sales2#3558, sat_sales2#3559)
    // Output Table: ListBuffer(d_week_seq1#3544, sun_sales1#3545, sun_sales2#3553, mon_sales1#3546, mon_sales2#3554, tue_sales1#3547, tue_sales2#3555, wed_sales1#3548, wed_sales2#3556, thu_sales1#3549, thu_sales2#3557, fri_sales1#3550, fri_sales2#3558, sat_sales1#3551, sat_sales2#3559)
    int left_nrow = tbl_Project_TD_3338815_output.getNumRow();
    int right_nrow = tbl_Project_TD_3157696_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2107122_key_leftMajor, SW_JOIN_INNER_TD_2107122_payload_leftMajor> ht1;
        int nrow1 = tbl_Project_TD_3338815_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq13544_k = tbl_Project_TD_3338815_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2107122_key_leftMajor keyA{_d_week_seq13544_k};
            int32_t _d_week_seq13544 = tbl_Project_TD_3338815_output.getInt32(i, 0);
            int64_t _sun_sales13545 = tbl_Project_TD_3338815_output.getInt64(i, 1);
            int64_t _mon_sales13546 = tbl_Project_TD_3338815_output.getInt64(i, 2);
            int64_t _tue_sales13547 = tbl_Project_TD_3338815_output.getInt64(i, 3);
            int64_t _wed_sales13548 = tbl_Project_TD_3338815_output.getInt64(i, 4);
            int64_t _thu_sales13549 = tbl_Project_TD_3338815_output.getInt64(i, 5);
            int64_t _fri_sales13550 = tbl_Project_TD_3338815_output.getInt64(i, 6);
            int64_t _sat_sales13551 = tbl_Project_TD_3338815_output.getInt64(i, 7);
            SW_JOIN_INNER_TD_2107122_payload_leftMajor payloadA{_d_week_seq13544, _sun_sales13545, _mon_sales13546, _tue_sales13547, _wed_sales13548, _thu_sales13549, _fri_sales13550, _sat_sales13551};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3157696_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq23552_k = tbl_Project_TD_3157696_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2107122_key_leftMajor{_d_week_seq23552_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq13544 = (it->second)._d_week_seq13544;
                int64_t _sun_sales13545 = (it->second)._sun_sales13545;
                int64_t _mon_sales13546 = (it->second)._mon_sales13546;
                int64_t _tue_sales13547 = (it->second)._tue_sales13547;
                int64_t _wed_sales13548 = (it->second)._wed_sales13548;
                int64_t _thu_sales13549 = (it->second)._thu_sales13549;
                int64_t _fri_sales13550 = (it->second)._fri_sales13550;
                int64_t _sat_sales13551 = (it->second)._sat_sales13551;
                int32_t _d_week_seq23552 = tbl_Project_TD_3157696_output.getInt32(i, 0);
                int64_t _sun_sales23553 = tbl_Project_TD_3157696_output.getInt64(i, 1);
                int64_t _mon_sales23554 = tbl_Project_TD_3157696_output.getInt64(i, 2);
                int64_t _tue_sales23555 = tbl_Project_TD_3157696_output.getInt64(i, 3);
                int64_t _wed_sales23556 = tbl_Project_TD_3157696_output.getInt64(i, 4);
                int64_t _thu_sales23557 = tbl_Project_TD_3157696_output.getInt64(i, 5);
                int64_t _fri_sales23558 = tbl_Project_TD_3157696_output.getInt64(i, 6);
                int64_t _sat_sales23559 = tbl_Project_TD_3157696_output.getInt64(i, 7);
                if (_d_week_seq13544 == (_d_week_seq23552 - 53)) {
                    tbl_JOIN_INNER_TD_2107122_output.setInt32(r, 0, _d_week_seq13544);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 1, _sun_sales13545);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 3, _mon_sales13546);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 5, _tue_sales13547);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 7, _wed_sales13548);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 9, _thu_sales13549);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 11, _fri_sales13550);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 13, _sat_sales13551);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 2, _sun_sales23553);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 4, _mon_sales23554);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 6, _tue_sales23555);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 8, _wed_sales23556);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 10, _thu_sales23557);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 12, _fri_sales23558);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 14, _sat_sales23559);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_2107122_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2107122_key_rightMajor, SW_JOIN_INNER_TD_2107122_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_3157696_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq23552_k = tbl_Project_TD_3157696_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2107122_key_rightMajor keyA{_d_week_seq23552_k};
            int32_t _d_week_seq23552 = tbl_Project_TD_3157696_output.getInt32(i, 0);
            int64_t _sun_sales23553 = tbl_Project_TD_3157696_output.getInt64(i, 1);
            int64_t _mon_sales23554 = tbl_Project_TD_3157696_output.getInt64(i, 2);
            int64_t _tue_sales23555 = tbl_Project_TD_3157696_output.getInt64(i, 3);
            int64_t _wed_sales23556 = tbl_Project_TD_3157696_output.getInt64(i, 4);
            int64_t _thu_sales23557 = tbl_Project_TD_3157696_output.getInt64(i, 5);
            int64_t _fri_sales23558 = tbl_Project_TD_3157696_output.getInt64(i, 6);
            int64_t _sat_sales23559 = tbl_Project_TD_3157696_output.getInt64(i, 7);
            SW_JOIN_INNER_TD_2107122_payload_rightMajor payloadA{_d_week_seq23552, _sun_sales23553, _mon_sales23554, _tue_sales23555, _wed_sales23556, _thu_sales23557, _fri_sales23558, _sat_sales23559};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3338815_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq13544_k = tbl_Project_TD_3338815_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2107122_key_rightMajor{_d_week_seq13544_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq23552 = (it->second)._d_week_seq23552;
                int64_t _sun_sales23553 = (it->second)._sun_sales23553;
                int64_t _mon_sales23554 = (it->second)._mon_sales23554;
                int64_t _tue_sales23555 = (it->second)._tue_sales23555;
                int64_t _wed_sales23556 = (it->second)._wed_sales23556;
                int64_t _thu_sales23557 = (it->second)._thu_sales23557;
                int64_t _fri_sales23558 = (it->second)._fri_sales23558;
                int64_t _sat_sales23559 = (it->second)._sat_sales23559;
                int32_t _d_week_seq13544 = tbl_Project_TD_3338815_output.getInt32(i, 0);
                int64_t _sun_sales13545 = tbl_Project_TD_3338815_output.getInt64(i, 1);
                int64_t _mon_sales13546 = tbl_Project_TD_3338815_output.getInt64(i, 2);
                int64_t _tue_sales13547 = tbl_Project_TD_3338815_output.getInt64(i, 3);
                int64_t _wed_sales13548 = tbl_Project_TD_3338815_output.getInt64(i, 4);
                int64_t _thu_sales13549 = tbl_Project_TD_3338815_output.getInt64(i, 5);
                int64_t _fri_sales13550 = tbl_Project_TD_3338815_output.getInt64(i, 6);
                int64_t _sat_sales13551 = tbl_Project_TD_3338815_output.getInt64(i, 7);
                if (_d_week_seq13544 == (_d_week_seq23552 - 53)) {
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 2, _sun_sales23553);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 4, _mon_sales23554);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 6, _tue_sales23555);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 8, _wed_sales23556);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 10, _thu_sales23557);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 12, _fri_sales23558);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 14, _sat_sales23559);
                    tbl_JOIN_INNER_TD_2107122_output.setInt32(r, 0, _d_week_seq13544);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 1, _sun_sales13545);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 3, _mon_sales13546);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 5, _tue_sales13547);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 7, _wed_sales13548);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 9, _thu_sales13549);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 11, _fri_sales13550);
                    tbl_JOIN_INNER_TD_2107122_output.setInt64(r, 13, _sat_sales13551);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_2107122_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2107122_output #Row: " << tbl_JOIN_INNER_TD_2107122_output.getNumRow() << std::endl;
}

void SW_Project_TD_1776759(Table &tbl_JOIN_INNER_TD_2107122_output, Table &tbl_Project_TD_1776759_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(round(CheckOverflow((promote_precision(sun_sales1#3545) / promote_precision(sun_sales2#3553)), DecimalType(37,20), true), 2) AS round((sun_sales1 / sun_sales2), 2)#3634, round(CheckOverflow((promote_precision(mon_sales1#3546) / promote_precision(mon_sales2#3554)), DecimalType(37,20), true), 2) AS round((mon_sales1 / mon_sales2), 2)#3635, round(CheckOverflow((promote_precision(tue_sales1#3547) / promote_precision(tue_sales2#3555)), DecimalType(37,20), true), 2) AS round((tue_sales1 / tue_sales2), 2)#3636, round(CheckOverflow((promote_precision(wed_sales1#3548) / promote_precision(wed_sales2#3556)), DecimalType(37,20), true), 2) AS round((wed_sales1 / wed_sales2), 2)#3637, round(CheckOverflow((promote_precision(thu_sales1#3549) / promote_precision(thu_sales2#3557)), DecimalType(37,20), true), 2) AS round((thu_sales1 / thu_sales2), 2)#3638, round(CheckOverflow((promote_precision(fri_sales1#3550) / promote_precision(fri_sales2#3558)), DecimalType(37,20), true), 2) AS round((fri_sales1 / fri_sales2), 2)#3639, round(CheckOverflow((promote_precision(sat_sales1#3551) / promote_precision(sat_sales2#3559)), DecimalType(37,20), true), 2) AS round((sat_sales1 / sat_sales2), 2)#3640)
    // Input: ListBuffer(d_week_seq1#3544, sun_sales1#3545, sun_sales2#3553, mon_sales1#3546, mon_sales2#3554, tue_sales1#3547, tue_sales2#3555, wed_sales1#3548, wed_sales2#3556, thu_sales1#3549, thu_sales2#3557, fri_sales1#3550, fri_sales2#3558, sat_sales1#3551, sat_sales2#3559)
    // Output: ListBuffer(d_week_seq1#3544, round((sun_sales1 / sun_sales2), 2)#3634, round((mon_sales1 / mon_sales2), 2)#3635, round((tue_sales1 / tue_sales2), 2)#3636, round((wed_sales1 / wed_sales2), 2)#3637, round((thu_sales1 / thu_sales2), 2)#3638, round((fri_sales1 / fri_sales2), 2)#3639, round((sat_sales1 / sat_sales2), 2)#3640)
    int nrow1 = tbl_JOIN_INNER_TD_2107122_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq13544 = tbl_JOIN_INNER_TD_2107122_output.getInt32(i, 0);
        int64_t _sun_sales13545 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 1);
        int64_t _sun_sales23553 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 2);
        int64_t _mon_sales13546 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 3);
        int64_t _mon_sales23554 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 4);
        int64_t _tue_sales13547 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 5);
        int64_t _tue_sales23555 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 6);
        int64_t _wed_sales13548 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 7);
        int64_t _wed_sales23556 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 8);
        int64_t _thu_sales13549 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 9);
        int64_t _thu_sales23557 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 10);
        int64_t _fri_sales13550 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 11);
        int64_t _fri_sales23558 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 12);
        int64_t _sat_sales13551 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 13);
        int64_t _sat_sales23559 = tbl_JOIN_INNER_TD_2107122_output.getInt64(i, 14);
        int64_t _23634 = (_sun_sales13545 / _sun_sales23553);
        tbl_Project_TD_1776759_output.setInt64(i, 1, _23634);
        int64_t _23635 = (_mon_sales13546 / _mon_sales23554);
        tbl_Project_TD_1776759_output.setInt64(i, 2, _23635);
        int64_t _23636 = (_tue_sales13547 / _tue_sales23555);
        tbl_Project_TD_1776759_output.setInt64(i, 3, _23636);
        int64_t _23637 = (_wed_sales13548 / _wed_sales23556);
        tbl_Project_TD_1776759_output.setInt64(i, 4, _23637);
        int64_t _23638 = (_thu_sales13549 / _thu_sales23557);
        tbl_Project_TD_1776759_output.setInt64(i, 5, _23638);
        int64_t _23639 = (_fri_sales13550 / _fri_sales23558);
        tbl_Project_TD_1776759_output.setInt64(i, 6, _23639);
        int64_t _23640 = (_sat_sales13551 / _sat_sales23559);
        tbl_Project_TD_1776759_output.setInt64(i, 7, _23640);
        tbl_Project_TD_1776759_output.setInt32(i, 0, _d_week_seq13544);
    }
    tbl_Project_TD_1776759_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1776759_output #Row: " << tbl_Project_TD_1776759_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0365665(Table &tbl_Project_TD_1776759_output, Table &tbl_Sort_TD_0365665_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(d_week_seq1#3544 ASC NULLS FIRST)
    // Input: ListBuffer(d_week_seq1#3544, round((sun_sales1 / sun_sales2), 2)#3634, round((mon_sales1 / mon_sales2), 2)#3635, round((tue_sales1 / tue_sales2), 2)#3636, round((wed_sales1 / wed_sales2), 2)#3637, round((thu_sales1 / thu_sales2), 2)#3638, round((fri_sales1 / fri_sales2), 2)#3639, round((sat_sales1 / sat_sales2), 2)#3640)
    // Output: ListBuffer(d_week_seq1#3544, round((sun_sales1 / sun_sales2), 2)#3634, round((mon_sales1 / mon_sales2), 2)#3635, round((tue_sales1 / tue_sales2), 2)#3636, round((wed_sales1 / wed_sales2), 2)#3637, round((thu_sales1 / thu_sales2), 2)#3638, round((fri_sales1 / fri_sales2), 2)#3639, round((sat_sales1 / sat_sales2), 2)#3640)
    struct SW_Sort_TD_0365665Row {
        int32_t _d_week_seq13544;
        int64_t _23634;
        int64_t _23635;
        int64_t _23636;
        int64_t _23637;
        int64_t _23638;
        int64_t _23639;
        int64_t _23640;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0365665Row& a, const SW_Sort_TD_0365665Row& b) const { return 
 (a._d_week_seq13544 < b._d_week_seq13544); 
}
    }SW_Sort_TD_0365665_order; 

    int nrow1 = tbl_Project_TD_1776759_output.getNumRow();
    std::vector<SW_Sort_TD_0365665Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq13544 = tbl_Project_TD_1776759_output.getInt32(i, 0);
        int64_t _23634 = tbl_Project_TD_1776759_output.getInt64(i, 1);
        int64_t _23635 = tbl_Project_TD_1776759_output.getInt64(i, 2);
        int64_t _23636 = tbl_Project_TD_1776759_output.getInt64(i, 3);
        int64_t _23637 = tbl_Project_TD_1776759_output.getInt64(i, 4);
        int64_t _23638 = tbl_Project_TD_1776759_output.getInt64(i, 5);
        int64_t _23639 = tbl_Project_TD_1776759_output.getInt64(i, 6);
        int64_t _23640 = tbl_Project_TD_1776759_output.getInt64(i, 7);
        SW_Sort_TD_0365665Row t = {_d_week_seq13544,_23634,_23635,_23636,_23637,_23638,_23639,_23640};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0365665_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0365665_output.setInt32(r, 0, it._d_week_seq13544);
        tbl_Sort_TD_0365665_output.setInt64(r, 1, it._23634);
        tbl_Sort_TD_0365665_output.setInt64(r, 2, it._23635);
        tbl_Sort_TD_0365665_output.setInt64(r, 3, it._23636);
        tbl_Sort_TD_0365665_output.setInt64(r, 4, it._23637);
        tbl_Sort_TD_0365665_output.setInt64(r, 5, it._23638);
        tbl_Sort_TD_0365665_output.setInt64(r, 6, it._23639);
        tbl_Sort_TD_0365665_output.setInt64(r, 7, it._23640);
        if (r < 10) {
            std::cout << it._d_week_seq13544 << " " << it._23634 << " " << it._23635 << " " << it._23636 << " " << it._23637 << " " << it._23638 << " " << it._23639 << " " << it._23640 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0365665_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0365665_output #Row: " << tbl_Sort_TD_0365665_output.getNumRow() << std::endl;
}

