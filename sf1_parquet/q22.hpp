#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7201(Table &tbl_SerializeFromObject_TD_8501_input, Table &tbl_Filter_TD_7201_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((cast(CheckOverflow((promote_precision(c_acctbal#1246) * 100.00), DecimalType(16,2), true) as int) > 0) AND substring(c_phone#1245, 1, 2) IN (19,11,16,27,15,22,12)))
    // Input: ListBuffer(c_acctbal#1246, c_phone#1245)
    // Output: ListBuffer(c_acctbal#1246)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8501_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal1246 = tbl_SerializeFromObject_TD_8501_input.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_phone1245 = tbl_SerializeFromObject_TD_8501_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        auto reuse_col_str_152 = std::string(_c_phone1245.data()).substr(0, 2);
        if ((_c_acctbal1246 > 0) && ((reuse_col_str_152 == "19") || (reuse_col_str_152 == "11") || (reuse_col_str_152 == "16") || (reuse_col_str_152 == "27") || (reuse_col_str_152 == "15") || (reuse_col_str_152 == "22") || (reuse_col_str_152 == "12") || (0))) {
            int32_t _c_acctbal1246_t = tbl_SerializeFromObject_TD_8501_input.getInt32(i, 0);
            tbl_Filter_TD_7201_output.setInt32(r, 0, _c_acctbal1246_t);
            r++;
        }
    }
    tbl_Filter_TD_7201_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7201_output #Row: " << tbl_Filter_TD_7201_output.getNumRow() << std::endl;
}

void SW_Project_TD_6634(Table &tbl_Filter_TD_7201_output, Table &tbl_Project_TD_6634_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(CheckOverflow((promote_precision(c_acctbal#1246) * 100.00), DecimalType(16,2), true) as int) AS c_acctbal#287)
    // Input: ListBuffer(c_acctbal#1246)
    // Output: ListBuffer(c_acctbal#287)
    int nrow1 = tbl_Filter_TD_7201_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal1246 = tbl_Filter_TD_7201_output.getInt32(i, 0);
        int32_t _c_acctbal287 = (_c_acctbal1246 * 100.00);
        tbl_Project_TD_6634_output.setInt32(i, 0, _c_acctbal287);
    }
    tbl_Project_TD_6634_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6634_output #Row: " << tbl_Project_TD_6634_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5311(Table &tbl_Project_TD_6634_output, Table &tbl_Aggregate_TD_5311_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(c_acctbal#287) AS avg(c_acctbal)#1240)
    // Input: ListBuffer(c_acctbal#287)
    // Output: ListBuffer(avg(c_acctbal)#1240)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Project_TD_6634_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal287 = tbl_Project_TD_6634_output.getInt32(i, 0);
        int64_t _avgc_acctbal1240_avg_0 = _c_acctbal287;
        avg_0 = (avg_0 + _avgc_acctbal1240_avg_0);
    }
    int r = 0;
    int64_t _avgc_acctbal1240 = avg_0 / nrow1;
    tbl_Aggregate_TD_5311_output.setInt64(r++, 0, _avgc_acctbal1240);
    tbl_Aggregate_TD_5311_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5311_output #Row: " << tbl_Aggregate_TD_5311_output.getNumRow() << std::endl;
}

void SW_Project_TD_4784(Table &tbl_SerializeFromObject_TD_5103_input, Table &tbl_Project_TD_4784_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_custkey#325L as int) AS o_custkey#352)
    // Input: ListBuffer(o_custkey#325L)
    // Output: ListBuffer(o_custkey#352)
    int nrow1 = tbl_SerializeFromObject_TD_5103_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _o_custkey325L = tbl_SerializeFromObject_TD_5103_input.getInt64(i, 0);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_4784_output.setInt32(i, 0, _o_custkey352);
    }
    tbl_Project_TD_4784_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4784_output #Row: " << tbl_Project_TD_4784_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4495(Table &tbl_SerializeFromObject_TD_5460_input, Table &tbl_Aggregate_TD_5311_output, Table &tbl_Filter_TD_4495_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((substring(c_phone#257, 1, 2) IN (19,11,16,27,15,22,12) AND (cast(cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) as double) > scalar-subquery#1234 [])))
    // Input: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    // Output: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5460_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_phone257 = tbl_SerializeFromObject_TD_5460_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _c_acctbal258 = tbl_SerializeFromObject_TD_5460_input.getInt32(i, 2);
        auto reuse_col_str_957 = std::string(_c_phone257.data()).substr(0, 2);
        if (((reuse_col_str_957 == "19") || (reuse_col_str_957 == "11") || (reuse_col_str_957 == "16") || (reuse_col_str_957 == "27") || (reuse_col_str_957 == "15") || (reuse_col_str_957 == "22") || (reuse_col_str_957 == "12") || (0)) && (_c_acctbal258 > tbl_Aggregate_TD_5311_output.getInt64(0, 0))) {
            int64_t _c_custkey253L_t = tbl_SerializeFromObject_TD_5460_input.getInt64(i, 0);
            tbl_Filter_TD_4495_output.setInt64(r, 0, _c_custkey253L_t);
            tbl_Filter_TD_4495_output.setInt32(r, 1, i);
            int32_t _c_acctbal258_t = tbl_SerializeFromObject_TD_5460_input.getInt32(i, 2);
            tbl_Filter_TD_4495_output.setInt32(r, 2, _c_acctbal258_t);
            r++;
        }
    }
    tbl_Filter_TD_4495_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4495_output #Row: " << tbl_Filter_TD_4495_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_3178_key_leftMajor {
    int64_t _c_custkey253L;
    bool operator==(const SW_JOIN_LEFTANTI_TD_3178_key_leftMajor& other) const {
        return ((_c_custkey253L == other._c_custkey253L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_3178_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_3178_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._c_custkey253L));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_3178_payload_leftMajor {
    int64_t _c_custkey253L;
    int32_t _c_phone257;
    int32_t _c_acctbal258;
};
struct SW_JOIN_LEFTANTI_TD_3178_key_rightMajor {
    int32_t _o_custkey352;
    bool operator==(const SW_JOIN_LEFTANTI_TD_3178_key_rightMajor& other) const {
        return ((_o_custkey352 == other._o_custkey352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_3178_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_3178_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._o_custkey352));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_3178_payload_rightMajor {
    int32_t _o_custkey352;
};
void SW_JOIN_LEFTANTI_TD_3178(Table &tbl_Filter_TD_4495_output, Table &tbl_Project_TD_4784_output, Table &tbl_JOIN_LEFTANTI_TD_3178_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((o_custkey#352 = cast(c_custkey#253L as int)))
    // Left Table: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    // Right Table: ListBuffer(o_custkey#352)
    // Output Table: ListBuffer(c_phone#257, c_acctbal#258)
    int left_nrow = tbl_Filter_TD_4495_output.getNumRow();
    int right_nrow = tbl_Project_TD_4784_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_3178_key_rightMajor, SW_JOIN_LEFTANTI_TD_3178_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4784_output.getNumRow();
        int nrow2 = tbl_Filter_TD_4495_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _o_custkey352_k = tbl_Project_TD_4784_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_3178_key_rightMajor keyA{_o_custkey352_k};
            int32_t _o_custkey352 = tbl_Project_TD_4784_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_3178_payload_rightMajor payloadA{_o_custkey352};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _c_custkey253L_k = tbl_Filter_TD_4495_output.getInt64(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_3178_key_rightMajor{_c_custkey253L_k});
            if (it == ht1.end()) {
                int64_t _c_custkey253L = tbl_Filter_TD_4495_output.getInt64(i, 0);
                int32_t _c_phone257 = tbl_Filter_TD_4495_output.getInt32(i, 1);
                int32_t _c_acctbal258 = tbl_Filter_TD_4495_output.getInt32(i, 2);
                if (_o_custkey352 == _c_custkey253L) {
                    tbl_JOIN_LEFTANTI_TD_3178_output.setInt32(r, 0, _c_phone257);
                    tbl_JOIN_LEFTANTI_TD_3178_output.setInt32(r, 1, _c_acctbal258);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTANTI_TD_3178_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_3178_output #Row: " << tbl_JOIN_LEFTANTI_TD_3178_output.getNumRow() << std::endl;
}

void SW_Project_TD_2673(Table &tbl_JOIN_LEFTANTI_TD_3178_output, Table &tbl_SerializeFromObject_TD_5460_input, Table &tbl_Project_TD_2673_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Project
    // Operation: ListBuffer(substring(c_phone#257, 1, 2) AS cntrycode#1233, cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) AS c_acctbal#287)
    // Input: ListBuffer(c_phone#257, c_acctbal#258)
    // Output: ListBuffer(cntrycode#1233, c_acctbal#287)
    int nrow1 = tbl_JOIN_LEFTANTI_TD_3178_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_phone257 = tbl_SerializeFromObject_TD_5460_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_LEFTANTI_TD_3178_output.getInt32(i, 0), 1);
        int32_t _c_acctbal258 = tbl_JOIN_LEFTANTI_TD_3178_output.getInt32(i, 1);
        std::string _cntrycode1233_str = std::string(_c_phone257.data()).substr(0, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1233{};
        memcpy(_cntrycode1233.data(), _cntrycode1233_str.data(), (_cntrycode1233_str).length());
        tbl_Project_TD_2673_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0, _cntrycode1233);
        int32_t _c_acctbal287 = (_c_acctbal258 * 100.00);
        tbl_Project_TD_2673_output.setInt32(i, 1, _c_acctbal287);
    }
    tbl_Project_TD_2673_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2673_output #Row: " << tbl_Project_TD_2673_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_1617_key;
struct SW_Aggregate_TD_1617_payload {
    int64_t _numcust1236L_count_0;
    int64_t _totacctbal1237L_sum_1;
};
void SW_Aggregate_TD_1617(Table &tbl_Project_TD_2673_output, Table &tbl_Aggregate_TD_1617_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cntrycode#1233, count(1) AS numcust#1236L, sum(c_acctbal#287) AS totacctbal#1237L)
    // Input: ListBuffer(cntrycode#1233, c_acctbal#287)
    // Output: ListBuffer(cntrycode#1233, numcust#1236L, totacctbal#1237L)
    std::unordered_map<SW_Aggregate_TD_1617_key, SW_Aggregate_TD_1617_payload> ht1;
    int nrow1 = tbl_Project_TD_2673_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1233 = tbl_Project_TD_2673_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        int32_t _c_acctbal287 = tbl_Project_TD_2673_output.getInt32(i, 1);
        SW_Aggregate_TD_1617_key k = std::string(_cntrycode1233.data());
        int64_t _numcust1236L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _totacctbal1237L_sum_1 = _c_acctbal287;
        SW_Aggregate_TD_1617_payload p{_numcust1236L_count_0, _totacctbal1237L_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._numcust1236L_count_0 + _numcust1236L_count_0;
            p._numcust1236L_count_0 = count_0;
            int64_t sum_1 = (it->second)._totacctbal1237L_sum_1 + _totacctbal1237L_sum_1;
            p._totacctbal1237L_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1233{};
        memcpy(_cntrycode1233.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1617_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _cntrycode1233);
        int64_t _numcust1236L = (it.second)._numcust1236L_count_0;
        tbl_Aggregate_TD_1617_output.setInt64(r, 1, _numcust1236L);
        int64_t _totacctbal1237L = (it.second)._totacctbal1237L_sum_1;
        tbl_Aggregate_TD_1617_output.setInt64(r, 2, _totacctbal1237L);
        ++r;
    }
    tbl_Aggregate_TD_1617_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1617_output #Row: " << tbl_Aggregate_TD_1617_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0525(Table &tbl_Aggregate_TD_1617_output, Table &tbl_Sort_TD_0525_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cntrycode#1233 ASC NULLS FIRST)
    // Input: ListBuffer(cntrycode#1233, numcust#1236L, totacctbal#1237L)
    // Output: ListBuffer(cntrycode#1233, numcust#1236L, totacctbal#1237L)
    struct SW_Sort_TD_0525Row {
        std::string _cntrycode1233;
        int64_t _numcust1236L;
        int64_t _totacctbal1237L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0525Row& a, const SW_Sort_TD_0525Row& b) const { return 
 (a._cntrycode1233 < b._cntrycode1233); 
}
    }SW_Sort_TD_0525_order; 

    int nrow1 = tbl_Aggregate_TD_1617_output.getNumRow();
    std::vector<SW_Sort_TD_0525Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1233 = tbl_Aggregate_TD_1617_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _numcust1236L = tbl_Aggregate_TD_1617_output.getInt64(i, 1);
        int64_t _totacctbal1237L = tbl_Aggregate_TD_1617_output.getInt64(i, 2);
        SW_Sort_TD_0525Row t = {std::string(_cntrycode1233.data()),_numcust1236L,_totacctbal1237L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0525_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1233{};
        memcpy(_cntrycode1233.data(), (it._cntrycode1233).data(), (it._cntrycode1233).length());
        tbl_Sort_TD_0525_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _cntrycode1233);
        tbl_Sort_TD_0525_output.setInt64(r, 1, it._numcust1236L);
        tbl_Sort_TD_0525_output.setInt64(r, 2, it._totacctbal1237L);
        if (r < 10) {
            std::cout << (it._cntrycode1233).data() << " " << it._numcust1236L << " " << it._totacctbal1237L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0525_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0525_output #Row: " << tbl_Sort_TD_0525_output.getNumRow() << std::endl;
}

