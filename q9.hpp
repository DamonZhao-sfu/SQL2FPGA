#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_2501(Table &tbl_SerializeFromObject_TD_3423_input, Table &tbl_Filter_TD_2501_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9758) AND ((ss_quantity#9758 >= 81) AND (ss_quantity#9758 <= 100))))
    // Input: ListBuffer(ss_net_paid#9768, ss_quantity#9758)
    // Output: ListBuffer(ss_net_paid#9768)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3423_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9758 = tbl_SerializeFromObject_TD_3423_input.getInt32(i, 1);
        if ((_ss_quantity9758!= 0) && ((_ss_quantity9758 >= 81) && (_ss_quantity9758 <= 100))) {
            int32_t _ss_net_paid9768_t = tbl_SerializeFromObject_TD_3423_input.getInt32(i, 0);
            tbl_Filter_TD_2501_output.setInt32(r, 0, _ss_net_paid9768_t);
            r++;
        }
    }
    tbl_Filter_TD_2501_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2501_output #Row: " << tbl_Filter_TD_2501_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2983(Table &tbl_SerializeFromObject_TD_3117_input, Table &tbl_Filter_TD_2983_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9735) AND ((ss_quantity#9735 >= 81) AND (ss_quantity#9735 <= 100))))
    // Input: ListBuffer(ss_ext_discount_amt#9739, ss_quantity#9735)
    // Output: ListBuffer(ss_ext_discount_amt#9739)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3117_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9735 = tbl_SerializeFromObject_TD_3117_input.getInt32(i, 1);
        if ((_ss_quantity9735!= 0) && ((_ss_quantity9735 >= 81) && (_ss_quantity9735 <= 100))) {
            int32_t _ss_ext_discount_amt9739_t = tbl_SerializeFromObject_TD_3117_input.getInt32(i, 0);
            tbl_Filter_TD_2983_output.setInt32(r, 0, _ss_ext_discount_amt9739_t);
            r++;
        }
    }
    tbl_Filter_TD_2983_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2983_output #Row: " << tbl_Filter_TD_2983_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2501(Table &tbl_SerializeFromObject_TD_328_input, Table &tbl_Filter_TD_2501_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9712) AND ((ss_quantity#9712 >= 81) AND (ss_quantity#9712 <= 100))))
    // Input: ListBuffer(ss_sold_date_sk#9702, ss_sold_time_sk#9703, ss_item_sk#9704, ss_customer_sk#9705, ss_cdemo_sk#9706, ss_hdemo_sk#9707, ss_addr_sk#9708, ss_store_sk#9709, ss_promo_sk#9710, ss_ticket_number#9711L, ss_quantity#9712, ss_wholesale_cost#9713, ss_list_price#9714, ss_sales_price#9715, ss_ext_discount_amt#9716, ss_ext_sales_price#9717, ss_ext_wholesale_cost#9718, ss_ext_list_price#9719, ss_ext_tax#9720, ss_coupon_amt#9721, ss_net_paid#9722, ss_net_paid_inc_tax#9723, ss_net_profit#9724)
    // Output: ListBuffer(ss_sold_date_sk#9702, ss_sold_time_sk#9703, ss_item_sk#9704, ss_customer_sk#9705, ss_cdemo_sk#9706, ss_hdemo_sk#9707, ss_addr_sk#9708, ss_store_sk#9709, ss_promo_sk#9710, ss_ticket_number#9711L, ss_quantity#9712, ss_wholesale_cost#9713, ss_list_price#9714, ss_sales_price#9715, ss_ext_discount_amt#9716, ss_ext_sales_price#9717, ss_ext_wholesale_cost#9718, ss_ext_list_price#9719, ss_ext_tax#9720, ss_coupon_amt#9721, ss_net_paid#9722, ss_net_paid_inc_tax#9723, ss_net_profit#9724)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_328_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9712 = tbl_SerializeFromObject_TD_328_input.getInt32(i, 10);
        if ((_ss_quantity9712!= 0) && ((_ss_quantity9712 >= 81) && (_ss_quantity9712 <= 100))) {
            int32_t _ss_sold_date_sk9702_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 0);
            tbl_Filter_TD_2501_output.setInt32(r, 0, _ss_sold_date_sk9702_t);
            int32_t _ss_sold_time_sk9703_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 1);
            tbl_Filter_TD_2501_output.setInt32(r, 1, _ss_sold_time_sk9703_t);
            int32_t _ss_item_sk9704_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 2);
            tbl_Filter_TD_2501_output.setInt32(r, 2, _ss_item_sk9704_t);
            int32_t _ss_customer_sk9705_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 3);
            tbl_Filter_TD_2501_output.setInt32(r, 3, _ss_customer_sk9705_t);
            int32_t _ss_cdemo_sk9706_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 4);
            tbl_Filter_TD_2501_output.setInt32(r, 4, _ss_cdemo_sk9706_t);
            int32_t _ss_hdemo_sk9707_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 5);
            tbl_Filter_TD_2501_output.setInt32(r, 5, _ss_hdemo_sk9707_t);
            int32_t _ss_addr_sk9708_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 6);
            tbl_Filter_TD_2501_output.setInt32(r, 6, _ss_addr_sk9708_t);
            int32_t _ss_store_sk9709_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 7);
            tbl_Filter_TD_2501_output.setInt32(r, 7, _ss_store_sk9709_t);
            int32_t _ss_promo_sk9710_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 8);
            tbl_Filter_TD_2501_output.setInt32(r, 8, _ss_promo_sk9710_t);
            int64_t _ss_ticket_number9711L_t = tbl_SerializeFromObject_TD_328_input.getInt64(i, 9);
            tbl_Filter_TD_2501_output.setInt64(r, 9, _ss_ticket_number9711L_t);
            int32_t _ss_quantity9712_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 10);
            tbl_Filter_TD_2501_output.setInt32(r, 10, _ss_quantity9712_t);
            int32_t _ss_wholesale_cost9713_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 11);
            tbl_Filter_TD_2501_output.setInt32(r, 11, _ss_wholesale_cost9713_t);
            int32_t _ss_list_price9714_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 12);
            tbl_Filter_TD_2501_output.setInt32(r, 12, _ss_list_price9714_t);
            int32_t _ss_sales_price9715_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 13);
            tbl_Filter_TD_2501_output.setInt32(r, 13, _ss_sales_price9715_t);
            int32_t _ss_ext_discount_amt9716_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 14);
            tbl_Filter_TD_2501_output.setInt32(r, 14, _ss_ext_discount_amt9716_t);
            int32_t _ss_ext_sales_price9717_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 15);
            tbl_Filter_TD_2501_output.setInt32(r, 15, _ss_ext_sales_price9717_t);
            int32_t _ss_ext_wholesale_cost9718_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 16);
            tbl_Filter_TD_2501_output.setInt32(r, 16, _ss_ext_wholesale_cost9718_t);
            int32_t _ss_ext_list_price9719_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 17);
            tbl_Filter_TD_2501_output.setInt32(r, 17, _ss_ext_list_price9719_t);
            int32_t _ss_ext_tax9720_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 18);
            tbl_Filter_TD_2501_output.setInt32(r, 18, _ss_ext_tax9720_t);
            int32_t _ss_coupon_amt9721_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 19);
            tbl_Filter_TD_2501_output.setInt32(r, 19, _ss_coupon_amt9721_t);
            int32_t _ss_net_paid9722_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 20);
            tbl_Filter_TD_2501_output.setInt32(r, 20, _ss_net_paid9722_t);
            int32_t _ss_net_paid_inc_tax9723_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 21);
            tbl_Filter_TD_2501_output.setInt32(r, 21, _ss_net_paid_inc_tax9723_t);
            int32_t _ss_net_profit9724_t = tbl_SerializeFromObject_TD_328_input.getInt32(i, 22);
            tbl_Filter_TD_2501_output.setInt32(r, 22, _ss_net_profit9724_t);
            r++;
        }
    }
    tbl_Filter_TD_2501_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2501_output #Row: " << tbl_Filter_TD_2501_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2430(Table &tbl_SerializeFromObject_TD_3333_input, Table &tbl_Filter_TD_2430_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9689) AND ((ss_quantity#9689 >= 61) AND (ss_quantity#9689 <= 80))))
    // Input: ListBuffer(ss_net_paid#9699, ss_quantity#9689)
    // Output: ListBuffer(ss_net_paid#9699)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3333_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9689 = tbl_SerializeFromObject_TD_3333_input.getInt32(i, 1);
        if ((_ss_quantity9689!= 0) && ((_ss_quantity9689 >= 61) && (_ss_quantity9689 <= 80))) {
            int32_t _ss_net_paid9699_t = tbl_SerializeFromObject_TD_3333_input.getInt32(i, 0);
            tbl_Filter_TD_2430_output.setInt32(r, 0, _ss_net_paid9699_t);
            r++;
        }
    }
    tbl_Filter_TD_2430_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2430_output #Row: " << tbl_Filter_TD_2430_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2662(Table &tbl_SerializeFromObject_TD_3545_input, Table &tbl_Filter_TD_2662_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9666) AND ((ss_quantity#9666 >= 61) AND (ss_quantity#9666 <= 80))))
    // Input: ListBuffer(ss_ext_discount_amt#9670, ss_quantity#9666)
    // Output: ListBuffer(ss_ext_discount_amt#9670)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3545_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9666 = tbl_SerializeFromObject_TD_3545_input.getInt32(i, 1);
        if ((_ss_quantity9666!= 0) && ((_ss_quantity9666 >= 61) && (_ss_quantity9666 <= 80))) {
            int32_t _ss_ext_discount_amt9670_t = tbl_SerializeFromObject_TD_3545_input.getInt32(i, 0);
            tbl_Filter_TD_2662_output.setInt32(r, 0, _ss_ext_discount_amt9670_t);
            r++;
        }
    }
    tbl_Filter_TD_2662_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2662_output #Row: " << tbl_Filter_TD_2662_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2269(Table &tbl_SerializeFromObject_TD_3396_input, Table &tbl_Filter_TD_2269_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9643) AND ((ss_quantity#9643 >= 61) AND (ss_quantity#9643 <= 80))))
    // Input: ListBuffer(ss_sold_date_sk#9633, ss_sold_time_sk#9634, ss_item_sk#9635, ss_customer_sk#9636, ss_cdemo_sk#9637, ss_hdemo_sk#9638, ss_addr_sk#9639, ss_store_sk#9640, ss_promo_sk#9641, ss_ticket_number#9642L, ss_quantity#9643, ss_wholesale_cost#9644, ss_list_price#9645, ss_sales_price#9646, ss_ext_discount_amt#9647, ss_ext_sales_price#9648, ss_ext_wholesale_cost#9649, ss_ext_list_price#9650, ss_ext_tax#9651, ss_coupon_amt#9652, ss_net_paid#9653, ss_net_paid_inc_tax#9654, ss_net_profit#9655)
    // Output: ListBuffer(ss_sold_date_sk#9633, ss_sold_time_sk#9634, ss_item_sk#9635, ss_customer_sk#9636, ss_cdemo_sk#9637, ss_hdemo_sk#9638, ss_addr_sk#9639, ss_store_sk#9640, ss_promo_sk#9641, ss_ticket_number#9642L, ss_quantity#9643, ss_wholesale_cost#9644, ss_list_price#9645, ss_sales_price#9646, ss_ext_discount_amt#9647, ss_ext_sales_price#9648, ss_ext_wholesale_cost#9649, ss_ext_list_price#9650, ss_ext_tax#9651, ss_coupon_amt#9652, ss_net_paid#9653, ss_net_paid_inc_tax#9654, ss_net_profit#9655)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3396_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9643 = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 10);
        if ((_ss_quantity9643!= 0) && ((_ss_quantity9643 >= 61) && (_ss_quantity9643 <= 80))) {
            int32_t _ss_sold_date_sk9633_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 0);
            tbl_Filter_TD_2269_output.setInt32(r, 0, _ss_sold_date_sk9633_t);
            int32_t _ss_sold_time_sk9634_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 1);
            tbl_Filter_TD_2269_output.setInt32(r, 1, _ss_sold_time_sk9634_t);
            int32_t _ss_item_sk9635_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 2);
            tbl_Filter_TD_2269_output.setInt32(r, 2, _ss_item_sk9635_t);
            int32_t _ss_customer_sk9636_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 3);
            tbl_Filter_TD_2269_output.setInt32(r, 3, _ss_customer_sk9636_t);
            int32_t _ss_cdemo_sk9637_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 4);
            tbl_Filter_TD_2269_output.setInt32(r, 4, _ss_cdemo_sk9637_t);
            int32_t _ss_hdemo_sk9638_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 5);
            tbl_Filter_TD_2269_output.setInt32(r, 5, _ss_hdemo_sk9638_t);
            int32_t _ss_addr_sk9639_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 6);
            tbl_Filter_TD_2269_output.setInt32(r, 6, _ss_addr_sk9639_t);
            int32_t _ss_store_sk9640_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 7);
            tbl_Filter_TD_2269_output.setInt32(r, 7, _ss_store_sk9640_t);
            int32_t _ss_promo_sk9641_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 8);
            tbl_Filter_TD_2269_output.setInt32(r, 8, _ss_promo_sk9641_t);
            int64_t _ss_ticket_number9642L_t = tbl_SerializeFromObject_TD_3396_input.getInt64(i, 9);
            tbl_Filter_TD_2269_output.setInt64(r, 9, _ss_ticket_number9642L_t);
            int32_t _ss_quantity9643_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 10);
            tbl_Filter_TD_2269_output.setInt32(r, 10, _ss_quantity9643_t);
            int32_t _ss_wholesale_cost9644_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 11);
            tbl_Filter_TD_2269_output.setInt32(r, 11, _ss_wholesale_cost9644_t);
            int32_t _ss_list_price9645_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 12);
            tbl_Filter_TD_2269_output.setInt32(r, 12, _ss_list_price9645_t);
            int32_t _ss_sales_price9646_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 13);
            tbl_Filter_TD_2269_output.setInt32(r, 13, _ss_sales_price9646_t);
            int32_t _ss_ext_discount_amt9647_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 14);
            tbl_Filter_TD_2269_output.setInt32(r, 14, _ss_ext_discount_amt9647_t);
            int32_t _ss_ext_sales_price9648_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 15);
            tbl_Filter_TD_2269_output.setInt32(r, 15, _ss_ext_sales_price9648_t);
            int32_t _ss_ext_wholesale_cost9649_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 16);
            tbl_Filter_TD_2269_output.setInt32(r, 16, _ss_ext_wholesale_cost9649_t);
            int32_t _ss_ext_list_price9650_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 17);
            tbl_Filter_TD_2269_output.setInt32(r, 17, _ss_ext_list_price9650_t);
            int32_t _ss_ext_tax9651_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 18);
            tbl_Filter_TD_2269_output.setInt32(r, 18, _ss_ext_tax9651_t);
            int32_t _ss_coupon_amt9652_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 19);
            tbl_Filter_TD_2269_output.setInt32(r, 19, _ss_coupon_amt9652_t);
            int32_t _ss_net_paid9653_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 20);
            tbl_Filter_TD_2269_output.setInt32(r, 20, _ss_net_paid9653_t);
            int32_t _ss_net_paid_inc_tax9654_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 21);
            tbl_Filter_TD_2269_output.setInt32(r, 21, _ss_net_paid_inc_tax9654_t);
            int32_t _ss_net_profit9655_t = tbl_SerializeFromObject_TD_3396_input.getInt32(i, 22);
            tbl_Filter_TD_2269_output.setInt32(r, 22, _ss_net_profit9655_t);
            r++;
        }
    }
    tbl_Filter_TD_2269_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2269_output #Row: " << tbl_Filter_TD_2269_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2927(Table &tbl_SerializeFromObject_TD_3924_input, Table &tbl_Filter_TD_2927_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9620) AND ((ss_quantity#9620 >= 41) AND (ss_quantity#9620 <= 60))))
    // Input: ListBuffer(ss_net_paid#9630, ss_quantity#9620)
    // Output: ListBuffer(ss_net_paid#9630)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3924_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9620 = tbl_SerializeFromObject_TD_3924_input.getInt32(i, 1);
        if ((_ss_quantity9620!= 0) && ((_ss_quantity9620 >= 41) && (_ss_quantity9620 <= 60))) {
            int32_t _ss_net_paid9630_t = tbl_SerializeFromObject_TD_3924_input.getInt32(i, 0);
            tbl_Filter_TD_2927_output.setInt32(r, 0, _ss_net_paid9630_t);
            r++;
        }
    }
    tbl_Filter_TD_2927_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2927_output #Row: " << tbl_Filter_TD_2927_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2627(Table &tbl_SerializeFromObject_TD_368_input, Table &tbl_Filter_TD_2627_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9597) AND ((ss_quantity#9597 >= 41) AND (ss_quantity#9597 <= 60))))
    // Input: ListBuffer(ss_ext_discount_amt#9601, ss_quantity#9597)
    // Output: ListBuffer(ss_ext_discount_amt#9601)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_368_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9597 = tbl_SerializeFromObject_TD_368_input.getInt32(i, 1);
        if ((_ss_quantity9597!= 0) && ((_ss_quantity9597 >= 41) && (_ss_quantity9597 <= 60))) {
            int32_t _ss_ext_discount_amt9601_t = tbl_SerializeFromObject_TD_368_input.getInt32(i, 0);
            tbl_Filter_TD_2627_output.setInt32(r, 0, _ss_ext_discount_amt9601_t);
            r++;
        }
    }
    tbl_Filter_TD_2627_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2627_output #Row: " << tbl_Filter_TD_2627_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2957(Table &tbl_SerializeFromObject_TD_326_input, Table &tbl_Filter_TD_2957_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9574) AND ((ss_quantity#9574 >= 41) AND (ss_quantity#9574 <= 60))))
    // Input: ListBuffer(ss_sold_date_sk#9564, ss_sold_time_sk#9565, ss_item_sk#9566, ss_customer_sk#9567, ss_cdemo_sk#9568, ss_hdemo_sk#9569, ss_addr_sk#9570, ss_store_sk#9571, ss_promo_sk#9572, ss_ticket_number#9573L, ss_quantity#9574, ss_wholesale_cost#9575, ss_list_price#9576, ss_sales_price#9577, ss_ext_discount_amt#9578, ss_ext_sales_price#9579, ss_ext_wholesale_cost#9580, ss_ext_list_price#9581, ss_ext_tax#9582, ss_coupon_amt#9583, ss_net_paid#9584, ss_net_paid_inc_tax#9585, ss_net_profit#9586)
    // Output: ListBuffer(ss_sold_date_sk#9564, ss_sold_time_sk#9565, ss_item_sk#9566, ss_customer_sk#9567, ss_cdemo_sk#9568, ss_hdemo_sk#9569, ss_addr_sk#9570, ss_store_sk#9571, ss_promo_sk#9572, ss_ticket_number#9573L, ss_quantity#9574, ss_wholesale_cost#9575, ss_list_price#9576, ss_sales_price#9577, ss_ext_discount_amt#9578, ss_ext_sales_price#9579, ss_ext_wholesale_cost#9580, ss_ext_list_price#9581, ss_ext_tax#9582, ss_coupon_amt#9583, ss_net_paid#9584, ss_net_paid_inc_tax#9585, ss_net_profit#9586)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_326_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9574 = tbl_SerializeFromObject_TD_326_input.getInt32(i, 10);
        if ((_ss_quantity9574!= 0) && ((_ss_quantity9574 >= 41) && (_ss_quantity9574 <= 60))) {
            int32_t _ss_sold_date_sk9564_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 0);
            tbl_Filter_TD_2957_output.setInt32(r, 0, _ss_sold_date_sk9564_t);
            int32_t _ss_sold_time_sk9565_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 1);
            tbl_Filter_TD_2957_output.setInt32(r, 1, _ss_sold_time_sk9565_t);
            int32_t _ss_item_sk9566_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 2);
            tbl_Filter_TD_2957_output.setInt32(r, 2, _ss_item_sk9566_t);
            int32_t _ss_customer_sk9567_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 3);
            tbl_Filter_TD_2957_output.setInt32(r, 3, _ss_customer_sk9567_t);
            int32_t _ss_cdemo_sk9568_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 4);
            tbl_Filter_TD_2957_output.setInt32(r, 4, _ss_cdemo_sk9568_t);
            int32_t _ss_hdemo_sk9569_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 5);
            tbl_Filter_TD_2957_output.setInt32(r, 5, _ss_hdemo_sk9569_t);
            int32_t _ss_addr_sk9570_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 6);
            tbl_Filter_TD_2957_output.setInt32(r, 6, _ss_addr_sk9570_t);
            int32_t _ss_store_sk9571_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 7);
            tbl_Filter_TD_2957_output.setInt32(r, 7, _ss_store_sk9571_t);
            int32_t _ss_promo_sk9572_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 8);
            tbl_Filter_TD_2957_output.setInt32(r, 8, _ss_promo_sk9572_t);
            int64_t _ss_ticket_number9573L_t = tbl_SerializeFromObject_TD_326_input.getInt64(i, 9);
            tbl_Filter_TD_2957_output.setInt64(r, 9, _ss_ticket_number9573L_t);
            int32_t _ss_quantity9574_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 10);
            tbl_Filter_TD_2957_output.setInt32(r, 10, _ss_quantity9574_t);
            int32_t _ss_wholesale_cost9575_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 11);
            tbl_Filter_TD_2957_output.setInt32(r, 11, _ss_wholesale_cost9575_t);
            int32_t _ss_list_price9576_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 12);
            tbl_Filter_TD_2957_output.setInt32(r, 12, _ss_list_price9576_t);
            int32_t _ss_sales_price9577_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 13);
            tbl_Filter_TD_2957_output.setInt32(r, 13, _ss_sales_price9577_t);
            int32_t _ss_ext_discount_amt9578_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 14);
            tbl_Filter_TD_2957_output.setInt32(r, 14, _ss_ext_discount_amt9578_t);
            int32_t _ss_ext_sales_price9579_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 15);
            tbl_Filter_TD_2957_output.setInt32(r, 15, _ss_ext_sales_price9579_t);
            int32_t _ss_ext_wholesale_cost9580_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 16);
            tbl_Filter_TD_2957_output.setInt32(r, 16, _ss_ext_wholesale_cost9580_t);
            int32_t _ss_ext_list_price9581_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 17);
            tbl_Filter_TD_2957_output.setInt32(r, 17, _ss_ext_list_price9581_t);
            int32_t _ss_ext_tax9582_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 18);
            tbl_Filter_TD_2957_output.setInt32(r, 18, _ss_ext_tax9582_t);
            int32_t _ss_coupon_amt9583_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 19);
            tbl_Filter_TD_2957_output.setInt32(r, 19, _ss_coupon_amt9583_t);
            int32_t _ss_net_paid9584_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 20);
            tbl_Filter_TD_2957_output.setInt32(r, 20, _ss_net_paid9584_t);
            int32_t _ss_net_paid_inc_tax9585_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 21);
            tbl_Filter_TD_2957_output.setInt32(r, 21, _ss_net_paid_inc_tax9585_t);
            int32_t _ss_net_profit9586_t = tbl_SerializeFromObject_TD_326_input.getInt32(i, 22);
            tbl_Filter_TD_2957_output.setInt32(r, 22, _ss_net_profit9586_t);
            r++;
        }
    }
    tbl_Filter_TD_2957_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2957_output #Row: " << tbl_Filter_TD_2957_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2382(Table &tbl_SerializeFromObject_TD_3762_input, Table &tbl_Filter_TD_2382_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9551) AND ((ss_quantity#9551 >= 21) AND (ss_quantity#9551 <= 40))))
    // Input: ListBuffer(ss_net_paid#9561, ss_quantity#9551)
    // Output: ListBuffer(ss_net_paid#9561)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3762_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9551 = tbl_SerializeFromObject_TD_3762_input.getInt32(i, 1);
        if ((_ss_quantity9551!= 0) && ((_ss_quantity9551 >= 21) && (_ss_quantity9551 <= 40))) {
            int32_t _ss_net_paid9561_t = tbl_SerializeFromObject_TD_3762_input.getInt32(i, 0);
            tbl_Filter_TD_2382_output.setInt32(r, 0, _ss_net_paid9561_t);
            r++;
        }
    }
    tbl_Filter_TD_2382_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2382_output #Row: " << tbl_Filter_TD_2382_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2222(Table &tbl_SerializeFromObject_TD_3916_input, Table &tbl_Filter_TD_2222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9528) AND ((ss_quantity#9528 >= 21) AND (ss_quantity#9528 <= 40))))
    // Input: ListBuffer(ss_ext_discount_amt#9532, ss_quantity#9528)
    // Output: ListBuffer(ss_ext_discount_amt#9532)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3916_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9528 = tbl_SerializeFromObject_TD_3916_input.getInt32(i, 1);
        if ((_ss_quantity9528!= 0) && ((_ss_quantity9528 >= 21) && (_ss_quantity9528 <= 40))) {
            int32_t _ss_ext_discount_amt9532_t = tbl_SerializeFromObject_TD_3916_input.getInt32(i, 0);
            tbl_Filter_TD_2222_output.setInt32(r, 0, _ss_ext_discount_amt9532_t);
            r++;
        }
    }
    tbl_Filter_TD_2222_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2222_output #Row: " << tbl_Filter_TD_2222_output.getNumRow() << std::endl;
}

void SW_Filter_TD_242(Table &tbl_SerializeFromObject_TD_3481_input, Table &tbl_Filter_TD_242_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9505) AND ((ss_quantity#9505 >= 21) AND (ss_quantity#9505 <= 40))))
    // Input: ListBuffer(ss_sold_date_sk#9495, ss_sold_time_sk#9496, ss_item_sk#9497, ss_customer_sk#9498, ss_cdemo_sk#9499, ss_hdemo_sk#9500, ss_addr_sk#9501, ss_store_sk#9502, ss_promo_sk#9503, ss_ticket_number#9504L, ss_quantity#9505, ss_wholesale_cost#9506, ss_list_price#9507, ss_sales_price#9508, ss_ext_discount_amt#9509, ss_ext_sales_price#9510, ss_ext_wholesale_cost#9511, ss_ext_list_price#9512, ss_ext_tax#9513, ss_coupon_amt#9514, ss_net_paid#9515, ss_net_paid_inc_tax#9516, ss_net_profit#9517)
    // Output: ListBuffer(ss_sold_date_sk#9495, ss_sold_time_sk#9496, ss_item_sk#9497, ss_customer_sk#9498, ss_cdemo_sk#9499, ss_hdemo_sk#9500, ss_addr_sk#9501, ss_store_sk#9502, ss_promo_sk#9503, ss_ticket_number#9504L, ss_quantity#9505, ss_wholesale_cost#9506, ss_list_price#9507, ss_sales_price#9508, ss_ext_discount_amt#9509, ss_ext_sales_price#9510, ss_ext_wholesale_cost#9511, ss_ext_list_price#9512, ss_ext_tax#9513, ss_coupon_amt#9514, ss_net_paid#9515, ss_net_paid_inc_tax#9516, ss_net_profit#9517)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3481_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9505 = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 10);
        if ((_ss_quantity9505!= 0) && ((_ss_quantity9505 >= 21) && (_ss_quantity9505 <= 40))) {
            int32_t _ss_sold_date_sk9495_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 0);
            tbl_Filter_TD_242_output.setInt32(r, 0, _ss_sold_date_sk9495_t);
            int32_t _ss_sold_time_sk9496_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 1);
            tbl_Filter_TD_242_output.setInt32(r, 1, _ss_sold_time_sk9496_t);
            int32_t _ss_item_sk9497_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 2);
            tbl_Filter_TD_242_output.setInt32(r, 2, _ss_item_sk9497_t);
            int32_t _ss_customer_sk9498_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 3);
            tbl_Filter_TD_242_output.setInt32(r, 3, _ss_customer_sk9498_t);
            int32_t _ss_cdemo_sk9499_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 4);
            tbl_Filter_TD_242_output.setInt32(r, 4, _ss_cdemo_sk9499_t);
            int32_t _ss_hdemo_sk9500_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 5);
            tbl_Filter_TD_242_output.setInt32(r, 5, _ss_hdemo_sk9500_t);
            int32_t _ss_addr_sk9501_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 6);
            tbl_Filter_TD_242_output.setInt32(r, 6, _ss_addr_sk9501_t);
            int32_t _ss_store_sk9502_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 7);
            tbl_Filter_TD_242_output.setInt32(r, 7, _ss_store_sk9502_t);
            int32_t _ss_promo_sk9503_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 8);
            tbl_Filter_TD_242_output.setInt32(r, 8, _ss_promo_sk9503_t);
            int64_t _ss_ticket_number9504L_t = tbl_SerializeFromObject_TD_3481_input.getInt64(i, 9);
            tbl_Filter_TD_242_output.setInt64(r, 9, _ss_ticket_number9504L_t);
            int32_t _ss_quantity9505_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 10);
            tbl_Filter_TD_242_output.setInt32(r, 10, _ss_quantity9505_t);
            int32_t _ss_wholesale_cost9506_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 11);
            tbl_Filter_TD_242_output.setInt32(r, 11, _ss_wholesale_cost9506_t);
            int32_t _ss_list_price9507_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 12);
            tbl_Filter_TD_242_output.setInt32(r, 12, _ss_list_price9507_t);
            int32_t _ss_sales_price9508_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 13);
            tbl_Filter_TD_242_output.setInt32(r, 13, _ss_sales_price9508_t);
            int32_t _ss_ext_discount_amt9509_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 14);
            tbl_Filter_TD_242_output.setInt32(r, 14, _ss_ext_discount_amt9509_t);
            int32_t _ss_ext_sales_price9510_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 15);
            tbl_Filter_TD_242_output.setInt32(r, 15, _ss_ext_sales_price9510_t);
            int32_t _ss_ext_wholesale_cost9511_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 16);
            tbl_Filter_TD_242_output.setInt32(r, 16, _ss_ext_wholesale_cost9511_t);
            int32_t _ss_ext_list_price9512_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 17);
            tbl_Filter_TD_242_output.setInt32(r, 17, _ss_ext_list_price9512_t);
            int32_t _ss_ext_tax9513_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 18);
            tbl_Filter_TD_242_output.setInt32(r, 18, _ss_ext_tax9513_t);
            int32_t _ss_coupon_amt9514_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 19);
            tbl_Filter_TD_242_output.setInt32(r, 19, _ss_coupon_amt9514_t);
            int32_t _ss_net_paid9515_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 20);
            tbl_Filter_TD_242_output.setInt32(r, 20, _ss_net_paid9515_t);
            int32_t _ss_net_paid_inc_tax9516_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 21);
            tbl_Filter_TD_242_output.setInt32(r, 21, _ss_net_paid_inc_tax9516_t);
            int32_t _ss_net_profit9517_t = tbl_SerializeFromObject_TD_3481_input.getInt32(i, 22);
            tbl_Filter_TD_242_output.setInt32(r, 22, _ss_net_profit9517_t);
            r++;
        }
    }
    tbl_Filter_TD_242_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_242_output #Row: " << tbl_Filter_TD_242_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2958(Table &tbl_SerializeFromObject_TD_3616_input, Table &tbl_Filter_TD_2958_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9482) AND ((ss_quantity#9482 >= 1) AND (ss_quantity#9482 <= 20))))
    // Input: ListBuffer(ss_net_paid#9492, ss_quantity#9482)
    // Output: ListBuffer(ss_net_paid#9492)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3616_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9482 = tbl_SerializeFromObject_TD_3616_input.getInt32(i, 1);
        if ((_ss_quantity9482!= 0) && ((_ss_quantity9482 >= 1) && (_ss_quantity9482 <= 20))) {
            int32_t _ss_net_paid9492_t = tbl_SerializeFromObject_TD_3616_input.getInt32(i, 0);
            tbl_Filter_TD_2958_output.setInt32(r, 0, _ss_net_paid9492_t);
            r++;
        }
    }
    tbl_Filter_TD_2958_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2958_output #Row: " << tbl_Filter_TD_2958_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2821(Table &tbl_SerializeFromObject_TD_3393_input, Table &tbl_Filter_TD_2821_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9459) AND ((ss_quantity#9459 >= 1) AND (ss_quantity#9459 <= 20))))
    // Input: ListBuffer(ss_ext_discount_amt#9463, ss_quantity#9459)
    // Output: ListBuffer(ss_ext_discount_amt#9463)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3393_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9459 = tbl_SerializeFromObject_TD_3393_input.getInt32(i, 1);
        if ((_ss_quantity9459!= 0) && ((_ss_quantity9459 >= 1) && (_ss_quantity9459 <= 20))) {
            int32_t _ss_ext_discount_amt9463_t = tbl_SerializeFromObject_TD_3393_input.getInt32(i, 0);
            tbl_Filter_TD_2821_output.setInt32(r, 0, _ss_ext_discount_amt9463_t);
            r++;
        }
    }
    tbl_Filter_TD_2821_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2821_output #Row: " << tbl_Filter_TD_2821_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2316(Table &tbl_SerializeFromObject_TD_3782_input, Table &tbl_Filter_TD_2316_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#1216) AND ((ss_quantity#1216 >= 1) AND (ss_quantity#1216 <= 20))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3782_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 10);
        if ((_ss_quantity1216!= 0) && ((_ss_quantity1216 >= 1) && (_ss_quantity1216 <= 20))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 0);
            tbl_Filter_TD_2316_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 1);
            tbl_Filter_TD_2316_output.setInt32(r, 1, _ss_sold_time_sk1207_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 2);
            tbl_Filter_TD_2316_output.setInt32(r, 2, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 3);
            tbl_Filter_TD_2316_output.setInt32(r, 3, _ss_customer_sk1209_t);
            int32_t _ss_cdemo_sk1210_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 4);
            tbl_Filter_TD_2316_output.setInt32(r, 4, _ss_cdemo_sk1210_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 5);
            tbl_Filter_TD_2316_output.setInt32(r, 5, _ss_hdemo_sk1211_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 6);
            tbl_Filter_TD_2316_output.setInt32(r, 6, _ss_addr_sk1212_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 7);
            tbl_Filter_TD_2316_output.setInt32(r, 7, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 8);
            tbl_Filter_TD_2316_output.setInt32(r, 8, _ss_promo_sk1214_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_3782_input.getInt64(i, 9);
            tbl_Filter_TD_2316_output.setInt64(r, 9, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 10);
            tbl_Filter_TD_2316_output.setInt32(r, 10, _ss_quantity1216_t);
            int32_t _ss_wholesale_cost1217_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 11);
            tbl_Filter_TD_2316_output.setInt32(r, 11, _ss_wholesale_cost1217_t);
            int32_t _ss_list_price1218_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 12);
            tbl_Filter_TD_2316_output.setInt32(r, 12, _ss_list_price1218_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 13);
            tbl_Filter_TD_2316_output.setInt32(r, 13, _ss_sales_price1219_t);
            int32_t _ss_ext_discount_amt1220_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 14);
            tbl_Filter_TD_2316_output.setInt32(r, 14, _ss_ext_discount_amt1220_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 15);
            tbl_Filter_TD_2316_output.setInt32(r, 15, _ss_ext_sales_price1221_t);
            int32_t _ss_ext_wholesale_cost1222_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 16);
            tbl_Filter_TD_2316_output.setInt32(r, 16, _ss_ext_wholesale_cost1222_t);
            int32_t _ss_ext_list_price1223_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 17);
            tbl_Filter_TD_2316_output.setInt32(r, 17, _ss_ext_list_price1223_t);
            int32_t _ss_ext_tax1224_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 18);
            tbl_Filter_TD_2316_output.setInt32(r, 18, _ss_ext_tax1224_t);
            int32_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 19);
            tbl_Filter_TD_2316_output.setInt32(r, 19, _ss_coupon_amt1225_t);
            int32_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 20);
            tbl_Filter_TD_2316_output.setInt32(r, 20, _ss_net_paid1226_t);
            int32_t _ss_net_paid_inc_tax1227_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 21);
            tbl_Filter_TD_2316_output.setInt32(r, 21, _ss_net_paid_inc_tax1227_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_3782_input.getInt32(i, 22);
            tbl_Filter_TD_2316_output.setInt32(r, 22, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_2316_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2316_output #Row: " << tbl_Filter_TD_2316_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1958(Table &tbl_Filter_TD_2501_output, Table &tbl_Aggregate_TD_1958_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9768)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9448)
    // Input: ListBuffer(ss_net_paid#9768)
    // Output: ListBuffer(avg(ss_net_paid)#9448)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2501_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9768 = tbl_Filter_TD_2501_output.getInt32(i, 0);
        int64_t _avgss_net_paid9448_avg_0 = _ss_net_paid9768;
        avg_0 = (avg_0 + _avgss_net_paid9448_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9448 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1958_output.setInt32(r++, 0, _avgss_net_paid9448);
    tbl_Aggregate_TD_1958_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1958_output #Row: " << tbl_Aggregate_TD_1958_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1286(Table &tbl_Filter_TD_2983_output, Table &tbl_Aggregate_TD_1286_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9739)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9446)
    // Input: ListBuffer(ss_ext_discount_amt#9739)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9446)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2983_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9739 = tbl_Filter_TD_2983_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9446_avg_0 = _ss_ext_discount_amt9739;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9446_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9446 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1286_output.setInt32(r++, 0, _avgss_ext_discount_amt9446);
    tbl_Aggregate_TD_1286_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1286_output #Row: " << tbl_Aggregate_TD_1286_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1841(Table &tbl_Filter_TD_2501_output, Table &tbl_Aggregate_TD_1841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9444L)
    // Input: ListBuffer(ss_sold_date_sk#9702, ss_sold_time_sk#9703, ss_item_sk#9704, ss_customer_sk#9705, ss_cdemo_sk#9706, ss_hdemo_sk#9707, ss_addr_sk#9708, ss_store_sk#9709, ss_promo_sk#9710, ss_ticket_number#9711L, ss_quantity#9712, ss_wholesale_cost#9713, ss_list_price#9714, ss_sales_price#9715, ss_ext_discount_amt#9716, ss_ext_sales_price#9717, ss_ext_wholesale_cost#9718, ss_ext_list_price#9719, ss_ext_tax#9720, ss_coupon_amt#9721, ss_net_paid#9722, ss_net_paid_inc_tax#9723, ss_net_profit#9724)
    // Output: ListBuffer(count(1)#9444L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2501_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9702 = tbl_Filter_TD_2501_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9703 = tbl_Filter_TD_2501_output.getInt32(i, 1);
        int32_t _ss_item_sk9704 = tbl_Filter_TD_2501_output.getInt32(i, 2);
        int32_t _ss_customer_sk9705 = tbl_Filter_TD_2501_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9706 = tbl_Filter_TD_2501_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9707 = tbl_Filter_TD_2501_output.getInt32(i, 5);
        int32_t _ss_addr_sk9708 = tbl_Filter_TD_2501_output.getInt32(i, 6);
        int32_t _ss_store_sk9709 = tbl_Filter_TD_2501_output.getInt32(i, 7);
        int32_t _ss_promo_sk9710 = tbl_Filter_TD_2501_output.getInt32(i, 8);
        int64_t _ss_ticket_number9711L = tbl_Filter_TD_2501_output.getInt64(i, 9);
        int32_t _ss_quantity9712 = tbl_Filter_TD_2501_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost9713 = tbl_Filter_TD_2501_output.getInt32(i, 11);
        int32_t _ss_list_price9714 = tbl_Filter_TD_2501_output.getInt32(i, 12);
        int32_t _ss_sales_price9715 = tbl_Filter_TD_2501_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt9716 = tbl_Filter_TD_2501_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price9717 = tbl_Filter_TD_2501_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost9718 = tbl_Filter_TD_2501_output.getInt32(i, 16);
        int32_t _ss_ext_list_price9719 = tbl_Filter_TD_2501_output.getInt32(i, 17);
        int32_t _ss_ext_tax9720 = tbl_Filter_TD_2501_output.getInt32(i, 18);
        int32_t _ss_coupon_amt9721 = tbl_Filter_TD_2501_output.getInt32(i, 19);
        int32_t _ss_net_paid9722 = tbl_Filter_TD_2501_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax9723 = tbl_Filter_TD_2501_output.getInt32(i, 21);
        int32_t _ss_net_profit9724 = tbl_Filter_TD_2501_output.getInt32(i, 22);
        int64_t _count19444L_count_0 = 1;
        count_0 += _count19444L_count_0;
    }
    int r = 0;
    int64_t _count19444L = count_0;
    tbl_Aggregate_TD_1841_output.setInt64(r++, 0, _count19444L);
    tbl_Aggregate_TD_1841_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1841_output #Row: " << tbl_Aggregate_TD_1841_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1164(Table &tbl_Filter_TD_2430_output, Table &tbl_Aggregate_TD_1164_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9699)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9442)
    // Input: ListBuffer(ss_net_paid#9699)
    // Output: ListBuffer(avg(ss_net_paid)#9442)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2430_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9699 = tbl_Filter_TD_2430_output.getInt32(i, 0);
        int64_t _avgss_net_paid9442_avg_0 = _ss_net_paid9699;
        avg_0 = (avg_0 + _avgss_net_paid9442_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9442 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1164_output.setInt32(r++, 0, _avgss_net_paid9442);
    tbl_Aggregate_TD_1164_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1164_output #Row: " << tbl_Aggregate_TD_1164_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_113(Table &tbl_Filter_TD_2662_output, Table &tbl_Aggregate_TD_113_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9670)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9440)
    // Input: ListBuffer(ss_ext_discount_amt#9670)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9440)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2662_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9670 = tbl_Filter_TD_2662_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9440_avg_0 = _ss_ext_discount_amt9670;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9440_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9440 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_113_output.setInt32(r++, 0, _avgss_ext_discount_amt9440);
    tbl_Aggregate_TD_113_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_113_output #Row: " << tbl_Aggregate_TD_113_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1237(Table &tbl_Filter_TD_2269_output, Table &tbl_Aggregate_TD_1237_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9438L)
    // Input: ListBuffer(ss_sold_date_sk#9633, ss_sold_time_sk#9634, ss_item_sk#9635, ss_customer_sk#9636, ss_cdemo_sk#9637, ss_hdemo_sk#9638, ss_addr_sk#9639, ss_store_sk#9640, ss_promo_sk#9641, ss_ticket_number#9642L, ss_quantity#9643, ss_wholesale_cost#9644, ss_list_price#9645, ss_sales_price#9646, ss_ext_discount_amt#9647, ss_ext_sales_price#9648, ss_ext_wholesale_cost#9649, ss_ext_list_price#9650, ss_ext_tax#9651, ss_coupon_amt#9652, ss_net_paid#9653, ss_net_paid_inc_tax#9654, ss_net_profit#9655)
    // Output: ListBuffer(count(1)#9438L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2269_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9633 = tbl_Filter_TD_2269_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9634 = tbl_Filter_TD_2269_output.getInt32(i, 1);
        int32_t _ss_item_sk9635 = tbl_Filter_TD_2269_output.getInt32(i, 2);
        int32_t _ss_customer_sk9636 = tbl_Filter_TD_2269_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9637 = tbl_Filter_TD_2269_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9638 = tbl_Filter_TD_2269_output.getInt32(i, 5);
        int32_t _ss_addr_sk9639 = tbl_Filter_TD_2269_output.getInt32(i, 6);
        int32_t _ss_store_sk9640 = tbl_Filter_TD_2269_output.getInt32(i, 7);
        int32_t _ss_promo_sk9641 = tbl_Filter_TD_2269_output.getInt32(i, 8);
        int64_t _ss_ticket_number9642L = tbl_Filter_TD_2269_output.getInt64(i, 9);
        int32_t _ss_quantity9643 = tbl_Filter_TD_2269_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost9644 = tbl_Filter_TD_2269_output.getInt32(i, 11);
        int32_t _ss_list_price9645 = tbl_Filter_TD_2269_output.getInt32(i, 12);
        int32_t _ss_sales_price9646 = tbl_Filter_TD_2269_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt9647 = tbl_Filter_TD_2269_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price9648 = tbl_Filter_TD_2269_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost9649 = tbl_Filter_TD_2269_output.getInt32(i, 16);
        int32_t _ss_ext_list_price9650 = tbl_Filter_TD_2269_output.getInt32(i, 17);
        int32_t _ss_ext_tax9651 = tbl_Filter_TD_2269_output.getInt32(i, 18);
        int32_t _ss_coupon_amt9652 = tbl_Filter_TD_2269_output.getInt32(i, 19);
        int32_t _ss_net_paid9653 = tbl_Filter_TD_2269_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax9654 = tbl_Filter_TD_2269_output.getInt32(i, 21);
        int32_t _ss_net_profit9655 = tbl_Filter_TD_2269_output.getInt32(i, 22);
        int64_t _count19438L_count_0 = 1;
        count_0 += _count19438L_count_0;
    }
    int r = 0;
    int64_t _count19438L = count_0;
    tbl_Aggregate_TD_1237_output.setInt64(r++, 0, _count19438L);
    tbl_Aggregate_TD_1237_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1237_output #Row: " << tbl_Aggregate_TD_1237_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1945(Table &tbl_Filter_TD_2927_output, Table &tbl_Aggregate_TD_1945_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9630)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9436)
    // Input: ListBuffer(ss_net_paid#9630)
    // Output: ListBuffer(avg(ss_net_paid)#9436)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2927_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9630 = tbl_Filter_TD_2927_output.getInt32(i, 0);
        int64_t _avgss_net_paid9436_avg_0 = _ss_net_paid9630;
        avg_0 = (avg_0 + _avgss_net_paid9436_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9436 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1945_output.setInt32(r++, 0, _avgss_net_paid9436);
    tbl_Aggregate_TD_1945_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1945_output #Row: " << tbl_Aggregate_TD_1945_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1278(Table &tbl_Filter_TD_2627_output, Table &tbl_Aggregate_TD_1278_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9601)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9434)
    // Input: ListBuffer(ss_ext_discount_amt#9601)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9434)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2627_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9601 = tbl_Filter_TD_2627_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9434_avg_0 = _ss_ext_discount_amt9601;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9434_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9434 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1278_output.setInt32(r++, 0, _avgss_ext_discount_amt9434);
    tbl_Aggregate_TD_1278_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1278_output #Row: " << tbl_Aggregate_TD_1278_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1723(Table &tbl_Filter_TD_2957_output, Table &tbl_Aggregate_TD_1723_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9432L)
    // Input: ListBuffer(ss_sold_date_sk#9564, ss_sold_time_sk#9565, ss_item_sk#9566, ss_customer_sk#9567, ss_cdemo_sk#9568, ss_hdemo_sk#9569, ss_addr_sk#9570, ss_store_sk#9571, ss_promo_sk#9572, ss_ticket_number#9573L, ss_quantity#9574, ss_wholesale_cost#9575, ss_list_price#9576, ss_sales_price#9577, ss_ext_discount_amt#9578, ss_ext_sales_price#9579, ss_ext_wholesale_cost#9580, ss_ext_list_price#9581, ss_ext_tax#9582, ss_coupon_amt#9583, ss_net_paid#9584, ss_net_paid_inc_tax#9585, ss_net_profit#9586)
    // Output: ListBuffer(count(1)#9432L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2957_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9564 = tbl_Filter_TD_2957_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9565 = tbl_Filter_TD_2957_output.getInt32(i, 1);
        int32_t _ss_item_sk9566 = tbl_Filter_TD_2957_output.getInt32(i, 2);
        int32_t _ss_customer_sk9567 = tbl_Filter_TD_2957_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9568 = tbl_Filter_TD_2957_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9569 = tbl_Filter_TD_2957_output.getInt32(i, 5);
        int32_t _ss_addr_sk9570 = tbl_Filter_TD_2957_output.getInt32(i, 6);
        int32_t _ss_store_sk9571 = tbl_Filter_TD_2957_output.getInt32(i, 7);
        int32_t _ss_promo_sk9572 = tbl_Filter_TD_2957_output.getInt32(i, 8);
        int64_t _ss_ticket_number9573L = tbl_Filter_TD_2957_output.getInt64(i, 9);
        int32_t _ss_quantity9574 = tbl_Filter_TD_2957_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost9575 = tbl_Filter_TD_2957_output.getInt32(i, 11);
        int32_t _ss_list_price9576 = tbl_Filter_TD_2957_output.getInt32(i, 12);
        int32_t _ss_sales_price9577 = tbl_Filter_TD_2957_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt9578 = tbl_Filter_TD_2957_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price9579 = tbl_Filter_TD_2957_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost9580 = tbl_Filter_TD_2957_output.getInt32(i, 16);
        int32_t _ss_ext_list_price9581 = tbl_Filter_TD_2957_output.getInt32(i, 17);
        int32_t _ss_ext_tax9582 = tbl_Filter_TD_2957_output.getInt32(i, 18);
        int32_t _ss_coupon_amt9583 = tbl_Filter_TD_2957_output.getInt32(i, 19);
        int32_t _ss_net_paid9584 = tbl_Filter_TD_2957_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax9585 = tbl_Filter_TD_2957_output.getInt32(i, 21);
        int32_t _ss_net_profit9586 = tbl_Filter_TD_2957_output.getInt32(i, 22);
        int64_t _count19432L_count_0 = 1;
        count_0 += _count19432L_count_0;
    }
    int r = 0;
    int64_t _count19432L = count_0;
    tbl_Aggregate_TD_1723_output.setInt64(r++, 0, _count19432L);
    tbl_Aggregate_TD_1723_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1723_output #Row: " << tbl_Aggregate_TD_1723_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1874(Table &tbl_Filter_TD_2382_output, Table &tbl_Aggregate_TD_1874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9561)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9430)
    // Input: ListBuffer(ss_net_paid#9561)
    // Output: ListBuffer(avg(ss_net_paid)#9430)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2382_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9561 = tbl_Filter_TD_2382_output.getInt32(i, 0);
        int64_t _avgss_net_paid9430_avg_0 = _ss_net_paid9561;
        avg_0 = (avg_0 + _avgss_net_paid9430_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9430 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1874_output.setInt32(r++, 0, _avgss_net_paid9430);
    tbl_Aggregate_TD_1874_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1874_output #Row: " << tbl_Aggregate_TD_1874_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1433(Table &tbl_Filter_TD_2222_output, Table &tbl_Aggregate_TD_1433_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9532)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9428)
    // Input: ListBuffer(ss_ext_discount_amt#9532)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9428)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2222_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9532 = tbl_Filter_TD_2222_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9428_avg_0 = _ss_ext_discount_amt9532;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9428_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9428 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1433_output.setInt32(r++, 0, _avgss_ext_discount_amt9428);
    tbl_Aggregate_TD_1433_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1433_output #Row: " << tbl_Aggregate_TD_1433_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1278(Table &tbl_Filter_TD_242_output, Table &tbl_Aggregate_TD_1278_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9426L)
    // Input: ListBuffer(ss_sold_date_sk#9495, ss_sold_time_sk#9496, ss_item_sk#9497, ss_customer_sk#9498, ss_cdemo_sk#9499, ss_hdemo_sk#9500, ss_addr_sk#9501, ss_store_sk#9502, ss_promo_sk#9503, ss_ticket_number#9504L, ss_quantity#9505, ss_wholesale_cost#9506, ss_list_price#9507, ss_sales_price#9508, ss_ext_discount_amt#9509, ss_ext_sales_price#9510, ss_ext_wholesale_cost#9511, ss_ext_list_price#9512, ss_ext_tax#9513, ss_coupon_amt#9514, ss_net_paid#9515, ss_net_paid_inc_tax#9516, ss_net_profit#9517)
    // Output: ListBuffer(count(1)#9426L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_242_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9495 = tbl_Filter_TD_242_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9496 = tbl_Filter_TD_242_output.getInt32(i, 1);
        int32_t _ss_item_sk9497 = tbl_Filter_TD_242_output.getInt32(i, 2);
        int32_t _ss_customer_sk9498 = tbl_Filter_TD_242_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9499 = tbl_Filter_TD_242_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9500 = tbl_Filter_TD_242_output.getInt32(i, 5);
        int32_t _ss_addr_sk9501 = tbl_Filter_TD_242_output.getInt32(i, 6);
        int32_t _ss_store_sk9502 = tbl_Filter_TD_242_output.getInt32(i, 7);
        int32_t _ss_promo_sk9503 = tbl_Filter_TD_242_output.getInt32(i, 8);
        int64_t _ss_ticket_number9504L = tbl_Filter_TD_242_output.getInt64(i, 9);
        int32_t _ss_quantity9505 = tbl_Filter_TD_242_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost9506 = tbl_Filter_TD_242_output.getInt32(i, 11);
        int32_t _ss_list_price9507 = tbl_Filter_TD_242_output.getInt32(i, 12);
        int32_t _ss_sales_price9508 = tbl_Filter_TD_242_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt9509 = tbl_Filter_TD_242_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price9510 = tbl_Filter_TD_242_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost9511 = tbl_Filter_TD_242_output.getInt32(i, 16);
        int32_t _ss_ext_list_price9512 = tbl_Filter_TD_242_output.getInt32(i, 17);
        int32_t _ss_ext_tax9513 = tbl_Filter_TD_242_output.getInt32(i, 18);
        int32_t _ss_coupon_amt9514 = tbl_Filter_TD_242_output.getInt32(i, 19);
        int32_t _ss_net_paid9515 = tbl_Filter_TD_242_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax9516 = tbl_Filter_TD_242_output.getInt32(i, 21);
        int32_t _ss_net_profit9517 = tbl_Filter_TD_242_output.getInt32(i, 22);
        int64_t _count19426L_count_0 = 1;
        count_0 += _count19426L_count_0;
    }
    int r = 0;
    int64_t _count19426L = count_0;
    tbl_Aggregate_TD_1278_output.setInt64(r++, 0, _count19426L);
    tbl_Aggregate_TD_1278_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1278_output #Row: " << tbl_Aggregate_TD_1278_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1450(Table &tbl_Filter_TD_2958_output, Table &tbl_Aggregate_TD_1450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9492)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9424)
    // Input: ListBuffer(ss_net_paid#9492)
    // Output: ListBuffer(avg(ss_net_paid)#9424)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2958_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9492 = tbl_Filter_TD_2958_output.getInt32(i, 0);
        int64_t _avgss_net_paid9424_avg_0 = _ss_net_paid9492;
        avg_0 = (avg_0 + _avgss_net_paid9424_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9424 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1450_output.setInt32(r++, 0, _avgss_net_paid9424);
    tbl_Aggregate_TD_1450_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1450_output #Row: " << tbl_Aggregate_TD_1450_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1280(Table &tbl_Filter_TD_2821_output, Table &tbl_Aggregate_TD_1280_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9463)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9422)
    // Input: ListBuffer(ss_ext_discount_amt#9463)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9422)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2821_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9463 = tbl_Filter_TD_2821_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9422_avg_0 = _ss_ext_discount_amt9463;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9422_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9422 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1280_output.setInt32(r++, 0, _avgss_ext_discount_amt9422);
    tbl_Aggregate_TD_1280_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1280_output #Row: " << tbl_Aggregate_TD_1280_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1152(Table &tbl_Filter_TD_2316_output, Table &tbl_Aggregate_TD_1152_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9420L)
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    // Output: ListBuffer(count(1)#9420L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2316_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_2316_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk1207 = tbl_Filter_TD_2316_output.getInt32(i, 1);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_2316_output.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_Filter_TD_2316_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk1210 = tbl_Filter_TD_2316_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_2316_output.getInt32(i, 5);
        int32_t _ss_addr_sk1212 = tbl_Filter_TD_2316_output.getInt32(i, 6);
        int32_t _ss_store_sk1213 = tbl_Filter_TD_2316_output.getInt32(i, 7);
        int32_t _ss_promo_sk1214 = tbl_Filter_TD_2316_output.getInt32(i, 8);
        int64_t _ss_ticket_number1215L = tbl_Filter_TD_2316_output.getInt64(i, 9);
        int32_t _ss_quantity1216 = tbl_Filter_TD_2316_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_2316_output.getInt32(i, 11);
        int32_t _ss_list_price1218 = tbl_Filter_TD_2316_output.getInt32(i, 12);
        int32_t _ss_sales_price1219 = tbl_Filter_TD_2316_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt1220 = tbl_Filter_TD_2316_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_2316_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost1222 = tbl_Filter_TD_2316_output.getInt32(i, 16);
        int32_t _ss_ext_list_price1223 = tbl_Filter_TD_2316_output.getInt32(i, 17);
        int32_t _ss_ext_tax1224 = tbl_Filter_TD_2316_output.getInt32(i, 18);
        int32_t _ss_coupon_amt1225 = tbl_Filter_TD_2316_output.getInt32(i, 19);
        int32_t _ss_net_paid1226 = tbl_Filter_TD_2316_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax1227 = tbl_Filter_TD_2316_output.getInt32(i, 21);
        int32_t _ss_net_profit1228 = tbl_Filter_TD_2316_output.getInt32(i, 22);
        int64_t _count19420L_count_0 = 1;
        count_0 += _count19420L_count_0;
    }
    int r = 0;
    int64_t _count19420L = count_0;
    tbl_Aggregate_TD_1152_output.setInt64(r++, 0, _count19420L);
    tbl_Aggregate_TD_1152_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1152_output #Row: " << tbl_Aggregate_TD_1152_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1201(Table &tbl_SerializeFromObject_TD_229_input, Table &tbl_Filter_TD_1201_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(r_reason_sk#351) AND (r_reason_sk#351 = 1)))
    // Input: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    // Output: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_229_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_SerializeFromObject_TD_229_input.getInt32(i, 0);
        if ((_r_reason_sk351!= 0) && (_r_reason_sk351 == 1)) {
            int32_t _r_reason_sk351_t = tbl_SerializeFromObject_TD_229_input.getInt32(i, 0);
            tbl_Filter_TD_1201_output.setInt32(r, 0, _r_reason_sk351_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_id352_t = tbl_SerializeFromObject_TD_229_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_1201_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _r_reason_id352_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_t = tbl_SerializeFromObject_TD_229_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_1201_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _r_reason_desc353_t);
            r++;
        }
    }
    tbl_Filter_TD_1201_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1201_output #Row: " << tbl_Filter_TD_1201_output.getNumRow() << std::endl;
}

void SW_Project_TD_0675(Table &tbl_Filter_TD_1201_output, Table &tbl_Aggregate_TD_1152_output, Table &tbl_Aggregate_TD_1280_output, Table &tbl_Aggregate_TD_1450_output, Table &tbl_Aggregate_TD_1278_output, Table &tbl_Aggregate_TD_1433_output, Table &tbl_Aggregate_TD_1874_output, Table &tbl_Aggregate_TD_1723_output, Table &tbl_Aggregate_TD_1278_output, Table &tbl_Aggregate_TD_1945_output, Table &tbl_Aggregate_TD_1237_output, Table &tbl_Aggregate_TD_113_output, Table &tbl_Aggregate_TD_1164_output, Table &tbl_Aggregate_TD_1841_output, Table &tbl_Aggregate_TD_1286_output, Table &tbl_Aggregate_TD_1958_output, Table &tbl_Project_TD_0675_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CASE WHEN (scalar-subquery#9399 [] > 74129) THEN scalar-subquery#9400 [] ELSE scalar-subquery#9401 [] END AS bucket1#9402, CASE WHEN (scalar-subquery#9403 [] > 122840) THEN scalar-subquery#9404 [] ELSE scalar-subquery#9405 [] END AS bucket2#9406, CASE WHEN (scalar-subquery#9407 [] > 56580) THEN scalar-subquery#9408 [] ELSE scalar-subquery#9409 [] END AS bucket3#9410, CASE WHEN (scalar-subquery#9411 [] > 10097) THEN scalar-subquery#9412 [] ELSE scalar-subquery#9413 [] END AS bucket4#9414, CASE WHEN (scalar-subquery#9415 [] > 165306) THEN scalar-subquery#9416 [] ELSE scalar-subquery#9417 [] END AS bucket5#9418)
    // Input: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    // Output: ListBuffer(bucket1#9402, bucket2#9406, bucket3#9410, bucket4#9414, bucket5#9418)
    int nrow1 = tbl_Filter_TD_1201_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_Filter_TD_1201_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_id352 = tbl_Filter_TD_1201_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353 = tbl_Filter_TD_1201_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _bucket19402 = _count19420L ? _avgss_ext_discount_amt9422 : _avgss_net_paid9424;
        tbl_Project_TD_0675_output.setInt32(i, 0, _bucket19402);
        int32_t _bucket29406 = _count19426L ? _avgss_ext_discount_amt9428 : _avgss_net_paid9430;
        tbl_Project_TD_0675_output.setInt32(i, 1, _bucket29406);
        int32_t _bucket39410 = _count19432L ? _avgss_ext_discount_amt9434 : _avgss_net_paid9436;
        tbl_Project_TD_0675_output.setInt32(i, 2, _bucket39410);
        int32_t _bucket49414 = _count19438L ? _avgss_ext_discount_amt9440 : _avgss_net_paid9442;
        tbl_Project_TD_0675_output.setInt32(i, 3, _bucket49414);
        int32_t _bucket59418 = _count19444L ? _avgss_ext_discount_amt9446 : _avgss_net_paid9448;
        tbl_Project_TD_0675_output.setInt32(i, 4, _bucket59418);
    }
    tbl_Project_TD_0675_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_0675_output #Row: " << tbl_Project_TD_0675_output.getNumRow() << std::endl;
}

