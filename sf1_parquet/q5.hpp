#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8279(Table &tbl_SerializeFromObject_TD_9402_input, Table &tbl_Filter_TD_8279_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(o_orderdate#332) AND ((cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) >= 19930101) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) < 19940101))) AND isnotnull(cast(o_custkey#325L as int))) AND isnotnull(cast(o_orderkey#324L as int))))
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#324L, o_custkey#325L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9402_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _o_orderdate332 = tbl_SerializeFromObject_TD_9402_input.getInt32(i, 2);
        int64_t _o_custkey325L = tbl_SerializeFromObject_TD_9402_input.getInt64(i, 1);
        int64_t _o_orderkey324L = tbl_SerializeFromObject_TD_9402_input.getInt64(i, 0);
        if ((((1) && ((_o_orderdate332 >= 19930101) && (_o_orderdate332 < 19940101))) && (1)) && (1)) {
            int64_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_9402_input.getInt64(i, 0);
            tbl_Filter_TD_8279_output.setInt64(r, 0, _o_orderkey324L_t);
            int64_t _o_custkey325L_t = tbl_SerializeFromObject_TD_9402_input.getInt64(i, 1);
            tbl_Filter_TD_8279_output.setInt64(r, 1, _o_custkey325L_t);
            r++;
        }
    }
    tbl_Filter_TD_8279_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8279_output #Row: " << tbl_Filter_TD_8279_output.getNumRow() << std::endl;
}

void SW_Project_TD_7727(Table &tbl_Filter_TD_8279_output, Table &tbl_Project_TD_7727_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342, cast(o_custkey#325L as int) AS o_custkey#352)
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L)
    // Output: ListBuffer(o_orderkey#342, o_custkey#352)
    int nrow1 = tbl_Filter_TD_8279_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _o_orderkey324L = tbl_Filter_TD_8279_output.getInt64(i, 0);
        int64_t _o_custkey325L = tbl_Filter_TD_8279_output.getInt64(i, 1);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_7727_output.setInt32(i, 0, _o_orderkey342);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_7727_output.setInt32(i, 1, _o_custkey352);
    }
    tbl_Project_TD_7727_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_7727_output #Row: " << tbl_Project_TD_7727_output.getNumRow() << std::endl;
}

void SW_Project_TD_7928(Table &tbl_SerializeFromObject_TD_9644_input, Table &tbl_Project_TD_7928_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(c_custkey#253L as int) AS c_custkey#269, cast(c_nationkey#256L as int) AS c_nationkey#278)
    // Input: ListBuffer(c_custkey#253L, c_nationkey#256L)
    // Output: ListBuffer(c_custkey#269, c_nationkey#278)
    int nrow1 = tbl_SerializeFromObject_TD_9644_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _c_custkey253L = tbl_SerializeFromObject_TD_9644_input.getInt64(i, 0);
        int64_t _c_nationkey256L = tbl_SerializeFromObject_TD_9644_input.getInt64(i, 1);
        int32_t _c_custkey269 = _c_custkey253L;
        tbl_Project_TD_7928_output.setInt32(i, 0, _c_custkey269);
        int32_t _c_nationkey278 = _c_nationkey256L;
        tbl_Project_TD_7928_output.setInt32(i, 1, _c_nationkey278);
    }
    tbl_Project_TD_7928_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_7928_output #Row: " << tbl_Project_TD_7928_output.getNumRow() << std::endl;
}

void SW_Project_TD_6318(Table &tbl_SerializeFromObject_TD_8200_input, Table &tbl_Project_TD_6318_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(l_suppkey#2L as int) AS l_suppkey#66, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_orderkey#0L, l_suppkey#2L, l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_orderkey#32, l_suppkey#66, l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_SerializeFromObject_TD_8200_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_orderkey0L = tbl_SerializeFromObject_TD_8200_input.getInt64(i, 0);
        int64_t _l_suppkey2L = tbl_SerializeFromObject_TD_8200_input.getInt64(i, 1);
        int32_t _l_extendedprice5 = tbl_SerializeFromObject_TD_8200_input.getInt32(i, 2);
        int32_t _l_discount6 = tbl_SerializeFromObject_TD_8200_input.getInt32(i, 3);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_6318_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_6318_output.setInt32(i, 1, _l_suppkey66);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_6318_output.setInt32(i, 2, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_6318_output.setInt32(i, 3, _l_discount134);
    }
    tbl_Project_TD_6318_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6318_output #Row: " << tbl_Project_TD_6318_output.getNumRow() << std::endl;
}


void SW_Project_TD_5516(Table &tbl_SerializeFromObject_TD_7667_input, Table &tbl_Project_TD_5516_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#484L, s_nationkey#487L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_7667_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _s_suppkey484L = tbl_SerializeFromObject_TD_7667_input.getInt64(i, 0);
        int64_t _s_nationkey487L = tbl_SerializeFromObject_TD_7667_input.getInt64(i, 1);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_5516_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_5516_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_5516_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5516_output #Row: " << tbl_Project_TD_5516_output.getNumRow() << std::endl;
}


void SW_Filter_TD_4998(Table &tbl_SerializeFromObject_TD_5776_input, Table &tbl_Filter_TD_4998_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(r_name#315) AND (r_name#315 = AFRICA)) AND isnotnull(cast(r_regionkey#314L as int))))
    // Input: ListBuffer(r_regionkey#314L, r_name#315)
    // Output: ListBuffer(r_regionkey#314L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5776_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name315 = tbl_SerializeFromObject_TD_5776_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _r_regionkey314L = tbl_SerializeFromObject_TD_5776_input.getInt64(i, 0);
        if (((1) && (std::string(_r_name315.data()) == "AFRICA")) && (1)) {
            int64_t _r_regionkey314L_t = tbl_SerializeFromObject_TD_5776_input.getInt64(i, 0);
            tbl_Filter_TD_4998_output.setInt64(r, 0, _r_regionkey314L_t);
            r++;
        }
    }
    tbl_Filter_TD_4998_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4998_output #Row: " << tbl_Filter_TD_4998_output.getNumRow() << std::endl;
}

void SW_Project_TD_4106(Table &tbl_SerializeFromObject_TD_6136_input, Table &tbl_Project_TD_4106_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304, cast(n_regionkey#298L as int) AS n_regionkey#309)
    // Input: ListBuffer(n_nationkey#296L, n_name#297, n_regionkey#298L)
    // Output: ListBuffer(n_nationkey#304, n_name#297, n_regionkey#309)
    int nrow1 = tbl_SerializeFromObject_TD_6136_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey296L = tbl_SerializeFromObject_TD_6136_input.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_6136_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _n_regionkey298L = tbl_SerializeFromObject_TD_6136_input.getInt64(i, 2);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_4106_output.setInt32(i, 0, _n_nationkey304);
        int32_t _n_regionkey309 = _n_regionkey298L;
        tbl_Project_TD_4106_output.setInt32(i, 2, _n_regionkey309);
        tbl_Project_TD_4106_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _n_name297);
    }
    tbl_Project_TD_4106_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4106_output #Row: " << tbl_Project_TD_4106_output.getNumRow() << std::endl;
}


void SW_Project_TD_3306(Table &tbl_Filter_TD_4998_output, Table &tbl_Project_TD_3306_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(r_regionkey#314L as int) AS r_regionkey#320)
    // Input: ListBuffer(r_regionkey#314L)
    // Output: ListBuffer(r_regionkey#320)
    int nrow1 = tbl_Filter_TD_4998_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _r_regionkey314L = tbl_Filter_TD_4998_output.getInt64(i, 0);
        int32_t _r_regionkey320 = _r_regionkey314L;
        tbl_Project_TD_3306_output.setInt32(i, 0, _r_regionkey320);
    }
    tbl_Project_TD_3306_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3306_output #Row: " << tbl_Project_TD_3306_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3769_key_leftMajor {
    int32_t _s_nationkey506;
    bool operator==(const SW_JOIN_INNER_TD_3769_key_leftMajor& other) const {
        return ((_s_nationkey506 == other._s_nationkey506));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3769_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3769_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_nationkey506));
    }
};
}
struct SW_JOIN_INNER_TD_3769_payload_leftMajor {
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    int32_t _s_nationkey506;
};
struct SW_JOIN_INNER_TD_3769_key_rightMajor {
    int32_t _n_nationkey304;
    bool operator==(const SW_JOIN_INNER_TD_3769_key_rightMajor& other) const {
        return ((_n_nationkey304 == other._n_nationkey304));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3769_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3769_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey304));
    }
};
}
struct SW_JOIN_INNER_TD_3769_payload_rightMajor {
    int32_t _n_nationkey304;
    std::string _n_name297;
    int32_t _n_regionkey309;
};
void SW_JOIN_INNER_TD_3769(Table &tbl_JOIN_INNER_TD_4971_output, Table &tbl_Project_TD_4106_output, Table &tbl_JOIN_INNER_TD_3769_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_nationkey#506 = n_nationkey#304))
    // Left Table: ListBuffer(l_extendedprice#117, l_discount#134, s_nationkey#506)
    // Right Table: ListBuffer(n_nationkey#304, n_name#297, n_regionkey#309)
    // Output Table: ListBuffer(l_extendedprice#117, l_discount#134, n_name#297, n_regionkey#309)
    int left_nrow = tbl_JOIN_INNER_TD_4971_output.getNumRow();
    int right_nrow = tbl_Project_TD_4106_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3769_key_leftMajor, SW_JOIN_INNER_TD_3769_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4971_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_4971_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3769_key_leftMajor keyA{_s_nationkey506_k};
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4971_output.getInt32(i, 0);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_4971_output.getInt32(i, 1);
            int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_4971_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3769_payload_leftMajor payloadA{_l_extendedprice117, _l_discount134, _s_nationkey506};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_4106_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_4106_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3769_key_leftMajor{_n_nationkey304_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _s_nationkey506 = (it->second)._s_nationkey506;
                int32_t _n_nationkey304 = tbl_Project_TD_4106_output.getInt32(i, 0);
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n = tbl_Project_TD_4106_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
                std::string _n_name297 = std::string(_n_name297_n.data());
                int32_t _n_regionkey309 = tbl_Project_TD_4106_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3769_output.setInt32(r, 0, _l_extendedprice117);
                tbl_JOIN_INNER_TD_3769_output.setInt32(r, 1, _l_discount134);
                tbl_JOIN_INNER_TD_3769_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 2, _n_name297_n);
                tbl_JOIN_INNER_TD_3769_output.setInt32(r, 3, _n_regionkey309);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3769_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3769_key_rightMajor, SW_JOIN_INNER_TD_3769_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4106_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_4106_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3769_key_rightMajor keyA{_n_nationkey304_k};
            int32_t _n_nationkey304 = tbl_Project_TD_4106_output.getInt32(i, 0);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n = tbl_Project_TD_4106_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
            int32_t _n_regionkey309 = tbl_Project_TD_4106_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3769_payload_rightMajor payloadA{_n_nationkey304, _n_name297, _n_regionkey309};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4971_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_4971_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3769_key_rightMajor{_s_nationkey506_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey304 = (it->second)._n_nationkey304;
                std::string _n_name297 = (it->second)._n_name297;
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n{};
                memcpy(_n_name297_n.data(), (_n_name297).data(), (_n_name297).length());
                int32_t _n_regionkey309 = (it->second)._n_regionkey309;
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4971_output.getInt32(i, 0);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_4971_output.getInt32(i, 1);
                int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_4971_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3769_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 2, _n_name297_n);
                tbl_JOIN_INNER_TD_3769_output.setInt32(r, 3, _n_regionkey309);
                tbl_JOIN_INNER_TD_3769_output.setInt32(r, 0, _l_extendedprice117);
                tbl_JOIN_INNER_TD_3769_output.setInt32(r, 1, _l_discount134);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3769_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3769_output #Row: " << tbl_JOIN_INNER_TD_3769_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2862_key_leftMajor {
    int32_t _n_regionkey309;
    bool operator==(const SW_JOIN_INNER_TD_2862_key_leftMajor& other) const {
        return ((_n_regionkey309 == other._n_regionkey309));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2862_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2862_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_regionkey309));
    }
};
}
struct SW_JOIN_INNER_TD_2862_payload_leftMajor {
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    std::string _n_name297;
    int32_t _n_regionkey309;
};
struct SW_JOIN_INNER_TD_2862_key_rightMajor {
    int32_t _r_regionkey320;
    bool operator==(const SW_JOIN_INNER_TD_2862_key_rightMajor& other) const {
        return ((_r_regionkey320 == other._r_regionkey320));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2862_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2862_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._r_regionkey320));
    }
};
}
struct SW_JOIN_INNER_TD_2862_payload_rightMajor {
    int32_t _r_regionkey320;
};
void SW_JOIN_INNER_TD_2862(Table &tbl_JOIN_INNER_TD_3769_output, Table &tbl_Project_TD_3306_output, Table &tbl_JOIN_INNER_TD_2862_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((n_regionkey#309 = r_regionkey#320))
    // Left Table: ListBuffer(l_extendedprice#117, l_discount#134, n_name#297, n_regionkey#309)
    // Right Table: ListBuffer(r_regionkey#320)
    // Output Table: ListBuffer(l_extendedprice#117, l_discount#134, n_name#297)
    int left_nrow = tbl_JOIN_INNER_TD_3769_output.getNumRow();
    int right_nrow = tbl_Project_TD_3306_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2862_key_leftMajor, SW_JOIN_INNER_TD_2862_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3769_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_regionkey309_k = tbl_JOIN_INNER_TD_3769_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_2862_key_leftMajor keyA{_n_regionkey309_k};
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3769_output.getInt32(i, 0);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_3769_output.getInt32(i, 1);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n = tbl_JOIN_INNER_TD_3769_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
            std::string _n_name297 = std::string(_n_name297_n.data());
            int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_3769_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_2862_payload_leftMajor payloadA{_l_extendedprice117, _l_discount134, _n_name297, _n_regionkey309};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3306_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _r_regionkey320_k = tbl_Project_TD_3306_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2862_key_leftMajor{_r_regionkey320_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                std::string _n_name297 = (it->second)._n_name297;
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n{};
                memcpy(_n_name297_n.data(), (_n_name297).data(), (_n_name297).length());
                int32_t _n_regionkey309 = (it->second)._n_regionkey309;
                int32_t _r_regionkey320 = tbl_Project_TD_3306_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_2862_output.setInt32(r, 0, _l_extendedprice117);
                tbl_JOIN_INNER_TD_2862_output.setInt32(r, 1, _l_discount134);
                tbl_JOIN_INNER_TD_2862_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 2, _n_name297_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2862_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2862_key_rightMajor, SW_JOIN_INNER_TD_2862_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_3306_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _r_regionkey320_k = tbl_Project_TD_3306_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2862_key_rightMajor keyA{_r_regionkey320_k};
            int32_t _r_regionkey320 = tbl_Project_TD_3306_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2862_payload_rightMajor payloadA{_r_regionkey320};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3769_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_regionkey309_k = tbl_JOIN_INNER_TD_3769_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2862_key_rightMajor{_n_regionkey309_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _r_regionkey320 = (it->second)._r_regionkey320;
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3769_output.getInt32(i, 0);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_3769_output.getInt32(i, 1);
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297_n = tbl_JOIN_INNER_TD_3769_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
                std::string _n_name297 = std::string(_n_name297_n.data());
                int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_3769_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_2862_output.setInt32(r, 0, _l_extendedprice117);
                tbl_JOIN_INNER_TD_2862_output.setInt32(r, 1, _l_discount134);
                tbl_JOIN_INNER_TD_2862_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 2, _n_name297_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2862_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2862_output #Row: " << tbl_JOIN_INNER_TD_2862_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_167_key;
struct SW_Aggregate_TD_167_payload {
    int64_t _revenue1451L_sum_0;
};
void SW_Aggregate_TD_167(Table &tbl_JOIN_INNER_TD_2862_output, Table &tbl_Aggregate_TD_167_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(n_name#297, sum((l_extendedprice#117 * (100 - l_discount#134))) AS revenue#1451L)
    // Input: ListBuffer(l_extendedprice#117, l_discount#134, n_name#297)
    // Output: ListBuffer(n_name#297, revenue#1451L)
    std::unordered_map<SW_Aggregate_TD_167_key, SW_Aggregate_TD_167_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2862_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_2862_output.getInt32(i, 0);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_2862_output.getInt32(i, 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_JOIN_INNER_TD_2862_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        SW_Aggregate_TD_167_key k = std::string(_n_name297.data());
        int64_t _revenue1451L_sum_0 = (_l_extendedprice117 * (100 - _l_discount134));
        SW_Aggregate_TD_167_payload p{_revenue1451L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._revenue1451L_sum_0 + _revenue1451L_sum_0;
            p._revenue1451L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297{};
        memcpy(_n_name297.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_167_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _n_name297);
        int64_t _revenue1451L = (it.second)._revenue1451L_sum_0;
        tbl_Aggregate_TD_167_output.setInt64(r, 1, _revenue1451L);
        ++r;
    }
    tbl_Aggregate_TD_167_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_167_output #Row: " << tbl_Aggregate_TD_167_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0796(Table &tbl_Aggregate_TD_167_output, Table &tbl_Sort_TD_0796_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(revenue#1451L DESC NULLS LAST)
    // Input: ListBuffer(n_name#297, revenue#1451L)
    // Output: ListBuffer(n_name#297, revenue#1451L)
    struct SW_Sort_TD_0796Row {
        std::string _n_name297;
        int64_t _revenue1451L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0796Row& a, const SW_Sort_TD_0796Row& b) const { return 
 (a._revenue1451L > b._revenue1451L); 
}
    }SW_Sort_TD_0796_order; 

    int nrow1 = tbl_Aggregate_TD_167_output.getNumRow();
    std::vector<SW_Sort_TD_0796Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_Aggregate_TD_167_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _revenue1451L = tbl_Aggregate_TD_167_output.getInt64(i, 1);
        SW_Sort_TD_0796Row t = {std::string(_n_name297.data()),_revenue1451L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0796_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297{};
        memcpy(_n_name297.data(), (it._n_name297).data(), (it._n_name297).length());
        tbl_Sort_TD_0796_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _n_name297);
        tbl_Sort_TD_0796_output.setInt64(r, 1, it._revenue1451L);
        if (r < 10) {
            std::cout << (it._n_name297).data() << " " << it._revenue1451L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0796_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0796_output #Row: " << tbl_Sort_TD_0796_output.getNumRow() << std::endl;
}

