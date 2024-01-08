#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5222(Table &tbl_SerializeFromObject_TD_6749_input, Table &tbl_Filter_TD_5222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_orderdate#332) AND ((cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) < 19950307) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) > 19950214))) AND (isnotnull(cast(o_custkey#325L as int)) AND isnotnull(cast(o_orderkey#324L as int)))))
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_shippriority#330, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#324L, o_custkey#325L, o_shippriority#330, o_orderdate#332)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6749_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _o_orderdate332 = tbl_SerializeFromObject_TD_6749_input.getInt32(i, 3);
        int64_t _o_custkey325L = tbl_SerializeFromObject_TD_6749_input.getInt64(i, 1);
        int64_t _o_orderkey324L = tbl_SerializeFromObject_TD_6749_input.getInt64(i, 0);
        if (((1) && ((_o_orderdate332 < 19950307) && (_o_orderdate332 > 19950214))) && ((1) && (1))) {
            int64_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_6749_input.getInt64(i, 0);
            tbl_Filter_TD_5222_output.setInt64(r, 0, _o_orderkey324L_t);
            int64_t _o_custkey325L_t = tbl_SerializeFromObject_TD_6749_input.getInt64(i, 1);
            tbl_Filter_TD_5222_output.setInt64(r, 1, _o_custkey325L_t);
            int32_t _o_shippriority330_t = tbl_SerializeFromObject_TD_6749_input.getInt32(i, 2);
            tbl_Filter_TD_5222_output.setInt32(r, 2, _o_shippriority330_t);
            // Unsupported column typeDateType default to IntegerType
            int32_t _o_orderdate332_t = tbl_SerializeFromObject_TD_6749_input.getInt32(i, 3);
            tbl_Filter_TD_5222_output.setInt32(r, 3, _o_orderdate332_t);
            r++;
        }
    }
    tbl_Filter_TD_5222_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5222_output #Row: " << tbl_Filter_TD_5222_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5559(Table &tbl_SerializeFromObject_TD_6882_input, Table &tbl_Filter_TD_5559_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(c_mktsegment#260) AND (c_mktsegment#260 = MACHINERY)) AND isnotnull(cast(c_custkey#253L as int))))
    // Input: ListBuffer(c_custkey#253L, c_mktsegment#260)
    // Output: ListBuffer(c_custkey#253L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6882_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_mktsegment260 = tbl_SerializeFromObject_TD_6882_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _c_custkey253L = tbl_SerializeFromObject_TD_6882_input.getInt64(i, 0);
        if (((1) && (std::string(_c_mktsegment260.data()) == "MACHINERY")) && (1)) {
            int64_t _c_custkey253L_t = tbl_SerializeFromObject_TD_6882_input.getInt64(i, 0);
            tbl_Filter_TD_5559_output.setInt64(r, 0, _c_custkey253L_t);
            r++;
        }
    }
    tbl_Filter_TD_5559_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5559_output #Row: " << tbl_Filter_TD_5559_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4861(Table &tbl_SerializeFromObject_TD_5185_input, Table &tbl_Filter_TD_4861_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_shipdate#15) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) > 19950307)) AND isnotnull(cast(l_orderkey#0L as int))))
    // Input: ListBuffer(l_orderkey#0L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    // Output: ListBuffer(l_orderkey#0L, l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5185_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_5185_input.getInt32(i, 3);
        int64_t _l_orderkey0L = tbl_SerializeFromObject_TD_5185_input.getInt64(i, 0);
        if (((1) && (_l_shipdate15 > 19950307)) && (1)) {
            int64_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_5185_input.getInt64(i, 0);
            tbl_Filter_TD_4861_output.setInt64(r, 0, _l_orderkey0L_t);
            // Unsupported column typeDecimalType(12,2) default to IntegerType
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_5185_input.getInt32(i, 1);
            tbl_Filter_TD_4861_output.setInt32(r, 1, _l_extendedprice5_t);
            // Unsupported column typeDecimalType(12,2) default to IntegerType
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_5185_input.getInt32(i, 2);
            tbl_Filter_TD_4861_output.setInt32(r, 2, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_4861_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4861_output #Row: " << tbl_Filter_TD_4861_output.getNumRow() << std::endl;
}

void SW_Project_TD_4946(Table &tbl_Filter_TD_5222_output, Table &tbl_Project_TD_4946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342, cast(o_custkey#325L as int) AS o_custkey#352, cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) AS o_orderdate#382)
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_shippriority#330, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#342, o_custkey#352, o_shippriority#330, o_orderdate#382)
    int nrow1 = tbl_Filter_TD_5222_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _o_orderkey324L = tbl_Filter_TD_5222_output.getInt64(i, 0);
        int64_t _o_custkey325L = tbl_Filter_TD_5222_output.getInt64(i, 1);
        int32_t _o_shippriority330 = tbl_Filter_TD_5222_output.getInt32(i, 2);
        // Unsupported input Type
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_4946_output.setInt32(i, 0, _o_orderkey342);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_4946_output.setInt32(i, 1, _o_custkey352);
        int32_t _o_orderdate382 = _o_orderdate332;
        tbl_Project_TD_4946_output.setInt32(i, 3, _o_orderdate382);
        tbl_Project_TD_4946_output.setInt32(i, 2, _o_shippriority330);
    }
    tbl_Project_TD_4946_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4946_output #Row: " << tbl_Project_TD_4946_output.getNumRow() << std::endl;
}

void SW_Project_TD_421(Table &tbl_Filter_TD_5559_output, Table &tbl_Project_TD_421_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(c_custkey#253L as int) AS c_custkey#269)
    // Input: ListBuffer(c_custkey#253L)
    // Output: ListBuffer(c_custkey#269)
    int nrow1 = tbl_Filter_TD_5559_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _c_custkey253L = tbl_Filter_TD_5559_output.getInt64(i, 0);
        int32_t _c_custkey269 = _c_custkey253L;
        tbl_Project_TD_421_output.setInt32(i, 0, _c_custkey269);
    }
    tbl_Project_TD_421_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_421_output #Row: " << tbl_Project_TD_421_output.getNumRow() << std::endl;
}

void SW_Project_TD_3351(Table &tbl_Filter_TD_4861_output, Table &tbl_Project_TD_3351_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_orderkey#0L, l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_orderkey#32, l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_Filter_TD_4861_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_orderkey0L = tbl_Filter_TD_4861_output.getInt64(i, 0);
        // Unsupported input Type
        // Unsupported input Type
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_3351_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_3351_output.setInt32(i, 1, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_3351_output.setInt32(i, 2, _l_discount134);
    }
    tbl_Project_TD_3351_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3351_output #Row: " << tbl_Project_TD_3351_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_1967_consolidate(Table &tbl_Aggregate_TD_1967_output_preprocess, Table &tbl_Aggregate_TD_1967_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_1967_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _l_orderkey32 = tbl_Aggregate_TD_1967_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_1967_output.setInt32(r, 0, _l_orderkey32);
        int64_t _revenue1066L = tbl_Aggregate_TD_1967_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_1967_output.setInt64(r, 1, _revenue1066L);
        int32_t _o_orderdate382 = tbl_Aggregate_TD_1967_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_1967_output.setInt32(r, 2, _o_orderdate382);
        int32_t _o_shippriority330 = tbl_Aggregate_TD_1967_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_1967_output.setInt32(r, 3, _o_shippriority330);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_1967_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_1967_output #Row: " << tbl_Aggregate_TD_1967_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0412(Table &tbl_Aggregate_TD_1967_output, Table &tbl_Sort_TD_0412_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(revenue#1066L DESC NULLS LAST, o_orderdate#382 ASC NULLS FIRST)
    // Input: ListBuffer(l_orderkey#32, revenue#1066L, o_orderdate#382, o_shippriority#330)
    // Output: ListBuffer(l_orderkey#32, revenue#1066L, o_orderdate#382, o_shippriority#330)
    struct SW_Sort_TD_0412Row {
        int32_t _l_orderkey32;
        int64_t _revenue1066L;
        int32_t _o_orderdate382;
        int32_t _o_shippriority330;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0412Row& a, const SW_Sort_TD_0412Row& b) const { return 
 (a._revenue1066L > b._revenue1066L) || 
 ((a._revenue1066L == b._revenue1066L) && (a._o_orderdate382 < b._o_orderdate382)); 
}
    }SW_Sort_TD_0412_order; 

    int nrow1 = tbl_Aggregate_TD_1967_output.getNumRow();
    std::vector<SW_Sort_TD_0412Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey32 = tbl_Aggregate_TD_1967_output.getInt32(i, 0);
        int64_t _revenue1066L = tbl_Aggregate_TD_1967_output.getInt64(i, 1);
        int32_t _o_orderdate382 = tbl_Aggregate_TD_1967_output.getInt32(i, 2);
        int32_t _o_shippriority330 = tbl_Aggregate_TD_1967_output.getInt32(i, 3);
        SW_Sort_TD_0412Row t = {_l_orderkey32,_revenue1066L,_o_orderdate382,_o_shippriority330};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0412_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0412_output.setInt32(r, 0, it._l_orderkey32);
        tbl_Sort_TD_0412_output.setInt64(r, 1, it._revenue1066L);
        tbl_Sort_TD_0412_output.setInt32(r, 2, it._o_orderdate382);
        tbl_Sort_TD_0412_output.setInt32(r, 3, it._o_shippriority330);
        if (r < 10) {
            std::cout << it._l_orderkey32 << " " << it._revenue1066L << " " << it._o_orderdate382 << " " << it._o_shippriority330 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0412_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0412_output #Row: " << tbl_Sort_TD_0412_output.getNumRow() << std::endl;
}

