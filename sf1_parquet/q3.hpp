#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5841(Table &tbl_SerializeFromObject_TD_6554_input, Table &tbl_Filter_TD_5841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_orderdate#332) AND ((cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) < 19950307) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) > 19950214))) AND (isnotnull(cast(o_custkey#325L as int)) AND isnotnull(cast(o_orderkey#324L as int)))))
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_shippriority#330, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#324L, o_custkey#325L, o_shippriority#330, o_orderdate#332)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6554_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate332 = tbl_SerializeFromObject_TD_6554_input.getInt32(i, 3);
        int32_t _o_custkey325L = tbl_SerializeFromObject_TD_6554_input.getInt32(i, 1);
        int32_t _o_orderkey324L = tbl_SerializeFromObject_TD_6554_input.getInt32(i, 0);
        if (((1) && ((_o_orderdate332 < 19950307) && (_o_orderdate332 > 19950214))) && ((1) && (1))) {
            int32_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_6554_input.getInt32(i, 0);
            tbl_Filter_TD_5841_output.setInt32(r, 0, _o_orderkey324L_t);
            int32_t _o_custkey325L_t = tbl_SerializeFromObject_TD_6554_input.getInt32(i, 1);
            tbl_Filter_TD_5841_output.setInt32(r, 1, _o_custkey325L_t);
            int32_t _o_shippriority330_t = tbl_SerializeFromObject_TD_6554_input.getInt32(i, 2);
            tbl_Filter_TD_5841_output.setInt32(r, 2, _o_shippriority330_t);
            int32_t _o_orderdate332_t = tbl_SerializeFromObject_TD_6554_input.getInt32(i, 3);
            tbl_Filter_TD_5841_output.setInt32(r, 3, _o_orderdate332_t);
            r++;
        }
    }
    tbl_Filter_TD_5841_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5841_output #Row: " << tbl_Filter_TD_5841_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4987(Table &tbl_SerializeFromObject_TD_5992_input, Table &tbl_Filter_TD_4987_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_shipdate#15) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) > 19950307)) AND isnotnull(cast(l_orderkey#0L as int))))
    // Input: ListBuffer(l_orderkey#0L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    // Output: ListBuffer(l_orderkey#0L, l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5992_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_5992_input.getInt32(i, 3);
        int32_t _l_orderkey0L = tbl_SerializeFromObject_TD_5992_input.getInt32(i, 0);
        if (((1) && (_l_shipdate15 > 19950307)) && (1)) {
            int32_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_5992_input.getInt32(i, 0);
            tbl_Filter_TD_4987_output.setInt32(r, 0, _l_orderkey0L_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_5992_input.getInt32(i, 1);
            tbl_Filter_TD_4987_output.setInt32(r, 1, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_5992_input.getInt32(i, 2);
            tbl_Filter_TD_4987_output.setInt32(r, 2, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_4987_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4987_output #Row: " << tbl_Filter_TD_4987_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_1417_consolidate(Table &tbl_Aggregate_TD_1417_output_preprocess, Table &tbl_Aggregate_TD_1417_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_1417_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _l_orderkey32 = tbl_Aggregate_TD_1417_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_1417_output.setInt32(r, 0, _l_orderkey32);
        int64_t _revenue1376L = tbl_Aggregate_TD_1417_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_1417_output.setInt64(r, 1, _revenue1376L);
        int32_t _o_orderdate382 = tbl_Aggregate_TD_1417_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_1417_output.setInt32(r, 2, _o_orderdate382);
        int32_t _o_shippriority330 = tbl_Aggregate_TD_1417_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_1417_output.setInt32(r, 3, _o_shippriority330);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_1417_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_1417_output #Row: " << tbl_Aggregate_TD_1417_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0768(Table &tbl_Aggregate_TD_1417_output, Table &tbl_Sort_TD_0768_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(revenue#1376L DESC NULLS LAST, o_orderdate#382 ASC NULLS FIRST)
    // Input: ListBuffer(l_orderkey#32, revenue#1376L, o_orderdate#382, o_shippriority#330)
    // Output: ListBuffer(l_orderkey#32, revenue#1376L, o_orderdate#382, o_shippriority#330)
    struct SW_Sort_TD_0768Row {
        int32_t _l_orderkey32;
        int64_t _revenue1376L;
        int32_t _o_orderdate382;
        int32_t _o_shippriority330;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0768Row& a, const SW_Sort_TD_0768Row& b) const { return 
 (a._revenue1376L > b._revenue1376L) || 
 ((a._revenue1376L == b._revenue1376L) && (a._o_orderdate382 < b._o_orderdate382)); 
}
    }SW_Sort_TD_0768_order; 

    int nrow1 = tbl_Aggregate_TD_1417_output.getNumRow();
    std::vector<SW_Sort_TD_0768Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey32 = tbl_Aggregate_TD_1417_output.getInt32(i, 0);
        int64_t _revenue1376L = tbl_Aggregate_TD_1417_output.getInt64(i, 1);
        int32_t _o_orderdate382 = tbl_Aggregate_TD_1417_output.getInt32(i, 2);
        int32_t _o_shippriority330 = tbl_Aggregate_TD_1417_output.getInt32(i, 3);
        SW_Sort_TD_0768Row t = {_l_orderkey32,_revenue1376L,_o_orderdate382,_o_shippriority330};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0768_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0768_output.setInt32(r, 0, it._l_orderkey32);
        tbl_Sort_TD_0768_output.setInt64(r, 1, it._revenue1376L);
        tbl_Sort_TD_0768_output.setInt32(r, 2, it._o_orderdate382);
        tbl_Sort_TD_0768_output.setInt32(r, 3, it._o_shippriority330);
        if (r < 10) {
            std::cout << it._l_orderkey32 << " " << it._revenue1376L << " " << it._o_orderdate382 << " " << it._o_shippriority330 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0768_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0768_output #Row: " << tbl_Sort_TD_0768_output.getNumRow() << std::endl;
}

