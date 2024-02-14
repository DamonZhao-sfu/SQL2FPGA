#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6669(Table &tbl_SerializeFromObject_TD_77_input, Table &tbl_Filter_TD_6669_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3572) AND (((ss_quantity#3572 >= 6) AND (ss_quantity#3572 <= 10)) AND ((((ss_list_price#3574 >= 90.00) AND (ss_list_price#3574 <= 100.00)) OR ((ss_coupon_amt#3581 >= 2323.00) AND (ss_coupon_amt#3581 <= 3323.00))) OR ((ss_wholesale_cost#3573 >= 31.00) AND (ss_wholesale_cost#3573 <= 51.00))))))
    // Input: ListBuffer(ss_list_price#3574, ss_quantity#3572, ss_coupon_amt#3581, ss_wholesale_cost#3573)
    // Output: ListBuffer(ss_list_price#3574)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_77_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3572 = tbl_SerializeFromObject_TD_77_input.getInt32(i, 1);
        int32_t _ss_list_price3574 = tbl_SerializeFromObject_TD_77_input.getInt32(i, 0);
        int32_t _ss_coupon_amt3581 = tbl_SerializeFromObject_TD_77_input.getInt32(i, 2);
        int32_t _ss_wholesale_cost3573 = tbl_SerializeFromObject_TD_77_input.getInt32(i, 3);
        if ((1) && (((_ss_quantity3572 >= 6) && (_ss_quantity3572 <= 10)) && ((((_ss_list_price3574 >= 90.00) && (_ss_list_price3574 <= 100.00)) || ((_ss_coupon_amt3581 >= 2323.00) && (_ss_coupon_amt3581 <= 3323.00))) || ((_ss_wholesale_cost3573 >= 31.00) && (_ss_wholesale_cost3573 <= 51.00))))) {
            int32_t _ss_list_price3574_t = tbl_SerializeFromObject_TD_77_input.getInt32(i, 0);
            tbl_Filter_TD_6669_output.setInt32(r, 0, _ss_list_price3574_t);
            r++;
        }
    }
    tbl_Filter_TD_6669_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6669_output #Row: " << tbl_Filter_TD_6669_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6259(Table &tbl_SerializeFromObject_TD_7330_input, Table &tbl_Filter_TD_6259_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#1216) AND (((ss_quantity#1216 >= 0) AND (ss_quantity#1216 <= 5)) AND ((((ss_list_price#1218 >= 8.00) AND (ss_list_price#1218 <= 18.00)) OR ((ss_coupon_amt#1225 >= 459.00) AND (ss_coupon_amt#1225 <= 1459.00))) OR ((ss_wholesale_cost#1217 >= 57.00) AND (ss_wholesale_cost#1217 <= 77.00))))))
    // Input: ListBuffer(ss_list_price#1218, ss_quantity#1216, ss_coupon_amt#1225, ss_wholesale_cost#1217)
    // Output: ListBuffer(ss_list_price#1218)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7330_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity1216 = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 1);
        int32_t _ss_list_price1218 = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 0);
        int32_t _ss_coupon_amt1225 = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 2);
        int32_t _ss_wholesale_cost1217 = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 3);
        if ((1) && (((_ss_quantity1216 >= 0) && (_ss_quantity1216 <= 5)) && ((((_ss_list_price1218 >= 8.00) && (_ss_list_price1218 <= 18.00)) || ((_ss_coupon_amt1225 >= 459.00) && (_ss_coupon_amt1225 <= 1459.00))) || ((_ss_wholesale_cost1217 >= 57.00) && (_ss_wholesale_cost1217 <= 77.00))))) {
            int32_t _ss_list_price1218_t = tbl_SerializeFromObject_TD_7330_input.getInt32(i, 0);
            tbl_Filter_TD_6259_output.setInt32(r, 0, _ss_list_price1218_t);
            r++;
        }
    }
    tbl_Filter_TD_6259_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6259_output #Row: " << tbl_Filter_TD_6259_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5124(Table &tbl_SerializeFromObject_TD_6823_input, Table &tbl_Filter_TD_5124_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3595) AND (((ss_quantity#3595 >= 11) AND (ss_quantity#3595 <= 15)) AND ((((ss_list_price#3597 >= 142.00) AND (ss_list_price#3597 <= 152.00)) OR ((ss_coupon_amt#3604 >= 12214.00) AND (ss_coupon_amt#3604 <= 13214.00))) OR ((ss_wholesale_cost#3596 >= 79.00) AND (ss_wholesale_cost#3596 <= 99.00))))))
    // Input: ListBuffer(ss_list_price#3597, ss_quantity#3595, ss_coupon_amt#3604, ss_wholesale_cost#3596)
    // Output: ListBuffer(ss_list_price#3597)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6823_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3595 = tbl_SerializeFromObject_TD_6823_input.getInt32(i, 1);
        int32_t _ss_list_price3597 = tbl_SerializeFromObject_TD_6823_input.getInt32(i, 0);
        int32_t _ss_coupon_amt3604 = tbl_SerializeFromObject_TD_6823_input.getInt32(i, 2);
        int32_t _ss_wholesale_cost3596 = tbl_SerializeFromObject_TD_6823_input.getInt32(i, 3);
        if ((1) && (((_ss_quantity3595 >= 11) && (_ss_quantity3595 <= 15)) && ((((_ss_list_price3597 >= 142.00) && (_ss_list_price3597 <= 152.00)) || ((_ss_coupon_amt3604 >= 12214.00) && (_ss_coupon_amt3604 <= 13214.00))) || ((_ss_wholesale_cost3596 >= 79.00) && (_ss_wholesale_cost3596 <= 99.00))))) {
            int32_t _ss_list_price3597_t = tbl_SerializeFromObject_TD_6823_input.getInt32(i, 0);
            tbl_Filter_TD_5124_output.setInt32(r, 0, _ss_list_price3597_t);
            r++;
        }
    }
    tbl_Filter_TD_5124_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5124_output #Row: " << tbl_Filter_TD_5124_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5879(Table &tbl_Filter_TD_6669_output, Table &tbl_Aggregate_TD_5879_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_list_price#3574)) / 100.0) as decimal(11,6)) AS B2_LP#3547, count(ss_list_price#3574) AS B2_CNT#3548L, count(distinct ss_list_price#3574) AS B2_CNTD#3549L)
    // Input: ListBuffer(ss_list_price#3574)
    // Output: ListBuffer(B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L)
    int64_t avg_0 = 0;
    int64_t count_1 = 0;
    int64_t count_2 = 0;
    int nrow1 = tbl_Filter_TD_6669_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_list_price3574 = tbl_Filter_TD_6669_output.getInt32(i, 0);
        int64_t _B2_LP3547_avg_0 = _ss_list_price3574;
        int64_t _B2_CNT3548L_count_1 = _ss_list_price3574;
        int64_t _B2_CNTD3549L_count_2 = _ss_list_price3574;
        avg_0 = (avg_0 + _B2_LP3547_avg_0);
        count_1 += _B2_CNT3548L_count_1;
        count_2 += _B2_CNTD3549L_count_2;
    }
    int r = 0;
    int32_t _B2_LP3547 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_5879_output.setInt32(r++, 0, _B2_LP3547);
    int64_t _B2_CNT3548L = count_1;
    tbl_Aggregate_TD_5879_output.setInt64(r++, 1, _B2_CNT3548L);
    int64_t _B2_CNTD3549L = count_2;
    tbl_Aggregate_TD_5879_output.setInt64(r++, 2, _B2_CNTD3549L);
    tbl_Aggregate_TD_5879_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5879_output #Row: " << tbl_Aggregate_TD_5879_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_541(Table &tbl_Filter_TD_6259_output, Table &tbl_Aggregate_TD_541_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_list_price#1218)) / 100.0) as decimal(11,6)) AS B1_LP#3544, count(ss_list_price#1218) AS B1_CNT#3545L, count(distinct ss_list_price#1218) AS B1_CNTD#3546L)
    // Input: ListBuffer(ss_list_price#1218)
    // Output: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L)
    int64_t avg_0 = 0;
    int64_t count_1 = 0;
    int64_t count_2 = 0;
    int nrow1 = tbl_Filter_TD_6259_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_list_price1218 = tbl_Filter_TD_6259_output.getInt32(i, 0);
        int64_t _B1_LP3544_avg_0 = _ss_list_price1218;
        int64_t _B1_CNT3545L_count_1 = _ss_list_price1218;
        int64_t _B1_CNTD3546L_count_2 = _ss_list_price1218;
        avg_0 = (avg_0 + _B1_LP3544_avg_0);
        count_1 += _B1_CNT3545L_count_1;
        count_2 += _B1_CNTD3546L_count_2;
    }
    int r = 0;
    int32_t _B1_LP3544 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_541_output.setInt32(r++, 0, _B1_LP3544);
    int64_t _B1_CNT3545L = count_1;
    tbl_Aggregate_TD_541_output.setInt64(r++, 1, _B1_CNT3545L);
    int64_t _B1_CNTD3546L = count_2;
    tbl_Aggregate_TD_541_output.setInt64(r++, 2, _B1_CNTD3546L);
    tbl_Aggregate_TD_541_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_541_output #Row: " << tbl_Aggregate_TD_541_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4787(Table &tbl_SerializeFromObject_TD_5119_input, Table &tbl_Filter_TD_4787_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3618) AND (((ss_quantity#3618 >= 16) AND (ss_quantity#3618 <= 20)) AND ((((ss_list_price#3620 >= 135.00) AND (ss_list_price#3620 <= 145.00)) OR ((ss_coupon_amt#3627 >= 6071.00) AND (ss_coupon_amt#3627 <= 7071.00))) OR ((ss_wholesale_cost#3619 >= 38.00) AND (ss_wholesale_cost#3619 <= 58.00))))))
    // Input: ListBuffer(ss_list_price#3620, ss_quantity#3618, ss_coupon_amt#3627, ss_wholesale_cost#3619)
    // Output: ListBuffer(ss_list_price#3620)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5119_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3618 = tbl_SerializeFromObject_TD_5119_input.getInt32(i, 1);
        int32_t _ss_list_price3620 = tbl_SerializeFromObject_TD_5119_input.getInt32(i, 0);
        int32_t _ss_coupon_amt3627 = tbl_SerializeFromObject_TD_5119_input.getInt32(i, 2);
        int32_t _ss_wholesale_cost3619 = tbl_SerializeFromObject_TD_5119_input.getInt32(i, 3);
        if ((1) && (((_ss_quantity3618 >= 16) && (_ss_quantity3618 <= 20)) && ((((_ss_list_price3620 >= 135.00) && (_ss_list_price3620 <= 145.00)) || ((_ss_coupon_amt3627 >= 6071.00) && (_ss_coupon_amt3627 <= 7071.00))) || ((_ss_wholesale_cost3619 >= 38.00) && (_ss_wholesale_cost3619 <= 58.00))))) {
            int32_t _ss_list_price3620_t = tbl_SerializeFromObject_TD_5119_input.getInt32(i, 0);
            tbl_Filter_TD_4787_output.setInt32(r, 0, _ss_list_price3620_t);
            r++;
        }
    }
    tbl_Filter_TD_4787_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4787_output #Row: " << tbl_Filter_TD_4787_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_4650(Table &tbl_Filter_TD_5124_output, Table &tbl_Aggregate_TD_4650_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_list_price#3597)) / 100.0) as decimal(11,6)) AS B3_LP#3550, count(ss_list_price#3597) AS B3_CNT#3551L, count(distinct ss_list_price#3597) AS B3_CNTD#3552L)
    // Input: ListBuffer(ss_list_price#3597)
    // Output: ListBuffer(B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L)
    int64_t avg_0 = 0;
    int64_t count_1 = 0;
    int64_t count_2 = 0;
    int nrow1 = tbl_Filter_TD_5124_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_list_price3597 = tbl_Filter_TD_5124_output.getInt32(i, 0);
        int64_t _B3_LP3550_avg_0 = _ss_list_price3597;
        int64_t _B3_CNT3551L_count_1 = _ss_list_price3597;
        int64_t _B3_CNTD3552L_count_2 = _ss_list_price3597;
        avg_0 = (avg_0 + _B3_LP3550_avg_0);
        count_1 += _B3_CNT3551L_count_1;
        count_2 += _B3_CNTD3552L_count_2;
    }
    int r = 0;
    int32_t _B3_LP3550 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_4650_output.setInt32(r++, 0, _B3_LP3550);
    int64_t _B3_CNT3551L = count_1;
    tbl_Aggregate_TD_4650_output.setInt64(r++, 1, _B3_CNT3551L);
    int64_t _B3_CNTD3552L = count_2;
    tbl_Aggregate_TD_4650_output.setInt64(r++, 2, _B3_CNTD3552L);
    tbl_Aggregate_TD_4650_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4650_output #Row: " << tbl_Aggregate_TD_4650_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_4861(Table &tbl_Aggregate_TD_541_output, Table &tbl_Aggregate_TD_5879_output, Table &tbl_JOIN_CROSS_TD_4861_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L)
    // Right Table: ListBuffer(B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L)
    // Output Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L)
    int left_nrow = tbl_Aggregate_TD_541_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5879_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_4861_output.setInt32(r, 0, tbl_Aggregate_TD_541_output.getInt32(i, 0));
        tbl_JOIN_CROSS_TD_4861_output.setInt32(r, 1, tbl_Aggregate_TD_541_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_4861_output.setInt32(r, 2, tbl_Aggregate_TD_541_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_4861_output.setInt32(r, 3, tbl_Aggregate_TD_5879_output.getInt32(j, 3));
        tbl_JOIN_CROSS_TD_4861_output.setInt32(r, 4, tbl_Aggregate_TD_5879_output.getInt64(j, 4));
        tbl_JOIN_CROSS_TD_4861_output.setInt32(r, 5, tbl_Aggregate_TD_5879_output.getInt64(j, 5));
        ++r;
    }
    tbl_JOIN_CROSS_TD_4861_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_4861_output #Row: " << tbl_JOIN_CROSS_TD_4861_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3990(Table &tbl_SerializeFromObject_TD_4340_input, Table &tbl_Filter_TD_3990_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3641) AND (((ss_quantity#3641 >= 21) AND (ss_quantity#3641 <= 25)) AND ((((ss_list_price#3643 >= 122.00) AND (ss_list_price#3643 <= 132.00)) OR ((ss_coupon_amt#3650 >= 836.00) AND (ss_coupon_amt#3650 <= 1836.00))) OR ((ss_wholesale_cost#3642 >= 17.00) AND (ss_wholesale_cost#3642 <= 37.00))))))
    // Input: ListBuffer(ss_list_price#3643, ss_quantity#3641, ss_coupon_amt#3650, ss_wholesale_cost#3642)
    // Output: ListBuffer(ss_list_price#3643)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4340_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3641 = tbl_SerializeFromObject_TD_4340_input.getInt32(i, 1);
        int32_t _ss_list_price3643 = tbl_SerializeFromObject_TD_4340_input.getInt32(i, 0);
        int32_t _ss_coupon_amt3650 = tbl_SerializeFromObject_TD_4340_input.getInt32(i, 2);
        int32_t _ss_wholesale_cost3642 = tbl_SerializeFromObject_TD_4340_input.getInt32(i, 3);
        if ((1) && (((_ss_quantity3641 >= 21) && (_ss_quantity3641 <= 25)) && ((((_ss_list_price3643 >= 122.00) && (_ss_list_price3643 <= 132.00)) || ((_ss_coupon_amt3650 >= 836.00) && (_ss_coupon_amt3650 <= 1836.00))) || ((_ss_wholesale_cost3642 >= 17.00) && (_ss_wholesale_cost3642 <= 37.00))))) {
            int32_t _ss_list_price3643_t = tbl_SerializeFromObject_TD_4340_input.getInt32(i, 0);
            tbl_Filter_TD_3990_output.setInt32(r, 0, _ss_list_price3643_t);
            r++;
        }
    }
    tbl_Filter_TD_3990_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3990_output #Row: " << tbl_Filter_TD_3990_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_327(Table &tbl_Filter_TD_4787_output, Table &tbl_Aggregate_TD_327_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_list_price#3620)) / 100.0) as decimal(11,6)) AS B4_LP#3553, count(ss_list_price#3620) AS B4_CNT#3554L, count(distinct ss_list_price#3620) AS B4_CNTD#3555L)
    // Input: ListBuffer(ss_list_price#3620)
    // Output: ListBuffer(B4_LP#3553, B4_CNT#3554L, B4_CNTD#3555L)
    int64_t avg_0 = 0;
    int64_t count_1 = 0;
    int64_t count_2 = 0;
    int nrow1 = tbl_Filter_TD_4787_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_list_price3620 = tbl_Filter_TD_4787_output.getInt32(i, 0);
        int64_t _B4_LP3553_avg_0 = _ss_list_price3620;
        int64_t _B4_CNT3554L_count_1 = _ss_list_price3620;
        int64_t _B4_CNTD3555L_count_2 = _ss_list_price3620;
        avg_0 = (avg_0 + _B4_LP3553_avg_0);
        count_1 += _B4_CNT3554L_count_1;
        count_2 += _B4_CNTD3555L_count_2;
    }
    int r = 0;
    int32_t _B4_LP3553 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_327_output.setInt32(r++, 0, _B4_LP3553);
    int64_t _B4_CNT3554L = count_1;
    tbl_Aggregate_TD_327_output.setInt64(r++, 1, _B4_CNT3554L);
    int64_t _B4_CNTD3555L = count_2;
    tbl_Aggregate_TD_327_output.setInt64(r++, 2, _B4_CNTD3555L);
    tbl_Aggregate_TD_327_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_327_output #Row: " << tbl_Aggregate_TD_327_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_3877(Table &tbl_JOIN_CROSS_TD_4861_output, Table &tbl_Aggregate_TD_4650_output, Table &tbl_JOIN_CROSS_TD_3877_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L)
    // Right Table: ListBuffer(B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L)
    // Output Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L, B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L)
    int left_nrow = tbl_JOIN_CROSS_TD_4861_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4650_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_4861_output.getInt32(i, 0));
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_4861_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_4861_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 3, tbl_JOIN_CROSS_TD_4861_output.getInt32(i, 3));
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 4, tbl_JOIN_CROSS_TD_4861_output.getInt64(i, 4));
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 5, tbl_JOIN_CROSS_TD_4861_output.getInt64(i, 5));
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 6, tbl_Aggregate_TD_4650_output.getInt32(j, 6));
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 7, tbl_Aggregate_TD_4650_output.getInt64(j, 7));
        tbl_JOIN_CROSS_TD_3877_output.setInt32(r, 8, tbl_Aggregate_TD_4650_output.getInt64(j, 8));
        ++r;
    }
    tbl_JOIN_CROSS_TD_3877_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_3877_output #Row: " << tbl_JOIN_CROSS_TD_3877_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2376(Table &tbl_SerializeFromObject_TD_3727_input, Table &tbl_Filter_TD_2376_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_quantity#3664) AND (((ss_quantity#3664 >= 26) AND (ss_quantity#3664 <= 30)) AND ((((ss_list_price#3666 >= 154.00) AND (ss_list_price#3666 <= 164.00)) OR ((ss_coupon_amt#3673 >= 7326.00) AND (ss_coupon_amt#3673 <= 8326.00))) OR ((ss_wholesale_cost#3665 >= 7.00) AND (ss_wholesale_cost#3665 <= 27.00))))))
    // Input: ListBuffer(ss_list_price#3666, ss_quantity#3664, ss_coupon_amt#3673, ss_wholesale_cost#3665)
    // Output: ListBuffer(ss_list_price#3666)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3727_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3664 = tbl_SerializeFromObject_TD_3727_input.getInt32(i, 1);
        int32_t _ss_list_price3666 = tbl_SerializeFromObject_TD_3727_input.getInt32(i, 0);
        int32_t _ss_coupon_amt3673 = tbl_SerializeFromObject_TD_3727_input.getInt32(i, 2);
        int32_t _ss_wholesale_cost3665 = tbl_SerializeFromObject_TD_3727_input.getInt32(i, 3);
        if ((1) && (((_ss_quantity3664 >= 26) && (_ss_quantity3664 <= 30)) && ((((_ss_list_price3666 >= 154.00) && (_ss_list_price3666 <= 164.00)) || ((_ss_coupon_amt3673 >= 7326.00) && (_ss_coupon_amt3673 <= 8326.00))) || ((_ss_wholesale_cost3665 >= 7.00) && (_ss_wholesale_cost3665 <= 27.00))))) {
            int32_t _ss_list_price3666_t = tbl_SerializeFromObject_TD_3727_input.getInt32(i, 0);
            tbl_Filter_TD_2376_output.setInt32(r, 0, _ss_list_price3666_t);
            r++;
        }
    }
    tbl_Filter_TD_2376_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2376_output #Row: " << tbl_Filter_TD_2376_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_274(Table &tbl_Filter_TD_3990_output, Table &tbl_Aggregate_TD_274_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_list_price#3643)) / 100.0) as decimal(11,6)) AS B5_LP#3556, count(ss_list_price#3643) AS B5_CNT#3557L, count(distinct ss_list_price#3643) AS B5_CNTD#3558L)
    // Input: ListBuffer(ss_list_price#3643)
    // Output: ListBuffer(B5_LP#3556, B5_CNT#3557L, B5_CNTD#3558L)
    int64_t avg_0 = 0;
    int64_t count_1 = 0;
    int64_t count_2 = 0;
    int nrow1 = tbl_Filter_TD_3990_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_list_price3643 = tbl_Filter_TD_3990_output.getInt32(i, 0);
        int64_t _B5_LP3556_avg_0 = _ss_list_price3643;
        int64_t _B5_CNT3557L_count_1 = _ss_list_price3643;
        int64_t _B5_CNTD3558L_count_2 = _ss_list_price3643;
        avg_0 = (avg_0 + _B5_LP3556_avg_0);
        count_1 += _B5_CNT3557L_count_1;
        count_2 += _B5_CNTD3558L_count_2;
    }
    int r = 0;
    int32_t _B5_LP3556 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_274_output.setInt32(r++, 0, _B5_LP3556);
    int64_t _B5_CNT3557L = count_1;
    tbl_Aggregate_TD_274_output.setInt64(r++, 1, _B5_CNT3557L);
    int64_t _B5_CNTD3558L = count_2;
    tbl_Aggregate_TD_274_output.setInt64(r++, 2, _B5_CNTD3558L);
    tbl_Aggregate_TD_274_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_274_output #Row: " << tbl_Aggregate_TD_274_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_2888(Table &tbl_JOIN_CROSS_TD_3877_output, Table &tbl_Aggregate_TD_327_output, Table &tbl_JOIN_CROSS_TD_2888_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L, B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L)
    // Right Table: ListBuffer(B4_LP#3553, B4_CNT#3554L, B4_CNTD#3555L)
    // Output Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L, B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L, B4_LP#3553, B4_CNT#3554L, B4_CNTD#3555L)
    int left_nrow = tbl_JOIN_CROSS_TD_3877_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_327_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_3877_output.getInt32(i, 0));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_3877_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_3877_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 3, tbl_JOIN_CROSS_TD_3877_output.getInt32(i, 3));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 4, tbl_JOIN_CROSS_TD_3877_output.getInt64(i, 4));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 5, tbl_JOIN_CROSS_TD_3877_output.getInt64(i, 5));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 6, tbl_JOIN_CROSS_TD_3877_output.getInt32(i, 6));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 7, tbl_JOIN_CROSS_TD_3877_output.getInt64(i, 7));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 8, tbl_JOIN_CROSS_TD_3877_output.getInt64(i, 8));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 9, tbl_Aggregate_TD_327_output.getInt32(j, 9));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 10, tbl_Aggregate_TD_327_output.getInt64(j, 10));
        tbl_JOIN_CROSS_TD_2888_output.setInt32(r, 11, tbl_Aggregate_TD_327_output.getInt64(j, 11));
        ++r;
    }
    tbl_JOIN_CROSS_TD_2888_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_2888_output #Row: " << tbl_JOIN_CROSS_TD_2888_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1986(Table &tbl_Filter_TD_2376_output, Table &tbl_Aggregate_TD_1986_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cast((avg(UnscaledValue(ss_list_price#3666)) / 100.0) as decimal(11,6)) AS B6_LP#3559, count(ss_list_price#3666) AS B6_CNT#3560L, count(distinct ss_list_price#3666) AS B6_CNTD#3561L)
    // Input: ListBuffer(ss_list_price#3666)
    // Output: ListBuffer(B6_LP#3559, B6_CNT#3560L, B6_CNTD#3561L)
    int64_t avg_0 = 0;
    int64_t count_1 = 0;
    int64_t count_2 = 0;
    int nrow1 = tbl_Filter_TD_2376_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_list_price3666 = tbl_Filter_TD_2376_output.getInt32(i, 0);
        int64_t _B6_LP3559_avg_0 = _ss_list_price3666;
        int64_t _B6_CNT3560L_count_1 = _ss_list_price3666;
        int64_t _B6_CNTD3561L_count_2 = _ss_list_price3666;
        avg_0 = (avg_0 + _B6_LP3559_avg_0);
        count_1 += _B6_CNT3560L_count_1;
        count_2 += _B6_CNTD3561L_count_2;
    }
    int r = 0;
    int32_t _B6_LP3559 = (avg_0 / nrow1 / 100.0);
    tbl_Aggregate_TD_1986_output.setInt32(r++, 0, _B6_LP3559);
    int64_t _B6_CNT3560L = count_1;
    tbl_Aggregate_TD_1986_output.setInt64(r++, 1, _B6_CNT3560L);
    int64_t _B6_CNTD3561L = count_2;
    tbl_Aggregate_TD_1986_output.setInt64(r++, 2, _B6_CNTD3561L);
    tbl_Aggregate_TD_1986_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1986_output #Row: " << tbl_Aggregate_TD_1986_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_1342(Table &tbl_JOIN_CROSS_TD_2888_output, Table &tbl_Aggregate_TD_274_output, Table &tbl_JOIN_CROSS_TD_1342_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L, B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L, B4_LP#3553, B4_CNT#3554L, B4_CNTD#3555L)
    // Right Table: ListBuffer(B5_LP#3556, B5_CNT#3557L, B5_CNTD#3558L)
    // Output Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L, B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L, B4_LP#3553, B4_CNT#3554L, B4_CNTD#3555L, B5_LP#3556, B5_CNT#3557L, B5_CNTD#3558L)
    int left_nrow = tbl_JOIN_CROSS_TD_2888_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_274_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_2888_output.getInt32(i, 0));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_2888_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_2888_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 3, tbl_JOIN_CROSS_TD_2888_output.getInt32(i, 3));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 4, tbl_JOIN_CROSS_TD_2888_output.getInt64(i, 4));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 5, tbl_JOIN_CROSS_TD_2888_output.getInt64(i, 5));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 6, tbl_JOIN_CROSS_TD_2888_output.getInt32(i, 6));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 7, tbl_JOIN_CROSS_TD_2888_output.getInt64(i, 7));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 8, tbl_JOIN_CROSS_TD_2888_output.getInt64(i, 8));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 9, tbl_JOIN_CROSS_TD_2888_output.getInt32(i, 9));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 10, tbl_JOIN_CROSS_TD_2888_output.getInt64(i, 10));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 11, tbl_JOIN_CROSS_TD_2888_output.getInt64(i, 11));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 12, tbl_Aggregate_TD_274_output.getInt32(j, 12));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 13, tbl_Aggregate_TD_274_output.getInt64(j, 13));
        tbl_JOIN_CROSS_TD_1342_output.setInt32(r, 14, tbl_Aggregate_TD_274_output.getInt64(j, 14));
        ++r;
    }
    tbl_JOIN_CROSS_TD_1342_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_1342_output #Row: " << tbl_JOIN_CROSS_TD_1342_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_0377(Table &tbl_JOIN_CROSS_TD_1342_output, Table &tbl_Aggregate_TD_1986_output, Table &tbl_JOIN_CROSS_TD_0377_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L, B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L, B4_LP#3553, B4_CNT#3554L, B4_CNTD#3555L, B5_LP#3556, B5_CNT#3557L, B5_CNTD#3558L)
    // Right Table: ListBuffer(B6_LP#3559, B6_CNT#3560L, B6_CNTD#3561L)
    // Output Table: ListBuffer(B1_LP#3544, B1_CNT#3545L, B1_CNTD#3546L, B2_LP#3547, B2_CNT#3548L, B2_CNTD#3549L, B3_LP#3550, B3_CNT#3551L, B3_CNTD#3552L, B4_LP#3553, B4_CNT#3554L, B4_CNTD#3555L, B5_LP#3556, B5_CNT#3557L, B5_CNTD#3558L, B6_LP#3559, B6_CNT#3560L, B6_CNTD#3561L)
    int left_nrow = tbl_JOIN_CROSS_TD_1342_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_1986_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 0, tbl_JOIN_CROSS_TD_1342_output.getInt32(i, 0));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 1, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 1));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 2, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 2));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 3, tbl_JOIN_CROSS_TD_1342_output.getInt32(i, 3));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 4, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 4));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 5, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 5));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 6, tbl_JOIN_CROSS_TD_1342_output.getInt32(i, 6));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 7, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 7));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 8, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 8));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 9, tbl_JOIN_CROSS_TD_1342_output.getInt32(i, 9));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 10, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 10));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 11, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 11));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 12, tbl_JOIN_CROSS_TD_1342_output.getInt32(i, 12));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 13, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 13));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 14, tbl_JOIN_CROSS_TD_1342_output.getInt64(i, 14));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 15, tbl_Aggregate_TD_1986_output.getInt32(j, 15));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 16, tbl_Aggregate_TD_1986_output.getInt64(j, 16));
        tbl_JOIN_CROSS_TD_0377_output.setInt32(r, 17, tbl_Aggregate_TD_1986_output.getInt64(j, 17));
        ++r;
    }
    tbl_JOIN_CROSS_TD_0377_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_0377_output #Row: " << tbl_JOIN_CROSS_TD_0377_output.getNumRow() << std::endl;
}

