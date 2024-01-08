#include <regex> 
#include <stdint.h> 

void SW_Project_TD_10571(Table &tbl_SerializeFromObject_TD_12695_input, Table &tbl_Project_TD_10571_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#1074L as int) AS s_suppkey#498, cast(s_nationkey#1077L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#1074L, s_nationkey#1077L)
    // Output: ListBuffer(s_suppkey#498, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_12695_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _s_suppkey1074L = tbl_SerializeFromObject_TD_12695_input.getInt64(i, 0);
        int64_t _s_nationkey1077L = tbl_SerializeFromObject_TD_12695_input.getInt64(i, 1);
        int32_t _s_suppkey498 = _s_suppkey1074L;
        tbl_Project_TD_10571_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey1077L;
        tbl_Project_TD_10571_output.setInt32(i, 1, _s_nationkey506);
    }
    tbl_Project_TD_10571_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10571_output #Row: " << tbl_Project_TD_10571_output.getNumRow() << std::endl;
}

void SW_Project_TD_10270(Table &tbl_SerializeFromObject_TD_12569_input, Table &tbl_Project_TD_10270_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_partkey#1069L as int) AS ps_partkey#460, cast(ps_suppkey#1070L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#1072) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_partkey#1069L, ps_suppkey#1070L, ps_supplycost#1072)
    // Output: ListBuffer(ps_partkey#460, ps_suppkey#466, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_12569_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ps_partkey1069L = tbl_SerializeFromObject_TD_12569_input.getInt64(i, 0);
        int64_t _ps_suppkey1070L = tbl_SerializeFromObject_TD_12569_input.getInt64(i, 1);
        int32_t _ps_supplycost1072 = tbl_SerializeFromObject_TD_12569_input.getInt32(i, 2);
        int32_t _ps_partkey460 = _ps_partkey1069L;
        tbl_Project_TD_10270_output.setInt32(i, 0, _ps_partkey460);
        int32_t _ps_suppkey466 = _ps_suppkey1070L;
        tbl_Project_TD_10270_output.setInt32(i, 1, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost1072 * 100.00);
        tbl_Project_TD_10270_output.setInt32(i, 2, _ps_supplycost478);
    }
    tbl_Project_TD_10270_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10270_output #Row: " << tbl_Project_TD_10270_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9732(Table &tbl_SerializeFromObject_TD_10560_input, Table &tbl_Filter_TD_9732_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(r_regionkey#1085L) AND ((isnotnull(r_name#1086) AND (r_name#1086 = AMERICA)) AND isnotnull(cast(r_regionkey#1085L as int)))))
    // Input: ListBuffer(r_regionkey#1085L, r_name#1086)
    // Output: ListBuffer(r_regionkey#1085L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10560_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _r_regionkey1085L = tbl_SerializeFromObject_TD_10560_input.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name1086 = tbl_SerializeFromObject_TD_10560_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        if ((1) && (((1) && (std::string(_r_name1086.data()) == "AMERICA")) && (1))) {
            int64_t _r_regionkey1085L_t = tbl_SerializeFromObject_TD_10560_input.getInt64(i, 0);
            tbl_Filter_TD_9732_output.setInt64(r, 0, _r_regionkey1085L_t);
            r++;
        }
    }
    tbl_Filter_TD_9732_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9732_output #Row: " << tbl_Filter_TD_9732_output.getNumRow() << std::endl;
}

void SW_Project_TD_9960(Table &tbl_SerializeFromObject_TD_11781_input, Table &tbl_Project_TD_9960_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#1081L as int) AS n_nationkey#304, cast(n_regionkey#1083L as int) AS n_regionkey#309)
    // Input: ListBuffer(n_nationkey#1081L, n_regionkey#1083L)
    // Output: ListBuffer(n_nationkey#304, n_regionkey#309)
    int nrow1 = tbl_SerializeFromObject_TD_11781_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey1081L = tbl_SerializeFromObject_TD_11781_input.getInt64(i, 0);
        int64_t _n_regionkey1083L = tbl_SerializeFromObject_TD_11781_input.getInt64(i, 1);
        int32_t _n_nationkey304 = _n_nationkey1081L;
        tbl_Project_TD_9960_output.setInt32(i, 0, _n_nationkey304);
        int32_t _n_regionkey309 = _n_regionkey1083L;
        tbl_Project_TD_9960_output.setInt32(i, 1, _n_regionkey309);
    }
    tbl_Project_TD_9960_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_9960_output #Row: " << tbl_Project_TD_9960_output.getNumRow() << std::endl;
}


void SW_Project_TD_8161(Table &tbl_Filter_TD_9732_output, Table &tbl_Project_TD_8161_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(r_regionkey#1085L as int) AS r_regionkey#320)
    // Input: ListBuffer(r_regionkey#1085L)
    // Output: ListBuffer(r_regionkey#320)
    int nrow1 = tbl_Filter_TD_9732_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _r_regionkey1085L = tbl_Filter_TD_9732_output.getInt64(i, 0);
        int32_t _r_regionkey320 = _r_regionkey1085L;
        tbl_Project_TD_8161_output.setInt32(i, 0, _r_regionkey320);
    }
    tbl_Project_TD_8161_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8161_output #Row: " << tbl_Project_TD_8161_output.getNumRow() << std::endl;
}


void SW_Filter_TD_7706(Table &tbl_SerializeFromObject_TD_8403_input, Table &tbl_Filter_TD_7706_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(p_size#406) AND isnotnull(p_type#405)) AND ((p_size#406 = 19) AND EndsWith(p_type#405, NICKEL))) AND isnotnull(cast(p_partkey#402L as int))))
    // Input: ListBuffer(p_partkey#402L, p_mfgr#404, p_size#406, p_type#405)
    // Output: ListBuffer(p_partkey#402L, p_mfgr#404)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8403_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_size406 = tbl_SerializeFromObject_TD_8403_input.getInt32(i, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_type405 = tbl_SerializeFromObject_TD_8403_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 3);
        int64_t _p_partkey402L = tbl_SerializeFromObject_TD_8403_input.getInt64(i, 0);
        if ((((1) && (1)) && ((_p_size406 == 19) && (std::string(_p_type405.data()).find("NICKEL")==std::string(_p_type405.data()).length() - 6))) && (1)) {
            int64_t _p_partkey402L_t = tbl_SerializeFromObject_TD_8403_input.getInt64(i, 0);
            tbl_Filter_TD_7706_output.setInt64(r, 0, _p_partkey402L_t);
            tbl_Filter_TD_7706_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_7706_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7706_output #Row: " << tbl_Filter_TD_7706_output.getNumRow() << std::endl;
}


void SW_Project_TD_661(Table &tbl_SerializeFromObject_TD_8714_input, Table &tbl_Project_TD_661_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_partkey#450L as int) AS ps_partkey#460, cast(ps_suppkey#451L as int) AS ps_suppkey#466, cast(CheckOverflow((promote_precision(ps_supplycost#453) * 100.00), DecimalType(16,2), true) as int) AS ps_supplycost#478)
    // Input: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_supplycost#453)
    // Output: ListBuffer(ps_partkey#460, ps_suppkey#466, ps_supplycost#478)
    int nrow1 = tbl_SerializeFromObject_TD_8714_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ps_partkey450L = tbl_SerializeFromObject_TD_8714_input.getInt64(i, 0);
        int64_t _ps_suppkey451L = tbl_SerializeFromObject_TD_8714_input.getInt64(i, 1);
        int32_t _ps_supplycost453 = tbl_SerializeFromObject_TD_8714_input.getInt32(i, 2);
        int32_t _ps_partkey460 = _ps_partkey450L;
        tbl_Project_TD_661_output.setInt32(i, 0, _ps_partkey460);
        int32_t _ps_suppkey466 = _ps_suppkey451L;
        tbl_Project_TD_661_output.setInt32(i, 1, _ps_suppkey466);
        int32_t _ps_supplycost478 = (_ps_supplycost453 * 100.00);
        tbl_Project_TD_661_output.setInt32(i, 2, _ps_supplycost478);
    }
    tbl_Project_TD_661_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_661_output #Row: " << tbl_Project_TD_661_output.getNumRow() << std::endl;
}

void SW_Project_TD_6478(Table &tbl_Filter_TD_7706_output, Table &tbl_Project_TD_6478_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(p_partkey#402L as int) AS p_partkey#420)
    // Input: ListBuffer(p_partkey#402L, p_mfgr#404)
    // Output: ListBuffer(p_partkey#420, p_mfgr#404)
    int nrow1 = tbl_Filter_TD_7706_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _p_partkey402L = tbl_Filter_TD_7706_output.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_mfgr404 = tbl_Filter_TD_7706_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _p_partkey420 = _p_partkey402L;
        tbl_Project_TD_6478_output.setInt32(i, 0, _p_partkey420);
        tbl_Project_TD_6478_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _p_mfgr404);
    }
    tbl_Project_TD_6478_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6478_output #Row: " << tbl_Project_TD_6478_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_6718_key;
struct SW_Aggregate_TD_6718_payload {
    int32_t _minps_supplycost1068_min_0;
    int32_t _ps_partkey4601151;
};
void SW_Aggregate_TD_6718(Table &tbl_JOIN_INNER_TD_7863_output, Table &tbl_Aggregate_TD_6718_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ps_partkey#460, min(ps_supplycost#478) AS min(ps_supplycost)#1068, ps_partkey#460 AS ps_partkey#460#1151)
    // Input: ListBuffer(ps_partkey#460, ps_supplycost#478)
    // Output: ListBuffer(min(ps_supplycost)#1068, ps_partkey#460#1151)
    std::unordered_map<SW_Aggregate_TD_6718_key, SW_Aggregate_TD_6718_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7863_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_partkey460 = tbl_JOIN_INNER_TD_7863_output.getInt32(i, 0);
        int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_7863_output.getInt32(i, 1);
        SW_Aggregate_TD_6718_key k = _ps_partkey460;
        int32_t _minps_supplycost1068_min_0 = _ps_supplycost478;
        int32_t _ps_partkey4601151 = _ps_partkey460;
        SW_Aggregate_TD_6718_payload p{_minps_supplycost1068_min_0, _ps_partkey4601151};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t min_0 = (it->second)._minps_supplycost1068_min_0 > _minps_supplycost1068_min_0 ? _minps_supplycost1068_min_0 : (it->second)._minps_supplycost1068_min_0;
            p._minps_supplycost1068_min_0 = min_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ps_partkey460 not required in the output table
        int32_t _minps_supplycost1068 = (it.second)._minps_supplycost1068_min_0;
        tbl_Aggregate_TD_6718_output.setInt32(r, 0, _minps_supplycost1068);
        tbl_Aggregate_TD_6718_output.setInt32(r, 1, (it.second)._ps_partkey4601151);
        ++r;
    }
    tbl_Aggregate_TD_6718_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6718_output #Row: " << tbl_Aggregate_TD_6718_output.getNumRow() << std::endl;
}


void SW_Project_TD_4671(Table &tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute, Table &tbl_Project_TD_4671_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506, cast(CheckOverflow((promote_precision(s_acctbal#489) * 100.00), DecimalType(16,2), true) as int) AS s_acctbal#514)
    // Input: ListBuffer(s_suppkey#484L, s_name#485, s_address#486, s_nationkey#487L, s_phone#488, s_acctbal#489, s_comment#490)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_nationkey#506, s_phone#488, s_acctbal#514, s_comment#490)
    int nrow1 = tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _s_suppkey484L = tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        int64_t _s_nationkey487L = tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getInt64(i, 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 4);
        int32_t _s_acctbal489 = tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getInt32(i, 5);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_comment490 = tbl_SerializeFromObject_TD_6529_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 6);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_4671_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_4671_output.setInt32(i, 3, _s_nationkey506);
        int32_t _s_acctbal514 = (_s_acctbal489 * 100.00);
        tbl_Project_TD_4671_output.setInt32(i, 5, _s_acctbal514);
        tbl_Project_TD_4671_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _s_name485);
        tbl_Project_TD_4671_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2, _s_address486);
        tbl_Project_TD_4671_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 4, _s_phone488);
        tbl_Project_TD_4671_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 6, _s_comment490);
    }
    tbl_Project_TD_4671_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4671_output #Row: " << tbl_Project_TD_4671_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4649_key_leftMajor {
    int32_t _ps_supplycost478;
    int32_t _p_partkey420;
    bool operator==(const SW_JOIN_INNER_TD_4649_key_leftMajor& other) const {
        return ((_ps_supplycost478 == other._ps_supplycost478) && (_p_partkey420 == other._p_partkey420));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4649_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4649_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_supplycost478)) + (hash<int32_t>()(k._p_partkey420));
    }
};
}
struct SW_JOIN_INNER_TD_4649_payload_leftMajor {
    int32_t _p_partkey420;
    int32_t _p_mfgr404;
    int32_t _ps_suppkey466;
    int32_t _ps_supplycost478;
};
struct SW_JOIN_INNER_TD_4649_key_rightMajor {
    int32_t _minps_supplycost1068;
    int32_t _ps_partkey4601151;
    bool operator==(const SW_JOIN_INNER_TD_4649_key_rightMajor& other) const {
        return ((_minps_supplycost1068 == other._minps_supplycost1068) && (_ps_partkey4601151 == other._ps_partkey4601151));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4649_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4649_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._minps_supplycost1068)) + (hash<int32_t>()(k._ps_partkey4601151));
    }
};
}
struct SW_JOIN_INNER_TD_4649_payload_rightMajor {
    int32_t _minps_supplycost1068;
    int32_t _ps_partkey4601151;
};
void SW_JOIN_INNER_TD_4649(Table &tbl_JOIN_INNER_TD_5906_output, Table &tbl_Aggregate_TD_6718_output, Table &tbl_JOIN_INNER_TD_4649_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ps_supplycost#478 = min(ps_supplycost)#1068) AND (p_partkey#420 = ps_partkey#460#1151)))
    // Left Table: ListBuffer(p_partkey#420, p_mfgr#404, ps_suppkey#466, ps_supplycost#478)
    // Right Table: ListBuffer(min(ps_supplycost)#1068, ps_partkey#460#1151)
    // Output Table: ListBuffer(p_partkey#420, p_mfgr#404, ps_suppkey#466)
    int left_nrow = tbl_JOIN_INNER_TD_5906_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6718_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4649_key_leftMajor, SW_JOIN_INNER_TD_4649_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5906_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ps_supplycost478_k = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 3);
            int32_t _p_partkey420_k = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4649_key_leftMajor keyA{_ps_supplycost478_k, _p_partkey420_k};
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 0);
            int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 1);
            int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 2);
            int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_4649_payload_leftMajor payloadA{_p_partkey420, _p_mfgr404, _ps_suppkey466, _ps_supplycost478};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6718_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _minps_supplycost1068_k = tbl_Aggregate_TD_6718_output.getInt32(i, 0);
            int32_t _ps_partkey4601151_k = tbl_Aggregate_TD_6718_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4649_key_leftMajor{_minps_supplycost1068_k, _ps_partkey4601151_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                int32_t _p_mfgr404 = (it->second)._p_mfgr404;
                int32_t _ps_suppkey466 = (it->second)._ps_suppkey466;
                int32_t _ps_supplycost478 = (it->second)._ps_supplycost478;
                int32_t _minps_supplycost1068 = tbl_Aggregate_TD_6718_output.getInt32(i, 0);
                int32_t _ps_partkey4601151 = tbl_Aggregate_TD_6718_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4649_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_4649_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_4649_output.setInt32(r, 2, _ps_suppkey466);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4649_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4649_key_rightMajor, SW_JOIN_INNER_TD_4649_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6718_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _minps_supplycost1068_k = tbl_Aggregate_TD_6718_output.getInt32(i, 0);
            int32_t _ps_partkey4601151_k = tbl_Aggregate_TD_6718_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4649_key_rightMajor keyA{_minps_supplycost1068_k, _ps_partkey4601151_k};
            int32_t _minps_supplycost1068 = tbl_Aggregate_TD_6718_output.getInt32(i, 0);
            int32_t _ps_partkey4601151 = tbl_Aggregate_TD_6718_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4649_payload_rightMajor payloadA{_minps_supplycost1068, _ps_partkey4601151};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5906_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ps_supplycost478_k = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 3);
            int32_t _p_partkey420_k = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4649_key_rightMajor{_ps_supplycost478_k, _p_partkey420_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _minps_supplycost1068 = (it->second)._minps_supplycost1068;
                int32_t _ps_partkey4601151 = (it->second)._ps_partkey4601151;
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 0);
                int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 1);
                int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 2);
                int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_5906_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_4649_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_4649_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_4649_output.setInt32(r, 2, _ps_suppkey466);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4649_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4649_output #Row: " << tbl_JOIN_INNER_TD_4649_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3501(Table &tbl_SerializeFromObject_TD_4553_input, Table &tbl_Filter_TD_3501_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(r_name#315) AND (r_name#315 = AMERICA)) AND isnotnull(cast(r_regionkey#314L as int))))
    // Input: ListBuffer(r_regionkey#314L, r_name#315)
    // Output: ListBuffer(r_regionkey#314L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4553_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name315 = tbl_SerializeFromObject_TD_4553_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _r_regionkey314L = tbl_SerializeFromObject_TD_4553_input.getInt64(i, 0);
        if (((1) && (std::string(_r_name315.data()) == "AMERICA")) && (1)) {
            int64_t _r_regionkey314L_t = tbl_SerializeFromObject_TD_4553_input.getInt64(i, 0);
            tbl_Filter_TD_3501_output.setInt64(r, 0, _r_regionkey314L_t);
            r++;
        }
    }
    tbl_Filter_TD_3501_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3501_output #Row: " << tbl_Filter_TD_3501_output.getNumRow() << std::endl;
}

void SW_Project_TD_3436(Table &tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute, Table &tbl_Project_TD_3436_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304, cast(n_regionkey#298L as int) AS n_regionkey#309)
    // Input: ListBuffer(n_nationkey#296L, n_name#297, n_regionkey#298L)
    // Output: ListBuffer(n_nationkey#304, n_name#297, n_regionkey#309)
    int nrow1 = tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey296L = tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _n_regionkey298L = tbl_SerializeFromObject_TD_5935_input_stringRowIDSubstitute.getInt64(i, 2);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_3436_output.setInt32(i, 0, _n_nationkey304);
        int32_t _n_regionkey309 = _n_regionkey298L;
        tbl_Project_TD_3436_output.setInt32(i, 2, _n_regionkey309);
        tbl_Project_TD_3436_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _n_name297);
    }
    tbl_Project_TD_3436_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3436_output #Row: " << tbl_Project_TD_3436_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3536_key_leftMajor {
    int32_t _ps_suppkey466;
    bool operator==(const SW_JOIN_INNER_TD_3536_key_leftMajor& other) const {
        return ((_ps_suppkey466 == other._ps_suppkey466));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3536_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3536_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_suppkey466));
    }
};
}
struct SW_JOIN_INNER_TD_3536_payload_leftMajor {
    int32_t _p_partkey420;
    int32_t _p_mfgr404;
    int32_t _ps_suppkey466;
};
struct SW_JOIN_INNER_TD_3536_key_rightMajor {
    int32_t _s_suppkey498;
    bool operator==(const SW_JOIN_INNER_TD_3536_key_rightMajor& other) const {
        return ((_s_suppkey498 == other._s_suppkey498));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3536_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3536_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_suppkey498));
    }
};
}
struct SW_JOIN_INNER_TD_3536_payload_rightMajor {
    int32_t _s_suppkey498;
    int32_t _s_name485;
    int32_t _s_address486;
    int32_t _s_nationkey506;
    int32_t _s_phone488;
    int32_t _s_acctbal514;
    int32_t _s_comment490;
};
void SW_JOIN_INNER_TD_3536(Table &tbl_JOIN_INNER_TD_4649_output, Table &tbl_Project_TD_4671_output, Table &tbl_JOIN_INNER_TD_3536_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_suppkey#498 = ps_suppkey#466))
    // Left Table: ListBuffer(p_partkey#420, p_mfgr#404, ps_suppkey#466)
    // Right Table: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_nationkey#506, s_phone#488, s_acctbal#514, s_comment#490)
    // Output Table: ListBuffer(p_partkey#420, p_mfgr#404, s_name#485, s_address#486, s_nationkey#506, s_phone#488, s_acctbal#514, s_comment#490)
    int left_nrow = tbl_JOIN_INNER_TD_4649_output.getNumRow();
    int right_nrow = tbl_Project_TD_4671_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3536_key_leftMajor, SW_JOIN_INNER_TD_3536_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4649_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ps_suppkey466_k = tbl_JOIN_INNER_TD_4649_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3536_key_leftMajor keyA{_ps_suppkey466_k};
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_4649_output.getInt32(i, 0);
            int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_4649_output.getInt32(i, 1);
            int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_4649_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3536_payload_leftMajor payloadA{_p_partkey420, _p_mfgr404, _ps_suppkey466};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_4671_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_suppkey498_k = tbl_Project_TD_4671_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3536_key_leftMajor{_s_suppkey498_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                int32_t _p_mfgr404 = (it->second)._p_mfgr404;
                int32_t _ps_suppkey466 = (it->second)._ps_suppkey466;
                int32_t _s_suppkey498 = tbl_Project_TD_4671_output.getInt32(i, 0);
                int32_t _s_name485 = tbl_Project_TD_4671_output.getInt32(i, 1);
                int32_t _s_address486 = tbl_Project_TD_4671_output.getInt32(i, 2);
                int32_t _s_nationkey506 = tbl_Project_TD_4671_output.getInt32(i, 3);
                int32_t _s_phone488 = tbl_Project_TD_4671_output.getInt32(i, 4);
                int32_t _s_acctbal514 = tbl_Project_TD_4671_output.getInt32(i, 5);
                int32_t _s_comment490 = tbl_Project_TD_4671_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 2, _s_name485);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 3, _s_address486);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 4, _s_nationkey506);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 5, _s_phone488);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 6, _s_acctbal514);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 7, _s_comment490);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3536_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3536_key_rightMajor, SW_JOIN_INNER_TD_3536_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4671_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_suppkey498_k = tbl_Project_TD_4671_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3536_key_rightMajor keyA{_s_suppkey498_k};
            int32_t _s_suppkey498 = tbl_Project_TD_4671_output.getInt32(i, 0);
            int32_t _s_name485 = tbl_Project_TD_4671_output.getInt32(i, 1);
            int32_t _s_address486 = tbl_Project_TD_4671_output.getInt32(i, 2);
            int32_t _s_nationkey506 = tbl_Project_TD_4671_output.getInt32(i, 3);
            int32_t _s_phone488 = tbl_Project_TD_4671_output.getInt32(i, 4);
            int32_t _s_acctbal514 = tbl_Project_TD_4671_output.getInt32(i, 5);
            int32_t _s_comment490 = tbl_Project_TD_4671_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_3536_payload_rightMajor payloadA{_s_suppkey498, _s_name485, _s_address486, _s_nationkey506, _s_phone488, _s_acctbal514, _s_comment490};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4649_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ps_suppkey466_k = tbl_JOIN_INNER_TD_4649_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3536_key_rightMajor{_ps_suppkey466_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_suppkey498 = (it->second)._s_suppkey498;
                int32_t _s_name485 = (it->second)._s_name485;
                int32_t _s_address486 = (it->second)._s_address486;
                int32_t _s_nationkey506 = (it->second)._s_nationkey506;
                int32_t _s_phone488 = (it->second)._s_phone488;
                int32_t _s_acctbal514 = (it->second)._s_acctbal514;
                int32_t _s_comment490 = (it->second)._s_comment490;
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_4649_output.getInt32(i, 0);
                int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_4649_output.getInt32(i, 1);
                int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_4649_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 2, _s_name485);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 3, _s_address486);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 4, _s_nationkey506);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 5, _s_phone488);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 6, _s_acctbal514);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 7, _s_comment490);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_3536_output.setInt32(r, 1, _p_mfgr404);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3536_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3536_output #Row: " << tbl_JOIN_INNER_TD_3536_output.getNumRow() << std::endl;
}

void SW_Project_TD_2731(Table &tbl_Filter_TD_3501_output, Table &tbl_Project_TD_2731_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(r_regionkey#314L as int) AS r_regionkey#320)
    // Input: ListBuffer(r_regionkey#314L)
    // Output: ListBuffer(r_regionkey#320)
    int nrow1 = tbl_Filter_TD_3501_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _r_regionkey314L = tbl_Filter_TD_3501_output.getInt64(i, 0);
        int32_t _r_regionkey320 = _r_regionkey314L;
        tbl_Project_TD_2731_output.setInt32(i, 0, _r_regionkey320);
    }
    tbl_Project_TD_2731_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2731_output #Row: " << tbl_Project_TD_2731_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_217_key_leftMajor {
    int32_t _s_nationkey506;
    bool operator==(const SW_JOIN_INNER_TD_217_key_leftMajor& other) const {
        return ((_s_nationkey506 == other._s_nationkey506));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_217_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_217_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_nationkey506));
    }
};
}
struct SW_JOIN_INNER_TD_217_payload_leftMajor {
    int32_t _p_partkey420;
    int32_t _p_mfgr404;
    int32_t _s_name485;
    int32_t _s_address486;
    int32_t _s_nationkey506;
    int32_t _s_phone488;
    int32_t _s_acctbal514;
    int32_t _s_comment490;
};
struct SW_JOIN_INNER_TD_217_key_rightMajor {
    int32_t _n_nationkey304;
    bool operator==(const SW_JOIN_INNER_TD_217_key_rightMajor& other) const {
        return ((_n_nationkey304 == other._n_nationkey304));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_217_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_217_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey304));
    }
};
}
struct SW_JOIN_INNER_TD_217_payload_rightMajor {
    int32_t _n_nationkey304;
    int32_t _n_name297;
    int32_t _n_regionkey309;
};
void SW_JOIN_INNER_TD_217(Table &tbl_JOIN_INNER_TD_3536_output, Table &tbl_Project_TD_3436_output, Table &tbl_JOIN_INNER_TD_217_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_nationkey#506 = n_nationkey#304))
    // Left Table: ListBuffer(p_partkey#420, p_mfgr#404, s_name#485, s_address#486, s_nationkey#506, s_phone#488, s_acctbal#514, s_comment#490)
    // Right Table: ListBuffer(n_nationkey#304, n_name#297, n_regionkey#309)
    // Output Table: ListBuffer(p_partkey#420, p_mfgr#404, s_name#485, s_address#486, s_phone#488, s_acctbal#514, s_comment#490, n_name#297, n_regionkey#309)
    int left_nrow = tbl_JOIN_INNER_TD_3536_output.getNumRow();
    int right_nrow = tbl_Project_TD_3436_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_217_key_leftMajor, SW_JOIN_INNER_TD_217_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3536_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_217_key_leftMajor keyA{_s_nationkey506_k};
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 0);
            int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 1);
            int32_t _s_name485 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 2);
            int32_t _s_address486 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 3);
            int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 4);
            int32_t _s_phone488 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 5);
            int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 6);
            int32_t _s_comment490 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_217_payload_leftMajor payloadA{_p_partkey420, _p_mfgr404, _s_name485, _s_address486, _s_nationkey506, _s_phone488, _s_acctbal514, _s_comment490};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3436_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_3436_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_217_key_leftMajor{_n_nationkey304_k});
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
                int32_t _n_nationkey304 = tbl_Project_TD_3436_output.getInt32(i, 0);
                int32_t _n_name297 = tbl_Project_TD_3436_output.getInt32(i, 1);
                int32_t _n_regionkey309 = tbl_Project_TD_3436_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 2, _s_name485);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 3, _s_address486);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 4, _s_phone488);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 5, _s_acctbal514);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 6, _s_comment490);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 7, _n_name297);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 8, _n_regionkey309);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_217_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_217_key_rightMajor, SW_JOIN_INNER_TD_217_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_3436_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_3436_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_217_key_rightMajor keyA{_n_nationkey304_k};
            int32_t _n_nationkey304 = tbl_Project_TD_3436_output.getInt32(i, 0);
            int32_t _n_name297 = tbl_Project_TD_3436_output.getInt32(i, 1);
            int32_t _n_regionkey309 = tbl_Project_TD_3436_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_217_payload_rightMajor payloadA{_n_nationkey304, _n_name297, _n_regionkey309};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3536_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_217_key_rightMajor{_s_nationkey506_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey304 = (it->second)._n_nationkey304;
                int32_t _n_name297 = (it->second)._n_name297;
                int32_t _n_regionkey309 = (it->second)._n_regionkey309;
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 0);
                int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 1);
                int32_t _s_name485 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 2);
                int32_t _s_address486 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 3);
                int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 4);
                int32_t _s_phone488 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 5);
                int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 6);
                int32_t _s_comment490 = tbl_JOIN_INNER_TD_3536_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 7, _n_name297);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 8, _n_regionkey309);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 0, _p_partkey420);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 1, _p_mfgr404);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 2, _s_name485);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 3, _s_address486);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 4, _s_phone488);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 5, _s_acctbal514);
                tbl_JOIN_INNER_TD_217_output.setInt32(r, 6, _s_comment490);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_217_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_217_output #Row: " << tbl_JOIN_INNER_TD_217_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_158_key_leftMajor {
    int32_t _n_regionkey309;
    bool operator==(const SW_JOIN_INNER_TD_158_key_leftMajor& other) const {
        return ((_n_regionkey309 == other._n_regionkey309));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_158_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_158_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_regionkey309));
    }
};
}
struct SW_JOIN_INNER_TD_158_payload_leftMajor {
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
struct SW_JOIN_INNER_TD_158_key_rightMajor {
    int32_t _r_regionkey320;
    bool operator==(const SW_JOIN_INNER_TD_158_key_rightMajor& other) const {
        return ((_r_regionkey320 == other._r_regionkey320));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_158_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_158_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._r_regionkey320));
    }
};
}
struct SW_JOIN_INNER_TD_158_payload_rightMajor {
    int32_t _r_regionkey320;
};
void SW_JOIN_INNER_TD_158(Table &tbl_JOIN_INNER_TD_217_output, Table &tbl_Project_TD_2731_output, Table &tbl_JOIN_INNER_TD_158_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((n_regionkey#309 = r_regionkey#320))
    // Left Table: ListBuffer(p_partkey#420, p_mfgr#404, s_name#485, s_address#486, s_phone#488, s_acctbal#514, s_comment#490, n_name#297, n_regionkey#309)
    // Right Table: ListBuffer(r_regionkey#320)
    // Output Table: ListBuffer(s_acctbal#514, s_name#485, n_name#297, p_partkey#420, p_mfgr#404, s_address#486, s_phone#488, s_comment#490)
    int left_nrow = tbl_JOIN_INNER_TD_217_output.getNumRow();
    int right_nrow = tbl_Project_TD_2731_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_158_key_leftMajor, SW_JOIN_INNER_TD_158_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_217_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_regionkey309_k = tbl_JOIN_INNER_TD_217_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_158_key_leftMajor keyA{_n_regionkey309_k};
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 0);
            int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 1);
            int32_t _s_name485 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 2);
            int32_t _s_address486 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 3);
            int32_t _s_phone488 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 4);
            int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 5);
            int32_t _s_comment490 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 6);
            int32_t _n_name297 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 7);
            int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_158_payload_leftMajor payloadA{_p_partkey420, _p_mfgr404, _s_name485, _s_address486, _s_phone488, _s_acctbal514, _s_comment490, _n_name297, _n_regionkey309};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_2731_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _r_regionkey320_k = tbl_Project_TD_2731_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_158_key_leftMajor{_r_regionkey320_k});
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
                int32_t _r_regionkey320 = tbl_Project_TD_2731_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 3, _p_partkey420);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 4, _p_mfgr404);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 1, _s_name485);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 5, _s_address486);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 6, _s_phone488);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 0, _s_acctbal514);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 7, _s_comment490);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 2, _n_name297);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_158_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_158_key_rightMajor, SW_JOIN_INNER_TD_158_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_2731_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _r_regionkey320_k = tbl_Project_TD_2731_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_158_key_rightMajor keyA{_r_regionkey320_k};
            int32_t _r_regionkey320 = tbl_Project_TD_2731_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_158_payload_rightMajor payloadA{_r_regionkey320};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_217_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_regionkey309_k = tbl_JOIN_INNER_TD_217_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_158_key_rightMajor{_n_regionkey309_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _r_regionkey320 = (it->second)._r_regionkey320;
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 0);
                int32_t _p_mfgr404 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 1);
                int32_t _s_name485 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 2);
                int32_t _s_address486 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 3);
                int32_t _s_phone488 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 4);
                int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 5);
                int32_t _s_comment490 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 6);
                int32_t _n_name297 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 7);
                int32_t _n_regionkey309 = tbl_JOIN_INNER_TD_217_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 3, _p_partkey420);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 4, _p_mfgr404);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 1, _s_name485);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 5, _s_address486);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 6, _s_phone488);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 0, _s_acctbal514);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 7, _s_comment490);
                tbl_JOIN_INNER_TD_158_output.setInt32(r, 2, _n_name297);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_158_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_158_output #Row: " << tbl_JOIN_INNER_TD_158_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0643(Table &tbl_JOIN_INNER_TD_158_output, Table &tbl_SerializeFromObject_TD_8403_input, Table &tbl_SerializeFromObject_TD_6529_input, Table &tbl_SerializeFromObject_TD_5935_input, Table &tbl_Sort_TD_0643_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Sort
    // Operation: ListBuffer(s_acctbal#514 DESC NULLS LAST, n_name#297 ASC NULLS FIRST, s_name#485 ASC NULLS FIRST, p_partkey#420 ASC NULLS FIRST)
    // Input: ListBuffer(s_acctbal#514, s_name#485, n_name#297, p_partkey#420, p_mfgr#404, s_address#486, s_phone#488, s_comment#490)
    // Output: ListBuffer(s_acctbal#514, s_name#485, n_name#297, p_partkey#420, p_mfgr#404, s_address#486, s_phone#488, s_comment#490)
    struct SW_Sort_TD_0643Row {
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
        bool operator()(const SW_Sort_TD_0643Row& a, const SW_Sort_TD_0643Row& b) const { return 
 (a._s_acctbal514 > b._s_acctbal514) || 
 ((a._s_acctbal514 == b._s_acctbal514) && (a._n_name297 < b._n_name297)) || 
 ((a._s_acctbal514 == b._s_acctbal514) && (a._n_name297 == b._n_name297) && (a._s_name485 < b._s_name485)) || 
 ((a._s_acctbal514 == b._s_acctbal514) && (a._n_name297 == b._n_name297) && (a._s_name485 == b._s_name485) && (a._p_partkey420 < b._p_partkey420)); 
}
    }SW_Sort_TD_0643_order; 

    int nrow1 = tbl_JOIN_INNER_TD_158_output.getNumRow();
    std::vector<SW_Sort_TD_0643Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_acctbal514 = tbl_JOIN_INNER_TD_158_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_5935_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_158_output.getInt32(i, 1), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5935_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_158_output.getInt32(i, 2), 1);
        int32_t _p_partkey420 = tbl_JOIN_INNER_TD_158_output.getInt32(i, 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_mfgr404 = tbl_SerializeFromObject_TD_5935_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_158_output.getInt32(i, 4), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_5935_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_158_output.getInt32(i, 5), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_5935_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_158_output.getInt32(i, 6), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_comment490 = tbl_SerializeFromObject_TD_5935_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_158_output.getInt32(i, 7), 1);
        SW_Sort_TD_0643Row t = {_s_acctbal514,std::string(_s_name485.data()),std::string(_n_name297.data()),_p_partkey420,std::string(_p_mfgr404.data()),std::string(_s_address486.data()),std::string(_s_phone488.data()),std::string(_s_comment490.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0643_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0643_output.setInt32(r, 0, it._s_acctbal514);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0643_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 1, _s_name485);
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297{};
        memcpy(_n_name297.data(), (it._n_name297).data(), (it._n_name297).length());
        tbl_Sort_TD_0643_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 2, _n_name297);
        tbl_Sort_TD_0643_output.setInt32(r, 3, it._p_partkey420);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_mfgr404{};
        memcpy(_p_mfgr404.data(), (it._p_mfgr404).data(), (it._p_mfgr404).length());
        tbl_Sort_TD_0643_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 4, _p_mfgr404);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486{};
        memcpy(_s_address486.data(), (it._s_address486).data(), (it._s_address486).length());
        tbl_Sort_TD_0643_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 5, _s_address486);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488{};
        memcpy(_s_phone488.data(), (it._s_phone488).data(), (it._s_phone488).length());
        tbl_Sort_TD_0643_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 6, _s_phone488);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_comment490{};
        memcpy(_s_comment490.data(), (it._s_comment490).data(), (it._s_comment490).length());
        tbl_Sort_TD_0643_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 7, _s_comment490);
        if (r < 10) {
            std::cout << it._s_acctbal514 << " " << (it._s_name485).data() << " " << (it._n_name297).data() << " " << it._p_partkey420 << " " << (it._p_mfgr404).data() << " " << (it._s_address486).data() << " " << (it._s_phone488).data() << " " << (it._s_comment490).data() << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0643_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0643_output #Row: " << tbl_Sort_TD_0643_output.getNumRow() << std::endl;
}

