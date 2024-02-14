#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_2651(Table &tbl_SerializeFromObject_TD_3511_input, Table &tbl_Filter_TD_2651_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9737) AND ((ss_quantity#9737 >= 81) AND (ss_quantity#9737 <= 100))))
    // Input: ListBuffer(ss_net_paid#9747, ss_quantity#9737)
    // Output: ListBuffer(ss_net_paid#9747)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3511_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9737 = tbl_SerializeFromObject_TD_3511_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9737 >= 81) && (_ss_quantity9737 <= 100))) {
            int32_t _ss_net_paid9747_t = tbl_SerializeFromObject_TD_3511_input.getInt32(i, 0);
            tbl_Filter_TD_2651_output.setInt32(r, 0, _ss_net_paid9747_t);
            r++;
        }
    }
    tbl_Filter_TD_2651_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2651_output #Row: " << tbl_Filter_TD_2651_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2962(Table &tbl_SerializeFromObject_TD_3208_input, Table &tbl_Filter_TD_2962_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9714) AND ((ss_quantity#9714 >= 81) AND (ss_quantity#9714 <= 100))))
    // Input: ListBuffer(ss_ext_discount_amt#9718, ss_quantity#9714)
    // Output: ListBuffer(ss_ext_discount_amt#9718)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3208_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9714 = tbl_SerializeFromObject_TD_3208_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9714 >= 81) && (_ss_quantity9714 <= 100))) {
            int32_t _ss_ext_discount_amt9718_t = tbl_SerializeFromObject_TD_3208_input.getInt32(i, 0);
            tbl_Filter_TD_2962_output.setInt32(r, 0, _ss_ext_discount_amt9718_t);
            r++;
        }
    }
    tbl_Filter_TD_2962_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2962_output #Row: " << tbl_Filter_TD_2962_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2642(Table &tbl_SerializeFromObject_TD_3170_input, Table &tbl_Filter_TD_2642_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9691) AND ((ss_quantity#9691 >= 81) AND (ss_quantity#9691 <= 100))))
    // Input: ListBuffer(ss_sold_date_sk#9681, ss_sold_time_sk#9682, ss_item_sk#9683, ss_customer_sk#9684, ss_cdemo_sk#9685, ss_hdemo_sk#9686, ss_addr_sk#9687, ss_store_sk#9688, ss_promo_sk#9689, ss_ticket_number#9690L, ss_quantity#9691, ss_wholesale_cost#9692, ss_list_price#9693, ss_sales_price#9694, ss_ext_discount_amt#9695, ss_ext_sales_price#9696, ss_ext_wholesale_cost#9697, ss_ext_list_price#9698, ss_ext_tax#9699, ss_coupon_amt#9700, ss_net_paid#9701, ss_net_paid_inc_tax#9702, ss_net_profit#9703)
    // Output: ListBuffer(ss_sold_date_sk#9681, ss_sold_time_sk#9682, ss_item_sk#9683, ss_customer_sk#9684, ss_cdemo_sk#9685, ss_hdemo_sk#9686, ss_addr_sk#9687, ss_store_sk#9688, ss_promo_sk#9689, ss_ticket_number#9690L, ss_quantity#9691, ss_wholesale_cost#9692, ss_list_price#9693, ss_sales_price#9694, ss_ext_discount_amt#9695, ss_ext_sales_price#9696, ss_ext_wholesale_cost#9697, ss_ext_list_price#9698, ss_ext_tax#9699, ss_coupon_amt#9700, ss_net_paid#9701, ss_net_paid_inc_tax#9702, ss_net_profit#9703)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3170_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9691 = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 10);
        if ((1) && ((_ss_quantity9691 >= 81) && (_ss_quantity9691 <= 100))) {
            int32_t _ss_sold_date_sk9681_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 0);
            tbl_Filter_TD_2642_output.setInt32(r, 0, _ss_sold_date_sk9681_t);
            int32_t _ss_sold_time_sk9682_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 1);
            tbl_Filter_TD_2642_output.setInt32(r, 1, _ss_sold_time_sk9682_t);
            int32_t _ss_item_sk9683_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 2);
            tbl_Filter_TD_2642_output.setInt32(r, 2, _ss_item_sk9683_t);
            int32_t _ss_customer_sk9684_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 3);
            tbl_Filter_TD_2642_output.setInt32(r, 3, _ss_customer_sk9684_t);
            int32_t _ss_cdemo_sk9685_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 4);
            tbl_Filter_TD_2642_output.setInt32(r, 4, _ss_cdemo_sk9685_t);
            int32_t _ss_hdemo_sk9686_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 5);
            tbl_Filter_TD_2642_output.setInt32(r, 5, _ss_hdemo_sk9686_t);
            int32_t _ss_addr_sk9687_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 6);
            tbl_Filter_TD_2642_output.setInt32(r, 6, _ss_addr_sk9687_t);
            int32_t _ss_store_sk9688_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 7);
            tbl_Filter_TD_2642_output.setInt32(r, 7, _ss_store_sk9688_t);
            int32_t _ss_promo_sk9689_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 8);
            tbl_Filter_TD_2642_output.setInt32(r, 8, _ss_promo_sk9689_t);
            int64_t _ss_ticket_number9690L_t = tbl_SerializeFromObject_TD_3170_input.getInt64(i, 9);
            tbl_Filter_TD_2642_output.setInt64(r, 9, _ss_ticket_number9690L_t);
            int32_t _ss_quantity9691_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 10);
            tbl_Filter_TD_2642_output.setInt32(r, 10, _ss_quantity9691_t);
            int32_t _ss_wholesale_cost9692_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 11);
            tbl_Filter_TD_2642_output.setInt32(r, 11, _ss_wholesale_cost9692_t);
            int32_t _ss_list_price9693_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 12);
            tbl_Filter_TD_2642_output.setInt32(r, 12, _ss_list_price9693_t);
            int32_t _ss_sales_price9694_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 13);
            tbl_Filter_TD_2642_output.setInt32(r, 13, _ss_sales_price9694_t);
            int32_t _ss_ext_discount_amt9695_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 14);
            tbl_Filter_TD_2642_output.setInt32(r, 14, _ss_ext_discount_amt9695_t);
            int32_t _ss_ext_sales_price9696_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 15);
            tbl_Filter_TD_2642_output.setInt32(r, 15, _ss_ext_sales_price9696_t);
            int32_t _ss_ext_wholesale_cost9697_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 16);
            tbl_Filter_TD_2642_output.setInt32(r, 16, _ss_ext_wholesale_cost9697_t);
            int32_t _ss_ext_list_price9698_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 17);
            tbl_Filter_TD_2642_output.setInt32(r, 17, _ss_ext_list_price9698_t);
            int32_t _ss_ext_tax9699_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 18);
            tbl_Filter_TD_2642_output.setInt32(r, 18, _ss_ext_tax9699_t);
            int32_t _ss_coupon_amt9700_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 19);
            tbl_Filter_TD_2642_output.setInt32(r, 19, _ss_coupon_amt9700_t);
            int32_t _ss_net_paid9701_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 20);
            tbl_Filter_TD_2642_output.setInt32(r, 20, _ss_net_paid9701_t);
            int32_t _ss_net_paid_inc_tax9702_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 21);
            tbl_Filter_TD_2642_output.setInt32(r, 21, _ss_net_paid_inc_tax9702_t);
            int32_t _ss_net_profit9703_t = tbl_SerializeFromObject_TD_3170_input.getInt32(i, 22);
            tbl_Filter_TD_2642_output.setInt32(r, 22, _ss_net_profit9703_t);
            r++;
        }
    }
    tbl_Filter_TD_2642_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2642_output #Row: " << tbl_Filter_TD_2642_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2613(Table &tbl_SerializeFromObject_TD_3257_input, Table &tbl_Filter_TD_2613_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9668) AND ((ss_quantity#9668 >= 61) AND (ss_quantity#9668 <= 80))))
    // Input: ListBuffer(ss_net_paid#9678, ss_quantity#9668)
    // Output: ListBuffer(ss_net_paid#9678)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3257_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9668 = tbl_SerializeFromObject_TD_3257_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9668 >= 61) && (_ss_quantity9668 <= 80))) {
            int32_t _ss_net_paid9678_t = tbl_SerializeFromObject_TD_3257_input.getInt32(i, 0);
            tbl_Filter_TD_2613_output.setInt32(r, 0, _ss_net_paid9678_t);
            r++;
        }
    }
    tbl_Filter_TD_2613_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2613_output #Row: " << tbl_Filter_TD_2613_output.getNumRow() << std::endl;
}

void SW_Filter_TD_225(Table &tbl_SerializeFromObject_TD_389_input, Table &tbl_Filter_TD_225_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9645) AND ((ss_quantity#9645 >= 61) AND (ss_quantity#9645 <= 80))))
    // Input: ListBuffer(ss_ext_discount_amt#9649, ss_quantity#9645)
    // Output: ListBuffer(ss_ext_discount_amt#9649)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_389_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9645 = tbl_SerializeFromObject_TD_389_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9645 >= 61) && (_ss_quantity9645 <= 80))) {
            int32_t _ss_ext_discount_amt9649_t = tbl_SerializeFromObject_TD_389_input.getInt32(i, 0);
            tbl_Filter_TD_225_output.setInt32(r, 0, _ss_ext_discount_amt9649_t);
            r++;
        }
    }
    tbl_Filter_TD_225_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_225_output #Row: " << tbl_Filter_TD_225_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2396(Table &tbl_SerializeFromObject_TD_361_input, Table &tbl_Filter_TD_2396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9622) AND ((ss_quantity#9622 >= 61) AND (ss_quantity#9622 <= 80))))
    // Input: ListBuffer(ss_sold_date_sk#9612, ss_sold_time_sk#9613, ss_item_sk#9614, ss_customer_sk#9615, ss_cdemo_sk#9616, ss_hdemo_sk#9617, ss_addr_sk#9618, ss_store_sk#9619, ss_promo_sk#9620, ss_ticket_number#9621L, ss_quantity#9622, ss_wholesale_cost#9623, ss_list_price#9624, ss_sales_price#9625, ss_ext_discount_amt#9626, ss_ext_sales_price#9627, ss_ext_wholesale_cost#9628, ss_ext_list_price#9629, ss_ext_tax#9630, ss_coupon_amt#9631, ss_net_paid#9632, ss_net_paid_inc_tax#9633, ss_net_profit#9634)
    // Output: ListBuffer(ss_sold_date_sk#9612, ss_sold_time_sk#9613, ss_item_sk#9614, ss_customer_sk#9615, ss_cdemo_sk#9616, ss_hdemo_sk#9617, ss_addr_sk#9618, ss_store_sk#9619, ss_promo_sk#9620, ss_ticket_number#9621L, ss_quantity#9622, ss_wholesale_cost#9623, ss_list_price#9624, ss_sales_price#9625, ss_ext_discount_amt#9626, ss_ext_sales_price#9627, ss_ext_wholesale_cost#9628, ss_ext_list_price#9629, ss_ext_tax#9630, ss_coupon_amt#9631, ss_net_paid#9632, ss_net_paid_inc_tax#9633, ss_net_profit#9634)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_361_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9622 = tbl_SerializeFromObject_TD_361_input.getInt32(i, 10);
        if ((1) && ((_ss_quantity9622 >= 61) && (_ss_quantity9622 <= 80))) {
            int32_t _ss_sold_date_sk9612_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 0);
            tbl_Filter_TD_2396_output.setInt32(r, 0, _ss_sold_date_sk9612_t);
            int32_t _ss_sold_time_sk9613_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 1);
            tbl_Filter_TD_2396_output.setInt32(r, 1, _ss_sold_time_sk9613_t);
            int32_t _ss_item_sk9614_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 2);
            tbl_Filter_TD_2396_output.setInt32(r, 2, _ss_item_sk9614_t);
            int32_t _ss_customer_sk9615_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 3);
            tbl_Filter_TD_2396_output.setInt32(r, 3, _ss_customer_sk9615_t);
            int32_t _ss_cdemo_sk9616_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 4);
            tbl_Filter_TD_2396_output.setInt32(r, 4, _ss_cdemo_sk9616_t);
            int32_t _ss_hdemo_sk9617_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 5);
            tbl_Filter_TD_2396_output.setInt32(r, 5, _ss_hdemo_sk9617_t);
            int32_t _ss_addr_sk9618_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 6);
            tbl_Filter_TD_2396_output.setInt32(r, 6, _ss_addr_sk9618_t);
            int32_t _ss_store_sk9619_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 7);
            tbl_Filter_TD_2396_output.setInt32(r, 7, _ss_store_sk9619_t);
            int32_t _ss_promo_sk9620_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 8);
            tbl_Filter_TD_2396_output.setInt32(r, 8, _ss_promo_sk9620_t);
            int64_t _ss_ticket_number9621L_t = tbl_SerializeFromObject_TD_361_input.getInt64(i, 9);
            tbl_Filter_TD_2396_output.setInt64(r, 9, _ss_ticket_number9621L_t);
            int32_t _ss_quantity9622_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 10);
            tbl_Filter_TD_2396_output.setInt32(r, 10, _ss_quantity9622_t);
            int32_t _ss_wholesale_cost9623_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 11);
            tbl_Filter_TD_2396_output.setInt32(r, 11, _ss_wholesale_cost9623_t);
            int32_t _ss_list_price9624_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 12);
            tbl_Filter_TD_2396_output.setInt32(r, 12, _ss_list_price9624_t);
            int32_t _ss_sales_price9625_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 13);
            tbl_Filter_TD_2396_output.setInt32(r, 13, _ss_sales_price9625_t);
            int32_t _ss_ext_discount_amt9626_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 14);
            tbl_Filter_TD_2396_output.setInt32(r, 14, _ss_ext_discount_amt9626_t);
            int32_t _ss_ext_sales_price9627_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 15);
            tbl_Filter_TD_2396_output.setInt32(r, 15, _ss_ext_sales_price9627_t);
            int32_t _ss_ext_wholesale_cost9628_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 16);
            tbl_Filter_TD_2396_output.setInt32(r, 16, _ss_ext_wholesale_cost9628_t);
            int32_t _ss_ext_list_price9629_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 17);
            tbl_Filter_TD_2396_output.setInt32(r, 17, _ss_ext_list_price9629_t);
            int32_t _ss_ext_tax9630_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 18);
            tbl_Filter_TD_2396_output.setInt32(r, 18, _ss_ext_tax9630_t);
            int32_t _ss_coupon_amt9631_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 19);
            tbl_Filter_TD_2396_output.setInt32(r, 19, _ss_coupon_amt9631_t);
            int32_t _ss_net_paid9632_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 20);
            tbl_Filter_TD_2396_output.setInt32(r, 20, _ss_net_paid9632_t);
            int32_t _ss_net_paid_inc_tax9633_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 21);
            tbl_Filter_TD_2396_output.setInt32(r, 21, _ss_net_paid_inc_tax9633_t);
            int32_t _ss_net_profit9634_t = tbl_SerializeFromObject_TD_361_input.getInt32(i, 22);
            tbl_Filter_TD_2396_output.setInt32(r, 22, _ss_net_profit9634_t);
            r++;
        }
    }
    tbl_Filter_TD_2396_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2396_output #Row: " << tbl_Filter_TD_2396_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2785(Table &tbl_SerializeFromObject_TD_3517_input, Table &tbl_Filter_TD_2785_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9599) AND ((ss_quantity#9599 >= 41) AND (ss_quantity#9599 <= 60))))
    // Input: ListBuffer(ss_net_paid#9609, ss_quantity#9599)
    // Output: ListBuffer(ss_net_paid#9609)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3517_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9599 = tbl_SerializeFromObject_TD_3517_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9599 >= 41) && (_ss_quantity9599 <= 60))) {
            int32_t _ss_net_paid9609_t = tbl_SerializeFromObject_TD_3517_input.getInt32(i, 0);
            tbl_Filter_TD_2785_output.setInt32(r, 0, _ss_net_paid9609_t);
            r++;
        }
    }
    tbl_Filter_TD_2785_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2785_output #Row: " << tbl_Filter_TD_2785_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2677(Table &tbl_SerializeFromObject_TD_3724_input, Table &tbl_Filter_TD_2677_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9576) AND ((ss_quantity#9576 >= 41) AND (ss_quantity#9576 <= 60))))
    // Input: ListBuffer(ss_ext_discount_amt#9580, ss_quantity#9576)
    // Output: ListBuffer(ss_ext_discount_amt#9580)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3724_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9576 = tbl_SerializeFromObject_TD_3724_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9576 >= 41) && (_ss_quantity9576 <= 60))) {
            int32_t _ss_ext_discount_amt9580_t = tbl_SerializeFromObject_TD_3724_input.getInt32(i, 0);
            tbl_Filter_TD_2677_output.setInt32(r, 0, _ss_ext_discount_amt9580_t);
            r++;
        }
    }
    tbl_Filter_TD_2677_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2677_output #Row: " << tbl_Filter_TD_2677_output.getNumRow() << std::endl;
}

void SW_Filter_TD_234(Table &tbl_SerializeFromObject_TD_3785_input, Table &tbl_Filter_TD_234_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9553) AND ((ss_quantity#9553 >= 41) AND (ss_quantity#9553 <= 60))))
    // Input: ListBuffer(ss_sold_date_sk#9543, ss_sold_time_sk#9544, ss_item_sk#9545, ss_customer_sk#9546, ss_cdemo_sk#9547, ss_hdemo_sk#9548, ss_addr_sk#9549, ss_store_sk#9550, ss_promo_sk#9551, ss_ticket_number#9552L, ss_quantity#9553, ss_wholesale_cost#9554, ss_list_price#9555, ss_sales_price#9556, ss_ext_discount_amt#9557, ss_ext_sales_price#9558, ss_ext_wholesale_cost#9559, ss_ext_list_price#9560, ss_ext_tax#9561, ss_coupon_amt#9562, ss_net_paid#9563, ss_net_paid_inc_tax#9564, ss_net_profit#9565)
    // Output: ListBuffer(ss_sold_date_sk#9543, ss_sold_time_sk#9544, ss_item_sk#9545, ss_customer_sk#9546, ss_cdemo_sk#9547, ss_hdemo_sk#9548, ss_addr_sk#9549, ss_store_sk#9550, ss_promo_sk#9551, ss_ticket_number#9552L, ss_quantity#9553, ss_wholesale_cost#9554, ss_list_price#9555, ss_sales_price#9556, ss_ext_discount_amt#9557, ss_ext_sales_price#9558, ss_ext_wholesale_cost#9559, ss_ext_list_price#9560, ss_ext_tax#9561, ss_coupon_amt#9562, ss_net_paid#9563, ss_net_paid_inc_tax#9564, ss_net_profit#9565)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3785_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9553 = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 10);
        if ((1) && ((_ss_quantity9553 >= 41) && (_ss_quantity9553 <= 60))) {
            int32_t _ss_sold_date_sk9543_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 0);
            tbl_Filter_TD_234_output.setInt32(r, 0, _ss_sold_date_sk9543_t);
            int32_t _ss_sold_time_sk9544_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 1);
            tbl_Filter_TD_234_output.setInt32(r, 1, _ss_sold_time_sk9544_t);
            int32_t _ss_item_sk9545_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 2);
            tbl_Filter_TD_234_output.setInt32(r, 2, _ss_item_sk9545_t);
            int32_t _ss_customer_sk9546_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 3);
            tbl_Filter_TD_234_output.setInt32(r, 3, _ss_customer_sk9546_t);
            int32_t _ss_cdemo_sk9547_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 4);
            tbl_Filter_TD_234_output.setInt32(r, 4, _ss_cdemo_sk9547_t);
            int32_t _ss_hdemo_sk9548_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 5);
            tbl_Filter_TD_234_output.setInt32(r, 5, _ss_hdemo_sk9548_t);
            int32_t _ss_addr_sk9549_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 6);
            tbl_Filter_TD_234_output.setInt32(r, 6, _ss_addr_sk9549_t);
            int32_t _ss_store_sk9550_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 7);
            tbl_Filter_TD_234_output.setInt32(r, 7, _ss_store_sk9550_t);
            int32_t _ss_promo_sk9551_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 8);
            tbl_Filter_TD_234_output.setInt32(r, 8, _ss_promo_sk9551_t);
            int64_t _ss_ticket_number9552L_t = tbl_SerializeFromObject_TD_3785_input.getInt64(i, 9);
            tbl_Filter_TD_234_output.setInt64(r, 9, _ss_ticket_number9552L_t);
            int32_t _ss_quantity9553_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 10);
            tbl_Filter_TD_234_output.setInt32(r, 10, _ss_quantity9553_t);
            int32_t _ss_wholesale_cost9554_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 11);
            tbl_Filter_TD_234_output.setInt32(r, 11, _ss_wholesale_cost9554_t);
            int32_t _ss_list_price9555_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 12);
            tbl_Filter_TD_234_output.setInt32(r, 12, _ss_list_price9555_t);
            int32_t _ss_sales_price9556_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 13);
            tbl_Filter_TD_234_output.setInt32(r, 13, _ss_sales_price9556_t);
            int32_t _ss_ext_discount_amt9557_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 14);
            tbl_Filter_TD_234_output.setInt32(r, 14, _ss_ext_discount_amt9557_t);
            int32_t _ss_ext_sales_price9558_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 15);
            tbl_Filter_TD_234_output.setInt32(r, 15, _ss_ext_sales_price9558_t);
            int32_t _ss_ext_wholesale_cost9559_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 16);
            tbl_Filter_TD_234_output.setInt32(r, 16, _ss_ext_wholesale_cost9559_t);
            int32_t _ss_ext_list_price9560_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 17);
            tbl_Filter_TD_234_output.setInt32(r, 17, _ss_ext_list_price9560_t);
            int32_t _ss_ext_tax9561_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 18);
            tbl_Filter_TD_234_output.setInt32(r, 18, _ss_ext_tax9561_t);
            int32_t _ss_coupon_amt9562_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 19);
            tbl_Filter_TD_234_output.setInt32(r, 19, _ss_coupon_amt9562_t);
            int32_t _ss_net_paid9563_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 20);
            tbl_Filter_TD_234_output.setInt32(r, 20, _ss_net_paid9563_t);
            int32_t _ss_net_paid_inc_tax9564_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 21);
            tbl_Filter_TD_234_output.setInt32(r, 21, _ss_net_paid_inc_tax9564_t);
            int32_t _ss_net_profit9565_t = tbl_SerializeFromObject_TD_3785_input.getInt32(i, 22);
            tbl_Filter_TD_234_output.setInt32(r, 22, _ss_net_profit9565_t);
            r++;
        }
    }
    tbl_Filter_TD_234_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_234_output #Row: " << tbl_Filter_TD_234_output.getNumRow() << std::endl;
}

void SW_Filter_TD_289(Table &tbl_SerializeFromObject_TD_3418_input, Table &tbl_Filter_TD_289_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9530) AND ((ss_quantity#9530 >= 21) AND (ss_quantity#9530 <= 40))))
    // Input: ListBuffer(ss_net_paid#9540, ss_quantity#9530)
    // Output: ListBuffer(ss_net_paid#9540)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3418_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9530 = tbl_SerializeFromObject_TD_3418_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9530 >= 21) && (_ss_quantity9530 <= 40))) {
            int32_t _ss_net_paid9540_t = tbl_SerializeFromObject_TD_3418_input.getInt32(i, 0);
            tbl_Filter_TD_289_output.setInt32(r, 0, _ss_net_paid9540_t);
            r++;
        }
    }
    tbl_Filter_TD_289_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_289_output #Row: " << tbl_Filter_TD_289_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2280(Table &tbl_SerializeFromObject_TD_3284_input, Table &tbl_Filter_TD_2280_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9507) AND ((ss_quantity#9507 >= 21) AND (ss_quantity#9507 <= 40))))
    // Input: ListBuffer(ss_ext_discount_amt#9511, ss_quantity#9507)
    // Output: ListBuffer(ss_ext_discount_amt#9511)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3284_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9507 = tbl_SerializeFromObject_TD_3284_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9507 >= 21) && (_ss_quantity9507 <= 40))) {
            int32_t _ss_ext_discount_amt9511_t = tbl_SerializeFromObject_TD_3284_input.getInt32(i, 0);
            tbl_Filter_TD_2280_output.setInt32(r, 0, _ss_ext_discount_amt9511_t);
            r++;
        }
    }
    tbl_Filter_TD_2280_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2280_output #Row: " << tbl_Filter_TD_2280_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2396(Table &tbl_SerializeFromObject_TD_3305_input, Table &tbl_Filter_TD_2396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9484) AND ((ss_quantity#9484 >= 21) AND (ss_quantity#9484 <= 40))))
    // Input: ListBuffer(ss_sold_date_sk#9474, ss_sold_time_sk#9475, ss_item_sk#9476, ss_customer_sk#9477, ss_cdemo_sk#9478, ss_hdemo_sk#9479, ss_addr_sk#9480, ss_store_sk#9481, ss_promo_sk#9482, ss_ticket_number#9483L, ss_quantity#9484, ss_wholesale_cost#9485, ss_list_price#9486, ss_sales_price#9487, ss_ext_discount_amt#9488, ss_ext_sales_price#9489, ss_ext_wholesale_cost#9490, ss_ext_list_price#9491, ss_ext_tax#9492, ss_coupon_amt#9493, ss_net_paid#9494, ss_net_paid_inc_tax#9495, ss_net_profit#9496)
    // Output: ListBuffer(ss_sold_date_sk#9474, ss_sold_time_sk#9475, ss_item_sk#9476, ss_customer_sk#9477, ss_cdemo_sk#9478, ss_hdemo_sk#9479, ss_addr_sk#9480, ss_store_sk#9481, ss_promo_sk#9482, ss_ticket_number#9483L, ss_quantity#9484, ss_wholesale_cost#9485, ss_list_price#9486, ss_sales_price#9487, ss_ext_discount_amt#9488, ss_ext_sales_price#9489, ss_ext_wholesale_cost#9490, ss_ext_list_price#9491, ss_ext_tax#9492, ss_coupon_amt#9493, ss_net_paid#9494, ss_net_paid_inc_tax#9495, ss_net_profit#9496)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3305_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9484 = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 10);
        if ((1) && ((_ss_quantity9484 >= 21) && (_ss_quantity9484 <= 40))) {
            int32_t _ss_sold_date_sk9474_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 0);
            tbl_Filter_TD_2396_output.setInt32(r, 0, _ss_sold_date_sk9474_t);
            int32_t _ss_sold_time_sk9475_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 1);
            tbl_Filter_TD_2396_output.setInt32(r, 1, _ss_sold_time_sk9475_t);
            int32_t _ss_item_sk9476_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 2);
            tbl_Filter_TD_2396_output.setInt32(r, 2, _ss_item_sk9476_t);
            int32_t _ss_customer_sk9477_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 3);
            tbl_Filter_TD_2396_output.setInt32(r, 3, _ss_customer_sk9477_t);
            int32_t _ss_cdemo_sk9478_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 4);
            tbl_Filter_TD_2396_output.setInt32(r, 4, _ss_cdemo_sk9478_t);
            int32_t _ss_hdemo_sk9479_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 5);
            tbl_Filter_TD_2396_output.setInt32(r, 5, _ss_hdemo_sk9479_t);
            int32_t _ss_addr_sk9480_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 6);
            tbl_Filter_TD_2396_output.setInt32(r, 6, _ss_addr_sk9480_t);
            int32_t _ss_store_sk9481_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 7);
            tbl_Filter_TD_2396_output.setInt32(r, 7, _ss_store_sk9481_t);
            int32_t _ss_promo_sk9482_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 8);
            tbl_Filter_TD_2396_output.setInt32(r, 8, _ss_promo_sk9482_t);
            int64_t _ss_ticket_number9483L_t = tbl_SerializeFromObject_TD_3305_input.getInt64(i, 9);
            tbl_Filter_TD_2396_output.setInt64(r, 9, _ss_ticket_number9483L_t);
            int32_t _ss_quantity9484_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 10);
            tbl_Filter_TD_2396_output.setInt32(r, 10, _ss_quantity9484_t);
            int32_t _ss_wholesale_cost9485_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 11);
            tbl_Filter_TD_2396_output.setInt32(r, 11, _ss_wholesale_cost9485_t);
            int32_t _ss_list_price9486_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 12);
            tbl_Filter_TD_2396_output.setInt32(r, 12, _ss_list_price9486_t);
            int32_t _ss_sales_price9487_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 13);
            tbl_Filter_TD_2396_output.setInt32(r, 13, _ss_sales_price9487_t);
            int32_t _ss_ext_discount_amt9488_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 14);
            tbl_Filter_TD_2396_output.setInt32(r, 14, _ss_ext_discount_amt9488_t);
            int32_t _ss_ext_sales_price9489_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 15);
            tbl_Filter_TD_2396_output.setInt32(r, 15, _ss_ext_sales_price9489_t);
            int32_t _ss_ext_wholesale_cost9490_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 16);
            tbl_Filter_TD_2396_output.setInt32(r, 16, _ss_ext_wholesale_cost9490_t);
            int32_t _ss_ext_list_price9491_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 17);
            tbl_Filter_TD_2396_output.setInt32(r, 17, _ss_ext_list_price9491_t);
            int32_t _ss_ext_tax9492_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 18);
            tbl_Filter_TD_2396_output.setInt32(r, 18, _ss_ext_tax9492_t);
            int32_t _ss_coupon_amt9493_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 19);
            tbl_Filter_TD_2396_output.setInt32(r, 19, _ss_coupon_amt9493_t);
            int32_t _ss_net_paid9494_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 20);
            tbl_Filter_TD_2396_output.setInt32(r, 20, _ss_net_paid9494_t);
            int32_t _ss_net_paid_inc_tax9495_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 21);
            tbl_Filter_TD_2396_output.setInt32(r, 21, _ss_net_paid_inc_tax9495_t);
            int32_t _ss_net_profit9496_t = tbl_SerializeFromObject_TD_3305_input.getInt32(i, 22);
            tbl_Filter_TD_2396_output.setInt32(r, 22, _ss_net_profit9496_t);
            r++;
        }
    }
    tbl_Filter_TD_2396_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2396_output #Row: " << tbl_Filter_TD_2396_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2390(Table &tbl_SerializeFromObject_TD_3110_input, Table &tbl_Filter_TD_2390_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9461) AND ((ss_quantity#9461 >= 1) AND (ss_quantity#9461 <= 20))))
    // Input: ListBuffer(ss_net_paid#9471, ss_quantity#9461)
    // Output: ListBuffer(ss_net_paid#9471)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3110_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9461 = tbl_SerializeFromObject_TD_3110_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9461 >= 1) && (_ss_quantity9461 <= 20))) {
            int32_t _ss_net_paid9471_t = tbl_SerializeFromObject_TD_3110_input.getInt32(i, 0);
            tbl_Filter_TD_2390_output.setInt32(r, 0, _ss_net_paid9471_t);
            r++;
        }
    }
    tbl_Filter_TD_2390_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2390_output #Row: " << tbl_Filter_TD_2390_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2783(Table &tbl_SerializeFromObject_TD_3927_input, Table &tbl_Filter_TD_2783_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9438) AND ((ss_quantity#9438 >= 1) AND (ss_quantity#9438 <= 20))))
    // Input: ListBuffer(ss_ext_discount_amt#9442, ss_quantity#9438)
    // Output: ListBuffer(ss_ext_discount_amt#9442)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3927_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9438 = tbl_SerializeFromObject_TD_3927_input.getInt32(i, 1);
        if ((1) && ((_ss_quantity9438 >= 1) && (_ss_quantity9438 <= 20))) {
            int32_t _ss_ext_discount_amt9442_t = tbl_SerializeFromObject_TD_3927_input.getInt32(i, 0);
            tbl_Filter_TD_2783_output.setInt32(r, 0, _ss_ext_discount_amt9442_t);
            r++;
        }
    }
    tbl_Filter_TD_2783_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2783_output #Row: " << tbl_Filter_TD_2783_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2496(Table &tbl_SerializeFromObject_TD_343_input, Table &tbl_Filter_TD_2496_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#1216) AND ((ss_quantity#1216 >= 1) AND (ss_quantity#1216 <= 20))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_343_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_343_input.getInt32(i, 10);
        if ((1) && ((_ss_quantity1216 >= 1) && (_ss_quantity1216 <= 20))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 0);
            tbl_Filter_TD_2496_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 1);
            tbl_Filter_TD_2496_output.setInt32(r, 1, _ss_sold_time_sk1207_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 2);
            tbl_Filter_TD_2496_output.setInt32(r, 2, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 3);
            tbl_Filter_TD_2496_output.setInt32(r, 3, _ss_customer_sk1209_t);
            int32_t _ss_cdemo_sk1210_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 4);
            tbl_Filter_TD_2496_output.setInt32(r, 4, _ss_cdemo_sk1210_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 5);
            tbl_Filter_TD_2496_output.setInt32(r, 5, _ss_hdemo_sk1211_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 6);
            tbl_Filter_TD_2496_output.setInt32(r, 6, _ss_addr_sk1212_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 7);
            tbl_Filter_TD_2496_output.setInt32(r, 7, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 8);
            tbl_Filter_TD_2496_output.setInt32(r, 8, _ss_promo_sk1214_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_343_input.getInt64(i, 9);
            tbl_Filter_TD_2496_output.setInt64(r, 9, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 10);
            tbl_Filter_TD_2496_output.setInt32(r, 10, _ss_quantity1216_t);
            int32_t _ss_wholesale_cost1217_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 11);
            tbl_Filter_TD_2496_output.setInt32(r, 11, _ss_wholesale_cost1217_t);
            int32_t _ss_list_price1218_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 12);
            tbl_Filter_TD_2496_output.setInt32(r, 12, _ss_list_price1218_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 13);
            tbl_Filter_TD_2496_output.setInt32(r, 13, _ss_sales_price1219_t);
            int32_t _ss_ext_discount_amt1220_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 14);
            tbl_Filter_TD_2496_output.setInt32(r, 14, _ss_ext_discount_amt1220_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 15);
            tbl_Filter_TD_2496_output.setInt32(r, 15, _ss_ext_sales_price1221_t);
            int32_t _ss_ext_wholesale_cost1222_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 16);
            tbl_Filter_TD_2496_output.setInt32(r, 16, _ss_ext_wholesale_cost1222_t);
            int32_t _ss_ext_list_price1223_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 17);
            tbl_Filter_TD_2496_output.setInt32(r, 17, _ss_ext_list_price1223_t);
            int32_t _ss_ext_tax1224_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 18);
            tbl_Filter_TD_2496_output.setInt32(r, 18, _ss_ext_tax1224_t);
            int32_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 19);
            tbl_Filter_TD_2496_output.setInt32(r, 19, _ss_coupon_amt1225_t);
            int32_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 20);
            tbl_Filter_TD_2496_output.setInt32(r, 20, _ss_net_paid1226_t);
            int32_t _ss_net_paid_inc_tax1227_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 21);
            tbl_Filter_TD_2496_output.setInt32(r, 21, _ss_net_paid_inc_tax1227_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_343_input.getInt32(i, 22);
            tbl_Filter_TD_2496_output.setInt32(r, 22, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_2496_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2496_output #Row: " << tbl_Filter_TD_2496_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1222(Table &tbl_Filter_TD_2651_output, Table &tbl_Aggregate_TD_1222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9747)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9427)
    // Input: ListBuffer(ss_net_paid#9747)
    // Output: ListBuffer(avg(ss_net_paid)#9427)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2651_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9747 = tbl_Filter_TD_2651_output.getInt32(i, 0);
        int64_t _avgss_net_paid9427_avg_0 = _ss_net_paid9747;
        avg_0 = (avg_0 + _avgss_net_paid9427_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9427 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1222_output.setInt32(r++, 0, _avgss_net_paid9427);
    tbl_Aggregate_TD_1222_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1222_output #Row: " << tbl_Aggregate_TD_1222_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_145(Table &tbl_Filter_TD_2962_output, Table &tbl_Aggregate_TD_145_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9718)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9425)
    // Input: ListBuffer(ss_ext_discount_amt#9718)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9425)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2962_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9718 = tbl_Filter_TD_2962_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9425_avg_0 = _ss_ext_discount_amt9718;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9425_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9425 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_145_output.setInt32(r++, 0, _avgss_ext_discount_amt9425);
    tbl_Aggregate_TD_145_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_145_output #Row: " << tbl_Aggregate_TD_145_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1143(Table &tbl_Filter_TD_2642_output, Table &tbl_Aggregate_TD_1143_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9423L)
    // Input: ListBuffer(ss_sold_date_sk#9681, ss_sold_time_sk#9682, ss_item_sk#9683, ss_customer_sk#9684, ss_cdemo_sk#9685, ss_hdemo_sk#9686, ss_addr_sk#9687, ss_store_sk#9688, ss_promo_sk#9689, ss_ticket_number#9690L, ss_quantity#9691, ss_wholesale_cost#9692, ss_list_price#9693, ss_sales_price#9694, ss_ext_discount_amt#9695, ss_ext_sales_price#9696, ss_ext_wholesale_cost#9697, ss_ext_list_price#9698, ss_ext_tax#9699, ss_coupon_amt#9700, ss_net_paid#9701, ss_net_paid_inc_tax#9702, ss_net_profit#9703)
    // Output: ListBuffer(count(1)#9423L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2642_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9681 = tbl_Filter_TD_2642_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9682 = tbl_Filter_TD_2642_output.getInt32(i, 1);
        int32_t _ss_item_sk9683 = tbl_Filter_TD_2642_output.getInt32(i, 2);
        int32_t _ss_customer_sk9684 = tbl_Filter_TD_2642_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9685 = tbl_Filter_TD_2642_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9686 = tbl_Filter_TD_2642_output.getInt32(i, 5);
        int32_t _ss_addr_sk9687 = tbl_Filter_TD_2642_output.getInt32(i, 6);
        int32_t _ss_store_sk9688 = tbl_Filter_TD_2642_output.getInt32(i, 7);
        int32_t _ss_promo_sk9689 = tbl_Filter_TD_2642_output.getInt32(i, 8);
        int64_t _ss_ticket_number9690L = tbl_Filter_TD_2642_output.getInt64(i, 9);
        int32_t _ss_quantity9691 = tbl_Filter_TD_2642_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost9692 = tbl_Filter_TD_2642_output.getInt32(i, 11);
        int32_t _ss_list_price9693 = tbl_Filter_TD_2642_output.getInt32(i, 12);
        int32_t _ss_sales_price9694 = tbl_Filter_TD_2642_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt9695 = tbl_Filter_TD_2642_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price9696 = tbl_Filter_TD_2642_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost9697 = tbl_Filter_TD_2642_output.getInt32(i, 16);
        int32_t _ss_ext_list_price9698 = tbl_Filter_TD_2642_output.getInt32(i, 17);
        int32_t _ss_ext_tax9699 = tbl_Filter_TD_2642_output.getInt32(i, 18);
        int32_t _ss_coupon_amt9700 = tbl_Filter_TD_2642_output.getInt32(i, 19);
        int32_t _ss_net_paid9701 = tbl_Filter_TD_2642_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax9702 = tbl_Filter_TD_2642_output.getInt32(i, 21);
        int32_t _ss_net_profit9703 = tbl_Filter_TD_2642_output.getInt32(i, 22);
        int64_t _count19423L_count_0 = 1;
        count_0 += _count19423L_count_0;
    }
    int r = 0;
    int64_t _count19423L = count_0;
    tbl_Aggregate_TD_1143_output.setInt64(r++, 0, _count19423L);
    tbl_Aggregate_TD_1143_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1143_output #Row: " << tbl_Aggregate_TD_1143_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1163(Table &tbl_Filter_TD_2613_output, Table &tbl_Aggregate_TD_1163_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9678)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9421)
    // Input: ListBuffer(ss_net_paid#9678)
    // Output: ListBuffer(avg(ss_net_paid)#9421)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2613_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9678 = tbl_Filter_TD_2613_output.getInt32(i, 0);
        int64_t _avgss_net_paid9421_avg_0 = _ss_net_paid9678;
        avg_0 = (avg_0 + _avgss_net_paid9421_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9421 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1163_output.setInt32(r++, 0, _avgss_net_paid9421);
    tbl_Aggregate_TD_1163_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1163_output #Row: " << tbl_Aggregate_TD_1163_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1593(Table &tbl_Filter_TD_225_output, Table &tbl_Aggregate_TD_1593_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9649)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9419)
    // Input: ListBuffer(ss_ext_discount_amt#9649)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9419)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_225_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9649 = tbl_Filter_TD_225_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9419_avg_0 = _ss_ext_discount_amt9649;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9419_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9419 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1593_output.setInt32(r++, 0, _avgss_ext_discount_amt9419);
    tbl_Aggregate_TD_1593_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1593_output #Row: " << tbl_Aggregate_TD_1593_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_143(Table &tbl_Filter_TD_2396_output, Table &tbl_Aggregate_TD_143_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9417L)
    // Input: ListBuffer(ss_sold_date_sk#9612, ss_sold_time_sk#9613, ss_item_sk#9614, ss_customer_sk#9615, ss_cdemo_sk#9616, ss_hdemo_sk#9617, ss_addr_sk#9618, ss_store_sk#9619, ss_promo_sk#9620, ss_ticket_number#9621L, ss_quantity#9622, ss_wholesale_cost#9623, ss_list_price#9624, ss_sales_price#9625, ss_ext_discount_amt#9626, ss_ext_sales_price#9627, ss_ext_wholesale_cost#9628, ss_ext_list_price#9629, ss_ext_tax#9630, ss_coupon_amt#9631, ss_net_paid#9632, ss_net_paid_inc_tax#9633, ss_net_profit#9634)
    // Output: ListBuffer(count(1)#9417L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2396_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9612 = tbl_Filter_TD_2396_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9613 = tbl_Filter_TD_2396_output.getInt32(i, 1);
        int32_t _ss_item_sk9614 = tbl_Filter_TD_2396_output.getInt32(i, 2);
        int32_t _ss_customer_sk9615 = tbl_Filter_TD_2396_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9616 = tbl_Filter_TD_2396_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9617 = tbl_Filter_TD_2396_output.getInt32(i, 5);
        int32_t _ss_addr_sk9618 = tbl_Filter_TD_2396_output.getInt32(i, 6);
        int32_t _ss_store_sk9619 = tbl_Filter_TD_2396_output.getInt32(i, 7);
        int32_t _ss_promo_sk9620 = tbl_Filter_TD_2396_output.getInt32(i, 8);
        int64_t _ss_ticket_number9621L = tbl_Filter_TD_2396_output.getInt64(i, 9);
        int32_t _ss_quantity9622 = tbl_Filter_TD_2396_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost9623 = tbl_Filter_TD_2396_output.getInt32(i, 11);
        int32_t _ss_list_price9624 = tbl_Filter_TD_2396_output.getInt32(i, 12);
        int32_t _ss_sales_price9625 = tbl_Filter_TD_2396_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt9626 = tbl_Filter_TD_2396_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price9627 = tbl_Filter_TD_2396_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost9628 = tbl_Filter_TD_2396_output.getInt32(i, 16);
        int32_t _ss_ext_list_price9629 = tbl_Filter_TD_2396_output.getInt32(i, 17);
        int32_t _ss_ext_tax9630 = tbl_Filter_TD_2396_output.getInt32(i, 18);
        int32_t _ss_coupon_amt9631 = tbl_Filter_TD_2396_output.getInt32(i, 19);
        int32_t _ss_net_paid9632 = tbl_Filter_TD_2396_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax9633 = tbl_Filter_TD_2396_output.getInt32(i, 21);
        int32_t _ss_net_profit9634 = tbl_Filter_TD_2396_output.getInt32(i, 22);
        int64_t _count19417L_count_0 = 1;
        count_0 += _count19417L_count_0;
    }
    int r = 0;
    int64_t _count19417L = count_0;
    tbl_Aggregate_TD_143_output.setInt64(r++, 0, _count19417L);
    tbl_Aggregate_TD_143_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_143_output #Row: " << tbl_Aggregate_TD_143_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1655(Table &tbl_Filter_TD_2785_output, Table &tbl_Aggregate_TD_1655_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9609)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9415)
    // Input: ListBuffer(ss_net_paid#9609)
    // Output: ListBuffer(avg(ss_net_paid)#9415)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2785_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9609 = tbl_Filter_TD_2785_output.getInt32(i, 0);
        int64_t _avgss_net_paid9415_avg_0 = _ss_net_paid9609;
        avg_0 = (avg_0 + _avgss_net_paid9415_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9415 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1655_output.setInt32(r++, 0, _avgss_net_paid9415);
    tbl_Aggregate_TD_1655_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1655_output #Row: " << tbl_Aggregate_TD_1655_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1525(Table &tbl_Filter_TD_2677_output, Table &tbl_Aggregate_TD_1525_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9580)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9413)
    // Input: ListBuffer(ss_ext_discount_amt#9580)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9413)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2677_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9580 = tbl_Filter_TD_2677_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9413_avg_0 = _ss_ext_discount_amt9580;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9413_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9413 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1525_output.setInt32(r++, 0, _avgss_ext_discount_amt9413);
    tbl_Aggregate_TD_1525_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1525_output #Row: " << tbl_Aggregate_TD_1525_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1694(Table &tbl_Filter_TD_234_output, Table &tbl_Aggregate_TD_1694_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9411L)
    // Input: ListBuffer(ss_sold_date_sk#9543, ss_sold_time_sk#9544, ss_item_sk#9545, ss_customer_sk#9546, ss_cdemo_sk#9547, ss_hdemo_sk#9548, ss_addr_sk#9549, ss_store_sk#9550, ss_promo_sk#9551, ss_ticket_number#9552L, ss_quantity#9553, ss_wholesale_cost#9554, ss_list_price#9555, ss_sales_price#9556, ss_ext_discount_amt#9557, ss_ext_sales_price#9558, ss_ext_wholesale_cost#9559, ss_ext_list_price#9560, ss_ext_tax#9561, ss_coupon_amt#9562, ss_net_paid#9563, ss_net_paid_inc_tax#9564, ss_net_profit#9565)
    // Output: ListBuffer(count(1)#9411L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_234_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9543 = tbl_Filter_TD_234_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9544 = tbl_Filter_TD_234_output.getInt32(i, 1);
        int32_t _ss_item_sk9545 = tbl_Filter_TD_234_output.getInt32(i, 2);
        int32_t _ss_customer_sk9546 = tbl_Filter_TD_234_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9547 = tbl_Filter_TD_234_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9548 = tbl_Filter_TD_234_output.getInt32(i, 5);
        int32_t _ss_addr_sk9549 = tbl_Filter_TD_234_output.getInt32(i, 6);
        int32_t _ss_store_sk9550 = tbl_Filter_TD_234_output.getInt32(i, 7);
        int32_t _ss_promo_sk9551 = tbl_Filter_TD_234_output.getInt32(i, 8);
        int64_t _ss_ticket_number9552L = tbl_Filter_TD_234_output.getInt64(i, 9);
        int32_t _ss_quantity9553 = tbl_Filter_TD_234_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost9554 = tbl_Filter_TD_234_output.getInt32(i, 11);
        int32_t _ss_list_price9555 = tbl_Filter_TD_234_output.getInt32(i, 12);
        int32_t _ss_sales_price9556 = tbl_Filter_TD_234_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt9557 = tbl_Filter_TD_234_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price9558 = tbl_Filter_TD_234_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost9559 = tbl_Filter_TD_234_output.getInt32(i, 16);
        int32_t _ss_ext_list_price9560 = tbl_Filter_TD_234_output.getInt32(i, 17);
        int32_t _ss_ext_tax9561 = tbl_Filter_TD_234_output.getInt32(i, 18);
        int32_t _ss_coupon_amt9562 = tbl_Filter_TD_234_output.getInt32(i, 19);
        int32_t _ss_net_paid9563 = tbl_Filter_TD_234_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax9564 = tbl_Filter_TD_234_output.getInt32(i, 21);
        int32_t _ss_net_profit9565 = tbl_Filter_TD_234_output.getInt32(i, 22);
        int64_t _count19411L_count_0 = 1;
        count_0 += _count19411L_count_0;
    }
    int r = 0;
    int64_t _count19411L = count_0;
    tbl_Aggregate_TD_1694_output.setInt64(r++, 0, _count19411L);
    tbl_Aggregate_TD_1694_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1694_output #Row: " << tbl_Aggregate_TD_1694_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1737(Table &tbl_Filter_TD_289_output, Table &tbl_Aggregate_TD_1737_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9540)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9409)
    // Input: ListBuffer(ss_net_paid#9540)
    // Output: ListBuffer(avg(ss_net_paid)#9409)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_289_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9540 = tbl_Filter_TD_289_output.getInt32(i, 0);
        int64_t _avgss_net_paid9409_avg_0 = _ss_net_paid9540;
        avg_0 = (avg_0 + _avgss_net_paid9409_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9409 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1737_output.setInt32(r++, 0, _avgss_net_paid9409);
    tbl_Aggregate_TD_1737_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1737_output #Row: " << tbl_Aggregate_TD_1737_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1569(Table &tbl_Filter_TD_2280_output, Table &tbl_Aggregate_TD_1569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9511)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9407)
    // Input: ListBuffer(ss_ext_discount_amt#9511)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9407)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2280_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9511 = tbl_Filter_TD_2280_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9407_avg_0 = _ss_ext_discount_amt9511;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9407_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9407 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1569_output.setInt32(r++, 0, _avgss_ext_discount_amt9407);
    tbl_Aggregate_TD_1569_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1569_output #Row: " << tbl_Aggregate_TD_1569_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1227(Table &tbl_Filter_TD_2396_output, Table &tbl_Aggregate_TD_1227_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9405L)
    // Input: ListBuffer(ss_sold_date_sk#9474, ss_sold_time_sk#9475, ss_item_sk#9476, ss_customer_sk#9477, ss_cdemo_sk#9478, ss_hdemo_sk#9479, ss_addr_sk#9480, ss_store_sk#9481, ss_promo_sk#9482, ss_ticket_number#9483L, ss_quantity#9484, ss_wholesale_cost#9485, ss_list_price#9486, ss_sales_price#9487, ss_ext_discount_amt#9488, ss_ext_sales_price#9489, ss_ext_wholesale_cost#9490, ss_ext_list_price#9491, ss_ext_tax#9492, ss_coupon_amt#9493, ss_net_paid#9494, ss_net_paid_inc_tax#9495, ss_net_profit#9496)
    // Output: ListBuffer(count(1)#9405L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2396_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9474 = tbl_Filter_TD_2396_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9475 = tbl_Filter_TD_2396_output.getInt32(i, 1);
        int32_t _ss_item_sk9476 = tbl_Filter_TD_2396_output.getInt32(i, 2);
        int32_t _ss_customer_sk9477 = tbl_Filter_TD_2396_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9478 = tbl_Filter_TD_2396_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9479 = tbl_Filter_TD_2396_output.getInt32(i, 5);
        int32_t _ss_addr_sk9480 = tbl_Filter_TD_2396_output.getInt32(i, 6);
        int32_t _ss_store_sk9481 = tbl_Filter_TD_2396_output.getInt32(i, 7);
        int32_t _ss_promo_sk9482 = tbl_Filter_TD_2396_output.getInt32(i, 8);
        int64_t _ss_ticket_number9483L = tbl_Filter_TD_2396_output.getInt64(i, 9);
        int32_t _ss_quantity9484 = tbl_Filter_TD_2396_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost9485 = tbl_Filter_TD_2396_output.getInt32(i, 11);
        int32_t _ss_list_price9486 = tbl_Filter_TD_2396_output.getInt32(i, 12);
        int32_t _ss_sales_price9487 = tbl_Filter_TD_2396_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt9488 = tbl_Filter_TD_2396_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price9489 = tbl_Filter_TD_2396_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost9490 = tbl_Filter_TD_2396_output.getInt32(i, 16);
        int32_t _ss_ext_list_price9491 = tbl_Filter_TD_2396_output.getInt32(i, 17);
        int32_t _ss_ext_tax9492 = tbl_Filter_TD_2396_output.getInt32(i, 18);
        int32_t _ss_coupon_amt9493 = tbl_Filter_TD_2396_output.getInt32(i, 19);
        int32_t _ss_net_paid9494 = tbl_Filter_TD_2396_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax9495 = tbl_Filter_TD_2396_output.getInt32(i, 21);
        int32_t _ss_net_profit9496 = tbl_Filter_TD_2396_output.getInt32(i, 22);
        int64_t _count19405L_count_0 = 1;
        count_0 += _count19405L_count_0;
    }
    int r = 0;
    int64_t _count19405L = count_0;
    tbl_Aggregate_TD_1227_output.setInt64(r++, 0, _count19405L);
    tbl_Aggregate_TD_1227_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1227_output #Row: " << tbl_Aggregate_TD_1227_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1899(Table &tbl_Filter_TD_2390_output, Table &tbl_Aggregate_TD_1899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9471)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9403)
    // Input: ListBuffer(ss_net_paid#9471)
    // Output: ListBuffer(avg(ss_net_paid)#9403)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2390_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_net_paid9471 = tbl_Filter_TD_2390_output.getInt32(i, 0);
        int64_t _avgss_net_paid9403_avg_0 = _ss_net_paid9471;
        avg_0 = (avg_0 + _avgss_net_paid9403_avg_0);
    }
    int r = 0;
    int32_t _avgss_net_paid9403 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1899_output.setInt32(r++, 0, _avgss_net_paid9403);
    tbl_Aggregate_TD_1899_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1899_output #Row: " << tbl_Aggregate_TD_1899_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1362(Table &tbl_Filter_TD_2783_output, Table &tbl_Aggregate_TD_1362_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9442)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9401)
    // Input: ListBuffer(ss_ext_discount_amt#9442)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9401)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2783_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_discount_amt9442 = tbl_Filter_TD_2783_output.getInt32(i, 0);
        int64_t _avgss_ext_discount_amt9401_avg_0 = _ss_ext_discount_amt9442;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9401_avg_0);
    }
    int r = 0;
    int32_t _avgss_ext_discount_amt9401 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1362_output.setInt32(r++, 0, _avgss_ext_discount_amt9401);
    tbl_Aggregate_TD_1362_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1362_output #Row: " << tbl_Aggregate_TD_1362_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1434(Table &tbl_Filter_TD_2496_output, Table &tbl_Aggregate_TD_1434_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9399L)
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    // Output: ListBuffer(count(1)#9399L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2496_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_2496_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk1207 = tbl_Filter_TD_2496_output.getInt32(i, 1);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_2496_output.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_Filter_TD_2496_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk1210 = tbl_Filter_TD_2496_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_2496_output.getInt32(i, 5);
        int32_t _ss_addr_sk1212 = tbl_Filter_TD_2496_output.getInt32(i, 6);
        int32_t _ss_store_sk1213 = tbl_Filter_TD_2496_output.getInt32(i, 7);
        int32_t _ss_promo_sk1214 = tbl_Filter_TD_2496_output.getInt32(i, 8);
        int64_t _ss_ticket_number1215L = tbl_Filter_TD_2496_output.getInt64(i, 9);
        int32_t _ss_quantity1216 = tbl_Filter_TD_2496_output.getInt32(i, 10);
        int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_2496_output.getInt32(i, 11);
        int32_t _ss_list_price1218 = tbl_Filter_TD_2496_output.getInt32(i, 12);
        int32_t _ss_sales_price1219 = tbl_Filter_TD_2496_output.getInt32(i, 13);
        int32_t _ss_ext_discount_amt1220 = tbl_Filter_TD_2496_output.getInt32(i, 14);
        int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_2496_output.getInt32(i, 15);
        int32_t _ss_ext_wholesale_cost1222 = tbl_Filter_TD_2496_output.getInt32(i, 16);
        int32_t _ss_ext_list_price1223 = tbl_Filter_TD_2496_output.getInt32(i, 17);
        int32_t _ss_ext_tax1224 = tbl_Filter_TD_2496_output.getInt32(i, 18);
        int32_t _ss_coupon_amt1225 = tbl_Filter_TD_2496_output.getInt32(i, 19);
        int32_t _ss_net_paid1226 = tbl_Filter_TD_2496_output.getInt32(i, 20);
        int32_t _ss_net_paid_inc_tax1227 = tbl_Filter_TD_2496_output.getInt32(i, 21);
        int32_t _ss_net_profit1228 = tbl_Filter_TD_2496_output.getInt32(i, 22);
        int64_t _count19399L_count_0 = 1;
        count_0 += _count19399L_count_0;
    }
    int r = 0;
    int64_t _count19399L = count_0;
    tbl_Aggregate_TD_1434_output.setInt64(r++, 0, _count19399L);
    tbl_Aggregate_TD_1434_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1434_output #Row: " << tbl_Aggregate_TD_1434_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1821(Table &tbl_SerializeFromObject_TD_2543_input, Table &tbl_Filter_TD_1821_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(r_reason_sk#351) AND (r_reason_sk#351 = 1)))
    // Input: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    // Output: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2543_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_SerializeFromObject_TD_2543_input.getInt32(i, 0);
        if ((1) && (_r_reason_sk351 == 1)) {
            int32_t _r_reason_sk351_t = tbl_SerializeFromObject_TD_2543_input.getInt32(i, 0);
            tbl_Filter_TD_1821_output.setInt32(r, 0, _r_reason_sk351_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_id352_t = tbl_SerializeFromObject_TD_2543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_1821_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _r_reason_id352_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_t = tbl_SerializeFromObject_TD_2543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_1821_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _r_reason_desc353_t);
            r++;
        }
    }
    tbl_Filter_TD_1821_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1821_output #Row: " << tbl_Filter_TD_1821_output.getNumRow() << std::endl;
}

void SW_Project_TD_082(Table &tbl_Filter_TD_1821_output, Table &tbl_Aggregate_TD_1434_output, Table &tbl_Aggregate_TD_1362_output, Table &tbl_Aggregate_TD_1899_output, Table &tbl_Aggregate_TD_1227_output, Table &tbl_Aggregate_TD_1569_output, Table &tbl_Aggregate_TD_1737_output, Table &tbl_Aggregate_TD_1694_output, Table &tbl_Aggregate_TD_1525_output, Table &tbl_Aggregate_TD_1655_output, Table &tbl_Aggregate_TD_143_output, Table &tbl_Aggregate_TD_1593_output, Table &tbl_Aggregate_TD_1163_output, Table &tbl_Aggregate_TD_1143_output, Table &tbl_Aggregate_TD_145_output, Table &tbl_Aggregate_TD_1222_output, Table &tbl_Project_TD_082_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CASE WHEN (scalar-subquery#9378 [] > 74129) THEN scalar-subquery#9379 [] ELSE scalar-subquery#9380 [] END AS bucket1#9381, CASE WHEN (scalar-subquery#9382 [] > 122840) THEN scalar-subquery#9383 [] ELSE scalar-subquery#9384 [] END AS bucket2#9385, CASE WHEN (scalar-subquery#9386 [] > 56580) THEN scalar-subquery#9387 [] ELSE scalar-subquery#9388 [] END AS bucket3#9389, CASE WHEN (scalar-subquery#9390 [] > 10097) THEN scalar-subquery#9391 [] ELSE scalar-subquery#9392 [] END AS bucket4#9393, CASE WHEN (scalar-subquery#9394 [] > 165306) THEN scalar-subquery#9395 [] ELSE scalar-subquery#9396 [] END AS bucket5#9397)
    // Input: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    // Output: ListBuffer(bucket1#9381, bucket2#9385, bucket3#9389, bucket4#9393, bucket5#9397)
    int nrow1 = tbl_Filter_TD_1821_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_Filter_TD_1821_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_id352 = tbl_Filter_TD_1821_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353 = tbl_Filter_TD_1821_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _bucket19381 = _count19399L ? _avgss_ext_discount_amt9401 : _avgss_net_paid9403;
        tbl_Project_TD_082_output.setInt32(i, 0, _bucket19381);
        int32_t _bucket29385 = _count19405L ? _avgss_ext_discount_amt9407 : _avgss_net_paid9409;
        tbl_Project_TD_082_output.setInt32(i, 1, _bucket29385);
        int32_t _bucket39389 = _count19411L ? _avgss_ext_discount_amt9413 : _avgss_net_paid9415;
        tbl_Project_TD_082_output.setInt32(i, 2, _bucket39389);
        int32_t _bucket49393 = _count19417L ? _avgss_ext_discount_amt9419 : _avgss_net_paid9421;
        tbl_Project_TD_082_output.setInt32(i, 3, _bucket49393);
        int32_t _bucket59397 = _count19423L ? _avgss_ext_discount_amt9425 : _avgss_net_paid9427;
        tbl_Project_TD_082_output.setInt32(i, 4, _bucket59397);
    }
    tbl_Project_TD_082_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_082_output #Row: " << tbl_Project_TD_082_output.getNumRow() << std::endl;
}

