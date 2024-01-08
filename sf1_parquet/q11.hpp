#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5852(Table &tbl_SerializeFromObject_TD_6595_input, Table &tbl_Filter_TD_5852_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#1282) AND (n_name#1282 = IRAN)) AND isnotnull(cast(n_nationkey#1281L as int))))
    // Input: ListBuffer(n_nationkey#1281L, n_name#1282)
    // Output: ListBuffer(n_nationkey#1281L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6595_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1282 = tbl_SerializeFromObject_TD_6595_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _n_nationkey1281L = tbl_SerializeFromObject_TD_6595_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name1282.data()) == "IRAN")) && (1)) {
            int32_t _n_nationkey1281L_t = tbl_SerializeFromObject_TD_6595_input.getInt32(i, 0);
            tbl_Filter_TD_5852_output.setInt32(r, 0, _n_nationkey1281L_t);
            r++;
        }
    }
    tbl_Filter_TD_5852_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5852_output #Row: " << tbl_Filter_TD_5852_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5973(Table &tbl_SerializeFromObject_TD_687_input, Table &tbl_Filter_TD_5973_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = IRAN)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_687_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_687_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_687_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "IRAN")) && (1)) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_687_input.getInt32(i, 0);
            tbl_Filter_TD_5973_output.setInt32(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_5973_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5973_output #Row: " << tbl_Filter_TD_5973_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_2610(Table &tbl_JOIN_INNER_TD_3926_output, Table &tbl_Aggregate_TD_2610_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(cast(sum((ps_supplycost#478 * ps_availqty#1271)) as decimal(20,0)) as decimal(30,10))) * 0.0001000000), DecimalType(31,10), true) AS (sum((ps_supplycost * ps_availqty)) * 0.0001000000)#1267)
    // Input: ListBuffer(ps_availqty#1271, ps_supplycost#478)
    // Output: ListBuffer((sum((ps_supplycost * ps_availqty)) * 0.0001000000)#1267)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3926_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_availqty1271 = tbl_JOIN_INNER_TD_3926_output.getInt32(i, 0);
        int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_3926_output.getInt32(i, 1);
        int64_t _000010000001267_sum_0 = (_ps_supplycost478 * _ps_availqty1271);
        sum_0 += _000010000001267_sum_0;
    }
    int r = 0;
    int64_t _000010000001267 = (sum_0 * 0.0001000000);
    tbl_Aggregate_TD_2610_output.setInt64(r++, 0, _000010000001267);
    tbl_Aggregate_TD_2610_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2610_output #Row: " << tbl_Aggregate_TD_2610_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2976_consolidate(Table &tbl_Aggregate_TD_2976_output_preprocess, Table &tbl_Aggregate_TD_2976_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_2976_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _ps_partkey460 = tbl_Aggregate_TD_2976_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_2976_output.setInt32(r, 0, _ps_partkey460);
        int64_t _value1263L = tbl_Aggregate_TD_2976_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_2976_output.setInt64(r, 1, _value1263L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_2976_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_2976_output #Row: " << tbl_Aggregate_TD_2976_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1451(Table &tbl_Aggregate_TD_2976_output, Table &tbl_Aggregate_TD_2610_output, Table &tbl_Filter_TD_1451_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(value#1263L) AND (cast(cast(value#1263L as decimal(20,0)) as decimal(31,10)) > scalar-subquery#1264 [])))
    // Input: ListBuffer(ps_partkey#460, value#1263L)
    // Output: ListBuffer(ps_partkey#460, value#1263L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_2976_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _value1263L = tbl_Aggregate_TD_2976_output.getInt64(i, 1);
        if ((1) && (_value1263L > tbl_Aggregate_TD_2610_output.getInt64(0, 0))) {
            int32_t _ps_partkey460_t = tbl_Aggregate_TD_2976_output.getInt32(i, 0);
            tbl_Filter_TD_1451_output.setInt32(r, 0, _ps_partkey460_t);
            int64_t _value1263L_t = tbl_Aggregate_TD_2976_output.getInt64(i, 1);
            tbl_Filter_TD_1451_output.setInt64(r, 1, _value1263L_t);
            r++;
        }
    }
    tbl_Filter_TD_1451_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1451_output #Row: " << tbl_Filter_TD_1451_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0440(Table &tbl_Filter_TD_1451_output, Table &tbl_Sort_TD_0440_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(value#1263L DESC NULLS LAST)
    // Input: ListBuffer(ps_partkey#460, value#1263L)
    // Output: ListBuffer(ps_partkey#460, value#1263L)
    struct SW_Sort_TD_0440Row {
        int32_t _ps_partkey460;
        int64_t _value1263L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0440Row& a, const SW_Sort_TD_0440Row& b) const { return 
 (a._value1263L > b._value1263L); 
}
    }SW_Sort_TD_0440_order; 

    int nrow1 = tbl_Filter_TD_1451_output.getNumRow();
    std::vector<SW_Sort_TD_0440Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey460 = tbl_Filter_TD_1451_output.getInt32(i, 0);
        int64_t _value1263L = tbl_Filter_TD_1451_output.getInt64(i, 1);
        SW_Sort_TD_0440Row t = {_ps_partkey460,_value1263L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0440_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0440_output.setInt32(r, 0, it._ps_partkey460);
        tbl_Sort_TD_0440_output.setInt64(r, 1, it._value1263L);
        if (r < 10) {
            std::cout << it._ps_partkey460 << " " << it._value1263L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0440_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0440_output #Row: " << tbl_Sort_TD_0440_output.getNumRow() << std::endl;
}

