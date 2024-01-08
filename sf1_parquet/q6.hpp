#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_2924(Table &tbl_SerializeFromObject_TD_3854_input, Table &tbl_Filter_TD_2924_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(l_shipdate#15) AND (((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19940101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19950101)) AND (((cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) >= 5) AND (cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) <= 7)) AND (cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) < 24)))))
    // Input: ListBuffer(l_extendedprice#5, l_discount#6, l_shipdate#15, l_quantity#4)
    // Output: ListBuffer(l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3854_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_3854_input.getInt32(i, 2);
        int32_t _l_discount6 = tbl_SerializeFromObject_TD_3854_input.getInt32(i, 1);
        int32_t _l_quantity4 = tbl_SerializeFromObject_TD_3854_input.getInt32(i, 3);
        if ((1) && (((_l_shipdate15 >= 19940101) && (_l_shipdate15 < 19950101)) && (((_l_discount6 >= 5) && (_l_discount6 <= 7)) && (_l_quantity4 < 24)))) {
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_3854_input.getInt32(i, 0);
            tbl_Filter_TD_2924_output.setInt32(r, 0, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_3854_input.getInt32(i, 1);
            tbl_Filter_TD_2924_output.setInt32(r, 1, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_2924_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2924_output #Row: " << tbl_Filter_TD_2924_output.getNumRow() << std::endl;
}

void SW_Project_TD_1557(Table &tbl_Filter_TD_2924_output, Table &tbl_Project_TD_1557_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_Filter_TD_2924_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_extendedprice5 = tbl_Filter_TD_2924_output.getInt32(i, 0);
        int32_t _l_discount6 = tbl_Filter_TD_2924_output.getInt32(i, 1);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_1557_output.setInt32(i, 0, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_1557_output.setInt32(i, 1, _l_discount134);
    }
    tbl_Project_TD_1557_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1557_output #Row: " << tbl_Project_TD_1557_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0444(Table &tbl_Project_TD_1557_output, Table &tbl_Aggregate_TD_0444_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(sum((l_extendedprice#117 * l_discount#134)) AS revenue#1497L)
    // Input: ListBuffer(l_extendedprice#117, l_discount#134)
    // Output: ListBuffer(revenue#1497L)
    int64_t sum_0 = 0;
    int nrow1 = tbl_Project_TD_1557_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_extendedprice117 = tbl_Project_TD_1557_output.getInt32(i, 0);
        int32_t _l_discount134 = tbl_Project_TD_1557_output.getInt32(i, 1);
        int64_t _revenue1497L_sum_0 = (_l_extendedprice117 * _l_discount134);
        sum_0 += _revenue1497L_sum_0;
    }
    int r = 0;
    int64_t _revenue1497L = sum_0;
    tbl_Aggregate_TD_0444_output.setInt64(r++, 0, _revenue1497L);
    tbl_Aggregate_TD_0444_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0444_output #Row: " << tbl_Aggregate_TD_0444_output.getNumRow() << std::endl;
}

