#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9532(Table &tbl_SerializeFromObject_TD_10677_input, Table &tbl_Filter_TD_9532_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(p_name#403) AND Contains(p_name#403, magenta)) AND isnotnull(cast(p_partkey#402L as int))))
    // Input: ListBuffer(p_partkey#402L, p_name#403)
    // Output: ListBuffer(p_partkey#402L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10677_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_P_NAME_LEN + 1> _p_name403 = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCH_READ_P_NAME_LEN + 1>(i, 1);
        int32_t _p_partkey402L = tbl_SerializeFromObject_TD_10677_input.getInt32(i, 0);
        if (((1) && (std::string(_p_name403.data()).find("magenta")!=std::string::npos)) && (1)) {
            int32_t _p_partkey402L_t = tbl_SerializeFromObject_TD_10677_input.getInt32(i, 0);
            tbl_Filter_TD_9532_output.setInt32(r, 0, _p_partkey402L_t);
            r++;
        }
    }
    tbl_Filter_TD_9532_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9532_output #Row: " << tbl_Filter_TD_9532_output.getNumRow() << std::endl;
}




void SW_Project_TD_492(Table &tbl_SerializeFromObject_TD_6391_input, Table &tbl_Project_TD_492_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#304, n_name#297)
    int nrow1 = tbl_SerializeFromObject_TD_6391_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_6391_input.getInt32(i, 0);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_6391_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_492_output.setInt32(i, 0, _n_nationkey304);
        tbl_Project_TD_492_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1, _n_name297);
    }
    tbl_Project_TD_492_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_492_output #Row: " << tbl_Project_TD_492_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_3711_key_leftMajor {
    int32_t _s_nationkey506;
    bool operator==(const SW_JOIN_INNER_TD_3711_key_leftMajor& other) const {
        return ((_s_nationkey506 == other._s_nationkey506));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3711_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3711_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_nationkey506));
    }
};
}
struct SW_JOIN_INNER_TD_3711_payload_leftMajor {
    int32_t _l_quantity100;
    int32_t _l_extendedprice117;
    int32_t _l_discount134;
    int32_t _s_nationkey506;
    int32_t _ps_supplycost478;
    int32_t _o_orderdate382;
};
struct SW_JOIN_INNER_TD_3711_key_rightMajor {
    int32_t _n_nationkey304;
    bool operator==(const SW_JOIN_INNER_TD_3711_key_rightMajor& other) const {
        return ((_n_nationkey304 == other._n_nationkey304));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3711_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3711_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._n_nationkey304));
    }
};
}
struct SW_JOIN_INNER_TD_3711_payload_rightMajor {
    int32_t _n_nationkey304;
    std::string _n_name297;
};
void SW_JOIN_INNER_TD_3711(Table &tbl_JOIN_INNER_TD_4230_output, Table &tbl_Project_TD_492_output, Table &tbl_JOIN_INNER_TD_3711_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((s_nationkey#506 = n_nationkey#304))
    // Left Table: ListBuffer(l_quantity#100, l_extendedprice#117, l_discount#134, s_nationkey#506, ps_supplycost#478, o_orderdate#382)
    // Right Table: ListBuffer(n_nationkey#304, n_name#297)
    // Output Table: ListBuffer(n_name#297, o_orderdate#382, l_extendedprice#117, l_discount#134, ps_supplycost#478, l_quantity#100)
    int left_nrow = tbl_JOIN_INNER_TD_4230_output.getNumRow();
    int right_nrow = tbl_Project_TD_492_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3711_key_leftMajor, SW_JOIN_INNER_TD_3711_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4230_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_3711_key_leftMajor keyA{_s_nationkey506_k};
            int32_t _l_quantity100 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 0);
            int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 1);
            int32_t _l_discount134 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 2);
            int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 3);
            int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 4);
            int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_3711_payload_leftMajor payloadA{_l_quantity100, _l_extendedprice117, _l_discount134, _s_nationkey506, _ps_supplycost478, _o_orderdate382};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_492_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_492_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3711_key_leftMajor{_n_nationkey304_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _l_quantity100 = (it->second)._l_quantity100;
                int32_t _l_extendedprice117 = (it->second)._l_extendedprice117;
                int32_t _l_discount134 = (it->second)._l_discount134;
                int32_t _s_nationkey506 = (it->second)._s_nationkey506;
                int32_t _ps_supplycost478 = (it->second)._ps_supplycost478;
                int32_t _o_orderdate382 = (it->second)._o_orderdate382;
                int32_t _n_nationkey304 = tbl_Project_TD_492_output.getInt32(i, 0);
                std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n = tbl_Project_TD_492_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
                std::string _n_name297 = std::string(_n_name297_n.data());
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 5, _l_quantity100);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 2, _l_extendedprice117);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 3, _l_discount134);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 4, _ps_supplycost478);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 1, _o_orderdate382);
                tbl_JOIN_INNER_TD_3711_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _n_name297_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3711_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3711_key_rightMajor, SW_JOIN_INNER_TD_3711_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_492_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _n_nationkey304_k = tbl_Project_TD_492_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3711_key_rightMajor keyA{_n_nationkey304_k};
            int32_t _n_nationkey304 = tbl_Project_TD_492_output.getInt32(i, 0);
            std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n = tbl_Project_TD_492_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
            std::string _n_name297 = std::string(_n_name297_n.data());
            SW_JOIN_INNER_TD_3711_payload_rightMajor payloadA{_n_nationkey304, _n_name297};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4230_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_nationkey506_k = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3711_key_rightMajor{_s_nationkey506_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _n_nationkey304 = (it->second)._n_nationkey304;
                std::string _n_name297 = (it->second)._n_name297;
                std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297_n{};
                memcpy(_n_name297_n.data(), (_n_name297).data(), (_n_name297).length());
                int32_t _l_quantity100 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 0);
                int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 1);
                int32_t _l_discount134 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 2);
                int32_t _s_nationkey506 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 3);
                int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 4);
                int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_4230_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_3711_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _n_name297_n);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 5, _l_quantity100);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 2, _l_extendedprice117);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 3, _l_discount134);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 4, _ps_supplycost478);
                tbl_JOIN_INNER_TD_3711_output.setInt32(r, 1, _o_orderdate382);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3711_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3711_output #Row: " << tbl_JOIN_INNER_TD_3711_output.getNumRow() << std::endl;
}

void SW_Project_TD_2185(Table &tbl_JOIN_INNER_TD_3711_output, Table &tbl_Project_TD_2185_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(n_name#297 AS nation#1111, cast((cast(o_orderdate#382 as double) / 10000.0) as int) AS o_year#1112, ((l_extendedprice#117 * (1 - l_discount#134)) - (ps_supplycost#478 * l_quantity#100)) AS amount#1113)
    // Input: ListBuffer(n_name#297, o_orderdate#382, l_extendedprice#117, l_discount#134, ps_supplycost#478, l_quantity#100)
    // Output: ListBuffer(nation#1111, o_year#1112, amount#1113)
    int nrow1 = tbl_JOIN_INNER_TD_3711_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_JOIN_INNER_TD_3711_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0);
        int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_3711_output.getInt32(i, 1);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3711_output.getInt32(i, 2);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_3711_output.getInt32(i, 3);
        int32_t _ps_supplycost478 = tbl_JOIN_INNER_TD_3711_output.getInt32(i, 4);
        int32_t _l_quantity100 = tbl_JOIN_INNER_TD_3711_output.getInt32(i, 5);
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1111 = _n_name297;
        tbl_Project_TD_2185_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0, _nation1111);
        int32_t _o_year1112 = (_o_orderdate382 / 10000.0);
        tbl_Project_TD_2185_output.setInt32(i, 1, _o_year1112);
        int32_t _amount1113 = ((_l_extendedprice117 * (1 - _l_discount134)) - (_ps_supplycost478 * _l_quantity100));
        tbl_Project_TD_2185_output.setInt32(i, 2, _amount1113);
    }
    tbl_Project_TD_2185_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2185_output #Row: " << tbl_Project_TD_2185_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1744_key {
    std::string _nation1111;
    int32_t _o_year1112;
    bool operator==(const SW_Aggregate_TD_1744_key& other) const { return (_nation1111 == other._nation1111) && (_o_year1112 == other._o_year1112); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1744_key> {
    std::size_t operator() (const SW_Aggregate_TD_1744_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._nation1111)) + (hash<int32_t>()(k._o_year1112));
    }
};
}
struct SW_Aggregate_TD_1744_payload {
    int64_t _sum_profit1114L_sum_0;
};
void SW_Aggregate_TD_1744(Table &tbl_Project_TD_2185_output, Table &tbl_Aggregate_TD_1744_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(nation#1111, o_year#1112, sum(amount#1113) AS sum_profit#1114L)
    // Input: ListBuffer(nation#1111, o_year#1112, amount#1113)
    // Output: ListBuffer(nation#1111, o_year#1112, sum_profit#1114L)
    std::unordered_map<SW_Aggregate_TD_1744_key, SW_Aggregate_TD_1744_payload> ht1;
    int nrow1 = tbl_Project_TD_2185_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1111 = tbl_Project_TD_2185_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 0);
        int32_t _o_year1112 = tbl_Project_TD_2185_output.getInt32(i, 1);
        int32_t _amount1113 = tbl_Project_TD_2185_output.getInt32(i, 2);
        SW_Aggregate_TD_1744_key k{std::string(_nation1111.data()), _o_year1112};
        int64_t _sum_profit1114L_sum_0 = _amount1113;
        SW_Aggregate_TD_1744_payload p{_sum_profit1114L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sum_profit1114L_sum_0 + _sum_profit1114L_sum_0;
            p._sum_profit1114L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1111{};
        memcpy(_nation1111.data(), ((it.first)._nation1111).data(), ((it.first)._nation1111).length());
        tbl_Aggregate_TD_1744_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _nation1111);
        tbl_Aggregate_TD_1744_output.setInt32(r, 1, (it.first)._o_year1112);
        int64_t _sum_profit1114L = (it.second)._sum_profit1114L_sum_0;
        tbl_Aggregate_TD_1744_output.setInt64(r, 2, _sum_profit1114L);
        ++r;
    }
    tbl_Aggregate_TD_1744_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1744_output #Row: " << tbl_Aggregate_TD_1744_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0108(Table &tbl_Aggregate_TD_1744_output, Table &tbl_Sort_TD_0108_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(nation#1111 ASC NULLS FIRST, o_year#1112 DESC NULLS LAST)
    // Input: ListBuffer(nation#1111, o_year#1112, sum_profit#1114L)
    // Output: ListBuffer(nation#1111, o_year#1112, sum_profit#1114L)
    struct SW_Sort_TD_0108Row {
        std::string _nation1111;
        int32_t _o_year1112;
        int64_t _sum_profit1114L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0108Row& a, const SW_Sort_TD_0108Row& b) const { return 
 (a._nation1111 < b._nation1111) || 
 ((a._nation1111 == b._nation1111) && (a._o_year1112 > b._o_year1112)); 
}
    }SW_Sort_TD_0108_order; 

    int nrow1 = tbl_Aggregate_TD_1744_output.getNumRow();
    std::vector<SW_Sort_TD_0108Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1111 = tbl_Aggregate_TD_1744_output.getcharN<char, TPCH_READ_NATION_LEN +1>(i, 0);
        int32_t _o_year1112 = tbl_Aggregate_TD_1744_output.getInt32(i, 1);
        int64_t _sum_profit1114L = tbl_Aggregate_TD_1744_output.getInt64(i, 2);
        SW_Sort_TD_0108Row t = {std::string(_nation1111.data()),_o_year1112,_sum_profit1114L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0108_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1111{};
        memcpy(_nation1111.data(), (it._nation1111).data(), (it._nation1111).length());
        tbl_Sort_TD_0108_output.setcharN<char, TPCH_READ_NATION_LEN +1>(r, 0, _nation1111);
        tbl_Sort_TD_0108_output.setInt32(r, 1, it._o_year1112);
        tbl_Sort_TD_0108_output.setInt64(r, 2, it._sum_profit1114L);
        if (r < 10) {
            std::cout << (it._nation1111).data() << " " << it._o_year1112 << " " << it._sum_profit1114L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0108_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0108_output #Row: " << tbl_Sort_TD_0108_output.getNumRow() << std::endl;
}

