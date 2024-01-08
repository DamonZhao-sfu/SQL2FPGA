#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5676(Table &tbl_SerializeFromObject_TD_6269_input, Table &tbl_Filter_TD_5676_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cast(n_nationkey#1071L as int)) AND ((n_name#1072 = IRAQ) OR (n_name#1072 = FRANCE))))
    // Input: ListBuffer(n_nationkey#1071L, n_name#1072)
    // Output: ListBuffer(n_nationkey#1071L, n_name#1072)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6269_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey1071L = tbl_SerializeFromObject_TD_6269_input.getInt32(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1072 = tbl_SerializeFromObject_TD_6269_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        if ((1) && ((std::string(_n_name1072.data()) == "IRAQ") || (std::string(_n_name1072.data()) == "FRANCE"))) {
            int32_t _n_nationkey1071L_t = tbl_SerializeFromObject_TD_6269_input.getInt32(i, 0);
            tbl_Filter_TD_5676_output.setInt32(r, 0, _n_nationkey1071L_t);
            tbl_Filter_TD_5676_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_5676_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5676_output #Row: " << tbl_Filter_TD_5676_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6328(Table &tbl_SerializeFromObject_TD_7983_input, Table &tbl_Filter_TD_6328_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cast(n_nationkey#296L as int)) AND ((n_name#297 = FRANCE) OR (n_name#297 = IRAQ))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L, n_name#297)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7983_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_7983_input.getInt32(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_7983_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        if ((1) && ((std::string(_n_name297.data()) == "FRANCE") || (std::string(_n_name297.data()) == "IRAQ"))) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_7983_input.getInt32(i, 0);
            tbl_Filter_TD_6328_output.setInt32(r, 0, _n_nationkey296L_t);
            tbl_Filter_TD_6328_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_6328_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6328_output #Row: " << tbl_Filter_TD_6328_output.getNumRow() << std::endl;
}



struct SW_JOIN_INNER_TD_3654_key_leftMajor {
    int32_t _c_nationkey278;
    bool operator==(const SW_JOIN_INNER_TD_3654_key_leftMajor& other) const {
        return ((_c_nationkey278 == other._c_nationkey278));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3654_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3654_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_nationkey278));
    }
};
}
struct SW_JOIN_INNER_TD_3654_payload_leftMajor {
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    int32_t _l_shipdate202;
    int32_t _c_nationkey278;
    std::string _n_name297;
};
struct SW_JOIN_INNER_TD_3654_key_rightMajor {
    int32_t _n_nationkey1076;
    bool operator==(const SW_JOIN_INNER_TD_3654_key_rightMajor& other) const {
        return ((_n_nationkey1076 == other._n_nationkey1076));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3654_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3654_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey1076));
    }
};
}
struct SW_JOIN_INNER_TD_3654_payload_rightMajor {
    int32_t _n_nationkey1076;
    std::string _n_name1072;
};
void SW_JOIN_INNER_TD_3654(Table &tbl_JOIN_INNER_TD_4431_output, Table &tbl_Project_TD_4101_output, Table &tbl_SerializeFromObject_TD_7983_input, Table &tbl_SerializeFromObject_TD_6269_input, Table &tbl_JOIN_INNER_TD_3654_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_nationkey#278 = n_nationkey#1076) AND (((n_name#297 = FRANCE) AND (n_name#1072 = IRAQ)) OR ((n_name#297 = IRAQ) AND (n_name#1072 = FRANCE)))))
    // Left Table: ListBuffer(l_extendedprice#117, l_discount#134, l_shipdate#202, c_nationkey#278, n_name#297)
    // Right Table: ListBuffer(n_nationkey#1076, n_name#1072)
    // Output Table: ListBuffer(n_name#297, n_name#1072, l_shipdate#202, l_extendedprice#117, l_discount#134)
    int left_nrow = tbl_JOIN_INNER_TD_4431_output.getNumRow();
    int right_nrow = tbl_Project_TD_4101_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3654_key_leftMajor, SW_JOIN_INNER_TD_3654_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4431_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_nationkey278_k = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_3654_key_leftMajor keyA{_c_nationkey278_k};
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 0);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 1);
            int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 2);
            int32_t _c_nationkey278 = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 3);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n = tbl_SerializeFromObject_TD_6269_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_JOIN_INNER_TD_4431_output.getInt32(i, 4), 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
            SW_JOIN_INNER_TD_3654_payload_leftMajor payloadA{_l_extendedprice117, _l_discount134, _l_shipdate202, _c_nationkey278, _n_name297};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_4101_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey1076_k = tbl_Project_TD_4101_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3654_key_leftMajor{_n_nationkey1076_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _l_shipdate202 = (it->second)._l_shipdate202;
                int32_t _c_nationkey278 = (it->second)._c_nationkey278;
                std::string _n_name297 = (it->second)._n_name297;
                std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n{};
                memcpy(_n_name297_n.data(), (_n_name297).data(), (_n_name297).length());
                int32_t _n_nationkey1076 = tbl_Project_TD_4101_output.getInt32(i, 0);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1072_n = tbl_SerializeFromObject_TD_6269_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_Project_TD_4101_output.getInt32(i, 1), 1);
            std::string _n_name1072 = std::string(_n_name1072_n.data());
                if (((_n_name297 == "FRANCE") && (_n_name1072 == "IRAQ")) || ((_n_name297 == "IRAQ") && (_n_name1072 == "FRANCE"))) {
                    tbl_JOIN_INNER_TD_3654_output.setInt32(r, 3, _l_extendedprice117);
                    tbl_JOIN_INNER_TD_3654_output.setInt32(r, 4, _l_discount134);
                    tbl_JOIN_INNER_TD_3654_output.setInt32(r, 2, _l_shipdate202);
                    tbl_JOIN_INNER_TD_3654_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _n_name297_n);
                    tbl_JOIN_INNER_TD_3654_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 1, _n_name1072_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_3654_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3654_key_rightMajor, SW_JOIN_INNER_TD_3654_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4101_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey1076_k = tbl_Project_TD_4101_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3654_key_rightMajor keyA{_n_nationkey1076_k};
            int32_t _n_nationkey1076 = tbl_Project_TD_4101_output.getInt32(i, 0);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1072_n = tbl_SerializeFromObject_TD_6269_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_Project_TD_4101_output.getInt32(i, 1), 1);
            std::string _n_name1072 = std::string(_n_name1072_n.data());
            SW_JOIN_INNER_TD_3654_payload_rightMajor payloadA{_n_nationkey1076, _n_name1072};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4431_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_nationkey278_k = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3654_key_rightMajor{_c_nationkey278_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey1076 = (it->second)._n_nationkey1076;
                std::string _n_name1072 = (it->second)._n_name1072;
                std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1072_n{};
                memcpy(_n_name1072_n.data(), (_n_name1072).data(), (_n_name1072).length());
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 0);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 1);
                int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 2);
                int32_t _c_nationkey278 = tbl_JOIN_INNER_TD_4431_output.getInt32(i, 3);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n = tbl_SerializeFromObject_TD_6269_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_JOIN_INNER_TD_4431_output.getInt32(i, 4), 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
                if (((_n_name297 == "FRANCE") && (_n_name1072 == "IRAQ")) || ((_n_name297 == "IRAQ") && (_n_name1072 == "FRANCE"))) {
                    tbl_JOIN_INNER_TD_3654_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 1, _n_name1072_n);
                    tbl_JOIN_INNER_TD_3654_output.setInt32(r, 3, _l_extendedprice117);
                    tbl_JOIN_INNER_TD_3654_output.setInt32(r, 4, _l_discount134);
                    tbl_JOIN_INNER_TD_3654_output.setInt32(r, 2, _l_shipdate202);
                    tbl_JOIN_INNER_TD_3654_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _n_name297_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_3654_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3654_output #Row: " << tbl_JOIN_INNER_TD_3654_output.getNumRow() << std::endl;
}

void SW_Project_TD_2996(Table &tbl_JOIN_INNER_TD_3654_output, Table &tbl_Project_TD_2996_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(n_name#297 AS supp_nation#1066, n_name#1072 AS cust_nation#1067, cast((cast(l_shipdate#202 as double) / 10000.0) as int) AS l_year#1068, (l_extendedprice#117 * (100 - l_discount#134)) AS volume#1069)
    // Input: ListBuffer(n_name#297, n_name#1072, l_shipdate#202, l_extendedprice#117, l_discount#134)
    // Output: ListBuffer(supp_nation#1066, cust_nation#1067, l_year#1068, volume#1069)
    int nrow1 = tbl_JOIN_INNER_TD_3654_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_JOIN_INNER_TD_3654_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1072 = tbl_JOIN_INNER_TD_3654_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_3654_output.getInt32(i, 2);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3654_output.getInt32(i, 3);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_3654_output.getInt32(i, 4);
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1066 = _n_name297;
        tbl_Project_TD_2996_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0, _supp_nation1066);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1067 = _n_name1072;
        tbl_Project_TD_2996_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1, _cust_nation1067);
        int32_t _l_year1068 = (_l_shipdate202 / 10000.0);
        tbl_Project_TD_2996_output.setInt32(i, 2, _l_year1068);
        int32_t _volume1069 = (_l_extendedprice117 * (100 - _l_discount134));
        tbl_Project_TD_2996_output.setInt32(i, 3, _volume1069);
    }
    tbl_Project_TD_2996_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2996_output #Row: " << tbl_Project_TD_2996_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1258_key {
    std::string _supp_nation1066;
    std::string _cust_nation1067;
    int32_t _l_year1068;
    bool operator==(const SW_Aggregate_TD_1258_key& other) const { return (_supp_nation1066 == other._supp_nation1066) && (_cust_nation1067 == other._cust_nation1067) && (_l_year1068 == other._l_year1068); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1258_key> {
    std::size_t operator() (const SW_Aggregate_TD_1258_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._supp_nation1066)) + (hash<string>()(k._cust_nation1067)) + (hash<int32_t>()(k._l_year1068));
    }
};
}
struct SW_Aggregate_TD_1258_payload {
    int64_t _revenue1070L_sum_0;
};
void SW_Aggregate_TD_1258(Table &tbl_Project_TD_2996_output, Table &tbl_Aggregate_TD_1258_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(supp_nation#1066, cust_nation#1067, l_year#1068, sum(volume#1069) AS revenue#1070L)
    // Input: ListBuffer(supp_nation#1066, cust_nation#1067, l_year#1068, volume#1069)
    // Output: ListBuffer(supp_nation#1066, cust_nation#1067, l_year#1068, revenue#1070L)
    std::unordered_map<SW_Aggregate_TD_1258_key, SW_Aggregate_TD_1258_payload> ht1;
    int nrow1 = tbl_Project_TD_2996_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1066 = tbl_Project_TD_2996_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1067 = tbl_Project_TD_2996_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _l_year1068 = tbl_Project_TD_2996_output.getInt32(i, 2);
        int32_t _volume1069 = tbl_Project_TD_2996_output.getInt32(i, 3);
        SW_Aggregate_TD_1258_key k{std::string(_supp_nation1066.data()), std::string(_cust_nation1067.data()), _l_year1068};
        int64_t _revenue1070L_sum_0 = _volume1069;
        SW_Aggregate_TD_1258_payload p{_revenue1070L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._revenue1070L_sum_0 + _revenue1070L_sum_0;
            p._revenue1070L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1066{};
        memcpy(_supp_nation1066.data(), ((it.first)._supp_nation1066).data(), ((it.first)._supp_nation1066).length());
        tbl_Aggregate_TD_1258_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _supp_nation1066);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1067{};
        memcpy(_cust_nation1067.data(), ((it.first)._cust_nation1067).data(), ((it.first)._cust_nation1067).length());
        tbl_Aggregate_TD_1258_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 1, _cust_nation1067);
        tbl_Aggregate_TD_1258_output.setInt32(r, 2, (it.first)._l_year1068);
        int64_t _revenue1070L = (it.second)._revenue1070L_sum_0;
        tbl_Aggregate_TD_1258_output.setInt64(r, 3, _revenue1070L);
        ++r;
    }
    tbl_Aggregate_TD_1258_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1258_output #Row: " << tbl_Aggregate_TD_1258_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0804(Table &tbl_Aggregate_TD_1258_output, Table &tbl_Sort_TD_0804_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(supp_nation#1066 ASC NULLS FIRST, cust_nation#1067 ASC NULLS FIRST, l_year#1068 ASC NULLS FIRST)
    // Input: ListBuffer(supp_nation#1066, cust_nation#1067, l_year#1068, revenue#1070L)
    // Output: ListBuffer(supp_nation#1066, cust_nation#1067, l_year#1068, revenue#1070L)
    struct SW_Sort_TD_0804Row {
        std::string _supp_nation1066;
        std::string _cust_nation1067;
        int32_t _l_year1068;
        int64_t _revenue1070L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0804Row& a, const SW_Sort_TD_0804Row& b) const { return 
 (a._supp_nation1066 < b._supp_nation1066) || 
 ((a._supp_nation1066 == b._supp_nation1066) && (a._cust_nation1067 < b._cust_nation1067)) || 
 ((a._supp_nation1066 == b._supp_nation1066) && (a._cust_nation1067 == b._cust_nation1067) && (a._l_year1068 < b._l_year1068)); 
}
    }SW_Sort_TD_0804_order; 

    int nrow1 = tbl_Aggregate_TD_1258_output.getNumRow();
    std::vector<SW_Sort_TD_0804Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1066 = tbl_Aggregate_TD_1258_output.getcharN<char, TPCH_READ_NATION_LEN +1>(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1067 = tbl_Aggregate_TD_1258_output.getcharN<char, TPCH_READ_NATION_LEN +1>(i, 1);
        int32_t _l_year1068 = tbl_Aggregate_TD_1258_output.getInt32(i, 2);
        int64_t _revenue1070L = tbl_Aggregate_TD_1258_output.getInt64(i, 3);
        SW_Sort_TD_0804Row t = {std::string(_supp_nation1066.data()),std::string(_cust_nation1067.data()),_l_year1068,_revenue1070L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0804_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1066{};
        memcpy(_supp_nation1066.data(), (it._supp_nation1066).data(), (it._supp_nation1066).length());
        tbl_Sort_TD_0804_output.setcharN<char, TPCH_READ_NATION_LEN +1>(r, 0, _supp_nation1066);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1067{};
        memcpy(_cust_nation1067.data(), (it._cust_nation1067).data(), (it._cust_nation1067).length());
        tbl_Sort_TD_0804_output.setcharN<char, TPCH_READ_NATION_LEN +1>(r, 1, _cust_nation1067);
        tbl_Sort_TD_0804_output.setInt32(r, 2, it._l_year1068);
        tbl_Sort_TD_0804_output.setInt64(r, 3, it._revenue1070L);
        if (r < 10) {
            std::cout << (it._supp_nation1066).data() << " " << (it._cust_nation1067).data() << " " << it._l_year1068 << " " << it._revenue1070L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0804_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0804_output #Row: " << tbl_Sort_TD_0804_output.getNumRow() << std::endl;
}

