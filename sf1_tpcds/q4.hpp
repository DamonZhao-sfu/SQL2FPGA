#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_3252932(Table &tbl_SerializeFromObject_TD_431434_input, Table &tbl_Filter_TD_3252932_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((l_commitdate#61 < l_receiptdate#62))
    // Input: ListBuffer(l_orderkey#50, l_commitdate#61, l_receiptdate#62)
    // Output: ListBuffer(l_orderkey#50)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_431434_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_commitdate61 = tbl_SerializeFromObject_TD_431434_input.getInt32(i, 1);
        int32_t _l_receiptdate62 = tbl_SerializeFromObject_TD_431434_input.getInt32(i, 2);
        if (_l_commitdate61 < _l_receiptdate62) {
            int32_t _l_orderkey50_t = tbl_SerializeFromObject_TD_431434_input.getInt32(i, 0);
            tbl_Filter_TD_3252932_output.setInt32(r, 0, _l_orderkey50_t);
            r++;
        }
    }
    tbl_Filter_TD_3252932_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3252932_output #Row: " << tbl_Filter_TD_3252932_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3419863(Table &tbl_SerializeFromObject_TD_4244920_input_stringRowIDSubstitute, Table &tbl_Filter_TD_3419863_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((o_orderdate#231 >= 19930701) AND (o_orderdate#231 < 19931001)))
    // Input: ListBuffer(o_orderkey#227, o_orderpriority#232, o_orderdate#231)
    // Output: ListBuffer(o_orderkey#227, o_orderpriority#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4244920_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate231 = tbl_SerializeFromObject_TD_4244920_input_stringRowIDSubstitute.getInt32(i, 2);
        if ((_o_orderdate231 >= 19930701) && (_o_orderdate231 < 19931001)) {
            int32_t _o_orderkey227_t = tbl_SerializeFromObject_TD_4244920_input_stringRowIDSubstitute.getInt32(i, 0);
            tbl_Filter_TD_3419863_output.setInt32(r, 0, _o_orderkey227_t);
            tbl_Filter_TD_3419863_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_3419863_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3419863_output #Row: " << tbl_Filter_TD_3419863_output.getNumRow() << std::endl;
}


typedef std::string SW_Aggregate_TD_1377996_key;
struct SW_Aggregate_TD_1377996_payload {
    int64_t _order_count995L_count_0;
};
void SW_Aggregate_TD_1377996(Table &tbl_JOIN_LEFTSEMI_TD_2353779_output, Table &tbl_SerializeFromObject_TD_4244920_input, Table &tbl_SerializeFromObject_TD_431434_input, Table &tbl_Aggregate_TD_1377996_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(o_orderpriority#232, count(1) AS order_count#995L)
    // Input: ListBuffer(o_orderpriority#232)
    // Output: ListBuffer(o_orderpriority#232, order_count#995L)
    std::unordered_map<SW_Aggregate_TD_1377996_key, SW_Aggregate_TD_1377996_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_2353779_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _o_orderpriority232 = tbl_SerializeFromObject_TD_4244920_input.getcharN<char, TPCH_READ_MAXAGG_LEN + 1>(tbl_JOIN_LEFTSEMI_TD_2353779_output.getInt32(i, 0), 1);
        SW_Aggregate_TD_1377996_key k = std::string(_o_orderpriority232.data());
        int64_t _order_count995L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_1377996_payload p{_order_count995L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._order_count995L_count_0 + _order_count995L_count_0;
            p._order_count995L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _o_orderpriority232{};
        memcpy(_o_orderpriority232.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1377996_output.setcharN<char, TPCH_READ_MAXAGG_LEN + 1>(r, 0, _o_orderpriority232);
        int64_t _order_count995L = (it.second)._order_count995L_count_0;
        tbl_Aggregate_TD_1377996_output.setInt64(r, 1, _order_count995L);
        ++r;
    }
    tbl_Aggregate_TD_1377996_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1377996_output #Row: " << tbl_Aggregate_TD_1377996_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0458598(Table &tbl_Aggregate_TD_1377996_output, Table &tbl_Sort_TD_0458598_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(o_orderpriority#232 ASC NULLS FIRST)
    // Input: ListBuffer(o_orderpriority#232, order_count#995L)
    // Output: ListBuffer(o_orderpriority#232, order_count#995L)
    struct SW_Sort_TD_0458598Row {
        std::string _o_orderpriority232;
        int64_t _order_count995L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0458598Row& a, const SW_Sort_TD_0458598Row& b) const { return 
 (a._o_orderpriority232 < b._o_orderpriority232); 
}
    }SW_Sort_TD_0458598_order; 

    int nrow1 = tbl_Aggregate_TD_1377996_output.getNumRow();
    std::vector<SW_Sort_TD_0458598Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _o_orderpriority232 = tbl_Aggregate_TD_1377996_output.getcharN<char, TPCH_READ_MAXAGG_LEN +1>(i, 0);
        int64_t _order_count995L = tbl_Aggregate_TD_1377996_output.getInt64(i, 1);
        SW_Sort_TD_0458598Row t = {std::string(_o_orderpriority232.data()),_order_count995L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0458598_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _o_orderpriority232{};
        memcpy(_o_orderpriority232.data(), (it._o_orderpriority232).data(), (it._o_orderpriority232).length());
        tbl_Sort_TD_0458598_output.setcharN<char, TPCH_READ_MAXAGG_LEN +1>(r, 0, _o_orderpriority232);
        tbl_Sort_TD_0458598_output.setInt64(r, 1, it._order_count995L);
        if (r < 10) {
            std::cout << (it._o_orderpriority232).data() << " " << it._order_count995L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0458598_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0458598_output #Row: " << tbl_Sort_TD_0458598_output.getNumRow() << std::endl;
}

