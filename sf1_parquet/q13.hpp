#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5876(Table &tbl_SerializeFromObject_TD_6562_input, Table &tbl_Filter_TD_5876_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_comment#331) AND NOT o_comment#331 LIKE %unusual%deposits%) AND isnotnull(cast(o_custkey#325L as int))))
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_comment#331)
    // Output: ListBuffer(o_orderkey#324L, o_custkey#325L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6562_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_O_CMNT_MAX + 1> _o_comment331 = tbl_SerializeFromObject_TD_6562_input.getcharN<char, TPCH_READ_O_CMNT_MAX + 1>(i, 2);
        int32_t _o_custkey325L = tbl_SerializeFromObject_TD_6562_input.getInt32(i, 1);
        struct custom_func {
                bool strm_pattern(std::string sub1, std::string sub2, std::string s, int len = 7) {
                    std::string::size_type spe_f = s.find(sub1);
                    std::string::size_type c_f = 0;
                    while (spe_f != std::string::npos) {
                        c_f += (spe_f + len);
                        std::string sub_s = s.substr(c_f);
                        if (sub_s.find(sub2) != std::string::npos) return true;
                        spe_f = sub_s.find(sub1);
                    }
                    return false;
                }
        }custom_func_obj;
        if (((1) && !(custom_func_obj.strm_pattern("unusual", "deposits", _o_comment331.data()))) && (1)) {
            int32_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_6562_input.getInt32(i, 0);
            tbl_Filter_TD_5876_output.setInt32(r, 0, _o_orderkey324L_t);
            int32_t _o_custkey325L_t = tbl_SerializeFromObject_TD_6562_input.getInt32(i, 1);
            tbl_Filter_TD_5876_output.setInt32(r, 1, _o_custkey325L_t);
            r++;
        }
    }
    tbl_Filter_TD_5876_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5876_output #Row: " << tbl_Filter_TD_5876_output.getNumRow() << std::endl;
}



void SW_JOIN_LEFTANTI_TD_3760_concatenate(Table &tbl_JOIN_LEFTANTI_TD_3760_output_preprocess, Table &tbl_JOIN_INNER_TD_0925_output) {
    int start_idx = tbl_JOIN_LEFTANTI_TD_3760_output_preprocess.getNumRow();
    int nrow = tbl_JOIN_INNER_TD_0925_output.getNumRow();
    int i = 0;
    for (int r(start_idx); r<start_idx+nrow; ++r) {
        int32_t _c_custkey269 = tbl_JOIN_INNER_TD_0925_output.getInt32(i, 0);
        tbl_JOIN_LEFTANTI_TD_3760_output_preprocess.setInt32(r, 0, _c_custkey269);
        int32_t _o_orderkey342 = tbl_JOIN_INNER_TD_0925_output.getInt32(i, 1);
        tbl_JOIN_LEFTANTI_TD_3760_output_preprocess.setInt32(r, 1, _o_orderkey342);
        i++;
    }
    tbl_JOIN_LEFTANTI_TD_3760_output_preprocess.setNumRow(start_idx + nrow);
    std::cout << "tbl_JOIN_LEFTANTI_TD_3760_output_preprocess #Row: " << tbl_JOIN_LEFTANTI_TD_3760_output_preprocess.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2834_consolidate(Table &tbl_Aggregate_TD_2834_output_preprocess, Table &tbl_Aggregate_TD_2834_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_2834_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _c_count1431L = tbl_Aggregate_TD_2834_output_preprocess.getInt32(r, 0);
        tbl_Aggregate_TD_2834_output.setInt32(r, 0, _c_count1431L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_2834_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_2834_output #Row: " << tbl_Aggregate_TD_2834_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1766_consolidate(Table &tbl_Aggregate_TD_1766_output_preprocess, Table &tbl_Aggregate_TD_1766_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_1766_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _c_count1431L = tbl_Aggregate_TD_1766_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_1766_output.setInt32(r, 0, _c_count1431L);
        int32_t _custdist1426L = tbl_Aggregate_TD_1766_output_preprocess.getInt32(r, 0);
        tbl_Aggregate_TD_1766_output.setInt32(r, 1, _custdist1426L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_1766_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_1766_output #Row: " << tbl_Aggregate_TD_1766_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0908(Table &tbl_Aggregate_TD_1766_output, Table &tbl_Sort_TD_0908_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(custdist#1426L DESC NULLS LAST, c_count#1431L DESC NULLS LAST)
    // Input: ListBuffer(c_count#1431L, custdist#1426L)
    // Output: ListBuffer(c_count#1431L, custdist#1426L)
    struct SW_Sort_TD_0908Row {
        int64_t _c_count1431L;
        int64_t _custdist1426L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0908Row& a, const SW_Sort_TD_0908Row& b) const { return 
 (a._custdist1426L > b._custdist1426L) || 
 ((a._custdist1426L == b._custdist1426L) && (a._c_count1431L > b._c_count1431L)); 
}
    }SW_Sort_TD_0908_order; 

    int nrow1 = tbl_Aggregate_TD_1766_output.getNumRow();
    std::vector<SW_Sort_TD_0908Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int64_t _c_count1431L = tbl_Aggregate_TD_1766_output.getInt64(i, 0);
        int64_t _custdist1426L = tbl_Aggregate_TD_1766_output.getInt64(i, 1);
        SW_Sort_TD_0908Row t = {_c_count1431L,_custdist1426L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0908_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0908_output.setInt64(r, 0, it._c_count1431L);
        tbl_Sort_TD_0908_output.setInt64(r, 1, it._custdist1426L);
        if (r < 10) {
            std::cout << it._c_count1431L << " " << it._custdist1426L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0908_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0908_output #Row: " << tbl_Sort_TD_0908_output.getNumRow() << std::endl;
}

