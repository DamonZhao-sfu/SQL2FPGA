#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9874(Table &tbl_SerializeFromObject_TD_10875_input, Table &tbl_Filter_TD_9874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_shipdate#15) AND ((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19950101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19960101))) AND (isnotnull(cast(l_partkey#1L as int)) AND isnotnull(cast(l_suppkey#2L as int)))))
    // Input: ListBuffer(l_partkey#1L, l_suppkey#2L, l_quantity#4, l_shipdate#15)
    // Output: ListBuffer(l_partkey#1L, l_suppkey#2L, l_quantity#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10875_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_10875_input.getInt32(i, 3);
        int64_t _l_partkey1L = tbl_SerializeFromObject_TD_10875_input.getInt64(i, 0);
        int64_t _l_suppkey2L = tbl_SerializeFromObject_TD_10875_input.getInt64(i, 1);
        if (((1) && ((_l_shipdate15 >= 19950101) && (_l_shipdate15 < 19960101))) && ((1) && (1))) {
            int64_t _l_partkey1L_t = tbl_SerializeFromObject_TD_10875_input.getInt64(i, 0);
            tbl_Filter_TD_9874_output.setInt64(r, 0, _l_partkey1L_t);
            int64_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_10875_input.getInt64(i, 1);
            tbl_Filter_TD_9874_output.setInt64(r, 1, _l_suppkey2L_t);
            int32_t _l_quantity4_t = tbl_SerializeFromObject_TD_10875_input.getInt32(i, 2);
            tbl_Filter_TD_9874_output.setInt32(r, 2, _l_quantity4_t);
            r++;
        }
    }
    tbl_Filter_TD_9874_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9874_output #Row: " << tbl_Filter_TD_9874_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8873(Table &tbl_SerializeFromObject_TD_9743_input, Table &tbl_Filter_TD_8873_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(p_name#403) AND StartsWith(p_name#403, blush)))
    // Input: ListBuffer(p_partkey#402L, p_name#403)
    // Output: ListBuffer(p_partkey#402L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9743_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_name403 = tbl_SerializeFromObject_TD_9743_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        if ((1) && (std::string(_p_name403.data()).find("blush")==0)) {
            int64_t _p_partkey402L_t = tbl_SerializeFromObject_TD_9743_input.getInt64(i, 0);
            tbl_Filter_TD_8873_output.setInt64(r, 0, _p_partkey402L_t);
            r++;
        }
    }
    tbl_Filter_TD_8873_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8873_output #Row: " << tbl_Filter_TD_8873_output.getNumRow() << std::endl;
}

void SW_Project_TD_8252(Table &tbl_Filter_TD_9874_output, Table &tbl_Project_TD_8252_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_partkey#1L as int) AS l_partkey#49, cast(l_suppkey#2L as int) AS l_suppkey#66, cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) AS l_quantity#100)
    // Input: ListBuffer(l_partkey#1L, l_suppkey#2L, l_quantity#4)
    // Output: ListBuffer(l_partkey#49, l_suppkey#66, l_quantity#100)
    int nrow1 = tbl_Filter_TD_9874_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_partkey1L = tbl_Filter_TD_9874_output.getInt64(i, 0);
        int64_t _l_suppkey2L = tbl_Filter_TD_9874_output.getInt64(i, 1);
        int32_t _l_quantity4 = tbl_Filter_TD_9874_output.getInt32(i, 2);
        int32_t _l_partkey49 = _l_partkey1L;
        tbl_Project_TD_8252_output.setInt32(i, 0, _l_partkey49);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_8252_output.setInt32(i, 1, _l_suppkey66);
        int32_t _l_quantity100 = (_l_quantity4 * 100.00);
        tbl_Project_TD_8252_output.setInt32(i, 2, _l_quantity100);
    }
    tbl_Project_TD_8252_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8252_output #Row: " << tbl_Project_TD_8252_output.getNumRow() << std::endl;
}

void SW_Project_TD_7132(Table &tbl_Filter_TD_8873_output, Table &tbl_Project_TD_7132_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(p_partkey#402L as int) AS p_partkey#420)
    // Input: ListBuffer(p_partkey#402L)
    // Output: ListBuffer(p_partkey#420)
    int nrow1 = tbl_Filter_TD_8873_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _p_partkey402L = tbl_Filter_TD_8873_output.getInt64(i, 0);
        int32_t _p_partkey420 = _p_partkey402L;
        tbl_Project_TD_7132_output.setInt32(i, 0, _p_partkey420);
    }
    tbl_Project_TD_7132_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_7132_output #Row: " << tbl_Project_TD_7132_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_7908_consolidate(Table &tbl_Aggregate_TD_7908_output_preprocess, Table &tbl_Aggregate_TD_7908_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_7908_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _suml_quantity1070 = tbl_Aggregate_TD_7908_output_preprocess.getInt32(r, 0);
        tbl_Aggregate_TD_7908_output.setInt32(r, 0, _suml_quantity1070);
        int32_t _l_partkey49 = tbl_Aggregate_TD_7908_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_7908_output.setInt32(r, 1, _l_partkey49);
        int32_t _l_suppkey66 = tbl_Aggregate_TD_7908_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_7908_output.setInt32(r, 2, _l_suppkey66);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_7908_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_7908_output #Row: " << tbl_Aggregate_TD_7908_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_6378_key_leftMajor {
    int64_t _ps_partkey450L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_6378_key_leftMajor& other) const {
        return ((_ps_partkey450L == other._ps_partkey450L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_6378_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_6378_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ps_partkey450L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_6378_payload_leftMajor {
    int64_t _ps_partkey450L;
    int64_t _ps_suppkey451L;
    int32_t _ps_availqty452;
};
struct SW_JOIN_LEFTSEMI_TD_6378_key_rightMajor {
    int32_t _p_partkey420;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_6378_key_rightMajor& other) const {
        return ((_p_partkey420 == other._p_partkey420));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_6378_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_6378_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_partkey420));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_6378_payload_rightMajor {
    int32_t _p_partkey420;
};
void SW_JOIN_LEFTSEMI_TD_6378(Table &tbl_SerializeFromObject_TD_8299_input, Table &tbl_Project_TD_7132_output, Table &tbl_JOIN_LEFTSEMI_TD_6378_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((cast(ps_partkey#450L as int) = p_partkey#420))
    // Left Table: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_availqty#452)
    // Right Table: ListBuffer(p_partkey#420)
    // Output Table: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_availqty#452)
    int left_nrow = tbl_SerializeFromObject_TD_8299_input.getNumRow();
    int right_nrow = tbl_Project_TD_7132_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_6378_key_rightMajor, SW_JOIN_LEFTSEMI_TD_6378_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_7132_output.getNumRow();
        int nrow2 = tbl_SerializeFromObject_TD_8299_input.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_partkey420_k = tbl_Project_TD_7132_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_6378_key_rightMajor keyA{_p_partkey420_k};
            int32_t _p_partkey420 = tbl_Project_TD_7132_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_6378_payload_rightMajor payloadA{_p_partkey420};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _ps_partkey450L_k = tbl_SerializeFromObject_TD_8299_input.getInt64(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_6378_key_rightMajor{_ps_partkey450L_k});
            if (it != ht1.end()) {
                int64_t _ps_partkey450L = tbl_SerializeFromObject_TD_8299_input.getInt64(i, 0);
                int64_t _ps_suppkey451L = tbl_SerializeFromObject_TD_8299_input.getInt64(i, 1);
                int32_t _ps_availqty452 = tbl_SerializeFromObject_TD_8299_input.getInt32(i, 2);
                if (_ps_partkey450L == _p_partkey420) {
                    tbl_JOIN_LEFTSEMI_TD_6378_output.setInt64(r, 0, _ps_partkey450L);
                    tbl_JOIN_LEFTSEMI_TD_6378_output.setInt64(r, 1, _ps_suppkey451L);
                    tbl_JOIN_LEFTSEMI_TD_6378_output.setInt32(r, 2, _ps_availqty452);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTSEMI_TD_6378_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_6378_output #Row: " << tbl_JOIN_LEFTSEMI_TD_6378_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5811_key_leftMajor {
    int64_t _ps_partkey450L;
    int64_t _ps_suppkey451L;
    bool operator==(const SW_JOIN_INNER_TD_5811_key_leftMajor& other) const {
        return ((_ps_partkey450L == other._ps_partkey450L) && (_ps_suppkey451L == other._ps_suppkey451L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5811_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5811_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ps_partkey450L)) + (hash<int64_t>()(k._ps_suppkey451L));
    }
};
}
struct SW_JOIN_INNER_TD_5811_payload_leftMajor {
    int64_t _ps_partkey450L;
    int64_t _ps_suppkey451L;
    int32_t _ps_availqty452;
};
struct SW_JOIN_INNER_TD_5811_key_rightMajor {
    int32_t _l_partkey49;
    int32_t _l_suppkey66;
    bool operator==(const SW_JOIN_INNER_TD_5811_key_rightMajor& other) const {
        return ((_l_partkey49 == other._l_partkey49) && (_l_suppkey66 == other._l_suppkey66));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5811_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5811_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_partkey49)) + (hash<int32_t>()(k._l_suppkey66));
    }
};
}
struct SW_JOIN_INNER_TD_5811_payload_rightMajor {
    int32_t _suml_quantity1070;
    int32_t _l_partkey49;
    int32_t _l_suppkey66;
};
void SW_JOIN_INNER_TD_5811(Table &tbl_JOIN_LEFTSEMI_TD_6378_output, Table &tbl_Aggregate_TD_7908_output, Table &tbl_JOIN_INNER_TD_5811_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((cast(cast(ps_availqty#452 as decimal(10,0)) as decimal(22,1)) > (0.5 * sum(l_quantity))#1070) AND (l_partkey#49 = cast(ps_partkey#450L as int))) AND (l_suppkey#66 = cast(ps_suppkey#451L as int))))
    // Left Table: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_availqty#452)
    // Right Table: ListBuffer((0.5 * sum(l_quantity))#1070, l_partkey#49, l_suppkey#66)
    // Output Table: ListBuffer(ps_suppkey#451L)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_6378_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_7908_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5811_key_leftMajor, SW_JOIN_INNER_TD_5811_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_6378_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ps_partkey450L_k = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt64(i, 0);
            int64_t _ps_suppkey451L_k = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_5811_key_leftMajor keyA{_ps_partkey450L_k, _ps_suppkey451L_k};
            int64_t _ps_partkey450L = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt64(i, 0);
            int64_t _ps_suppkey451L = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt64(i, 1);
            int32_t _ps_availqty452 = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5811_payload_leftMajor payloadA{_ps_partkey450L, _ps_suppkey451L, _ps_availqty452};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_7908_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _l_partkey49_k = tbl_Aggregate_TD_7908_output.getInt32(i, 1);
            int32_t _l_suppkey66_k = tbl_Aggregate_TD_7908_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5811_key_leftMajor{_l_partkey49_k, _l_suppkey66_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ps_partkey450L = (it->second)._ps_partkey450L;
                int64_t _ps_suppkey451L = (it->second)._ps_suppkey451L;
                int32_t _ps_availqty452 = (it->second)._ps_availqty452;
                int32_t _suml_quantity1070 = tbl_Aggregate_TD_7908_output.getInt32(i, 0);
                int32_t _l_partkey49 = tbl_Aggregate_TD_7908_output.getInt32(i, 1);
                int32_t _l_suppkey66 = tbl_Aggregate_TD_7908_output.getInt32(i, 2);
                if (((_ps_availqty452 > _suml_quantity1070) && (_l_partkey49 == _ps_partkey450L)) && (_l_suppkey66 == _ps_suppkey451L)) {
                    tbl_JOIN_INNER_TD_5811_output.setInt64(r, 0, _ps_suppkey451L);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5811_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5811_key_rightMajor, SW_JOIN_INNER_TD_5811_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_7908_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _l_partkey49_k = tbl_Aggregate_TD_7908_output.getInt32(i, 1);
            int32_t _l_suppkey66_k = tbl_Aggregate_TD_7908_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5811_key_rightMajor keyA{_l_partkey49_k, _l_suppkey66_k};
            int32_t _suml_quantity1070 = tbl_Aggregate_TD_7908_output.getInt32(i, 0);
            int32_t _l_partkey49 = tbl_Aggregate_TD_7908_output.getInt32(i, 1);
            int32_t _l_suppkey66 = tbl_Aggregate_TD_7908_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5811_payload_rightMajor payloadA{_suml_quantity1070, _l_partkey49, _l_suppkey66};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_6378_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int64_t _ps_partkey450L_k = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt64(i, 0);
            int64_t _ps_suppkey451L_k = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt64(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5811_key_rightMajor{_ps_partkey450L_k, _ps_suppkey451L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _suml_quantity1070 = (it->second)._suml_quantity1070;
                int32_t _l_partkey49 = (it->second)._l_partkey49;
                int32_t _l_suppkey66 = (it->second)._l_suppkey66;
                int64_t _ps_partkey450L = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt64(i, 0);
                int64_t _ps_suppkey451L = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt64(i, 1);
                int32_t _ps_availqty452 = tbl_JOIN_LEFTSEMI_TD_6378_output.getInt32(i, 2);
                if (((_ps_availqty452 > _suml_quantity1070) && (_l_partkey49 == _ps_partkey450L)) && (_l_suppkey66 == _ps_suppkey451L)) {
                    tbl_JOIN_INNER_TD_5811_output.setInt64(r, 0, _ps_suppkey451L);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5811_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5811_output #Row: " << tbl_JOIN_INNER_TD_5811_output.getNumRow() << std::endl;
}

void SW_Project_TD_4266(Table &tbl_JOIN_INNER_TD_5811_output, Table &tbl_Project_TD_4266_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_suppkey#451L as int) AS ps_suppkey#466)
    // Input: ListBuffer(ps_suppkey#451L)
    // Output: ListBuffer(ps_suppkey#466)
    int nrow1 = tbl_JOIN_INNER_TD_5811_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ps_suppkey451L = tbl_JOIN_INNER_TD_5811_output.getInt64(i, 0);
        int32_t _ps_suppkey466 = _ps_suppkey451L;
        tbl_Project_TD_4266_output.setInt32(i, 0, _ps_suppkey466);
    }
    tbl_Project_TD_4266_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4266_output #Row: " << tbl_Project_TD_4266_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3945(Table &tbl_SerializeFromObject_TD_4817_input, Table &tbl_Filter_TD_3945_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = INDONESIA)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4817_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_4817_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _n_nationkey296L = tbl_SerializeFromObject_TD_4817_input.getInt64(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "INDONESIA")) && (1)) {
            int64_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_4817_input.getInt64(i, 0);
            tbl_Filter_TD_3945_output.setInt64(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_3945_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3945_output #Row: " << tbl_Filter_TD_3945_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_3685_key_leftMajor {
    int64_t _s_suppkey484L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_3685_key_leftMajor& other) const {
        return ((_s_suppkey484L == other._s_suppkey484L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_3685_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_3685_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._s_suppkey484L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_3685_payload_leftMajor {
    int64_t _s_suppkey484L;
    int32_t _s_name485;
    int32_t _s_address486;
    int64_t _s_nationkey487L;
};
struct SW_JOIN_LEFTSEMI_TD_3685_key_rightMajor {
    int32_t _ps_suppkey466;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_3685_key_rightMajor& other) const {
        return ((_ps_suppkey466 == other._ps_suppkey466));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_3685_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_3685_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_suppkey466));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_3685_payload_rightMajor {
    int32_t _ps_suppkey466;
};
void SW_JOIN_LEFTSEMI_TD_3685(Table &tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute, Table &tbl_Project_TD_4266_output, Table &tbl_JOIN_LEFTSEMI_TD_3685_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((cast(s_suppkey#484L as int) = ps_suppkey#466))
    // Left Table: ListBuffer(s_suppkey#484L, s_name#485, s_address#486, s_nationkey#487L)
    // Right Table: ListBuffer(ps_suppkey#466)
    // Output Table: ListBuffer(s_name#485, s_address#486, s_nationkey#487L)
    int left_nrow = tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.getNumRow();
    int right_nrow = tbl_Project_TD_4266_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_3685_key_rightMajor, SW_JOIN_LEFTSEMI_TD_3685_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4266_output.getNumRow();
        int nrow2 = tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ps_suppkey466_k = tbl_Project_TD_4266_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_3685_key_rightMajor keyA{_ps_suppkey466_k};
            int32_t _ps_suppkey466 = tbl_Project_TD_4266_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_3685_payload_rightMajor payloadA{_ps_suppkey466};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _s_suppkey484L_k = tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.getInt64(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_3685_key_rightMajor{_s_suppkey484L_k});
            if (it != ht1.end()) {
                int64_t _s_suppkey484L = tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.getInt64(i, 0);
                int32_t _s_name485 = tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.getInt32(i, 1);
                int32_t _s_address486 = tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.getInt32(i, 2);
                int64_t _s_nationkey487L = tbl_SerializeFromObject_TD_5893_input_stringRowIDSubstitute.getInt64(i, 3);
                if (_s_suppkey484L == _ps_suppkey466) {
                    tbl_JOIN_LEFTSEMI_TD_3685_output.setInt32(r, 0, _s_name485);
                    tbl_JOIN_LEFTSEMI_TD_3685_output.setInt32(r, 1, _s_address486);
                    tbl_JOIN_LEFTSEMI_TD_3685_output.setInt64(r, 2, _s_nationkey487L);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTSEMI_TD_3685_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_3685_output #Row: " << tbl_JOIN_LEFTSEMI_TD_3685_output.getNumRow() << std::endl;
}

void SW_Project_TD_2118(Table &tbl_Filter_TD_3945_output, Table &tbl_Project_TD_2118_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L)
    // Output: ListBuffer(n_nationkey#304)
    int nrow1 = tbl_Filter_TD_3945_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey296L = tbl_Filter_TD_3945_output.getInt64(i, 0);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_2118_output.setInt32(i, 0, _n_nationkey304);
    }
    tbl_Project_TD_2118_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2118_output #Row: " << tbl_Project_TD_2118_output.getNumRow() << std::endl;
}

void SW_Project_TD_2232(Table &tbl_JOIN_LEFTSEMI_TD_3685_output, Table &tbl_Project_TD_2232_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_name#485, s_address#486, s_nationkey#487L)
    // Output: ListBuffer(s_name#485, s_address#486, s_nationkey#506)
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_3685_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_JOIN_LEFTSEMI_TD_3685_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_JOIN_LEFTSEMI_TD_3685_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _s_nationkey487L = tbl_JOIN_LEFTSEMI_TD_3685_output.getInt64(i, 2);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_2232_output.setInt32(i, 2, _s_nationkey506);
        tbl_Project_TD_2232_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0, _s_name485);
        tbl_Project_TD_2232_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _s_address486);
    }
    tbl_Project_TD_2232_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2232_output #Row: " << tbl_Project_TD_2232_output.getNumRow() << std::endl;
}


void SW_Sort_TD_0813(Table &tbl_JOIN_INNER_TD_1743_output, Table &tbl_SerializeFromObject_TD_5893_input, Table &tbl_Sort_TD_0813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Sort
    // Operation: ListBuffer(s_name#485 ASC NULLS FIRST)
    // Input: ListBuffer(s_name#485, s_address#486)
    // Output: ListBuffer(s_name#485, s_address#486)
    struct SW_Sort_TD_0813Row {
        std::string _s_name485;
        std::string _s_address486;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0813Row& a, const SW_Sort_TD_0813Row& b) const { return 
 (a._s_name485 < b._s_name485); 
}
    }SW_Sort_TD_0813_order; 

    int nrow1 = tbl_JOIN_INNER_TD_1743_output.getNumRow();
    std::vector<SW_Sort_TD_0813Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_5893_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1743_output.getInt32(i, 0), 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_5893_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1743_output.getInt32(i, 1), 2);
        SW_Sort_TD_0813Row t = {std::string(_s_name485.data()),std::string(_s_address486.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0813_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0813_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _s_name485);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486{};
        memcpy(_s_address486.data(), (it._s_address486).data(), (it._s_address486).length());
        tbl_Sort_TD_0813_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 1, _s_address486);
        if (r < 10) {
            std::cout << (it._s_name485).data() << " " << (it._s_address486).data() << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0813_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0813_output #Row: " << tbl_Sort_TD_0813_output.getNumRow() << std::endl;
}

