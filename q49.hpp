#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_12507(Table &tbl_SerializeFromObject_TD_13613_input, Table &tbl_Filter_TD_12507_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(sr_return_amt#680) AND (sr_return_amt#680 > 10000.00)) AND (isnotnull(sr_ticket_number#678L) AND isnotnull(sr_item_sk#671))))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13613_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_return_amt680 = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 3);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_13613_input.getInt64(i, 1);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 0);
        if (((_sr_return_amt680!= 0) && (_sr_return_amt680 > 10000.00)) && ((_sr_ticket_number678L!= 0) && (_sr_item_sk671!= 0))) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 0);
            tbl_Filter_TD_12507_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_13613_input.getInt64(i, 1);
            tbl_Filter_TD_12507_output.setInt64(r, 1, _sr_ticket_number678L_t);
            int32_t _sr_return_quantity679_t = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 2);
            tbl_Filter_TD_12507_output.setInt32(r, 2, _sr_return_quantity679_t);
            int32_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 3);
            tbl_Filter_TD_12507_output.setInt32(r, 3, _sr_return_amt680_t);
            r++;
        }
    }
    tbl_Filter_TD_12507_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12507_output #Row: " << tbl_Filter_TD_12507_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1272(Table &tbl_SerializeFromObject_TD_13738_input, Table &tbl_Filter_TD_1272_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(ss_net_profit#1228) AND isnotnull(ss_net_paid#1226)) AND isnotnull(ss_quantity#1216)) AND (((ss_net_profit#1228 > 1.00) AND (ss_net_paid#1226 > 0.00)) AND (ss_quantity#1216 > 0))) AND ((isnotnull(ss_ticket_number#1215L) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_sold_date_sk#1206))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_net_paid#1226, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_net_paid#1226)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13738_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_profit1228 = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 5);
        int32_t _ss_net_paid1226 = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 4);
        int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 3);
        int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_13738_input.getInt64(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 0);
        if (((((_ss_net_profit1228!= 0) && (_ss_net_paid1226!= 0)) && (_ss_quantity1216!= 0)) && (((_ss_net_profit1228 > 1.00) && (_ss_net_paid1226 > 0.00)) && (_ss_quantity1216 > 0))) && (((_ss_ticket_number1215L!= 0) && (_ss_item_sk1208!= 0)) && (_ss_sold_date_sk1206!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 0);
            tbl_Filter_TD_1272_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 1);
            tbl_Filter_TD_1272_output.setInt32(r, 1, _ss_item_sk1208_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_13738_input.getInt64(i, 2);
            tbl_Filter_TD_1272_output.setInt64(r, 2, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 3);
            tbl_Filter_TD_1272_output.setInt32(r, 3, _ss_quantity1216_t);
            int32_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_13738_input.getInt32(i, 4);
            tbl_Filter_TD_1272_output.setInt32(r, 4, _ss_net_paid1226_t);
            r++;
        }
    }
    tbl_Filter_TD_1272_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1272_output #Row: " << tbl_Filter_TD_1272_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12657(Table &tbl_SerializeFromObject_TD_1370_input, Table &tbl_Filter_TD_12657_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cr_return_amount#1041) AND (cr_return_amount#1041 > 10000.00)) AND (isnotnull(cr_order_number#1039L) AND isnotnull(cr_item_sk#1025))))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1370_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_return_amount1041 = tbl_SerializeFromObject_TD_1370_input.getInt32(i, 3);
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_1370_input.getInt64(i, 1);
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_1370_input.getInt32(i, 0);
        if (((_cr_return_amount1041!= 0) && (_cr_return_amount1041 > 10000.00)) && ((_cr_order_number1039L!= 0) && (_cr_item_sk1025!= 0))) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_1370_input.getInt32(i, 0);
            tbl_Filter_TD_12657_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_1370_input.getInt64(i, 1);
            tbl_Filter_TD_12657_output.setInt64(r, 1, _cr_order_number1039L_t);
            int32_t _cr_return_quantity1040_t = tbl_SerializeFromObject_TD_1370_input.getInt32(i, 2);
            tbl_Filter_TD_12657_output.setInt32(r, 2, _cr_return_quantity1040_t);
            int32_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_1370_input.getInt32(i, 3);
            tbl_Filter_TD_12657_output.setInt32(r, 3, _cr_return_amount1041_t);
            r++;
        }
    }
    tbl_Filter_TD_12657_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12657_output #Row: " << tbl_Filter_TD_12657_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1271(Table &tbl_SerializeFromObject_TD_13961_input, Table &tbl_Filter_TD_1271_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(cs_net_profit#1137) AND isnotnull(cs_net_paid#1133)) AND isnotnull(cs_quantity#1122)) AND (((cs_net_profit#1137 > 1.00) AND (cs_net_paid#1133 > 0.00)) AND (cs_quantity#1122 > 0))) AND ((isnotnull(cs_order_number#1121L) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_sold_date_sk#1104))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_net_paid#1133, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_net_paid#1133)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13961_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_net_profit1137 = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 5);
        int32_t _cs_net_paid1133 = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 4);
        int32_t _cs_quantity1122 = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 3);
        int64_t _cs_order_number1121L = tbl_SerializeFromObject_TD_13961_input.getInt64(i, 2);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 0);
        if (((((_cs_net_profit1137!= 0) && (_cs_net_paid1133!= 0)) && (_cs_quantity1122!= 0)) && (((_cs_net_profit1137 > 1.00) && (_cs_net_paid1133 > 0.00)) && (_cs_quantity1122 > 0))) && (((_cs_order_number1121L!= 0) && (_cs_item_sk1119!= 0)) && (_cs_sold_date_sk1104!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 0);
            tbl_Filter_TD_1271_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 1);
            tbl_Filter_TD_1271_output.setInt32(r, 1, _cs_item_sk1119_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_13961_input.getInt64(i, 2);
            tbl_Filter_TD_1271_output.setInt64(r, 2, _cs_order_number1121L_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 3);
            tbl_Filter_TD_1271_output.setInt32(r, 3, _cs_quantity1122_t);
            int32_t _cs_net_paid1133_t = tbl_SerializeFromObject_TD_13961_input.getInt32(i, 4);
            tbl_Filter_TD_1271_output.setInt32(r, 4, _cs_net_paid1133_t);
            r++;
        }
    }
    tbl_Filter_TD_1271_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1271_output #Row: " << tbl_Filter_TD_1271_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12740(Table &tbl_SerializeFromObject_TD_13135_input, Table &tbl_Filter_TD_12740_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(wr_return_amt#846) AND (wr_return_amt#846 > 10000.00)) AND (isnotnull(wr_order_number#844L) AND isnotnull(wr_item_sk#833))))
    // Input: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    // Output: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13135_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_return_amt846 = tbl_SerializeFromObject_TD_13135_input.getInt32(i, 3);
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_13135_input.getInt64(i, 1);
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_13135_input.getInt32(i, 0);
        if (((_wr_return_amt846!= 0) && (_wr_return_amt846 > 10000.00)) && ((_wr_order_number844L!= 0) && (_wr_item_sk833!= 0))) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_13135_input.getInt32(i, 0);
            tbl_Filter_TD_12740_output.setInt32(r, 0, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_13135_input.getInt64(i, 1);
            tbl_Filter_TD_12740_output.setInt64(r, 1, _wr_order_number844L_t);
            int32_t _wr_return_quantity845_t = tbl_SerializeFromObject_TD_13135_input.getInt32(i, 2);
            tbl_Filter_TD_12740_output.setInt32(r, 2, _wr_return_quantity845_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_13135_input.getInt32(i, 3);
            tbl_Filter_TD_12740_output.setInt32(r, 3, _wr_return_amt846_t);
            r++;
        }
    }
    tbl_Filter_TD_12740_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12740_output #Row: " << tbl_Filter_TD_12740_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12142(Table &tbl_SerializeFromObject_TD_1344_input, Table &tbl_Filter_TD_12142_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(ws_net_profit#762) AND isnotnull(ws_net_paid#758)) AND isnotnull(ws_quantity#747)) AND (((ws_net_profit#762 > 1.00) AND (ws_net_paid#758 > 0.00)) AND (ws_quantity#747 > 0))) AND ((isnotnull(ws_order_number#746L) AND isnotnull(ws_item_sk#732)) AND isnotnull(ws_sold_date_sk#729))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_net_paid#758, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_net_paid#758)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1344_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_net_profit762 = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 5);
        int32_t _ws_net_paid758 = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 4);
        int32_t _ws_quantity747 = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 3);
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_1344_input.getInt64(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 0);
        if (((((_ws_net_profit762!= 0) && (_ws_net_paid758!= 0)) && (_ws_quantity747!= 0)) && (((_ws_net_profit762 > 1.00) && (_ws_net_paid758 > 0.00)) && (_ws_quantity747 > 0))) && (((_ws_order_number746L!= 0) && (_ws_item_sk732!= 0)) && (_ws_sold_date_sk729!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 0);
            tbl_Filter_TD_12142_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 1);
            tbl_Filter_TD_12142_output.setInt32(r, 1, _ws_item_sk732_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_1344_input.getInt64(i, 2);
            tbl_Filter_TD_12142_output.setInt64(r, 2, _ws_order_number746L_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 3);
            tbl_Filter_TD_12142_output.setInt32(r, 3, _ws_quantity747_t);
            int32_t _ws_net_paid758_t = tbl_SerializeFromObject_TD_1344_input.getInt32(i, 4);
            tbl_Filter_TD_12142_output.setInt32(r, 4, _ws_net_paid758_t);
            r++;
        }
    }
    tbl_Filter_TD_12142_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12142_output #Row: " << tbl_Filter_TD_12142_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11239(Table &tbl_SerializeFromObject_TD_12598_input, Table &tbl_Filter_TD_11239_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#6448) AND isnotnull(d_moy#6450)) AND ((d_year#6448 = 2001) AND (d_moy#6450 = 12))) AND isnotnull(d_date_sk#6442)))
    // Input: ListBuffer(d_date_sk#6442, d_year#6448, d_moy#6450)
    // Output: ListBuffer(d_date_sk#6442)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12598_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6448 = tbl_SerializeFromObject_TD_12598_input.getInt32(i, 1);
        int32_t _d_moy6450 = tbl_SerializeFromObject_TD_12598_input.getInt32(i, 2);
        int32_t _d_date_sk6442 = tbl_SerializeFromObject_TD_12598_input.getInt32(i, 0);
        if ((((_d_year6448!= 0) && (_d_moy6450!= 0)) && ((_d_year6448 == 2001) && (_d_moy6450 == 12))) && (_d_date_sk6442!= 0)) {
            int32_t _d_date_sk6442_t = tbl_SerializeFromObject_TD_12598_input.getInt32(i, 0);
            tbl_Filter_TD_11239_output.setInt32(r, 0, _d_date_sk6442_t);
            r++;
        }
    }
    tbl_Filter_TD_11239_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11239_output #Row: " << tbl_Filter_TD_11239_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11285_key_leftMajor {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_11285_key_leftMajor& other) const {
        return ((_ss_ticket_number1215L == other._ss_ticket_number1215L) && (_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11285_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11285_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ss_ticket_number1215L)) + (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_11285_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_quantity1216;
    int32_t _ss_net_paid1226;
};
struct SW_JOIN_INNER_TD_11285_key_rightMajor {
    int64_t _sr_ticket_number678L;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_INNER_TD_11285_key_rightMajor& other) const {
        return ((_sr_ticket_number678L == other._sr_ticket_number678L) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11285_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11285_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._sr_ticket_number678L)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_INNER_TD_11285_payload_rightMajor {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    int32_t _sr_return_quantity679;
    int32_t _sr_return_amt680;
};
void SW_JOIN_INNER_TD_11285(Table &tbl_Filter_TD_1272_output, Table &tbl_Filter_TD_12507_output, Table &tbl_JOIN_INNER_TD_11285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ss_ticket_number#1215L = sr_ticket_number#678L) AND (ss_item_sk#1208 = sr_item_sk#671)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_net_paid#1226)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    int left_nrow = tbl_Filter_TD_1272_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12507_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11285_key_leftMajor, SW_JOIN_INNER_TD_11285_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1272_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_1272_output.getInt64(i, 2);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_1272_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11285_key_leftMajor keyA{_ss_ticket_number1215L_k, _ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1272_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_1272_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_1272_output.getInt64(i, 2);
            int32_t _ss_quantity1216 = tbl_Filter_TD_1272_output.getInt32(i, 3);
            int32_t _ss_net_paid1226 = tbl_Filter_TD_1272_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11285_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_ticket_number1215L, _ss_quantity1216, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12507_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_12507_output.getInt64(i, 1);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_12507_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11285_key_leftMajor{_sr_ticket_number678L_k, _sr_item_sk671_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _sr_item_sk671 = tbl_Filter_TD_12507_output.getInt32(i, 0);
                int64_t _sr_ticket_number678L = tbl_Filter_TD_12507_output.getInt64(i, 1);
                int32_t _sr_return_quantity679 = tbl_Filter_TD_12507_output.getInt32(i, 2);
                int32_t _sr_return_amt680 = tbl_Filter_TD_12507_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 3, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 4, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 5, _sr_return_amt680);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11285_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11285_key_rightMajor, SW_JOIN_INNER_TD_11285_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12507_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_12507_output.getInt64(i, 1);
            int32_t _sr_item_sk671_k = tbl_Filter_TD_12507_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11285_key_rightMajor keyA{_sr_ticket_number678L_k, _sr_item_sk671_k};
            int32_t _sr_item_sk671 = tbl_Filter_TD_12507_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L = tbl_Filter_TD_12507_output.getInt64(i, 1);
            int32_t _sr_return_quantity679 = tbl_Filter_TD_12507_output.getInt32(i, 2);
            int32_t _sr_return_amt680 = tbl_Filter_TD_12507_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11285_payload_rightMajor payloadA{_sr_item_sk671, _sr_ticket_number678L, _sr_return_quantity679, _sr_return_amt680};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1272_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_1272_output.getInt64(i, 2);
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_1272_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11285_key_rightMajor{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it->second)._sr_ticket_number678L;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1272_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_1272_output.getInt32(i, 1);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_1272_output.getInt64(i, 2);
                int32_t _ss_quantity1216 = tbl_Filter_TD_1272_output.getInt32(i, 3);
                int32_t _ss_net_paid1226 = tbl_Filter_TD_1272_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 4, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 5, _sr_return_amt680);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_11285_output.setInt32(r, 3, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11285_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11285_output #Row: " << tbl_JOIN_INNER_TD_11285_output.getNumRow() << std::endl;
}

void SW_Filter_TD_116(Table &tbl_SerializeFromObject_TD_12178_input, Table &tbl_Filter_TD_116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#6420) AND isnotnull(d_moy#6422)) AND ((d_year#6420 = 2001) AND (d_moy#6422 = 12))) AND isnotnull(d_date_sk#6414)))
    // Input: ListBuffer(d_date_sk#6414, d_year#6420, d_moy#6422)
    // Output: ListBuffer(d_date_sk#6414)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12178_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6420 = tbl_SerializeFromObject_TD_12178_input.getInt32(i, 1);
        int32_t _d_moy6422 = tbl_SerializeFromObject_TD_12178_input.getInt32(i, 2);
        int32_t _d_date_sk6414 = tbl_SerializeFromObject_TD_12178_input.getInt32(i, 0);
        if ((((_d_year6420!= 0) && (_d_moy6422!= 0)) && ((_d_year6420 == 2001) && (_d_moy6422 == 12))) && (_d_date_sk6414!= 0)) {
            int32_t _d_date_sk6414_t = tbl_SerializeFromObject_TD_12178_input.getInt32(i, 0);
            tbl_Filter_TD_116_output.setInt32(r, 0, _d_date_sk6414_t);
            r++;
        }
    }
    tbl_Filter_TD_116_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_116_output #Row: " << tbl_Filter_TD_116_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11522_key_leftMajor {
    int64_t _cs_order_number1121L;
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_11522_key_leftMajor& other) const {
        return ((_cs_order_number1121L == other._cs_order_number1121L) && (_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11522_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11522_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cs_order_number1121L)) + (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_11522_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int64_t _cs_order_number1121L;
    int32_t _cs_quantity1122;
    int32_t _cs_net_paid1133;
};
struct SW_JOIN_INNER_TD_11522_key_rightMajor {
    int64_t _cr_order_number1039L;
    int32_t _cr_item_sk1025;
    bool operator==(const SW_JOIN_INNER_TD_11522_key_rightMajor& other) const {
        return ((_cr_order_number1039L == other._cr_order_number1039L) && (_cr_item_sk1025 == other._cr_item_sk1025));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11522_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11522_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cr_order_number1039L)) + (hash<int32_t>()(k._cr_item_sk1025));
    }
};
}
struct SW_JOIN_INNER_TD_11522_payload_rightMajor {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    int32_t _cr_return_quantity1040;
    int32_t _cr_return_amount1041;
};
void SW_JOIN_INNER_TD_11522(Table &tbl_Filter_TD_1271_output, Table &tbl_Filter_TD_12657_output, Table &tbl_JOIN_INNER_TD_11522_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cs_order_number#1121L = cr_order_number#1039L) AND (cs_item_sk#1119 = cr_item_sk#1025)))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_net_paid#1133)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    int left_nrow = tbl_Filter_TD_1271_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12657_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11522_key_leftMajor, SW_JOIN_INNER_TD_11522_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1271_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _cs_order_number1121L_k = tbl_Filter_TD_1271_output.getInt64(i, 2);
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_1271_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11522_key_leftMajor keyA{_cs_order_number1121L_k, _cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_1271_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_1271_output.getInt32(i, 1);
            int64_t _cs_order_number1121L = tbl_Filter_TD_1271_output.getInt64(i, 2);
            int32_t _cs_quantity1122 = tbl_Filter_TD_1271_output.getInt32(i, 3);
            int32_t _cs_net_paid1133 = tbl_Filter_TD_1271_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11522_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_order_number1121L, _cs_quantity1122, _cs_net_paid1133};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12657_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _cr_order_number1039L_k = tbl_Filter_TD_12657_output.getInt64(i, 1);
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_12657_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11522_key_leftMajor{_cr_order_number1039L_k, _cr_item_sk1025_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_net_paid1133 = (it->second)._cs_net_paid1133;
                int32_t _cr_item_sk1025 = tbl_Filter_TD_12657_output.getInt32(i, 0);
                int64_t _cr_order_number1039L = tbl_Filter_TD_12657_output.getInt64(i, 1);
                int32_t _cr_return_quantity1040 = tbl_Filter_TD_12657_output.getInt32(i, 2);
                int32_t _cr_return_amount1041 = tbl_Filter_TD_12657_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 3, _cs_net_paid1133);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 4, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 5, _cr_return_amount1041);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11522_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11522_key_rightMajor, SW_JOIN_INNER_TD_11522_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12657_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _cr_order_number1039L_k = tbl_Filter_TD_12657_output.getInt64(i, 1);
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_12657_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11522_key_rightMajor keyA{_cr_order_number1039L_k, _cr_item_sk1025_k};
            int32_t _cr_item_sk1025 = tbl_Filter_TD_12657_output.getInt32(i, 0);
            int64_t _cr_order_number1039L = tbl_Filter_TD_12657_output.getInt64(i, 1);
            int32_t _cr_return_quantity1040 = tbl_Filter_TD_12657_output.getInt32(i, 2);
            int32_t _cr_return_amount1041 = tbl_Filter_TD_12657_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11522_payload_rightMajor payloadA{_cr_item_sk1025, _cr_order_number1039L, _cr_return_quantity1040, _cr_return_amount1041};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1271_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _cs_order_number1121L_k = tbl_Filter_TD_1271_output.getInt64(i, 2);
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_1271_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11522_key_rightMajor{_cs_order_number1121L_k, _cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_item_sk1025 = (it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it->second)._cr_order_number1039L;
                int32_t _cr_return_quantity1040 = (it->second)._cr_return_quantity1040;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_1271_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_1271_output.getInt32(i, 1);
                int64_t _cs_order_number1121L = tbl_Filter_TD_1271_output.getInt64(i, 2);
                int32_t _cs_quantity1122 = tbl_Filter_TD_1271_output.getInt32(i, 3);
                int32_t _cs_net_paid1133 = tbl_Filter_TD_1271_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 4, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 5, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_11522_output.setInt32(r, 3, _cs_net_paid1133);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11522_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11522_output #Row: " << tbl_JOIN_INNER_TD_11522_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11522(Table &tbl_SerializeFromObject_TD_12588_input, Table &tbl_Filter_TD_11522_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 2001) AND (d_moy#128 = 12))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12588_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12588_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_12588_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12588_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 2001) && (_d_moy128 == 12))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12588_input.getInt32(i, 0);
            tbl_Filter_TD_11522_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11522_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11522_output #Row: " << tbl_Filter_TD_11522_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11771_key_leftMajor {
    int64_t _ws_order_number746L;
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_11771_key_leftMajor& other) const {
        return ((_ws_order_number746L == other._ws_order_number746L) && (_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11771_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11771_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number746L)) + (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_11771_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int64_t _ws_order_number746L;
    int32_t _ws_quantity747;
    int32_t _ws_net_paid758;
};
struct SW_JOIN_INNER_TD_11771_key_rightMajor {
    int64_t _wr_order_number844L;
    int32_t _wr_item_sk833;
    bool operator==(const SW_JOIN_INNER_TD_11771_key_rightMajor& other) const {
        return ((_wr_order_number844L == other._wr_order_number844L) && (_wr_item_sk833 == other._wr_item_sk833));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11771_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11771_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number844L)) + (hash<int32_t>()(k._wr_item_sk833));
    }
};
}
struct SW_JOIN_INNER_TD_11771_payload_rightMajor {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    int32_t _wr_return_quantity845;
    int32_t _wr_return_amt846;
};
void SW_JOIN_INNER_TD_11771(Table &tbl_Filter_TD_12142_output, Table &tbl_Filter_TD_12740_output, Table &tbl_JOIN_INNER_TD_11771_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ws_order_number#746L = wr_order_number#844L) AND (ws_item_sk#732 = wr_item_sk#833)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_net_paid#758)
    // Right Table: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    int left_nrow = tbl_Filter_TD_12142_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12740_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11771_key_leftMajor, SW_JOIN_INNER_TD_11771_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12142_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_12142_output.getInt64(i, 2);
            int32_t _ws_item_sk732_k = tbl_Filter_TD_12142_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11771_key_leftMajor keyA{_ws_order_number746L_k, _ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_12142_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_12142_output.getInt32(i, 1);
            int64_t _ws_order_number746L = tbl_Filter_TD_12142_output.getInt64(i, 2);
            int32_t _ws_quantity747 = tbl_Filter_TD_12142_output.getInt32(i, 3);
            int32_t _ws_net_paid758 = tbl_Filter_TD_12142_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11771_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_order_number746L, _ws_quantity747, _ws_net_paid758};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12740_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _wr_order_number844L_k = tbl_Filter_TD_12740_output.getInt64(i, 1);
            int32_t _wr_item_sk833_k = tbl_Filter_TD_12740_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11771_key_leftMajor{_wr_order_number844L_k, _wr_item_sk833_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_net_paid758 = (it->second)._ws_net_paid758;
                int32_t _wr_item_sk833 = tbl_Filter_TD_12740_output.getInt32(i, 0);
                int64_t _wr_order_number844L = tbl_Filter_TD_12740_output.getInt64(i, 1);
                int32_t _wr_return_quantity845 = tbl_Filter_TD_12740_output.getInt32(i, 2);
                int32_t _wr_return_amt846 = tbl_Filter_TD_12740_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 3, _ws_net_paid758);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 4, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 5, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11771_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11771_key_rightMajor, SW_JOIN_INNER_TD_11771_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12740_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _wr_order_number844L_k = tbl_Filter_TD_12740_output.getInt64(i, 1);
            int32_t _wr_item_sk833_k = tbl_Filter_TD_12740_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11771_key_rightMajor keyA{_wr_order_number844L_k, _wr_item_sk833_k};
            int32_t _wr_item_sk833 = tbl_Filter_TD_12740_output.getInt32(i, 0);
            int64_t _wr_order_number844L = tbl_Filter_TD_12740_output.getInt64(i, 1);
            int32_t _wr_return_quantity845 = tbl_Filter_TD_12740_output.getInt32(i, 2);
            int32_t _wr_return_amt846 = tbl_Filter_TD_12740_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11771_payload_rightMajor payloadA{_wr_item_sk833, _wr_order_number844L, _wr_return_quantity845, _wr_return_amt846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12142_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_12142_output.getInt64(i, 2);
            int32_t _ws_item_sk732_k = tbl_Filter_TD_12142_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11771_key_rightMajor{_ws_order_number746L_k, _ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_item_sk833 = (it->second)._wr_item_sk833;
                int64_t _wr_order_number844L = (it->second)._wr_order_number844L;
                int32_t _wr_return_quantity845 = (it->second)._wr_return_quantity845;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_12142_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_12142_output.getInt32(i, 1);
                int64_t _ws_order_number746L = tbl_Filter_TD_12142_output.getInt64(i, 2);
                int32_t _ws_quantity747 = tbl_Filter_TD_12142_output.getInt32(i, 3);
                int32_t _ws_net_paid758 = tbl_Filter_TD_12142_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 4, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 5, _wr_return_amt846);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_11771_output.setInt32(r, 3, _ws_net_paid758);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11771_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11771_output #Row: " << tbl_JOIN_INNER_TD_11771_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1072_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_1072_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1072_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1072_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_1072_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_quantity1216;
    int32_t _ss_net_paid1226;
    int32_t _sr_return_quantity679;
    int32_t _sr_return_amt680;
};
struct SW_JOIN_INNER_TD_1072_key_rightMajor {
    int32_t _d_date_sk6442;
    bool operator==(const SW_JOIN_INNER_TD_1072_key_rightMajor& other) const {
        return ((_d_date_sk6442 == other._d_date_sk6442));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1072_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1072_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6442));
    }
};
}
struct SW_JOIN_INNER_TD_1072_payload_rightMajor {
    int32_t _d_date_sk6442;
};
void SW_JOIN_INNER_TD_1072(Table &tbl_JOIN_INNER_TD_11285_output, Table &tbl_Filter_TD_11239_output, Table &tbl_JOIN_INNER_TD_1072_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#6442))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    // Right Table: ListBuffer(d_date_sk#6442)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    int left_nrow = tbl_JOIN_INNER_TD_11285_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11239_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1072_key_leftMajor, SW_JOIN_INNER_TD_1072_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11285_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1072_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 1);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 2);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 3);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 4);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_1072_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_quantity1216, _ss_net_paid1226, _sr_return_quantity679, _sr_return_amt680};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11239_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6442_k = tbl_Filter_TD_11239_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1072_key_leftMajor{_d_date_sk6442_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _d_date_sk6442 = tbl_Filter_TD_11239_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 2, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 3, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 4, _sr_return_amt680);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1072_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1072_key_rightMajor, SW_JOIN_INNER_TD_1072_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11239_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6442_k = tbl_Filter_TD_11239_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1072_key_rightMajor keyA{_d_date_sk6442_k};
            int32_t _d_date_sk6442 = tbl_Filter_TD_11239_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1072_payload_rightMajor payloadA{_d_date_sk6442};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11285_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1072_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6442 = (it->second)._d_date_sk6442;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 1);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 2);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 3);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 4);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_11285_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 1, _ss_quantity1216);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 2, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 3, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_1072_output.setInt32(r, 4, _sr_return_amt680);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1072_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1072_output #Row: " << tbl_JOIN_INNER_TD_1072_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10544_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_10544_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10544_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10544_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_10544_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int32_t _cs_quantity1122;
    int32_t _cs_net_paid1133;
    int32_t _cr_return_quantity1040;
    int32_t _cr_return_amount1041;
};
struct SW_JOIN_INNER_TD_10544_key_rightMajor {
    int32_t _d_date_sk6414;
    bool operator==(const SW_JOIN_INNER_TD_10544_key_rightMajor& other) const {
        return ((_d_date_sk6414 == other._d_date_sk6414));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10544_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10544_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6414));
    }
};
}
struct SW_JOIN_INNER_TD_10544_payload_rightMajor {
    int32_t _d_date_sk6414;
};
void SW_JOIN_INNER_TD_10544(Table &tbl_JOIN_INNER_TD_11522_output, Table &tbl_Filter_TD_116_output, Table &tbl_JOIN_INNER_TD_10544_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#6414))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    // Right Table: ListBuffer(d_date_sk#6414)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    int left_nrow = tbl_JOIN_INNER_TD_11522_output.getNumRow();
    int right_nrow = tbl_Filter_TD_116_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10544_key_leftMajor, SW_JOIN_INNER_TD_10544_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11522_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10544_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 2);
            int32_t _cs_net_paid1133 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 3);
            int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 4);
            int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_10544_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_quantity1122, _cs_net_paid1133, _cr_return_quantity1040, _cr_return_amount1041};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_116_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6414_k = tbl_Filter_TD_116_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10544_key_leftMajor{_d_date_sk6414_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_net_paid1133 = (it->second)._cs_net_paid1133;
                int32_t _cr_return_quantity1040 = (it->second)._cr_return_quantity1040;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _d_date_sk6414 = tbl_Filter_TD_116_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 2, _cs_net_paid1133);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 3, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 4, _cr_return_amount1041);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10544_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10544_key_rightMajor, SW_JOIN_INNER_TD_10544_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_116_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6414_k = tbl_Filter_TD_116_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10544_key_rightMajor keyA{_d_date_sk6414_k};
            int32_t _d_date_sk6414 = tbl_Filter_TD_116_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10544_payload_rightMajor payloadA{_d_date_sk6414};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11522_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10544_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6414 = (it->second)._d_date_sk6414;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 2);
                int32_t _cs_net_paid1133 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 3);
                int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 4);
                int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_11522_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 2, _cs_net_paid1133);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 3, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_10544_output.setInt32(r, 4, _cr_return_amount1041);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10544_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10544_output #Row: " << tbl_JOIN_INNER_TD_10544_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1061_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_1061_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1061_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1061_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_1061_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_quantity747;
    int32_t _ws_net_paid758;
    int32_t _wr_return_quantity845;
    int32_t _wr_return_amt846;
};
struct SW_JOIN_INNER_TD_1061_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_1061_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1061_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1061_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_1061_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_1061(Table &tbl_JOIN_INNER_TD_11771_output, Table &tbl_Filter_TD_11522_output, Table &tbl_JOIN_INNER_TD_1061_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    int left_nrow = tbl_JOIN_INNER_TD_11771_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11522_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1061_key_leftMajor, SW_JOIN_INNER_TD_1061_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11771_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1061_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 1);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 2);
            int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 3);
            int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 4);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_1061_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_quantity747, _ws_net_paid758, _wr_return_quantity845, _wr_return_amt846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11522_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11522_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1061_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_net_paid758 = (it->second)._ws_net_paid758;
                int32_t _wr_return_quantity845 = (it->second)._wr_return_quantity845;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _d_date_sk120 = tbl_Filter_TD_11522_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 2, _ws_net_paid758);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 3, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 4, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1061_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1061_key_rightMajor, SW_JOIN_INNER_TD_1061_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11522_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11522_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1061_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11522_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1061_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11771_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1061_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 1);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 2);
                int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 3);
                int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 4);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_11771_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 2, _ws_net_paid758);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 3, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_1061_output.setInt32(r, 4, _wr_return_amt846);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1061_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1061_output #Row: " << tbl_JOIN_INNER_TD_1061_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9342_key;
struct SW_Aggregate_TD_9342_payload {
    int32_t _item6408;
    int32_t _return_ratio6409_sum_0;
    int32_t _return_ratio6409_sum_1;
    int32_t _currency_ratio6410_sum_2;
    int32_t _currency_ratio6410_sum_3;
};
void SW_Aggregate_TD_9342(Table &tbl_JOIN_INNER_TD_1072_output, Table &tbl_Aggregate_TD_9342_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#1208, ss_item_sk#1208 AS item#6408, CheckOverflow((promote_precision(cast(sum(coalesce(sr_return_quantity#679, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(ss_quantity#1216, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#6409, CheckOverflow((promote_precision(cast(sum(coalesce(cast(sr_return_amt#680 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(ss_net_paid#1226 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#6410)
    // Input: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    // Output: ListBuffer(item#6408, return_ratio#6409, currency_ratio#6410)
    std::unordered_map<SW_Aggregate_TD_9342_key, SW_Aggregate_TD_9342_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_1072_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_1072_output.getInt32(i, 0);
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_1072_output.getInt32(i, 1);
        int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_1072_output.getInt32(i, 2);
        int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_1072_output.getInt32(i, 3);
        int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_1072_output.getInt32(i, 4);
        SW_Aggregate_TD_9342_key k = _ss_item_sk1208;
        int32_t _item6408 = _ss_item_sk1208;
        int64_t _return_ratio6409_sum_0 = _sr_return_quantity679;
        int64_t _return_ratio6409_sum_1 = _ss_quantity1216;
        int64_t _currency_ratio6410_sum_2 = _sr_return_amt680;
        int64_t _currency_ratio6410_sum_3 = _ss_net_paid1226;
        SW_Aggregate_TD_9342_payload p{_item6408, _return_ratio6409_sum_0, _return_ratio6409_sum_1, _currency_ratio6410_sum_2, _currency_ratio6410_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._return_ratio6409_sum_0 + _return_ratio6409_sum_0;
            p._return_ratio6409_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._return_ratio6409_sum_1 + _return_ratio6409_sum_1;
            p._return_ratio6409_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._currency_ratio6410_sum_2 + _currency_ratio6410_sum_2;
            p._currency_ratio6410_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._currency_ratio6410_sum_3 + _currency_ratio6410_sum_3;
            p._currency_ratio6410_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_item_sk1208 not required in the output table
        tbl_Aggregate_TD_9342_output.setInt32(r, 0, (it.second)._item6408);
        int32_t _return_ratio6409 = ((it.second)._return_ratio6409_sum_0 / (it.second)._return_ratio6409_sum_1);
        tbl_Aggregate_TD_9342_output.setInt32(r, 1, _return_ratio6409);
        int32_t _currency_ratio6410 = ((it.second)._currency_ratio6410_sum_2 / (it.second)._currency_ratio6410_sum_3);
        tbl_Aggregate_TD_9342_output.setInt32(r, 2, _currency_ratio6410);
        ++r;
    }
    tbl_Aggregate_TD_9342_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9342_output #Row: " << tbl_Aggregate_TD_9342_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9450_key;
struct SW_Aggregate_TD_9450_payload {
    int32_t _item6402;
    int32_t _return_ratio6403_sum_0;
    int32_t _return_ratio6403_sum_1;
    int32_t _currency_ratio6404_sum_2;
    int32_t _currency_ratio6404_sum_3;
};
void SW_Aggregate_TD_9450(Table &tbl_JOIN_INNER_TD_10544_output, Table &tbl_Aggregate_TD_9450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_item_sk#1119, cs_item_sk#1119 AS item#6402, CheckOverflow((promote_precision(cast(sum(coalesce(cr_return_quantity#1040, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cs_quantity#1122, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#6403, CheckOverflow((promote_precision(cast(sum(coalesce(cast(cr_return_amount#1041 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(cs_net_paid#1133 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#6404)
    // Input: ListBuffer(cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    // Output: ListBuffer(item#6402, return_ratio#6403, currency_ratio#6404)
    std::unordered_map<SW_Aggregate_TD_9450_key, SW_Aggregate_TD_9450_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10544_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10544_output.getInt32(i, 0);
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_10544_output.getInt32(i, 1);
        int32_t _cs_net_paid1133 = tbl_JOIN_INNER_TD_10544_output.getInt32(i, 2);
        int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_10544_output.getInt32(i, 3);
        int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_10544_output.getInt32(i, 4);
        SW_Aggregate_TD_9450_key k = _cs_item_sk1119;
        int32_t _item6402 = _cs_item_sk1119;
        int64_t _return_ratio6403_sum_0 = _cr_return_quantity1040;
        int64_t _return_ratio6403_sum_1 = _cs_quantity1122;
        int64_t _currency_ratio6404_sum_2 = _cr_return_amount1041;
        int64_t _currency_ratio6404_sum_3 = _cs_net_paid1133;
        SW_Aggregate_TD_9450_payload p{_item6402, _return_ratio6403_sum_0, _return_ratio6403_sum_1, _currency_ratio6404_sum_2, _currency_ratio6404_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._return_ratio6403_sum_0 + _return_ratio6403_sum_0;
            p._return_ratio6403_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._return_ratio6403_sum_1 + _return_ratio6403_sum_1;
            p._return_ratio6403_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._currency_ratio6404_sum_2 + _currency_ratio6404_sum_2;
            p._currency_ratio6404_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._currency_ratio6404_sum_3 + _currency_ratio6404_sum_3;
            p._currency_ratio6404_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cs_item_sk1119 not required in the output table
        tbl_Aggregate_TD_9450_output.setInt32(r, 0, (it.second)._item6402);
        int32_t _return_ratio6403 = ((it.second)._return_ratio6403_sum_0 / (it.second)._return_ratio6403_sum_1);
        tbl_Aggregate_TD_9450_output.setInt32(r, 1, _return_ratio6403);
        int32_t _currency_ratio6404 = ((it.second)._currency_ratio6404_sum_2 / (it.second)._currency_ratio6404_sum_3);
        tbl_Aggregate_TD_9450_output.setInt32(r, 2, _currency_ratio6404);
        ++r;
    }
    tbl_Aggregate_TD_9450_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9450_output #Row: " << tbl_Aggregate_TD_9450_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9683_key;
struct SW_Aggregate_TD_9683_payload {
    int32_t _item6396;
    int32_t _return_ratio6397_sum_0;
    int32_t _return_ratio6397_sum_1;
    int32_t _currency_ratio6398_sum_2;
    int32_t _currency_ratio6398_sum_3;
};
void SW_Aggregate_TD_9683(Table &tbl_JOIN_INNER_TD_1061_output, Table &tbl_Aggregate_TD_9683_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ws_item_sk#732, ws_item_sk#732 AS item#6396, CheckOverflow((promote_precision(cast(sum(coalesce(wr_return_quantity#845, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(ws_quantity#747, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#6397, CheckOverflow((promote_precision(cast(sum(coalesce(cast(wr_return_amt#846 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(ws_net_paid#758 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#6398)
    // Input: ListBuffer(ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    // Output: ListBuffer(item#6396, return_ratio#6397, currency_ratio#6398)
    std::unordered_map<SW_Aggregate_TD_9683_key, SW_Aggregate_TD_9683_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_1061_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_1061_output.getInt32(i, 0);
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_1061_output.getInt32(i, 1);
        int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_1061_output.getInt32(i, 2);
        int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_1061_output.getInt32(i, 3);
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_1061_output.getInt32(i, 4);
        SW_Aggregate_TD_9683_key k = _ws_item_sk732;
        int32_t _item6396 = _ws_item_sk732;
        int64_t _return_ratio6397_sum_0 = _wr_return_quantity845;
        int64_t _return_ratio6397_sum_1 = _ws_quantity747;
        int64_t _currency_ratio6398_sum_2 = _wr_return_amt846;
        int64_t _currency_ratio6398_sum_3 = _ws_net_paid758;
        SW_Aggregate_TD_9683_payload p{_item6396, _return_ratio6397_sum_0, _return_ratio6397_sum_1, _currency_ratio6398_sum_2, _currency_ratio6398_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._return_ratio6397_sum_0 + _return_ratio6397_sum_0;
            p._return_ratio6397_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._return_ratio6397_sum_1 + _return_ratio6397_sum_1;
            p._return_ratio6397_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._currency_ratio6398_sum_2 + _currency_ratio6398_sum_2;
            p._currency_ratio6398_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._currency_ratio6398_sum_3 + _currency_ratio6398_sum_3;
            p._currency_ratio6398_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ws_item_sk732 not required in the output table
        tbl_Aggregate_TD_9683_output.setInt32(r, 0, (it.second)._item6396);
        int32_t _return_ratio6397 = ((it.second)._return_ratio6397_sum_0 / (it.second)._return_ratio6397_sum_1);
        tbl_Aggregate_TD_9683_output.setInt32(r, 1, _return_ratio6397);
        int32_t _currency_ratio6398 = ((it.second)._currency_ratio6398_sum_2 / (it.second)._currency_ratio6398_sum_3);
        tbl_Aggregate_TD_9683_output.setInt32(r, 2, _currency_ratio6398);
        ++r;
    }
    tbl_Aggregate_TD_9683_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9683_output #Row: " << tbl_Aggregate_TD_9683_output.getNumRow() << std::endl;
}

void SW_Window_TD_856(Table &tbl_Aggregate_TD_9342_output, Table &tbl_Window_TD_856_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#6409) windowspecdefinition(return_ratio#6409 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#6411)
    // Input: ListBuffer(item#6408, return_ratio#6409, currency_ratio#6410)
    // Output: ListBuffer(item#6408, return_ratio#6409, currency_ratio#6410, return_rank#6411)
    struct SW_Window_TD_856Row {
        int32_t _item6408;
        int32_t _return_ratio6409;
        int32_t _currency_ratio6410;
    }; 

    int nrow = tbl_Aggregate_TD_9342_output.getNumRow();
    std::vector<SW_Window_TD_856Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item6408 = tbl_Aggregate_TD_9342_output.getInt32(i, 0);
        tbl_Window_TD_856_output.setInt32(r, 0,_item6408);
        int32_t _return_ratio6409 = tbl_Aggregate_TD_9342_output.getInt32(i, 1);
        tbl_Window_TD_856_output.setInt32(r, 1,_return_ratio6409);
        int32_t _currency_ratio6410 = tbl_Aggregate_TD_9342_output.getInt32(i, 2);
        tbl_Window_TD_856_output.setInt32(r, 2,_currency_ratio6410);
        r++;
        SW_Window_TD_856Row t = {_item6408,_return_ratio6409,_currency_ratio6410};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_856Row& a, const SW_Window_TD_856Row& b) const { return 
(a._return_ratio6409 < b._return_ratio6409); 
}
    }SW_Window_TD_856_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_856_order0);
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
        isSameOrderKey0 = ( rows0[i]._return_ratio6409 == rows0[i-1]._return_ratio6409);
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
        tbl_Window_TD_856_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_856_output.setNumRow(r);
    std::cout << "tbl_Window_TD_856_output #Row: " << tbl_Window_TD_856_output.getNumRow() << std::endl;
}

void SW_Window_TD_8261(Table &tbl_Aggregate_TD_9450_output, Table &tbl_Window_TD_8261_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#6403) windowspecdefinition(return_ratio#6403 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#6405)
    // Input: ListBuffer(item#6402, return_ratio#6403, currency_ratio#6404)
    // Output: ListBuffer(item#6402, return_ratio#6403, currency_ratio#6404, return_rank#6405)
    struct SW_Window_TD_8261Row {
        int32_t _item6402;
        int32_t _return_ratio6403;
        int32_t _currency_ratio6404;
    }; 

    int nrow = tbl_Aggregate_TD_9450_output.getNumRow();
    std::vector<SW_Window_TD_8261Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item6402 = tbl_Aggregate_TD_9450_output.getInt32(i, 0);
        tbl_Window_TD_8261_output.setInt32(r, 0,_item6402);
        int32_t _return_ratio6403 = tbl_Aggregate_TD_9450_output.getInt32(i, 1);
        tbl_Window_TD_8261_output.setInt32(r, 1,_return_ratio6403);
        int32_t _currency_ratio6404 = tbl_Aggregate_TD_9450_output.getInt32(i, 2);
        tbl_Window_TD_8261_output.setInt32(r, 2,_currency_ratio6404);
        r++;
        SW_Window_TD_8261Row t = {_item6402,_return_ratio6403,_currency_ratio6404};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8261Row& a, const SW_Window_TD_8261Row& b) const { return 
(a._return_ratio6403 < b._return_ratio6403); 
}
    }SW_Window_TD_8261_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8261_order0);
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
        isSameOrderKey0 = ( rows0[i]._return_ratio6403 == rows0[i-1]._return_ratio6403);
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
        tbl_Window_TD_8261_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_8261_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8261_output #Row: " << tbl_Window_TD_8261_output.getNumRow() << std::endl;
}

void SW_Window_TD_8212(Table &tbl_Aggregate_TD_9683_output, Table &tbl_Window_TD_8212_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#6397) windowspecdefinition(return_ratio#6397 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#6399)
    // Input: ListBuffer(item#6396, return_ratio#6397, currency_ratio#6398)
    // Output: ListBuffer(item#6396, return_ratio#6397, currency_ratio#6398, return_rank#6399)
    struct SW_Window_TD_8212Row {
        int32_t _item6396;
        int32_t _return_ratio6397;
        int32_t _currency_ratio6398;
    }; 

    int nrow = tbl_Aggregate_TD_9683_output.getNumRow();
    std::vector<SW_Window_TD_8212Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item6396 = tbl_Aggregate_TD_9683_output.getInt32(i, 0);
        tbl_Window_TD_8212_output.setInt32(r, 0,_item6396);
        int32_t _return_ratio6397 = tbl_Aggregate_TD_9683_output.getInt32(i, 1);
        tbl_Window_TD_8212_output.setInt32(r, 1,_return_ratio6397);
        int32_t _currency_ratio6398 = tbl_Aggregate_TD_9683_output.getInt32(i, 2);
        tbl_Window_TD_8212_output.setInt32(r, 2,_currency_ratio6398);
        r++;
        SW_Window_TD_8212Row t = {_item6396,_return_ratio6397,_currency_ratio6398};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8212Row& a, const SW_Window_TD_8212Row& b) const { return 
(a._return_ratio6397 < b._return_ratio6397); 
}
    }SW_Window_TD_8212_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8212_order0);
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
        isSameOrderKey0 = ( rows0[i]._return_ratio6397 == rows0[i-1]._return_ratio6397);
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
        tbl_Window_TD_8212_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_8212_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8212_output #Row: " << tbl_Window_TD_8212_output.getNumRow() << std::endl;
}

void SW_Window_TD_7648(Table &tbl_Window_TD_856_output, Table &tbl_Window_TD_7648_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#6410) windowspecdefinition(currency_ratio#6410 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#6412)
    // Input: ListBuffer(item#6408, return_ratio#6409, currency_ratio#6410, return_rank#6411)
    // Output: ListBuffer(item#6408, return_ratio#6409, currency_ratio#6410, return_rank#6411, currency_rank#6412)
    struct SW_Window_TD_7648Row {
        int32_t _item6408;
        int32_t _return_ratio6409;
        int32_t _currency_ratio6410;
        int32_t _return_rank6411;
    }; 

    int nrow = tbl_Window_TD_856_output.getNumRow();
    std::vector<SW_Window_TD_7648Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item6408 = tbl_Window_TD_856_output.getInt32(i, 0);
        tbl_Window_TD_7648_output.setInt32(r, 0,_item6408);
        int32_t _return_ratio6409 = tbl_Window_TD_856_output.getInt32(i, 1);
        tbl_Window_TD_7648_output.setInt32(r, 1,_return_ratio6409);
        int32_t _currency_ratio6410 = tbl_Window_TD_856_output.getInt32(i, 2);
        tbl_Window_TD_7648_output.setInt32(r, 2,_currency_ratio6410);
        int32_t _return_rank6411 = tbl_Window_TD_856_output.getInt32(i, 3);
        tbl_Window_TD_7648_output.setInt32(r, 3,_return_rank6411);
        r++;
        SW_Window_TD_7648Row t = {_item6408,_return_ratio6409,_currency_ratio6410,_return_rank6411};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7648Row& a, const SW_Window_TD_7648Row& b) const { return 
(a._currency_ratio6410 < b._currency_ratio6410); 
}
    }SW_Window_TD_7648_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7648_order0);
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
        isSameOrderKey0 = ( rows0[i]._currency_ratio6410 == rows0[i-1]._currency_ratio6410);
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
        tbl_Window_TD_7648_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_7648_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7648_output #Row: " << tbl_Window_TD_7648_output.getNumRow() << std::endl;
}

void SW_Window_TD_7154(Table &tbl_Window_TD_8261_output, Table &tbl_Window_TD_7154_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#6404) windowspecdefinition(currency_ratio#6404 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#6406)
    // Input: ListBuffer(item#6402, return_ratio#6403, currency_ratio#6404, return_rank#6405)
    // Output: ListBuffer(item#6402, return_ratio#6403, currency_ratio#6404, return_rank#6405, currency_rank#6406)
    struct SW_Window_TD_7154Row {
        int32_t _item6402;
        int32_t _return_ratio6403;
        int32_t _currency_ratio6404;
        int32_t _return_rank6405;
    }; 

    int nrow = tbl_Window_TD_8261_output.getNumRow();
    std::vector<SW_Window_TD_7154Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item6402 = tbl_Window_TD_8261_output.getInt32(i, 0);
        tbl_Window_TD_7154_output.setInt32(r, 0,_item6402);
        int32_t _return_ratio6403 = tbl_Window_TD_8261_output.getInt32(i, 1);
        tbl_Window_TD_7154_output.setInt32(r, 1,_return_ratio6403);
        int32_t _currency_ratio6404 = tbl_Window_TD_8261_output.getInt32(i, 2);
        tbl_Window_TD_7154_output.setInt32(r, 2,_currency_ratio6404);
        int32_t _return_rank6405 = tbl_Window_TD_8261_output.getInt32(i, 3);
        tbl_Window_TD_7154_output.setInt32(r, 3,_return_rank6405);
        r++;
        SW_Window_TD_7154Row t = {_item6402,_return_ratio6403,_currency_ratio6404,_return_rank6405};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7154Row& a, const SW_Window_TD_7154Row& b) const { return 
(a._currency_ratio6404 < b._currency_ratio6404); 
}
    }SW_Window_TD_7154_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7154_order0);
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
        isSameOrderKey0 = ( rows0[i]._currency_ratio6404 == rows0[i-1]._currency_ratio6404);
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
        tbl_Window_TD_7154_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_7154_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7154_output #Row: " << tbl_Window_TD_7154_output.getNumRow() << std::endl;
}

void SW_Window_TD_766(Table &tbl_Window_TD_8212_output, Table &tbl_Window_TD_766_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#6398) windowspecdefinition(currency_ratio#6398 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#6400)
    // Input: ListBuffer(item#6396, return_ratio#6397, currency_ratio#6398, return_rank#6399)
    // Output: ListBuffer(item#6396, return_ratio#6397, currency_ratio#6398, return_rank#6399, currency_rank#6400)
    struct SW_Window_TD_766Row {
        int32_t _item6396;
        int32_t _return_ratio6397;
        int32_t _currency_ratio6398;
        int32_t _return_rank6399;
    }; 

    int nrow = tbl_Window_TD_8212_output.getNumRow();
    std::vector<SW_Window_TD_766Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item6396 = tbl_Window_TD_8212_output.getInt32(i, 0);
        tbl_Window_TD_766_output.setInt32(r, 0,_item6396);
        int32_t _return_ratio6397 = tbl_Window_TD_8212_output.getInt32(i, 1);
        tbl_Window_TD_766_output.setInt32(r, 1,_return_ratio6397);
        int32_t _currency_ratio6398 = tbl_Window_TD_8212_output.getInt32(i, 2);
        tbl_Window_TD_766_output.setInt32(r, 2,_currency_ratio6398);
        int32_t _return_rank6399 = tbl_Window_TD_8212_output.getInt32(i, 3);
        tbl_Window_TD_766_output.setInt32(r, 3,_return_rank6399);
        r++;
        SW_Window_TD_766Row t = {_item6396,_return_ratio6397,_currency_ratio6398,_return_rank6399};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_766Row& a, const SW_Window_TD_766Row& b) const { return 
(a._currency_ratio6398 < b._currency_ratio6398); 
}
    }SW_Window_TD_766_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_766_order0);
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
        isSameOrderKey0 = ( rows0[i]._currency_ratio6398 == rows0[i-1]._currency_ratio6398);
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
        tbl_Window_TD_766_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_766_output.setNumRow(r);
    std::cout << "tbl_Window_TD_766_output #Row: " << tbl_Window_TD_766_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6245(Table &tbl_Window_TD_7648_output, Table &tbl_Filter_TD_6245_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#6411 <= 10) OR (currency_rank#6412 <= 10)))
    // Input: ListBuffer(item#6408, return_ratio#6409, currency_ratio#6410, return_rank#6411, currency_rank#6412)
    // Output: ListBuffer(item#6408, return_ratio#6409, return_rank#6411, currency_rank#6412)
    int r = 0;
    int nrow1 = tbl_Window_TD_7648_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank6411 = tbl_Window_TD_7648_output.getInt32(i, 3);
        int32_t _currency_rank6412 = tbl_Window_TD_7648_output.getInt32(i, 4);
        if ((_return_rank6411 <= 10) || (_currency_rank6412 <= 10)) {
            int32_t _item6408_t = tbl_Window_TD_7648_output.getInt32(i, 0);
            tbl_Filter_TD_6245_output.setInt32(r, 0, _item6408_t);
            int32_t _return_ratio6409_t = tbl_Window_TD_7648_output.getInt32(i, 1);
            tbl_Filter_TD_6245_output.setInt32(r, 1, _return_ratio6409_t);
            int32_t _return_rank6411_t = tbl_Window_TD_7648_output.getInt32(i, 3);
            tbl_Filter_TD_6245_output.setInt32(r, 2, _return_rank6411_t);
            int32_t _currency_rank6412_t = tbl_Window_TD_7648_output.getInt32(i, 4);
            tbl_Filter_TD_6245_output.setInt32(r, 3, _currency_rank6412_t);
            r++;
        }
    }
    tbl_Filter_TD_6245_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6245_output #Row: " << tbl_Filter_TD_6245_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6417(Table &tbl_Window_TD_7154_output, Table &tbl_Filter_TD_6417_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#6405 <= 10) OR (currency_rank#6406 <= 10)))
    // Input: ListBuffer(item#6402, return_ratio#6403, currency_ratio#6404, return_rank#6405, currency_rank#6406)
    // Output: ListBuffer(item#6402, return_ratio#6403, return_rank#6405, currency_rank#6406)
    int r = 0;
    int nrow1 = tbl_Window_TD_7154_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank6405 = tbl_Window_TD_7154_output.getInt32(i, 3);
        int32_t _currency_rank6406 = tbl_Window_TD_7154_output.getInt32(i, 4);
        if ((_return_rank6405 <= 10) || (_currency_rank6406 <= 10)) {
            int32_t _item6402_t = tbl_Window_TD_7154_output.getInt32(i, 0);
            tbl_Filter_TD_6417_output.setInt32(r, 0, _item6402_t);
            int32_t _return_ratio6403_t = tbl_Window_TD_7154_output.getInt32(i, 1);
            tbl_Filter_TD_6417_output.setInt32(r, 1, _return_ratio6403_t);
            int32_t _return_rank6405_t = tbl_Window_TD_7154_output.getInt32(i, 3);
            tbl_Filter_TD_6417_output.setInt32(r, 2, _return_rank6405_t);
            int32_t _currency_rank6406_t = tbl_Window_TD_7154_output.getInt32(i, 4);
            tbl_Filter_TD_6417_output.setInt32(r, 3, _currency_rank6406_t);
            r++;
        }
    }
    tbl_Filter_TD_6417_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6417_output #Row: " << tbl_Filter_TD_6417_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6462(Table &tbl_Window_TD_766_output, Table &tbl_Filter_TD_6462_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#6399 <= 10) OR (currency_rank#6400 <= 10)))
    // Input: ListBuffer(item#6396, return_ratio#6397, currency_ratio#6398, return_rank#6399, currency_rank#6400)
    // Output: ListBuffer(item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    int r = 0;
    int nrow1 = tbl_Window_TD_766_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank6399 = tbl_Window_TD_766_output.getInt32(i, 3);
        int32_t _currency_rank6400 = tbl_Window_TD_766_output.getInt32(i, 4);
        if ((_return_rank6399 <= 10) || (_currency_rank6400 <= 10)) {
            int32_t _item6396_t = tbl_Window_TD_766_output.getInt32(i, 0);
            tbl_Filter_TD_6462_output.setInt32(r, 0, _item6396_t);
            int32_t _return_ratio6397_t = tbl_Window_TD_766_output.getInt32(i, 1);
            tbl_Filter_TD_6462_output.setInt32(r, 1, _return_ratio6397_t);
            int32_t _return_rank6399_t = tbl_Window_TD_766_output.getInt32(i, 3);
            tbl_Filter_TD_6462_output.setInt32(r, 2, _return_rank6399_t);
            int32_t _currency_rank6400_t = tbl_Window_TD_766_output.getInt32(i, 4);
            tbl_Filter_TD_6462_output.setInt32(r, 3, _currency_rank6400_t);
            r++;
        }
    }
    tbl_Filter_TD_6462_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6462_output #Row: " << tbl_Filter_TD_6462_output.getNumRow() << std::endl;
}

void SW_Project_TD_5759(Table &tbl_Filter_TD_6245_output, Table &tbl_Project_TD_5759_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(store AS channel#6413)
    // Input: ListBuffer(item#6408, return_ratio#6409, return_rank#6411, currency_rank#6412)
    // Output: ListBuffer(channel#6413, item#6408, return_ratio#6409, return_rank#6411, currency_rank#6412)
    int nrow1 = tbl_Filter_TD_6245_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item6408 = tbl_Filter_TD_6245_output.getInt32(i, 0);
        int32_t _return_ratio6409 = tbl_Filter_TD_6245_output.getInt32(i, 1);
        int32_t _return_rank6411 = tbl_Filter_TD_6245_output.getInt32(i, 2);
        int32_t _currency_rank6412 = tbl_Filter_TD_6245_output.getInt32(i, 3);
        std::string _channel6413_str = "store";
        std::array<char, TPCDS_READ_MAX + 1> _channel6413{};
        memcpy(_channel6413.data(), _channel6413_str.data(), (_channel6413_str).length());
        tbl_Project_TD_5759_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel6413);
        tbl_Project_TD_5759_output.setInt32(i, 1, _item6408);
        tbl_Project_TD_5759_output.setInt32(i, 2, _return_ratio6409);
        tbl_Project_TD_5759_output.setInt32(i, 3, _return_rank6411);
        tbl_Project_TD_5759_output.setInt32(i, 4, _currency_rank6412);
    }
    tbl_Project_TD_5759_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5759_output #Row: " << tbl_Project_TD_5759_output.getNumRow() << std::endl;
}

void SW_Project_TD_5732(Table &tbl_Filter_TD_6417_output, Table &tbl_Project_TD_5732_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(catalog AS channel#6407)
    // Input: ListBuffer(item#6402, return_ratio#6403, return_rank#6405, currency_rank#6406)
    // Output: ListBuffer(channel#6407, item#6402, return_ratio#6403, return_rank#6405, currency_rank#6406)
    int nrow1 = tbl_Filter_TD_6417_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item6402 = tbl_Filter_TD_6417_output.getInt32(i, 0);
        int32_t _return_ratio6403 = tbl_Filter_TD_6417_output.getInt32(i, 1);
        int32_t _return_rank6405 = tbl_Filter_TD_6417_output.getInt32(i, 2);
        int32_t _currency_rank6406 = tbl_Filter_TD_6417_output.getInt32(i, 3);
        std::string _channel6407_str = "catalog";
        std::array<char, TPCDS_READ_MAX + 1> _channel6407{};
        memcpy(_channel6407.data(), _channel6407_str.data(), (_channel6407_str).length());
        tbl_Project_TD_5732_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel6407);
        tbl_Project_TD_5732_output.setInt32(i, 1, _item6402);
        tbl_Project_TD_5732_output.setInt32(i, 2, _return_ratio6403);
        tbl_Project_TD_5732_output.setInt32(i, 3, _return_rank6405);
        tbl_Project_TD_5732_output.setInt32(i, 4, _currency_rank6406);
    }
    tbl_Project_TD_5732_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5732_output #Row: " << tbl_Project_TD_5732_output.getNumRow() << std::endl;
}

void SW_Project_TD_5159(Table &tbl_Filter_TD_6462_output, Table &tbl_Project_TD_5159_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(web AS channel#6401)
    // Input: ListBuffer(item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    // Output: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    int nrow1 = tbl_Filter_TD_6462_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item6396 = tbl_Filter_TD_6462_output.getInt32(i, 0);
        int32_t _return_ratio6397 = tbl_Filter_TD_6462_output.getInt32(i, 1);
        int32_t _return_rank6399 = tbl_Filter_TD_6462_output.getInt32(i, 2);
        int32_t _currency_rank6400 = tbl_Filter_TD_6462_output.getInt32(i, 3);
        std::string _channel6401_str = "web";
        std::array<char, TPCDS_READ_MAX + 1> _channel6401{};
        memcpy(_channel6401.data(), _channel6401_str.data(), (_channel6401_str).length());
        tbl_Project_TD_5159_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel6401);
        tbl_Project_TD_5159_output.setInt32(i, 1, _item6396);
        tbl_Project_TD_5159_output.setInt32(i, 2, _return_ratio6397);
        tbl_Project_TD_5159_output.setInt32(i, 3, _return_rank6399);
        tbl_Project_TD_5159_output.setInt32(i, 4, _currency_rank6400);
    }
    tbl_Project_TD_5159_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5159_output #Row: " << tbl_Project_TD_5159_output.getNumRow() << std::endl;
}

void SW_Union_TD_4454(Table &tbl_Project_TD_5159_output, Table &tbl_Project_TD_5732_output, Table &tbl_Project_TD_5759_output, Table &tbl_Union_TD_4454_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    int r = 0;
    int row0 = tbl_Project_TD_5159_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6401_n = tbl_Union_TD_4454_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4454_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6401_n);
        tbl_Union_TD_4454_output.setInt32(r, 1, tbl_Project_TD_5159_output.getInt32(i, 1));
        tbl_Union_TD_4454_output.setInt32(r, 2, tbl_Project_TD_5159_output.getInt32(i, 2));
        tbl_Union_TD_4454_output.setInt32(r, 3, tbl_Project_TD_5159_output.getInt32(i, 3));
        tbl_Union_TD_4454_output.setInt32(r, 4, tbl_Project_TD_5159_output.getInt32(i, 4));
        ++r;
    }
    int row1 = tbl_Project_TD_5732_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6407_n = tbl_Union_TD_4454_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4454_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6407_n);
        tbl_Union_TD_4454_output.setInt32(r, 1, tbl_Project_TD_5732_output.getInt32(i, 1));
        tbl_Union_TD_4454_output.setInt32(r, 2, tbl_Project_TD_5732_output.getInt32(i, 2));
        tbl_Union_TD_4454_output.setInt32(r, 3, tbl_Project_TD_5732_output.getInt32(i, 3));
        tbl_Union_TD_4454_output.setInt32(r, 4, tbl_Project_TD_5732_output.getInt32(i, 4));
        ++r;
    }
    int row2 = tbl_Project_TD_5759_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6413_n = tbl_Union_TD_4454_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4454_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6413_n);
        tbl_Union_TD_4454_output.setInt32(r, 1, tbl_Project_TD_5759_output.getInt32(i, 1));
        tbl_Union_TD_4454_output.setInt32(r, 2, tbl_Project_TD_5759_output.getInt32(i, 2));
        tbl_Union_TD_4454_output.setInt32(r, 3, tbl_Project_TD_5759_output.getInt32(i, 3));
        tbl_Union_TD_4454_output.setInt32(r, 4, tbl_Project_TD_5759_output.getInt32(i, 4));
        ++r;
    }
    tbl_Union_TD_4454_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4454_output #Row: " << tbl_Union_TD_4454_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_341_key {
    std::string _channel6401;
    int32_t _item6396;
    int32_t _return_ratio6397;
    int32_t _return_rank6399;
    int32_t _currency_rank6400;
    bool operator==(const SW_Aggregate_TD_341_key& other) const { return (_channel6401 == other._channel6401) && (_item6396 == other._item6396) && (_return_ratio6397 == other._return_ratio6397) && (_return_rank6399 == other._return_rank6399) && (_currency_rank6400 == other._currency_rank6400); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_341_key> {
    std::size_t operator() (const SW_Aggregate_TD_341_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel6401)) + (hash<int32_t>()(k._item6396)) + (hash<int32_t>()(k._return_ratio6397)) + (hash<int32_t>()(k._return_rank6399)) + (hash<int32_t>()(k._currency_rank6400));
    }
};
}
struct SW_Aggregate_TD_341_payload {
};
void SW_Aggregate_TD_341(Table &tbl_Union_TD_4454_output, Table &tbl_Aggregate_TD_341_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    // Input: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    // Output: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    std::unordered_map<SW_Aggregate_TD_341_key, SW_Aggregate_TD_341_payload> ht1;
    int nrow1 = tbl_Union_TD_4454_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6401 = tbl_Union_TD_4454_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _item6396 = tbl_Union_TD_4454_output.getInt32(i, 1);
        int32_t _return_ratio6397 = tbl_Union_TD_4454_output.getInt32(i, 2);
        int32_t _return_rank6399 = tbl_Union_TD_4454_output.getInt32(i, 3);
        int32_t _currency_rank6400 = tbl_Union_TD_4454_output.getInt32(i, 4);
        SW_Aggregate_TD_341_key k{std::string(_channel6401.data()), _item6396, _return_ratio6397, _return_rank6399, _currency_rank6400};
        SW_Aggregate_TD_341_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6401{};
        memcpy(_channel6401.data(), ((it.first)._channel6401).data(), ((it.first)._channel6401).length());
        tbl_Aggregate_TD_341_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6401);
        tbl_Aggregate_TD_341_output.setInt32(r, 1, (it.first)._item6396);
        tbl_Aggregate_TD_341_output.setInt32(r, 2, (it.first)._return_ratio6397);
        tbl_Aggregate_TD_341_output.setInt32(r, 3, (it.first)._return_rank6399);
        tbl_Aggregate_TD_341_output.setInt32(r, 4, (it.first)._currency_rank6400);
        ++r;
    }
    tbl_Aggregate_TD_341_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_341_output #Row: " << tbl_Aggregate_TD_341_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2398(Table &tbl_Aggregate_TD_341_output, Table &tbl_Sort_TD_2398_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#6401 ASC NULLS FIRST, return_rank#6399 ASC NULLS FIRST, currency_rank#6400 ASC NULLS FIRST)
    // Input: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    // Output: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    struct SW_Sort_TD_2398Row {
        std::string _channel6401;
        int32_t _item6396;
        int32_t _return_ratio6397;
        int32_t _return_rank6399;
        int32_t _currency_rank6400;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2398Row& a, const SW_Sort_TD_2398Row& b) const { return 
 (a._channel6401 < b._channel6401) || 
 ((a._channel6401 == b._channel6401) && (a._return_rank6399 < b._return_rank6399)) || 
 ((a._channel6401 == b._channel6401) && (a._return_rank6399 == b._return_rank6399) && (a._currency_rank6400 < b._currency_rank6400)); 
}
    }SW_Sort_TD_2398_order; 

    int nrow1 = tbl_Aggregate_TD_341_output.getNumRow();
    std::vector<SW_Sort_TD_2398Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6401 = tbl_Aggregate_TD_341_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _item6396 = tbl_Aggregate_TD_341_output.getInt32(i, 1);
        int32_t _return_ratio6397 = tbl_Aggregate_TD_341_output.getInt32(i, 2);
        int32_t _return_rank6399 = tbl_Aggregate_TD_341_output.getInt32(i, 3);
        int32_t _currency_rank6400 = tbl_Aggregate_TD_341_output.getInt32(i, 4);
        SW_Sort_TD_2398Row t = {std::string(_channel6401.data()),_item6396,_return_ratio6397,_return_rank6399,_currency_rank6400};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2398_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6401{};
        memcpy(_channel6401.data(), (it._channel6401).data(), (it._channel6401).length());
        tbl_Sort_TD_2398_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel6401);
        tbl_Sort_TD_2398_output.setInt32(r, 1, it._item6396);
        tbl_Sort_TD_2398_output.setInt32(r, 2, it._return_ratio6397);
        tbl_Sort_TD_2398_output.setInt32(r, 3, it._return_rank6399);
        tbl_Sort_TD_2398_output.setInt32(r, 4, it._currency_rank6400);
        ++r;
    }
    tbl_Sort_TD_2398_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2398_output #Row: " << tbl_Sort_TD_2398_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1214(Table &tbl_Sort_TD_2398_output, Table &tbl_LocalLimit_TD_1214_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    // Output: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6401_n = tbl_Sort_TD_2398_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1214_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6401_n);
        tbl_LocalLimit_TD_1214_output.setInt32(r, 1, tbl_Sort_TD_2398_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1214_output.setInt32(r, 2, tbl_Sort_TD_2398_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1214_output.setInt32(r, 3, tbl_Sort_TD_2398_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1214_output.setInt32(r, 4, tbl_Sort_TD_2398_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1214_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1214_output #Row: " << tbl_LocalLimit_TD_1214_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0684(Table &tbl_LocalLimit_TD_1214_output, Table &tbl_GlobalLimit_TD_0684_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    // Output: ListBuffer(channel#6401, item#6396, return_ratio#6397, return_rank#6399, currency_rank#6400)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel6401_n = tbl_LocalLimit_TD_1214_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0684_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel6401_n);
        tbl_GlobalLimit_TD_0684_output.setInt32(r, 1, tbl_LocalLimit_TD_1214_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0684_output.setInt32(r, 2, tbl_LocalLimit_TD_1214_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0684_output.setInt32(r, 3, tbl_LocalLimit_TD_1214_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0684_output.setInt32(r, 4, tbl_LocalLimit_TD_1214_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0684_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0684_output #Row: " << tbl_GlobalLimit_TD_0684_output.getNumRow() << std::endl;
}

