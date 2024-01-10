#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9199(Table &tbl_SerializeFromObject_TD_10345_input, Table &tbl_Filter_TD_9199_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_shipdate#15) AND ((cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) >= 19950101) AND (cast(regexp_replace(cast(l_shipdate#15 as string), -, , 1) as int) < 19960101))) AND (isnotnull(cast(l_partkey#1L as int)) AND isnotnull(cast(l_suppkey#2L as int)))))
    // Input: ListBuffer(l_partkey#1L, l_suppkey#2L, l_quantity#4, l_shipdate#15)
    // Output: ListBuffer(l_partkey#1L, l_suppkey#2L, l_quantity#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10345_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_shipdate15 = tbl_SerializeFromObject_TD_10345_input.getInt32(i, 3);
        int32_t _l_partkey1L = tbl_SerializeFromObject_TD_10345_input.getInt32(i, 0);
        int64_t _l_suppkey2L = tbl_SerializeFromObject_TD_10345_input.getInt64(i, 1);
        if (((1) && ((_l_shipdate15 >= 19950101) && (_l_shipdate15 < 19960101))) && ((1) && (1))) {
            int32_t _l_partkey1L_t = tbl_SerializeFromObject_TD_10345_input.getInt32(i, 0);
            tbl_Filter_TD_9199_output.setInt32(r, 0, _l_partkey1L_t);
            int64_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_10345_input.getInt64(i, 1);
            tbl_Filter_TD_9199_output.setInt64(r, 1, _l_suppkey2L_t);
            int32_t _l_quantity4_t = tbl_SerializeFromObject_TD_10345_input.getInt32(i, 2);
            tbl_Filter_TD_9199_output.setInt32(r, 2, _l_quantity4_t);
            r++;
        }
    }
    tbl_Filter_TD_9199_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9199_output #Row: " << tbl_Filter_TD_9199_output.getNumRow() << std::endl;
}

void SW_Filter_TD_863(Table &tbl_SerializeFromObject_TD_9596_input, Table &tbl_Filter_TD_863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(p_name#403) AND StartsWith(p_name#403, blush)))
    // Input: ListBuffer(p_partkey#402L, p_name#403)
    // Output: ListBuffer(p_partkey#402L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9596_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _p_name403 = tbl_SerializeFromObject_TD_9596_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        if ((1) && (std::string(_p_name403.data()).find("blush")==0)) {
            int32_t _p_partkey402L_t = tbl_SerializeFromObject_TD_9596_input.getInt32(i, 0);
            tbl_Filter_TD_863_output.setInt32(r, 0, _p_partkey402L_t);
            r++;
        }
    }
    tbl_Filter_TD_863_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_863_output #Row: " << tbl_Filter_TD_863_output.getNumRow() << std::endl;
}

void SW_Project_TD_828(Table &tbl_Filter_TD_9199_output, Table &tbl_Project_TD_828_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_partkey#1L as int) AS l_partkey#49, cast(l_suppkey#2L as int) AS l_suppkey#66, cast(CheckOverflow((promote_precision(l_quantity#4) * 100.00), DecimalType(16,2), true) as int) AS l_quantity#100)
    // Input: ListBuffer(l_partkey#1L, l_suppkey#2L, l_quantity#4)
    // Output: ListBuffer(l_partkey#49, l_suppkey#66, l_quantity#100)
    int nrow1 = tbl_Filter_TD_9199_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_partkey1L = tbl_Filter_TD_9199_output.getInt32(i, 0);
        int32_t _l_suppkey2L = tbl_Filter_TD_9199_output.getInt32(i, 1);
        int32_t _l_quantity4 = tbl_Filter_TD_9199_output.getInt32(i, 2);
        int32_t _l_partkey49 = _l_partkey1L;
        tbl_Project_TD_828_output.setInt32(i, 0, _l_partkey49);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_828_output.setInt32(i, 1, _l_suppkey66);
        int32_t _l_quantity100 = (_l_quantity4 * 100.00);
        tbl_Project_TD_828_output.setInt32(i, 2, _l_quantity100);
    }
    tbl_Project_TD_828_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_828_output #Row: " << tbl_Project_TD_828_output.getNumRow() << std::endl;
}

void SW_Project_TD_7526(Table &tbl_Filter_TD_863_output, Table &tbl_Project_TD_7526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(p_partkey#402L as int) AS p_partkey#420)
    // Input: ListBuffer(p_partkey#402L)
    // Output: ListBuffer(p_partkey#420)
    int nrow1 = tbl_Filter_TD_863_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_partkey402L = tbl_Filter_TD_863_output.getInt32(i, 0);
        int32_t _p_partkey420 = _p_partkey402L;
        tbl_Project_TD_7526_output.setInt32(i, 0, _p_partkey420);
    }
    tbl_Project_TD_7526_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_7526_output #Row: " << tbl_Project_TD_7526_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_7176_consolidate(Table &tbl_Aggregate_TD_7176_output_preprocess, Table &tbl_Aggregate_TD_7176_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_7176_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _suml_quantity2368 = tbl_Aggregate_TD_7176_output_preprocess.getInt32(r, 0);
        tbl_Aggregate_TD_7176_output.setInt32(r, 0, _suml_quantity2368);
        int32_t _l_partkey49 = tbl_Aggregate_TD_7176_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_7176_output.setInt32(r, 1, _l_partkey49);
        int32_t _l_suppkey66 = tbl_Aggregate_TD_7176_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_7176_output.setInt32(r, 2, _l_suppkey66);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_7176_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_7176_output #Row: " << tbl_Aggregate_TD_7176_output.getNumRow() << std::endl;
}



void SW_Project_TD_4625(Table &tbl_JOIN_INNER_TD_511_output, Table &tbl_Project_TD_4625_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(ps_suppkey#451L as int) AS ps_suppkey#466)
    // Input: ListBuffer(ps_suppkey#451L)
    // Output: ListBuffer(ps_suppkey#466)
    int nrow1 = tbl_JOIN_INNER_TD_511_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ps_suppkey451L = tbl_JOIN_INNER_TD_511_output.getInt32(i, 0);
        int32_t _ps_suppkey466 = _ps_suppkey451L;
        tbl_Project_TD_4625_output.setInt32(i, 0, _ps_suppkey466);
    }
    tbl_Project_TD_4625_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4625_output #Row: " << tbl_Project_TD_4625_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3898(Table &tbl_SerializeFromObject_TD_4765_input, Table &tbl_Filter_TD_3898_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = INDONESIA)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4765_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_4765_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_4765_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "INDONESIA")) && (1)) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_4765_input.getInt32(i, 0);
            tbl_Filter_TD_3898_output.setInt32(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_3898_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3898_output #Row: " << tbl_Filter_TD_3898_output.getNumRow() << std::endl;
}


void SW_Project_TD_2162(Table &tbl_Filter_TD_3898_output, Table &tbl_Project_TD_2162_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L)
    // Output: ListBuffer(n_nationkey#304)
    int nrow1 = tbl_Filter_TD_3898_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_Filter_TD_3898_output.getInt32(i, 0);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_2162_output.setInt32(i, 0, _n_nationkey304);
    }
    tbl_Project_TD_2162_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2162_output #Row: " << tbl_Project_TD_2162_output.getNumRow() << std::endl;
}

void SW_Project_TD_2607(Table &tbl_JOIN_LEFTSEMI_TD_3114_output, Table &tbl_Project_TD_2607_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_name#485, s_address#486, s_nationkey#487L)
    // Output: ListBuffer(s_name#485, s_address#486, s_nationkey#506)
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_3114_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_JOIN_LEFTSEMI_TD_3114_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_JOIN_LEFTSEMI_TD_3114_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _s_nationkey487L = tbl_JOIN_LEFTSEMI_TD_3114_output.getInt32(i, 2);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_2607_output.setInt32(i, 2, _s_nationkey506);
        tbl_Project_TD_2607_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0, _s_name485);
        tbl_Project_TD_2607_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _s_address486);
    }
    tbl_Project_TD_2607_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2607_output #Row: " << tbl_Project_TD_2607_output.getNumRow() << std::endl;
}


void SW_Sort_TD_0950(Table &tbl_JOIN_INNER_TD_1993_output, Table &tbl_SerializeFromObject_TD_5360_input, Table &tbl_Sort_TD_0950_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Sort
    // Operation: ListBuffer(s_name#485 ASC NULLS FIRST)
    // Input: ListBuffer(s_name#485, s_address#486)
    // Output: ListBuffer(s_name#485, s_address#486)
    struct SW_Sort_TD_0950Row {
        std::string _s_name485;
        std::string _s_address486;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0950Row& a, const SW_Sort_TD_0950Row& b) const { return 
 (a._s_name485 < b._s_name485); 
}
    }SW_Sort_TD_0950_order; 

    int nrow1 = tbl_JOIN_INNER_TD_1993_output.getNumRow();
    std::vector<SW_Sort_TD_0950Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_5360_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1993_output.getInt32(i, 0), 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486 = tbl_SerializeFromObject_TD_5360_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_1993_output.getInt32(i, 1), 2);
        SW_Sort_TD_0950Row t = {std::string(_s_name485.data()),std::string(_s_address486.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0950_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0950_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _s_name485);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_address486{};
        memcpy(_s_address486.data(), (it._s_address486).data(), (it._s_address486).length());
        tbl_Sort_TD_0950_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 1, _s_address486);
        if (r < 10) {
            std::cout << (it._s_name485).data() << " " << (it._s_address486).data() << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0950_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0950_output #Row: " << tbl_Sort_TD_0950_output.getNumRow() << std::endl;
}

