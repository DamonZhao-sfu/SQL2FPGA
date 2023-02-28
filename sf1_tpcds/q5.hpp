#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_771381(Table &tbl_SerializeFromObject_TD_8393076_input, Table &tbl_Filter_TD_771381_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((o_orderdate#231 >= 19930101) AND (o_orderdate#231 < 19940101)))
    // Input: ListBuffer(o_orderkey#227, o_custkey#228, o_orderdate#231)
    // Output: ListBuffer(o_orderkey#227, o_custkey#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8393076_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate231 = tbl_SerializeFromObject_TD_8393076_input.getInt32(i, 2);
        if ((_o_orderdate231 >= 19930101) && (_o_orderdate231 < 19940101)) {
            int32_t _o_orderkey227_t = tbl_SerializeFromObject_TD_8393076_input.getInt32(i, 0);
            tbl_Filter_TD_771381_output.setInt32(r, 0, _o_orderkey227_t);
            int32_t _o_custkey228_t = tbl_SerializeFromObject_TD_8393076_input.getInt32(i, 1);
            tbl_Filter_TD_771381_output.setInt32(r, 1, _o_custkey228_t);
            r++;
        }
    }
    tbl_Filter_TD_771381_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_771381_output #Row: " << tbl_Filter_TD_771381_output.getNumRow() << std::endl;
}




void SW_Filter_TD_377131(Table &tbl_SerializeFromObject_TD_4876007_input, Table &tbl_Filter_TD_377131_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(r_name#189) AND (r_name#189 = AFRICA)))
    // Input: ListBuffer(r_regionkey#188, r_name#189)
    // Output: ListBuffer(r_regionkey#188)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4876007_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name189 = tbl_SerializeFromObject_TD_4876007_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        if (_r_name189.data() != "NULL" && (std::string(_r_name189.data()) == "AFRICA")) {
            int32_t _r_regionkey188_t = tbl_SerializeFromObject_TD_4876007_input.getInt32(i, 0);
            tbl_Filter_TD_377131_output.setInt32(r, 0, _r_regionkey188_t);
            r++;
        }
    }
    tbl_Filter_TD_377131_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_377131_output #Row: " << tbl_Filter_TD_377131_output.getNumRow() << std::endl;
}



typedef std::string SW_Aggregate_TD_1869314_key;
struct SW_Aggregate_TD_1869314_payload {
    int64_t _revenue1016L_sum_0;
};
void SW_Aggregate_TD_1869314(Table &tbl_JOIN_INNER_TD_2917669_output, Table &tbl_SerializeFromObject_TD_4408153_input, Table &tbl_SerializeFromObject_TD_4876007_input, Table &tbl_Aggregate_TD_1869314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(n_name#165, sum((l_extendedprice#55 * (100 - l_discount#56))) AS revenue#1016L)
    // Input: ListBuffer(l_extendedprice#55, l_discount#56, n_name#165)
    // Output: ListBuffer(n_name#165, revenue#1016L)
    std::unordered_map<SW_Aggregate_TD_1869314_key, SW_Aggregate_TD_1869314_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2917669_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_extendedprice55 = tbl_JOIN_INNER_TD_2917669_output.getInt32(i, 0);
        int32_t _l_discount56 = tbl_JOIN_INNER_TD_2917669_output.getInt32(i, 1);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name165 = tbl_SerializeFromObject_TD_4408153_input.getcharN<char, TPCH_READ_NATION_LEN + 1>(tbl_JOIN_INNER_TD_2917669_output.getInt32(i, 2), 1);
        SW_Aggregate_TD_1869314_key k = std::string(_n_name165.data());
        int64_t _revenue1016L_sum_0 = (_l_extendedprice55 * (100 - _l_discount56));
        SW_Aggregate_TD_1869314_payload p{_revenue1016L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._revenue1016L_sum_0 + _revenue1016L_sum_0;
            p._revenue1016L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name165{};
        memcpy(_n_name165.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1869314_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(r, 0, _n_name165);
        int64_t _revenue1016L = (it.second)._revenue1016L_sum_0;
        tbl_Aggregate_TD_1869314_output.setInt64(r, 1, _revenue1016L);
        ++r;
    }
    tbl_Aggregate_TD_1869314_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1869314_output #Row: " << tbl_Aggregate_TD_1869314_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0679582(Table &tbl_Aggregate_TD_1869314_output, Table &tbl_Sort_TD_0679582_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(revenue#1016L DESC NULLS LAST)
    // Input: ListBuffer(n_name#165, revenue#1016L)
    // Output: ListBuffer(n_name#165, revenue#1016L)
    struct SW_Sort_TD_0679582Row {
        std::string _n_name165;
        int64_t _revenue1016L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0679582Row& a, const SW_Sort_TD_0679582Row& b) const { return 
 (a._revenue1016L > b._revenue1016L); 
}
    }SW_Sort_TD_0679582_order; 

    int nrow1 = tbl_Aggregate_TD_1869314_output.getNumRow();
    std::vector<SW_Sort_TD_0679582Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name165 = tbl_Aggregate_TD_1869314_output.getcharN<char, TPCH_READ_NATION_LEN +1>(i, 0);
        int64_t _revenue1016L = tbl_Aggregate_TD_1869314_output.getInt64(i, 1);
        SW_Sort_TD_0679582Row t = {std::string(_n_name165.data()),_revenue1016L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0679582_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name165{};
        memcpy(_n_name165.data(), (it._n_name165).data(), (it._n_name165).length());
        tbl_Sort_TD_0679582_output.setcharN<char, TPCH_READ_NATION_LEN +1>(r, 0, _n_name165);
        tbl_Sort_TD_0679582_output.setInt64(r, 1, it._revenue1016L);
        if (r < 10) {
            std::cout << (it._n_name165).data() << " " << it._revenue1016L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0679582_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0679582_output #Row: " << tbl_Sort_TD_0679582_output.getNumRow() << std::endl;
}

