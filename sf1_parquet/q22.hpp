#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7744(Table &tbl_SerializeFromObject_TD_8542_input, Table &tbl_Filter_TD_7744_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((cast(CheckOverflow((promote_precision(c_acctbal#2544) * 100.00), DecimalType(16,2), true) as int) > 0) AND substring(c_phone#2543, 1, 2) IN (19,11,16,27,15,22,12)))
    // Input: ListBuffer(c_acctbal#2544, c_phone#2543)
    // Output: ListBuffer(c_acctbal#2544)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8542_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal2544 = tbl_SerializeFromObject_TD_8542_input.getInt32(i, 0);
        std::array<char, TPCH_READ_PHONE_LEN + 1> _c_phone2543 = tbl_SerializeFromObject_TD_8542_input.getcharN<char, TPCH_READ_PHONE_LEN + 1>(i, 1);
        auto reuse_col_str_776 = std::string(_c_phone2543.data()).substr(0, 2);
        if ((_c_acctbal2544 > 0) && ((reuse_col_str_776 == "19") || (reuse_col_str_776 == "11") || (reuse_col_str_776 == "16") || (reuse_col_str_776 == "27") || (reuse_col_str_776 == "15") || (reuse_col_str_776 == "22") || (reuse_col_str_776 == "12") || (0))) {
            int32_t _c_acctbal2544_t = tbl_SerializeFromObject_TD_8542_input.getInt32(i, 0);
            tbl_Filter_TD_7744_output.setInt32(r, 0, _c_acctbal2544_t);
            r++;
        }
    }
    tbl_Filter_TD_7744_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7744_output #Row: " << tbl_Filter_TD_7744_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_51(Table &tbl_Project_TD_6623_output, Table &tbl_Aggregate_TD_51_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(c_acctbal#287) AS avg(c_acctbal)#2538)
    // Input: ListBuffer(c_acctbal#287)
    // Output: ListBuffer(avg(c_acctbal)#2538)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Project_TD_6623_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal287 = tbl_Project_TD_6623_output.getInt32(i, 0);
        int64_t _avgc_acctbal2538_avg_0 = _c_acctbal287;
        avg_0 = (avg_0 + _avgc_acctbal2538_avg_0);
    }
    int r = 0;
    int64_t _avgc_acctbal2538 = avg_0 / nrow1;
    tbl_Aggregate_TD_51_output.setInt64(r++, 0, _avgc_acctbal2538);
    tbl_Aggregate_TD_51_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_51_output #Row: " << tbl_Aggregate_TD_51_output.getNumRow() << std::endl;
}


void SW_Filter_TD_4676(Table &tbl_SerializeFromObject_TD_5500_input, Table &tbl_Aggregate_TD_51_output, Table &tbl_Filter_TD_4676_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((substring(c_phone#257, 1, 2) IN (19,11,16,27,15,22,12) AND (cast(cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) as double) > scalar-subquery#2532 [])))
    // Input: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    // Output: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5500_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_PHONE_LEN + 1> _c_phone257 = tbl_SerializeFromObject_TD_5500_input.getcharN<char, TPCH_READ_PHONE_LEN + 1>(i, 1);
        int32_t _c_acctbal258 = tbl_SerializeFromObject_TD_5500_input.getInt32(i, 2);
        auto reuse_col_str_569 = std::string(_c_phone257.data()).substr(0, 2);
        if (((reuse_col_str_569 == "19") || (reuse_col_str_569 == "11") || (reuse_col_str_569 == "16") || (reuse_col_str_569 == "27") || (reuse_col_str_569 == "15") || (reuse_col_str_569 == "22") || (reuse_col_str_569 == "12") || (0)) && (_c_acctbal258 > tbl_Aggregate_TD_51_output.getInt64(0, 0))) {
            int32_t _c_custkey253L_t = tbl_SerializeFromObject_TD_5500_input.getInt32(i, 0);
            tbl_Filter_TD_4676_output.setInt32(r, 0, _c_custkey253L_t);
            tbl_Filter_TD_4676_output.setInt32(r, 1, i);
            int32_t _c_acctbal258_t = tbl_SerializeFromObject_TD_5500_input.getInt32(i, 2);
            tbl_Filter_TD_4676_output.setInt32(r, 2, _c_acctbal258_t);
            r++;
        }
    }
    tbl_Filter_TD_4676_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4676_output #Row: " << tbl_Filter_TD_4676_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_3883_key_leftMajor {
    int32_t _c_custkey253L;
    bool operator==(const SW_JOIN_LEFTANTI_TD_3883_key_leftMajor& other) const {
        return ((_c_custkey253L == other._c_custkey253L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_3883_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_3883_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_custkey253L));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_3883_payload_leftMajor {
    int32_t _c_custkey253L;
    int32_t _c_phone257;
    int32_t _c_acctbal258;
};
struct SW_JOIN_LEFTANTI_TD_3883_key_rightMajor {
    int32_t _o_custkey352;
    bool operator==(const SW_JOIN_LEFTANTI_TD_3883_key_rightMajor& other) const {
        return ((_o_custkey352 == other._o_custkey352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_3883_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_3883_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._o_custkey352));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_3883_payload_rightMajor {
    int32_t _o_custkey352;
};
void SW_JOIN_LEFTANTI_TD_3883(Table &tbl_Filter_TD_4676_output, Table &tbl_Project_TD_498_output, Table &tbl_JOIN_LEFTANTI_TD_3883_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((o_custkey#352 = cast(c_custkey#253L as int)))
    // Left Table: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    // Right Table: ListBuffer(o_custkey#352)
    // Output Table: ListBuffer(c_phone#257, c_acctbal#258)
    int left_nrow = tbl_Filter_TD_4676_output.getNumRow();
    int right_nrow = tbl_Project_TD_498_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_3883_key_rightMajor, SW_JOIN_LEFTANTI_TD_3883_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_498_output.getNumRow();
        int nrow2 = tbl_Filter_TD_4676_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _o_custkey352_k = tbl_Project_TD_498_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_3883_key_rightMajor keyA{_o_custkey352_k};
            int32_t _o_custkey352 = tbl_Project_TD_498_output.getInt32(i, 0);
            SW_JOIN_LEFTANTI_TD_3883_payload_rightMajor payloadA{_o_custkey352};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_custkey253L_k = tbl_Filter_TD_4676_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_3883_key_rightMajor{_c_custkey253L_k});
            if (it == ht1.end()) {
                int32_t _c_custkey253L = tbl_Filter_TD_4676_output.getInt32(i, 0);
                int32_t _c_phone257 = tbl_Filter_TD_4676_output.getInt32(i, 1);
                int32_t _c_acctbal258 = tbl_Filter_TD_4676_output.getInt32(i, 2);
                if (_o_custkey352 == _c_custkey253L) {
                    tbl_JOIN_LEFTANTI_TD_3883_output.setInt32(r, 0, _c_phone257);
                    tbl_JOIN_LEFTANTI_TD_3883_output.setInt32(r, 1, _c_acctbal258);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTANTI_TD_3883_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_3883_output #Row: " << tbl_JOIN_LEFTANTI_TD_3883_output.getNumRow() << std::endl;
}

void SW_Project_TD_2116(Table &tbl_JOIN_LEFTANTI_TD_3883_output, Table &tbl_SerializeFromObject_TD_5500_input, Table &tbl_Project_TD_2116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Project
    // Operation: ListBuffer(substring(c_phone#257, 1, 2) AS cntrycode#2531, cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) AS c_acctbal#287)
    // Input: ListBuffer(c_phone#257, c_acctbal#258)
    // Output: ListBuffer(cntrycode#2531, c_acctbal#287)
    int nrow1 = tbl_JOIN_LEFTANTI_TD_3883_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_PHONE_LEN + 1> _c_phone257 = tbl_SerializeFromObject_TD_5500_input.getcharN<char, TPCH_READ_PHONE_LEN + 1>(tbl_JOIN_LEFTANTI_TD_3883_output.getInt32(i, 0), 1);
        int32_t _c_acctbal258 = tbl_JOIN_LEFTANTI_TD_3883_output.getInt32(i, 1);
        std::string _cntrycode2531_str = std::string(_c_phone257.data()).substr(0, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531{};
        memcpy(_cntrycode2531.data(), _cntrycode2531_str.data(), (_cntrycode2531_str).length());
        tbl_Project_TD_2116_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0, _cntrycode2531);
        int32_t _c_acctbal287 = (_c_acctbal258 * 100.00);
        tbl_Project_TD_2116_output.setInt32(i, 1, _c_acctbal287);
    }
    tbl_Project_TD_2116_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2116_output #Row: " << tbl_Project_TD_2116_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_1234_key;
struct SW_Aggregate_TD_1234_payload {
    int64_t _numcust2534L_count_0;
    int64_t _totacctbal2535L_sum_1;
};
void SW_Aggregate_TD_1234(Table &tbl_Project_TD_2116_output, Table &tbl_Aggregate_TD_1234_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cntrycode#2531, count(1) AS numcust#2534L, sum(c_acctbal#287) AS totacctbal#2535L)
    // Input: ListBuffer(cntrycode#2531, c_acctbal#287)
    // Output: ListBuffer(cntrycode#2531, numcust#2534L, totacctbal#2535L)
    std::unordered_map<SW_Aggregate_TD_1234_key, SW_Aggregate_TD_1234_payload> ht1;
    int nrow1 = tbl_Project_TD_2116_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531 = tbl_Project_TD_2116_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        int32_t _c_acctbal287 = tbl_Project_TD_2116_output.getInt32(i, 1);
        SW_Aggregate_TD_1234_key k = std::string(_cntrycode2531.data());
        int64_t _numcust2534L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _totacctbal2535L_sum_1 = _c_acctbal287;
        SW_Aggregate_TD_1234_payload p{_numcust2534L_count_0, _totacctbal2535L_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._numcust2534L_count_0 + _numcust2534L_count_0;
            p._numcust2534L_count_0 = count_0;
            int64_t sum_1 = (it->second)._totacctbal2535L_sum_1 + _totacctbal2535L_sum_1;
            p._totacctbal2535L_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531{};
        memcpy(_cntrycode2531.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1234_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _cntrycode2531);
        int64_t _numcust2534L = (it.second)._numcust2534L_count_0;
        tbl_Aggregate_TD_1234_output.setInt64(r, 1, _numcust2534L);
        int64_t _totacctbal2535L = (it.second)._totacctbal2535L_sum_1;
        tbl_Aggregate_TD_1234_output.setInt64(r, 2, _totacctbal2535L);
        ++r;
    }
    tbl_Aggregate_TD_1234_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1234_output #Row: " << tbl_Aggregate_TD_1234_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0895(Table &tbl_Aggregate_TD_1234_output, Table &tbl_Sort_TD_0895_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cntrycode#2531 ASC NULLS FIRST)
    // Input: ListBuffer(cntrycode#2531, numcust#2534L, totacctbal#2535L)
    // Output: ListBuffer(cntrycode#2531, numcust#2534L, totacctbal#2535L)
    struct SW_Sort_TD_0895Row {
        std::string _cntrycode2531;
        int64_t _numcust2534L;
        int64_t _totacctbal2535L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0895Row& a, const SW_Sort_TD_0895Row& b) const { return 
 (a._cntrycode2531 < b._cntrycode2531); 
}
    }SW_Sort_TD_0895_order; 

    int nrow1 = tbl_Aggregate_TD_1234_output.getNumRow();
    std::vector<SW_Sort_TD_0895Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531 = tbl_Aggregate_TD_1234_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _numcust2534L = tbl_Aggregate_TD_1234_output.getInt64(i, 1);
        int64_t _totacctbal2535L = tbl_Aggregate_TD_1234_output.getInt64(i, 2);
        SW_Sort_TD_0895Row t = {std::string(_cntrycode2531.data()),_numcust2534L,_totacctbal2535L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0895_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531{};
        memcpy(_cntrycode2531.data(), (it._cntrycode2531).data(), (it._cntrycode2531).length());
        tbl_Sort_TD_0895_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _cntrycode2531);
        tbl_Sort_TD_0895_output.setInt64(r, 1, it._numcust2534L);
        tbl_Sort_TD_0895_output.setInt64(r, 2, it._totacctbal2535L);
        if (r < 10) {
            std::cout << (it._cntrycode2531).data() << " " << it._numcust2534L << " " << it._totacctbal2535L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0895_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0895_output #Row: " << tbl_Sort_TD_0895_output.getNumRow() << std::endl;
}

