#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11349(Table &tbl_SerializeFromObject_TD_12246_input, Table &tbl_Filter_TD_11349_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_type#405) AND (p_type#405 = LARGE ANODIZED STEEL)) AND isnotnull(cast(p_partkey#402L as int))))
    // Input: ListBuffer(p_partkey#402L, p_type#405)
    // Output: ListBuffer(p_partkey#402L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12246_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_type405 = tbl_SerializeFromObject_TD_12246_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _p_partkey402L = tbl_SerializeFromObject_TD_12246_input.getInt64(i, 0);
        if (((1) && (std::string(_p_type405.data()) == "LARGE ANODIZED STEEL")) && (1)) {
            int64_t _p_partkey402L_t = tbl_SerializeFromObject_TD_12246_input.getInt64(i, 0);
            tbl_Filter_TD_11349_output.setInt64(r, 0, _p_partkey402L_t);
            r++;
        }
    }
    tbl_Filter_TD_11349_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11349_output #Row: " << tbl_Filter_TD_11349_output.getNumRow() << std::endl;
}

void SW_Project_TD_10384(Table &tbl_SerializeFromObject_TD_12286_input, Table &tbl_Project_TD_10384_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(l_partkey#1L as int) AS l_partkey#49, cast(l_suppkey#2L as int) AS l_suppkey#66, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_orderkey#0L, l_partkey#1L, l_suppkey#2L, l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_orderkey#32, l_partkey#49, l_suppkey#66, l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_SerializeFromObject_TD_12286_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_orderkey0L = tbl_SerializeFromObject_TD_12286_input.getInt64(i, 0);
        int64_t _l_partkey1L = tbl_SerializeFromObject_TD_12286_input.getInt64(i, 1);
        int64_t _l_suppkey2L = tbl_SerializeFromObject_TD_12286_input.getInt64(i, 2);
        int32_t _l_extendedprice5 = tbl_SerializeFromObject_TD_12286_input.getInt32(i, 3);
        int32_t _l_discount6 = tbl_SerializeFromObject_TD_12286_input.getInt32(i, 4);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_10384_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_partkey49 = _l_partkey1L;
        tbl_Project_TD_10384_output.setInt32(i, 1, _l_partkey49);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_10384_output.setInt32(i, 2, _l_suppkey66);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_10384_output.setInt32(i, 3, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_10384_output.setInt32(i, 4, _l_discount134);
    }
    tbl_Project_TD_10384_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10384_output #Row: " << tbl_Project_TD_10384_output.getNumRow() << std::endl;
}

void SW_Project_TD_10538(Table &tbl_Filter_TD_11349_output, Table &tbl_Project_TD_10538_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(p_partkey#402L as int) AS p_partkey#420)
    // Input: ListBuffer(p_partkey#402L)
    // Output: ListBuffer(p_partkey#420)
    int nrow1 = tbl_Filter_TD_11349_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _p_partkey402L = tbl_Filter_TD_11349_output.getInt64(i, 0);
        int32_t _p_partkey420 = _p_partkey402L;
        tbl_Project_TD_10538_output.setInt32(i, 0, _p_partkey420);
    }
    tbl_Project_TD_10538_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10538_output #Row: " << tbl_Project_TD_10538_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9864(Table &tbl_SerializeFromObject_TD_10597_input, Table &tbl_Filter_TD_9864_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_orderdate#332) AND ((cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) >= 19950101) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) <= 19961231))) AND (isnotnull(cast(o_orderkey#324L as int)) AND isnotnull(cast(o_custkey#325L as int)))))
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#324L, o_custkey#325L, o_orderdate#332)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10597_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _o_orderdate332 = tbl_SerializeFromObject_TD_10597_input.getInt32(i, 2);
        int64_t _o_orderkey324L = tbl_SerializeFromObject_TD_10597_input.getInt64(i, 0);
        int64_t _o_custkey325L = tbl_SerializeFromObject_TD_10597_input.getInt64(i, 1);
        if (((1) && ((_o_orderdate332 >= 19950101) && (_o_orderdate332 <= 19961231))) && ((1) && (1))) {
            int64_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_10597_input.getInt64(i, 0);
            tbl_Filter_TD_9864_output.setInt64(r, 0, _o_orderkey324L_t);
            int64_t _o_custkey325L_t = tbl_SerializeFromObject_TD_10597_input.getInt64(i, 1);
            tbl_Filter_TD_9864_output.setInt64(r, 1, _o_custkey325L_t);
            // Unsupported column typeDateType default to IntegerType
            int32_t _o_orderdate332_t = tbl_SerializeFromObject_TD_10597_input.getInt32(i, 2);
            tbl_Filter_TD_9864_output.setInt32(r, 2, _o_orderdate332_t);
            r++;
        }
    }
    tbl_Filter_TD_9864_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9864_output #Row: " << tbl_Filter_TD_9864_output.getNumRow() << std::endl;
}

void SW_Project_TD_9692(Table &tbl_SerializeFromObject_TD_11425_input, Table &tbl_Project_TD_9692_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#484L, s_nationkey#487L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_11425_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _s_suppkey484L = tbl_SerializeFromObject_TD_11425_input.getInt64(i, 0);
        int64_t _s_nationkey487L = tbl_SerializeFromObject_TD_11425_input.getInt64(i, 1);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_9692_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_9692_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_9692_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_9692_output #Row: " << tbl_Project_TD_9692_output.getNumRow() << std::endl;
}


void SW_Project_TD_871(Table &tbl_Filter_TD_9864_output, Table &tbl_Project_TD_871_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342, cast(o_custkey#325L as int) AS o_custkey#352, cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) AS o_orderdate#382)
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#342, o_custkey#352, o_orderdate#382)
    int nrow1 = tbl_Filter_TD_9864_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _o_orderkey324L = tbl_Filter_TD_9864_output.getInt64(i, 0);
        int64_t _o_custkey325L = tbl_Filter_TD_9864_output.getInt64(i, 1);
        // Unsupported input Type
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_871_output.setInt32(i, 0, _o_orderkey342);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_871_output.setInt32(i, 1, _o_custkey352);
        int32_t _o_orderdate382 = _o_orderdate332;
        tbl_Project_TD_871_output.setInt32(i, 2, _o_orderdate382);
    }
    tbl_Project_TD_871_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_871_output #Row: " << tbl_Project_TD_871_output.getNumRow() << std::endl;
}


void SW_Project_TD_7353(Table &tbl_SerializeFromObject_TD_9527_input, Table &tbl_Project_TD_7353_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(c_custkey#253L as int) AS c_custkey#269, cast(c_nationkey#256L as int) AS c_nationkey#278)
    // Input: ListBuffer(c_custkey#253L, c_nationkey#256L)
    // Output: ListBuffer(c_custkey#269, c_nationkey#278)
    int nrow1 = tbl_SerializeFromObject_TD_9527_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _c_custkey253L = tbl_SerializeFromObject_TD_9527_input.getInt64(i, 0);
        int64_t _c_nationkey256L = tbl_SerializeFromObject_TD_9527_input.getInt64(i, 1);
        int32_t _c_custkey269 = _c_custkey253L;
        tbl_Project_TD_7353_output.setInt32(i, 0, _c_custkey269);
        int32_t _c_nationkey278 = _c_nationkey256L;
        tbl_Project_TD_7353_output.setInt32(i, 1, _c_nationkey278);
    }
    tbl_Project_TD_7353_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_7353_output #Row: " << tbl_Project_TD_7353_output.getNumRow() << std::endl;
}


void SW_Project_TD_6628(Table &tbl_SerializeFromObject_TD_8581_input, Table &tbl_Project_TD_6628_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304, cast(n_regionkey#298L as int) AS n_regionkey#309)
    // Input: ListBuffer(n_nationkey#296L, n_regionkey#298L)
    // Output: ListBuffer(n_nationkey#304, n_regionkey#309)
    int nrow1 = tbl_SerializeFromObject_TD_8581_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey296L = tbl_SerializeFromObject_TD_8581_input.getInt64(i, 0);
        int64_t _n_regionkey298L = tbl_SerializeFromObject_TD_8581_input.getInt64(i, 1);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_6628_output.setInt32(i, 0, _n_nationkey304);
        int32_t _n_regionkey309 = _n_regionkey298L;
        tbl_Project_TD_6628_output.setInt32(i, 1, _n_regionkey309);
    }
    tbl_Project_TD_6628_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6628_output #Row: " << tbl_Project_TD_6628_output.getNumRow() << std::endl;
}


void SW_Filter_TD_5848(Table &tbl_SerializeFromObject_TD_6919_input, Table &tbl_Filter_TD_5848_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(r_name#315) AND (r_name#315 = MIDDLE EAST)) AND isnotnull(cast(r_regionkey#314L as int))))
    // Input: ListBuffer(r_regionkey#314L, r_name#315)
    // Output: ListBuffer(r_regionkey#314L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6919_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name315 = tbl_SerializeFromObject_TD_6919_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _r_regionkey314L = tbl_SerializeFromObject_TD_6919_input.getInt64(i, 0);
        if (((1) && (std::string(_r_name315.data()) == "MIDDLE EAST")) && (1)) {
            int64_t _r_regionkey314L_t = tbl_SerializeFromObject_TD_6919_input.getInt64(i, 0);
            tbl_Filter_TD_5848_output.setInt64(r, 0, _r_regionkey314L_t);
            r++;
        }
    }
    tbl_Filter_TD_5848_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5848_output #Row: " << tbl_Filter_TD_5848_output.getNumRow() << std::endl;
}

void SW_Project_TD_5787(Table &tbl_SerializeFromObject_TD_7758_input, Table &tbl_Project_TD_5787_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#1577L as int) AS n_nationkey#1582)
    // Input: ListBuffer(n_nationkey#1577L, n_name#1578)
    // Output: ListBuffer(n_nationkey#1582, n_name#1578)
    int nrow1 = tbl_SerializeFromObject_TD_7758_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey1577L = tbl_SerializeFromObject_TD_7758_input.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1578 = tbl_SerializeFromObject_TD_7758_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_nationkey1582 = _n_nationkey1577L;
        tbl_Project_TD_5787_output.setInt32(i, 0, _n_nationkey1582);
        tbl_Project_TD_5787_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _n_name1578);
    }
    tbl_Project_TD_5787_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5787_output #Row: " << tbl_Project_TD_5787_output.getNumRow() << std::endl;
}


void SW_Project_TD_4792(Table &tbl_Filter_TD_5848_output, Table &tbl_Project_TD_4792_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(r_regionkey#314L as int) AS r_regionkey#320)
    // Input: ListBuffer(r_regionkey#314L)
    // Output: ListBuffer(r_regionkey#320)
    int nrow1 = tbl_Filter_TD_5848_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _r_regionkey314L = tbl_Filter_TD_5848_output.getInt64(i, 0);
        int32_t _r_regionkey320 = _r_regionkey314L;
        tbl_Project_TD_4792_output.setInt32(i, 0, _r_regionkey320);
    }
    tbl_Project_TD_4792_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4792_output #Row: " << tbl_Project_TD_4792_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4966_key_leftMajor {
    int32_t _s_nationkey506;
    bool operator==(const SW_JOIN_INNER_TD_4966_key_leftMajor& other) const {
        return ((_s_nationkey506 == other._s_nationkey506));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4966_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4966_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_nationkey506));
    }
};
}
struct SW_JOIN_INNER_TD_4966_payload_leftMajor {
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    int32_t _s_nationkey506;
    int32_t _o_orderdate382;
    int32_t _n_regionkey309;
};
struct SW_JOIN_INNER_TD_4966_key_rightMajor {
    int32_t _n_nationkey1582;
    bool operator==(const SW_JOIN_INNER_TD_4966_key_rightMajor& other) const {
        return ((_n_nationkey1582 == other._n_nationkey1582));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4966_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4966_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey1582));
    }
};
}
struct SW_JOIN_INNER_TD_4966_payload_rightMajor {
    int32_t _n_nationkey1582;
    std::string _n_name1578;
};
void SW_JOIN_INNER_TD_4966(Table &tbl_JOIN_INNER_TD_5583_output, Table &tbl_Project_TD_5787_output, Table &tbl_JOIN_INNER_TD_4966_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_nationkey#506 = n_nationkey#1582))
    // Left Table: ListBuffer(l_extendedprice#117, l_discount#134, s_nationkey#506, o_orderdate#382, n_regionkey#309)
    // Right Table: ListBuffer(n_nationkey#1582, n_name#1578)
    // Output Table: ListBuffer(l_extendedprice#117, l_discount#134, o_orderdate#382, n_regionkey#309, n_name#1578)
    int left_nrow = tbl_JOIN_INNER_TD_5583_output.getNumRow();
    int right_nrow = tbl_Project_TD_5787_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4966_key_leftMajor, SW_JOIN_INNER_TD_4966_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5583_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4966_key_leftMajor keyA{_s_nationkey506_k};
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 0);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 1);
            int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 2);
            int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 3);
            int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4966_payload_leftMajor payloadA{_l_extendedprice117, _l_discount134, _s_nationkey506, _o_orderdate382, _n_regionkey309};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5787_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey1582_k = tbl_Project_TD_5787_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4966_key_leftMajor{_n_nationkey1582_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _s_nationkey506 = (it->second)._s_nationkey506;
                int32_t _o_orderdate382 = (it->second)._o_orderdate382;
                int32_t _n_regionkey309 = (it->second)._n_regionkey309;
                int32_t _n_nationkey1582 = tbl_Project_TD_5787_output.getInt32(i, 0);
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1578_n = tbl_Project_TD_5787_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
                std::string _n_name1578 = std::string(_n_name1578_n.data());
                tbl_JOIN_INNER_TD_4966_output.setInt32(r, 0, _l_extendedprice117);
                tbl_JOIN_INNER_TD_4966_output.setInt32(r, 1, _l_discount134);
                tbl_JOIN_INNER_TD_4966_output.setInt32(r, 2, _o_orderdate382);
                tbl_JOIN_INNER_TD_4966_output.setInt32(r, 3, _n_regionkey309);
                tbl_JOIN_INNER_TD_4966_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 4, _n_name1578_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4966_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4966_key_rightMajor, SW_JOIN_INNER_TD_4966_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5787_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey1582_k = tbl_Project_TD_5787_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4966_key_rightMajor keyA{_n_nationkey1582_k};
            int32_t _n_nationkey1582 = tbl_Project_TD_5787_output.getInt32(i, 0);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1578_n = tbl_Project_TD_5787_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
            std::string _n_name1578 = std::string(_n_name1578_n.data());
            SW_JOIN_INNER_TD_4966_payload_rightMajor payloadA{_n_nationkey1582, _n_name1578};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5583_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4966_key_rightMajor{_s_nationkey506_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey1582 = (it->second)._n_nationkey1582;
                std::string _n_name1578 = (it->second)._n_name1578;
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1578_n{};
                memcpy(_n_name1578_n.data(), (_n_name1578).data(), (_n_name1578).length());
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 0);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 1);
                int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 2);
                int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 3);
                int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_5583_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_4966_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 4, _n_name1578_n);
                tbl_JOIN_INNER_TD_4966_output.setInt32(r, 0, _l_extendedprice117);
                tbl_JOIN_INNER_TD_4966_output.setInt32(r, 1, _l_discount134);
                tbl_JOIN_INNER_TD_4966_output.setInt32(r, 2, _o_orderdate382);
                tbl_JOIN_INNER_TD_4966_output.setInt32(r, 3, _n_regionkey309);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4966_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4966_output #Row: " << tbl_JOIN_INNER_TD_4966_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3576_key_leftMajor {
    int32_t _n_regionkey309;
    bool operator==(const SW_JOIN_INNER_TD_3576_key_leftMajor& other) const {
        return ((_n_regionkey309 == other._n_regionkey309));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3576_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3576_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_regionkey309));
    }
};
}
struct SW_JOIN_INNER_TD_3576_payload_leftMajor {
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    int32_t _o_orderdate382;
    int32_t _n_regionkey309;
    std::string _n_name1578;
};
struct SW_JOIN_INNER_TD_3576_key_rightMajor {
    int32_t _r_regionkey320;
    bool operator==(const SW_JOIN_INNER_TD_3576_key_rightMajor& other) const {
        return ((_r_regionkey320 == other._r_regionkey320));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3576_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3576_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._r_regionkey320));
    }
};
}
struct SW_JOIN_INNER_TD_3576_payload_rightMajor {
    int32_t _r_regionkey320;
};
void SW_JOIN_INNER_TD_3576(Table &tbl_JOIN_INNER_TD_4966_output, Table &tbl_Project_TD_4792_output, Table &tbl_JOIN_INNER_TD_3576_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((n_regionkey#309 = r_regionkey#320))
    // Left Table: ListBuffer(l_extendedprice#117, l_discount#134, o_orderdate#382, n_regionkey#309, n_name#1578)
    // Right Table: ListBuffer(r_regionkey#320)
    // Output Table: ListBuffer(o_orderdate#382, l_extendedprice#117, l_discount#134, n_name#1578)
    int left_nrow = tbl_JOIN_INNER_TD_4966_output.getNumRow();
    int right_nrow = tbl_Project_TD_4792_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3576_key_leftMajor, SW_JOIN_INNER_TD_3576_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4966_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_regionkey309_k = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_3576_key_leftMajor keyA{_n_regionkey309_k};
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 0);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 1);
            int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 2);
            int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 3);
            std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1578_n = tbl_JOIN_INNER_TD_4966_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 4);
            std::string _n_name1578 = std::string(_n_name1578_n.data());
            SW_JOIN_INNER_TD_3576_payload_leftMajor payloadA{_l_extendedprice117, _l_discount134, _o_orderdate382, _n_regionkey309, _n_name1578};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_4792_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _r_regionkey320_k = tbl_Project_TD_4792_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3576_key_leftMajor{_r_regionkey320_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _o_orderdate382 = (it->second)._o_orderdate382;
                int32_t _n_regionkey309 = (it->second)._n_regionkey309;
                std::string _n_name1578 = (it->second)._n_name1578;
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1578_n{};
                memcpy(_n_name1578_n.data(), (_n_name1578).data(), (_n_name1578).length());
                int32_t _r_regionkey320 = tbl_Project_TD_4792_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3576_output.setInt32(r, 1, _l_extendedprice117);
                tbl_JOIN_INNER_TD_3576_output.setInt32(r, 2, _l_discount134);
                tbl_JOIN_INNER_TD_3576_output.setInt32(r, 0, _o_orderdate382);
                tbl_JOIN_INNER_TD_3576_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 3, _n_name1578_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3576_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3576_key_rightMajor, SW_JOIN_INNER_TD_3576_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4792_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _r_regionkey320_k = tbl_Project_TD_4792_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3576_key_rightMajor keyA{_r_regionkey320_k};
            int32_t _r_regionkey320 = tbl_Project_TD_4792_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3576_payload_rightMajor payloadA{_r_regionkey320};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4966_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_regionkey309_k = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3576_key_rightMajor{_n_regionkey309_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _r_regionkey320 = (it->second)._r_regionkey320;
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 0);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 1);
                int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 2);
                int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_4966_output.getInt32(i, 3);
                std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1578_n = tbl_JOIN_INNER_TD_4966_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 4);
                std::string _n_name1578 = std::string(_n_name1578_n.data());
                tbl_JOIN_INNER_TD_3576_output.setInt32(r, 1, _l_extendedprice117);
                tbl_JOIN_INNER_TD_3576_output.setInt32(r, 2, _l_discount134);
                tbl_JOIN_INNER_TD_3576_output.setInt32(r, 0, _o_orderdate382);
                tbl_JOIN_INNER_TD_3576_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 3, _n_name1578_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3576_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3576_output #Row: " << tbl_JOIN_INNER_TD_3576_output.getNumRow() << std::endl;
}

void SW_Project_TD_2743(Table &tbl_JOIN_INNER_TD_3576_output, Table &tbl_Project_TD_2743_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast((cast(o_orderdate#382 as double) / 10000.0) as int) AS o_year#1573, (l_extendedprice#117 * (100 - l_discount#134)) AS volume#1574, n_name#1578 AS nation#1575)
    // Input: ListBuffer(o_orderdate#382, l_extendedprice#117, l_discount#134, n_name#1578)
    // Output: ListBuffer(o_year#1573, volume#1574, nation#1575)
    int nrow1 = tbl_JOIN_INNER_TD_3576_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_3576_output.getInt32(i, 0);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3576_output.getInt32(i, 1);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_3576_output.getInt32(i, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name1578 = tbl_JOIN_INNER_TD_3576_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 3);
        int32_t _o_year1573 = (_o_orderdate382 / 10000.0);
        tbl_Project_TD_2743_output.setInt32(i, 0, _o_year1573);
        int32_t _volume1574 = (_l_extendedprice117 * (100 - _l_discount134));
        tbl_Project_TD_2743_output.setInt32(i, 1, _volume1574);
        std::array<char, TPCH_READ_REGION_LEN + 1> _nation1575 = _n_name1578;
        tbl_Project_TD_2743_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2, _nation1575);
    }
    tbl_Project_TD_2743_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2743_output #Row: " << tbl_Project_TD_2743_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_1231_key;
struct SW_Aggregate_TD_1231_payload {
    int64_t _mkt_share1576_sum_0;
    int64_t _mkt_share1576_sum_1;
};
void SW_Aggregate_TD_1231(Table &tbl_Project_TD_2743_output, Table &tbl_Aggregate_TD_1231_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(o_year#1573, (cast(sum(CASE WHEN (nation#1575 = IRAQ) THEN volume#1574 ELSE 0 END) as double) / cast(sum(volume#1574) as double)) AS mkt_share#1576)
    // Input: ListBuffer(o_year#1573, volume#1574, nation#1575)
    // Output: ListBuffer(o_year#1573, mkt_share#1576)
    std::unordered_map<SW_Aggregate_TD_1231_key, SW_Aggregate_TD_1231_payload> ht1;
    int nrow1 = tbl_Project_TD_2743_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_year1573 = tbl_Project_TD_2743_output.getInt32(i, 0);
        int32_t _volume1574 = tbl_Project_TD_2743_output.getInt32(i, 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _nation1575 = tbl_Project_TD_2743_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        SW_Aggregate_TD_1231_key k = _o_year1573;
        int64_t _mkt_share1576_sum_0 = (std::string(_nation1575.data()) == "IRAQ") ? _volume1574 : 0;
        int64_t _mkt_share1576_sum_1 = _volume1574;
        SW_Aggregate_TD_1231_payload p{_mkt_share1576_sum_0, _mkt_share1576_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._mkt_share1576_sum_0 + _mkt_share1576_sum_0;
            p._mkt_share1576_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._mkt_share1576_sum_1 + _mkt_share1576_sum_1;
            p._mkt_share1576_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_1231_output.setInt32(r, 0, (it.first));
        int64_t _mkt_share1576 = ((it.second)._mkt_share1576_sum_0 / (it.second)._mkt_share1576_sum_1);
        tbl_Aggregate_TD_1231_output.setInt64(r, 1, _mkt_share1576);
        ++r;
    }
    tbl_Aggregate_TD_1231_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1231_output #Row: " << tbl_Aggregate_TD_1231_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0936(Table &tbl_Aggregate_TD_1231_output, Table &tbl_Sort_TD_0936_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(o_year#1573 ASC NULLS FIRST)
    // Input: ListBuffer(o_year#1573, mkt_share#1576)
    // Output: ListBuffer(o_year#1573, mkt_share#1576)
    struct SW_Sort_TD_0936Row {
        int32_t _o_year1573;
        int64_t _mkt_share1576;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0936Row& a, const SW_Sort_TD_0936Row& b) const { return 
 (a._o_year1573 < b._o_year1573); 
}
    }SW_Sort_TD_0936_order; 

    int nrow1 = tbl_Aggregate_TD_1231_output.getNumRow();
    std::vector<SW_Sort_TD_0936Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_year1573 = tbl_Aggregate_TD_1231_output.getInt32(i, 0);
        int64_t _mkt_share1576 = tbl_Aggregate_TD_1231_output.getInt64(i, 1);
        SW_Sort_TD_0936Row t = {_o_year1573,_mkt_share1576};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0936_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0936_output.setInt32(r, 0, it._o_year1573);
        tbl_Sort_TD_0936_output.setInt64(r, 1, it._mkt_share1576);
        if (r < 10) {
            std::cout << it._o_year1573 << " " << it._mkt_share1576 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0936_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0936_output #Row: " << tbl_Sort_TD_0936_output.getNumRow() << std::endl;
}

