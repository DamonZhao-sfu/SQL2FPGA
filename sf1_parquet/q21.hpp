#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9551(Table &tbl_SerializeFromObject_TD_10541_input, Table &tbl_Filter_TD_9551_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_receiptdate#2430) AND isnotnull(l_commitdate#2429)) AND (cast(regexp_replace(cast(l_receiptdate#2430 as string), -, , 1) as int) > cast(regexp_replace(cast(l_commitdate#2429 as string), -, , 1) as int))))
    // Input: ListBuffer(l_orderkey#2419L, l_suppkey#2421L, l_receiptdate#2430, l_commitdate#2429)
    // Output: ListBuffer(l_orderkey#2419L, l_suppkey#2421L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10541_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_receiptdate2430 = tbl_SerializeFromObject_TD_10541_input.getInt32(i, 2);
        int32_t _l_commitdate2429 = tbl_SerializeFromObject_TD_10541_input.getInt32(i, 3);
        if (((1) && (1)) && (_l_receiptdate2430 > _l_commitdate2429)) {
            int32_t _l_orderkey2419L_t = tbl_SerializeFromObject_TD_10541_input.getInt32(i, 0);
            tbl_Filter_TD_9551_output.setInt32(r, 0, _l_orderkey2419L_t);
            int32_t _l_suppkey2421L_t = tbl_SerializeFromObject_TD_10541_input.getInt32(i, 1);
            tbl_Filter_TD_9551_output.setInt32(r, 1, _l_suppkey2421L_t);
            r++;
        }
    }
    tbl_Filter_TD_9551_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9551_output #Row: " << tbl_Filter_TD_9551_output.getNumRow() << std::endl;
}

void SW_Project_TD_9549(Table &tbl_SerializeFromObject_TD_10960_input, Table &tbl_Project_TD_9549_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#2403L as int) AS l_orderkey#32#2502, cast(l_suppkey#2405L as int) AS l_suppkey#66#2504)
    // Input: ListBuffer(l_orderkey#2403L, l_suppkey#2405L)
    // Output: ListBuffer(l_orderkey#32#2502, l_suppkey#66#2504)
    int nrow1 = tbl_SerializeFromObject_TD_10960_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey2403L = tbl_SerializeFromObject_TD_10960_input.getInt32(i, 0);
        int32_t _l_suppkey2405L = tbl_SerializeFromObject_TD_10960_input.getInt32(i, 1);
        int32_t _l_orderkey322502 = _l_orderkey2403L;
        tbl_Project_TD_9549_output.setInt32(i, 0, _l_orderkey322502);
        int32_t _l_suppkey662504 = _l_suppkey2405L;
        tbl_Project_TD_9549_output.setInt32(i, 1, _l_suppkey662504);
    }
    tbl_Project_TD_9549_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_9549_output #Row: " << tbl_Project_TD_9549_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9101(Table &tbl_SerializeFromObject_TD_10388_input, Table &tbl_Filter_TD_9101_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(l_receiptdate#11) AND isnotnull(l_commitdate#10)) AND (cast(regexp_replace(cast(l_receiptdate#11 as string), -, , 1) as int) > cast(regexp_replace(cast(l_commitdate#10 as string), -, , 1) as int))) AND isnotnull(cast(l_suppkey#2L as int))) AND isnotnull(cast(l_orderkey#0L as int))))
    // Input: ListBuffer(l_orderkey#0L, l_suppkey#2L, l_receiptdate#11, l_commitdate#10)
    // Output: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10388_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_receiptdate11 = tbl_SerializeFromObject_TD_10388_input.getInt32(i, 2);
        int32_t _l_commitdate10 = tbl_SerializeFromObject_TD_10388_input.getInt32(i, 3);
        int32_t _l_suppkey2L = tbl_SerializeFromObject_TD_10388_input.getInt32(i, 1);
        int32_t _l_orderkey0L = tbl_SerializeFromObject_TD_10388_input.getInt32(i, 0);
        if (((((1) && (1)) && (_l_receiptdate11 > _l_commitdate10)) && (1)) && (1)) {
            int32_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_10388_input.getInt32(i, 0);
            tbl_Filter_TD_9101_output.setInt32(r, 0, _l_orderkey0L_t);
            int32_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_10388_input.getInt32(i, 1);
            tbl_Filter_TD_9101_output.setInt32(r, 1, _l_suppkey2L_t);
            r++;
        }
    }
    tbl_Filter_TD_9101_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9101_output #Row: " << tbl_Filter_TD_9101_output.getNumRow() << std::endl;
}

void SW_Project_TD_8772(Table &tbl_Filter_TD_9551_output, Table &tbl_Project_TD_8772_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#2419L as int) AS l_orderkey#32#2515, cast(l_suppkey#2421L as int) AS l_suppkey#66#2517)
    // Input: ListBuffer(l_orderkey#2419L, l_suppkey#2421L)
    // Output: ListBuffer(l_orderkey#32#2515, l_suppkey#66#2517)
    int nrow1 = tbl_Filter_TD_9551_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey2419L = tbl_Filter_TD_9551_output.getInt32(i, 0);
        int32_t _l_suppkey2421L = tbl_Filter_TD_9551_output.getInt32(i, 1);
        int32_t _l_orderkey322515 = _l_orderkey2419L;
        tbl_Project_TD_8772_output.setInt32(i, 0, _l_orderkey322515);
        int32_t _l_suppkey662517 = _l_suppkey2421L;
        tbl_Project_TD_8772_output.setInt32(i, 1, _l_suppkey662517);
    }
    tbl_Project_TD_8772_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8772_output #Row: " << tbl_Project_TD_8772_output.getNumRow() << std::endl;
}




void SW_Filter_TD_5747(Table &tbl_SerializeFromObject_TD_626_input, Table &tbl_Filter_TD_5747_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_orderstatus#326) AND (ascii(o_orderstatus#326) = 70)) AND isnotnull(cast(o_orderkey#324L as int))))
    // Input: ListBuffer(o_orderkey#324L, o_orderstatus#326)
    // Output: ListBuffer(o_orderkey#324L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_626_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_orderstatus326 = tbl_SerializeFromObject_TD_626_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _o_orderkey324L = tbl_SerializeFromObject_TD_626_input.getInt32(i, 0);
        if (((1) && (_o_orderstatus326 == 70)) && (1)) {
            int32_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_626_input.getInt32(i, 0);
            tbl_Filter_TD_5747_output.setInt32(r, 0, _o_orderkey324L_t);
            r++;
        }
    }
    tbl_Filter_TD_5747_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5747_output #Row: " << tbl_Filter_TD_5747_output.getNumRow() << std::endl;
}

void SW_Project_TD_5958(Table &tbl_JOIN_LEFTANTI_TD_6567_output, Table &tbl_Project_TD_5958_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(l_suppkey#2L as int) AS l_suppkey#66)
    // Input: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    // Output: ListBuffer(l_orderkey#32, l_suppkey#66)
    int nrow1 = tbl_JOIN_LEFTANTI_TD_6567_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _l_orderkey0L = tbl_JOIN_LEFTANTI_TD_6567_output.getInt32(i, 0);
        int32_t _l_suppkey2L = tbl_JOIN_LEFTANTI_TD_6567_output.getInt32(i, 1);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_5958_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_5958_output.setInt32(i, 1, _l_suppkey66);
    }
    tbl_Project_TD_5958_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5958_output #Row: " << tbl_Project_TD_5958_output.getNumRow() << std::endl;
}

void SW_Project_TD_5621(Table &tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute, Table &tbl_Project_TD_5621_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#484L, s_name#485, s_nationkey#487L)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_suppkey484L = tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _s_nationkey487L = tbl_SerializeFromObject_TD_7378_input_stringRowIDSubstitute.getInt32(i, 2);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_5621_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_5621_output.setInt32(i, 2, _s_nationkey506);
        tbl_Project_TD_5621_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _s_name485);
    }
    tbl_Project_TD_5621_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5621_output #Row: " << tbl_Project_TD_5621_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4611(Table &tbl_SerializeFromObject_TD_5957_input, Table &tbl_Filter_TD_4611_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = JAPAN)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5957_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_5957_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _n_nationkey296L = tbl_SerializeFromObject_TD_5957_input.getInt32(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "JAPAN")) && (1)) {
            int32_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_5957_input.getInt32(i, 0);
            tbl_Filter_TD_4611_output.setInt32(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_4611_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4611_output #Row: " << tbl_Filter_TD_4611_output.getNumRow() << std::endl;
}

void SW_Project_TD_4701(Table &tbl_Filter_TD_5747_output, Table &tbl_Project_TD_4701_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342)
    // Input: ListBuffer(o_orderkey#324L)
    // Output: ListBuffer(o_orderkey#342)
    int nrow1 = tbl_Filter_TD_5747_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_orderkey324L = tbl_Filter_TD_5747_output.getInt32(i, 0);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_4701_output.setInt32(i, 0, _o_orderkey342);
    }
    tbl_Project_TD_4701_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4701_output #Row: " << tbl_Project_TD_4701_output.getNumRow() << std::endl;
}


void SW_Project_TD_3530(Table &tbl_Filter_TD_4611_output, Table &tbl_Project_TD_3530_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L)
    // Output: ListBuffer(n_nationkey#304)
    int nrow1 = tbl_Filter_TD_4611_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _n_nationkey296L = tbl_Filter_TD_4611_output.getInt32(i, 0);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_3530_output.setInt32(i, 0, _n_nationkey304);
    }
    tbl_Project_TD_3530_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3530_output #Row: " << tbl_Project_TD_3530_output.getNumRow() << std::endl;
}



typedef std::string SW_Aggregate_TD_1212_key;
struct SW_Aggregate_TD_1212_payload {
    int64_t _numwait2399L_count_0;
};
void SW_Aggregate_TD_1212(Table &tbl_JOIN_INNER_TD_2336_output, Table &tbl_SerializeFromObject_TD_7378_input, Table &tbl_Aggregate_TD_1212_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_name#485, count(1) AS numwait#2399L)
    // Input: ListBuffer(s_name#485)
    // Output: ListBuffer(s_name#485, numwait#2399L)
    std::unordered_map<SW_Aggregate_TD_1212_key, SW_Aggregate_TD_1212_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2336_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_7378_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_2336_output.getInt32(i, 0), 1);
        SW_Aggregate_TD_1212_key k = std::string(_s_name485.data());
        int64_t _numwait2399L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_1212_payload p{_numwait2399L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._numwait2399L_count_0 + _numwait2399L_count_0;
            p._numwait2399L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1212_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _s_name485);
        int64_t _numwait2399L = (it.second)._numwait2399L_count_0;
        tbl_Aggregate_TD_1212_output.setInt64(r, 1, _numwait2399L);
        ++r;
    }
    tbl_Aggregate_TD_1212_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1212_output #Row: " << tbl_Aggregate_TD_1212_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0593(Table &tbl_Aggregate_TD_1212_output, Table &tbl_Sort_TD_0593_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(numwait#2399L DESC NULLS LAST, s_name#485 ASC NULLS FIRST)
    // Input: ListBuffer(s_name#485, numwait#2399L)
    // Output: ListBuffer(s_name#485, numwait#2399L)
    struct SW_Sort_TD_0593Row {
        std::string _s_name485;
        int64_t _numwait2399L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0593Row& a, const SW_Sort_TD_0593Row& b) const { return 
 (a._numwait2399L > b._numwait2399L) || 
 ((a._numwait2399L == b._numwait2399L) && (a._s_name485 < b._s_name485)); 
}
    }SW_Sort_TD_0593_order; 

    int nrow1 = tbl_Aggregate_TD_1212_output.getNumRow();
    std::vector<SW_Sort_TD_0593Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_Aggregate_TD_1212_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _numwait2399L = tbl_Aggregate_TD_1212_output.getInt64(i, 1);
        SW_Sort_TD_0593Row t = {std::string(_s_name485.data()),_numwait2399L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0593_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0593_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _s_name485);
        tbl_Sort_TD_0593_output.setInt64(r, 1, it._numwait2399L);
        if (r < 10) {
            std::cout << (it._s_name485).data() << " " << it._numwait2399L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0593_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0593_output #Row: " << tbl_Sort_TD_0593_output.getNumRow() << std::endl;
}

