#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_462(Table &tbl_SerializeFromObject_TD_5176_input, Table &tbl_Filter_TD_462_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(p_brand#410) AND isnotnull(p_container#407)) AND ((p_brand#410 = Brand#21) AND (p_container#407 = WRAP BAG))) AND isnotnull(cast(p_partkey#402L as int))))
    // Input: ListBuffer(p_partkey#402L, p_brand#410, p_container#407)
    // Output: ListBuffer(p_partkey#402L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5176_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_brand410 = tbl_SerializeFromObject_TD_5176_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_container407 = tbl_SerializeFromObject_TD_5176_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        int64_t _p_partkey402L = tbl_SerializeFromObject_TD_5176_input.getInt64(i, 0);
        if ((((1) && (1)) && ((std::string(_p_brand410.data()) == "Brand#21") && (std::string(_p_container407.data()) == "WRAP BAG"))) && (1)) {
            int64_t _p_partkey402L_t = tbl_SerializeFromObject_TD_5176_input.getInt64(i, 0);
            tbl_Filter_TD_462_output.setInt64(r, 0, _p_partkey402L_t);
            r++;
        }
    }
    tbl_Filter_TD_462_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_462_output #Row: " << tbl_Filter_TD_462_output.getNumRow() << std::endl;
}

void SW_Project_TD_4279(Table &tbl_SerializeFromObject_TD_6163_input, Table &tbl_Project_TD_4279_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_partkey#2142L as int) AS l_partkey#49, cast(CheckOverflow((promote_precision(l_quantity#2145) * 100.00), DecimalType(16,2), true) as int) AS l_quantity#100)
    // Input: ListBuffer(l_partkey#2142L, l_quantity#2145)
    // Output: ListBuffer(l_partkey#49, l_quantity#100)
    int nrow1 = tbl_SerializeFromObject_TD_6163_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_partkey2142L = tbl_SerializeFromObject_TD_6163_input.getInt64(i, 0);
        int32_t _l_quantity2145 = tbl_SerializeFromObject_TD_6163_input.getInt32(i, 1);
        int32_t _l_partkey49 = _l_partkey2142L;
        tbl_Project_TD_4279_output.setInt32(i, 0, _l_partkey49);
        int32_t _l_quantity100 = (_l_quantity2145 * 100.00);
        tbl_Project_TD_4279_output.setInt32(i, 1, _l_quantity100);
    }
    tbl_Project_TD_4279_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4279_output #Row: " << tbl_Project_TD_4279_output.getNumRow() << std::endl;
}

void SW_Project_TD_3498(Table &tbl_Filter_TD_462_output, Table &tbl_Project_TD_3498_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(p_partkey#402L as int) AS p_partkey#420)
    // Input: ListBuffer(p_partkey#402L)
    // Output: ListBuffer(p_partkey#420)
    int nrow1 = tbl_Filter_TD_462_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _p_partkey402L = tbl_Filter_TD_462_output.getInt64(i, 0);
        int32_t _p_partkey420 = _p_partkey402L;
        tbl_Project_TD_3498_output.setInt32(i, 0, _p_partkey420);
    }
    tbl_Project_TD_3498_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3498_output #Row: " << tbl_Project_TD_3498_output.getNumRow() << std::endl;
}

void SW_Project_TD_3100(Table &tbl_SerializeFromObject_TD_5942_input, Table &tbl_Project_TD_3100_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_partkey#1L as int) AS l_partkey#49, cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) AS l_quantity#100, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117)
    // Input: ListBuffer(l_partkey#1L, l_quantity#4, l_extendedprice#5)
    // Output: ListBuffer(l_partkey#49, l_quantity#100, l_extendedprice#117)
    int nrow1 = tbl_SerializeFromObject_TD_5942_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_partkey1L = tbl_SerializeFromObject_TD_5942_input.getInt64(i, 0);
        int32_t _l_quantity4 = tbl_SerializeFromObject_TD_5942_input.getInt32(i, 1);
        int32_t _l_extendedprice5 = tbl_SerializeFromObject_TD_5942_input.getInt32(i, 2);
        int32_t _l_partkey49 = _l_partkey1L;
        tbl_Project_TD_3100_output.setInt32(i, 0, _l_partkey49);
        int32_t _l_quantity100 = (_l_quantity4 * 100.00);
        tbl_Project_TD_3100_output.setInt32(i, 1, _l_quantity100);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_3100_output.setInt32(i, 2, _l_extendedprice117);
    }
    tbl_Project_TD_3100_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3100_output #Row: " << tbl_Project_TD_3100_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_3724_key;
struct SW_Aggregate_TD_3724_payload {
    int64_t _avgl_quantity2140_avg_0;
    int32_t _l_partkey492201;
};
void SW_Aggregate_TD_3724(Table &tbl_Project_TD_4279_output, Table &tbl_Aggregate_TD_3724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(l_partkey#49, (0.2 * avg(l_quantity#100)) AS (0.2 * avg(l_quantity))#2140, l_partkey#49 AS l_partkey#49#2201)
    // Input: ListBuffer(l_partkey#49, l_quantity#100)
    // Output: ListBuffer((0.2 * avg(l_quantity))#2140, l_partkey#49#2201)
    std::unordered_map<SW_Aggregate_TD_3724_key, SW_Aggregate_TD_3724_payload> ht1;
    int nrow1 = tbl_Project_TD_4279_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_partkey49 = tbl_Project_TD_4279_output.getInt32(i, 0);
        int32_t _l_quantity100 = tbl_Project_TD_4279_output.getInt32(i, 1);
        SW_Aggregate_TD_3724_key k = _l_partkey49;
        int64_t _avgl_quantity2140_avg_0 = _l_quantity100;
        int32_t _l_partkey492201 = _l_partkey49;
        SW_Aggregate_TD_3724_payload p{_avgl_quantity2140_avg_0, _l_partkey492201};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._avgl_quantity2140_avg_0 + _avgl_quantity2140_avg_0);
            p._avgl_quantity2140_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _l_partkey49 not required in the output table
        int64_t _avgl_quantity2140 = (0.2 * (it.second)._avgl_quantity2140_avg_0 / nrow1);
        tbl_Aggregate_TD_3724_output.setInt64(r, 0, _avgl_quantity2140);
        tbl_Aggregate_TD_3724_output.setInt32(r, 1, (it.second)._l_partkey492201);
        ++r;
    }
    tbl_Aggregate_TD_3724_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3724_output #Row: " << tbl_Aggregate_TD_3724_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_1314_key_leftMajor {
    int32_t _p_partkey420;
    bool operator==(const SW_JOIN_INNER_TD_1314_key_leftMajor& other) const {
        return ((_p_partkey420 == other._p_partkey420));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1314_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1314_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_partkey420));
    }
};
}
struct SW_JOIN_INNER_TD_1314_payload_leftMajor {
    int32_t _l_quantity100;
    int32_t _l_extendedprice117;
    int32_t _p_partkey420;
};
struct SW_JOIN_INNER_TD_1314_key_rightMajor {
    int32_t _l_partkey492201;
    bool operator==(const SW_JOIN_INNER_TD_1314_key_rightMajor& other) const {
        return ((_l_partkey492201 == other._l_partkey492201));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1314_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1314_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_partkey492201));
    }
};
}
struct SW_JOIN_INNER_TD_1314_payload_rightMajor {
    int64_t _avgl_quantity2140;
    int32_t _l_partkey492201;
};
void SW_JOIN_INNER_TD_1314(Table &tbl_JOIN_INNER_TD_2597_output, Table &tbl_Aggregate_TD_3724_output, Table &tbl_JOIN_INNER_TD_1314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cast(l_quantity#100 as double) < (0.2 * avg(l_quantity))#2140) AND (l_partkey#49#2201 = p_partkey#420)))
    // Left Table: ListBuffer(l_quantity#100, l_extendedprice#117, p_partkey#420)
    // Right Table: ListBuffer((0.2 * avg(l_quantity))#2140, l_partkey#49#2201)
    // Output Table: ListBuffer(l_extendedprice#117)
    int left_nrow = tbl_JOIN_INNER_TD_2597_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3724_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1314_key_leftMajor, SW_JOIN_INNER_TD_1314_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2597_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_partkey420_k = tbl_JOIN_INNER_TD_2597_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_1314_key_leftMajor keyA{_p_partkey420_k};
            int32_t _l_quantity100 = tbl_JOIN_INNER_TD_2597_output.getInt32(i, 0);
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_2597_output.getInt32(i, 1);
            int32_t _p_partkey420 = tbl_JOIN_INNER_TD_2597_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_1314_payload_leftMajor payloadA{_l_quantity100, _l_extendedprice117, _p_partkey420};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_3724_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _l_partkey492201_k = tbl_Aggregate_TD_3724_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1314_key_leftMajor{_l_partkey492201_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_quantity100 = (it->second)._l_quantity100;
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                int64_t _avgl_quantity2140 = tbl_Aggregate_TD_3724_output.getInt64(i, 0);
                int32_t _l_partkey492201 = tbl_Aggregate_TD_3724_output.getInt32(i, 1);
                if (_l_quantity100 < _avgl_quantity2140) {
                    tbl_JOIN_INNER_TD_1314_output.setInt32(r, 0, _l_extendedprice117);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_1314_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1314_key_rightMajor, SW_JOIN_INNER_TD_1314_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3724_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _l_partkey492201_k = tbl_Aggregate_TD_3724_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1314_key_rightMajor keyA{_l_partkey492201_k};
            int64_t _avgl_quantity2140 = tbl_Aggregate_TD_3724_output.getInt64(i, 0);
            int32_t _l_partkey492201 = tbl_Aggregate_TD_3724_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1314_payload_rightMajor payloadA{_avgl_quantity2140, _l_partkey492201};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_2597_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_partkey420_k = tbl_JOIN_INNER_TD_2597_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1314_key_rightMajor{_p_partkey420_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _avgl_quantity2140 = (it->second)._avgl_quantity2140;
                int32_t _l_partkey492201 = (it->second)._l_partkey492201;
                int32_t _l_quantity100 = tbl_JOIN_INNER_TD_2597_output.getInt32(i, 0);
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_2597_output.getInt32(i, 1);
                int32_t _p_partkey420 = tbl_JOIN_INNER_TD_2597_output.getInt32(i, 2);
                if (_l_quantity100 < _avgl_quantity2140) {
                    tbl_JOIN_INNER_TD_1314_output.setInt32(r, 0, _l_extendedprice117);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_1314_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1314_output #Row: " << tbl_JOIN_INNER_TD_1314_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0862(Table &tbl_JOIN_INNER_TD_1314_output, Table &tbl_Aggregate_TD_0862_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(cast(sum(l_extendedprice#117) as decimal(20,0)) as decimal(21,1))) / 7.0), DecimalType(27,6), true) AS avg_yearly#2137)
    // Input: ListBuffer(l_extendedprice#117)
    // Output: ListBuffer(avg_yearly#2137)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1314_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_1314_output.getInt32(i, 0);
        int64_t _avg_yearly2137_sum_0 = _l_extendedprice117;
        sum_0 += _avg_yearly2137_sum_0;
    }
    int r = 0;
    int64_t _avg_yearly2137 = (sum_0 / 7.0);
    tbl_Aggregate_TD_0862_output.setInt64(r++, 0, _avg_yearly2137);
    tbl_Aggregate_TD_0862_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0862_output #Row: " << tbl_Aggregate_TD_0862_output.getNumRow() << std::endl;
}

