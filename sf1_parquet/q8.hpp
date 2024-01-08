#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5535(Table &tbl_SerializeFromObject_TD_6692_input, Table &tbl_Filter_TD_5535_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(r_name#315) AND (r_name#315 = MIDDLE EAST)) AND isnotnull(cast(r_regionkey#314L as int))))
    // Input: ListBuffer(r_regionkey#314L, r_name#315)
    // Output: ListBuffer(r_regionkey#314L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6692_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _r_name315 = tbl_SerializeFromObject_TD_6692_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _r_regionkey314L = tbl_SerializeFromObject_TD_6692_input.getInt32(i, 0);
        if (((1) && (std::string(_r_name315.data()) == "MIDDLE EAST")) && (1)) {
            int32_t _r_regionkey314L_t = tbl_SerializeFromObject_TD_6692_input.getInt32(i, 0);
            tbl_Filter_TD_5535_output.setInt32(r, 0, _r_regionkey314L_t);
            r++;
        }
    }
    tbl_Filter_TD_5535_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5535_output #Row: " << tbl_Filter_TD_5535_output.getNumRow() << std::endl;
}


void SW_Project_TD_2692(Table &tbl_JOIN_INNER_TD_3325_output, Table &tbl_Project_TD_2692_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast((cast(o_orderdate#382 as double) / 10000.0) as int) AS o_year#1573, (l_extendedprice#117 * (100 - l_discount#134)) AS volume#1574, n_name#1578 AS nation#1575)
    // Input: ListBuffer(o_orderdate#382, l_extendedprice#117, l_discount#134, n_name#1578)
    // Output: ListBuffer(o_year#1573, volume#1574, nation#1575)
    int nrow1 = tbl_JOIN_INNER_TD_3325_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderdate382 = tbl_JOIN_INNER_TD_3325_output.getInt32(i, 0);
        int32_t _l_extendedprice117 = tbl_JOIN_INNER_TD_3325_output.getInt32(i, 1);
        int32_t _l_discount134 = tbl_JOIN_INNER_TD_3325_output.getInt32(i, 2);
        std::array<char, TPCH_READ_NATION_LEN + 1> _n_name1578 = tbl_JOIN_INNER_TD_3325_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 3);
        int32_t _o_year1573 = (_o_orderdate382 / 10000.0);
        tbl_Project_TD_2692_output.setInt32(i, 0, _o_year1573);
        int32_t _volume1574 = (_l_extendedprice117 * (100 - _l_discount134));
        tbl_Project_TD_2692_output.setInt32(i, 1, _volume1574);
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1575 = _n_name1578;
        tbl_Project_TD_2692_output.setcharN<char, TPCH_READ_NATION_LEN + 1>(i, 2, _nation1575);
    }
    tbl_Project_TD_2692_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2692_output #Row: " << tbl_Project_TD_2692_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_1425_key;
struct SW_Aggregate_TD_1425_payload {
    int64_t _mkt_share1576_sum_0;
    int64_t _mkt_share1576_sum_1;
};
void SW_Aggregate_TD_1425(Table &tbl_Project_TD_2692_output, Table &tbl_Aggregate_TD_1425_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(o_year#1573, (cast(sum(CASE WHEN (nation#1575 = IRAQ) THEN volume#1574 ELSE 0 END) as double) / cast(sum(volume#1574) as double)) AS mkt_share#1576)
    // Input: ListBuffer(o_year#1573, volume#1574, nation#1575)
    // Output: ListBuffer(o_year#1573, mkt_share#1576)
    std::unordered_map<SW_Aggregate_TD_1425_key, SW_Aggregate_TD_1425_payload> ht1;
    int nrow1 = tbl_Project_TD_2692_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_year1573 = tbl_Project_TD_2692_output.getInt32(i, 0);
        int32_t _volume1574 = tbl_Project_TD_2692_output.getInt32(i, 1);
        std::array<char, TPCH_READ_NATION_LEN + 1> _nation1575 = tbl_Project_TD_2692_output.getcharN<char, TPCH_READ_NATION_LEN + 1>(i, 2);
        SW_Aggregate_TD_1425_key k = _o_year1573;
        int64_t _mkt_share1576_sum_0 = (std::string(_nation1575.data()) == "IRAQ") ? _volume1574 : 0;
        int64_t _mkt_share1576_sum_1 = _volume1574;
        SW_Aggregate_TD_1425_payload p{_mkt_share1576_sum_0, _mkt_share1576_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._mkt_share1576_sum_0 + _mkt_share1576_sum_0;
            p._mkt_share1576_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._mkt_share1576_sum_1 + _mkt_share1576_sum_1;
            p._mkt_share1576_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_1425_output.setInt32(r, 0, (it.first));
        int64_t _mkt_share1576 = ((it.second)._mkt_share1576_sum_0 / (it.second)._mkt_share1576_sum_1);
        tbl_Aggregate_TD_1425_output.setInt64(r, 1, _mkt_share1576);
        ++r;
    }
    tbl_Aggregate_TD_1425_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1425_output #Row: " << tbl_Aggregate_TD_1425_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0340(Table &tbl_Aggregate_TD_1425_output, Table &tbl_Sort_TD_0340_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(o_year#1573 ASC NULLS FIRST)
    // Input: ListBuffer(o_year#1573, mkt_share#1576)
    // Output: ListBuffer(o_year#1573, mkt_share#1576)
    struct SW_Sort_TD_0340Row {
        int32_t _o_year1573;
        int64_t _mkt_share1576;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0340Row& a, const SW_Sort_TD_0340Row& b) const { return 
 (a._o_year1573 < b._o_year1573); 
}
    }SW_Sort_TD_0340_order; 

    int nrow1 = tbl_Aggregate_TD_1425_output.getNumRow();
    std::vector<SW_Sort_TD_0340Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_year1573 = tbl_Aggregate_TD_1425_output.getInt32(i, 0);
        int64_t _mkt_share1576 = tbl_Aggregate_TD_1425_output.getInt64(i, 1);
        SW_Sort_TD_0340Row t = {_o_year1573,_mkt_share1576};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0340_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0340_output.setInt32(r, 0, it._o_year1573);
        tbl_Sort_TD_0340_output.setInt64(r, 1, it._mkt_share1576);
        if (r < 10) {
            std::cout << it._o_year1573 << " " << it._mkt_share1576 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0340_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0340_output #Row: " << tbl_Sort_TD_0340_output.getNumRow() << std::endl;
}

