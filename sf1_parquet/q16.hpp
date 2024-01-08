#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6869(Table &tbl_SerializeFromObject_TD_7953_input, Table &tbl_Filter_TD_6869_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_comment#490) AND s_comment#490 LIKE %Customer%Complaints%))
    // Input: ListBuffer(s_suppkey#484L, s_comment#490)
    // Output: ListBuffer(s_suppkey#484L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7953_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_S_CMNT_MAX + 1> _s_comment490 = tbl_SerializeFromObject_TD_7953_input.getcharN<char, TPCH_READ_S_CMNT_MAX + 1>(i, 1);
        struct custom_func {
                bool strm_pattern(std::string sub1, std::string sub2, std::string s, int len = 7) {
                    std::string::size_type spe_f = s.find(sub1);
                    std::string::size_type c_f = 0;
                    while (spe_f != std::string::npos) {
                        c_f += (spe_f + len);
                        std::string sub_s = s.substr(c_f);
                        if (sub_s.find(sub2) != std::string::npos) return true;
                        spe_f = sub_s.find(sub1);
                    }
                    return false;
                }
        }custom_func_obj;
        if ((1) && custom_func_obj.strm_pattern("Customer", "Complaints", _s_comment490.data())) {
            int32_t _s_suppkey484L_t = tbl_SerializeFromObject_TD_7953_input.getInt32(i, 0);
            tbl_Filter_TD_6869_output.setInt32(r, 0, _s_suppkey484L_t);
            r++;
        }
    }
    tbl_Filter_TD_6869_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6869_output #Row: " << tbl_Filter_TD_6869_output.getNumRow() << std::endl;
}


void SW_Filter_TD_4285(Table &tbl_SerializeFromObject_TD_5998_input, Table &tbl_Filter_TD_4285_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(p_brand#410) AND isnotnull(p_type#405)) AND ((NOT (p_brand#410 = Brand#32) AND NOT StartsWith(p_type#405, SMALL ANODIZED)) AND p_size#406 IN (43,7,27,21,5,15,36,11))) AND isnotnull(cast(p_partkey#402L as int))))
    // Input: ListBuffer(p_partkey#402L, p_type#405, p_size#406, p_brand#410)
    // Output: ListBuffer(p_partkey#402L, p_type#405, p_size#406, p_brand#410)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5998_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410 = tbl_SerializeFromObject_TD_5998_input.getcharN<char, TPCH_READ_P_BRND_LEN + 1>(i, 3);
        std::array<char, TPCH_READ_P_TYPE_LEN + 1> _p_type405 = tbl_SerializeFromObject_TD_5998_input.getcharN<char, TPCH_READ_P_TYPE_LEN + 1>(i, 1);
        int32_t _p_size406 = tbl_SerializeFromObject_TD_5998_input.getInt32(i, 2);
        int32_t _p_partkey402L = tbl_SerializeFromObject_TD_5998_input.getInt32(i, 0);
        auto reuse_col_str_410 = _p_size406;
        if ((((1) && (1)) && ((!((std::string(_p_brand410.data()) == "Brand#32")) && !((std::string(_p_type405.data()).find("SMALL ANODIZED")==0))) && ((reuse_col_str_410 == 43) || (reuse_col_str_410 == 7) || (reuse_col_str_410 == 27) || (reuse_col_str_410 == 21) || (reuse_col_str_410 == 5) || (reuse_col_str_410 == 15) || (reuse_col_str_410 == 36) || (reuse_col_str_410 == 11) || (0)))) && (1)) {
            int32_t _p_partkey402L_t = tbl_SerializeFromObject_TD_5998_input.getInt32(i, 0);
            tbl_Filter_TD_4285_output.setInt32(r, 0, _p_partkey402L_t);
            tbl_Filter_TD_4285_output.setInt32(r, 1, i);
            int32_t _p_size406_t = tbl_SerializeFromObject_TD_5998_input.getInt32(i, 2);
            tbl_Filter_TD_4285_output.setInt32(r, 2, _p_size406_t);
            tbl_Filter_TD_4285_output.setInt32(r, 3, i);
            r++;
        }
    }
    tbl_Filter_TD_4285_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4285_output #Row: " << tbl_Filter_TD_4285_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_4381_key_leftMajor {
    int32_t _ps_suppkey451L;
    bool operator==(const SW_JOIN_LEFTANTI_TD_4381_key_leftMajor& other) const {
        return ((_ps_suppkey451L == other._ps_suppkey451L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_4381_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_4381_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ps_suppkey451L));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_4381_payload_leftMajor {
    int32_t _ps_partkey450L;
    int32_t _ps_suppkey451L;
};
struct SW_JOIN_LEFTANTI_TD_4381_key_rightMajor {
    int32_t _s_suppkey498;
    bool operator==(const SW_JOIN_LEFTANTI_TD_4381_key_rightMajor& other) const {
        return ((_s_suppkey498 == other._s_suppkey498));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_4381_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_4381_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_suppkey498));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_4381_payload_rightMajor {
    int32_t _s_suppkey498;
};
void SW_JOIN_LEFTANTI_TD_4381(Table &tbl_SerializeFromObject_TD_6831_input, Table &tbl_Project_TD_5445_output, Table &tbl_JOIN_LEFTANTI_TD_4381_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer(((cast(ps_suppkey#451L as int) = s_suppkey#498) OR isnull((cast(ps_suppkey#451L as int) = s_suppkey#498))))
    // Left Table: ListBuffer(ps_partkey#450L, ps_suppkey#451L)
    // Right Table: ListBuffer(s_suppkey#498)
    // Output Table: ListBuffer(ps_partkey#450L, ps_suppkey#451L)
    int left_nrow = tbl_SerializeFromObject_TD_6831_input.getNumRow();
    int right_nrow = tbl_Project_TD_5445_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_4381_key_rightMajor, SW_JOIN_LEFTANTI_TD_4381_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5445_output.getNumRow();
        int nrow2 = tbl_SerializeFromObject_TD_6831_input.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_suppkey498_k = tbl_Project_TD_5445_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_4381_key_rightMajor keyA{_s_suppkey498_k};
            int32_t _s_suppkey498 = tbl_Project_TD_5445_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_4381_payload_rightMajor payloadA{_s_suppkey498};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _ps_suppkey451L_k = tbl_SerializeFromObject_TD_6831_input.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_4381_key_rightMajor{_ps_suppkey451L_k});
            if (it == ht1.end()) {
                int32_t _ps_partkey450L = tbl_SerializeFromObject_TD_6831_input.getInt32(i, 0);
                int32_t _ps_suppkey451L = tbl_SerializeFromObject_TD_6831_input.getInt32(i, 1);
                if (_ps_suppkey451L == _s_suppkey498) {
                    tbl_JOIN_LEFTANTI_TD_4381_output.setInt32(r, 0, _ps_partkey450L);
                    tbl_JOIN_LEFTANTI_TD_4381_output.setInt32(r, 1, _ps_suppkey451L);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTANTI_TD_4381_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_4381_output #Row: " << tbl_JOIN_LEFTANTI_TD_4381_output.getNumRow() << std::endl;
}


struct SW_Aggregate_TD_1732_key {
    std::string _p_brand410;
    std::string _p_type405;
    int32_t _p_size406;
    bool operator==(const SW_Aggregate_TD_1732_key& other) const { return (_p_brand410 == other._p_brand410) && (_p_type405 == other._p_type405) && (_p_size406 == other._p_size406); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1732_key> {
    std::size_t operator() (const SW_Aggregate_TD_1732_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._p_brand410)) + (hash<string>()(k._p_type405)) + (hash<int32_t>()(k._p_size406));
    }
};
}
struct SW_Aggregate_TD_1732_payload {
    int64_t _supplier_cnt2074L_count_0;
};
void SW_Aggregate_TD_1732(Table &tbl_JOIN_INNER_TD_2307_output, Table &tbl_SerializeFromObject_TD_5998_input, Table &tbl_Aggregate_TD_1732_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(p_brand#410, p_type#405, p_size#406, count(distinct ps_suppkey#466) AS supplier_cnt#2074L)
    // Input: ListBuffer(ps_suppkey#466, p_type#405, p_size#406, p_brand#410)
    // Output: ListBuffer(p_brand#410, p_type#405, p_size#406, supplier_cnt#2074L)
    std::unordered_map<SW_Aggregate_TD_1732_key, SW_Aggregate_TD_1732_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2307_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_suppkey466 = tbl_JOIN_INNER_TD_2307_output.getInt32(i, 0);
        std::array<char, TPCH_READ_P_TYPE_LEN + 1> _p_type405 = tbl_SerializeFromObject_TD_5998_input.getcharN<char, TPCH_READ_P_TYPE_LEN + 1>(tbl_JOIN_INNER_TD_2307_output.getInt32(i, 1), 1);
        int32_t _p_size406 = tbl_JOIN_INNER_TD_2307_output.getInt32(i, 2);
        std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410 = tbl_SerializeFromObject_TD_5998_input.getcharN<char, TPCH_READ_P_BRND_LEN + 1>(tbl_JOIN_INNER_TD_2307_output.getInt32(i, 3), 3);
        SW_Aggregate_TD_1732_key k{std::string(_p_brand410.data()), std::string(_p_type405.data()), _p_size406};
        int64_t _supplier_cnt2074L_count_0 = _ps_suppkey466 != 0 ? 1 : 0;
        SW_Aggregate_TD_1732_payload p{_supplier_cnt2074L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._supplier_cnt2074L_count_0 + _supplier_cnt2074L_count_0;
            p._supplier_cnt2074L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410{};
        memcpy(_p_brand410.data(), ((it.first)._p_brand410).data(), ((it.first)._p_brand410).length());
        tbl_Aggregate_TD_1732_output.setcharN<char, TPCH_READ_P_BRND_LEN + 1>(r, 0, _p_brand410);
        std::array<char, TPCH_READ_P_TYPE_LEN + 1> _p_type405{};
        memcpy(_p_type405.data(), ((it.first)._p_type405).data(), ((it.first)._p_type405).length());
        tbl_Aggregate_TD_1732_output.setcharN<char, TPCH_READ_P_TYPE_LEN + 1>(r, 1, _p_type405);
        tbl_Aggregate_TD_1732_output.setInt32(r, 2, (it.first)._p_size406);
        int64_t _supplier_cnt2074L = (it.second)._supplier_cnt2074L_count_0;
        tbl_Aggregate_TD_1732_output.setInt64(r, 3, _supplier_cnt2074L);
        ++r;
    }
    tbl_Aggregate_TD_1732_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1732_output #Row: " << tbl_Aggregate_TD_1732_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0751(Table &tbl_Aggregate_TD_1732_output, Table &tbl_Sort_TD_0751_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(supplier_cnt#2074L DESC NULLS LAST, p_brand#410 ASC NULLS FIRST, p_type#405 ASC NULLS FIRST, p_size#406 ASC NULLS FIRST)
    // Input: ListBuffer(p_brand#410, p_type#405, p_size#406, supplier_cnt#2074L)
    // Output: ListBuffer(p_brand#410, p_type#405, p_size#406, supplier_cnt#2074L)
    struct SW_Sort_TD_0751Row {
        std::string _p_brand410;
        std::string _p_type405;
        int32_t _p_size406;
        int64_t _supplier_cnt2074L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0751Row& a, const SW_Sort_TD_0751Row& b) const { return 
 (a._supplier_cnt2074L > b._supplier_cnt2074L) || 
 ((a._supplier_cnt2074L == b._supplier_cnt2074L) && (a._p_brand410 < b._p_brand410)) || 
 ((a._supplier_cnt2074L == b._supplier_cnt2074L) && (a._p_brand410 == b._p_brand410) && (a._p_type405 < b._p_type405)) || 
 ((a._supplier_cnt2074L == b._supplier_cnt2074L) && (a._p_brand410 == b._p_brand410) && (a._p_type405 == b._p_type405) && (a._p_size406 < b._p_size406)); 
}
    }SW_Sort_TD_0751_order; 

    int nrow1 = tbl_Aggregate_TD_1732_output.getNumRow();
    std::vector<SW_Sort_TD_0751Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410 = tbl_Aggregate_TD_1732_output.getcharN<char, TPCH_READ_P_BRND_LEN +1>(i, 0);
        std::array<char, TPCH_READ_P_TYPE_LEN + 1> _p_type405 = tbl_Aggregate_TD_1732_output.getcharN<char, TPCH_READ_P_TYPE_LEN +1>(i, 1);
        int32_t _p_size406 = tbl_Aggregate_TD_1732_output.getInt32(i, 2);
        int64_t _supplier_cnt2074L = tbl_Aggregate_TD_1732_output.getInt64(i, 3);
        SW_Sort_TD_0751Row t = {std::string(_p_brand410.data()),std::string(_p_type405.data()),_p_size406,_supplier_cnt2074L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0751_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_P_BRND_LEN + 1> _p_brand410{};
        memcpy(_p_brand410.data(), (it._p_brand410).data(), (it._p_brand410).length());
        tbl_Sort_TD_0751_output.setcharN<char, TPCH_READ_P_BRND_LEN +1>(r, 0, _p_brand410);
        std::array<char, TPCH_READ_P_TYPE_LEN + 1> _p_type405{};
        memcpy(_p_type405.data(), (it._p_type405).data(), (it._p_type405).length());
        tbl_Sort_TD_0751_output.setcharN<char, TPCH_READ_P_TYPE_LEN +1>(r, 1, _p_type405);
        tbl_Sort_TD_0751_output.setInt32(r, 2, it._p_size406);
        tbl_Sort_TD_0751_output.setInt64(r, 3, it._supplier_cnt2074L);
        if (r < 10) {
            std::cout << (it._p_brand410).data() << " " << (it._p_type405).data() << " " << it._p_size406 << " " << it._supplier_cnt2074L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0751_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0751_output #Row: " << tbl_Sort_TD_0751_output.getNumRow() << std::endl;
}

