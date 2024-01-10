#include <regex> 
#include <stdint.h> 

void SW_Project_TD_10913(Table &tbl_SerializeFromObject_TD_1294_input, Table &tbl_Project_TD_10913_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#1284L as int) AS s_suppkey#498, cast(s_nationkey#1287L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#1284L, s_nationkey#1287L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_1294_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey1284L = tbl_SerializeFromObject_TD_1294_input.getInt32(i, 0);
        int32_t _s_nationkey1287L = tbl_SerializeFromObject_TD_1294_input.getInt32(i, 1);
        int32_t _s_suppkey498 = _s_suppkey1284L;
        tbl_Project_TD_10913_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey1287L;
        tbl_Project_TD_10913_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_10913_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10913_output #Row: " << tbl_Project_TD_10913_output.getNumRow() << std::endl;
}

void SW_Project_TD_10234(Table &tbl_SerializeFromObject_TD_12480_input, Table &tbl_Project_TD_10234_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_partkey#1279L as int) AS ps_partkey#460, cast(ps_suppkey#1280L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#1282) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_partkey#1279L, ps_suppkey#1280L, ps_supplycost#1282)
    // Output: ListBuffer(ps_partkey#460, ps_suppkey#466, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_12480_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey1279L = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 0);
        int32_t _ps_suppkey1280L = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 1);
        int32_t _ps_supplycost1282 = tbl_SerializeFromObject_TD_12480_input.getInt32(i, 2);
        int32_t _ps_partkey460 = _ps_partkey1279L;
        tbl_Project_TD_10234_output.setInt32(i, 0, _ps_partkey460);
        int32_t _ps_suppkey466 = _ps_suppkey1280L;
        tbl_Project_TD_10234_output.setInt32(i, 1, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost1282 * 100.00);
        tbl_Project_TD_10234_output.setInt32(i, 2, _ps_supplycost478);
    }
    tbl_Project_TD_10234_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10234_output #Row: " << tbl_Project_TD_10234_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9144(Table &tbl_SerializeFromObject_TD_10853_input, Table &tbl_Filter_TD_9144_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(r_regionkey#1295L) AND ((isnotnull(r_name#1296) AND (r_name#1296 = AMERICA)) AND isnotnull(cast(r_regionkey#1295L as int)))))
    // Input: ListBuffer(r_regionkey#1295L, r_name#1296)
    // Output: ListBuffer(r_regionkey#1295L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10853_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _r_regionkey1295L = tbl_SerializeFromObject_TD_10853_input.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name1296 = tbl_SerializeFromObject_TD_10853_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        if ((1) && (((1) && (std::string(_r_name1296.data()) == "AMERICA")) && (1))) {
            int64_t _r_regionkey1295L_t = tbl_SerializeFromObject_TD_10853_input.getInt64(i, 0);
            tbl_Filter_TD_9144_output.setInt64(r, 0, _r_regionkey1295L_t);
            r++;
        }
    }
    tbl_Filter_TD_9144_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9144_output #Row: " << tbl_Filter_TD_9144_output.getNumRow() << std::endl;
}

void SW_Project_TD_9300(Table &tbl_SerializeFromObject_TD_11949_input, Table &tbl_Project_TD_9300_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#1291L as int) AS n_nationkey#304, cast(n_regionkey#1293L as int) AS n_regionkey#309)
    // Input: ListBuffer(n_nationkey#1291L, n_regionkey#1293L)
    // Output: ListBuffer(n_nationkey#304, n_regionkey#309)
    int nrow1 = tbl_SerializeFromObject_TD_11949_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey1291L = tbl_SerializeFromObject_TD_11949_input.getInt32(i, 0);
        int32_t _n_regionkey1293L = tbl_SerializeFromObject_TD_11949_input.getInt32(i, 1);
        int32_t _n_nationkey304 = _n_nationkey1291L;
        tbl_Project_TD_9300_output.setInt32(i, 0, _n_nationkey304);
        int32_t _n_regionkey309 = _n_regionkey1293L;
        tbl_Project_TD_9300_output.setInt32(i, 1, _n_regionkey309);
    }
    tbl_Project_TD_9300_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_9300_output #Row: " << tbl_Project_TD_9300_output.getNumRow() << std::endl;
}


void SW_Project_TD_8624(Table &tbl_Filter_TD_9144_output, Table &tbl_Project_TD_8624_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(r_regionkey#1295L as int) AS r_regionkey#320)
    // Input: ListBuffer(r_regionkey#1295L)
    // Output: ListBuffer(r_regionkey#320)
    int nrow1 = tbl_Filter_TD_9144_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_regionkey1295L = tbl_Filter_TD_9144_output.getInt32(i, 0);
        int32_t _r_regionkey320 = _r_regionkey1295L;
        tbl_Project_TD_8624_output.setInt32(i, 0, _r_regionkey320);
    }
    tbl_Project_TD_8624_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8624_output #Row: " << tbl_Project_TD_8624_output.getNumRow() << std::endl;
}


void SW_Filter_TD_747(Table &tbl_SerializeFromObject_TD_8634_input, Table &tbl_Filter_TD_747_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(p_size#406) AND isnotnull(p_type#405)) AND ((p_size#406 = 19) AND EndsWith(p_type#405, NICKEL))) AND isnotnull(cast(p_partkey#402L as int))))
    // Input: ListBuffer(p_partkey#402L, p_mfgr#404, p_size#406, p_type#405)
    // Output: ListBuffer(p_partkey#402L, p_mfgr#404)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8634_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_size406 = tbl_SerializeFromObject_TD_8634_input.getInt32(i, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_type405 = tbl_SerializeFromObject_TD_8634_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 3);
        int64_t _p_partkey402L = tbl_SerializeFromObject_TD_8634_input.getInt64(i, 0);
        if ((((1) && (1)) && ((_p_size406 == 19) && (std::string(_p_type405.data()).find("NICKEL")==std::string(_p_type405.data()).length() - 6))) && (1)) {
            int64_t _p_partkey402L_t = tbl_SerializeFromObject_TD_8634_input.getInt64(i, 0);
            tbl_Filter_TD_747_output.setInt64(r, 0, _p_partkey402L_t);
            tbl_Filter_TD_747_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_747_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_747_output #Row: " << tbl_Filter_TD_747_output.getNumRow() << std::endl;
}


void SW_Project_TD_6765(Table &tbl_SerializeFromObject_TD_8423_input, Table &tbl_Project_TD_6765_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_partkey#450L as int) AS ps_partkey#460, cast(ps_suppkey#451L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#453) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_supplycost#453)
    // Output: ListBuffer(ps_partkey#460, ps_suppkey#466, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_8423_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey450L = tbl_SerializeFromObject_TD_8423_input.getInt32(i, 0);
        int32_t _ps_suppkey451L = tbl_SerializeFromObject_TD_8423_input.getInt32(i, 1);
        int32_t _ps_supplycost453 = tbl_SerializeFromObject_TD_8423_input.getInt32(i, 2);
        int32_t _ps_partkey460 = _ps_partkey450L;
        tbl_Project_TD_6765_output.setInt32(i, 0, _ps_partkey460);
        int32_t _ps_suppkey466 = _ps_suppkey451L;
        tbl_Project_TD_6765_output.setInt32(i, 1, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost453 * 100.00);
        tbl_Project_TD_6765_output.setInt32(i, 2, _ps_supplycost478);
    }
    tbl_Project_TD_6765_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6765_output #Row: " << tbl_Project_TD_6765_output.getNumRow() << std::endl;
}

void SW_Project_TD_6732(Table &tbl_Filter_TD_747_output, Table &tbl_Project_TD_6732_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(p_partkey#402L as int) AS p_partkey#420)
    // Input: ListBuffer(p_partkey#402L, p_mfgr#404)
    // Output: ListBuffer(p_partkey#420, p_mfgr#404)
    int nrow1 = tbl_Filter_TD_747_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_partkey402L = tbl_Filter_TD_747_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_mfgr404 = tbl_Filter_TD_747_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _p_partkey420 = _p_partkey402L;
        tbl_Project_TD_6732_output.setInt32(i, 0, _p_partkey420);
        tbl_Project_TD_6732_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _p_mfgr404);
    }
    tbl_Project_TD_6732_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6732_output #Row: " << tbl_Project_TD_6732_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_6304_key;
struct SW_Aggregate_TD_6304_payload {
    int32_t _minps_supplycost1278_min_0;
    int32_t _ps_partkey4601361;
};
void SW_Aggregate_TD_6304(Table &tbl_JOIN_INNER_TD_7488_output, Table &tbl_Aggregate_TD_6304_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ps_partkey#460, min(ps_supplycost#478) AS min(ps_supplycost)#1278, ps_partkey#460 AS ps_partkey#460#1361)
    // Input: ListBuffer(ps_partkey#460, ps_supplycost#478)
    // Output: ListBuffer(min(ps_supplycost)#1278, ps_partkey#460#1361)
    std::unordered_map<SW_Aggregate_TD_6304_key, SW_Aggregate_TD_6304_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7488_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey460 = tbl_JOIN_INNER_TD_7488_output.getInt32(i, 0);
        int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_7488_output.getInt32(i, 1);
        SW_Aggregate_TD_6304_key k = _ps_partkey460;
        int32_t _minps_supplycost1278_min_0 = _ps_supplycost478;
        int32_t _ps_partkey4601361 = _ps_partkey460;
        SW_Aggregate_TD_6304_payload p{_minps_supplycost1278_min_0, _ps_partkey4601361};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t min_0 = (it->second)._minps_supplycost1278_min_0 > _minps_supplycost1278_min_0 ? _minps_supplycost1278_min_0 : (it->second)._minps_supplycost1278_min_0;
            p._minps_supplycost1278_min_0 = min_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ps_partkey460 not required in the output table
        int32_t _minps_supplycost1278 = (it.second)._minps_supplycost1278_min_0;
        tbl_Aggregate_TD_6304_output.setInt32(r, 0, _minps_supplycost1278);
        tbl_Aggregate_TD_6304_output.setInt32(r, 1, (it.second)._ps_partkey4601361);
        ++r;
    }
    tbl_Aggregate_TD_6304_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6304_output #Row: " << tbl_Aggregate_TD_6304_output.getNumRow() << std::endl;
}


void SW_Project_TD_4974(Table &tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute, Table &tbl_Project_TD_4974_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506, cast(CheckOverflow((promote_precision(s_acctbal#489) * 100.00), DecimalType(16,2), true) as int) AS s_acctbal#514)
    // Input: ListBuffer(s_suppkey#484L, s_name#485, s_address#486, s_nationkey#487L, s_phone#488, s_acctbal#489, s_comment#490)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_nationkey#506, s_phone#488, s_acctbal#514, s_comment#490)
    int nrow1 = tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey484L = tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        int32_t _s_nationkey487L = tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getInt32(i, 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 4);
        int32_t _s_acctbal489 = tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getInt32(i, 5);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_comment490 = tbl_SerializeFromObject_TD_6406_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 6);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_4974_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_4974_output.setInt32(i, 3, _s_nationkey506);
        int32_t _s_acctbal514 = (_s_acctbal489 * 100.00);
        tbl_Project_TD_4974_output.setInt32(i, 5, _s_acctbal514);
        tbl_Project_TD_4974_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _s_name485);
        tbl_Project_TD_4974_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2, _s_address486);
        tbl_Project_TD_4974_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 4, _s_phone488);
        tbl_Project_TD_4974_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 6, _s_comment490);
    }
    tbl_Project_TD_4974_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4974_output #Row: " << tbl_Project_TD_4974_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4202_key_leftMajor {
    int32_t _ps_supplycost478;
    int32_t _p_partkey420;
    bool operator==(const SW_JOIN_INNER_TD_4202_key_leftMajor& other) const {
        return ((_ps_supplycost478 == other._ps_supplycost478) && (_p_partkey420 == other._p_partkey420));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4202_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4202_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_supplycost478)) + (hash<int32_t>()(k._p_partkey420));
    }
};
}
struct SW_JOIN_INNER_TD_4202_payload_leftMajor {
    int32_t _p_partkey420;
    int32_t _p_mfgr404;
    int32_t _ps_suppkey466;
    int32_t _ps_supplycost478;
};
struct SW_JOIN_INNER_TD_4202_key_rightMajor {
    int32_t _minps_supplycost1278;
    int32_t _ps_partkey4601361;
    bool operator==(const SW_JOIN_INNER_TD_4202_key_rightMajor& other) const {
        return ((_minps_supplycost1278 == other._minps_supplycost1278) && (_ps_partkey4601361 == other._ps_partkey4601361));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4202_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4202_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._minps_supplycost1278)) + (hash<int32_t>()(k._ps_partkey4601361));
    }
};
}
struct SW_JOIN_INNER_TD_4202_payload_rightMajor {
    int32_t _minps_supplycost1278;
    int32_t _ps_partkey4601361;
};
void SW_JOIN_INNER_TD_4202(Table &tbl_JOIN_INNER_TD_522_output, Table &tbl_Aggregate_TD_6304_output, Table &tbl_JOIN_INNER_TD_4202_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ps_supplycost#478 = min(ps_supplycost)#1278) AND (p_partkey#420 = ps_partkey#460#1361)))
    // Left Table: ListBuffer(p_partkey#420, p_mfgr#404, ps_suppkey#466, ps_supplycost#478)
    // Right Table: ListBuffer(min(ps_supplycost)#1278, ps_partkey#460#1361)
    // Output Table: ListBuffer(p_partkey#420, p_mfgr#404, ps_suppkey#466)
    int left_nrow = tbl_JOIN_INNER_TD_522_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6304_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4202_key_leftMajor, SW_JOIN_INNER_TD_4202_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_522_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ps_supplycost478_k = tbl_JOIN_INNER_TD_522_output.getInt32(i, 3);
            int32_t _p_partkey420_k = tbl_JOIN_INNER_TD_522_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4202_key_leftMajor keyA{_ps_supplycost478_k, _p_partkey420_k};
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_522_output.getInt32(i, 0);
            int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_522_output.getInt32(i, 1);
            int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_522_output.getInt32(i, 2);
            int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_522_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_4202_payload_leftMajor payloadA{_p_partkey420, _p_mfgr404, _ps_suppkey466, _ps_supplycost478};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6304_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _minps_supplycost1278_k = tbl_Aggregate_TD_6304_output.getInt32(i, 0);
            int32_t _ps_partkey4601361_k = tbl_Aggregate_TD_6304_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4202_key_leftMajor{_minps_supplycost1278_k, _ps_partkey4601361_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                int32_t _p_mfgr404 = (it->second)._p_mfgr404;
                int32_t _ps_suppkey466 = (it->second)._ps_suppkey466;
                int32_t _ps_supplycost478 = (it->second)._ps_supplycost478;
                int32_t _minps_supplycost1278 = tbl_Aggregate_TD_6304_output.getInt32(i, 0);
                int32_t _ps_partkey4601361 = tbl_Aggregate_TD_6304_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4202_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_4202_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_4202_output.setInt32(r, 2, _ps_suppkey466);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4202_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4202_key_rightMajor, SW_JOIN_INNER_TD_4202_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6304_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _minps_supplycost1278_k = tbl_Aggregate_TD_6304_output.getInt32(i, 0);
            int32_t _ps_partkey4601361_k = tbl_Aggregate_TD_6304_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4202_key_rightMajor keyA{_minps_supplycost1278_k, _ps_partkey4601361_k};
            int32_t _minps_supplycost1278 = tbl_Aggregate_TD_6304_output.getInt32(i, 0);
            int32_t _ps_partkey4601361 = tbl_Aggregate_TD_6304_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4202_payload_rightMajor payloadA{_minps_supplycost1278, _ps_partkey4601361};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_522_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ps_supplycost478_k = tbl_JOIN_INNER_TD_522_output.getInt32(i, 3);
            int32_t _p_partkey420_k = tbl_JOIN_INNER_TD_522_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4202_key_rightMajor{_ps_supplycost478_k, _p_partkey420_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _minps_supplycost1278 = (it->second)._minps_supplycost1278;
                int32_t _ps_partkey4601361 = (it->second)._ps_partkey4601361;
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_522_output.getInt32(i, 0);
                int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_522_output.getInt32(i, 1);
                int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_522_output.getInt32(i, 2);
                int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_522_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_4202_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_4202_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_4202_output.setInt32(r, 2, _ps_suppkey466);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4202_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4202_output #Row: " << tbl_JOIN_INNER_TD_4202_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3771(Table &tbl_SerializeFromObject_TD_4355_input, Table &tbl_Filter_TD_3771_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(r_name#315) AND (r_name#315 = AMERICA)) AND isnotnull(cast(r_regionkey#314L as int))))
    // Input: ListBuffer(r_regionkey#314L, r_name#315)
    // Output: ListBuffer(r_regionkey#314L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4355_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name315 = tbl_SerializeFromObject_TD_4355_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _r_regionkey314L = tbl_SerializeFromObject_TD_4355_input.getInt32(i, 0);
        if (((1) && (std::string(_r_name315.data()) == "AMERICA")) && (1)) {
            int32_t _r_regionkey314L_t = tbl_SerializeFromObject_TD_4355_input.getInt32(i, 0);
            tbl_Filter_TD_3771_output.setInt32(r, 0, _r_regionkey314L_t);
            r++;
        }
    }
    tbl_Filter_TD_3771_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3771_output #Row: " << tbl_Filter_TD_3771_output.getNumRow() << std::endl;
}

void SW_Project_TD_3826(Table &tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute, Table &tbl_Project_TD_3826_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304, cast(n_regionkey#298L as int) AS n_regionkey#309)
    // Input: ListBuffer(n_nationkey#296L, n_name#297, n_regionkey#298L)
    // Output: ListBuffer(n_nationkey#304, n_name#297, n_regionkey#309)
    int nrow1 = tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_regionkey298L = tbl_SerializeFromObject_TD_5822_input_stringRowIDSubstitute.getInt32(i, 2);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_3826_output.setInt32(i, 0, _n_nationkey304);
        int32_t _n_regionkey309 = _n_regionkey298L;
        tbl_Project_TD_3826_output.setInt32(i, 2, _n_regionkey309);
        tbl_Project_TD_3826_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _n_name297);
    }
    tbl_Project_TD_3826_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3826_output #Row: " << tbl_Project_TD_3826_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3641_key_leftMajor {
    int32_t _ps_suppkey466;
    bool operator==(const SW_JOIN_INNER_TD_3641_key_leftMajor& other) const {
        return ((_ps_suppkey466 == other._ps_suppkey466));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3641_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3641_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_suppkey466));
    }
};
}
struct SW_JOIN_INNER_TD_3641_payload_leftMajor {
    int32_t _p_partkey420;
    int32_t _p_mfgr404;
    int32_t _ps_suppkey466;
};
struct SW_JOIN_INNER_TD_3641_key_rightMajor {
    int32_t _s_suppkey498;
    bool operator==(const SW_JOIN_INNER_TD_3641_key_rightMajor& other) const {
        return ((_s_suppkey498 == other._s_suppkey498));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3641_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3641_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_suppkey498));
    }
};
}
struct SW_JOIN_INNER_TD_3641_payload_rightMajor {
    int32_t _s_suppkey498;
    int32_t _s_name485;
    int32_t _s_address486;
    int32_t _s_nationkey506;
    int32_t _s_phone488;
    int32_t _s_acctbal514;
    int32_t _s_comment490;
};
void SW_JOIN_INNER_TD_3641(Table &tbl_JOIN_INNER_TD_4202_output, Table &tbl_Project_TD_4974_output, Table &tbl_JOIN_INNER_TD_3641_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_suppkey#498 = ps_suppkey#466))
    // Left Table: ListBuffer(p_partkey#420, p_mfgr#404, ps_suppkey#466)
    // Right Table: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_nationkey#506, s_phone#488, s_acctbal#514, s_comment#490)
    // Output Table: ListBuffer(p_partkey#420, p_mfgr#404, s_name#485, s_address#486, s_nationkey#506, s_phone#488, s_acctbal#514, s_comment#490)
    int left_nrow = tbl_JOIN_INNER_TD_4202_output.getNumRow();
    int right_nrow = tbl_Project_TD_4974_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3641_key_leftMajor, SW_JOIN_INNER_TD_3641_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4202_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ps_suppkey466_k = tbl_JOIN_INNER_TD_4202_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3641_key_leftMajor keyA{_ps_suppkey466_k};
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_4202_output.getInt32(i, 0);
            int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_4202_output.getInt32(i, 1);
            int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_4202_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3641_payload_leftMajor payloadA{_p_partkey420, _p_mfgr404, _ps_suppkey466};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_4974_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_suppkey498_k = tbl_Project_TD_4974_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3641_key_leftMajor{_s_suppkey498_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                int32_t _p_mfgr404 = (it->second)._p_mfgr404;
                int32_t _ps_suppkey466 = (it->second)._ps_suppkey466;
                int32_t _s_suppkey498 = tbl_Project_TD_4974_output.getInt32(i, 0);
                int32_t _s_name485 = tbl_Project_TD_4974_output.getInt32(i, 1);
                int32_t _s_address486 = tbl_Project_TD_4974_output.getInt32(i, 2);
                int32_t _s_nationkey506 = tbl_Project_TD_4974_output.getInt32(i, 3);
                int32_t _s_phone488 = tbl_Project_TD_4974_output.getInt32(i, 4);
                int32_t _s_acctbal514 = tbl_Project_TD_4974_output.getInt32(i, 5);
                int32_t _s_comment490 = tbl_Project_TD_4974_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 2, _s_name485);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 3, _s_address486);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 4, _s_nationkey506);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 5, _s_phone488);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 6, _s_acctbal514);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 7, _s_comment490);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3641_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3641_key_rightMajor, SW_JOIN_INNER_TD_3641_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4974_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_suppkey498_k = tbl_Project_TD_4974_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3641_key_rightMajor keyA{_s_suppkey498_k};
            int32_t _s_suppkey498 = tbl_Project_TD_4974_output.getInt32(i, 0);
            int32_t _s_name485 = tbl_Project_TD_4974_output.getInt32(i, 1);
            int32_t _s_address486 = tbl_Project_TD_4974_output.getInt32(i, 2);
            int32_t _s_nationkey506 = tbl_Project_TD_4974_output.getInt32(i, 3);
            int32_t _s_phone488 = tbl_Project_TD_4974_output.getInt32(i, 4);
            int32_t _s_acctbal514 = tbl_Project_TD_4974_output.getInt32(i, 5);
            int32_t _s_comment490 = tbl_Project_TD_4974_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_3641_payload_rightMajor payloadA{_s_suppkey498, _s_name485, _s_address486, _s_nationkey506, _s_phone488, _s_acctbal514, _s_comment490};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4202_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ps_suppkey466_k = tbl_JOIN_INNER_TD_4202_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3641_key_rightMajor{_ps_suppkey466_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_suppkey498 = (it->second)._s_suppkey498;
                int32_t _s_name485 = (it->second)._s_name485;
                int32_t _s_address486 = (it->second)._s_address486;
                int32_t _s_nationkey506 = (it->second)._s_nationkey506;
                int32_t _s_phone488 = (it->second)._s_phone488;
                int32_t _s_acctbal514 = (it->second)._s_acctbal514;
                int32_t _s_comment490 = (it->second)._s_comment490;
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_4202_output.getInt32(i, 0);
                int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_4202_output.getInt32(i, 1);
                int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_4202_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 2, _s_name485);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 3, _s_address486);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 4, _s_nationkey506);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 5, _s_phone488);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 6, _s_acctbal514);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 7, _s_comment490);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_3641_output.setInt32(r, 1, _p_mfgr404);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3641_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3641_output #Row: " << tbl_JOIN_INNER_TD_3641_output.getNumRow() << std::endl;
}

void SW_Project_TD_2528(Table &tbl_Filter_TD_3771_output, Table &tbl_Project_TD_2528_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(r_regionkey#314L as int) AS r_regionkey#320)
    // Input: ListBuffer(r_regionkey#314L)
    // Output: ListBuffer(r_regionkey#320)
    int nrow1 = tbl_Filter_TD_3771_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_regionkey314L = tbl_Filter_TD_3771_output.getInt32(i, 0);
        int32_t _r_regionkey320 = _r_regionkey314L;
        tbl_Project_TD_2528_output.setInt32(i, 0, _r_regionkey320);
    }
    tbl_Project_TD_2528_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2528_output #Row: " << tbl_Project_TD_2528_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2536_key_leftMajor {
    int32_t _s_nationkey506;
    bool operator==(const SW_JOIN_INNER_TD_2536_key_leftMajor& other) const {
        return ((_s_nationkey506 == other._s_nationkey506));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2536_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2536_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_nationkey506));
    }
};
}
struct SW_JOIN_INNER_TD_2536_payload_leftMajor {
    int32_t _p_partkey420;
    int32_t _p_mfgr404;
    int32_t _s_name485;
    int32_t _s_address486;
    int32_t _s_nationkey506;
    int32_t _s_phone488;
    int32_t _s_acctbal514;
    int32_t _s_comment490;
};
struct SW_JOIN_INNER_TD_2536_key_rightMajor {
    int32_t _n_nationkey304;
    bool operator==(const SW_JOIN_INNER_TD_2536_key_rightMajor& other) const {
        return ((_n_nationkey304 == other._n_nationkey304));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2536_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2536_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey304));
    }
};
}
struct SW_JOIN_INNER_TD_2536_payload_rightMajor {
    int32_t _n_nationkey304;
    int32_t _n_name297;
    int32_t _n_regionkey309;
};
void SW_JOIN_INNER_TD_2536(Table &tbl_JOIN_INNER_TD_3641_output, Table &tbl_Project_TD_3826_output, Table &tbl_JOIN_INNER_TD_2536_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_nationkey#506 = n_nationkey#304))
    // Left Table: ListBuffer(p_partkey#420, p_mfgr#404, s_name#485, s_address#486, s_nationkey#506, s_phone#488, s_acctbal#514, s_comment#490)
    // Right Table: ListBuffer(n_nationkey#304, n_name#297, n_regionkey#309)
    // Output Table: ListBuffer(p_partkey#420, p_mfgr#404, s_name#485, s_address#486, s_phone#488, s_acctbal#514, s_comment#490, n_name#297, n_regionkey#309)
    int left_nrow = tbl_JOIN_INNER_TD_3641_output.getNumRow();
    int right_nrow = tbl_Project_TD_3826_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2536_key_leftMajor, SW_JOIN_INNER_TD_2536_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3641_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_2536_key_leftMajor keyA{_s_nationkey506_k};
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 0);
            int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 1);
            int32_t _s_name485 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 2);
            int32_t _s_address486 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 3);
            int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 4);
            int32_t _s_phone488 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 5);
            int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 6);
            int32_t _s_comment490 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_2536_payload_leftMajor payloadA{_p_partkey420, _p_mfgr404, _s_name485, _s_address486, _s_nationkey506, _s_phone488, _s_acctbal514, _s_comment490};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3826_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_3826_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2536_key_leftMajor{_n_nationkey304_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                int32_t _p_mfgr404 = (it->second)._p_mfgr404;
                int32_t _s_name485 = (it->second)._s_name485;
                int32_t _s_address486 = (it->second)._s_address486;
                int32_t _s_nationkey506 = (it->second)._s_nationkey506;
                int32_t _s_phone488 = (it->second)._s_phone488;
                int32_t _s_acctbal514 = (it->second)._s_acctbal514;
                int32_t _s_comment490 = (it->second)._s_comment490;
                int32_t _n_nationkey304 = tbl_Project_TD_3826_output.getInt32(i, 0);
                int32_t _n_name297 = tbl_Project_TD_3826_output.getInt32(i, 1);
                int32_t _n_regionkey309 = tbl_Project_TD_3826_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 2, _s_name485);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 3, _s_address486);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 4, _s_phone488);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 5, _s_acctbal514);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 6, _s_comment490);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 7, _n_name297);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 8, _n_regionkey309);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2536_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2536_key_rightMajor, SW_JOIN_INNER_TD_2536_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_3826_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_3826_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2536_key_rightMajor keyA{_n_nationkey304_k};
            int32_t _n_nationkey304 = tbl_Project_TD_3826_output.getInt32(i, 0);
            int32_t _n_name297 = tbl_Project_TD_3826_output.getInt32(i, 1);
            int32_t _n_regionkey309 = tbl_Project_TD_3826_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_2536_payload_rightMajor payloadA{_n_nationkey304, _n_name297, _n_regionkey309};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3641_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2536_key_rightMajor{_s_nationkey506_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey304 = (it->second)._n_nationkey304;
                int32_t _n_name297 = (it->second)._n_name297;
                int32_t _n_regionkey309 = (it->second)._n_regionkey309;
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 0);
                int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 1);
                int32_t _s_name485 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 2);
                int32_t _s_address486 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 3);
                int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 4);
                int32_t _s_phone488 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 5);
                int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 6);
                int32_t _s_comment490 = tbl_JOIN_INNER_TD_3641_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 7, _n_name297);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 8, _n_regionkey309);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 2, _s_name485);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 3, _s_address486);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 4, _s_phone488);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 5, _s_acctbal514);
                tbl_JOIN_INNER_TD_2536_output.setInt32(r, 6, _s_comment490);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2536_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2536_output #Row: " << tbl_JOIN_INNER_TD_2536_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1327_key_leftMajor {
    int32_t _n_regionkey309;
    bool operator==(const SW_JOIN_INNER_TD_1327_key_leftMajor& other) const {
        return ((_n_regionkey309 == other._n_regionkey309));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1327_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1327_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_regionkey309));
    }
};
}
struct SW_JOIN_INNER_TD_1327_payload_leftMajor {
    int32_t _p_partkey420;
    int32_t _p_mfgr404;
    int32_t _s_name485;
    int32_t _s_address486;
    int32_t _s_phone488;
    int32_t _s_acctbal514;
    int32_t _s_comment490;
    int32_t _n_name297;
    int32_t _n_regionkey309;
};
struct SW_JOIN_INNER_TD_1327_key_rightMajor {
    int32_t _r_regionkey320;
    bool operator==(const SW_JOIN_INNER_TD_1327_key_rightMajor& other) const {
        return ((_r_regionkey320 == other._r_regionkey320));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1327_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1327_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._r_regionkey320));
    }
};
}
struct SW_JOIN_INNER_TD_1327_payload_rightMajor {
    int32_t _r_regionkey320;
};
void SW_JOIN_INNER_TD_1327(Table &tbl_JOIN_INNER_TD_2536_output, Table &tbl_Project_TD_2528_output, Table &tbl_JOIN_INNER_TD_1327_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((n_regionkey#309 = r_regionkey#320))
    // Left Table: ListBuffer(p_partkey#420, p_mfgr#404, s_name#485, s_address#486, s_phone#488, s_acctbal#514, s_comment#490, n_name#297, n_regionkey#309)
    // Right Table: ListBuffer(r_regionkey#320)
    // Output Table: ListBuffer(s_acctbal#514, s_name#485, n_name#297, p_partkey#420, p_mfgr#404, s_address#486, s_phone#488, s_comment#490)
    int left_nrow = tbl_JOIN_INNER_TD_2536_output.getNumRow();
    int right_nrow = tbl_Project_TD_2528_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1327_key_leftMajor, SW_JOIN_INNER_TD_1327_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2536_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_regionkey309_k = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_1327_key_leftMajor keyA{_n_regionkey309_k};
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 0);
            int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 1);
            int32_t _s_name485 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 2);
            int32_t _s_address486 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 3);
            int32_t _s_phone488 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 4);
            int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 5);
            int32_t _s_comment490 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 6);
            int32_t _n_name297 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 7);
            int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_1327_payload_leftMajor payloadA{_p_partkey420, _p_mfgr404, _s_name485, _s_address486, _s_phone488, _s_acctbal514, _s_comment490, _n_name297, _n_regionkey309};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_2528_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _r_regionkey320_k = tbl_Project_TD_2528_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1327_key_leftMajor{_r_regionkey320_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                int32_t _p_mfgr404 = (it->second)._p_mfgr404;
                int32_t _s_name485 = (it->second)._s_name485;
                int32_t _s_address486 = (it->second)._s_address486;
                int32_t _s_phone488 = (it->second)._s_phone488;
                int32_t _s_acctbal514 = (it->second)._s_acctbal514;
                int32_t _s_comment490 = (it->second)._s_comment490;
                int32_t _n_name297 = (it->second)._n_name297;
                int32_t _n_regionkey309 = (it->second)._n_regionkey309;
                int32_t _r_regionkey320 = tbl_Project_TD_2528_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 3, _p_partkey420);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 4, _p_mfgr404);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 1, _s_name485);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 5, _s_address486);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 6, _s_phone488);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 0, _s_acctbal514);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 7, _s_comment490);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 2, _n_name297);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1327_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1327_key_rightMajor, SW_JOIN_INNER_TD_1327_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_2528_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _r_regionkey320_k = tbl_Project_TD_2528_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1327_key_rightMajor keyA{_r_regionkey320_k};
            int32_t _r_regionkey320 = tbl_Project_TD_2528_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1327_payload_rightMajor payloadA{_r_regionkey320};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_2536_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_regionkey309_k = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1327_key_rightMajor{_n_regionkey309_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _r_regionkey320 = (it->second)._r_regionkey320;
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 0);
                int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 1);
                int32_t _s_name485 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 2);
                int32_t _s_address486 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 3);
                int32_t _s_phone488 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 4);
                int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 5);
                int32_t _s_comment490 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 6);
                int32_t _n_name297 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 7);
                int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_2536_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 3, _p_partkey420);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 4, _p_mfgr404);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 1, _s_name485);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 5, _s_address486);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 6, _s_phone488);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 0, _s_acctbal514);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 7, _s_comment490);
                tbl_JOIN_INNER_TD_1327_output.setInt32(r, 2, _n_name297);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1327_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1327_output #Row: " << tbl_JOIN_INNER_TD_1327_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0458(Table &tbl_JOIN_INNER_TD_1327_output, Table &tbl_SerializeFromObject_TD_8634_input, Table &tbl_SerializeFromObject_TD_6406_input, Table &tbl_SerializeFromObject_TD_5822_input, Table &tbl_Sort_TD_0458_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Sort
    // Operation: ListBuffer(s_acctbal#514 DESC NULLS LAST, n_name#297 ASC NULLS FIRST, s_name#485 ASC NULLS FIRST, p_partkey#420 ASC NULLS FIRST)
    // Input: ListBuffer(s_acctbal#514, s_name#485, n_name#297, p_partkey#420, p_mfgr#404, s_address#486, s_phone#488, s_comment#490)
    // Output: ListBuffer(s_acctbal#514, s_name#485, n_name#297, p_partkey#420, p_mfgr#404, s_address#486, s_phone#488, s_comment#490)
    struct SW_Sort_TD_0458Row {
        int32_t _s_acctbal514;
        std::string _s_name485;
        std::string _n_name297;
        int32_t _p_partkey420;
        std::string _p_mfgr404;
        std::string _s_address486;
        std::string _s_phone488;
        std::string _s_comment490;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0458Row& a, const SW_Sort_TD_0458Row& b) const { return 
 (a._s_acctbal514 > b._s_acctbal514) || 
 ((a._s_acctbal514 == b._s_acctbal514) && (a._n_name297 < b._n_name297)) || 
 ((a._s_acctbal514 == b._s_acctbal514) && (a._n_name297 == b._n_name297) && (a._s_name485 < b._s_name485)) || 
 ((a._s_acctbal514 == b._s_acctbal514) && (a._n_name297 == b._n_name297) && (a._s_name485 == b._s_name485) && (a._p_partkey420 < b._p_partkey420)); 
}
    }SW_Sort_TD_0458_order; 

    int nrow1 = tbl_JOIN_INNER_TD_1327_output.getNumRow();
    std::vector<SW_Sort_TD_0458Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_1327_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_5822_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1327_output.getInt32(i, 1), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5822_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1327_output.getInt32(i, 2), 1);
        int32_t _p_partkey420 = tbl_JOIN_INNER_TD_1327_output.getInt32(i, 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_mfgr404 = tbl_SerializeFromObject_TD_5822_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1327_output.getInt32(i, 4), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_5822_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1327_output.getInt32(i, 5), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_5822_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1327_output.getInt32(i, 6), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_comment490 = tbl_SerializeFromObject_TD_5822_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1327_output.getInt32(i, 7), 1);
        SW_Sort_TD_0458Row t = {_s_acctbal514,std::string(_s_name485.data()),std::string(_n_name297.data()),_p_partkey420,std::string(_p_mfgr404.data()),std::string(_s_address486.data()),std::string(_s_phone488.data()),std::string(_s_comment490.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0458_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0458_output.setInt32(r, 0, it._s_acctbal514);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0458_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 1, _s_name485);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297{};
        memcpy(_n_name297.data(), (it._n_name297).data(), (it._n_name297).length());
        tbl_Sort_TD_0458_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 2, _n_name297);
        tbl_Sort_TD_0458_output.setInt32(r, 3, it._p_partkey420);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_mfgr404{};
        memcpy(_p_mfgr404.data(), (it._p_mfgr404).data(), (it._p_mfgr404).length());
        tbl_Sort_TD_0458_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 4, _p_mfgr404);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486{};
        memcpy(_s_address486.data(), (it._s_address486).data(), (it._s_address486).length());
        tbl_Sort_TD_0458_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 5, _s_address486);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488{};
        memcpy(_s_phone488.data(), (it._s_phone488).data(), (it._s_phone488).length());
        tbl_Sort_TD_0458_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 6, _s_phone488);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_comment490{};
        memcpy(_s_comment490.data(), (it._s_comment490).data(), (it._s_comment490).length());
        tbl_Sort_TD_0458_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 7, _s_comment490);
        if (r < 10) {
            std::cout << it._s_acctbal514 << " " << (it._s_name485).data() << " " << (it._n_name297).data() << " " << it._p_partkey420 << " " << (it._p_mfgr404).data() << " " << (it._s_address486).data() << " " << (it._s_phone488).data() << " " << (it._s_comment490).data() << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0458_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0458_output #Row: " << tbl_Sort_TD_0458_output.getNumRow() << std::endl;
}

