#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_2676303(Table &tbl_SerializeFromObject_TD_3159612_input, Table &tbl_Filter_TD_2676303_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3903) AND ((ss_quantity#3903 >= 81) AND (ss_quantity#3903 <= 100))))
    // Input: ListBuffer(ss_net_paid#3913, ss_quantity#3903)
    // Output: ListBuffer(ss_net_paid#3913)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3159612_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3903 = tbl_SerializeFromObject_TD_3159612_input.getInt32(i, 1);
        if ((_ss_quantity3903!= 0) && ((_ss_quantity3903 >= 81) && (_ss_quantity3903 <= 100))) {
            int64_t _ss_net_paid3913_t = tbl_SerializeFromObject_TD_3159612_input.getInt64(i, 0);
            tbl_Filter_TD_2676303_output.setInt64(r, 0, _ss_net_paid3913_t);
            r++;
        }
    }
    tbl_Filter_TD_2676303_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2676303_output #Row: " << tbl_Filter_TD_2676303_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2412978(Table &tbl_SerializeFromObject_TD_3931825_input, Table &tbl_Filter_TD_2412978_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3880) AND ((ss_quantity#3880 >= 81) AND (ss_quantity#3880 <= 100))))
    // Input: ListBuffer(ss_ext_discount_amt#3884, ss_quantity#3880)
    // Output: ListBuffer(ss_ext_discount_amt#3884)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3931825_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3880 = tbl_SerializeFromObject_TD_3931825_input.getInt32(i, 1);
        if ((_ss_quantity3880!= 0) && ((_ss_quantity3880 >= 81) && (_ss_quantity3880 <= 100))) {
            int64_t _ss_ext_discount_amt3884_t = tbl_SerializeFromObject_TD_3931825_input.getInt64(i, 0);
            tbl_Filter_TD_2412978_output.setInt64(r, 0, _ss_ext_discount_amt3884_t);
            r++;
        }
    }
    tbl_Filter_TD_2412978_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2412978_output #Row: " << tbl_Filter_TD_2412978_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2261798(Table &tbl_SerializeFromObject_TD_3350547_input, Table &tbl_Filter_TD_2261798_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3857) AND ((ss_quantity#3857 >= 81) AND (ss_quantity#3857 <= 100))))
    // Input: ListBuffer(ss_sold_date_sk#3847, ss_sold_time_sk#3848, ss_item_sk#3849, ss_customer_sk#3850, ss_cdemo_sk#3851, ss_hdemo_sk#3852, ss_addr_sk#3853, ss_store_sk#3854, ss_promo_sk#3855, ss_ticket_number#3856L, ss_quantity#3857, ss_wholesale_cost#3858, ss_list_price#3859, ss_sales_price#3860, ss_ext_discount_amt#3861, ss_ext_sales_price#3862, ss_ext_wholesale_cost#3863, ss_ext_list_price#3864, ss_ext_tax#3865, ss_coupon_amt#3866, ss_net_paid#3867, ss_net_paid_inc_tax#3868, ss_net_profit#3869)
    // Output: ListBuffer(ss_sold_date_sk#3847, ss_sold_time_sk#3848, ss_item_sk#3849, ss_customer_sk#3850, ss_cdemo_sk#3851, ss_hdemo_sk#3852, ss_addr_sk#3853, ss_store_sk#3854, ss_promo_sk#3855, ss_ticket_number#3856L, ss_quantity#3857, ss_wholesale_cost#3858, ss_list_price#3859, ss_sales_price#3860, ss_ext_discount_amt#3861, ss_ext_sales_price#3862, ss_ext_wholesale_cost#3863, ss_ext_list_price#3864, ss_ext_tax#3865, ss_coupon_amt#3866, ss_net_paid#3867, ss_net_paid_inc_tax#3868, ss_net_profit#3869)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3350547_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3857 = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 10);
        if ((_ss_quantity3857!= 0) && ((_ss_quantity3857 >= 81) && (_ss_quantity3857 <= 100))) {
            int32_t _ss_sold_date_sk3847_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 0);
            tbl_Filter_TD_2261798_output.setInt32(r, 0, _ss_sold_date_sk3847_t);
            int32_t _ss_sold_time_sk3848_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 1);
            tbl_Filter_TD_2261798_output.setInt32(r, 1, _ss_sold_time_sk3848_t);
            int32_t _ss_item_sk3849_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 2);
            tbl_Filter_TD_2261798_output.setInt32(r, 2, _ss_item_sk3849_t);
            int32_t _ss_customer_sk3850_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 3);
            tbl_Filter_TD_2261798_output.setInt32(r, 3, _ss_customer_sk3850_t);
            int32_t _ss_cdemo_sk3851_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 4);
            tbl_Filter_TD_2261798_output.setInt32(r, 4, _ss_cdemo_sk3851_t);
            int32_t _ss_hdemo_sk3852_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 5);
            tbl_Filter_TD_2261798_output.setInt32(r, 5, _ss_hdemo_sk3852_t);
            int32_t _ss_addr_sk3853_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 6);
            tbl_Filter_TD_2261798_output.setInt32(r, 6, _ss_addr_sk3853_t);
            int32_t _ss_store_sk3854_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 7);
            tbl_Filter_TD_2261798_output.setInt32(r, 7, _ss_store_sk3854_t);
            int32_t _ss_promo_sk3855_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 8);
            tbl_Filter_TD_2261798_output.setInt32(r, 8, _ss_promo_sk3855_t);
            int64_t _ss_ticket_number3856L_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 9);
            tbl_Filter_TD_2261798_output.setInt64(r, 9, _ss_ticket_number3856L_t);
            int32_t _ss_quantity3857_t = tbl_SerializeFromObject_TD_3350547_input.getInt32(i, 10);
            tbl_Filter_TD_2261798_output.setInt32(r, 10, _ss_quantity3857_t);
            int64_t _ss_wholesale_cost3858_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 11);
            tbl_Filter_TD_2261798_output.setInt64(r, 11, _ss_wholesale_cost3858_t);
            int64_t _ss_list_price3859_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 12);
            tbl_Filter_TD_2261798_output.setInt64(r, 12, _ss_list_price3859_t);
            int64_t _ss_sales_price3860_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 13);
            tbl_Filter_TD_2261798_output.setInt64(r, 13, _ss_sales_price3860_t);
            int64_t _ss_ext_discount_amt3861_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 14);
            tbl_Filter_TD_2261798_output.setInt64(r, 14, _ss_ext_discount_amt3861_t);
            int64_t _ss_ext_sales_price3862_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 15);
            tbl_Filter_TD_2261798_output.setInt64(r, 15, _ss_ext_sales_price3862_t);
            int64_t _ss_ext_wholesale_cost3863_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 16);
            tbl_Filter_TD_2261798_output.setInt64(r, 16, _ss_ext_wholesale_cost3863_t);
            int64_t _ss_ext_list_price3864_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 17);
            tbl_Filter_TD_2261798_output.setInt64(r, 17, _ss_ext_list_price3864_t);
            int64_t _ss_ext_tax3865_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 18);
            tbl_Filter_TD_2261798_output.setInt64(r, 18, _ss_ext_tax3865_t);
            int64_t _ss_coupon_amt3866_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 19);
            tbl_Filter_TD_2261798_output.setInt64(r, 19, _ss_coupon_amt3866_t);
            int64_t _ss_net_paid3867_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 20);
            tbl_Filter_TD_2261798_output.setInt64(r, 20, _ss_net_paid3867_t);
            int64_t _ss_net_paid_inc_tax3868_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 21);
            tbl_Filter_TD_2261798_output.setInt64(r, 21, _ss_net_paid_inc_tax3868_t);
            int64_t _ss_net_profit3869_t = tbl_SerializeFromObject_TD_3350547_input.getInt64(i, 22);
            tbl_Filter_TD_2261798_output.setInt64(r, 22, _ss_net_profit3869_t);
            r++;
        }
    }
    tbl_Filter_TD_2261798_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2261798_output #Row: " << tbl_Filter_TD_2261798_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2301173(Table &tbl_SerializeFromObject_TD_3157311_input, Table &tbl_Filter_TD_2301173_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3834) AND ((ss_quantity#3834 >= 61) AND (ss_quantity#3834 <= 80))))
    // Input: ListBuffer(ss_net_paid#3844, ss_quantity#3834)
    // Output: ListBuffer(ss_net_paid#3844)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3157311_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3834 = tbl_SerializeFromObject_TD_3157311_input.getInt32(i, 1);
        if ((_ss_quantity3834!= 0) && ((_ss_quantity3834 >= 61) && (_ss_quantity3834 <= 80))) {
            int64_t _ss_net_paid3844_t = tbl_SerializeFromObject_TD_3157311_input.getInt64(i, 0);
            tbl_Filter_TD_2301173_output.setInt64(r, 0, _ss_net_paid3844_t);
            r++;
        }
    }
    tbl_Filter_TD_2301173_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2301173_output #Row: " << tbl_Filter_TD_2301173_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2297036(Table &tbl_SerializeFromObject_TD_3237630_input, Table &tbl_Filter_TD_2297036_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3811) AND ((ss_quantity#3811 >= 61) AND (ss_quantity#3811 <= 80))))
    // Input: ListBuffer(ss_ext_discount_amt#3815, ss_quantity#3811)
    // Output: ListBuffer(ss_ext_discount_amt#3815)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3237630_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3811 = tbl_SerializeFromObject_TD_3237630_input.getInt32(i, 1);
        if ((_ss_quantity3811!= 0) && ((_ss_quantity3811 >= 61) && (_ss_quantity3811 <= 80))) {
            int64_t _ss_ext_discount_amt3815_t = tbl_SerializeFromObject_TD_3237630_input.getInt64(i, 0);
            tbl_Filter_TD_2297036_output.setInt64(r, 0, _ss_ext_discount_amt3815_t);
            r++;
        }
    }
    tbl_Filter_TD_2297036_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2297036_output #Row: " << tbl_Filter_TD_2297036_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2851011(Table &tbl_SerializeFromObject_TD_3177959_input, Table &tbl_Filter_TD_2851011_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3788) AND ((ss_quantity#3788 >= 61) AND (ss_quantity#3788 <= 80))))
    // Input: ListBuffer(ss_sold_date_sk#3778, ss_sold_time_sk#3779, ss_item_sk#3780, ss_customer_sk#3781, ss_cdemo_sk#3782, ss_hdemo_sk#3783, ss_addr_sk#3784, ss_store_sk#3785, ss_promo_sk#3786, ss_ticket_number#3787L, ss_quantity#3788, ss_wholesale_cost#3789, ss_list_price#3790, ss_sales_price#3791, ss_ext_discount_amt#3792, ss_ext_sales_price#3793, ss_ext_wholesale_cost#3794, ss_ext_list_price#3795, ss_ext_tax#3796, ss_coupon_amt#3797, ss_net_paid#3798, ss_net_paid_inc_tax#3799, ss_net_profit#3800)
    // Output: ListBuffer(ss_sold_date_sk#3778, ss_sold_time_sk#3779, ss_item_sk#3780, ss_customer_sk#3781, ss_cdemo_sk#3782, ss_hdemo_sk#3783, ss_addr_sk#3784, ss_store_sk#3785, ss_promo_sk#3786, ss_ticket_number#3787L, ss_quantity#3788, ss_wholesale_cost#3789, ss_list_price#3790, ss_sales_price#3791, ss_ext_discount_amt#3792, ss_ext_sales_price#3793, ss_ext_wholesale_cost#3794, ss_ext_list_price#3795, ss_ext_tax#3796, ss_coupon_amt#3797, ss_net_paid#3798, ss_net_paid_inc_tax#3799, ss_net_profit#3800)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3177959_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3788 = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 10);
        if ((_ss_quantity3788!= 0) && ((_ss_quantity3788 >= 61) && (_ss_quantity3788 <= 80))) {
            int32_t _ss_sold_date_sk3778_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 0);
            tbl_Filter_TD_2851011_output.setInt32(r, 0, _ss_sold_date_sk3778_t);
            int32_t _ss_sold_time_sk3779_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 1);
            tbl_Filter_TD_2851011_output.setInt32(r, 1, _ss_sold_time_sk3779_t);
            int32_t _ss_item_sk3780_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 2);
            tbl_Filter_TD_2851011_output.setInt32(r, 2, _ss_item_sk3780_t);
            int32_t _ss_customer_sk3781_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 3);
            tbl_Filter_TD_2851011_output.setInt32(r, 3, _ss_customer_sk3781_t);
            int32_t _ss_cdemo_sk3782_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 4);
            tbl_Filter_TD_2851011_output.setInt32(r, 4, _ss_cdemo_sk3782_t);
            int32_t _ss_hdemo_sk3783_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 5);
            tbl_Filter_TD_2851011_output.setInt32(r, 5, _ss_hdemo_sk3783_t);
            int32_t _ss_addr_sk3784_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 6);
            tbl_Filter_TD_2851011_output.setInt32(r, 6, _ss_addr_sk3784_t);
            int32_t _ss_store_sk3785_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 7);
            tbl_Filter_TD_2851011_output.setInt32(r, 7, _ss_store_sk3785_t);
            int32_t _ss_promo_sk3786_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 8);
            tbl_Filter_TD_2851011_output.setInt32(r, 8, _ss_promo_sk3786_t);
            int64_t _ss_ticket_number3787L_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 9);
            tbl_Filter_TD_2851011_output.setInt64(r, 9, _ss_ticket_number3787L_t);
            int32_t _ss_quantity3788_t = tbl_SerializeFromObject_TD_3177959_input.getInt32(i, 10);
            tbl_Filter_TD_2851011_output.setInt32(r, 10, _ss_quantity3788_t);
            int64_t _ss_wholesale_cost3789_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 11);
            tbl_Filter_TD_2851011_output.setInt64(r, 11, _ss_wholesale_cost3789_t);
            int64_t _ss_list_price3790_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 12);
            tbl_Filter_TD_2851011_output.setInt64(r, 12, _ss_list_price3790_t);
            int64_t _ss_sales_price3791_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 13);
            tbl_Filter_TD_2851011_output.setInt64(r, 13, _ss_sales_price3791_t);
            int64_t _ss_ext_discount_amt3792_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 14);
            tbl_Filter_TD_2851011_output.setInt64(r, 14, _ss_ext_discount_amt3792_t);
            int64_t _ss_ext_sales_price3793_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 15);
            tbl_Filter_TD_2851011_output.setInt64(r, 15, _ss_ext_sales_price3793_t);
            int64_t _ss_ext_wholesale_cost3794_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 16);
            tbl_Filter_TD_2851011_output.setInt64(r, 16, _ss_ext_wholesale_cost3794_t);
            int64_t _ss_ext_list_price3795_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 17);
            tbl_Filter_TD_2851011_output.setInt64(r, 17, _ss_ext_list_price3795_t);
            int64_t _ss_ext_tax3796_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 18);
            tbl_Filter_TD_2851011_output.setInt64(r, 18, _ss_ext_tax3796_t);
            int64_t _ss_coupon_amt3797_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 19);
            tbl_Filter_TD_2851011_output.setInt64(r, 19, _ss_coupon_amt3797_t);
            int64_t _ss_net_paid3798_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 20);
            tbl_Filter_TD_2851011_output.setInt64(r, 20, _ss_net_paid3798_t);
            int64_t _ss_net_paid_inc_tax3799_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 21);
            tbl_Filter_TD_2851011_output.setInt64(r, 21, _ss_net_paid_inc_tax3799_t);
            int64_t _ss_net_profit3800_t = tbl_SerializeFromObject_TD_3177959_input.getInt64(i, 22);
            tbl_Filter_TD_2851011_output.setInt64(r, 22, _ss_net_profit3800_t);
            r++;
        }
    }
    tbl_Filter_TD_2851011_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2851011_output #Row: " << tbl_Filter_TD_2851011_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2505174(Table &tbl_SerializeFromObject_TD_3777986_input, Table &tbl_Filter_TD_2505174_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3765) AND ((ss_quantity#3765 >= 41) AND (ss_quantity#3765 <= 60))))
    // Input: ListBuffer(ss_net_paid#3775, ss_quantity#3765)
    // Output: ListBuffer(ss_net_paid#3775)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3777986_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3765 = tbl_SerializeFromObject_TD_3777986_input.getInt32(i, 1);
        if ((_ss_quantity3765!= 0) && ((_ss_quantity3765 >= 41) && (_ss_quantity3765 <= 60))) {
            int64_t _ss_net_paid3775_t = tbl_SerializeFromObject_TD_3777986_input.getInt64(i, 0);
            tbl_Filter_TD_2505174_output.setInt64(r, 0, _ss_net_paid3775_t);
            r++;
        }
    }
    tbl_Filter_TD_2505174_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2505174_output #Row: " << tbl_Filter_TD_2505174_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2752602(Table &tbl_SerializeFromObject_TD_3566713_input, Table &tbl_Filter_TD_2752602_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3742) AND ((ss_quantity#3742 >= 41) AND (ss_quantity#3742 <= 60))))
    // Input: ListBuffer(ss_ext_discount_amt#3746, ss_quantity#3742)
    // Output: ListBuffer(ss_ext_discount_amt#3746)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3566713_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3742 = tbl_SerializeFromObject_TD_3566713_input.getInt32(i, 1);
        if ((_ss_quantity3742!= 0) && ((_ss_quantity3742 >= 41) && (_ss_quantity3742 <= 60))) {
            int64_t _ss_ext_discount_amt3746_t = tbl_SerializeFromObject_TD_3566713_input.getInt64(i, 0);
            tbl_Filter_TD_2752602_output.setInt64(r, 0, _ss_ext_discount_amt3746_t);
            r++;
        }
    }
    tbl_Filter_TD_2752602_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2752602_output #Row: " << tbl_Filter_TD_2752602_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2319628(Table &tbl_SerializeFromObject_TD_3915728_input, Table &tbl_Filter_TD_2319628_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3719) AND ((ss_quantity#3719 >= 41) AND (ss_quantity#3719 <= 60))))
    // Input: ListBuffer(ss_sold_date_sk#3709, ss_sold_time_sk#3710, ss_item_sk#3711, ss_customer_sk#3712, ss_cdemo_sk#3713, ss_hdemo_sk#3714, ss_addr_sk#3715, ss_store_sk#3716, ss_promo_sk#3717, ss_ticket_number#3718L, ss_quantity#3719, ss_wholesale_cost#3720, ss_list_price#3721, ss_sales_price#3722, ss_ext_discount_amt#3723, ss_ext_sales_price#3724, ss_ext_wholesale_cost#3725, ss_ext_list_price#3726, ss_ext_tax#3727, ss_coupon_amt#3728, ss_net_paid#3729, ss_net_paid_inc_tax#3730, ss_net_profit#3731)
    // Output: ListBuffer(ss_sold_date_sk#3709, ss_sold_time_sk#3710, ss_item_sk#3711, ss_customer_sk#3712, ss_cdemo_sk#3713, ss_hdemo_sk#3714, ss_addr_sk#3715, ss_store_sk#3716, ss_promo_sk#3717, ss_ticket_number#3718L, ss_quantity#3719, ss_wholesale_cost#3720, ss_list_price#3721, ss_sales_price#3722, ss_ext_discount_amt#3723, ss_ext_sales_price#3724, ss_ext_wholesale_cost#3725, ss_ext_list_price#3726, ss_ext_tax#3727, ss_coupon_amt#3728, ss_net_paid#3729, ss_net_paid_inc_tax#3730, ss_net_profit#3731)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3915728_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3719 = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 10);
        if ((_ss_quantity3719!= 0) && ((_ss_quantity3719 >= 41) && (_ss_quantity3719 <= 60))) {
            int32_t _ss_sold_date_sk3709_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 0);
            tbl_Filter_TD_2319628_output.setInt32(r, 0, _ss_sold_date_sk3709_t);
            int32_t _ss_sold_time_sk3710_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 1);
            tbl_Filter_TD_2319628_output.setInt32(r, 1, _ss_sold_time_sk3710_t);
            int32_t _ss_item_sk3711_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 2);
            tbl_Filter_TD_2319628_output.setInt32(r, 2, _ss_item_sk3711_t);
            int32_t _ss_customer_sk3712_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 3);
            tbl_Filter_TD_2319628_output.setInt32(r, 3, _ss_customer_sk3712_t);
            int32_t _ss_cdemo_sk3713_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 4);
            tbl_Filter_TD_2319628_output.setInt32(r, 4, _ss_cdemo_sk3713_t);
            int32_t _ss_hdemo_sk3714_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 5);
            tbl_Filter_TD_2319628_output.setInt32(r, 5, _ss_hdemo_sk3714_t);
            int32_t _ss_addr_sk3715_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 6);
            tbl_Filter_TD_2319628_output.setInt32(r, 6, _ss_addr_sk3715_t);
            int32_t _ss_store_sk3716_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 7);
            tbl_Filter_TD_2319628_output.setInt32(r, 7, _ss_store_sk3716_t);
            int32_t _ss_promo_sk3717_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 8);
            tbl_Filter_TD_2319628_output.setInt32(r, 8, _ss_promo_sk3717_t);
            int64_t _ss_ticket_number3718L_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 9);
            tbl_Filter_TD_2319628_output.setInt64(r, 9, _ss_ticket_number3718L_t);
            int32_t _ss_quantity3719_t = tbl_SerializeFromObject_TD_3915728_input.getInt32(i, 10);
            tbl_Filter_TD_2319628_output.setInt32(r, 10, _ss_quantity3719_t);
            int64_t _ss_wholesale_cost3720_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 11);
            tbl_Filter_TD_2319628_output.setInt64(r, 11, _ss_wholesale_cost3720_t);
            int64_t _ss_list_price3721_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 12);
            tbl_Filter_TD_2319628_output.setInt64(r, 12, _ss_list_price3721_t);
            int64_t _ss_sales_price3722_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 13);
            tbl_Filter_TD_2319628_output.setInt64(r, 13, _ss_sales_price3722_t);
            int64_t _ss_ext_discount_amt3723_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 14);
            tbl_Filter_TD_2319628_output.setInt64(r, 14, _ss_ext_discount_amt3723_t);
            int64_t _ss_ext_sales_price3724_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 15);
            tbl_Filter_TD_2319628_output.setInt64(r, 15, _ss_ext_sales_price3724_t);
            int64_t _ss_ext_wholesale_cost3725_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 16);
            tbl_Filter_TD_2319628_output.setInt64(r, 16, _ss_ext_wholesale_cost3725_t);
            int64_t _ss_ext_list_price3726_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 17);
            tbl_Filter_TD_2319628_output.setInt64(r, 17, _ss_ext_list_price3726_t);
            int64_t _ss_ext_tax3727_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 18);
            tbl_Filter_TD_2319628_output.setInt64(r, 18, _ss_ext_tax3727_t);
            int64_t _ss_coupon_amt3728_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 19);
            tbl_Filter_TD_2319628_output.setInt64(r, 19, _ss_coupon_amt3728_t);
            int64_t _ss_net_paid3729_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 20);
            tbl_Filter_TD_2319628_output.setInt64(r, 20, _ss_net_paid3729_t);
            int64_t _ss_net_paid_inc_tax3730_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 21);
            tbl_Filter_TD_2319628_output.setInt64(r, 21, _ss_net_paid_inc_tax3730_t);
            int64_t _ss_net_profit3731_t = tbl_SerializeFromObject_TD_3915728_input.getInt64(i, 22);
            tbl_Filter_TD_2319628_output.setInt64(r, 22, _ss_net_profit3731_t);
            r++;
        }
    }
    tbl_Filter_TD_2319628_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2319628_output #Row: " << tbl_Filter_TD_2319628_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2215193(Table &tbl_SerializeFromObject_TD_3399858_input, Table &tbl_Filter_TD_2215193_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3696) AND ((ss_quantity#3696 >= 21) AND (ss_quantity#3696 <= 40))))
    // Input: ListBuffer(ss_net_paid#3706, ss_quantity#3696)
    // Output: ListBuffer(ss_net_paid#3706)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3399858_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3696 = tbl_SerializeFromObject_TD_3399858_input.getInt32(i, 1);
        if ((_ss_quantity3696!= 0) && ((_ss_quantity3696 >= 21) && (_ss_quantity3696 <= 40))) {
            int64_t _ss_net_paid3706_t = tbl_SerializeFromObject_TD_3399858_input.getInt64(i, 0);
            tbl_Filter_TD_2215193_output.setInt64(r, 0, _ss_net_paid3706_t);
            r++;
        }
    }
    tbl_Filter_TD_2215193_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2215193_output #Row: " << tbl_Filter_TD_2215193_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2550048(Table &tbl_SerializeFromObject_TD_3190347_input, Table &tbl_Filter_TD_2550048_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3673) AND ((ss_quantity#3673 >= 21) AND (ss_quantity#3673 <= 40))))
    // Input: ListBuffer(ss_ext_discount_amt#3677, ss_quantity#3673)
    // Output: ListBuffer(ss_ext_discount_amt#3677)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3190347_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3673 = tbl_SerializeFromObject_TD_3190347_input.getInt32(i, 1);
        if ((_ss_quantity3673!= 0) && ((_ss_quantity3673 >= 21) && (_ss_quantity3673 <= 40))) {
            int64_t _ss_ext_discount_amt3677_t = tbl_SerializeFromObject_TD_3190347_input.getInt64(i, 0);
            tbl_Filter_TD_2550048_output.setInt64(r, 0, _ss_ext_discount_amt3677_t);
            r++;
        }
    }
    tbl_Filter_TD_2550048_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2550048_output #Row: " << tbl_Filter_TD_2550048_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2948971(Table &tbl_SerializeFromObject_TD_3941823_input, Table &tbl_Filter_TD_2948971_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3650) AND ((ss_quantity#3650 >= 21) AND (ss_quantity#3650 <= 40))))
    // Input: ListBuffer(ss_sold_date_sk#3640, ss_sold_time_sk#3641, ss_item_sk#3642, ss_customer_sk#3643, ss_cdemo_sk#3644, ss_hdemo_sk#3645, ss_addr_sk#3646, ss_store_sk#3647, ss_promo_sk#3648, ss_ticket_number#3649L, ss_quantity#3650, ss_wholesale_cost#3651, ss_list_price#3652, ss_sales_price#3653, ss_ext_discount_amt#3654, ss_ext_sales_price#3655, ss_ext_wholesale_cost#3656, ss_ext_list_price#3657, ss_ext_tax#3658, ss_coupon_amt#3659, ss_net_paid#3660, ss_net_paid_inc_tax#3661, ss_net_profit#3662)
    // Output: ListBuffer(ss_sold_date_sk#3640, ss_sold_time_sk#3641, ss_item_sk#3642, ss_customer_sk#3643, ss_cdemo_sk#3644, ss_hdemo_sk#3645, ss_addr_sk#3646, ss_store_sk#3647, ss_promo_sk#3648, ss_ticket_number#3649L, ss_quantity#3650, ss_wholesale_cost#3651, ss_list_price#3652, ss_sales_price#3653, ss_ext_discount_amt#3654, ss_ext_sales_price#3655, ss_ext_wholesale_cost#3656, ss_ext_list_price#3657, ss_ext_tax#3658, ss_coupon_amt#3659, ss_net_paid#3660, ss_net_paid_inc_tax#3661, ss_net_profit#3662)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3941823_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3650 = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 10);
        if ((_ss_quantity3650!= 0) && ((_ss_quantity3650 >= 21) && (_ss_quantity3650 <= 40))) {
            int32_t _ss_sold_date_sk3640_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 0);
            tbl_Filter_TD_2948971_output.setInt32(r, 0, _ss_sold_date_sk3640_t);
            int32_t _ss_sold_time_sk3641_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 1);
            tbl_Filter_TD_2948971_output.setInt32(r, 1, _ss_sold_time_sk3641_t);
            int32_t _ss_item_sk3642_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 2);
            tbl_Filter_TD_2948971_output.setInt32(r, 2, _ss_item_sk3642_t);
            int32_t _ss_customer_sk3643_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 3);
            tbl_Filter_TD_2948971_output.setInt32(r, 3, _ss_customer_sk3643_t);
            int32_t _ss_cdemo_sk3644_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 4);
            tbl_Filter_TD_2948971_output.setInt32(r, 4, _ss_cdemo_sk3644_t);
            int32_t _ss_hdemo_sk3645_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 5);
            tbl_Filter_TD_2948971_output.setInt32(r, 5, _ss_hdemo_sk3645_t);
            int32_t _ss_addr_sk3646_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 6);
            tbl_Filter_TD_2948971_output.setInt32(r, 6, _ss_addr_sk3646_t);
            int32_t _ss_store_sk3647_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 7);
            tbl_Filter_TD_2948971_output.setInt32(r, 7, _ss_store_sk3647_t);
            int32_t _ss_promo_sk3648_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 8);
            tbl_Filter_TD_2948971_output.setInt32(r, 8, _ss_promo_sk3648_t);
            int64_t _ss_ticket_number3649L_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 9);
            tbl_Filter_TD_2948971_output.setInt64(r, 9, _ss_ticket_number3649L_t);
            int32_t _ss_quantity3650_t = tbl_SerializeFromObject_TD_3941823_input.getInt32(i, 10);
            tbl_Filter_TD_2948971_output.setInt32(r, 10, _ss_quantity3650_t);
            int64_t _ss_wholesale_cost3651_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 11);
            tbl_Filter_TD_2948971_output.setInt64(r, 11, _ss_wholesale_cost3651_t);
            int64_t _ss_list_price3652_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 12);
            tbl_Filter_TD_2948971_output.setInt64(r, 12, _ss_list_price3652_t);
            int64_t _ss_sales_price3653_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 13);
            tbl_Filter_TD_2948971_output.setInt64(r, 13, _ss_sales_price3653_t);
            int64_t _ss_ext_discount_amt3654_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 14);
            tbl_Filter_TD_2948971_output.setInt64(r, 14, _ss_ext_discount_amt3654_t);
            int64_t _ss_ext_sales_price3655_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 15);
            tbl_Filter_TD_2948971_output.setInt64(r, 15, _ss_ext_sales_price3655_t);
            int64_t _ss_ext_wholesale_cost3656_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 16);
            tbl_Filter_TD_2948971_output.setInt64(r, 16, _ss_ext_wholesale_cost3656_t);
            int64_t _ss_ext_list_price3657_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 17);
            tbl_Filter_TD_2948971_output.setInt64(r, 17, _ss_ext_list_price3657_t);
            int64_t _ss_ext_tax3658_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 18);
            tbl_Filter_TD_2948971_output.setInt64(r, 18, _ss_ext_tax3658_t);
            int64_t _ss_coupon_amt3659_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 19);
            tbl_Filter_TD_2948971_output.setInt64(r, 19, _ss_coupon_amt3659_t);
            int64_t _ss_net_paid3660_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 20);
            tbl_Filter_TD_2948971_output.setInt64(r, 20, _ss_net_paid3660_t);
            int64_t _ss_net_paid_inc_tax3661_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 21);
            tbl_Filter_TD_2948971_output.setInt64(r, 21, _ss_net_paid_inc_tax3661_t);
            int64_t _ss_net_profit3662_t = tbl_SerializeFromObject_TD_3941823_input.getInt64(i, 22);
            tbl_Filter_TD_2948971_output.setInt64(r, 22, _ss_net_profit3662_t);
            r++;
        }
    }
    tbl_Filter_TD_2948971_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2948971_output #Row: " << tbl_Filter_TD_2948971_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2438426(Table &tbl_SerializeFromObject_TD_33427_input, Table &tbl_Filter_TD_2438426_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3627) AND ((ss_quantity#3627 >= 1) AND (ss_quantity#3627 <= 20))))
    // Input: ListBuffer(ss_net_paid#3637, ss_quantity#3627)
    // Output: ListBuffer(ss_net_paid#3637)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_33427_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3627 = tbl_SerializeFromObject_TD_33427_input.getInt32(i, 1);
        if ((_ss_quantity3627!= 0) && ((_ss_quantity3627 >= 1) && (_ss_quantity3627 <= 20))) {
            int64_t _ss_net_paid3637_t = tbl_SerializeFromObject_TD_33427_input.getInt64(i, 0);
            tbl_Filter_TD_2438426_output.setInt64(r, 0, _ss_net_paid3637_t);
            r++;
        }
    }
    tbl_Filter_TD_2438426_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2438426_output #Row: " << tbl_Filter_TD_2438426_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2711011(Table &tbl_SerializeFromObject_TD_3295453_input, Table &tbl_Filter_TD_2711011_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3604) AND ((ss_quantity#3604 >= 1) AND (ss_quantity#3604 <= 20))))
    // Input: ListBuffer(ss_ext_discount_amt#3608, ss_quantity#3604)
    // Output: ListBuffer(ss_ext_discount_amt#3608)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3295453_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3604 = tbl_SerializeFromObject_TD_3295453_input.getInt32(i, 1);
        if ((_ss_quantity3604!= 0) && ((_ss_quantity3604 >= 1) && (_ss_quantity3604 <= 20))) {
            int64_t _ss_ext_discount_amt3608_t = tbl_SerializeFromObject_TD_3295453_input.getInt64(i, 0);
            tbl_Filter_TD_2711011_output.setInt64(r, 0, _ss_ext_discount_amt3608_t);
            r++;
        }
    }
    tbl_Filter_TD_2711011_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2711011_output #Row: " << tbl_Filter_TD_2711011_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2726907(Table &tbl_SerializeFromObject_TD_3304907_input, Table &tbl_Filter_TD_2726907_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#1216) AND ((ss_quantity#1216 >= 1) AND (ss_quantity#1216 <= 20))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3304907_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 10);
        if ((_ss_quantity1216!= 0) && ((_ss_quantity1216 >= 1) && (_ss_quantity1216 <= 20))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 0);
            tbl_Filter_TD_2726907_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 1);
            tbl_Filter_TD_2726907_output.setInt32(r, 1, _ss_sold_time_sk1207_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 2);
            tbl_Filter_TD_2726907_output.setInt32(r, 2, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 3);
            tbl_Filter_TD_2726907_output.setInt32(r, 3, _ss_customer_sk1209_t);
            int32_t _ss_cdemo_sk1210_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 4);
            tbl_Filter_TD_2726907_output.setInt32(r, 4, _ss_cdemo_sk1210_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 5);
            tbl_Filter_TD_2726907_output.setInt32(r, 5, _ss_hdemo_sk1211_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 6);
            tbl_Filter_TD_2726907_output.setInt32(r, 6, _ss_addr_sk1212_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 7);
            tbl_Filter_TD_2726907_output.setInt32(r, 7, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 8);
            tbl_Filter_TD_2726907_output.setInt32(r, 8, _ss_promo_sk1214_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 9);
            tbl_Filter_TD_2726907_output.setInt64(r, 9, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_3304907_input.getInt32(i, 10);
            tbl_Filter_TD_2726907_output.setInt32(r, 10, _ss_quantity1216_t);
            int64_t _ss_wholesale_cost1217_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 11);
            tbl_Filter_TD_2726907_output.setInt64(r, 11, _ss_wholesale_cost1217_t);
            int64_t _ss_list_price1218_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 12);
            tbl_Filter_TD_2726907_output.setInt64(r, 12, _ss_list_price1218_t);
            int64_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 13);
            tbl_Filter_TD_2726907_output.setInt64(r, 13, _ss_sales_price1219_t);
            int64_t _ss_ext_discount_amt1220_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 14);
            tbl_Filter_TD_2726907_output.setInt64(r, 14, _ss_ext_discount_amt1220_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 15);
            tbl_Filter_TD_2726907_output.setInt64(r, 15, _ss_ext_sales_price1221_t);
            int64_t _ss_ext_wholesale_cost1222_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 16);
            tbl_Filter_TD_2726907_output.setInt64(r, 16, _ss_ext_wholesale_cost1222_t);
            int64_t _ss_ext_list_price1223_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 17);
            tbl_Filter_TD_2726907_output.setInt64(r, 17, _ss_ext_list_price1223_t);
            int64_t _ss_ext_tax1224_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 18);
            tbl_Filter_TD_2726907_output.setInt64(r, 18, _ss_ext_tax1224_t);
            int64_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 19);
            tbl_Filter_TD_2726907_output.setInt64(r, 19, _ss_coupon_amt1225_t);
            int64_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 20);
            tbl_Filter_TD_2726907_output.setInt64(r, 20, _ss_net_paid1226_t);
            int64_t _ss_net_paid_inc_tax1227_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 21);
            tbl_Filter_TD_2726907_output.setInt64(r, 21, _ss_net_paid_inc_tax1227_t);
            int64_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_3304907_input.getInt64(i, 22);
            tbl_Filter_TD_2726907_output.setInt64(r, 22, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_2726907_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2726907_output #Row: " << tbl_Filter_TD_2726907_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1778739(Table &tbl_Filter_TD_2676303_output, Table &tbl_Aggregate_TD_1778739_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#3913)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#3593)
    // Input: ListBuffer(ss_net_paid#3913)
    // Output: ListBuffer(avg(ss_net_paid)#3593)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2676303_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid3913 = tbl_Filter_TD_2676303_output.getInt64(i, 0);
        int64_t _avgss_net_paid3593_avg_0 = _ss_net_paid3913;
        avg_0 = (avg_0 + _avgss_net_paid3593_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid3593 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1778739_output.setInt64(r++, 0, _avgss_net_paid3593);
    tbl_Aggregate_TD_1778739_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1778739_output #Row: " << tbl_Aggregate_TD_1778739_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1312662(Table &tbl_Filter_TD_2412978_output, Table &tbl_Aggregate_TD_1312662_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#3884)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#3591)
    // Input: ListBuffer(ss_ext_discount_amt#3884)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#3591)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2412978_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt3884 = tbl_Filter_TD_2412978_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt3591_avg_0 = _ss_ext_discount_amt3884;
        avg_0 = (avg_0 + _avgss_ext_discount_amt3591_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt3591 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1312662_output.setInt64(r++, 0, _avgss_ext_discount_amt3591);
    tbl_Aggregate_TD_1312662_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1312662_output #Row: " << tbl_Aggregate_TD_1312662_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1434288(Table &tbl_Filter_TD_2261798_output, Table &tbl_Aggregate_TD_1434288_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3589L)
    // Input: ListBuffer(ss_sold_date_sk#3847, ss_sold_time_sk#3848, ss_item_sk#3849, ss_customer_sk#3850, ss_cdemo_sk#3851, ss_hdemo_sk#3852, ss_addr_sk#3853, ss_store_sk#3854, ss_promo_sk#3855, ss_ticket_number#3856L, ss_quantity#3857, ss_wholesale_cost#3858, ss_list_price#3859, ss_sales_price#3860, ss_ext_discount_amt#3861, ss_ext_sales_price#3862, ss_ext_wholesale_cost#3863, ss_ext_list_price#3864, ss_ext_tax#3865, ss_coupon_amt#3866, ss_net_paid#3867, ss_net_paid_inc_tax#3868, ss_net_profit#3869)
    // Output: ListBuffer(count(1)#3589L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2261798_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3847 = tbl_Filter_TD_2261798_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk3848 = tbl_Filter_TD_2261798_output.getInt32(i, 1);
        int32_t _ss_item_sk3849 = tbl_Filter_TD_2261798_output.getInt32(i, 2);
        int32_t _ss_customer_sk3850 = tbl_Filter_TD_2261798_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk3851 = tbl_Filter_TD_2261798_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk3852 = tbl_Filter_TD_2261798_output.getInt32(i, 5);
        int32_t _ss_addr_sk3853 = tbl_Filter_TD_2261798_output.getInt32(i, 6);
        int32_t _ss_store_sk3854 = tbl_Filter_TD_2261798_output.getInt32(i, 7);
        int32_t _ss_promo_sk3855 = tbl_Filter_TD_2261798_output.getInt32(i, 8);
        int64_t _ss_ticket_number3856L = tbl_Filter_TD_2261798_output.getInt64(i, 9);
        int32_t _ss_quantity3857 = tbl_Filter_TD_2261798_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost3858 = tbl_Filter_TD_2261798_output.getInt64(i, 11);
        int64_t _ss_list_price3859 = tbl_Filter_TD_2261798_output.getInt64(i, 12);
        int64_t _ss_sales_price3860 = tbl_Filter_TD_2261798_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt3861 = tbl_Filter_TD_2261798_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price3862 = tbl_Filter_TD_2261798_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost3863 = tbl_Filter_TD_2261798_output.getInt64(i, 16);
        int64_t _ss_ext_list_price3864 = tbl_Filter_TD_2261798_output.getInt64(i, 17);
        int64_t _ss_ext_tax3865 = tbl_Filter_TD_2261798_output.getInt64(i, 18);
        int64_t _ss_coupon_amt3866 = tbl_Filter_TD_2261798_output.getInt64(i, 19);
        int64_t _ss_net_paid3867 = tbl_Filter_TD_2261798_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax3868 = tbl_Filter_TD_2261798_output.getInt64(i, 21);
        int64_t _ss_net_profit3869 = tbl_Filter_TD_2261798_output.getInt64(i, 22);
        int64_t _count13589L_count_0 = 1;
        count_0 += _count13589L_count_0;
    }
    int r = 0;
    int64_t _count13589L = count_0;
    tbl_Aggregate_TD_1434288_output.setInt64(r++, 0, _count13589L);
    tbl_Aggregate_TD_1434288_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1434288_output #Row: " << tbl_Aggregate_TD_1434288_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1141111(Table &tbl_Filter_TD_2301173_output, Table &tbl_Aggregate_TD_1141111_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#3844)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#3587)
    // Input: ListBuffer(ss_net_paid#3844)
    // Output: ListBuffer(avg(ss_net_paid)#3587)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2301173_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid3844 = tbl_Filter_TD_2301173_output.getInt64(i, 0);
        int64_t _avgss_net_paid3587_avg_0 = _ss_net_paid3844;
        avg_0 = (avg_0 + _avgss_net_paid3587_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid3587 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1141111_output.setInt64(r++, 0, _avgss_net_paid3587);
    tbl_Aggregate_TD_1141111_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1141111_output #Row: " << tbl_Aggregate_TD_1141111_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1465069(Table &tbl_Filter_TD_2297036_output, Table &tbl_Aggregate_TD_1465069_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#3815)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#3585)
    // Input: ListBuffer(ss_ext_discount_amt#3815)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#3585)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2297036_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt3815 = tbl_Filter_TD_2297036_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt3585_avg_0 = _ss_ext_discount_amt3815;
        avg_0 = (avg_0 + _avgss_ext_discount_amt3585_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt3585 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1465069_output.setInt64(r++, 0, _avgss_ext_discount_amt3585);
    tbl_Aggregate_TD_1465069_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1465069_output #Row: " << tbl_Aggregate_TD_1465069_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1333607(Table &tbl_Filter_TD_2851011_output, Table &tbl_Aggregate_TD_1333607_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3583L)
    // Input: ListBuffer(ss_sold_date_sk#3778, ss_sold_time_sk#3779, ss_item_sk#3780, ss_customer_sk#3781, ss_cdemo_sk#3782, ss_hdemo_sk#3783, ss_addr_sk#3784, ss_store_sk#3785, ss_promo_sk#3786, ss_ticket_number#3787L, ss_quantity#3788, ss_wholesale_cost#3789, ss_list_price#3790, ss_sales_price#3791, ss_ext_discount_amt#3792, ss_ext_sales_price#3793, ss_ext_wholesale_cost#3794, ss_ext_list_price#3795, ss_ext_tax#3796, ss_coupon_amt#3797, ss_net_paid#3798, ss_net_paid_inc_tax#3799, ss_net_profit#3800)
    // Output: ListBuffer(count(1)#3583L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2851011_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3778 = tbl_Filter_TD_2851011_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk3779 = tbl_Filter_TD_2851011_output.getInt32(i, 1);
        int32_t _ss_item_sk3780 = tbl_Filter_TD_2851011_output.getInt32(i, 2);
        int32_t _ss_customer_sk3781 = tbl_Filter_TD_2851011_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk3782 = tbl_Filter_TD_2851011_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk3783 = tbl_Filter_TD_2851011_output.getInt32(i, 5);
        int32_t _ss_addr_sk3784 = tbl_Filter_TD_2851011_output.getInt32(i, 6);
        int32_t _ss_store_sk3785 = tbl_Filter_TD_2851011_output.getInt32(i, 7);
        int32_t _ss_promo_sk3786 = tbl_Filter_TD_2851011_output.getInt32(i, 8);
        int64_t _ss_ticket_number3787L = tbl_Filter_TD_2851011_output.getInt64(i, 9);
        int32_t _ss_quantity3788 = tbl_Filter_TD_2851011_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost3789 = tbl_Filter_TD_2851011_output.getInt64(i, 11);
        int64_t _ss_list_price3790 = tbl_Filter_TD_2851011_output.getInt64(i, 12);
        int64_t _ss_sales_price3791 = tbl_Filter_TD_2851011_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt3792 = tbl_Filter_TD_2851011_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price3793 = tbl_Filter_TD_2851011_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost3794 = tbl_Filter_TD_2851011_output.getInt64(i, 16);
        int64_t _ss_ext_list_price3795 = tbl_Filter_TD_2851011_output.getInt64(i, 17);
        int64_t _ss_ext_tax3796 = tbl_Filter_TD_2851011_output.getInt64(i, 18);
        int64_t _ss_coupon_amt3797 = tbl_Filter_TD_2851011_output.getInt64(i, 19);
        int64_t _ss_net_paid3798 = tbl_Filter_TD_2851011_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax3799 = tbl_Filter_TD_2851011_output.getInt64(i, 21);
        int64_t _ss_net_profit3800 = tbl_Filter_TD_2851011_output.getInt64(i, 22);
        int64_t _count13583L_count_0 = 1;
        count_0 += _count13583L_count_0;
    }
    int r = 0;
    int64_t _count13583L = count_0;
    tbl_Aggregate_TD_1333607_output.setInt64(r++, 0, _count13583L);
    tbl_Aggregate_TD_1333607_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1333607_output #Row: " << tbl_Aggregate_TD_1333607_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_138085(Table &tbl_Filter_TD_2505174_output, Table &tbl_Aggregate_TD_138085_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#3775)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#3581)
    // Input: ListBuffer(ss_net_paid#3775)
    // Output: ListBuffer(avg(ss_net_paid)#3581)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2505174_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid3775 = tbl_Filter_TD_2505174_output.getInt64(i, 0);
        int64_t _avgss_net_paid3581_avg_0 = _ss_net_paid3775;
        avg_0 = (avg_0 + _avgss_net_paid3581_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid3581 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_138085_output.setInt64(r++, 0, _avgss_net_paid3581);
    tbl_Aggregate_TD_138085_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_138085_output #Row: " << tbl_Aggregate_TD_138085_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1315833(Table &tbl_Filter_TD_2752602_output, Table &tbl_Aggregate_TD_1315833_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#3746)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#3579)
    // Input: ListBuffer(ss_ext_discount_amt#3746)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#3579)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2752602_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt3746 = tbl_Filter_TD_2752602_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt3579_avg_0 = _ss_ext_discount_amt3746;
        avg_0 = (avg_0 + _avgss_ext_discount_amt3579_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt3579 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1315833_output.setInt64(r++, 0, _avgss_ext_discount_amt3579);
    tbl_Aggregate_TD_1315833_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1315833_output #Row: " << tbl_Aggregate_TD_1315833_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1665824(Table &tbl_Filter_TD_2319628_output, Table &tbl_Aggregate_TD_1665824_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3577L)
    // Input: ListBuffer(ss_sold_date_sk#3709, ss_sold_time_sk#3710, ss_item_sk#3711, ss_customer_sk#3712, ss_cdemo_sk#3713, ss_hdemo_sk#3714, ss_addr_sk#3715, ss_store_sk#3716, ss_promo_sk#3717, ss_ticket_number#3718L, ss_quantity#3719, ss_wholesale_cost#3720, ss_list_price#3721, ss_sales_price#3722, ss_ext_discount_amt#3723, ss_ext_sales_price#3724, ss_ext_wholesale_cost#3725, ss_ext_list_price#3726, ss_ext_tax#3727, ss_coupon_amt#3728, ss_net_paid#3729, ss_net_paid_inc_tax#3730, ss_net_profit#3731)
    // Output: ListBuffer(count(1)#3577L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2319628_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3709 = tbl_Filter_TD_2319628_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk3710 = tbl_Filter_TD_2319628_output.getInt32(i, 1);
        int32_t _ss_item_sk3711 = tbl_Filter_TD_2319628_output.getInt32(i, 2);
        int32_t _ss_customer_sk3712 = tbl_Filter_TD_2319628_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk3713 = tbl_Filter_TD_2319628_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk3714 = tbl_Filter_TD_2319628_output.getInt32(i, 5);
        int32_t _ss_addr_sk3715 = tbl_Filter_TD_2319628_output.getInt32(i, 6);
        int32_t _ss_store_sk3716 = tbl_Filter_TD_2319628_output.getInt32(i, 7);
        int32_t _ss_promo_sk3717 = tbl_Filter_TD_2319628_output.getInt32(i, 8);
        int64_t _ss_ticket_number3718L = tbl_Filter_TD_2319628_output.getInt64(i, 9);
        int32_t _ss_quantity3719 = tbl_Filter_TD_2319628_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost3720 = tbl_Filter_TD_2319628_output.getInt64(i, 11);
        int64_t _ss_list_price3721 = tbl_Filter_TD_2319628_output.getInt64(i, 12);
        int64_t _ss_sales_price3722 = tbl_Filter_TD_2319628_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt3723 = tbl_Filter_TD_2319628_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price3724 = tbl_Filter_TD_2319628_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost3725 = tbl_Filter_TD_2319628_output.getInt64(i, 16);
        int64_t _ss_ext_list_price3726 = tbl_Filter_TD_2319628_output.getInt64(i, 17);
        int64_t _ss_ext_tax3727 = tbl_Filter_TD_2319628_output.getInt64(i, 18);
        int64_t _ss_coupon_amt3728 = tbl_Filter_TD_2319628_output.getInt64(i, 19);
        int64_t _ss_net_paid3729 = tbl_Filter_TD_2319628_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax3730 = tbl_Filter_TD_2319628_output.getInt64(i, 21);
        int64_t _ss_net_profit3731 = tbl_Filter_TD_2319628_output.getInt64(i, 22);
        int64_t _count13577L_count_0 = 1;
        count_0 += _count13577L_count_0;
    }
    int r = 0;
    int64_t _count13577L = count_0;
    tbl_Aggregate_TD_1665824_output.setInt64(r++, 0, _count13577L);
    tbl_Aggregate_TD_1665824_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1665824_output #Row: " << tbl_Aggregate_TD_1665824_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1711449(Table &tbl_Filter_TD_2215193_output, Table &tbl_Aggregate_TD_1711449_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#3706)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#3575)
    // Input: ListBuffer(ss_net_paid#3706)
    // Output: ListBuffer(avg(ss_net_paid)#3575)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2215193_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid3706 = tbl_Filter_TD_2215193_output.getInt64(i, 0);
        int64_t _avgss_net_paid3575_avg_0 = _ss_net_paid3706;
        avg_0 = (avg_0 + _avgss_net_paid3575_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid3575 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1711449_output.setInt64(r++, 0, _avgss_net_paid3575);
    tbl_Aggregate_TD_1711449_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1711449_output #Row: " << tbl_Aggregate_TD_1711449_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1755082(Table &tbl_Filter_TD_2550048_output, Table &tbl_Aggregate_TD_1755082_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#3677)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#3573)
    // Input: ListBuffer(ss_ext_discount_amt#3677)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#3573)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2550048_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt3677 = tbl_Filter_TD_2550048_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt3573_avg_0 = _ss_ext_discount_amt3677;
        avg_0 = (avg_0 + _avgss_ext_discount_amt3573_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt3573 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1755082_output.setInt64(r++, 0, _avgss_ext_discount_amt3573);
    tbl_Aggregate_TD_1755082_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1755082_output #Row: " << tbl_Aggregate_TD_1755082_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1830110(Table &tbl_Filter_TD_2948971_output, Table &tbl_Aggregate_TD_1830110_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3571L)
    // Input: ListBuffer(ss_sold_date_sk#3640, ss_sold_time_sk#3641, ss_item_sk#3642, ss_customer_sk#3643, ss_cdemo_sk#3644, ss_hdemo_sk#3645, ss_addr_sk#3646, ss_store_sk#3647, ss_promo_sk#3648, ss_ticket_number#3649L, ss_quantity#3650, ss_wholesale_cost#3651, ss_list_price#3652, ss_sales_price#3653, ss_ext_discount_amt#3654, ss_ext_sales_price#3655, ss_ext_wholesale_cost#3656, ss_ext_list_price#3657, ss_ext_tax#3658, ss_coupon_amt#3659, ss_net_paid#3660, ss_net_paid_inc_tax#3661, ss_net_profit#3662)
    // Output: ListBuffer(count(1)#3571L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2948971_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3640 = tbl_Filter_TD_2948971_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk3641 = tbl_Filter_TD_2948971_output.getInt32(i, 1);
        int32_t _ss_item_sk3642 = tbl_Filter_TD_2948971_output.getInt32(i, 2);
        int32_t _ss_customer_sk3643 = tbl_Filter_TD_2948971_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk3644 = tbl_Filter_TD_2948971_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk3645 = tbl_Filter_TD_2948971_output.getInt32(i, 5);
        int32_t _ss_addr_sk3646 = tbl_Filter_TD_2948971_output.getInt32(i, 6);
        int32_t _ss_store_sk3647 = tbl_Filter_TD_2948971_output.getInt32(i, 7);
        int32_t _ss_promo_sk3648 = tbl_Filter_TD_2948971_output.getInt32(i, 8);
        int64_t _ss_ticket_number3649L = tbl_Filter_TD_2948971_output.getInt64(i, 9);
        int32_t _ss_quantity3650 = tbl_Filter_TD_2948971_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost3651 = tbl_Filter_TD_2948971_output.getInt64(i, 11);
        int64_t _ss_list_price3652 = tbl_Filter_TD_2948971_output.getInt64(i, 12);
        int64_t _ss_sales_price3653 = tbl_Filter_TD_2948971_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt3654 = tbl_Filter_TD_2948971_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price3655 = tbl_Filter_TD_2948971_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost3656 = tbl_Filter_TD_2948971_output.getInt64(i, 16);
        int64_t _ss_ext_list_price3657 = tbl_Filter_TD_2948971_output.getInt64(i, 17);
        int64_t _ss_ext_tax3658 = tbl_Filter_TD_2948971_output.getInt64(i, 18);
        int64_t _ss_coupon_amt3659 = tbl_Filter_TD_2948971_output.getInt64(i, 19);
        int64_t _ss_net_paid3660 = tbl_Filter_TD_2948971_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax3661 = tbl_Filter_TD_2948971_output.getInt64(i, 21);
        int64_t _ss_net_profit3662 = tbl_Filter_TD_2948971_output.getInt64(i, 22);
        int64_t _count13571L_count_0 = 1;
        count_0 += _count13571L_count_0;
    }
    int r = 0;
    int64_t _count13571L = count_0;
    tbl_Aggregate_TD_1830110_output.setInt64(r++, 0, _count13571L);
    tbl_Aggregate_TD_1830110_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1830110_output #Row: " << tbl_Aggregate_TD_1830110_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1359352(Table &tbl_Filter_TD_2438426_output, Table &tbl_Aggregate_TD_1359352_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_net_paid#3637)) / 100.0) as decimal(11,6)) AS avg(ss_net_paid)#3569)
    // Input: ListBuffer(ss_net_paid#3637)
    // Output: ListBuffer(avg(ss_net_paid)#3569)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2438426_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_paid3637 = tbl_Filter_TD_2438426_output.getInt64(i, 0);
        int64_t _avgss_net_paid3569_avg_0 = _ss_net_paid3637;
        avg_0 = (avg_0 + _avgss_net_paid3569_avg_0);
    }
    int r = 0;
    int64_t _avgss_net_paid3569 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1359352_output.setInt64(r++, 0, _avgss_net_paid3569);
    tbl_Aggregate_TD_1359352_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1359352_output #Row: " << tbl_Aggregate_TD_1359352_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_158487(Table &tbl_Filter_TD_2711011_output, Table &tbl_Aggregate_TD_158487_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_ext_discount_amt#3608)) / 100.0) as decimal(11,6)) AS avg(ss_ext_discount_amt)#3567)
    // Input: ListBuffer(ss_ext_discount_amt#3608)
    // Output: ListBuffer(avg(ss_ext_discount_amt)#3567)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Filter_TD_2711011_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_discount_amt3608 = tbl_Filter_TD_2711011_output.getInt64(i, 0);
        int64_t _avgss_ext_discount_amt3567_avg_0 = _ss_ext_discount_amt3608;
        avg_0 = (avg_0 + _avgss_ext_discount_amt3567_avg_0);
    }
    int r = 0;
    int64_t _avgss_ext_discount_amt3567 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_158487_output.setInt64(r++, 0, _avgss_ext_discount_amt3567);
    tbl_Aggregate_TD_158487_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_158487_output #Row: " << tbl_Aggregate_TD_158487_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1398302(Table &tbl_Filter_TD_2726907_output, Table &tbl_Aggregate_TD_1398302_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3565L)
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_quantity#1216, ss_wholesale_cost#1217, ss_list_price#1218, ss_sales_price#1219, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, ss_ext_tax#1224, ss_coupon_amt#1225, ss_net_paid#1226, ss_net_paid_inc_tax#1227, ss_net_profit#1228)
    // Output: ListBuffer(count(1)#3565L)
    int64_t count_0 = 0;
    int nrow1 = tbl_Filter_TD_2726907_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_2726907_output.getInt32(i, 0);
        int32_t _ss_sold_time_sk1207 = tbl_Filter_TD_2726907_output.getInt32(i, 1);
        int32_t _ss_item_sk1208 = tbl_Filter_TD_2726907_output.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_Filter_TD_2726907_output.getInt32(i, 3);
        int32_t _ss_cdemo_sk1210 = tbl_Filter_TD_2726907_output.getInt32(i, 4);
        int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_2726907_output.getInt32(i, 5);
        int32_t _ss_addr_sk1212 = tbl_Filter_TD_2726907_output.getInt32(i, 6);
        int32_t _ss_store_sk1213 = tbl_Filter_TD_2726907_output.getInt32(i, 7);
        int32_t _ss_promo_sk1214 = tbl_Filter_TD_2726907_output.getInt32(i, 8);
        int64_t _ss_ticket_number1215L = tbl_Filter_TD_2726907_output.getInt64(i, 9);
        int32_t _ss_quantity1216 = tbl_Filter_TD_2726907_output.getInt32(i, 10);
        int64_t _ss_wholesale_cost1217 = tbl_Filter_TD_2726907_output.getInt64(i, 11);
        int64_t _ss_list_price1218 = tbl_Filter_TD_2726907_output.getInt64(i, 12);
        int64_t _ss_sales_price1219 = tbl_Filter_TD_2726907_output.getInt64(i, 13);
        int64_t _ss_ext_discount_amt1220 = tbl_Filter_TD_2726907_output.getInt64(i, 14);
        int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_2726907_output.getInt64(i, 15);
        int64_t _ss_ext_wholesale_cost1222 = tbl_Filter_TD_2726907_output.getInt64(i, 16);
        int64_t _ss_ext_list_price1223 = tbl_Filter_TD_2726907_output.getInt64(i, 17);
        int64_t _ss_ext_tax1224 = tbl_Filter_TD_2726907_output.getInt64(i, 18);
        int64_t _ss_coupon_amt1225 = tbl_Filter_TD_2726907_output.getInt64(i, 19);
        int64_t _ss_net_paid1226 = tbl_Filter_TD_2726907_output.getInt64(i, 20);
        int64_t _ss_net_paid_inc_tax1227 = tbl_Filter_TD_2726907_output.getInt64(i, 21);
        int64_t _ss_net_profit1228 = tbl_Filter_TD_2726907_output.getInt64(i, 22);
        int64_t _count13565L_count_0 = 1;
        count_0 += _count13565L_count_0;
    }
    int r = 0;
    int64_t _count13565L = count_0;
    tbl_Aggregate_TD_1398302_output.setInt64(r++, 0, _count13565L);
    tbl_Aggregate_TD_1398302_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1398302_output #Row: " << tbl_Aggregate_TD_1398302_output.getNumRow() << std::endl;
}

void SW_Filter_TD_174689(Table &tbl_SerializeFromObject_TD_2751312_input, Table &tbl_Filter_TD_174689_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(r_reason_sk#351) AND (r_reason_sk#351 = 1)))
    // Input: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    // Output: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2751312_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_SerializeFromObject_TD_2751312_input.getInt32(i, 0);
        if ((_r_reason_sk351!= 0) && (_r_reason_sk351 == 1)) {
            int32_t _r_reason_sk351_t = tbl_SerializeFromObject_TD_2751312_input.getInt32(i, 0);
            tbl_Filter_TD_174689_output.setInt32(r, 0, _r_reason_sk351_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_id352_t = tbl_SerializeFromObject_TD_2751312_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_174689_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _r_reason_id352_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_t = tbl_SerializeFromObject_TD_2751312_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_174689_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _r_reason_desc353_t);
            r++;
        }
    }
    tbl_Filter_TD_174689_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_174689_output #Row: " << tbl_Filter_TD_174689_output.getNumRow() << std::endl;
}

void SW_Project_TD_0368463(Table &tbl_Filter_TD_174689_output, Table &tbl_Aggregate_TD_1398302_output, Table &tbl_Aggregate_TD_158487_output, Table &tbl_Aggregate_TD_1359352_output, Table &tbl_Aggregate_TD_1830110_output, Table &tbl_Aggregate_TD_1755082_output, Table &tbl_Aggregate_TD_1711449_output, Table &tbl_Aggregate_TD_1665824_output, Table &tbl_Aggregate_TD_1315833_output, Table &tbl_Aggregate_TD_138085_output, Table &tbl_Aggregate_TD_1333607_output, Table &tbl_Aggregate_TD_1465069_output, Table &tbl_Aggregate_TD_1141111_output, Table &tbl_Aggregate_TD_1434288_output, Table &tbl_Aggregate_TD_1312662_output, Table &tbl_Aggregate_TD_1778739_output, Table &tbl_Project_TD_0368463_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CASE WHEN (scalar-subquery#3544 [] > 74129) THEN scalar-subquery#3545 [] ELSE scalar-subquery#3546 [] END AS bucket1#3547, CASE WHEN (scalar-subquery#3548 [] > 122840) THEN scalar-subquery#3549 [] ELSE scalar-subquery#3550 [] END AS bucket2#3551, CASE WHEN (scalar-subquery#3552 [] > 56580) THEN scalar-subquery#3553 [] ELSE scalar-subquery#3554 [] END AS bucket3#3555, CASE WHEN (scalar-subquery#3556 [] > 10097) THEN scalar-subquery#3557 [] ELSE scalar-subquery#3558 [] END AS bucket4#3559, CASE WHEN (scalar-subquery#3560 [] > 165306) THEN scalar-subquery#3561 [] ELSE scalar-subquery#3562 [] END AS bucket5#3563)
    // Input: ListBuffer(r_reason_sk#351, r_reason_id#352, r_reason_desc#353)
    // Output: ListBuffer(bucket1#3547, bucket2#3551, bucket3#3555, bucket4#3559, bucket5#3563)
    int nrow1 = tbl_Filter_TD_174689_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_Filter_TD_174689_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_id352 = tbl_Filter_TD_174689_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353 = tbl_Filter_TD_174689_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int64_t _count13565L = tbl_Aggregate_TD_1398302_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt3567 = tbl_Aggregate_TD_158487_output.getInt64(0, 0);
        int64_t _avgss_net_paid3569 = tbl_Aggregate_TD_1359352_output.getInt64(0, 0);
        int64_t _count13571L = tbl_Aggregate_TD_1830110_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt3573 = tbl_Aggregate_TD_1755082_output.getInt64(0, 0);
        int64_t _avgss_net_paid3575 = tbl_Aggregate_TD_1711449_output.getInt64(0, 0);
        int64_t _count13577L = tbl_Aggregate_TD_1665824_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt3579 = tbl_Aggregate_TD_1315833_output.getInt64(0, 0);
        int64_t _avgss_net_paid3581 = tbl_Aggregate_TD_138085_output.getInt64(0, 0);
        int64_t _count13583L = tbl_Aggregate_TD_1333607_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt3585 = tbl_Aggregate_TD_1465069_output.getInt64(0, 0);
        int64_t _avgss_net_paid3587 = tbl_Aggregate_TD_1141111_output.getInt64(0, 0);
        int64_t _count13589L = tbl_Aggregate_TD_1434288_output.getInt64(0, 0);
        int64_t _avgss_ext_discount_amt3591 = tbl_Aggregate_TD_1312662_output.getInt64(0, 0);
        int64_t _avgss_net_paid3593 = tbl_Aggregate_TD_1778739_output.getInt64(0, 0);
        int64_t _bucket13547 = (_count13565L > 74129) ? _avgss_ext_discount_amt3567 : _avgss_net_paid3569;
        tbl_Project_TD_0368463_output.setInt64(i, 0, _bucket13547);
        int64_t _bucket23551 = (_count13571L > 122840) ? _avgss_ext_discount_amt3573 : _avgss_net_paid3575;
        tbl_Project_TD_0368463_output.setInt64(i, 1, _bucket23551);
        int64_t _bucket33555 = (_count13577L > 56580) ? _avgss_ext_discount_amt3579 : _avgss_net_paid3581;
        tbl_Project_TD_0368463_output.setInt64(i, 2, _bucket33555);
        int64_t _bucket43559 = (_count13583L > 10097) ? _avgss_ext_discount_amt3585 : _avgss_net_paid3587;
        tbl_Project_TD_0368463_output.setInt64(i, 3, _bucket43559);
        int64_t _bucket53563 = (_count13589L > 165306) ? _avgss_ext_discount_amt3591 : _avgss_net_paid3593;
        tbl_Project_TD_0368463_output.setInt64(i, 4, _bucket53563);
    }
    tbl_Project_TD_0368463_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_0368463_output #Row: " << tbl_Project_TD_0368463_output.getNumRow() << std::endl;
}

