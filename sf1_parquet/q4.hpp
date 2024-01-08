#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_4936(Table &tbl_SerializeFromObject_TD_5818_input, Table &tbl_Filter_TD_4936_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_commitdate#10) AND isnotnull(l_receiptdate#11)) AND (cast(regexp_replace(cast(l_commitdate#10 as string), -, , 1) as int) < cast(regexp_replace(cast(l_receiptdate#11 as string), -, , 1) as int))))
    // Input: ListBuffer(l_orderkey#0L, l_commitdate#10, l_receiptdate#11)
    // Output: ListBuffer(l_orderkey#0L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5818_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_commitdate10 = tbl_SerializeFromObject_TD_5818_input.getInt32(i, 1);
        int32_t _l_receiptdate11 = tbl_SerializeFromObject_TD_5818_input.getInt32(i, 2);
        if (((1) && (1)) && (_l_commitdate10 < _l_receiptdate11)) {
            int32_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_5818_input.getInt32(i, 0);
            tbl_Filter_TD_4936_output.setInt32(r, 0, _l_orderkey0L_t);
            r++;
        }
    }
    tbl_Filter_TD_4936_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4936_output #Row: " << tbl_Filter_TD_4936_output.getNumRow() << std::endl;
}


void SW_Filter_TD_3593(Table &tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute, Table &tbl_Filter_TD_3593_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_orderdate#332) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) >= 19930701)) AND (cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) < 19931001)))
    // Input: ListBuffer(o_orderkey#324L, o_orderpriority#328, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#324L, o_orderpriority#328)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate332 = tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.getInt32(i, 2);
        if (((1) && (_o_orderdate332 >= 19930701)) && (_o_orderdate332 < 19931001)) {
            int32_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_4189_input_stringRowIDSubstitute.getInt32(i, 0);
            tbl_Filter_TD_3593_output.setInt32(r, 0, _o_orderkey324L_t);
            tbl_Filter_TD_3593_output.setInt32(r, 1, i);
            r++;
        }
    }
    tbl_Filter_TD_3593_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3593_output #Row: " << tbl_Filter_TD_3593_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_2580_key_leftMajor {
    int32_t _o_orderkey324L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2580_key_leftMajor& other) const {
        return ((_o_orderkey324L == other._o_orderkey324L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2580_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2580_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._o_orderkey324L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2580_payload_leftMajor {
    int32_t _o_orderkey324L;
    int32_t _o_orderpriority328;
};
struct SW_JOIN_LEFTSEMI_TD_2580_key_rightMajor {
    int32_t _l_orderkey32;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2580_key_rightMajor& other) const {
        return ((_l_orderkey32 == other._l_orderkey32));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2580_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2580_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_orderkey32));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2580_payload_rightMajor {
    int32_t _l_orderkey32;
};
void SW_JOIN_LEFTSEMI_TD_2580(Table &tbl_Filter_TD_3593_output, Table &tbl_Project_TD_3545_output, Table &tbl_JOIN_LEFTSEMI_TD_2580_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((l_orderkey#32 = cast(o_orderkey#324L as int)))
    // Left Table: ListBuffer(o_orderkey#324L, o_orderpriority#328)
    // Right Table: ListBuffer(l_orderkey#32)
    // Output Table: ListBuffer(o_orderpriority#328)
    int left_nrow = tbl_Filter_TD_3593_output.getNumRow();
    int right_nrow = tbl_Project_TD_3545_output.getNumRow();
    std::unordered_map<SW_JOIN_LEFTSEMI_TD_2580_key_rightMajor, SW_JOIN_LEFTSEMI_TD_2580_payload_rightMajor> ht1;
    int nrow1 = tbl_Project_TD_3545_output.getNumRow();
    int nrow2 = tbl_Filter_TD_3593_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey32_k = tbl_Project_TD_3545_output.getInt32(i, 0);
        SW_JOIN_LEFTSEMI_TD_2580_key_rightMajor keyA{_l_orderkey32_k};
        int32_t _l_orderkey32 = tbl_Project_TD_3545_output.getInt32(i, 0);
        SW_JOIN_LEFTSEMI_TD_2580_payload_rightMajor payloadA{_l_orderkey32};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    // left table
    for (int i = 0; i < nrow2; i++) {
        int32_t _o_orderkey324L_k = tbl_Filter_TD_3593_output.getInt32(i, 0);
        // find right table
        auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_2580_key_rightMajor{_o_orderkey324L_k});
        if (it != ht1.end()) {
            // left table exists _o_orderkey324L_k
            int32_t _o_orderpriority328 = tbl_Filter_TD_3593_output.getInt32(i, 1);
            tbl_JOIN_LEFTSEMI_TD_2580_output.setInt32(r, 0, _o_orderpriority328);
            r++;
            
        }
    }
    tbl_JOIN_LEFTSEMI_TD_2580_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_2580_output #Row: " << tbl_JOIN_LEFTSEMI_TD_2580_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_1683_key;
struct SW_Aggregate_TD_1683_payload {
    int64_t _order_count1330L_count_0;
};
void SW_Aggregate_TD_1683(Table &tbl_JOIN_LEFTSEMI_TD_2580_output, Table &tbl_SerializeFromObject_TD_4189_input, Table &tbl_Aggregate_TD_1683_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(o_orderpriority#328, count(1) AS order_count#1330L)
    // Input: ListBuffer(o_orderpriority#328)
    // Output: ListBuffer(o_orderpriority#328, order_count#1330L)
    std::unordered_map<SW_Aggregate_TD_1683_key, SW_Aggregate_TD_1683_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_2580_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _o_orderpriority328 = tbl_SerializeFromObject_TD_4189_input.getcharN<char, TPCH_READ_MAXAGG_LEN + 1>(tbl_JOIN_LEFTSEMI_TD_2580_output.getInt32(i, 0), 1);
        SW_Aggregate_TD_1683_key k = std::string(_o_orderpriority328.data());
        int64_t _order_count1330L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_1683_payload p{_order_count1330L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._order_count1330L_count_0 + _order_count1330L_count_0;
            p._order_count1330L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _o_orderpriority328{};
        memcpy(_o_orderpriority328.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1683_output.setcharN<char, TPCH_READ_MAXAGG_LEN + 1>(r, 0, _o_orderpriority328);
        int64_t _order_count1330L = (it.second)._order_count1330L_count_0;
        tbl_Aggregate_TD_1683_output.setInt64(r, 1, _order_count1330L);
        ++r;
    }
    tbl_Aggregate_TD_1683_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1683_output #Row: " << tbl_Aggregate_TD_1683_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0973(Table &tbl_Aggregate_TD_1683_output, Table &tbl_Sort_TD_0973_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(o_orderpriority#328 ASC NULLS FIRST)
    // Input: ListBuffer(o_orderpriority#328, order_count#1330L)
    // Output: ListBuffer(o_orderpriority#328, order_count#1330L)
    struct SW_Sort_TD_0973Row {
        std::string _o_orderpriority328;
        int64_t _order_count1330L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0973Row& a, const SW_Sort_TD_0973Row& b) const { return 
 (a._o_orderpriority328 < b._o_orderpriority328); 
}
    }SW_Sort_TD_0973_order; 

    int nrow1 = tbl_Aggregate_TD_1683_output.getNumRow();
    std::vector<SW_Sort_TD_0973Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _o_orderpriority328 = tbl_Aggregate_TD_1683_output.getcharN<char, TPCH_READ_MAXAGG_LEN +1>(i, 0);
        int64_t _order_count1330L = tbl_Aggregate_TD_1683_output.getInt64(i, 1);
        SW_Sort_TD_0973Row t = {std::string(_o_orderpriority328.data()),_order_count1330L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0973_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_MAXAGG_LEN + 1> _o_orderpriority328{};
        memcpy(_o_orderpriority328.data(), (it._o_orderpriority328).data(), (it._o_orderpriority328).length());
        tbl_Sort_TD_0973_output.setcharN<char, TPCH_READ_MAXAGG_LEN +1>(r, 0, _o_orderpriority328);
        tbl_Sort_TD_0973_output.setInt64(r, 1, it._order_count1330L);
        if (r < 10) {
            std::cout << (it._o_orderpriority328).data() << " " << it._order_count1330L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0973_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0973_output #Row: " << tbl_Sort_TD_0973_output.getNumRow() << std::endl;
}

