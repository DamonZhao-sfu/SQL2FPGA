#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_4618(Table &tbl_SerializeFromObject_TD_5841_input, Table &tbl_Filter_TD_4618_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_commitdate#10) AND isnotnull(l_receiptdate#11)) AND (cast(regexp_replace(cast(l_commitdate#10 as string), -, , 1) as int) < cast(regexp_replace(cast(l_receiptdate#11 as string), -, , 1) as int))))
    // Input: ListBuffer(l_orderkey#0L, l_commitdate#10, l_receiptdate#11)
    // Output: ListBuffer(l_orderkey#0L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5841_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_commitdate10 = tbl_SerializeFromObject_TD_5841_input.getInt32(i, 1);
        int32_t _l_receiptdate11 = tbl_SerializeFromObject_TD_5841_input.getInt32(i, 2);
        if (((1) && (1)) && (_l_commitdate10 < _l_receiptdate11)) {
            int32_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_5841_input.getInt32(i, 0);
            tbl_Filter_TD_4618_output.setInt32(r, 0, _l_orderkey0L_t);
            r++;
        }
    }
    tbl_Filter_TD_4618_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4618_output #Row: " << tbl_Filter_TD_4618_output.getNumRow() << std::endl;
}

void SW_Project_TD_3135(Table &tbl_Filter_TD_4618_output, Table &tbl_Project_TD_3135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32)
    // Input: ListBuffer(l_orderkey#0L)
    // Output: ListBuffer(l_orderkey#32)
    int nrow1 = tbl_Filter_TD_4618_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey0L = tbl_Filter_TD_4618_output.getInt32(i, 0);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_3135_output.setInt32(i, 0, _l_orderkey32);
    }
    tbl_Project_TD_3135_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3135_output #Row: " << tbl_Project_TD_3135_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3856(Table &tbl_SerializeFromObject_TD_4970_input_stringRowIDSubstitute, Table &tbl_Filter_TD_3856_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_orderdate#332) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) >= 19930701)) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) < 19931001)))
    // Input: ListBuffer(o_orderkey#324L, o_orderpriority#328, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#324L, o_orderpriority#328)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4970_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate332 = tbl_SerializeFromObject_TD_4970_input_stringRowIDSubstitute.getInt32(i, 2);
        if (((1) && (_o_orderdate332 >= 19930701)) && (_o_orderdate332 < 19931001)) {
            int32_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_4970_input_stringRowIDSubstitute.getInt32(i, 0);
            tbl_Filter_TD_3856_output.setInt32(r, 0, _o_orderkey324L_t);
            tbl_Filter_TD_3856_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_3856_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3856_output #Row: " << tbl_Filter_TD_3856_output.getNumRow() << std::endl;
}


typedef std::string SW_Aggregate_TD_1158_key;
struct SW_Aggregate_TD_1158_payload {
    int64_t _order_count1430L_count_0;
};
void SW_Aggregate_TD_1158(Table &tbl_JOIN_LEFTSEMI_TD_2888_output, Table &tbl_SerializeFromObject_TD_4970_input, Table &tbl_Aggregate_TD_1158_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(o_orderpriority#328, count(1) AS order_count#1430L)
    // Input: ListBuffer(o_orderpriority#328)
    // Output: ListBuffer(o_orderpriority#328, order_count#1430L)
    std::unordered_map<SW_Aggregate_TD_1158_key, SW_Aggregate_TD_1158_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_2888_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_orderpriority328 = tbl_SerializeFromObject_TD_4970_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_LEFTSEMI_TD_2888_output.getInt32(i, 0), 1);
        SW_Aggregate_TD_1158_key k = std::string(_o_orderpriority328.data());
        int64_t _order_count1430L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_1158_payload p{_order_count1430L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._order_count1430L_count_0 + _order_count1430L_count_0;
            p._order_count1430L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_orderpriority328{};
        memcpy(_o_orderpriority328.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1158_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _o_orderpriority328);
        int64_t _order_count1430L = (it.second)._order_count1430L_count_0;
        tbl_Aggregate_TD_1158_output.setInt64(r, 1, _order_count1430L);
        ++r;
    }
    tbl_Aggregate_TD_1158_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1158_output #Row: " << tbl_Aggregate_TD_1158_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0221(Table &tbl_Aggregate_TD_1158_output, Table &tbl_Sort_TD_0221_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(o_orderpriority#328 ASC NULLS FIRST)
    // Input: ListBuffer(o_orderpriority#328, order_count#1430L)
    // Output: ListBuffer(o_orderpriority#328, order_count#1430L)
    struct SW_Sort_TD_0221Row {
        std::string _o_orderpriority328;
        int64_t _order_count1430L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0221Row& a, const SW_Sort_TD_0221Row& b) const { return 
 (a._o_orderpriority328 < b._o_orderpriority328); 
}
    }SW_Sort_TD_0221_order; 

    int nrow1 = tbl_Aggregate_TD_1158_output.getNumRow();
    std::vector<SW_Sort_TD_0221Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_orderpriority328 = tbl_Aggregate_TD_1158_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _order_count1430L = tbl_Aggregate_TD_1158_output.getInt64(i, 1);
        SW_Sort_TD_0221Row t = {std::string(_o_orderpriority328.data()),_order_count1430L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0221_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_orderpriority328{};
        memcpy(_o_orderpriority328.data(), (it._o_orderpriority328).data(), (it._o_orderpriority328).length());
        tbl_Sort_TD_0221_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _o_orderpriority328);
        tbl_Sort_TD_0221_output.setInt64(r, 1, it._order_count1430L);
        if (r < 10) {
            std::cout << (it._o_orderpriority328).data() << " " << it._order_count1430L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0221_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0221_output #Row: " << tbl_Sort_TD_0221_output.getNumRow() << std::endl;
}

