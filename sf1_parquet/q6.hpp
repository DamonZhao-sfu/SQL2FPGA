#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_2462(Table &tbl_SerializeFromObject_TD_3143_input, Table &tbl_Filter_TD_2462_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(l_shipdate#15) AND (((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19940101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19950101)) AND (((cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) >= 5) AND (cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) <= 7)) AND (cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) < 24)))))
    // Input: ListBuffer(l_extendedprice#5, l_discount#6, l_shipdate#15, l_quantity#4)
    // Output: ListBuffer(l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3143_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_3143_input.getInt32(i, 2);
        int32_t _l_discount6 = tbl_SerializeFromObject_TD_3143_input.getInt32(i, 1);
        int32_t _l_quantity4 = tbl_SerializeFromObject_TD_3143_input.getInt32(i, 3);
        if ((1) && (((_l_shipdate15 >= 19940101) && (_l_shipdate15 < 19950101)) && (((_l_discount6 >= 5) && (_l_discount6 <= 7)) && (_l_quantity4 < 24)))) {
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_3143_input.getInt32(i, 0);
            tbl_Filter_TD_2462_output.setInt32(r, 0, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_3143_input.getInt32(i, 1);
            tbl_Filter_TD_2462_output.setInt32(r, 1, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_2462_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2462_output #Row: " << tbl_Filter_TD_2462_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_037(Table &tbl_Project_TD_1398_output, Table &tbl_Aggregate_TD_037_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(sum((l_extendedprice#117 * l_discount#134)) AS revenue#1397L)
    // Input: ListBuffer(l_extendedprice#117, l_discount#134)
    // Output: ListBuffer(revenue#1397L)
    int64_t sum_0 = 0;
    int nrow1 = tbl_Project_TD_1398_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_extendedprice117 = tbl_Project_TD_1398_output.getInt32(i, 0);
        int32_t _l_discount134 = tbl_Project_TD_1398_output.getInt32(i, 1);
        int64_t _revenue1397L_sum_0 = (_l_extendedprice117 * _l_discount134);
        sum_0 += _revenue1397L_sum_0;
    }
    int r = 0;
    int64_t _revenue1397L = sum_0;
    tbl_Aggregate_TD_037_output.setInt64(r++, 0, _revenue1397L);
    tbl_Aggregate_TD_037_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_037_output #Row: " << tbl_Aggregate_TD_037_output.getNumRow() << std::endl;
}

