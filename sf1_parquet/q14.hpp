#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_3685(Table &tbl_SerializeFromObject_TD_4369_input, Table &tbl_Filter_TD_3685_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_shipdate#15) AND ((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19970301) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19970401))) AND isnotnull(cast(l_partkey#1L as int))))
    // Input: ListBuffer(l_partkey#1L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    // Output: ListBuffer(l_partkey#1L, l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4369_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_4369_input.getInt32(i, 3);
        int32_t _l_partkey1L = tbl_SerializeFromObject_TD_4369_input.getInt32(i, 0);
        if (((1) && ((_l_shipdate15 >= 19970301) && (_l_shipdate15 < 19970401))) && (1)) {
            int32_t _l_partkey1L_t = tbl_SerializeFromObject_TD_4369_input.getInt32(i, 0);
            tbl_Filter_TD_3685_output.setInt32(r, 0, _l_partkey1L_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_4369_input.getInt32(i, 1);
            tbl_Filter_TD_3685_output.setInt32(r, 1, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_4369_input.getInt32(i, 2);
            tbl_Filter_TD_3685_output.setInt32(r, 2, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_3685_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3685_output #Row: " << tbl_Filter_TD_3685_output.getNumRow() << std::endl;
}

void SW_Project_TD_2822(Table &tbl_SerializeFromObject_TD_4305_input, Table &tbl_Project_TD_2822_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(p_partkey#402L as int) AS p_partkey#420)
    // Input: ListBuffer(p_partkey#402L, p_type#405)
    // Output: ListBuffer(p_partkey#420, p_type#405)
    int nrow1 = tbl_SerializeFromObject_TD_4305_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_partkey402L = tbl_SerializeFromObject_TD_4305_input.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_type405 = tbl_SerializeFromObject_TD_4305_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _p_partkey420 = _p_partkey402L;
        tbl_Project_TD_2822_output.setInt32(i, 0, _p_partkey420);
        tbl_Project_TD_2822_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _p_type405);
    }
    tbl_Project_TD_2822_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2822_output #Row: " << tbl_Project_TD_2822_output.getNumRow() << std::endl;
}

void SW_Project_TD_2565(Table &tbl_Filter_TD_3685_output, Table &tbl_Project_TD_2565_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_partkey#1L as int) AS l_partkey#49, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_partkey#1L, l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_partkey#49, l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_Filter_TD_3685_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_partkey1L = tbl_Filter_TD_3685_output.getInt32(i, 0);
        int32_t _l_extendedprice5 = tbl_Filter_TD_3685_output.getInt32(i, 1);
        int32_t _l_discount6 = tbl_Filter_TD_3685_output.getInt32(i, 2);
        int32_t _l_partkey49 = _l_partkey1L;
        tbl_Project_TD_2565_output.setInt32(i, 0, _l_partkey49);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_2565_output.setInt32(i, 1, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_2565_output.setInt32(i, 2, _l_discount134);
    }
    tbl_Project_TD_2565_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2565_output #Row: " << tbl_Project_TD_2565_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_141_key_leftMajor {
    int32_t _l_partkey49;
    bool operator==(const SW_JOIN_INNER_TD_141_key_leftMajor& other) const {
        return ((_l_partkey49 == other._l_partkey49));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_141_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_141_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_partkey49));
    }
};
}
struct SW_JOIN_INNER_TD_141_payload_leftMajor {
    int32_t _l_partkey49;
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
};
struct SW_JOIN_INNER_TD_141_key_rightMajor {
    int32_t _p_partkey420;
    bool operator==(const SW_JOIN_INNER_TD_141_key_rightMajor& other) const {
        return ((_p_partkey420 == other._p_partkey420));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_141_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_141_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_partkey420));
    }
};
}
struct SW_JOIN_INNER_TD_141_payload_rightMajor {
    int32_t _p_partkey420;
    std::string _p_type405;
};
void SW_JOIN_INNER_TD_141(Table &tbl_Project_TD_2565_output, Table &tbl_Project_TD_2822_output, Table &tbl_JOIN_INNER_TD_141_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((l_partkey#49 = p_partkey#420))
    // Left Table: ListBuffer(l_partkey#49, l_extendedprice#117, l_discount#134)
    // Right Table: ListBuffer(p_partkey#420, p_type#405)
    // Output Table: ListBuffer(l_extendedprice#117, l_discount#134, p_type#405)
    int left_nrow = tbl_Project_TD_2565_output.getNumRow();
    int right_nrow = tbl_Project_TD_2822_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_141_key_leftMajor, SW_JOIN_INNER_TD_141_payload_leftMajor> ht1;
        int nrow1 = tbl_Project_TD_2565_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _l_partkey49_k = tbl_Project_TD_2565_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_141_key_leftMajor keyA{_l_partkey49_k};
            int32_t _l_partkey49 = tbl_Project_TD_2565_output.getInt32(i, 0);
            int32_t _l_extendedprice117 = tbl_Project_TD_2565_output.getInt32(i, 1);
            int32_t _l_discount134 = tbl_Project_TD_2565_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_141_payload_leftMajor payloadA{_l_partkey49, _l_extendedprice117, _l_discount134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_2822_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_partkey420_k = tbl_Project_TD_2822_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_141_key_leftMajor{_p_partkey420_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_partkey49 = (it->second)._l_partkey49;
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _p_partkey420 = tbl_Project_TD_2822_output.getInt32(i, 0);
                std::array<char, TPCH_READ_REGION_LEN + 1> _p_type405_n = tbl_Project_TD_2822_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
                std::string _p_type405 = std::string(_p_type405_n.data());
                tbl_JOIN_INNER_TD_141_output.setInt32(r, 0, _l_extendedprice117);
                tbl_JOIN_INNER_TD_141_output.setInt32(r, 1, _l_discount134);
                tbl_JOIN_INNER_TD_141_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 2, _p_type405_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_141_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_141_key_rightMajor, SW_JOIN_INNER_TD_141_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_2822_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_partkey420_k = tbl_Project_TD_2822_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_141_key_rightMajor keyA{_p_partkey420_k};
            int32_t _p_partkey420 = tbl_Project_TD_2822_output.getInt32(i, 0);
            std::array<char, TPCH_READ_REGION_LEN + 1> _p_type405_n = tbl_Project_TD_2822_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
            std::string _p_type405 = std::string(_p_type405_n.data());
            SW_JOIN_INNER_TD_141_payload_rightMajor payloadA{_p_partkey420, _p_type405};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_2565_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _l_partkey49_k = tbl_Project_TD_2565_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_141_key_rightMajor{_l_partkey49_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                std::string _p_type405 = (it->second)._p_type405;
                std::array<char, TPCH_READ_REGION_LEN + 1> _p_type405_n{};
                memcpy(_p_type405_n.data(), (_p_type405).data(), (_p_type405).length());
                int32_t _l_partkey49 = tbl_Project_TD_2565_output.getInt32(i, 0);
                int32_t _l_extendedprice117 = tbl_Project_TD_2565_output.getInt32(i, 1);
                int32_t _l_discount134 = tbl_Project_TD_2565_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_141_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 2, _p_type405_n);
                tbl_JOIN_INNER_TD_141_output.setInt32(r, 0, _l_extendedprice117);
                tbl_JOIN_INNER_TD_141_output.setInt32(r, 1, _l_discount134);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_141_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_141_output #Row: " << tbl_JOIN_INNER_TD_141_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0567(Table &tbl_JOIN_INNER_TD_141_output, Table &tbl_Aggregate_TD_0567_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer((cast((100 * sum(CASE WHEN StartsWith(p_type#405, PROMO) THEN (l_extendedprice#117 * (100 - l_discount#134)) ELSE 0 END)) as double) / cast(sum((l_extendedprice#117 * (100 - l_discount#134))) as double)) AS promo_revenue#1948)
    // Input: ListBuffer(l_extendedprice#117, l_discount#134, p_type#405)
    // Output: ListBuffer(promo_revenue#1948)
    int64_t sum_0 = 0;
    int64_t sum_1 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_141_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_141_output.getInt32(i, 0);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_141_output.getInt32(i, 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_type405 = tbl_JOIN_INNER_TD_141_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        int64_t _promo_revenue1948_sum_0 = (std::string(_p_type405.data()).find("PROMO")==0) ? (_l_extendedprice117 * (100 - _l_discount134)) : 0;
        int64_t _promo_revenue1948_sum_1 = (_l_extendedprice117 * (100 - _l_discount134));
        sum_0 += _promo_revenue1948_sum_0;
        sum_1 += _promo_revenue1948_sum_1;
    }
    int r = 0;
    int64_t _promo_revenue1948 = ((100 * sum_0) / sum_1);
    tbl_Aggregate_TD_0567_output.setInt64(r++, 0, _promo_revenue1948);
    tbl_Aggregate_TD_0567_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0567_output #Row: " << tbl_Aggregate_TD_0567_output.getNumRow() << std::endl;
}

