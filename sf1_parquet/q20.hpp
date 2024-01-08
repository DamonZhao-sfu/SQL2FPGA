#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8519(Table &tbl_SerializeFromObject_TD_9919_input, Table &tbl_Filter_TD_8519_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(p_name#403) AND StartsWith(p_name#403, blush)))
    // Input: ListBuffer(p_partkey#402L, p_name#403)
    // Output: ListBuffer(p_partkey#402L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9919_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_P_NAME_LEN + 1> _p_name403 = tbl_SerializeFromObject_TD_9919_input.getcharN<char, TPCH_READ_P_NAME_LEN + 1>(i, 1);
        if ((1) && (std::string(_p_name403.data()).find("blush")==0)) {
            int32_t _p_partkey402L_t = tbl_SerializeFromObject_TD_9919_input.getInt32(i, 0);
            tbl_Filter_TD_8519_output.setInt32(r, 0, _p_partkey402L_t);
            r++;
        }
    }
    tbl_Filter_TD_8519_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8519_output #Row: " << tbl_Filter_TD_8519_output.getNumRow() << std::endl;
}

void SW_Filter_TD_992(Table &tbl_SerializeFromObject_TD_1073_input, Table &tbl_Filter_TD_992_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_shipdate#15) AND ((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19950101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19960101))) AND (isnotnull(cast(l_partkey#1L as int)) AND isnotnull(cast(l_suppkey#2L as int)))))
    // Input: ListBuffer(l_partkey#1L, l_suppkey#2L, l_quantity#4, l_shipdate#15)
    // Output: ListBuffer(l_partkey#1L, l_suppkey#2L, l_quantity#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1073_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_1073_input.getInt32(i, 3);
        int32_t _l_partkey1L = tbl_SerializeFromObject_TD_1073_input.getInt32(i, 0);
        int32_t _l_suppkey2L = tbl_SerializeFromObject_TD_1073_input.getInt32(i, 1);
        if (((1) && ((_l_shipdate15 >= 19950101) && (_l_shipdate15 < 19960101))) && ((1) && (1))) {
            int32_t _l_partkey1L_t = tbl_SerializeFromObject_TD_1073_input.getInt32(i, 0);
            tbl_Filter_TD_992_output.setInt32(r, 0, _l_partkey1L_t);
            int32_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_1073_input.getInt32(i, 1);
            tbl_Filter_TD_992_output.setInt32(r, 1, _l_suppkey2L_t);
            int32_t _l_quantity4_t = tbl_SerializeFromObject_TD_1073_input.getInt32(i, 2);
            tbl_Filter_TD_992_output.setInt32(r, 2, _l_quantity4_t);
            r++;
        }
    }
    tbl_Filter_TD_992_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_992_output #Row: " << tbl_Filter_TD_992_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_7618_consolidate(Table &tbl_Aggregate_TD_7618_output_preprocess, Table &tbl_Aggregate_TD_7618_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_7618_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        // Error: unsupported data type - revisit cpu/fpga determination logic - DecimalType(22,1) - default to IntegerType
        int32_t _suml_quantity2368 = tbl_Aggregate_TD_7618_output_preprocess.getInt32(r, 0);
        tbl_Aggregate_TD_7618_output.setInt32(r, 0, _suml_quantity2368);
        int32_t _l_partkey49 = tbl_Aggregate_TD_7618_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_7618_output.setInt32(r, 1, _l_partkey49);
        int32_t _l_suppkey66 = tbl_Aggregate_TD_7618_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_7618_output.setInt32(r, 2, _l_suppkey66);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_7618_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_7618_output #Row: " << tbl_Aggregate_TD_7618_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_6766_key_leftMajor {
    int32_t _ps_partkey450L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_6766_key_leftMajor& other) const {
        return ((_ps_partkey450L == other._ps_partkey450L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_6766_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_6766_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_partkey450L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_6766_payload_leftMajor {
    int32_t _ps_partkey450L;
    int32_t _ps_suppkey451L;
    int32_t _ps_availqty452;
};
struct SW_JOIN_LEFTSEMI_TD_6766_key_rightMajor {
    int32_t _p_partkey420;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_6766_key_rightMajor& other) const {
        return ((_p_partkey420 == other._p_partkey420));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_6766_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_6766_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_partkey420));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_6766_payload_rightMajor {
    int32_t _p_partkey420;
};
void SW_JOIN_LEFTSEMI_TD_6766(Table &tbl_SerializeFromObject_TD_8734_input, Table &tbl_Project_TD_7165_output, Table &tbl_JOIN_LEFTSEMI_TD_6766_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((cast(ps_partkey#450L as int) = p_partkey#420))
    // Left Table: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_availqty#452)
    // Right Table: ListBuffer(p_partkey#420)
    // Output Table: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_availqty#452)
    int left_nrow = tbl_SerializeFromObject_TD_8734_input.getNumRow();
    int right_nrow = tbl_Project_TD_7165_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_6766_key_rightMajor, SW_JOIN_LEFTSEMI_TD_6766_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_7165_output.getNumRow();
        int nrow2 = tbl_SerializeFromObject_TD_8734_input.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_partkey420_k = tbl_Project_TD_7165_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_6766_key_rightMajor keyA{_p_partkey420_k};
            int32_t _p_partkey420 = tbl_Project_TD_7165_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_6766_payload_rightMajor payloadA{_p_partkey420};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _ps_partkey450L_k = tbl_SerializeFromObject_TD_8734_input.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_6766_key_rightMajor{_ps_partkey450L_k});
            if (it != ht1.end()) {
                int32_t _ps_partkey450L = tbl_SerializeFromObject_TD_8734_input.getInt32(i, 0);
                int32_t _ps_suppkey451L = tbl_SerializeFromObject_TD_8734_input.getInt32(i, 1);
                int32_t _ps_availqty452 = tbl_SerializeFromObject_TD_8734_input.getInt32(i, 2);
                if (_ps_partkey450L == _p_partkey420) {
                    tbl_JOIN_LEFTSEMI_TD_6766_output.setInt32(r, 0, _ps_partkey450L);
                    tbl_JOIN_LEFTSEMI_TD_6766_output.setInt32(r, 1, _ps_suppkey451L);
                    tbl_JOIN_LEFTSEMI_TD_6766_output.setInt32(r, 2, _ps_availqty452);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTSEMI_TD_6766_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_6766_output #Row: " << tbl_JOIN_LEFTSEMI_TD_6766_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5882_key_leftMajor {
    int32_t _ps_partkey450L;
    int32_t _ps_suppkey451L;
    bool operator==(const SW_JOIN_INNER_TD_5882_key_leftMajor& other) const {
        return ((_ps_partkey450L == other._ps_partkey450L) && (_ps_suppkey451L == other._ps_suppkey451L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5882_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5882_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_partkey450L)) + (hash<int32_t>()(k._ps_suppkey451L));
    }
};
}
struct SW_JOIN_INNER_TD_5882_payload_leftMajor {
    int32_t _ps_partkey450L;
    int32_t _ps_suppkey451L;
    int32_t _ps_availqty452;
};
struct SW_JOIN_INNER_TD_5882_key_rightMajor {
    int32_t _l_partkey49;
    int32_t _l_suppkey66;
    bool operator==(const SW_JOIN_INNER_TD_5882_key_rightMajor& other) const {
        return ((_l_partkey49 == other._l_partkey49) && (_l_suppkey66 == other._l_suppkey66));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5882_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5882_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_partkey49)) + (hash<int32_t>()(k._l_suppkey66));
    }
};
}
struct SW_JOIN_INNER_TD_5882_payload_rightMajor {
    // Unsupported join key type
    int32_t _l_partkey49;
    int32_t _l_suppkey66;
};
void SW_JOIN_INNER_TD_5882(Table &tbl_JOIN_LEFTSEMI_TD_6766_output, Table &tbl_Aggregate_TD_7618_output, Table &tbl_JOIN_INNER_TD_5882_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((cast(cast(ps_availqty#452 as decimal(10,0)) as decimal(22,1)) > (0.5 * sum(l_quantity))#2368) AND (l_partkey#49 = cast(ps_partkey#450L as int))) AND (l_suppkey#66 = cast(ps_suppkey#451L as int))))
    // Left Table: ListBuffer(ps_partkey#450L, ps_suppkey#451L, ps_availqty#452)
    // Right Table: ListBuffer((0.5 * sum(l_quantity))#2368, l_partkey#49, l_suppkey#66)
    // Output Table: ListBuffer(ps_suppkey#451L)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_6766_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_7618_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5882_key_leftMajor, SW_JOIN_INNER_TD_5882_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_6766_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ps_partkey450L_k = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 0);
            int32_t _ps_suppkey451L_k = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5882_key_leftMajor keyA{_ps_partkey450L_k, _ps_suppkey451L_k};
            int32_t _ps_partkey450L = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 0);
            int32_t _ps_suppkey451L = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 1);
            int32_t _ps_availqty452 = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5882_payload_leftMajor payloadA{_ps_partkey450L, _ps_suppkey451L, _ps_availqty452};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_7618_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _l_partkey49_k = tbl_Aggregate_TD_7618_output.getInt32(i, 1);
            int32_t _l_suppkey66_k = tbl_Aggregate_TD_7618_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5882_key_leftMajor{_l_partkey49_k, _l_suppkey66_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ps_partkey450L = (it->second)._ps_partkey450L;
                int32_t _ps_suppkey451L = (it->second)._ps_suppkey451L;
                int32_t _ps_availqty452 = (it->second)._ps_availqty452;
                // Unsupported join key type
                int32_t _l_partkey49 = tbl_Aggregate_TD_7618_output.getInt32(i, 1);
                int32_t _l_suppkey66 = tbl_Aggregate_TD_7618_output.getInt32(i, 2);
                if (((_ps_availqty452 > _suml_quantity2368) && (_l_partkey49 == _ps_partkey450L)) && (_l_suppkey66 == _ps_suppkey451L)) {
                    tbl_JOIN_INNER_TD_5882_output.setInt32(r, 0, _ps_suppkey451L);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5882_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5882_key_rightMajor, SW_JOIN_INNER_TD_5882_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_7618_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _l_partkey49_k = tbl_Aggregate_TD_7618_output.getInt32(i, 1);
            int32_t _l_suppkey66_k = tbl_Aggregate_TD_7618_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5882_key_rightMajor keyA{_l_partkey49_k, _l_suppkey66_k};
            // Unsupported join key type
            int32_t _l_partkey49 = tbl_Aggregate_TD_7618_output.getInt32(i, 1);
            int32_t _l_suppkey66 = tbl_Aggregate_TD_7618_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5882_payload_rightMajor payloadA{_suml_quantity2368, _l_partkey49, _l_suppkey66};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_6766_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ps_partkey450L_k = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 0);
            int32_t _ps_suppkey451L_k = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5882_key_rightMajor{_ps_partkey450L_k, _ps_suppkey451L_k});
            auto it = its.first;
            while (it != its.second) {
                // Unsupported join key type
                int32_t _l_partkey49 = (it->second)._l_partkey49;
                int32_t _l_suppkey66 = (it->second)._l_suppkey66;
                int32_t _ps_partkey450L = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 0);
                int32_t _ps_suppkey451L = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 1);
                int32_t _ps_availqty452 = tbl_JOIN_LEFTSEMI_TD_6766_output.getInt32(i, 2);
                if (((_ps_availqty452 > _suml_quantity2368) && (_l_partkey49 == _ps_partkey450L)) && (_l_suppkey66 == _ps_suppkey451L)) {
                    tbl_JOIN_INNER_TD_5882_output.setInt32(r, 0, _ps_suppkey451L);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5882_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5882_output #Row: " << tbl_JOIN_INNER_TD_5882_output.getNumRow() << std::endl;
}


void SW_Filter_TD_3283(Table &tbl_SerializeFromObject_TD_4857_input, Table &tbl_Filter_TD_3283_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = INDONESIA)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4857_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_4857_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_4857_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "INDONESIA")) && (1)) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_4857_input.getInt32(i, 0);
            tbl_Filter_TD_3283_output.setInt32(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_3283_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3283_output #Row: " << tbl_Filter_TD_3283_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_3387_key_leftMajor {
    int32_t _s_suppkey484L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_3387_key_leftMajor& other) const {
        return ((_s_suppkey484L == other._s_suppkey484L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_3387_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_3387_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_suppkey484L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_3387_payload_leftMajor {
    int32_t _s_suppkey484L;
    int32_t _s_name485;
    int32_t _s_address486;
    int32_t _s_nationkey487L;
};
struct SW_JOIN_LEFTSEMI_TD_3387_key_rightMajor {
    int32_t _ps_suppkey466;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_3387_key_rightMajor& other) const {
        return ((_ps_suppkey466 == other._ps_suppkey466));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_3387_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_3387_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_suppkey466));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_3387_payload_rightMajor {
    int32_t _ps_suppkey466;
};
void SW_JOIN_LEFTSEMI_TD_3387(Table &tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute, Table &tbl_Project_TD_476_output, Table &tbl_JOIN_LEFTSEMI_TD_3387_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((cast(s_suppkey#484L as int) = ps_suppkey#466))
    // Left Table: ListBuffer(s_suppkey#484L, s_name#485, s_address#486, s_nationkey#487L)
    // Right Table: ListBuffer(ps_suppkey#466)
    // Output Table: ListBuffer(s_name#485, s_address#486, s_nationkey#487L)
    int left_nrow = tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.getNumRow();
    int right_nrow = tbl_Project_TD_476_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_3387_key_rightMajor, SW_JOIN_LEFTSEMI_TD_3387_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_476_output.getNumRow();
        int nrow2 = tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ps_suppkey466_k = tbl_Project_TD_476_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_3387_key_rightMajor keyA{_ps_suppkey466_k};
            int32_t _ps_suppkey466 = tbl_Project_TD_476_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_3387_payload_rightMajor payloadA{_ps_suppkey466};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_suppkey484L_k = tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_3387_key_rightMajor{_s_suppkey484L_k});
            if (it != ht1.end()) {
                int32_t _s_suppkey484L = tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.getInt32(i, 0);
                int32_t _s_name485 = tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.getInt32(i, 1);
                int32_t _s_address486 = tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.getInt32(i, 2);
                int32_t _s_nationkey487L = tbl_SerializeFromObject_TD_5541_input_stringRowIDSubstitute.getInt32(i, 3);
                if (_s_suppkey484L == _ps_suppkey466) {
                    tbl_JOIN_LEFTSEMI_TD_3387_output.setInt32(r, 0, _s_name485);
                    tbl_JOIN_LEFTSEMI_TD_3387_output.setInt32(r, 1, _s_address486);
                    tbl_JOIN_LEFTSEMI_TD_3387_output.setInt32(r, 2, _s_nationkey487L);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTSEMI_TD_3387_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_3387_output #Row: " << tbl_JOIN_LEFTSEMI_TD_3387_output.getNumRow() << std::endl;
}


void SW_Sort_TD_0168(Table &tbl_JOIN_INNER_TD_1270_output, Table &tbl_SerializeFromObject_TD_5541_input, Table &tbl_Sort_TD_0168_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Sort
    // Operation: ListBuffer(s_name#485 ASC NULLS FIRST)
    // Input: ListBuffer(s_name#485, s_address#486)
    // Output: ListBuffer(s_name#485, s_address#486)
    struct SW_Sort_TD_0168Row {
        std::string _s_name485;
        std::string _s_address486;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0168Row& a, const SW_Sort_TD_0168Row& b) const { return 
 (a._s_name485 < b._s_name485); 
}
    }SW_Sort_TD_0168_order; 

    int nrow1 = tbl_JOIN_INNER_TD_1270_output.getNumRow();
    std::vector<SW_Sort_TD_0168Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_5541_input.getcharN<char, TPCH_READ_S_NAME_LEN + 1>(tbl_JOIN_INNER_TD_1270_output.getInt32(i, 0), 1);
        std::array<char, TPCH_READ_S_ADDR_MAX + 1> _s_address486 = tbl_SerializeFromObject_TD_5541_input.getcharN<char, TPCH_READ_S_ADDR_MAX + 1>(tbl_JOIN_INNER_TD_1270_output.getInt32(i, 1), 2);
        SW_Sort_TD_0168Row t = {std::string(_s_name485.data()),std::string(_s_address486.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0168_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0168_output.setcharN<char, TPCH_READ_S_NAME_LEN +1>(r, 0, _s_name485);
        std::array<char, TPCH_READ_S_ADDR_MAX + 1> _s_address486{};
        memcpy(_s_address486.data(), (it._s_address486).data(), (it._s_address486).length());
        tbl_Sort_TD_0168_output.setcharN<char, TPCH_READ_S_ADDR_MAX +1>(r, 1, _s_address486);
        if (r < 10) {
            std::cout << (it._s_name485).data() << " " << (it._s_address486).data() << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0168_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0168_output #Row: " << tbl_Sort_TD_0168_output.getNumRow() << std::endl;
}

