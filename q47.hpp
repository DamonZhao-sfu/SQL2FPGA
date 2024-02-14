#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_14801(Table &tbl_SerializeFromObject_TD_15210_input, Table &tbl_Filter_TD_14801_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15210_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 2);
        if ((1) && ((1) && (1))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 0);
            tbl_Filter_TD_14801_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 1);
            tbl_Filter_TD_14801_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 2);
            tbl_Filter_TD_14801_output.setInt32(r, 2, _ss_store_sk1213_t);
            int32_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 3);
            tbl_Filter_TD_14801_output.setInt32(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_14801_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14801_output #Row: " << tbl_Filter_TD_14801_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1470(Table &tbl_SerializeFromObject_TD_15275_input, Table &tbl_Filter_TD_1470_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND (isnotnull(i_category#240) AND isnotnull(i_brand#236))))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15275_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_15275_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_15275_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_15275_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15275_input.getInt32(i, 0);
            tbl_Filter_TD_1470_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_15275_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_1470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_15275_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_1470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_1470_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1470_output #Row: " << tbl_Filter_TD_1470_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13616(Table &tbl_SerializeFromObject_TD_14429_input, Table &tbl_Filter_TD_13616_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#126 = 1999) OR ((d_year#126 = 1998) AND (d_moy#128 = 12))) OR ((d_year#126 = 2000) AND (d_moy#128 = 1))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14429_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_14429_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_14429_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_14429_input.getInt32(i, 0);
        if ((((_d_year126 == 1999) || ((_d_year126 == 1998) && (_d_moy128 == 12))) || ((_d_year126 == 2000) && (_d_moy128 == 1))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_14429_input.getInt32(i, 0);
            tbl_Filter_TD_13616_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_14429_input.getInt32(i, 1);
            tbl_Filter_TD_13616_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_14429_input.getInt32(i, 2);
            tbl_Filter_TD_13616_output.setInt32(r, 2, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_13616_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13616_output #Row: " << tbl_Filter_TD_13616_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13710_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_13710_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13710_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13710_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_13710_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_13710_key_rightMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_13710_key_rightMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13710_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13710_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_13710_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
void SW_JOIN_INNER_TD_13710(Table &tbl_Filter_TD_1470_output, Table &tbl_Filter_TD_14801_output, Table &tbl_JOIN_INNER_TD_13710_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    int left_nrow = tbl_Filter_TD_1470_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14801_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13710_key_leftMajor, SW_JOIN_INNER_TD_13710_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1470_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_1470_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13710_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_1470_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_1470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_1470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_13710_payload_leftMajor payloadA{_i_item_sk228, _i_brand236, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14801_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_14801_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13710_key_leftMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_14801_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_14801_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_14801_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_Filter_TD_14801_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13710_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13710_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_13710_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_13710_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_13710_output.setInt32(r, 4, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13710_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13710_key_rightMajor, SW_JOIN_INNER_TD_13710_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14801_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_14801_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13710_key_rightMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_14801_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_14801_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_14801_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_Filter_TD_14801_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13710_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1470_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_1470_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13710_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _i_item_sk228 = tbl_Filter_TD_1470_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_1470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_1470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_13710_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_13710_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_13710_output.setInt32(r, 4, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_13710_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13710_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13710_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13710_output #Row: " << tbl_JOIN_INNER_TD_13710_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12710(Table &tbl_SerializeFromObject_TD_13308_input, Table &tbl_Filter_TD_12710_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_item_sk#4680) AND isnotnull(ss_sold_date_sk#4678)) AND isnotnull(ss_store_sk#4685)))
    // Input: ListBuffer(ss_sold_date_sk#4678, ss_item_sk#4680, ss_store_sk#4685, ss_sales_price#4691)
    // Output: ListBuffer(ss_sold_date_sk#4678, ss_item_sk#4680, ss_store_sk#4685, ss_sales_price#4691)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13308_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk4680 = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk4678 = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 0);
        int32_t _ss_store_sk4685 = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 2);
        if (((1) && (1)) && (1)) {
            int32_t _ss_sold_date_sk4678_t = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 0);
            tbl_Filter_TD_12710_output.setInt32(r, 0, _ss_sold_date_sk4678_t);
            int32_t _ss_item_sk4680_t = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 1);
            tbl_Filter_TD_12710_output.setInt32(r, 1, _ss_item_sk4680_t);
            int32_t _ss_store_sk4685_t = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 2);
            tbl_Filter_TD_12710_output.setInt32(r, 2, _ss_store_sk4685_t);
            int32_t _ss_sales_price4691_t = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 3);
            tbl_Filter_TD_12710_output.setInt32(r, 3, _ss_sales_price4691_t);
            r++;
        }
    }
    tbl_Filter_TD_12710_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12710_output #Row: " << tbl_Filter_TD_12710_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12379(Table &tbl_SerializeFromObject_TD_13672_input, Table &tbl_Filter_TD_12379_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#4656) AND (isnotnull(i_category#4668) AND isnotnull(i_brand#4664))))
    // Input: ListBuffer(i_item_sk#4656, i_brand#4664, i_category#4668)
    // Output: ListBuffer(i_item_sk#4656, i_brand#4664, i_category#4668)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13672_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4656 = tbl_SerializeFromObject_TD_13672_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4668 = tbl_SerializeFromObject_TD_13672_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4664 = tbl_SerializeFromObject_TD_13672_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _i_item_sk4656_t = tbl_SerializeFromObject_TD_13672_input.getInt32(i, 0);
            tbl_Filter_TD_12379_output.setInt32(r, 0, _i_item_sk4656_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_t = tbl_SerializeFromObject_TD_13672_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4664_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category4668_t = tbl_SerializeFromObject_TD_13672_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category4668_t);
            r++;
        }
    }
    tbl_Filter_TD_12379_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12379_output #Row: " << tbl_Filter_TD_12379_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1295(Table &tbl_SerializeFromObject_TD_13157_input, Table &tbl_Filter_TD_1295_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#378) AND (isnotnull(s_store_name#383) AND isnotnull(s_company_name#395))))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13157_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_13157_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_SerializeFromObject_TD_13157_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_SerializeFromObject_TD_13157_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((1) && ((1) && (1))) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_13157_input.getInt32(i, 0);
            tbl_Filter_TD_1295_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_13157_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_1295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_SerializeFromObject_TD_13157_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_1295_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name395_t);
            r++;
        }
    }
    tbl_Filter_TD_1295_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1295_output #Row: " << tbl_Filter_TD_1295_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12932_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_12932_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12932_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12932_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_12932_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_12932_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_12932_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12932_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12932_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_12932_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_12932(Table &tbl_JOIN_INNER_TD_13710_output, Table &tbl_Filter_TD_13616_output, Table &tbl_JOIN_INNER_TD_12932_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(i_brand#236, i_category#240, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_store_sk#1213, ss_sales_price#1219, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_13710_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13616_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12932_key_leftMajor, SW_JOIN_INNER_TD_12932_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13710_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_13710_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12932_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13710_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13710_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_13710_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_13710_output.getInt32(i, 3);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_13710_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_12932_payload_leftMajor payloadA{_i_brand236, _i_category240, _ss_sold_date_sk1206, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13616_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13616_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12932_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_13616_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_13616_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Filter_TD_13616_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_12932_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12932_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12932_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_12932_output.setInt32(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_12932_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12932_output.setInt32(r, 5, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12932_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12932_key_rightMajor, SW_JOIN_INNER_TD_12932_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13616_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13616_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12932_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_13616_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_13616_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Filter_TD_13616_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12932_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13710_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_13710_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12932_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13710_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13710_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_13710_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_13710_output.getInt32(i, 3);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_13710_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_12932_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12932_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_12932_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12932_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12932_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_12932_output.setInt32(r, 3, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12932_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12932_output #Row: " << tbl_JOIN_INNER_TD_12932_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11421(Table &tbl_SerializeFromObject_TD_12441_input, Table &tbl_Filter_TD_11421_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_item_sk#4787) AND isnotnull(ss_sold_date_sk#4785)) AND isnotnull(ss_store_sk#4792)))
    // Input: ListBuffer(ss_sold_date_sk#4785, ss_item_sk#4787, ss_store_sk#4792, ss_sales_price#4798)
    // Output: ListBuffer(ss_sold_date_sk#4785, ss_item_sk#4787, ss_store_sk#4792, ss_sales_price#4798)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12441_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk4787 = tbl_SerializeFromObject_TD_12441_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk4785 = tbl_SerializeFromObject_TD_12441_input.getInt32(i, 0);
        int32_t _ss_store_sk4792 = tbl_SerializeFromObject_TD_12441_input.getInt32(i, 2);
        if (((1) && (1)) && (1)) {
            int32_t _ss_sold_date_sk4785_t = tbl_SerializeFromObject_TD_12441_input.getInt32(i, 0);
            tbl_Filter_TD_11421_output.setInt32(r, 0, _ss_sold_date_sk4785_t);
            int32_t _ss_item_sk4787_t = tbl_SerializeFromObject_TD_12441_input.getInt32(i, 1);
            tbl_Filter_TD_11421_output.setInt32(r, 1, _ss_item_sk4787_t);
            int32_t _ss_store_sk4792_t = tbl_SerializeFromObject_TD_12441_input.getInt32(i, 2);
            tbl_Filter_TD_11421_output.setInt32(r, 2, _ss_store_sk4792_t);
            int32_t _ss_sales_price4798_t = tbl_SerializeFromObject_TD_12441_input.getInt32(i, 3);
            tbl_Filter_TD_11421_output.setInt32(r, 3, _ss_sales_price4798_t);
            r++;
        }
    }
    tbl_Filter_TD_11421_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11421_output #Row: " << tbl_Filter_TD_11421_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11390(Table &tbl_SerializeFromObject_TD_1266_input, Table &tbl_Filter_TD_11390_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#4763) AND (isnotnull(i_category#4775) AND isnotnull(i_brand#4771))))
    // Input: ListBuffer(i_item_sk#4763, i_brand#4771, i_category#4775)
    // Output: ListBuffer(i_item_sk#4763, i_brand#4771, i_category#4775)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1266_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4763 = tbl_SerializeFromObject_TD_1266_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4775 = tbl_SerializeFromObject_TD_1266_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4771 = tbl_SerializeFromObject_TD_1266_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _i_item_sk4763_t = tbl_SerializeFromObject_TD_1266_input.getInt32(i, 0);
            tbl_Filter_TD_11390_output.setInt32(r, 0, _i_item_sk4763_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_t = tbl_SerializeFromObject_TD_1266_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11390_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4771_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category4775_t = tbl_SerializeFromObject_TD_1266_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_11390_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category4775_t);
            r++;
        }
    }
    tbl_Filter_TD_11390_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11390_output #Row: " << tbl_Filter_TD_11390_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11691(Table &tbl_SerializeFromObject_TD_12715_input, Table &tbl_Filter_TD_11691_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#4707 = 1999) OR ((d_year#4707 = 1998) AND (d_moy#4709 = 12))) OR ((d_year#4707 = 2000) AND (d_moy#4709 = 1))) AND isnotnull(d_date_sk#4701)))
    // Input: ListBuffer(d_date_sk#4701, d_year#4707, d_moy#4709)
    // Output: ListBuffer(d_date_sk#4701, d_year#4707, d_moy#4709)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12715_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4707 = tbl_SerializeFromObject_TD_12715_input.getInt32(i, 1);
        int32_t _d_moy4709 = tbl_SerializeFromObject_TD_12715_input.getInt32(i, 2);
        int32_t _d_date_sk4701 = tbl_SerializeFromObject_TD_12715_input.getInt32(i, 0);
        if ((((_d_year4707 == 1999) || ((_d_year4707 == 1998) && (_d_moy4709 == 12))) || ((_d_year4707 == 2000) && (_d_moy4709 == 1))) && (1)) {
            int32_t _d_date_sk4701_t = tbl_SerializeFromObject_TD_12715_input.getInt32(i, 0);
            tbl_Filter_TD_11691_output.setInt32(r, 0, _d_date_sk4701_t);
            int32_t _d_year4707_t = tbl_SerializeFromObject_TD_12715_input.getInt32(i, 1);
            tbl_Filter_TD_11691_output.setInt32(r, 1, _d_year4707_t);
            int32_t _d_moy4709_t = tbl_SerializeFromObject_TD_12715_input.getInt32(i, 2);
            tbl_Filter_TD_11691_output.setInt32(r, 2, _d_moy4709_t);
            r++;
        }
    }
    tbl_Filter_TD_11691_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11691_output #Row: " << tbl_Filter_TD_11691_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11466_key_leftMajor {
    int32_t _i_item_sk4656;
    bool operator==(const SW_JOIN_INNER_TD_11466_key_leftMajor& other) const {
        return ((_i_item_sk4656 == other._i_item_sk4656));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11466_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11466_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4656));
    }
};
}
struct SW_JOIN_INNER_TD_11466_payload_leftMajor {
    int32_t _i_item_sk4656;
    std::string _i_brand4664;
    std::string _i_category4668;
};
struct SW_JOIN_INNER_TD_11466_key_rightMajor {
    int32_t _ss_item_sk4680;
    bool operator==(const SW_JOIN_INNER_TD_11466_key_rightMajor& other) const {
        return ((_ss_item_sk4680 == other._ss_item_sk4680));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11466_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11466_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk4680));
    }
};
}
struct SW_JOIN_INNER_TD_11466_payload_rightMajor {
    int32_t _ss_sold_date_sk4678;
    int32_t _ss_item_sk4680;
    int32_t _ss_store_sk4685;
    int32_t _ss_sales_price4691;
};
void SW_JOIN_INNER_TD_11466(Table &tbl_Filter_TD_12379_output, Table &tbl_Filter_TD_12710_output, Table &tbl_JOIN_INNER_TD_11466_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#4680 = i_item_sk#4656))
    // Left Table: ListBuffer(i_item_sk#4656, i_brand#4664, i_category#4668)
    // Right Table: ListBuffer(ss_sold_date_sk#4678, ss_item_sk#4680, ss_store_sk#4685, ss_sales_price#4691)
    // Output Table: ListBuffer(i_brand#4664, i_category#4668, ss_sold_date_sk#4678, ss_store_sk#4685, ss_sales_price#4691)
    int left_nrow = tbl_Filter_TD_12379_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12710_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11466_key_leftMajor, SW_JOIN_INNER_TD_11466_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12379_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4656_k = tbl_Filter_TD_12379_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11466_key_leftMajor keyA{_i_item_sk4656_k};
            int32_t _i_item_sk4656 = tbl_Filter_TD_12379_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n = tbl_Filter_TD_12379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4664 = std::string(_i_brand4664_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n = tbl_Filter_TD_12379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category4668 = std::string(_i_category4668_n.data());
            SW_JOIN_INNER_TD_11466_payload_leftMajor payloadA{_i_item_sk4656, _i_brand4664, _i_category4668};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12710_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk4680_k = tbl_Filter_TD_12710_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11466_key_leftMajor{_ss_item_sk4680_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4656 = (it->second)._i_item_sk4656;
                std::string _i_brand4664 = (it->second)._i_brand4664;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n{};
                memcpy(_i_brand4664_n.data(), (_i_brand4664).data(), (_i_brand4664).length());
                std::string _i_category4668 = (it->second)._i_category4668;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n{};
                memcpy(_i_category4668_n.data(), (_i_category4668).data(), (_i_category4668).length());
                int32_t _ss_sold_date_sk4678 = tbl_Filter_TD_12710_output.getInt32(i, 0);
                int32_t _ss_item_sk4680 = tbl_Filter_TD_12710_output.getInt32(i, 1);
                int32_t _ss_store_sk4685 = tbl_Filter_TD_12710_output.getInt32(i, 2);
                int32_t _ss_sales_price4691 = tbl_Filter_TD_12710_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_11466_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4664_n);
                tbl_JOIN_INNER_TD_11466_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4668_n);
                tbl_JOIN_INNER_TD_11466_output.setInt32(r, 2, _ss_sold_date_sk4678);
                tbl_JOIN_INNER_TD_11466_output.setInt32(r, 3, _ss_store_sk4685);
                tbl_JOIN_INNER_TD_11466_output.setInt32(r, 4, _ss_sales_price4691);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11466_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11466_key_rightMajor, SW_JOIN_INNER_TD_11466_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12710_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk4680_k = tbl_Filter_TD_12710_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11466_key_rightMajor keyA{_ss_item_sk4680_k};
            int32_t _ss_sold_date_sk4678 = tbl_Filter_TD_12710_output.getInt32(i, 0);
            int32_t _ss_item_sk4680 = tbl_Filter_TD_12710_output.getInt32(i, 1);
            int32_t _ss_store_sk4685 = tbl_Filter_TD_12710_output.getInt32(i, 2);
            int32_t _ss_sales_price4691 = tbl_Filter_TD_12710_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11466_payload_rightMajor payloadA{_ss_sold_date_sk4678, _ss_item_sk4680, _ss_store_sk4685, _ss_sales_price4691};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12379_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4656_k = tbl_Filter_TD_12379_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11466_key_rightMajor{_i_item_sk4656_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk4678 = (it->second)._ss_sold_date_sk4678;
                int32_t _ss_item_sk4680 = (it->second)._ss_item_sk4680;
                int32_t _ss_store_sk4685 = (it->second)._ss_store_sk4685;
                int32_t _ss_sales_price4691 = (it->second)._ss_sales_price4691;
                int32_t _i_item_sk4656 = tbl_Filter_TD_12379_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n = tbl_Filter_TD_12379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4664 = std::string(_i_brand4664_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n = tbl_Filter_TD_12379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category4668 = std::string(_i_category4668_n.data());
                tbl_JOIN_INNER_TD_11466_output.setInt32(r, 2, _ss_sold_date_sk4678);
                tbl_JOIN_INNER_TD_11466_output.setInt32(r, 3, _ss_store_sk4685);
                tbl_JOIN_INNER_TD_11466_output.setInt32(r, 4, _ss_sales_price4691);
                tbl_JOIN_INNER_TD_11466_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4664_n);
                tbl_JOIN_INNER_TD_11466_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4668_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11466_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11466_output #Row: " << tbl_JOIN_INNER_TD_11466_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11291_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_11291_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11291_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11291_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_11291_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _ss_store_sk1213;
    int32_t _ss_sales_price1219;
    int32_t _d_year126;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_11291_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_11291_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11291_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11291_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_11291_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
    std::string _s_company_name395;
};
void SW_JOIN_INNER_TD_11291(Table &tbl_JOIN_INNER_TD_12932_output, Table &tbl_Filter_TD_1295_output, Table &tbl_JOIN_INNER_TD_11291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(i_brand#236, i_category#240, ss_store_sk#1213, ss_sales_price#1219, d_year#126, d_moy#128)
    // Right Table: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_sales_price#1219, d_year#126, d_moy#128, s_store_name#383, s_company_name#395)
    int left_nrow = tbl_JOIN_INNER_TD_12932_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1295_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11291_key_leftMajor, SW_JOIN_INNER_TD_11291_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12932_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11291_key_leftMajor keyA{_ss_store_sk1213_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12932_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12932_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 2);
            int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11291_payload_leftMajor payloadA{_i_brand236, _i_category240, _ss_store_sk1213, _ss_sales_price1219, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1295_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_1295_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11291_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _s_store_sk378 = tbl_Filter_TD_1295_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_1295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_1295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name395_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11291_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11291_key_rightMajor, SW_JOIN_INNER_TD_11291_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1295_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_1295_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11291_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_1295_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_1295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_1295_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            SW_JOIN_INNER_TD_11291_payload_rightMajor payloadA{_s_store_sk378, _s_store_name383, _s_company_name395};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12932_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11291_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_company_name395 = (it->second)._s_company_name395;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n{};
                memcpy(_s_company_name395_n.data(), (_s_company_name395).data(), (_s_company_name395).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12932_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12932_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 2);
                int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_12932_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name395_n);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11291_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11291_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11291_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11291_output #Row: " << tbl_JOIN_INNER_TD_11291_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10232(Table &tbl_SerializeFromObject_TD_11607_input, Table &tbl_Filter_TD_10232_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#4814 = 1999) OR ((d_year#4814 = 1998) AND (d_moy#4816 = 12))) OR ((d_year#4814 = 2000) AND (d_moy#4816 = 1))) AND isnotnull(d_date_sk#4808)))
    // Input: ListBuffer(d_date_sk#4808, d_year#4814, d_moy#4816)
    // Output: ListBuffer(d_date_sk#4808, d_year#4814, d_moy#4816)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11607_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4814 = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 1);
        int32_t _d_moy4816 = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 2);
        int32_t _d_date_sk4808 = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 0);
        if ((((_d_year4814 == 1999) || ((_d_year4814 == 1998) && (_d_moy4816 == 12))) || ((_d_year4814 == 2000) && (_d_moy4816 == 1))) && (1)) {
            int32_t _d_date_sk4808_t = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 0);
            tbl_Filter_TD_10232_output.setInt32(r, 0, _d_date_sk4808_t);
            int32_t _d_year4814_t = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 1);
            tbl_Filter_TD_10232_output.setInt32(r, 1, _d_year4814_t);
            int32_t _d_moy4816_t = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 2);
            tbl_Filter_TD_10232_output.setInt32(r, 2, _d_moy4816_t);
            r++;
        }
    }
    tbl_Filter_TD_10232_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10232_output #Row: " << tbl_Filter_TD_10232_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10246_key_leftMajor {
    int32_t _i_item_sk4763;
    bool operator==(const SW_JOIN_INNER_TD_10246_key_leftMajor& other) const {
        return ((_i_item_sk4763 == other._i_item_sk4763));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10246_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10246_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4763));
    }
};
}
struct SW_JOIN_INNER_TD_10246_payload_leftMajor {
    int32_t _i_item_sk4763;
    std::string _i_brand4771;
    std::string _i_category4775;
};
struct SW_JOIN_INNER_TD_10246_key_rightMajor {
    int32_t _ss_item_sk4787;
    bool operator==(const SW_JOIN_INNER_TD_10246_key_rightMajor& other) const {
        return ((_ss_item_sk4787 == other._ss_item_sk4787));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10246_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10246_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk4787));
    }
};
}
struct SW_JOIN_INNER_TD_10246_payload_rightMajor {
    int32_t _ss_sold_date_sk4785;
    int32_t _ss_item_sk4787;
    int32_t _ss_store_sk4792;
    int32_t _ss_sales_price4798;
};
void SW_JOIN_INNER_TD_10246(Table &tbl_Filter_TD_11390_output, Table &tbl_Filter_TD_11421_output, Table &tbl_JOIN_INNER_TD_10246_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#4787 = i_item_sk#4763))
    // Left Table: ListBuffer(i_item_sk#4763, i_brand#4771, i_category#4775)
    // Right Table: ListBuffer(ss_sold_date_sk#4785, ss_item_sk#4787, ss_store_sk#4792, ss_sales_price#4798)
    // Output Table: ListBuffer(i_brand#4771, i_category#4775, ss_sold_date_sk#4785, ss_store_sk#4792, ss_sales_price#4798)
    int left_nrow = tbl_Filter_TD_11390_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11421_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10246_key_leftMajor, SW_JOIN_INNER_TD_10246_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11390_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4763_k = tbl_Filter_TD_11390_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10246_key_leftMajor keyA{_i_item_sk4763_k};
            int32_t _i_item_sk4763 = tbl_Filter_TD_11390_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n = tbl_Filter_TD_11390_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4771 = std::string(_i_brand4771_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n = tbl_Filter_TD_11390_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category4775 = std::string(_i_category4775_n.data());
            SW_JOIN_INNER_TD_10246_payload_leftMajor payloadA{_i_item_sk4763, _i_brand4771, _i_category4775};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11421_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk4787_k = tbl_Filter_TD_11421_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10246_key_leftMajor{_ss_item_sk4787_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4763 = (it->second)._i_item_sk4763;
                std::string _i_brand4771 = (it->second)._i_brand4771;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n{};
                memcpy(_i_brand4771_n.data(), (_i_brand4771).data(), (_i_brand4771).length());
                std::string _i_category4775 = (it->second)._i_category4775;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n{};
                memcpy(_i_category4775_n.data(), (_i_category4775).data(), (_i_category4775).length());
                int32_t _ss_sold_date_sk4785 = tbl_Filter_TD_11421_output.getInt32(i, 0);
                int32_t _ss_item_sk4787 = tbl_Filter_TD_11421_output.getInt32(i, 1);
                int32_t _ss_store_sk4792 = tbl_Filter_TD_11421_output.getInt32(i, 2);
                int32_t _ss_sales_price4798 = tbl_Filter_TD_11421_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10246_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4771_n);
                tbl_JOIN_INNER_TD_10246_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4775_n);
                tbl_JOIN_INNER_TD_10246_output.setInt32(r, 2, _ss_sold_date_sk4785);
                tbl_JOIN_INNER_TD_10246_output.setInt32(r, 3, _ss_store_sk4792);
                tbl_JOIN_INNER_TD_10246_output.setInt32(r, 4, _ss_sales_price4798);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10246_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10246_key_rightMajor, SW_JOIN_INNER_TD_10246_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11421_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk4787_k = tbl_Filter_TD_11421_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10246_key_rightMajor keyA{_ss_item_sk4787_k};
            int32_t _ss_sold_date_sk4785 = tbl_Filter_TD_11421_output.getInt32(i, 0);
            int32_t _ss_item_sk4787 = tbl_Filter_TD_11421_output.getInt32(i, 1);
            int32_t _ss_store_sk4792 = tbl_Filter_TD_11421_output.getInt32(i, 2);
            int32_t _ss_sales_price4798 = tbl_Filter_TD_11421_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10246_payload_rightMajor payloadA{_ss_sold_date_sk4785, _ss_item_sk4787, _ss_store_sk4792, _ss_sales_price4798};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11390_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4763_k = tbl_Filter_TD_11390_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10246_key_rightMajor{_i_item_sk4763_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk4785 = (it->second)._ss_sold_date_sk4785;
                int32_t _ss_item_sk4787 = (it->second)._ss_item_sk4787;
                int32_t _ss_store_sk4792 = (it->second)._ss_store_sk4792;
                int32_t _ss_sales_price4798 = (it->second)._ss_sales_price4798;
                int32_t _i_item_sk4763 = tbl_Filter_TD_11390_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n = tbl_Filter_TD_11390_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4771 = std::string(_i_brand4771_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n = tbl_Filter_TD_11390_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category4775 = std::string(_i_category4775_n.data());
                tbl_JOIN_INNER_TD_10246_output.setInt32(r, 2, _ss_sold_date_sk4785);
                tbl_JOIN_INNER_TD_10246_output.setInt32(r, 3, _ss_store_sk4792);
                tbl_JOIN_INNER_TD_10246_output.setInt32(r, 4, _ss_sales_price4798);
                tbl_JOIN_INNER_TD_10246_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4771_n);
                tbl_JOIN_INNER_TD_10246_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4775_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10246_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10246_output #Row: " << tbl_JOIN_INNER_TD_10246_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10408(Table &tbl_SerializeFromObject_TD_11759_input, Table &tbl_Filter_TD_10408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#4729) AND (isnotnull(s_store_name#4734) AND isnotnull(s_company_name#4746))))
    // Input: ListBuffer(s_store_sk#4729, s_store_name#4734, s_company_name#4746)
    // Output: ListBuffer(s_store_sk#4729, s_store_name#4734, s_company_name#4746)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11759_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk4729 = tbl_SerializeFromObject_TD_11759_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734 = tbl_SerializeFromObject_TD_11759_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746 = tbl_SerializeFromObject_TD_11759_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((1) && ((1) && (1))) {
            int32_t _s_store_sk4729_t = tbl_SerializeFromObject_TD_11759_input.getInt32(i, 0);
            tbl_Filter_TD_10408_output.setInt32(r, 0, _s_store_sk4729_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_t = tbl_SerializeFromObject_TD_11759_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name4734_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_t = tbl_SerializeFromObject_TD_11759_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name4746_t);
            r++;
        }
    }
    tbl_Filter_TD_10408_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10408_output #Row: " << tbl_Filter_TD_10408_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10223_key_leftMajor {
    int32_t _ss_sold_date_sk4678;
    bool operator==(const SW_JOIN_INNER_TD_10223_key_leftMajor& other) const {
        return ((_ss_sold_date_sk4678 == other._ss_sold_date_sk4678));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10223_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10223_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk4678));
    }
};
}
struct SW_JOIN_INNER_TD_10223_payload_leftMajor {
    std::string _i_brand4664;
    std::string _i_category4668;
    int32_t _ss_sold_date_sk4678;
    int32_t _ss_store_sk4685;
    int32_t _ss_sales_price4691;
};
struct SW_JOIN_INNER_TD_10223_key_rightMajor {
    int32_t _d_date_sk4701;
    bool operator==(const SW_JOIN_INNER_TD_10223_key_rightMajor& other) const {
        return ((_d_date_sk4701 == other._d_date_sk4701));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10223_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10223_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4701));
    }
};
}
struct SW_JOIN_INNER_TD_10223_payload_rightMajor {
    int32_t _d_date_sk4701;
    int32_t _d_year4707;
    int32_t _d_moy4709;
};
void SW_JOIN_INNER_TD_10223(Table &tbl_JOIN_INNER_TD_11466_output, Table &tbl_Filter_TD_11691_output, Table &tbl_JOIN_INNER_TD_10223_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#4678 = d_date_sk#4701))
    // Left Table: ListBuffer(i_brand#4664, i_category#4668, ss_sold_date_sk#4678, ss_store_sk#4685, ss_sales_price#4691)
    // Right Table: ListBuffer(d_date_sk#4701, d_year#4707, d_moy#4709)
    // Output Table: ListBuffer(i_brand#4664, i_category#4668, ss_store_sk#4685, ss_sales_price#4691, d_year#4707, d_moy#4709)
    int left_nrow = tbl_JOIN_INNER_TD_11466_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11691_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10223_key_leftMajor, SW_JOIN_INNER_TD_10223_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11466_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk4678_k = tbl_JOIN_INNER_TD_11466_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10223_key_leftMajor keyA{_ss_sold_date_sk4678_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n = tbl_JOIN_INNER_TD_11466_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4664 = std::string(_i_brand4664_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n = tbl_JOIN_INNER_TD_11466_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4668 = std::string(_i_category4668_n.data());
            int32_t _ss_sold_date_sk4678 = tbl_JOIN_INNER_TD_11466_output.getInt32(i, 2);
            int32_t _ss_store_sk4685 = tbl_JOIN_INNER_TD_11466_output.getInt32(i, 3);
            int32_t _ss_sales_price4691 = tbl_JOIN_INNER_TD_11466_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_10223_payload_leftMajor payloadA{_i_brand4664, _i_category4668, _ss_sold_date_sk4678, _ss_store_sk4685, _ss_sales_price4691};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11691_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4701_k = tbl_Filter_TD_11691_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10223_key_leftMajor{_d_date_sk4701_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4664 = (it->second)._i_brand4664;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n{};
                memcpy(_i_brand4664_n.data(), (_i_brand4664).data(), (_i_brand4664).length());
                std::string _i_category4668 = (it->second)._i_category4668;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n{};
                memcpy(_i_category4668_n.data(), (_i_category4668).data(), (_i_category4668).length());
                int32_t _ss_sold_date_sk4678 = (it->second)._ss_sold_date_sk4678;
                int32_t _ss_store_sk4685 = (it->second)._ss_store_sk4685;
                int32_t _ss_sales_price4691 = (it->second)._ss_sales_price4691;
                int32_t _d_date_sk4701 = tbl_Filter_TD_11691_output.getInt32(i, 0);
                int32_t _d_year4707 = tbl_Filter_TD_11691_output.getInt32(i, 1);
                int32_t _d_moy4709 = tbl_Filter_TD_11691_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4664_n);
                tbl_JOIN_INNER_TD_10223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4668_n);
                tbl_JOIN_INNER_TD_10223_output.setInt32(r, 2, _ss_store_sk4685);
                tbl_JOIN_INNER_TD_10223_output.setInt32(r, 3, _ss_sales_price4691);
                tbl_JOIN_INNER_TD_10223_output.setInt32(r, 4, _d_year4707);
                tbl_JOIN_INNER_TD_10223_output.setInt32(r, 5, _d_moy4709);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10223_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10223_key_rightMajor, SW_JOIN_INNER_TD_10223_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11691_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4701_k = tbl_Filter_TD_11691_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10223_key_rightMajor keyA{_d_date_sk4701_k};
            int32_t _d_date_sk4701 = tbl_Filter_TD_11691_output.getInt32(i, 0);
            int32_t _d_year4707 = tbl_Filter_TD_11691_output.getInt32(i, 1);
            int32_t _d_moy4709 = tbl_Filter_TD_11691_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10223_payload_rightMajor payloadA{_d_date_sk4701, _d_year4707, _d_moy4709};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11466_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk4678_k = tbl_JOIN_INNER_TD_11466_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10223_key_rightMajor{_ss_sold_date_sk4678_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4701 = (it->second)._d_date_sk4701;
                int32_t _d_year4707 = (it->second)._d_year4707;
                int32_t _d_moy4709 = (it->second)._d_moy4709;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n = tbl_JOIN_INNER_TD_11466_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4664 = std::string(_i_brand4664_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n = tbl_JOIN_INNER_TD_11466_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4668 = std::string(_i_category4668_n.data());
                int32_t _ss_sold_date_sk4678 = tbl_JOIN_INNER_TD_11466_output.getInt32(i, 2);
                int32_t _ss_store_sk4685 = tbl_JOIN_INNER_TD_11466_output.getInt32(i, 3);
                int32_t _ss_sales_price4691 = tbl_JOIN_INNER_TD_11466_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_10223_output.setInt32(r, 4, _d_year4707);
                tbl_JOIN_INNER_TD_10223_output.setInt32(r, 5, _d_moy4709);
                tbl_JOIN_INNER_TD_10223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4664_n);
                tbl_JOIN_INNER_TD_10223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4668_n);
                tbl_JOIN_INNER_TD_10223_output.setInt32(r, 2, _ss_store_sk4685);
                tbl_JOIN_INNER_TD_10223_output.setInt32(r, 3, _ss_sales_price4691);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10223_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10223_output #Row: " << tbl_JOIN_INNER_TD_10223_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_10843_key {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_10843_key& other) const { return (_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395) && (_d_year126 == other._d_year126) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_10843_key> {
    std::size_t operator() (const SW_Aggregate_TD_10843_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_10843_payload {
    int32_t _sum_sales3892_sum_0;
    int32_t __w03906_sum_1;
};
void SW_Aggregate_TD_10843(Table &tbl_JOIN_INNER_TD_11291_output, Table &tbl_Aggregate_TD_10843_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS sum_sales#3892, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS _w0#3906)
    // Input: ListBuffer(i_brand#236, i_category#240, ss_sales_price#1219, d_year#126, d_moy#128, s_store_name#383, s_company_name#395)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, _w0#3906)
    std::unordered_map<SW_Aggregate_TD_10843_key, SW_Aggregate_TD_10843_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11291_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_11291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_11291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_11291_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_11291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_JOIN_INNER_TD_11291_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_10843_key k{std::string(_i_category240.data()), std::string(_i_brand236.data()), std::string(_s_store_name383.data()), std::string(_s_company_name395.data()), _d_year126, _d_moy128};
        int64_t _sum_sales3892_sum_0 = _ss_sales_price1219;
        int64_t __w03906_sum_1 = _ss_sales_price1219;
        SW_Aggregate_TD_10843_payload p{_sum_sales3892_sum_0, __w03906_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales3892_sum_0 + _sum_sales3892_sum_0;
            p._sum_sales3892_sum_0 = sum_0;
            int32_t sum_1 = (it->second).__w03906_sum_1 + __w03906_sum_1;
            p.__w03906_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_10843_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), ((it.first)._i_brand236).data(), ((it.first)._i_brand236).length());
        tbl_Aggregate_TD_10843_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), ((it.first)._s_store_name383).data(), ((it.first)._s_store_name383).length());
        tbl_Aggregate_TD_10843_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395{};
        memcpy(_s_company_name395.data(), ((it.first)._s_company_name395).data(), ((it.first)._s_company_name395).length());
        tbl_Aggregate_TD_10843_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395);
        tbl_Aggregate_TD_10843_output.setInt32(r, 4, (it.first)._d_year126);
        tbl_Aggregate_TD_10843_output.setInt32(r, 5, (it.first)._d_moy128);
        int32_t _sum_sales3892 = (it.second)._sum_sales3892_sum_0;
        tbl_Aggregate_TD_10843_output.setInt32(r, 6, _sum_sales3892);
        int32_t __w03906 = (it.second).__w03906_sum_1;
        tbl_Aggregate_TD_10843_output.setInt32(r, 7, __w03906);
        ++r;
    }
    tbl_Aggregate_TD_10843_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10843_output #Row: " << tbl_Aggregate_TD_10843_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9452(Table &tbl_SerializeFromObject_TD_10483_input, Table &tbl_Filter_TD_9452_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#4836) AND (isnotnull(s_store_name#4841) AND isnotnull(s_company_name#4853))))
    // Input: ListBuffer(s_store_sk#4836, s_store_name#4841, s_company_name#4853)
    // Output: ListBuffer(s_store_sk#4836, s_store_name#4841, s_company_name#4853)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10483_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk4836 = tbl_SerializeFromObject_TD_10483_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841 = tbl_SerializeFromObject_TD_10483_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853 = tbl_SerializeFromObject_TD_10483_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((1) && ((1) && (1))) {
            int32_t _s_store_sk4836_t = tbl_SerializeFromObject_TD_10483_input.getInt32(i, 0);
            tbl_Filter_TD_9452_output.setInt32(r, 0, _s_store_sk4836_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_t = tbl_SerializeFromObject_TD_10483_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9452_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name4841_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_t = tbl_SerializeFromObject_TD_10483_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9452_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name4853_t);
            r++;
        }
    }
    tbl_Filter_TD_9452_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9452_output #Row: " << tbl_Filter_TD_9452_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9705_key_leftMajor {
    int32_t _ss_sold_date_sk4785;
    bool operator==(const SW_JOIN_INNER_TD_9705_key_leftMajor& other) const {
        return ((_ss_sold_date_sk4785 == other._ss_sold_date_sk4785));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9705_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9705_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk4785));
    }
};
}
struct SW_JOIN_INNER_TD_9705_payload_leftMajor {
    std::string _i_brand4771;
    std::string _i_category4775;
    int32_t _ss_sold_date_sk4785;
    int32_t _ss_store_sk4792;
    int32_t _ss_sales_price4798;
};
struct SW_JOIN_INNER_TD_9705_key_rightMajor {
    int32_t _d_date_sk4808;
    bool operator==(const SW_JOIN_INNER_TD_9705_key_rightMajor& other) const {
        return ((_d_date_sk4808 == other._d_date_sk4808));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9705_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9705_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4808));
    }
};
}
struct SW_JOIN_INNER_TD_9705_payload_rightMajor {
    int32_t _d_date_sk4808;
    int32_t _d_year4814;
    int32_t _d_moy4816;
};
void SW_JOIN_INNER_TD_9705(Table &tbl_JOIN_INNER_TD_10246_output, Table &tbl_Filter_TD_10232_output, Table &tbl_JOIN_INNER_TD_9705_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#4785 = d_date_sk#4808))
    // Left Table: ListBuffer(i_brand#4771, i_category#4775, ss_sold_date_sk#4785, ss_store_sk#4792, ss_sales_price#4798)
    // Right Table: ListBuffer(d_date_sk#4808, d_year#4814, d_moy#4816)
    // Output Table: ListBuffer(i_brand#4771, i_category#4775, ss_store_sk#4792, ss_sales_price#4798, d_year#4814, d_moy#4816)
    int left_nrow = tbl_JOIN_INNER_TD_10246_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10232_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9705_key_leftMajor, SW_JOIN_INNER_TD_9705_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10246_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk4785_k = tbl_JOIN_INNER_TD_10246_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9705_key_leftMajor keyA{_ss_sold_date_sk4785_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n = tbl_JOIN_INNER_TD_10246_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4771 = std::string(_i_brand4771_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n = tbl_JOIN_INNER_TD_10246_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4775 = std::string(_i_category4775_n.data());
            int32_t _ss_sold_date_sk4785 = tbl_JOIN_INNER_TD_10246_output.getInt32(i, 2);
            int32_t _ss_store_sk4792 = tbl_JOIN_INNER_TD_10246_output.getInt32(i, 3);
            int32_t _ss_sales_price4798 = tbl_JOIN_INNER_TD_10246_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_9705_payload_leftMajor payloadA{_i_brand4771, _i_category4775, _ss_sold_date_sk4785, _ss_store_sk4792, _ss_sales_price4798};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10232_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4808_k = tbl_Filter_TD_10232_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9705_key_leftMajor{_d_date_sk4808_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4771 = (it->second)._i_brand4771;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n{};
                memcpy(_i_brand4771_n.data(), (_i_brand4771).data(), (_i_brand4771).length());
                std::string _i_category4775 = (it->second)._i_category4775;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n{};
                memcpy(_i_category4775_n.data(), (_i_category4775).data(), (_i_category4775).length());
                int32_t _ss_sold_date_sk4785 = (it->second)._ss_sold_date_sk4785;
                int32_t _ss_store_sk4792 = (it->second)._ss_store_sk4792;
                int32_t _ss_sales_price4798 = (it->second)._ss_sales_price4798;
                int32_t _d_date_sk4808 = tbl_Filter_TD_10232_output.getInt32(i, 0);
                int32_t _d_year4814 = tbl_Filter_TD_10232_output.getInt32(i, 1);
                int32_t _d_moy4816 = tbl_Filter_TD_10232_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9705_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4771_n);
                tbl_JOIN_INNER_TD_9705_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4775_n);
                tbl_JOIN_INNER_TD_9705_output.setInt32(r, 2, _ss_store_sk4792);
                tbl_JOIN_INNER_TD_9705_output.setInt32(r, 3, _ss_sales_price4798);
                tbl_JOIN_INNER_TD_9705_output.setInt32(r, 4, _d_year4814);
                tbl_JOIN_INNER_TD_9705_output.setInt32(r, 5, _d_moy4816);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9705_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9705_key_rightMajor, SW_JOIN_INNER_TD_9705_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10232_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4808_k = tbl_Filter_TD_10232_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9705_key_rightMajor keyA{_d_date_sk4808_k};
            int32_t _d_date_sk4808 = tbl_Filter_TD_10232_output.getInt32(i, 0);
            int32_t _d_year4814 = tbl_Filter_TD_10232_output.getInt32(i, 1);
            int32_t _d_moy4816 = tbl_Filter_TD_10232_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9705_payload_rightMajor payloadA{_d_date_sk4808, _d_year4814, _d_moy4816};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10246_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk4785_k = tbl_JOIN_INNER_TD_10246_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9705_key_rightMajor{_ss_sold_date_sk4785_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4808 = (it->second)._d_date_sk4808;
                int32_t _d_year4814 = (it->second)._d_year4814;
                int32_t _d_moy4816 = (it->second)._d_moy4816;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n = tbl_JOIN_INNER_TD_10246_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4771 = std::string(_i_brand4771_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n = tbl_JOIN_INNER_TD_10246_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4775 = std::string(_i_category4775_n.data());
                int32_t _ss_sold_date_sk4785 = tbl_JOIN_INNER_TD_10246_output.getInt32(i, 2);
                int32_t _ss_store_sk4792 = tbl_JOIN_INNER_TD_10246_output.getInt32(i, 3);
                int32_t _ss_sales_price4798 = tbl_JOIN_INNER_TD_10246_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_9705_output.setInt32(r, 4, _d_year4814);
                tbl_JOIN_INNER_TD_9705_output.setInt32(r, 5, _d_moy4816);
                tbl_JOIN_INNER_TD_9705_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4771_n);
                tbl_JOIN_INNER_TD_9705_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4775_n);
                tbl_JOIN_INNER_TD_9705_output.setInt32(r, 2, _ss_store_sk4792);
                tbl_JOIN_INNER_TD_9705_output.setInt32(r, 3, _ss_sales_price4798);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9705_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9705_output #Row: " << tbl_JOIN_INNER_TD_9705_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9379_key_leftMajor {
    int32_t _ss_store_sk4685;
    bool operator==(const SW_JOIN_INNER_TD_9379_key_leftMajor& other) const {
        return ((_ss_store_sk4685 == other._ss_store_sk4685));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9379_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9379_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk4685));
    }
};
}
struct SW_JOIN_INNER_TD_9379_payload_leftMajor {
    std::string _i_brand4664;
    std::string _i_category4668;
    int32_t _ss_store_sk4685;
    int32_t _ss_sales_price4691;
    int32_t _d_year4707;
    int32_t _d_moy4709;
};
struct SW_JOIN_INNER_TD_9379_key_rightMajor {
    int32_t _s_store_sk4729;
    bool operator==(const SW_JOIN_INNER_TD_9379_key_rightMajor& other) const {
        return ((_s_store_sk4729 == other._s_store_sk4729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9379_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9379_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk4729));
    }
};
}
struct SW_JOIN_INNER_TD_9379_payload_rightMajor {
    int32_t _s_store_sk4729;
    std::string _s_store_name4734;
    std::string _s_company_name4746;
};
void SW_JOIN_INNER_TD_9379(Table &tbl_JOIN_INNER_TD_10223_output, Table &tbl_Filter_TD_10408_output, Table &tbl_JOIN_INNER_TD_9379_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#4685 = s_store_sk#4729))
    // Left Table: ListBuffer(i_brand#4664, i_category#4668, ss_store_sk#4685, ss_sales_price#4691, d_year#4707, d_moy#4709)
    // Right Table: ListBuffer(s_store_sk#4729, s_store_name#4734, s_company_name#4746)
    // Output Table: ListBuffer(i_brand#4664, i_category#4668, ss_sales_price#4691, d_year#4707, d_moy#4709, s_store_name#4734, s_company_name#4746)
    int left_nrow = tbl_JOIN_INNER_TD_10223_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10408_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9379_key_leftMajor, SW_JOIN_INNER_TD_9379_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10223_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk4685_k = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9379_key_leftMajor keyA{_ss_store_sk4685_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n = tbl_JOIN_INNER_TD_10223_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4664 = std::string(_i_brand4664_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n = tbl_JOIN_INNER_TD_10223_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4668 = std::string(_i_category4668_n.data());
            int32_t _ss_store_sk4685 = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 2);
            int32_t _ss_sales_price4691 = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 3);
            int32_t _d_year4707 = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 4);
            int32_t _d_moy4709 = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9379_payload_leftMajor payloadA{_i_brand4664, _i_category4668, _ss_store_sk4685, _ss_sales_price4691, _d_year4707, _d_moy4709};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10408_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk4729_k = tbl_Filter_TD_10408_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9379_key_leftMajor{_s_store_sk4729_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4664 = (it->second)._i_brand4664;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n{};
                memcpy(_i_brand4664_n.data(), (_i_brand4664).data(), (_i_brand4664).length());
                std::string _i_category4668 = (it->second)._i_category4668;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n{};
                memcpy(_i_category4668_n.data(), (_i_category4668).data(), (_i_category4668).length());
                int32_t _ss_store_sk4685 = (it->second)._ss_store_sk4685;
                int32_t _ss_sales_price4691 = (it->second)._ss_sales_price4691;
                int32_t _d_year4707 = (it->second)._d_year4707;
                int32_t _d_moy4709 = (it->second)._d_moy4709;
                int32_t _s_store_sk4729 = tbl_Filter_TD_10408_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_n = tbl_Filter_TD_10408_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name4734 = std::string(_s_store_name4734_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_n = tbl_Filter_TD_10408_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name4746 = std::string(_s_company_name4746_n.data());
                tbl_JOIN_INNER_TD_9379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4664_n);
                tbl_JOIN_INNER_TD_9379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4668_n);
                tbl_JOIN_INNER_TD_9379_output.setInt32(r, 2, _ss_sales_price4691);
                tbl_JOIN_INNER_TD_9379_output.setInt32(r, 3, _d_year4707);
                tbl_JOIN_INNER_TD_9379_output.setInt32(r, 4, _d_moy4709);
                tbl_JOIN_INNER_TD_9379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name4734_n);
                tbl_JOIN_INNER_TD_9379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name4746_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9379_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9379_key_rightMajor, SW_JOIN_INNER_TD_9379_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10408_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk4729_k = tbl_Filter_TD_10408_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9379_key_rightMajor keyA{_s_store_sk4729_k};
            int32_t _s_store_sk4729 = tbl_Filter_TD_10408_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_n = tbl_Filter_TD_10408_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name4734 = std::string(_s_store_name4734_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_n = tbl_Filter_TD_10408_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name4746 = std::string(_s_company_name4746_n.data());
            SW_JOIN_INNER_TD_9379_payload_rightMajor payloadA{_s_store_sk4729, _s_store_name4734, _s_company_name4746};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10223_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk4685_k = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9379_key_rightMajor{_ss_store_sk4685_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk4729 = (it->second)._s_store_sk4729;
                std::string _s_store_name4734 = (it->second)._s_store_name4734;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_n{};
                memcpy(_s_store_name4734_n.data(), (_s_store_name4734).data(), (_s_store_name4734).length());
                std::string _s_company_name4746 = (it->second)._s_company_name4746;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_n{};
                memcpy(_s_company_name4746_n.data(), (_s_company_name4746).data(), (_s_company_name4746).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n = tbl_JOIN_INNER_TD_10223_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4664 = std::string(_i_brand4664_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n = tbl_JOIN_INNER_TD_10223_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4668 = std::string(_i_category4668_n.data());
                int32_t _ss_store_sk4685 = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 2);
                int32_t _ss_sales_price4691 = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 3);
                int32_t _d_year4707 = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 4);
                int32_t _d_moy4709 = tbl_JOIN_INNER_TD_10223_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name4734_n);
                tbl_JOIN_INNER_TD_9379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name4746_n);
                tbl_JOIN_INNER_TD_9379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4664_n);
                tbl_JOIN_INNER_TD_9379_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4668_n);
                tbl_JOIN_INNER_TD_9379_output.setInt32(r, 2, _ss_sales_price4691);
                tbl_JOIN_INNER_TD_9379_output.setInt32(r, 3, _d_year4707);
                tbl_JOIN_INNER_TD_9379_output.setInt32(r, 4, _d_moy4709);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9379_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9379_output #Row: " << tbl_JOIN_INNER_TD_9379_output.getNumRow() << std::endl;
}

void SW_Window_TD_9139(Table &tbl_Aggregate_TD_10843_output, Table &tbl_Window_TD_9139_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#126, d_moy#128) windowspecdefinition(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126 ASC NULLS FIRST, d_moy#128 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#3894)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, _w0#3906)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, _w0#3906, rn#3894)
    struct SW_Window_TD_9139Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _sum_sales3892;
        int32_t __w03906;
    }; 

    int nrow = tbl_Aggregate_TD_10843_output.getNumRow();
    std::vector<SW_Window_TD_9139Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_10843_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_9139_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Aggregate_TD_10843_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_9139_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Aggregate_TD_10843_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_9139_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Aggregate_TD_10843_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_9139_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        int32_t _d_year126 = tbl_Aggregate_TD_10843_output.getInt32(i, 4);
        tbl_Window_TD_9139_output.setInt32(r, 4,_d_year126);
        int32_t _d_moy128 = tbl_Aggregate_TD_10843_output.getInt32(i, 5);
        tbl_Window_TD_9139_output.setInt32(r, 5,_d_moy128);
        int32_t _sum_sales3892 = tbl_Aggregate_TD_10843_output.getInt32(i, 6);
        tbl_Window_TD_9139_output.setInt32(r, 6,_sum_sales3892);
        int32_t __w03906 = tbl_Aggregate_TD_10843_output.getInt32(i, 7);
        tbl_Window_TD_9139_output.setInt32(r, 7,__w03906);
        r++;
        SW_Window_TD_9139Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_sum_sales3892,__w03906};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_9139Row& a, const SW_Window_TD_9139Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 < b._s_store_name383)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 < b._s_company_name395)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 < b._d_year126)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 == b._d_year126) && (a._d_moy128 < b._d_moy128)); 
}
    }SW_Window_TD_9139_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_9139_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category240 == rows0[i-1]._i_category240 && rows0[i]._i_brand236 == rows0[i-1]._i_brand236 && rows0[i]._s_store_name383 == rows0[i-1]._s_store_name383 && rows0[i]._s_company_name395 == rows0[i-1]._s_company_name395);
        isSameOrderKey0 = ( rows0[i]._d_year126 == rows0[i-1]._d_year126 && rows0[i]._d_moy128 == rows0[i-1]._d_moy128);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_9139_output.setInt32(r, 8, ranks0[i]);
    }
    tbl_Window_TD_9139_output.setNumRow(r);
    std::cout << "tbl_Window_TD_9139_output #Row: " << tbl_Window_TD_9139_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8104_key_leftMajor {
    int32_t _ss_store_sk4792;
    bool operator==(const SW_JOIN_INNER_TD_8104_key_leftMajor& other) const {
        return ((_ss_store_sk4792 == other._ss_store_sk4792));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8104_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8104_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk4792));
    }
};
}
struct SW_JOIN_INNER_TD_8104_payload_leftMajor {
    std::string _i_brand4771;
    std::string _i_category4775;
    int32_t _ss_store_sk4792;
    int32_t _ss_sales_price4798;
    int32_t _d_year4814;
    int32_t _d_moy4816;
};
struct SW_JOIN_INNER_TD_8104_key_rightMajor {
    int32_t _s_store_sk4836;
    bool operator==(const SW_JOIN_INNER_TD_8104_key_rightMajor& other) const {
        return ((_s_store_sk4836 == other._s_store_sk4836));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8104_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8104_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk4836));
    }
};
}
struct SW_JOIN_INNER_TD_8104_payload_rightMajor {
    int32_t _s_store_sk4836;
    std::string _s_store_name4841;
    std::string _s_company_name4853;
};
void SW_JOIN_INNER_TD_8104(Table &tbl_JOIN_INNER_TD_9705_output, Table &tbl_Filter_TD_9452_output, Table &tbl_JOIN_INNER_TD_8104_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#4792 = s_store_sk#4836))
    // Left Table: ListBuffer(i_brand#4771, i_category#4775, ss_store_sk#4792, ss_sales_price#4798, d_year#4814, d_moy#4816)
    // Right Table: ListBuffer(s_store_sk#4836, s_store_name#4841, s_company_name#4853)
    // Output Table: ListBuffer(i_brand#4771, i_category#4775, ss_sales_price#4798, d_year#4814, d_moy#4816, s_store_name#4841, s_company_name#4853)
    int left_nrow = tbl_JOIN_INNER_TD_9705_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9452_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8104_key_leftMajor, SW_JOIN_INNER_TD_8104_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9705_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk4792_k = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8104_key_leftMajor keyA{_ss_store_sk4792_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n = tbl_JOIN_INNER_TD_9705_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4771 = std::string(_i_brand4771_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n = tbl_JOIN_INNER_TD_9705_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4775 = std::string(_i_category4775_n.data());
            int32_t _ss_store_sk4792 = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 2);
            int32_t _ss_sales_price4798 = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 3);
            int32_t _d_year4814 = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 4);
            int32_t _d_moy4816 = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8104_payload_leftMajor payloadA{_i_brand4771, _i_category4775, _ss_store_sk4792, _ss_sales_price4798, _d_year4814, _d_moy4816};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9452_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk4836_k = tbl_Filter_TD_9452_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8104_key_leftMajor{_s_store_sk4836_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4771 = (it->second)._i_brand4771;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n{};
                memcpy(_i_brand4771_n.data(), (_i_brand4771).data(), (_i_brand4771).length());
                std::string _i_category4775 = (it->second)._i_category4775;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n{};
                memcpy(_i_category4775_n.data(), (_i_category4775).data(), (_i_category4775).length());
                int32_t _ss_store_sk4792 = (it->second)._ss_store_sk4792;
                int32_t _ss_sales_price4798 = (it->second)._ss_sales_price4798;
                int32_t _d_year4814 = (it->second)._d_year4814;
                int32_t _d_moy4816 = (it->second)._d_moy4816;
                int32_t _s_store_sk4836 = tbl_Filter_TD_9452_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_n = tbl_Filter_TD_9452_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name4841 = std::string(_s_store_name4841_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_n = tbl_Filter_TD_9452_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name4853 = std::string(_s_company_name4853_n.data());
                tbl_JOIN_INNER_TD_8104_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4771_n);
                tbl_JOIN_INNER_TD_8104_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4775_n);
                tbl_JOIN_INNER_TD_8104_output.setInt32(r, 2, _ss_sales_price4798);
                tbl_JOIN_INNER_TD_8104_output.setInt32(r, 3, _d_year4814);
                tbl_JOIN_INNER_TD_8104_output.setInt32(r, 4, _d_moy4816);
                tbl_JOIN_INNER_TD_8104_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name4841_n);
                tbl_JOIN_INNER_TD_8104_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name4853_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8104_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8104_key_rightMajor, SW_JOIN_INNER_TD_8104_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9452_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk4836_k = tbl_Filter_TD_9452_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8104_key_rightMajor keyA{_s_store_sk4836_k};
            int32_t _s_store_sk4836 = tbl_Filter_TD_9452_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_n = tbl_Filter_TD_9452_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name4841 = std::string(_s_store_name4841_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_n = tbl_Filter_TD_9452_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name4853 = std::string(_s_company_name4853_n.data());
            SW_JOIN_INNER_TD_8104_payload_rightMajor payloadA{_s_store_sk4836, _s_store_name4841, _s_company_name4853};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9705_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk4792_k = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8104_key_rightMajor{_ss_store_sk4792_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk4836 = (it->second)._s_store_sk4836;
                std::string _s_store_name4841 = (it->second)._s_store_name4841;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_n{};
                memcpy(_s_store_name4841_n.data(), (_s_store_name4841).data(), (_s_store_name4841).length());
                std::string _s_company_name4853 = (it->second)._s_company_name4853;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_n{};
                memcpy(_s_company_name4853_n.data(), (_s_company_name4853).data(), (_s_company_name4853).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n = tbl_JOIN_INNER_TD_9705_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4771 = std::string(_i_brand4771_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n = tbl_JOIN_INNER_TD_9705_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4775 = std::string(_i_category4775_n.data());
                int32_t _ss_store_sk4792 = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 2);
                int32_t _ss_sales_price4798 = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 3);
                int32_t _d_year4814 = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 4);
                int32_t _d_moy4816 = tbl_JOIN_INNER_TD_9705_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8104_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name4841_n);
                tbl_JOIN_INNER_TD_8104_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name4853_n);
                tbl_JOIN_INNER_TD_8104_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4771_n);
                tbl_JOIN_INNER_TD_8104_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4775_n);
                tbl_JOIN_INNER_TD_8104_output.setInt32(r, 2, _ss_sales_price4798);
                tbl_JOIN_INNER_TD_8104_output.setInt32(r, 3, _d_year4814);
                tbl_JOIN_INNER_TD_8104_output.setInt32(r, 4, _d_moy4816);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8104_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8104_output #Row: " << tbl_JOIN_INNER_TD_8104_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8481_key {
    std::string _i_category4668;
    std::string _i_brand4664;
    std::string _s_store_name4734;
    std::string _s_company_name4746;
    int32_t _d_year4707;
    int32_t _d_moy4709;
    bool operator==(const SW_Aggregate_TD_8481_key& other) const { return (_i_category4668 == other._i_category4668) && (_i_brand4664 == other._i_brand4664) && (_s_store_name4734 == other._s_store_name4734) && (_s_company_name4746 == other._s_company_name4746) && (_d_year4707 == other._d_year4707) && (_d_moy4709 == other._d_moy4709); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8481_key> {
    std::size_t operator() (const SW_Aggregate_TD_8481_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4668)) + (hash<string>()(k._i_brand4664)) + (hash<string>()(k._s_store_name4734)) + (hash<string>()(k._s_company_name4746)) + (hash<int32_t>()(k._d_year4707)) + (hash<int32_t>()(k._d_moy4709));
    }
};
}
struct SW_Aggregate_TD_8481_payload {
    int32_t _sum_sales3892_sum_0;
};
void SW_Aggregate_TD_8481(Table &tbl_JOIN_INNER_TD_9379_output, Table &tbl_Aggregate_TD_8481_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#4668, i_brand#4664, s_store_name#4734, s_company_name#4746, d_year#4707, d_moy#4709, MakeDecimal(sum(UnscaledValue(ss_sales_price#4691)),17,2) AS sum_sales#3892)
    // Input: ListBuffer(i_brand#4664, i_category#4668, ss_sales_price#4691, d_year#4707, d_moy#4709, s_store_name#4734, s_company_name#4746)
    // Output: ListBuffer(i_category#4668, i_brand#4664, s_store_name#4734, s_company_name#4746, d_year#4707, d_moy#4709, sum_sales#3892)
    std::unordered_map<SW_Aggregate_TD_8481_key, SW_Aggregate_TD_8481_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9379_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4664 = tbl_JOIN_INNER_TD_9379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4668 = tbl_JOIN_INNER_TD_9379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ss_sales_price4691 = tbl_JOIN_INNER_TD_9379_output.getInt32(i, 2);
        int32_t _d_year4707 = tbl_JOIN_INNER_TD_9379_output.getInt32(i, 3);
        int32_t _d_moy4709 = tbl_JOIN_INNER_TD_9379_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734 = tbl_JOIN_INNER_TD_9379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746 = tbl_JOIN_INNER_TD_9379_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_8481_key k{std::string(_i_category4668.data()), std::string(_i_brand4664.data()), std::string(_s_store_name4734.data()), std::string(_s_company_name4746.data()), _d_year4707, _d_moy4709};
        int64_t _sum_sales3892_sum_0 = _ss_sales_price4691;
        SW_Aggregate_TD_8481_payload p{_sum_sales3892_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales3892_sum_0 + _sum_sales3892_sum_0;
            p._sum_sales3892_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4668{};
        memcpy(_i_category4668.data(), ((it.first)._i_category4668).data(), ((it.first)._i_category4668).length());
        tbl_Aggregate_TD_8481_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category4668);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4664{};
        memcpy(_i_brand4664.data(), ((it.first)._i_brand4664).data(), ((it.first)._i_brand4664).length());
        tbl_Aggregate_TD_8481_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4664);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734{};
        memcpy(_s_store_name4734.data(), ((it.first)._s_store_name4734).data(), ((it.first)._s_store_name4734).length());
        tbl_Aggregate_TD_8481_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name4734);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746{};
        memcpy(_s_company_name4746.data(), ((it.first)._s_company_name4746).data(), ((it.first)._s_company_name4746).length());
        tbl_Aggregate_TD_8481_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name4746);
        tbl_Aggregate_TD_8481_output.setInt32(r, 4, (it.first)._d_year4707);
        tbl_Aggregate_TD_8481_output.setInt32(r, 5, (it.first)._d_moy4709);
        int32_t _sum_sales3892 = (it.second)._sum_sales3892_sum_0;
        tbl_Aggregate_TD_8481_output.setInt32(r, 6, _sum_sales3892);
        ++r;
    }
    tbl_Aggregate_TD_8481_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8481_output #Row: " << tbl_Aggregate_TD_8481_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8435(Table &tbl_Window_TD_9139_output, Table &tbl_Filter_TD_8435_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_year#126) AND (d_year#126 = 1999)))
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, _w0#3906, rn#3894)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, _w0#3906, rn#3894)
    int r = 0;
    int nrow1 = tbl_Window_TD_9139_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Window_TD_9139_output.getInt32(i, 4);
        if ((1) && (_d_year126 == 1999)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_9139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8435_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_9139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8435_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_Window_TD_9139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8435_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_Window_TD_9139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_8435_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_t);
            int32_t _d_year126_t = tbl_Window_TD_9139_output.getInt32(i, 4);
            tbl_Filter_TD_8435_output.setInt32(r, 4, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_9139_output.getInt32(i, 5);
            tbl_Filter_TD_8435_output.setInt32(r, 5, _d_moy128_t);
            int32_t _sum_sales3892_t = tbl_Window_TD_9139_output.getInt32(i, 6);
            tbl_Filter_TD_8435_output.setInt32(r, 6, _sum_sales3892_t);
            int32_t __w03906_t = tbl_Window_TD_9139_output.getInt32(i, 7);
            tbl_Filter_TD_8435_output.setInt32(r, 7, __w03906_t);
            int32_t _rn3894_t = tbl_Window_TD_9139_output.getInt32(i, 8);
            tbl_Filter_TD_8435_output.setInt32(r, 8, _rn3894_t);
            r++;
        }
    }
    tbl_Filter_TD_8435_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8435_output #Row: " << tbl_Filter_TD_8435_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7589_key {
    std::string _i_category4775;
    std::string _i_brand4771;
    std::string _s_store_name4841;
    std::string _s_company_name4853;
    int32_t _d_year4814;
    int32_t _d_moy4816;
    bool operator==(const SW_Aggregate_TD_7589_key& other) const { return (_i_category4775 == other._i_category4775) && (_i_brand4771 == other._i_brand4771) && (_s_store_name4841 == other._s_store_name4841) && (_s_company_name4853 == other._s_company_name4853) && (_d_year4814 == other._d_year4814) && (_d_moy4816 == other._d_moy4816); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7589_key> {
    std::size_t operator() (const SW_Aggregate_TD_7589_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4775)) + (hash<string>()(k._i_brand4771)) + (hash<string>()(k._s_store_name4841)) + (hash<string>()(k._s_company_name4853)) + (hash<int32_t>()(k._d_year4814)) + (hash<int32_t>()(k._d_moy4816));
    }
};
}
struct SW_Aggregate_TD_7589_payload {
    int32_t _sum_sales3892_sum_0;
};
void SW_Aggregate_TD_7589(Table &tbl_JOIN_INNER_TD_8104_output, Table &tbl_Aggregate_TD_7589_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#4775, i_brand#4771, s_store_name#4841, s_company_name#4853, d_year#4814, d_moy#4816, MakeDecimal(sum(UnscaledValue(ss_sales_price#4798)),17,2) AS sum_sales#3892)
    // Input: ListBuffer(i_brand#4771, i_category#4775, ss_sales_price#4798, d_year#4814, d_moy#4816, s_store_name#4841, s_company_name#4853)
    // Output: ListBuffer(i_category#4775, i_brand#4771, s_store_name#4841, s_company_name#4853, d_year#4814, d_moy#4816, sum_sales#3892)
    std::unordered_map<SW_Aggregate_TD_7589_key, SW_Aggregate_TD_7589_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8104_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4771 = tbl_JOIN_INNER_TD_8104_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4775 = tbl_JOIN_INNER_TD_8104_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ss_sales_price4798 = tbl_JOIN_INNER_TD_8104_output.getInt32(i, 2);
        int32_t _d_year4814 = tbl_JOIN_INNER_TD_8104_output.getInt32(i, 3);
        int32_t _d_moy4816 = tbl_JOIN_INNER_TD_8104_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841 = tbl_JOIN_INNER_TD_8104_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853 = tbl_JOIN_INNER_TD_8104_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_7589_key k{std::string(_i_category4775.data()), std::string(_i_brand4771.data()), std::string(_s_store_name4841.data()), std::string(_s_company_name4853.data()), _d_year4814, _d_moy4816};
        int64_t _sum_sales3892_sum_0 = _ss_sales_price4798;
        SW_Aggregate_TD_7589_payload p{_sum_sales3892_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sum_sales3892_sum_0 + _sum_sales3892_sum_0;
            p._sum_sales3892_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4775{};
        memcpy(_i_category4775.data(), ((it.first)._i_category4775).data(), ((it.first)._i_category4775).length());
        tbl_Aggregate_TD_7589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category4775);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4771{};
        memcpy(_i_brand4771.data(), ((it.first)._i_brand4771).data(), ((it.first)._i_brand4771).length());
        tbl_Aggregate_TD_7589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4771);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841{};
        memcpy(_s_store_name4841.data(), ((it.first)._s_store_name4841).data(), ((it.first)._s_store_name4841).length());
        tbl_Aggregate_TD_7589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name4841);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853{};
        memcpy(_s_company_name4853.data(), ((it.first)._s_company_name4853).data(), ((it.first)._s_company_name4853).length());
        tbl_Aggregate_TD_7589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name4853);
        tbl_Aggregate_TD_7589_output.setInt32(r, 4, (it.first)._d_year4814);
        tbl_Aggregate_TD_7589_output.setInt32(r, 5, (it.first)._d_moy4816);
        int32_t _sum_sales3892 = (it.second)._sum_sales3892_sum_0;
        tbl_Aggregate_TD_7589_output.setInt32(r, 6, _sum_sales3892);
        ++r;
    }
    tbl_Aggregate_TD_7589_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7589_output #Row: " << tbl_Aggregate_TD_7589_output.getNumRow() << std::endl;
}

void SW_Window_TD_7143(Table &tbl_Aggregate_TD_8481_output, Table &tbl_Window_TD_7143_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#4707, d_moy#4709) windowspecdefinition(i_category#4668, i_brand#4664, s_store_name#4734, s_company_name#4746, d_year#4707 ASC NULLS FIRST, d_moy#4709 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#4762)
    // Input: ListBuffer(i_category#4668, i_brand#4664, s_store_name#4734, s_company_name#4746, d_year#4707, d_moy#4709, sum_sales#3892)
    // Output: ListBuffer(i_category#4668, i_brand#4664, s_store_name#4734, s_company_name#4746, d_year#4707, d_moy#4709, sum_sales#3892, rn#4762)
    struct SW_Window_TD_7143Row {
        std::string _i_category4668;
        std::string _i_brand4664;
        std::string _s_store_name4734;
        std::string _s_company_name4746;
        int32_t _d_year4707;
        int32_t _d_moy4709;
        int32_t _sum_sales3892;
    }; 

    int nrow = tbl_Aggregate_TD_8481_output.getNumRow();
    std::vector<SW_Window_TD_7143Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4668 = tbl_Aggregate_TD_8481_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7143_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category4668);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4664 = tbl_Aggregate_TD_8481_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7143_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand4664);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734 = tbl_Aggregate_TD_8481_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7143_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name4734);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746 = tbl_Aggregate_TD_8481_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_7143_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name4746);
        int32_t _d_year4707 = tbl_Aggregate_TD_8481_output.getInt32(i, 4);
        tbl_Window_TD_7143_output.setInt32(r, 4,_d_year4707);
        int32_t _d_moy4709 = tbl_Aggregate_TD_8481_output.getInt32(i, 5);
        tbl_Window_TD_7143_output.setInt32(r, 5,_d_moy4709);
        int32_t _sum_sales3892 = tbl_Aggregate_TD_8481_output.getInt32(i, 6);
        tbl_Window_TD_7143_output.setInt32(r, 6,_sum_sales3892);
        r++;
        SW_Window_TD_7143Row t = {std::string(_i_category4668.data()),std::string(_i_brand4664.data()),std::string(_s_store_name4734.data()),std::string(_s_company_name4746.data()),_d_year4707,_d_moy4709,_sum_sales3892};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7143Row& a, const SW_Window_TD_7143Row& b) const { return 
(a._i_category4668 < b._i_category4668) || 
 ((a._i_category4668 == b._i_category4668) && (a._i_brand4664 < b._i_brand4664)) || 
 ((a._i_category4668 == b._i_category4668) && (a._i_brand4664 == b._i_brand4664) && (a._s_store_name4734 < b._s_store_name4734)) || 
 ((a._i_category4668 == b._i_category4668) && (a._i_brand4664 == b._i_brand4664) && (a._s_store_name4734 == b._s_store_name4734) && (a._s_company_name4746 < b._s_company_name4746)) || 
 ((a._i_category4668 == b._i_category4668) && (a._i_brand4664 == b._i_brand4664) && (a._s_store_name4734 == b._s_store_name4734) && (a._s_company_name4746 == b._s_company_name4746) && (a._d_year4707 < b._d_year4707)) || 
 ((a._i_category4668 == b._i_category4668) && (a._i_brand4664 == b._i_brand4664) && (a._s_store_name4734 == b._s_store_name4734) && (a._s_company_name4746 == b._s_company_name4746) && (a._d_year4707 == b._d_year4707) && (a._d_moy4709 < b._d_moy4709)); 
}
    }SW_Window_TD_7143_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7143_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category4668 == rows0[i-1]._i_category4668 && rows0[i]._i_brand4664 == rows0[i-1]._i_brand4664 && rows0[i]._s_store_name4734 == rows0[i-1]._s_store_name4734 && rows0[i]._s_company_name4746 == rows0[i-1]._s_company_name4746);
        isSameOrderKey0 = ( rows0[i]._d_year4707 == rows0[i-1]._d_year4707 && rows0[i]._d_moy4709 == rows0[i-1]._d_moy4709);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7143_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_7143_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7143_output #Row: " << tbl_Window_TD_7143_output.getNumRow() << std::endl;
}

void SW_Window_TD_751(Table &tbl_Filter_TD_8435_output, Table &tbl_Window_TD_751_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#3906) windowspecdefinition(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#3893)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, _w0#3906, rn#3894)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, _w0#3906, rn#3894, avg_monthly_sales#3893)
    struct SW_Window_TD_751Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _sum_sales3892;
        int32_t __w03906;
        int32_t _rn3894;
    }; 

    int nrow = tbl_Filter_TD_8435_output.getNumRow();
    std::vector<SW_Window_TD_751Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_8435_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_751_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Filter_TD_8435_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_751_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Filter_TD_8435_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_751_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Filter_TD_8435_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_751_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        int32_t _d_year126 = tbl_Filter_TD_8435_output.getInt32(i, 4);
        tbl_Window_TD_751_output.setInt32(r, 4,_d_year126);
        int32_t _d_moy128 = tbl_Filter_TD_8435_output.getInt32(i, 5);
        tbl_Window_TD_751_output.setInt32(r, 5,_d_moy128);
        int32_t _sum_sales3892 = tbl_Filter_TD_8435_output.getInt32(i, 6);
        tbl_Window_TD_751_output.setInt32(r, 6,_sum_sales3892);
        int32_t __w03906 = tbl_Filter_TD_8435_output.getInt32(i, 7);
        tbl_Window_TD_751_output.setInt32(r, 7,__w03906);
        int32_t _rn3894 = tbl_Filter_TD_8435_output.getInt32(i, 8);
        tbl_Window_TD_751_output.setInt32(r, 8,_rn3894);
        r++;
        SW_Window_TD_751Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_sum_sales3892,__w03906,_rn3894};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_751Row& a, const SW_Window_TD_751Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 < b._s_store_name383)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 < b._s_company_name395)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 < b._d_year126)); 
}
    }SW_Window_TD_751_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_751_order0);
    int64_t sum0 = 0;
    int64_t currentRow0 = 0;
    std::string current_i_category2400 = "";
    std::string current_i_brand2360 = "";
    std::string current_s_store_name3830 = "";
    std::string current_s_company_name3950 = "";
    int32_t current_d_year1260 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_i_category2400 != it._i_category240 || current_i_brand2360 != it._i_brand236 || current_s_store_name3830 != it._s_store_name383 || current_s_company_name3950 != it._s_company_name395 || current_d_year1260 != it._d_year126) {
            sum0 = 0;
            currentRow0 = 0;
            current_i_category2400 = it._i_category240;
            current_i_brand2360 = it._i_brand236;
            current_s_store_name3830 = it._s_store_name383;
            current_s_company_name3950 = it._s_company_name395;
            current_d_year1260 = it._d_year126;
        }
        sum0 += it.__w03906;
        currentRow0 +=1;
        tbl_Window_TD_751_output.setInt64(r, 9, sum0 / currentRow0 );
    }
    tbl_Window_TD_751_output.setNumRow(r);
    std::cout << "tbl_Window_TD_751_output #Row: " << tbl_Window_TD_751_output.getNumRow() << std::endl;
}

void SW_Window_TD_6841(Table &tbl_Aggregate_TD_7589_output, Table &tbl_Window_TD_6841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#4814, d_moy#4816) windowspecdefinition(i_category#4775, i_brand#4771, s_store_name#4841, s_company_name#4853, d_year#4814 ASC NULLS FIRST, d_moy#4816 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#4869)
    // Input: ListBuffer(i_category#4775, i_brand#4771, s_store_name#4841, s_company_name#4853, d_year#4814, d_moy#4816, sum_sales#3892)
    // Output: ListBuffer(i_category#4775, i_brand#4771, s_store_name#4841, s_company_name#4853, d_year#4814, d_moy#4816, sum_sales#3892, rn#4869)
    struct SW_Window_TD_6841Row {
        std::string _i_category4775;
        std::string _i_brand4771;
        std::string _s_store_name4841;
        std::string _s_company_name4853;
        int32_t _d_year4814;
        int32_t _d_moy4816;
        int32_t _sum_sales3892;
    }; 

    int nrow = tbl_Aggregate_TD_7589_output.getNumRow();
    std::vector<SW_Window_TD_6841Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4775 = tbl_Aggregate_TD_7589_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_6841_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category4775);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4771 = tbl_Aggregate_TD_7589_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_6841_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand4771);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841 = tbl_Aggregate_TD_7589_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_6841_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name4841);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853 = tbl_Aggregate_TD_7589_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_6841_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name4853);
        int32_t _d_year4814 = tbl_Aggregate_TD_7589_output.getInt32(i, 4);
        tbl_Window_TD_6841_output.setInt32(r, 4,_d_year4814);
        int32_t _d_moy4816 = tbl_Aggregate_TD_7589_output.getInt32(i, 5);
        tbl_Window_TD_6841_output.setInt32(r, 5,_d_moy4816);
        int32_t _sum_sales3892 = tbl_Aggregate_TD_7589_output.getInt32(i, 6);
        tbl_Window_TD_6841_output.setInt32(r, 6,_sum_sales3892);
        r++;
        SW_Window_TD_6841Row t = {std::string(_i_category4775.data()),std::string(_i_brand4771.data()),std::string(_s_store_name4841.data()),std::string(_s_company_name4853.data()),_d_year4814,_d_moy4816,_sum_sales3892};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_6841Row& a, const SW_Window_TD_6841Row& b) const { return 
(a._i_category4775 < b._i_category4775) || 
 ((a._i_category4775 == b._i_category4775) && (a._i_brand4771 < b._i_brand4771)) || 
 ((a._i_category4775 == b._i_category4775) && (a._i_brand4771 == b._i_brand4771) && (a._s_store_name4841 < b._s_store_name4841)) || 
 ((a._i_category4775 == b._i_category4775) && (a._i_brand4771 == b._i_brand4771) && (a._s_store_name4841 == b._s_store_name4841) && (a._s_company_name4853 < b._s_company_name4853)) || 
 ((a._i_category4775 == b._i_category4775) && (a._i_brand4771 == b._i_brand4771) && (a._s_store_name4841 == b._s_store_name4841) && (a._s_company_name4853 == b._s_company_name4853) && (a._d_year4814 < b._d_year4814)) || 
 ((a._i_category4775 == b._i_category4775) && (a._i_brand4771 == b._i_brand4771) && (a._s_store_name4841 == b._s_store_name4841) && (a._s_company_name4853 == b._s_company_name4853) && (a._d_year4814 == b._d_year4814) && (a._d_moy4816 < b._d_moy4816)); 
}
    }SW_Window_TD_6841_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_6841_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category4775 == rows0[i-1]._i_category4775 && rows0[i]._i_brand4771 == rows0[i-1]._i_brand4771 && rows0[i]._s_store_name4841 == rows0[i-1]._s_store_name4841 && rows0[i]._s_company_name4853 == rows0[i-1]._s_company_name4853);
        isSameOrderKey0 = ( rows0[i]._d_year4814 == rows0[i-1]._d_year4814 && rows0[i]._d_moy4816 == rows0[i-1]._d_moy4816);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_6841_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_6841_output.setNumRow(r);
    std::cout << "tbl_Window_TD_6841_output #Row: " << tbl_Window_TD_6841_output.getNumRow() << std::endl;
}

void SW_Project_TD_6491(Table &tbl_Window_TD_7143_output, Table &tbl_Project_TD_6491_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3892 AS sum_sales#3913)
    // Input: ListBuffer(i_category#4668, i_brand#4664, s_store_name#4734, s_company_name#4746, d_year#4707, d_moy#4709, sum_sales#3892, rn#4762)
    // Output: ListBuffer(i_category#4668, i_brand#4664, s_store_name#4734, s_company_name#4746, sum_sales#3913, rn#4762)
    int nrow1 = tbl_Window_TD_7143_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4668 = tbl_Window_TD_7143_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4664 = tbl_Window_TD_7143_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734 = tbl_Window_TD_7143_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746 = tbl_Window_TD_7143_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year4707 = tbl_Window_TD_7143_output.getInt32(i, 4);
        int32_t _d_moy4709 = tbl_Window_TD_7143_output.getInt32(i, 5);
        int32_t _sum_sales3892 = tbl_Window_TD_7143_output.getInt32(i, 6);
        int32_t _rn4762 = tbl_Window_TD_7143_output.getInt32(i, 7);
        int32_t _sum_sales3913 = _sum_sales3892;
        tbl_Project_TD_6491_output.setInt32(i, 4, _sum_sales3913);
        tbl_Project_TD_6491_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category4668);
        tbl_Project_TD_6491_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand4664);
        tbl_Project_TD_6491_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name4734);
        tbl_Project_TD_6491_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name4746);
        tbl_Project_TD_6491_output.setInt32(i, 5, _rn4762);
    }
    tbl_Project_TD_6491_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6491_output #Row: " << tbl_Project_TD_6491_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6476(Table &tbl_Window_TD_751_output, Table &tbl_Filter_TD_6476_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(avg_monthly_sales#3893) AND (avg_monthly_sales#3893 > 0.000000)) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#3892 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#3893 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#3893 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000)))
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, _w0#3906, rn#3894, avg_monthly_sales#3893)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, avg_monthly_sales#3893, rn#3894)
    int r = 0;
    int nrow1 = tbl_Window_TD_751_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _avg_monthly_sales3893 = tbl_Window_TD_751_output.getInt32(i, 9);
        int32_t _sum_sales3892 = tbl_Window_TD_751_output.getInt32(i, 6);
        if (((1) && (_avg_monthly_sales3893 > 0.000000)) && (_sum_sales3892 > 0.1000000000000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_Window_TD_751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_Window_TD_751_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_6476_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_t);
            int32_t _d_year126_t = tbl_Window_TD_751_output.getInt32(i, 4);
            tbl_Filter_TD_6476_output.setInt32(r, 4, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_751_output.getInt32(i, 5);
            tbl_Filter_TD_6476_output.setInt32(r, 5, _d_moy128_t);
            int32_t _sum_sales3892_t = tbl_Window_TD_751_output.getInt32(i, 6);
            tbl_Filter_TD_6476_output.setInt32(r, 6, _sum_sales3892_t);
            int32_t _avg_monthly_sales3893_t = tbl_Window_TD_751_output.getInt32(i, 9);
            tbl_Filter_TD_6476_output.setInt32(r, 7, _avg_monthly_sales3893_t);
            int32_t _rn3894_t = tbl_Window_TD_751_output.getInt32(i, 8);
            tbl_Filter_TD_6476_output.setInt32(r, 8, _rn3894_t);
            r++;
        }
    }
    tbl_Filter_TD_6476_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6476_output #Row: " << tbl_Filter_TD_6476_output.getNumRow() << std::endl;
}

void SW_Project_TD_5825(Table &tbl_Window_TD_6841_output, Table &tbl_Project_TD_5825_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3892 AS sum_sales#3922)
    // Input: ListBuffer(i_category#4775, i_brand#4771, s_store_name#4841, s_company_name#4853, d_year#4814, d_moy#4816, sum_sales#3892, rn#4869)
    // Output: ListBuffer(i_category#4775, i_brand#4771, s_store_name#4841, s_company_name#4853, sum_sales#3922, rn#4869)
    int nrow1 = tbl_Window_TD_6841_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4775 = tbl_Window_TD_6841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4771 = tbl_Window_TD_6841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841 = tbl_Window_TD_6841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853 = tbl_Window_TD_6841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year4814 = tbl_Window_TD_6841_output.getInt32(i, 4);
        int32_t _d_moy4816 = tbl_Window_TD_6841_output.getInt32(i, 5);
        int32_t _sum_sales3892 = tbl_Window_TD_6841_output.getInt32(i, 6);
        int32_t _rn4869 = tbl_Window_TD_6841_output.getInt32(i, 7);
        int32_t _sum_sales3922 = _sum_sales3892;
        tbl_Project_TD_5825_output.setInt32(i, 4, _sum_sales3922);
        tbl_Project_TD_5825_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category4775);
        tbl_Project_TD_5825_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand4771);
        tbl_Project_TD_5825_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name4841);
        tbl_Project_TD_5825_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name4853);
        tbl_Project_TD_5825_output.setInt32(i, 5, _rn4869);
    }
    tbl_Project_TD_5825_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5825_output #Row: " << tbl_Project_TD_5825_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5380_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    bool operator==(const SW_JOIN_INNER_TD_5380_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5380_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5380_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395));
    }
};
}
struct SW_JOIN_INNER_TD_5380_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _sum_sales3892;
    int32_t _avg_monthly_sales3893;
    int32_t _rn3894;
};
struct SW_JOIN_INNER_TD_5380_key_rightMajor {
    std::string _i_category4668;
    std::string _i_brand4664;
    std::string _s_store_name4734;
    std::string _s_company_name4746;
    bool operator==(const SW_JOIN_INNER_TD_5380_key_rightMajor& other) const {
        return ((_i_category4668 == other._i_category4668) && (_i_brand4664 == other._i_brand4664) && (_s_store_name4734 == other._s_store_name4734) && (_s_company_name4746 == other._s_company_name4746));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5380_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5380_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4668)) + (hash<string>()(k._i_brand4664)) + (hash<string>()(k._s_store_name4734)) + (hash<string>()(k._s_company_name4746));
    }
};
}
struct SW_JOIN_INNER_TD_5380_payload_rightMajor {
    std::string _i_category4668;
    std::string _i_brand4664;
    std::string _s_store_name4734;
    std::string _s_company_name4746;
    int32_t _sum_sales3913;
    int32_t _rn4762;
};
void SW_JOIN_INNER_TD_5380(Table &tbl_Filter_TD_6476_output, Table &tbl_Project_TD_6491_output, Table &tbl_JOIN_INNER_TD_5380_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((i_category#240 = i_category#4668) AND (i_brand#236 = i_brand#4664)) AND (s_store_name#383 = s_store_name#4734)) AND (s_company_name#395 = s_company_name#4746)) AND (rn#3894 = (rn#4762 + 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, avg_monthly_sales#3893, rn#3894)
    // Right Table: ListBuffer(i_category#4668, i_brand#4664, s_store_name#4734, s_company_name#4746, sum_sales#3913, rn#4762)
    // Output Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, avg_monthly_sales#3893, rn#3894, sum_sales#3913)
    int left_nrow = tbl_Filter_TD_6476_output.getNumRow();
    int right_nrow = tbl_Project_TD_6491_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5380_key_leftMajor, SW_JOIN_INNER_TD_5380_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6476_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            SW_JOIN_INNER_TD_5380_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            int32_t _d_year126 = tbl_Filter_TD_6476_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_Filter_TD_6476_output.getInt32(i, 5);
            int32_t _sum_sales3892 = tbl_Filter_TD_6476_output.getInt32(i, 6);
            int32_t _avg_monthly_sales3893 = tbl_Filter_TD_6476_output.getInt32(i, 7);
            int32_t _rn3894 = tbl_Filter_TD_6476_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_5380_payload_leftMajor payloadA{_i_category240, _i_brand236, _s_store_name383, _s_company_name395, _d_year126, _d_moy128, _sum_sales3892, _avg_monthly_sales3893, _rn3894};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_6491_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4668_k_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4668_k = std::string(_i_category4668_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_k_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4664_k = std::string(_i_brand4664_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_k_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4734_k = std::string(_s_store_name4734_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_k_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4746_k = std::string(_s_company_name4746_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5380_key_leftMajor{_i_category4668_k, _i_brand4664_k, _s_store_name4734_k, _s_company_name4746_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_company_name395 = (it->second)._s_company_name395;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n{};
                memcpy(_s_company_name395_n.data(), (_s_company_name395).data(), (_s_company_name395).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _sum_sales3892 = (it->second)._sum_sales3892;
                int32_t _avg_monthly_sales3893 = (it->second)._avg_monthly_sales3893;
                int32_t _rn3894 = (it->second)._rn3894;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category4668 = std::string(_i_category4668_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4664 = std::string(_i_brand4664_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name4734 = std::string(_s_store_name4734_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name4746 = std::string(_s_company_name4746_n.data());
                int32_t _sum_sales3913 = tbl_Project_TD_6491_output.getInt32(i, 4);
                int32_t _rn4762 = tbl_Project_TD_6491_output.getInt32(i, 5);
                if (_rn3894 == NULL) {
                    tbl_JOIN_INNER_TD_5380_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5380_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5380_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_5380_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 6, _sum_sales3892);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 7, _avg_monthly_sales3893);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 8, _rn3894);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 9, _sum_sales3913);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5380_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5380_key_rightMajor, SW_JOIN_INNER_TD_5380_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_6491_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4668_k_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4668_k = std::string(_i_category4668_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_k_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4664_k = std::string(_i_brand4664_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_k_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4734_k = std::string(_s_store_name4734_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_k_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4746_k = std::string(_s_company_name4746_k_n.data());
            SW_JOIN_INNER_TD_5380_key_rightMajor keyA{_i_category4668_k, _i_brand4664_k, _s_store_name4734_k, _s_company_name4746_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4668 = std::string(_i_category4668_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4664 = std::string(_i_brand4664_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4734 = std::string(_s_store_name4734_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_n = tbl_Project_TD_6491_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4746 = std::string(_s_company_name4746_n.data());
            int32_t _sum_sales3913 = tbl_Project_TD_6491_output.getInt32(i, 4);
            int32_t _rn4762 = tbl_Project_TD_6491_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_5380_payload_rightMajor payloadA{_i_category4668, _i_brand4664, _s_store_name4734, _s_company_name4746, _sum_sales3913, _rn4762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6476_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5380_key_rightMajor{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category4668 = (it->second)._i_category4668;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4668_n{};
                memcpy(_i_category4668_n.data(), (_i_category4668).data(), (_i_category4668).length());
                std::string _i_brand4664 = (it->second)._i_brand4664;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4664_n{};
                memcpy(_i_brand4664_n.data(), (_i_brand4664).data(), (_i_brand4664).length());
                std::string _s_store_name4734 = (it->second)._s_store_name4734;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4734_n{};
                memcpy(_s_store_name4734_n.data(), (_s_store_name4734).data(), (_s_store_name4734).length());
                std::string _s_company_name4746 = (it->second)._s_company_name4746;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4746_n{};
                memcpy(_s_company_name4746_n.data(), (_s_company_name4746).data(), (_s_company_name4746).length());
                int32_t _sum_sales3913 = (it->second)._sum_sales3913;
                int32_t _rn4762 = (it->second)._rn4762;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_6476_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                int32_t _d_year126 = tbl_Filter_TD_6476_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_Filter_TD_6476_output.getInt32(i, 5);
                int32_t _sum_sales3892 = tbl_Filter_TD_6476_output.getInt32(i, 6);
                int32_t _avg_monthly_sales3893 = tbl_Filter_TD_6476_output.getInt32(i, 7);
                int32_t _rn3894 = tbl_Filter_TD_6476_output.getInt32(i, 8);
                if (_rn3894 == NULL) {
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 9, _sum_sales3913);
                    tbl_JOIN_INNER_TD_5380_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5380_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5380_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_5380_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 6, _sum_sales3892);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 7, _avg_monthly_sales3893);
                    tbl_JOIN_INNER_TD_5380_output.setInt32(r, 8, _rn3894);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5380_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5380_output #Row: " << tbl_JOIN_INNER_TD_5380_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4587_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _rn3894;
    bool operator==(const SW_JOIN_INNER_TD_4587_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395) && (_rn3894 == other._rn3894));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4587_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4587_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395)) + (hash<int32_t>()(k._rn3894));
    }
};
}
struct SW_JOIN_INNER_TD_4587_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    int32_t _sum_sales3892;
    int32_t _avg_monthly_sales3893;
    int32_t _rn3894;
    int32_t _sum_sales3913;
};
struct SW_JOIN_INNER_TD_4587_key_rightMajor {
    std::string _i_category4775;
    std::string _i_brand4771;
    std::string _s_store_name4841;
    std::string _s_company_name4853;
    int32_t _rn4869;
    bool operator==(const SW_JOIN_INNER_TD_4587_key_rightMajor& other) const {
        return ((_i_category4775 == other._i_category4775) && (_i_brand4771 == other._i_brand4771) && (_s_store_name4841 == other._s_store_name4841) && (_s_company_name4853 == other._s_company_name4853) && (_rn4869 == other._rn4869));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4587_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4587_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4775)) + (hash<string>()(k._i_brand4771)) + (hash<string>()(k._s_store_name4841)) + (hash<string>()(k._s_company_name4853)) + (hash<int32_t>()(k._rn4869));
    }
};
}
struct SW_JOIN_INNER_TD_4587_payload_rightMajor {
    std::string _i_category4775;
    std::string _i_brand4771;
    std::string _s_store_name4841;
    std::string _s_company_name4853;
    int32_t _sum_sales3922;
    int32_t _rn4869;
};
void SW_JOIN_INNER_TD_4587(Table &tbl_JOIN_INNER_TD_5380_output, Table &tbl_Project_TD_5825_output, Table &tbl_JOIN_INNER_TD_4587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((i_category#240 = i_category#4775) AND (i_brand#236 = i_brand#4771)) AND (s_store_name#383 = s_store_name#4841)) AND (s_company_name#395 = s_company_name#4853)) AND (rn#3894 = (rn#4869 - 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3892, avg_monthly_sales#3893, rn#3894, sum_sales#3913)
    // Right Table: ListBuffer(i_category#4775, i_brand#4771, s_store_name#4841, s_company_name#4853, sum_sales#3922, rn#4869)
    // Output Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3893, sum_sales#3892, sum_sales#3913, sum_sales#3922)
    int left_nrow = tbl_JOIN_INNER_TD_5380_output.getNumRow();
    int right_nrow = tbl_Project_TD_5825_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4587_key_leftMajor, SW_JOIN_INNER_TD_4587_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5380_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            int32_t _rn3894_k = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_4587_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k, _rn3894_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 5);
            int32_t _sum_sales3892 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 6);
            int32_t _avg_monthly_sales3893 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 7);
            int32_t _rn3894 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 8);
            int32_t _sum_sales3913 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_4587_payload_leftMajor payloadA{_i_category240, _i_brand236, _s_store_name383, _s_company_name395, _d_year126, _d_moy128, _sum_sales3892, _avg_monthly_sales3893, _rn3894, _sum_sales3913};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5825_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4775_k_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4775_k = std::string(_i_category4775_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_k_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4771_k = std::string(_i_brand4771_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_k_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4841_k = std::string(_s_store_name4841_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_k_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4853_k = std::string(_s_company_name4853_k_n.data());
            int32_t _rn4869_k = tbl_Project_TD_5825_output.getInt32(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4587_key_leftMajor{_i_category4775_k, _i_brand4771_k, _s_store_name4841_k, _s_company_name4853_k, _rn4869_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_company_name395 = (it->second)._s_company_name395;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n{};
                memcpy(_s_company_name395_n.data(), (_s_company_name395).data(), (_s_company_name395).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _sum_sales3892 = (it->second)._sum_sales3892;
                int32_t _avg_monthly_sales3893 = (it->second)._avg_monthly_sales3893;
                int32_t _rn3894 = (it->second)._rn3894;
                int32_t _sum_sales3913 = (it->second)._sum_sales3913;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category4775 = std::string(_i_category4775_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4771 = std::string(_i_brand4771_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name4841 = std::string(_s_store_name4841_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name4853 = std::string(_s_company_name4853_n.data());
                int32_t _sum_sales3922 = tbl_Project_TD_5825_output.getInt32(i, 4);
                int32_t _rn4869 = tbl_Project_TD_5825_output.getInt32(i, 5);
                if (_rn3894 == (_rn4869 - 1)) {
                    tbl_JOIN_INNER_TD_4587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_4587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 7, _sum_sales3892);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 6, _avg_monthly_sales3893);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 8, _sum_sales3913);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 9, _sum_sales3922);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4587_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4587_key_rightMajor, SW_JOIN_INNER_TD_4587_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5825_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4775_k_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4775_k = std::string(_i_category4775_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_k_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4771_k = std::string(_i_brand4771_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_k_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4841_k = std::string(_s_store_name4841_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_k_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4853_k = std::string(_s_company_name4853_k_n.data());
            int32_t _rn4869_k = tbl_Project_TD_5825_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_4587_key_rightMajor keyA{_i_category4775_k, _i_brand4771_k, _s_store_name4841_k, _s_company_name4853_k, _rn4869_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4775 = std::string(_i_category4775_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4771 = std::string(_i_brand4771_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4841 = std::string(_s_store_name4841_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_n = tbl_Project_TD_5825_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4853 = std::string(_s_company_name4853_n.data());
            int32_t _sum_sales3922 = tbl_Project_TD_5825_output.getInt32(i, 4);
            int32_t _rn4869 = tbl_Project_TD_5825_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_4587_payload_rightMajor payloadA{_i_category4775, _i_brand4771, _s_store_name4841, _s_company_name4853, _sum_sales3922, _rn4869};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5380_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            int32_t _rn3894_k = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4587_key_rightMajor{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k, _rn3894_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category4775 = (it->second)._i_category4775;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4775_n{};
                memcpy(_i_category4775_n.data(), (_i_category4775).data(), (_i_category4775).length());
                std::string _i_brand4771 = (it->second)._i_brand4771;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4771_n{};
                memcpy(_i_brand4771_n.data(), (_i_brand4771).data(), (_i_brand4771).length());
                std::string _s_store_name4841 = (it->second)._s_store_name4841;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4841_n{};
                memcpy(_s_store_name4841_n.data(), (_s_store_name4841).data(), (_s_store_name4841).length());
                std::string _s_company_name4853 = (it->second)._s_company_name4853;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4853_n{};
                memcpy(_s_company_name4853_n.data(), (_s_company_name4853).data(), (_s_company_name4853).length());
                int32_t _sum_sales3922 = (it->second)._sum_sales3922;
                int32_t _rn4869 = (it->second)._rn4869;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_JOIN_INNER_TD_5380_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 5);
                int32_t _sum_sales3892 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 6);
                int32_t _avg_monthly_sales3893 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 7);
                int32_t _rn3894 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 8);
                int32_t _sum_sales3913 = tbl_JOIN_INNER_TD_5380_output.getInt32(i, 9);
                if (_rn3894 == (_rn4869 - 1)) {
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 9, _sum_sales3922);
                    tbl_JOIN_INNER_TD_4587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_4587_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 7, _sum_sales3892);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 6, _avg_monthly_sales3893);
                    tbl_JOIN_INNER_TD_4587_output.setInt32(r, 8, _sum_sales3913);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4587_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4587_output #Row: " << tbl_JOIN_INNER_TD_4587_output.getNumRow() << std::endl;
}

void SW_Project_TD_3545(Table &tbl_JOIN_INNER_TD_4587_output, Table &tbl_Project_TD_3545_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3913 AS psum#3895, sum_sales#3922 AS nsum#3896)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3893, sum_sales#3892, sum_sales#3913, sum_sales#3922)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3893, sum_sales#3892, psum#3895, nsum#3896)
    int nrow1 = tbl_JOIN_INNER_TD_4587_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_4587_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4587_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_4587_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_JOIN_INNER_TD_4587_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4587_output.getInt32(i, 4);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_4587_output.getInt32(i, 5);
        int32_t _avg_monthly_sales3893 = tbl_JOIN_INNER_TD_4587_output.getInt32(i, 6);
        int32_t _sum_sales3892 = tbl_JOIN_INNER_TD_4587_output.getInt32(i, 7);
        int32_t _sum_sales3913 = tbl_JOIN_INNER_TD_4587_output.getInt32(i, 8);
        int32_t _sum_sales3922 = tbl_JOIN_INNER_TD_4587_output.getInt32(i, 9);
        int32_t _psum3895 = _sum_sales3913;
        tbl_Project_TD_3545_output.setInt32(i, 8, _psum3895);
        int32_t _nsum3896 = _sum_sales3922;
        tbl_Project_TD_3545_output.setInt32(i, 9, _nsum3896);
        tbl_Project_TD_3545_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category240);
        tbl_Project_TD_3545_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand236);
        tbl_Project_TD_3545_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name383);
        tbl_Project_TD_3545_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name395);
        tbl_Project_TD_3545_output.setInt32(i, 4, _d_year126);
        tbl_Project_TD_3545_output.setInt32(i, 5, _d_moy128);
        tbl_Project_TD_3545_output.setInt32(i, 6, _avg_monthly_sales3893);
        tbl_Project_TD_3545_output.setInt32(i, 7, _sum_sales3892);
    }
    tbl_Project_TD_3545_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3545_output #Row: " << tbl_Project_TD_3545_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2644(Table &tbl_Project_TD_3545_output, Table &tbl_Sort_TD_2644_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(sum_sales#3892 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#3893 as decimal(22,6)))), DecimalType(22,6), true) ASC NULLS FIRST, s_store_name#383 ASC NULLS FIRST)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3893, sum_sales#3892, psum#3895, nsum#3896)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3893, sum_sales#3892, psum#3895, nsum#3896)
    struct SW_Sort_TD_2644Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int32_t _avg_monthly_sales3893;
        int32_t _sum_sales3892;
        int32_t _psum3895;
        int32_t _nsum3896;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2644Row& a, const SW_Sort_TD_2644Row& b) const { return 
 || 
 ((a._true == b._true) && (a._s_store_name383 < b._s_store_name383)); 
}
    }SW_Sort_TD_2644_order; 

    int nrow1 = tbl_Project_TD_3545_output.getNumRow();
    std::vector<SW_Sort_TD_2644Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_3545_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Project_TD_3545_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Project_TD_3545_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Project_TD_3545_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _d_year126 = tbl_Project_TD_3545_output.getInt32(i, 4);
        int32_t _d_moy128 = tbl_Project_TD_3545_output.getInt32(i, 5);
        int32_t _avg_monthly_sales3893 = tbl_Project_TD_3545_output.getInt32(i, 6);
        int32_t _sum_sales3892 = tbl_Project_TD_3545_output.getInt32(i, 7);
        int32_t _psum3895 = tbl_Project_TD_3545_output.getInt32(i, 8);
        int32_t _nsum3896 = tbl_Project_TD_3545_output.getInt32(i, 9);
        SW_Sort_TD_2644Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_avg_monthly_sales3893,_sum_sales3892,_psum3895,_nsum3896};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2644_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2644_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), (it._i_brand236).data(), (it._i_brand236).length());
        tbl_Sort_TD_2644_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), (it._s_store_name383).data(), (it._s_store_name383).length());
        tbl_Sort_TD_2644_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395{};
        memcpy(_s_company_name395.data(), (it._s_company_name395).data(), (it._s_company_name395).length());
        tbl_Sort_TD_2644_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        tbl_Sort_TD_2644_output.setInt32(r, 4, it._d_year126);
        tbl_Sort_TD_2644_output.setInt32(r, 5, it._d_moy128);
        tbl_Sort_TD_2644_output.setInt32(r, 6, it._avg_monthly_sales3893);
        tbl_Sort_TD_2644_output.setInt32(r, 7, it._sum_sales3892);
        tbl_Sort_TD_2644_output.setInt32(r, 8, it._psum3895);
        tbl_Sort_TD_2644_output.setInt32(r, 9, it._nsum3896);
        ++r;
    }
    tbl_Sort_TD_2644_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2644_output #Row: " << tbl_Sort_TD_2644_output.getNumRow() << std::endl;
}

