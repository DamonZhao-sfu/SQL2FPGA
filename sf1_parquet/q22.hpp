#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7707(Table &tbl_SerializeFromObject_TD_8725_input, Table &tbl_Filter_TD_7707_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((cast(CheckOverflow((promote_precision(c_acctbal#2544) * 100.00), DecimalType(16,2), true) as int) > 0) AND substring(c_phone#2543, 1, 2) IN (19,11,16,27,15,22,12)))
    // Input: ListBuffer(c_acctbal#2544, c_phone#2543)
    // Output: ListBuffer(c_acctbal#2544)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8725_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal2544 = tbl_SerializeFromObject_TD_8725_input.getInt32(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_phone2543 = tbl_SerializeFromObject_TD_8725_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        auto reuse_col_str_168 = std::string(_c_phone2543.data()).substr(0, 2);
        if ((_c_acctbal2544 > 0) && ((reuse_col_str_168 == "19") || (reuse_col_str_168 == "11") || (reuse_col_str_168 == "16") || (reuse_col_str_168 == "27") || (reuse_col_str_168 == "15") || (reuse_col_str_168 == "22") || (reuse_col_str_168 == "12") || (0))) {
            int32_t _c_acctbal2544_t = tbl_SerializeFromObject_TD_8725_input.getInt32(i, 0);
            tbl_Filter_TD_7707_output.setInt32(r, 0, _c_acctbal2544_t);
            r++;
        }
    }
    tbl_Filter_TD_7707_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7707_output #Row: " << tbl_Filter_TD_7707_output.getNumRow() << std::endl;
}

void SW_Project_TD_6411(Table &tbl_Filter_TD_7707_output, Table &tbl_Project_TD_6411_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(CheckOverflow((promote_precision(c_acctbal#2544) * 100.00), DecimalType(16,2), true) as int) AS c_acctbal#287)
    // Input: ListBuffer(c_acctbal#2544)
    // Output: ListBuffer(c_acctbal#287)
    int nrow1 = tbl_Filter_TD_7707_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal2544 = tbl_Filter_TD_7707_output.getInt32(i, 0);
        int32_t _c_acctbal287 = (_c_acctbal2544 * 100.00);
        tbl_Project_TD_6411_output.setInt32(i, 0, _c_acctbal287);
    }
    tbl_Project_TD_6411_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6411_output #Row: " << tbl_Project_TD_6411_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5407(Table &tbl_Project_TD_6411_output, Table &tbl_Aggregate_TD_5407_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(c_acctbal#287) AS avg(c_acctbal)#2538)
    // Input: ListBuffer(c_acctbal#287)
    // Output: ListBuffer(avg(c_acctbal)#2538)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Project_TD_6411_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_acctbal287 = tbl_Project_TD_6411_output.getInt32(i, 0);
        int64_t _avgc_acctbal2538_avg_0 = _c_acctbal287;
        avg_0 = (avg_0 + _avgc_acctbal2538_avg_0);
    }
    int r = 0;
    int64_t _avgc_acctbal2538 = avg_0 / nrow1;
    tbl_Aggregate_TD_5407_output.setInt64(r++, 0, _avgc_acctbal2538);
    tbl_Aggregate_TD_5407_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5407_output #Row: " << tbl_Aggregate_TD_5407_output.getNumRow() << std::endl;
}

void SW_Project_TD_4374(Table &tbl_SerializeFromObject_TD_5158_input, Table &tbl_Project_TD_4374_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_custkey#325L as int) AS o_custkey#352)
    // Input: ListBuffer(o_custkey#325L)
    // Output: ListBuffer(o_custkey#352)
    int nrow1 = tbl_SerializeFromObject_TD_5158_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _o_custkey325L = tbl_SerializeFromObject_TD_5158_input.getInt32(i, 0);
        int32_t _o_custkey352 = _o_custkey325L;
        tbl_Project_TD_4374_output.setInt32(i, 0, _o_custkey352);
    }
    tbl_Project_TD_4374_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4374_output #Row: " << tbl_Project_TD_4374_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4231(Table &tbl_SerializeFromObject_TD_5208_input, Table &tbl_Aggregate_TD_5407_output, Table &tbl_Filter_TD_4231_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((substring(c_phone#257, 1, 2) IN (19,11,16,27,15,22,12) AND (cast(cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) as double) > scalar-subquery#2532 [])))
    // Input: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    // Output: ListBuffer(c_custkey#253L, c_phone#257, c_acctbal#258)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5208_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_phone257 = tbl_SerializeFromObject_TD_5208_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int32_t _c_acctbal258 = tbl_SerializeFromObject_TD_5208_input.getInt32(i, 2);
        auto reuse_col_str_377 = std::string(_c_phone257.data()).substr(0, 2);
        if (((reuse_col_str_377 == "19") || (reuse_col_str_377 == "11") || (reuse_col_str_377 == "16") || (reuse_col_str_377 == "27") || (reuse_col_str_377 == "15") || (reuse_col_str_377 == "22") || (reuse_col_str_377 == "12") || (0)) && (_c_acctbal258 > tbl_Aggregate_TD_5407_output.getInt64(0, 0))) {
            int64_t _c_custkey253L_t = tbl_SerializeFromObject_TD_5208_input.getInt64(i, 0);
            tbl_Filter_TD_4231_output.setInt64(r, 0, _c_custkey253L_t);
            tbl_Filter_TD_4231_output.setInt32(r, 1, i);
            int32_t _c_acctbal258_t = tbl_SerializeFromObject_TD_5208_input.getInt32(i, 2);
            tbl_Filter_TD_4231_output.setInt32(r, 2, _c_acctbal258_t);
            r++;
        }
    }
    tbl_Filter_TD_4231_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4231_output #Row: " << tbl_Filter_TD_4231_output.getNumRow() << std::endl;
}


void SW_Project_TD_2538(Table &tbl_JOIN_LEFTANTI_TD_3260_output, Table &tbl_SerializeFromObject_TD_5208_input, Table &tbl_Project_TD_2538_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Project
    // Operation: ListBuffer(substring(c_phone#257, 1, 2) AS cntrycode#2531, cast(CheckOverflow((promote_precision(c_acctbal#258) * 100.00), DecimalType(16,2), true) as int) AS c_acctbal#287)
    // Input: ListBuffer(c_phone#257, c_acctbal#258)
    // Output: ListBuffer(cntrycode#2531, c_acctbal#287)
    int nrow1 = tbl_JOIN_LEFTANTI_TD_3260_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _c_phone257 = tbl_SerializeFromObject_TD_5208_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_LEFTANTI_TD_3260_output.getInt32(i, 0), 1);
        int32_t _c_acctbal258 = tbl_JOIN_LEFTANTI_TD_3260_output.getInt32(i, 1);
        std::string _cntrycode2531_str = std::string(_c_phone257.data()).substr(0, 2);
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531{};
        memcpy(_cntrycode2531.data(), _cntrycode2531_str.data(), (_cntrycode2531_str).length());
        tbl_Project_TD_2538_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0, _cntrycode2531);
        int32_t _c_acctbal287 = (_c_acctbal258 * 100.00);
        tbl_Project_TD_2538_output.setInt32(i, 1, _c_acctbal287);
    }
    tbl_Project_TD_2538_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2538_output #Row: " << tbl_Project_TD_2538_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_1140_key;
struct SW_Aggregate_TD_1140_payload {
    int64_t _numcust2534L_count_0;
    int64_t _totacctbal2535L_sum_1;
};
void SW_Aggregate_TD_1140(Table &tbl_Project_TD_2538_output, Table &tbl_Aggregate_TD_1140_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cntrycode#2531, count(1) AS numcust#2534L, sum(c_acctbal#287) AS totacctbal#2535L)
    // Input: ListBuffer(cntrycode#2531, c_acctbal#287)
    // Output: ListBuffer(cntrycode#2531, numcust#2534L, totacctbal#2535L)
    std::unordered_map<SW_Aggregate_TD_1140_key, SW_Aggregate_TD_1140_payload> ht1;
    int nrow1 = tbl_Project_TD_2538_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531 = tbl_Project_TD_2538_output.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 0);
        int32_t _c_acctbal287 = tbl_Project_TD_2538_output.getInt32(i, 1);
        SW_Aggregate_TD_1140_key k = std::string(_cntrycode2531.data());
        int64_t _numcust2534L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _totacctbal2535L_sum_1 = _c_acctbal287;
        SW_Aggregate_TD_1140_payload p{_numcust2534L_count_0, _totacctbal2535L_sum_1};
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
        tbl_Aggregate_TD_1140_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _cntrycode2531);
        int64_t _numcust2534L = (it.second)._numcust2534L_count_0;
        tbl_Aggregate_TD_1140_output.setInt64(r, 1, _numcust2534L);
        int64_t _totacctbal2535L = (it.second)._totacctbal2535L_sum_1;
        tbl_Aggregate_TD_1140_output.setInt64(r, 2, _totacctbal2535L);
        ++r;
    }
    tbl_Aggregate_TD_1140_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1140_output #Row: " << tbl_Aggregate_TD_1140_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0934(Table &tbl_Aggregate_TD_1140_output, Table &tbl_Sort_TD_0934_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cntrycode#2531 ASC NULLS FIRST)
    // Input: ListBuffer(cntrycode#2531, numcust#2534L, totacctbal#2535L)
    // Output: ListBuffer(cntrycode#2531, numcust#2534L, totacctbal#2535L)
    struct SW_Sort_TD_0934Row {
        std::string _cntrycode2531;
        int64_t _numcust2534L;
        int64_t _totacctbal2535L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0934Row& a, const SW_Sort_TD_0934Row& b) const { return 
 (a._cntrycode2531 < b._cntrycode2531); 
}
    }SW_Sort_TD_0934_order; 

    int nrow1 = tbl_Aggregate_TD_1140_output.getNumRow();
    std::vector<SW_Sort_TD_0934Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531 = tbl_Aggregate_TD_1140_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _numcust2534L = tbl_Aggregate_TD_1140_output.getInt64(i, 1);
        int64_t _totacctbal2535L = tbl_Aggregate_TD_1140_output.getInt64(i, 2);
        SW_Sort_TD_0934Row t = {std::string(_cntrycode2531.data()),_numcust2534L,_totacctbal2535L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0934_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _cntrycode2531{};
        memcpy(_cntrycode2531.data(), (it._cntrycode2531).data(), (it._cntrycode2531).length());
        tbl_Sort_TD_0934_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _cntrycode2531);
        tbl_Sort_TD_0934_output.setInt64(r, 1, it._numcust2534L);
        tbl_Sort_TD_0934_output.setInt64(r, 2, it._totacctbal2535L);
        if (r < 10) {
            std::cout << (it._cntrycode2531).data() << " " << it._numcust2534L << " " << it._totacctbal2535L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0934_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0934_output #Row: " << tbl_Sort_TD_0934_output.getNumRow() << std::endl;
}

