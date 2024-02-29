#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_2189309(Table &tbl_SerializeFromObject_TD_3365539_input, Table &tbl_Filter_TD_2189309_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9764) AND ((ss_quantity#9764 >= 81) AND (ss_quantity#9764 <= 100))))
    // Input: ListBuffer(ss_net_paid#9774, ss_quantity#9764)
    // Output: ListBuffer(ss_net_paid#9774)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3365539_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9764 = tbl_SerializeFromObject_TD_3365539_input.getInt32(i, 1);
        if ((_ss_quantity9764!= 0) && ((_ss_quantity9764 >= 81) && (_ss_quantity9764 <= 100))) {
            int64_t _ss_net_paid9774_t = tbl_SerializeFromObject_TD_3365539_input.getInt64(i, 0);
            tbl_Filter_TD_2189309_output.setInt64(r, 0, _ss_net_paid9774_t);
            r++;
        }
    }
    tbl_Filter_TD_2189309_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2189309_output #Row: " << tbl_Filter_TD_2189309_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2744369(Table &tbl_SerializeFromObject_TD_3525307_input, Table &tbl_Filter_TD_2744369_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9741) AND ((ss_quantity#9741 >= 81) AND (ss_quantity#9741 <= 100))))
    // Input: ListBuffer(ss_ext_discount_amt#9745, ss_quantity#9741)
    // Output: ListBuffer(ss_ext_discount_amt#9745)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3525307_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9741 = tbl_SerializeFromObject_TD_3525307_input.getInt32(i, 1);
        if ((_ss_quantity9741!= 0) && ((_ss_quantity9741 >= 81) && (_ss_quantity9741 <= 100))) {
            int64_t _ss_ext_discount_amt9745_t = tbl_SerializeFromObject_TD_3525307_input.getInt64(i, 0);
            tbl_Filter_TD_2744369_output.setInt64(r, 0, _ss_ext_discount_amt9745_t);
            r++;
        }
    }
    tbl_Filter_TD_2744369_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2744369_output #Row: " << tbl_Filter_TD_2744369_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2648228(Table &tbl_SerializeFromObject_TD_3167901_input, Table &tbl_Filter_TD_2648228_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9718) AND ((ss_quantity#9718 >= 81) AND (ss_quantity#9718 <= 100))))
    // Input: ListBuffer(ss_sold_date_sk#9708, ss_sold_time_sk#9709, ss_item_sk#9710, ss_customer_sk#9711, ss_cdemo_sk#9712, ss_hdemo_sk#9713, ss_addr_sk#9714, ss_store_sk#9715, ss_promo_sk#9716, ss_ticket_number#9717L, ss_quantity#9718, ss_wholesale_cost#9719, ss_list_price#9720, ss_sales_price#9721, ss_ext_discount_amt#9722, ss_ext_sales_price#9723, ss_ext_wholesale_cost#9724, ss_ext_list_price#9725, ss_ext_tax#9726, ss_coupon_amt#9727, ss_net_paid#9728, ss_net_paid_inc_tax#9729, ss_net_profit#9730)
    // Output: ListBuffer(ss_sold_date_sk#9708, ss_sold_time_sk#9709, ss_item_sk#9710, ss_customer_sk#9711, ss_cdemo_sk#9712, ss_hdemo_sk#9713, ss_addr_sk#9714, ss_store_sk#9715, ss_promo_sk#9716, ss_ticket_number#9717L, ss_quantity#9718, ss_wholesale_cost#9719, ss_list_price#9720, ss_sales_price#9721, ss_ext_discount_amt#9722, ss_ext_sales_price#9723, ss_ext_wholesale_cost#9724, ss_ext_list_price#9725, ss_ext_tax#9726, ss_coupon_amt#9727, ss_net_paid#9728, ss_net_paid_inc_tax#9729, ss_net_profit#9730)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3167901_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9718 = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 10);
        if ((_ss_quantity9718!= 0) && ((_ss_quantity9718 >= 81) && (_ss_quantity9718 <= 100))) {
            int32_t _ss_sold_date_sk9708_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 0);
            tbl_Filter_TD_2648228_output.setInt32(r, 0, _ss_sold_date_sk9708_t);
            int32_t _ss_sold_time_sk9709_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 1);
            tbl_Filter_TD_2648228_output.setInt32(r, 1, _ss_sold_time_sk9709_t);
            int32_t _ss_item_sk9710_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 2);
            tbl_Filter_TD_2648228_output.setInt32(r, 2, _ss_item_sk9710_t);
            int32_t _ss_customer_sk9711_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 3);
            tbl_Filter_TD_2648228_output.setInt32(r, 3, _ss_customer_sk9711_t);
            int32_t _ss_cdemo_sk9712_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 4);
            tbl_Filter_TD_2648228_output.setInt32(r, 4, _ss_cdemo_sk9712_t);
            int32_t _ss_hdemo_sk9713_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 5);
            tbl_Filter_TD_2648228_output.setInt32(r, 5, _ss_hdemo_sk9713_t);
            int32_t _ss_addr_sk9714_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 6);
            tbl_Filter_TD_2648228_output.setInt32(r, 6, _ss_addr_sk9714_t);
            int32_t _ss_store_sk9715_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 7);
            tbl_Filter_TD_2648228_output.setInt32(r, 7, _ss_store_sk9715_t);
            int32_t _ss_promo_sk9716_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 8);
            tbl_Filter_TD_2648228_output.setInt32(r, 8, _ss_promo_sk9716_t);
            int64_t _ss_ticket_number9717L_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 9);
            tbl_Filter_TD_2648228_output.setInt64(r, 9, _ss_ticket_number9717L_t);
            int32_t _ss_quantity9718_t = tbl_SerializeFromObject_TD_3167901_input.getInt32(i, 10);
            tbl_Filter_TD_2648228_output.setInt32(r, 10, _ss_quantity9718_t);
            int64_t _ss_wholesale_cost9719_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 11);
            tbl_Filter_TD_2648228_output.setInt64(r, 11, _ss_wholesale_cost9719_t);
            int64_t _ss_list_price9720_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 12);
            tbl_Filter_TD_2648228_output.setInt64(r, 12, _ss_list_price9720_t);
            int64_t _ss_sales_price9721_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 13);
            tbl_Filter_TD_2648228_output.setInt64(r, 13, _ss_sales_price9721_t);
            int64_t _ss_ext_discount_amt9722_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 14);
            tbl_Filter_TD_2648228_output.setInt64(r, 14, _ss_ext_discount_amt9722_t);
            int64_t _ss_ext_sales_price9723_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 15);
            tbl_Filter_TD_2648228_output.setInt64(r, 15, _ss_ext_sales_price9723_t);
            int64_t _ss_ext_wholesale_cost9724_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 16);
            tbl_Filter_TD_2648228_output.setInt64(r, 16, _ss_ext_wholesale_cost9724_t);
            int64_t _ss_ext_list_price9725_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 17);
            tbl_Filter_TD_2648228_output.setInt64(r, 17, _ss_ext_list_price9725_t);
            int64_t _ss_ext_tax9726_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 18);
            tbl_Filter_TD_2648228_output.setInt64(r, 18, _ss_ext_tax9726_t);
            int64_t _ss_coupon_amt9727_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 19);
            tbl_Filter_TD_2648228_output.setInt64(r, 19, _ss_coupon_amt9727_t);
            int64_t _ss_net_paid9728_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 20);
            tbl_Filter_TD_2648228_output.setInt64(r, 20, _ss_net_paid9728_t);
            int64_t _ss_net_paid_inc_tax9729_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 21);
            tbl_Filter_TD_2648228_output.setInt64(r, 21, _ss_net_paid_inc_tax9729_t);
            int64_t _ss_net_profit9730_t = tbl_SerializeFromObject_TD_3167901_input.getInt64(i, 22);
            tbl_Filter_TD_2648228_output.setInt64(r, 22, _ss_net_profit9730_t);
            r++;
        }
    }
    tbl_Filter_TD_2648228_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2648228_output #Row: " << tbl_Filter_TD_2648228_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2772444(Table &tbl_SerializeFromObject_TD_3245000_input, Table &tbl_Filter_TD_2772444_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9695) AND ((ss_quantity#9695 >= 61) AND (ss_quantity#9695 <= 80))))
    // Input: ListBuffer(ss_net_paid#9705, ss_quantity#9695)
    // Output: ListBuffer(ss_net_paid#9705)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3245000_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9695 = tbl_SerializeFromObject_TD_3245000_input.getInt32(i, 1);
        if ((_ss_quantity9695!= 0) && ((_ss_quantity9695 >= 61) && (_ss_quantity9695 <= 80))) {
            int64_t _ss_net_paid9705_t = tbl_SerializeFromObject_TD_3245000_input.getInt64(i, 0);
            tbl_Filter_TD_2772444_output.setInt64(r, 0, _ss_net_paid9705_t);
            r++;
        }
    }
    tbl_Filter_TD_2772444_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2772444_output #Row: " << tbl_Filter_TD_2772444_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2773689(Table &tbl_SerializeFromObject_TD_3131787_input, Table &tbl_Filter_TD_2773689_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9672) AND ((ss_quantity#9672 >= 61) AND (ss_quantity#9672 <= 80))))
    // Input: ListBuffer(ss_ext_discount_amt#9676, ss_quantity#9672)
    // Output: ListBuffer(ss_ext_discount_amt#9676)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3131787_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9672 = tbl_SerializeFromObject_TD_3131787_input.getInt32(i, 1);
        if ((_ss_quantity9672!= 0) && ((_ss_quantity9672 >= 61) && (_ss_quantity9672 <= 80))) {
            int64_t _ss_ext_discount_amt9676_t = tbl_SerializeFromObject_TD_3131787_input.getInt64(i, 0);
            tbl_Filter_TD_2773689_output.setInt64(r, 0, _ss_ext_discount_amt9676_t);
            r++;
        }
    }
    tbl_Filter_TD_2773689_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2773689_output #Row: " << tbl_Filter_TD_2773689_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2222883(Table &tbl_SerializeFromObject_TD_3891121_input, Table &tbl_Filter_TD_2222883_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9649) AND ((ss_quantity#9649 >= 61) AND (ss_quantity#9649 <= 80))))
    // Input: ListBuffer(ss_sold_date_sk#9639, ss_sold_time_sk#9640, ss_item_sk#9641, ss_customer_sk#9642, ss_cdemo_sk#9643, ss_hdemo_sk#9644, ss_addr_sk#9645, ss_store_sk#9646, ss_promo_sk#9647, ss_ticket_number#9648L, ss_quantity#9649, ss_wholesale_cost#9650, ss_list_price#9651, ss_sales_price#9652, ss_ext_discount_amt#9653, ss_ext_sales_price#9654, ss_ext_wholesale_cost#9655, ss_ext_list_price#9656, ss_ext_tax#9657, ss_coupon_amt#9658, ss_net_paid#9659, ss_net_paid_inc_tax#9660, ss_net_profit#9661)
    // Output: ListBuffer(ss_sold_date_sk#9639, ss_sold_time_sk#9640, ss_item_sk#9641, ss_customer_sk#9642, ss_cdemo_sk#9643, ss_hdemo_sk#9644, ss_addr_sk#9645, ss_store_sk#9646, ss_promo_sk#9647, ss_ticket_number#9648L, ss_quantity#9649, ss_wholesale_cost#9650, ss_list_price#9651, ss_sales_price#9652, ss_ext_discount_amt#9653, ss_ext_sales_price#9654, ss_ext_wholesale_cost#9655, ss_ext_list_price#9656, ss_ext_tax#9657, ss_coupon_amt#9658, ss_net_paid#9659, ss_net_paid_inc_tax#9660, ss_net_profit#9661)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3891121_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9649 = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 10);
        if ((_ss_quantity9649!= 0) && ((_ss_quantity9649 >= 61) && (_ss_quantity9649 <= 80))) {
            int32_t _ss_sold_date_sk9639_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 0);
            tbl_Filter_TD_2222883_output.setInt32(r, 0, _ss_sold_date_sk9639_t);
            int32_t _ss_sold_time_sk9640_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 1);
            tbl_Filter_TD_2222883_output.setInt32(r, 1, _ss_sold_time_sk9640_t);
            int32_t _ss_item_sk9641_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 2);
            tbl_Filter_TD_2222883_output.setInt32(r, 2, _ss_item_sk9641_t);
            int32_t _ss_customer_sk9642_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 3);
            tbl_Filter_TD_2222883_output.setInt32(r, 3, _ss_customer_sk9642_t);
            int32_t _ss_cdemo_sk9643_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 4);
            tbl_Filter_TD_2222883_output.setInt32(r, 4, _ss_cdemo_sk9643_t);
            int32_t _ss_hdemo_sk9644_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 5);
            tbl_Filter_TD_2222883_output.setInt32(r, 5, _ss_hdemo_sk9644_t);
            int32_t _ss_addr_sk9645_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 6);
            tbl_Filter_TD_2222883_output.setInt32(r, 6, _ss_addr_sk9645_t);
            int32_t _ss_store_sk9646_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 7);
            tbl_Filter_TD_2222883_output.setInt32(r, 7, _ss_store_sk9646_t);
            int32_t _ss_promo_sk9647_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 8);
            tbl_Filter_TD_2222883_output.setInt32(r, 8, _ss_promo_sk9647_t);
            int64_t _ss_ticket_number9648L_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 9);
            tbl_Filter_TD_2222883_output.setInt64(r, 9, _ss_ticket_number9648L_t);
            int32_t _ss_quantity9649_t = tbl_SerializeFromObject_TD_3891121_input.getInt32(i, 10);
            tbl_Filter_TD_2222883_output.setInt32(r, 10, _ss_quantity9649_t);
            int64_t _ss_wholesale_cost9650_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 11);
            tbl_Filter_TD_2222883_output.setInt64(r, 11, _ss_wholesale_cost9650_t);
            int64_t _ss_list_price9651_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 12);
            tbl_Filter_TD_2222883_output.setInt64(r, 12, _ss_list_price9651_t);
            int64_t _ss_sales_price9652_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 13);
            tbl_Filter_TD_2222883_output.setInt64(r, 13, _ss_sales_price9652_t);
            int64_t _ss_ext_discount_amt9653_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 14);
            tbl_Filter_TD_2222883_output.setInt64(r, 14, _ss_ext_discount_amt9653_t);
            int64_t _ss_ext_sales_price9654_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 15);
            tbl_Filter_TD_2222883_output.setInt64(r, 15, _ss_ext_sales_price9654_t);
            int64_t _ss_ext_wholesale_cost9655_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 16);
            tbl_Filter_TD_2222883_output.setInt64(r, 16, _ss_ext_wholesale_cost9655_t);
            int64_t _ss_ext_list_price9656_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 17);
            tbl_Filter_TD_2222883_output.setInt64(r, 17, _ss_ext_list_price9656_t);
            int64_t _ss_ext_tax9657_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 18);
            tbl_Filter_TD_2222883_output.setInt64(r, 18, _ss_ext_tax9657_t);
            int64_t _ss_coupon_amt9658_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 19);
            tbl_Filter_TD_2222883_output.setInt64(r, 19, _ss_coupon_amt9658_t);
            int64_t _ss_net_paid9659_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 20);
            tbl_Filter_TD_2222883_output.setInt64(r, 20, _ss_net_paid9659_t);
            int64_t _ss_net_paid_inc_tax9660_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 21);
            tbl_Filter_TD_2222883_output.setInt64(r, 21, _ss_net_paid_inc_tax9660_t);
            int64_t _ss_net_profit9661_t = tbl_SerializeFromObject_TD_3891121_input.getInt64(i, 22);
            tbl_Filter_TD_2222883_output.setInt64(r, 22, _ss_net_profit9661_t);
            r++;
        }
    }
    tbl_Filter_TD_2222883_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2222883_output #Row: " << tbl_Filter_TD_2222883_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2517699(Table &tbl_SerializeFromObject_TD_3543374_input, Table &tbl_Filter_TD_2517699_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9626) AND ((ss_quantity#9626 >= 41) AND (ss_quantity#9626 <= 60))))
    // Input: ListBuffer(ss_net_paid#9636, ss_quantity#9626)
    // Output: ListBuffer(ss_net_paid#9636)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3543374_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9626 = tbl_SerializeFromObject_TD_3543374_input.getInt32(i, 1);
        if ((_ss_quantity9626!= 0) && ((_ss_quantity9626 >= 41) && (_ss_quantity9626 <= 60))) {
            int64_t _ss_net_paid9636_t = tbl_SerializeFromObject_TD_3543374_input.getInt64(i, 0);
            tbl_Filter_TD_2517699_output.setInt64(r, 0, _ss_net_paid9636_t);
            r++;
        }
    }
    tbl_Filter_TD_2517699_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2517699_output #Row: " << tbl_Filter_TD_2517699_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2741049(Table &tbl_SerializeFromObject_TD_3572949_input, Table &tbl_Filter_TD_2741049_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9603) AND ((ss_quantity#9603 >= 41) AND (ss_quantity#9603 <= 60))))
    // Input: ListBuffer(ss_ext_discount_amt#9607, ss_quantity#9603)
    // Output: ListBuffer(ss_ext_discount_amt#9607)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3572949_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9603 = tbl_SerializeFromObject_TD_3572949_input.getInt32(i, 1);
        if ((_ss_quantity9603!= 0) && ((_ss_quantity9603 >= 41) && (_ss_quantity9603 <= 60))) {
            int64_t _ss_ext_discount_amt9607_t = tbl_SerializeFromObject_TD_3572949_input.getInt64(i, 0);
            tbl_Filter_TD_2741049_output.setInt64(r, 0, _ss_ext_discount_amt9607_t);
            r++;
        }
    }
    tbl_Filter_TD_2741049_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2741049_output #Row: " << tbl_Filter_TD_2741049_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2946209(Table &tbl_SerializeFromObject_TD_3443933_input, Table &tbl_Filter_TD_2946209_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9580) AND ((ss_quantity#9580 >= 41) AND (ss_quantity#9580 <= 60))))
    // Input: ListBuffer(ss_sold_date_sk#9570, ss_sold_time_sk#9571, ss_item_sk#9572, ss_customer_sk#9573, ss_cdemo_sk#9574, ss_hdemo_sk#9575, ss_addr_sk#9576, ss_store_sk#9577, ss_promo_sk#9578, ss_ticket_number#9579L, ss_quantity#9580, ss_wholesale_cost#9581, ss_list_price#9582, ss_sales_price#9583, ss_ext_discount_amt#9584, ss_ext_sales_price#9585, ss_ext_wholesale_cost#9586, ss_ext_list_price#9587, ss_ext_tax#9588, ss_coupon_amt#9589, ss_net_paid#9590, ss_net_paid_inc_tax#9591, ss_net_profit#9592)
    // Output: ListBuffer(ss_sold_date_sk#9570, ss_sold_time_sk#9571, ss_item_sk#9572, ss_customer_sk#9573, ss_cdemo_sk#9574, ss_hdemo_sk#9575, ss_addr_sk#9576, ss_store_sk#9577, ss_promo_sk#9578, ss_ticket_number#9579L, ss_quantity#9580, ss_wholesale_cost#9581, ss_list_price#9582, ss_sales_price#9583, ss_ext_discount_amt#9584, ss_ext_sales_price#9585, ss_ext_wholesale_cost#9586, ss_ext_list_price#9587, ss_ext_tax#9588, ss_coupon_amt#9589, ss_net_paid#9590, ss_net_paid_inc_tax#9591, ss_net_profit#9592)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3443933_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9580 = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 10);
        if ((_ss_quantity9580!= 0) && ((_ss_quantity9580 >= 41) && (_ss_quantity9580 <= 60))) {
            int32_t _ss_sold_date_sk9570_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 0);
            tbl_Filter_TD_2946209_output.setInt32(r, 0, _ss_sold_date_sk9570_t);
            int32_t _ss_sold_time_sk9571_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 1);
            tbl_Filter_TD_2946209_output.setInt32(r, 1, _ss_sold_time_sk9571_t);
            int32_t _ss_item_sk9572_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 2);
            tbl_Filter_TD_2946209_output.setInt32(r, 2, _ss_item_sk9572_t);
            int32_t _ss_customer_sk9573_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 3);
            tbl_Filter_TD_2946209_output.setInt32(r, 3, _ss_customer_sk9573_t);
            int32_t _ss_cdemo_sk9574_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 4);
            tbl_Filter_TD_2946209_output.setInt32(r, 4, _ss_cdemo_sk9574_t);
            int32_t _ss_hdemo_sk9575_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 5);
            tbl_Filter_TD_2946209_output.setInt32(r, 5, _ss_hdemo_sk9575_t);
            int32_t _ss_addr_sk9576_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 6);
            tbl_Filter_TD_2946209_output.setInt32(r, 6, _ss_addr_sk9576_t);
            int32_t _ss_store_sk9577_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 7);
            tbl_Filter_TD_2946209_output.setInt32(r, 7, _ss_store_sk9577_t);
            int32_t _ss_promo_sk9578_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 8);
            tbl_Filter_TD_2946209_output.setInt32(r, 8, _ss_promo_sk9578_t);
            int64_t _ss_ticket_number9579L_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 9);
            tbl_Filter_TD_2946209_output.setInt64(r, 9, _ss_ticket_number9579L_t);
            int32_t _ss_quantity9580_t = tbl_SerializeFromObject_TD_3443933_input.getInt32(i, 10);
            tbl_Filter_TD_2946209_output.setInt32(r, 10, _ss_quantity9580_t);
            int64_t _ss_wholesale_cost9581_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 11);
            tbl_Filter_TD_2946209_output.setInt64(r, 11, _ss_wholesale_cost9581_t);
            int64_t _ss_list_price9582_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 12);
            tbl_Filter_TD_2946209_output.setInt64(r, 12, _ss_list_price9582_t);
            int64_t _ss_sales_price9583_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 13);
            tbl_Filter_TD_2946209_output.setInt64(r, 13, _ss_sales_price9583_t);
            int64_t _ss_ext_discount_amt9584_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 14);
            tbl_Filter_TD_2946209_output.setInt64(r, 14, _ss_ext_discount_amt9584_t);
            int64_t _ss_ext_sales_price9585_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 15);
            tbl_Filter_TD_2946209_output.setInt64(r, 15, _ss_ext_sales_price9585_t);
            int64_t _ss_ext_wholesale_cost9586_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 16);
            tbl_Filter_TD_2946209_output.setInt64(r, 16, _ss_ext_wholesale_cost9586_t);
            int64_t _ss_ext_list_price9587_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 17);
            tbl_Filter_TD_2946209_output.setInt64(r, 17, _ss_ext_list_price9587_t);
            int64_t _ss_ext_tax9588_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 18);
            tbl_Filter_TD_2946209_output.setInt64(r, 18, _ss_ext_tax9588_t);
            int64_t _ss_coupon_amt9589_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 19);
            tbl_Filter_TD_2946209_output.setInt64(r, 19, _ss_coupon_amt9589_t);
            int64_t _ss_net_paid9590_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 20);
            tbl_Filter_TD_2946209_output.setInt64(r, 20, _ss_net_paid9590_t);
            int64_t _ss_net_paid_inc_tax9591_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 21);
            tbl_Filter_TD_2946209_output.setInt64(r, 21, _ss_net_paid_inc_tax9591_t);
            int64_t _ss_net_profit9592_t = tbl_SerializeFromObject_TD_3443933_input.getInt64(i, 22);
            tbl_Filter_TD_2946209_output.setInt64(r, 22, _ss_net_profit9592_t);
            r++;
        }
    }
    tbl_Filter_TD_2946209_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2946209_output #Row: " << tbl_Filter_TD_2946209_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2749466(Table &tbl_SerializeFromObject_TD_3647812_input, Table &tbl_Filter_TD_2749466_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9557) AND ((ss_quantity#9557 >= 21) AND (ss_quantity#9557 <= 40))))
    // Input: ListBuffer(ss_net_paid#9567, ss_quantity#9557)
    // Output: ListBuffer(ss_net_paid#9567)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3647812_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9557 = tbl_SerializeFromObject_TD_3647812_input.getInt32(i, 1);
        if ((_ss_quantity9557!= 0) && ((_ss_quantity9557 >= 21) && (_ss_quantity9557 <= 40))) {
            int64_t _ss_net_paid9567_t = tbl_SerializeFromObject_TD_3647812_input.getInt64(i, 0);
            tbl_Filter_TD_2749466_output.setInt64(r, 0, _ss_net_paid9567_t);
            r++;
        }
    }
    tbl_Filter_TD_2749466_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2749466_output #Row: " << tbl_Filter_TD_2749466_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2990405(Table &tbl_SerializeFromObject_TD_3288469_input, Table &tbl_Filter_TD_2990405_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9534) AND ((ss_quantity#9534 >= 21) AND (ss_quantity#9534 <= 40))))
    // Input: ListBuffer(ss_ext_discount_amt#9538, ss_quantity#9534)
    // Output: ListBuffer(ss_ext_discount_amt#9538)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3288469_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9534 = tbl_SerializeFromObject_TD_3288469_input.getInt32(i, 1);
        if ((_ss_quantity9534!= 0) && ((_ss_quantity9534 >= 21) && (_ss_quantity9534 <= 40))) {
            int64_t _ss_ext_discount_amt9538_t = tbl_SerializeFromObject_TD_3288469_input.getInt64(i, 0);
            tbl_Filter_TD_2990405_output.setInt64(r, 0, _ss_ext_discount_amt9538_t);
            r++;
        }
    }
    tbl_Filter_TD_2990405_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2990405_output #Row: " << tbl_Filter_TD_2990405_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2939587(Table &tbl_SerializeFromObject_TD_3709820_input, Table &tbl_Filter_TD_2939587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9511) AND ((ss_quantity#9511 >= 21) AND (ss_quantity#9511 <= 40))))
    // Input: ListBuffer(ss_sold_date_sk#9501, ss_sold_time_sk#9502, ss_item_sk#9503, ss_customer_sk#9504, ss_cdemo_sk#9505, ss_hdemo_sk#9506, ss_addr_sk#9507, ss_store_sk#9508, ss_promo_sk#9509, ss_ticket_number#9510L, ss_quantity#9511, ss_wholesale_cost#9512, ss_list_price#9513, ss_sales_price#9514, ss_ext_discount_amt#9515, ss_ext_sales_price#9516, ss_ext_wholesale_cost#9517, ss_ext_list_price#9518, ss_ext_tax#9519, ss_coupon_amt#9520, ss_net_paid#9521, ss_net_paid_inc_tax#9522, ss_net_profit#9523)
    // Output: ListBuffer(ss_sold_date_sk#9501, ss_sold_time_sk#9502, ss_item_sk#9503, ss_customer_sk#9504, ss_cdemo_sk#9505, ss_hdemo_sk#9506, ss_addr_sk#9507, ss_store_sk#9508, ss_promo_sk#9509, ss_ticket_number#9510L, ss_quantity#9511, ss_wholesale_cost#9512, ss_list_price#9513, ss_sales_price#9514, ss_ext_discount_amt#9515, ss_ext_sales_price#9516, ss_ext_wholesale_cost#9517, ss_ext_list_price#9518, ss_ext_tax#9519, ss_coupon_amt#9520, ss_net_paid#9521, ss_net_paid_inc_tax#9522, ss_net_profit#9523)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3709820_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9511 = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 10);
        if ((_ss_quantity9511!= 0) && ((_ss_quantity9511 >= 21) && (_ss_quantity9511 <= 40))) {
            int32_t _ss_sold_date_sk9501_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 0);
            tbl_Filter_TD_2939587_output.setInt32(r, 0, _ss_sold_date_sk9501_t);
            int32_t _ss_sold_time_sk9502_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 1);
            tbl_Filter_TD_2939587_output.setInt32(r, 1, _ss_sold_time_sk9502_t);
            int32_t _ss_item_sk9503_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 2);
            tbl_Filter_TD_2939587_output.setInt32(r, 2, _ss_item_sk9503_t);
            int32_t _ss_customer_sk9504_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 3);
            tbl_Filter_TD_2939587_output.setInt32(r, 3, _ss_customer_sk9504_t);
            int32_t _ss_cdemo_sk9505_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 4);
            tbl_Filter_TD_2939587_output.setInt32(r, 4, _ss_cdemo_sk9505_t);
            int32_t _ss_hdemo_sk9506_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 5);
            tbl_Filter_TD_2939587_output.setInt32(r, 5, _ss_hdemo_sk9506_t);
            int32_t _ss_addr_sk9507_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 6);
            tbl_Filter_TD_2939587_output.setInt32(r, 6, _ss_addr_sk9507_t);
            int32_t _ss_store_sk9508_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 7);
            tbl_Filter_TD_2939587_output.setInt32(r, 7, _ss_store_sk9508_t);
            int32_t _ss_promo_sk9509_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 8);
            tbl_Filter_TD_2939587_output.setInt32(r, 8, _ss_promo_sk9509_t);
            int64_t _ss_ticket_number9510L_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 9);
            tbl_Filter_TD_2939587_output.setInt64(r, 9, _ss_ticket_number9510L_t);
            int32_t _ss_quantity9511_t = tbl_SerializeFromObject_TD_3709820_input.getInt32(i, 10);
            tbl_Filter_TD_2939587_output.setInt32(r, 10, _ss_quantity9511_t);
            int64_t _ss_wholesale_cost9512_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 11);
            tbl_Filter_TD_2939587_output.setInt64(r, 11, _ss_wholesale_cost9512_t);
            int64_t _ss_list_price9513_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 12);
            tbl_Filter_TD_2939587_output.setInt64(r, 12, _ss_list_price9513_t);
            int64_t _ss_sales_price9514_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 13);
            tbl_Filter_TD_2939587_output.setInt64(r, 13, _ss_sales_price9514_t);
            int64_t _ss_ext_discount_amt9515_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 14);
            tbl_Filter_TD_2939587_output.setInt64(r, 14, _ss_ext_discount_amt9515_t);
            int64_t _ss_ext_sales_price9516_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 15);
            tbl_Filter_TD_2939587_output.setInt64(r, 15, _ss_ext_sales_price9516_t);
            int64_t _ss_ext_wholesale_cost9517_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 16);
            tbl_Filter_TD_2939587_output.setInt64(r, 16, _ss_ext_wholesale_cost9517_t);
            int64_t _ss_ext_list_price9518_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 17);
            tbl_Filter_TD_2939587_output.setInt64(r, 17, _ss_ext_list_price9518_t);
            int64_t _ss_ext_tax9519_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 18);
            tbl_Filter_TD_2939587_output.setInt64(r, 18, _ss_ext_tax9519_t);
            int64_t _ss_coupon_amt9520_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 19);
            tbl_Filter_TD_2939587_output.setInt64(r, 19, _ss_coupon_amt9520_t);
            int64_t _ss_net_paid9521_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 20);
            tbl_Filter_TD_2939587_output.setInt64(r, 20, _ss_net_paid9521_t);
            int64_t _ss_net_paid_inc_tax9522_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 21);
            tbl_Filter_TD_2939587_output.setInt64(r, 21, _ss_net_paid_inc_tax9522_t);
            int64_t _ss_net_profit9523_t = tbl_SerializeFromObject_TD_3709820_input.getInt64(i, 22);
            tbl_Filter_TD_2939587_output.setInt64(r, 22, _ss_net_profit9523_t);
            r++;
        }
    }
    tbl_Filter_TD_2939587_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2939587_output #Row: " << tbl_Filter_TD_2939587_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2370151(Table &tbl_SerializeFromObject_TD_350025_input, Table &tbl_Filter_TD_2370151_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9488) AND ((ss_quantity#9488 >= 1) AND (ss_quantity#9488 <= 20))))
    // Input: ListBuffer(ss_net_paid#9498, ss_quantity#9488)
    // Output: ListBuffer(ss_net_paid#9498)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_350025_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9488 = tbl_SerializeFromObject_TD_350025_input.getInt32(i, 1);
        if ((_ss_quantity9488!= 0) && ((_ss_quantity9488 >= 1) && (_ss_quantity9488 <= 20))) {
            int64_t _ss_net_paid9498_t = tbl_SerializeFromObject_TD_350025_input.getInt64(i, 0);
            tbl_Filter_TD_2370151_output.setInt64(r, 0, _ss_net_paid9498_t);
            r++;
        }
    }
    tbl_Filter_TD_2370151_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2370151_output #Row: " << tbl_Filter_TD_2370151_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2586365(Table &tbl_SerializeFromObject_TD_366445_input, Table &tbl_Filter_TD_2586365_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#9465) AND ((ss_quantity#9465 >= 1) AND (ss_quantity#9465 <= 20))))
    // Input: ListBuffer(ss_ext_discount_amt#9469, ss_quantity#9465)
    // Output: ListBuffer(ss_ext_discount_amt#9469)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_366445_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity9465 = tbl_SerializeFromObject_TD_366445_input.getInt32(i, 1);
        if ((_ss_quantity9465!= 0) && ((_ss_quantity9465 >= 1) && (_ss_quantity9465 <= 20))) {
            int64_t _ss_ext_discount_amt9469_t = tbl_SerializeFromObject_TD_366445_input.getInt64(i, 0);
            tbl_Filter_TD_2586365_output.setInt64(r, 0, _ss_ext_discount_amt9469_t);
            r++;
        }
    }
    tbl_Filter_TD_2586365_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2586365_output #Row: " << tbl_Filter_TD_2586365_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2558355(Table &tbl_SerializeFromObject_TD_3620393_input, Table &tbl_Filter_TD_2558355_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#1216) AND ((ss_quantity#1216 >= 1) AND (ss_quantity#1216 <= 20))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3620393_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 10);
        if ((_ss_quantity1216!= 0) && ((_ss_quantity1216 >= 1) && (_ss_quantity1216 <= 20))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 0);
            tbl_Filter_TD_2558355_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 1);
            tbl_Filter_TD_2558355_output.setInt32(r, 1, _ss_sold_time_sk1207_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 2);
            tbl_Filter_TD_2558355_output.setInt32(r, 2, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 3);
            tbl_Filter_TD_2558355_output.setInt32(r, 3, _ss_customer_sk1209_t);
            int32_t _ss_cdemo_sk1210_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 4);
            tbl_Filter_TD_2558355_output.setInt32(r, 4, _ss_cdemo_sk1210_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 5);
            tbl_Filter_TD_2558355_output.setInt32(r, 5, _ss_hdemo_sk1211_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 6);
            tbl_Filter_TD_2558355_output.setInt32(r, 6, _ss_addr_sk1212_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 7);
            tbl_Filter_TD_2558355_output.setInt32(r, 7, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 8);
            tbl_Filter_TD_2558355_output.setInt32(r, 8, _ss_promo_sk1214_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 9);
            tbl_Filter_TD_2558355_output.setInt64(r, 9, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_3620393_input.getInt32(i, 10);
            tbl_Filter_TD_2558355_output.setInt32(r, 10, _ss_quantity1216_t);
            int64_t _ss_wholesale_cost1217_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 11);
            tbl_Filter_TD_2558355_output.setInt64(r, 11, _ss_wholesale_cost1217_t);
            int64_t _ss_list_price1218_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 12);
            tbl_Filter_TD_2558355_output.setInt64(r, 12, _ss_list_price1218_t);
            int64_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 13);
            tbl_Filter_TD_2558355_output.setInt64(r, 13, _ss_sales_price1219_t);
            int64_t _ss_ext_discount_amt1220_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 14);
            tbl_Filter_TD_2558355_output.setInt64(r, 14, _ss_ext_discount_amt1220_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 15);
            tbl_Filter_TD_2558355_output.setInt64(r, 15, _ss_ext_sales_price1221_t);
            int64_t _ss_ext_wholesale_cost1222_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 16);
            tbl_Filter_TD_2558355_output.setInt64(r, 16, _ss_ext_wholesale_cost1222_t);
            int64_t _ss_ext_list_price1223_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 17);
            tbl_Filter_TD_2558355_output.setInt64(r, 17, _ss_ext_list_price1223_t);
            int64_t _ss_ext_tax1224_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 18);
            tbl_Filter_TD_2558355_output.setInt64(r, 18, _ss_ext_tax1224_t);
            int64_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 19);
            tbl_Filter_TD_2558355_output.setInt64(r, 19, _ss_coupon_amt1225_t);
            int64_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 20);
            tbl_Filter_TD_2558355_output.setInt64(r, 20, _ss_net_paid1226_t);
            int64_t _ss_net_paid_inc_tax1227_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 21);
            tbl_Filter_TD_2558355_output.setInt64(r, 21, _ss_net_paid_inc_tax1227_t);
            int64_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_3620393_input.getInt64(i, 22);
            tbl_Filter_TD_2558355_output.setInt64(r, 22, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_2558355_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2558355_output #Row: " << tbl_Filter_TD_2558355_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1865306(Table &tbl_Filter_TD_2189309_output, Table &tbl_Aggregate_TD_1865306_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9774)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9454)
    // Input: ListBuffer(ss_net_paid#9774)
    // Output: ListBuffer(avg(ss_net_paid)#9454)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2189309_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid9774 = tbl_Filter_TD_2189309_output.getInt64(i, 0);
        int64_t _avgss_net_paid9454_avg_0 = _ss_net_paid9774;
        avg_0 = (avg_0 + _avgss_net_paid9454_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid9454 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1865306_output.setInt64(r++, 0, _avgss_net_paid9454);
    tbl_Aggregate_TD_1865306_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1865306_output #Row: " << tbl_Aggregate_TD_1865306_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1261647(Table &tbl_Filter_TD_2744369_output, Table &tbl_Aggregate_TD_1261647_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9745)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9452)
    // Input: ListBuffer(ss_ext_discount_amt#9745)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9452)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2744369_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt9745 = tbl_Filter_TD_2744369_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt9452_avg_0 = _ss_ext_discount_amt9745;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9452_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt9452 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1261647_output.setInt64(r++, 0, _avgss_ext_discount_amt9452);
    tbl_Aggregate_TD_1261647_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1261647_output #Row: " << tbl_Aggregate_TD_1261647_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1716604(Table &tbl_Filter_TD_2648228_output, Table &tbl_Aggregate_TD_1716604_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9450L)
    // Input: ListBuffer(ss_sold_date_sk#9708, ss_sold_time_sk#9709, ss_item_sk#9710, ss_customer_sk#9711, ss_cdemo_sk#9712, ss_hdemo_sk#9713, ss_addr_sk#9714, ss_store_sk#9715, ss_promo_sk#9716, ss_ticket_number#9717L, ss_quantity#9718, ss_wholesale_cost#9719, ss_list_price#9720, ss_sales_price#9721, ss_ext_discount_amt#9722, ss_ext_sales_price#9723, ss_ext_wholesale_cost#9724, ss_ext_list_price#9725, ss_ext_tax#9726, ss_coupon_amt#9727, ss_net_paid#9728, ss_net_paid_inc_tax#9729, ss_net_profit#9730)
    // Output: ListBuffer(count(1)#9450L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2648228_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9708 = tbl_Filter_TD_2648228_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9709 = tbl_Filter_TD_2648228_output.getInt32(i, 1);
        int32_t _ss_item_sk9710 = tbl_Filter_TD_2648228_output.getInt32(i, 2);
        int32_t _ss_customer_sk9711 = tbl_Filter_TD_2648228_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9712 = tbl_Filter_TD_2648228_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9713 = tbl_Filter_TD_2648228_output.getInt32(i, 5);
        int32_t _ss_addr_sk9714 = tbl_Filter_TD_2648228_output.getInt32(i, 6);
        int32_t _ss_store_sk9715 = tbl_Filter_TD_2648228_output.getInt32(i, 7);
        int32_t _ss_promo_sk9716 = tbl_Filter_TD_2648228_output.getInt32(i, 8);
        int64_t _ss_ticket_number9717L = tbl_Filter_TD_2648228_output.getInt64(i, 9);
        int32_t _ss_quantity9718 = tbl_Filter_TD_2648228_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost9719 = tbl_Filter_TD_2648228_output.getInt64(i, 11);
        int64_t _ss_list_price9720 = tbl_Filter_TD_2648228_output.getInt64(i, 12);
        int64_t _ss_sales_price9721 = tbl_Filter_TD_2648228_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt9722 = tbl_Filter_TD_2648228_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price9723 = tbl_Filter_TD_2648228_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost9724 = tbl_Filter_TD_2648228_output.getInt64(i, 16);
        int64_t _ss_ext_list_price9725 = tbl_Filter_TD_2648228_output.getInt64(i, 17);
        int64_t _ss_ext_tax9726 = tbl_Filter_TD_2648228_output.getInt64(i, 18);
        int64_t _ss_coupon_amt9727 = tbl_Filter_TD_2648228_output.getInt64(i, 19);
        int64_t _ss_net_paid9728 = tbl_Filter_TD_2648228_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax9729 = tbl_Filter_TD_2648228_output.getInt64(i, 21);
        int64_t _ss_net_profit9730 = tbl_Filter_TD_2648228_output.getInt64(i, 22);
        int64_t _count19450L_count_0 = 1;
        count_0 += _count19450L_count_0;
    }
    int r = 0;
    int64_t _count19450L = count_0;
    tbl_Aggregate_TD_1716604_output.setInt64(r++, 0, _count19450L);
    tbl_Aggregate_TD_1716604_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1716604_output #Row: " << tbl_Aggregate_TD_1716604_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1578423(Table &tbl_Filter_TD_2772444_output, Table &tbl_Aggregate_TD_1578423_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9705)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9448)
    // Input: ListBuffer(ss_net_paid#9705)
    // Output: ListBuffer(avg(ss_net_paid)#9448)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2772444_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid9705 = tbl_Filter_TD_2772444_output.getInt64(i, 0);
        int64_t _avgss_net_paid9448_avg_0 = _ss_net_paid9705;
        avg_0 = (avg_0 + _avgss_net_paid9448_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid9448 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1578423_output.setInt64(r++, 0, _avgss_net_paid9448);
    tbl_Aggregate_TD_1578423_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1578423_output #Row: " << tbl_Aggregate_TD_1578423_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1393724(Table &tbl_Filter_TD_2773689_output, Table &tbl_Aggregate_TD_1393724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9676)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9446)
    // Input: ListBuffer(ss_ext_discount_amt#9676)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9446)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2773689_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt9676 = tbl_Filter_TD_2773689_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt9446_avg_0 = _ss_ext_discount_amt9676;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9446_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt9446 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1393724_output.setInt64(r++, 0, _avgss_ext_discount_amt9446);
    tbl_Aggregate_TD_1393724_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1393724_output #Row: " << tbl_Aggregate_TD_1393724_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1508579(Table &tbl_Filter_TD_2222883_output, Table &tbl_Aggregate_TD_1508579_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9444L)
    // Input: ListBuffer(ss_sold_date_sk#9639, ss_sold_time_sk#9640, ss_item_sk#9641, ss_customer_sk#9642, ss_cdemo_sk#9643, ss_hdemo_sk#9644, ss_addr_sk#9645, ss_store_sk#9646, ss_promo_sk#9647, ss_ticket_number#9648L, ss_quantity#9649, ss_wholesale_cost#9650, ss_list_price#9651, ss_sales_price#9652, ss_ext_discount_amt#9653, ss_ext_sales_price#9654, ss_ext_wholesale_cost#9655, ss_ext_list_price#9656, ss_ext_tax#9657, ss_coupon_amt#9658, ss_net_paid#9659, ss_net_paid_inc_tax#9660, ss_net_profit#9661)
    // Output: ListBuffer(count(1)#9444L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2222883_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9639 = tbl_Filter_TD_2222883_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9640 = tbl_Filter_TD_2222883_output.getInt32(i, 1);
        int32_t _ss_item_sk9641 = tbl_Filter_TD_2222883_output.getInt32(i, 2);
        int32_t _ss_customer_sk9642 = tbl_Filter_TD_2222883_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9643 = tbl_Filter_TD_2222883_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9644 = tbl_Filter_TD_2222883_output.getInt32(i, 5);
        int32_t _ss_addr_sk9645 = tbl_Filter_TD_2222883_output.getInt32(i, 6);
        int32_t _ss_store_sk9646 = tbl_Filter_TD_2222883_output.getInt32(i, 7);
        int32_t _ss_promo_sk9647 = tbl_Filter_TD_2222883_output.getInt32(i, 8);
        int64_t _ss_ticket_number9648L = tbl_Filter_TD_2222883_output.getInt64(i, 9);
        int32_t _ss_quantity9649 = tbl_Filter_TD_2222883_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost9650 = tbl_Filter_TD_2222883_output.getInt64(i, 11);
        int64_t _ss_list_price9651 = tbl_Filter_TD_2222883_output.getInt64(i, 12);
        int64_t _ss_sales_price9652 = tbl_Filter_TD_2222883_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt9653 = tbl_Filter_TD_2222883_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price9654 = tbl_Filter_TD_2222883_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost9655 = tbl_Filter_TD_2222883_output.getInt64(i, 16);
        int64_t _ss_ext_list_price9656 = tbl_Filter_TD_2222883_output.getInt64(i, 17);
        int64_t _ss_ext_tax9657 = tbl_Filter_TD_2222883_output.getInt64(i, 18);
        int64_t _ss_coupon_amt9658 = tbl_Filter_TD_2222883_output.getInt64(i, 19);
        int64_t _ss_net_paid9659 = tbl_Filter_TD_2222883_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax9660 = tbl_Filter_TD_2222883_output.getInt64(i, 21);
        int64_t _ss_net_profit9661 = tbl_Filter_TD_2222883_output.getInt64(i, 22);
        int64_t _count19444L_count_0 = 1;
        count_0 += _count19444L_count_0;
    }
    int r = 0;
    int64_t _count19444L = count_0;
    tbl_Aggregate_TD_1508579_output.setInt64(r++, 0, _count19444L);
    tbl_Aggregate_TD_1508579_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1508579_output #Row: " << tbl_Aggregate_TD_1508579_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1915040(Table &tbl_Filter_TD_2517699_output, Table &tbl_Aggregate_TD_1915040_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9636)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9442)
    // Input: ListBuffer(ss_net_paid#9636)
    // Output: ListBuffer(avg(ss_net_paid)#9442)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2517699_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid9636 = tbl_Filter_TD_2517699_output.getInt64(i, 0);
        int64_t _avgss_net_paid9442_avg_0 = _ss_net_paid9636;
        avg_0 = (avg_0 + _avgss_net_paid9442_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid9442 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1915040_output.setInt64(r++, 0, _avgss_net_paid9442);
    tbl_Aggregate_TD_1915040_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1915040_output #Row: " << tbl_Aggregate_TD_1915040_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1971809(Table &tbl_Filter_TD_2741049_output, Table &tbl_Aggregate_TD_1971809_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9607)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9440)
    // Input: ListBuffer(ss_ext_discount_amt#9607)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9440)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2741049_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt9607 = tbl_Filter_TD_2741049_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt9440_avg_0 = _ss_ext_discount_amt9607;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9440_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt9440 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1971809_output.setInt64(r++, 0, _avgss_ext_discount_amt9440);
    tbl_Aggregate_TD_1971809_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1971809_output #Row: " << tbl_Aggregate_TD_1971809_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1904943(Table &tbl_Filter_TD_2946209_output, Table &tbl_Aggregate_TD_1904943_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9438L)
    // Input: ListBuffer(ss_sold_date_sk#9570, ss_sold_time_sk#9571, ss_item_sk#9572, ss_customer_sk#9573, ss_cdemo_sk#9574, ss_hdemo_sk#9575, ss_addr_sk#9576, ss_store_sk#9577, ss_promo_sk#9578, ss_ticket_number#9579L, ss_quantity#9580, ss_wholesale_cost#9581, ss_list_price#9582, ss_sales_price#9583, ss_ext_discount_amt#9584, ss_ext_sales_price#9585, ss_ext_wholesale_cost#9586, ss_ext_list_price#9587, ss_ext_tax#9588, ss_coupon_amt#9589, ss_net_paid#9590, ss_net_paid_inc_tax#9591, ss_net_profit#9592)
    // Output: ListBuffer(count(1)#9438L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2946209_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9570 = tbl_Filter_TD_2946209_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9571 = tbl_Filter_TD_2946209_output.getInt32(i, 1);
        int32_t _ss_item_sk9572 = tbl_Filter_TD_2946209_output.getInt32(i, 2);
        int32_t _ss_customer_sk9573 = tbl_Filter_TD_2946209_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9574 = tbl_Filter_TD_2946209_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9575 = tbl_Filter_TD_2946209_output.getInt32(i, 5);
        int32_t _ss_addr_sk9576 = tbl_Filter_TD_2946209_output.getInt32(i, 6);
        int32_t _ss_store_sk9577 = tbl_Filter_TD_2946209_output.getInt32(i, 7);
        int32_t _ss_promo_sk9578 = tbl_Filter_TD_2946209_output.getInt32(i, 8);
        int64_t _ss_ticket_number9579L = tbl_Filter_TD_2946209_output.getInt64(i, 9);
        int32_t _ss_quantity9580 = tbl_Filter_TD_2946209_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost9581 = tbl_Filter_TD_2946209_output.getInt64(i, 11);
        int64_t _ss_list_price9582 = tbl_Filter_TD_2946209_output.getInt64(i, 12);
        int64_t _ss_sales_price9583 = tbl_Filter_TD_2946209_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt9584 = tbl_Filter_TD_2946209_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price9585 = tbl_Filter_TD_2946209_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost9586 = tbl_Filter_TD_2946209_output.getInt64(i, 16);
        int64_t _ss_ext_list_price9587 = tbl_Filter_TD_2946209_output.getInt64(i, 17);
        int64_t _ss_ext_tax9588 = tbl_Filter_TD_2946209_output.getInt64(i, 18);
        int64_t _ss_coupon_amt9589 = tbl_Filter_TD_2946209_output.getInt64(i, 19);
        int64_t _ss_net_paid9590 = tbl_Filter_TD_2946209_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax9591 = tbl_Filter_TD_2946209_output.getInt64(i, 21);
        int64_t _ss_net_profit9592 = tbl_Filter_TD_2946209_output.getInt64(i, 22);
        int64_t _count19438L_count_0 = 1;
        count_0 += _count19438L_count_0;
    }
    int r = 0;
    int64_t _count19438L = count_0;
    tbl_Aggregate_TD_1904943_output.setInt64(r++, 0, _count19438L);
    tbl_Aggregate_TD_1904943_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1904943_output #Row: " << tbl_Aggregate_TD_1904943_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1486460(Table &tbl_Filter_TD_2749466_output, Table &tbl_Aggregate_TD_1486460_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9567)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9436)
    // Input: ListBuffer(ss_net_paid#9567)
    // Output: ListBuffer(avg(ss_net_paid)#9436)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2749466_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid9567 = tbl_Filter_TD_2749466_output.getInt64(i, 0);
        int64_t _avgss_net_paid9436_avg_0 = _ss_net_paid9567;
        avg_0 = (avg_0 + _avgss_net_paid9436_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid9436 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1486460_output.setInt64(r++, 0, _avgss_net_paid9436);
    tbl_Aggregate_TD_1486460_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1486460_output #Row: " << tbl_Aggregate_TD_1486460_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_197147(Table &tbl_Filter_TD_2990405_output, Table &tbl_Aggregate_TD_197147_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9538)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9434)
    // Input: ListBuffer(ss_ext_discount_amt#9538)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9434)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2990405_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt9538 = tbl_Filter_TD_2990405_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt9434_avg_0 = _ss_ext_discount_amt9538;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9434_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt9434 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_197147_output.setInt64(r++, 0, _avgss_ext_discount_amt9434);
    tbl_Aggregate_TD_197147_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_197147_output #Row: " << tbl_Aggregate_TD_197147_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1593948(Table &tbl_Filter_TD_2939587_output, Table &tbl_Aggregate_TD_1593948_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9432L)
    // Input: ListBuffer(ss_sold_date_sk#9501, ss_sold_time_sk#9502, ss_item_sk#9503, ss_customer_sk#9504, ss_cdemo_sk#9505, ss_hdemo_sk#9506, ss_addr_sk#9507, ss_store_sk#9508, ss_promo_sk#9509, ss_ticket_number#9510L, ss_quantity#9511, ss_wholesale_cost#9512, ss_list_price#9513, ss_sales_price#9514, ss_ext_discount_amt#9515, ss_ext_sales_price#9516, ss_ext_wholesale_cost#9517, ss_ext_list_price#9518, ss_ext_tax#9519, ss_coupon_amt#9520, ss_net_paid#9521, ss_net_paid_inc_tax#9522, ss_net_profit#9523)
    // Output: ListBuffer(count(1)#9432L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2939587_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk9501 = tbl_Filter_TD_2939587_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk9502 = tbl_Filter_TD_2939587_output.getInt32(i, 1);
        int32_t _ss_item_sk9503 = tbl_Filter_TD_2939587_output.getInt32(i, 2);
        int32_t _ss_customer_sk9504 = tbl_Filter_TD_2939587_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk9505 = tbl_Filter_TD_2939587_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk9506 = tbl_Filter_TD_2939587_output.getInt32(i, 5);
        int32_t _ss_addr_sk9507 = tbl_Filter_TD_2939587_output.getInt32(i, 6);
        int32_t _ss_store_sk9508 = tbl_Filter_TD_2939587_output.getInt32(i, 7);
        int32_t _ss_promo_sk9509 = tbl_Filter_TD_2939587_output.getInt32(i, 8);
        int64_t _ss_ticket_number9510L = tbl_Filter_TD_2939587_output.getInt64(i, 9);
        int32_t _ss_quantity9511 = tbl_Filter_TD_2939587_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost9512 = tbl_Filter_TD_2939587_output.getInt64(i, 11);
        int64_t _ss_list_price9513 = tbl_Filter_TD_2939587_output.getInt64(i, 12);
        int64_t _ss_sales_price9514 = tbl_Filter_TD_2939587_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt9515 = tbl_Filter_TD_2939587_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price9516 = tbl_Filter_TD_2939587_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost9517 = tbl_Filter_TD_2939587_output.getInt64(i, 16);
        int64_t _ss_ext_list_price9518 = tbl_Filter_TD_2939587_output.getInt64(i, 17);
        int64_t _ss_ext_tax9519 = tbl_Filter_TD_2939587_output.getInt64(i, 18);
        int64_t _ss_coupon_amt9520 = tbl_Filter_TD_2939587_output.getInt64(i, 19);
        int64_t _ss_net_paid9521 = tbl_Filter_TD_2939587_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax9522 = tbl_Filter_TD_2939587_output.getInt64(i, 21);
        int64_t _ss_net_profit9523 = tbl_Filter_TD_2939587_output.getInt64(i, 22);
        int64_t _count19432L_count_0 = 1;
        count_0 += _count19432L_count_0;
    }
    int r = 0;
    int64_t _count19432L = count_0;
    tbl_Aggregate_TD_1593948_output.setInt64(r++, 0, _count19432L);
    tbl_Aggregate_TD_1593948_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1593948_output #Row: " << tbl_Aggregate_TD_1593948_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1975173(Table &tbl_Filter_TD_2370151_output, Table &tbl_Aggregate_TD_1975173_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#9498)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#9430)
    // Input: ListBuffer(ss_net_paid#9498)
    // Output: ListBuffer(avg(ss_net_paid)#9430)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2370151_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid9498 = tbl_Filter_TD_2370151_output.getInt64(i, 0);
        int64_t _avgss_net_paid9430_avg_0 = _ss_net_paid9498;
        avg_0 = (avg_0 + _avgss_net_paid9430_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid9430 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1975173_output.setInt64(r++, 0, _avgss_net_paid9430);
    tbl_Aggregate_TD_1975173_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1975173_output #Row: " << tbl_Aggregate_TD_1975173_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1542246(Table &tbl_Filter_TD_2586365_output, Table &tbl_Aggregate_TD_1542246_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#9469)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#9428)
    // Input: ListBuffer(ss_ext_discount_amt#9469)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#9428)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2586365_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt9469 = tbl_Filter_TD_2586365_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt9428_avg_0 = _ss_ext_discount_amt9469;
        avg_0 = (avg_0 + _avgss_ext_discount_amt9428_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt9428 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1542246_output.setInt64(r++, 0, _avgss_ext_discount_amt9428);
    tbl_Aggregate_TD_1542246_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1542246_output #Row: " << tbl_Aggregate_TD_1542246_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1805058(Table &tbl_Filter_TD_2558355_output, Table &tbl_Aggregate_TD_1805058_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#9426L)
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    // Output: ListBuffer(count(1)#9426L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2558355_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_2558355_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk1207 = tbl_Filter_TD_2558355_output.getInt32(i, 1);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_2558355_output.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_Filter_TD_2558355_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk1210 = tbl_Filter_TD_2558355_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_2558355_output.getInt32(i, 5);
        int32_t _ss_addr_sk1212 = tbl_Filter_TD_2558355_output.getInt32(i, 6);
        int32_t _ss_store_sk1213 = tbl_Filter_TD_2558355_output.getInt32(i, 7);
        int32_t _ss_promo_sk1214 = tbl_Filter_TD_2558355_output.getInt32(i, 8);
        int64_t _ss_ticket_number1215L = tbl_Filter_TD_2558355_output.getInt64(i, 9);
        int32_t _ss_quantity1216 = tbl_Filter_TD_2558355_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost1217 = tbl_Filter_TD_2558355_output.getInt64(i, 11);
        int64_t _ss_list_price1218 = tbl_Filter_TD_2558355_output.getInt64(i, 12);
        int64_t _ss_sales_price1219 = tbl_Filter_TD_2558355_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt1220 = tbl_Filter_TD_2558355_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_2558355_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost1222 = tbl_Filter_TD_2558355_output.getInt64(i, 16);
        int64_t _ss_ext_list_price1223 = tbl_Filter_TD_2558355_output.getInt64(i, 17);
        int64_t _ss_ext_tax1224 = tbl_Filter_TD_2558355_output.getInt64(i, 18);
        int64_t _ss_coupon_amt1225 = tbl_Filter_TD_2558355_output.getInt64(i, 19);
        int64_t _ss_net_paid1226 = tbl_Filter_TD_2558355_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax1227 = tbl_Filter_TD_2558355_output.getInt64(i, 21);
        int64_t _ss_net_profit1228 = tbl_Filter_TD_2558355_output.getInt64(i, 22);
        int64_t _count19426L_count_0 = 1;
        count_0 += _count19426L_count_0;
    }
    int r = 0;
    int64_t _count19426L = count_0;
    tbl_Aggregate_TD_1805058_output.setInt64(r++, 0, _count19426L);
    tbl_Aggregate_TD_1805058_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1805058_output #Row: " << tbl_Aggregate_TD_1805058_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1926732(Table &tbl_SerializeFromObject_TD_2326271_input, Table &tbl_Filter_TD_1926732_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(r_reason_sk#351) AND (r_reason_sk#351 = 1)))
    // Input: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    // Output: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2326271_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_SerializeFromObject_TD_2326271_input.getInt32(i, 0);
        if ((_r_reason_sk351!= 0) && (_r_reason_sk351 == 1)) {
            int32_t _r_reason_sk351_t = tbl_SerializeFromObject_TD_2326271_input.getInt32(i, 0);
            tbl_Filter_TD_1926732_output.setInt32(r, 0, _r_reason_sk351_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_id352_t = tbl_SerializeFromObject_TD_2326271_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_1926732_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _r_reason_id352_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_t = tbl_SerializeFromObject_TD_2326271_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_1926732_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _r_reason_desc353_t);
            r++;
        }
    }
    tbl_Filter_TD_1926732_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1926732_output #Row: " << tbl_Filter_TD_1926732_output.getNumRow() << std::endl;
}

void SW_Project_TD_0611895(Table &tbl_Filter_TD_1926732_output, Table &tbl_Aggregate_TD_1805058_output, Table &tbl_Aggregate_TD_1542246_output, Table &tbl_Aggregate_TD_1975173_output, Table &tbl_Aggregate_TD_1593948_output, Table &tbl_Aggregate_TD_197147_output, Table &tbl_Aggregate_TD_1486460_output, Table &tbl_Aggregate_TD_1904943_output, Table &tbl_Aggregate_TD_1971809_output, Table &tbl_Aggregate_TD_1915040_output, Table &tbl_Aggregate_TD_1508579_output, Table &tbl_Aggregate_TD_1393724_output, Table &tbl_Aggregate_TD_1578423_output, Table &tbl_Aggregate_TD_1716604_output, Table &tbl_Aggregate_TD_1261647_output, Table &tbl_Aggregate_TD_1865306_output, Table &tbl_Project_TD_0611895_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CASE WHEN (scalar-subquery#9405 [] > 74129) THEN scalar-subquery#9406 [] ELSE scalar-subquery#9407 [] END AS bucket1#9408, CASE WHEN (scalar-subquery#9409 [] > 122840) THEN scalar-subquery#9410 [] ELSE scalar-subquery#9411 [] END AS bucket2#9412, CASE WHEN (scalar-subquery#9413 [] > 56580) THEN scalar-subquery#9414 [] ELSE scalar-subquery#9415 [] END AS bucket3#9416, CASE WHEN (scalar-subquery#9417 [] > 10097) THEN scalar-subquery#9418 [] ELSE scalar-subquery#9419 [] END AS bucket4#9420, CASE WHEN (scalar-subquery#9421 [] > 165306) THEN scalar-subquery#9422 [] ELSE scalar-subquery#9423 [] END AS bucket5#9424)
    // Input: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    // Output: ListBuffer(bucket1#9408, bucket2#9412, bucket3#9416, bucket4#9420, bucket5#9424)
    int nrow1 = tbl_Filter_TD_1926732_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_Filter_TD_1926732_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_id352 = tbl_Filter_TD_1926732_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353 = tbl_Filter_TD_1926732_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _count19426L = tbl_Aggregate_TD_1805058_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt9428 = tbl_Aggregate_TD_1542246_output.getInt64(0, 0);
        int64_t _avgss_net_paid9430 = tbl_Aggregate_TD_1975173_output.getInt64(0, 0);
        int64_t _count19432L = tbl_Aggregate_TD_1593948_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt9434 = tbl_Aggregate_TD_197147_output.getInt64(0, 0);
        int64_t _avgss_net_paid9436 = tbl_Aggregate_TD_1486460_output.getInt64(0, 0);
        int64_t _count19438L = tbl_Aggregate_TD_1904943_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt9440 = tbl_Aggregate_TD_1971809_output.getInt64(0, 0);
        int64_t _avgss_net_paid9442 = tbl_Aggregate_TD_1915040_output.getInt64(0, 0);
        int64_t _count19444L = tbl_Aggregate_TD_1508579_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt9446 = tbl_Aggregate_TD_1393724_output.getInt64(0, 0);
        int64_t _avgss_net_paid9448 = tbl_Aggregate_TD_1578423_output.getInt64(0, 0);
        int64_t _count19450L = tbl_Aggregate_TD_1716604_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt9452 = tbl_Aggregate_TD_1261647_output.getInt64(0, 0);
        int64_t _avgss_net_paid9454 = tbl_Aggregate_TD_1865306_output.getInt64(0, 0);
        int64_t _bucket19408 = (_count19426L > 74129) ? _avgss_ext_discount_amt9428 : _avgss_net_paid9430;
        tbl_Project_TD_0611895_output.setInt64(i, 0, _bucket19408);
        int64_t _bucket29412 = (_count19432L > 122840) ? _avgss_ext_discount_amt9434 : _avgss_net_paid9436;
        tbl_Project_TD_0611895_output.setInt64(i, 1, _bucket29412);
        int64_t _bucket39416 = (_count19438L > 56580) ? _avgss_ext_discount_amt9440 : _avgss_net_paid9442;
        tbl_Project_TD_0611895_output.setInt64(i, 2, _bucket39416);
        int64_t _bucket49420 = (_count19444L > 10097) ? _avgss_ext_discount_amt9446 : _avgss_net_paid9448;
        tbl_Project_TD_0611895_output.setInt64(i, 3, _bucket49420);
        int64_t _bucket59424 = (_count19450L > 165306) ? _avgss_ext_discount_amt9452 : _avgss_net_paid9454;
        tbl_Project_TD_0611895_output.setInt64(i, 4, _bucket59424);
    }
    tbl_Project_TD_0611895_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_0611895_output #Row: " << tbl_Project_TD_0611895_output.getNumRow() << std::endl;
}

