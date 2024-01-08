#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_3962(Table &tbl_SerializeFromObject_TD_4606_input, Table &tbl_Filter_TD_3962_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(p_size#406) AND (p_size#406 >= 1)) AND isnotnull(cast(p_partkey#402L as int))) AND (((((p_brand#410 = Brand#51) AND p_container#407 IN (SM CASE,SM BOX,SM PACK,SM PKG)) AND (p_size#406 <= 5)) OR (((p_brand#410 = Brand#32) AND p_container#407 IN (MED BAG,MED BOX,MED PKG,MED PACK)) AND (p_size#406 <= 10))) OR (((p_brand#410 = Brand#12) AND p_container#407 IN (LG CASE,LG BOX,LG PACK,LG PKG)) AND (p_size#406 <= 15)))))
    // Input: ListBuffer(p_partkey#402L, p_size#406, p_container#407, p_brand#410)
    // Output: ListBuffer(p_partkey#402L, p_size#406, p_container#407, p_brand#410)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4606_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_size406 = tbl_SerializeFromObject_TD_4606_input.getInt32(i, 1);
        int32_t _p_partkey402L = tbl_SerializeFromObject_TD_4606_input.getInt32(i, 0);
        std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410 = tbl_SerializeFromObject_TD_4606_input.getcharN<char, TPCH_READ_P_BRND_LEN + 1>(i, 3);
        std::array<char, TPCH_READ_P_CNTR_LEN + 1> _p_container407 = tbl_SerializeFromObject_TD_4606_input.getcharN<char, TPCH_READ_P_CNTR_LEN + 1>(i, 2);
        auto reuse_col_str_678 = std::string(_p_container407.data());
        auto reuse_col_str_2 = std::string(_p_container407.data());
        auto reuse_col_str_834 = std::string(_p_container407.data());
        if ((((1) && (_p_size406 >= 1)) && (1)) && (((((std::string(_p_brand410.data()) == "Brand#51") && ((reuse_col_str_678 == "SM CASE") || (reuse_col_str_678 == "SM BOX") || (reuse_col_str_678 == "SM PACK") || (reuse_col_str_678 == "SM PKG") || (0))) && (_p_size406 <= 5)) || (((std::string(_p_brand410.data()) == "Brand#32") && ((reuse_col_str_2 == "MED BAG") || (reuse_col_str_2 == "MED BOX") || (reuse_col_str_2 == "MED PKG") || (reuse_col_str_2 == "MED PACK") || (0))) && (_p_size406 <= 10))) || (((std::string(_p_brand410.data()) == "Brand#12") && ((reuse_col_str_834 == "LG CASE") || (reuse_col_str_834 == "LG BOX") || (reuse_col_str_834 == "LG PACK") || (reuse_col_str_834 == "LG PKG") || (0))) && (_p_size406 <= 15)))) {
            int32_t _p_partkey402L_t = tbl_SerializeFromObject_TD_4606_input.getInt32(i, 0);
            tbl_Filter_TD_3962_output.setInt32(r, 0, _p_partkey402L_t);
            int32_t _p_size406_t = tbl_SerializeFromObject_TD_4606_input.getInt32(i, 1);
            tbl_Filter_TD_3962_output.setInt32(r, 1, _p_size406_t);
            tbl_Filter_TD_3962_output.setInt32(r, 2, i);
            tbl_Filter_TD_3962_output.setInt32(r, 3, i);
            r++;
        }
    }
    tbl_Filter_TD_3962_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3962_output #Row: " << tbl_Filter_TD_3962_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3180(Table &tbl_SerializeFromObject_TD_4679_input, Table &tbl_Filter_TD_3180_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(l_shipinstruct#12) AND (l_shipmode#13 IN (AIR,AIR REG) AND (l_shipinstruct#12 = DELIVER IN PERSON))) AND isnotnull(cast(l_partkey#1L as int))) AND ((((cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) >= 7) AND (cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) <= 17)) OR ((cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) >= 10) AND (cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) <= 20))) OR ((cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) >= 24) AND (cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) <= 34)))))
    // Input: ListBuffer(l_partkey#1L, l_quantity#4, l_extendedprice#5, l_discount#6, l_shipinstruct#12, l_shipmode#13)
    // Output: ListBuffer(l_partkey#1L, l_quantity#4, l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4679_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _l_shipinstruct12 = tbl_SerializeFromObject_TD_4679_input.getcharN<char, TPCH_READ_MAXAGG_LEN + 1>(i, 4);
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _l_shipmode13 = tbl_SerializeFromObject_TD_4679_input.getcharN<char, TPCH_READ_MAXAGG_LEN + 1>(i, 5);
        int32_t _l_partkey1L = tbl_SerializeFromObject_TD_4679_input.getInt32(i, 0);
        int32_t _l_quantity4 = tbl_SerializeFromObject_TD_4679_input.getInt32(i, 1);
        auto reuse_col_str_272 = std::string(_l_shipmode13.data());
        if ((((1) && (((reuse_col_str_272 == "AIR") || (reuse_col_str_272 == "AIR REG") || (0)) && (std::string(_l_shipinstruct12.data()) == "DELIVER IN PERSON"))) && (1)) && ((((_l_quantity4 >= 7) && (_l_quantity4 <= 17)) || ((_l_quantity4 >= 10) && (_l_quantity4 <= 20))) || ((_l_quantity4 >= 24) && (_l_quantity4 <= 34)))) {
            int32_t _l_partkey1L_t = tbl_SerializeFromObject_TD_4679_input.getInt32(i, 0);
            tbl_Filter_TD_3180_output.setInt32(r, 0, _l_partkey1L_t);
            int32_t _l_quantity4_t = tbl_SerializeFromObject_TD_4679_input.getInt32(i, 1);
            tbl_Filter_TD_3180_output.setInt32(r, 1, _l_quantity4_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_4679_input.getInt32(i, 2);
            tbl_Filter_TD_3180_output.setInt32(r, 2, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_4679_input.getInt32(i, 3);
            tbl_Filter_TD_3180_output.setInt32(r, 3, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_3180_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3180_output #Row: " << tbl_Filter_TD_3180_output.getNumRow() << std::endl;
}



struct SW_JOIN_INNER_TD_1583_key_leftMajor {
    int32_t _l_partkey49;
    bool operator==(const SW_JOIN_INNER_TD_1583_key_leftMajor& other) const {
        return ((_l_partkey49 == other._l_partkey49));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1583_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1583_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_partkey49));
    }
};
}
struct SW_JOIN_INNER_TD_1583_payload_leftMajor {
    int32_t _l_partkey49;
    int32_t _l_quantity100;
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
};
struct SW_JOIN_INNER_TD_1583_key_rightMajor {
    int32_t _p_partkey420;
    bool operator==(const SW_JOIN_INNER_TD_1583_key_rightMajor& other) const {
        return ((_p_partkey420 == other._p_partkey420));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1583_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1583_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_partkey420));
    }
};
}
struct SW_JOIN_INNER_TD_1583_payload_rightMajor {
    int32_t _p_partkey420;
    int32_t _p_size406;
    std::string _p_container407;
    std::string _p_brand410;
};
void SW_JOIN_INNER_TD_1583(Table &tbl_Project_TD_2674_output, Table &tbl_Project_TD_2539_output, Table &tbl_SerializeFromObject_TD_4606_input, Table &tbl_JOIN_INNER_TD_1583_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((p_partkey#420 = l_partkey#49) AND (((((((p_brand#410 = Brand#51) AND p_container#407 IN (SM CASE,SM BOX,SM PACK,SM PKG)) AND (l_quantity#100 >= 7)) AND (l_quantity#100 <= 17)) AND (p_size#406 <= 5)) OR (((((p_brand#410 = Brand#32) AND p_container#407 IN (MED BAG,MED BOX,MED PKG,MED PACK)) AND (l_quantity#100 >= 10)) AND (l_quantity#100 <= 20)) AND (p_size#406 <= 10))) OR (((((p_brand#410 = Brand#12) AND p_container#407 IN (LG CASE,LG BOX,LG PACK,LG PKG)) AND (l_quantity#100 >= 24)) AND (l_quantity#100 <= 34)) AND (p_size#406 <= 15)))))
    // Left Table: ListBuffer(l_partkey#49, l_quantity#100, l_extendedprice#117, l_discount#134)
    // Right Table: ListBuffer(p_partkey#420, p_size#406, p_container#407, p_brand#410)
    // Output Table: ListBuffer(l_extendedprice#117, l_discount#134)
    int left_nrow = tbl_Project_TD_2674_output.getNumRow();
    int right_nrow = tbl_Project_TD_2539_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1583_key_leftMajor, SW_JOIN_INNER_TD_1583_payload_leftMajor> ht1;
        int nrow1 = tbl_Project_TD_2674_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _l_partkey49_k = tbl_Project_TD_2674_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1583_key_leftMajor keyA{_l_partkey49_k};
            int32_t _l_partkey49 = tbl_Project_TD_2674_output.getInt32(i, 0);
            int32_t _l_quantity100 = tbl_Project_TD_2674_output.getInt32(i, 1);
            int32_t _l_extendedprice117 = tbl_Project_TD_2674_output.getInt32(i, 2);
            int32_t _l_discount134 = tbl_Project_TD_2674_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1583_payload_leftMajor payloadA{_l_partkey49, _l_quantity100, _l_extendedprice117, _l_discount134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_2539_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_partkey420_k = tbl_Project_TD_2539_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1583_key_leftMajor{_p_partkey420_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_partkey49 = (it->second)._l_partkey49;
                int32_t _l_quantity100 = (it->second)._l_quantity100;
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _p_partkey420 = tbl_Project_TD_2539_output.getInt32(i, 0);
                int32_t _p_size406 = tbl_Project_TD_2539_output.getInt32(i, 1);
            std::array<char, TPCH_READ_P_CNTR_LEN + 1> _p_container407_n = tbl_SerializeFromObject_TD_4606_input.getcharN<char, TPCH_READ_P_CNTR_LEN + 1>(tbl_Project_TD_2539_output.getInt32(i, 2), 2);
            std::string _p_container407 = std::string(_p_container407_n.data());
            std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410_n = tbl_SerializeFromObject_TD_4606_input.getcharN<char, TPCH_READ_P_BRND_LEN + 1>(tbl_Project_TD_2539_output.getInt32(i, 3), 3);
            std::string _p_brand410 = std::string(_p_brand410_n.data());
                if (((((((_p_brand410 == "Brand#51") && ((_p_container407 == "SM CASE") || (_p_container407 == "SM BOX") || (_p_container407 == "SM PACK") || (_p_container407 == "SM PKG") || (0))) && (_l_quantity100 >= 7)) && (_l_quantity100 <= 17)) && (_p_size406 <= 5)) || (((((_p_brand410 == "Brand#32") && ((_p_container407 == "MED BAG") || (_p_container407 == "MED BOX") || (_p_container407 == "MED PKG") || (_p_container407 == "MED PACK") || (0))) && (_l_quantity100 >= 10)) && (_l_quantity100 <= 20)) && (_p_size406 <= 10))) || (((((_p_brand410 == "Brand#12") && ((_p_container407 == "LG CASE") || (_p_container407 == "LG BOX") || (_p_container407 == "LG PACK") || (_p_container407 == "LG PKG") || (0))) && (_l_quantity100 >= 24)) && (_l_quantity100 <= 34)) && (_p_size406 <= 15))) {
                    tbl_JOIN_INNER_TD_1583_output.setInt32(r, 0, _l_extendedprice117);
                    tbl_JOIN_INNER_TD_1583_output.setInt32(r, 1, _l_discount134);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_1583_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1583_key_rightMajor, SW_JOIN_INNER_TD_1583_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_2539_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_partkey420_k = tbl_Project_TD_2539_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1583_key_rightMajor keyA{_p_partkey420_k};
            int32_t _p_partkey420 = tbl_Project_TD_2539_output.getInt32(i, 0);
            int32_t _p_size406 = tbl_Project_TD_2539_output.getInt32(i, 1);
            std::array<char, TPCH_READ_P_CNTR_LEN + 1> _p_container407_n = tbl_SerializeFromObject_TD_4606_input.getcharN<char, TPCH_READ_P_CNTR_LEN + 1>(tbl_Project_TD_2539_output.getInt32(i, 2), 2);
            std::string _p_container407 = std::string(_p_container407_n.data());
            std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410_n = tbl_SerializeFromObject_TD_4606_input.getcharN<char, TPCH_READ_P_BRND_LEN + 1>(tbl_Project_TD_2539_output.getInt32(i, 3), 3);
            std::string _p_brand410 = std::string(_p_brand410_n.data());
            SW_JOIN_INNER_TD_1583_payload_rightMajor payloadA{_p_partkey420, _p_size406, _p_container407, _p_brand410};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_2674_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _l_partkey49_k = tbl_Project_TD_2674_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1583_key_rightMajor{_l_partkey49_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_partkey420 = (it->second)._p_partkey420;
                int32_t _p_size406 = (it->second)._p_size406;
                std::string _p_container407 = (it->second)._p_container407;
                std::array<char, TPCH_READ_P_CNTR_LEN + 1> _p_container407_n{};
                memcpy(_p_container407_n.data(), (_p_container407).data(), (_p_container407).length());
                std::string _p_brand410 = (it->second)._p_brand410;
                std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410_n{};
                memcpy(_p_brand410_n.data(), (_p_brand410).data(), (_p_brand410).length());
                int32_t _l_partkey49 = tbl_Project_TD_2674_output.getInt32(i, 0);
                int32_t _l_quantity100 = tbl_Project_TD_2674_output.getInt32(i, 1);
                int32_t _l_extendedprice117 = tbl_Project_TD_2674_output.getInt32(i, 2);
                int32_t _l_discount134 = tbl_Project_TD_2674_output.getInt32(i, 3);
                if (((((((_p_brand410 == "Brand#51") && ((_p_container407 == "SM CASE") || (_p_container407 == "SM BOX") || (_p_container407 == "SM PACK") || (_p_container407 == "SM PKG") || (0))) && (_l_quantity100 >= 7)) && (_l_quantity100 <= 17)) && (_p_size406 <= 5)) || (((((_p_brand410 == "Brand#32") && ((_p_container407 == "MED BAG") || (_p_container407 == "MED BOX") || (_p_container407 == "MED PKG") || (_p_container407 == "MED PACK") || (0))) && (_l_quantity100 >= 10)) && (_l_quantity100 <= 20)) && (_p_size406 <= 10))) || (((((_p_brand410 == "Brand#12") && ((_p_container407 == "LG CASE") || (_p_container407 == "LG BOX") || (_p_container407 == "LG PACK") || (_p_container407 == "LG PKG") || (0))) && (_l_quantity100 >= 24)) && (_l_quantity100 <= 34)) && (_p_size406 <= 15))) {
                    tbl_JOIN_INNER_TD_1583_output.setInt32(r, 0, _l_extendedprice117);
                    tbl_JOIN_INNER_TD_1583_output.setInt32(r, 1, _l_discount134);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_1583_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1583_output #Row: " << tbl_JOIN_INNER_TD_1583_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0376(Table &tbl_JOIN_INNER_TD_1583_output, Table &tbl_Aggregate_TD_0376_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(sum((l_extendedprice#117 * (100 - l_discount#134))) AS revenue#1861L)
    // Input: ListBuffer(l_extendedprice#117, l_discount#134)
    // Output: ListBuffer(revenue#1861L)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1583_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_1583_output.getInt32(i, 0);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_1583_output.getInt32(i, 1);
        int64_t _revenue1861L_sum_0 = (_l_extendedprice117 * (100 - _l_discount134));
        sum_0 += _revenue1861L_sum_0;
    }
    int r = 0;
    int64_t _revenue1861L = sum_0;
    tbl_Aggregate_TD_0376_output.setInt64(r++, 0, _revenue1861L);
    tbl_Aggregate_TD_0376_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0376_output #Row: " << tbl_Aggregate_TD_0376_output.getNumRow() << std::endl;
}

