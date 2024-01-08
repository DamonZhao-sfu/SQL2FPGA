#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_4624(Table &tbl_SerializeFromObject_TD_5907_input, Table &tbl_Filter_TD_4624_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = JAPAN)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5907_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5907_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 1);
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_5907_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "JAPAN")) && (1)) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_5907_input.getInt32(i, 0);
            tbl_Filter_TD_4624_output.setInt32(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_4624_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4624_output #Row: " << tbl_Filter_TD_4624_output.getNumRow() << std::endl;
}


typedef std::string SW_Aggregate_TD_1274_key;
struct SW_Aggregate_TD_1274_payload {
    int64_t _numwait2399L_count_0;
};
void SW_Aggregate_TD_1274(Table &tbl_JOIN_INNER_TD_2394_output, Table &tbl_SerializeFromObject_TD_7953_input, Table &tbl_Aggregate_TD_1274_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_name#485, count(1) AS numwait#2399L)
    // Input: ListBuffer(s_name#485)
    // Output: ListBuffer(s_name#485, numwait#2399L)
    std::unordered_map<SW_Aggregate_TD_1274_key, SW_Aggregate_TD_1274_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2394_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_7953_input.getcharN<char, TPCH_READ_S_NAME_LEN + 1>(tbl_JOIN_INNER_TD_2394_output.getInt32(i, 0), 1);
        SW_Aggregate_TD_1274_key k = std::string(_s_name485.data());
        int64_t _numwait2399L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_1274_payload p{_numwait2399L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._numwait2399L_count_0 + _numwait2399L_count_0;
            p._numwait2399L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1274_output.setcharN<char, TPCH_READ_S_NAME_LEN + 1>(r, 0, _s_name485);
        int64_t _numwait2399L = (it.second)._numwait2399L_count_0;
        tbl_Aggregate_TD_1274_output.setInt64(r, 1, _numwait2399L);
        ++r;
    }
    tbl_Aggregate_TD_1274_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1274_output #Row: " << tbl_Aggregate_TD_1274_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0123(Table &tbl_Aggregate_TD_1274_output, Table &tbl_Sort_TD_0123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(numwait#2399L DESC NULLS LAST, s_name#485 ASC NULLS FIRST)
    // Input: ListBuffer(s_name#485, numwait#2399L)
    // Output: ListBuffer(s_name#485, numwait#2399L)
    struct SW_Sort_TD_0123Row {
        std::string _s_name485;
        int64_t _numwait2399L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0123Row& a, const SW_Sort_TD_0123Row& b) const { return 
 (a._numwait2399L > b._numwait2399L) || 
 ((a._numwait2399L == b._numwait2399L) && (a._s_name485 < b._s_name485)); 
}
    }SW_Sort_TD_0123_order; 

    int nrow1 = tbl_Aggregate_TD_1274_output.getNumRow();
    std::vector<SW_Sort_TD_0123Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485 = tbl_Aggregate_TD_1274_output.getcharN<char, TPCH_READ_S_NAME_LEN +1>(i, 0);
        int64_t _numwait2399L = tbl_Aggregate_TD_1274_output.getInt64(i, 1);
        SW_Sort_TD_0123Row t = {std::string(_s_name485.data()),_numwait2399L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0123_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0123_output.setcharN<char, TPCH_READ_S_NAME_LEN +1>(r, 0, _s_name485);
        tbl_Sort_TD_0123_output.setInt64(r, 1, it._numwait2399L);
        if (r < 10) {
            std::cout << (it._s_name485).data() << " " << it._numwait2399L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0123_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0123_output #Row: " << tbl_Sort_TD_0123_output.getNumRow() << std::endl;
}

