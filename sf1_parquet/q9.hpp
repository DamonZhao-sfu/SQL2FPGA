#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9870(Table &tbl_SerializeFromObject_TD_10937_input, Table &tbl_Filter_TD_9870_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_name#403) AND Contains(p_name#403, magenta)) AND isnotnull(cast(p_partkey#402L as int))))
    // Input: ListBuffer(p_partkey#402L, p_name#403)
    // Output: ListBuffer(p_partkey#402L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10937_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_name403 = tbl_SerializeFromObject_TD_10937_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _p_partkey402L = tbl_SerializeFromObject_TD_10937_input.getInt64(i, 0);
        if (((1) && (std::string(_p_name403.data()).find("magenta")!=std::string::npos)) && (1)) {
            int64_t _p_partkey402L_t = tbl_SerializeFromObject_TD_10937_input.getInt64(i, 0);
            tbl_Filter_TD_9870_output.setInt64(r, 0, _p_partkey402L_t);
            r++;
        }
    }
    tbl_Filter_TD_9870_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9870_output #Row: " << tbl_Filter_TD_9870_output.getNumRow() << std::endl;
}

void SW_Project_TD_8312(Table &tbl_SerializeFromObject_TD_1020_input, Table &tbl_Project_TD_8312_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(l_partkey#1L as int) AS l_partkey#49, cast(l_suppkey#2L as int) AS l_suppkey#66, cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) AS l_quantity#100, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_orderkey#0L, l_partkey#1L, l_suppkey#2L, l_quantity#4, l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_orderkey#32, l_partkey#49, l_suppkey#66, l_quantity#100, l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_SerializeFromObject_TD_1020_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey0L = tbl_SerializeFromObject_TD_1020_input.getInt32(i, 0);
        int32_t _l_partkey1L = tbl_SerializeFromObject_TD_1020_input.getInt32(i, 1);
        int32_t _l_suppkey2L = tbl_SerializeFromObject_TD_1020_input.getInt32(i, 2);
        int32_t _l_quantity4 = tbl_SerializeFromObject_TD_1020_input.getInt32(i, 3);
        int32_t _l_extendedprice5 = tbl_SerializeFromObject_TD_1020_input.getInt32(i, 4);
        int32_t _l_discount6 = tbl_SerializeFromObject_TD_1020_input.getInt32(i, 5);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_8312_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_partkey49 = _l_partkey1L;
        tbl_Project_TD_8312_output.setInt32(i, 1, _l_partkey49);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_8312_output.setInt32(i, 2, _l_suppkey66);
        int32_t _l_quantity100 = (_l_quantity4 * 100.00);
        tbl_Project_TD_8312_output.setInt32(i, 3, _l_quantity100);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_8312_output.setInt32(i, 4, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_8312_output.setInt32(i, 5, _l_discount134);
    }
    tbl_Project_TD_8312_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8312_output #Row: " << tbl_Project_TD_8312_output.getNumRow() << std::endl;
}

void SW_Project_TD_8184(Table &tbl_Filter_TD_9870_output, Table &tbl_Project_TD_8184_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(p_partkey#402L as int) AS p_partkey#420)
    // Input: ListBuffer(p_partkey#402L)
    // Output: ListBuffer(p_partkey#420)
    int nrow1 = tbl_Filter_TD_9870_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_partkey402L = tbl_Filter_TD_9870_output.getInt32(i, 0);
        int32_t _p_partkey420 = _p_partkey402L;
        tbl_Project_TD_8184_output.setInt32(i, 0, _p_partkey420);
    }
    tbl_Project_TD_8184_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8184_output #Row: " << tbl_Project_TD_8184_output.getNumRow() << std::endl;
}

void SW_Project_TD_77(Table &tbl_SerializeFromObject_TD_9563_input, Table &tbl_Project_TD_77_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#484L, s_nationkey#487L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_9563_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey484L = tbl_SerializeFromObject_TD_9563_input.getInt32(i, 0);
        int32_t _s_nationkey487L = tbl_SerializeFromObject_TD_9563_input.getInt32(i, 1);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_77_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_77_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_77_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_77_output #Row: " << tbl_Project_TD_77_output.getNumRow() << std::endl;
}


void SW_Project_TD_6622(Table &tbl_SerializeFromObject_TD_8752_input, Table &tbl_Project_TD_6622_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_partkey#450L as int) AS ps_partkey#460, cast(ps_suppkey#451L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#453) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_supplycost#453)
    // Output: ListBuffer(ps_partkey#460, ps_suppkey#466, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_8752_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey450L = tbl_SerializeFromObject_TD_8752_input.getInt32(i, 0);
        int32_t _ps_suppkey451L = tbl_SerializeFromObject_TD_8752_input.getInt32(i, 1);
        int32_t _ps_supplycost453 = tbl_SerializeFromObject_TD_8752_input.getInt32(i, 2);
        int32_t _ps_partkey460 = _ps_partkey450L;
        tbl_Project_TD_6622_output.setInt32(i, 0, _ps_partkey460);
        int32_t _ps_suppkey466 = _ps_suppkey451L;
        tbl_Project_TD_6622_output.setInt32(i, 1, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost453 * 100.00);
        tbl_Project_TD_6622_output.setInt32(i, 2, _ps_supplycost478);
    }
    tbl_Project_TD_6622_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6622_output #Row: " << tbl_Project_TD_6622_output.getNumRow() << std::endl;
}


void SW_Project_TD_5613(Table &tbl_SerializeFromObject_TD_714_input, Table &tbl_Project_TD_5613_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342, cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) AS o_orderdate#382)
    // Input: ListBuffer(o_orderkey#324L, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#342, o_orderdate#382)
    int nrow1 = tbl_SerializeFromObject_TD_714_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderkey324L = tbl_SerializeFromObject_TD_714_input.getInt32(i, 0);
        int32_t _o_orderdate332 = tbl_SerializeFromObject_TD_714_input.getInt32(i, 1);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_5613_output.setInt32(i, 0, _o_orderkey342);
        int32_t _o_orderdate382 = _o_orderdate332;
        tbl_Project_TD_5613_output.setInt32(i, 1, _o_orderdate382);
    }
    tbl_Project_TD_5613_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5613_output #Row: " << tbl_Project_TD_5613_output.getNumRow() << std::endl;
}


void SW_Project_TD_4449(Table &tbl_SerializeFromObject_TD_6964_input, Table &tbl_Project_TD_4449_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#304, n_name#297)
    int nrow1 = tbl_SerializeFromObject_TD_6964_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_6964_input.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_6964_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_4449_output.setInt32(i, 0, _n_nationkey304);
        tbl_Project_TD_4449_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _n_name297);
    }
    tbl_Project_TD_4449_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4449_output #Row: " << tbl_Project_TD_4449_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_3698_key_leftMajor {
    int32_t _s_nationkey506;
    bool operator==(const SW_JOIN_INNER_TD_3698_key_leftMajor& other) const {
        return ((_s_nationkey506 == other._s_nationkey506));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3698_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3698_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_nationkey506));
    }
};
}
struct SW_JOIN_INNER_TD_3698_payload_leftMajor {
    int32_t _l_quantity100;
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    int32_t _s_nationkey506;
    int32_t _ps_supplycost478;
    int32_t _o_orderdate382;
};
struct SW_JOIN_INNER_TD_3698_key_rightMajor {
    int32_t _n_nationkey304;
    bool operator==(const SW_JOIN_INNER_TD_3698_key_rightMajor& other) const {
        return ((_n_nationkey304 == other._n_nationkey304));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3698_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3698_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey304));
    }
};
}
struct SW_JOIN_INNER_TD_3698_payload_rightMajor {
    int32_t _n_nationkey304;
    std::string _n_name297;
};
void SW_JOIN_INNER_TD_3698(Table &tbl_JOIN_INNER_TD_4347_output, Table &tbl_Project_TD_4449_output, Table &tbl_JOIN_INNER_TD_3698_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_nationkey#506 = n_nationkey#304))
    // Left Table: ListBuffer(l_quantity#100, l_extendedprice#117, l_discount#134, s_nationkey#506, ps_supplycost#478, o_orderdate#382)
    // Right Table: ListBuffer(n_nationkey#304, n_name#297)
    // Output Table: ListBuffer(n_name#297, o_orderdate#382, l_extendedprice#117, l_discount#134, ps_supplycost#478, l_quantity#100)
    int left_nrow = tbl_JOIN_INNER_TD_4347_output.getNumRow();
    int right_nrow = tbl_Project_TD_4449_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3698_key_leftMajor, SW_JOIN_INNER_TD_3698_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4347_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_3698_key_leftMajor keyA{_s_nationkey506_k};
            int32_t _l_quantity100 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 0);
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 1);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 2);
            int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 3);
            int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 4);
            int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_3698_payload_leftMajor payloadA{_l_quantity100, _l_extendedprice117, _l_discount134, _s_nationkey506, _ps_supplycost478, _o_orderdate382};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_4449_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_4449_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3698_key_leftMajor{_n_nationkey304_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_quantity100 = (it->second)._l_quantity100;
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _s_nationkey506 = (it->second)._s_nationkey506;
                int32_t _ps_supplycost478 = (it->second)._ps_supplycost478;
                int32_t _o_orderdate382 = (it->second)._o_orderdate382;
                int32_t _n_nationkey304 = tbl_Project_TD_4449_output.getInt32(i, 0);
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n = tbl_Project_TD_4449_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
                std::string _n_name297 = std::string(_n_name297_n.data());
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 5, _l_quantity100);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 2, _l_extendedprice117);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 3, _l_discount134);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 4, _ps_supplycost478);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 1, _o_orderdate382);
                tbl_JOIN_INNER_TD_3698_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _n_name297_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3698_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3698_key_rightMajor, SW_JOIN_INNER_TD_3698_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4449_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_4449_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3698_key_rightMajor keyA{_n_nationkey304_k};
            int32_t _n_nationkey304 = tbl_Project_TD_4449_output.getInt32(i, 0);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n = tbl_Project_TD_4449_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
            SW_JOIN_INNER_TD_3698_payload_rightMajor payloadA{_n_nationkey304, _n_name297};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4347_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3698_key_rightMajor{_s_nationkey506_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey304 = (it->second)._n_nationkey304;
                std::string _n_name297 = (it->second)._n_name297;
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n{};
                memcpy(_n_name297_n.data(), (_n_name297).data(), (_n_name297).length());
                int32_t _l_quantity100 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 0);
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 1);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 2);
                int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 3);
                int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 4);
                int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_4347_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_3698_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _n_name297_n);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 5, _l_quantity100);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 2, _l_extendedprice117);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 3, _l_discount134);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 4, _ps_supplycost478);
                tbl_JOIN_INNER_TD_3698_output.setInt32(r, 1, _o_orderdate382);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3698_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3698_output #Row: " << tbl_JOIN_INNER_TD_3698_output.getNumRow() << std::endl;
}

void SW_Project_TD_2742(Table &tbl_JOIN_INNER_TD_3698_output, Table &tbl_Project_TD_2742_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(n_name#297 AS nation#1235, cast((cast(o_orderdate#382 as double) / 10000.0) as int) AS o_year#1236, ((l_extendedprice#117 * (1 - l_discount#134)) - (ps_supplycost#478 * l_quantity#100)) AS amount#1237)
    // Input: ListBuffer(n_name#297, o_orderdate#382, l_extendedprice#117, l_discount#134, ps_supplycost#478, l_quantity#100)
    // Output: ListBuffer(nation#1235, o_year#1236, amount#1237)
    int nrow1 = tbl_JOIN_INNER_TD_3698_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_JOIN_INNER_TD_3698_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_3698_output.getInt32(i, 1);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3698_output.getInt32(i, 2);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_3698_output.getInt32(i, 3);
        int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_3698_output.getInt32(i, 4);
        int32_t _l_quantity100 = tbl_JOIN_INNER_TD_3698_output.getInt32(i, 5);
        std::array<char, TPCH_READ_REGION_LEN + 1> _nation1235 = _n_name297;
        tbl_Project_TD_2742_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0, _nation1235);
        int32_t _o_year1236 = (_o_orderdate382 / 10000.0);
        tbl_Project_TD_2742_output.setInt32(i, 1, _o_year1236);
        int32_t _amount1237 = ((_l_extendedprice117 * (1 - _l_discount134)) - (_ps_supplycost478 * _l_quantity100));
        tbl_Project_TD_2742_output.setInt32(i, 2, _amount1237);
    }
    tbl_Project_TD_2742_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2742_output #Row: " << tbl_Project_TD_2742_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1370_key {
    std::string _nation1235;
    int32_t _o_year1236;
    bool operator==(const SW_Aggregate_TD_1370_key& other) const { return (_nation1235 == other._nation1235) && (_o_year1236 == other._o_year1236); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1370_key> {
    std::size_t operator() (const SW_Aggregate_TD_1370_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._nation1235)) + (hash<int32_t>()(k._o_year1236));
    }
};
}
struct SW_Aggregate_TD_1370_payload {
    int64_t _sum_profit1238L_sum_0;
};
void SW_Aggregate_TD_1370(Table &tbl_Project_TD_2742_output, Table &tbl_Aggregate_TD_1370_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(nation#1235, o_year#1236, sum(amount#1237) AS sum_profit#1238L)
    // Input: ListBuffer(nation#1235, o_year#1236, amount#1237)
    // Output: ListBuffer(nation#1235, o_year#1236, sum_profit#1238L)
    std::unordered_map<SW_Aggregate_TD_1370_key, SW_Aggregate_TD_1370_payload> ht1;
    int nrow1 = tbl_Project_TD_2742_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _nation1235 = tbl_Project_TD_2742_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        int32_t _o_year1236 = tbl_Project_TD_2742_output.getInt32(i, 1);
        int32_t _amount1237 = tbl_Project_TD_2742_output.getInt32(i, 2);
        SW_Aggregate_TD_1370_key k{std::string(_nation1235.data()), _o_year1236};
        int64_t _sum_profit1238L_sum_0 = _amount1237;
        SW_Aggregate_TD_1370_payload p{_sum_profit1238L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sum_profit1238L_sum_0 + _sum_profit1238L_sum_0;
            p._sum_profit1238L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _nation1235{};
        memcpy(_nation1235.data(), ((it.first)._nation1235).data(), ((it.first)._nation1235).length());
        tbl_Aggregate_TD_1370_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _nation1235);
        tbl_Aggregate_TD_1370_output.setInt32(r, 1, (it.first)._o_year1236);
        int64_t _sum_profit1238L = (it.second)._sum_profit1238L_sum_0;
        tbl_Aggregate_TD_1370_output.setInt64(r, 2, _sum_profit1238L);
        ++r;
    }
    tbl_Aggregate_TD_1370_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1370_output #Row: " << tbl_Aggregate_TD_1370_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0655(Table &tbl_Aggregate_TD_1370_output, Table &tbl_Sort_TD_0655_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(nation#1235 ASC NULLS FIRST, o_year#1236 DESC NULLS LAST)
    // Input: ListBuffer(nation#1235, o_year#1236, sum_profit#1238L)
    // Output: ListBuffer(nation#1235, o_year#1236, sum_profit#1238L)
    struct SW_Sort_TD_0655Row {
        std::string _nation1235;
        int32_t _o_year1236;
        int64_t _sum_profit1238L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0655Row& a, const SW_Sort_TD_0655Row& b) const { return 
 (a._nation1235 < b._nation1235) || 
 ((a._nation1235 == b._nation1235) && (a._o_year1236 > b._o_year1236)); 
}
    }SW_Sort_TD_0655_order; 

    int nrow1 = tbl_Aggregate_TD_1370_output.getNumRow();
    std::vector<SW_Sort_TD_0655Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _nation1235 = tbl_Aggregate_TD_1370_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int32_t _o_year1236 = tbl_Aggregate_TD_1370_output.getInt32(i, 1);
        int64_t _sum_profit1238L = tbl_Aggregate_TD_1370_output.getInt64(i, 2);
        SW_Sort_TD_0655Row t = {std::string(_nation1235.data()),_o_year1236,_sum_profit1238L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0655_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _nation1235{};
        memcpy(_nation1235.data(), (it._nation1235).data(), (it._nation1235).length());
        tbl_Sort_TD_0655_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _nation1235);
        tbl_Sort_TD_0655_output.setInt32(r, 1, it._o_year1236);
        tbl_Sort_TD_0655_output.setInt64(r, 2, it._sum_profit1238L);
        if (r < 10) {
            std::cout << (it._nation1235).data() << " " << it._o_year1236 << " " << it._sum_profit1238L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0655_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0655_output #Row: " << tbl_Sort_TD_0655_output.getNumRow() << std::endl;
}

