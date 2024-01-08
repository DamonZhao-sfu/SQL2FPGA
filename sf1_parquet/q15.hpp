#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7744(Table &tbl_SerializeFromObject_TD_813_input, Table &tbl_Filter_TD_7744_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(l_shipdate#15) AND ((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19960101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19960401))))
    // Input: ListBuffer(l_suppkey#2L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    // Output: ListBuffer(l_suppkey#2L, l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_813_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_813_input.getInt32(i, 3);
        if ((1) && ((_l_shipdate15 >= 19960101) && (_l_shipdate15 < 19960401))) {
            int32_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_813_input.getInt32(i, 0);
            tbl_Filter_TD_7744_output.setInt32(r, 0, _l_suppkey2L_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_813_input.getInt32(i, 1);
            tbl_Filter_TD_7744_output.setInt32(r, 1, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_813_input.getInt32(i, 2);
            tbl_Filter_TD_7744_output.setInt32(r, 2, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_7744_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7744_output #Row: " << tbl_Filter_TD_7744_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5151_consolidate(Table &tbl_Aggregate_TD_5151_output_preprocess, Table &tbl_Aggregate_TD_5151_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_5151_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _total_revenue1509L = tbl_Aggregate_TD_5151_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_5151_output.setInt64(r, 0, _total_revenue1509L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_5151_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_5151_output #Row: " << tbl_Aggregate_TD_5151_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_4589(Table &tbl_Aggregate_TD_5151_output, Table &tbl_Aggregate_TD_4589_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(total_revenue#1509L) AS max(total_revenue)#1511L)
    // Input: ListBuffer(total_revenue#1509L)
    // Output: ListBuffer(max(total_revenue)#1511L)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_5151_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _total_revenue1509L = tbl_Aggregate_TD_5151_output.getInt64(i, 0);
        int64_t _maxtotal_revenue1511L_max_0 = _total_revenue1509L;
        max_0 = max_0 < _maxtotal_revenue1511L_max_0 ? _maxtotal_revenue1511L_max_0 : max_0;
    }
    int r = 0;
    int64_t _maxtotal_revenue1511L = max_0;
    tbl_Aggregate_TD_4589_output.setInt64(r++, 0, _maxtotal_revenue1511L);
    tbl_Aggregate_TD_4589_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4589_output #Row: " << tbl_Aggregate_TD_4589_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_4759_consolidate(Table &tbl_Aggregate_TD_4759_output_preprocess, Table &tbl_Aggregate_TD_4759_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_4759_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _l_suppkey66 = tbl_Aggregate_TD_4759_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_4759_output.setInt32(r, 0, _l_suppkey66);
        int64_t _l_discount1507L = tbl_Aggregate_TD_4759_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_4759_output.setInt64(r, 1, _l_discount1507L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_4759_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_4759_output #Row: " << tbl_Aggregate_TD_4759_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2452(Table &tbl_Aggregate_TD_4759_output, Table &tbl_Aggregate_TD_4589_output, Table &tbl_Filter_TD_2452_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sum((l_extendedprice * (100 - l_discount)))#1507L) AND (sum((l_extendedprice * (100 - l_discount)))#1507L = scalar-subquery#1505 [])))
    // Input: ListBuffer(l_suppkey#66, sum((l_extendedprice * (100 - l_discount)))#1507L)
    // Output: ListBuffer(supplier_no#1508, total_revenue#1509L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_4759_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_discount1507L = tbl_Aggregate_TD_4759_output.getInt64(i, 1);
        if ((1) && (_l_discount1507L == tbl_Aggregate_TD_4589_output.getInt64(0, 0))) {
            int32_t _supplier_no1508_t = tbl_Aggregate_TD_4759_output.getInt32(i, 0);
            tbl_Filter_TD_2452_output.setInt32(r, 0, _supplier_no1508_t);
            int64_t _total_revenue1509L_t = tbl_Aggregate_TD_4759_output.getInt64(i, 1);
            tbl_Filter_TD_2452_output.setInt64(r, 1, _total_revenue1509L_t);
            r++;
        }
    }
    tbl_Filter_TD_2452_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2452_output #Row: " << tbl_Filter_TD_2452_output.getNumRow() << std::endl;
}


void SW_Sort_TD_0587(Table &tbl_JOIN_INNER_TD_1963_output, Table &tbl_SerializeFromObject_TD_4374_input, Table &tbl_Sort_TD_0587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Sort
    // Operation: ListBuffer(s_suppkey#498 ASC NULLS FIRST)
    // Input: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_phone#488, total_revenue#1509L)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_phone#488, total_revenue#1509L)
    struct SW_Sort_TD_0587Row {
        int32_t _s_suppkey498;
        std::string _s_name485;
        std::string _s_address486;
        std::string _s_phone488;
        int64_t _total_revenue1509L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0587Row& a, const SW_Sort_TD_0587Row& b) const { return 
 (a._s_suppkey498 < b._s_suppkey498); 
}
    }SW_Sort_TD_0587_order; 

    int nrow1 = tbl_JOIN_INNER_TD_1963_output.getNumRow();
    std::vector<SW_Sort_TD_0587Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey498 = tbl_JOIN_INNER_TD_1963_output.getInt32(i, 0);
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_4374_input.getcharN<char, TPCH_READ_S_NAME_LEN + 1>(tbl_JOIN_INNER_TD_1963_output.getInt32(i, 1), 1);
        std::array<char, TPCH_READ_S_ADDR_MAX + 1> _s_address486 = tbl_SerializeFromObject_TD_4374_input.getcharN<char, TPCH_READ_S_ADDR_MAX + 1>(tbl_JOIN_INNER_TD_1963_output.getInt32(i, 2), 2);
        std::array<char, TPCH_READ_PHONE_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_4374_input.getcharN<char, TPCH_READ_PHONE_LEN + 1>(tbl_JOIN_INNER_TD_1963_output.getInt32(i, 3), 3);
        int64_t _total_revenue1509L = tbl_JOIN_INNER_TD_1963_output.getInt64(i, 4);
        SW_Sort_TD_0587Row t = {_s_suppkey498,std::string(_s_name485.data()),std::string(_s_address486.data()),std::string(_s_phone488.data()),_total_revenue1509L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0587_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0587_output.setInt32(r, 0, it._s_suppkey498);
        std::array<char, TPCH_READ_S_NAME_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0587_output.setcharN<char, TPCH_READ_S_NAME_LEN +1>(r, 1, _s_name485);
        std::array<char, TPCH_READ_S_ADDR_MAX + 1> _s_address486{};
        memcpy(_s_address486.data(), (it._s_address486).data(), (it._s_address486).length());
        tbl_Sort_TD_0587_output.setcharN<char, TPCH_READ_S_ADDR_MAX +1>(r, 2, _s_address486);
        std::array<char, TPCH_READ_PHONE_LEN + 1> _s_phone488{};
        memcpy(_s_phone488.data(), (it._s_phone488).data(), (it._s_phone488).length());
        tbl_Sort_TD_0587_output.setcharN<char, TPCH_READ_PHONE_LEN +1>(r, 3, _s_phone488);
        tbl_Sort_TD_0587_output.setInt64(r, 4, it._total_revenue1509L);
        if (r < 10) {
            std::cout << it._s_suppkey498 << " " << (it._s_name485).data() << " " << (it._s_address486).data() << " " << (it._s_phone488).data() << " " << it._total_revenue1509L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0587_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0587_output #Row: " << tbl_Sort_TD_0587_output.getNumRow() << std::endl;
}

