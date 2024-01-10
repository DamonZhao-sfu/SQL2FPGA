#include <regex> 
#include <stdint.h> 

void SW_Project_TD_8834(Table &tbl_SerializeFromObject_TD_9717_input, Table &tbl_Project_TD_8834_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#2238L as int) AS l_orderkey#32, cast(CheckOverflow((promote_precision(l_quantity#2242) * 100.00), DecimalType(16,2), true) as int) AS l_quantity#100)
    // Input: ListBuffer(l_orderkey#2238L, l_quantity#2242)
    // Output: ListBuffer(l_orderkey#32, l_quantity#100)
    int nrow1 = tbl_SerializeFromObject_TD_9717_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey2238L = tbl_SerializeFromObject_TD_9717_input.getInt32(i, 0);
        int32_t _l_quantity2242 = tbl_SerializeFromObject_TD_9717_input.getInt32(i, 1);
        int32_t _l_orderkey32 = _l_orderkey2238L;
        tbl_Project_TD_8834_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_quantity100 = (_l_quantity2242 * 100.00);
        tbl_Project_TD_8834_output.setInt32(i, 1, _l_quantity100);
    }
    tbl_Project_TD_8834_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8834_output #Row: " << tbl_Project_TD_8834_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_7737_consolidate(Table &tbl_Aggregate_TD_7737_output_preprocess, Table &tbl_Aggregate_TD_7737_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_7737_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _l_orderkey32 = tbl_Aggregate_TD_7737_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_7737_output.setInt32(r, 0, _l_orderkey32);
        int64_t _suml_quantity1002237L = tbl_Aggregate_TD_7737_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_7737_output.setInt64(r, 1, _suml_quantity1002237L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_7737_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_7737_output #Row: " << tbl_Aggregate_TD_7737_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6964(Table &tbl_Aggregate_TD_7737_output, Table &tbl_Filter_TD_6964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sum(l_quantity#100)#2237L) AND (sum(l_quantity#100)#2237L > 312)))
    // Input: ListBuffer(l_orderkey#32, sum(l_quantity#100)#2237L)
    // Output: ListBuffer(l_orderkey#32)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7737_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _suml_quantity1002237L = tbl_Aggregate_TD_7737_output.getInt64(i, 1);
        if ((1) && (_suml_quantity1002237L > 312)) {
            int32_t _l_orderkey32_t = tbl_Aggregate_TD_7737_output.getInt32(i, 0);
            tbl_Filter_TD_6964_output.setInt32(r, 0, _l_orderkey32_t);
            r++;
        }
    }
    tbl_Filter_TD_6964_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6964_output #Row: " << tbl_Filter_TD_6964_output.getNumRow() << std::endl;
}



void SW_Project_TD_4847(Table &tbl_JOIN_LEFTSEMI_TD_5602_output, Table &tbl_Project_TD_4847_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342, cast(o_custkey#325L as int) AS o_custkey#352, cast(CheckOverflow((promote_precision(o_totalprice#327) * 100.00), DecimalType(16,2), true) as int) AS o_totalprice#372, cast(regexp_replace(cast(o_orderdate#332 as string), -, , 1) as int) AS o_orderdate#382)
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_totalprice#327, o_orderdate#332)
    // Output: ListBuffer(o_orderkey#342, o_custkey#352, o_totalprice#372, o_orderdate#382)
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_5602_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderkey324L = tbl_JOIN_LEFTSEMI_TD_5602_output.getInt32(i, 0);
        int32_t _o_custkey325L = tbl_JOIN_LEFTSEMI_TD_5602_output.getInt32(i, 1);
        int32_t _o_totalprice327 = tbl_JOIN_LEFTSEMI_TD_5602_output.getInt32(i, 2);
        int32_t _o_orderdate332 = tbl_JOIN_LEFTSEMI_TD_5602_output.getInt32(i, 3);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_4847_output.setInt32(i, 0, _o_orderkey342);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_4847_output.setInt32(i, 1, _o_custkey352);
        int32_t _o_totalprice372 = (_o_totalprice327 * 100.00);
        tbl_Project_TD_4847_output.setInt32(i, 2, _o_totalprice372);
        int32_t _o_orderdate382 = _o_orderdate332;
        tbl_Project_TD_4847_output.setInt32(i, 3, _o_orderdate382);
    }
    tbl_Project_TD_4847_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4847_output #Row: " << tbl_Project_TD_4847_output.getNumRow() << std::endl;
}

void SW_Project_TD_4362(Table &tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute, Table &tbl_Project_TD_4362_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(c_custkey#253L as int) AS c_custkey#269)
    // Input: ListBuffer(c_custkey#253L, c_name#254)
    // Output: ListBuffer(c_custkey#269, c_name#254)
    int nrow1 = tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_custkey253L = tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254 = tbl_SerializeFromObject_TD_6954_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _c_custkey269 = _c_custkey253L;
        tbl_Project_TD_4362_output.setInt32(i, 0, _c_custkey269);
        tbl_Project_TD_4362_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _c_name254);
    }
    tbl_Project_TD_4362_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4362_output #Row: " << tbl_Project_TD_4362_output.getNumRow() << std::endl;
}

void SW_Project_TD_3706(Table &tbl_JOIN_LEFTSEMI_TD_4262_output, Table &tbl_Project_TD_3706_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) AS l_quantity#100)
    // Input: ListBuffer(l_orderkey#0L, l_quantity#4)
    // Output: ListBuffer(l_orderkey#32, l_quantity#100)
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_4262_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey0L = tbl_JOIN_LEFTSEMI_TD_4262_output.getInt32(i, 0);
        int32_t _l_quantity4 = tbl_JOIN_LEFTSEMI_TD_4262_output.getInt32(i, 1);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_3706_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_quantity100 = (_l_quantity4 * 100.00);
        tbl_Project_TD_3706_output.setInt32(i, 1, _l_quantity100);
    }
    tbl_Project_TD_3706_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3706_output #Row: " << tbl_Project_TD_3706_output.getNumRow() << std::endl;
}



struct SW_Aggregate_TD_1719_key {
    std::string _c_name254;
    int32_t _c_custkey269;
    int32_t _o_orderkey342;
    int32_t _o_orderdate382;
    int32_t _o_totalprice372;
    bool operator==(const SW_Aggregate_TD_1719_key& other) const { return (_c_name254 == other._c_name254) && (_c_custkey269 == other._c_custkey269) && (_o_orderkey342 == other._o_orderkey342) && (_o_orderdate382 == other._o_orderdate382) && (_o_totalprice372 == other._o_totalprice372); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1719_key> {
    std::size_t operator() (const SW_Aggregate_TD_1719_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_name254)) + (hash<int32_t>()(k._c_custkey269)) + (hash<int32_t>()(k._o_orderkey342)) + (hash<int32_t>()(k._o_orderdate382)) + (hash<int32_t>()(k._o_totalprice372));
    }
};
}
struct SW_Aggregate_TD_1719_payload {
    int64_t _suml_quantity2255L_sum_0;
};
void SW_Aggregate_TD_1719(Table &tbl_JOIN_INNER_TD_2716_output, Table &tbl_SerializeFromObject_TD_6954_input, Table &tbl_Aggregate_TD_1719_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_name#254, c_custkey#269, o_orderkey#342, o_orderdate#382, o_totalprice#372, sum(l_quantity#100) AS sum(l_quantity)#2255L)
    // Input: ListBuffer(c_custkey#269, c_name#254, o_orderkey#342, o_totalprice#372, o_orderdate#382, l_quantity#100)
    // Output: ListBuffer(c_name#254, c_custkey#269, o_orderkey#342, o_orderdate#382, o_totalprice#372, sum(l_quantity)#2255L)
    std::unordered_map<SW_Aggregate_TD_1719_key, SW_Aggregate_TD_1719_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2716_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_custkey269 = tbl_JOIN_INNER_TD_2716_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254 = tbl_SerializeFromObject_TD_6954_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_2716_output.getInt32(i, 1), 1);
        int32_t _o_orderkey342 = tbl_JOIN_INNER_TD_2716_output.getInt32(i, 2);
        int32_t _o_totalprice372 = tbl_JOIN_INNER_TD_2716_output.getInt32(i, 3);
        int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_2716_output.getInt32(i, 4);
        int32_t _l_quantity100 = tbl_JOIN_INNER_TD_2716_output.getInt32(i, 5);
        SW_Aggregate_TD_1719_key k{std::string(_c_name254.data()), _c_custkey269, _o_orderkey342, _o_orderdate382, _o_totalprice372};
        int64_t _suml_quantity2255L_sum_0 = _l_quantity100;
        SW_Aggregate_TD_1719_payload p{_suml_quantity2255L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._suml_quantity2255L_sum_0 + _suml_quantity2255L_sum_0;
            p._suml_quantity2255L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254{};
        memcpy(_c_name254.data(), ((it.first)._c_name254).data(), ((it.first)._c_name254).length());
        tbl_Aggregate_TD_1719_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _c_name254);
        tbl_Aggregate_TD_1719_output.setInt32(r, 1, (it.first)._c_custkey269);
        tbl_Aggregate_TD_1719_output.setInt32(r, 2, (it.first)._o_orderkey342);
        tbl_Aggregate_TD_1719_output.setInt32(r, 3, (it.first)._o_orderdate382);
        tbl_Aggregate_TD_1719_output.setInt32(r, 4, (it.first)._o_totalprice372);
        int64_t _suml_quantity2255L = (it.second)._suml_quantity2255L_sum_0;
        tbl_Aggregate_TD_1719_output.setInt64(r, 5, _suml_quantity2255L);
        ++r;
    }
    tbl_Aggregate_TD_1719_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1719_output #Row: " << tbl_Aggregate_TD_1719_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0695(Table &tbl_Aggregate_TD_1719_output, Table &tbl_Sort_TD_0695_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(o_totalprice#372 DESC NULLS LAST, o_orderdate#382 ASC NULLS FIRST)
    // Input: ListBuffer(c_name#254, c_custkey#269, o_orderkey#342, o_orderdate#382, o_totalprice#372, sum(l_quantity)#2255L)
    // Output: ListBuffer(c_name#254, c_custkey#269, o_orderkey#342, o_orderdate#382, o_totalprice#372, sum(l_quantity)#2255L)
    struct SW_Sort_TD_0695Row {
        std::string _c_name254;
        int32_t _c_custkey269;
        int32_t _o_orderkey342;
        int32_t _o_orderdate382;
        int32_t _o_totalprice372;
        int64_t _suml_quantity2255L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0695Row& a, const SW_Sort_TD_0695Row& b) const { return 
 (a._o_totalprice372 > b._o_totalprice372) || 
 ((a._o_totalprice372 == b._o_totalprice372) && (a._o_orderdate382 < b._o_orderdate382)); 
}
    }SW_Sort_TD_0695_order; 

    int nrow1 = tbl_Aggregate_TD_1719_output.getNumRow();
    std::vector<SW_Sort_TD_0695Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254 = tbl_Aggregate_TD_1719_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int32_t _c_custkey269 = tbl_Aggregate_TD_1719_output.getInt32(i, 1);
        int32_t _o_orderkey342 = tbl_Aggregate_TD_1719_output.getInt32(i, 2);
        int32_t _o_orderdate382 = tbl_Aggregate_TD_1719_output.getInt32(i, 3);
        int32_t _o_totalprice372 = tbl_Aggregate_TD_1719_output.getInt32(i, 4);
        int64_t _suml_quantity2255L = tbl_Aggregate_TD_1719_output.getInt64(i, 5);
        SW_Sort_TD_0695Row t = {std::string(_c_name254.data()),_c_custkey269,_o_orderkey342,_o_orderdate382,_o_totalprice372,_suml_quantity2255L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0695_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_name254{};
        memcpy(_c_name254.data(), (it._c_name254).data(), (it._c_name254).length());
        tbl_Sort_TD_0695_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _c_name254);
        tbl_Sort_TD_0695_output.setInt32(r, 1, it._c_custkey269);
        tbl_Sort_TD_0695_output.setInt32(r, 2, it._o_orderkey342);
        tbl_Sort_TD_0695_output.setInt32(r, 3, it._o_orderdate382);
        tbl_Sort_TD_0695_output.setInt32(r, 4, it._o_totalprice372);
        tbl_Sort_TD_0695_output.setInt64(r, 5, it._suml_quantity2255L);
        if (r < 10) {
            std::cout << (it._c_name254).data() << " " << it._c_custkey269 << " " << it._o_orderkey342 << " " << it._o_orderdate382 << " " << it._o_totalprice372 << " " << it._suml_quantity2255L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0695_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0695_output #Row: " << tbl_Sort_TD_0695_output.getNumRow() << std::endl;
}

