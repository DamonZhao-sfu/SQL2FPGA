#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_4576(Table &tbl_SerializeFromObject_TD_5317_input, Table &tbl_Filter_TD_4576_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(l_commitdate#10) AND isnotnull(l_receiptdate#11)) AND isnotnull(l_shipdate#15)) AND ((((l_shipmode#13 IN (TRUCK,MAIL) AND (cast(regexp_replace(cast(l_commitdate#10 as string), -, , 1) as int) < cast(regexp_replace(cast(l_receiptdate#11 as string), -, , 1) as int))) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < cast(regexp_replace(cast(l_commitdate#10 as string), -, , 1) as int))) AND (cast(regexp_replace(cast(l_receiptdate#11 as string), -, , 1) as int) >= 19970101)) AND (cast(regexp_replace(cast(l_receiptdate#11 as string), -, , 1) as int) < 19980101))) AND isnotnull(cast(l_orderkey#0L as int))))
    // Input: ListBuffer(l_orderkey#0L, l_shipmode#13, l_commitdate#10, l_receiptdate#11, l_shipdate#15)
    // Output: ListBuffer(l_orderkey#0L, l_shipmode#13)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5317_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_commitdate10 = tbl_SerializeFromObject_TD_5317_input.getInt32(i, 2);
        int32_t _l_receiptdate11 = tbl_SerializeFromObject_TD_5317_input.getInt32(i, 3);
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_5317_input.getInt32(i, 4);
        std::array<char, TPCH_READ_REGION_LEN + 1> _l_shipmode13 = tbl_SerializeFromObject_TD_5317_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _l_orderkey0L = tbl_SerializeFromObject_TD_5317_input.getInt32(i, 0);
        auto reuse_col_str_702 = std::string(_l_shipmode13.data());
        if (((((1) && (1)) && (1)) && ((((((reuse_col_str_702 == "TRUCK") || (reuse_col_str_702 == "MAIL") || (0)) && (_l_commitdate10 < _l_receiptdate11)) && (_l_shipdate15 < _l_commitdate10)) && (_l_receiptdate11 >= 19970101)) && (_l_receiptdate11 < 19980101))) && (1)) {
            int32_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_5317_input.getInt32(i, 0);
            tbl_Filter_TD_4576_output.setInt32(r, 0, _l_orderkey0L_t);
            tbl_Filter_TD_4576_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_4576_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4576_output #Row: " << tbl_Filter_TD_4576_output.getNumRow() << std::endl;
}

void SW_Project_TD_357(Table &tbl_Filter_TD_4576_output, Table &tbl_Project_TD_357_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32)
    // Input: ListBuffer(l_orderkey#0L, l_shipmode#13)
    // Output: ListBuffer(l_orderkey#32, l_shipmode#13)
    int nrow1 = tbl_Filter_TD_4576_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey0L = tbl_Filter_TD_4576_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _l_shipmode13 = tbl_Filter_TD_4576_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_357_output.setInt32(i, 0, _l_orderkey32);
        tbl_Project_TD_357_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _l_shipmode13);
    }
    tbl_Project_TD_357_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_357_output #Row: " << tbl_Project_TD_357_output.getNumRow() << std::endl;
}

void SW_Project_TD_3715(Table &tbl_SerializeFromObject_TD_5824_input_stringRowIDSubstitute, Table &tbl_Project_TD_3715_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342)
    // Input: ListBuffer(o_orderkey#324L, o_orderpriority#328)
    // Output: ListBuffer(o_orderkey#342, o_orderpriority#328)
    int nrow1 = tbl_SerializeFromObject_TD_5824_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderkey324L = tbl_SerializeFromObject_TD_5824_input_stringRowIDSubstitute.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_orderpriority328 = tbl_SerializeFromObject_TD_5824_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_3715_output.setInt32(i, 0, _o_orderkey342);
        tbl_Project_TD_3715_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _o_orderpriority328);
    }
    tbl_Project_TD_3715_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3715_output #Row: " << tbl_Project_TD_3715_output.getNumRow() << std::endl;
}


typedef std::string SW_Aggregate_TD_1242_key;
struct SW_Aggregate_TD_1242_payload {
    int64_t _high_line_count1830L_sum_0;
    int64_t _low_line_count1831L_sum_1;
};
void SW_Aggregate_TD_1242(Table &tbl_JOIN_INNER_TD_2599_output, Table &tbl_SerializeFromObject_TD_5824_input, Table &tbl_SerializeFromObject_TD_5317_input, Table &tbl_Aggregate_TD_1242_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(l_shipmode#13, sum(CASE WHEN ((o_orderpriority#328 = 1-URGENT) OR (o_orderpriority#328 = 2-HIGH)) THEN 1 ELSE 0 END) AS high_line_count#1830L, sum(CASE WHEN (NOT (o_orderpriority#328 = 1-URGENT) AND NOT (o_orderpriority#328 = 2-HIGH)) THEN 1 ELSE 0 END) AS low_line_count#1831L)
    // Input: ListBuffer(o_orderpriority#328, l_shipmode#13)
    // Output: ListBuffer(l_shipmode#13, high_line_count#1830L, low_line_count#1831L)
    std::unordered_map<SW_Aggregate_TD_1242_key, SW_Aggregate_TD_1242_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2599_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_orderpriority328 = tbl_SerializeFromObject_TD_5824_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_2599_output.getInt32(i, 0), 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _l_shipmode13 = tbl_SerializeFromObject_TD_5317_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_2599_output.getInt32(i, 1), 1);
        SW_Aggregate_TD_1242_key k = std::string(_l_shipmode13.data());
        int64_t _high_line_count1830L_sum_0 = ((std::string(_o_orderpriority328.data()) == "1-URGENT") || (std::string(_o_orderpriority328.data()) == "2-HIGH")) ? 1 : 0;
        int64_t _low_line_count1831L_sum_1 = (!((std::string(_o_orderpriority328.data()) == "1-URGENT")) && !((std::string(_o_orderpriority328.data()) == "2-HIGH"))) ? 1 : 0;
        SW_Aggregate_TD_1242_payload p{_high_line_count1830L_sum_0, _low_line_count1831L_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._high_line_count1830L_sum_0 + _high_line_count1830L_sum_0;
            p._high_line_count1830L_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._low_line_count1831L_sum_1 + _low_line_count1831L_sum_1;
            p._low_line_count1831L_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _l_shipmode13{};
        memcpy(_l_shipmode13.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1242_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _l_shipmode13);
        int64_t _high_line_count1830L = (it.second)._high_line_count1830L_sum_0;
        tbl_Aggregate_TD_1242_output.setInt64(r, 1, _high_line_count1830L);
        int64_t _low_line_count1831L = (it.second)._low_line_count1831L_sum_1;
        tbl_Aggregate_TD_1242_output.setInt64(r, 2, _low_line_count1831L);
        ++r;
    }
    tbl_Aggregate_TD_1242_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1242_output #Row: " << tbl_Aggregate_TD_1242_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0313(Table &tbl_Aggregate_TD_1242_output, Table &tbl_Sort_TD_0313_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(l_shipmode#13 ASC NULLS FIRST)
    // Input: ListBuffer(l_shipmode#13, high_line_count#1830L, low_line_count#1831L)
    // Output: ListBuffer(l_shipmode#13, high_line_count#1830L, low_line_count#1831L)
    struct SW_Sort_TD_0313Row {
        std::string _l_shipmode13;
        int64_t _high_line_count1830L;
        int64_t _low_line_count1831L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0313Row& a, const SW_Sort_TD_0313Row& b) const { return 
 (a._l_shipmode13 < b._l_shipmode13); 
}
    }SW_Sort_TD_0313_order; 

    int nrow1 = tbl_Aggregate_TD_1242_output.getNumRow();
    std::vector<SW_Sort_TD_0313Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _l_shipmode13 = tbl_Aggregate_TD_1242_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _high_line_count1830L = tbl_Aggregate_TD_1242_output.getInt64(i, 1);
        int64_t _low_line_count1831L = tbl_Aggregate_TD_1242_output.getInt64(i, 2);
        SW_Sort_TD_0313Row t = {std::string(_l_shipmode13.data()),_high_line_count1830L,_low_line_count1831L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0313_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _l_shipmode13{};
        memcpy(_l_shipmode13.data(), (it._l_shipmode13).data(), (it._l_shipmode13).length());
        tbl_Sort_TD_0313_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _l_shipmode13);
        tbl_Sort_TD_0313_output.setInt64(r, 1, it._high_line_count1830L);
        tbl_Sort_TD_0313_output.setInt64(r, 2, it._low_line_count1831L);
        if (r < 10) {
            std::cout << (it._l_shipmode13).data() << " " << it._high_line_count1830L << " " << it._low_line_count1831L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0313_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0313_output #Row: " << tbl_Sort_TD_0313_output.getNumRow() << std::endl;
}

