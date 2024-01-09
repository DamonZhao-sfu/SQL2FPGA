#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_3589(Table &tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute, Table &tbl_Filter_TD_3589_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(l_shipdate#15) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) <= 19980803)))
    // Input: ListBuffer(l_quantity#4, l_extendedprice#5, l_discount#6, l_tax#7, l_returnflag#8, l_linestatus#9, l_shipdate#15)
    // Output: ListBuffer(l_quantity#4, l_extendedprice#5, l_discount#6, l_tax#7, l_returnflag#8, l_linestatus#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute.getInt32(i, 6);
        if ((1) && (_l_shipdate15 <= 19980803)) {
            int32_t _l_quantity4_t = tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute.getInt32(i, 0);
            tbl_Filter_TD_3589_output.setInt32(r, 0, _l_quantity4_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute.getInt32(i, 1);
            tbl_Filter_TD_3589_output.setInt32(r, 1, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute.getInt32(i, 2);
            tbl_Filter_TD_3589_output.setInt32(r, 2, _l_discount6_t);
            int32_t _l_tax7_t = tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute.getInt32(i, 3);
            tbl_Filter_TD_3589_output.setInt32(r, 3, _l_tax7_t);
            int32_t _l_returnflag8_t = tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute.getInt32(i, 4);
            tbl_Filter_TD_3589_output.setInt32(r, 4, _l_returnflag8_t);
            int32_t _l_linestatus9_t = tbl_SerializeFromObject_TD_414_input_stringRowIDSubstitute.getInt32(i, 5);
            tbl_Filter_TD_3589_output.setInt32(r, 5, _l_linestatus9_t);
            r++;
        }
    }
    tbl_Filter_TD_3589_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3589_output #Row: " << tbl_Filter_TD_3589_output.getNumRow() << std::endl;
}

void SW_Project_TD_2855(Table &tbl_Filter_TD_3589_output, Table &tbl_SerializeFromObject_TD_414_input, Table &tbl_Project_TD_2855_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Project
    // Operation: ListBuffer(cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) AS l_quantity#100, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134, cast(CheckOverflow((promote_precision(l_tax#7) * 100.00), DecimalType(16,2), true) as int) AS l_tax#151, ascii(substr(l_returnflag#8, 1, 1)) AS l_returnflag#168, ascii(substr(l_linestatus#9, 1, 1)) AS l_linestatus#185)
    // Input: ListBuffer(l_quantity#4, l_extendedprice#5, l_discount#6, l_tax#7, l_returnflag#8, l_linestatus#9)
    // Output: ListBuffer(l_quantity#100, l_extendedprice#117, l_discount#134, l_tax#151, l_returnflag#168, l_linestatus#185)
    int nrow1 = tbl_Filter_TD_3589_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_quantity4 = tbl_Filter_TD_3589_output.getInt32(i, 0);
        int32_t _l_extendedprice5 = tbl_Filter_TD_3589_output.getInt32(i, 1);
        int32_t _l_discount6 = tbl_Filter_TD_3589_output.getInt32(i, 2);
        int32_t _l_tax7 = tbl_Filter_TD_3589_output.getInt32(i, 3);
        int32_t _l_returnflag8 = tbl_Filter_TD_3589_output.getInt32(i, 4);
        int32_t _l_linestatus9 = tbl_Filter_TD_3589_output.getInt32(i, 5);
        int32_t _l_quantity100 = (_l_quantity4 * 100.00);
        tbl_Project_TD_2855_output.setInt32(i, 0, _l_quantity100);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_2855_output.setInt32(i, 1, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_2855_output.setInt32(i, 2, _l_discount134);
        int32_t _l_tax151 = (_l_tax7 * 100.00);
        tbl_Project_TD_2855_output.setInt32(i, 3, _l_tax151);
        int32_t _l_returnflag168 = std::string(_l_returnflag8.data()).substr(0, 1);
        tbl_Project_TD_2855_output.setInt32(i, 4, _l_returnflag168);
        int32_t _l_linestatus185 = std::string(_l_linestatus9.data()).substr(0, 1);
        tbl_Project_TD_2855_output.setInt32(i, 5, _l_linestatus185);
    }
    tbl_Project_TD_2855_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2855_output #Row: " << tbl_Project_TD_2855_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1264_consolidate(Table &tbl_Aggregate_TD_1264_output_preprocess, Table &tbl_Aggregate_TD_1264_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_1264_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _l_returnflag168 = tbl_Aggregate_TD_1264_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_1264_output.setInt32(r, 0, _l_returnflag168);
        int32_t _l_linestatus185 = tbl_Aggregate_TD_1264_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_1264_output.setInt32(r, 1, _l_linestatus185);
        int64_t _sum_qty1066L = tbl_Aggregate_TD_1264_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_1264_output.setInt64(r, 2, _sum_qty1066L);
        int64_t _sum_base_price1067L = tbl_Aggregate_TD_1264_output_preprocess.combineInt64(r, 9, 1);
        tbl_Aggregate_TD_1264_output.setInt64(r, 3, _sum_base_price1067L);
        int64_t _sum_disc_price1068L = tbl_Aggregate_TD_1264_output_preprocess.combineInt64(r, 10, 2);
        tbl_Aggregate_TD_1264_output.setInt64(r, 4, _sum_disc_price1068L);
        int64_t _sum_charge1069L = tbl_Aggregate_TD_1264_output_preprocess.combineInt64(r, 11, 3);
        tbl_Aggregate_TD_1264_output.setInt64(r, 5, _sum_charge1069L);
        int32_t _avg_qty1070 = tbl_Aggregate_TD_1264_output_preprocess.getInt32(r, 4);
        tbl_Aggregate_TD_1264_output.setInt32(r, 6, _avg_qty1070);
        int32_t _avg_price1071 = tbl_Aggregate_TD_1264_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_1264_output.setInt32(r, 7, _avg_price1071);
        int32_t _avg_disc1072 = tbl_Aggregate_TD_1264_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_1264_output.setInt32(r, 8, _avg_disc1072);
        int32_t _count_order1073L = tbl_Aggregate_TD_1264_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_1264_output.setInt32(r, 9, _count_order1073L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_1264_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_1264_output #Row: " << tbl_Aggregate_TD_1264_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0138(Table &tbl_Aggregate_TD_1264_output, Table &tbl_Sort_TD_0138_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(l_returnflag#168 ASC NULLS FIRST, l_linestatus#185 ASC NULLS FIRST)
    // Input: ListBuffer(l_returnflag#168, l_linestatus#185, sum_qty#1066L, sum_base_price#1067L, sum_disc_price#1068L, sum_charge#1069L, avg_qty#1070, avg_price#1071, avg_disc#1072, count_order#1073L)
    // Output: ListBuffer(l_returnflag#168, l_linestatus#185, sum_qty#1066L, sum_base_price#1067L, sum_disc_price#1068L, sum_charge#1069L, avg_qty#1070, avg_price#1071, avg_disc#1072, count_order#1073L)
    struct SW_Sort_TD_0138Row {
        int32_t _l_returnflag168;
        int32_t _l_linestatus185;
        int64_t _sum_qty1066L;
        int64_t _sum_base_price1067L;
        int64_t _sum_disc_price1068L;
        int64_t _sum_charge1069L;
        int32_t _avg_qty1070;
        int32_t _avg_price1071;
        int32_t _avg_disc1072;
        int64_t _count_order1073L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0138Row& a, const SW_Sort_TD_0138Row& b) const { return 
 (a._l_returnflag168 < b._l_returnflag168) || 
 ((a._l_returnflag168 == b._l_returnflag168) && (a._l_linestatus185 < b._l_linestatus185)); 
}
    }SW_Sort_TD_0138_order; 

    int nrow1 = tbl_Aggregate_TD_1264_output.getNumRow();
    std::vector<SW_Sort_TD_0138Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_returnflag168 = tbl_Aggregate_TD_1264_output.getInt32(i, 0);
        int32_t _l_linestatus185 = tbl_Aggregate_TD_1264_output.getInt32(i, 1);
        int64_t _sum_qty1066L = tbl_Aggregate_TD_1264_output.getInt64(i, 2);
        int64_t _sum_base_price1067L = tbl_Aggregate_TD_1264_output.getInt64(i, 3);
        int64_t _sum_disc_price1068L = tbl_Aggregate_TD_1264_output.getInt64(i, 4);
        int64_t _sum_charge1069L = tbl_Aggregate_TD_1264_output.getInt64(i, 5);
        int32_t _avg_qty1070 = tbl_Aggregate_TD_1264_output.getInt32(i, 6);
        int32_t _avg_price1071 = tbl_Aggregate_TD_1264_output.getInt32(i, 7);
        int32_t _avg_disc1072 = tbl_Aggregate_TD_1264_output.getInt32(i, 8);
        int64_t _count_order1073L = tbl_Aggregate_TD_1264_output.getInt64(i, 9);
        SW_Sort_TD_0138Row t = {_l_returnflag168,_l_linestatus185,_sum_qty1066L,_sum_base_price1067L,_sum_disc_price1068L,_sum_charge1069L,_avg_qty1070,_avg_price1071,_avg_disc1072,_count_order1073L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0138_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0138_output.setInt32(r, 0, it._l_returnflag168);
        tbl_Sort_TD_0138_output.setInt32(r, 1, it._l_linestatus185);
        tbl_Sort_TD_0138_output.setInt64(r, 2, it._sum_qty1066L);
        tbl_Sort_TD_0138_output.setInt64(r, 3, it._sum_base_price1067L);
        tbl_Sort_TD_0138_output.setInt64(r, 4, it._sum_disc_price1068L);
        tbl_Sort_TD_0138_output.setInt64(r, 5, it._sum_charge1069L);
        tbl_Sort_TD_0138_output.setInt32(r, 6, it._avg_qty1070);
        tbl_Sort_TD_0138_output.setInt32(r, 7, it._avg_price1071);
        tbl_Sort_TD_0138_output.setInt32(r, 8, it._avg_disc1072);
        tbl_Sort_TD_0138_output.setInt64(r, 9, it._count_order1073L);
        if (r < 10) {
            std::cout << it._l_returnflag168 << " " << it._l_linestatus185 << " " << it._sum_qty1066L << " " << it._sum_base_price1067L << " " << it._sum_disc_price1068L << " " << it._sum_charge1069L << " " << it._avg_qty1070 << " " << it._avg_price1071 << " " << it._avg_disc1072 << " " << it._count_order1073L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0138_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0138_output #Row: " << tbl_Sort_TD_0138_output.getNumRow() << std::endl;
}

