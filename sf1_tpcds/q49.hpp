#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_12599822(Table &tbl_SerializeFromObject_TD_13371899_input, Table &tbl_Filter_TD_12599822_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(sr_return_amt#680) AND (sr_return_amt#680 > 10000.00)) AND (isnotnull(sr_ticket_number#678L) AND isnotnull(sr_item_sk#671))))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13371899_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_return_amt680 = tbl_SerializeFromObject_TD_13371899_input.getInt64(i, 3);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_13371899_input.getInt64(i, 1);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_13371899_input.getInt32(i, 0);
        if (((_sr_return_amt680!= 0) && (_sr_return_amt680 > 10000.00)) && ((_sr_ticket_number678L!= 0) && (_sr_item_sk671!= 0))) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_13371899_input.getInt32(i, 0);
            tbl_Filter_TD_12599822_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_13371899_input.getInt64(i, 1);
            tbl_Filter_TD_12599822_output.setInt64(r, 1, _sr_ticket_number678L_t);
            int32_t _sr_return_quantity679_t = tbl_SerializeFromObject_TD_13371899_input.getInt32(i, 2);
            tbl_Filter_TD_12599822_output.setInt32(r, 2, _sr_return_quantity679_t);
            int64_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_13371899_input.getInt64(i, 3);
            tbl_Filter_TD_12599822_output.setInt64(r, 3, _sr_return_amt680_t);
            r++;
        }
    }
    tbl_Filter_TD_12599822_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12599822_output #Row: " << tbl_Filter_TD_12599822_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12977556(Table &tbl_SerializeFromObject_TD_13728018_input, Table &tbl_Filter_TD_12977556_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(ss_net_profit#1228) AND isnotnull(ss_net_paid#1226)) AND isnotnull(ss_quantity#1216)) AND (((ss_net_profit#1228 > 1.00) AND (ss_net_paid#1226 > 0.00)) AND (ss_quantity#1216 > 0))) AND ((isnotnull(ss_ticket_number#1215L) AND isnotnull(ss_item_sk#1208)) AND isnotnull(ss_sold_date_sk#1206))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_net_paid#1226, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_net_paid#1226)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13728018_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_profit1228 = tbl_SerializeFromObject_TD_13728018_input.getInt64(i, 5);
        int64_t _ss_net_paid1226 = tbl_SerializeFromObject_TD_13728018_input.getInt64(i, 4);
        int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_13728018_input.getInt32(i, 3);
        int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_13728018_input.getInt64(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_13728018_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_13728018_input.getInt32(i, 0);
        if (((((_ss_net_profit1228!= 0) && (_ss_net_paid1226!= 0)) && (_ss_quantity1216!= 0)) && (((_ss_net_profit1228 > 1.00) && (_ss_net_paid1226 > 0.00)) && (_ss_quantity1216 > 0))) && (((_ss_ticket_number1215L!= 0) && (_ss_item_sk1208!= 0)) && (_ss_sold_date_sk1206!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_13728018_input.getInt32(i, 0);
            tbl_Filter_TD_12977556_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_13728018_input.getInt32(i, 1);
            tbl_Filter_TD_12977556_output.setInt32(r, 1, _ss_item_sk1208_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_13728018_input.getInt64(i, 2);
            tbl_Filter_TD_12977556_output.setInt64(r, 2, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_13728018_input.getInt32(i, 3);
            tbl_Filter_TD_12977556_output.setInt32(r, 3, _ss_quantity1216_t);
            int64_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_13728018_input.getInt64(i, 4);
            tbl_Filter_TD_12977556_output.setInt64(r, 4, _ss_net_paid1226_t);
            r++;
        }
    }
    tbl_Filter_TD_12977556_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12977556_output #Row: " << tbl_Filter_TD_12977556_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12744627(Table &tbl_SerializeFromObject_TD_13487824_input, Table &tbl_Filter_TD_12744627_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cr_return_amount#1041) AND (cr_return_amount#1041 > 10000.00)) AND (isnotnull(cr_order_number#1039L) AND isnotnull(cr_item_sk#1025))))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13487824_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_return_amount1041 = tbl_SerializeFromObject_TD_13487824_input.getInt64(i, 3);
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_13487824_input.getInt64(i, 1);
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_13487824_input.getInt32(i, 0);
        if (((_cr_return_amount1041!= 0) && (_cr_return_amount1041 > 10000.00)) && ((_cr_order_number1039L!= 0) && (_cr_item_sk1025!= 0))) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_13487824_input.getInt32(i, 0);
            tbl_Filter_TD_12744627_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_13487824_input.getInt64(i, 1);
            tbl_Filter_TD_12744627_output.setInt64(r, 1, _cr_order_number1039L_t);
            int32_t _cr_return_quantity1040_t = tbl_SerializeFromObject_TD_13487824_input.getInt32(i, 2);
            tbl_Filter_TD_12744627_output.setInt32(r, 2, _cr_return_quantity1040_t);
            int64_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_13487824_input.getInt64(i, 3);
            tbl_Filter_TD_12744627_output.setInt64(r, 3, _cr_return_amount1041_t);
            r++;
        }
    }
    tbl_Filter_TD_12744627_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12744627_output #Row: " << tbl_Filter_TD_12744627_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12320111(Table &tbl_SerializeFromObject_TD_1349578_input, Table &tbl_Filter_TD_12320111_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(cs_net_profit#1137) AND isnotnull(cs_net_paid#1133)) AND isnotnull(cs_quantity#1122)) AND (((cs_net_profit#1137 > 1.00) AND (cs_net_paid#1133 > 0.00)) AND (cs_quantity#1122 > 0))) AND ((isnotnull(cs_order_number#1121L) AND isnotnull(cs_item_sk#1119)) AND isnotnull(cs_sold_date_sk#1104))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_net_paid#1133, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_net_paid#1133)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1349578_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cs_net_profit1137 = tbl_SerializeFromObject_TD_1349578_input.getInt64(i, 5);
        int64_t _cs_net_paid1133 = tbl_SerializeFromObject_TD_1349578_input.getInt64(i, 4);
        int32_t _cs_quantity1122 = tbl_SerializeFromObject_TD_1349578_input.getInt32(i, 3);
        int64_t _cs_order_number1121L = tbl_SerializeFromObject_TD_1349578_input.getInt64(i, 2);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_1349578_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_1349578_input.getInt32(i, 0);
        if (((((_cs_net_profit1137!= 0) && (_cs_net_paid1133!= 0)) && (_cs_quantity1122!= 0)) && (((_cs_net_profit1137 > 1.00) && (_cs_net_paid1133 > 0.00)) && (_cs_quantity1122 > 0))) && (((_cs_order_number1121L!= 0) && (_cs_item_sk1119!= 0)) && (_cs_sold_date_sk1104!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_1349578_input.getInt32(i, 0);
            tbl_Filter_TD_12320111_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_1349578_input.getInt32(i, 1);
            tbl_Filter_TD_12320111_output.setInt32(r, 1, _cs_item_sk1119_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_1349578_input.getInt64(i, 2);
            tbl_Filter_TD_12320111_output.setInt64(r, 2, _cs_order_number1121L_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_1349578_input.getInt32(i, 3);
            tbl_Filter_TD_12320111_output.setInt32(r, 3, _cs_quantity1122_t);
            int64_t _cs_net_paid1133_t = tbl_SerializeFromObject_TD_1349578_input.getInt64(i, 4);
            tbl_Filter_TD_12320111_output.setInt64(r, 4, _cs_net_paid1133_t);
            r++;
        }
    }
    tbl_Filter_TD_12320111_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12320111_output #Row: " << tbl_Filter_TD_12320111_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12354449(Table &tbl_SerializeFromObject_TD_13378243_input, Table &tbl_Filter_TD_12354449_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(wr_return_amt#846) AND (wr_return_amt#846 > 10000.00)) AND (isnotnull(wr_order_number#844L) AND isnotnull(wr_item_sk#833))))
    // Input: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    // Output: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13378243_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_return_amt846 = tbl_SerializeFromObject_TD_13378243_input.getInt64(i, 3);
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_13378243_input.getInt64(i, 1);
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_13378243_input.getInt32(i, 0);
        if (((_wr_return_amt846!= 0) && (_wr_return_amt846 > 10000.00)) && ((_wr_order_number844L!= 0) && (_wr_item_sk833!= 0))) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_13378243_input.getInt32(i, 0);
            tbl_Filter_TD_12354449_output.setInt32(r, 0, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_13378243_input.getInt64(i, 1);
            tbl_Filter_TD_12354449_output.setInt64(r, 1, _wr_order_number844L_t);
            int32_t _wr_return_quantity845_t = tbl_SerializeFromObject_TD_13378243_input.getInt32(i, 2);
            tbl_Filter_TD_12354449_output.setInt32(r, 2, _wr_return_quantity845_t);
            int64_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_13378243_input.getInt64(i, 3);
            tbl_Filter_TD_12354449_output.setInt64(r, 3, _wr_return_amt846_t);
            r++;
        }
    }
    tbl_Filter_TD_12354449_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12354449_output #Row: " << tbl_Filter_TD_12354449_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1280414(Table &tbl_SerializeFromObject_TD_13490094_input, Table &tbl_Filter_TD_1280414_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(ws_net_profit#762) AND isnotnull(ws_net_paid#758)) AND isnotnull(ws_quantity#747)) AND (((ws_net_profit#762 > 1.00) AND (ws_net_paid#758 > 0.00)) AND (ws_quantity#747 > 0))) AND ((isnotnull(ws_order_number#746L) AND isnotnull(ws_item_sk#732)) AND isnotnull(ws_sold_date_sk#729))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_net_paid#758, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_net_paid#758)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13490094_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_net_profit762 = tbl_SerializeFromObject_TD_13490094_input.getInt64(i, 5);
        int64_t _ws_net_paid758 = tbl_SerializeFromObject_TD_13490094_input.getInt64(i, 4);
        int32_t _ws_quantity747 = tbl_SerializeFromObject_TD_13490094_input.getInt32(i, 3);
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_13490094_input.getInt64(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_13490094_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_13490094_input.getInt32(i, 0);
        if (((((_ws_net_profit762!= 0) && (_ws_net_paid758!= 0)) && (_ws_quantity747!= 0)) && (((_ws_net_profit762 > 1.00) && (_ws_net_paid758 > 0.00)) && (_ws_quantity747 > 0))) && (((_ws_order_number746L!= 0) && (_ws_item_sk732!= 0)) && (_ws_sold_date_sk729!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_13490094_input.getInt32(i, 0);
            tbl_Filter_TD_1280414_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_13490094_input.getInt32(i, 1);
            tbl_Filter_TD_1280414_output.setInt32(r, 1, _ws_item_sk732_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_13490094_input.getInt64(i, 2);
            tbl_Filter_TD_1280414_output.setInt64(r, 2, _ws_order_number746L_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_13490094_input.getInt32(i, 3);
            tbl_Filter_TD_1280414_output.setInt32(r, 3, _ws_quantity747_t);
            int64_t _ws_net_paid758_t = tbl_SerializeFromObject_TD_13490094_input.getInt64(i, 4);
            tbl_Filter_TD_1280414_output.setInt64(r, 4, _ws_net_paid758_t);
            r++;
        }
    }
    tbl_Filter_TD_1280414_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1280414_output #Row: " << tbl_Filter_TD_1280414_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11255930(Table &tbl_SerializeFromObject_TD_129848_input, Table &tbl_Filter_TD_11255930_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3596) AND isnotnull(d_moy#3598)) AND ((d_year#3596 = 2001) AND (d_moy#3598 = 12))) AND isnotnull(d_date_sk#3590)))
    // Input: ListBuffer(d_date_sk#3590, d_year#3596, d_moy#3598)
    // Output: ListBuffer(d_date_sk#3590)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_129848_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3596 = tbl_SerializeFromObject_TD_129848_input.getInt32(i, 1);
        int32_t _d_moy3598 = tbl_SerializeFromObject_TD_129848_input.getInt32(i, 2);
        int32_t _d_date_sk3590 = tbl_SerializeFromObject_TD_129848_input.getInt32(i, 0);
        if ((((_d_year3596!= 0) && (_d_moy3598!= 0)) && ((_d_year3596 == 2001) && (_d_moy3598 == 12))) && (_d_date_sk3590!= 0)) {
            int32_t _d_date_sk3590_t = tbl_SerializeFromObject_TD_129848_input.getInt32(i, 0);
            tbl_Filter_TD_11255930_output.setInt32(r, 0, _d_date_sk3590_t);
            r++;
        }
    }
    tbl_Filter_TD_11255930_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11255930_output #Row: " << tbl_Filter_TD_11255930_output.getNumRow() << std::endl;
}


void SW_Filter_TD_11681337(Table &tbl_SerializeFromObject_TD_12577914_input, Table &tbl_Filter_TD_11681337_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3568) AND isnotnull(d_moy#3570)) AND ((d_year#3568 = 2001) AND (d_moy#3570 = 12))) AND isnotnull(d_date_sk#3562)))
    // Input: ListBuffer(d_date_sk#3562, d_year#3568, d_moy#3570)
    // Output: ListBuffer(d_date_sk#3562)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12577914_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3568 = tbl_SerializeFromObject_TD_12577914_input.getInt32(i, 1);
        int32_t _d_moy3570 = tbl_SerializeFromObject_TD_12577914_input.getInt32(i, 2);
        int32_t _d_date_sk3562 = tbl_SerializeFromObject_TD_12577914_input.getInt32(i, 0);
        if ((((_d_year3568!= 0) && (_d_moy3570!= 0)) && ((_d_year3568 == 2001) && (_d_moy3570 == 12))) && (_d_date_sk3562!= 0)) {
            int32_t _d_date_sk3562_t = tbl_SerializeFromObject_TD_12577914_input.getInt32(i, 0);
            tbl_Filter_TD_11681337_output.setInt32(r, 0, _d_date_sk3562_t);
            r++;
        }
    }
    tbl_Filter_TD_11681337_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11681337_output #Row: " << tbl_Filter_TD_11681337_output.getNumRow() << std::endl;
}


void SW_Filter_TD_11465919(Table &tbl_SerializeFromObject_TD_12266937_input, Table &tbl_Filter_TD_11465919_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 2001) AND (d_moy#128 = 12))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12266937_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12266937_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_12266937_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12266937_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 2001) && (_d_moy128 == 12))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12266937_input.getInt32(i, 0);
            tbl_Filter_TD_11465919_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11465919_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11465919_output #Row: " << tbl_Filter_TD_11465919_output.getNumRow() << std::endl;
}





typedef int32_t SW_Aggregate_TD_993878_key;
struct SW_Aggregate_TD_993878_payload {
    int32_t _item3556;
    int64_t _return_ratio3557_sum_0;
    int64_t _return_ratio3557_sum_1;
    int64_t _currency_ratio3558_sum_2;
    int64_t _currency_ratio3558_sum_3;
};
void SW_Aggregate_TD_993878(Table &tbl_JOIN_INNER_TD_10120449_output, Table &tbl_Aggregate_TD_993878_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#1208, ss_item_sk#1208 AS item#3556, CheckOverflow((promote_precision(cast(sum(coalesce(sr_return_quantity#679, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(ss_quantity#1216, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#3557, CheckOverflow((promote_precision(cast(sum(coalesce(cast(sr_return_amt#680 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(ss_net_paid#1226 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#3558)
    // Input: ListBuffer(ss_item_sk#1208, ss_quantity#1216, ss_net_paid#1226, sr_return_quantity#679, sr_return_amt#680)
    // Output: ListBuffer(item#3556, return_ratio#3557, currency_ratio#3558)
    std::unordered_map<SW_Aggregate_TD_993878_key, SW_Aggregate_TD_993878_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10120449_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10120449_output.getInt32(i, 0);
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_10120449_output.getInt32(i, 1);
        int64_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_10120449_output.getInt64(i, 2);
        int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_10120449_output.getInt32(i, 3);
        int64_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10120449_output.getInt64(i, 4);
        SW_Aggregate_TD_993878_key k = _ss_item_sk1208;
        int32_t _item3556 = _ss_item_sk1208;
        int64_t _return_ratio3557_sum_0 = _sr_return_quantity679 != 0 ? _sr_return_quantity679 : 0;
        int64_t _return_ratio3557_sum_1 = _ss_quantity1216 != 0 ? _ss_quantity1216 : 0;
        int64_t _currency_ratio3558_sum_2 = _sr_return_amt680 != 0 ? _sr_return_amt680 : 0.00;
        int64_t _currency_ratio3558_sum_3 = _ss_net_paid1226 != 0 ? _ss_net_paid1226 : 0.00;
        SW_Aggregate_TD_993878_payload p{_item3556, _return_ratio3557_sum_0, _return_ratio3557_sum_1, _currency_ratio3558_sum_2, _currency_ratio3558_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._return_ratio3557_sum_0 + _return_ratio3557_sum_0;
            p._return_ratio3557_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._return_ratio3557_sum_1 + _return_ratio3557_sum_1;
            p._return_ratio3557_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._currency_ratio3558_sum_2 + _currency_ratio3558_sum_2;
            p._currency_ratio3558_sum_2 = sum_2;
            int64_t sum_3 = (it->second)._currency_ratio3558_sum_3 + _currency_ratio3558_sum_3;
            p._currency_ratio3558_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_item_sk1208 not required in the output table
        tbl_Aggregate_TD_993878_output.setInt32(r, 0, (it.second)._item3556);
        int64_t _return_ratio3557 = ((it.second)._return_ratio3557_sum_0 / (it.second)._return_ratio3557_sum_1);
        tbl_Aggregate_TD_993878_output.setInt64(r, 1, _return_ratio3557);
        int64_t _currency_ratio3558 = ((it.second)._currency_ratio3558_sum_2 / (it.second)._currency_ratio3558_sum_3);
        tbl_Aggregate_TD_993878_output.setInt64(r, 2, _currency_ratio3558);
        ++r;
    }
    tbl_Aggregate_TD_993878_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_993878_output #Row: " << tbl_Aggregate_TD_993878_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_982465_key;
struct SW_Aggregate_TD_982465_payload {
    int32_t _item3550;
    int64_t _return_ratio3551_sum_0;
    int64_t _return_ratio3551_sum_1;
    int64_t _currency_ratio3552_sum_2;
    int64_t _currency_ratio3552_sum_3;
};
void SW_Aggregate_TD_982465(Table &tbl_JOIN_INNER_TD_10980218_output, Table &tbl_Aggregate_TD_982465_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_item_sk#1119, cs_item_sk#1119 AS item#3550, CheckOverflow((promote_precision(cast(sum(coalesce(cr_return_quantity#1040, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cs_quantity#1122, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#3551, CheckOverflow((promote_precision(cast(sum(coalesce(cast(cr_return_amount#1041 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(cs_net_paid#1133 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#3552)
    // Input: ListBuffer(cs_item_sk#1119, cs_quantity#1122, cs_net_paid#1133, cr_return_quantity#1040, cr_return_amount#1041)
    // Output: ListBuffer(item#3550, return_ratio#3551, currency_ratio#3552)
    std::unordered_map<SW_Aggregate_TD_982465_key, SW_Aggregate_TD_982465_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10980218_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10980218_output.getInt32(i, 0);
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_10980218_output.getInt32(i, 1);
        int64_t _cs_net_paid1133 = tbl_JOIN_INNER_TD_10980218_output.getInt64(i, 2);
        int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_10980218_output.getInt32(i, 3);
        int64_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_10980218_output.getInt64(i, 4);
        SW_Aggregate_TD_982465_key k = _cs_item_sk1119;
        int32_t _item3550 = _cs_item_sk1119;
        int64_t _return_ratio3551_sum_0 = _cr_return_quantity1040 != 0 ? _cr_return_quantity1040 : 0;
        int64_t _return_ratio3551_sum_1 = _cs_quantity1122 != 0 ? _cs_quantity1122 : 0;
        int64_t _currency_ratio3552_sum_2 = _cr_return_amount1041 != 0 ? _cr_return_amount1041 : 0.00;
        int64_t _currency_ratio3552_sum_3 = _cs_net_paid1133 != 0 ? _cs_net_paid1133 : 0.00;
        SW_Aggregate_TD_982465_payload p{_item3550, _return_ratio3551_sum_0, _return_ratio3551_sum_1, _currency_ratio3552_sum_2, _currency_ratio3552_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._return_ratio3551_sum_0 + _return_ratio3551_sum_0;
            p._return_ratio3551_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._return_ratio3551_sum_1 + _return_ratio3551_sum_1;
            p._return_ratio3551_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._currency_ratio3552_sum_2 + _currency_ratio3552_sum_2;
            p._currency_ratio3552_sum_2 = sum_2;
            int64_t sum_3 = (it->second)._currency_ratio3552_sum_3 + _currency_ratio3552_sum_3;
            p._currency_ratio3552_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cs_item_sk1119 not required in the output table
        tbl_Aggregate_TD_982465_output.setInt32(r, 0, (it.second)._item3550);
        int64_t _return_ratio3551 = ((it.second)._return_ratio3551_sum_0 / (it.second)._return_ratio3551_sum_1);
        tbl_Aggregate_TD_982465_output.setInt64(r, 1, _return_ratio3551);
        int64_t _currency_ratio3552 = ((it.second)._currency_ratio3552_sum_2 / (it.second)._currency_ratio3552_sum_3);
        tbl_Aggregate_TD_982465_output.setInt64(r, 2, _currency_ratio3552);
        ++r;
    }
    tbl_Aggregate_TD_982465_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_982465_output #Row: " << tbl_Aggregate_TD_982465_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_9487517_key;
struct SW_Aggregate_TD_9487517_payload {
    int32_t _item3544;
    int64_t _return_ratio3545_sum_0;
    int64_t _return_ratio3545_sum_1;
    int64_t _currency_ratio3546_sum_2;
    int64_t _currency_ratio3546_sum_3;
};
void SW_Aggregate_TD_9487517(Table &tbl_JOIN_INNER_TD_10867346_output, Table &tbl_Aggregate_TD_9487517_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ws_item_sk#732, ws_item_sk#732 AS item#3544, CheckOverflow((promote_precision(cast(sum(coalesce(wr_return_quantity#845, 0)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(ws_quantity#747, 0)) as decimal(15,4)))), DecimalType(35,20), true) AS return_ratio#3545, CheckOverflow((promote_precision(cast(sum(coalesce(cast(wr_return_amt#846 as decimal(12,2)), 0.00)) as decimal(15,4))) / promote_precision(cast(sum(coalesce(cast(ws_net_paid#758 as decimal(12,2)), 0.00)) as decimal(15,4)))), DecimalType(35,20), true) AS currency_ratio#3546)
    // Input: ListBuffer(ws_item_sk#732, ws_quantity#747, ws_net_paid#758, wr_return_quantity#845, wr_return_amt#846)
    // Output: ListBuffer(item#3544, return_ratio#3545, currency_ratio#3546)
    std::unordered_map<SW_Aggregate_TD_9487517_key, SW_Aggregate_TD_9487517_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10867346_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_10867346_output.getInt32(i, 0);
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_10867346_output.getInt32(i, 1);
        int64_t _ws_net_paid758 = tbl_JOIN_INNER_TD_10867346_output.getInt64(i, 2);
        int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_10867346_output.getInt32(i, 3);
        int64_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10867346_output.getInt64(i, 4);
        SW_Aggregate_TD_9487517_key k = _ws_item_sk732;
        int32_t _item3544 = _ws_item_sk732;
        int64_t _return_ratio3545_sum_0 = _wr_return_quantity845 != 0 ? _wr_return_quantity845 : 0;
        int64_t _return_ratio3545_sum_1 = _ws_quantity747 != 0 ? _ws_quantity747 : 0;
        int64_t _currency_ratio3546_sum_2 = _wr_return_amt846 != 0 ? _wr_return_amt846 : 0.00;
        int64_t _currency_ratio3546_sum_3 = _ws_net_paid758 != 0 ? _ws_net_paid758 : 0.00;
        SW_Aggregate_TD_9487517_payload p{_item3544, _return_ratio3545_sum_0, _return_ratio3545_sum_1, _currency_ratio3546_sum_2, _currency_ratio3546_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._return_ratio3545_sum_0 + _return_ratio3545_sum_0;
            p._return_ratio3545_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._return_ratio3545_sum_1 + _return_ratio3545_sum_1;
            p._return_ratio3545_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._currency_ratio3546_sum_2 + _currency_ratio3546_sum_2;
            p._currency_ratio3546_sum_2 = sum_2;
            int64_t sum_3 = (it->second)._currency_ratio3546_sum_3 + _currency_ratio3546_sum_3;
            p._currency_ratio3546_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ws_item_sk732 not required in the output table
        tbl_Aggregate_TD_9487517_output.setInt32(r, 0, (it.second)._item3544);
        int64_t _return_ratio3545 = ((it.second)._return_ratio3545_sum_0 / (it.second)._return_ratio3545_sum_1);
        tbl_Aggregate_TD_9487517_output.setInt64(r, 1, _return_ratio3545);
        int64_t _currency_ratio3546 = ((it.second)._currency_ratio3546_sum_2 / (it.second)._currency_ratio3546_sum_3);
        tbl_Aggregate_TD_9487517_output.setInt64(r, 2, _currency_ratio3546);
        ++r;
    }
    tbl_Aggregate_TD_9487517_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9487517_output #Row: " << tbl_Aggregate_TD_9487517_output.getNumRow() << std::endl;
}

void SW_Window_TD_845991(Table &tbl_Aggregate_TD_993878_output, Table &tbl_Window_TD_845991_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#3557) windowspecdefinition(return_ratio#3557 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#3559)
    // Input: ListBuffer(item#3556, return_ratio#3557, currency_ratio#3558)
    // Output: ListBuffer(item#3556, return_ratio#3557, currency_ratio#3558, return_rank#3559)
    struct SW_Window_TD_845991Row {
        int32_t _item3556;
        int64_t _return_ratio3557;
        int64_t _currency_ratio3558;
    }; 

    int nrow = tbl_Aggregate_TD_993878_output.getNumRow();
    std::vector<SW_Window_TD_845991Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item3556 = tbl_Aggregate_TD_993878_output.getInt32(i, 0);
        tbl_Window_TD_845991_output.setInt32(r, 0,_item3556);
        int64_t _return_ratio3557 = tbl_Aggregate_TD_993878_output.getInt64(i, 1);
        tbl_Window_TD_845991_output.setInt64(r, 1,_return_ratio3557);
        int64_t _currency_ratio3558 = tbl_Aggregate_TD_993878_output.getInt64(i, 2);
        tbl_Window_TD_845991_output.setInt64(r, 2,_currency_ratio3558);
        r++;
        SW_Window_TD_845991Row t = {_item3556,_return_ratio3557,_currency_ratio3558};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_845991Row& a, const SW_Window_TD_845991Row& b) const { return 
(a._return_ratio3557 < b._return_ratio3557); 
}
    }SW_Window_TD_845991_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_845991_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {

        isSameOrderKey0 = ( rows0[i]._return_ratio3557 == rows0[i-1]._return_ratio3557);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_845991_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_845991_output.setNumRow(r);
    std::cout << "tbl_Window_TD_845991_output #Row: " << tbl_Window_TD_845991_output.getNumRow() << std::endl;
}

void SW_Window_TD_8965768(Table &tbl_Aggregate_TD_982465_output, Table &tbl_Window_TD_8965768_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#3551) windowspecdefinition(return_ratio#3551 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#3553)
    // Input: ListBuffer(item#3550, return_ratio#3551, currency_ratio#3552)
    // Output: ListBuffer(item#3550, return_ratio#3551, currency_ratio#3552, return_rank#3553)
    struct SW_Window_TD_8965768Row {
        int32_t _item3550;
        int64_t _return_ratio3551;
        int64_t _currency_ratio3552;
    }; 

    int nrow = tbl_Aggregate_TD_982465_output.getNumRow();
    std::vector<SW_Window_TD_8965768Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item3550 = tbl_Aggregate_TD_982465_output.getInt32(i, 0);
        tbl_Window_TD_8965768_output.setInt32(r, 0,_item3550);
        int64_t _return_ratio3551 = tbl_Aggregate_TD_982465_output.getInt64(i, 1);
        tbl_Window_TD_8965768_output.setInt64(r, 1,_return_ratio3551);
        int64_t _currency_ratio3552 = tbl_Aggregate_TD_982465_output.getInt64(i, 2);
        tbl_Window_TD_8965768_output.setInt64(r, 2,_currency_ratio3552);
        r++;
        SW_Window_TD_8965768Row t = {_item3550,_return_ratio3551,_currency_ratio3552};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8965768Row& a, const SW_Window_TD_8965768Row& b) const { return 
(a._return_ratio3551 < b._return_ratio3551); 
}
    }SW_Window_TD_8965768_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8965768_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {

        isSameOrderKey0 = ( rows0[i]._return_ratio3551 == rows0[i-1]._return_ratio3551);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8965768_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_8965768_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8965768_output #Row: " << tbl_Window_TD_8965768_output.getNumRow() << std::endl;
}

void SW_Window_TD_8243948(Table &tbl_Aggregate_TD_9487517_output, Table &tbl_Window_TD_8243948_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(return_ratio#3545) windowspecdefinition(return_ratio#3545 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS return_rank#3547)
    // Input: ListBuffer(item#3544, return_ratio#3545, currency_ratio#3546)
    // Output: ListBuffer(item#3544, return_ratio#3545, currency_ratio#3546, return_rank#3547)
    struct SW_Window_TD_8243948Row {
        int32_t _item3544;
        int64_t _return_ratio3545;
        int64_t _currency_ratio3546;
    }; 

    int nrow = tbl_Aggregate_TD_9487517_output.getNumRow();
    std::vector<SW_Window_TD_8243948Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item3544 = tbl_Aggregate_TD_9487517_output.getInt32(i, 0);
        tbl_Window_TD_8243948_output.setInt32(r, 0,_item3544);
        int64_t _return_ratio3545 = tbl_Aggregate_TD_9487517_output.getInt64(i, 1);
        tbl_Window_TD_8243948_output.setInt64(r, 1,_return_ratio3545);
        int64_t _currency_ratio3546 = tbl_Aggregate_TD_9487517_output.getInt64(i, 2);
        tbl_Window_TD_8243948_output.setInt64(r, 2,_currency_ratio3546);
        r++;
        SW_Window_TD_8243948Row t = {_item3544,_return_ratio3545,_currency_ratio3546};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8243948Row& a, const SW_Window_TD_8243948Row& b) const { return 
(a._return_ratio3545 < b._return_ratio3545); 
}
    }SW_Window_TD_8243948_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8243948_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {

        isSameOrderKey0 = ( rows0[i]._return_ratio3545 == rows0[i-1]._return_ratio3545);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8243948_output.setInt32(r, 3, ranks0[i]);
    }
    tbl_Window_TD_8243948_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8243948_output #Row: " << tbl_Window_TD_8243948_output.getNumRow() << std::endl;
}

void SW_Window_TD_7649254(Table &tbl_Window_TD_845991_output, Table &tbl_Window_TD_7649254_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#3558) windowspecdefinition(currency_ratio#3558 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#3560)
    // Input: ListBuffer(item#3556, return_ratio#3557, currency_ratio#3558, return_rank#3559)
    // Output: ListBuffer(item#3556, return_ratio#3557, currency_ratio#3558, return_rank#3559, currency_rank#3560)
    struct SW_Window_TD_7649254Row {
        int32_t _item3556;
        int64_t _return_ratio3557;
        int64_t _currency_ratio3558;
        int32_t _return_rank3559;
    }; 

    int nrow = tbl_Window_TD_845991_output.getNumRow();
    std::vector<SW_Window_TD_7649254Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item3556 = tbl_Window_TD_845991_output.getInt32(i, 0);
        tbl_Window_TD_7649254_output.setInt32(r, 0,_item3556);
        int64_t _return_ratio3557 = tbl_Window_TD_845991_output.getInt64(i, 1);
        tbl_Window_TD_7649254_output.setInt64(r, 1,_return_ratio3557);
        int64_t _currency_ratio3558 = tbl_Window_TD_845991_output.getInt64(i, 2);
        tbl_Window_TD_7649254_output.setInt64(r, 2,_currency_ratio3558);
        int32_t _return_rank3559 = tbl_Window_TD_845991_output.getInt32(i, 3);
        tbl_Window_TD_7649254_output.setInt32(r, 3,_return_rank3559);
        r++;
        SW_Window_TD_7649254Row t = {_item3556,_return_ratio3557,_currency_ratio3558,_return_rank3559};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7649254Row& a, const SW_Window_TD_7649254Row& b) const { return 
(a._currency_ratio3558 < b._currency_ratio3558); 
}
    }SW_Window_TD_7649254_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7649254_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {

        isSameOrderKey0 = ( rows0[i]._currency_ratio3558 == rows0[i-1]._currency_ratio3558);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7649254_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_7649254_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7649254_output #Row: " << tbl_Window_TD_7649254_output.getNumRow() << std::endl;
}

void SW_Window_TD_7556800(Table &tbl_Window_TD_8965768_output, Table &tbl_Window_TD_7556800_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#3552) windowspecdefinition(currency_ratio#3552 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#3554)
    // Input: ListBuffer(item#3550, return_ratio#3551, currency_ratio#3552, return_rank#3553)
    // Output: ListBuffer(item#3550, return_ratio#3551, currency_ratio#3552, return_rank#3553, currency_rank#3554)
    struct SW_Window_TD_7556800Row {
        int32_t _item3550;
        int64_t _return_ratio3551;
        int64_t _currency_ratio3552;
        int32_t _return_rank3553;
    }; 

    int nrow = tbl_Window_TD_8965768_output.getNumRow();
    std::vector<SW_Window_TD_7556800Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item3550 = tbl_Window_TD_8965768_output.getInt32(i, 0);
        tbl_Window_TD_7556800_output.setInt32(r, 0,_item3550);
        int64_t _return_ratio3551 = tbl_Window_TD_8965768_output.getInt64(i, 1);
        tbl_Window_TD_7556800_output.setInt64(r, 1,_return_ratio3551);
        int64_t _currency_ratio3552 = tbl_Window_TD_8965768_output.getInt64(i, 2);
        tbl_Window_TD_7556800_output.setInt64(r, 2,_currency_ratio3552);
        int32_t _return_rank3553 = tbl_Window_TD_8965768_output.getInt32(i, 3);
        tbl_Window_TD_7556800_output.setInt32(r, 3,_return_rank3553);
        r++;
        SW_Window_TD_7556800Row t = {_item3550,_return_ratio3551,_currency_ratio3552,_return_rank3553};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7556800Row& a, const SW_Window_TD_7556800Row& b) const { return 
(a._currency_ratio3552 < b._currency_ratio3552); 
}
    }SW_Window_TD_7556800_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7556800_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {

        isSameOrderKey0 = ( rows0[i]._currency_ratio3552 == rows0[i-1]._currency_ratio3552);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7556800_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_7556800_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7556800_output #Row: " << tbl_Window_TD_7556800_output.getNumRow() << std::endl;
}

void SW_Window_TD_7805944(Table &tbl_Window_TD_8243948_output, Table &tbl_Window_TD_7805944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(currency_ratio#3546) windowspecdefinition(currency_ratio#3546 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS currency_rank#3548)
    // Input: ListBuffer(item#3544, return_ratio#3545, currency_ratio#3546, return_rank#3547)
    // Output: ListBuffer(item#3544, return_ratio#3545, currency_ratio#3546, return_rank#3547, currency_rank#3548)
    struct SW_Window_TD_7805944Row {
        int32_t _item3544;
        int64_t _return_ratio3545;
        int64_t _currency_ratio3546;
        int32_t _return_rank3547;
    }; 

    int nrow = tbl_Window_TD_8243948_output.getNumRow();
    std::vector<SW_Window_TD_7805944Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item3544 = tbl_Window_TD_8243948_output.getInt32(i, 0);
        tbl_Window_TD_7805944_output.setInt32(r, 0,_item3544);
        int64_t _return_ratio3545 = tbl_Window_TD_8243948_output.getInt64(i, 1);
        tbl_Window_TD_7805944_output.setInt64(r, 1,_return_ratio3545);
        int64_t _currency_ratio3546 = tbl_Window_TD_8243948_output.getInt64(i, 2);
        tbl_Window_TD_7805944_output.setInt64(r, 2,_currency_ratio3546);
        int32_t _return_rank3547 = tbl_Window_TD_8243948_output.getInt32(i, 3);
        tbl_Window_TD_7805944_output.setInt32(r, 3,_return_rank3547);
        r++;
        SW_Window_TD_7805944Row t = {_item3544,_return_ratio3545,_currency_ratio3546,_return_rank3547};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7805944Row& a, const SW_Window_TD_7805944Row& b) const { return 
(a._currency_ratio3546 < b._currency_ratio3546); 
}
    }SW_Window_TD_7805944_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7805944_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {

        isSameOrderKey0 = ( rows0[i]._currency_ratio3546 == rows0[i-1]._currency_ratio3546);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7805944_output.setInt32(r, 4, ranks0[i]);
    }
    tbl_Window_TD_7805944_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7805944_output #Row: " << tbl_Window_TD_7805944_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6513108(Table &tbl_Window_TD_7649254_output, Table &tbl_Filter_TD_6513108_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#3559 <= 10) OR (currency_rank#3560 <= 10)))
    // Input: ListBuffer(item#3556, return_ratio#3557, currency_ratio#3558, return_rank#3559, currency_rank#3560)
    // Output: ListBuffer(item#3556, return_ratio#3557, return_rank#3559, currency_rank#3560)
    int r = 0;
    int nrow1 = tbl_Window_TD_7649254_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank3559 = tbl_Window_TD_7649254_output.getInt32(i, 3);
        int32_t _currency_rank3560 = tbl_Window_TD_7649254_output.getInt32(i, 4);
        if ((_return_rank3559 <= 10) || (_currency_rank3560 <= 10)) {
            int32_t _item3556_t = tbl_Window_TD_7649254_output.getInt32(i, 0);
            tbl_Filter_TD_6513108_output.setInt32(r, 0, _item3556_t);
            int64_t _return_ratio3557_t = tbl_Window_TD_7649254_output.getInt64(i, 1);
            tbl_Filter_TD_6513108_output.setInt64(r, 1, _return_ratio3557_t);
            int32_t _return_rank3559_t = tbl_Window_TD_7649254_output.getInt32(i, 3);
            tbl_Filter_TD_6513108_output.setInt32(r, 2, _return_rank3559_t);
            int32_t _currency_rank3560_t = tbl_Window_TD_7649254_output.getInt32(i, 4);
            tbl_Filter_TD_6513108_output.setInt32(r, 3, _currency_rank3560_t);
            r++;
        }
    }
    tbl_Filter_TD_6513108_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6513108_output #Row: " << tbl_Filter_TD_6513108_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6706004(Table &tbl_Window_TD_7556800_output, Table &tbl_Filter_TD_6706004_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#3553 <= 10) OR (currency_rank#3554 <= 10)))
    // Input: ListBuffer(item#3550, return_ratio#3551, currency_ratio#3552, return_rank#3553, currency_rank#3554)
    // Output: ListBuffer(item#3550, return_ratio#3551, return_rank#3553, currency_rank#3554)
    int r = 0;
    int nrow1 = tbl_Window_TD_7556800_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank3553 = tbl_Window_TD_7556800_output.getInt32(i, 3);
        int32_t _currency_rank3554 = tbl_Window_TD_7556800_output.getInt32(i, 4);
        if ((_return_rank3553 <= 10) || (_currency_rank3554 <= 10)) {
            int32_t _item3550_t = tbl_Window_TD_7556800_output.getInt32(i, 0);
            tbl_Filter_TD_6706004_output.setInt32(r, 0, _item3550_t);
            int64_t _return_ratio3551_t = tbl_Window_TD_7556800_output.getInt64(i, 1);
            tbl_Filter_TD_6706004_output.setInt64(r, 1, _return_ratio3551_t);
            int32_t _return_rank3553_t = tbl_Window_TD_7556800_output.getInt32(i, 3);
            tbl_Filter_TD_6706004_output.setInt32(r, 2, _return_rank3553_t);
            int32_t _currency_rank3554_t = tbl_Window_TD_7556800_output.getInt32(i, 4);
            tbl_Filter_TD_6706004_output.setInt32(r, 3, _currency_rank3554_t);
            r++;
        }
    }
    tbl_Filter_TD_6706004_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6706004_output #Row: " << tbl_Filter_TD_6706004_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6674727(Table &tbl_Window_TD_7805944_output, Table &tbl_Filter_TD_6674727_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((return_rank#3547 <= 10) OR (currency_rank#3548 <= 10)))
    // Input: ListBuffer(item#3544, return_ratio#3545, currency_ratio#3546, return_rank#3547, currency_rank#3548)
    // Output: ListBuffer(item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    int r = 0;
    int nrow1 = tbl_Window_TD_7805944_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _return_rank3547 = tbl_Window_TD_7805944_output.getInt32(i, 3);
        int32_t _currency_rank3548 = tbl_Window_TD_7805944_output.getInt32(i, 4);
        if ((_return_rank3547 <= 10) || (_currency_rank3548 <= 10)) {
            int32_t _item3544_t = tbl_Window_TD_7805944_output.getInt32(i, 0);
            tbl_Filter_TD_6674727_output.setInt32(r, 0, _item3544_t);
            int64_t _return_ratio3545_t = tbl_Window_TD_7805944_output.getInt64(i, 1);
            tbl_Filter_TD_6674727_output.setInt64(r, 1, _return_ratio3545_t);
            int32_t _return_rank3547_t = tbl_Window_TD_7805944_output.getInt32(i, 3);
            tbl_Filter_TD_6674727_output.setInt32(r, 2, _return_rank3547_t);
            int32_t _currency_rank3548_t = tbl_Window_TD_7805944_output.getInt32(i, 4);
            tbl_Filter_TD_6674727_output.setInt32(r, 3, _currency_rank3548_t);
            r++;
        }
    }
    tbl_Filter_TD_6674727_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6674727_output #Row: " << tbl_Filter_TD_6674727_output.getNumRow() << std::endl;
}

void SW_Project_TD_5793817(Table &tbl_Filter_TD_6513108_output, Table &tbl_Project_TD_5793817_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(store AS channel#3561)
    // Input: ListBuffer(item#3556, return_ratio#3557, return_rank#3559, currency_rank#3560)
    // Output: ListBuffer(channel#3561, item#3556, return_ratio#3557, return_rank#3559, currency_rank#3560)
    int nrow1 = tbl_Filter_TD_6513108_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item3556 = tbl_Filter_TD_6513108_output.getInt32(i, 0);
        int64_t _return_ratio3557 = tbl_Filter_TD_6513108_output.getInt64(i, 1);
        int32_t _return_rank3559 = tbl_Filter_TD_6513108_output.getInt32(i, 2);
        int32_t _currency_rank3560 = tbl_Filter_TD_6513108_output.getInt32(i, 3);
        std::string _channel3561_str = "store";
        std::array<char, TPCDS_READ_MAX + 1> _channel3561{};
        memcpy(_channel3561.data(), _channel3561_str.data(), (_channel3561_str).length());
        tbl_Project_TD_5793817_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel3561);
        tbl_Project_TD_5793817_output.setInt32(i, 1, _item3556);
        tbl_Project_TD_5793817_output.setInt64(i, 2, _return_ratio3557);
        tbl_Project_TD_5793817_output.setInt32(i, 3, _return_rank3559);
        tbl_Project_TD_5793817_output.setInt32(i, 4, _currency_rank3560);
    }
    tbl_Project_TD_5793817_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5793817_output #Row: " << tbl_Project_TD_5793817_output.getNumRow() << std::endl;
}

void SW_Project_TD_5124165(Table &tbl_Filter_TD_6706004_output, Table &tbl_Project_TD_5124165_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(catalog AS channel#3555)
    // Input: ListBuffer(item#3550, return_ratio#3551, return_rank#3553, currency_rank#3554)
    // Output: ListBuffer(channel#3555, item#3550, return_ratio#3551, return_rank#3553, currency_rank#3554)
    int nrow1 = tbl_Filter_TD_6706004_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item3550 = tbl_Filter_TD_6706004_output.getInt32(i, 0);
        int64_t _return_ratio3551 = tbl_Filter_TD_6706004_output.getInt64(i, 1);
        int32_t _return_rank3553 = tbl_Filter_TD_6706004_output.getInt32(i, 2);
        int32_t _currency_rank3554 = tbl_Filter_TD_6706004_output.getInt32(i, 3);
        std::string _channel3555_str = "catalog";
        std::array<char, TPCDS_READ_MAX + 1> _channel3555{};
        memcpy(_channel3555.data(), _channel3555_str.data(), (_channel3555_str).length());
        tbl_Project_TD_5124165_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel3555);
        tbl_Project_TD_5124165_output.setInt32(i, 1, _item3550);
        tbl_Project_TD_5124165_output.setInt64(i, 2, _return_ratio3551);
        tbl_Project_TD_5124165_output.setInt32(i, 3, _return_rank3553);
        tbl_Project_TD_5124165_output.setInt32(i, 4, _currency_rank3554);
    }
    tbl_Project_TD_5124165_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5124165_output #Row: " << tbl_Project_TD_5124165_output.getNumRow() << std::endl;
}

void SW_Project_TD_5846592(Table &tbl_Filter_TD_6674727_output, Table &tbl_Project_TD_5846592_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(web AS channel#3549)
    // Input: ListBuffer(item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    // Output: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    int nrow1 = tbl_Filter_TD_6674727_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _item3544 = tbl_Filter_TD_6674727_output.getInt32(i, 0);
        int64_t _return_ratio3545 = tbl_Filter_TD_6674727_output.getInt64(i, 1);
        int32_t _return_rank3547 = tbl_Filter_TD_6674727_output.getInt32(i, 2);
        int32_t _currency_rank3548 = tbl_Filter_TD_6674727_output.getInt32(i, 3);
        std::string _channel3549_str = "web";
        std::array<char, TPCDS_READ_MAX + 1> _channel3549{};
        memcpy(_channel3549.data(), _channel3549_str.data(), (_channel3549_str).length());
        tbl_Project_TD_5846592_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _channel3549);
        tbl_Project_TD_5846592_output.setInt32(i, 1, _item3544);
        tbl_Project_TD_5846592_output.setInt64(i, 2, _return_ratio3545);
        tbl_Project_TD_5846592_output.setInt32(i, 3, _return_rank3547);
        tbl_Project_TD_5846592_output.setInt32(i, 4, _currency_rank3548);
    }
    tbl_Project_TD_5846592_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5846592_output #Row: " << tbl_Project_TD_5846592_output.getNumRow() << std::endl;
}

void SW_Union_TD_4521042(Table &tbl_Project_TD_5846592_output, Table &tbl_Project_TD_5124165_output, Table &tbl_Project_TD_5793817_output, Table &tbl_Union_TD_4521042_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    int r = 0;
    int row0 = tbl_Project_TD_5846592_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3549_n = tbl_Union_TD_4521042_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4521042_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3549_n);
        tbl_Union_TD_4521042_output.setInt32(r, 1, tbl_Project_TD_5846592_output.getInt32(i, 1));
        tbl_Union_TD_4521042_output.setInt32(r, 2, tbl_Project_TD_5846592_output.getInt64(i, 2));
        tbl_Union_TD_4521042_output.setInt32(r, 3, tbl_Project_TD_5846592_output.getInt32(i, 3));
        tbl_Union_TD_4521042_output.setInt32(r, 4, tbl_Project_TD_5846592_output.getInt32(i, 4));
        ++r;
    }
    int row1 = tbl_Project_TD_5124165_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3555_n = tbl_Union_TD_4521042_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4521042_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3555_n);
        tbl_Union_TD_4521042_output.setInt32(r, 1, tbl_Project_TD_5124165_output.getInt32(i, 1));
        tbl_Union_TD_4521042_output.setInt32(r, 2, tbl_Project_TD_5124165_output.getInt64(i, 2));
        tbl_Union_TD_4521042_output.setInt32(r, 3, tbl_Project_TD_5124165_output.getInt32(i, 3));
        tbl_Union_TD_4521042_output.setInt32(r, 4, tbl_Project_TD_5124165_output.getInt32(i, 4));
        ++r;
    }
    int row2 = tbl_Project_TD_5793817_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3561_n = tbl_Union_TD_4521042_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4521042_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3561_n);
        tbl_Union_TD_4521042_output.setInt32(r, 1, tbl_Project_TD_5793817_output.getInt32(i, 1));
        tbl_Union_TD_4521042_output.setInt32(r, 2, tbl_Project_TD_5793817_output.getInt64(i, 2));
        tbl_Union_TD_4521042_output.setInt32(r, 3, tbl_Project_TD_5793817_output.getInt32(i, 3));
        tbl_Union_TD_4521042_output.setInt32(r, 4, tbl_Project_TD_5793817_output.getInt32(i, 4));
        ++r;
    }
    tbl_Union_TD_4521042_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4521042_output #Row: " << tbl_Union_TD_4521042_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3462906_key {
    std::string _channel3549;
    int32_t _item3544;
    int64_t _return_ratio3545;
    int32_t _return_rank3547;
    int32_t _currency_rank3548;
    bool operator==(const SW_Aggregate_TD_3462906_key& other) const { return (_channel3549 == other._channel3549) && (_item3544 == other._item3544) && (_return_ratio3545 == other._return_ratio3545) && (_return_rank3547 == other._return_rank3547) && (_currency_rank3548 == other._currency_rank3548); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3462906_key> {
    std::size_t operator() (const SW_Aggregate_TD_3462906_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel3549)) + (hash<int32_t>()(k._item3544)) + (hash<int64_t>()(k._return_ratio3545)) + (hash<int32_t>()(k._return_rank3547)) + (hash<int32_t>()(k._currency_rank3548));
    }
};
}
struct SW_Aggregate_TD_3462906_payload {
};
void SW_Aggregate_TD_3462906(Table &tbl_Union_TD_4521042_output, Table &tbl_Aggregate_TD_3462906_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    // Input: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    // Output: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    std::unordered_map<SW_Aggregate_TD_3462906_key, SW_Aggregate_TD_3462906_payload> ht1;
    int nrow1 = tbl_Union_TD_4521042_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3549 = tbl_Union_TD_4521042_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _item3544 = tbl_Union_TD_4521042_output.getInt32(i, 1);
        int64_t _return_ratio3545 = tbl_Union_TD_4521042_output.getInt64(i, 2);
        int32_t _return_rank3547 = tbl_Union_TD_4521042_output.getInt32(i, 3);
        int32_t _currency_rank3548 = tbl_Union_TD_4521042_output.getInt32(i, 4);
        SW_Aggregate_TD_3462906_key k{std::string(_channel3549.data()), _item3544, _return_ratio3545, _return_rank3547, _currency_rank3548};
        SW_Aggregate_TD_3462906_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3549{};
        memcpy(_channel3549.data(), ((it.first)._channel3549).data(), ((it.first)._channel3549).length());
        tbl_Aggregate_TD_3462906_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3549);
        tbl_Aggregate_TD_3462906_output.setInt32(r, 1, (it.first)._item3544);
        tbl_Aggregate_TD_3462906_output.setInt64(r, 2, (it.first)._return_ratio3545);
        tbl_Aggregate_TD_3462906_output.setInt32(r, 3, (it.first)._return_rank3547);
        tbl_Aggregate_TD_3462906_output.setInt32(r, 4, (it.first)._currency_rank3548);
        ++r;
    }
    tbl_Aggregate_TD_3462906_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3462906_output #Row: " << tbl_Aggregate_TD_3462906_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2216964(Table &tbl_Aggregate_TD_3462906_output, Table &tbl_Sort_TD_2216964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#3549 ASC NULLS FIRST, return_rank#3547 ASC NULLS FIRST, currency_rank#3548 ASC NULLS FIRST)
    // Input: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    // Output: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    struct SW_Sort_TD_2216964Row {
        std::string _channel3549;
        int32_t _item3544;
        int64_t _return_ratio3545;
        int32_t _return_rank3547;
        int32_t _currency_rank3548;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2216964Row& a, const SW_Sort_TD_2216964Row& b) const { return 
 (a._channel3549 < b._channel3549) || 
 ((a._channel3549 == b._channel3549) && (a._return_rank3547 < b._return_rank3547)) || 
 ((a._channel3549 == b._channel3549) && (a._return_rank3547 == b._return_rank3547) && (a._currency_rank3548 < b._currency_rank3548)); 
}
    }SW_Sort_TD_2216964_order; 

    int nrow1 = tbl_Aggregate_TD_3462906_output.getNumRow();
    std::vector<SW_Sort_TD_2216964Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3549 = tbl_Aggregate_TD_3462906_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _item3544 = tbl_Aggregate_TD_3462906_output.getInt32(i, 1);
        int64_t _return_ratio3545 = tbl_Aggregate_TD_3462906_output.getInt64(i, 2);
        int32_t _return_rank3547 = tbl_Aggregate_TD_3462906_output.getInt32(i, 3);
        int32_t _currency_rank3548 = tbl_Aggregate_TD_3462906_output.getInt32(i, 4);
        SW_Sort_TD_2216964Row t = {std::string(_channel3549.data()),_item3544,_return_ratio3545,_return_rank3547,_currency_rank3548};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2216964_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3549{};
        memcpy(_channel3549.data(), (it._channel3549).data(), (it._channel3549).length());
        tbl_Sort_TD_2216964_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel3549);
        tbl_Sort_TD_2216964_output.setInt32(r, 1, it._item3544);
        tbl_Sort_TD_2216964_output.setInt64(r, 2, it._return_ratio3545);
        tbl_Sort_TD_2216964_output.setInt32(r, 3, it._return_rank3547);
        tbl_Sort_TD_2216964_output.setInt32(r, 4, it._currency_rank3548);
        ++r;
    }
    tbl_Sort_TD_2216964_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2216964_output #Row: " << tbl_Sort_TD_2216964_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1162753(Table &tbl_Sort_TD_2216964_output, Table &tbl_LocalLimit_TD_1162753_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    // Output: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3549_n = tbl_Sort_TD_2216964_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1162753_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3549_n);
        tbl_LocalLimit_TD_1162753_output.setInt32(r, 1, tbl_Sort_TD_2216964_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1162753_output.setInt64(r, 2, tbl_Sort_TD_2216964_output.getInt64(i, 2));
        tbl_LocalLimit_TD_1162753_output.setInt32(r, 3, tbl_Sort_TD_2216964_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1162753_output.setInt32(r, 4, tbl_Sort_TD_2216964_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1162753_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1162753_output #Row: " << tbl_LocalLimit_TD_1162753_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0528965(Table &tbl_LocalLimit_TD_1162753_output, Table &tbl_GlobalLimit_TD_0528965_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    // Output: ListBuffer(channel#3549, item#3544, return_ratio#3545, return_rank#3547, currency_rank#3548)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel3549_n = tbl_LocalLimit_TD_1162753_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0528965_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel3549_n);
        tbl_GlobalLimit_TD_0528965_output.setInt32(r, 1, tbl_LocalLimit_TD_1162753_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0528965_output.setInt64(r, 2, tbl_LocalLimit_TD_1162753_output.getInt64(i, 2));
        tbl_GlobalLimit_TD_0528965_output.setInt32(r, 3, tbl_LocalLimit_TD_1162753_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0528965_output.setInt32(r, 4, tbl_LocalLimit_TD_1162753_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0528965_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0528965_output #Row: " << tbl_GlobalLimit_TD_0528965_output.getNumRow() << std::endl;
}

