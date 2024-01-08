#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_4131(Table &tbl_SerializeFromObject_TD_5838_input, Table &tbl_Filter_TD_4131_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = JAPAN)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5838_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5838_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_5838_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "JAPAN")) && (1)) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_5838_input.getInt32(i, 0);
            tbl_Filter_TD_4131_output.setInt32(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_4131_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4131_output #Row: " << tbl_Filter_TD_4131_output.getNumRow() << std::endl;
}


typedef std::string SW_Aggregate_TD_1760_key;
struct SW_Aggregate_TD_1760_payload {
    int64_t _numwait1918L_count_0;
};
void SW_Aggregate_TD_1760(Table &tbl_JOIN_INNER_TD_21_output, Table &tbl_SerializeFromObject_TD_7543_input, Table &tbl_Aggregate_TD_1760_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_name#485, count(1) AS numwait#1918L)
    // Input: ListBuffer(s_name#485)
    // Output: ListBuffer(s_name#485, numwait#1918L)
    std::unordered_map<SW_Aggregate_TD_1760_key, SW_Aggregate_TD_1760_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_21_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_7543_input.getcharN<char, TPCH_READ_S_NAME_LEN + 1>(tbl_JOIN_INNER_TD_21_output.getInt32(i, 0), 1);
        SW_Aggregate_TD_1760_key k = std::string(_s_name485.data());
        int64_t _numwait1918L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_1760_payload p{_numwait1918L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._numwait1918L_count_0 + _numwait1918L_count_0;
            p._numwait1918L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1760_output.setcharN<char, TPCH_READ_S_NAME_LEN + 1>(r, 0, _s_name485);
        int64_t _numwait1918L = (it.second)._numwait1918L_count_0;
        tbl_Aggregate_TD_1760_output.setInt64(r, 1, _numwait1918L);
        ++r;
    }
    tbl_Aggregate_TD_1760_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1760_output #Row: " << tbl_Aggregate_TD_1760_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0865(Table &tbl_Aggregate_TD_1760_output, Table &tbl_Sort_TD_0865_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(numwait#1918L DESC NULLS LAST, s_name#485 ASC NULLS FIRST)
    // Input: ListBuffer(s_name#485, numwait#1918L)
    // Output: ListBuffer(s_name#485, numwait#1918L)
    struct SW_Sort_TD_0865Row {
        std::string _s_name485;
        int64_t _numwait1918L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0865Row& a, const SW_Sort_TD_0865Row& b) const { return 
 (a._numwait1918L > b._numwait1918L) || 
 ((a._numwait1918L == b._numwait1918L) && (a._s_name485 < b._s_name485)); 
}
    }SW_Sort_TD_0865_order; 

    int nrow1 = tbl_Aggregate_TD_1760_output.getNumRow();
    std::vector<SW_Sort_TD_0865Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485 = tbl_Aggregate_TD_1760_output.getcharN<char, TPCH_READ_S_NAME_LEN +1>(i, 0);
        int64_t _numwait1918L = tbl_Aggregate_TD_1760_output.getInt64(i, 1);
        SW_Sort_TD_0865Row t = {std::string(_s_name485.data()),_numwait1918L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0865_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0865_output.setcharN<char, TPCH_READ_S_NAME_LEN +1>(r, 0, _s_name485);
        tbl_Sort_TD_0865_output.setInt64(r, 1, it._numwait1918L);
        if (r < 10) {
            std::cout << (it._s_name485).data() << " " << it._numwait1918L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0865_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0865_output #Row: " << tbl_Sort_TD_0865_output.getNumRow() << std::endl;
}

