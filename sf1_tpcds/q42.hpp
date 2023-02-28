#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_6699739(Table &tbl_SerializeFromObject_TD_7731462_input, Table &tbl_Filter_TD_6699739_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7731462_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_7731462_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_7731462_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_7731462_input.getInt32(i, 0);
            tbl_Filter_TD_6699739_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_7731462_input.getInt32(i, 1);
            tbl_Filter_TD_6699739_output.setInt32(r, 1, _ss_item_sk1208_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_7731462_input.getInt64(i, 2);
            tbl_Filter_TD_6699739_output.setInt64(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_6699739_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6699739_output #Row: " << tbl_Filter_TD_6699739_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6944806(Table &tbl_SerializeFromObject_TD_7821225_input, Table &tbl_Filter_TD_6944806_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 11) AND (d_year#126 = 2000))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7821225_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_7821225_input.getInt32(i, 2);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_7821225_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_7821225_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 11) && (_d_year126 == 2000))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_7821225_input.getInt32(i, 0);
            tbl_Filter_TD_6944806_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_7821225_input.getInt32(i, 1);
            tbl_Filter_TD_6944806_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_6944806_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6944806_output #Row: " << tbl_Filter_TD_6944806_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5690610(Table &tbl_SerializeFromObject_TD_6419602_input, Table &tbl_Filter_TD_5690610_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manager_id#248) AND (i_manager_id#248 = 1)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_category_id#239, i_category#240, i_manager_id#248)
    // Output: ListBuffer(i_item_sk#228, i_category_id#239, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6419602_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_SerializeFromObject_TD_6419602_input.getInt32(i, 3);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_6419602_input.getInt32(i, 0);
        if (((_i_manager_id248!= 0) && (_i_manager_id248 == 1)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_6419602_input.getInt32(i, 0);
            tbl_Filter_TD_5690610_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_6419602_input.getInt32(i, 1);
            tbl_Filter_TD_5690610_output.setInt32(r, 1, _i_category_id239_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_6419602_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5690610_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_5690610_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5690610_output #Row: " << tbl_Filter_TD_5690610_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_4543981_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_4543981_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4543981_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4543981_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_4543981_payload_leftMajor {
    int32_t _d_year126;
    int32_t _ss_item_sk1208;
    int64_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_4543981_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4543981_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4543981_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4543981_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4543981_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_category_id239;
    std::string _i_category240;
};
void SW_JOIN_INNER_TD_4543981(Table &tbl_JOIN_INNER_TD_5581443_output, Table &tbl_Filter_TD_5690610_output, Table &tbl_JOIN_INNER_TD_4543981_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(d_year#126, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_category_id#239, i_category#240)
    // Output Table: ListBuffer(d_year#126, ss_ext_sales_price#1221, i_category_id#239, i_category#240)
    int left_nrow = tbl_JOIN_INNER_TD_5581443_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5690610_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4543981_key_leftMajor, SW_JOIN_INNER_TD_4543981_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5581443_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5581443_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4543981_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5581443_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5581443_output.getInt32(i, 1);
            int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5581443_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_4543981_payload_leftMajor payloadA{_d_year126, _ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5690610_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5690610_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4543981_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_5690610_output.getInt32(i, 0);
                int32_t _i_category_id239 = tbl_Filter_TD_5690610_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_5690610_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_4543981_output.setInt32(r, 0, _d_year126);
                tbl_JOIN_INNER_TD_4543981_output.setInt64(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_4543981_output.setInt32(r, 2, _i_category_id239);
                tbl_JOIN_INNER_TD_4543981_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4543981_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4543981_key_rightMajor, SW_JOIN_INNER_TD_4543981_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5690610_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5690610_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4543981_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_5690610_output.getInt32(i, 0);
            int32_t _i_category_id239 = tbl_Filter_TD_5690610_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_5690610_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_4543981_payload_rightMajor payloadA{_i_item_sk228, _i_category_id239, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5581443_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5581443_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4543981_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5581443_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5581443_output.getInt32(i, 1);
                int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5581443_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_4543981_output.setInt32(r, 2, _i_category_id239);
                tbl_JOIN_INNER_TD_4543981_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_category240_n);
                tbl_JOIN_INNER_TD_4543981_output.setInt32(r, 0, _d_year126);
                tbl_JOIN_INNER_TD_4543981_output.setInt64(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4543981_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4543981_output #Row: " << tbl_JOIN_INNER_TD_4543981_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3891450_key {
    int32_t _d_year126;
    int32_t _i_category_id239;
    std::string _i_category240;
    bool operator==(const SW_Aggregate_TD_3891450_key& other) const { return (_d_year126 == other._d_year126) && (_i_category_id239 == other._i_category_id239) && (_i_category240 == other._i_category240); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3891450_key> {
    std::size_t operator() (const SW_Aggregate_TD_3891450_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._i_category_id239)) + (hash<string>()(k._i_category240));
    }
};
}
struct SW_Aggregate_TD_3891450_payload {
    int64_t _sumss_ext_sales_price3545_sum_0;
};
void SW_Aggregate_TD_3891450(Table &tbl_JOIN_INNER_TD_4543981_output, Table &tbl_Aggregate_TD_3891450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#126, i_category_id#239, i_category#240, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS sum(ss_ext_sales_price)#3545)
    // Input: ListBuffer(d_year#126, ss_ext_sales_price#1221, i_category_id#239, i_category#240)
    // Output: ListBuffer(d_year#126, i_category_id#239, i_category#240, sum(ss_ext_sales_price)#3545)
    std::unordered_map<SW_Aggregate_TD_3891450_key, SW_Aggregate_TD_3891450_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4543981_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4543981_output.getInt32(i, 0);
        int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_4543981_output.getInt64(i, 1);
        int32_t _i_category_id239 = tbl_JOIN_INNER_TD_4543981_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_4543981_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_3891450_key k{_d_year126, _i_category_id239, std::string(_i_category240.data())};
        int64_t _sumss_ext_sales_price3545_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_3891450_payload p{_sumss_ext_sales_price3545_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sumss_ext_sales_price3545_sum_0 + _sumss_ext_sales_price3545_sum_0;
            p._sumss_ext_sales_price3545_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_3891450_output.setInt32(r, 0, (it.first)._d_year126);
        tbl_Aggregate_TD_3891450_output.setInt32(r, 1, (it.first)._i_category_id239);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_3891450_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240);
        int64_t _sumss_ext_sales_price3545 = (it.second)._sumss_ext_sales_price3545_sum_0;
        tbl_Aggregate_TD_3891450_output.setInt64(r, 3, _sumss_ext_sales_price3545);
        ++r;
    }
    tbl_Aggregate_TD_3891450_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3891450_output #Row: " << tbl_Aggregate_TD_3891450_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2595355(Table &tbl_Aggregate_TD_3891450_output, Table &tbl_Sort_TD_2595355_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(sum(ss_ext_sales_price)#3545 DESC NULLS LAST, d_year#126 ASC NULLS FIRST, i_category_id#239 ASC NULLS FIRST, i_category#240 ASC NULLS FIRST)
    // Input: ListBuffer(d_year#126, i_category_id#239, i_category#240, sum(ss_ext_sales_price)#3545)
    // Output: ListBuffer(d_year#126, i_category_id#239, i_category#240, sum(ss_ext_sales_price)#3545)
    struct SW_Sort_TD_2595355Row {
        int32_t _d_year126;
        int32_t _i_category_id239;
        std::string _i_category240;
        int64_t _sumss_ext_sales_price3545;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2595355Row& a, const SW_Sort_TD_2595355Row& b) const { return 
 (a._sumss_ext_sales_price3545 > b._sumss_ext_sales_price3545) || 
 ((a._sumss_ext_sales_price3545 == b._sumss_ext_sales_price3545) && (a._d_year126 < b._d_year126)) || 
 ((a._sumss_ext_sales_price3545 == b._sumss_ext_sales_price3545) && (a._d_year126 == b._d_year126) && (a._i_category_id239 < b._i_category_id239)) || 
 ((a._sumss_ext_sales_price3545 == b._sumss_ext_sales_price3545) && (a._d_year126 == b._d_year126) && (a._i_category_id239 == b._i_category_id239) && (a._i_category240 < b._i_category240)); 
}
    }SW_Sort_TD_2595355_order; 

    int nrow1 = tbl_Aggregate_TD_3891450_output.getNumRow();
    std::vector<SW_Sort_TD_2595355Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Aggregate_TD_3891450_output.getInt32(i, 0);
        int32_t _i_category_id239 = tbl_Aggregate_TD_3891450_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_3891450_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int64_t _sumss_ext_sales_price3545 = tbl_Aggregate_TD_3891450_output.getInt64(i, 3);
        SW_Sort_TD_2595355Row t = {_d_year126,_i_category_id239,std::string(_i_category240.data()),_sumss_ext_sales_price3545};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2595355_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2595355_output.setInt32(r, 0, it._d_year126);
        tbl_Sort_TD_2595355_output.setInt32(r, 1, it._i_category_id239);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2595355_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _i_category240);
        tbl_Sort_TD_2595355_output.setInt64(r, 3, it._sumss_ext_sales_price3545);
        ++r;
    }
    tbl_Sort_TD_2595355_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2595355_output #Row: " << tbl_Sort_TD_2595355_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1773891(Table &tbl_Sort_TD_2595355_output, Table &tbl_LocalLimit_TD_1773891_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(d_year#126, i_category_id#239, i_category#240, sum(ss_ext_sales_price)#3545)
    // Output: ListBuffer(d_year#126, i_category_id#239, i_category#240, sum(ss_ext_sales_price)#3545)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1773891_output.setInt32(r, 0, tbl_Sort_TD_2595355_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1773891_output.setInt32(r, 1, tbl_Sort_TD_2595355_output.getInt32(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2595355_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1773891_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
        tbl_LocalLimit_TD_1773891_output.setInt64(r, 3, tbl_Sort_TD_2595355_output.getInt64(i, 3));
        r++;
    }
    tbl_LocalLimit_TD_1773891_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1773891_output #Row: " << tbl_LocalLimit_TD_1773891_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0454005(Table &tbl_LocalLimit_TD_1773891_output, Table &tbl_GlobalLimit_TD_0454005_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(d_year#126, i_category_id#239, i_category#240, sum(ss_ext_sales_price)#3545)
    // Output: ListBuffer(d_year#126, i_category_id#239, i_category#240, sum(ss_ext_sales_price)#3545)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0454005_output.setInt32(r, 0, tbl_LocalLimit_TD_1773891_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0454005_output.setInt32(r, 1, tbl_LocalLimit_TD_1773891_output.getInt32(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1773891_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0454005_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_n);
        tbl_GlobalLimit_TD_0454005_output.setInt64(r, 3, tbl_LocalLimit_TD_1773891_output.getInt64(i, 3));
        r++;
    }
    tbl_GlobalLimit_TD_0454005_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0454005_output #Row: " << tbl_GlobalLimit_TD_0454005_output.getNumRow() << std::endl;
}

