#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5136(Table &tbl_SerializeFromObject_TD_6713_input, Table &tbl_Filter_TD_5136_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#1746) AND (n_name#1746 = IRAN)) AND isnotnull(cast(n_nationkey#1745L as int))))
    // Input: ListBuffer(n_nationkey#1745L, n_name#1746)
    // Output: ListBuffer(n_nationkey#1745L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6713_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1746 = tbl_SerializeFromObject_TD_6713_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _n_nationkey1745L = tbl_SerializeFromObject_TD_6713_input.getInt64(i, 0);
        if (((1) && (std::string(_n_name1746.data()) == "IRAN")) && (1)) {
            int64_t _n_nationkey1745L_t = tbl_SerializeFromObject_TD_6713_input.getInt64(i, 0);
            tbl_Filter_TD_5136_output.setInt64(r, 0, _n_nationkey1745L_t);
            r++;
        }
    }
    tbl_Filter_TD_5136_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5136_output #Row: " << tbl_Filter_TD_5136_output.getNumRow() << std::endl;
}

void SW_Project_TD_5968(Table &tbl_SerializeFromObject_TD_7221_input, Table &tbl_Project_TD_5968_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#1738L as int) AS s_suppkey#498, cast(s_nationkey#1741L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#1738L, s_nationkey#1741L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_7221_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _s_suppkey1738L = tbl_SerializeFromObject_TD_7221_input.getInt64(i, 0);
        int64_t _s_nationkey1741L = tbl_SerializeFromObject_TD_7221_input.getInt64(i, 1);
        int32_t _s_suppkey498 = _s_suppkey1738L;
        tbl_Project_TD_5968_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey1741L;
        tbl_Project_TD_5968_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_5968_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5968_output #Row: " << tbl_Project_TD_5968_output.getNumRow() << std::endl;
}

void SW_Project_TD_5137(Table &tbl_SerializeFromObject_TD_7594_input, Table &tbl_Project_TD_5137_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_suppkey#1734L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#1736) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_suppkey#1734L, ps_availqty#1735, ps_supplycost#1736)
    // Output: ListBuffer(ps_suppkey#466, ps_availqty#1735, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_7594_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ps_suppkey1734L = tbl_SerializeFromObject_TD_7594_input.getInt64(i, 0);
        int32_t _ps_availqty1735 = tbl_SerializeFromObject_TD_7594_input.getInt32(i, 1);
        int32_t _ps_supplycost1736 = tbl_SerializeFromObject_TD_7594_input.getInt32(i, 2);
        int32_t _ps_suppkey466 = _ps_suppkey1734L;
        tbl_Project_TD_5137_output.setInt32(i, 0, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost1736 * 100.00);
        tbl_Project_TD_5137_output.setInt32(i, 2, _ps_supplycost478);
        tbl_Project_TD_5137_output.setInt32(i, 1, _ps_availqty1735);
    }
    tbl_Project_TD_5137_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5137_output #Row: " << tbl_Project_TD_5137_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5649(Table &tbl_SerializeFromObject_TD_6960_input, Table &tbl_Filter_TD_5649_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = IRAN)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6960_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_6960_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _n_nationkey296L = tbl_SerializeFromObject_TD_6960_input.getInt64(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "IRAN")) && (1)) {
            int64_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_6960_input.getInt64(i, 0);
            tbl_Filter_TD_5649_output.setInt64(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_5649_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5649_output #Row: " << tbl_Filter_TD_5649_output.getNumRow() << std::endl;
}

void SW_Project_TD_5634(Table &tbl_SerializeFromObject_TD_7832_input, Table &tbl_Project_TD_5634_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#484L, s_nationkey#487L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_7832_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _s_suppkey484L = tbl_SerializeFromObject_TD_7832_input.getInt64(i, 0);
        int64_t _s_nationkey487L = tbl_SerializeFromObject_TD_7832_input.getInt64(i, 1);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_5634_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_5634_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_5634_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5634_output #Row: " << tbl_Project_TD_5634_output.getNumRow() << std::endl;
}

void SW_Project_TD_552(Table &tbl_SerializeFromObject_TD_7619_input, Table &tbl_Project_TD_552_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_partkey#450L as int) AS ps_partkey#460, cast(ps_suppkey#451L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#453) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_availqty#452, ps_supplycost#453)
    // Output: ListBuffer(ps_partkey#460, ps_suppkey#466, ps_availqty#452, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_7619_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ps_partkey450L = tbl_SerializeFromObject_TD_7619_input.getInt64(i, 0);
        int64_t _ps_suppkey451L = tbl_SerializeFromObject_TD_7619_input.getInt64(i, 1);
        int32_t _ps_availqty452 = tbl_SerializeFromObject_TD_7619_input.getInt32(i, 2);
        int32_t _ps_supplycost453 = tbl_SerializeFromObject_TD_7619_input.getInt32(i, 3);
        int32_t _ps_partkey460 = _ps_partkey450L;
        tbl_Project_TD_552_output.setInt32(i, 0, _ps_partkey460);
        int32_t _ps_suppkey466 = _ps_suppkey451L;
        tbl_Project_TD_552_output.setInt32(i, 1, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost453 * 100.00);
        tbl_Project_TD_552_output.setInt32(i, 3, _ps_supplycost478);
        tbl_Project_TD_552_output.setInt32(i, 2, _ps_availqty452);
    }
    tbl_Project_TD_552_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_552_output #Row: " << tbl_Project_TD_552_output.getNumRow() << std::endl;
}

void SW_Project_TD_4131(Table &tbl_Filter_TD_5136_output, Table &tbl_Project_TD_4131_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#1745L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#1745L)
    // Output: ListBuffer(n_nationkey#304)
    int nrow1 = tbl_Filter_TD_5136_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey1745L = tbl_Filter_TD_5136_output.getInt64(i, 0);
        int32_t _n_nationkey304 = _n_nationkey1745L;
        tbl_Project_TD_4131_output.setInt32(i, 0, _n_nationkey304);
    }
    tbl_Project_TD_4131_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4131_output #Row: " << tbl_Project_TD_4131_output.getNumRow() << std::endl;
}


void SW_Project_TD_4969(Table &tbl_Filter_TD_5649_output, Table &tbl_Project_TD_4969_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L)
    // Output: ListBuffer(n_nationkey#304)
    int nrow1 = tbl_Filter_TD_5649_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey296L = tbl_Filter_TD_5649_output.getInt64(i, 0);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_4969_output.setInt32(i, 0, _n_nationkey304);
    }
    tbl_Project_TD_4969_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4969_output #Row: " << tbl_Project_TD_4969_output.getNumRow() << std::endl;
}




void SW_Aggregate_TD_2487(Table &tbl_JOIN_INNER_TD_3314_output, Table &tbl_Aggregate_TD_2487_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(cast(sum((ps_supplycost#478 * ps_availqty#1735)) as decimal(20,0)) as decimal(30,10))) * 0.0001000000), DecimalType(31,10), true) AS (sum((ps_supplycost * ps_availqty)) * 0.0001000000)#1731)
    // Input: ListBuffer(ps_availqty#1735, ps_supplycost#478)
    // Output: ListBuffer((sum((ps_supplycost * ps_availqty)) * 0.0001000000)#1731)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3314_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_availqty1735 = tbl_JOIN_INNER_TD_3314_output.getInt32(i, 0);
        int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_3314_output.getInt32(i, 1);
        int64_t _000010000001731_sum_0 = (_ps_supplycost478 * _ps_availqty1735);
        sum_0 += _000010000001731_sum_0;
    }
    int r = 0;
    int64_t _000010000001731 = (sum_0 * 0.0001000000);
    tbl_Aggregate_TD_2487_output.setInt64(r++, 0, _000010000001731);
    tbl_Aggregate_TD_2487_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2487_output #Row: " << tbl_Aggregate_TD_2487_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2487_consolidate(Table &tbl_Aggregate_TD_2487_output_preprocess, Table &tbl_Aggregate_TD_2487_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_2487_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _ps_partkey460 = tbl_Aggregate_TD_2487_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_2487_output.setInt32(r, 0, _ps_partkey460);
        int64_t _value1727L = tbl_Aggregate_TD_2487_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_2487_output.setInt64(r, 1, _value1727L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_2487_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_2487_output #Row: " << tbl_Aggregate_TD_2487_output.getNumRow() << std::endl;
}

void SW_Filter_TD_199(Table &tbl_Aggregate_TD_2487_output, Table &tbl_Aggregate_TD_2487_output, Table &tbl_Filter_TD_199_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(value#1727L) AND (cast(cast(value#1727L as decimal(20,0)) as decimal(31,10)) > scalar-subquery#1728 [])))
    // Input: ListBuffer(ps_partkey#460, value#1727L)
    // Output: ListBuffer(ps_partkey#460, value#1727L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_2487_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _value1727L = tbl_Aggregate_TD_2487_output.getInt64(i, 1);
        if ((1) && (_value1727L > tbl_Aggregate_TD_2487_output.getInt64(0, 0))) {
            int32_t _ps_partkey460_t = tbl_Aggregate_TD_2487_output.getInt32(i, 0);
            tbl_Filter_TD_199_output.setInt32(r, 0, _ps_partkey460_t);
            int64_t _value1727L_t = tbl_Aggregate_TD_2487_output.getInt64(i, 1);
            tbl_Filter_TD_199_output.setInt64(r, 1, _value1727L_t);
            r++;
        }
    }
    tbl_Filter_TD_199_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_199_output #Row: " << tbl_Filter_TD_199_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0147(Table &tbl_Filter_TD_199_output, Table &tbl_Sort_TD_0147_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(value#1727L DESC NULLS LAST)
    // Input: ListBuffer(ps_partkey#460, value#1727L)
    // Output: ListBuffer(ps_partkey#460, value#1727L)
    struct SW_Sort_TD_0147Row {
        int32_t _ps_partkey460;
        int64_t _value1727L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0147Row& a, const SW_Sort_TD_0147Row& b) const { return 
 (a._value1727L > b._value1727L); 
}
    }SW_Sort_TD_0147_order; 

    int nrow1 = tbl_Filter_TD_199_output.getNumRow();
    std::vector<SW_Sort_TD_0147Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey460 = tbl_Filter_TD_199_output.getInt32(i, 0);
        int64_t _value1727L = tbl_Filter_TD_199_output.getInt64(i, 1);
        SW_Sort_TD_0147Row t = {_ps_partkey460,_value1727L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0147_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0147_output.setInt32(r, 0, it._ps_partkey460);
        tbl_Sort_TD_0147_output.setInt64(r, 1, it._value1727L);
        if (r < 10) {
            std::cout << it._ps_partkey460 << " " << it._value1727L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0147_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0147_output #Row: " << tbl_Sort_TD_0147_output.getNumRow() << std::endl;
}

