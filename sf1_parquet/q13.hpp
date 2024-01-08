#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_5288(Table &tbl_SerializeFromObject_TD_6729_input, Table &tbl_Filter_TD_5288_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_comment#331) AND NOT o_comment#331 LIKE %unusual%deposits%) AND isnotnull(cast(o_custkey#325L as int))))
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L, o_comment#331)
    // Output: ListBuffer(o_orderkey#324L, o_custkey#325L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6729_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_comment331 = tbl_SerializeFromObject_TD_6729_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 2);
        int64_t _o_custkey325L = tbl_SerializeFromObject_TD_6729_input.getInt64(i, 1);
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
            int64_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_6729_input.getInt64(i, 0);
            tbl_Filter_TD_5288_output.setInt64(r, 0, _o_orderkey324L_t);
            int64_t _o_custkey325L_t = tbl_SerializeFromObject_TD_6729_input.getInt64(i, 1);
            tbl_Filter_TD_5288_output.setInt64(r, 1, _o_custkey325L_t);
            r++;
        }
    }
    tbl_Filter_TD_5288_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5288_output #Row: " << tbl_Filter_TD_5288_output.getNumRow() << std::endl;
}

void SW_Project_TD_4217(Table &tbl_Filter_TD_5288_output, Table &tbl_Project_TD_4217_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342, cast(o_custkey#325L as int) AS o_custkey#352)
    // Input: ListBuffer(o_orderkey#324L, o_custkey#325L)
    // Output: ListBuffer(o_orderkey#342, o_custkey#352)
    int nrow1 = tbl_Filter_TD_5288_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _o_orderkey324L = tbl_Filter_TD_5288_output.getInt64(i, 0);
        int64_t _o_custkey325L = tbl_Filter_TD_5288_output.getInt64(i, 1);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_4217_output.setInt32(i, 0, _o_orderkey342);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_4217_output.setInt32(i, 1, _o_custkey352);
    }
    tbl_Project_TD_4217_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4217_output #Row: " << tbl_Project_TD_4217_output.getNumRow() << std::endl;
}

void SW_Project_TD_4342(Table &tbl_SerializeFromObject_TD_5330_input, Table &tbl_Project_TD_4342_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(c_custkey#253L as int) AS c_custkey#269)
    // Input: ListBuffer(c_custkey#253L)
    // Output: ListBuffer(c_custkey#269)
    int nrow1 = tbl_SerializeFromObject_TD_5330_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _c_custkey253L = tbl_SerializeFromObject_TD_5330_input.getInt64(i, 0);
        int32_t _c_custkey269 = _c_custkey253L;
        tbl_Project_TD_4342_output.setInt32(i, 0, _c_custkey269);
    }
    tbl_Project_TD_4342_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4342_output #Row: " << tbl_Project_TD_4342_output.getNumRow() << std::endl;
}


void SW_JOIN_LEFTANTI_TD_3981_concatenate(Table &tbl_JOIN_LEFTANTI_TD_3981_output_preprocess, Table &tbl_JOIN_INNER_TD_0719_output) {
    int start_idx = tbl_JOIN_LEFTANTI_TD_3981_output_preprocess.getNumRow();
    int nrow = tbl_JOIN_INNER_TD_0719_output.getNumRow();
    int i = 0;
    for (int r(start_idx); r<start_idx+nrow; ++r) {
        int32_t _c_custkey269 = tbl_JOIN_INNER_TD_0719_output.getInt32(i, 0);
        tbl_JOIN_LEFTANTI_TD_3981_output_preprocess.setInt32(r, 0, _c_custkey269);
        int32_t _o_orderkey342 = tbl_JOIN_INNER_TD_0719_output.getInt32(i, 1);
        tbl_JOIN_LEFTANTI_TD_3981_output_preprocess.setInt32(r, 1, _o_orderkey342);
        i++;
    }
    tbl_JOIN_LEFTANTI_TD_3981_output_preprocess.setNumRow(start_idx + nrow);
    std::cout << "tbl_JOIN_LEFTANTI_TD_3981_output_preprocess #Row: " << tbl_JOIN_LEFTANTI_TD_3981_output_preprocess.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2283_consolidate(Table &tbl_Aggregate_TD_2283_output_preprocess, Table &tbl_Aggregate_TD_2283_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_2283_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _c_count1895L = tbl_Aggregate_TD_2283_output_preprocess.getInt32(r, 0);
        tbl_Aggregate_TD_2283_output.setInt32(r, 0, _c_count1895L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_2283_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_2283_output #Row: " << tbl_Aggregate_TD_2283_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1307_consolidate(Table &tbl_Aggregate_TD_1307_output_preprocess, Table &tbl_Aggregate_TD_1307_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_1307_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _c_count1895L = tbl_Aggregate_TD_1307_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_1307_output.setInt32(r, 0, _c_count1895L);
        int32_t _custdist1890L = tbl_Aggregate_TD_1307_output_preprocess.getInt32(r, 0);
        tbl_Aggregate_TD_1307_output.setInt32(r, 1, _custdist1890L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_1307_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_1307_output #Row: " << tbl_Aggregate_TD_1307_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0357(Table &tbl_Aggregate_TD_1307_output, Table &tbl_Sort_TD_0357_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(custdist#1890L DESC NULLS LAST, c_count#1895L DESC NULLS LAST)
    // Input: ListBuffer(c_count#1895L, custdist#1890L)
    // Output: ListBuffer(c_count#1895L, custdist#1890L)
    struct SW_Sort_TD_0357Row {
        int64_t _c_count1895L;
        int64_t _custdist1890L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0357Row& a, const SW_Sort_TD_0357Row& b) const { return 
 (a._custdist1890L > b._custdist1890L) || 
 ((a._custdist1890L == b._custdist1890L) && (a._c_count1895L > b._c_count1895L)); 
}
    }SW_Sort_TD_0357_order; 

    int nrow1 = tbl_Aggregate_TD_1307_output.getNumRow();
    std::vector<SW_Sort_TD_0357Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int64_t _c_count1895L = tbl_Aggregate_TD_1307_output.getInt64(i, 0);
        int64_t _custdist1890L = tbl_Aggregate_TD_1307_output.getInt64(i, 1);
        SW_Sort_TD_0357Row t = {_c_count1895L,_custdist1890L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0357_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0357_output.setInt64(r, 0, it._c_count1895L);
        tbl_Sort_TD_0357_output.setInt64(r, 1, it._custdist1890L);
        if (r < 10) {
            std::cout << it._c_count1895L << " " << it._custdist1890L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0357_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0357_output #Row: " << tbl_Sort_TD_0357_output.getNumRow() << std::endl;
}

