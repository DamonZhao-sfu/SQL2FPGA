#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7744(Table &tbl_SerializeFromObject_TD_817_input, Table &tbl_Filter_TD_7744_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(l_shipdate#15) AND ((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19960101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19960401))))
    // Input: ListBuffer(l_suppkey#2L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    // Output: ListBuffer(l_suppkey#2L, l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_817_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_817_input.getInt32(i, 3);
        if ((1) && ((_l_shipdate15 >= 19960101) && (_l_shipdate15 < 19960401))) {
            int64_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_817_input.getInt64(i, 0);
            tbl_Filter_TD_7744_output.setInt64(r, 0, _l_suppkey2L_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_817_input.getInt32(i, 1);
            tbl_Filter_TD_7744_output.setInt32(r, 1, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_817_input.getInt32(i, 2);
            tbl_Filter_TD_7744_output.setInt32(r, 2, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_7744_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7744_output #Row: " << tbl_Filter_TD_7744_output.getNumRow() << std::endl;
}

void SW_Project_TD_6103(Table &tbl_Filter_TD_7744_output, Table &tbl_Project_TD_6103_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_suppkey#2L as int) AS l_suppkey#66, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_suppkey#2L, l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_suppkey#66, l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_Filter_TD_7744_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_suppkey2L = tbl_Filter_TD_7744_output.getInt64(i, 0);
        int32_t _l_extendedprice5 = tbl_Filter_TD_7744_output.getInt32(i, 1);
        int32_t _l_discount6 = tbl_Filter_TD_7744_output.getInt32(i, 2);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_6103_output.setInt32(i, 0, _l_suppkey66);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_6103_output.setInt32(i, 1, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_6103_output.setInt32(i, 2, _l_discount134);
    }
    tbl_Project_TD_6103_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6103_output #Row: " << tbl_Project_TD_6103_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_594_consolidate(Table &tbl_Aggregate_TD_594_output_preprocess, Table &tbl_Aggregate_TD_594_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_594_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _total_revenue1973L = tbl_Aggregate_TD_594_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_594_output.setInt64(r, 0, _total_revenue1973L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_594_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_594_output #Row: " << tbl_Aggregate_TD_594_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_4348(Table &tbl_Aggregate_TD_594_output, Table &tbl_Aggregate_TD_4348_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(total_revenue#1973L) AS max(total_revenue)#1975L)
    // Input: ListBuffer(total_revenue#1973L)
    // Output: ListBuffer(max(total_revenue)#1975L)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_594_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _total_revenue1973L = tbl_Aggregate_TD_594_output.getInt64(i, 0);
        int64_t _maxtotal_revenue1975L_max_0 = _total_revenue1973L;
        max_0 = max_0 < _maxtotal_revenue1975L_max_0 ? _maxtotal_revenue1975L_max_0 : max_0;
    }
    int r = 0;
    int64_t _maxtotal_revenue1975L = max_0;
    tbl_Aggregate_TD_4348_output.setInt64(r++, 0, _maxtotal_revenue1975L);
    tbl_Aggregate_TD_4348_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4348_output #Row: " << tbl_Aggregate_TD_4348_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_4742_consolidate(Table &tbl_Aggregate_TD_4742_output_preprocess, Table &tbl_Aggregate_TD_4742_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_4742_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _l_suppkey66 = tbl_Aggregate_TD_4742_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_4742_output.setInt32(r, 0, _l_suppkey66);
        int64_t _l_discount1971L = tbl_Aggregate_TD_4742_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_4742_output.setInt64(r, 1, _l_discount1971L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_4742_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_4742_output #Row: " << tbl_Aggregate_TD_4742_output.getNumRow() << std::endl;
}

void SW_Filter_TD_251(Table &tbl_Aggregate_TD_4742_output, Table &tbl_Aggregate_TD_4348_output, Table &tbl_Filter_TD_251_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sum((l_extendedprice * (100 - l_discount)))#1971L) AND (sum((l_extendedprice * (100 - l_discount)))#1971L = scalar-subquery#1969 [])))
    // Input: ListBuffer(l_suppkey#66, sum((l_extendedprice * (100 - l_discount)))#1971L)
    // Output: ListBuffer(supplier_no#1972, total_revenue#1973L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_4742_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_discount1971L = tbl_Aggregate_TD_4742_output.getInt64(i, 1);
        if ((1) && (_l_discount1971L == tbl_Aggregate_TD_4348_output.getInt64(0, 0))) {
            int32_t _supplier_no1972_t = tbl_Aggregate_TD_4742_output.getInt32(i, 0);
            tbl_Filter_TD_251_output.setInt32(r, 0, _supplier_no1972_t);
            int64_t _total_revenue1973L_t = tbl_Aggregate_TD_4742_output.getInt64(i, 1);
            tbl_Filter_TD_251_output.setInt64(r, 1, _total_revenue1973L_t);
            r++;
        }
    }
    tbl_Filter_TD_251_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_251_output #Row: " << tbl_Filter_TD_251_output.getNumRow() << std::endl;
}

void SW_Project_TD_218(Table &tbl_SerializeFromObject_TD_4296_input_stringRowIDSubstitute, Table &tbl_Project_TD_218_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498)
    // Input: ListBuffer(s_suppkey#484L, s_name#485, s_address#486, s_phone#488)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_phone#488)
    int nrow1 = tbl_SerializeFromObject_TD_4296_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _s_suppkey484L = tbl_SerializeFromObject_TD_4296_input_stringRowIDSubstitute.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_4296_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_4296_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_4296_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 3);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_218_output.setInt32(i, 0, _s_suppkey498);
        tbl_Project_TD_218_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _s_name485);
        tbl_Project_TD_218_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2, _s_address486);
        tbl_Project_TD_218_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 3, _s_phone488);
    }
    tbl_Project_TD_218_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_218_output #Row: " << tbl_Project_TD_218_output.getNumRow() << std::endl;
}


void SW_Sort_TD_0244(Table &tbl_JOIN_INNER_TD_1825_output, Table &tbl_SerializeFromObject_TD_4296_input, Table &tbl_Sort_TD_0244_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Sort
    // Operation: ListBuffer(s_suppkey#498 ASC NULLS FIRST)
    // Input: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_phone#488, total_revenue#1973L)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_phone#488, total_revenue#1973L)
    struct SW_Sort_TD_0244Row {
        int32_t _s_suppkey498;
        std::string _s_name485;
        std::string _s_address486;
        std::string _s_phone488;
        int64_t _total_revenue1973L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0244Row& a, const SW_Sort_TD_0244Row& b) const { return 
 (a._s_suppkey498 < b._s_suppkey498); 
}
    }SW_Sort_TD_0244_order; 

    int nrow1 = tbl_JOIN_INNER_TD_1825_output.getNumRow();
    std::vector<SW_Sort_TD_0244Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey498 = tbl_JOIN_INNER_TD_1825_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_4296_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1825_output.getInt32(i, 1), 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_4296_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1825_output.getInt32(i, 2), 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_4296_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1825_output.getInt32(i, 3), 3);
        int64_t _total_revenue1973L = tbl_JOIN_INNER_TD_1825_output.getInt64(i, 4);
        SW_Sort_TD_0244Row t = {_s_suppkey498,std::string(_s_name485.data()),std::string(_s_address486.data()),std::string(_s_phone488.data()),_total_revenue1973L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0244_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0244_output.setInt32(r, 0, it._s_suppkey498);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0244_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 1, _s_name485);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486{};
        memcpy(_s_address486.data(), (it._s_address486).data(), (it._s_address486).length());
        tbl_Sort_TD_0244_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 2, _s_address486);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488{};
        memcpy(_s_phone488.data(), (it._s_phone488).data(), (it._s_phone488).length());
        tbl_Sort_TD_0244_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 3, _s_phone488);
        tbl_Sort_TD_0244_output.setInt64(r, 4, it._total_revenue1973L);
        if (r < 10) {
            std::cout << it._s_suppkey498 << " " << (it._s_name485).data() << " " << (it._s_address486).data() << " " << (it._s_phone488).data() << " " << it._total_revenue1973L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0244_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0244_output #Row: " << tbl_Sort_TD_0244_output.getNumRow() << std::endl;
}

