#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6720(Table &tbl_SerializeFromObject_TD_798_input, Table &tbl_Filter_TD_6720_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(o_orderdate#332) AND ((cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) >= 19940801) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) < 19941101))) AND isnotnull(cast(o_custkey#325L as int))) AND isnotnull(cast(o_orderkey#324L as int))))
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#324L, o_custkey#325L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_798_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate332 = tbl_SerializeFromObject_TD_798_input.getInt32(i, 2);
        int64_t _o_custkey325L = tbl_SerializeFromObject_TD_798_input.getInt64(i, 1);
        int64_t _o_orderkey324L = tbl_SerializeFromObject_TD_798_input.getInt64(i, 0);
        if ((((1) && ((_o_orderdate332 >= 19940801) && (_o_orderdate332 < 19941101))) && (1)) && (1)) {
            int64_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_798_input.getInt64(i, 0);
            tbl_Filter_TD_6720_output.setInt64(r, 0, _o_orderkey324L_t);
            int64_t _o_custkey325L_t = tbl_SerializeFromObject_TD_798_input.getInt64(i, 1);
            tbl_Filter_TD_6720_output.setInt64(r, 1, _o_custkey325L_t);
            r++;
        }
    }
    tbl_Filter_TD_6720_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6720_output #Row: " << tbl_Filter_TD_6720_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5433(Table &tbl_SerializeFromObject_TD_6108_input, Table &tbl_Filter_TD_5433_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_returnflag#8) AND (ascii(l_returnflag#8) = 82)) AND isnotnull(cast(l_orderkey#0L as int))))
    // Input: ListBuffer(l_orderkey#0L, l_extendedprice#5, l_discount#6, l_returnflag#8)
    // Output: ListBuffer(l_orderkey#0L, l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6108_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_returnflag8 = tbl_SerializeFromObject_TD_6108_input.getInt32(i, 3);
        int32_t _l_orderkey0L = tbl_SerializeFromObject_TD_6108_input.getInt32(i, 0);
        if (((1) && (_l_returnflag8 == 82)) && (1)) {
            int32_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_6108_input.getInt32(i, 0);
            tbl_Filter_TD_5433_output.setInt32(r, 0, _l_orderkey0L_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_6108_input.getInt32(i, 1);
            tbl_Filter_TD_5433_output.setInt32(r, 1, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_6108_input.getInt32(i, 2);
            tbl_Filter_TD_5433_output.setInt32(r, 2, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_5433_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5433_output #Row: " << tbl_Filter_TD_5433_output.getNumRow() << std::endl;
}

void SW_Project_TD_5845(Table &tbl_Filter_TD_6720_output, Table &tbl_Project_TD_5845_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342, cast(o_custkey#325L as int) AS o_custkey#352)
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L)
    // Output: ListBuffer(o_orderkey#342, o_custkey#352)
    int nrow1 = tbl_Filter_TD_6720_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderkey324L = tbl_Filter_TD_6720_output.getInt32(i, 0);
        int32_t _o_custkey325L = tbl_Filter_TD_6720_output.getInt32(i, 1);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_5845_output.setInt32(i, 0, _o_orderkey342);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_5845_output.setInt32(i, 1, _o_custkey352);
    }
    tbl_Project_TD_5845_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5845_output #Row: " << tbl_Project_TD_5845_output.getNumRow() << std::endl;
}

void SW_Project_TD_5231(Table &tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute, Table &tbl_Project_TD_5231_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(c_custkey#253L as int) AS c_custkey#269, cast(c_nationkey#256L as int) AS c_nationkey#278, cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) AS c_acctbal#287)
    // Input: ListBuffer(c_custkey#253L, c_name#254, c_nationkey#256L, c_acctbal#258)
    // Output: ListBuffer(c_custkey#269, c_name#254, c_nationkey#278, c_acctbal#287)
    int nrow1 = tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_custkey253L = tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254 = tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _c_nationkey256L = tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.getInt32(i, 2);
        int32_t _c_acctbal258 = tbl_SerializeFromObject_TD_7497_input_stringRowIDSubstitute.getInt32(i, 3);
        int32_t _c_custkey269 = _c_custkey253L;
        tbl_Project_TD_5231_output.setInt32(i, 0, _c_custkey269);
        int32_t _c_nationkey278 = _c_nationkey256L;
        tbl_Project_TD_5231_output.setInt32(i, 2, _c_nationkey278);
        int32_t _c_acctbal287 = (_c_acctbal258 * 100.00);
        tbl_Project_TD_5231_output.setInt32(i, 3, _c_acctbal287);
        tbl_Project_TD_5231_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _c_name254);
    }
    tbl_Project_TD_5231_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5231_output #Row: " << tbl_Project_TD_5231_output.getNumRow() << std::endl;
}

void SW_Project_TD_4725(Table &tbl_Filter_TD_5433_output, Table &tbl_Project_TD_4725_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_orderkey#0L, l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_orderkey#32, l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_Filter_TD_5433_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey0L = tbl_Filter_TD_5433_output.getInt32(i, 0);
        int32_t _l_extendedprice5 = tbl_Filter_TD_5433_output.getInt32(i, 1);
        int32_t _l_discount6 = tbl_Filter_TD_5433_output.getInt32(i, 2);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_4725_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_4725_output.setInt32(i, 1, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_4725_output.setInt32(i, 2, _l_discount134);
    }
    tbl_Project_TD_4725_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4725_output #Row: " << tbl_Project_TD_4725_output.getNumRow() << std::endl;
}


void SW_Project_TD_3656(Table &tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute, Table &tbl_Project_TD_3656_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#304, n_name#297)
    int nrow1 = tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5681_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_3656_output.setInt32(i, 0, _n_nationkey304);
        tbl_Project_TD_3656_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _n_name297);
    }
    tbl_Project_TD_3656_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3656_output #Row: " << tbl_Project_TD_3656_output.getNumRow() << std::endl;
}



struct SW_Aggregate_TD_1904_key {
    int32_t _c_custkey269;
    std::string _c_name254;
    int32_t _c_acctbal287;
    std::string _n_name297;
    bool operator==(const SW_Aggregate_TD_1904_key& other) const { return (_c_custkey269 == other._c_custkey269) && (_c_name254 == other._c_name254) && (_c_acctbal287 == other._c_acctbal287) && (_n_name297 == other._n_name297); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1904_key> {
    std::size_t operator() (const SW_Aggregate_TD_1904_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_custkey269)) + (hash<string>()(k._c_name254)) + (hash<int32_t>()(k._c_acctbal287)) + (hash<string>()(k._n_name297));
    }
};
}
struct SW_Aggregate_TD_1904_payload {
    int64_t _revenue1276L_sum_0;
};
void SW_Aggregate_TD_1904(Table &tbl_JOIN_INNER_TD_2522_output, Table &tbl_SerializeFromObject_TD_7497_input, Table &tbl_SerializeFromObject_TD_5681_input, Table &tbl_Aggregate_TD_1904_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_custkey#269, c_name#254, c_acctbal#287, n_name#297, sum((l_extendedprice#117 * (100 - l_discount#134))) AS revenue#1276L)
    // Input: ListBuffer(c_custkey#269, c_name#254, c_acctbal#287, l_extendedprice#117, l_discount#134, n_name#297)
    // Output: ListBuffer(c_custkey#269, c_name#254, revenue#1276L, c_acctbal#287, n_name#297)
    std::unordered_map<SW_Aggregate_TD_1904_key, SW_Aggregate_TD_1904_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2522_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_custkey269 = tbl_JOIN_INNER_TD_2522_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254 = tbl_SerializeFromObject_TD_5681_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_2522_output.getInt32(i, 1), 1);
        int32_t _c_acctbal287 = tbl_JOIN_INNER_TD_2522_output.getInt32(i, 2);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_2522_output.getInt32(i, 3);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_2522_output.getInt32(i, 4);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5681_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_2522_output.getInt32(i, 5), 1);
        SW_Aggregate_TD_1904_key k{_c_custkey269, std::string(_c_name254.data()), _c_acctbal287, std::string(_n_name297.data())};
        int64_t _revenue1276L_sum_0 = (_l_extendedprice117 * (100 - _l_discount134));
        SW_Aggregate_TD_1904_payload p{_revenue1276L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._revenue1276L_sum_0 + _revenue1276L_sum_0;
            p._revenue1276L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_1904_output.setInt32(r, 0, (it.first)._c_custkey269);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254{};
        memcpy(_c_name254.data(), ((it.first)._c_name254).data(), ((it.first)._c_name254).length());
        tbl_Aggregate_TD_1904_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 1, _c_name254);
        tbl_Aggregate_TD_1904_output.setInt32(r, 3, (it.first)._c_acctbal287);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297{};
        memcpy(_n_name297.data(), ((it.first)._n_name297).data(), ((it.first)._n_name297).length());
        tbl_Aggregate_TD_1904_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 4, _n_name297);
        int64_t _revenue1276L = (it.second)._revenue1276L_sum_0;
        tbl_Aggregate_TD_1904_output.setInt64(r, 2, _revenue1276L);
        ++r;
    }
    tbl_Aggregate_TD_1904_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1904_output #Row: " << tbl_Aggregate_TD_1904_output.getNumRow() << std::endl;
}

void SW_Sort_TD_085(Table &tbl_Aggregate_TD_1904_output, Table &tbl_Sort_TD_085_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(revenue#1276L DESC NULLS LAST)
    // Input: ListBuffer(c_custkey#269, c_name#254, revenue#1276L, c_acctbal#287, n_name#297)
    // Output: ListBuffer(c_custkey#269, c_name#254, revenue#1276L, c_acctbal#287, n_name#297)
    struct SW_Sort_TD_085Row {
        int32_t _c_custkey269;
        std::string _c_name254;
        int64_t _revenue1276L;
        int32_t _c_acctbal287;
        std::string _n_name297;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_085Row& a, const SW_Sort_TD_085Row& b) const { return 
 (a._revenue1276L > b._revenue1276L); 
}
    }SW_Sort_TD_085_order; 

    int nrow1 = tbl_Aggregate_TD_1904_output.getNumRow();
    std::vector<SW_Sort_TD_085Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_custkey269 = tbl_Aggregate_TD_1904_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254 = tbl_Aggregate_TD_1904_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 1);
        int64_t _revenue1276L = tbl_Aggregate_TD_1904_output.getInt64(i, 2);
        int32_t _c_acctbal287 = tbl_Aggregate_TD_1904_output.getInt32(i, 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_Aggregate_TD_1904_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 4);
        SW_Sort_TD_085Row t = {_c_custkey269,std::string(_c_name254.data()),_revenue1276L,_c_acctbal287,std::string(_n_name297.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_085_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_085_output.setInt32(r, 0, it._c_custkey269);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254{};
        memcpy(_c_name254.data(), (it._c_name254).data(), (it._c_name254).length());
        tbl_Sort_TD_085_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 1, _c_name254);
        tbl_Sort_TD_085_output.setInt64(r, 2, it._revenue1276L);
        tbl_Sort_TD_085_output.setInt32(r, 3, it._c_acctbal287);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297{};
        memcpy(_n_name297.data(), (it._n_name297).data(), (it._n_name297).length());
        tbl_Sort_TD_085_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 4, _n_name297);
        if (r < 10) {
            std::cout << it._c_custkey269 << " " << (it._c_name254).data() << " " << it._revenue1276L << " " << it._c_acctbal287 << " " << (it._n_name297).data() << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_085_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_085_output #Row: " << tbl_Sort_TD_085_output.getNumRow() << std::endl;
}

