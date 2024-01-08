#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5382(Table &tbl_SerializeFromObject_TD_6783_input, Table &tbl_Filter_TD_5382_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(r_name#315) AND (r_name#315 = MIDDLE EAST)) AND isnotnull(cast(r_regionkey#314L as int))))
    // Input: ListBuffer(r_regionkey#314L, r_name#315)
    // Output: ListBuffer(r_regionkey#314L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6783_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name315 = tbl_SerializeFromObject_TD_6783_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _r_regionkey314L = tbl_SerializeFromObject_TD_6783_input.getInt32(i, 0);
        if (((1) && (std::string(_r_name315.data()) == "MIDDLE EAST")) && (1)) {
            int32_t _r_regionkey314L_t = tbl_SerializeFromObject_TD_6783_input.getInt32(i, 0);
            tbl_Filter_TD_5382_output.setInt32(r, 0, _r_regionkey314L_t);
            r++;
        }
    }
    tbl_Filter_TD_5382_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5382_output #Row: " << tbl_Filter_TD_5382_output.getNumRow() << std::endl;
}


void SW_Project_TD_2192(Table &tbl_JOIN_INNER_TD_3438_output, Table &tbl_Project_TD_2192_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast((cast(o_orderdate#382 as double) / 10000.0) as int) AS o_year#1066, (l_extendedprice#117 * (100 - l_discount#134)) AS volume#1067, n_name#1071 AS nation#1068)
    // Input: ListBuffer(o_orderdate#382, l_extendedprice#117, l_discount#134, n_name#1071)
    // Output: ListBuffer(o_year#1066, volume#1067, nation#1068)
    int nrow1 = tbl_JOIN_INNER_TD_3438_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_3438_output.getInt32(i, 0);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3438_output.getInt32(i, 1);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_3438_output.getInt32(i, 2);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1071 = tbl_JOIN_INNER_TD_3438_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 3);
        int32_t _o_year1066 = (_o_orderdate382 / 10000.0);
        tbl_Project_TD_2192_output.setInt32(i, 0, _o_year1066);
        int32_t _volume1067 = (_l_extendedprice117 * (100 - _l_discount134));
        tbl_Project_TD_2192_output.setInt32(i, 1, _volume1067);
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1068 = _n_name1071;
        tbl_Project_TD_2192_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(i, 2, _nation1068);
    }
    tbl_Project_TD_2192_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2192_output #Row: " << tbl_Project_TD_2192_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_1443_key;
struct SW_Aggregate_TD_1443_payload {
    int64_t _mkt_share1069_sum_0;
    int64_t _mkt_share1069_sum_1;
};
void SW_Aggregate_TD_1443(Table &tbl_Project_TD_2192_output, Table &tbl_Aggregate_TD_1443_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(o_year#1066, (cast(sum(CASE WHEN (nation#1068 = IRAQ) THEN volume#1067 ELSE 0 END) as double) / cast(sum(volume#1067) as double)) AS mkt_share#1069)
    // Input: ListBuffer(o_year#1066, volume#1067, nation#1068)
    // Output: ListBuffer(o_year#1066, mkt_share#1069)
    std::unordered_map<SW_Aggregate_TD_1443_key, SW_Aggregate_TD_1443_payload> ht1;
    int nrow1 = tbl_Project_TD_2192_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_year1066 = tbl_Project_TD_2192_output.getInt32(i, 0);
        int32_t _volume1067 = tbl_Project_TD_2192_output.getInt32(i, 1);
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1068 = tbl_Project_TD_2192_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 2);
        SW_Aggregate_TD_1443_key k = _o_year1066;
        int64_t _mkt_share1069_sum_0 = (std::string(_nation1068.data()) == "IRAQ") ? _volume1067 : 0;
        int64_t _mkt_share1069_sum_1 = _volume1067;
        SW_Aggregate_TD_1443_payload p{_mkt_share1069_sum_0, _mkt_share1069_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._mkt_share1069_sum_0 + _mkt_share1069_sum_0;
            p._mkt_share1069_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._mkt_share1069_sum_1 + _mkt_share1069_sum_1;
            p._mkt_share1069_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_1443_output.setInt32(r, 0, (it.first));
        int64_t _mkt_share1069 = ((it.second)._mkt_share1069_sum_0 / (it.second)._mkt_share1069_sum_1);
        tbl_Aggregate_TD_1443_output.setInt64(r, 1, _mkt_share1069);
        ++r;
    }
    tbl_Aggregate_TD_1443_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1443_output #Row: " << tbl_Aggregate_TD_1443_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0804(Table &tbl_Aggregate_TD_1443_output, Table &tbl_Sort_TD_0804_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(o_year#1066 ASC NULLS FIRST)
    // Input: ListBuffer(o_year#1066, mkt_share#1069)
    // Output: ListBuffer(o_year#1066, mkt_share#1069)
    struct SW_Sort_TD_0804Row {
        int32_t _o_year1066;
        int64_t _mkt_share1069;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0804Row& a, const SW_Sort_TD_0804Row& b) const { return 
 (a._o_year1066 < b._o_year1066); 
}
    }SW_Sort_TD_0804_order; 

    int nrow1 = tbl_Aggregate_TD_1443_output.getNumRow();
    std::vector<SW_Sort_TD_0804Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_year1066 = tbl_Aggregate_TD_1443_output.getInt32(i, 0);
        int64_t _mkt_share1069 = tbl_Aggregate_TD_1443_output.getInt64(i, 1);
        SW_Sort_TD_0804Row t = {_o_year1066,_mkt_share1069};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0804_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0804_output.setInt32(r, 0, it._o_year1066);
        tbl_Sort_TD_0804_output.setInt64(r, 1, it._mkt_share1069);
        if (r < 10) {
            std::cout << it._o_year1066 << " " << it._mkt_share1069 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0804_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0804_output #Row: " << tbl_Sort_TD_0804_output.getNumRow() << std::endl;
}

