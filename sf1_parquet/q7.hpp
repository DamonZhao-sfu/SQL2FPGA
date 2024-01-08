#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_95(Table &tbl_SerializeFromObject_TD_10336_input, Table &tbl_Filter_TD_95_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_shipdate#15) AND ((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19950101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) <= 19961231))) AND (isnotnull(cast(l_suppkey#2L as int)) AND isnotnull(cast(l_orderkey#0L as int)))))
    // Input: ListBuffer(l_orderkey#0L, l_suppkey#2L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    // Output: ListBuffer(l_orderkey#0L, l_suppkey#2L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10336_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 4);
        int64_t _l_suppkey2L = tbl_SerializeFromObject_TD_10336_input.getInt64(i, 1);
        int64_t _l_orderkey0L = tbl_SerializeFromObject_TD_10336_input.getInt64(i, 0);
        if (((1) && ((_l_shipdate15 >= 19950101) && (_l_shipdate15 <= 19961231))) && ((1) && (1))) {
            int64_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_10336_input.getInt64(i, 0);
            tbl_Filter_TD_95_output.setInt64(r, 0, _l_orderkey0L_t);
            int64_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_10336_input.getInt64(i, 1);
            tbl_Filter_TD_95_output.setInt64(r, 1, _l_suppkey2L_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 2);
            tbl_Filter_TD_95_output.setInt32(r, 2, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 3);
            tbl_Filter_TD_95_output.setInt32(r, 3, _l_discount6_t);
            // Unsupported column typeDateType default to IntegerType
            int32_t _l_shipdate15_t = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 4);
            tbl_Filter_TD_95_output.setInt32(r, 4, _l_shipdate15_t);
            r++;
        }
    }
    tbl_Filter_TD_95_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_95_output #Row: " << tbl_Filter_TD_95_output.getNumRow() << std::endl;
}

void SW_Project_TD_8486(Table &tbl_Filter_TD_95_output, Table &tbl_Project_TD_8486_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(l_suppkey#2L as int) AS l_suppkey#66, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134, cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) AS l_shipdate#202)
    // Input: ListBuffer(l_orderkey#0L, l_suppkey#2L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    // Output: ListBuffer(l_orderkey#32, l_suppkey#66, l_extendedprice#117, l_discount#134, l_shipdate#202)
    int nrow1 = tbl_Filter_TD_95_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey0L = tbl_Filter_TD_95_output.getInt32(i, 0);
        int32_t _l_suppkey2L = tbl_Filter_TD_95_output.getInt32(i, 1);
        int32_t _l_extendedprice5 = tbl_Filter_TD_95_output.getInt32(i, 2);
        int32_t _l_discount6 = tbl_Filter_TD_95_output.getInt32(i, 3);
        int32_t _l_shipdate15 = tbl_Filter_TD_95_output.getInt32(i, 4);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_8486_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_8486_output.setInt32(i, 1, _l_suppkey66);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_8486_output.setInt32(i, 2, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_8486_output.setInt32(i, 3, _l_discount134);
        int32_t _l_shipdate202 = _l_shipdate15;
        tbl_Project_TD_8486_output.setInt32(i, 4, _l_shipdate202);
    }
    tbl_Project_TD_8486_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8486_output #Row: " << tbl_Project_TD_8486_output.getNumRow() << std::endl;
}

void SW_Project_TD_8334(Table &tbl_SerializeFromObject_TD_10847_input, Table &tbl_Project_TD_8334_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#484L, s_nationkey#487L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_10847_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey484L = tbl_SerializeFromObject_TD_10847_input.getInt32(i, 0);
        int32_t _s_nationkey487L = tbl_SerializeFromObject_TD_10847_input.getInt32(i, 1);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_8334_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_8334_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_8334_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8334_output #Row: " << tbl_Project_TD_8334_output.getNumRow() << std::endl;
}

void SW_Project_TD_7581(Table &tbl_SerializeFromObject_TD_9640_input, Table &tbl_Project_TD_7581_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342, cast(o_custkey#325L as int) AS o_custkey#352)
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L)
    // Output: ListBuffer(o_orderkey#342, o_custkey#352)
    int nrow1 = tbl_SerializeFromObject_TD_9640_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderkey324L = tbl_SerializeFromObject_TD_9640_input.getInt32(i, 0);
        int32_t _o_custkey325L = tbl_SerializeFromObject_TD_9640_input.getInt32(i, 1);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_7581_output.setInt32(i, 0, _o_orderkey342);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_7581_output.setInt32(i, 1, _o_custkey352);
    }
    tbl_Project_TD_7581_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_7581_output #Row: " << tbl_Project_TD_7581_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6142(Table &tbl_SerializeFromObject_TD_7181_input, Table &tbl_Filter_TD_6142_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cast(n_nationkey#296L as int)) AND ((n_name#297 = FRANCE) OR (n_name#297 = IRAQ))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L, n_name#297)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7181_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey296L = tbl_SerializeFromObject_TD_7181_input.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_7181_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        if ((1) && ((std::string(_n_name297.data()) == "FRANCE") || (std::string(_n_name297.data()) == "IRAQ"))) {
            int64_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_7181_input.getInt64(i, 0);
            tbl_Filter_TD_6142_output.setInt64(r, 0, _n_nationkey296L_t);
            tbl_Filter_TD_6142_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_6142_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6142_output #Row: " << tbl_Filter_TD_6142_output.getNumRow() << std::endl;
}

void SW_Project_TD_6660(Table &tbl_SerializeFromObject_TD_8894_input, Table &tbl_Project_TD_6660_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(c_custkey#253L as int) AS c_custkey#269, cast(c_nationkey#256L as int) AS c_nationkey#278)
    // Input: ListBuffer(c_custkey#253L, c_nationkey#256L)
    // Output: ListBuffer(c_custkey#269, c_nationkey#278)
    int nrow1 = tbl_SerializeFromObject_TD_8894_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_custkey253L = tbl_SerializeFromObject_TD_8894_input.getInt32(i, 0);
        int32_t _c_nationkey256L = tbl_SerializeFromObject_TD_8894_input.getInt32(i, 1);
        int32_t _c_custkey269 = _c_custkey253L;
        tbl_Project_TD_6660_output.setInt32(i, 0, _c_custkey269);
        int32_t _c_nationkey278 = _c_nationkey256L;
        tbl_Project_TD_6660_output.setInt32(i, 1, _c_nationkey278);
    }
    tbl_Project_TD_6660_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6660_output #Row: " << tbl_Project_TD_6660_output.getNumRow() << std::endl;
}


void SW_Filter_TD_5957(Table &tbl_SerializeFromObject_TD_6291_input, Table &tbl_Filter_TD_5957_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cast(n_nationkey#1125L as int)) AND ((n_name#1126 = IRAQ) OR (n_name#1126 = FRANCE))))
    // Input: ListBuffer(n_nationkey#1125L, n_name#1126)
    // Output: ListBuffer(n_nationkey#1125L, n_name#1126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6291_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey1125L = tbl_SerializeFromObject_TD_6291_input.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1126 = tbl_SerializeFromObject_TD_6291_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        if ((1) && ((std::string(_n_name1126.data()) == "IRAQ") || (std::string(_n_name1126.data()) == "FRANCE"))) {
            int64_t _n_nationkey1125L_t = tbl_SerializeFromObject_TD_6291_input.getInt64(i, 0);
            tbl_Filter_TD_5957_output.setInt64(r, 0, _n_nationkey1125L_t);
            tbl_Filter_TD_5957_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_5957_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5957_output #Row: " << tbl_Filter_TD_5957_output.getNumRow() << std::endl;
}

void SW_Project_TD_5353(Table &tbl_Filter_TD_6142_output, Table &tbl_Project_TD_5353_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#304, n_name#297)
    int nrow1 = tbl_Filter_TD_6142_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_Filter_TD_6142_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_Filter_TD_6142_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_5353_output.setInt32(i, 0, _n_nationkey304);
        tbl_Project_TD_5353_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _n_name297);
    }
    tbl_Project_TD_5353_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5353_output #Row: " << tbl_Project_TD_5353_output.getNumRow() << std::endl;
}


void SW_Project_TD_434(Table &tbl_Filter_TD_5957_output, Table &tbl_Project_TD_434_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#1125L as int) AS n_nationkey#1130)
    // Input: ListBuffer(n_nationkey#1125L, n_name#1126)
    // Output: ListBuffer(n_nationkey#1130, n_name#1126)
    int nrow1 = tbl_Filter_TD_5957_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey1125L = tbl_Filter_TD_5957_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1126 = tbl_Filter_TD_5957_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_nationkey1130 = _n_nationkey1125L;
        tbl_Project_TD_434_output.setInt32(i, 0, _n_nationkey1130);
        tbl_Project_TD_434_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _n_name1126);
    }
    tbl_Project_TD_434_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_434_output #Row: " << tbl_Project_TD_434_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_3278_key_leftMajor {
    int32_t _c_nationkey278;
    bool operator==(const SW_JOIN_INNER_TD_3278_key_leftMajor& other) const {
        return ((_c_nationkey278 == other._c_nationkey278));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3278_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3278_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_nationkey278));
    }
};
}
struct SW_JOIN_INNER_TD_3278_payload_leftMajor {
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    int32_t _l_shipdate202;
    int32_t _c_nationkey278;
    std::string _n_name297;
};
struct SW_JOIN_INNER_TD_3278_key_rightMajor {
    int32_t _n_nationkey1130;
    bool operator==(const SW_JOIN_INNER_TD_3278_key_rightMajor& other) const {
        return ((_n_nationkey1130 == other._n_nationkey1130));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3278_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3278_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey1130));
    }
};
}
struct SW_JOIN_INNER_TD_3278_payload_rightMajor {
    int32_t _n_nationkey1130;
    std::string _n_name1126;
};
void SW_JOIN_INNER_TD_3278(Table &tbl_JOIN_INNER_TD_4169_output, Table &tbl_Project_TD_434_output, Table &tbl_SerializeFromObject_TD_7181_input, Table &tbl_SerializeFromObject_TD_6291_input, Table &tbl_JOIN_INNER_TD_3278_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_nationkey#278 = n_nationkey#1130) AND (((n_name#297 = FRANCE) AND (n_name#1126 = IRAQ)) OR ((n_name#297 = IRAQ) AND (n_name#1126 = FRANCE)))))
    // Left Table: ListBuffer(l_extendedprice#117, l_discount#134, l_shipdate#202, c_nationkey#278, n_name#297)
    // Right Table: ListBuffer(n_nationkey#1130, n_name#1126)
    // Output Table: ListBuffer(n_name#297, n_name#1126, l_shipdate#202, l_extendedprice#117, l_discount#134)
    int left_nrow = tbl_JOIN_INNER_TD_4169_output.getNumRow();
    int right_nrow = tbl_Project_TD_434_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3278_key_leftMajor, SW_JOIN_INNER_TD_3278_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4169_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_nationkey278_k = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_3278_key_leftMajor keyA{_c_nationkey278_k};
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 0);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 1);
            int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 2);
            int32_t _c_nationkey278 = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 3);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n = tbl_SerializeFromObject_TD_6291_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_4169_output.getInt32(i, 4), 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
            SW_JOIN_INNER_TD_3278_payload_leftMajor payloadA{_l_extendedprice117, _l_discount134, _l_shipdate202, _c_nationkey278, _n_name297};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_434_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey1130_k = tbl_Project_TD_434_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3278_key_leftMajor{_n_nationkey1130_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _l_shipdate202 = (it->second)._l_shipdate202;
                int32_t _c_nationkey278 = (it->second)._c_nationkey278;
                std::string _n_name297 = (it->second)._n_name297;
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n{};
                memcpy(_n_name297_n.data(), (_n_name297).data(), (_n_name297).length());
                int32_t _n_nationkey1130 = tbl_Project_TD_434_output.getInt32(i, 0);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1126_n = tbl_SerializeFromObject_TD_6291_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_Project_TD_434_output.getInt32(i, 1), 1);
            std::string _n_name1126 = std::string(_n_name1126_n.data());
                if (((_n_name297 == "FRANCE") && (_n_name1126 == "IRAQ")) || ((_n_name297 == "IRAQ") && (_n_name1126 == "FRANCE"))) {
                    tbl_JOIN_INNER_TD_3278_output.setInt32(r, 3, _l_extendedprice117);
                    tbl_JOIN_INNER_TD_3278_output.setInt32(r, 4, _l_discount134);
                    tbl_JOIN_INNER_TD_3278_output.setInt32(r, 2, _l_shipdate202);
                    tbl_JOIN_INNER_TD_3278_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _n_name297_n);
                    tbl_JOIN_INNER_TD_3278_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 1, _n_name1126_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_3278_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3278_key_rightMajor, SW_JOIN_INNER_TD_3278_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_434_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey1130_k = tbl_Project_TD_434_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3278_key_rightMajor keyA{_n_nationkey1130_k};
            int32_t _n_nationkey1130 = tbl_Project_TD_434_output.getInt32(i, 0);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1126_n = tbl_SerializeFromObject_TD_6291_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_Project_TD_434_output.getInt32(i, 1), 1);
            std::string _n_name1126 = std::string(_n_name1126_n.data());
            SW_JOIN_INNER_TD_3278_payload_rightMajor payloadA{_n_nationkey1130, _n_name1126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4169_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_nationkey278_k = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3278_key_rightMajor{_c_nationkey278_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey1130 = (it->second)._n_nationkey1130;
                std::string _n_name1126 = (it->second)._n_name1126;
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1126_n{};
                memcpy(_n_name1126_n.data(), (_n_name1126).data(), (_n_name1126).length());
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 0);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 1);
                int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 2);
                int32_t _c_nationkey278 = tbl_JOIN_INNER_TD_4169_output.getInt32(i, 3);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n = tbl_SerializeFromObject_TD_6291_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_4169_output.getInt32(i, 4), 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
                if (((_n_name297 == "FRANCE") && (_n_name1126 == "IRAQ")) || ((_n_name297 == "IRAQ") && (_n_name1126 == "FRANCE"))) {
                    tbl_JOIN_INNER_TD_3278_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 1, _n_name1126_n);
                    tbl_JOIN_INNER_TD_3278_output.setInt32(r, 3, _l_extendedprice117);
                    tbl_JOIN_INNER_TD_3278_output.setInt32(r, 4, _l_discount134);
                    tbl_JOIN_INNER_TD_3278_output.setInt32(r, 2, _l_shipdate202);
                    tbl_JOIN_INNER_TD_3278_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _n_name297_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_3278_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3278_output #Row: " << tbl_JOIN_INNER_TD_3278_output.getNumRow() << std::endl;
}

void SW_Project_TD_2272(Table &tbl_JOIN_INNER_TD_3278_output, Table &tbl_Project_TD_2272_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(n_name#297 AS supp_nation#1120, n_name#1126 AS cust_nation#1121, cast((cast(l_shipdate#202 as double) / 10000.0) as int) AS l_year#1122, (l_extendedprice#117 * (100 - l_discount#134)) AS volume#1123)
    // Input: ListBuffer(n_name#297, n_name#1126, l_shipdate#202, l_extendedprice#117, l_discount#134)
    // Output: ListBuffer(supp_nation#1120, cust_nation#1121, l_year#1122, volume#1123)
    int nrow1 = tbl_JOIN_INNER_TD_3278_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_JOIN_INNER_TD_3278_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1126 = tbl_JOIN_INNER_TD_3278_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_3278_output.getInt32(i, 2);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3278_output.getInt32(i, 3);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_3278_output.getInt32(i, 4);
        std::array<char, TPCH_READ_REGION_LEN + 1> _supp_nation1120 = _n_name297;
        tbl_Project_TD_2272_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0, _supp_nation1120);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cust_nation1121 = _n_name1126;
        tbl_Project_TD_2272_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _cust_nation1121);
        int32_t _l_year1122 = (_l_shipdate202 / 10000.0);
        tbl_Project_TD_2272_output.setInt32(i, 2, _l_year1122);
        int32_t _volume1123 = (_l_extendedprice117 * (100 - _l_discount134));
        tbl_Project_TD_2272_output.setInt32(i, 3, _volume1123);
    }
    tbl_Project_TD_2272_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2272_output #Row: " << tbl_Project_TD_2272_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1311_key {
    std::string _supp_nation1120;
    std::string _cust_nation1121;
    int32_t _l_year1122;
    bool operator==(const SW_Aggregate_TD_1311_key& other) const { return (_supp_nation1120 == other._supp_nation1120) && (_cust_nation1121 == other._cust_nation1121) && (_l_year1122 == other._l_year1122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1311_key> {
    std::size_t operator() (const SW_Aggregate_TD_1311_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._supp_nation1120)) + (hash<string>()(k._cust_nation1121)) + (hash<int32_t>()(k._l_year1122));
    }
};
}
struct SW_Aggregate_TD_1311_payload {
    int64_t _revenue1124L_sum_0;
};
void SW_Aggregate_TD_1311(Table &tbl_Project_TD_2272_output, Table &tbl_Aggregate_TD_1311_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(supp_nation#1120, cust_nation#1121, l_year#1122, sum(volume#1123) AS revenue#1124L)
    // Input: ListBuffer(supp_nation#1120, cust_nation#1121, l_year#1122, volume#1123)
    // Output: ListBuffer(supp_nation#1120, cust_nation#1121, l_year#1122, revenue#1124L)
    std::unordered_map<SW_Aggregate_TD_1311_key, SW_Aggregate_TD_1311_payload> ht1;
    int nrow1 = tbl_Project_TD_2272_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _supp_nation1120 = tbl_Project_TD_2272_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cust_nation1121 = tbl_Project_TD_2272_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _l_year1122 = tbl_Project_TD_2272_output.getInt32(i, 2);
        int32_t _volume1123 = tbl_Project_TD_2272_output.getInt32(i, 3);
        SW_Aggregate_TD_1311_key k{std::string(_supp_nation1120.data()), std::string(_cust_nation1121.data()), _l_year1122};
        int64_t _revenue1124L_sum_0 = _volume1123;
        SW_Aggregate_TD_1311_payload p{_revenue1124L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._revenue1124L_sum_0 + _revenue1124L_sum_0;
            p._revenue1124L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _supp_nation1120{};
        memcpy(_supp_nation1120.data(), ((it.first)._supp_nation1120).data(), ((it.first)._supp_nation1120).length());
        tbl_Aggregate_TD_1311_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _supp_nation1120);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cust_nation1121{};
        memcpy(_cust_nation1121.data(), ((it.first)._cust_nation1121).data(), ((it.first)._cust_nation1121).length());
        tbl_Aggregate_TD_1311_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 1, _cust_nation1121);
        tbl_Aggregate_TD_1311_output.setInt32(r, 2, (it.first)._l_year1122);
        int64_t _revenue1124L = (it.second)._revenue1124L_sum_0;
        tbl_Aggregate_TD_1311_output.setInt64(r, 3, _revenue1124L);
        ++r;
    }
    tbl_Aggregate_TD_1311_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1311_output #Row: " << tbl_Aggregate_TD_1311_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0336(Table &tbl_Aggregate_TD_1311_output, Table &tbl_Sort_TD_0336_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(supp_nation#1120 ASC NULLS FIRST, cust_nation#1121 ASC NULLS FIRST, l_year#1122 ASC NULLS FIRST)
    // Input: ListBuffer(supp_nation#1120, cust_nation#1121, l_year#1122, revenue#1124L)
    // Output: ListBuffer(supp_nation#1120, cust_nation#1121, l_year#1122, revenue#1124L)
    struct SW_Sort_TD_0336Row {
        std::string _supp_nation1120;
        std::string _cust_nation1121;
        int32_t _l_year1122;
        int64_t _revenue1124L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0336Row& a, const SW_Sort_TD_0336Row& b) const { return 
 (a._supp_nation1120 < b._supp_nation1120) || 
 ((a._supp_nation1120 == b._supp_nation1120) && (a._cust_nation1121 < b._cust_nation1121)) || 
 ((a._supp_nation1120 == b._supp_nation1120) && (a._cust_nation1121 == b._cust_nation1121) && (a._l_year1122 < b._l_year1122)); 
}
    }SW_Sort_TD_0336_order; 

    int nrow1 = tbl_Aggregate_TD_1311_output.getNumRow();
    std::vector<SW_Sort_TD_0336Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _supp_nation1120 = tbl_Aggregate_TD_1311_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cust_nation1121 = tbl_Aggregate_TD_1311_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 1);
        int32_t _l_year1122 = tbl_Aggregate_TD_1311_output.getInt32(i, 2);
        int64_t _revenue1124L = tbl_Aggregate_TD_1311_output.getInt64(i, 3);
        SW_Sort_TD_0336Row t = {std::string(_supp_nation1120.data()),std::string(_cust_nation1121.data()),_l_year1122,_revenue1124L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0336_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _supp_nation1120{};
        memcpy(_supp_nation1120.data(), (it._supp_nation1120).data(), (it._supp_nation1120).length());
        tbl_Sort_TD_0336_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _supp_nation1120);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cust_nation1121{};
        memcpy(_cust_nation1121.data(), (it._cust_nation1121).data(), (it._cust_nation1121).length());
        tbl_Sort_TD_0336_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 1, _cust_nation1121);
        tbl_Sort_TD_0336_output.setInt32(r, 2, it._l_year1122);
        tbl_Sort_TD_0336_output.setInt64(r, 3, it._revenue1124L);
        if (r < 10) {
            std::cout << (it._supp_nation1120).data() << " " << (it._cust_nation1121).data() << " " << it._l_year1122 << " " << it._revenue1124L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0336_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0336_output #Row: " << tbl_Sort_TD_0336_output.getNumRow() << std::endl;
}

