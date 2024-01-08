#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5361(Table &tbl_SerializeFromObject_TD_6950_input, Table &tbl_Filter_TD_5361_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#1763) AND (n_name#1763 = IRAN)) AND isnotnull(cast(n_nationkey#1762L as int))))
    // Input: ListBuffer(n_nationkey#1762L, n_name#1763)
    // Output: ListBuffer(n_nationkey#1762L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6950_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1763 = tbl_SerializeFromObject_TD_6950_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _n_nationkey1762L = tbl_SerializeFromObject_TD_6950_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name1763.data()) == "IRAN")) && (1)) {
            int32_t _n_nationkey1762L_t = tbl_SerializeFromObject_TD_6950_input.getInt32(i, 0);
            tbl_Filter_TD_5361_output.setInt32(r, 0, _n_nationkey1762L_t);
            r++;
        }
    }
    tbl_Filter_TD_5361_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5361_output #Row: " << tbl_Filter_TD_5361_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5864(Table &tbl_SerializeFromObject_TD_6799_input, Table &tbl_Filter_TD_5864_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = IRAN)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6799_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_6799_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_6799_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "IRAN")) && (1)) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_6799_input.getInt32(i, 0);
            tbl_Filter_TD_5864_output.setInt32(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_5864_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5864_output #Row: " << tbl_Filter_TD_5864_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_2690(Table &tbl_JOIN_INNER_TD_3768_output, Table &tbl_Aggregate_TD_2690_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(cast(sum((ps_supplycost#478 * ps_availqty#1752)) as decimal(20,0)) as decimal(30,10))) * 0.0001000000), DecimalType(31,10), true) AS (sum((ps_supplycost * ps_availqty)) * 0.0001000000)#1748)
    // Input: ListBuffer(ps_availqty#1752, ps_supplycost#478)
    // Output: ListBuffer((sum((ps_supplycost * ps_availqty)) * 0.0001000000)#1748)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3768_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_availqty1752 = tbl_JOIN_INNER_TD_3768_output.getInt32(i, 0);
        int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_3768_output.getInt32(i, 1);
        int64_t _000010000001748_sum_0 = (_ps_supplycost478 * _ps_availqty1752);
        sum_0 += _000010000001748_sum_0;
    }
    int r = 0;
    int64_t _000010000001748 = (sum_0 * 0.0001000000);
    tbl_Aggregate_TD_2690_output.setInt64(r++, 0, _000010000001748);
    tbl_Aggregate_TD_2690_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2690_output #Row: " << tbl_Aggregate_TD_2690_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2102_consolidate(Table &tbl_Aggregate_TD_2102_output_preprocess, Table &tbl_Aggregate_TD_2102_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_2102_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _ps_partkey460 = tbl_Aggregate_TD_2102_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_2102_output.setInt32(r, 0, _ps_partkey460);
        int64_t _value1744L = tbl_Aggregate_TD_2102_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_2102_output.setInt64(r, 1, _value1744L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_2102_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_2102_output #Row: " << tbl_Aggregate_TD_2102_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1146(Table &tbl_Aggregate_TD_2102_output, Table &tbl_Aggregate_TD_2690_output, Table &tbl_Filter_TD_1146_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(value#1744L) AND (cast(cast(value#1744L as decimal(20,0)) as decimal(31,10)) > scalar-subquery#1745 [])))
    // Input: ListBuffer(ps_partkey#460, value#1744L)
    // Output: ListBuffer(ps_partkey#460, value#1744L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_2102_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _value1744L = tbl_Aggregate_TD_2102_output.getInt64(i, 1);
        if ((1) && (_value1744L > tbl_Aggregate_TD_2690_output.getInt64(0, 0))) {
            int32_t _ps_partkey460_t = tbl_Aggregate_TD_2102_output.getInt32(i, 0);
            tbl_Filter_TD_1146_output.setInt32(r, 0, _ps_partkey460_t);
            int64_t _value1744L_t = tbl_Aggregate_TD_2102_output.getInt64(i, 1);
            tbl_Filter_TD_1146_output.setInt64(r, 1, _value1744L_t);
            r++;
        }
    }
    tbl_Filter_TD_1146_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1146_output #Row: " << tbl_Filter_TD_1146_output.getNumRow() << std::endl;
}

void SW_Sort_TD_095(Table &tbl_Filter_TD_1146_output, Table &tbl_Sort_TD_095_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(value#1744L DESC NULLS LAST)
    // Input: ListBuffer(ps_partkey#460, value#1744L)
    // Output: ListBuffer(ps_partkey#460, value#1744L)
    struct SW_Sort_TD_095Row {
        int32_t _ps_partkey460;
        int64_t _value1744L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_095Row& a, const SW_Sort_TD_095Row& b) const { return 
 (a._value1744L > b._value1744L); 
}
    }SW_Sort_TD_095_order; 

    int nrow1 = tbl_Filter_TD_1146_output.getNumRow();
    std::vector<SW_Sort_TD_095Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey460 = tbl_Filter_TD_1146_output.getInt32(i, 0);
        int64_t _value1744L = tbl_Filter_TD_1146_output.getInt64(i, 1);
        SW_Sort_TD_095Row t = {_ps_partkey460,_value1744L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_095_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_095_output.setInt32(r, 0, it._ps_partkey460);
        tbl_Sort_TD_095_output.setInt64(r, 1, it._value1744L);
        if (r < 10) {
            std::cout << it._ps_partkey460 << " " << it._value1744L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_095_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_095_output #Row: " << tbl_Sort_TD_095_output.getNumRow() << std::endl;
}

