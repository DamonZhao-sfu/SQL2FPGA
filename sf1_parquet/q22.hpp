#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7317(Table &tbl_SerializeFromObject_TD_8371_input, Table &tbl_Filter_TD_7317_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((cast(CheckOverflow((promote_precision(c_acctbal#1079) * 100.00), DecimalType(16,2), true) as int) > 0) AND substring(c_phone#1078, 1, 2) IN (19,11,16,27,15,22,12)))
    // Input: ListBuffer(c_acctbal#1079, c_phone#1078)
    // Output: ListBuffer(c_acctbal#1079)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8371_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal1079 = tbl_SerializeFromObject_TD_8371_input.getInt32(i, 0);
        std::array<char, TPCH_READ_PHONE_LEN + 1> _c_phone1078 = tbl_SerializeFromObject_TD_8371_input.getcharN<char, TPCH_READ_PHONE_LEN + 1>(i, 1);
        auto reuse_col_str_613 = std::string(_c_phone1078.data()).substr(0, 2);
        if ((_c_acctbal1079 > 0) && ((reuse_col_str_613 == "19") || (reuse_col_str_613 == "11") || (reuse_col_str_613 == "16") || (reuse_col_str_613 == "27") || (reuse_col_str_613 == "15") || (reuse_col_str_613 == "22") || (reuse_col_str_613 == "12") || (0))) {
            int32_t _c_acctbal1079_t = tbl_SerializeFromObject_TD_8371_input.getInt32(i, 0);
            tbl_Filter_TD_7317_output.setInt32(r, 0, _c_acctbal1079_t);
            r++;
        }
    }
    tbl_Filter_TD_7317_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7317_output #Row: " << tbl_Filter_TD_7317_output.getNumRow() << std::endl;
}

void SW_Project_TD_6825(Table &tbl_Filter_TD_7317_output, Table &tbl_Project_TD_6825_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(CheckOverflow((promote_precision(c_acctbal#1079) * 100.00), DecimalType(16,2), true) as int) AS c_acctbal#287)
    // Input: ListBuffer(c_acctbal#1079)
    // Output: ListBuffer(c_acctbal#287)
    int nrow1 = tbl_Filter_TD_7317_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal1079 = tbl_Filter_TD_7317_output.getInt32(i, 0);
        int32_t _c_acctbal287 = (_c_acctbal1079 * 100.00);
        tbl_Project_TD_6825_output.setInt32(i, 0, _c_acctbal287);
    }
    tbl_Project_TD_6825_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6825_output #Row: " << tbl_Project_TD_6825_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5187(Table &tbl_Project_TD_6825_output, Table &tbl_Aggregate_TD_5187_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(c_acctbal#287) AS avg(c_acctbal)#1073)
    // Input: ListBuffer(c_acctbal#287)
    // Output: ListBuffer(avg(c_acctbal)#1073)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Project_TD_6825_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal287 = tbl_Project_TD_6825_output.getInt32(i, 0);
        int64_t _avgc_acctbal1073_avg_0 = _c_acctbal287;
        avg_0 = (avg_0 + _avgc_acctbal1073_avg_0);
    }
    int r = 0;
    int64_t _avgc_acctbal1073 = avg_0 / nrow1;
    tbl_Aggregate_TD_5187_output.setInt64(r++, 0, _avgc_acctbal1073);
    tbl_Aggregate_TD_5187_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5187_output #Row: " << tbl_Aggregate_TD_5187_output.getNumRow() << std::endl;
}

void SW_Project_TD_4622(Table &tbl_SerializeFromObject_TD_5512_input, Table &tbl_Project_TD_4622_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_custkey#325L as int) AS o_custkey#352)
    // Input: ListBuffer(o_custkey#325L)
    // Output: ListBuffer(o_custkey#352)
    int nrow1 = tbl_SerializeFromObject_TD_5512_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_custkey325L = tbl_SerializeFromObject_TD_5512_input.getInt32(i, 0);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_4622_output.setInt32(i, 0, _o_custkey352);
    }
    tbl_Project_TD_4622_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4622_output #Row: " << tbl_Project_TD_4622_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4831(Table &tbl_SerializeFromObject_TD_5815_input, Table &tbl_Aggregate_TD_5187_output, Table &tbl_Filter_TD_4831_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((substring(c_phone#257, 1, 2) IN (19,11,16,27,15,22,12) AND (cast(cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) as double) > scalar-subquery#1067 [])))
    // Input: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    // Output: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5815_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_PHONE_LEN + 1> _c_phone257 = tbl_SerializeFromObject_TD_5815_input.getcharN<char, TPCH_READ_PHONE_LEN + 1>(i, 1);
        int32_t _c_acctbal258 = tbl_SerializeFromObject_TD_5815_input.getInt32(i, 2);
        auto reuse_col_str_772 = std::string(_c_phone257.data()).substr(0, 2);
        if (((reuse_col_str_772 == "19") || (reuse_col_str_772 == "11") || (reuse_col_str_772 == "16") || (reuse_col_str_772 == "27") || (reuse_col_str_772 == "15") || (reuse_col_str_772 == "22") || (reuse_col_str_772 == "12") || (0)) && (_c_acctbal258 > tbl_Aggregate_TD_5187_output.getInt64(0, 0))) {
            int32_t _c_custkey253L_t = tbl_SerializeFromObject_TD_5815_input.getInt32(i, 0);
            tbl_Filter_TD_4831_output.setInt32(r, 0, _c_custkey253L_t);
            tbl_Filter_TD_4831_output.setInt32(r, 1, i);
            int32_t _c_acctbal258_t = tbl_SerializeFromObject_TD_5815_input.getInt32(i, 2);
            tbl_Filter_TD_4831_output.setInt32(r, 2, _c_acctbal258_t);
            r++;
        }
    }
    tbl_Filter_TD_4831_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4831_output #Row: " << tbl_Filter_TD_4831_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_3791_key_leftMajor {
    int32_t _c_custkey253L;
    bool operator==(const SW_JOIN_LEFTANTI_TD_3791_key_leftMajor& other) const {
        return ((_c_custkey253L == other._c_custkey253L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_3791_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_3791_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_custkey253L));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_3791_payload_leftMajor {
    int32_t _c_custkey253L;
    int32_t _c_phone257;
    int32_t _c_acctbal258;
};
struct SW_JOIN_LEFTANTI_TD_3791_key_rightMajor {
    int32_t _o_custkey352;
    bool operator==(const SW_JOIN_LEFTANTI_TD_3791_key_rightMajor& other) const {
        return ((_o_custkey352 == other._o_custkey352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_3791_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_3791_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._o_custkey352));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_3791_payload_rightMajor {
    int32_t _o_custkey352;
};
void SW_JOIN_LEFTANTI_TD_3791(Table &tbl_Filter_TD_4831_output, Table &tbl_Project_TD_4622_output, Table &tbl_JOIN_LEFTANTI_TD_3791_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((o_custkey#352 = cast(c_custkey#253L as int)))
    // Left Table: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    // Right Table: ListBuffer(o_custkey#352)
    // Output Table: ListBuffer(c_phone#257, c_acctbal#258)
    int left_nrow = tbl_Filter_TD_4831_output.getNumRow();
    int right_nrow = tbl_Project_TD_4622_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_3791_key_rightMajor, SW_JOIN_LEFTANTI_TD_3791_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_4622_output.getNumRow();
        int nrow2 = tbl_Filter_TD_4831_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _o_custkey352_k = tbl_Project_TD_4622_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_3791_key_rightMajor keyA{_o_custkey352_k};
            int32_t _o_custkey352 = tbl_Project_TD_4622_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_3791_payload_rightMajor payloadA{_o_custkey352};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_custkey253L_k = tbl_Filter_TD_4831_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_3791_key_rightMajor{_c_custkey253L_k});
            if (it == ht1.end()) {
                int32_t _c_custkey253L = tbl_Filter_TD_4831_output.getInt32(i, 0);
                int32_t _c_phone257 = tbl_Filter_TD_4831_output.getInt32(i, 1);
                int32_t _c_acctbal258 = tbl_Filter_TD_4831_output.getInt32(i, 2);
                if (_o_custkey352 == _c_custkey253L) {
                    tbl_JOIN_LEFTANTI_TD_3791_output.setInt32(r, 0, _c_phone257);
                    tbl_JOIN_LEFTANTI_TD_3791_output.setInt32(r, 1, _c_acctbal258);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTANTI_TD_3791_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_3791_output #Row: " << tbl_JOIN_LEFTANTI_TD_3791_output.getNumRow() << std::endl;
}

void SW_Project_TD_283(Table &tbl_JOIN_LEFTANTI_TD_3791_output, Table &tbl_SerializeFromObject_TD_5815_input, Table &tbl_Project_TD_283_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Project
    // Operation: ListBuffer(substring(c_phone#257, 1, 2) AS cntrycode#1066, cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) AS c_acctbal#287)
    // Input: ListBuffer(c_phone#257, c_acctbal#258)
    // Output: ListBuffer(cntrycode#1066, c_acctbal#287)
    int nrow1 = tbl_JOIN_LEFTANTI_TD_3791_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_PHONE_LEN + 1> _c_phone257 = tbl_SerializeFromObject_TD_5815_input.getcharN<char, TPCH_READ_PHONE_LEN + 1>(tbl_JOIN_LEFTANTI_TD_3791_output.getInt32(i, 0), 1);
        int32_t _c_acctbal258 = tbl_JOIN_LEFTANTI_TD_3791_output.getInt32(i, 1);
        std::string _cntrycode1066_str = std::string(_c_phone257.data()).substr(0, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1066{};
        memcpy(_cntrycode1066.data(), _cntrycode1066_str.data(), (_cntrycode1066_str).length());
        tbl_Project_TD_283_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0, _cntrycode1066);
        int32_t _c_acctbal287 = (_c_acctbal258 * 100.00);
        tbl_Project_TD_283_output.setInt32(i, 1, _c_acctbal287);
    }
    tbl_Project_TD_283_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_283_output #Row: " << tbl_Project_TD_283_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_1182_key;
struct SW_Aggregate_TD_1182_payload {
    int64_t _numcust1069L_count_0;
    int64_t _totacctbal1070L_sum_1;
};
void SW_Aggregate_TD_1182(Table &tbl_Project_TD_283_output, Table &tbl_Aggregate_TD_1182_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cntrycode#1066, count(1) AS numcust#1069L, sum(c_acctbal#287) AS totacctbal#1070L)
    // Input: ListBuffer(cntrycode#1066, c_acctbal#287)
    // Output: ListBuffer(cntrycode#1066, numcust#1069L, totacctbal#1070L)
    std::unordered_map<SW_Aggregate_TD_1182_key, SW_Aggregate_TD_1182_payload> ht1;
    int nrow1 = tbl_Project_TD_283_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1066 = tbl_Project_TD_283_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        int32_t _c_acctbal287 = tbl_Project_TD_283_output.getInt32(i, 1);
        SW_Aggregate_TD_1182_key k = std::string(_cntrycode1066.data());
        int64_t _numcust1069L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _totacctbal1070L_sum_1 = _c_acctbal287;
        SW_Aggregate_TD_1182_payload p{_numcust1069L_count_0, _totacctbal1070L_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._numcust1069L_count_0 + _numcust1069L_count_0;
            p._numcust1069L_count_0 = count_0;
            int64_t sum_1 = (it->second)._totacctbal1070L_sum_1 + _totacctbal1070L_sum_1;
            p._totacctbal1070L_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1066{};
        memcpy(_cntrycode1066.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1182_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _cntrycode1066);
        int64_t _numcust1069L = (it.second)._numcust1069L_count_0;
        tbl_Aggregate_TD_1182_output.setInt64(r, 1, _numcust1069L);
        int64_t _totacctbal1070L = (it.second)._totacctbal1070L_sum_1;
        tbl_Aggregate_TD_1182_output.setInt64(r, 2, _totacctbal1070L);
        ++r;
    }
    tbl_Aggregate_TD_1182_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1182_output #Row: " << tbl_Aggregate_TD_1182_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0194(Table &tbl_Aggregate_TD_1182_output, Table &tbl_Sort_TD_0194_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cntrycode#1066 ASC NULLS FIRST)
    // Input: ListBuffer(cntrycode#1066, numcust#1069L, totacctbal#1070L)
    // Output: ListBuffer(cntrycode#1066, numcust#1069L, totacctbal#1070L)
    struct SW_Sort_TD_0194Row {
        std::string _cntrycode1066;
        int64_t _numcust1069L;
        int64_t _totacctbal1070L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0194Row& a, const SW_Sort_TD_0194Row& b) const { return 
 (a._cntrycode1066 < b._cntrycode1066); 
}
    }SW_Sort_TD_0194_order; 

    int nrow1 = tbl_Aggregate_TD_1182_output.getNumRow();
    std::vector<SW_Sort_TD_0194Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1066 = tbl_Aggregate_TD_1182_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _numcust1069L = tbl_Aggregate_TD_1182_output.getInt64(i, 1);
        int64_t _totacctbal1070L = tbl_Aggregate_TD_1182_output.getInt64(i, 2);
        SW_Sort_TD_0194Row t = {std::string(_cntrycode1066.data()),_numcust1069L,_totacctbal1070L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0194_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode1066{};
        memcpy(_cntrycode1066.data(), (it._cntrycode1066).data(), (it._cntrycode1066).length());
        tbl_Sort_TD_0194_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _cntrycode1066);
        tbl_Sort_TD_0194_output.setInt64(r, 1, it._numcust1069L);
        tbl_Sort_TD_0194_output.setInt64(r, 2, it._totacctbal1070L);
        if (r < 10) {
            std::cout << (it._cntrycode1066).data() << " " << it._numcust1069L << " " << it._totacctbal1070L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0194_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0194_output #Row: " << tbl_Sort_TD_0194_output.getNumRow() << std::endl;
}

