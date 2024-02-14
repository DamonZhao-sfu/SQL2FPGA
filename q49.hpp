#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_1264(Table &tbl_SerializeFromObject_TD_1390_input, Table &tbl_Filter_TD_1264_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(sr_return_amt#680) AND (sr_return_amt#680 > 10000.00)) AND (isnotnull(sr_ticket_number#678L) AND isnotnull(sr_item_sk#671))))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1390_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_return_amt680 = tbl_SerializeFromObject_TD_1390_input.getInt32(i, 3);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_1390_input.getInt64(i, 1);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_1390_input.getInt32(i, 0);
        if (((1) && (_sr_return_amt680 > 10000.00)) && ((1) && (1))) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_1390_input.getInt32(i, 0);
            tbl_Filter_TD_1264_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_1390_input.getInt64(i, 1);
            tbl_Filter_TD_1264_output.setInt64(r, 1, _sr_ticket_number678L_t);
            int32_t _sr_return_quantity679_t = tbl_SerializeFromObject_TD_1390_input.getInt32(i, 2);
            tbl_Filter_TD_1264_output.setInt32(r, 2, _sr_return_quantity679_t);
            int32_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_1390_input.getInt32(i, 3);
            tbl_Filter_TD_1264_output.setInt32(r, 3, _sr_return_amt680_t);
            r++;
        }
    }
    tbl_Filter_TD_1264_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1264_output #Row: " << tbl_Filter_TD_1264_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12109(Table &tbl_SerializeFromObject_TD_13659_input, Table &tbl_Filter_TD_12109_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(ss_net_profit#1228) AND isnotnull(ss_net_paid#1226)) AND isnotnull(ss_quantity#1216)) AND (((ss_net_profit#1228 > 1.00) AND (ss_net_paid#1226 > 0.00)) AND (ss_quantity#1216 > 0))) AND ((isnotnull(ss_ticket_number#1215L) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_sold_date_sk#1206))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_net_paid#1226, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_net_paid#1226)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13659_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_profit1228 = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 5);
        int32_t _ss_net_paid1226 = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 4);
        int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 3);
        int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_13659_input.getInt64(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 0);
        if (((((1) && (1)) && (1)) && (((_ss_net_profit1228 > 1.00) && (_ss_net_paid1226 > 0.00)) && (_ss_quantity1216 > 0))) && (((1) && (1)) && (1))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 0);
            tbl_Filter_TD_12109_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 1);
            tbl_Filter_TD_12109_output.setInt32(r, 1, _ss_item_sk1208_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_13659_input.getInt64(i, 2);
            tbl_Filter_TD_12109_output.setInt64(r, 2, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 3);
            tbl_Filter_TD_12109_output.setInt32(r, 3, _ss_quantity1216_t);
            int32_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_13659_input.getInt32(i, 4);
            tbl_Filter_TD_12109_output.setInt32(r, 4, _ss_net_paid1226_t);
            r++;
        }
    }
    tbl_Filter_TD_12109_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12109_output #Row: " << tbl_Filter_TD_12109_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12487(Table &tbl_SerializeFromObject_TD_13376_input, Table &tbl_Filter_TD_12487_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cr_return_amount#1041) AND (cr_return_amount#1041 > 10000.00)) AND (isnotnull(cr_order_number#1039L) AND isnotnull(cr_item_sk#1025))))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13376_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_return_amount1041 = tbl_SerializeFromObject_TD_13376_input.getInt32(i, 3);
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_13376_input.getInt64(i, 1);
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_13376_input.getInt32(i, 0);
        if (((1) && (_cr_return_amount1041 > 10000.00)) && ((1) && (1))) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_13376_input.getInt32(i, 0);
            tbl_Filter_TD_12487_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_13376_input.getInt64(i, 1);
            tbl_Filter_TD_12487_output.setInt64(r, 1, _cr_order_number1039L_t);
            int32_t _cr_return_quantity1040_t = tbl_SerializeFromObject_TD_13376_input.getInt32(i, 2);
            tbl_Filter_TD_12487_output.setInt32(r, 2, _cr_return_quantity1040_t);
            int32_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_13376_input.getInt32(i, 3);
            tbl_Filter_TD_12487_output.setInt32(r, 3, _cr_return_amount1041_t);
            r++;
        }
    }
    tbl_Filter_TD_12487_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12487_output #Row: " << tbl_Filter_TD_12487_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12259(Table &tbl_SerializeFromObject_TD_13770_input, Table &tbl_Filter_TD_12259_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(cs_net_profit#1137) AND isnotnull(cs_net_paid#1133)) AND isnotnull(cs_quantity#1122)) AND (((cs_net_profit#1137 > 1.00) AND (cs_net_paid#1133 > 0.00)) AND (cs_quantity#1122 > 0))) AND ((isnotnull(cs_order_number#1121L) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_sold_date_sk#1104))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_net_paid#1133, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_net_paid#1133)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13770_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_net_profit1137 = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 5);
        int32_t _cs_net_paid1133 = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 4);
        int32_t _cs_quantity1122 = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 3);
        int64_t _cs_order_number1121L = tbl_SerializeFromObject_TD_13770_input.getInt64(i, 2);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 0);
        if (((((1) && (1)) && (1)) && (((_cs_net_profit1137 > 1.00) && (_cs_net_paid1133 > 0.00)) && (_cs_quantity1122 > 0))) && (((1) && (1)) && (1))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 0);
            tbl_Filter_TD_12259_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 1);
            tbl_Filter_TD_12259_output.setInt32(r, 1, _cs_item_sk1119_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_13770_input.getInt64(i, 2);
            tbl_Filter_TD_12259_output.setInt64(r, 2, _cs_order_number1121L_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 3);
            tbl_Filter_TD_12259_output.setInt32(r, 3, _cs_quantity1122_t);
            int32_t _cs_net_paid1133_t = tbl_SerializeFromObject_TD_13770_input.getInt32(i, 4);
            tbl_Filter_TD_12259_output.setInt32(r, 4, _cs_net_paid1133_t);
            r++;
        }
    }
    tbl_Filter_TD_12259_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12259_output #Row: " << tbl_Filter_TD_12259_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12957(Table &tbl_SerializeFromObject_TD_13721_input, Table &tbl_Filter_TD_12957_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(wr_return_amt#846) AND (wr_return_amt#846 > 10000.00)) AND (isnotnull(wr_order_number#844L) AND isnotnull(wr_item_sk#833))))
    // Input: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    // Output: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13721_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_return_amt846 = tbl_SerializeFromObject_TD_13721_input.getInt32(i, 3);
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_13721_input.getInt64(i, 1);
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_13721_input.getInt32(i, 0);
        if (((1) && (_wr_return_amt846 > 10000.00)) && ((1) && (1))) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_13721_input.getInt32(i, 0);
            tbl_Filter_TD_12957_output.setInt32(r, 0, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_13721_input.getInt64(i, 1);
            tbl_Filter_TD_12957_output.setInt64(r, 1, _wr_order_number844L_t);
            int32_t _wr_return_quantity845_t = tbl_SerializeFromObject_TD_13721_input.getInt32(i, 2);
            tbl_Filter_TD_12957_output.setInt32(r, 2, _wr_return_quantity845_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_13721_input.getInt32(i, 3);
            tbl_Filter_TD_12957_output.setInt32(r, 3, _wr_return_amt846_t);
            r++;
        }
    }
    tbl_Filter_TD_12957_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12957_output #Row: " << tbl_Filter_TD_12957_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1215(Table &tbl_SerializeFromObject_TD_13373_input, Table &tbl_Filter_TD_1215_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(ws_net_profit#762) AND isnotnull(ws_net_paid#758)) AND isnotnull(ws_quantity#747)) AND (((ws_net_profit#762 > 1.00) AND (ws_net_paid#758 > 0.00)) AND (ws_quantity#747 > 0))) AND ((isnotnull(ws_order_number#746L) AND isnotnull(ws_item_sk#732)) AND isnotnull(ws_sold_date_sk#729))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_net_paid#758, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_net_paid#758)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13373_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_net_profit762 = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 5);
        int32_t _ws_net_paid758 = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 4);
        int32_t _ws_quantity747 = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 3);
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_13373_input.getInt64(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 0);
        if (((((1) && (1)) && (1)) && (((_ws_net_profit762 > 1.00) && (_ws_net_paid758 > 0.00)) && (_ws_quantity747 > 0))) && (((1) && (1)) && (1))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 0);
            tbl_Filter_TD_1215_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 1);
            tbl_Filter_TD_1215_output.setInt32(r, 1, _ws_item_sk732_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_13373_input.getInt64(i, 2);
            tbl_Filter_TD_1215_output.setInt64(r, 2, _ws_order_number746L_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 3);
            tbl_Filter_TD_1215_output.setInt32(r, 3, _ws_quantity747_t);
            int32_t _ws_net_paid758_t = tbl_SerializeFromObject_TD_13373_input.getInt32(i, 4);
            tbl_Filter_TD_1215_output.setInt32(r, 4, _ws_net_paid758_t);
            r++;
        }
    }
    tbl_Filter_TD_1215_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1215_output #Row: " << tbl_Filter_TD_1215_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11542(Table &tbl_SerializeFromObject_TD_1227_input, Table &tbl_Filter_TD_11542_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#5052) AND isnotnull(d_moy#5054)) AND ((d_year#5052 = 2001) AND (d_moy#5054 = 12))) AND isnotnull(d_date_sk#5046)))
    // Input: ListBuffer(d_date_sk#5046, d_year#5052, d_moy#5054)
    // Output: ListBuffer(d_date_sk#5046)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1227_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5052 = tbl_SerializeFromObject_TD_1227_input.getInt32(i, 1);
        int32_t _d_moy5054 = tbl_SerializeFromObject_TD_1227_input.getInt32(i, 2);
        int32_t _d_date_sk5046 = tbl_SerializeFromObject_TD_1227_input.getInt32(i, 0);
        if ((((1) && (1)) && ((_d_year5052 == 2001) && (_d_moy5054 == 12))) && (1)) {
            int32_t _d_date_sk5046_t = tbl_SerializeFromObject_TD_1227_input.getInt32(i, 0);
            tbl_Filter_TD_11542_output.setInt32(r, 0, _d_date_sk5046_t);
            r++;
        }
    }
    tbl_Filter_TD_11542_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11542_output #Row: " << tbl_Filter_TD_11542_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11215_key_leftMajor {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_11215_key_leftMajor& other) const {
        return ((_ss_ticket_number1215L == other._ss_ticket_number1215L) && (_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11215_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11215_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ss_ticket_number1215L)) + (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_11215_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_quantity1216;
    int32_t _ss_net_paid1226;
};
struct SW_JOIN_INNER_TD_11215_key_rightMajor {
    int64_t _sr_ticket_number678L;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_INNER_TD_11215_key_rightMajor& other) const {
        return ((_sr_ticket_number678L == other._sr_ticket_number678L) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11215_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11215_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._sr_ticket_number678L)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_INNER_TD_11215_payload_rightMajor {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    int32_t _sr_return_quantity679;
    int32_t _sr_return_amt680;
};
void SW_JOIN_INNER_TD_11215(Table &tbl_Filter_TD_12109_output, Table &tbl_Filter_TD_1264_output, Table &tbl_JOIN_INNER_TD_11215_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ss_ticket_number#1215L = sr_ticket_number#678L) AND (ss_item_sk#1208 = sr_item_sk#671)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_net_paid#1226)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    int left_nrow = tbl_Filter_TD_12109_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1264_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11215_key_leftMajor, SW_JOIN_INNER_TD_11215_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12109_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_12109_output.getInt64(i, 2);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_12109_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11215_key_leftMajor keyA{_ss_ticket_number1215L_k, _ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12109_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_12109_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_12109_output.getInt64(i, 2);
            int32_t _ss_quantity1216 = tbl_Filter_TD_12109_output.getInt32(i, 3);
            int32_t _ss_net_paid1226 = tbl_Filter_TD_12109_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11215_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_ticket_number1215L, _ss_quantity1216, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1264_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_1264_output.getInt64(i, 1);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_1264_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11215_key_leftMajor{_sr_ticket_number678L_k, _sr_item_sk671_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _sr_item_sk671 = tbl_Filter_TD_1264_output.getInt32(i, 0);
                int64_t _sr_ticket_number678L = tbl_Filter_TD_1264_output.getInt64(i, 1);
                int32_t _sr_return_quantity679 = tbl_Filter_TD_1264_output.getInt32(i, 2);
                int32_t _sr_return_amt680 = tbl_Filter_TD_1264_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 3, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 4, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 5, _sr_return_amt680);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11215_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11215_key_rightMajor, SW_JOIN_INNER_TD_11215_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1264_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_1264_output.getInt64(i, 1);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_1264_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11215_key_rightMajor keyA{_sr_ticket_number678L_k, _sr_item_sk671_k};
            int32_t _sr_item_sk671 = tbl_Filter_TD_1264_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L = tbl_Filter_TD_1264_output.getInt64(i, 1);
            int32_t _sr_return_quantity679 = tbl_Filter_TD_1264_output.getInt32(i, 2);
            int32_t _sr_return_amt680 = tbl_Filter_TD_1264_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11215_payload_rightMajor payloadA{_sr_item_sk671, _sr_ticket_number678L, _sr_return_quantity679, _sr_return_amt680};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12109_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_12109_output.getInt64(i, 2);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_12109_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11215_key_rightMajor{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it->second)._sr_ticket_number678L;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12109_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_12109_output.getInt32(i, 1);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_12109_output.getInt64(i, 2);
                int32_t _ss_quantity1216 = tbl_Filter_TD_12109_output.getInt32(i, 3);
                int32_t _ss_net_paid1226 = tbl_Filter_TD_12109_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 4, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 5, _sr_return_amt680);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_11215_output.setInt32(r, 3, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11215_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11215_output #Row: " << tbl_JOIN_INNER_TD_11215_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1138(Table &tbl_SerializeFromObject_TD_12518_input, Table &tbl_Filter_TD_1138_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#5024) AND isnotnull(d_moy#5026)) AND ((d_year#5024 = 2001) AND (d_moy#5026 = 12))) AND isnotnull(d_date_sk#5018)))
    // Input: ListBuffer(d_date_sk#5018, d_year#5024, d_moy#5026)
    // Output: ListBuffer(d_date_sk#5018)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12518_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5024 = tbl_SerializeFromObject_TD_12518_input.getInt32(i, 1);
        int32_t _d_moy5026 = tbl_SerializeFromObject_TD_12518_input.getInt32(i, 2);
        int32_t _d_date_sk5018 = tbl_SerializeFromObject_TD_12518_input.getInt32(i, 0);
        if ((((1) && (1)) && ((_d_year5024 == 2001) && (_d_moy5026 == 12))) && (1)) {
            int32_t _d_date_sk5018_t = tbl_SerializeFromObject_TD_12518_input.getInt32(i, 0);
            tbl_Filter_TD_1138_output.setInt32(r, 0, _d_date_sk5018_t);
            r++;
        }
    }
    tbl_Filter_TD_1138_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1138_output #Row: " << tbl_Filter_TD_1138_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1125_key_leftMajor {
    int64_t _cs_order_number1121L;
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_1125_key_leftMajor& other) const {
        return ((_cs_order_number1121L == other._cs_order_number1121L) && (_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1125_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1125_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cs_order_number1121L)) + (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_1125_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int64_t _cs_order_number1121L;
    int32_t _cs_quantity1122;
    int32_t _cs_net_paid1133;
};
struct SW_JOIN_INNER_TD_1125_key_rightMajor {
    int64_t _cr_order_number1039L;
    int32_t _cr_item_sk1025;
    bool operator==(const SW_JOIN_INNER_TD_1125_key_rightMajor& other) const {
        return ((_cr_order_number1039L == other._cr_order_number1039L) && (_cr_item_sk1025 == other._cr_item_sk1025));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1125_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1125_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cr_order_number1039L)) + (hash<int32_t>()(k._cr_item_sk1025));
    }
};
}
struct SW_JOIN_INNER_TD_1125_payload_rightMajor {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    int32_t _cr_return_quantity1040;
    int32_t _cr_return_amount1041;
};
void SW_JOIN_INNER_TD_1125(Table &tbl_Filter_TD_12259_output, Table &tbl_Filter_TD_12487_output, Table &tbl_JOIN_INNER_TD_1125_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cs_order_number#1121L = cr_order_number#1039L) AND (cs_item_sk#1119 = cr_item_sk#1025)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_net_paid#1133)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    int left_nrow = tbl_Filter_TD_12259_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12487_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1125_key_leftMajor, SW_JOIN_INNER_TD_1125_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12259_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _cs_order_number1121L_k = tbl_Filter_TD_12259_output.getInt64(i, 2);
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_12259_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1125_key_leftMajor keyA{_cs_order_number1121L_k, _cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_12259_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_12259_output.getInt32(i, 1);
            int64_t _cs_order_number1121L = tbl_Filter_TD_12259_output.getInt64(i, 2);
            int32_t _cs_quantity1122 = tbl_Filter_TD_12259_output.getInt32(i, 3);
            int32_t _cs_net_paid1133 = tbl_Filter_TD_12259_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_1125_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_order_number1121L, _cs_quantity1122, _cs_net_paid1133};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12487_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _cr_order_number1039L_k = tbl_Filter_TD_12487_output.getInt64(i, 1);
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_12487_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1125_key_leftMajor{_cr_order_number1039L_k, _cr_item_sk1025_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_net_paid1133 = (it->second)._cs_net_paid1133;
                int32_t _cr_item_sk1025 = tbl_Filter_TD_12487_output.getInt32(i, 0);
                int64_t _cr_order_number1039L = tbl_Filter_TD_12487_output.getInt64(i, 1);
                int32_t _cr_return_quantity1040 = tbl_Filter_TD_12487_output.getInt32(i, 2);
                int32_t _cr_return_amount1041 = tbl_Filter_TD_12487_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 3, _cs_net_paid1133);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 4, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 5, _cr_return_amount1041);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1125_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1125_key_rightMajor, SW_JOIN_INNER_TD_1125_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12487_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _cr_order_number1039L_k = tbl_Filter_TD_12487_output.getInt64(i, 1);
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_12487_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1125_key_rightMajor keyA{_cr_order_number1039L_k, _cr_item_sk1025_k};
            int32_t _cr_item_sk1025 = tbl_Filter_TD_12487_output.getInt32(i, 0);
            int64_t _cr_order_number1039L = tbl_Filter_TD_12487_output.getInt64(i, 1);
            int32_t _cr_return_quantity1040 = tbl_Filter_TD_12487_output.getInt32(i, 2);
            int32_t _cr_return_amount1041 = tbl_Filter_TD_12487_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1125_payload_rightMajor payloadA{_cr_item_sk1025, _cr_order_number1039L, _cr_return_quantity1040, _cr_return_amount1041};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12259_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _cs_order_number1121L_k = tbl_Filter_TD_12259_output.getInt64(i, 2);
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_12259_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1125_key_rightMajor{_cs_order_number1121L_k, _cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_item_sk1025 = (it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it->second)._cr_order_number1039L;
                int32_t _cr_return_quantity1040 = (it->second)._cr_return_quantity1040;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_12259_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_12259_output.getInt32(i, 1);
                int64_t _cs_order_number1121L = tbl_Filter_TD_12259_output.getInt64(i, 2);
                int32_t _cs_quantity1122 = tbl_Filter_TD_12259_output.getInt32(i, 3);
                int32_t _cs_net_paid1133 = tbl_Filter_TD_12259_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 4, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 5, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_1125_output.setInt32(r, 3, _cs_net_paid1133);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1125_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1125_output #Row: " << tbl_JOIN_INNER_TD_1125_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11561(Table &tbl_SerializeFromObject_TD_12100_input, Table &tbl_Filter_TD_11561_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 2001) AND (d_moy#128 = 12))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12100_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12100_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_12100_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12100_input.getInt32(i, 0);
        if ((((1) && (1)) && ((_d_year126 == 2001) && (_d_moy128 == 12))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12100_input.getInt32(i, 0);
            tbl_Filter_TD_11561_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11561_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11561_output #Row: " << tbl_Filter_TD_11561_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1116_key_leftMajor {
    int64_t _ws_order_number746L;
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_1116_key_leftMajor& other) const {
        return ((_ws_order_number746L == other._ws_order_number746L) && (_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1116_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1116_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number746L)) + (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_1116_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int64_t _ws_order_number746L;
    int32_t _ws_quantity747;
    int32_t _ws_net_paid758;
};
struct SW_JOIN_INNER_TD_1116_key_rightMajor {
    int64_t _wr_order_number844L;
    int32_t _wr_item_sk833;
    bool operator==(const SW_JOIN_INNER_TD_1116_key_rightMajor& other) const {
        return ((_wr_order_number844L == other._wr_order_number844L) && (_wr_item_sk833 == other._wr_item_sk833));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1116_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1116_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number844L)) + (hash<int32_t>()(k._wr_item_sk833));
    }
};
}
struct SW_JOIN_INNER_TD_1116_payload_rightMajor {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    int32_t _wr_return_quantity845;
    int32_t _wr_return_amt846;
};
void SW_JOIN_INNER_TD_1116(Table &tbl_Filter_TD_1215_output, Table &tbl_Filter_TD_12957_output, Table &tbl_JOIN_INNER_TD_1116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ws_order_number#746L = wr_order_number#844L) AND (ws_item_sk#732 = wr_item_sk#833)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_net_paid#758)
    // Right Table: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    int left_nrow = tbl_Filter_TD_1215_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12957_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1116_key_leftMajor, SW_JOIN_INNER_TD_1116_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1215_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_1215_output.getInt64(i, 2);
            int32_t _ws_item_sk732_k = tbl_Filter_TD_1215_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1116_key_leftMajor keyA{_ws_order_number746L_k, _ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_1215_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_1215_output.getInt32(i, 1);
            int64_t _ws_order_number746L = tbl_Filter_TD_1215_output.getInt64(i, 2);
            int32_t _ws_quantity747 = tbl_Filter_TD_1215_output.getInt32(i, 3);
            int32_t _ws_net_paid758 = tbl_Filter_TD_1215_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_1116_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_order_number746L, _ws_quantity747, _ws_net_paid758};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12957_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _wr_order_number844L_k = tbl_Filter_TD_12957_output.getInt64(i, 1);
            int32_t _wr_item_sk833_k = tbl_Filter_TD_12957_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1116_key_leftMajor{_wr_order_number844L_k, _wr_item_sk833_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_net_paid758 = (it->second)._ws_net_paid758;
                int32_t _wr_item_sk833 = tbl_Filter_TD_12957_output.getInt32(i, 0);
                int64_t _wr_order_number844L = tbl_Filter_TD_12957_output.getInt64(i, 1);
                int32_t _wr_return_quantity845 = tbl_Filter_TD_12957_output.getInt32(i, 2);
                int32_t _wr_return_amt846 = tbl_Filter_TD_12957_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 3, _ws_net_paid758);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 4, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 5, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1116_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1116_key_rightMajor, SW_JOIN_INNER_TD_1116_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12957_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _wr_order_number844L_k = tbl_Filter_TD_12957_output.getInt64(i, 1);
            int32_t _wr_item_sk833_k = tbl_Filter_TD_12957_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1116_key_rightMajor keyA{_wr_order_number844L_k, _wr_item_sk833_k};
            int32_t _wr_item_sk833 = tbl_Filter_TD_12957_output.getInt32(i, 0);
            int64_t _wr_order_number844L = tbl_Filter_TD_12957_output.getInt64(i, 1);
            int32_t _wr_return_quantity845 = tbl_Filter_TD_12957_output.getInt32(i, 2);
            int32_t _wr_return_amt846 = tbl_Filter_TD_12957_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1116_payload_rightMajor payloadA{_wr_item_sk833, _wr_order_number844L, _wr_return_quantity845, _wr_return_amt846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1215_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_1215_output.getInt64(i, 2);
            int32_t _ws_item_sk732_k = tbl_Filter_TD_1215_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1116_key_rightMajor{_ws_order_number746L_k, _ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_item_sk833 = (it->second)._wr_item_sk833;
                int64_t _wr_order_number844L = (it->second)._wr_order_number844L;
                int32_t _wr_return_quantity845 = (it->second)._wr_return_quantity845;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_1215_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_1215_output.getInt32(i, 1);
                int64_t _ws_order_number746L = tbl_Filter_TD_1215_output.getInt64(i, 2);
                int32_t _ws_quantity747 = tbl_Filter_TD_1215_output.getInt32(i, 3);
                int32_t _ws_net_paid758 = tbl_Filter_TD_1215_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 4, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 5, _wr_return_amt846);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_1116_output.setInt32(r, 3, _ws_net_paid758);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1116_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1116_output #Row: " << tbl_JOIN_INNER_TD_1116_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10196_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10196_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10196_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10196_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10196_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_quantity1216;
    int32_t _ss_net_paid1226;
    int32_t _sr_return_quantity679;
    int32_t _sr_return_amt680;
};
struct SW_JOIN_INNER_TD_10196_key_rightMajor {
    int32_t _d_date_sk5046;
    bool operator==(const SW_JOIN_INNER_TD_10196_key_rightMajor& other) const {
        return ((_d_date_sk5046 == other._d_date_sk5046));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10196_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10196_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5046));
    }
};
}
struct SW_JOIN_INNER_TD_10196_payload_rightMajor {
    int32_t _d_date_sk5046;
};
void SW_JOIN_INNER_TD_10196(Table &tbl_JOIN_INNER_TD_11215_output, Table &tbl_Filter_TD_11542_output, Table &tbl_JOIN_INNER_TD_10196_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#5046))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    // Right Table: ListBuffer(d_date_sk#5046)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    int left_nrow = tbl_JOIN_INNER_TD_11215_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11542_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10196_key_leftMajor, SW_JOIN_INNER_TD_10196_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11215_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10196_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 1);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 2);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 3);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 4);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_10196_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_quantity1216, _ss_net_paid1226, _sr_return_quantity679, _sr_return_amt680};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11542_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5046_k = tbl_Filter_TD_11542_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10196_key_leftMajor{_d_date_sk5046_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _d_date_sk5046 = tbl_Filter_TD_11542_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 2, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 3, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 4, _sr_return_amt680);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10196_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10196_key_rightMajor, SW_JOIN_INNER_TD_10196_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11542_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5046_k = tbl_Filter_TD_11542_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10196_key_rightMajor keyA{_d_date_sk5046_k};
            int32_t _d_date_sk5046 = tbl_Filter_TD_11542_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10196_payload_rightMajor payloadA{_d_date_sk5046};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11215_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10196_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5046 = (it->second)._d_date_sk5046;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 1);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 2);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 3);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 4);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_11215_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 2, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 3, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_10196_output.setInt32(r, 4, _sr_return_amt680);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10196_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10196_output #Row: " << tbl_JOIN_INNER_TD_10196_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10450_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_10450_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10450_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10450_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_10450_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_net_paid1133;
    int32_t _cr_return_quantity1040;
    int32_t _cr_return_amount1041;
};
struct SW_JOIN_INNER_TD_10450_key_rightMajor {
    int32_t _d_date_sk5018;
    bool operator==(const SW_JOIN_INNER_TD_10450_key_rightMajor& other) const {
        return ((_d_date_sk5018 == other._d_date_sk5018));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10450_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10450_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5018));
    }
};
}
struct SW_JOIN_INNER_TD_10450_payload_rightMajor {
    int32_t _d_date_sk5018;
};
void SW_JOIN_INNER_TD_10450(Table &tbl_JOIN_INNER_TD_1125_output, Table &tbl_Filter_TD_1138_output, Table &tbl_JOIN_INNER_TD_10450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#5018))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    // Right Table: ListBuffer(d_date_sk#5018)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    int left_nrow = tbl_JOIN_INNER_TD_1125_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1138_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10450_key_leftMajor, SW_JOIN_INNER_TD_10450_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1125_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10450_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 2);
            int32_t _cs_net_paid1133 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 3);
            int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 4);
            int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_10450_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_quantity1122, _cs_net_paid1133, _cr_return_quantity1040, _cr_return_amount1041};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1138_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5018_k = tbl_Filter_TD_1138_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10450_key_leftMajor{_d_date_sk5018_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_net_paid1133 = (it->second)._cs_net_paid1133;
                int32_t _cr_return_quantity1040 = (it->second)._cr_return_quantity1040;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _d_date_sk5018 = tbl_Filter_TD_1138_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 2, _cs_net_paid1133);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 3, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 4, _cr_return_amount1041);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10450_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10450_key_rightMajor, SW_JOIN_INNER_TD_10450_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1138_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5018_k = tbl_Filter_TD_1138_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10450_key_rightMajor keyA{_d_date_sk5018_k};
            int32_t _d_date_sk5018 = tbl_Filter_TD_1138_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10450_payload_rightMajor payloadA{_d_date_sk5018};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1125_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10450_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5018 = (it->second)._d_date_sk5018;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 2);
                int32_t _cs_net_paid1133 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 3);
                int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 4);
                int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_1125_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 2, _cs_net_paid1133);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 3, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 4, _cr_return_amount1041);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10450_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10450_output #Row: " << tbl_JOIN_INNER_TD_10450_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10748_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_10748_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10748_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10748_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_10748_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_quantity747;
    int32_t _ws_net_paid758;
    int32_t _wr_return_quantity845;
    int32_t _wr_return_amt846;
};
struct SW_JOIN_INNER_TD_10748_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10748_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10748_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10748_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10748_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10748(Table &tbl_JOIN_INNER_TD_1116_output, Table &tbl_Filter_TD_11561_output, Table &tbl_JOIN_INNER_TD_10748_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    int left_nrow = tbl_JOIN_INNER_TD_1116_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11561_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10748_key_leftMajor, SW_JOIN_INNER_TD_10748_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1116_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10748_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 1);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 2);
            int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 3);
            int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 4);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_10748_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_quantity747, _ws_net_paid758, _wr_return_quantity845, _wr_return_amt846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11561_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11561_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10748_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_net_paid758 = (it->second)._ws_net_paid758;
                int32_t _wr_return_quantity845 = (it->second)._wr_return_quantity845;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _d_date_sk120 = tbl_Filter_TD_11561_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 2, _ws_net_paid758);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 3, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 4, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10748_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10748_key_rightMajor, SW_JOIN_INNER_TD_10748_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11561_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11561_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10748_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11561_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10748_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1116_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10748_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 1);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 2);
                int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 3);
                int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 4);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_1116_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 2, _ws_net_paid758);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 3, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_10748_output.setInt32(r, 4, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10748_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10748_output #Row: " << tbl_JOIN_INNER_TD_10748_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9269_key;
struct SW_Aggregate_TD_9269_payload {
    int32_t _item5012;
    int32_t _return_ratio5013_sum_0;
    int32_t _return_ratio5013_sum_1;
    int32_t _currency_ratio5014_sum_2;
    int32_t _currency_ratio5014_sum_3;
};
void SW_Aggregate_TD_9269(Table &tbl_JOIN_INNER_TD_10196_output, Table &tbl_Aggregate_TD_9269_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#1208, ss_item_sk#1208 AS item#5012, CheckOverflow((promote_precision(cast(sum(coalesce(sr_return_quantity#679, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(ss_quantity#1216, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#5013, CheckOverflow((promote_precision(cast(sum(coalesce(cast(sr_return_amt#680 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(ss_net_paid#1226 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#5014)
    // Input: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    // Output: ListBuffer(item#5012, return_ratio#5013, currency_ratio#5014)
    std::unordered_map<SW_Aggregate_TD_9269_key, SW_Aggregate_TD_9269_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10196_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10196_output.getInt32(i, 0);
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_10196_output.getInt32(i, 1);
        int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_10196_output.getInt32(i, 2);
        int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_10196_output.getInt32(i, 3);
        int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10196_output.getInt32(i, 4);
        SW_Aggregate_TD_9269_key k = _ss_item_sk1208;
        int32_t _item5012 = _ss_item_sk1208;
        int64_t _return_ratio5013_sum_0 = _sr_return_quantity679;
        int64_t _return_ratio5013_sum_1 = _ss_quantity1216;
        int64_t _currency_ratio5014_sum_2 = _sr_return_amt680;
        int64_t _currency_ratio5014_sum_3 = _ss_net_paid1226;
        SW_Aggregate_TD_9269_payload p{_item5012, _return_ratio5013_sum_0, _return_ratio5013_sum_1, _currency_ratio5014_sum_2, _currency_ratio5014_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._return_ratio5013_sum_0 + _return_ratio5013_sum_0;
            p._return_ratio5013_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._return_ratio5013_sum_1 + _return_ratio5013_sum_1;
            p._return_ratio5013_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._currency_ratio5014_sum_2 + _currency_ratio5014_sum_2;
            p._currency_ratio5014_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._currency_ratio5014_sum_3 + _currency_ratio5014_sum_3;
            p._currency_ratio5014_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_item_sk1208 not required in the output table
        tbl_Aggregate_TD_9269_output.setInt32(r, 0, (it.second)._item5012);
        int32_t _return_ratio5013 = ((it.second)._return_ratio5013_sum_0 / (it.second)._return_ratio5013_sum_1);
        tbl_Aggregate_TD_9269_output.setInt32(r, 1, _return_ratio5013);
        int32_t _currency_ratio5014 = ((it.second)._currency_ratio5014_sum_2 / (it.second)._currency_ratio5014_sum_3);
        tbl_Aggregate_TD_9269_output.setInt32(r, 2, _currency_ratio5014);
        ++r;
    }
    tbl_Aggregate_TD_9269_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9269_output #Row: " << tbl_Aggregate_TD_9269_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_976_key;
struct SW_Aggregate_TD_976_payload {
    int32_t _item5006;
    int32_t _return_ratio5007_sum_0;
    int32_t _return_ratio5007_sum_1;
    int32_t _currency_ratio5008_sum_2;
    int32_t _currency_ratio5008_sum_3;
};
void SW_Aggregate_TD_976(Table &tbl_JOIN_INNER_TD_10450_output, Table &tbl_Aggregate_TD_976_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_item_sk#1119, cs_item_sk#1119 AS item#5006, CheckOverflow((promote_precision(cast(sum(coalesce(cr_return_quantity#1040, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cs_quantity#1122, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#5007, CheckOverflow((promote_precision(cast(sum(coalesce(cast(cr_return_amount#1041 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(cs_net_paid#1133 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#5008)
    // Input: ListBuffer(cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    // Output: ListBuffer(item#5006, return_ratio#5007, currency_ratio#5008)
    std::unordered_map<SW_Aggregate_TD_976_key, SW_Aggregate_TD_976_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10450_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 0);
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 1);
        int32_t _cs_net_paid1133 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 2);
        int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 3);
        int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 4);
        SW_Aggregate_TD_976_key k = _cs_item_sk1119;
        int32_t _item5006 = _cs_item_sk1119;
        int64_t _return_ratio5007_sum_0 = _cr_return_quantity1040;
        int64_t _return_ratio5007_sum_1 = _cs_quantity1122;
        int64_t _currency_ratio5008_sum_2 = _cr_return_amount1041;
        int64_t _currency_ratio5008_sum_3 = _cs_net_paid1133;
        SW_Aggregate_TD_976_payload p{_item5006, _return_ratio5007_sum_0, _return_ratio5007_sum_1, _currency_ratio5008_sum_2, _currency_ratio5008_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._return_ratio5007_sum_0 + _return_ratio5007_sum_0;
            p._return_ratio5007_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._return_ratio5007_sum_1 + _return_ratio5007_sum_1;
            p._return_ratio5007_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._currency_ratio5008_sum_2 + _currency_ratio5008_sum_2;
            p._currency_ratio5008_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._currency_ratio5008_sum_3 + _currency_ratio5008_sum_3;
            p._currency_ratio5008_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cs_item_sk1119 not required in the output table
        tbl_Aggregate_TD_976_output.setInt32(r, 0, (it.second)._item5006);
        int32_t _return_ratio5007 = ((it.second)._return_ratio5007_sum_0 / (it.second)._return_ratio5007_sum_1);
        tbl_Aggregate_TD_976_output.setInt32(r, 1, _return_ratio5007);
        int32_t _currency_ratio5008 = ((it.second)._currency_ratio5008_sum_2 / (it.second)._currency_ratio5008_sum_3);
        tbl_Aggregate_TD_976_output.setInt32(r, 2, _currency_ratio5008);
        ++r;
    }
    tbl_Aggregate_TD_976_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_976_output #Row: " << tbl_Aggregate_TD_976_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9309_key;
struct SW_Aggregate_TD_9309_payload {
    int32_t _item5000;
    int32_t _return_ratio5001_sum_0;
    int32_t _return_ratio5001_sum_1;
    int32_t _currency_ratio5002_sum_2;
    int32_t _currency_ratio5002_sum_3;
};
void SW_Aggregate_TD_9309(Table &tbl_JOIN_INNER_TD_10748_output, Table &tbl_Aggregate_TD_9309_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ws_item_sk#732, ws_item_sk#732 AS item#5000, CheckOverflow((promote_precision(cast(sum(coalesce(wr_return_quantity#845, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(ws_quantity#747, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#5001, CheckOverflow((promote_precision(cast(sum(coalesce(cast(wr_return_amt#846 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(ws_net_paid#758 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#5002)
    // Input: ListBuffer(ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    // Output: ListBuffer(item#5000, return_ratio#5001, currency_ratio#5002)
    std::unordered_map<SW_Aggregate_TD_9309_key, SW_Aggregate_TD_9309_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10748_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_10748_output.getInt32(i, 0);
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_10748_output.getInt32(i, 1);
        int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_10748_output.getInt32(i, 2);
        int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_10748_output.getInt32(i, 3);
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10748_output.getInt32(i, 4);
        SW_Aggregate_TD_9309_key k = _ws_item_sk732;
        int32_t _item5000 = _ws_item_sk732;
        int64_t _return_ratio5001_sum_0 = _wr_return_quantity845;
        int64_t _return_ratio5001_sum_1 = _ws_quantity747;
        int64_t _currency_ratio5002_sum_2 = _wr_return_amt846;
        int64_t _currency_ratio5002_sum_3 = _ws_net_paid758;
        SW_Aggregate_TD_9309_payload p{_item5000, _return_ratio5001_sum_0, _return_ratio5001_sum_1, _currency_ratio5002_sum_2, _currency_ratio5002_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._return_ratio5001_sum_0 + _return_ratio5001_sum_0;
            p._return_ratio5001_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._return_ratio5001_sum_1 + _return_ratio5001_sum_1;
            p._return_ratio5001_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._currency_ratio5002_sum_2 + _currency_ratio5002_sum_2;
            p._currency_ratio5002_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._currency_ratio5002_sum_3 + _currency_ratio5002_sum_3;
            p._currency_ratio5002_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ws_item_sk732 not required in the output table
        tbl_Aggregate_TD_9309_output.setInt32(r, 0, (it.second)._item5000);
        int32_t _return_ratio5001 = ((it.second)._return_ratio5001_sum_0 / (it.second)._return_ratio5001_sum_1);
        tbl_Aggregate_TD_9309_output.setInt32(r, 1, _return_ratio5001);
        int32_t _currency_ratio5002 = ((it.second)._currency_ratio5002_sum_2 / (it.second)._currency_ratio5002_sum_3);
        tbl_Aggregate_TD_9309_output.setInt32(r, 2, _currency_ratio5002);
        ++r;
    }
    tbl_Aggregate_TD_9309_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9309_output #Row: " << tbl_Aggregate_TD_9309_output.getNumRow() << std::endl;
}

void SW_Window_TD_8346(Table &tbl_Aggregate_TD_9269_output, Table &tbl_Window_TD_8346_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#5013) windowspecdefinition(return_ratio#5013 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#5015)
    // Input: ListBuffer(item#5012, return_ratio#5013, currency_ratio#5014)
    // Output: ListBuffer(item#5012, return_ratio#5013, currency_ratio#5014, return_rank#5015)
    struct SW_Window_TD_8346Row {
        int32_t _item5012;
        int32_t _return_ratio5013;
        int32_t _currency_ratio5014;
    }; 

    int nrow = tbl_Aggregate_TD_9269_output.getNumRow();
    std::vector<SW_Window_TD_8346Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item5012 = tbl_Aggregate_TD_9269_output.getInt32(i, 0);
        tbl_Window_TD_8346_output.setInt32(r, 0,_item5012);
        int32_t _return_ratio5013 = tbl_Aggregate_TD_9269_output.getInt32(i, 1);
        tbl_Window_TD_8346_output.setInt32(r, 1,_return_ratio5013);
        int32_t _currency_ratio5014 = tbl_Aggregate_TD_9269_output.getInt32(i, 2);
        tbl_Window_TD_8346_output.setInt32(r, 2,_currency_ratio5014);
        r++;
        SW_Window_TD_8346Row t = {_item5012,_return_ratio5013,_currency_ratio5014};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8346Row& a, const SW_Window_TD_8346Row& b) const { return 
(a._return_ratio5013 < b._return_ratio5013); 
}
    }SW_Window_TD_8346_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8346_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ();
        isSameOrderKey0 = ( rows0[i]._return_ratio5013 == rows0[i-1]._return_ratio5013);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8346_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_8346_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8346_output #Row: " << tbl_Window_TD_8346_output.getNumRow() << std::endl;
}

void SW_Window_TD_8221(Table &tbl_Aggregate_TD_976_output, Table &tbl_Window_TD_8221_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#5007) windowspecdefinition(return_ratio#5007 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#5009)
    // Input: ListBuffer(item#5006, return_ratio#5007, currency_ratio#5008)
    // Output: ListBuffer(item#5006, return_ratio#5007, currency_ratio#5008, return_rank#5009)
    struct SW_Window_TD_8221Row {
        int32_t _item5006;
        int32_t _return_ratio5007;
        int32_t _currency_ratio5008;
    }; 

    int nrow = tbl_Aggregate_TD_976_output.getNumRow();
    std::vector<SW_Window_TD_8221Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item5006 = tbl_Aggregate_TD_976_output.getInt32(i, 0);
        tbl_Window_TD_8221_output.setInt32(r, 0,_item5006);
        int32_t _return_ratio5007 = tbl_Aggregate_TD_976_output.getInt32(i, 1);
        tbl_Window_TD_8221_output.setInt32(r, 1,_return_ratio5007);
        int32_t _currency_ratio5008 = tbl_Aggregate_TD_976_output.getInt32(i, 2);
        tbl_Window_TD_8221_output.setInt32(r, 2,_currency_ratio5008);
        r++;
        SW_Window_TD_8221Row t = {_item5006,_return_ratio5007,_currency_ratio5008};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8221Row& a, const SW_Window_TD_8221Row& b) const { return 
(a._return_ratio5007 < b._return_ratio5007); 
}
    }SW_Window_TD_8221_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8221_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ();
        isSameOrderKey0 = ( rows0[i]._return_ratio5007 == rows0[i-1]._return_ratio5007);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8221_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_8221_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8221_output #Row: " << tbl_Window_TD_8221_output.getNumRow() << std::endl;
}

void SW_Window_TD_8542(Table &tbl_Aggregate_TD_9309_output, Table &tbl_Window_TD_8542_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#5001) windowspecdefinition(return_ratio#5001 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#5003)
    // Input: ListBuffer(item#5000, return_ratio#5001, currency_ratio#5002)
    // Output: ListBuffer(item#5000, return_ratio#5001, currency_ratio#5002, return_rank#5003)
    struct SW_Window_TD_8542Row {
        int32_t _item5000;
        int32_t _return_ratio5001;
        int32_t _currency_ratio5002;
    }; 

    int nrow = tbl_Aggregate_TD_9309_output.getNumRow();
    std::vector<SW_Window_TD_8542Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item5000 = tbl_Aggregate_TD_9309_output.getInt32(i, 0);
        tbl_Window_TD_8542_output.setInt32(r, 0,_item5000);
        int32_t _return_ratio5001 = tbl_Aggregate_TD_9309_output.getInt32(i, 1);
        tbl_Window_TD_8542_output.setInt32(r, 1,_return_ratio5001);
        int32_t _currency_ratio5002 = tbl_Aggregate_TD_9309_output.getInt32(i, 2);
        tbl_Window_TD_8542_output.setInt32(r, 2,_currency_ratio5002);
        r++;
        SW_Window_TD_8542Row t = {_item5000,_return_ratio5001,_currency_ratio5002};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8542Row& a, const SW_Window_TD_8542Row& b) const { return 
(a._return_ratio5001 < b._return_ratio5001); 
}
    }SW_Window_TD_8542_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8542_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ();
        isSameOrderKey0 = ( rows0[i]._return_ratio5001 == rows0[i-1]._return_ratio5001);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8542_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_8542_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8542_output #Row: " << tbl_Window_TD_8542_output.getNumRow() << std::endl;
}

void SW_Window_TD_7737(Table &tbl_Window_TD_8346_output, Table &tbl_Window_TD_7737_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#5014) windowspecdefinition(currency_ratio#5014 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#5016)
    // Input: ListBuffer(item#5012, return_ratio#5013, currency_ratio#5014, return_rank#5015)
    // Output: ListBuffer(item#5012, return_ratio#5013, currency_ratio#5014, return_rank#5015, currency_rank#5016)
    struct SW_Window_TD_7737Row {
        int32_t _item5012;
        int32_t _return_ratio5013;
        int32_t _currency_ratio5014;
        int32_t _return_rank5015;
    }; 

    int nrow = tbl_Window_TD_8346_output.getNumRow();
    std::vector<SW_Window_TD_7737Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item5012 = tbl_Window_TD_8346_output.getInt32(i, 0);
        tbl_Window_TD_7737_output.setInt32(r, 0,_item5012);
        int32_t _return_ratio5013 = tbl_Window_TD_8346_output.getInt32(i, 1);
        tbl_Window_TD_7737_output.setInt32(r, 1,_return_ratio5013);
        int32_t _currency_ratio5014 = tbl_Window_TD_8346_output.getInt32(i, 2);
        tbl_Window_TD_7737_output.setInt32(r, 2,_currency_ratio5014);
        int32_t _return_rank5015 = tbl_Window_TD_8346_output.getInt32(i, 3);
        tbl_Window_TD_7737_output.setInt32(r, 3,_return_rank5015);
        r++;
        SW_Window_TD_7737Row t = {_item5012,_return_ratio5013,_currency_ratio5014,_return_rank5015};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7737Row& a, const SW_Window_TD_7737Row& b) const { return 
(a._currency_ratio5014 < b._currency_ratio5014); 
}
    }SW_Window_TD_7737_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7737_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ();
        isSameOrderKey0 = ( rows0[i]._currency_ratio5014 == rows0[i-1]._currency_ratio5014);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7737_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_7737_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7737_output #Row: " << tbl_Window_TD_7737_output.getNumRow() << std::endl;
}

void SW_Window_TD_7268(Table &tbl_Window_TD_8221_output, Table &tbl_Window_TD_7268_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#5008) windowspecdefinition(currency_ratio#5008 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#5010)
    // Input: ListBuffer(item#5006, return_ratio#5007, currency_ratio#5008, return_rank#5009)
    // Output: ListBuffer(item#5006, return_ratio#5007, currency_ratio#5008, return_rank#5009, currency_rank#5010)
    struct SW_Window_TD_7268Row {
        int32_t _item5006;
        int32_t _return_ratio5007;
        int32_t _currency_ratio5008;
        int32_t _return_rank5009;
    }; 

    int nrow = tbl_Window_TD_8221_output.getNumRow();
    std::vector<SW_Window_TD_7268Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item5006 = tbl_Window_TD_8221_output.getInt32(i, 0);
        tbl_Window_TD_7268_output.setInt32(r, 0,_item5006);
        int32_t _return_ratio5007 = tbl_Window_TD_8221_output.getInt32(i, 1);
        tbl_Window_TD_7268_output.setInt32(r, 1,_return_ratio5007);
        int32_t _currency_ratio5008 = tbl_Window_TD_8221_output.getInt32(i, 2);
        tbl_Window_TD_7268_output.setInt32(r, 2,_currency_ratio5008);
        int32_t _return_rank5009 = tbl_Window_TD_8221_output.getInt32(i, 3);
        tbl_Window_TD_7268_output.setInt32(r, 3,_return_rank5009);
        r++;
        SW_Window_TD_7268Row t = {_item5006,_return_ratio5007,_currency_ratio5008,_return_rank5009};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7268Row& a, const SW_Window_TD_7268Row& b) const { return 
(a._currency_ratio5008 < b._currency_ratio5008); 
}
    }SW_Window_TD_7268_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7268_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ();
        isSameOrderKey0 = ( rows0[i]._currency_ratio5008 == rows0[i-1]._currency_ratio5008);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7268_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_7268_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7268_output #Row: " << tbl_Window_TD_7268_output.getNumRow() << std::endl;
}

void SW_Window_TD_730(Table &tbl_Window_TD_8542_output, Table &tbl_Window_TD_730_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#5002) windowspecdefinition(currency_ratio#5002 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#5004)
    // Input: ListBuffer(item#5000, return_ratio#5001, currency_ratio#5002, return_rank#5003)
    // Output: ListBuffer(item#5000, return_ratio#5001, currency_ratio#5002, return_rank#5003, currency_rank#5004)
    struct SW_Window_TD_730Row {
        int32_t _item5000;
        int32_t _return_ratio5001;
        int32_t _currency_ratio5002;
        int32_t _return_rank5003;
    }; 

    int nrow = tbl_Window_TD_8542_output.getNumRow();
    std::vector<SW_Window_TD_730Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item5000 = tbl_Window_TD_8542_output.getInt32(i, 0);
        tbl_Window_TD_730_output.setInt32(r, 0,_item5000);
        int32_t _return_ratio5001 = tbl_Window_TD_8542_output.getInt32(i, 1);
        tbl_Window_TD_730_output.setInt32(r, 1,_return_ratio5001);
        int32_t _currency_ratio5002 = tbl_Window_TD_8542_output.getInt32(i, 2);
        tbl_Window_TD_730_output.setInt32(r, 2,_currency_ratio5002);
        int32_t _return_rank5003 = tbl_Window_TD_8542_output.getInt32(i, 3);
        tbl_Window_TD_730_output.setInt32(r, 3,_return_rank5003);
        r++;
        SW_Window_TD_730Row t = {_item5000,_return_ratio5001,_currency_ratio5002,_return_rank5003};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_730Row& a, const SW_Window_TD_730Row& b) const { return 
(a._currency_ratio5002 < b._currency_ratio5002); 
}
    }SW_Window_TD_730_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_730_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ();
        isSameOrderKey0 = ( rows0[i]._currency_ratio5002 == rows0[i-1]._currency_ratio5002);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_730_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_730_output.setNumRow(r);
    std::cout << "tbl_Window_TD_730_output #Row: " << tbl_Window_TD_730_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6526(Table &tbl_Window_TD_7737_output, Table &tbl_Filter_TD_6526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#5015 <= 10) OR (currency_rank#5016 <= 10)))
    // Input: ListBuffer(item#5012, return_ratio#5013, currency_ratio#5014, return_rank#5015, currency_rank#5016)
    // Output: ListBuffer(item#5012, return_ratio#5013, return_rank#5015, currency_rank#5016)
    int r = 0;
    int nrow1 = tbl_Window_TD_7737_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank5015 = tbl_Window_TD_7737_output.getInt32(i, 3);
        int32_t _currency_rank5016 = tbl_Window_TD_7737_output.getInt32(i, 4);
        if ((_return_rank5015 <= 10) || (_currency_rank5016 <= 10)) {
            int32_t _item5012_t = tbl_Window_TD_7737_output.getInt32(i, 0);
            tbl_Filter_TD_6526_output.setInt32(r, 0, _item5012_t);
            int32_t _return_ratio5013_t = tbl_Window_TD_7737_output.getInt32(i, 1);
            tbl_Filter_TD_6526_output.setInt32(r, 1, _return_ratio5013_t);
            int32_t _return_rank5015_t = tbl_Window_TD_7737_output.getInt32(i, 3);
            tbl_Filter_TD_6526_output.setInt32(r, 2, _return_rank5015_t);
            int32_t _currency_rank5016_t = tbl_Window_TD_7737_output.getInt32(i, 4);
            tbl_Filter_TD_6526_output.setInt32(r, 3, _currency_rank5016_t);
            r++;
        }
    }
    tbl_Filter_TD_6526_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6526_output #Row: " << tbl_Filter_TD_6526_output.getNumRow() << std::endl;
}

void SW_Filter_TD_638(Table &tbl_Window_TD_7268_output, Table &tbl_Filter_TD_638_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#5009 <= 10) OR (currency_rank#5010 <= 10)))
    // Input: ListBuffer(item#5006, return_ratio#5007, currency_ratio#5008, return_rank#5009, currency_rank#5010)
    // Output: ListBuffer(item#5006, return_ratio#5007, return_rank#5009, currency_rank#5010)
    int r = 0;
    int nrow1 = tbl_Window_TD_7268_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank5009 = tbl_Window_TD_7268_output.getInt32(i, 3);
        int32_t _currency_rank5010 = tbl_Window_TD_7268_output.getInt32(i, 4);
        if ((_return_rank5009 <= 10) || (_currency_rank5010 <= 10)) {
            int32_t _item5006_t = tbl_Window_TD_7268_output.getInt32(i, 0);
            tbl_Filter_TD_638_output.setInt32(r, 0, _item5006_t);
            int32_t _return_ratio5007_t = tbl_Window_TD_7268_output.getInt32(i, 1);
            tbl_Filter_TD_638_output.setInt32(r, 1, _return_ratio5007_t);
            int32_t _return_rank5009_t = tbl_Window_TD_7268_output.getInt32(i, 3);
            tbl_Filter_TD_638_output.setInt32(r, 2, _return_rank5009_t);
            int32_t _currency_rank5010_t = tbl_Window_TD_7268_output.getInt32(i, 4);
            tbl_Filter_TD_638_output.setInt32(r, 3, _currency_rank5010_t);
            r++;
        }
    }
    tbl_Filter_TD_638_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_638_output #Row: " << tbl_Filter_TD_638_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6973(Table &tbl_Window_TD_730_output, Table &tbl_Filter_TD_6973_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#5003 <= 10) OR (currency_rank#5004 <= 10)))
    // Input: ListBuffer(item#5000, return_ratio#5001, currency_ratio#5002, return_rank#5003, currency_rank#5004)
    // Output: ListBuffer(item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    int r = 0;
    int nrow1 = tbl_Window_TD_730_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank5003 = tbl_Window_TD_730_output.getInt32(i, 3);
        int32_t _currency_rank5004 = tbl_Window_TD_730_output.getInt32(i, 4);
        if ((_return_rank5003 <= 10) || (_currency_rank5004 <= 10)) {
            int32_t _item5000_t = tbl_Window_TD_730_output.getInt32(i, 0);
            tbl_Filter_TD_6973_output.setInt32(r, 0, _item5000_t);
            int32_t _return_ratio5001_t = tbl_Window_TD_730_output.getInt32(i, 1);
            tbl_Filter_TD_6973_output.setInt32(r, 1, _return_ratio5001_t);
            int32_t _return_rank5003_t = tbl_Window_TD_730_output.getInt32(i, 3);
            tbl_Filter_TD_6973_output.setInt32(r, 2, _return_rank5003_t);
            int32_t _currency_rank5004_t = tbl_Window_TD_730_output.getInt32(i, 4);
            tbl_Filter_TD_6973_output.setInt32(r, 3, _currency_rank5004_t);
            r++;
        }
    }
    tbl_Filter_TD_6973_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6973_output #Row: " << tbl_Filter_TD_6973_output.getNumRow() << std::endl;
}

void SW_Project_TD_5126(Table &tbl_Filter_TD_6526_output, Table &tbl_Project_TD_5126_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(store AS channel#5017)
    // Input: ListBuffer(item#5012, return_ratio#5013, return_rank#5015, currency_rank#5016)
    // Output: ListBuffer(channel#5017, item#5012, return_ratio#5013, return_rank#5015, currency_rank#5016)
    int nrow1 = tbl_Filter_TD_6526_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item5012 = tbl_Filter_TD_6526_output.getInt32(i, 0);
        int32_t _return_ratio5013 = tbl_Filter_TD_6526_output.getInt32(i, 1);
        int32_t _return_rank5015 = tbl_Filter_TD_6526_output.getInt32(i, 2);
        int32_t _currency_rank5016 = tbl_Filter_TD_6526_output.getInt32(i, 3);
        std::string _channel5017_str = "store";
        std::array<char, TPCDS_READ_MAX + 1> _channel5017{};
        memcpy(_channel5017.data(), _channel5017_str.data(), (_channel5017_str).length());
        tbl_Project_TD_5126_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel5017);
        tbl_Project_TD_5126_output.setInt32(i, 1, _item5012);
        tbl_Project_TD_5126_output.setInt32(i, 2, _return_ratio5013);
        tbl_Project_TD_5126_output.setInt32(i, 3, _return_rank5015);
        tbl_Project_TD_5126_output.setInt32(i, 4, _currency_rank5016);
    }
    tbl_Project_TD_5126_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5126_output #Row: " << tbl_Project_TD_5126_output.getNumRow() << std::endl;
}

void SW_Project_TD_5474(Table &tbl_Filter_TD_638_output, Table &tbl_Project_TD_5474_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(catalog AS channel#5011)
    // Input: ListBuffer(item#5006, return_ratio#5007, return_rank#5009, currency_rank#5010)
    // Output: ListBuffer(channel#5011, item#5006, return_ratio#5007, return_rank#5009, currency_rank#5010)
    int nrow1 = tbl_Filter_TD_638_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item5006 = tbl_Filter_TD_638_output.getInt32(i, 0);
        int32_t _return_ratio5007 = tbl_Filter_TD_638_output.getInt32(i, 1);
        int32_t _return_rank5009 = tbl_Filter_TD_638_output.getInt32(i, 2);
        int32_t _currency_rank5010 = tbl_Filter_TD_638_output.getInt32(i, 3);
        std::string _channel5011_str = "catalog";
        std::array<char, TPCDS_READ_MAX + 1> _channel5011{};
        memcpy(_channel5011.data(), _channel5011_str.data(), (_channel5011_str).length());
        tbl_Project_TD_5474_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel5011);
        tbl_Project_TD_5474_output.setInt32(i, 1, _item5006);
        tbl_Project_TD_5474_output.setInt32(i, 2, _return_ratio5007);
        tbl_Project_TD_5474_output.setInt32(i, 3, _return_rank5009);
        tbl_Project_TD_5474_output.setInt32(i, 4, _currency_rank5010);
    }
    tbl_Project_TD_5474_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5474_output #Row: " << tbl_Project_TD_5474_output.getNumRow() << std::endl;
}

void SW_Project_TD_5466(Table &tbl_Filter_TD_6973_output, Table &tbl_Project_TD_5466_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(web AS channel#5005)
    // Input: ListBuffer(item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    // Output: ListBuffer(channel#5005, item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    int nrow1 = tbl_Filter_TD_6973_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item5000 = tbl_Filter_TD_6973_output.getInt32(i, 0);
        int32_t _return_ratio5001 = tbl_Filter_TD_6973_output.getInt32(i, 1);
        int32_t _return_rank5003 = tbl_Filter_TD_6973_output.getInt32(i, 2);
        int32_t _currency_rank5004 = tbl_Filter_TD_6973_output.getInt32(i, 3);
        std::string _channel5005_str = "web";
        std::array<char, TPCDS_READ_MAX + 1> _channel5005{};
        memcpy(_channel5005.data(), _channel5005_str.data(), (_channel5005_str).length());
        tbl_Project_TD_5466_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel5005);
        tbl_Project_TD_5466_output.setInt32(i, 1, _item5000);
        tbl_Project_TD_5466_output.setInt32(i, 2, _return_ratio5001);
        tbl_Project_TD_5466_output.setInt32(i, 3, _return_rank5003);
        tbl_Project_TD_5466_output.setInt32(i, 4, _currency_rank5004);
    }
    tbl_Project_TD_5466_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5466_output #Row: " << tbl_Project_TD_5466_output.getNumRow() << std::endl;
}

void SW_Union_TD_4561(Table &tbl_Project_TD_5466_output, Table &tbl_Project_TD_5474_output, Table &tbl_Project_TD_5126_output, Table &tbl_Union_TD_4561_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(channel#5005, item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    int r = 0;
    int row0 = tbl_Project_TD_5466_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel5005_n = tbl_Union_TD_4561_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4561_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel5005_n);
        tbl_Union_TD_4561_output.setInt32(r, 1, tbl_Project_TD_5466_output.getInt32(i, 1));
        tbl_Union_TD_4561_output.setInt32(r, 2, tbl_Project_TD_5466_output.getInt32(i, 2));
        tbl_Union_TD_4561_output.setInt32(r, 3, tbl_Project_TD_5466_output.getInt32(i, 3));
        tbl_Union_TD_4561_output.setInt32(r, 4, tbl_Project_TD_5466_output.getInt32(i, 4));
        ++r;
    }
    int row1 = tbl_Project_TD_5474_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel5011_n = tbl_Union_TD_4561_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4561_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel5011_n);
        tbl_Union_TD_4561_output.setInt32(r, 1, tbl_Project_TD_5474_output.getInt32(i, 1));
        tbl_Union_TD_4561_output.setInt32(r, 2, tbl_Project_TD_5474_output.getInt32(i, 2));
        tbl_Union_TD_4561_output.setInt32(r, 3, tbl_Project_TD_5474_output.getInt32(i, 3));
        tbl_Union_TD_4561_output.setInt32(r, 4, tbl_Project_TD_5474_output.getInt32(i, 4));
        ++r;
    }
    int row2 = tbl_Project_TD_5126_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel5017_n = tbl_Union_TD_4561_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4561_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel5017_n);
        tbl_Union_TD_4561_output.setInt32(r, 1, tbl_Project_TD_5126_output.getInt32(i, 1));
        tbl_Union_TD_4561_output.setInt32(r, 2, tbl_Project_TD_5126_output.getInt32(i, 2));
        tbl_Union_TD_4561_output.setInt32(r, 3, tbl_Project_TD_5126_output.getInt32(i, 3));
        tbl_Union_TD_4561_output.setInt32(r, 4, tbl_Project_TD_5126_output.getInt32(i, 4));
        ++r;
    }
    tbl_Union_TD_4561_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4561_output #Row: " << tbl_Union_TD_4561_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3845_key {
    std::string _channel5005;
    int32_t _item5000;
    int32_t _return_ratio5001;
    int32_t _return_rank5003;
    int32_t _currency_rank5004;
    bool operator==(const SW_Aggregate_TD_3845_key& other) const { return (_channel5005 == other._channel5005) && (_item5000 == other._item5000) && (_return_ratio5001 == other._return_ratio5001) && (_return_rank5003 == other._return_rank5003) && (_currency_rank5004 == other._currency_rank5004); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3845_key> {
    std::size_t operator() (const SW_Aggregate_TD_3845_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel5005)) + (hash<int32_t>()(k._item5000)) + (hash<int32_t>()(k._return_ratio5001)) + (hash<int32_t>()(k._return_rank5003)) + (hash<int32_t>()(k._currency_rank5004));
    }
};
}
struct SW_Aggregate_TD_3845_payload {
};
void SW_Aggregate_TD_3845(Table &tbl_Union_TD_4561_output, Table &tbl_Aggregate_TD_3845_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#5005, item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    // Input: ListBuffer(channel#5005, item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    // Output: ListBuffer(channel#5005, item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    std::unordered_map<SW_Aggregate_TD_3845_key, SW_Aggregate_TD_3845_payload> ht1;
    int nrow1 = tbl_Union_TD_4561_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel5005 = tbl_Union_TD_4561_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _item5000 = tbl_Union_TD_4561_output.getInt32(i, 1);
        int32_t _return_ratio5001 = tbl_Union_TD_4561_output.getInt32(i, 2);
        int32_t _return_rank5003 = tbl_Union_TD_4561_output.getInt32(i, 3);
        int32_t _currency_rank5004 = tbl_Union_TD_4561_output.getInt32(i, 4);
        SW_Aggregate_TD_3845_key k{std::string(_channel5005.data()), _item5000, _return_ratio5001, _return_rank5003, _currency_rank5004};
        SW_Aggregate_TD_3845_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel5005{};
        memcpy(_channel5005.data(), ((it.first)._channel5005).data(), ((it.first)._channel5005).length());
        tbl_Aggregate_TD_3845_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel5005);
        tbl_Aggregate_TD_3845_output.setInt32(r, 1, (it.first)._item5000);
        tbl_Aggregate_TD_3845_output.setInt32(r, 2, (it.first)._return_ratio5001);
        tbl_Aggregate_TD_3845_output.setInt32(r, 3, (it.first)._return_rank5003);
        tbl_Aggregate_TD_3845_output.setInt32(r, 4, (it.first)._currency_rank5004);
        ++r;
    }
    tbl_Aggregate_TD_3845_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3845_output #Row: " << tbl_Aggregate_TD_3845_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2708(Table &tbl_Aggregate_TD_3845_output, Table &tbl_Sort_TD_2708_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#5005 ASC NULLS FIRST, return_rank#5003 ASC NULLS FIRST, currency_rank#5004 ASC NULLS FIRST)
    // Input: ListBuffer(channel#5005, item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    // Output: ListBuffer(channel#5005, item#5000, return_ratio#5001, return_rank#5003, currency_rank#5004)
    struct SW_Sort_TD_2708Row {
        std::string _channel5005;
        int32_t _item5000;
        int32_t _return_ratio5001;
        int32_t _return_rank5003;
        int32_t _currency_rank5004;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2708Row& a, const SW_Sort_TD_2708Row& b) const { return 
 (a._channel5005 < b._channel5005) || 
 ((a._channel5005 == b._channel5005) && (a._return_rank5003 < b._return_rank5003)) || 
 ((a._channel5005 == b._channel5005) && (a._return_rank5003 == b._return_rank5003) && (a._currency_rank5004 < b._currency_rank5004)); 
}
    }SW_Sort_TD_2708_order; 

    int nrow1 = tbl_Aggregate_TD_3845_output.getNumRow();
    std::vector<SW_Sort_TD_2708Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel5005 = tbl_Aggregate_TD_3845_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _item5000 = tbl_Aggregate_TD_3845_output.getInt32(i, 1);
        int32_t _return_ratio5001 = tbl_Aggregate_TD_3845_output.getInt32(i, 2);
        int32_t _return_rank5003 = tbl_Aggregate_TD_3845_output.getInt32(i, 3);
        int32_t _currency_rank5004 = tbl_Aggregate_TD_3845_output.getInt32(i, 4);
        SW_Sort_TD_2708Row t = {std::string(_channel5005.data()),_item5000,_return_ratio5001,_return_rank5003,_currency_rank5004};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2708_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel5005{};
        memcpy(_channel5005.data(), (it._channel5005).data(), (it._channel5005).length());
        tbl_Sort_TD_2708_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel5005);
        tbl_Sort_TD_2708_output.setInt32(r, 1, it._item5000);
        tbl_Sort_TD_2708_output.setInt32(r, 2, it._return_ratio5001);
        tbl_Sort_TD_2708_output.setInt32(r, 3, it._return_rank5003);
        tbl_Sort_TD_2708_output.setInt32(r, 4, it._currency_rank5004);
        ++r;
    }
    tbl_Sort_TD_2708_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2708_output #Row: " << tbl_Sort_TD_2708_output.getNumRow() << std::endl;
}

