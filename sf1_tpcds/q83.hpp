#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_1082572(Table &tbl_SerializeFromObject_TD_11670655_input, Table &tbl_Filter_TD_1082572_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(d_date#3690 IN (2000-06-30,2000-09-27,2000-11-17))
    // Input: ListBuffer(d_week_seq#3692, d_date#3690)
    // Output: ListBuffer(d_week_seq#3692)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11670655_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3690 = tbl_SerializeFromObject_TD_11670655_input.getInt32(i, 1);
        auto reuse_col_str_740 = _d_date3690;
        if ((reuse_col_str_740 == 20000630) || (reuse_col_str_740 == 20000927) || (reuse_col_str_740 == 20001117) || (0)) {
            int32_t _d_week_seq3692_t = tbl_SerializeFromObject_TD_11670655_input.getInt32(i, 0);
            tbl_Filter_TD_1082572_output.setInt32(r, 0, _d_week_seq3692_t);
            r++;
        }
    }
    tbl_Filter_TD_1082572_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1082572_output #Row: " << tbl_Filter_TD_1082572_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10107099(Table &tbl_SerializeFromObject_TD_11409154_input, Table &tbl_Filter_TD_10107099_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(d_date#3662 IN (2000-06-30,2000-09-27,2000-11-17))
    // Input: ListBuffer(d_week_seq#3664, d_date#3662)
    // Output: ListBuffer(d_week_seq#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11409154_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3662 = tbl_SerializeFromObject_TD_11409154_input.getInt32(i, 1);
        auto reuse_col_str_814 = _d_date3662;
        if ((reuse_col_str_814 == 20000630) || (reuse_col_str_814 == 20000927) || (reuse_col_str_814 == 20001117) || (0)) {
            int32_t _d_week_seq3664_t = tbl_SerializeFromObject_TD_11409154_input.getInt32(i, 0);
            tbl_Filter_TD_10107099_output.setInt32(r, 0, _d_week_seq3664_t);
            r++;
        }
    }
    tbl_Filter_TD_10107099_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10107099_output #Row: " << tbl_Filter_TD_10107099_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9723863(Table &tbl_SerializeFromObject_TD_10697762_input, Table &tbl_Filter_TD_9723863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(d_date#3718 IN (2000-06-30,2000-09-27,2000-11-17))
    // Input: ListBuffer(d_week_seq#3720, d_date#3718)
    // Output: ListBuffer(d_week_seq#3720)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10697762_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3718 = tbl_SerializeFromObject_TD_10697762_input.getInt32(i, 1);
        auto reuse_col_str_776 = _d_date3718;
        if ((reuse_col_str_776 == 20000630) || (reuse_col_str_776 == 20000927) || (reuse_col_str_776 == 20001117) || (0)) {
            int32_t _d_week_seq3720_t = tbl_SerializeFromObject_TD_10697762_input.getInt32(i, 0);
            tbl_Filter_TD_9723863_output.setInt32(r, 0, _d_week_seq3720_t);
            r++;
        }
    }
    tbl_Filter_TD_9723863_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9723863_output #Row: " << tbl_Filter_TD_9723863_output.getNumRow() << std::endl;
}


void SW_Filter_TD_934468(Table &tbl_SerializeFromObject_TD_10665816_input, Table &tbl_Filter_TD_934468_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#3582))
    // Input: ListBuffer(d_date_sk#3582, d_date#3584)
    // Output: ListBuffer(d_date_sk#3582, d_date#3584)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10665816_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk3582 = tbl_SerializeFromObject_TD_10665816_input.getInt32(i, 0);
        if (_d_date_sk3582!= 0) {
            int32_t _d_date_sk3582_t = tbl_SerializeFromObject_TD_10665816_input.getInt32(i, 0);
            tbl_Filter_TD_934468_output.setInt32(r, 0, _d_date_sk3582_t);
            int32_t _d_date3584_t = tbl_SerializeFromObject_TD_10665816_input.getInt32(i, 1);
            tbl_Filter_TD_934468_output.setInt32(r, 1, _d_date3584_t);
            r++;
        }
    }
    tbl_Filter_TD_934468_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_934468_output #Row: " << tbl_Filter_TD_934468_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9974137(Table &tbl_SerializeFromObject_TD_10472203_input, Table &tbl_Filter_TD_9974137_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3560) AND isnotnull(i_item_id#3561)))
    // Input: ListBuffer(i_item_sk#3560, i_item_id#3561)
    // Output: ListBuffer(i_item_sk#3560, i_item_id#3561)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10472203_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3560 = tbl_SerializeFromObject_TD_10472203_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561 = tbl_SerializeFromObject_TD_10472203_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk3560!= 0) && (std::string(_i_item_id3561.data()) != "NULL")) {
            int32_t _i_item_sk3560_t = tbl_SerializeFromObject_TD_10472203_input.getInt32(i, 0);
            tbl_Filter_TD_9974137_output.setInt32(r, 0, _i_item_sk3560_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_t = tbl_SerializeFromObject_TD_10472203_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9974137_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3561_t);
            r++;
        }
    }
    tbl_Filter_TD_9974137_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9974137_output #Row: " << tbl_Filter_TD_9974137_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9758630(Table &tbl_SerializeFromObject_TD_10704312_input, Table &tbl_Filter_TD_9758630_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_item_sk#1025) AND isnotnull(cr_returned_date_sk#1023)))
    // Input: ListBuffer(cr_returned_date_sk#1023, cr_item_sk#1025, cr_return_quantity#1040)
    // Output: ListBuffer(cr_returned_date_sk#1023, cr_item_sk#1025, cr_return_quantity#1040)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10704312_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_10704312_input.getInt32(i, 1);
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_10704312_input.getInt32(i, 0);
        if ((_cr_item_sk1025!= 0) && (_cr_returned_date_sk1023!= 0)) {
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_10704312_input.getInt32(i, 0);
            tbl_Filter_TD_9758630_output.setInt32(r, 0, _cr_returned_date_sk1023_t);
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_10704312_input.getInt32(i, 1);
            tbl_Filter_TD_9758630_output.setInt32(r, 1, _cr_item_sk1025_t);
            int32_t _cr_return_quantity1040_t = tbl_SerializeFromObject_TD_10704312_input.getInt32(i, 2);
            tbl_Filter_TD_9758630_output.setInt32(r, 2, _cr_return_quantity1040_t);
            r++;
        }
    }
    tbl_Filter_TD_9758630_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9758630_output #Row: " << tbl_Filter_TD_9758630_output.getNumRow() << std::endl;
}


void SW_Filter_TD_927854(Table &tbl_SerializeFromObject_TD_10505824_input, Table &tbl_Filter_TD_927854_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#120))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10505824_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10505824_input.getInt32(i, 0);
        if (_d_date_sk120!= 0) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10505824_input.getInt32(i, 0);
            tbl_Filter_TD_927854_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_10505824_input.getInt32(i, 1);
            tbl_Filter_TD_927854_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_927854_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_927854_output #Row: " << tbl_Filter_TD_927854_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9289358(Table &tbl_SerializeFromObject_TD_10672407_input, Table &tbl_Filter_TD_9289358_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND isnotnull(i_item_id#229)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10672407_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10672407_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_SerializeFromObject_TD_10672407_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk228!= 0) && (std::string(_i_item_id229.data()) != "NULL")) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10672407_input.getInt32(i, 0);
            tbl_Filter_TD_9289358_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_10672407_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9289358_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_9289358_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9289358_output #Row: " << tbl_Filter_TD_9289358_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9381128(Table &tbl_SerializeFromObject_TD_10927197_input, Table &tbl_Filter_TD_9381128_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_item_sk#671) AND isnotnull(sr_returned_date_sk#669)))
    // Input: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_return_quantity#679)
    // Output: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_return_quantity#679)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10927197_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_10927197_input.getInt32(i, 1);
        int32_t _sr_returned_date_sk669 = tbl_SerializeFromObject_TD_10927197_input.getInt32(i, 0);
        if ((_sr_item_sk671!= 0) && (_sr_returned_date_sk669!= 0)) {
            int32_t _sr_returned_date_sk669_t = tbl_SerializeFromObject_TD_10927197_input.getInt32(i, 0);
            tbl_Filter_TD_9381128_output.setInt32(r, 0, _sr_returned_date_sk669_t);
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_10927197_input.getInt32(i, 1);
            tbl_Filter_TD_9381128_output.setInt32(r, 1, _sr_item_sk671_t);
            int32_t _sr_return_quantity679_t = tbl_SerializeFromObject_TD_10927197_input.getInt32(i, 2);
            tbl_Filter_TD_9381128_output.setInt32(r, 2, _sr_return_quantity679_t);
            r++;
        }
    }
    tbl_Filter_TD_9381128_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9381128_output #Row: " << tbl_Filter_TD_9381128_output.getNumRow() << std::endl;
}


void SW_Filter_TD_8204569(Table &tbl_SerializeFromObject_TD_9585453_input, Table &tbl_Filter_TD_8204569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#3632))
    // Input: ListBuffer(d_date_sk#3632, d_date#3634)
    // Output: ListBuffer(d_date_sk#3632, d_date#3634)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9585453_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk3632 = tbl_SerializeFromObject_TD_9585453_input.getInt32(i, 0);
        if (_d_date_sk3632!= 0) {
            int32_t _d_date_sk3632_t = tbl_SerializeFromObject_TD_9585453_input.getInt32(i, 0);
            tbl_Filter_TD_8204569_output.setInt32(r, 0, _d_date_sk3632_t);
            int32_t _d_date3634_t = tbl_SerializeFromObject_TD_9585453_input.getInt32(i, 1);
            tbl_Filter_TD_8204569_output.setInt32(r, 1, _d_date3634_t);
            r++;
        }
    }
    tbl_Filter_TD_8204569_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8204569_output #Row: " << tbl_Filter_TD_8204569_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8693242(Table &tbl_SerializeFromObject_TD_9156878_input, Table &tbl_Filter_TD_8693242_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3610) AND isnotnull(i_item_id#3611)))
    // Input: ListBuffer(i_item_sk#3610, i_item_id#3611)
    // Output: ListBuffer(i_item_sk#3610, i_item_id#3611)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9156878_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3610 = tbl_SerializeFromObject_TD_9156878_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611 = tbl_SerializeFromObject_TD_9156878_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk3610!= 0) && (std::string(_i_item_id3611.data()) != "NULL")) {
            int32_t _i_item_sk3610_t = tbl_SerializeFromObject_TD_9156878_input.getInt32(i, 0);
            tbl_Filter_TD_8693242_output.setInt32(r, 0, _i_item_sk3610_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_t = tbl_SerializeFromObject_TD_9156878_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8693242_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3611_t);
            r++;
        }
    }
    tbl_Filter_TD_8693242_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8693242_output #Row: " << tbl_Filter_TD_8693242_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8826970(Table &tbl_SerializeFromObject_TD_9747838_input, Table &tbl_Filter_TD_8826970_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_item_sk#833) AND isnotnull(wr_returned_date_sk#831)))
    // Input: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_return_quantity#845)
    // Output: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_return_quantity#845)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9747838_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_9747838_input.getInt32(i, 1);
        int32_t _wr_returned_date_sk831 = tbl_SerializeFromObject_TD_9747838_input.getInt32(i, 0);
        if ((_wr_item_sk833!= 0) && (_wr_returned_date_sk831!= 0)) {
            int32_t _wr_returned_date_sk831_t = tbl_SerializeFromObject_TD_9747838_input.getInt32(i, 0);
            tbl_Filter_TD_8826970_output.setInt32(r, 0, _wr_returned_date_sk831_t);
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_9747838_input.getInt32(i, 1);
            tbl_Filter_TD_8826970_output.setInt32(r, 1, _wr_item_sk833_t);
            int32_t _wr_return_quantity845_t = tbl_SerializeFromObject_TD_9747838_input.getInt32(i, 2);
            tbl_Filter_TD_8826970_output.setInt32(r, 2, _wr_return_quantity845_t);
            r++;
        }
    }
    tbl_Filter_TD_8826970_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8826970_output #Row: " << tbl_Filter_TD_8826970_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_8480359_key_leftMajor {
    int32_t _cr_item_sk1025;
    bool operator==(const SW_JOIN_INNER_TD_8480359_key_leftMajor& other) const {
        return ((_cr_item_sk1025 == other._cr_item_sk1025));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8480359_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8480359_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_item_sk1025));
    }
};
}
struct SW_JOIN_INNER_TD_8480359_payload_leftMajor {
    int32_t _cr_returned_date_sk1023;
    int32_t _cr_item_sk1025;
    int32_t _cr_return_quantity1040;
};
struct SW_JOIN_INNER_TD_8480359_key_rightMajor {
    int32_t _i_item_sk3560;
    bool operator==(const SW_JOIN_INNER_TD_8480359_key_rightMajor& other) const {
        return ((_i_item_sk3560 == other._i_item_sk3560));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8480359_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8480359_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3560));
    }
};
}
struct SW_JOIN_INNER_TD_8480359_payload_rightMajor {
    int32_t _i_item_sk3560;
    std::string _i_item_id3561;
};
void SW_JOIN_INNER_TD_8480359(Table &tbl_Filter_TD_9758630_output, Table &tbl_Filter_TD_9974137_output, Table &tbl_JOIN_INNER_TD_8480359_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_item_sk#1025 = i_item_sk#3560))
    // Left Table: ListBuffer(cr_returned_date_sk#1023, cr_item_sk#1025, cr_return_quantity#1040)
    // Right Table: ListBuffer(i_item_sk#3560, i_item_id#3561)
    // Output Table: ListBuffer(cr_returned_date_sk#1023, cr_return_quantity#1040, i_item_id#3561)
    int left_nrow = tbl_Filter_TD_9758630_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9974137_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8480359_key_leftMajor, SW_JOIN_INNER_TD_8480359_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9758630_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_9758630_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8480359_key_leftMajor keyA{_cr_item_sk1025_k};
            int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_9758630_output.getInt32(i, 0);
            int32_t _cr_item_sk1025 = tbl_Filter_TD_9758630_output.getInt32(i, 1);
            int32_t _cr_return_quantity1040 = tbl_Filter_TD_9758630_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8480359_payload_leftMajor payloadA{_cr_returned_date_sk1023, _cr_item_sk1025, _cr_return_quantity1040};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9974137_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3560_k = tbl_Filter_TD_9974137_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8480359_key_leftMajor{_i_item_sk3560_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returned_date_sk1023 = (it->second)._cr_returned_date_sk1023;
                int32_t _cr_item_sk1025 = (it->second)._cr_item_sk1025;
                int32_t _cr_return_quantity1040 = (it->second)._cr_return_quantity1040;
                int32_t _i_item_sk3560 = tbl_Filter_TD_9974137_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n = tbl_Filter_TD_9974137_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id3561 = std::string(_i_item_id3561_n.data());
                tbl_JOIN_INNER_TD_8480359_output.setInt32(r, 0, _cr_returned_date_sk1023);
                tbl_JOIN_INNER_TD_8480359_output.setInt32(r, 1, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_8480359_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id3561_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8480359_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8480359_key_rightMajor, SW_JOIN_INNER_TD_8480359_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9974137_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3560_k = tbl_Filter_TD_9974137_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8480359_key_rightMajor keyA{_i_item_sk3560_k};
            int32_t _i_item_sk3560 = tbl_Filter_TD_9974137_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n = tbl_Filter_TD_9974137_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id3561 = std::string(_i_item_id3561_n.data());
            SW_JOIN_INNER_TD_8480359_payload_rightMajor payloadA{_i_item_sk3560, _i_item_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9758630_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_9758630_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8480359_key_rightMajor{_cr_item_sk1025_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3560 = (it->second)._i_item_sk3560;
                std::string _i_item_id3561 = (it->second)._i_item_id3561;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n{};
                memcpy(_i_item_id3561_n.data(), (_i_item_id3561).data(), (_i_item_id3561).length());
                int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_9758630_output.getInt32(i, 0);
                int32_t _cr_item_sk1025 = tbl_Filter_TD_9758630_output.getInt32(i, 1);
                int32_t _cr_return_quantity1040 = tbl_Filter_TD_9758630_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8480359_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id3561_n);
                tbl_JOIN_INNER_TD_8480359_output.setInt32(r, 0, _cr_returned_date_sk1023);
                tbl_JOIN_INNER_TD_8480359_output.setInt32(r, 1, _cr_return_quantity1040);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8480359_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8480359_output #Row: " << tbl_JOIN_INNER_TD_8480359_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_8233369_key_leftMajor {
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_INNER_TD_8233369_key_leftMajor& other) const {
        return ((_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8233369_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8233369_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_INNER_TD_8233369_payload_leftMajor {
    int32_t _sr_returned_date_sk669;
    int32_t _sr_item_sk671;
    int32_t _sr_return_quantity679;
};
struct SW_JOIN_INNER_TD_8233369_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_8233369_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8233369_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8233369_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_8233369_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_8233369(Table &tbl_Filter_TD_9381128_output, Table &tbl_Filter_TD_9289358_output, Table &tbl_JOIN_INNER_TD_8233369_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_item_sk#671 = i_item_sk#228))
    // Left Table: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_return_quantity#679)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(sr_returned_date_sk#669, sr_return_quantity#679, i_item_id#229)
    int left_nrow = tbl_Filter_TD_9381128_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9289358_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8233369_key_leftMajor, SW_JOIN_INNER_TD_8233369_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9381128_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_item_sk671_k = tbl_Filter_TD_9381128_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8233369_key_leftMajor keyA{_sr_item_sk671_k};
            int32_t _sr_returned_date_sk669 = tbl_Filter_TD_9381128_output.getInt32(i, 0);
            int32_t _sr_item_sk671 = tbl_Filter_TD_9381128_output.getInt32(i, 1);
            int32_t _sr_return_quantity679 = tbl_Filter_TD_9381128_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8233369_payload_leftMajor payloadA{_sr_returned_date_sk669, _sr_item_sk671, _sr_return_quantity679};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9289358_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9289358_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8233369_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _i_item_sk228 = tbl_Filter_TD_9289358_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_9289358_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_8233369_output.setInt32(r, 0, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_8233369_output.setInt32(r, 1, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_8233369_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8233369_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8233369_key_rightMajor, SW_JOIN_INNER_TD_8233369_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9289358_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9289358_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8233369_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_9289358_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_9289358_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_8233369_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9381128_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_item_sk671_k = tbl_Filter_TD_9381128_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8233369_key_rightMajor{_sr_item_sk671_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _sr_returned_date_sk669 = tbl_Filter_TD_9381128_output.getInt32(i, 0);
                int32_t _sr_item_sk671 = tbl_Filter_TD_9381128_output.getInt32(i, 1);
                int32_t _sr_return_quantity679 = tbl_Filter_TD_9381128_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8233369_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_8233369_output.setInt32(r, 0, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_8233369_output.setInt32(r, 1, _sr_return_quantity679);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8233369_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8233369_output #Row: " << tbl_JOIN_INNER_TD_8233369_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_7834884_key_leftMajor {
    int32_t _wr_item_sk833;
    bool operator==(const SW_JOIN_INNER_TD_7834884_key_leftMajor& other) const {
        return ((_wr_item_sk833 == other._wr_item_sk833));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7834884_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7834884_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_item_sk833));
    }
};
}
struct SW_JOIN_INNER_TD_7834884_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_item_sk833;
    int32_t _wr_return_quantity845;
};
struct SW_JOIN_INNER_TD_7834884_key_rightMajor {
    int32_t _i_item_sk3610;
    bool operator==(const SW_JOIN_INNER_TD_7834884_key_rightMajor& other) const {
        return ((_i_item_sk3610 == other._i_item_sk3610));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7834884_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7834884_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3610));
    }
};
}
struct SW_JOIN_INNER_TD_7834884_payload_rightMajor {
    int32_t _i_item_sk3610;
    std::string _i_item_id3611;
};
void SW_JOIN_INNER_TD_7834884(Table &tbl_Filter_TD_8826970_output, Table &tbl_Filter_TD_8693242_output, Table &tbl_JOIN_INNER_TD_7834884_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_item_sk#833 = i_item_sk#3610))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_return_quantity#845)
    // Right Table: ListBuffer(i_item_sk#3610, i_item_id#3611)
    // Output Table: ListBuffer(wr_returned_date_sk#831, wr_return_quantity#845, i_item_id#3611)
    int left_nrow = tbl_Filter_TD_8826970_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8693242_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7834884_key_leftMajor, SW_JOIN_INNER_TD_7834884_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8826970_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_8826970_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7834884_key_leftMajor keyA{_wr_item_sk833_k};
            int32_t _wr_returned_date_sk831 = tbl_Filter_TD_8826970_output.getInt32(i, 0);
            int32_t _wr_item_sk833 = tbl_Filter_TD_8826970_output.getInt32(i, 1);
            int32_t _wr_return_quantity845 = tbl_Filter_TD_8826970_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7834884_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_item_sk833, _wr_return_quantity845};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8693242_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3610_k = tbl_Filter_TD_8693242_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7834884_key_leftMajor{_i_item_sk3610_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_item_sk833 = (it->second)._wr_item_sk833;
                int32_t _wr_return_quantity845 = (it->second)._wr_return_quantity845;
                int32_t _i_item_sk3610 = tbl_Filter_TD_8693242_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n = tbl_Filter_TD_8693242_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id3611 = std::string(_i_item_id3611_n.data());
                tbl_JOIN_INNER_TD_7834884_output.setInt32(r, 0, _wr_returned_date_sk831);
                tbl_JOIN_INNER_TD_7834884_output.setInt32(r, 1, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_7834884_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id3611_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7834884_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7834884_key_rightMajor, SW_JOIN_INNER_TD_7834884_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8693242_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3610_k = tbl_Filter_TD_8693242_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7834884_key_rightMajor keyA{_i_item_sk3610_k};
            int32_t _i_item_sk3610 = tbl_Filter_TD_8693242_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n = tbl_Filter_TD_8693242_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id3611 = std::string(_i_item_id3611_n.data());
            SW_JOIN_INNER_TD_7834884_payload_rightMajor payloadA{_i_item_sk3610, _i_item_id3611};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8826970_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_8826970_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7834884_key_rightMajor{_wr_item_sk833_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3610 = (it->second)._i_item_sk3610;
                std::string _i_item_id3611 = (it->second)._i_item_id3611;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n{};
                memcpy(_i_item_id3611_n.data(), (_i_item_id3611).data(), (_i_item_id3611).length());
                int32_t _wr_returned_date_sk831 = tbl_Filter_TD_8826970_output.getInt32(i, 0);
                int32_t _wr_item_sk833 = tbl_Filter_TD_8826970_output.getInt32(i, 1);
                int32_t _wr_return_quantity845 = tbl_Filter_TD_8826970_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7834884_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id3611_n);
                tbl_JOIN_INNER_TD_7834884_output.setInt32(r, 0, _wr_returned_date_sk831);
                tbl_JOIN_INNER_TD_7834884_output.setInt32(r, 1, _wr_return_quantity845);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7834884_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7834884_output #Row: " << tbl_JOIN_INNER_TD_7834884_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7291705_key_leftMajor {
    int32_t _cr_returned_date_sk1023;
    bool operator==(const SW_JOIN_INNER_TD_7291705_key_leftMajor& other) const {
        return ((_cr_returned_date_sk1023 == other._cr_returned_date_sk1023));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7291705_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7291705_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returned_date_sk1023));
    }
};
}
struct SW_JOIN_INNER_TD_7291705_payload_leftMajor {
    int32_t _cr_returned_date_sk1023;
    int32_t _cr_return_quantity1040;
    std::string _i_item_id3561;
};
struct SW_JOIN_INNER_TD_7291705_key_rightMajor {
    int32_t _d_date_sk3582;
    bool operator==(const SW_JOIN_INNER_TD_7291705_key_rightMajor& other) const {
        return ((_d_date_sk3582 == other._d_date_sk3582));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7291705_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7291705_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3582));
    }
};
}
struct SW_JOIN_INNER_TD_7291705_payload_rightMajor {
    int32_t _d_date_sk3582;
};
void SW_JOIN_INNER_TD_7291705(Table &tbl_JOIN_INNER_TD_8480359_output, Table &tbl_JOIN_LEFTSEMI_TD_8909911_output, Table &tbl_JOIN_INNER_TD_7291705_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returned_date_sk#1023 = d_date_sk#3582))
    // Left Table: ListBuffer(cr_returned_date_sk#1023, cr_return_quantity#1040, i_item_id#3561)
    // Right Table: ListBuffer(d_date_sk#3582)
    // Output Table: ListBuffer(cr_return_quantity#1040, i_item_id#3561)
    int left_nrow = tbl_JOIN_INNER_TD_8480359_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_8909911_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7291705_key_leftMajor, SW_JOIN_INNER_TD_7291705_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8480359_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_JOIN_INNER_TD_8480359_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7291705_key_leftMajor keyA{_cr_returned_date_sk1023_k};
            int32_t _cr_returned_date_sk1023 = tbl_JOIN_INNER_TD_8480359_output.getInt32(i, 0);
            int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_8480359_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n = tbl_JOIN_INNER_TD_8480359_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id3561 = std::string(_i_item_id3561_n.data());
            SW_JOIN_INNER_TD_7291705_payload_leftMajor payloadA{_cr_returned_date_sk1023, _cr_return_quantity1040, _i_item_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_8909911_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3582_k = tbl_JOIN_LEFTSEMI_TD_8909911_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7291705_key_leftMajor{_d_date_sk3582_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returned_date_sk1023 = (it->second)._cr_returned_date_sk1023;
                int32_t _cr_return_quantity1040 = (it->second)._cr_return_quantity1040;
                std::string _i_item_id3561 = (it->second)._i_item_id3561;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n{};
                memcpy(_i_item_id3561_n.data(), (_i_item_id3561).data(), (_i_item_id3561).length());
                int32_t _d_date_sk3582 = tbl_JOIN_LEFTSEMI_TD_8909911_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7291705_output.setInt32(r, 0, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_7291705_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3561_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7291705_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7291705_key_rightMajor, SW_JOIN_INNER_TD_7291705_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_8909911_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3582_k = tbl_JOIN_LEFTSEMI_TD_8909911_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7291705_key_rightMajor keyA{_d_date_sk3582_k};
            int32_t _d_date_sk3582 = tbl_JOIN_LEFTSEMI_TD_8909911_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7291705_payload_rightMajor payloadA{_d_date_sk3582};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8480359_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_JOIN_INNER_TD_8480359_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7291705_key_rightMajor{_cr_returned_date_sk1023_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3582 = (it->second)._d_date_sk3582;
                int32_t _cr_returned_date_sk1023 = tbl_JOIN_INNER_TD_8480359_output.getInt32(i, 0);
                int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_8480359_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561_n = tbl_JOIN_INNER_TD_8480359_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id3561 = std::string(_i_item_id3561_n.data());
                tbl_JOIN_INNER_TD_7291705_output.setInt32(r, 0, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_7291705_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3561_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7291705_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7291705_output #Row: " << tbl_JOIN_INNER_TD_7291705_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7783644_key_leftMajor {
    int32_t _sr_returned_date_sk669;
    bool operator==(const SW_JOIN_INNER_TD_7783644_key_leftMajor& other) const {
        return ((_sr_returned_date_sk669 == other._sr_returned_date_sk669));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7783644_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7783644_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_returned_date_sk669));
    }
};
}
struct SW_JOIN_INNER_TD_7783644_payload_leftMajor {
    int32_t _sr_returned_date_sk669;
    int32_t _sr_return_quantity679;
    std::string _i_item_id229;
};
struct SW_JOIN_INNER_TD_7783644_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7783644_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7783644_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7783644_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7783644_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_7783644(Table &tbl_JOIN_INNER_TD_8233369_output, Table &tbl_JOIN_LEFTSEMI_TD_8893085_output, Table &tbl_JOIN_INNER_TD_7783644_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_returned_date_sk#669 = d_date_sk#120))
    // Left Table: ListBuffer(sr_returned_date_sk#669, sr_return_quantity#679, i_item_id#229)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(sr_return_quantity#679, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_8233369_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_8893085_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7783644_key_leftMajor, SW_JOIN_INNER_TD_7783644_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8233369_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_JOIN_INNER_TD_8233369_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7783644_key_leftMajor keyA{_sr_returned_date_sk669_k};
            int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_8233369_output.getInt32(i, 0);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_8233369_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_8233369_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_7783644_payload_leftMajor payloadA{_sr_returned_date_sk669, _sr_return_quantity679, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_8893085_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_JOIN_LEFTSEMI_TD_8893085_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7783644_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _d_date_sk120 = tbl_JOIN_LEFTSEMI_TD_8893085_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7783644_output.setInt32(r, 0, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_7783644_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7783644_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7783644_key_rightMajor, SW_JOIN_INNER_TD_7783644_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_8893085_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_JOIN_LEFTSEMI_TD_8893085_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7783644_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_JOIN_LEFTSEMI_TD_8893085_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7783644_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8233369_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_JOIN_INNER_TD_8233369_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7783644_key_rightMajor{_sr_returned_date_sk669_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_8233369_output.getInt32(i, 0);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_8233369_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_8233369_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_7783644_output.setInt32(r, 0, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_7783644_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7783644_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7783644_output #Row: " << tbl_JOIN_INNER_TD_7783644_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_62789_key_leftMajor {
    int32_t _wr_returned_date_sk831;
    bool operator==(const SW_JOIN_INNER_TD_62789_key_leftMajor& other) const {
        return ((_wr_returned_date_sk831 == other._wr_returned_date_sk831));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_62789_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_62789_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returned_date_sk831));
    }
};
}
struct SW_JOIN_INNER_TD_62789_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_return_quantity845;
    std::string _i_item_id3611;
};
struct SW_JOIN_INNER_TD_62789_key_rightMajor {
    int32_t _d_date_sk3632;
    bool operator==(const SW_JOIN_INNER_TD_62789_key_rightMajor& other) const {
        return ((_d_date_sk3632 == other._d_date_sk3632));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_62789_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_62789_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3632));
    }
};
}
struct SW_JOIN_INNER_TD_62789_payload_rightMajor {
    int32_t _d_date_sk3632;
};
void SW_JOIN_INNER_TD_62789(Table &tbl_JOIN_INNER_TD_7834884_output, Table &tbl_JOIN_LEFTSEMI_TD_7301959_output, Table &tbl_JOIN_INNER_TD_62789_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_returned_date_sk#831 = d_date_sk#3632))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_return_quantity#845, i_item_id#3611)
    // Right Table: ListBuffer(d_date_sk#3632)
    // Output Table: ListBuffer(wr_return_quantity#845, i_item_id#3611)
    int left_nrow = tbl_JOIN_INNER_TD_7834884_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7301959_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_62789_key_leftMajor, SW_JOIN_INNER_TD_62789_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7834884_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_JOIN_INNER_TD_7834884_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_62789_key_leftMajor keyA{_wr_returned_date_sk831_k};
            int32_t _wr_returned_date_sk831 = tbl_JOIN_INNER_TD_7834884_output.getInt32(i, 0);
            int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_7834884_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n = tbl_JOIN_INNER_TD_7834884_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id3611 = std::string(_i_item_id3611_n.data());
            SW_JOIN_INNER_TD_62789_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_return_quantity845, _i_item_id3611};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7301959_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3632_k = tbl_JOIN_LEFTSEMI_TD_7301959_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_62789_key_leftMajor{_d_date_sk3632_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_return_quantity845 = (it->second)._wr_return_quantity845;
                std::string _i_item_id3611 = (it->second)._i_item_id3611;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n{};
                memcpy(_i_item_id3611_n.data(), (_i_item_id3611).data(), (_i_item_id3611).length());
                int32_t _d_date_sk3632 = tbl_JOIN_LEFTSEMI_TD_7301959_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_62789_output.setInt32(r, 0, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_62789_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3611_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_62789_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_62789_key_rightMajor, SW_JOIN_INNER_TD_62789_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7301959_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3632_k = tbl_JOIN_LEFTSEMI_TD_7301959_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_62789_key_rightMajor keyA{_d_date_sk3632_k};
            int32_t _d_date_sk3632 = tbl_JOIN_LEFTSEMI_TD_7301959_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_62789_payload_rightMajor payloadA{_d_date_sk3632};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7834884_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_JOIN_INNER_TD_7834884_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_62789_key_rightMajor{_wr_returned_date_sk831_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3632 = (it->second)._d_date_sk3632;
                int32_t _wr_returned_date_sk831 = tbl_JOIN_INNER_TD_7834884_output.getInt32(i, 0);
                int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_7834884_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611_n = tbl_JOIN_INNER_TD_7834884_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id3611 = std::string(_i_item_id3611_n.data());
                tbl_JOIN_INNER_TD_62789_output.setInt32(r, 0, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_62789_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id3611_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_62789_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_62789_output #Row: " << tbl_JOIN_INNER_TD_62789_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6614738_key;
struct SW_Aggregate_TD_6614738_payload {
    std::string _item_id3552;
    int64_t _cr_item_qty3553L_sum_0;
};
void SW_Aggregate_TD_6614738(Table &tbl_JOIN_INNER_TD_7291705_output, Table &tbl_Aggregate_TD_6614738_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#3561, i_item_id#3561 AS item_id#3552, sum(cr_return_quantity#1040) AS cr_item_qty#3553L)
    // Input: ListBuffer(cr_return_quantity#1040, i_item_id#3561)
    // Output: ListBuffer(item_id#3552, cr_item_qty#3553L)
    std::unordered_map<SW_Aggregate_TD_6614738_key, SW_Aggregate_TD_6614738_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7291705_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_7291705_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id3561 = tbl_JOIN_INNER_TD_7291705_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_6614738_key k = std::string(_i_item_id3561.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id3552 = _i_item_id3561;
        int64_t _cr_item_qty3553L_sum_0 = _cr_return_quantity1040;
        SW_Aggregate_TD_6614738_payload p{std::string(_item_id3552.data()), _cr_item_qty3553L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._cr_item_qty3553L_sum_0 + _cr_item_qty3553L_sum_0;
            p._cr_item_qty3553L_sum_0 = sum_0;
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
        tbl_Aggregate_TD_6614738_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3552_n);
        int64_t _cr_item_qty3553L = (it.second)._cr_item_qty3553L_sum_0;
        tbl_Aggregate_TD_6614738_output.setInt64(r, 1, _cr_item_qty3553L);
        ++r;
    }
    tbl_Aggregate_TD_6614738_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6614738_output #Row: " << tbl_Aggregate_TD_6614738_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6589621_key;
struct SW_Aggregate_TD_6589621_payload {
    std::string _item_id3548;
    int64_t _sr_item_qty3549L_sum_0;
};
void SW_Aggregate_TD_6589621(Table &tbl_JOIN_INNER_TD_7783644_output, Table &tbl_Aggregate_TD_6589621_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_id#229 AS item_id#3548, sum(sr_return_quantity#679) AS sr_item_qty#3549L)
    // Input: ListBuffer(sr_return_quantity#679, i_item_id#229)
    // Output: ListBuffer(item_id#3548, sr_item_qty#3549L)
    std::unordered_map<SW_Aggregate_TD_6589621_key, SW_Aggregate_TD_6589621_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7783644_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_7783644_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_7783644_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_6589621_key k = std::string(_i_item_id229.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548 = _i_item_id229;
        int64_t _sr_item_qty3549L_sum_0 = _sr_return_quantity679;
        SW_Aggregate_TD_6589621_payload p{std::string(_item_id3548.data()), _sr_item_qty3549L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sr_item_qty3549L_sum_0 + _sr_item_qty3549L_sum_0;
            p._sr_item_qty3549L_sum_0 = sum_0;
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
        tbl_Aggregate_TD_6589621_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
        int64_t _sr_item_qty3549L = (it.second)._sr_item_qty3549L_sum_0;
        tbl_Aggregate_TD_6589621_output.setInt64(r, 1, _sr_item_qty3549L);
        ++r;
    }
    tbl_Aggregate_TD_6589621_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6589621_output #Row: " << tbl_Aggregate_TD_6589621_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_5523782_key;
struct SW_Aggregate_TD_5523782_payload {
    std::string _item_id3556;
    int64_t _wr_item_qty3557L_sum_0;
};
void SW_Aggregate_TD_5523782(Table &tbl_JOIN_INNER_TD_62789_output, Table &tbl_Aggregate_TD_5523782_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#3611, i_item_id#3611 AS item_id#3556, sum(wr_return_quantity#845) AS wr_item_qty#3557L)
    // Input: ListBuffer(wr_return_quantity#845, i_item_id#3611)
    // Output: ListBuffer(item_id#3556, wr_item_qty#3557L)
    std::unordered_map<SW_Aggregate_TD_5523782_key, SW_Aggregate_TD_5523782_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_62789_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_62789_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id3611 = tbl_JOIN_INNER_TD_62789_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_5523782_key k = std::string(_i_item_id3611.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id3556 = _i_item_id3611;
        int64_t _wr_item_qty3557L_sum_0 = _wr_return_quantity845;
        SW_Aggregate_TD_5523782_payload p{std::string(_item_id3556.data()), _wr_item_qty3557L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._wr_item_qty3557L_sum_0 + _wr_item_qty3557L_sum_0;
            p._wr_item_qty3557L_sum_0 = sum_0;
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
        tbl_Aggregate_TD_5523782_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3556_n);
        int64_t _wr_item_qty3557L = (it.second)._wr_item_qty3557L_sum_0;
        tbl_Aggregate_TD_5523782_output.setInt64(r, 1, _wr_item_qty3557L);
        ++r;
    }
    tbl_Aggregate_TD_5523782_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5523782_output #Row: " << tbl_Aggregate_TD_5523782_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5296323_key_leftMajor {
    std::string _item_id3548;
    bool operator==(const SW_JOIN_INNER_TD_5296323_key_leftMajor& other) const {
        return ((_item_id3548 == other._item_id3548));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5296323_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5296323_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id3548));
    }
};
}
struct SW_JOIN_INNER_TD_5296323_payload_leftMajor {
    std::string _item_id3548;
    int64_t _sr_item_qty3549L;
};
struct SW_JOIN_INNER_TD_5296323_key_rightMajor {
    std::string _item_id3552;
    bool operator==(const SW_JOIN_INNER_TD_5296323_key_rightMajor& other) const {
        return ((_item_id3552 == other._item_id3552));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5296323_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5296323_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id3552));
    }
};
}
struct SW_JOIN_INNER_TD_5296323_payload_rightMajor {
    std::string _item_id3552;
    int64_t _cr_item_qty3553L;
};
void SW_JOIN_INNER_TD_5296323(Table &tbl_Aggregate_TD_6589621_output, Table &tbl_Aggregate_TD_6614738_output, Table &tbl_JOIN_INNER_TD_5296323_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((item_id#3548 = item_id#3552))
    // Left Table: ListBuffer(item_id#3548, sr_item_qty#3549L)
    // Right Table: ListBuffer(item_id#3552, cr_item_qty#3553L)
    // Output Table: ListBuffer(item_id#3548, sr_item_qty#3549L, cr_item_qty#3553L)
    int left_nrow = tbl_Aggregate_TD_6589621_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6614738_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5296323_key_leftMajor, SW_JOIN_INNER_TD_5296323_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6589621_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_k_n = tbl_Aggregate_TD_6589621_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548_k = std::string(_item_id3548_k_n.data());
            SW_JOIN_INNER_TD_5296323_key_leftMajor keyA{_item_id3548_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_Aggregate_TD_6589621_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548 = std::string(_item_id3548_n.data());
            int64_t _sr_item_qty3549L = tbl_Aggregate_TD_6589621_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_5296323_payload_leftMajor payloadA{_item_id3548, _sr_item_qty3549L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6614738_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3552_k_n = tbl_Aggregate_TD_6614738_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3552_k = std::string(_item_id3552_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5296323_key_leftMajor{_item_id3552_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id3548 = (it->second)._item_id3548;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n{};
                memcpy(_item_id3548_n.data(), (_item_id3548).data(), (_item_id3548).length());
                int64_t _sr_item_qty3549L = (it->second)._sr_item_qty3549L;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3552_n = tbl_Aggregate_TD_6614738_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id3552 = std::string(_item_id3552_n.data());
                int64_t _cr_item_qty3553L = tbl_Aggregate_TD_6614738_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_5296323_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
                tbl_JOIN_INNER_TD_5296323_output.setInt64(r, 1, _sr_item_qty3549L);
                tbl_JOIN_INNER_TD_5296323_output.setInt64(r, 2, _cr_item_qty3553L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5296323_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5296323_key_rightMajor, SW_JOIN_INNER_TD_5296323_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6614738_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3552_k_n = tbl_Aggregate_TD_6614738_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3552_k = std::string(_item_id3552_k_n.data());
            SW_JOIN_INNER_TD_5296323_key_rightMajor keyA{_item_id3552_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id3552_n = tbl_Aggregate_TD_6614738_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3552 = std::string(_item_id3552_n.data());
            int64_t _cr_item_qty3553L = tbl_Aggregate_TD_6614738_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_5296323_payload_rightMajor payloadA{_item_id3552, _cr_item_qty3553L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6589621_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_k_n = tbl_Aggregate_TD_6589621_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548_k = std::string(_item_id3548_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5296323_key_rightMajor{_item_id3548_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id3552 = (it->second)._item_id3552;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3552_n{};
                memcpy(_item_id3552_n.data(), (_item_id3552).data(), (_item_id3552).length());
                int64_t _cr_item_qty3553L = (it->second)._cr_item_qty3553L;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_Aggregate_TD_6589621_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id3548 = std::string(_item_id3548_n.data());
                int64_t _sr_item_qty3549L = tbl_Aggregate_TD_6589621_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_5296323_output.setInt64(r, 2, _cr_item_qty3553L);
                tbl_JOIN_INNER_TD_5296323_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
                tbl_JOIN_INNER_TD_5296323_output.setInt64(r, 1, _sr_item_qty3549L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5296323_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5296323_output #Row: " << tbl_JOIN_INNER_TD_5296323_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_456283_key_leftMajor {
    std::string _item_id3548;
    bool operator==(const SW_JOIN_INNER_TD_456283_key_leftMajor& other) const {
        return ((_item_id3548 == other._item_id3548));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_456283_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_456283_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id3548));
    }
};
}
struct SW_JOIN_INNER_TD_456283_payload_leftMajor {
    std::string _item_id3548;
    int64_t _sr_item_qty3549L;
    int64_t _cr_item_qty3553L;
};
struct SW_JOIN_INNER_TD_456283_key_rightMajor {
    std::string _item_id3556;
    bool operator==(const SW_JOIN_INNER_TD_456283_key_rightMajor& other) const {
        return ((_item_id3556 == other._item_id3556));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_456283_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_456283_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id3556));
    }
};
}
struct SW_JOIN_INNER_TD_456283_payload_rightMajor {
    std::string _item_id3556;
    int64_t _wr_item_qty3557L;
};
void SW_JOIN_INNER_TD_456283(Table &tbl_JOIN_INNER_TD_5296323_output, Table &tbl_Aggregate_TD_5523782_output, Table &tbl_JOIN_INNER_TD_456283_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((item_id#3548 = item_id#3556))
    // Left Table: ListBuffer(item_id#3548, sr_item_qty#3549L, cr_item_qty#3553L)
    // Right Table: ListBuffer(item_id#3556, wr_item_qty#3557L)
    // Output Table: ListBuffer(item_id#3548, sr_item_qty#3549L, cr_item_qty#3553L, wr_item_qty#3557L)
    int left_nrow = tbl_JOIN_INNER_TD_5296323_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5523782_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_456283_key_leftMajor, SW_JOIN_INNER_TD_456283_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5296323_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_k_n = tbl_JOIN_INNER_TD_5296323_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548_k = std::string(_item_id3548_k_n.data());
            SW_JOIN_INNER_TD_456283_key_leftMajor keyA{_item_id3548_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_JOIN_INNER_TD_5296323_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548 = std::string(_item_id3548_n.data());
            int64_t _sr_item_qty3549L = tbl_JOIN_INNER_TD_5296323_output.getInt64(i, 1);
            int64_t _cr_item_qty3553L = tbl_JOIN_INNER_TD_5296323_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_456283_payload_leftMajor payloadA{_item_id3548, _sr_item_qty3549L, _cr_item_qty3553L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5523782_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3556_k_n = tbl_Aggregate_TD_5523782_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3556_k = std::string(_item_id3556_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_456283_key_leftMajor{_item_id3556_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id3548 = (it->second)._item_id3548;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n{};
                memcpy(_item_id3548_n.data(), (_item_id3548).data(), (_item_id3548).length());
                int64_t _sr_item_qty3549L = (it->second)._sr_item_qty3549L;
                int64_t _cr_item_qty3553L = (it->second)._cr_item_qty3553L;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3556_n = tbl_Aggregate_TD_5523782_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id3556 = std::string(_item_id3556_n.data());
                int64_t _wr_item_qty3557L = tbl_Aggregate_TD_5523782_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_456283_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
                tbl_JOIN_INNER_TD_456283_output.setInt64(r, 1, _sr_item_qty3549L);
                tbl_JOIN_INNER_TD_456283_output.setInt64(r, 2, _cr_item_qty3553L);
                tbl_JOIN_INNER_TD_456283_output.setInt64(r, 3, _wr_item_qty3557L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_456283_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_456283_key_rightMajor, SW_JOIN_INNER_TD_456283_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5523782_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3556_k_n = tbl_Aggregate_TD_5523782_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3556_k = std::string(_item_id3556_k_n.data());
            SW_JOIN_INNER_TD_456283_key_rightMajor keyA{_item_id3556_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id3556_n = tbl_Aggregate_TD_5523782_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3556 = std::string(_item_id3556_n.data());
            int64_t _wr_item_qty3557L = tbl_Aggregate_TD_5523782_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_456283_payload_rightMajor payloadA{_item_id3556, _wr_item_qty3557L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5296323_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id3548_k_n = tbl_JOIN_INNER_TD_5296323_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id3548_k = std::string(_item_id3548_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_456283_key_rightMajor{_item_id3548_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id3556 = (it->second)._item_id3556;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3556_n{};
                memcpy(_item_id3556_n.data(), (_item_id3556).data(), (_item_id3556).length());
                int64_t _wr_item_qty3557L = (it->second)._wr_item_qty3557L;
                std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_JOIN_INNER_TD_5296323_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id3548 = std::string(_item_id3548_n.data());
                int64_t _sr_item_qty3549L = tbl_JOIN_INNER_TD_5296323_output.getInt64(i, 1);
                int64_t _cr_item_qty3553L = tbl_JOIN_INNER_TD_5296323_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_456283_output.setInt64(r, 3, _wr_item_qty3557L);
                tbl_JOIN_INNER_TD_456283_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
                tbl_JOIN_INNER_TD_456283_output.setInt64(r, 1, _sr_item_qty3549L);
                tbl_JOIN_INNER_TD_456283_output.setInt64(r, 2, _cr_item_qty3553L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_456283_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_456283_output #Row: " << tbl_JOIN_INNER_TD_456283_output.getNumRow() << std::endl;
}

void SW_Project_TD_3740608(Table &tbl_JOIN_INNER_TD_456283_output, Table &tbl_Project_TD_3740608_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((((cast(sr_item_qty#3549L as double) / cast(((sr_item_qty#3549L + cr_item_qty#3553L) + wr_item_qty#3557L) as double)) / 3.0) * 100.0) AS sr_dev#3544, (((cast(cr_item_qty#3553L as double) / cast(((sr_item_qty#3549L + cr_item_qty#3553L) + wr_item_qty#3557L) as double)) / 3.0) * 100.0) AS cr_dev#3545, (((cast(wr_item_qty#3557L as double) / cast(((sr_item_qty#3549L + cr_item_qty#3553L) + wr_item_qty#3557L) as double)) / 3.0) * 100.0) AS wr_dev#3546, CheckOverflow((promote_precision(cast(cast(((sr_item_qty#3549L + cr_item_qty#3553L) + wr_item_qty#3557L) as decimal(20,0)) as decimal(21,1))) / 3.0), DecimalType(27,6), true) AS average#3547)
    // Input: ListBuffer(item_id#3548, sr_item_qty#3549L, cr_item_qty#3553L, wr_item_qty#3557L)
    // Output: ListBuffer(item_id#3548, sr_item_qty#3549L, sr_dev#3544, cr_item_qty#3553L, cr_dev#3545, wr_item_qty#3557L, wr_dev#3546, average#3547)
    int nrow1 = tbl_JOIN_INNER_TD_456283_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548 = tbl_JOIN_INNER_TD_456283_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int64_t _sr_item_qty3549L = tbl_JOIN_INNER_TD_456283_output.getInt64(i, 1);
        int64_t _cr_item_qty3553L = tbl_JOIN_INNER_TD_456283_output.getInt64(i, 2);
        int64_t _wr_item_qty3557L = tbl_JOIN_INNER_TD_456283_output.getInt64(i, 3);
        int64_t _sr_dev3544 = (((_sr_item_qty3549L / ((_sr_item_qty3549L + _cr_item_qty3553L) + _wr_item_qty3557L)) / 3.0) * 100.0);
        tbl_Project_TD_3740608_output.setInt64(i, 2, _sr_dev3544);
        int64_t _cr_dev3545 = (((_cr_item_qty3553L / ((_sr_item_qty3549L + _cr_item_qty3553L) + _wr_item_qty3557L)) / 3.0) * 100.0);
        tbl_Project_TD_3740608_output.setInt64(i, 4, _cr_dev3545);
        int64_t _wr_dev3546 = (((_wr_item_qty3557L / ((_sr_item_qty3549L + _cr_item_qty3553L) + _wr_item_qty3557L)) / 3.0) * 100.0);
        tbl_Project_TD_3740608_output.setInt64(i, 6, _wr_dev3546);
        int64_t _average3547 = (((_sr_item_qty3549L + _cr_item_qty3553L) + _wr_item_qty3557L) / 3.0);
        tbl_Project_TD_3740608_output.setInt64(i, 7, _average3547);
        tbl_Project_TD_3740608_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _item_id3548);
        tbl_Project_TD_3740608_output.setInt64(i, 1, _sr_item_qty3549L);
        tbl_Project_TD_3740608_output.setInt64(i, 3, _cr_item_qty3553L);
        tbl_Project_TD_3740608_output.setInt64(i, 5, _wr_item_qty3557L);
    }
    tbl_Project_TD_3740608_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3740608_output #Row: " << tbl_Project_TD_3740608_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2248813(Table &tbl_Project_TD_3740608_output, Table &tbl_Sort_TD_2248813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(item_id#3548 ASC NULLS FIRST, sr_item_qty#3549L ASC NULLS FIRST)
    // Input: ListBuffer(item_id#3548, sr_item_qty#3549L, sr_dev#3544, cr_item_qty#3553L, cr_dev#3545, wr_item_qty#3557L, wr_dev#3546, average#3547)
    // Output: ListBuffer(item_id#3548, sr_item_qty#3549L, sr_dev#3544, cr_item_qty#3553L, cr_dev#3545, wr_item_qty#3557L, wr_dev#3546, average#3547)
    struct SW_Sort_TD_2248813Row {
        std::string _item_id3548;
        int64_t _sr_item_qty3549L;
        int64_t _sr_dev3544;
        int64_t _cr_item_qty3553L;
        int64_t _cr_dev3545;
        int64_t _wr_item_qty3557L;
        int64_t _wr_dev3546;
        int64_t _average3547;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2248813Row& a, const SW_Sort_TD_2248813Row& b) const { return 
 (a._item_id3548 < b._item_id3548) || 
 ((a._item_id3548 == b._item_id3548) && (a._sr_item_qty3549L < b._sr_item_qty3549L)); 
}
    }SW_Sort_TD_2248813_order; 

    int nrow1 = tbl_Project_TD_3740608_output.getNumRow();
    std::vector<SW_Sort_TD_2248813Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548 = tbl_Project_TD_3740608_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int64_t _sr_item_qty3549L = tbl_Project_TD_3740608_output.getInt64(i, 1);
        int64_t _sr_dev3544 = tbl_Project_TD_3740608_output.getInt64(i, 2);
        int64_t _cr_item_qty3553L = tbl_Project_TD_3740608_output.getInt64(i, 3);
        int64_t _cr_dev3545 = tbl_Project_TD_3740608_output.getInt64(i, 4);
        int64_t _wr_item_qty3557L = tbl_Project_TD_3740608_output.getInt64(i, 5);
        int64_t _wr_dev3546 = tbl_Project_TD_3740608_output.getInt64(i, 6);
        int64_t _average3547 = tbl_Project_TD_3740608_output.getInt64(i, 7);
        SW_Sort_TD_2248813Row t = {std::string(_item_id3548.data()),_sr_item_qty3549L,_sr_dev3544,_cr_item_qty3553L,_cr_dev3545,_wr_item_qty3557L,_wr_dev3546,_average3547};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2248813_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548{};
        memcpy(_item_id3548.data(), (it._item_id3548).data(), (it._item_id3548).length());
        tbl_Sort_TD_2248813_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _item_id3548);
        tbl_Sort_TD_2248813_output.setInt64(r, 1, it._sr_item_qty3549L);
        tbl_Sort_TD_2248813_output.setInt64(r, 2, it._sr_dev3544);
        tbl_Sort_TD_2248813_output.setInt64(r, 3, it._cr_item_qty3553L);
        tbl_Sort_TD_2248813_output.setInt64(r, 4, it._cr_dev3545);
        tbl_Sort_TD_2248813_output.setInt64(r, 5, it._wr_item_qty3557L);
        tbl_Sort_TD_2248813_output.setInt64(r, 6, it._wr_dev3546);
        tbl_Sort_TD_2248813_output.setInt64(r, 7, it._average3547);
        ++r;
    }
    tbl_Sort_TD_2248813_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2248813_output #Row: " << tbl_Sort_TD_2248813_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1807084(Table &tbl_Sort_TD_2248813_output, Table &tbl_LocalLimit_TD_1807084_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(item_id#3548, sr_item_qty#3549L, sr_dev#3544, cr_item_qty#3553L, cr_dev#3545, wr_item_qty#3557L, wr_dev#3546, average#3547)
    // Output: ListBuffer(item_id#3548, sr_item_qty#3549L, sr_dev#3544, cr_item_qty#3553L, cr_dev#3545, wr_item_qty#3557L, wr_dev#3546, average#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_Sort_TD_2248813_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1807084_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
        tbl_LocalLimit_TD_1807084_output.setInt64(r, 1, tbl_Sort_TD_2248813_output.getInt64(i, 1));
        tbl_LocalLimit_TD_1807084_output.setInt64(r, 2, tbl_Sort_TD_2248813_output.getInt64(i, 2));
        tbl_LocalLimit_TD_1807084_output.setInt64(r, 3, tbl_Sort_TD_2248813_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1807084_output.setInt64(r, 4, tbl_Sort_TD_2248813_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1807084_output.setInt64(r, 5, tbl_Sort_TD_2248813_output.getInt64(i, 5));
        tbl_LocalLimit_TD_1807084_output.setInt64(r, 6, tbl_Sort_TD_2248813_output.getInt64(i, 6));
        tbl_LocalLimit_TD_1807084_output.setInt64(r, 7, tbl_Sort_TD_2248813_output.getInt64(i, 7));
        r++;
    }
    tbl_LocalLimit_TD_1807084_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1807084_output #Row: " << tbl_LocalLimit_TD_1807084_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0153504(Table &tbl_LocalLimit_TD_1807084_output, Table &tbl_GlobalLimit_TD_0153504_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(item_id#3548, sr_item_qty#3549L, sr_dev#3544, cr_item_qty#3553L, cr_dev#3545, wr_item_qty#3557L, wr_dev#3546, average#3547)
    // Output: ListBuffer(item_id#3548, sr_item_qty#3549L, sr_dev#3544, cr_item_qty#3553L, cr_dev#3545, wr_item_qty#3557L, wr_dev#3546, average#3547)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id3548_n = tbl_LocalLimit_TD_1807084_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0153504_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id3548_n);
        tbl_GlobalLimit_TD_0153504_output.setInt64(r, 1, tbl_LocalLimit_TD_1807084_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0153504_output.setInt64(r, 2, tbl_LocalLimit_TD_1807084_output.getInt64(i, 2));
        tbl_GlobalLimit_TD_0153504_output.setInt64(r, 3, tbl_LocalLimit_TD_1807084_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0153504_output.setInt64(r, 4, tbl_LocalLimit_TD_1807084_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0153504_output.setInt64(r, 5, tbl_LocalLimit_TD_1807084_output.getInt64(i, 5));
        tbl_GlobalLimit_TD_0153504_output.setInt64(r, 6, tbl_LocalLimit_TD_1807084_output.getInt64(i, 6));
        tbl_GlobalLimit_TD_0153504_output.setInt64(r, 7, tbl_LocalLimit_TD_1807084_output.getInt64(i, 7));
        r++;
    }
    tbl_GlobalLimit_TD_0153504_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0153504_output #Row: " << tbl_GlobalLimit_TD_0153504_output.getNumRow() << std::endl;
}

