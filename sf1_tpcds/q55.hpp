#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_629538(Table &tbl_SerializeFromObject_TD_7582469_input, Table &tbl_Filter_TD_629538_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7582469_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_7582469_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_7582469_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_7582469_input.getInt32(i, 0);
            tbl_Filter_TD_629538_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_7582469_input.getInt32(i, 1);
            tbl_Filter_TD_629538_output.setInt32(r, 1, _ss_item_sk1208_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_7582469_input.getInt64(i, 2);
            tbl_Filter_TD_629538_output.setInt64(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_629538_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_629538_output #Row: " << tbl_Filter_TD_629538_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6209123(Table &tbl_SerializeFromObject_TD_7313926_input, Table &tbl_Filter_TD_6209123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 11) AND (d_year#126 = 1999))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7313926_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_7313926_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_7313926_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_7313926_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 11) && (_d_year126 == 1999))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_7313926_input.getInt32(i, 0);
            tbl_Filter_TD_6209123_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_6209123_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6209123_output #Row: " << tbl_Filter_TD_6209123_output.getNumRow() << std::endl;
}

void SW_Filter_TD_578850(Table &tbl_SerializeFromObject_TD_6333934_input, Table &tbl_Filter_TD_578850_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manager_id#248) AND (i_manager_id#248 = 28)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236, i_manager_id#248)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6333934_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_SerializeFromObject_TD_6333934_input.getInt32(i, 3);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_6333934_input.getInt32(i, 0);
        if (((_i_manager_id248!= 0) && (_i_manager_id248 == 28)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_6333934_input.getInt32(i, 0);
            tbl_Filter_TD_578850_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_6333934_input.getInt32(i, 1);
            tbl_Filter_TD_578850_output.setInt32(r, 1, _i_brand_id235_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_6333934_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_578850_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_t);
            r++;
        }
    }
    tbl_Filter_TD_578850_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_578850_output #Row: " << tbl_Filter_TD_578850_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_4666132_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_4666132_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4666132_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4666132_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_4666132_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int64_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_4666132_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4666132_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4666132_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4666132_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4666132_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    std::string _i_brand236;
};
void SW_JOIN_INNER_TD_4666132(Table &tbl_JOIN_INNER_TD_5163427_output, Table &tbl_Filter_TD_578850_output, Table &tbl_JOIN_INNER_TD_4666132_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, i_brand_id#235, i_brand#236)
    int left_nrow = tbl_JOIN_INNER_TD_5163427_output.getNumRow();
    int right_nrow = tbl_Filter_TD_578850_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4666132_key_leftMajor, SW_JOIN_INNER_TD_4666132_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5163427_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5163427_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4666132_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5163427_output.getInt32(i, 0);
            int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5163427_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_4666132_payload_leftMajor payloadA{_ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_578850_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_578850_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4666132_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_578850_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_578850_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_578850_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                tbl_JOIN_INNER_TD_4666132_output.setInt64(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_4666132_output.setInt32(r, 1, _i_brand_id235);
                tbl_JOIN_INNER_TD_4666132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4666132_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4666132_key_rightMajor, SW_JOIN_INNER_TD_4666132_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_578850_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_578850_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4666132_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_578850_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_578850_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_578850_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            SW_JOIN_INNER_TD_4666132_payload_rightMajor payloadA{_i_item_sk228, _i_brand_id235, _i_brand236};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5163427_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5163427_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4666132_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5163427_output.getInt32(i, 0);
                int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5163427_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_4666132_output.setInt32(r, 1, _i_brand_id235);
                tbl_JOIN_INNER_TD_4666132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_n);
                tbl_JOIN_INNER_TD_4666132_output.setInt64(r, 0, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4666132_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4666132_output #Row: " << tbl_JOIN_INNER_TD_4666132_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3693067_key {
    std::string _i_brand236;
    int32_t _i_brand_id235;
    bool operator==(const SW_Aggregate_TD_3693067_key& other) const { return (_i_brand236 == other._i_brand236) && (_i_brand_id235 == other._i_brand_id235); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3693067_key> {
    std::size_t operator() (const SW_Aggregate_TD_3693067_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_brand236)) + (hash<int32_t>()(k._i_brand_id235));
    }
};
}
struct SW_Aggregate_TD_3693067_payload {
    int32_t _brand_id3544;
    std::string _brand3545;
    int64_t _ext_price3546_sum_0;
};
void SW_Aggregate_TD_3693067(Table &tbl_JOIN_INNER_TD_4666132_output, Table &tbl_Aggregate_TD_3693067_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand#236, i_brand_id#235, i_brand_id#235 AS brand_id#3544, i_brand#236 AS brand#3545, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS ext_price#3546)
    // Input: ListBuffer(ss_ext_sales_price#1221, i_brand_id#235, i_brand#236)
    // Output: ListBuffer(brand_id#3544, brand#3545, ext_price#3546)
    std::unordered_map<SW_Aggregate_TD_3693067_key, SW_Aggregate_TD_3693067_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4666132_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_4666132_output.getInt64(i, 0);
        int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_4666132_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4666132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_3693067_key k{std::string(_i_brand236.data()), _i_brand_id235};
        int32_t _brand_id3544 = _i_brand_id235;
        std::array<char, TPCDS_READ_MAX + 1> _brand3545 = _i_brand236;
        int64_t _ext_price3546_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_3693067_payload p{_brand_id3544, std::string(_brand3545.data()), _ext_price3546_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ext_price3546_sum_0 + _ext_price3546_sum_0;
            p._ext_price3546_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_brand236 not required in the output table
        // _i_brand_id235 not required in the output table
        tbl_Aggregate_TD_3693067_output.setInt32(r, 0, (it.second)._brand_id3544);
        std::array<char, TPCDS_READ_MAX + 1> _brand3545_n{};
        memcpy(_brand3545_n.data(), (it.second)._brand3545.data(), (it.second)._brand3545.length());
        tbl_Aggregate_TD_3693067_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand3545_n);
        int64_t _ext_price3546 = (it.second)._ext_price3546_sum_0;
        tbl_Aggregate_TD_3693067_output.setInt64(r, 2, _ext_price3546);
        ++r;
    }
    tbl_Aggregate_TD_3693067_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3693067_output #Row: " << tbl_Aggregate_TD_3693067_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2348625(Table &tbl_Aggregate_TD_3693067_output, Table &tbl_Sort_TD_2348625_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ext_price#3546 DESC NULLS LAST, brand_id#3544 ASC NULLS FIRST)
    // Input: ListBuffer(brand_id#3544, brand#3545, ext_price#3546)
    // Output: ListBuffer(brand_id#3544, brand#3545, ext_price#3546)
    struct SW_Sort_TD_2348625Row {
        int32_t _brand_id3544;
        std::string _brand3545;
        int64_t _ext_price3546;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2348625Row& a, const SW_Sort_TD_2348625Row& b) const { return 
 (a._ext_price3546 > b._ext_price3546) || 
 ((a._ext_price3546 == b._ext_price3546) && (a._brand_id3544 < b._brand_id3544)); 
}
    }SW_Sort_TD_2348625_order; 

    int nrow1 = tbl_Aggregate_TD_3693067_output.getNumRow();
    std::vector<SW_Sort_TD_2348625Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3544 = tbl_Aggregate_TD_3693067_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _brand3545 = tbl_Aggregate_TD_3693067_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int64_t _ext_price3546 = tbl_Aggregate_TD_3693067_output.getInt64(i, 2);
        SW_Sort_TD_2348625Row t = {_brand_id3544,std::string(_brand3545.data()),_ext_price3546};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2348625_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2348625_output.setInt32(r, 0, it._brand_id3544);
        std::array<char, TPCDS_READ_MAX + 1> _brand3545{};
        memcpy(_brand3545.data(), (it._brand3545).data(), (it._brand3545).length());
        tbl_Sort_TD_2348625_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _brand3545);
        tbl_Sort_TD_2348625_output.setInt64(r, 2, it._ext_price3546);
        ++r;
    }
    tbl_Sort_TD_2348625_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2348625_output #Row: " << tbl_Sort_TD_2348625_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1962371(Table &tbl_Sort_TD_2348625_output, Table &tbl_LocalLimit_TD_1962371_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(brand_id#3544, brand#3545, ext_price#3546)
    // Output: ListBuffer(brand_id#3544, brand#3545, ext_price#3546)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1962371_output.setInt32(r, 0, tbl_Sort_TD_2348625_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _brand3545_n = tbl_Sort_TD_2348625_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1962371_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand3545_n);
        tbl_LocalLimit_TD_1962371_output.setInt64(r, 2, tbl_Sort_TD_2348625_output.getInt64(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1962371_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1962371_output #Row: " << tbl_LocalLimit_TD_1962371_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0694811(Table &tbl_LocalLimit_TD_1962371_output, Table &tbl_GlobalLimit_TD_0694811_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(brand_id#3544, brand#3545, ext_price#3546)
    // Output: ListBuffer(brand_id#3544, brand#3545, ext_price#3546)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0694811_output.setInt32(r, 0, tbl_LocalLimit_TD_1962371_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _brand3545_n = tbl_LocalLimit_TD_1962371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0694811_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand3545_n);
        tbl_GlobalLimit_TD_0694811_output.setInt64(r, 2, tbl_LocalLimit_TD_1962371_output.getInt64(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0694811_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0694811_output #Row: " << tbl_GlobalLimit_TD_0694811_output.getNumRow() << std::endl;
}

