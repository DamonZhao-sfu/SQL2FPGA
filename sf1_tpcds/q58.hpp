#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_11460360(Table &tbl_SerializeFromObject_TD_12217018_input, Table &tbl_Filter_TD_11460360_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date#3690) AND (d_date#3690 = 2000-01-03)))
    // Input: ListBuffer(d_week_seq#3692, d_date#3690)
    // Output: ListBuffer(d_week_seq#3692)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12217018_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3690 = tbl_SerializeFromObject_TD_12217018_input.getInt32(i, 1);
        if ((_d_date3690!= 0) && (_d_date3690 == 20000103)) {
            int32_t _d_week_seq3692_t = tbl_SerializeFromObject_TD_12217018_input.getInt32(i, 0);
            tbl_Filter_TD_11460360_output.setInt32(r, 0, _d_week_seq3692_t);
            r++;
        }
    }
    tbl_Filter_TD_11460360_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11460360_output #Row: " << tbl_Filter_TD_11460360_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11783724(Table &tbl_SerializeFromObject_TD_12133607_input, Table &tbl_Filter_TD_11783724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date#3662) AND (d_date#3662 = 2000-01-03)))
    // Input: ListBuffer(d_week_seq#3664, d_date#3662)
    // Output: ListBuffer(d_week_seq#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12133607_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3662 = tbl_SerializeFromObject_TD_12133607_input.getInt32(i, 1);
        if ((_d_date3662!= 0) && (_d_date3662 == 20000103)) {
            int32_t _d_week_seq3664_t = tbl_SerializeFromObject_TD_12133607_input.getInt32(i, 0);
            tbl_Filter_TD_11783724_output.setInt32(r, 0, _d_week_seq3664_t);
            r++;
        }
    }
    tbl_Filter_TD_11783724_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11783724_output #Row: " << tbl_Filter_TD_11783724_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10464170(Table &tbl_SerializeFromObject_TD_11164227_input, Table &tbl_Filter_TD_10464170_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date#3718) AND (d_date#3718 = 2000-01-03)))
    // Input: ListBuffer(d_week_seq#3720, d_date#3718)
    // Output: ListBuffer(d_week_seq#3720)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11164227_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3718 = tbl_SerializeFromObject_TD_11164227_input.getInt32(i, 1);
        if ((_d_date3718!= 0) && (_d_date3718 == 20000103)) {
            int32_t _d_week_seq3720_t = tbl_SerializeFromObject_TD_11164227_input.getInt32(i, 0);
            tbl_Filter_TD_10464170_output.setInt32(r, 0, _d_week_seq3720_t);
            r++;
        }
    }
    tbl_Filter_TD_10464170_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10464170_output #Row: " << tbl_Filter_TD_10464170_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10338965(Table &tbl_SerializeFromObject_TD_11880341_input, Table &tbl_Filter_TD_11460360_output, Table &tbl_Filter_TD_10338965_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_week_seq#3776) AND (d_week_seq#3776 = scalar-subquery#3554 [])))
    // Input: ListBuffer(d_date#3774, d_week_seq#3776)
    // Output: ListBuffer(d_date#3774)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11880341_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq3776 = tbl_SerializeFromObject_TD_11880341_input.getInt32(i, 1);
        if ((_d_week_seq3776!= 0) && isElementExistsInTable(tbl_Filter_TD_11460360_output,_d_week_seq3776)) {
            int32_t _d_date3774_t = tbl_SerializeFromObject_TD_11880341_input.getInt32(i, 0);
            tbl_Filter_TD_10338965_output.setInt32(r, 0, _d_date3774_t);
            r++;
        }
    }
    tbl_Filter_TD_10338965_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10338965_output #Row: " << tbl_Filter_TD_10338965_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10727391(Table &tbl_SerializeFromObject_TD_11490384_input, Table &tbl_Filter_TD_10727391_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#3582))
    // Input: ListBuffer(d_date_sk#3582, d_date#3584)
    // Output: ListBuffer(d_date_sk#3582, d_date#3584)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11490384_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk3582 = tbl_SerializeFromObject_TD_11490384_input.getInt32(i, 0);
        if (_d_date_sk3582!= 0) {
            int32_t _d_date_sk3582_t = tbl_SerializeFromObject_TD_11490384_input.getInt32(i, 0);
            tbl_Filter_TD_10727391_output.setInt32(r, 0, _d_date_sk3582_t);
            int32_t _d_date3584_t = tbl_SerializeFromObject_TD_11490384_input.getInt32(i, 1);
            tbl_Filter_TD_10727391_output.setInt32(r, 1, _d_date3584_t);
            r++;
        }
    }
    tbl_Filter_TD_10727391_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10727391_output #Row: " << tbl_Filter_TD_10727391_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10724143(Table &tbl_SerializeFromObject_TD_11440700_input, Table &tbl_Filter_TD_10724143_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3560) AND isnotnull(i_item_id#3561)))
    // Input: ListBuffer(i_item_sk#3560, i_item_id#3561)
    // Output: ListBuffer(i_item_sk#3560, i_item_id#3561)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11440700_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3560 = tbl_SerializeFromObject_TD_11440700_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561 = tbl_SerializeFromObject_TD_11440700_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk3560!= 0) && (std::string(_i_item_id3561.data()) != "NULL")) {
            int32_t _i_item_sk3560_t = tbl_SerializeFromObject_TD_11440700_input.getInt32(i, 0);
            tbl_Filter_TD_10724143_output.setInt32(r, 0, _i_item_sk3560_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_t = tbl_SerializeFromObject_TD_11440700_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10724143_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3561_t);
            r++;
        }
    }
    tbl_Filter_TD_10724143_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10724143_output #Row: " << tbl_Filter_TD_10724143_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10633598(Table &tbl_SerializeFromObject_TD_11243200_input, Table &tbl_Filter_TD_10633598_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11243200_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_11243200_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_11243200_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_11243200_input.getInt32(i, 0);
            tbl_Filter_TD_10633598_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_11243200_input.getInt32(i, 1);
            tbl_Filter_TD_10633598_output.setInt32(r, 1, _cs_item_sk1119_t);
            int64_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_11243200_input.getInt64(i, 2);
            tbl_Filter_TD_10633598_output.setInt64(r, 2, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_10633598_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10633598_output #Row: " << tbl_Filter_TD_10633598_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10710904(Table &tbl_SerializeFromObject_TD_11805403_input, Table &tbl_Filter_TD_11783724_output, Table &tbl_Filter_TD_10710904_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_week_seq#3748) AND (d_week_seq#3748 = scalar-subquery#3550 [])))
    // Input: ListBuffer(d_date#3746, d_week_seq#3748)
    // Output: ListBuffer(d_date#3746)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11805403_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq3748 = tbl_SerializeFromObject_TD_11805403_input.getInt32(i, 1);
        if ((_d_week_seq3748!= 0) && isElementExistsInTable(tbl_Filter_TD_11783724_output,_d_week_seq3748)) {
            int32_t _d_date3746_t = tbl_SerializeFromObject_TD_11805403_input.getInt32(i, 0);
            tbl_Filter_TD_10710904_output.setInt32(r, 0, _d_date3746_t);
            r++;
        }
    }
    tbl_Filter_TD_10710904_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10710904_output #Row: " << tbl_Filter_TD_10710904_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10721167(Table &tbl_SerializeFromObject_TD_11178061_input, Table &tbl_Filter_TD_10721167_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#120))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11178061_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11178061_input.getInt32(i, 0);
        if (_d_date_sk120!= 0) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11178061_input.getInt32(i, 0);
            tbl_Filter_TD_10721167_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_11178061_input.getInt32(i, 1);
            tbl_Filter_TD_10721167_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_10721167_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10721167_output #Row: " << tbl_Filter_TD_10721167_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10571270(Table &tbl_SerializeFromObject_TD_1114552_input, Table &tbl_Filter_TD_10571270_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND isnotnull(i_item_id#229)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1114552_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_1114552_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_SerializeFromObject_TD_1114552_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk228!= 0) && (std::string(_i_item_id229.data()) != "NULL")) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_1114552_input.getInt32(i, 0);
            tbl_Filter_TD_10571270_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_1114552_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10571270_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_10571270_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10571270_output #Row: " << tbl_Filter_TD_10571270_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10863527(Table &tbl_SerializeFromObject_TD_11576918_input, Table &tbl_Filter_TD_10863527_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11576918_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_11576918_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11576918_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11576918_input.getInt32(i, 0);
            tbl_Filter_TD_10863527_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_11576918_input.getInt32(i, 1);
            tbl_Filter_TD_10863527_output.setInt32(r, 1, _ss_item_sk1208_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_11576918_input.getInt64(i, 2);
            tbl_Filter_TD_10863527_output.setInt64(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_10863527_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10863527_output #Row: " << tbl_Filter_TD_10863527_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9368898(Table &tbl_SerializeFromObject_TD_10749734_input, Table &tbl_Filter_TD_10464170_output, Table &tbl_Filter_TD_9368898_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_week_seq#3804) AND (d_week_seq#3804 = scalar-subquery#3558 [])))
    // Input: ListBuffer(d_date#3802, d_week_seq#3804)
    // Output: ListBuffer(d_date#3802)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10749734_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq3804 = tbl_SerializeFromObject_TD_10749734_input.getInt32(i, 1);
        if ((_d_week_seq3804!= 0) && isElementExistsInTable(tbl_Filter_TD_10464170_output,_d_week_seq3804)) {
            int32_t _d_date3802_t = tbl_SerializeFromObject_TD_10749734_input.getInt32(i, 0);
            tbl_Filter_TD_9368898_output.setInt32(r, 0, _d_date3802_t);
            r++;
        }
    }
    tbl_Filter_TD_9368898_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9368898_output #Row: " << tbl_Filter_TD_9368898_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9917269(Table &tbl_SerializeFromObject_TD_10365343_input, Table &tbl_Filter_TD_9917269_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#3632))
    // Input: ListBuffer(d_date_sk#3632, d_date#3634)
    // Output: ListBuffer(d_date_sk#3632, d_date#3634)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10365343_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk3632 = tbl_SerializeFromObject_TD_10365343_input.getInt32(i, 0);
        if (_d_date_sk3632!= 0) {
            int32_t _d_date_sk3632_t = tbl_SerializeFromObject_TD_10365343_input.getInt32(i, 0);
            tbl_Filter_TD_9917269_output.setInt32(r, 0, _d_date_sk3632_t);
            int32_t _d_date3634_t = tbl_SerializeFromObject_TD_10365343_input.getInt32(i, 1);
            tbl_Filter_TD_9917269_output.setInt32(r, 1, _d_date3634_t);
            r++;
        }
    }
    tbl_Filter_TD_9917269_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9917269_output #Row: " << tbl_Filter_TD_9917269_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9508085(Table &tbl_SerializeFromObject_TD_10645116_input, Table &tbl_Filter_TD_9508085_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3610) AND isnotnull(i_item_id#3611)))
    // Input: ListBuffer(i_item_sk#3610, i_item_id#3611)
    // Output: ListBuffer(i_item_sk#3610, i_item_id#3611)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10645116_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3610 = tbl_SerializeFromObject_TD_10645116_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611 = tbl_SerializeFromObject_TD_10645116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk3610!= 0) && (std::string(_i_item_id3611.data()) != "NULL")) {
            int32_t _i_item_sk3610_t = tbl_SerializeFromObject_TD_10645116_input.getInt32(i, 0);
            tbl_Filter_TD_9508085_output.setInt32(r, 0, _i_item_sk3610_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_t = tbl_SerializeFromObject_TD_10645116_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9508085_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3611_t);
            r++;
        }
    }
    tbl_Filter_TD_9508085_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9508085_output #Row: " << tbl_Filter_TD_9508085_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9242214(Table &tbl_SerializeFromObject_TD_10623457_input, Table &tbl_Filter_TD_9242214_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10623457_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_10623457_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10623457_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10623457_input.getInt32(i, 0);
            tbl_Filter_TD_9242214_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_10623457_input.getInt32(i, 1);
            tbl_Filter_TD_9242214_output.setInt32(r, 1, _ws_item_sk732_t);
            int64_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_10623457_input.getInt64(i, 2);
            tbl_Filter_TD_9242214_output.setInt64(r, 2, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_9242214_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9242214_output #Row: " << tbl_Filter_TD_9242214_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_955202_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_955202_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_955202_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_955202_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_955202_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int64_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_955202_key_rightMajor {
    int32_t _i_item_sk3560;
    bool operator==(const SW_JOIN_INNER_TD_955202_key_rightMajor& other) const {
        return ((_i_item_sk3560 == other._i_item_sk3560));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_955202_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_955202_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3560));
    }
};
}
struct SW_JOIN_INNER_TD_955202_payload_rightMajor {
    int32_t _i_item_sk3560;
    std::string _i_item_id3561;
};
void SW_JOIN_INNER_TD_955202(Table &tbl_Filter_TD_10633598_output, Table &tbl_Filter_TD_10724143_output, Table &tbl_JOIN_INNER_TD_955202_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#3560))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(i_item_sk#3560, i_item_id#3561)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127, i_item_id#3561)
    int left_nrow = tbl_Filter_TD_10633598_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10724143_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_955202_key_leftMajor, SW_JOIN_INNER_TD_955202_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10633598_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_10633598_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_955202_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10633598_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_10633598_output.getInt32(i, 1);
            int64_t _cs_ext_sales_price1127 = tbl_Filter_TD_10633598_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_955202_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10724143_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3560_k = tbl_Filter_TD_10724143_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_955202_key_leftMajor{_i_item_sk3560_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int64_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_item_sk3560 = tbl_Filter_TD_10724143_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n = tbl_Filter_TD_10724143_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id3561 = std::string(_i_item_id3561_n.data());
                tbl_JOIN_INNER_TD_955202_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_955202_output.setInt64(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_955202_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id3561_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_955202_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_955202_key_rightMajor, SW_JOIN_INNER_TD_955202_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10724143_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3560_k = tbl_Filter_TD_10724143_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_955202_key_rightMajor keyA{_i_item_sk3560_k};
            int32_t _i_item_sk3560 = tbl_Filter_TD_10724143_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n = tbl_Filter_TD_10724143_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id3561 = std::string(_i_item_id3561_n.data());
            SW_JOIN_INNER_TD_955202_payload_rightMajor payloadA{_i_item_sk3560, _i_item_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10633598_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_10633598_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_955202_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3560 = (it->second)._i_item_sk3560;
                std::string _i_item_id3561 = (it->second)._i_item_id3561;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n{};
                memcpy(_i_item_id3561_n.data(), (_i_item_id3561).data(), (_i_item_id3561).length());
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10633598_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_10633598_output.getInt32(i, 1);
                int64_t _cs_ext_sales_price1127 = tbl_Filter_TD_10633598_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_955202_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id3561_n);
                tbl_JOIN_INNER_TD_955202_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_955202_output.setInt64(r, 1, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_955202_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_955202_output #Row: " << tbl_JOIN_INNER_TD_955202_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_9250551_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_9250551_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9250551_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9250551_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_9250551_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int64_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_9250551_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_9250551_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9250551_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9250551_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_9250551_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_9250551(Table &tbl_Filter_TD_10863527_output, Table &tbl_Filter_TD_10571270_output, Table &tbl_JOIN_INNER_TD_9250551_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_ext_sales_price#1221, i_item_id#229)
    int left_nrow = tbl_Filter_TD_10863527_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10571270_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9250551_key_leftMajor, SW_JOIN_INNER_TD_9250551_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10863527_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_10863527_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9250551_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10863527_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_10863527_output.getInt32(i, 1);
            int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_10863527_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_9250551_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10571270_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_10571270_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9250551_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_10571270_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_10571270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_9250551_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9250551_output.setInt64(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9250551_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9250551_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9250551_key_rightMajor, SW_JOIN_INNER_TD_9250551_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10571270_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_10571270_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9250551_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_10571270_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_10571270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_9250551_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10863527_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_10863527_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9250551_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10863527_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_10863527_output.getInt32(i, 1);
                int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_10863527_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_9250551_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_9250551_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9250551_output.setInt64(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9250551_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9250551_output #Row: " << tbl_JOIN_INNER_TD_9250551_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_8425134_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_8425134_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8425134_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8425134_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_8425134_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int64_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_8425134_key_rightMajor {
    int32_t _i_item_sk3610;
    bool operator==(const SW_JOIN_INNER_TD_8425134_key_rightMajor& other) const {
        return ((_i_item_sk3610 == other._i_item_sk3610));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8425134_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8425134_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3610));
    }
};
}
struct SW_JOIN_INNER_TD_8425134_payload_rightMajor {
    int32_t _i_item_sk3610;
    std::string _i_item_id3611;
};
void SW_JOIN_INNER_TD_8425134(Table &tbl_Filter_TD_9242214_output, Table &tbl_Filter_TD_9508085_output, Table &tbl_JOIN_INNER_TD_8425134_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#3610))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_ext_sales_price#752)
    // Right Table: ListBuffer(i_item_sk#3610, i_item_id#3611)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752, i_item_id#3611)
    int left_nrow = tbl_Filter_TD_9242214_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9508085_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8425134_key_leftMajor, SW_JOIN_INNER_TD_8425134_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9242214_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_9242214_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8425134_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9242214_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_9242214_output.getInt32(i, 1);
            int64_t _ws_ext_sales_price752 = tbl_Filter_TD_9242214_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_8425134_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9508085_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3610_k = tbl_Filter_TD_9508085_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8425134_key_leftMajor{_i_item_sk3610_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int64_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_item_sk3610 = tbl_Filter_TD_9508085_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n = tbl_Filter_TD_9508085_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id3611 = std::string(_i_item_id3611_n.data());
                tbl_JOIN_INNER_TD_8425134_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_8425134_output.setInt64(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_8425134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id3611_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8425134_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8425134_key_rightMajor, SW_JOIN_INNER_TD_8425134_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9508085_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3610_k = tbl_Filter_TD_9508085_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8425134_key_rightMajor keyA{_i_item_sk3610_k};
            int32_t _i_item_sk3610 = tbl_Filter_TD_9508085_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n = tbl_Filter_TD_9508085_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id3611 = std::string(_i_item_id3611_n.data());
            SW_JOIN_INNER_TD_8425134_payload_rightMajor payloadA{_i_item_sk3610, _i_item_id3611};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9242214_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_9242214_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8425134_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3610 = (it->second)._i_item_sk3610;
                std::string _i_item_id3611 = (it->second)._i_item_id3611;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n{};
                memcpy(_i_item_id3611_n.data(), (_i_item_id3611).data(), (_i_item_id3611).length());
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9242214_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_9242214_output.getInt32(i, 1);
                int64_t _ws_ext_sales_price752 = tbl_Filter_TD_9242214_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_8425134_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id3611_n);
                tbl_JOIN_INNER_TD_8425134_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_8425134_output.setInt64(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8425134_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8425134_output #Row: " << tbl_JOIN_INNER_TD_8425134_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_881496_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_881496_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_881496_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_881496_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_881496_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int64_t _cs_ext_sales_price1127;
    std::string _i_item_id3561;
};
struct SW_JOIN_INNER_TD_881496_key_rightMajor {
    int32_t _d_date_sk3582;
    bool operator==(const SW_JOIN_INNER_TD_881496_key_rightMajor& other) const {
        return ((_d_date_sk3582 == other._d_date_sk3582));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_881496_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_881496_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3582));
    }
};
}
struct SW_JOIN_INNER_TD_881496_payload_rightMajor {
    int32_t _d_date_sk3582;
};
void SW_JOIN_INNER_TD_881496(Table &tbl_JOIN_INNER_TD_955202_output, Table &tbl_JOIN_LEFTSEMI_TD_9802369_output, Table &tbl_JOIN_INNER_TD_881496_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3582))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127, i_item_id#3561)
    // Right Table: ListBuffer(d_date_sk#3582)
    // Output Table: ListBuffer(cs_ext_sales_price#1127, i_item_id#3561)
    int left_nrow = tbl_JOIN_INNER_TD_955202_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_9802369_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_881496_key_leftMajor, SW_JOIN_INNER_TD_881496_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_955202_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_955202_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_881496_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_955202_output.getInt32(i, 0);
            int64_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_955202_output.getInt64(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n = tbl_JOIN_INNER_TD_955202_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id3561 = std::string(_i_item_id3561_n.data());
            SW_JOIN_INNER_TD_881496_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ext_sales_price1127, _i_item_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_9802369_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3582_k = tbl_JOIN_LEFTSEMI_TD_9802369_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_881496_key_leftMajor{_d_date_sk3582_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int64_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                std::string _i_item_id3561 = (it->second)._i_item_id3561;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n{};
                memcpy(_i_item_id3561_n.data(), (_i_item_id3561).data(), (_i_item_id3561).length());
                int32_t _d_date_sk3582 = tbl_JOIN_LEFTSEMI_TD_9802369_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_881496_output.setInt64(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_881496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3561_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_881496_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_881496_key_rightMajor, SW_JOIN_INNER_TD_881496_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_9802369_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3582_k = tbl_JOIN_LEFTSEMI_TD_9802369_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_881496_key_rightMajor keyA{_d_date_sk3582_k};
            int32_t _d_date_sk3582 = tbl_JOIN_LEFTSEMI_TD_9802369_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_881496_payload_rightMajor payloadA{_d_date_sk3582};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_955202_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_955202_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_881496_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3582 = (it->second)._d_date_sk3582;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_955202_output.getInt32(i, 0);
                int64_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_955202_output.getInt64(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n = tbl_JOIN_INNER_TD_955202_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id3561 = std::string(_i_item_id3561_n.data());
                tbl_JOIN_INNER_TD_881496_output.setInt64(r, 0, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_881496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3561_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_881496_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_881496_output #Row: " << tbl_JOIN_INNER_TD_881496_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8235686_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8235686_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8235686_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8235686_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8235686_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int64_t _ss_ext_sales_price1221;
    std::string _i_item_id229;
};
struct SW_JOIN_INNER_TD_8235686_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8235686_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8235686_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8235686_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8235686_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8235686(Table &tbl_JOIN_INNER_TD_9250551_output, Table &tbl_JOIN_LEFTSEMI_TD_9415842_output, Table &tbl_JOIN_INNER_TD_8235686_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_ext_sales_price#1221, i_item_id#229)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_9250551_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_9415842_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8235686_key_leftMajor, SW_JOIN_INNER_TD_8235686_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9250551_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9250551_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8235686_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9250551_output.getInt32(i, 0);
            int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9250551_output.getInt64(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_9250551_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_8235686_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_ext_sales_price1221, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_9415842_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_JOIN_LEFTSEMI_TD_9415842_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8235686_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _d_date_sk120 = tbl_JOIN_LEFTSEMI_TD_9415842_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8235686_output.setInt64(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8235686_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8235686_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8235686_key_rightMajor, SW_JOIN_INNER_TD_8235686_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_9415842_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_JOIN_LEFTSEMI_TD_9415842_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8235686_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_JOIN_LEFTSEMI_TD_9415842_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8235686_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9250551_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9250551_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8235686_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9250551_output.getInt32(i, 0);
                int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9250551_output.getInt64(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_9250551_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_8235686_output.setInt64(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8235686_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8235686_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8235686_output #Row: " << tbl_JOIN_INNER_TD_8235686_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7691242_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_7691242_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7691242_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7691242_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_7691242_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int64_t _ws_ext_sales_price752;
    std::string _i_item_id3611;
};
struct SW_JOIN_INNER_TD_7691242_key_rightMajor {
    int32_t _d_date_sk3632;
    bool operator==(const SW_JOIN_INNER_TD_7691242_key_rightMajor& other) const {
        return ((_d_date_sk3632 == other._d_date_sk3632));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7691242_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7691242_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3632));
    }
};
}
struct SW_JOIN_INNER_TD_7691242_payload_rightMajor {
    int32_t _d_date_sk3632;
};
void SW_JOIN_INNER_TD_7691242(Table &tbl_JOIN_INNER_TD_8425134_output, Table &tbl_JOIN_LEFTSEMI_TD_8476052_output, Table &tbl_JOIN_INNER_TD_7691242_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3632))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752, i_item_id#3611)
    // Right Table: ListBuffer(d_date_sk#3632)
    // Output Table: ListBuffer(ws_ext_sales_price#752, i_item_id#3611)
    int left_nrow = tbl_JOIN_INNER_TD_8425134_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_8476052_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7691242_key_leftMajor, SW_JOIN_INNER_TD_7691242_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8425134_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_8425134_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7691242_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_8425134_output.getInt32(i, 0);
            int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8425134_output.getInt64(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n = tbl_JOIN_INNER_TD_8425134_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id3611 = std::string(_i_item_id3611_n.data());
            SW_JOIN_INNER_TD_7691242_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_ext_sales_price752, _i_item_id3611};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_8476052_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3632_k = tbl_JOIN_LEFTSEMI_TD_8476052_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7691242_key_leftMajor{_d_date_sk3632_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int64_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                std::string _i_item_id3611 = (it->second)._i_item_id3611;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n{};
                memcpy(_i_item_id3611_n.data(), (_i_item_id3611).data(), (_i_item_id3611).length());
                int32_t _d_date_sk3632 = tbl_JOIN_LEFTSEMI_TD_8476052_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7691242_output.setInt64(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7691242_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3611_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7691242_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7691242_key_rightMajor, SW_JOIN_INNER_TD_7691242_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_8476052_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3632_k = tbl_JOIN_LEFTSEMI_TD_8476052_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7691242_key_rightMajor keyA{_d_date_sk3632_k};
            int32_t _d_date_sk3632 = tbl_JOIN_LEFTSEMI_TD_8476052_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7691242_payload_rightMajor payloadA{_d_date_sk3632};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8425134_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_8425134_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7691242_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3632 = (it->second)._d_date_sk3632;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_8425134_output.getInt32(i, 0);
                int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_8425134_output.getInt64(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n = tbl_JOIN_INNER_TD_8425134_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id3611 = std::string(_i_item_id3611_n.data());
                tbl_JOIN_INNER_TD_7691242_output.setInt64(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7691242_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3611_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7691242_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7691242_output #Row: " << tbl_JOIN_INNER_TD_7691242_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_7464050_key;
struct SW_Aggregate_TD_7464050_payload {
    std::string _item_id3552;
    int64_t _cs_item_rev3553_sum_0;
};
void SW_Aggregate_TD_7464050(Table &tbl_JOIN_INNER_TD_881496_output, Table &tbl_Aggregate_TD_7464050_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#3561, i_item_id#3561 AS item_id#3552, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS cs_item_rev#3553)
    // Input: ListBuffer(cs_ext_sales_price#1127, i_item_id#3561)
    // Output: ListBuffer(item_id#3552, cs_item_rev#3553)
    std::unordered_map<SW_Aggregate_TD_7464050_key, SW_Aggregate_TD_7464050_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_881496_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_881496_output.getInt64(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561 = tbl_JOIN_INNER_TD_881496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_7464050_key k = std::string(_i_item_id3561.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id3552 = _i_item_id3561;
        int64_t _cs_item_rev3553_sum_0 = _cs_ext_sales_price1127;
        SW_Aggregate_TD_7464050_payload p{std::string(_item_id3552.data()), _cs_item_rev3553_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._cs_item_rev3553_sum_0 + _cs_item_rev3553_sum_0;
            p._cs_item_rev3553_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_item_id3561 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _item_id3552_n{};
        memcpy(_item_id3552_n.data(), (it.second)._item_id3552.data(), (it.second)._item_id3552.length());
        tbl_Aggregate_TD_7464050_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3552_n);
        int64_t _cs_item_rev3553 = (it.second)._cs_item_rev3553_sum_0;
        tbl_Aggregate_TD_7464050_output.setInt64(r, 1, _cs_item_rev3553);
        ++r;
    }
    tbl_Aggregate_TD_7464050_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7464050_output #Row: " << tbl_Aggregate_TD_7464050_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_7128220_key;
struct SW_Aggregate_TD_7128220_payload {
    std::string _item_id3548;
    int64_t _ss_item_rev3549_sum_0;
};
void SW_Aggregate_TD_7128220(Table &tbl_JOIN_INNER_TD_8235686_output, Table &tbl_Aggregate_TD_7128220_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_id#229 AS item_id#3548, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS ss_item_rev#3549)
    // Input: ListBuffer(ss_ext_sales_price#1221, i_item_id#229)
    // Output: ListBuffer(item_id#3548, ss_item_rev#3549)
    std::unordered_map<SW_Aggregate_TD_7128220_key, SW_Aggregate_TD_7128220_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8235686_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8235686_output.getInt64(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_8235686_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_7128220_key k = std::string(_i_item_id229.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548 = _i_item_id229;
        int64_t _ss_item_rev3549_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_7128220_payload p{std::string(_item_id3548.data()), _ss_item_rev3549_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ss_item_rev3549_sum_0 + _ss_item_rev3549_sum_0;
            p._ss_item_rev3549_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_item_id229 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n{};
        memcpy(_item_id3548_n.data(), (it.second)._item_id3548.data(), (it.second)._item_id3548.length());
        tbl_Aggregate_TD_7128220_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
        int64_t _ss_item_rev3549 = (it.second)._ss_item_rev3549_sum_0;
        tbl_Aggregate_TD_7128220_output.setInt64(r, 1, _ss_item_rev3549);
        ++r;
    }
    tbl_Aggregate_TD_7128220_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7128220_output #Row: " << tbl_Aggregate_TD_7128220_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6509306_key;
struct SW_Aggregate_TD_6509306_payload {
    std::string _item_id3556;
    int64_t _ws_item_rev3557_sum_0;
};
void SW_Aggregate_TD_6509306(Table &tbl_JOIN_INNER_TD_7691242_output, Table &tbl_Aggregate_TD_6509306_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#3611, i_item_id#3611 AS item_id#3556, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS ws_item_rev#3557)
    // Input: ListBuffer(ws_ext_sales_price#752, i_item_id#3611)
    // Output: ListBuffer(item_id#3556, ws_item_rev#3557)
    std::unordered_map<SW_Aggregate_TD_6509306_key, SW_Aggregate_TD_6509306_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7691242_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7691242_output.getInt64(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611 = tbl_JOIN_INNER_TD_7691242_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_6509306_key k = std::string(_i_item_id3611.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id3556 = _i_item_id3611;
        int64_t _ws_item_rev3557_sum_0 = _ws_ext_sales_price752;
        SW_Aggregate_TD_6509306_payload p{std::string(_item_id3556.data()), _ws_item_rev3557_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ws_item_rev3557_sum_0 + _ws_item_rev3557_sum_0;
            p._ws_item_rev3557_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_item_id3611 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _item_id3556_n{};
        memcpy(_item_id3556_n.data(), (it.second)._item_id3556.data(), (it.second)._item_id3556.length());
        tbl_Aggregate_TD_6509306_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3556_n);
        int64_t _ws_item_rev3557 = (it.second)._ws_item_rev3557_sum_0;
        tbl_Aggregate_TD_6509306_output.setInt64(r, 1, _ws_item_rev3557);
        ++r;
    }
    tbl_Aggregate_TD_6509306_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6509306_output #Row: " << tbl_Aggregate_TD_6509306_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6893713(Table &tbl_Aggregate_TD_7464050_output, Table &tbl_Filter_TD_6893713_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_item_rev#3553))
    // Input: ListBuffer(item_id#3552, cs_item_rev#3553)
    // Output: ListBuffer(item_id#3552, cs_item_rev#3553)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7464050_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cs_item_rev3553 = tbl_Aggregate_TD_7464050_output.getInt64(i, 1);
        if (_cs_item_rev3553!= 0) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3552_t = tbl_Aggregate_TD_7464050_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6893713_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3552_t);
            int64_t _cs_item_rev3553_t = tbl_Aggregate_TD_7464050_output.getInt64(i, 1);
            tbl_Filter_TD_6893713_output.setInt64(r, 1, _cs_item_rev3553_t);
            r++;
        }
    }
    tbl_Filter_TD_6893713_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6893713_output #Row: " << tbl_Filter_TD_6893713_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6881067(Table &tbl_Aggregate_TD_7128220_output, Table &tbl_Filter_TD_6881067_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_item_rev#3549))
    // Input: ListBuffer(item_id#3548, ss_item_rev#3549)
    // Output: ListBuffer(item_id#3548, ss_item_rev#3549)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7128220_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_item_rev3549 = tbl_Aggregate_TD_7128220_output.getInt64(i, 1);
        if (_ss_item_rev3549!= 0) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_t = tbl_Aggregate_TD_7128220_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6881067_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_t);
            int64_t _ss_item_rev3549_t = tbl_Aggregate_TD_7128220_output.getInt64(i, 1);
            tbl_Filter_TD_6881067_output.setInt64(r, 1, _ss_item_rev3549_t);
            r++;
        }
    }
    tbl_Filter_TD_6881067_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6881067_output #Row: " << tbl_Filter_TD_6881067_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5779832(Table &tbl_Aggregate_TD_6509306_output, Table &tbl_Filter_TD_5779832_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_item_rev#3557))
    // Input: ListBuffer(item_id#3556, ws_item_rev#3557)
    // Output: ListBuffer(item_id#3556, ws_item_rev#3557)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_6509306_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_item_rev3557 = tbl_Aggregate_TD_6509306_output.getInt64(i, 1);
        if (_ws_item_rev3557!= 0) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3556_t = tbl_Aggregate_TD_6509306_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_5779832_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3556_t);
            int64_t _ws_item_rev3557_t = tbl_Aggregate_TD_6509306_output.getInt64(i, 1);
            tbl_Filter_TD_5779832_output.setInt64(r, 1, _ws_item_rev3557_t);
            r++;
        }
    }
    tbl_Filter_TD_5779832_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5779832_output #Row: " << tbl_Filter_TD_5779832_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_562857_key_leftMajor {
    std::string _item_id3548;
    bool operator==(const SW_JOIN_INNER_TD_562857_key_leftMajor& other) const {
        return ((_item_id3548 == other._item_id3548));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_562857_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_562857_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id3548));
    }
};
}
struct SW_JOIN_INNER_TD_562857_payload_leftMajor {
    std::string _item_id3548;
    int64_t _ss_item_rev3549;
};
struct SW_JOIN_INNER_TD_562857_key_rightMajor {
    std::string _item_id3552;
    bool operator==(const SW_JOIN_INNER_TD_562857_key_rightMajor& other) const {
        return ((_item_id3552 == other._item_id3552));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_562857_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_562857_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id3552));
    }
};
}
struct SW_JOIN_INNER_TD_562857_payload_rightMajor {
    std::string _item_id3552;
    int64_t _cs_item_rev3553;
};
void SW_JOIN_INNER_TD_562857(Table &tbl_Filter_TD_6881067_output, Table &tbl_Filter_TD_6893713_output, Table &tbl_JOIN_INNER_TD_562857_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((item_id#3548 = item_id#3552) AND (cast(ss_item_rev#3549 as decimal(19,3)) >= CheckOverflow((0.90 * promote_precision(cs_item_rev#3553)), DecimalType(19,3), true))) AND (cast(ss_item_rev#3549 as decimal(20,3)) <= CheckOverflow((1.10 * promote_precision(cs_item_rev#3553)), DecimalType(20,3), true))) AND (cast(cs_item_rev#3553 as decimal(19,3)) >= CheckOverflow((0.90 * promote_precision(ss_item_rev#3549)), DecimalType(19,3), true))) AND (cast(cs_item_rev#3553 as decimal(20,3)) <= CheckOverflow((1.10 * promote_precision(ss_item_rev#3549)), DecimalType(20,3), true))))
    // Left Table: ListBuffer(item_id#3548, ss_item_rev#3549)
    // Right Table: ListBuffer(item_id#3552, cs_item_rev#3553)
    // Output Table: ListBuffer(item_id#3548, ss_item_rev#3549, cs_item_rev#3553)
    int left_nrow = tbl_Filter_TD_6881067_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6893713_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_562857_key_leftMajor, SW_JOIN_INNER_TD_562857_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6881067_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_k_n = tbl_Filter_TD_6881067_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548_k = std::string(_item_id3548_k_n.data());
            SW_JOIN_INNER_TD_562857_key_leftMajor keyA{_item_id3548_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_Filter_TD_6881067_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548 = std::string(_item_id3548_n.data());
            int64_t _ss_item_rev3549 = tbl_Filter_TD_6881067_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_562857_payload_leftMajor payloadA{_item_id3548, _ss_item_rev3549};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6893713_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3552_k_n = tbl_Filter_TD_6893713_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3552_k = std::string(_item_id3552_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_562857_key_leftMajor{_item_id3552_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id3548 = (it->second)._item_id3548;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n{};
                memcpy(_item_id3548_n.data(), (_item_id3548).data(), (_item_id3548).length());
                int64_t _ss_item_rev3549 = (it->second)._ss_item_rev3549;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3552_n = tbl_Filter_TD_6893713_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id3552 = std::string(_item_id3552_n.data());
                int64_t _cs_item_rev3553 = tbl_Filter_TD_6893713_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_562857_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
                tbl_JOIN_INNER_TD_562857_output.setInt64(r, 1, _ss_item_rev3549);
                tbl_JOIN_INNER_TD_562857_output.setInt64(r, 2, _cs_item_rev3553);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_562857_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_562857_key_rightMajor, SW_JOIN_INNER_TD_562857_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6893713_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3552_k_n = tbl_Filter_TD_6893713_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3552_k = std::string(_item_id3552_k_n.data());
            SW_JOIN_INNER_TD_562857_key_rightMajor keyA{_item_id3552_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id3552_n = tbl_Filter_TD_6893713_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3552 = std::string(_item_id3552_n.data());
            int64_t _cs_item_rev3553 = tbl_Filter_TD_6893713_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_562857_payload_rightMajor payloadA{_item_id3552, _cs_item_rev3553};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6881067_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_k_n = tbl_Filter_TD_6881067_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548_k = std::string(_item_id3548_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_562857_key_rightMajor{_item_id3548_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id3552 = (it->second)._item_id3552;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3552_n{};
                memcpy(_item_id3552_n.data(), (_item_id3552).data(), (_item_id3552).length());
                int64_t _cs_item_rev3553 = (it->second)._cs_item_rev3553;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_Filter_TD_6881067_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id3548 = std::string(_item_id3548_n.data());
                int64_t _ss_item_rev3549 = tbl_Filter_TD_6881067_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_562857_output.setInt64(r, 2, _cs_item_rev3553);
                tbl_JOIN_INNER_TD_562857_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
                tbl_JOIN_INNER_TD_562857_output.setInt64(r, 1, _ss_item_rev3549);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_562857_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_562857_output #Row: " << tbl_JOIN_INNER_TD_562857_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4880176_key_leftMajor {
    std::string _item_id3548;
    bool operator==(const SW_JOIN_INNER_TD_4880176_key_leftMajor& other) const {
        return ((_item_id3548 == other._item_id3548));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4880176_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4880176_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id3548));
    }
};
}
struct SW_JOIN_INNER_TD_4880176_payload_leftMajor {
    std::string _item_id3548;
    int64_t _ss_item_rev3549;
    int64_t _cs_item_rev3553;
};
struct SW_JOIN_INNER_TD_4880176_key_rightMajor {
    std::string _item_id3556;
    bool operator==(const SW_JOIN_INNER_TD_4880176_key_rightMajor& other) const {
        return ((_item_id3556 == other._item_id3556));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4880176_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4880176_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id3556));
    }
};
}
struct SW_JOIN_INNER_TD_4880176_payload_rightMajor {
    std::string _item_id3556;
    int64_t _ws_item_rev3557;
};
void SW_JOIN_INNER_TD_4880176(Table &tbl_JOIN_INNER_TD_562857_output, Table &tbl_Filter_TD_5779832_output, Table &tbl_JOIN_INNER_TD_4880176_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((((((item_id#3548 = item_id#3556) AND (cast(ss_item_rev#3549 as decimal(19,3)) >= CheckOverflow((0.90 * promote_precision(ws_item_rev#3557)), DecimalType(19,3), true))) AND (cast(ss_item_rev#3549 as decimal(20,3)) <= CheckOverflow((1.10 * promote_precision(ws_item_rev#3557)), DecimalType(20,3), true))) AND (cast(cs_item_rev#3553 as decimal(19,3)) >= CheckOverflow((0.90 * promote_precision(ws_item_rev#3557)), DecimalType(19,3), true))) AND (cast(cs_item_rev#3553 as decimal(20,3)) <= CheckOverflow((1.10 * promote_precision(ws_item_rev#3557)), DecimalType(20,3), true))) AND (cast(ws_item_rev#3557 as decimal(19,3)) >= CheckOverflow((0.90 * promote_precision(ss_item_rev#3549)), DecimalType(19,3), true))) AND (cast(ws_item_rev#3557 as decimal(20,3)) <= CheckOverflow((1.10 * promote_precision(ss_item_rev#3549)), DecimalType(20,3), true))) AND (cast(ws_item_rev#3557 as decimal(19,3)) >= CheckOverflow((0.90 * promote_precision(cs_item_rev#3553)), DecimalType(19,3), true))) AND (cast(ws_item_rev#3557 as decimal(20,3)) <= CheckOverflow((1.10 * promote_precision(cs_item_rev#3553)), DecimalType(20,3), true))))
    // Left Table: ListBuffer(item_id#3548, ss_item_rev#3549, cs_item_rev#3553)
    // Right Table: ListBuffer(item_id#3556, ws_item_rev#3557)
    // Output Table: ListBuffer(item_id#3548, ss_item_rev#3549, cs_item_rev#3553, ws_item_rev#3557)
    int left_nrow = tbl_JOIN_INNER_TD_562857_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5779832_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4880176_key_leftMajor, SW_JOIN_INNER_TD_4880176_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_562857_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_k_n = tbl_JOIN_INNER_TD_562857_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548_k = std::string(_item_id3548_k_n.data());
            SW_JOIN_INNER_TD_4880176_key_leftMajor keyA{_item_id3548_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_JOIN_INNER_TD_562857_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548 = std::string(_item_id3548_n.data());
            int64_t _ss_item_rev3549 = tbl_JOIN_INNER_TD_562857_output.getInt64(i, 1);
            int64_t _cs_item_rev3553 = tbl_JOIN_INNER_TD_562857_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_4880176_payload_leftMajor payloadA{_item_id3548, _ss_item_rev3549, _cs_item_rev3553};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5779832_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3556_k_n = tbl_Filter_TD_5779832_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3556_k = std::string(_item_id3556_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4880176_key_leftMajor{_item_id3556_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id3548 = (it->second)._item_id3548;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n{};
                memcpy(_item_id3548_n.data(), (_item_id3548).data(), (_item_id3548).length());
                int64_t _ss_item_rev3549 = (it->second)._ss_item_rev3549;
                int64_t _cs_item_rev3553 = (it->second)._cs_item_rev3553;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3556_n = tbl_Filter_TD_5779832_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id3556 = std::string(_item_id3556_n.data());
                int64_t _ws_item_rev3557 = tbl_Filter_TD_5779832_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_4880176_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
                tbl_JOIN_INNER_TD_4880176_output.setInt64(r, 1, _ss_item_rev3549);
                tbl_JOIN_INNER_TD_4880176_output.setInt64(r, 2, _cs_item_rev3553);
                tbl_JOIN_INNER_TD_4880176_output.setInt64(r, 3, _ws_item_rev3557);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4880176_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4880176_key_rightMajor, SW_JOIN_INNER_TD_4880176_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5779832_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3556_k_n = tbl_Filter_TD_5779832_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3556_k = std::string(_item_id3556_k_n.data());
            SW_JOIN_INNER_TD_4880176_key_rightMajor keyA{_item_id3556_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id3556_n = tbl_Filter_TD_5779832_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3556 = std::string(_item_id3556_n.data());
            int64_t _ws_item_rev3557 = tbl_Filter_TD_5779832_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_4880176_payload_rightMajor payloadA{_item_id3556, _ws_item_rev3557};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_562857_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_k_n = tbl_JOIN_INNER_TD_562857_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548_k = std::string(_item_id3548_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4880176_key_rightMajor{_item_id3548_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id3556 = (it->second)._item_id3556;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3556_n{};
                memcpy(_item_id3556_n.data(), (_item_id3556).data(), (_item_id3556).length());
                int64_t _ws_item_rev3557 = (it->second)._ws_item_rev3557;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_JOIN_INNER_TD_562857_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id3548 = std::string(_item_id3548_n.data());
                int64_t _ss_item_rev3549 = tbl_JOIN_INNER_TD_562857_output.getInt64(i, 1);
                int64_t _cs_item_rev3553 = tbl_JOIN_INNER_TD_562857_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_4880176_output.setInt64(r, 3, _ws_item_rev3557);
                tbl_JOIN_INNER_TD_4880176_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
                tbl_JOIN_INNER_TD_4880176_output.setInt64(r, 1, _ss_item_rev3549);
                tbl_JOIN_INNER_TD_4880176_output.setInt64(r, 2, _cs_item_rev3553);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4880176_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4880176_output #Row: " << tbl_JOIN_INNER_TD_4880176_output.getNumRow() << std::endl;
}

void SW_Project_TD_3901867(Table &tbl_JOIN_INNER_TD_4880176_output, Table &tbl_Project_TD_3901867_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(ss_item_rev#3549 as decimal(19,2))) / promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ss_item_rev#3549 as decimal(18,2))) + promote_precision(cast(cs_item_rev#3553 as decimal(18,2)))), DecimalType(18,2), true) as decimal(19,2))) + promote_precision(cast(ws_item_rev#3557 as decimal(19,2)))), DecimalType(19,2), true))), DecimalType(38,21), true)) / 3.000000000000000000000), DecimalType(38,21), true)) * 100.000000000000000000000), DecimalType(38,17), true) AS ss_dev#3544, CheckOverflow((promote_precision(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(cs_item_rev#3553 as decimal(19,2))) / promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ss_item_rev#3549 as decimal(18,2))) + promote_precision(cast(cs_item_rev#3553 as decimal(18,2)))), DecimalType(18,2), true) as decimal(19,2))) + promote_precision(cast(ws_item_rev#3557 as decimal(19,2)))), DecimalType(19,2), true))), DecimalType(38,21), true)) / 3.000000000000000000000), DecimalType(38,21), true)) * 100.000000000000000000000), DecimalType(38,17), true) AS cs_dev#3545, CheckOverflow((promote_precision(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(ws_item_rev#3557 as decimal(19,2))) / promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ss_item_rev#3549 as decimal(18,2))) + promote_precision(cast(cs_item_rev#3553 as decimal(18,2)))), DecimalType(18,2), true) as decimal(19,2))) + promote_precision(cast(ws_item_rev#3557 as decimal(19,2)))), DecimalType(19,2), true))), DecimalType(38,21), true)) / 3.000000000000000000000), DecimalType(38,21), true)) * 100.000000000000000000000), DecimalType(38,17), true) AS ws_dev#3546, CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ss_item_rev#3549 as decimal(18,2))) + promote_precision(cast(cs_item_rev#3553 as decimal(18,2)))), DecimalType(18,2), true) as decimal(19,2))) + promote_precision(cast(ws_item_rev#3557 as decimal(19,2)))), DecimalType(19,2), true)) / 3.00), DecimalType(23,6), true) AS average#3547)
    // Input: ListBuffer(item_id#3548, ss_item_rev#3549, cs_item_rev#3553, ws_item_rev#3557)
    // Output: ListBuffer(item_id#3548, ss_item_rev#3549, ss_dev#3544, cs_item_rev#3553, cs_dev#3545, ws_item_rev#3557, ws_dev#3546, average#3547)
    int nrow1 = tbl_JOIN_INNER_TD_4880176_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548 = tbl_JOIN_INNER_TD_4880176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int64_t _ss_item_rev3549 = tbl_JOIN_INNER_TD_4880176_output.getInt64(i, 1);
        int64_t _cs_item_rev3553 = tbl_JOIN_INNER_TD_4880176_output.getInt64(i, 2);
        int64_t _ws_item_rev3557 = tbl_JOIN_INNER_TD_4880176_output.getInt64(i, 3);
        int64_t _ss_dev3544 = (((_ss_item_rev3549 / ((_ss_item_rev3549 + _cs_item_rev3553) + _ws_item_rev3557)) / 3.000000000000000000000) * 100.000000000000000000000);
        tbl_Project_TD_3901867_output.setInt64(i, 2, _ss_dev3544);
        int64_t _cs_dev3545 = (((_cs_item_rev3553 / ((_ss_item_rev3549 + _cs_item_rev3553) + _ws_item_rev3557)) / 3.000000000000000000000) * 100.000000000000000000000);
        tbl_Project_TD_3901867_output.setInt64(i, 4, _cs_dev3545);
        int64_t _ws_dev3546 = (((_ws_item_rev3557 / ((_ss_item_rev3549 + _cs_item_rev3553) + _ws_item_rev3557)) / 3.000000000000000000000) * 100.000000000000000000000);
        tbl_Project_TD_3901867_output.setInt64(i, 6, _ws_dev3546);
        int64_t _average3547 = (((_ss_item_rev3549 + _cs_item_rev3553) + _ws_item_rev3557) / 3.00);
        tbl_Project_TD_3901867_output.setInt64(i, 7, _average3547);
        tbl_Project_TD_3901867_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _item_id3548);
        tbl_Project_TD_3901867_output.setInt64(i, 1, _ss_item_rev3549);
        tbl_Project_TD_3901867_output.setInt64(i, 3, _cs_item_rev3553);
        tbl_Project_TD_3901867_output.setInt64(i, 5, _ws_item_rev3557);
    }
    tbl_Project_TD_3901867_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3901867_output #Row: " << tbl_Project_TD_3901867_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2893400(Table &tbl_Project_TD_3901867_output, Table &tbl_Sort_TD_2893400_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(item_id#3548 ASC NULLS FIRST, ss_item_rev#3549 ASC NULLS FIRST)
    // Input: ListBuffer(item_id#3548, ss_item_rev#3549, ss_dev#3544, cs_item_rev#3553, cs_dev#3545, ws_item_rev#3557, ws_dev#3546, average#3547)
    // Output: ListBuffer(item_id#3548, ss_item_rev#3549, ss_dev#3544, cs_item_rev#3553, cs_dev#3545, ws_item_rev#3557, ws_dev#3546, average#3547)
    struct SW_Sort_TD_2893400Row {
        std::string _item_id3548;
        int64_t _ss_item_rev3549;
        int64_t _ss_dev3544;
        int64_t _cs_item_rev3553;
        int64_t _cs_dev3545;
        int64_t _ws_item_rev3557;
        int64_t _ws_dev3546;
        int64_t _average3547;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2893400Row& a, const SW_Sort_TD_2893400Row& b) const { return 
 (a._item_id3548 < b._item_id3548) || 
 ((a._item_id3548 == b._item_id3548) && (a._ss_item_rev3549 < b._ss_item_rev3549)); 
}
    }SW_Sort_TD_2893400_order; 

    int nrow1 = tbl_Project_TD_3901867_output.getNumRow();
    std::vector<SW_Sort_TD_2893400Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548 = tbl_Project_TD_3901867_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int64_t _ss_item_rev3549 = tbl_Project_TD_3901867_output.getInt64(i, 1);
        int64_t _ss_dev3544 = tbl_Project_TD_3901867_output.getInt64(i, 2);
        int64_t _cs_item_rev3553 = tbl_Project_TD_3901867_output.getInt64(i, 3);
        int64_t _cs_dev3545 = tbl_Project_TD_3901867_output.getInt64(i, 4);
        int64_t _ws_item_rev3557 = tbl_Project_TD_3901867_output.getInt64(i, 5);
        int64_t _ws_dev3546 = tbl_Project_TD_3901867_output.getInt64(i, 6);
        int64_t _average3547 = tbl_Project_TD_3901867_output.getInt64(i, 7);
        SW_Sort_TD_2893400Row t = {std::string(_item_id3548.data()),_ss_item_rev3549,_ss_dev3544,_cs_item_rev3553,_cs_dev3545,_ws_item_rev3557,_ws_dev3546,_average3547};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2893400_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548{};
        memcpy(_item_id3548.data(), (it._item_id3548).data(), (it._item_id3548).length());
        tbl_Sort_TD_2893400_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _item_id3548);
        tbl_Sort_TD_2893400_output.setInt64(r, 1, it._ss_item_rev3549);
        tbl_Sort_TD_2893400_output.setInt64(r, 2, it._ss_dev3544);
        tbl_Sort_TD_2893400_output.setInt64(r, 3, it._cs_item_rev3553);
        tbl_Sort_TD_2893400_output.setInt64(r, 4, it._cs_dev3545);
        tbl_Sort_TD_2893400_output.setInt64(r, 5, it._ws_item_rev3557);
        tbl_Sort_TD_2893400_output.setInt64(r, 6, it._ws_dev3546);
        tbl_Sort_TD_2893400_output.setInt64(r, 7, it._average3547);
        ++r;
    }
    tbl_Sort_TD_2893400_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2893400_output #Row: " << tbl_Sort_TD_2893400_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1323908(Table &tbl_Sort_TD_2893400_output, Table &tbl_LocalLimit_TD_1323908_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(item_id#3548, ss_item_rev#3549, ss_dev#3544, cs_item_rev#3553, cs_dev#3545, ws_item_rev#3557, ws_dev#3546, average#3547)
    // Output: ListBuffer(item_id#3548, ss_item_rev#3549, ss_dev#3544, cs_item_rev#3553, cs_dev#3545, ws_item_rev#3557, ws_dev#3546, average#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_Sort_TD_2893400_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1323908_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
        tbl_LocalLimit_TD_1323908_output.setInt64(r, 1, tbl_Sort_TD_2893400_output.getInt64(i, 1));
        tbl_LocalLimit_TD_1323908_output.setInt64(r, 2, tbl_Sort_TD_2893400_output.getInt64(i, 2));
        tbl_LocalLimit_TD_1323908_output.setInt64(r, 3, tbl_Sort_TD_2893400_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1323908_output.setInt64(r, 4, tbl_Sort_TD_2893400_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1323908_output.setInt64(r, 5, tbl_Sort_TD_2893400_output.getInt64(i, 5));
        tbl_LocalLimit_TD_1323908_output.setInt64(r, 6, tbl_Sort_TD_2893400_output.getInt64(i, 6));
        tbl_LocalLimit_TD_1323908_output.setInt64(r, 7, tbl_Sort_TD_2893400_output.getInt64(i, 7));
        r++;
    }
    tbl_LocalLimit_TD_1323908_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1323908_output #Row: " << tbl_LocalLimit_TD_1323908_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0228264(Table &tbl_LocalLimit_TD_1323908_output, Table &tbl_GlobalLimit_TD_0228264_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(item_id#3548, ss_item_rev#3549, ss_dev#3544, cs_item_rev#3553, cs_dev#3545, ws_item_rev#3557, ws_dev#3546, average#3547)
    // Output: ListBuffer(item_id#3548, ss_item_rev#3549, ss_dev#3544, cs_item_rev#3553, cs_dev#3545, ws_item_rev#3557, ws_dev#3546, average#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_LocalLimit_TD_1323908_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0228264_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
        tbl_GlobalLimit_TD_0228264_output.setInt64(r, 1, tbl_LocalLimit_TD_1323908_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0228264_output.setInt64(r, 2, tbl_LocalLimit_TD_1323908_output.getInt64(i, 2));
        tbl_GlobalLimit_TD_0228264_output.setInt64(r, 3, tbl_LocalLimit_TD_1323908_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0228264_output.setInt64(r, 4, tbl_LocalLimit_TD_1323908_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0228264_output.setInt64(r, 5, tbl_LocalLimit_TD_1323908_output.getInt64(i, 5));
        tbl_GlobalLimit_TD_0228264_output.setInt64(r, 6, tbl_LocalLimit_TD_1323908_output.getInt64(i, 6));
        tbl_GlobalLimit_TD_0228264_output.setInt64(r, 7, tbl_LocalLimit_TD_1323908_output.getInt64(i, 7));
        r++;
    }
    tbl_GlobalLimit_TD_0228264_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0228264_output #Row: " << tbl_GlobalLimit_TD_0228264_output.getNumRow() << std::endl;
}

