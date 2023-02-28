#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_14927856(Table &tbl_SerializeFromObject_TD_15178586_input, Table &tbl_Filter_TD_14927856_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15178586_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_15178586_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_15178586_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_15178586_input.getInt32(i, 2);
        if ((_ss_item_sk1208!= 0) && ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_15178586_input.getInt32(i, 0);
            tbl_Filter_TD_14927856_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_15178586_input.getInt32(i, 1);
            tbl_Filter_TD_14927856_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_15178586_input.getInt32(i, 2);
            tbl_Filter_TD_14927856_output.setInt32(r, 2, _ss_store_sk1213_t);
            int64_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_15178586_input.getInt64(i, 3);
            tbl_Filter_TD_14927856_output.setInt64(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_14927856_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14927856_output #Row: " << tbl_Filter_TD_14927856_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14347868(Table &tbl_SerializeFromObject_TD_15764117_input, Table &tbl_Filter_TD_14347868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND (isnotnull(i_category#240) AND isnotnull(i_brand#236))))
    // Input: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15764117_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_15764117_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_15764117_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_15764117_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk228!= 0) && ((std::string(_i_category240.data()) != "NULL") && (std::string(_i_brand236.data()) != "NULL"))) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15764117_input.getInt32(i, 0);
            tbl_Filter_TD_14347868_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_15764117_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_14347868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_15764117_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_14347868_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_14347868_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14347868_output #Row: " << tbl_Filter_TD_14347868_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13453291(Table &tbl_SerializeFromObject_TD_14411562_input, Table &tbl_Filter_TD_13453291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#126 = 1999) OR ((d_year#126 = 1998) AND (d_moy#128 = 12))) OR ((d_year#126 = 2000) AND (d_moy#128 = 1))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14411562_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_14411562_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_14411562_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_14411562_input.getInt32(i, 0);
        if ((((_d_year126 == 1999) || ((_d_year126 == 1998) && (_d_moy128 == 12))) || ((_d_year126 == 2000) && (_d_moy128 == 1))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_14411562_input.getInt32(i, 0);
            tbl_Filter_TD_13453291_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_14411562_input.getInt32(i, 1);
            tbl_Filter_TD_13453291_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_14411562_input.getInt32(i, 2);
            tbl_Filter_TD_13453291_output.setInt32(r, 2, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_13453291_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13453291_output #Row: " << tbl_Filter_TD_13453291_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13318346_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_13318346_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13318346_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13318346_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_13318346_payload_leftMajor {
    int32_t _i_item_sk228;
    std::string _i_brand236;
    std::string _i_category240;
};
struct SW_JOIN_INNER_TD_13318346_key_rightMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_13318346_key_rightMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13318346_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13318346_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_13318346_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_store_sk1213;
    int64_t _ss_sales_price1219;
};
void SW_JOIN_INNER_TD_13318346(Table &tbl_Filter_TD_14347868_output, Table &tbl_Filter_TD_14927856_output, Table &tbl_JOIN_INNER_TD_13318346_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_brand#236, i_category#240)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    int left_nrow = tbl_Filter_TD_14347868_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14927856_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13318346_key_leftMajor, SW_JOIN_INNER_TD_13318346_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14347868_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14347868_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13318346_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14347868_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14347868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14347868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category240 = std::string(_i_category240_n.data());
            SW_JOIN_INNER_TD_13318346_payload_leftMajor payloadA{_i_item_sk228, _i_brand236, _i_category240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14927856_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_14927856_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13318346_key_leftMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_14927856_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_14927856_output.getInt32(i, 1);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_14927856_output.getInt32(i, 2);
                int64_t _ss_sales_price1219 = tbl_Filter_TD_14927856_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_13318346_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13318346_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_13318346_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_13318346_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_13318346_output.setInt64(r, 4, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13318346_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13318346_key_rightMajor, SW_JOIN_INNER_TD_13318346_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14927856_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_14927856_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13318346_key_rightMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_14927856_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_14927856_output.getInt32(i, 1);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_14927856_output.getInt32(i, 2);
            int64_t _ss_sales_price1219 = tbl_Filter_TD_14927856_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_13318346_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14347868_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_14347868_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13318346_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _i_item_sk228 = tbl_Filter_TD_14347868_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_14347868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_14347868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category240 = std::string(_i_category240_n.data());
                tbl_JOIN_INNER_TD_13318346_output.setInt32(r, 2, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_13318346_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_13318346_output.setInt64(r, 4, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_13318346_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_13318346_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13318346_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13318346_output #Row: " << tbl_JOIN_INNER_TD_13318346_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12364176(Table &tbl_SerializeFromObject_TD_13522982_input, Table &tbl_Filter_TD_12364176_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_item_sk#4332) AND isnotnull(ss_sold_date_sk#4330)) AND isnotnull(ss_store_sk#4337)))
    // Input: ListBuffer(ss_sold_date_sk#4330, ss_item_sk#4332, ss_store_sk#4337, ss_sales_price#4343)
    // Output: ListBuffer(ss_sold_date_sk#4330, ss_item_sk#4332, ss_store_sk#4337, ss_sales_price#4343)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13522982_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk4332 = tbl_SerializeFromObject_TD_13522982_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk4330 = tbl_SerializeFromObject_TD_13522982_input.getInt32(i, 0);
        int32_t _ss_store_sk4337 = tbl_SerializeFromObject_TD_13522982_input.getInt32(i, 2);
        if (((_ss_item_sk4332!= 0) && (_ss_sold_date_sk4330!= 0)) && (_ss_store_sk4337!= 0)) {
            int32_t _ss_sold_date_sk4330_t = tbl_SerializeFromObject_TD_13522982_input.getInt32(i, 0);
            tbl_Filter_TD_12364176_output.setInt32(r, 0, _ss_sold_date_sk4330_t);
            int32_t _ss_item_sk4332_t = tbl_SerializeFromObject_TD_13522982_input.getInt32(i, 1);
            tbl_Filter_TD_12364176_output.setInt32(r, 1, _ss_item_sk4332_t);
            int32_t _ss_store_sk4337_t = tbl_SerializeFromObject_TD_13522982_input.getInt32(i, 2);
            tbl_Filter_TD_12364176_output.setInt32(r, 2, _ss_store_sk4337_t);
            int64_t _ss_sales_price4343_t = tbl_SerializeFromObject_TD_13522982_input.getInt64(i, 3);
            tbl_Filter_TD_12364176_output.setInt64(r, 3, _ss_sales_price4343_t);
            r++;
        }
    }
    tbl_Filter_TD_12364176_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12364176_output #Row: " << tbl_Filter_TD_12364176_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12561191(Table &tbl_SerializeFromObject_TD_1322349_input, Table &tbl_Filter_TD_12561191_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#4308) AND (isnotnull(i_category#4320) AND isnotnull(i_brand#4316))))
    // Input: ListBuffer(i_item_sk#4308, i_brand#4316, i_category#4320)
    // Output: ListBuffer(i_item_sk#4308, i_brand#4316, i_category#4320)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1322349_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4308 = tbl_SerializeFromObject_TD_1322349_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4320 = tbl_SerializeFromObject_TD_1322349_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4316 = tbl_SerializeFromObject_TD_1322349_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk4308!= 0) && ((std::string(_i_category4320.data()) != "NULL") && (std::string(_i_brand4316.data()) != "NULL"))) {
            int32_t _i_item_sk4308_t = tbl_SerializeFromObject_TD_1322349_input.getInt32(i, 0);
            tbl_Filter_TD_12561191_output.setInt32(r, 0, _i_item_sk4308_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_t = tbl_SerializeFromObject_TD_1322349_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12561191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4316_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category4320_t = tbl_SerializeFromObject_TD_1322349_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12561191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category4320_t);
            r++;
        }
    }
    tbl_Filter_TD_12561191_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12561191_output #Row: " << tbl_Filter_TD_12561191_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12464139(Table &tbl_SerializeFromObject_TD_13316677_input, Table &tbl_Filter_TD_12464139_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#378) AND (isnotnull(s_store_name#383) AND isnotnull(s_company_name#395))))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13316677_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_13316677_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_SerializeFromObject_TD_13316677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_SerializeFromObject_TD_13316677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk378!= 0) && ((std::string(_s_store_name383.data()) != "NULL") && (std::string(_s_company_name395.data()) != "NULL"))) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_13316677_input.getInt32(i, 0);
            tbl_Filter_TD_12464139_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_13316677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12464139_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_SerializeFromObject_TD_13316677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12464139_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name395_t);
            r++;
        }
    }
    tbl_Filter_TD_12464139_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12464139_output #Row: " << tbl_Filter_TD_12464139_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12796731_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_12796731_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12796731_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12796731_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_12796731_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int64_t _ss_sales_price1219;
};
struct SW_JOIN_INNER_TD_12796731_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_12796731_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12796731_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12796731_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_12796731_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_12796731(Table &tbl_JOIN_INNER_TD_13318346_output, Table &tbl_Filter_TD_13453291_output, Table &tbl_JOIN_INNER_TD_12796731_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(i_brand#236, i_category#240, ss_sold_date_sk#1206, ss_store_sk#1213, ss_sales_price#1219)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_store_sk#1213, ss_sales_price#1219, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_13318346_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13453291_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12796731_key_leftMajor, SW_JOIN_INNER_TD_12796731_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13318346_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_13318346_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12796731_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13318346_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13318346_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_13318346_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_13318346_output.getInt32(i, 3);
            int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_13318346_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_12796731_payload_leftMajor payloadA{_i_brand236, _i_category240, _ss_sold_date_sk1206, _ss_store_sk1213, _ss_sales_price1219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13453291_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13453291_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12796731_key_leftMajor{_d_date_sk120_k});
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
                int64_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_date_sk120 = tbl_Filter_TD_13453291_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_13453291_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Filter_TD_13453291_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_12796731_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12796731_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12796731_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_12796731_output.setInt64(r, 3, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_12796731_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12796731_output.setInt32(r, 5, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12796731_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12796731_key_rightMajor, SW_JOIN_INNER_TD_12796731_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13453291_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_13453291_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12796731_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_13453291_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_13453291_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Filter_TD_13453291_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_12796731_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13318346_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_13318346_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12796731_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_13318346_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_13318346_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_13318346_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_13318346_output.getInt32(i, 3);
                int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_13318346_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_12796731_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_12796731_output.setInt32(r, 5, _d_moy128);
                tbl_JOIN_INNER_TD_12796731_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_12796731_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_12796731_output.setInt32(r, 2, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_12796731_output.setInt64(r, 3, _ss_sales_price1219);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12796731_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12796731_output #Row: " << tbl_JOIN_INNER_TD_12796731_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11870010(Table &tbl_SerializeFromObject_TD_12259404_input, Table &tbl_Filter_TD_11870010_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_item_sk#4439) AND isnotnull(ss_sold_date_sk#4437)) AND isnotnull(ss_store_sk#4444)))
    // Input: ListBuffer(ss_sold_date_sk#4437, ss_item_sk#4439, ss_store_sk#4444, ss_sales_price#4450)
    // Output: ListBuffer(ss_sold_date_sk#4437, ss_item_sk#4439, ss_store_sk#4444, ss_sales_price#4450)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12259404_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk4439 = tbl_SerializeFromObject_TD_12259404_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk4437 = tbl_SerializeFromObject_TD_12259404_input.getInt32(i, 0);
        int32_t _ss_store_sk4444 = tbl_SerializeFromObject_TD_12259404_input.getInt32(i, 2);
        if (((_ss_item_sk4439!= 0) && (_ss_sold_date_sk4437!= 0)) && (_ss_store_sk4444!= 0)) {
            int32_t _ss_sold_date_sk4437_t = tbl_SerializeFromObject_TD_12259404_input.getInt32(i, 0);
            tbl_Filter_TD_11870010_output.setInt32(r, 0, _ss_sold_date_sk4437_t);
            int32_t _ss_item_sk4439_t = tbl_SerializeFromObject_TD_12259404_input.getInt32(i, 1);
            tbl_Filter_TD_11870010_output.setInt32(r, 1, _ss_item_sk4439_t);
            int32_t _ss_store_sk4444_t = tbl_SerializeFromObject_TD_12259404_input.getInt32(i, 2);
            tbl_Filter_TD_11870010_output.setInt32(r, 2, _ss_store_sk4444_t);
            int64_t _ss_sales_price4450_t = tbl_SerializeFromObject_TD_12259404_input.getInt64(i, 3);
            tbl_Filter_TD_11870010_output.setInt64(r, 3, _ss_sales_price4450_t);
            r++;
        }
    }
    tbl_Filter_TD_11870010_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11870010_output #Row: " << tbl_Filter_TD_11870010_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11694324(Table &tbl_SerializeFromObject_TD_12482520_input, Table &tbl_Filter_TD_11694324_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#4415) AND (isnotnull(i_category#4427) AND isnotnull(i_brand#4423))))
    // Input: ListBuffer(i_item_sk#4415, i_brand#4423, i_category#4427)
    // Output: ListBuffer(i_item_sk#4415, i_brand#4423, i_category#4427)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12482520_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4415 = tbl_SerializeFromObject_TD_12482520_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4427 = tbl_SerializeFromObject_TD_12482520_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4423 = tbl_SerializeFromObject_TD_12482520_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk4415!= 0) && ((std::string(_i_category4427.data()) != "NULL") && (std::string(_i_brand4423.data()) != "NULL"))) {
            int32_t _i_item_sk4415_t = tbl_SerializeFromObject_TD_12482520_input.getInt32(i, 0);
            tbl_Filter_TD_11694324_output.setInt32(r, 0, _i_item_sk4415_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_t = tbl_SerializeFromObject_TD_12482520_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11694324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4423_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category4427_t = tbl_SerializeFromObject_TD_12482520_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_11694324_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category4427_t);
            r++;
        }
    }
    tbl_Filter_TD_11694324_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11694324_output #Row: " << tbl_Filter_TD_11694324_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11952870(Table &tbl_SerializeFromObject_TD_12230855_input, Table &tbl_Filter_TD_11952870_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#4359 = 1999) OR ((d_year#4359 = 1998) AND (d_moy#4361 = 12))) OR ((d_year#4359 = 2000) AND (d_moy#4361 = 1))) AND isnotnull(d_date_sk#4353)))
    // Input: ListBuffer(d_date_sk#4353, d_year#4359, d_moy#4361)
    // Output: ListBuffer(d_date_sk#4353, d_year#4359, d_moy#4361)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12230855_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4359 = tbl_SerializeFromObject_TD_12230855_input.getInt32(i, 1);
        int32_t _d_moy4361 = tbl_SerializeFromObject_TD_12230855_input.getInt32(i, 2);
        int32_t _d_date_sk4353 = tbl_SerializeFromObject_TD_12230855_input.getInt32(i, 0);
        if ((((_d_year4359 == 1999) || ((_d_year4359 == 1998) && (_d_moy4361 == 12))) || ((_d_year4359 == 2000) && (_d_moy4361 == 1))) && (_d_date_sk4353!= 0)) {
            int32_t _d_date_sk4353_t = tbl_SerializeFromObject_TD_12230855_input.getInt32(i, 0);
            tbl_Filter_TD_11952870_output.setInt32(r, 0, _d_date_sk4353_t);
            int32_t _d_year4359_t = tbl_SerializeFromObject_TD_12230855_input.getInt32(i, 1);
            tbl_Filter_TD_11952870_output.setInt32(r, 1, _d_year4359_t);
            int32_t _d_moy4361_t = tbl_SerializeFromObject_TD_12230855_input.getInt32(i, 2);
            tbl_Filter_TD_11952870_output.setInt32(r, 2, _d_moy4361_t);
            r++;
        }
    }
    tbl_Filter_TD_11952870_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11952870_output #Row: " << tbl_Filter_TD_11952870_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11506670_key_leftMajor {
    int32_t _i_item_sk4308;
    bool operator==(const SW_JOIN_INNER_TD_11506670_key_leftMajor& other) const {
        return ((_i_item_sk4308 == other._i_item_sk4308));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11506670_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11506670_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4308));
    }
};
}
struct SW_JOIN_INNER_TD_11506670_payload_leftMajor {
    int32_t _i_item_sk4308;
    std::string _i_brand4316;
    std::string _i_category4320;
};
struct SW_JOIN_INNER_TD_11506670_key_rightMajor {
    int32_t _ss_item_sk4332;
    bool operator==(const SW_JOIN_INNER_TD_11506670_key_rightMajor& other) const {
        return ((_ss_item_sk4332 == other._ss_item_sk4332));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11506670_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11506670_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk4332));
    }
};
}
struct SW_JOIN_INNER_TD_11506670_payload_rightMajor {
    int32_t _ss_sold_date_sk4330;
    int32_t _ss_item_sk4332;
    int32_t _ss_store_sk4337;
    int64_t _ss_sales_price4343;
};
void SW_JOIN_INNER_TD_11506670(Table &tbl_Filter_TD_12561191_output, Table &tbl_Filter_TD_12364176_output, Table &tbl_JOIN_INNER_TD_11506670_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#4332 = i_item_sk#4308))
    // Left Table: ListBuffer(i_item_sk#4308, i_brand#4316, i_category#4320)
    // Right Table: ListBuffer(ss_sold_date_sk#4330, ss_item_sk#4332, ss_store_sk#4337, ss_sales_price#4343)
    // Output Table: ListBuffer(i_brand#4316, i_category#4320, ss_sold_date_sk#4330, ss_store_sk#4337, ss_sales_price#4343)
    int left_nrow = tbl_Filter_TD_12561191_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12364176_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11506670_key_leftMajor, SW_JOIN_INNER_TD_11506670_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12561191_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4308_k = tbl_Filter_TD_12561191_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11506670_key_leftMajor keyA{_i_item_sk4308_k};
            int32_t _i_item_sk4308 = tbl_Filter_TD_12561191_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n = tbl_Filter_TD_12561191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4316 = std::string(_i_brand4316_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n = tbl_Filter_TD_12561191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category4320 = std::string(_i_category4320_n.data());
            SW_JOIN_INNER_TD_11506670_payload_leftMajor payloadA{_i_item_sk4308, _i_brand4316, _i_category4320};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12364176_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk4332_k = tbl_Filter_TD_12364176_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11506670_key_leftMajor{_ss_item_sk4332_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4308 = (it->second)._i_item_sk4308;
                std::string _i_brand4316 = (it->second)._i_brand4316;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n{};
                memcpy(_i_brand4316_n.data(), (_i_brand4316).data(), (_i_brand4316).length());
                std::string _i_category4320 = (it->second)._i_category4320;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n{};
                memcpy(_i_category4320_n.data(), (_i_category4320).data(), (_i_category4320).length());
                int32_t _ss_sold_date_sk4330 = tbl_Filter_TD_12364176_output.getInt32(i, 0);
                int32_t _ss_item_sk4332 = tbl_Filter_TD_12364176_output.getInt32(i, 1);
                int32_t _ss_store_sk4337 = tbl_Filter_TD_12364176_output.getInt32(i, 2);
                int64_t _ss_sales_price4343 = tbl_Filter_TD_12364176_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_11506670_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4316_n);
                tbl_JOIN_INNER_TD_11506670_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4320_n);
                tbl_JOIN_INNER_TD_11506670_output.setInt32(r, 2, _ss_sold_date_sk4330);
                tbl_JOIN_INNER_TD_11506670_output.setInt32(r, 3, _ss_store_sk4337);
                tbl_JOIN_INNER_TD_11506670_output.setInt64(r, 4, _ss_sales_price4343);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11506670_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11506670_key_rightMajor, SW_JOIN_INNER_TD_11506670_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12364176_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk4332_k = tbl_Filter_TD_12364176_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11506670_key_rightMajor keyA{_ss_item_sk4332_k};
            int32_t _ss_sold_date_sk4330 = tbl_Filter_TD_12364176_output.getInt32(i, 0);
            int32_t _ss_item_sk4332 = tbl_Filter_TD_12364176_output.getInt32(i, 1);
            int32_t _ss_store_sk4337 = tbl_Filter_TD_12364176_output.getInt32(i, 2);
            int64_t _ss_sales_price4343 = tbl_Filter_TD_12364176_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_11506670_payload_rightMajor payloadA{_ss_sold_date_sk4330, _ss_item_sk4332, _ss_store_sk4337, _ss_sales_price4343};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12561191_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4308_k = tbl_Filter_TD_12561191_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11506670_key_rightMajor{_i_item_sk4308_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk4330 = (it->second)._ss_sold_date_sk4330;
                int32_t _ss_item_sk4332 = (it->second)._ss_item_sk4332;
                int32_t _ss_store_sk4337 = (it->second)._ss_store_sk4337;
                int64_t _ss_sales_price4343 = (it->second)._ss_sales_price4343;
                int32_t _i_item_sk4308 = tbl_Filter_TD_12561191_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n = tbl_Filter_TD_12561191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4316 = std::string(_i_brand4316_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n = tbl_Filter_TD_12561191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category4320 = std::string(_i_category4320_n.data());
                tbl_JOIN_INNER_TD_11506670_output.setInt32(r, 2, _ss_sold_date_sk4330);
                tbl_JOIN_INNER_TD_11506670_output.setInt32(r, 3, _ss_store_sk4337);
                tbl_JOIN_INNER_TD_11506670_output.setInt64(r, 4, _ss_sales_price4343);
                tbl_JOIN_INNER_TD_11506670_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4316_n);
                tbl_JOIN_INNER_TD_11506670_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4320_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11506670_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11506670_output #Row: " << tbl_JOIN_INNER_TD_11506670_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11395773_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_11395773_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11395773_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11395773_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_11395773_payload_leftMajor {
    std::string _i_brand236;
    std::string _i_category240;
    int32_t _ss_store_sk1213;
    int64_t _ss_sales_price1219;
    int32_t _d_year126;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_11395773_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_11395773_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11395773_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11395773_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_11395773_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
    std::string _s_company_name395;
};
void SW_JOIN_INNER_TD_11395773(Table &tbl_JOIN_INNER_TD_12796731_output, Table &tbl_Filter_TD_12464139_output, Table &tbl_JOIN_INNER_TD_11395773_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(i_brand#236, i_category#240, ss_store_sk#1213, ss_sales_price#1219, d_year#126, d_moy#128)
    // Right Table: ListBuffer(s_store_sk#378, s_store_name#383, s_company_name#395)
    // Output Table: ListBuffer(i_brand#236, i_category#240, ss_sales_price#1219, d_year#126, d_moy#128, s_store_name#383, s_company_name#395)
    int left_nrow = tbl_JOIN_INNER_TD_12796731_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12464139_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11395773_key_leftMajor, SW_JOIN_INNER_TD_11395773_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12796731_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_12796731_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11395773_key_leftMajor keyA{_ss_store_sk1213_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12796731_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12796731_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category240 = std::string(_i_category240_n.data());
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_12796731_output.getInt32(i, 2);
            int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_12796731_output.getInt64(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_12796731_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_12796731_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11395773_payload_leftMajor payloadA{_i_brand236, _i_category240, _ss_store_sk1213, _ss_sales_price1219, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12464139_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_12464139_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11395773_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                std::string _i_category240 = (it->second)._i_category240;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n{};
                memcpy(_i_category240_n.data(), (_i_category240).data(), (_i_category240).length());
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_sales_price1219 = (it->second)._ss_sales_price1219;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _s_store_sk378 = tbl_Filter_TD_12464139_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_12464139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_12464139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                tbl_JOIN_INNER_TD_11395773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11395773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11395773_output.setInt64(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_11395773_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11395773_output.setInt32(r, 4, _d_moy128);
                tbl_JOIN_INNER_TD_11395773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_11395773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name395_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11395773_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11395773_key_rightMajor, SW_JOIN_INNER_TD_11395773_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12464139_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_12464139_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11395773_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_12464139_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_12464139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_12464139_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            SW_JOIN_INNER_TD_11395773_payload_rightMajor payloadA{_s_store_sk378, _s_store_name383, _s_company_name395};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12796731_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_12796731_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11395773_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_company_name395 = (it->second)._s_company_name395;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n{};
                memcpy(_s_company_name395_n.data(), (_s_company_name395).data(), (_s_company_name395).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_12796731_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_12796731_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category240 = std::string(_i_category240_n.data());
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_12796731_output.getInt32(i, 2);
                int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_12796731_output.getInt64(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_12796731_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_12796731_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11395773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_11395773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name395_n);
                tbl_JOIN_INNER_TD_11395773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand236_n);
                tbl_JOIN_INNER_TD_11395773_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category240_n);
                tbl_JOIN_INNER_TD_11395773_output.setInt64(r, 2, _ss_sales_price1219);
                tbl_JOIN_INNER_TD_11395773_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_11395773_output.setInt32(r, 4, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11395773_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11395773_output #Row: " << tbl_JOIN_INNER_TD_11395773_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10732995(Table &tbl_SerializeFromObject_TD_1188449_input, Table &tbl_Filter_TD_10732995_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((d_year#4466 = 1999) OR ((d_year#4466 = 1998) AND (d_moy#4468 = 12))) OR ((d_year#4466 = 2000) AND (d_moy#4468 = 1))) AND isnotnull(d_date_sk#4460)))
    // Input: ListBuffer(d_date_sk#4460, d_year#4466, d_moy#4468)
    // Output: ListBuffer(d_date_sk#4460, d_year#4466, d_moy#4468)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1188449_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4466 = tbl_SerializeFromObject_TD_1188449_input.getInt32(i, 1);
        int32_t _d_moy4468 = tbl_SerializeFromObject_TD_1188449_input.getInt32(i, 2);
        int32_t _d_date_sk4460 = tbl_SerializeFromObject_TD_1188449_input.getInt32(i, 0);
        if ((((_d_year4466 == 1999) || ((_d_year4466 == 1998) && (_d_moy4468 == 12))) || ((_d_year4466 == 2000) && (_d_moy4468 == 1))) && (_d_date_sk4460!= 0)) {
            int32_t _d_date_sk4460_t = tbl_SerializeFromObject_TD_1188449_input.getInt32(i, 0);
            tbl_Filter_TD_10732995_output.setInt32(r, 0, _d_date_sk4460_t);
            int32_t _d_year4466_t = tbl_SerializeFromObject_TD_1188449_input.getInt32(i, 1);
            tbl_Filter_TD_10732995_output.setInt32(r, 1, _d_year4466_t);
            int32_t _d_moy4468_t = tbl_SerializeFromObject_TD_1188449_input.getInt32(i, 2);
            tbl_Filter_TD_10732995_output.setInt32(r, 2, _d_moy4468_t);
            r++;
        }
    }
    tbl_Filter_TD_10732995_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10732995_output #Row: " << tbl_Filter_TD_10732995_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10961687_key_leftMajor {
    int32_t _i_item_sk4415;
    bool operator==(const SW_JOIN_INNER_TD_10961687_key_leftMajor& other) const {
        return ((_i_item_sk4415 == other._i_item_sk4415));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10961687_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10961687_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4415));
    }
};
}
struct SW_JOIN_INNER_TD_10961687_payload_leftMajor {
    int32_t _i_item_sk4415;
    std::string _i_brand4423;
    std::string _i_category4427;
};
struct SW_JOIN_INNER_TD_10961687_key_rightMajor {
    int32_t _ss_item_sk4439;
    bool operator==(const SW_JOIN_INNER_TD_10961687_key_rightMajor& other) const {
        return ((_ss_item_sk4439 == other._ss_item_sk4439));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10961687_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10961687_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk4439));
    }
};
}
struct SW_JOIN_INNER_TD_10961687_payload_rightMajor {
    int32_t _ss_sold_date_sk4437;
    int32_t _ss_item_sk4439;
    int32_t _ss_store_sk4444;
    int64_t _ss_sales_price4450;
};
void SW_JOIN_INNER_TD_10961687(Table &tbl_Filter_TD_11694324_output, Table &tbl_Filter_TD_11870010_output, Table &tbl_JOIN_INNER_TD_10961687_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#4439 = i_item_sk#4415))
    // Left Table: ListBuffer(i_item_sk#4415, i_brand#4423, i_category#4427)
    // Right Table: ListBuffer(ss_sold_date_sk#4437, ss_item_sk#4439, ss_store_sk#4444, ss_sales_price#4450)
    // Output Table: ListBuffer(i_brand#4423, i_category#4427, ss_sold_date_sk#4437, ss_store_sk#4444, ss_sales_price#4450)
    int left_nrow = tbl_Filter_TD_11694324_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11870010_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10961687_key_leftMajor, SW_JOIN_INNER_TD_10961687_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11694324_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4415_k = tbl_Filter_TD_11694324_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10961687_key_leftMajor keyA{_i_item_sk4415_k};
            int32_t _i_item_sk4415 = tbl_Filter_TD_11694324_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n = tbl_Filter_TD_11694324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4423 = std::string(_i_brand4423_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n = tbl_Filter_TD_11694324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_category4427 = std::string(_i_category4427_n.data());
            SW_JOIN_INNER_TD_10961687_payload_leftMajor payloadA{_i_item_sk4415, _i_brand4423, _i_category4427};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11870010_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk4439_k = tbl_Filter_TD_11870010_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10961687_key_leftMajor{_ss_item_sk4439_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4415 = (it->second)._i_item_sk4415;
                std::string _i_brand4423 = (it->second)._i_brand4423;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n{};
                memcpy(_i_brand4423_n.data(), (_i_brand4423).data(), (_i_brand4423).length());
                std::string _i_category4427 = (it->second)._i_category4427;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n{};
                memcpy(_i_category4427_n.data(), (_i_category4427).data(), (_i_category4427).length());
                int32_t _ss_sold_date_sk4437 = tbl_Filter_TD_11870010_output.getInt32(i, 0);
                int32_t _ss_item_sk4439 = tbl_Filter_TD_11870010_output.getInt32(i, 1);
                int32_t _ss_store_sk4444 = tbl_Filter_TD_11870010_output.getInt32(i, 2);
                int64_t _ss_sales_price4450 = tbl_Filter_TD_11870010_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_10961687_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4423_n);
                tbl_JOIN_INNER_TD_10961687_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4427_n);
                tbl_JOIN_INNER_TD_10961687_output.setInt32(r, 2, _ss_sold_date_sk4437);
                tbl_JOIN_INNER_TD_10961687_output.setInt32(r, 3, _ss_store_sk4444);
                tbl_JOIN_INNER_TD_10961687_output.setInt64(r, 4, _ss_sales_price4450);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10961687_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10961687_key_rightMajor, SW_JOIN_INNER_TD_10961687_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11870010_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk4439_k = tbl_Filter_TD_11870010_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10961687_key_rightMajor keyA{_ss_item_sk4439_k};
            int32_t _ss_sold_date_sk4437 = tbl_Filter_TD_11870010_output.getInt32(i, 0);
            int32_t _ss_item_sk4439 = tbl_Filter_TD_11870010_output.getInt32(i, 1);
            int32_t _ss_store_sk4444 = tbl_Filter_TD_11870010_output.getInt32(i, 2);
            int64_t _ss_sales_price4450 = tbl_Filter_TD_11870010_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_10961687_payload_rightMajor payloadA{_ss_sold_date_sk4437, _ss_item_sk4439, _ss_store_sk4444, _ss_sales_price4450};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11694324_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4415_k = tbl_Filter_TD_11694324_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10961687_key_rightMajor{_i_item_sk4415_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk4437 = (it->second)._ss_sold_date_sk4437;
                int32_t _ss_item_sk4439 = (it->second)._ss_item_sk4439;
                int32_t _ss_store_sk4444 = (it->second)._ss_store_sk4444;
                int64_t _ss_sales_price4450 = (it->second)._ss_sales_price4450;
                int32_t _i_item_sk4415 = tbl_Filter_TD_11694324_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n = tbl_Filter_TD_11694324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4423 = std::string(_i_brand4423_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n = tbl_Filter_TD_11694324_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_category4427 = std::string(_i_category4427_n.data());
                tbl_JOIN_INNER_TD_10961687_output.setInt32(r, 2, _ss_sold_date_sk4437);
                tbl_JOIN_INNER_TD_10961687_output.setInt32(r, 3, _ss_store_sk4444);
                tbl_JOIN_INNER_TD_10961687_output.setInt64(r, 4, _ss_sales_price4450);
                tbl_JOIN_INNER_TD_10961687_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4423_n);
                tbl_JOIN_INNER_TD_10961687_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4427_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10961687_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10961687_output #Row: " << tbl_JOIN_INNER_TD_10961687_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10844073(Table &tbl_SerializeFromObject_TD_11183471_input, Table &tbl_Filter_TD_10844073_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#4381) AND (isnotnull(s_store_name#4386) AND isnotnull(s_company_name#4398))))
    // Input: ListBuffer(s_store_sk#4381, s_store_name#4386, s_company_name#4398)
    // Output: ListBuffer(s_store_sk#4381, s_store_name#4386, s_company_name#4398)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11183471_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk4381 = tbl_SerializeFromObject_TD_11183471_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386 = tbl_SerializeFromObject_TD_11183471_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398 = tbl_SerializeFromObject_TD_11183471_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk4381!= 0) && ((std::string(_s_store_name4386.data()) != "NULL") && (std::string(_s_company_name4398.data()) != "NULL"))) {
            int32_t _s_store_sk4381_t = tbl_SerializeFromObject_TD_11183471_input.getInt32(i, 0);
            tbl_Filter_TD_10844073_output.setInt32(r, 0, _s_store_sk4381_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_t = tbl_SerializeFromObject_TD_11183471_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10844073_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name4386_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_t = tbl_SerializeFromObject_TD_11183471_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10844073_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name4398_t);
            r++;
        }
    }
    tbl_Filter_TD_10844073_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10844073_output #Row: " << tbl_Filter_TD_10844073_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10844481_key_leftMajor {
    int32_t _ss_sold_date_sk4330;
    bool operator==(const SW_JOIN_INNER_TD_10844481_key_leftMajor& other) const {
        return ((_ss_sold_date_sk4330 == other._ss_sold_date_sk4330));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10844481_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10844481_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk4330));
    }
};
}
struct SW_JOIN_INNER_TD_10844481_payload_leftMajor {
    std::string _i_brand4316;
    std::string _i_category4320;
    int32_t _ss_sold_date_sk4330;
    int32_t _ss_store_sk4337;
    int64_t _ss_sales_price4343;
};
struct SW_JOIN_INNER_TD_10844481_key_rightMajor {
    int32_t _d_date_sk4353;
    bool operator==(const SW_JOIN_INNER_TD_10844481_key_rightMajor& other) const {
        return ((_d_date_sk4353 == other._d_date_sk4353));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10844481_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10844481_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4353));
    }
};
}
struct SW_JOIN_INNER_TD_10844481_payload_rightMajor {
    int32_t _d_date_sk4353;
    int32_t _d_year4359;
    int32_t _d_moy4361;
};
void SW_JOIN_INNER_TD_10844481(Table &tbl_JOIN_INNER_TD_11506670_output, Table &tbl_Filter_TD_11952870_output, Table &tbl_JOIN_INNER_TD_10844481_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#4330 = d_date_sk#4353))
    // Left Table: ListBuffer(i_brand#4316, i_category#4320, ss_sold_date_sk#4330, ss_store_sk#4337, ss_sales_price#4343)
    // Right Table: ListBuffer(d_date_sk#4353, d_year#4359, d_moy#4361)
    // Output Table: ListBuffer(i_brand#4316, i_category#4320, ss_store_sk#4337, ss_sales_price#4343, d_year#4359, d_moy#4361)
    int left_nrow = tbl_JOIN_INNER_TD_11506670_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11952870_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10844481_key_leftMajor, SW_JOIN_INNER_TD_10844481_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11506670_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk4330_k = tbl_JOIN_INNER_TD_11506670_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10844481_key_leftMajor keyA{_ss_sold_date_sk4330_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n = tbl_JOIN_INNER_TD_11506670_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4316 = std::string(_i_brand4316_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n = tbl_JOIN_INNER_TD_11506670_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4320 = std::string(_i_category4320_n.data());
            int32_t _ss_sold_date_sk4330 = tbl_JOIN_INNER_TD_11506670_output.getInt32(i, 2);
            int32_t _ss_store_sk4337 = tbl_JOIN_INNER_TD_11506670_output.getInt32(i, 3);
            int64_t _ss_sales_price4343 = tbl_JOIN_INNER_TD_11506670_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_10844481_payload_leftMajor payloadA{_i_brand4316, _i_category4320, _ss_sold_date_sk4330, _ss_store_sk4337, _ss_sales_price4343};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11952870_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4353_k = tbl_Filter_TD_11952870_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10844481_key_leftMajor{_d_date_sk4353_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4316 = (it->second)._i_brand4316;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n{};
                memcpy(_i_brand4316_n.data(), (_i_brand4316).data(), (_i_brand4316).length());
                std::string _i_category4320 = (it->second)._i_category4320;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n{};
                memcpy(_i_category4320_n.data(), (_i_category4320).data(), (_i_category4320).length());
                int32_t _ss_sold_date_sk4330 = (it->second)._ss_sold_date_sk4330;
                int32_t _ss_store_sk4337 = (it->second)._ss_store_sk4337;
                int64_t _ss_sales_price4343 = (it->second)._ss_sales_price4343;
                int32_t _d_date_sk4353 = tbl_Filter_TD_11952870_output.getInt32(i, 0);
                int32_t _d_year4359 = tbl_Filter_TD_11952870_output.getInt32(i, 1);
                int32_t _d_moy4361 = tbl_Filter_TD_11952870_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_10844481_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4316_n);
                tbl_JOIN_INNER_TD_10844481_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4320_n);
                tbl_JOIN_INNER_TD_10844481_output.setInt32(r, 2, _ss_store_sk4337);
                tbl_JOIN_INNER_TD_10844481_output.setInt64(r, 3, _ss_sales_price4343);
                tbl_JOIN_INNER_TD_10844481_output.setInt32(r, 4, _d_year4359);
                tbl_JOIN_INNER_TD_10844481_output.setInt32(r, 5, _d_moy4361);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10844481_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10844481_key_rightMajor, SW_JOIN_INNER_TD_10844481_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11952870_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4353_k = tbl_Filter_TD_11952870_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10844481_key_rightMajor keyA{_d_date_sk4353_k};
            int32_t _d_date_sk4353 = tbl_Filter_TD_11952870_output.getInt32(i, 0);
            int32_t _d_year4359 = tbl_Filter_TD_11952870_output.getInt32(i, 1);
            int32_t _d_moy4361 = tbl_Filter_TD_11952870_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_10844481_payload_rightMajor payloadA{_d_date_sk4353, _d_year4359, _d_moy4361};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11506670_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk4330_k = tbl_JOIN_INNER_TD_11506670_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10844481_key_rightMajor{_ss_sold_date_sk4330_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4353 = (it->second)._d_date_sk4353;
                int32_t _d_year4359 = (it->second)._d_year4359;
                int32_t _d_moy4361 = (it->second)._d_moy4361;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n = tbl_JOIN_INNER_TD_11506670_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4316 = std::string(_i_brand4316_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n = tbl_JOIN_INNER_TD_11506670_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4320 = std::string(_i_category4320_n.data());
                int32_t _ss_sold_date_sk4330 = tbl_JOIN_INNER_TD_11506670_output.getInt32(i, 2);
                int32_t _ss_store_sk4337 = tbl_JOIN_INNER_TD_11506670_output.getInt32(i, 3);
                int64_t _ss_sales_price4343 = tbl_JOIN_INNER_TD_11506670_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_10844481_output.setInt32(r, 4, _d_year4359);
                tbl_JOIN_INNER_TD_10844481_output.setInt32(r, 5, _d_moy4361);
                tbl_JOIN_INNER_TD_10844481_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4316_n);
                tbl_JOIN_INNER_TD_10844481_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4320_n);
                tbl_JOIN_INNER_TD_10844481_output.setInt32(r, 2, _ss_store_sk4337);
                tbl_JOIN_INNER_TD_10844481_output.setInt64(r, 3, _ss_sales_price4343);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10844481_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10844481_output #Row: " << tbl_JOIN_INNER_TD_10844481_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_10684223_key {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    bool operator==(const SW_Aggregate_TD_10684223_key& other) const { return (_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395) && (_d_year126 == other._d_year126) && (_d_moy128 == other._d_moy128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_10684223_key> {
    std::size_t operator() (const SW_Aggregate_TD_10684223_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_moy128));
    }
};
}
struct SW_Aggregate_TD_10684223_payload {
    int64_t _sum_sales3544_sum_0;
    int64_t __w03558_sum_1;
};
void SW_Aggregate_TD_10684223(Table &tbl_JOIN_INNER_TD_11395773_output, Table &tbl_Aggregate_TD_10684223_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS sum_sales#3544, MakeDecimal(sum(UnscaledValue(ss_sales_price#1219)),17,2) AS _w0#3558)
    // Input: ListBuffer(i_brand#236, i_category#240, ss_sales_price#1219, d_year#126, d_moy#128, s_store_name#383, s_company_name#395)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, _w0#3558)
    std::unordered_map<SW_Aggregate_TD_10684223_key, SW_Aggregate_TD_10684223_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_11395773_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_11395773_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_11395773_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _ss_sales_price1219 = tbl_JOIN_INNER_TD_11395773_output.getInt64(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_11395773_output.getInt32(i, 3);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_11395773_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_11395773_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_JOIN_INNER_TD_11395773_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_10684223_key k{std::string(_i_category240.data()), std::string(_i_brand236.data()), std::string(_s_store_name383.data()), std::string(_s_company_name395.data()), _d_year126, _d_moy128};
        int64_t _sum_sales3544_sum_0 = _ss_sales_price1219;
        int64_t __w03558_sum_1 = _ss_sales_price1219;
        SW_Aggregate_TD_10684223_payload p{_sum_sales3544_sum_0, __w03558_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sum_sales3544_sum_0 + _sum_sales3544_sum_0;
            p._sum_sales3544_sum_0 = sum_0;
            int64_t sum_1 = (it->second).__w03558_sum_1 + __w03558_sum_1;
            p.__w03558_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), ((it.first)._i_category240).data(), ((it.first)._i_category240).length());
        tbl_Aggregate_TD_10684223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), ((it.first)._i_brand236).data(), ((it.first)._i_brand236).length());
        tbl_Aggregate_TD_10684223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), ((it.first)._s_store_name383).data(), ((it.first)._s_store_name383).length());
        tbl_Aggregate_TD_10684223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395{};
        memcpy(_s_company_name395.data(), ((it.first)._s_company_name395).data(), ((it.first)._s_company_name395).length());
        tbl_Aggregate_TD_10684223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395);
        tbl_Aggregate_TD_10684223_output.setInt32(r, 4, (it.first)._d_year126);
        tbl_Aggregate_TD_10684223_output.setInt32(r, 5, (it.first)._d_moy128);
        int64_t _sum_sales3544 = (it.second)._sum_sales3544_sum_0;
        tbl_Aggregate_TD_10684223_output.setInt64(r, 6, _sum_sales3544);
        int64_t __w03558 = (it.second).__w03558_sum_1;
        tbl_Aggregate_TD_10684223_output.setInt64(r, 7, __w03558);
        ++r;
    }
    tbl_Aggregate_TD_10684223_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10684223_output #Row: " << tbl_Aggregate_TD_10684223_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9473523(Table &tbl_SerializeFromObject_TD_10501406_input, Table &tbl_Filter_TD_9473523_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#4488) AND (isnotnull(s_store_name#4493) AND isnotnull(s_company_name#4505))))
    // Input: ListBuffer(s_store_sk#4488, s_store_name#4493, s_company_name#4505)
    // Output: ListBuffer(s_store_sk#4488, s_store_name#4493, s_company_name#4505)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10501406_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk4488 = tbl_SerializeFromObject_TD_10501406_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493 = tbl_SerializeFromObject_TD_10501406_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505 = tbl_SerializeFromObject_TD_10501406_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk4488!= 0) && ((std::string(_s_store_name4493.data()) != "NULL") && (std::string(_s_company_name4505.data()) != "NULL"))) {
            int32_t _s_store_sk4488_t = tbl_SerializeFromObject_TD_10501406_input.getInt32(i, 0);
            tbl_Filter_TD_9473523_output.setInt32(r, 0, _s_store_sk4488_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_t = tbl_SerializeFromObject_TD_10501406_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9473523_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name4493_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_t = tbl_SerializeFromObject_TD_10501406_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9473523_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_company_name4505_t);
            r++;
        }
    }
    tbl_Filter_TD_9473523_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9473523_output #Row: " << tbl_Filter_TD_9473523_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9443754_key_leftMajor {
    int32_t _ss_sold_date_sk4437;
    bool operator==(const SW_JOIN_INNER_TD_9443754_key_leftMajor& other) const {
        return ((_ss_sold_date_sk4437 == other._ss_sold_date_sk4437));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9443754_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9443754_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk4437));
    }
};
}
struct SW_JOIN_INNER_TD_9443754_payload_leftMajor {
    std::string _i_brand4423;
    std::string _i_category4427;
    int32_t _ss_sold_date_sk4437;
    int32_t _ss_store_sk4444;
    int64_t _ss_sales_price4450;
};
struct SW_JOIN_INNER_TD_9443754_key_rightMajor {
    int32_t _d_date_sk4460;
    bool operator==(const SW_JOIN_INNER_TD_9443754_key_rightMajor& other) const {
        return ((_d_date_sk4460 == other._d_date_sk4460));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9443754_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9443754_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4460));
    }
};
}
struct SW_JOIN_INNER_TD_9443754_payload_rightMajor {
    int32_t _d_date_sk4460;
    int32_t _d_year4466;
    int32_t _d_moy4468;
};
void SW_JOIN_INNER_TD_9443754(Table &tbl_JOIN_INNER_TD_10961687_output, Table &tbl_Filter_TD_10732995_output, Table &tbl_JOIN_INNER_TD_9443754_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#4437 = d_date_sk#4460))
    // Left Table: ListBuffer(i_brand#4423, i_category#4427, ss_sold_date_sk#4437, ss_store_sk#4444, ss_sales_price#4450)
    // Right Table: ListBuffer(d_date_sk#4460, d_year#4466, d_moy#4468)
    // Output Table: ListBuffer(i_brand#4423, i_category#4427, ss_store_sk#4444, ss_sales_price#4450, d_year#4466, d_moy#4468)
    int left_nrow = tbl_JOIN_INNER_TD_10961687_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10732995_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9443754_key_leftMajor, SW_JOIN_INNER_TD_9443754_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10961687_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk4437_k = tbl_JOIN_INNER_TD_10961687_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9443754_key_leftMajor keyA{_ss_sold_date_sk4437_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n = tbl_JOIN_INNER_TD_10961687_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4423 = std::string(_i_brand4423_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n = tbl_JOIN_INNER_TD_10961687_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4427 = std::string(_i_category4427_n.data());
            int32_t _ss_sold_date_sk4437 = tbl_JOIN_INNER_TD_10961687_output.getInt32(i, 2);
            int32_t _ss_store_sk4444 = tbl_JOIN_INNER_TD_10961687_output.getInt32(i, 3);
            int64_t _ss_sales_price4450 = tbl_JOIN_INNER_TD_10961687_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_9443754_payload_leftMajor payloadA{_i_brand4423, _i_category4427, _ss_sold_date_sk4437, _ss_store_sk4444, _ss_sales_price4450};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10732995_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4460_k = tbl_Filter_TD_10732995_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9443754_key_leftMajor{_d_date_sk4460_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4423 = (it->second)._i_brand4423;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n{};
                memcpy(_i_brand4423_n.data(), (_i_brand4423).data(), (_i_brand4423).length());
                std::string _i_category4427 = (it->second)._i_category4427;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n{};
                memcpy(_i_category4427_n.data(), (_i_category4427).data(), (_i_category4427).length());
                int32_t _ss_sold_date_sk4437 = (it->second)._ss_sold_date_sk4437;
                int32_t _ss_store_sk4444 = (it->second)._ss_store_sk4444;
                int64_t _ss_sales_price4450 = (it->second)._ss_sales_price4450;
                int32_t _d_date_sk4460 = tbl_Filter_TD_10732995_output.getInt32(i, 0);
                int32_t _d_year4466 = tbl_Filter_TD_10732995_output.getInt32(i, 1);
                int32_t _d_moy4468 = tbl_Filter_TD_10732995_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9443754_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4423_n);
                tbl_JOIN_INNER_TD_9443754_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4427_n);
                tbl_JOIN_INNER_TD_9443754_output.setInt32(r, 2, _ss_store_sk4444);
                tbl_JOIN_INNER_TD_9443754_output.setInt64(r, 3, _ss_sales_price4450);
                tbl_JOIN_INNER_TD_9443754_output.setInt32(r, 4, _d_year4466);
                tbl_JOIN_INNER_TD_9443754_output.setInt32(r, 5, _d_moy4468);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9443754_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9443754_key_rightMajor, SW_JOIN_INNER_TD_9443754_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10732995_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4460_k = tbl_Filter_TD_10732995_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9443754_key_rightMajor keyA{_d_date_sk4460_k};
            int32_t _d_date_sk4460 = tbl_Filter_TD_10732995_output.getInt32(i, 0);
            int32_t _d_year4466 = tbl_Filter_TD_10732995_output.getInt32(i, 1);
            int32_t _d_moy4468 = tbl_Filter_TD_10732995_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9443754_payload_rightMajor payloadA{_d_date_sk4460, _d_year4466, _d_moy4468};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10961687_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk4437_k = tbl_JOIN_INNER_TD_10961687_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9443754_key_rightMajor{_ss_sold_date_sk4437_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4460 = (it->second)._d_date_sk4460;
                int32_t _d_year4466 = (it->second)._d_year4466;
                int32_t _d_moy4468 = (it->second)._d_moy4468;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n = tbl_JOIN_INNER_TD_10961687_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4423 = std::string(_i_brand4423_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n = tbl_JOIN_INNER_TD_10961687_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4427 = std::string(_i_category4427_n.data());
                int32_t _ss_sold_date_sk4437 = tbl_JOIN_INNER_TD_10961687_output.getInt32(i, 2);
                int32_t _ss_store_sk4444 = tbl_JOIN_INNER_TD_10961687_output.getInt32(i, 3);
                int64_t _ss_sales_price4450 = tbl_JOIN_INNER_TD_10961687_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_9443754_output.setInt32(r, 4, _d_year4466);
                tbl_JOIN_INNER_TD_9443754_output.setInt32(r, 5, _d_moy4468);
                tbl_JOIN_INNER_TD_9443754_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4423_n);
                tbl_JOIN_INNER_TD_9443754_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4427_n);
                tbl_JOIN_INNER_TD_9443754_output.setInt32(r, 2, _ss_store_sk4444);
                tbl_JOIN_INNER_TD_9443754_output.setInt64(r, 3, _ss_sales_price4450);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9443754_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9443754_output #Row: " << tbl_JOIN_INNER_TD_9443754_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9985419_key_leftMajor {
    int32_t _ss_store_sk4337;
    bool operator==(const SW_JOIN_INNER_TD_9985419_key_leftMajor& other) const {
        return ((_ss_store_sk4337 == other._ss_store_sk4337));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9985419_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9985419_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk4337));
    }
};
}
struct SW_JOIN_INNER_TD_9985419_payload_leftMajor {
    std::string _i_brand4316;
    std::string _i_category4320;
    int32_t _ss_store_sk4337;
    int64_t _ss_sales_price4343;
    int32_t _d_year4359;
    int32_t _d_moy4361;
};
struct SW_JOIN_INNER_TD_9985419_key_rightMajor {
    int32_t _s_store_sk4381;
    bool operator==(const SW_JOIN_INNER_TD_9985419_key_rightMajor& other) const {
        return ((_s_store_sk4381 == other._s_store_sk4381));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9985419_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9985419_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk4381));
    }
};
}
struct SW_JOIN_INNER_TD_9985419_payload_rightMajor {
    int32_t _s_store_sk4381;
    std::string _s_store_name4386;
    std::string _s_company_name4398;
};
void SW_JOIN_INNER_TD_9985419(Table &tbl_JOIN_INNER_TD_10844481_output, Table &tbl_Filter_TD_10844073_output, Table &tbl_JOIN_INNER_TD_9985419_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#4337 = s_store_sk#4381))
    // Left Table: ListBuffer(i_brand#4316, i_category#4320, ss_store_sk#4337, ss_sales_price#4343, d_year#4359, d_moy#4361)
    // Right Table: ListBuffer(s_store_sk#4381, s_store_name#4386, s_company_name#4398)
    // Output Table: ListBuffer(i_brand#4316, i_category#4320, ss_sales_price#4343, d_year#4359, d_moy#4361, s_store_name#4386, s_company_name#4398)
    int left_nrow = tbl_JOIN_INNER_TD_10844481_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10844073_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9985419_key_leftMajor, SW_JOIN_INNER_TD_9985419_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10844481_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk4337_k = tbl_JOIN_INNER_TD_10844481_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9985419_key_leftMajor keyA{_ss_store_sk4337_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n = tbl_JOIN_INNER_TD_10844481_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4316 = std::string(_i_brand4316_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n = tbl_JOIN_INNER_TD_10844481_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4320 = std::string(_i_category4320_n.data());
            int32_t _ss_store_sk4337 = tbl_JOIN_INNER_TD_10844481_output.getInt32(i, 2);
            int64_t _ss_sales_price4343 = tbl_JOIN_INNER_TD_10844481_output.getInt64(i, 3);
            int32_t _d_year4359 = tbl_JOIN_INNER_TD_10844481_output.getInt32(i, 4);
            int32_t _d_moy4361 = tbl_JOIN_INNER_TD_10844481_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9985419_payload_leftMajor payloadA{_i_brand4316, _i_category4320, _ss_store_sk4337, _ss_sales_price4343, _d_year4359, _d_moy4361};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10844073_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk4381_k = tbl_Filter_TD_10844073_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9985419_key_leftMajor{_s_store_sk4381_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4316 = (it->second)._i_brand4316;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n{};
                memcpy(_i_brand4316_n.data(), (_i_brand4316).data(), (_i_brand4316).length());
                std::string _i_category4320 = (it->second)._i_category4320;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n{};
                memcpy(_i_category4320_n.data(), (_i_category4320).data(), (_i_category4320).length());
                int32_t _ss_store_sk4337 = (it->second)._ss_store_sk4337;
                int64_t _ss_sales_price4343 = (it->second)._ss_sales_price4343;
                int32_t _d_year4359 = (it->second)._d_year4359;
                int32_t _d_moy4361 = (it->second)._d_moy4361;
                int32_t _s_store_sk4381 = tbl_Filter_TD_10844073_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_n = tbl_Filter_TD_10844073_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name4386 = std::string(_s_store_name4386_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_n = tbl_Filter_TD_10844073_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name4398 = std::string(_s_company_name4398_n.data());
                tbl_JOIN_INNER_TD_9985419_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4316_n);
                tbl_JOIN_INNER_TD_9985419_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4320_n);
                tbl_JOIN_INNER_TD_9985419_output.setInt64(r, 2, _ss_sales_price4343);
                tbl_JOIN_INNER_TD_9985419_output.setInt32(r, 3, _d_year4359);
                tbl_JOIN_INNER_TD_9985419_output.setInt32(r, 4, _d_moy4361);
                tbl_JOIN_INNER_TD_9985419_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name4386_n);
                tbl_JOIN_INNER_TD_9985419_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name4398_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9985419_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9985419_key_rightMajor, SW_JOIN_INNER_TD_9985419_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10844073_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk4381_k = tbl_Filter_TD_10844073_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9985419_key_rightMajor keyA{_s_store_sk4381_k};
            int32_t _s_store_sk4381 = tbl_Filter_TD_10844073_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_n = tbl_Filter_TD_10844073_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name4386 = std::string(_s_store_name4386_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_n = tbl_Filter_TD_10844073_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name4398 = std::string(_s_company_name4398_n.data());
            SW_JOIN_INNER_TD_9985419_payload_rightMajor payloadA{_s_store_sk4381, _s_store_name4386, _s_company_name4398};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10844481_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk4337_k = tbl_JOIN_INNER_TD_10844481_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9985419_key_rightMajor{_ss_store_sk4337_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk4381 = (it->second)._s_store_sk4381;
                std::string _s_store_name4386 = (it->second)._s_store_name4386;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_n{};
                memcpy(_s_store_name4386_n.data(), (_s_store_name4386).data(), (_s_store_name4386).length());
                std::string _s_company_name4398 = (it->second)._s_company_name4398;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_n{};
                memcpy(_s_company_name4398_n.data(), (_s_company_name4398).data(), (_s_company_name4398).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n = tbl_JOIN_INNER_TD_10844481_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4316 = std::string(_i_brand4316_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n = tbl_JOIN_INNER_TD_10844481_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4320 = std::string(_i_category4320_n.data());
                int32_t _ss_store_sk4337 = tbl_JOIN_INNER_TD_10844481_output.getInt32(i, 2);
                int64_t _ss_sales_price4343 = tbl_JOIN_INNER_TD_10844481_output.getInt64(i, 3);
                int32_t _d_year4359 = tbl_JOIN_INNER_TD_10844481_output.getInt32(i, 4);
                int32_t _d_moy4361 = tbl_JOIN_INNER_TD_10844481_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9985419_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name4386_n);
                tbl_JOIN_INNER_TD_9985419_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name4398_n);
                tbl_JOIN_INNER_TD_9985419_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4316_n);
                tbl_JOIN_INNER_TD_9985419_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4320_n);
                tbl_JOIN_INNER_TD_9985419_output.setInt64(r, 2, _ss_sales_price4343);
                tbl_JOIN_INNER_TD_9985419_output.setInt32(r, 3, _d_year4359);
                tbl_JOIN_INNER_TD_9985419_output.setInt32(r, 4, _d_moy4361);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9985419_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9985419_output #Row: " << tbl_JOIN_INNER_TD_9985419_output.getNumRow() << std::endl;
}

void SW_Window_TD_9143522(Table &tbl_Aggregate_TD_10684223_output, Table &tbl_Window_TD_9143522_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#126, d_moy#128) windowspecdefinition(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126 ASC NULLS FIRST, d_moy#128 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#3546)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, _w0#3558)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546)
    struct SW_Window_TD_9143522Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int64_t _sum_sales3544;
        int64_t __w03558;
    }; 

    int nrow = tbl_Aggregate_TD_10684223_output.getNumRow();
    std::vector<SW_Window_TD_9143522Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Aggregate_TD_10684223_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_9143522_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Aggregate_TD_10684223_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_9143522_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Aggregate_TD_10684223_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_9143522_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Aggregate_TD_10684223_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_9143522_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        int32_t _d_year126 = tbl_Aggregate_TD_10684223_output.getInt32(i, 4);
        tbl_Window_TD_9143522_output.setInt32(r, 4,_d_year126);
        int32_t _d_moy128 = tbl_Aggregate_TD_10684223_output.getInt32(i, 5);
        tbl_Window_TD_9143522_output.setInt32(r, 5,_d_moy128);
        int64_t _sum_sales3544 = tbl_Aggregate_TD_10684223_output.getInt64(i, 6);
        tbl_Window_TD_9143522_output.setInt64(r, 6,_sum_sales3544);
        int64_t __w03558 = tbl_Aggregate_TD_10684223_output.getInt64(i, 7);
        tbl_Window_TD_9143522_output.setInt64(r, 7,__w03558);
        r++;
        SW_Window_TD_9143522Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_sum_sales3544,__w03558};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_9143522Row& a, const SW_Window_TD_9143522Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 < b._s_store_name383)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 < b._s_company_name395)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 < b._d_year126)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 == b._d_year126) && (a._d_moy128 < b._d_moy128)); 
}
    }SW_Window_TD_9143522_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_9143522_order0);
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
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_9143522_output.setInt32(r, 8, ranks0[i]);
    }
    tbl_Window_TD_9143522_output.setNumRow(r);
    std::cout << "tbl_Window_TD_9143522_output #Row: " << tbl_Window_TD_9143522_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8323340_key_leftMajor {
    int32_t _ss_store_sk4444;
    bool operator==(const SW_JOIN_INNER_TD_8323340_key_leftMajor& other) const {
        return ((_ss_store_sk4444 == other._ss_store_sk4444));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8323340_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8323340_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk4444));
    }
};
}
struct SW_JOIN_INNER_TD_8323340_payload_leftMajor {
    std::string _i_brand4423;
    std::string _i_category4427;
    int32_t _ss_store_sk4444;
    int64_t _ss_sales_price4450;
    int32_t _d_year4466;
    int32_t _d_moy4468;
};
struct SW_JOIN_INNER_TD_8323340_key_rightMajor {
    int32_t _s_store_sk4488;
    bool operator==(const SW_JOIN_INNER_TD_8323340_key_rightMajor& other) const {
        return ((_s_store_sk4488 == other._s_store_sk4488));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8323340_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8323340_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk4488));
    }
};
}
struct SW_JOIN_INNER_TD_8323340_payload_rightMajor {
    int32_t _s_store_sk4488;
    std::string _s_store_name4493;
    std::string _s_company_name4505;
};
void SW_JOIN_INNER_TD_8323340(Table &tbl_JOIN_INNER_TD_9443754_output, Table &tbl_Filter_TD_9473523_output, Table &tbl_JOIN_INNER_TD_8323340_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#4444 = s_store_sk#4488))
    // Left Table: ListBuffer(i_brand#4423, i_category#4427, ss_store_sk#4444, ss_sales_price#4450, d_year#4466, d_moy#4468)
    // Right Table: ListBuffer(s_store_sk#4488, s_store_name#4493, s_company_name#4505)
    // Output Table: ListBuffer(i_brand#4423, i_category#4427, ss_sales_price#4450, d_year#4466, d_moy#4468, s_store_name#4493, s_company_name#4505)
    int left_nrow = tbl_JOIN_INNER_TD_9443754_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9473523_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8323340_key_leftMajor, SW_JOIN_INNER_TD_8323340_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9443754_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk4444_k = tbl_JOIN_INNER_TD_9443754_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8323340_key_leftMajor keyA{_ss_store_sk4444_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n = tbl_JOIN_INNER_TD_9443754_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_brand4423 = std::string(_i_brand4423_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n = tbl_JOIN_INNER_TD_9443754_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_category4427 = std::string(_i_category4427_n.data());
            int32_t _ss_store_sk4444 = tbl_JOIN_INNER_TD_9443754_output.getInt32(i, 2);
            int64_t _ss_sales_price4450 = tbl_JOIN_INNER_TD_9443754_output.getInt64(i, 3);
            int32_t _d_year4466 = tbl_JOIN_INNER_TD_9443754_output.getInt32(i, 4);
            int32_t _d_moy4468 = tbl_JOIN_INNER_TD_9443754_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8323340_payload_leftMajor payloadA{_i_brand4423, _i_category4427, _ss_store_sk4444, _ss_sales_price4450, _d_year4466, _d_moy4468};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9473523_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk4488_k = tbl_Filter_TD_9473523_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8323340_key_leftMajor{_s_store_sk4488_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_brand4423 = (it->second)._i_brand4423;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n{};
                memcpy(_i_brand4423_n.data(), (_i_brand4423).data(), (_i_brand4423).length());
                std::string _i_category4427 = (it->second)._i_category4427;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n{};
                memcpy(_i_category4427_n.data(), (_i_category4427).data(), (_i_category4427).length());
                int32_t _ss_store_sk4444 = (it->second)._ss_store_sk4444;
                int64_t _ss_sales_price4450 = (it->second)._ss_sales_price4450;
                int32_t _d_year4466 = (it->second)._d_year4466;
                int32_t _d_moy4468 = (it->second)._d_moy4468;
                int32_t _s_store_sk4488 = tbl_Filter_TD_9473523_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_n = tbl_Filter_TD_9473523_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name4493 = std::string(_s_store_name4493_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_n = tbl_Filter_TD_9473523_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_company_name4505 = std::string(_s_company_name4505_n.data());
                tbl_JOIN_INNER_TD_8323340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4423_n);
                tbl_JOIN_INNER_TD_8323340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4427_n);
                tbl_JOIN_INNER_TD_8323340_output.setInt64(r, 2, _ss_sales_price4450);
                tbl_JOIN_INNER_TD_8323340_output.setInt32(r, 3, _d_year4466);
                tbl_JOIN_INNER_TD_8323340_output.setInt32(r, 4, _d_moy4468);
                tbl_JOIN_INNER_TD_8323340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name4493_n);
                tbl_JOIN_INNER_TD_8323340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name4505_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8323340_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8323340_key_rightMajor, SW_JOIN_INNER_TD_8323340_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9473523_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk4488_k = tbl_Filter_TD_9473523_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8323340_key_rightMajor keyA{_s_store_sk4488_k};
            int32_t _s_store_sk4488 = tbl_Filter_TD_9473523_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_n = tbl_Filter_TD_9473523_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name4493 = std::string(_s_store_name4493_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_n = tbl_Filter_TD_9473523_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_company_name4505 = std::string(_s_company_name4505_n.data());
            SW_JOIN_INNER_TD_8323340_payload_rightMajor payloadA{_s_store_sk4488, _s_store_name4493, _s_company_name4505};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9443754_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk4444_k = tbl_JOIN_INNER_TD_9443754_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8323340_key_rightMajor{_ss_store_sk4444_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk4488 = (it->second)._s_store_sk4488;
                std::string _s_store_name4493 = (it->second)._s_store_name4493;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_n{};
                memcpy(_s_store_name4493_n.data(), (_s_store_name4493).data(), (_s_store_name4493).length());
                std::string _s_company_name4505 = (it->second)._s_company_name4505;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_n{};
                memcpy(_s_company_name4505_n.data(), (_s_company_name4505).data(), (_s_company_name4505).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n = tbl_JOIN_INNER_TD_9443754_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_brand4423 = std::string(_i_brand4423_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n = tbl_JOIN_INNER_TD_9443754_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_category4427 = std::string(_i_category4427_n.data());
                int32_t _ss_store_sk4444 = tbl_JOIN_INNER_TD_9443754_output.getInt32(i, 2);
                int64_t _ss_sales_price4450 = tbl_JOIN_INNER_TD_9443754_output.getInt64(i, 3);
                int32_t _d_year4466 = tbl_JOIN_INNER_TD_9443754_output.getInt32(i, 4);
                int32_t _d_moy4468 = tbl_JOIN_INNER_TD_9443754_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8323340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name4493_n);
                tbl_JOIN_INNER_TD_8323340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_company_name4505_n);
                tbl_JOIN_INNER_TD_8323340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_brand4423_n);
                tbl_JOIN_INNER_TD_8323340_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category4427_n);
                tbl_JOIN_INNER_TD_8323340_output.setInt64(r, 2, _ss_sales_price4450);
                tbl_JOIN_INNER_TD_8323340_output.setInt32(r, 3, _d_year4466);
                tbl_JOIN_INNER_TD_8323340_output.setInt32(r, 4, _d_moy4468);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8323340_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8323340_output #Row: " << tbl_JOIN_INNER_TD_8323340_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8923830_key {
    std::string _i_category4320;
    std::string _i_brand4316;
    std::string _s_store_name4386;
    std::string _s_company_name4398;
    int32_t _d_year4359;
    int32_t _d_moy4361;
    bool operator==(const SW_Aggregate_TD_8923830_key& other) const { return (_i_category4320 == other._i_category4320) && (_i_brand4316 == other._i_brand4316) && (_s_store_name4386 == other._s_store_name4386) && (_s_company_name4398 == other._s_company_name4398) && (_d_year4359 == other._d_year4359) && (_d_moy4361 == other._d_moy4361); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8923830_key> {
    std::size_t operator() (const SW_Aggregate_TD_8923830_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4320)) + (hash<string>()(k._i_brand4316)) + (hash<string>()(k._s_store_name4386)) + (hash<string>()(k._s_company_name4398)) + (hash<int32_t>()(k._d_year4359)) + (hash<int32_t>()(k._d_moy4361));
    }
};
}
struct SW_Aggregate_TD_8923830_payload {
    int64_t _sum_sales3544_sum_0;
};
void SW_Aggregate_TD_8923830(Table &tbl_JOIN_INNER_TD_9985419_output, Table &tbl_Aggregate_TD_8923830_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#4320, i_brand#4316, s_store_name#4386, s_company_name#4398, d_year#4359, d_moy#4361, MakeDecimal(sum(UnscaledValue(ss_sales_price#4343)),17,2) AS sum_sales#3544)
    // Input: ListBuffer(i_brand#4316, i_category#4320, ss_sales_price#4343, d_year#4359, d_moy#4361, s_store_name#4386, s_company_name#4398)
    // Output: ListBuffer(i_category#4320, i_brand#4316, s_store_name#4386, s_company_name#4398, d_year#4359, d_moy#4361, sum_sales#3544)
    std::unordered_map<SW_Aggregate_TD_8923830_key, SW_Aggregate_TD_8923830_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9985419_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4316 = tbl_JOIN_INNER_TD_9985419_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4320 = tbl_JOIN_INNER_TD_9985419_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _ss_sales_price4343 = tbl_JOIN_INNER_TD_9985419_output.getInt64(i, 2);
        int32_t _d_year4359 = tbl_JOIN_INNER_TD_9985419_output.getInt32(i, 3);
        int32_t _d_moy4361 = tbl_JOIN_INNER_TD_9985419_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386 = tbl_JOIN_INNER_TD_9985419_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398 = tbl_JOIN_INNER_TD_9985419_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_8923830_key k{std::string(_i_category4320.data()), std::string(_i_brand4316.data()), std::string(_s_store_name4386.data()), std::string(_s_company_name4398.data()), _d_year4359, _d_moy4361};
        int64_t _sum_sales3544_sum_0 = _ss_sales_price4343;
        SW_Aggregate_TD_8923830_payload p{_sum_sales3544_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sum_sales3544_sum_0 + _sum_sales3544_sum_0;
            p._sum_sales3544_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4320{};
        memcpy(_i_category4320.data(), ((it.first)._i_category4320).data(), ((it.first)._i_category4320).length());
        tbl_Aggregate_TD_8923830_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category4320);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4316{};
        memcpy(_i_brand4316.data(), ((it.first)._i_brand4316).data(), ((it.first)._i_brand4316).length());
        tbl_Aggregate_TD_8923830_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4316);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386{};
        memcpy(_s_store_name4386.data(), ((it.first)._s_store_name4386).data(), ((it.first)._s_store_name4386).length());
        tbl_Aggregate_TD_8923830_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name4386);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398{};
        memcpy(_s_company_name4398.data(), ((it.first)._s_company_name4398).data(), ((it.first)._s_company_name4398).length());
        tbl_Aggregate_TD_8923830_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name4398);
        tbl_Aggregate_TD_8923830_output.setInt32(r, 4, (it.first)._d_year4359);
        tbl_Aggregate_TD_8923830_output.setInt32(r, 5, (it.first)._d_moy4361);
        int64_t _sum_sales3544 = (it.second)._sum_sales3544_sum_0;
        tbl_Aggregate_TD_8923830_output.setInt64(r, 6, _sum_sales3544);
        ++r;
    }
    tbl_Aggregate_TD_8923830_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8923830_output #Row: " << tbl_Aggregate_TD_8923830_output.getNumRow() << std::endl;
}

void SW_Filter_TD_864194(Table &tbl_Window_TD_9143522_output, Table &tbl_Filter_TD_864194_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_year#126) AND (d_year#126 = 1999)))
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546)
    int r = 0;
    int nrow1 = tbl_Window_TD_9143522_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Window_TD_9143522_output.getInt32(i, 4);
        if ((_d_year126!= 0) && (_d_year126 == 1999)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_9143522_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_864194_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_9143522_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_864194_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_Window_TD_9143522_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_864194_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_Window_TD_9143522_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_864194_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_t);
            int32_t _d_year126_t = tbl_Window_TD_9143522_output.getInt32(i, 4);
            tbl_Filter_TD_864194_output.setInt32(r, 4, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_9143522_output.getInt32(i, 5);
            tbl_Filter_TD_864194_output.setInt32(r, 5, _d_moy128_t);
            int64_t _sum_sales3544_t = tbl_Window_TD_9143522_output.getInt64(i, 6);
            tbl_Filter_TD_864194_output.setInt64(r, 6, _sum_sales3544_t);
            int64_t __w03558_t = tbl_Window_TD_9143522_output.getInt64(i, 7);
            tbl_Filter_TD_864194_output.setInt64(r, 7, __w03558_t);
            int32_t _rn3546_t = tbl_Window_TD_9143522_output.getInt32(i, 8);
            tbl_Filter_TD_864194_output.setInt32(r, 8, _rn3546_t);
            r++;
        }
    }
    tbl_Filter_TD_864194_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_864194_output #Row: " << tbl_Filter_TD_864194_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7878749_key {
    std::string _i_category4427;
    std::string _i_brand4423;
    std::string _s_store_name4493;
    std::string _s_company_name4505;
    int32_t _d_year4466;
    int32_t _d_moy4468;
    bool operator==(const SW_Aggregate_TD_7878749_key& other) const { return (_i_category4427 == other._i_category4427) && (_i_brand4423 == other._i_brand4423) && (_s_store_name4493 == other._s_store_name4493) && (_s_company_name4505 == other._s_company_name4505) && (_d_year4466 == other._d_year4466) && (_d_moy4468 == other._d_moy4468); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7878749_key> {
    std::size_t operator() (const SW_Aggregate_TD_7878749_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4427)) + (hash<string>()(k._i_brand4423)) + (hash<string>()(k._s_store_name4493)) + (hash<string>()(k._s_company_name4505)) + (hash<int32_t>()(k._d_year4466)) + (hash<int32_t>()(k._d_moy4468));
    }
};
}
struct SW_Aggregate_TD_7878749_payload {
    int64_t _sum_sales3544_sum_0;
};
void SW_Aggregate_TD_7878749(Table &tbl_JOIN_INNER_TD_8323340_output, Table &tbl_Aggregate_TD_7878749_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#4427, i_brand#4423, s_store_name#4493, s_company_name#4505, d_year#4466, d_moy#4468, MakeDecimal(sum(UnscaledValue(ss_sales_price#4450)),17,2) AS sum_sales#3544)
    // Input: ListBuffer(i_brand#4423, i_category#4427, ss_sales_price#4450, d_year#4466, d_moy#4468, s_store_name#4493, s_company_name#4505)
    // Output: ListBuffer(i_category#4427, i_brand#4423, s_store_name#4493, s_company_name#4505, d_year#4466, d_moy#4468, sum_sales#3544)
    std::unordered_map<SW_Aggregate_TD_7878749_key, SW_Aggregate_TD_7878749_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8323340_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4423 = tbl_JOIN_INNER_TD_8323340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category4427 = tbl_JOIN_INNER_TD_8323340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _ss_sales_price4450 = tbl_JOIN_INNER_TD_8323340_output.getInt64(i, 2);
        int32_t _d_year4466 = tbl_JOIN_INNER_TD_8323340_output.getInt32(i, 3);
        int32_t _d_moy4468 = tbl_JOIN_INNER_TD_8323340_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493 = tbl_JOIN_INNER_TD_8323340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505 = tbl_JOIN_INNER_TD_8323340_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_7878749_key k{std::string(_i_category4427.data()), std::string(_i_brand4423.data()), std::string(_s_store_name4493.data()), std::string(_s_company_name4505.data()), _d_year4466, _d_moy4468};
        int64_t _sum_sales3544_sum_0 = _ss_sales_price4450;
        SW_Aggregate_TD_7878749_payload p{_sum_sales3544_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sum_sales3544_sum_0 + _sum_sales3544_sum_0;
            p._sum_sales3544_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4427{};
        memcpy(_i_category4427.data(), ((it.first)._i_category4427).data(), ((it.first)._i_category4427).length());
        tbl_Aggregate_TD_7878749_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category4427);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4423{};
        memcpy(_i_brand4423.data(), ((it.first)._i_brand4423).data(), ((it.first)._i_brand4423).length());
        tbl_Aggregate_TD_7878749_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand4423);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493{};
        memcpy(_s_store_name4493.data(), ((it.first)._s_store_name4493).data(), ((it.first)._s_store_name4493).length());
        tbl_Aggregate_TD_7878749_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name4493);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505{};
        memcpy(_s_company_name4505.data(), ((it.first)._s_company_name4505).data(), ((it.first)._s_company_name4505).length());
        tbl_Aggregate_TD_7878749_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name4505);
        tbl_Aggregate_TD_7878749_output.setInt32(r, 4, (it.first)._d_year4466);
        tbl_Aggregate_TD_7878749_output.setInt32(r, 5, (it.first)._d_moy4468);
        int64_t _sum_sales3544 = (it.second)._sum_sales3544_sum_0;
        tbl_Aggregate_TD_7878749_output.setInt64(r, 6, _sum_sales3544);
        ++r;
    }
    tbl_Aggregate_TD_7878749_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7878749_output #Row: " << tbl_Aggregate_TD_7878749_output.getNumRow() << std::endl;
}

void SW_Window_TD_7882987(Table &tbl_Aggregate_TD_8923830_output, Table &tbl_Window_TD_7882987_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#4359, d_moy#4361) windowspecdefinition(i_category#4320, i_brand#4316, s_store_name#4386, s_company_name#4398, d_year#4359 ASC NULLS FIRST, d_moy#4361 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#4414)
    // Input: ListBuffer(i_category#4320, i_brand#4316, s_store_name#4386, s_company_name#4398, d_year#4359, d_moy#4361, sum_sales#3544)
    // Output: ListBuffer(i_category#4320, i_brand#4316, s_store_name#4386, s_company_name#4398, d_year#4359, d_moy#4361, sum_sales#3544, rn#4414)
    struct SW_Window_TD_7882987Row {
        std::string _i_category4320;
        std::string _i_brand4316;
        std::string _s_store_name4386;
        std::string _s_company_name4398;
        int32_t _d_year4359;
        int32_t _d_moy4361;
        int64_t _sum_sales3544;
    }; 

    int nrow = tbl_Aggregate_TD_8923830_output.getNumRow();
    std::vector<SW_Window_TD_7882987Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4320 = tbl_Aggregate_TD_8923830_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7882987_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category4320);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4316 = tbl_Aggregate_TD_8923830_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7882987_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand4316);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386 = tbl_Aggregate_TD_8923830_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7882987_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name4386);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398 = tbl_Aggregate_TD_8923830_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_7882987_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name4398);
        int32_t _d_year4359 = tbl_Aggregate_TD_8923830_output.getInt32(i, 4);
        tbl_Window_TD_7882987_output.setInt32(r, 4,_d_year4359);
        int32_t _d_moy4361 = tbl_Aggregate_TD_8923830_output.getInt32(i, 5);
        tbl_Window_TD_7882987_output.setInt32(r, 5,_d_moy4361);
        int64_t _sum_sales3544 = tbl_Aggregate_TD_8923830_output.getInt64(i, 6);
        tbl_Window_TD_7882987_output.setInt64(r, 6,_sum_sales3544);
        r++;
        SW_Window_TD_7882987Row t = {std::string(_i_category4320.data()),std::string(_i_brand4316.data()),std::string(_s_store_name4386.data()),std::string(_s_company_name4398.data()),_d_year4359,_d_moy4361,_sum_sales3544};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7882987Row& a, const SW_Window_TD_7882987Row& b) const { return 
(a._i_category4320 < b._i_category4320) || 
 ((a._i_category4320 == b._i_category4320) && (a._i_brand4316 < b._i_brand4316)) || 
 ((a._i_category4320 == b._i_category4320) && (a._i_brand4316 == b._i_brand4316) && (a._s_store_name4386 < b._s_store_name4386)) || 
 ((a._i_category4320 == b._i_category4320) && (a._i_brand4316 == b._i_brand4316) && (a._s_store_name4386 == b._s_store_name4386) && (a._s_company_name4398 < b._s_company_name4398)) || 
 ((a._i_category4320 == b._i_category4320) && (a._i_brand4316 == b._i_brand4316) && (a._s_store_name4386 == b._s_store_name4386) && (a._s_company_name4398 == b._s_company_name4398) && (a._d_year4359 < b._d_year4359)) || 
 ((a._i_category4320 == b._i_category4320) && (a._i_brand4316 == b._i_brand4316) && (a._s_store_name4386 == b._s_store_name4386) && (a._s_company_name4398 == b._s_company_name4398) && (a._d_year4359 == b._d_year4359) && (a._d_moy4361 < b._d_moy4361)); 
}
    }SW_Window_TD_7882987_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7882987_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category4320 == rows0[i-1]._i_category4320 && rows0[i]._i_brand4316 == rows0[i-1]._i_brand4316 && rows0[i]._s_store_name4386 == rows0[i-1]._s_store_name4386 && rows0[i]._s_company_name4398 == rows0[i-1]._s_company_name4398);
        isSameOrderKey0 = ( rows0[i]._d_year4359 == rows0[i-1]._d_year4359 && rows0[i]._d_moy4361 == rows0[i-1]._d_moy4361);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_7882987_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_7882987_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7882987_output #Row: " << tbl_Window_TD_7882987_output.getNumRow() << std::endl;
}

void SW_Window_TD_7832204(Table &tbl_Filter_TD_864194_output, Table &tbl_Window_TD_7832204_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#3558) windowspecdefinition(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#3545)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546, avg_monthly_sales#3545)
    struct SW_Window_TD_7832204Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int64_t _sum_sales3544;
        int64_t __w03558;
        int32_t _rn3546;
    }; 

    int nrow = tbl_Filter_TD_864194_output.getNumRow();
    std::vector<SW_Window_TD_7832204Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_864194_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_7832204_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Filter_TD_864194_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_7832204_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Filter_TD_864194_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_7832204_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Filter_TD_864194_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_7832204_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        int32_t _d_year126 = tbl_Filter_TD_864194_output.getInt32(i, 4);
        tbl_Window_TD_7832204_output.setInt32(r, 4,_d_year126);
        int32_t _d_moy128 = tbl_Filter_TD_864194_output.getInt32(i, 5);
        tbl_Window_TD_7832204_output.setInt32(r, 5,_d_moy128);
        int64_t _sum_sales3544 = tbl_Filter_TD_864194_output.getInt64(i, 6);
        tbl_Window_TD_7832204_output.setInt64(r, 6,_sum_sales3544);
        int64_t __w03558 = tbl_Filter_TD_864194_output.getInt64(i, 7);
        tbl_Window_TD_7832204_output.setInt64(r, 7,__w03558);
        int32_t _rn3546 = tbl_Filter_TD_864194_output.getInt32(i, 8);
        tbl_Window_TD_7832204_output.setInt32(r, 8,_rn3546);
        r++;
        SW_Window_TD_7832204Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_sum_sales3544,__w03558,_rn3546};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_7832204Row& a, const SW_Window_TD_7832204Row& b) const { return 
(a._i_category240 < b._i_category240) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 < b._i_brand236)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 < b._s_store_name383)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 < b._s_company_name395)) || 
 ((a._i_category240 == b._i_category240) && (a._i_brand236 == b._i_brand236) && (a._s_store_name383 == b._s_store_name383) && (a._s_company_name395 == b._s_company_name395) && (a._d_year126 < b._d_year126)); 
}
    }SW_Window_TD_7832204_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_7832204_order0);
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
        sum0 += it.__w03558;
        currentRow0 +=1;
        tbl_Window_TD_7832204_output.setInt64(r, 9, sum0 / currentRow0 );
    }
    tbl_Window_TD_7832204_output.setNumRow(r);
    std::cout << "tbl_Window_TD_7832204_output #Row: " << tbl_Window_TD_7832204_output.getNumRow() << std::endl;
}

void SW_Window_TD_6278248(Table &tbl_Aggregate_TD_7878749_output, Table &tbl_Window_TD_6278248_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(d_year#4466, d_moy#4468) windowspecdefinition(i_category#4427, i_brand#4423, s_store_name#4493, s_company_name#4505, d_year#4466 ASC NULLS FIRST, d_moy#4468 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rn#4521)
    // Input: ListBuffer(i_category#4427, i_brand#4423, s_store_name#4493, s_company_name#4505, d_year#4466, d_moy#4468, sum_sales#3544)
    // Output: ListBuffer(i_category#4427, i_brand#4423, s_store_name#4493, s_company_name#4505, d_year#4466, d_moy#4468, sum_sales#3544, rn#4521)
    struct SW_Window_TD_6278248Row {
        std::string _i_category4427;
        std::string _i_brand4423;
        std::string _s_store_name4493;
        std::string _s_company_name4505;
        int32_t _d_year4466;
        int32_t _d_moy4468;
        int64_t _sum_sales3544;
    }; 

    int nrow = tbl_Aggregate_TD_7878749_output.getNumRow();
    std::vector<SW_Window_TD_6278248Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4427 = tbl_Aggregate_TD_7878749_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        tbl_Window_TD_6278248_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category4427);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4423 = tbl_Aggregate_TD_7878749_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        tbl_Window_TD_6278248_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand4423);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493 = tbl_Aggregate_TD_7878749_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        tbl_Window_TD_6278248_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name4493);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505 = tbl_Aggregate_TD_7878749_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        tbl_Window_TD_6278248_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name4505);
        int32_t _d_year4466 = tbl_Aggregate_TD_7878749_output.getInt32(i, 4);
        tbl_Window_TD_6278248_output.setInt32(r, 4,_d_year4466);
        int32_t _d_moy4468 = tbl_Aggregate_TD_7878749_output.getInt32(i, 5);
        tbl_Window_TD_6278248_output.setInt32(r, 5,_d_moy4468);
        int64_t _sum_sales3544 = tbl_Aggregate_TD_7878749_output.getInt64(i, 6);
        tbl_Window_TD_6278248_output.setInt64(r, 6,_sum_sales3544);
        r++;
        SW_Window_TD_6278248Row t = {std::string(_i_category4427.data()),std::string(_i_brand4423.data()),std::string(_s_store_name4493.data()),std::string(_s_company_name4505.data()),_d_year4466,_d_moy4468,_sum_sales3544};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_6278248Row& a, const SW_Window_TD_6278248Row& b) const { return 
(a._i_category4427 < b._i_category4427) || 
 ((a._i_category4427 == b._i_category4427) && (a._i_brand4423 < b._i_brand4423)) || 
 ((a._i_category4427 == b._i_category4427) && (a._i_brand4423 == b._i_brand4423) && (a._s_store_name4493 < b._s_store_name4493)) || 
 ((a._i_category4427 == b._i_category4427) && (a._i_brand4423 == b._i_brand4423) && (a._s_store_name4493 == b._s_store_name4493) && (a._s_company_name4505 < b._s_company_name4505)) || 
 ((a._i_category4427 == b._i_category4427) && (a._i_brand4423 == b._i_brand4423) && (a._s_store_name4493 == b._s_store_name4493) && (a._s_company_name4505 == b._s_company_name4505) && (a._d_year4466 < b._d_year4466)) || 
 ((a._i_category4427 == b._i_category4427) && (a._i_brand4423 == b._i_brand4423) && (a._s_store_name4493 == b._s_store_name4493) && (a._s_company_name4505 == b._s_company_name4505) && (a._d_year4466 == b._d_year4466) && (a._d_moy4468 < b._d_moy4468)); 
}
    }SW_Window_TD_6278248_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_6278248_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ( rows0[i]._i_category4427 == rows0[i-1]._i_category4427 && rows0[i]._i_brand4423 == rows0[i-1]._i_brand4423 && rows0[i]._s_store_name4493 == rows0[i-1]._s_store_name4493 && rows0[i]._s_company_name4505 == rows0[i-1]._s_company_name4505);
        isSameOrderKey0 = ( rows0[i]._d_year4466 == rows0[i-1]._d_year4466 && rows0[i]._d_moy4468 == rows0[i-1]._d_moy4468);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_6278248_output.setInt32(r, 7, ranks0[i]);
    }
    tbl_Window_TD_6278248_output.setNumRow(r);
    std::cout << "tbl_Window_TD_6278248_output #Row: " << tbl_Window_TD_6278248_output.getNumRow() << std::endl;
}

void SW_Project_TD_6645868(Table &tbl_Window_TD_7882987_output, Table &tbl_Project_TD_6645868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3544 AS sum_sales#3565)
    // Input: ListBuffer(i_category#4320, i_brand#4316, s_store_name#4386, s_company_name#4398, d_year#4359, d_moy#4361, sum_sales#3544, rn#4414)
    // Output: ListBuffer(i_category#4320, i_brand#4316, s_store_name#4386, s_company_name#4398, sum_sales#3565, rn#4414)
    int nrow1 = tbl_Window_TD_7882987_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4320 = tbl_Window_TD_7882987_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4316 = tbl_Window_TD_7882987_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386 = tbl_Window_TD_7882987_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398 = tbl_Window_TD_7882987_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year4359 = tbl_Window_TD_7882987_output.getInt32(i, 4);
        int32_t _d_moy4361 = tbl_Window_TD_7882987_output.getInt32(i, 5);
        int64_t _sum_sales3544 = tbl_Window_TD_7882987_output.getInt64(i, 6);
        int32_t _rn4414 = tbl_Window_TD_7882987_output.getInt32(i, 7);
        int64_t _sum_sales3565 = _sum_sales3544;
        tbl_Project_TD_6645868_output.setInt64(i, 4, _sum_sales3565);
        tbl_Project_TD_6645868_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category4320);
        tbl_Project_TD_6645868_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand4316);
        tbl_Project_TD_6645868_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name4386);
        tbl_Project_TD_6645868_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name4398);
        tbl_Project_TD_6645868_output.setInt32(i, 5, _rn4414);
    }
    tbl_Project_TD_6645868_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6645868_output #Row: " << tbl_Project_TD_6645868_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6889843(Table &tbl_Window_TD_7832204_output, Table &tbl_Filter_TD_6889843_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(avg_monthly_sales#3545) AND (avg_monthly_sales#3545 > 0.000000)) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#3544 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#3545 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#3545 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000)))
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, _w0#3558, rn#3546, avg_monthly_sales#3545)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, avg_monthly_sales#3545, rn#3546)
    int r = 0;
    int nrow1 = tbl_Window_TD_7832204_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _avg_monthly_sales3545 = tbl_Window_TD_7832204_output.getInt64(i, 9);
        int64_t _sum_sales3544 = tbl_Window_TD_7832204_output.getInt64(i, 6);
        if (((_avg_monthly_sales3545!= 0) && (_avg_monthly_sales3545 > 0.000000)) && (_sum_sales3544 > 0.1000000000000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_Window_TD_7832204_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6889843_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_Window_TD_7832204_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6889843_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_Window_TD_7832204_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6889843_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_t = tbl_Window_TD_7832204_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_6889843_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_t);
            int32_t _d_year126_t = tbl_Window_TD_7832204_output.getInt32(i, 4);
            tbl_Filter_TD_6889843_output.setInt32(r, 4, _d_year126_t);
            int32_t _d_moy128_t = tbl_Window_TD_7832204_output.getInt32(i, 5);
            tbl_Filter_TD_6889843_output.setInt32(r, 5, _d_moy128_t);
            int64_t _sum_sales3544_t = tbl_Window_TD_7832204_output.getInt64(i, 6);
            tbl_Filter_TD_6889843_output.setInt64(r, 6, _sum_sales3544_t);
            int64_t _avg_monthly_sales3545_t = tbl_Window_TD_7832204_output.getInt64(i, 9);
            tbl_Filter_TD_6889843_output.setInt64(r, 7, _avg_monthly_sales3545_t);
            int32_t _rn3546_t = tbl_Window_TD_7832204_output.getInt32(i, 8);
            tbl_Filter_TD_6889843_output.setInt32(r, 8, _rn3546_t);
            r++;
        }
    }
    tbl_Filter_TD_6889843_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6889843_output #Row: " << tbl_Filter_TD_6889843_output.getNumRow() << std::endl;
}

void SW_Project_TD_5488834(Table &tbl_Window_TD_6278248_output, Table &tbl_Project_TD_5488834_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3544 AS sum_sales#3574)
    // Input: ListBuffer(i_category#4427, i_brand#4423, s_store_name#4493, s_company_name#4505, d_year#4466, d_moy#4468, sum_sales#3544, rn#4521)
    // Output: ListBuffer(i_category#4427, i_brand#4423, s_store_name#4493, s_company_name#4505, sum_sales#3574, rn#4521)
    int nrow1 = tbl_Window_TD_6278248_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4427 = tbl_Window_TD_6278248_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand4423 = tbl_Window_TD_6278248_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493 = tbl_Window_TD_6278248_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505 = tbl_Window_TD_6278248_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year4466 = tbl_Window_TD_6278248_output.getInt32(i, 4);
        int32_t _d_moy4468 = tbl_Window_TD_6278248_output.getInt32(i, 5);
        int64_t _sum_sales3544 = tbl_Window_TD_6278248_output.getInt64(i, 6);
        int32_t _rn4521 = tbl_Window_TD_6278248_output.getInt32(i, 7);
        int64_t _sum_sales3574 = _sum_sales3544;
        tbl_Project_TD_5488834_output.setInt64(i, 4, _sum_sales3574);
        tbl_Project_TD_5488834_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category4427);
        tbl_Project_TD_5488834_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand4423);
        tbl_Project_TD_5488834_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name4493);
        tbl_Project_TD_5488834_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name4505);
        tbl_Project_TD_5488834_output.setInt32(i, 5, _rn4521);
    }
    tbl_Project_TD_5488834_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5488834_output #Row: " << tbl_Project_TD_5488834_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5593396_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    bool operator==(const SW_JOIN_INNER_TD_5593396_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5593396_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5593396_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395));
    }
};
}
struct SW_JOIN_INNER_TD_5593396_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    int64_t _sum_sales3544;
    int64_t _avg_monthly_sales3545;
    int32_t _rn3546;
};
struct SW_JOIN_INNER_TD_5593396_key_rightMajor {
    std::string _i_category4320;
    std::string _i_brand4316;
    std::string _s_store_name4386;
    std::string _s_company_name4398;
    bool operator==(const SW_JOIN_INNER_TD_5593396_key_rightMajor& other) const {
        return ((_i_category4320 == other._i_category4320) && (_i_brand4316 == other._i_brand4316) && (_s_store_name4386 == other._s_store_name4386) && (_s_company_name4398 == other._s_company_name4398));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5593396_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5593396_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4320)) + (hash<string>()(k._i_brand4316)) + (hash<string>()(k._s_store_name4386)) + (hash<string>()(k._s_company_name4398));
    }
};
}
struct SW_JOIN_INNER_TD_5593396_payload_rightMajor {
    std::string _i_category4320;
    std::string _i_brand4316;
    std::string _s_store_name4386;
    std::string _s_company_name4398;
    int64_t _sum_sales3565;
    int32_t _rn4414;
};
void SW_JOIN_INNER_TD_5593396(Table &tbl_Filter_TD_6889843_output, Table &tbl_Project_TD_6645868_output, Table &tbl_JOIN_INNER_TD_5593396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((i_category#240 = i_category#4320) AND (i_brand#236 = i_brand#4316)) AND (s_store_name#383 = s_store_name#4386)) AND (s_company_name#395 = s_company_name#4398)) AND (rn#3546 = (rn#4414 + 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, avg_monthly_sales#3545, rn#3546)
    // Right Table: ListBuffer(i_category#4320, i_brand#4316, s_store_name#4386, s_company_name#4398, sum_sales#3565, rn#4414)
    // Output Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, avg_monthly_sales#3545, rn#3546, sum_sales#3565)
    int left_nrow = tbl_Filter_TD_6889843_output.getNumRow();
    int right_nrow = tbl_Project_TD_6645868_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5593396_key_leftMajor, SW_JOIN_INNER_TD_5593396_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6889843_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            SW_JOIN_INNER_TD_5593396_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            int32_t _d_year126 = tbl_Filter_TD_6889843_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_Filter_TD_6889843_output.getInt32(i, 5);
            int64_t _sum_sales3544 = tbl_Filter_TD_6889843_output.getInt64(i, 6);
            int64_t _avg_monthly_sales3545 = tbl_Filter_TD_6889843_output.getInt64(i, 7);
            int32_t _rn3546 = tbl_Filter_TD_6889843_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_5593396_payload_leftMajor payloadA{_i_category240, _i_brand236, _s_store_name383, _s_company_name395, _d_year126, _d_moy128, _sum_sales3544, _avg_monthly_sales3545, _rn3546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_6645868_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4320_k_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4320_k = std::string(_i_category4320_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_k_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4316_k = std::string(_i_brand4316_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_k_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4386_k = std::string(_s_store_name4386_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_k_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4398_k = std::string(_s_company_name4398_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5593396_key_leftMajor{_i_category4320_k, _i_brand4316_k, _s_store_name4386_k, _s_company_name4398_k});
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
                int64_t _sum_sales3544 = (it->second)._sum_sales3544;
                int64_t _avg_monthly_sales3545 = (it->second)._avg_monthly_sales3545;
                int32_t _rn3546 = (it->second)._rn3546;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category4320 = std::string(_i_category4320_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4316 = std::string(_i_brand4316_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name4386 = std::string(_s_store_name4386_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name4398 = std::string(_s_company_name4398_n.data());
                int64_t _sum_sales3565 = tbl_Project_TD_6645868_output.getInt64(i, 4);
                int32_t _rn4414 = tbl_Project_TD_6645868_output.getInt32(i, 5);
                if (_rn3546 == NULL) {
                    tbl_JOIN_INNER_TD_5593396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5593396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5593396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_5593396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_5593396_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_5593396_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_5593396_output.setInt64(r, 6, _sum_sales3544);
                    tbl_JOIN_INNER_TD_5593396_output.setInt64(r, 7, _avg_monthly_sales3545);
                    tbl_JOIN_INNER_TD_5593396_output.setInt32(r, 8, _rn3546);
                    tbl_JOIN_INNER_TD_5593396_output.setInt64(r, 9, _sum_sales3565);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5593396_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5593396_key_rightMajor, SW_JOIN_INNER_TD_5593396_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_6645868_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4320_k_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4320_k = std::string(_i_category4320_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_k_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4316_k = std::string(_i_brand4316_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_k_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4386_k = std::string(_s_store_name4386_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_k_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4398_k = std::string(_s_company_name4398_k_n.data());
            SW_JOIN_INNER_TD_5593396_key_rightMajor keyA{_i_category4320_k, _i_brand4316_k, _s_store_name4386_k, _s_company_name4398_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4320 = std::string(_i_category4320_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4316 = std::string(_i_brand4316_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4386 = std::string(_s_store_name4386_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_n = tbl_Project_TD_6645868_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4398 = std::string(_s_company_name4398_n.data());
            int64_t _sum_sales3565 = tbl_Project_TD_6645868_output.getInt64(i, 4);
            int32_t _rn4414 = tbl_Project_TD_6645868_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_5593396_payload_rightMajor payloadA{_i_category4320, _i_brand4316, _s_store_name4386, _s_company_name4398, _sum_sales3565, _rn4414};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6889843_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5593396_key_rightMajor{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category4320 = (it->second)._i_category4320;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4320_n{};
                memcpy(_i_category4320_n.data(), (_i_category4320).data(), (_i_category4320).length());
                std::string _i_brand4316 = (it->second)._i_brand4316;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4316_n{};
                memcpy(_i_brand4316_n.data(), (_i_brand4316).data(), (_i_brand4316).length());
                std::string _s_store_name4386 = (it->second)._s_store_name4386;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4386_n{};
                memcpy(_s_store_name4386_n.data(), (_s_store_name4386).data(), (_s_store_name4386).length());
                std::string _s_company_name4398 = (it->second)._s_company_name4398;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4398_n{};
                memcpy(_s_company_name4398_n.data(), (_s_company_name4398).data(), (_s_company_name4398).length());
                int64_t _sum_sales3565 = (it->second)._sum_sales3565;
                int32_t _rn4414 = (it->second)._rn4414;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Filter_TD_6889843_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                int32_t _d_year126 = tbl_Filter_TD_6889843_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_Filter_TD_6889843_output.getInt32(i, 5);
                int64_t _sum_sales3544 = tbl_Filter_TD_6889843_output.getInt64(i, 6);
                int64_t _avg_monthly_sales3545 = tbl_Filter_TD_6889843_output.getInt64(i, 7);
                int32_t _rn3546 = tbl_Filter_TD_6889843_output.getInt32(i, 8);
                if (_rn3546 == NULL) {
                    tbl_JOIN_INNER_TD_5593396_output.setInt64(r, 9, _sum_sales3565);
                    tbl_JOIN_INNER_TD_5593396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_5593396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_5593396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_5593396_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_5593396_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_5593396_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_5593396_output.setInt64(r, 6, _sum_sales3544);
                    tbl_JOIN_INNER_TD_5593396_output.setInt64(r, 7, _avg_monthly_sales3545);
                    tbl_JOIN_INNER_TD_5593396_output.setInt32(r, 8, _rn3546);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_5593396_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5593396_output #Row: " << tbl_JOIN_INNER_TD_5593396_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4451010_key_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _rn3546;
    bool operator==(const SW_JOIN_INNER_TD_4451010_key_leftMajor& other) const {
        return ((_i_category240 == other._i_category240) && (_i_brand236 == other._i_brand236) && (_s_store_name383 == other._s_store_name383) && (_s_company_name395 == other._s_company_name395) && (_rn3546 == other._rn3546));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4451010_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4451010_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category240)) + (hash<string>()(k._i_brand236)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_company_name395)) + (hash<int32_t>()(k._rn3546));
    }
};
}
struct SW_JOIN_INNER_TD_4451010_payload_leftMajor {
    std::string _i_category240;
    std::string _i_brand236;
    std::string _s_store_name383;
    std::string _s_company_name395;
    int32_t _d_year126;
    int32_t _d_moy128;
    int64_t _sum_sales3544;
    int64_t _avg_monthly_sales3545;
    int32_t _rn3546;
    int64_t _sum_sales3565;
};
struct SW_JOIN_INNER_TD_4451010_key_rightMajor {
    std::string _i_category4427;
    std::string _i_brand4423;
    std::string _s_store_name4493;
    std::string _s_company_name4505;
    int32_t _rn4521;
    bool operator==(const SW_JOIN_INNER_TD_4451010_key_rightMajor& other) const {
        return ((_i_category4427 == other._i_category4427) && (_i_brand4423 == other._i_brand4423) && (_s_store_name4493 == other._s_store_name4493) && (_s_company_name4505 == other._s_company_name4505) && (_rn4521 == other._rn4521));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4451010_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4451010_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category4427)) + (hash<string>()(k._i_brand4423)) + (hash<string>()(k._s_store_name4493)) + (hash<string>()(k._s_company_name4505)) + (hash<int32_t>()(k._rn4521));
    }
};
}
struct SW_JOIN_INNER_TD_4451010_payload_rightMajor {
    std::string _i_category4427;
    std::string _i_brand4423;
    std::string _s_store_name4493;
    std::string _s_company_name4505;
    int64_t _sum_sales3574;
    int32_t _rn4521;
};
void SW_JOIN_INNER_TD_4451010(Table &tbl_JOIN_INNER_TD_5593396_output, Table &tbl_Project_TD_5488834_output, Table &tbl_JOIN_INNER_TD_4451010_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((i_category#240 = i_category#4427) AND (i_brand#236 = i_brand#4423)) AND (s_store_name#383 = s_store_name#4493)) AND (s_company_name#395 = s_company_name#4505)) AND (rn#3546 = (rn#4521 - 1))))
    // Left Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, sum_sales#3544, avg_monthly_sales#3545, rn#3546, sum_sales#3565)
    // Right Table: ListBuffer(i_category#4427, i_brand#4423, s_store_name#4493, s_company_name#4505, sum_sales#3574, rn#4521)
    // Output Table: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, sum_sales#3565, sum_sales#3574)
    int left_nrow = tbl_JOIN_INNER_TD_5593396_output.getNumRow();
    int right_nrow = tbl_Project_TD_5488834_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4451010_key_leftMajor, SW_JOIN_INNER_TD_4451010_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5593396_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            int32_t _rn3546_k = tbl_JOIN_INNER_TD_5593396_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_4451010_key_leftMajor keyA{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k, _rn3546_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240 = std::string(_i_category240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395 = std::string(_s_company_name395_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5593396_output.getInt32(i, 4);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_5593396_output.getInt32(i, 5);
            int64_t _sum_sales3544 = tbl_JOIN_INNER_TD_5593396_output.getInt64(i, 6);
            int64_t _avg_monthly_sales3545 = tbl_JOIN_INNER_TD_5593396_output.getInt64(i, 7);
            int32_t _rn3546 = tbl_JOIN_INNER_TD_5593396_output.getInt32(i, 8);
            int64_t _sum_sales3565 = tbl_JOIN_INNER_TD_5593396_output.getInt64(i, 9);
            SW_JOIN_INNER_TD_4451010_payload_leftMajor payloadA{_i_category240, _i_brand236, _s_store_name383, _s_company_name395, _d_year126, _d_moy128, _sum_sales3544, _avg_monthly_sales3545, _rn3546, _sum_sales3565};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5488834_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4427_k_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4427_k = std::string(_i_category4427_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_k_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4423_k = std::string(_i_brand4423_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_k_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4493_k = std::string(_s_store_name4493_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_k_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4505_k = std::string(_s_company_name4505_k_n.data());
            int32_t _rn4521_k = tbl_Project_TD_5488834_output.getInt32(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4451010_key_leftMajor{_i_category4427_k, _i_brand4423_k, _s_store_name4493_k, _s_company_name4505_k, _rn4521_k});
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
                int64_t _sum_sales3544 = (it->second)._sum_sales3544;
                int64_t _avg_monthly_sales3545 = (it->second)._avg_monthly_sales3545;
                int32_t _rn3546 = (it->second)._rn3546;
                int64_t _sum_sales3565 = (it->second)._sum_sales3565;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category4427 = std::string(_i_category4427_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand4423 = std::string(_i_brand4423_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name4493 = std::string(_s_store_name4493_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name4505 = std::string(_s_company_name4505_n.data());
                int64_t _sum_sales3574 = tbl_Project_TD_5488834_output.getInt64(i, 4);
                int32_t _rn4521 = tbl_Project_TD_5488834_output.getInt32(i, 5);
                if (_rn3546 == (_rn4521 - 1)) {
                    tbl_JOIN_INNER_TD_4451010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4451010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4451010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_4451010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_4451010_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_4451010_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_4451010_output.setInt64(r, 7, _sum_sales3544);
                    tbl_JOIN_INNER_TD_4451010_output.setInt64(r, 6, _avg_monthly_sales3545);
                    tbl_JOIN_INNER_TD_4451010_output.setInt64(r, 8, _sum_sales3565);
                    tbl_JOIN_INNER_TD_4451010_output.setInt64(r, 9, _sum_sales3574);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4451010_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4451010_key_rightMajor, SW_JOIN_INNER_TD_4451010_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5488834_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category4427_k_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4427_k = std::string(_i_category4427_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_k_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4423_k = std::string(_i_brand4423_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_k_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4493_k = std::string(_s_store_name4493_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_k_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4505_k = std::string(_s_company_name4505_k_n.data());
            int32_t _rn4521_k = tbl_Project_TD_5488834_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_4451010_key_rightMajor keyA{_i_category4427_k, _i_brand4423_k, _s_store_name4493_k, _s_company_name4505_k, _rn4521_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category4427 = std::string(_i_category4427_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand4423 = std::string(_i_brand4423_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name4493 = std::string(_s_store_name4493_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_n = tbl_Project_TD_5488834_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name4505 = std::string(_s_company_name4505_n.data());
            int64_t _sum_sales3574 = tbl_Project_TD_5488834_output.getInt64(i, 4);
            int32_t _rn4521 = tbl_Project_TD_5488834_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_4451010_payload_rightMajor payloadA{_i_category4427, _i_brand4423, _s_store_name4493, _s_company_name4505, _sum_sales3574, _rn4521};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5593396_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_category240_k = std::string(_i_category240_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_k_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236_k = std::string(_i_brand236_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_k_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_store_name383_k = std::string(_s_store_name383_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_k_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _s_company_name395_k = std::string(_s_company_name395_k_n.data());
            int32_t _rn3546_k = tbl_JOIN_INNER_TD_5593396_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4451010_key_rightMajor{_i_category240_k, _i_brand236_k, _s_store_name383_k, _s_company_name395_k, _rn3546_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_category4427 = (it->second)._i_category4427;
                std::array<char, TPCDS_READ_MAX + 1> _i_category4427_n{};
                memcpy(_i_category4427_n.data(), (_i_category4427).data(), (_i_category4427).length());
                std::string _i_brand4423 = (it->second)._i_brand4423;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand4423_n{};
                memcpy(_i_brand4423_n.data(), (_i_brand4423).data(), (_i_brand4423).length());
                std::string _s_store_name4493 = (it->second)._s_store_name4493;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name4493_n{};
                memcpy(_s_store_name4493_n.data(), (_s_store_name4493).data(), (_s_store_name4493).length());
                std::string _s_company_name4505 = (it->second)._s_company_name4505;
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name4505_n{};
                memcpy(_s_company_name4505_n.data(), (_s_company_name4505).data(), (_s_company_name4505).length());
                int64_t _sum_sales3574 = (it->second)._sum_sales3574;
                int32_t _rn4521 = (it->second)._rn4521;
                std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_category240 = std::string(_i_category240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_JOIN_INNER_TD_5593396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _s_company_name395 = std::string(_s_company_name395_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5593396_output.getInt32(i, 4);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_5593396_output.getInt32(i, 5);
                int64_t _sum_sales3544 = tbl_JOIN_INNER_TD_5593396_output.getInt64(i, 6);
                int64_t _avg_monthly_sales3545 = tbl_JOIN_INNER_TD_5593396_output.getInt64(i, 7);
                int32_t _rn3546 = tbl_JOIN_INNER_TD_5593396_output.getInt32(i, 8);
                int64_t _sum_sales3565 = tbl_JOIN_INNER_TD_5593396_output.getInt64(i, 9);
                if (_rn3546 == (_rn4521 - 1)) {
                    tbl_JOIN_INNER_TD_4451010_output.setInt64(r, 9, _sum_sales3574);
                    tbl_JOIN_INNER_TD_4451010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
                    tbl_JOIN_INNER_TD_4451010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                    tbl_JOIN_INNER_TD_4451010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
                    tbl_JOIN_INNER_TD_4451010_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
                    tbl_JOIN_INNER_TD_4451010_output.setInt32(r, 4, _d_year126);
                    tbl_JOIN_INNER_TD_4451010_output.setInt32(r, 5, _d_moy128);
                    tbl_JOIN_INNER_TD_4451010_output.setInt64(r, 7, _sum_sales3544);
                    tbl_JOIN_INNER_TD_4451010_output.setInt64(r, 6, _avg_monthly_sales3545);
                    tbl_JOIN_INNER_TD_4451010_output.setInt64(r, 8, _sum_sales3565);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4451010_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4451010_output #Row: " << tbl_JOIN_INNER_TD_4451010_output.getNumRow() << std::endl;
}

void SW_Project_TD_3301366(Table &tbl_JOIN_INNER_TD_4451010_output, Table &tbl_Project_TD_3301366_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sum_sales#3565 AS psum#3547, sum_sales#3574 AS nsum#3548)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, sum_sales#3565, sum_sales#3574)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    int nrow1 = tbl_JOIN_INNER_TD_4451010_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_JOIN_INNER_TD_4451010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_4451010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_4451010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_JOIN_INNER_TD_4451010_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4451010_output.getInt32(i, 4);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_4451010_output.getInt32(i, 5);
        int64_t _avg_monthly_sales3545 = tbl_JOIN_INNER_TD_4451010_output.getInt64(i, 6);
        int64_t _sum_sales3544 = tbl_JOIN_INNER_TD_4451010_output.getInt64(i, 7);
        int64_t _sum_sales3565 = tbl_JOIN_INNER_TD_4451010_output.getInt64(i, 8);
        int64_t _sum_sales3574 = tbl_JOIN_INNER_TD_4451010_output.getInt64(i, 9);
        int64_t _psum3547 = _sum_sales3565;
        tbl_Project_TD_3301366_output.setInt64(i, 8, _psum3547);
        int64_t _nsum3548 = _sum_sales3574;
        tbl_Project_TD_3301366_output.setInt64(i, 9, _nsum3548);
        tbl_Project_TD_3301366_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _i_category240);
        tbl_Project_TD_3301366_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _i_brand236);
        tbl_Project_TD_3301366_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _s_store_name383);
        tbl_Project_TD_3301366_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _s_company_name395);
        tbl_Project_TD_3301366_output.setInt32(i, 4, _d_year126);
        tbl_Project_TD_3301366_output.setInt32(i, 5, _d_moy128);
        tbl_Project_TD_3301366_output.setInt64(i, 6, _avg_monthly_sales3545);
        tbl_Project_TD_3301366_output.setInt64(i, 7, _sum_sales3544);
    }
    tbl_Project_TD_3301366_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3301366_output #Row: " << tbl_Project_TD_3301366_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2621100(Table &tbl_Project_TD_3301366_output, Table &tbl_Sort_TD_2621100_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(sum_sales#3544 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#3545 as decimal(22,6)))), DecimalType(22,6), true) ASC NULLS FIRST, s_store_name#383 ASC NULLS FIRST)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    struct SW_Sort_TD_2621100Row {
        std::string _i_category240;
        std::string _i_brand236;
        std::string _s_store_name383;
        std::string _s_company_name395;
        int32_t _d_year126;
        int32_t _d_moy128;
        int64_t _avg_monthly_sales3545;
        int64_t _sum_sales3544;
        int64_t _psum3547;
        int64_t _nsum3548;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2621100Row& a, const SW_Sort_TD_2621100Row& b) const { return 
 (a._true < b._true) || 
 ((a._true == b._true) && (a._s_store_name383 < b._s_store_name383)); 
}
    }SW_Sort_TD_2621100_order; 

    int nrow1 = tbl_Project_TD_3301366_output.getNumRow();
    std::vector<SW_Sort_TD_2621100Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Project_TD_3301366_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_Project_TD_3301366_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Project_TD_3301366_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395 = tbl_Project_TD_3301366_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int32_t _d_year126 = tbl_Project_TD_3301366_output.getInt32(i, 4);
        int32_t _d_moy128 = tbl_Project_TD_3301366_output.getInt32(i, 5);
        int64_t _avg_monthly_sales3545 = tbl_Project_TD_3301366_output.getInt64(i, 6);
        int64_t _sum_sales3544 = tbl_Project_TD_3301366_output.getInt64(i, 7);
        int64_t _psum3547 = tbl_Project_TD_3301366_output.getInt64(i, 8);
        int64_t _nsum3548 = tbl_Project_TD_3301366_output.getInt64(i, 9);
        SW_Sort_TD_2621100Row t = {std::string(_i_category240.data()),std::string(_i_brand236.data()),std::string(_s_store_name383.data()),std::string(_s_company_name395.data()),_d_year126,_d_moy128,_avg_monthly_sales3545,_sum_sales3544,_psum3547,_nsum3548};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2621100_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240{};
        memcpy(_i_category240.data(), (it._i_category240).data(), (it._i_category240).length());
        tbl_Sort_TD_2621100_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_category240);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236{};
        memcpy(_i_brand236.data(), (it._i_brand236).data(), (it._i_brand236).length());
        tbl_Sort_TD_2621100_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _i_brand236);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), (it._s_store_name383).data(), (it._s_store_name383).length());
        tbl_Sort_TD_2621100_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _s_store_name383);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395{};
        memcpy(_s_company_name395.data(), (it._s_company_name395).data(), (it._s_company_name395).length());
        tbl_Sort_TD_2621100_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _s_company_name395);
        tbl_Sort_TD_2621100_output.setInt32(r, 4, it._d_year126);
        tbl_Sort_TD_2621100_output.setInt32(r, 5, it._d_moy128);
        tbl_Sort_TD_2621100_output.setInt64(r, 6, it._avg_monthly_sales3545);
        tbl_Sort_TD_2621100_output.setInt64(r, 7, it._sum_sales3544);
        tbl_Sort_TD_2621100_output.setInt64(r, 8, it._psum3547);
        tbl_Sort_TD_2621100_output.setInt64(r, 9, it._nsum3548);
        ++r;
    }
    tbl_Sort_TD_2621100_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2621100_output #Row: " << tbl_Sort_TD_2621100_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1738376(Table &tbl_Sort_TD_2621100_output, Table &tbl_LocalLimit_TD_1738376_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_Sort_TD_2621100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1738376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Sort_TD_2621100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1738376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Sort_TD_2621100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1738376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_Sort_TD_2621100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1738376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
        tbl_LocalLimit_TD_1738376_output.setInt32(r, 4, tbl_Sort_TD_2621100_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1738376_output.setInt32(r, 5, tbl_Sort_TD_2621100_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1738376_output.setInt64(r, 6, tbl_Sort_TD_2621100_output.getInt64(i, 6));
        tbl_LocalLimit_TD_1738376_output.setInt64(r, 7, tbl_Sort_TD_2621100_output.getInt64(i, 7));
        tbl_LocalLimit_TD_1738376_output.setInt64(r, 8, tbl_Sort_TD_2621100_output.getInt64(i, 8));
        tbl_LocalLimit_TD_1738376_output.setInt64(r, 9, tbl_Sort_TD_2621100_output.getInt64(i, 9));
        r++;
    }
    tbl_LocalLimit_TD_1738376_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1738376_output #Row: " << tbl_LocalLimit_TD_1738376_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0268519(Table &tbl_LocalLimit_TD_1738376_output, Table &tbl_GlobalLimit_TD_0268519_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    // Output: ListBuffer(i_category#240, i_brand#236, s_store_name#383, s_company_name#395, d_year#126, d_moy#128, avg_monthly_sales#3545, sum_sales#3544, psum#3547, nsum#3548)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_n = tbl_LocalLimit_TD_1738376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0268519_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_category240_n);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_LocalLimit_TD_1738376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0268519_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_LocalLimit_TD_1738376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0268519_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_store_name383_n);
        std::array<char, TPCDS_READ_MAX + 1> _s_company_name395_n = tbl_LocalLimit_TD_1738376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0268519_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _s_company_name395_n);
        tbl_GlobalLimit_TD_0268519_output.setInt32(r, 4, tbl_LocalLimit_TD_1738376_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0268519_output.setInt32(r, 5, tbl_LocalLimit_TD_1738376_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0268519_output.setInt64(r, 6, tbl_LocalLimit_TD_1738376_output.getInt64(i, 6));
        tbl_GlobalLimit_TD_0268519_output.setInt64(r, 7, tbl_LocalLimit_TD_1738376_output.getInt64(i, 7));
        tbl_GlobalLimit_TD_0268519_output.setInt64(r, 8, tbl_LocalLimit_TD_1738376_output.getInt64(i, 8));
        tbl_GlobalLimit_TD_0268519_output.setInt64(r, 9, tbl_LocalLimit_TD_1738376_output.getInt64(i, 9));
        r++;
    }
    tbl_GlobalLimit_TD_0268519_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0268519_output #Row: " << tbl_GlobalLimit_TD_0268519_output.getNumRow() << std::endl;
}

