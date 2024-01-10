#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_787(Table &tbl_SerializeFromObject_TD_8950_input, Table &tbl_Filter_TD_787_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(l_shipdate#15) AND ((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19960101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19960401))))
    // Input: ListBuffer(l_suppkey#2L, l_extendedprice#5, l_discount#6, l_shipdate#15)
    // Output: ListBuffer(l_suppkey#2L, l_extendedprice#5, l_discount#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8950_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_8950_input.getInt32(i, 3);
        if ((1) && ((_l_shipdate15 >= 19960101) && (_l_shipdate15 < 19960401))) {
            int32_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_8950_input.getInt32(i, 0);
            tbl_Filter_TD_787_output.setInt32(r, 0, _l_suppkey2L_t);
            int32_t _l_extendedprice5_t = tbl_SerializeFromObject_TD_8950_input.getInt32(i, 1);
            tbl_Filter_TD_787_output.setInt32(r, 1, _l_extendedprice5_t);
            int32_t _l_discount6_t = tbl_SerializeFromObject_TD_8950_input.getInt32(i, 2);
            tbl_Filter_TD_787_output.setInt32(r, 2, _l_discount6_t);
            r++;
        }
    }
    tbl_Filter_TD_787_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_787_output #Row: " << tbl_Filter_TD_787_output.getNumRow() << std::endl;
}

void SW_Project_TD_6839(Table &tbl_Filter_TD_787_output, Table &tbl_Project_TD_6839_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_suppkey#2L as int) AS l_suppkey#66, cast(CheckOverflow((promote_precision(l_extendedprice#5) * 100.00), DecimalType(16,2), true) as int) AS l_extendedprice#117, cast(CheckOverflow((promote_precision(l_discount#6) * 100.00), DecimalType(16,2), true) as int) AS l_discount#134)
    // Input: ListBuffer(l_suppkey#2L, l_extendedprice#5, l_discount#6)
    // Output: ListBuffer(l_suppkey#66, l_extendedprice#117, l_discount#134)
    int nrow1 = tbl_Filter_TD_787_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_suppkey2L = tbl_Filter_TD_787_output.getInt32(i, 0);
        int32_t _l_extendedprice5 = tbl_Filter_TD_787_output.getInt32(i, 1);
        int32_t _l_discount6 = tbl_Filter_TD_787_output.getInt32(i, 2);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_6839_output.setInt32(i, 0, _l_suppkey66);
        int32_t _l_extendedprice117 = (_l_extendedprice5 * 100.00);
        tbl_Project_TD_6839_output.setInt32(i, 1, _l_extendedprice117);
        int32_t _l_discount134 = (_l_discount6 * 100.00);
        tbl_Project_TD_6839_output.setInt32(i, 2, _l_discount134);
    }
    tbl_Project_TD_6839_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6839_output #Row: " << tbl_Project_TD_6839_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5435_consolidate(Table &tbl_Aggregate_TD_5435_output_preprocess, Table &tbl_Aggregate_TD_5435_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_5435_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _total_revenue1990L = tbl_Aggregate_TD_5435_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_5435_output.setInt64(r, 0, _total_revenue1990L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_5435_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_5435_output #Row: " << tbl_Aggregate_TD_5435_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_4665(Table &tbl_Aggregate_TD_5435_output, Table &tbl_Aggregate_TD_4665_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(total_revenue#1990L) AS max(total_revenue)#1992L)
    // Input: ListBuffer(total_revenue#1990L)
    // Output: ListBuffer(max(total_revenue)#1992L)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_5435_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _total_revenue1990L = tbl_Aggregate_TD_5435_output.getInt64(i, 0);
        int64_t _maxtotal_revenue1992L_max_0 = _total_revenue1990L;
        max_0 = max_0 < _maxtotal_revenue1992L_max_0 ? _maxtotal_revenue1992L_max_0 : max_0;
    }
    int r = 0;
    int64_t _maxtotal_revenue1992L = max_0;
    tbl_Aggregate_TD_4665_output.setInt64(r++, 0, _maxtotal_revenue1992L);
    tbl_Aggregate_TD_4665_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4665_output #Row: " << tbl_Aggregate_TD_4665_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_4886_consolidate(Table &tbl_Aggregate_TD_4886_output_preprocess, Table &tbl_Aggregate_TD_4886_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_4886_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _l_suppkey66 = tbl_Aggregate_TD_4886_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_4886_output.setInt32(r, 0, _l_suppkey66);
        int64_t _l_discount1988L = tbl_Aggregate_TD_4886_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_4886_output.setInt64(r, 1, _l_discount1988L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_4886_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_4886_output #Row: " << tbl_Aggregate_TD_4886_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2810(Table &tbl_Aggregate_TD_4886_output, Table &tbl_Aggregate_TD_4665_output, Table &tbl_Filter_TD_2810_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sum((l_extendedprice * (100 - l_discount)))#1988L) AND (sum((l_extendedprice * (100 - l_discount)))#1988L = scalar-subquery#1986 [])))
    // Input: ListBuffer(l_suppkey#66, sum((l_extendedprice * (100 - l_discount)))#1988L)
    // Output: ListBuffer(supplier_no#1989, total_revenue#1990L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_4886_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_discount1988L = tbl_Aggregate_TD_4886_output.getInt64(i, 1);
        if ((1) && (_l_discount1988L == tbl_Aggregate_TD_4665_output.getInt64(0, 0))) {
            int32_t _supplier_no1989_t = tbl_Aggregate_TD_4886_output.getInt32(i, 0);
            tbl_Filter_TD_2810_output.setInt32(r, 0, _supplier_no1989_t);
            int64_t _total_revenue1990L_t = tbl_Aggregate_TD_4886_output.getInt64(i, 1);
            tbl_Filter_TD_2810_output.setInt64(r, 1, _total_revenue1990L_t);
            r++;
        }
    }
    tbl_Filter_TD_2810_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2810_output #Row: " << tbl_Filter_TD_2810_output.getNumRow() << std::endl;
}

void SW_Project_TD_2281(Table &tbl_SerializeFromObject_TD_4759_input_stringRowIDSubstitute, Table &tbl_Project_TD_2281_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498)
    // Input: ListBuffer(s_suppkey#484L, s_name#485, s_address#486, s_phone#488)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_phone#488)
    int nrow1 = tbl_SerializeFromObject_TD_4759_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey484L = tbl_SerializeFromObject_TD_4759_input_stringRowIDSubstitute.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_4759_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_4759_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_4759_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 3);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_2281_output.setInt32(i, 0, _s_suppkey498);
        tbl_Project_TD_2281_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _s_name485);
        tbl_Project_TD_2281_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2, _s_address486);
        tbl_Project_TD_2281_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 3, _s_phone488);
    }
    tbl_Project_TD_2281_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2281_output #Row: " << tbl_Project_TD_2281_output.getNumRow() << std::endl;
}


void SW_Sort_TD_0426(Table &tbl_JOIN_INNER_TD_1164_output, Table &tbl_SerializeFromObject_TD_4759_input, Table &tbl_Sort_TD_0426_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Sort
    // Operation: ListBuffer(s_suppkey#498 ASC NULLS FIRST)
    // Input: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_phone#488, total_revenue#1990L)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_address#486, s_phone#488, total_revenue#1990L)
    struct SW_Sort_TD_0426Row {
        int32_t _s_suppkey498;
        std::string _s_name485;
        std::string _s_address486;
        std::string _s_phone488;
        int64_t _total_revenue1990L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0426Row& a, const SW_Sort_TD_0426Row& b) const { return 
 (a._s_suppkey498 < b._s_suppkey498); 
}
    }SW_Sort_TD_0426_order; 

    int nrow1 = tbl_JOIN_INNER_TD_1164_output.getNumRow();
    std::vector<SW_Sort_TD_0426Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey498 = tbl_JOIN_INNER_TD_1164_output.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_4759_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1164_output.getInt32(i, 1), 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_4759_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1164_output.getInt32(i, 2), 3);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488 = tbl_SerializeFromObject_TD_4759_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1164_output.getInt32(i, 3), 3);
        int64_t _total_revenue1990L = tbl_JOIN_INNER_TD_1164_output.getInt64(i, 4);
        SW_Sort_TD_0426Row t = {_s_suppkey498,std::string(_s_name485.data()),std::string(_s_address486.data()),std::string(_s_phone488.data()),_total_revenue1990L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0426_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0426_output.setInt32(r, 0, it._s_suppkey498);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0426_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 1, _s_name485);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486{};
        memcpy(_s_address486.data(), (it._s_address486).data(), (it._s_address486).length());
        tbl_Sort_TD_0426_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 2, _s_address486);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_phone488{};
        memcpy(_s_phone488.data(), (it._s_phone488).data(), (it._s_phone488).length());
        tbl_Sort_TD_0426_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 3, _s_phone488);
        tbl_Sort_TD_0426_output.setInt64(r, 4, it._total_revenue1990L);
        if (r < 10) {
            std::cout << it._s_suppkey498 << " " << (it._s_name485).data() << " " << (it._s_address486).data() << " " << (it._s_phone488).data() << " " << it._total_revenue1990L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0426_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0426_output #Row: " << tbl_Sort_TD_0426_output.getNumRow() << std::endl;
}

