#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5490(Table &tbl_SerializeFromObject_TD_6405_input, Table &tbl_Filter_TD_5490_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#1763) AND (n_name#1763 = IRAN)) AND isnotnull(cast(n_nationkey#1762L as int))))
    // Input: ListBuffer(n_nationkey#1762L, n_name#1763)
    // Output: ListBuffer(n_nationkey#1762L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6405_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1763 = tbl_SerializeFromObject_TD_6405_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_nationkey1762L = tbl_SerializeFromObject_TD_6405_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name1763.data()) == "IRAN")) && (1)) {
            int32_t _n_nationkey1762L_t = tbl_SerializeFromObject_TD_6405_input.getInt32(i, 0);
            tbl_Filter_TD_5490_output.setInt32(r, 0, _n_nationkey1762L_t);
            r++;
        }
    }
    tbl_Filter_TD_5490_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5490_output #Row: " << tbl_Filter_TD_5490_output.getNumRow() << std::endl;
}

void SW_Project_TD_5277(Table &tbl_SerializeFromObject_TD_7559_input, Table &tbl_Project_TD_5277_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#1755L as int) AS s_suppkey#498, cast(s_nationkey#1758L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#1755L, s_nationkey#1758L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_7559_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey1755L = tbl_SerializeFromObject_TD_7559_input.getInt32(i, 0);
        int32_t _s_nationkey1758L = tbl_SerializeFromObject_TD_7559_input.getInt32(i, 1);
        int32_t _s_suppkey498 = _s_suppkey1755L;
        tbl_Project_TD_5277_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey1758L;
        tbl_Project_TD_5277_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_5277_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5277_output #Row: " << tbl_Project_TD_5277_output.getNumRow() << std::endl;
}

void SW_Project_TD_5970(Table &tbl_SerializeFromObject_TD_7852_input, Table &tbl_Project_TD_5970_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_suppkey#1751L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#1753) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_suppkey#1751L, ps_availqty#1752, ps_supplycost#1753)
    // Output: ListBuffer(ps_suppkey#466, ps_availqty#1752, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_7852_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_suppkey1751L = tbl_SerializeFromObject_TD_7852_input.getInt32(i, 0);
        int32_t _ps_availqty1752 = tbl_SerializeFromObject_TD_7852_input.getInt32(i, 1);
        int32_t _ps_supplycost1753 = tbl_SerializeFromObject_TD_7852_input.getInt32(i, 2);
        int32_t _ps_suppkey466 = _ps_suppkey1751L;
        tbl_Project_TD_5970_output.setInt32(i, 0, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost1753 * 100.00);
        tbl_Project_TD_5970_output.setInt32(i, 2, _ps_supplycost478);
        tbl_Project_TD_5970_output.setInt32(i, 1, _ps_availqty1752);
    }
    tbl_Project_TD_5970_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5970_output #Row: " << tbl_Project_TD_5970_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5128(Table &tbl_SerializeFromObject_TD_6928_input, Table &tbl_Filter_TD_5128_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = IRAN)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6928_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_6928_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _n_nationkey296L = tbl_SerializeFromObject_TD_6928_input.getInt64(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "IRAN")) && (1)) {
            int64_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_6928_input.getInt64(i, 0);
            tbl_Filter_TD_5128_output.setInt64(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_5128_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5128_output #Row: " << tbl_Filter_TD_5128_output.getNumRow() << std::endl;
}

void SW_Project_TD_5912(Table &tbl_SerializeFromObject_TD_7840_input, Table &tbl_Project_TD_5912_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#484L, s_nationkey#487L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_7840_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey484L = tbl_SerializeFromObject_TD_7840_input.getInt32(i, 0);
        int32_t _s_nationkey487L = tbl_SerializeFromObject_TD_7840_input.getInt32(i, 1);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_5912_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_5912_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_5912_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5912_output #Row: " << tbl_Project_TD_5912_output.getNumRow() << std::endl;
}

void SW_Project_TD_5264(Table &tbl_SerializeFromObject_TD_7305_input, Table &tbl_Project_TD_5264_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_partkey#450L as int) AS ps_partkey#460, cast(ps_suppkey#451L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#453) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_availqty#452, ps_supplycost#453)
    // Output: ListBuffer(ps_partkey#460, ps_suppkey#466, ps_availqty#452, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_7305_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey450L = tbl_SerializeFromObject_TD_7305_input.getInt32(i, 0);
        int32_t _ps_suppkey451L = tbl_SerializeFromObject_TD_7305_input.getInt32(i, 1);
        int32_t _ps_availqty452 = tbl_SerializeFromObject_TD_7305_input.getInt32(i, 2);
        int32_t _ps_supplycost453 = tbl_SerializeFromObject_TD_7305_input.getInt32(i, 3);
        int32_t _ps_partkey460 = _ps_partkey450L;
        tbl_Project_TD_5264_output.setInt32(i, 0, _ps_partkey460);
        int32_t _ps_suppkey466 = _ps_suppkey451L;
        tbl_Project_TD_5264_output.setInt32(i, 1, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost453 * 100.00);
        tbl_Project_TD_5264_output.setInt32(i, 3, _ps_supplycost478);
        tbl_Project_TD_5264_output.setInt32(i, 2, _ps_availqty452);
    }
    tbl_Project_TD_5264_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5264_output #Row: " << tbl_Project_TD_5264_output.getNumRow() << std::endl;
}

void SW_Project_TD_4299(Table &tbl_Filter_TD_5490_output, Table &tbl_Project_TD_4299_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#1762L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#1762L)
    // Output: ListBuffer(n_nationkey#304)
    int nrow1 = tbl_Filter_TD_5490_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey1762L = tbl_Filter_TD_5490_output.getInt32(i, 0);
        int32_t _n_nationkey304 = _n_nationkey1762L;
        tbl_Project_TD_4299_output.setInt32(i, 0, _n_nationkey304);
    }
    tbl_Project_TD_4299_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4299_output #Row: " << tbl_Project_TD_4299_output.getNumRow() << std::endl;
}


void SW_Project_TD_4219(Table &tbl_Filter_TD_5128_output, Table &tbl_Project_TD_4219_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L)
    // Output: ListBuffer(n_nationkey#304)
    int nrow1 = tbl_Filter_TD_5128_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_Filter_TD_5128_output.getInt32(i, 0);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_4219_output.setInt32(i, 0, _n_nationkey304);
    }
    tbl_Project_TD_4219_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4219_output #Row: " << tbl_Project_TD_4219_output.getNumRow() << std::endl;
}




void SW_Aggregate_TD_2286(Table &tbl_JOIN_INNER_TD_3566_output, Table &tbl_Aggregate_TD_2286_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(cast(sum((ps_supplycost#478 * ps_availqty#1752)) as decimal(20,0)) as decimal(30,10))) * 0.0001000000), DecimalType(31,10), true) AS (sum((ps_supplycost * ps_availqty)) * 0.0001000000)#1748)
    // Input: ListBuffer(ps_availqty#1752, ps_supplycost#478)
    // Output: ListBuffer((sum((ps_supplycost * ps_availqty)) * 0.0001000000)#1748)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3566_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_availqty1752 = tbl_JOIN_INNER_TD_3566_output.getInt32(i, 0);
        int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_3566_output.getInt32(i, 1);
        int64_t _000010000001748_sum_0 = (_ps_supplycost478 * _ps_availqty1752);
        sum_0 += _000010000001748_sum_0;
    }
    int r = 0;
    int64_t _000010000001748 = (sum_0 * 0.0001000000);
    tbl_Aggregate_TD_2286_output.setInt64(r++, 0, _000010000001748);
    tbl_Aggregate_TD_2286_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2286_output #Row: " << tbl_Aggregate_TD_2286_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2344_consolidate(Table &tbl_Aggregate_TD_2344_output_preprocess, Table &tbl_Aggregate_TD_2344_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_2344_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _ps_partkey460 = tbl_Aggregate_TD_2344_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_2344_output.setInt32(r, 0, _ps_partkey460);
        int64_t _value1744L = tbl_Aggregate_TD_2344_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_2344_output.setInt64(r, 1, _value1744L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_2344_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_2344_output #Row: " << tbl_Aggregate_TD_2344_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1569(Table &tbl_Aggregate_TD_2344_output, Table &tbl_Aggregate_TD_2286_output, Table &tbl_Filter_TD_1569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(value#1744L) AND (cast(cast(value#1744L as decimal(20,0)) as decimal(31,10)) > scalar-subquery#1745 [])))
    // Input: ListBuffer(ps_partkey#460, value#1744L)
    // Output: ListBuffer(ps_partkey#460, value#1744L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_2344_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _value1744L = tbl_Aggregate_TD_2344_output.getInt64(i, 1);
        if ((1) && (_value1744L > tbl_Aggregate_TD_2286_output.getInt64(0, 0))) {
            int32_t _ps_partkey460_t = tbl_Aggregate_TD_2344_output.getInt32(i, 0);
            tbl_Filter_TD_1569_output.setInt32(r, 0, _ps_partkey460_t);
            int64_t _value1744L_t = tbl_Aggregate_TD_2344_output.getInt64(i, 1);
            tbl_Filter_TD_1569_output.setInt64(r, 1, _value1744L_t);
            r++;
        }
    }
    tbl_Filter_TD_1569_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1569_output #Row: " << tbl_Filter_TD_1569_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0795(Table &tbl_Filter_TD_1569_output, Table &tbl_Sort_TD_0795_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(value#1744L DESC NULLS LAST)
    // Input: ListBuffer(ps_partkey#460, value#1744L)
    // Output: ListBuffer(ps_partkey#460, value#1744L)
    struct SW_Sort_TD_0795Row {
        int32_t _ps_partkey460;
        int64_t _value1744L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0795Row& a, const SW_Sort_TD_0795Row& b) const { return 
 (a._value1744L > b._value1744L); 
}
    }SW_Sort_TD_0795_order; 

    int nrow1 = tbl_Filter_TD_1569_output.getNumRow();
    std::vector<SW_Sort_TD_0795Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey460 = tbl_Filter_TD_1569_output.getInt32(i, 0);
        int64_t _value1744L = tbl_Filter_TD_1569_output.getInt64(i, 1);
        SW_Sort_TD_0795Row t = {_ps_partkey460,_value1744L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0795_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0795_output.setInt32(r, 0, it._ps_partkey460);
        tbl_Sort_TD_0795_output.setInt64(r, 1, it._value1744L);
        if (r < 10) {
            std::cout << it._ps_partkey460 << " " << it._value1744L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0795_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0795_output #Row: " << tbl_Sort_TD_0795_output.getNumRow() << std::endl;
}

