#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_533(Table &tbl_SerializeFromObject_TD_6561_input, Table &tbl_Filter_TD_533_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cast(n_nationkey#1521L as int)) AND ((n_name#1522 = IRAQ) OR (n_name#1522 = FRANCE))))
    // Input: ListBuffer(n_nationkey#1521L, n_name#1522)
    // Output: ListBuffer(n_nationkey#1521L, n_name#1522)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6561_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey1521L = tbl_SerializeFromObject_TD_6561_input.getInt32(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1522 = tbl_SerializeFromObject_TD_6561_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        if ((1) && ((std::string(_n_name1522.data()) == "IRAQ") || (std::string(_n_name1522.data()) == "FRANCE"))) {
            int32_t _n_nationkey1521L_t = tbl_SerializeFromObject_TD_6561_input.getInt32(i, 0);
            tbl_Filter_TD_533_output.setInt32(r, 0, _n_nationkey1521L_t);
            tbl_Filter_TD_533_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_533_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_533_output #Row: " << tbl_Filter_TD_533_output.getNumRow() << std::endl;
}

void SW_Filter_TD_622(Table &tbl_SerializeFromObject_TD_7679_input, Table &tbl_Filter_TD_622_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cast(n_nationkey#296L as int)) AND ((n_name#297 = FRANCE) OR (n_name#297 = IRAQ))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L, n_name#297)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7679_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_7679_input.getInt32(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_7679_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        if ((1) && ((std::string(_n_name297.data()) == "FRANCE") || (std::string(_n_name297.data()) == "IRAQ"))) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_7679_input.getInt32(i, 0);
            tbl_Filter_TD_622_output.setInt32(r, 0, _n_nationkey296L_t);
            tbl_Filter_TD_622_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_622_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_622_output #Row: " << tbl_Filter_TD_622_output.getNumRow() << std::endl;
}



struct SW_JOIN_INNER_TD_362_key_leftMajor {
    int32_t _c_nationkey278;
    bool operator==(const SW_JOIN_INNER_TD_362_key_leftMajor& other) const {
        return ((_c_nationkey278 == other._c_nationkey278));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_362_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_362_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_nationkey278));
    }
};
}
struct SW_JOIN_INNER_TD_362_payload_leftMajor {
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    int32_t _l_shipdate202;
    int32_t _c_nationkey278;
    std::string _n_name297;
};
struct SW_JOIN_INNER_TD_362_key_rightMajor {
    int32_t _n_nationkey1526;
    bool operator==(const SW_JOIN_INNER_TD_362_key_rightMajor& other) const {
        return ((_n_nationkey1526 == other._n_nationkey1526));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_362_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_362_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey1526));
    }
};
}
struct SW_JOIN_INNER_TD_362_payload_rightMajor {
    int32_t _n_nationkey1526;
    std::string _n_name1522;
};
void SW_JOIN_INNER_TD_362(Table &tbl_JOIN_INNER_TD_4815_output, Table &tbl_Project_TD_4879_output, Table &tbl_SerializeFromObject_TD_7679_input, Table &tbl_SerializeFromObject_TD_6561_input, Table &tbl_JOIN_INNER_TD_362_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_nationkey#278 = n_nationkey#1526) AND (((n_name#297 = FRANCE) AND (n_name#1522 = IRAQ)) OR ((n_name#297 = IRAQ) AND (n_name#1522 = FRANCE)))))
    // Left Table: ListBuffer(l_extendedprice#117, l_discount#134, l_shipdate#202, c_nationkey#278, n_name#297)
    // Right Table: ListBuffer(n_nationkey#1526, n_name#1522)
    // Output Table: ListBuffer(n_name#297, n_name#1522, l_shipdate#202, l_extendedprice#117, l_discount#134)
    int left_nrow = tbl_JOIN_INNER_TD_4815_output.getNumRow();
    int right_nrow = tbl_Project_TD_4879_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_362_key_leftMajor, SW_JOIN_INNER_TD_362_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4815_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_nationkey278_k = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_362_key_leftMajor keyA{_c_nationkey278_k};
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 0);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 1);
            int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 2);
            int32_t _c_nationkey278 = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 3);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n = tbl_SerializeFromObject_TD_6561_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_JOIN_INNER_TD_4815_output.getInt32(i, 4), 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
            SW_JOIN_INNER_TD_362_payload_leftMajor payloadA{_l_extendedprice117, _l_discount134, _l_shipdate202, _c_nationkey278, _n_name297};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_4879_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey1526_k = tbl_Project_TD_4879_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_362_key_leftMajor{_n_nationkey1526_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _l_shipdate202 = (it->second)._l_shipdate202;
                int32_t _c_nationkey278 = (it->second)._c_nationkey278;
                std::string _n_name297 = (it->second)._n_name297;
                std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n{};
                memcpy(_n_name297_n.data(), (_n_name297).data(), (_n_name297).length());
                int32_t _n_nationkey1526 = tbl_Project_TD_4879_output.getInt32(i, 0);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1522_n = tbl_SerializeFromObject_TD_6561_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_Project_TD_4879_output.getInt32(i, 1), 1);
            std::string _n_name1522 = std::string(_n_name1522_n.data());
                if (((_n_name297 == "FRANCE") && (_n_name1522 == "IRAQ")) || ((_n_name297 == "IRAQ") && (_n_name1522 == "FRANCE"))) {
                    tbl_JOIN_INNER_TD_362_output.setInt32(r, 3, _l_extendedprice117);
                    tbl_JOIN_INNER_TD_362_output.setInt32(r, 4, _l_discount134);
                    tbl_JOIN_INNER_TD_362_output.setInt32(r, 2, _l_shipdate202);
                    tbl_JOIN_INNER_TD_362_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _n_name297_n);
                    tbl_JOIN_INNER_TD_362_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 1, _n_name1522_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_362_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_362_key_rightMajor, SW_JOIN_INNER_TD_362_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4879_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey1526_k = tbl_Project_TD_4879_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_362_key_rightMajor keyA{_n_nationkey1526_k};
            int32_t _n_nationkey1526 = tbl_Project_TD_4879_output.getInt32(i, 0);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1522_n = tbl_SerializeFromObject_TD_6561_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_Project_TD_4879_output.getInt32(i, 1), 1);
            std::string _n_name1522 = std::string(_n_name1522_n.data());
            SW_JOIN_INNER_TD_362_payload_rightMajor payloadA{_n_nationkey1526, _n_name1522};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4815_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_nationkey278_k = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_362_key_rightMajor{_c_nationkey278_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey1526 = (it->second)._n_nationkey1526;
                std::string _n_name1522 = (it->second)._n_name1522;
                std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1522_n{};
                memcpy(_n_name1522_n.data(), (_n_name1522).data(), (_n_name1522).length());
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 0);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 1);
                int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 2);
                int32_t _c_nationkey278 = tbl_JOIN_INNER_TD_4815_output.getInt32(i, 3);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n = tbl_SerializeFromObject_TD_6561_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_JOIN_INNER_TD_4815_output.getInt32(i, 4), 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
                if (((_n_name297 == "FRANCE") && (_n_name1522 == "IRAQ")) || ((_n_name297 == "IRAQ") && (_n_name1522 == "FRANCE"))) {
                    tbl_JOIN_INNER_TD_362_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 1, _n_name1522_n);
                    tbl_JOIN_INNER_TD_362_output.setInt32(r, 3, _l_extendedprice117);
                    tbl_JOIN_INNER_TD_362_output.setInt32(r, 4, _l_discount134);
                    tbl_JOIN_INNER_TD_362_output.setInt32(r, 2, _l_shipdate202);
                    tbl_JOIN_INNER_TD_362_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _n_name297_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_362_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_362_output #Row: " << tbl_JOIN_INNER_TD_362_output.getNumRow() << std::endl;
}

void SW_Project_TD_2927(Table &tbl_JOIN_INNER_TD_362_output, Table &tbl_Project_TD_2927_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(n_name#297 AS supp_nation#1516, n_name#1522 AS cust_nation#1517, cast((cast(l_shipdate#202 as double) / 10000.0) as int) AS l_year#1518, (l_extendedprice#117 * (100 - l_discount#134)) AS volume#1519)
    // Input: ListBuffer(n_name#297, n_name#1522, l_shipdate#202, l_extendedprice#117, l_discount#134)
    // Output: ListBuffer(supp_nation#1516, cust_nation#1517, l_year#1518, volume#1519)
    int nrow1 = tbl_JOIN_INNER_TD_362_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_JOIN_INNER_TD_362_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1522 = tbl_JOIN_INNER_TD_362_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _l_shipdate202 = tbl_JOIN_INNER_TD_362_output.getInt32(i, 2);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_362_output.getInt32(i, 3);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_362_output.getInt32(i, 4);
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1516 = _n_name297;
        tbl_Project_TD_2927_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0, _supp_nation1516);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1517 = _n_name1522;
        tbl_Project_TD_2927_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1, _cust_nation1517);
        int32_t _l_year1518 = (_l_shipdate202 / 10000.0);
        tbl_Project_TD_2927_output.setInt32(i, 2, _l_year1518);
        int32_t _volume1519 = (_l_extendedprice117 * (100 - _l_discount134));
        tbl_Project_TD_2927_output.setInt32(i, 3, _volume1519);
    }
    tbl_Project_TD_2927_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2927_output #Row: " << tbl_Project_TD_2927_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1967_key {
    std::string _supp_nation1516;
    std::string _cust_nation1517;
    int32_t _l_year1518;
    bool operator==(const SW_Aggregate_TD_1967_key& other) const { return (_supp_nation1516 == other._supp_nation1516) && (_cust_nation1517 == other._cust_nation1517) && (_l_year1518 == other._l_year1518); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1967_key> {
    std::size_t operator() (const SW_Aggregate_TD_1967_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._supp_nation1516)) + (hash<string>()(k._cust_nation1517)) + (hash<int32_t>()(k._l_year1518));
    }
};
}
struct SW_Aggregate_TD_1967_payload {
    int64_t _revenue1520L_sum_0;
};
void SW_Aggregate_TD_1967(Table &tbl_Project_TD_2927_output, Table &tbl_Aggregate_TD_1967_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(supp_nation#1516, cust_nation#1517, l_year#1518, sum(volume#1519) AS revenue#1520L)
    // Input: ListBuffer(supp_nation#1516, cust_nation#1517, l_year#1518, volume#1519)
    // Output: ListBuffer(supp_nation#1516, cust_nation#1517, l_year#1518, revenue#1520L)
    std::unordered_map<SW_Aggregate_TD_1967_key, SW_Aggregate_TD_1967_payload> ht1;
    int nrow1 = tbl_Project_TD_2927_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1516 = tbl_Project_TD_2927_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1517 = tbl_Project_TD_2927_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _l_year1518 = tbl_Project_TD_2927_output.getInt32(i, 2);
        int32_t _volume1519 = tbl_Project_TD_2927_output.getInt32(i, 3);
        SW_Aggregate_TD_1967_key k{std::string(_supp_nation1516.data()), std::string(_cust_nation1517.data()), _l_year1518};
        int64_t _revenue1520L_sum_0 = _volume1519;
        SW_Aggregate_TD_1967_payload p{_revenue1520L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._revenue1520L_sum_0 + _revenue1520L_sum_0;
            p._revenue1520L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1516{};
        memcpy(_supp_nation1516.data(), ((it.first)._supp_nation1516).data(), ((it.first)._supp_nation1516).length());
        tbl_Aggregate_TD_1967_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _supp_nation1516);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1517{};
        memcpy(_cust_nation1517.data(), ((it.first)._cust_nation1517).data(), ((it.first)._cust_nation1517).length());
        tbl_Aggregate_TD_1967_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 1, _cust_nation1517);
        tbl_Aggregate_TD_1967_output.setInt32(r, 2, (it.first)._l_year1518);
        int64_t _revenue1520L = (it.second)._revenue1520L_sum_0;
        tbl_Aggregate_TD_1967_output.setInt64(r, 3, _revenue1520L);
        ++r;
    }
    tbl_Aggregate_TD_1967_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1967_output #Row: " << tbl_Aggregate_TD_1967_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0947(Table &tbl_Aggregate_TD_1967_output, Table &tbl_Sort_TD_0947_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(supp_nation#1516 ASC NULLS FIRST, cust_nation#1517 ASC NULLS FIRST, l_year#1518 ASC NULLS FIRST)
    // Input: ListBuffer(supp_nation#1516, cust_nation#1517, l_year#1518, revenue#1520L)
    // Output: ListBuffer(supp_nation#1516, cust_nation#1517, l_year#1518, revenue#1520L)
    struct SW_Sort_TD_0947Row {
        std::string _supp_nation1516;
        std::string _cust_nation1517;
        int32_t _l_year1518;
        int64_t _revenue1520L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0947Row& a, const SW_Sort_TD_0947Row& b) const { return 
 (a._supp_nation1516 < b._supp_nation1516) || 
 ((a._supp_nation1516 == b._supp_nation1516) && (a._cust_nation1517 < b._cust_nation1517)) || 
 ((a._supp_nation1516 == b._supp_nation1516) && (a._cust_nation1517 == b._cust_nation1517) && (a._l_year1518 < b._l_year1518)); 
}
    }SW_Sort_TD_0947_order; 

    int nrow1 = tbl_Aggregate_TD_1967_output.getNumRow();
    std::vector<SW_Sort_TD_0947Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1516 = tbl_Aggregate_TD_1967_output.getcharN<char, TPCH_READ_NATION_LEN +1>(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1517 = tbl_Aggregate_TD_1967_output.getcharN<char, TPCH_READ_NATION_LEN +1>(i, 1);
        int32_t _l_year1518 = tbl_Aggregate_TD_1967_output.getInt32(i, 2);
        int64_t _revenue1520L = tbl_Aggregate_TD_1967_output.getInt64(i, 3);
        SW_Sort_TD_0947Row t = {std::string(_supp_nation1516.data()),std::string(_cust_nation1517.data()),_l_year1518,_revenue1520L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0947_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _supp_nation1516{};
        memcpy(_supp_nation1516.data(), (it._supp_nation1516).data(), (it._supp_nation1516).length());
        tbl_Sort_TD_0947_output.setcharN<char, TPCH_READ_NATION_LEN +1>(r, 0, _supp_nation1516);
        std::array<char, TPCH_READ_NATION_LEN + 1> _cust_nation1517{};
        memcpy(_cust_nation1517.data(), (it._cust_nation1517).data(), (it._cust_nation1517).length());
        tbl_Sort_TD_0947_output.setcharN<char, TPCH_READ_NATION_LEN +1>(r, 1, _cust_nation1517);
        tbl_Sort_TD_0947_output.setInt32(r, 2, it._l_year1518);
        tbl_Sort_TD_0947_output.setInt64(r, 3, it._revenue1520L);
        if (r < 10) {
            std::cout << (it._supp_nation1516).data() << " " << (it._cust_nation1517).data() << " " << it._l_year1518 << " " << it._revenue1520L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0947_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0947_output #Row: " << tbl_Sort_TD_0947_output.getNumRow() << std::endl;
}

