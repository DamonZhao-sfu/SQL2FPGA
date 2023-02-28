#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_7194884(Table &tbl_SerializeFromObject_TD_8682935_input, Table &tbl_Filter_TD_7194884_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_order_number#3568L) AND isnotnull(ws_warehouse_sk#3566)))
    // Input: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    // Output: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8682935_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number3568L = tbl_SerializeFromObject_TD_8682935_input.getInt64(i, 1);
        int32_t _ws_warehouse_sk3566 = tbl_SerializeFromObject_TD_8682935_input.getInt32(i, 0);
        if ((_ws_order_number3568L!= 0) && (_ws_warehouse_sk3566!= 0)) {
            int32_t _ws_warehouse_sk3566_t = tbl_SerializeFromObject_TD_8682935_input.getInt32(i, 0);
            tbl_Filter_TD_7194884_output.setInt32(r, 0, _ws_warehouse_sk3566_t);
            int64_t _ws_order_number3568L_t = tbl_SerializeFromObject_TD_8682935_input.getInt64(i, 1);
            tbl_Filter_TD_7194884_output.setInt64(r, 1, _ws_order_number3568L_t);
            r++;
        }
    }
    tbl_Filter_TD_7194884_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7194884_output #Row: " << tbl_Filter_TD_7194884_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7375676(Table &tbl_SerializeFromObject_TD_8568946_input, Table &tbl_Filter_TD_7375676_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_order_number#746L) AND isnotnull(ws_warehouse_sk#744)))
    // Input: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    // Output: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8568946_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_8568946_input.getInt64(i, 1);
        int32_t _ws_warehouse_sk744 = tbl_SerializeFromObject_TD_8568946_input.getInt32(i, 0);
        if ((_ws_order_number746L!= 0) && (_ws_warehouse_sk744!= 0)) {
            int32_t _ws_warehouse_sk744_t = tbl_SerializeFromObject_TD_8568946_input.getInt32(i, 0);
            tbl_Filter_TD_7375676_output.setInt32(r, 0, _ws_warehouse_sk744_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_8568946_input.getInt64(i, 1);
            tbl_Filter_TD_7375676_output.setInt64(r, 1, _ws_order_number746L_t);
            r++;
        }
    }
    tbl_Filter_TD_7375676_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7375676_output #Row: " << tbl_Filter_TD_7375676_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7946934(Table &tbl_SerializeFromObject_TD_8272379_input, Table &tbl_Filter_TD_7946934_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_order_number#3568L) AND isnotnull(ws_warehouse_sk#3566)))
    // Input: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    // Output: ListBuffer(ws_warehouse_sk#3566, ws_order_number#3568L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8272379_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number3568L = tbl_SerializeFromObject_TD_8272379_input.getInt64(i, 1);
        int32_t _ws_warehouse_sk3566 = tbl_SerializeFromObject_TD_8272379_input.getInt32(i, 0);
        if ((_ws_order_number3568L!= 0) && (_ws_warehouse_sk3566!= 0)) {
            int32_t _ws_warehouse_sk3566_t = tbl_SerializeFromObject_TD_8272379_input.getInt32(i, 0);
            tbl_Filter_TD_7946934_output.setInt32(r, 0, _ws_warehouse_sk3566_t);
            int64_t _ws_order_number3568L_t = tbl_SerializeFromObject_TD_8272379_input.getInt64(i, 1);
            tbl_Filter_TD_7946934_output.setInt64(r, 1, _ws_order_number3568L_t);
            r++;
        }
    }
    tbl_Filter_TD_7946934_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7946934_output #Row: " << tbl_Filter_TD_7946934_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7427868(Table &tbl_SerializeFromObject_TD_8590402_input, Table &tbl_Filter_TD_7427868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_order_number#746L) AND isnotnull(ws_warehouse_sk#744)))
    // Input: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    // Output: ListBuffer(ws_warehouse_sk#744, ws_order_number#746L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8590402_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_8590402_input.getInt64(i, 1);
        int32_t _ws_warehouse_sk744 = tbl_SerializeFromObject_TD_8590402_input.getInt32(i, 0);
        if ((_ws_order_number746L!= 0) && (_ws_warehouse_sk744!= 0)) {
            int32_t _ws_warehouse_sk744_t = tbl_SerializeFromObject_TD_8590402_input.getInt32(i, 0);
            tbl_Filter_TD_7427868_output.setInt32(r, 0, _ws_warehouse_sk744_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_8590402_input.getInt64(i, 1);
            tbl_Filter_TD_7427868_output.setInt64(r, 1, _ws_order_number746L_t);
            r++;
        }
    }
    tbl_Filter_TD_7427868_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7427868_output #Row: " << tbl_Filter_TD_7427868_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6454426(Table &tbl_SerializeFromObject_TD_7989440_input, Table &tbl_Filter_TD_6454426_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wr_order_number#844L))
    // Input: ListBuffer(wr_order_number#844L)
    // Output: ListBuffer(wr_order_number#844L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7989440_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_7989440_input.getInt64(i, 0);
        if (_wr_order_number844L!= 0) {
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_7989440_input.getInt64(i, 0);
            tbl_Filter_TD_6454426_output.setInt64(r, 0, _wr_order_number844L_t);
            r++;
        }
    }
    tbl_Filter_TD_6454426_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6454426_output #Row: " << tbl_Filter_TD_6454426_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6390710(Table &tbl_SerializeFromObject_TD_7558492_input, Table &tbl_Filter_TD_6390710_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ws_ship_date_sk#3587) AND isnotnull(ws_ship_addr_sk#3596)) AND isnotnull(ws_web_site_sk#3598)))
    // Input: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Output: ListBuffer(ws_ship_date_sk#3587, ws_ship_addr_sk#3596, ws_web_site_sk#3598, ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7558492_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_date_sk3587 = tbl_SerializeFromObject_TD_7558492_input.getInt32(i, 0);
        int32_t _ws_ship_addr_sk3596 = tbl_SerializeFromObject_TD_7558492_input.getInt32(i, 1);
        int32_t _ws_web_site_sk3598 = tbl_SerializeFromObject_TD_7558492_input.getInt32(i, 2);
        if (((_ws_ship_date_sk3587!= 0) && (_ws_ship_addr_sk3596!= 0)) && (_ws_web_site_sk3598!= 0)) {
            int32_t _ws_ship_date_sk3587_t = tbl_SerializeFromObject_TD_7558492_input.getInt32(i, 0);
            tbl_Filter_TD_6390710_output.setInt32(r, 0, _ws_ship_date_sk3587_t);
            int32_t _ws_ship_addr_sk3596_t = tbl_SerializeFromObject_TD_7558492_input.getInt32(i, 1);
            tbl_Filter_TD_6390710_output.setInt32(r, 1, _ws_ship_addr_sk3596_t);
            int32_t _ws_web_site_sk3598_t = tbl_SerializeFromObject_TD_7558492_input.getInt32(i, 2);
            tbl_Filter_TD_6390710_output.setInt32(r, 2, _ws_web_site_sk3598_t);
            int64_t _ws_order_number3602L_t = tbl_SerializeFromObject_TD_7558492_input.getInt64(i, 3);
            tbl_Filter_TD_6390710_output.setInt64(r, 3, _ws_order_number3602L_t);
            int64_t _ws_ext_ship_cost3613_t = tbl_SerializeFromObject_TD_7558492_input.getInt64(i, 4);
            tbl_Filter_TD_6390710_output.setInt64(r, 4, _ws_ext_ship_cost3613_t);
            int64_t _ws_net_profit3618_t = tbl_SerializeFromObject_TD_7558492_input.getInt64(i, 5);
            tbl_Filter_TD_6390710_output.setInt64(r, 5, _ws_net_profit3618_t);
            r++;
        }
    }
    tbl_Filter_TD_6390710_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6390710_output #Row: " << tbl_Filter_TD_6390710_output.getNumRow() << std::endl;
}



void SW_Filter_TD_4332910(Table &tbl_SerializeFromObject_TD_5780866_input, Table &tbl_Filter_TD_4332910_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 1999-02-01) AND (d_date#122 <= 1999-04-02))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5780866_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_5780866_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_5780866_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 19990201) && (_d_date122 <= 19990402))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_5780866_input.getInt32(i, 0);
            tbl_Filter_TD_4332910_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_4332910_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4332910_output #Row: " << tbl_Filter_TD_4332910_output.getNumRow() << std::endl;
}


void SW_Filter_TD_3765369(Table &tbl_SerializeFromObject_TD_4818348_input, Table &tbl_Filter_TD_3765369_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_state#62) AND (ca_state#62 = IL)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4818348_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_4818348_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_4818348_input.getInt32(i, 0);
        if (((std::string(_ca_state62.data()) != "NULL") && (std::string(_ca_state62.data()) == "IL")) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_4818348_input.getInt32(i, 0);
            tbl_Filter_TD_3765369_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_3765369_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3765369_output #Row: " << tbl_Filter_TD_3765369_output.getNumRow() << std::endl;
}


void SW_Filter_TD_2871122(Table &tbl_SerializeFromObject_TD_3347701_input, Table &tbl_Filter_TD_2871122_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(web_company_name#551) AND (web_company_name#551 = pri)) AND isnotnull(web_site_sk#537)))
    // Input: ListBuffer(web_site_sk#537, web_company_name#551)
    // Output: ListBuffer(web_site_sk#537)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3347701_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _web_company_name551 = tbl_SerializeFromObject_TD_3347701_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _web_site_sk537 = tbl_SerializeFromObject_TD_3347701_input.getInt32(i, 0);
        if (((std::string(_web_company_name551.data()) != "NULL") && (std::string(_web_company_name551.data()) == "pri")) && (_web_site_sk537!= 0)) {
            int32_t _web_site_sk537_t = tbl_SerializeFromObject_TD_3347701_input.getInt32(i, 0);
            tbl_Filter_TD_2871122_output.setInt32(r, 0, _web_site_sk537_t);
            r++;
        }
    }
    tbl_Filter_TD_2871122_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2871122_output #Row: " << tbl_Filter_TD_2871122_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_0170197(Table &tbl_JOIN_INNER_TD_18045_output, Table &tbl_Aggregate_TD_0170197_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(distinct ws_order_number#3602L) AS order count#3544L, MakeDecimal(sum(UnscaledValue(ws_ext_ship_cost#3613)),17,2) AS total shipping cost#3545, MakeDecimal(sum(UnscaledValue(ws_net_profit#3618)),17,2) AS total net profit#3546)
    // Input: ListBuffer(ws_order_number#3602L, ws_ext_ship_cost#3613, ws_net_profit#3618)
    // Output: ListBuffer(order count#3544L, total shipping cost#3545, total net profit#3546)
    int64_t count_0 = 0;
    int64_t sum_1 = 0;
    int64_t sum_2 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_18045_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number3602L = tbl_JOIN_INNER_TD_18045_output.getInt64(i, 0);
        int64_t _ws_ext_ship_cost3613 = tbl_JOIN_INNER_TD_18045_output.getInt64(i, 1);
        int64_t _ws_net_profit3618 = tbl_JOIN_INNER_TD_18045_output.getInt64(i, 2);
        int64_t _count3544L_count_0 = _ws_order_number3602L;
        int64_t _cost3545_sum_1 = _ws_ext_ship_cost3613;
        int64_t _profit3546_sum_2 = _ws_net_profit3618;
        count_0 += _count3544L_count_0;
        sum_1 += _cost3545_sum_1;
        sum_2 += _profit3546_sum_2;
    }
    int r = 0;
    int64_t _count3544L = count_0;
    tbl_Aggregate_TD_0170197_output.setInt64(r++, 0, _count3544L);
    int64_t _cost3545 = sum_1;
    tbl_Aggregate_TD_0170197_output.setInt64(r++, 1, _cost3545);
    int64_t _profit3546 = sum_2;
    tbl_Aggregate_TD_0170197_output.setInt64(r++, 2, _profit3546);
    tbl_Aggregate_TD_0170197_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0170197_output #Row: " << tbl_Aggregate_TD_0170197_output.getNumRow() << std::endl;
}

