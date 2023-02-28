#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_6941389(Table &tbl_SerializeFromObject_TD_7222617_input, Table &tbl_Filter_TD_6941389_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#3584) AND ((d_date#3584 >= 2000-01-27) AND (d_date#3584 <= 2000-04-26))) AND isnotnull(d_date_sk#3582)))
    // Input: ListBuffer(d_date_sk#3582, d_date#3584)
    // Output: ListBuffer(d_date_sk#3582)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7222617_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date3584 = tbl_SerializeFromObject_TD_7222617_input.getInt32(i, 1);
        int32_t _d_date_sk3582 = tbl_SerializeFromObject_TD_7222617_input.getInt32(i, 0);
        if (((_d_date3584!= 0) && ((_d_date3584 >= 20000127) && (_d_date3584 <= 20000426))) && (_d_date_sk3582!= 0)) {
            int32_t _d_date_sk3582_t = tbl_SerializeFromObject_TD_7222617_input.getInt32(i, 0);
            tbl_Filter_TD_6941389_output.setInt32(r, 0, _d_date_sk3582_t);
            r++;
        }
    }
    tbl_Filter_TD_6941389_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6941389_output #Row: " << tbl_Filter_TD_6941389_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6755408(Table &tbl_SerializeFromObject_TD_7873326_input, Table &tbl_Filter_TD_6755408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#3548) AND isnotnull(cs_item_sk#3563)))
    // Input: ListBuffer(cs_sold_date_sk#3548, cs_item_sk#3563, cs_ext_discount_amt#3570)
    // Output: ListBuffer(cs_sold_date_sk#3548, cs_item_sk#3563, cs_ext_discount_amt#3570)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7873326_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk3548 = tbl_SerializeFromObject_TD_7873326_input.getInt32(i, 0);
        int32_t _cs_item_sk3563 = tbl_SerializeFromObject_TD_7873326_input.getInt32(i, 1);
        if ((_cs_sold_date_sk3548!= 0) && (_cs_item_sk3563!= 0)) {
            int32_t _cs_sold_date_sk3548_t = tbl_SerializeFromObject_TD_7873326_input.getInt32(i, 0);
            tbl_Filter_TD_6755408_output.setInt32(r, 0, _cs_sold_date_sk3548_t);
            int32_t _cs_item_sk3563_t = tbl_SerializeFromObject_TD_7873326_input.getInt32(i, 1);
            tbl_Filter_TD_6755408_output.setInt32(r, 1, _cs_item_sk3563_t);
            int64_t _cs_ext_discount_amt3570_t = tbl_SerializeFromObject_TD_7873326_input.getInt64(i, 2);
            tbl_Filter_TD_6755408_output.setInt64(r, 2, _cs_ext_discount_amt3570_t);
            r++;
        }
    }
    tbl_Filter_TD_6755408_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6755408_output #Row: " << tbl_Filter_TD_6755408_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_4377090_consolidate(Table &tbl_Aggregate_TD_4377090_output_preprocess, Table &tbl_Aggregate_TD_4377090_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_4377090_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _avgcs_ext_discount_amt3547 = tbl_Aggregate_TD_4377090_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_4377090_output.setInt64(r, 0, _avgcs_ext_discount_amt3547);
        int32_t _cs_item_sk3563 = tbl_Aggregate_TD_4377090_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_4377090_output.setInt32(r, 1, _cs_item_sk3563);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_4377090_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_4377090_output #Row: " << tbl_Aggregate_TD_4377090_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4453363(Table &tbl_SerializeFromObject_TD_5635140_input, Table &tbl_Filter_TD_4453363_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manufact_id#241) AND (i_manufact_id#241 = 977)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_manufact_id#241)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5635140_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_SerializeFromObject_TD_5635140_input.getInt32(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_5635140_input.getInt32(i, 0);
        if (((_i_manufact_id241!= 0) && (_i_manufact_id241 == 977)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_5635140_input.getInt32(i, 0);
            tbl_Filter_TD_4453363_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_4453363_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4453363_output #Row: " << tbl_Filter_TD_4453363_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4366841(Table &tbl_SerializeFromObject_TD_5569911_input, Table &tbl_Filter_TD_4366841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND (isnotnull(cs_ext_discount_amt#1126) AND isnotnull(cs_sold_date_sk#1104))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_discount_amt#1126)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_ext_discount_amt#1126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5569911_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_5569911_input.getInt32(i, 1);
        int64_t _cs_ext_discount_amt1126 = tbl_SerializeFromObject_TD_5569911_input.getInt64(i, 2);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_5569911_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && ((_cs_ext_discount_amt1126!= 0) && (_cs_sold_date_sk1104!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_5569911_input.getInt32(i, 0);
            tbl_Filter_TD_4366841_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_5569911_input.getInt32(i, 1);
            tbl_Filter_TD_4366841_output.setInt32(r, 1, _cs_item_sk1119_t);
            int64_t _cs_ext_discount_amt1126_t = tbl_SerializeFromObject_TD_5569911_input.getInt64(i, 2);
            tbl_Filter_TD_4366841_output.setInt64(r, 2, _cs_ext_discount_amt1126_t);
            r++;
        }
    }
    tbl_Filter_TD_4366841_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4366841_output #Row: " << tbl_Filter_TD_4366841_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3330637(Table &tbl_Aggregate_TD_4377090_output, Table &tbl_Filter_TD_3330637_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull((1.3 * avg(cs_ext_discount_amt))#3547))
    // Input: ListBuffer((1.3 * avg(cs_ext_discount_amt))#3547, cs_item_sk#3563)
    // Output: ListBuffer((1.3 * avg(cs_ext_discount_amt))#3547, cs_item_sk#3563)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_4377090_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _avgcs_ext_discount_amt3547 = tbl_Aggregate_TD_4377090_output.getInt64(i, 0);
        if (_avgcs_ext_discount_amt3547!= 0) {
            int64_t _avgcs_ext_discount_amt3547_t = tbl_Aggregate_TD_4377090_output.getInt64(i, 0);
            tbl_Filter_TD_3330637_output.setInt64(r, 0, _avgcs_ext_discount_amt3547_t);
            int32_t _cs_item_sk3563_t = tbl_Aggregate_TD_4377090_output.getInt32(i, 1);
            tbl_Filter_TD_3330637_output.setInt32(r, 1, _cs_item_sk3563_t);
            r++;
        }
    }
    tbl_Filter_TD_3330637_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3330637_output #Row: " << tbl_Filter_TD_3330637_output.getNumRow() << std::endl;
}


void SW_Filter_TD_2939423(Table &tbl_SerializeFromObject_TD_3465600_input, Table &tbl_Filter_TD_2939423_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-01-27) AND (d_date#122 <= 2000-04-26))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3465600_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_3465600_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_3465600_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000127) && (_d_date122 <= 20000426))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_3465600_input.getInt32(i, 0);
            tbl_Filter_TD_2939423_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_2939423_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2939423_output #Row: " << tbl_Filter_TD_2939423_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_0765850(Table &tbl_JOIN_INNER_TD_1827937_output, Table &tbl_Aggregate_TD_0765850_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(MakeDecimal(sum(UnscaledValue(cs_ext_discount_amt#1126)),17,2) AS excess discount amount#3544)
    // Input: ListBuffer(cs_ext_discount_amt#1126)
    // Output: ListBuffer(excess discount amount#3544)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1827937_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cs_ext_discount_amt1126 = tbl_JOIN_INNER_TD_1827937_output.getInt64(i, 0);
        int64_t _amount3544_sum_0 = _cs_ext_discount_amt1126;
        sum_0 += _amount3544_sum_0;
    }
    int r = 0;
    int64_t _amount3544 = sum_0;
    tbl_Aggregate_TD_0765850_output.setInt64(r++, 0, _amount3544);
    tbl_Aggregate_TD_0765850_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0765850_output #Row: " << tbl_Aggregate_TD_0765850_output.getNumRow() << std::endl;
}

