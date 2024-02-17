#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_2327(Table &tbl_SerializeFromObject_TD_24479_input, Table &tbl_Filter_TD_2327_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_item_sk#6034) AND isnotnull(cr_order_number#6048L)))
    // Input: ListBuffer(cr_item_sk#6034, cr_order_number#6048L, cr_refunded_cash#6055, cr_reversed_charge#6056, cr_store_credit#6057)
    // Output: ListBuffer(cr_item_sk#6034, cr_order_number#6048L, cr_refunded_cash#6055, cr_reversed_charge#6056, cr_store_credit#6057)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24479_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk6034 = tbl_SerializeFromObject_TD_24479_input.getInt32(i, 0);
        int64_t _cr_order_number6048L = tbl_SerializeFromObject_TD_24479_input.getInt64(i, 1);
        if ((_cr_item_sk6034!= 0) && (_cr_order_number6048L!= 0)) {
            int32_t _cr_item_sk6034_t = tbl_SerializeFromObject_TD_24479_input.getInt32(i, 0);
            tbl_Filter_TD_2327_output.setInt32(r, 0, _cr_item_sk6034_t);
            int64_t _cr_order_number6048L_t = tbl_SerializeFromObject_TD_24479_input.getInt64(i, 1);
            tbl_Filter_TD_2327_output.setInt64(r, 1, _cr_order_number6048L_t);
            int32_t _cr_refunded_cash6055_t = tbl_SerializeFromObject_TD_24479_input.getInt32(i, 2);
            tbl_Filter_TD_2327_output.setInt32(r, 2, _cr_refunded_cash6055_t);
            int32_t _cr_reversed_charge6056_t = tbl_SerializeFromObject_TD_24479_input.getInt32(i, 3);
            tbl_Filter_TD_2327_output.setInt32(r, 3, _cr_reversed_charge6056_t);
            int32_t _cr_store_credit6057_t = tbl_SerializeFromObject_TD_24479_input.getInt32(i, 4);
            tbl_Filter_TD_2327_output.setInt32(r, 4, _cr_store_credit6057_t);
            r++;
        }
    }
    tbl_Filter_TD_2327_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2327_output #Row: " << tbl_Filter_TD_2327_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2382(Table &tbl_SerializeFromObject_TD_24904_input, Table &tbl_Filter_TD_2382_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#6013) AND isnotnull(cs_order_number#6015L)))
    // Input: ListBuffer(cs_item_sk#6013, cs_order_number#6015L, cs_ext_list_price#6023)
    // Output: ListBuffer(cs_item_sk#6013, cs_order_number#6015L, cs_ext_list_price#6023)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24904_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk6013 = tbl_SerializeFromObject_TD_24904_input.getInt32(i, 0);
        int64_t _cs_order_number6015L = tbl_SerializeFromObject_TD_24904_input.getInt64(i, 1);
        if ((_cs_item_sk6013!= 0) && (_cs_order_number6015L!= 0)) {
            int32_t _cs_item_sk6013_t = tbl_SerializeFromObject_TD_24904_input.getInt32(i, 0);
            tbl_Filter_TD_2382_output.setInt32(r, 0, _cs_item_sk6013_t);
            int64_t _cs_order_number6015L_t = tbl_SerializeFromObject_TD_24904_input.getInt64(i, 1);
            tbl_Filter_TD_2382_output.setInt64(r, 1, _cs_order_number6015L_t);
            int32_t _cs_ext_list_price6023_t = tbl_SerializeFromObject_TD_24904_input.getInt32(i, 2);
            tbl_Filter_TD_2382_output.setInt32(r, 2, _cs_ext_list_price6023_t);
            r++;
        }
    }
    tbl_Filter_TD_2382_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2382_output #Row: " << tbl_Filter_TD_2382_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23258(Table &tbl_SerializeFromObject_TD_24584_input, Table &tbl_Filter_TD_23258_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_item_sk#1025) AND isnotnull(cr_order_number#1039L)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_refunded_cash#1046, cr_reversed_charge#1047, cr_store_credit#1048)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_refunded_cash#1046, cr_reversed_charge#1047, cr_store_credit#1048)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24584_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_24584_input.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_24584_input.getInt64(i, 1);
        if ((_cr_item_sk1025!= 0) && (_cr_order_number1039L!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_24584_input.getInt32(i, 0);
            tbl_Filter_TD_23258_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_24584_input.getInt64(i, 1);
            tbl_Filter_TD_23258_output.setInt64(r, 1, _cr_order_number1039L_t);
            int32_t _cr_refunded_cash1046_t = tbl_SerializeFromObject_TD_24584_input.getInt32(i, 2);
            tbl_Filter_TD_23258_output.setInt32(r, 2, _cr_refunded_cash1046_t);
            int32_t _cr_reversed_charge1047_t = tbl_SerializeFromObject_TD_24584_input.getInt32(i, 3);
            tbl_Filter_TD_23258_output.setInt32(r, 3, _cr_reversed_charge1047_t);
            int32_t _cr_store_credit1048_t = tbl_SerializeFromObject_TD_24584_input.getInt32(i, 4);
            tbl_Filter_TD_23258_output.setInt32(r, 4, _cr_store_credit1048_t);
            r++;
        }
    }
    tbl_Filter_TD_23258_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23258_output #Row: " << tbl_Filter_TD_23258_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23246(Table &tbl_SerializeFromObject_TD_2448_input, Table &tbl_Filter_TD_23246_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_order_number#1121L)))
    // Input: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, cs_ext_list_price#1129)
    // Output: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, cs_ext_list_price#1129)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2448_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_2448_input.getInt32(i, 0);
        int64_t _cs_order_number1121L = tbl_SerializeFromObject_TD_2448_input.getInt64(i, 1);
        if ((_cs_item_sk1119!= 0) && (_cs_order_number1121L!= 0)) {
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_2448_input.getInt32(i, 0);
            tbl_Filter_TD_23246_output.setInt32(r, 0, _cs_item_sk1119_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_2448_input.getInt64(i, 1);
            tbl_Filter_TD_23246_output.setInt64(r, 1, _cs_order_number1121L_t);
            int32_t _cs_ext_list_price1129_t = tbl_SerializeFromObject_TD_2448_input.getInt32(i, 2);
            tbl_Filter_TD_23246_output.setInt32(r, 2, _cs_ext_list_price1129_t);
            r++;
        }
    }
    tbl_Filter_TD_23246_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23246_output #Row: " << tbl_Filter_TD_23246_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22484_key_leftMajor {
    int32_t _cs_item_sk6013;
    int64_t _cs_order_number6015L;
    bool operator==(const SW_JOIN_INNER_TD_22484_key_leftMajor& other) const {
        return ((_cs_item_sk6013 == other._cs_item_sk6013) && (_cs_order_number6015L == other._cs_order_number6015L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22484_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22484_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk6013)) + (hash<int64_t>()(k._cs_order_number6015L));
    }
};
}
struct SW_JOIN_INNER_TD_22484_payload_leftMajor {
    int32_t _cs_item_sk6013;
    int64_t _cs_order_number6015L;
    int32_t _cs_ext_list_price6023;
};
struct SW_JOIN_INNER_TD_22484_key_rightMajor {
    int32_t _cr_item_sk6034;
    int64_t _cr_order_number6048L;
    bool operator==(const SW_JOIN_INNER_TD_22484_key_rightMajor& other) const {
        return ((_cr_item_sk6034 == other._cr_item_sk6034) && (_cr_order_number6048L == other._cr_order_number6048L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22484_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22484_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_item_sk6034)) + (hash<int64_t>()(k._cr_order_number6048L));
    }
};
}
struct SW_JOIN_INNER_TD_22484_payload_rightMajor {
    int32_t _cr_item_sk6034;
    int64_t _cr_order_number6048L;
    int32_t _cr_refunded_cash6055;
    int32_t _cr_reversed_charge6056;
    int32_t _cr_store_credit6057;
};
void SW_JOIN_INNER_TD_22484(Table &tbl_Filter_TD_2382_output, Table &tbl_Filter_TD_2327_output, Table &tbl_JOIN_INNER_TD_22484_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cs_item_sk#6013 = cr_item_sk#6034) AND (cs_order_number#6015L = cr_order_number#6048L)))
    // Left Table: ListBuffer(cs_item_sk#6013, cs_order_number#6015L, cs_ext_list_price#6023)
    // Right Table: ListBuffer(cr_item_sk#6034, cr_order_number#6048L, cr_refunded_cash#6055, cr_reversed_charge#6056, cr_store_credit#6057)
    // Output Table: ListBuffer(cs_item_sk#6013, cs_ext_list_price#6023, cr_refunded_cash#6055, cr_reversed_charge#6056, cr_store_credit#6057)
    int left_nrow = tbl_Filter_TD_2382_output.getNumRow();
    int right_nrow = tbl_Filter_TD_2327_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22484_key_leftMajor, SW_JOIN_INNER_TD_22484_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_2382_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk6013_k = tbl_Filter_TD_2382_output.getInt32(i, 0);
            int64_t _cs_order_number6015L_k = tbl_Filter_TD_2382_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_22484_key_leftMajor keyA{_cs_item_sk6013_k, _cs_order_number6015L_k};
            int32_t _cs_item_sk6013 = tbl_Filter_TD_2382_output.getInt32(i, 0);
            int64_t _cs_order_number6015L = tbl_Filter_TD_2382_output.getInt64(i, 1);
            int32_t _cs_ext_list_price6023 = tbl_Filter_TD_2382_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_22484_payload_leftMajor payloadA{_cs_item_sk6013, _cs_order_number6015L, _cs_ext_list_price6023};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2327_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_item_sk6034_k = tbl_Filter_TD_2327_output.getInt32(i, 0);
            int64_t _cr_order_number6048L_k = tbl_Filter_TD_2327_output.getInt64(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22484_key_leftMajor{_cr_item_sk6034_k, _cr_order_number6048L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk6013 = (it->second)._cs_item_sk6013;
                int64_t _cs_order_number6015L = (it->second)._cs_order_number6015L;
                int32_t _cs_ext_list_price6023 = (it->second)._cs_ext_list_price6023;
                int32_t _cr_item_sk6034 = tbl_Filter_TD_2327_output.getInt32(i, 0);
                int64_t _cr_order_number6048L = tbl_Filter_TD_2327_output.getInt64(i, 1);
                int32_t _cr_refunded_cash6055 = tbl_Filter_TD_2327_output.getInt32(i, 2);
                int32_t _cr_reversed_charge6056 = tbl_Filter_TD_2327_output.getInt32(i, 3);
                int32_t _cr_store_credit6057 = tbl_Filter_TD_2327_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 0, _cs_item_sk6013);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 1, _cs_ext_list_price6023);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 2, _cr_refunded_cash6055);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 3, _cr_reversed_charge6056);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 4, _cr_store_credit6057);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22484_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22484_key_rightMajor, SW_JOIN_INNER_TD_22484_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_2327_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_item_sk6034_k = tbl_Filter_TD_2327_output.getInt32(i, 0);
            int64_t _cr_order_number6048L_k = tbl_Filter_TD_2327_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_22484_key_rightMajor keyA{_cr_item_sk6034_k, _cr_order_number6048L_k};
            int32_t _cr_item_sk6034 = tbl_Filter_TD_2327_output.getInt32(i, 0);
            int64_t _cr_order_number6048L = tbl_Filter_TD_2327_output.getInt64(i, 1);
            int32_t _cr_refunded_cash6055 = tbl_Filter_TD_2327_output.getInt32(i, 2);
            int32_t _cr_reversed_charge6056 = tbl_Filter_TD_2327_output.getInt32(i, 3);
            int32_t _cr_store_credit6057 = tbl_Filter_TD_2327_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_22484_payload_rightMajor payloadA{_cr_item_sk6034, _cr_order_number6048L, _cr_refunded_cash6055, _cr_reversed_charge6056, _cr_store_credit6057};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2382_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk6013_k = tbl_Filter_TD_2382_output.getInt32(i, 0);
            int64_t _cs_order_number6015L_k = tbl_Filter_TD_2382_output.getInt64(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22484_key_rightMajor{_cs_item_sk6013_k, _cs_order_number6015L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_item_sk6034 = (it->second)._cr_item_sk6034;
                int64_t _cr_order_number6048L = (it->second)._cr_order_number6048L;
                int32_t _cr_refunded_cash6055 = (it->second)._cr_refunded_cash6055;
                int32_t _cr_reversed_charge6056 = (it->second)._cr_reversed_charge6056;
                int32_t _cr_store_credit6057 = (it->second)._cr_store_credit6057;
                int32_t _cs_item_sk6013 = tbl_Filter_TD_2382_output.getInt32(i, 0);
                int64_t _cs_order_number6015L = tbl_Filter_TD_2382_output.getInt64(i, 1);
                int32_t _cs_ext_list_price6023 = tbl_Filter_TD_2382_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 2, _cr_refunded_cash6055);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 3, _cr_reversed_charge6056);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 4, _cr_store_credit6057);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 0, _cs_item_sk6013);
                tbl_JOIN_INNER_TD_22484_output.setInt32(r, 1, _cs_ext_list_price6023);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22484_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22484_output #Row: " << tbl_JOIN_INNER_TD_22484_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22611_key_leftMajor {
    int32_t _cs_item_sk1119;
    int64_t _cs_order_number1121L;
    bool operator==(const SW_JOIN_INNER_TD_22611_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119) && (_cs_order_number1121L == other._cs_order_number1121L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22611_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22611_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119)) + (hash<int64_t>()(k._cs_order_number1121L));
    }
};
}
struct SW_JOIN_INNER_TD_22611_payload_leftMajor {
    int32_t _cs_item_sk1119;
    int64_t _cs_order_number1121L;
    int32_t _cs_ext_list_price1129;
};
struct SW_JOIN_INNER_TD_22611_key_rightMajor {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    bool operator==(const SW_JOIN_INNER_TD_22611_key_rightMajor& other) const {
        return ((_cr_item_sk1025 == other._cr_item_sk1025) && (_cr_order_number1039L == other._cr_order_number1039L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22611_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22611_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_item_sk1025)) + (hash<int64_t>()(k._cr_order_number1039L));
    }
};
}
struct SW_JOIN_INNER_TD_22611_payload_rightMajor {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    int32_t _cr_refunded_cash1046;
    int32_t _cr_reversed_charge1047;
    int32_t _cr_store_credit1048;
};
void SW_JOIN_INNER_TD_22611(Table &tbl_Filter_TD_23246_output, Table &tbl_Filter_TD_23258_output, Table &tbl_JOIN_INNER_TD_22611_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((cs_item_sk#1119 = cr_item_sk#1025) AND (cs_order_number#1121L = cr_order_number#1039L)))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, cs_ext_list_price#1129)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_refunded_cash#1046, cr_reversed_charge#1047, cr_store_credit#1048)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_ext_list_price#1129, cr_refunded_cash#1046, cr_reversed_charge#1047, cr_store_credit#1048)
    int left_nrow = tbl_Filter_TD_23246_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23258_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22611_key_leftMajor, SW_JOIN_INNER_TD_22611_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23246_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23246_output.getInt32(i, 0);
            int64_t _cs_order_number1121L_k = tbl_Filter_TD_23246_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_22611_key_leftMajor keyA{_cs_item_sk1119_k, _cs_order_number1121L_k};
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23246_output.getInt32(i, 0);
            int64_t _cs_order_number1121L = tbl_Filter_TD_23246_output.getInt64(i, 1);
            int32_t _cs_ext_list_price1129 = tbl_Filter_TD_23246_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_22611_payload_leftMajor payloadA{_cs_item_sk1119, _cs_order_number1121L, _cs_ext_list_price1129};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23258_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_23258_output.getInt32(i, 0);
            int64_t _cr_order_number1039L_k = tbl_Filter_TD_23258_output.getInt64(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22611_key_leftMajor{_cr_item_sk1025_k, _cr_order_number1039L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _cs_ext_list_price1129 = (it->second)._cs_ext_list_price1129;
                int32_t _cr_item_sk1025 = tbl_Filter_TD_23258_output.getInt32(i, 0);
                int64_t _cr_order_number1039L = tbl_Filter_TD_23258_output.getInt64(i, 1);
                int32_t _cr_refunded_cash1046 = tbl_Filter_TD_23258_output.getInt32(i, 2);
                int32_t _cr_reversed_charge1047 = tbl_Filter_TD_23258_output.getInt32(i, 3);
                int32_t _cr_store_credit1048 = tbl_Filter_TD_23258_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 1, _cs_ext_list_price1129);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 2, _cr_refunded_cash1046);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 3, _cr_reversed_charge1047);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 4, _cr_store_credit1048);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22611_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22611_key_rightMajor, SW_JOIN_INNER_TD_22611_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23258_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_23258_output.getInt32(i, 0);
            int64_t _cr_order_number1039L_k = tbl_Filter_TD_23258_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_22611_key_rightMajor keyA{_cr_item_sk1025_k, _cr_order_number1039L_k};
            int32_t _cr_item_sk1025 = tbl_Filter_TD_23258_output.getInt32(i, 0);
            int64_t _cr_order_number1039L = tbl_Filter_TD_23258_output.getInt64(i, 1);
            int32_t _cr_refunded_cash1046 = tbl_Filter_TD_23258_output.getInt32(i, 2);
            int32_t _cr_reversed_charge1047 = tbl_Filter_TD_23258_output.getInt32(i, 3);
            int32_t _cr_store_credit1048 = tbl_Filter_TD_23258_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_22611_payload_rightMajor payloadA{_cr_item_sk1025, _cr_order_number1039L, _cr_refunded_cash1046, _cr_reversed_charge1047, _cr_store_credit1048};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23246_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23246_output.getInt32(i, 0);
            int64_t _cs_order_number1121L_k = tbl_Filter_TD_23246_output.getInt64(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22611_key_rightMajor{_cs_item_sk1119_k, _cs_order_number1121L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_item_sk1025 = (it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it->second)._cr_order_number1039L;
                int32_t _cr_refunded_cash1046 = (it->second)._cr_refunded_cash1046;
                int32_t _cr_reversed_charge1047 = (it->second)._cr_reversed_charge1047;
                int32_t _cr_store_credit1048 = (it->second)._cr_store_credit1048;
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23246_output.getInt32(i, 0);
                int64_t _cs_order_number1121L = tbl_Filter_TD_23246_output.getInt64(i, 1);
                int32_t _cs_ext_list_price1129 = tbl_Filter_TD_23246_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 2, _cr_refunded_cash1046);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 3, _cr_reversed_charge1047);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 4, _cr_store_credit1048);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_22611_output.setInt32(r, 1, _cs_ext_list_price1129);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22611_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22611_output #Row: " << tbl_JOIN_INNER_TD_22611_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_2160_key;
struct SW_Aggregate_TD_2160_payload {
    int32_t _sale4746_sum_0;
    int32_t _refund4747_sum_1;
};
void SW_Aggregate_TD_2160(Table &tbl_JOIN_INNER_TD_22484_output, Table &tbl_Aggregate_TD_2160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_item_sk#6013, MakeDecimal(sum(UnscaledValue(cs_ext_list_price#6023)),17,2) AS sale#4746, sum(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(cr_refunded_cash#6055 as decimal(8,2))) + promote_precision(cast(cr_reversed_charge#6056 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) + promote_precision(cast(cr_store_credit#6057 as decimal(9,2)))), DecimalType(9,2), true)) AS refund#4747)
    // Input: ListBuffer(cs_item_sk#6013, cs_ext_list_price#6023, cr_refunded_cash#6055, cr_reversed_charge#6056, cr_store_credit#6057)
    // Output: ListBuffer(cs_item_sk#6013, sale#4746, refund#4747)
    std::unordered_map<SW_Aggregate_TD_2160_key, SW_Aggregate_TD_2160_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_22484_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk6013 = tbl_JOIN_INNER_TD_22484_output.getInt32(i, 0);
        int32_t _cs_ext_list_price6023 = tbl_JOIN_INNER_TD_22484_output.getInt32(i, 1);
        int32_t _cr_refunded_cash6055 = tbl_JOIN_INNER_TD_22484_output.getInt32(i, 2);
        int32_t _cr_reversed_charge6056 = tbl_JOIN_INNER_TD_22484_output.getInt32(i, 3);
        int32_t _cr_store_credit6057 = tbl_JOIN_INNER_TD_22484_output.getInt32(i, 4);
        SW_Aggregate_TD_2160_key k = _cs_item_sk6013;
        int64_t _sale4746_sum_0 = _cs_ext_list_price6023;
        int64_t _refund4747_sum_1 = ((_cr_refunded_cash6055 + _cr_reversed_charge6056) + _cr_store_credit6057);
        SW_Aggregate_TD_2160_payload p{_sale4746_sum_0, _refund4747_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sale4746_sum_0 + _sale4746_sum_0;
            p._sale4746_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._refund4747_sum_1 + _refund4747_sum_1;
            p._refund4747_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_2160_output.setInt32(r, 0, (it.first));
        int32_t _sale4746 = (it.second)._sale4746_sum_0;
        tbl_Aggregate_TD_2160_output.setInt32(r, 1, _sale4746);
        int32_t _refund4747 = (it.second)._refund4747_sum_1;
        tbl_Aggregate_TD_2160_output.setInt32(r, 2, _refund4747);
        ++r;
    }
    tbl_Aggregate_TD_2160_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2160_output #Row: " << tbl_Aggregate_TD_2160_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21215(Table &tbl_SerializeFromObject_TD_22593_input, Table &tbl_Filter_TD_21215_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_item_sk#5980) AND isnotnull(sr_ticket_number#5987L)))
    // Input: ListBuffer(sr_item_sk#5980, sr_ticket_number#5987L)
    // Output: ListBuffer(sr_item_sk#5980, sr_ticket_number#5987L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22593_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk5980 = tbl_SerializeFromObject_TD_22593_input.getInt32(i, 0);
        int64_t _sr_ticket_number5987L = tbl_SerializeFromObject_TD_22593_input.getInt64(i, 1);
        if ((_sr_item_sk5980!= 0) && (_sr_ticket_number5987L!= 0)) {
            int32_t _sr_item_sk5980_t = tbl_SerializeFromObject_TD_22593_input.getInt32(i, 0);
            tbl_Filter_TD_21215_output.setInt32(r, 0, _sr_item_sk5980_t);
            int64_t _sr_ticket_number5987L_t = tbl_SerializeFromObject_TD_22593_input.getInt64(i, 1);
            tbl_Filter_TD_21215_output.setInt64(r, 1, _sr_ticket_number5987L_t);
            r++;
        }
    }
    tbl_Filter_TD_21215_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21215_output #Row: " << tbl_Filter_TD_21215_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21387(Table &tbl_SerializeFromObject_TD_22425_input, Table &tbl_Filter_TD_21387_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((isnotnull(ss_item_sk#5957) AND isnotnull(ss_ticket_number#5964L)) AND isnotnull(ss_sold_date_sk#5955)) AND (isnotnull(ss_store_sk#5962) AND isnotnull(ss_customer_sk#5958))) AND isnotnull(ss_cdemo_sk#5959)) AND ((isnotnull(ss_promo_sk#5963) AND isnotnull(ss_hdemo_sk#5960)) AND isnotnull(ss_addr_sk#5961))))
    // Input: ListBuffer(ss_sold_date_sk#5955, ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_ticket_number#5964L, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974)
    // Output: ListBuffer(ss_sold_date_sk#5955, ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_ticket_number#5964L, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22425_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk5957 = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 1);
        int64_t _ss_ticket_number5964L = tbl_SerializeFromObject_TD_22425_input.getInt64(i, 8);
        int32_t _ss_sold_date_sk5955 = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 0);
        int32_t _ss_store_sk5962 = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 6);
        int32_t _ss_customer_sk5958 = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 2);
        int32_t _ss_cdemo_sk5959 = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 3);
        int32_t _ss_promo_sk5963 = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 7);
        int32_t _ss_hdemo_sk5960 = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 4);
        int32_t _ss_addr_sk5961 = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 5);
        if ((((((_ss_item_sk5957!= 0) && (_ss_ticket_number5964L!= 0)) && (_ss_sold_date_sk5955!= 0)) && ((_ss_store_sk5962!= 0) && (_ss_customer_sk5958!= 0))) && (_ss_cdemo_sk5959!= 0)) && (((_ss_promo_sk5963!= 0) && (_ss_hdemo_sk5960!= 0)) && (_ss_addr_sk5961!= 0))) {
            int32_t _ss_sold_date_sk5955_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 0);
            tbl_Filter_TD_21387_output.setInt32(r, 0, _ss_sold_date_sk5955_t);
            int32_t _ss_item_sk5957_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 1);
            tbl_Filter_TD_21387_output.setInt32(r, 1, _ss_item_sk5957_t);
            int32_t _ss_customer_sk5958_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 2);
            tbl_Filter_TD_21387_output.setInt32(r, 2, _ss_customer_sk5958_t);
            int32_t _ss_cdemo_sk5959_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 3);
            tbl_Filter_TD_21387_output.setInt32(r, 3, _ss_cdemo_sk5959_t);
            int32_t _ss_hdemo_sk5960_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 4);
            tbl_Filter_TD_21387_output.setInt32(r, 4, _ss_hdemo_sk5960_t);
            int32_t _ss_addr_sk5961_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 5);
            tbl_Filter_TD_21387_output.setInt32(r, 5, _ss_addr_sk5961_t);
            int32_t _ss_store_sk5962_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 6);
            tbl_Filter_TD_21387_output.setInt32(r, 6, _ss_store_sk5962_t);
            int32_t _ss_promo_sk5963_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 7);
            tbl_Filter_TD_21387_output.setInt32(r, 7, _ss_promo_sk5963_t);
            int64_t _ss_ticket_number5964L_t = tbl_SerializeFromObject_TD_22425_input.getInt64(i, 8);
            tbl_Filter_TD_21387_output.setInt64(r, 8, _ss_ticket_number5964L_t);
            int32_t _ss_wholesale_cost5966_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 9);
            tbl_Filter_TD_21387_output.setInt32(r, 9, _ss_wholesale_cost5966_t);
            int32_t _ss_list_price5967_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 10);
            tbl_Filter_TD_21387_output.setInt32(r, 10, _ss_list_price5967_t);
            int32_t _ss_coupon_amt5974_t = tbl_SerializeFromObject_TD_22425_input.getInt32(i, 11);
            tbl_Filter_TD_21387_output.setInt32(r, 11, _ss_coupon_amt5974_t);
            r++;
        }
    }
    tbl_Filter_TD_21387_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21387_output #Row: " << tbl_Filter_TD_21387_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_21360_key;
struct SW_Aggregate_TD_21360_payload {
    int32_t _sale4746_sum_0;
    int32_t _refund4747_sum_1;
};
void SW_Aggregate_TD_21360(Table &tbl_JOIN_INNER_TD_22611_output, Table &tbl_Aggregate_TD_21360_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_item_sk#1119, MakeDecimal(sum(UnscaledValue(cs_ext_list_price#1129)),17,2) AS sale#4746, sum(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(cr_refunded_cash#1046 as decimal(8,2))) + promote_precision(cast(cr_reversed_charge#1047 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) + promote_precision(cast(cr_store_credit#1048 as decimal(9,2)))), DecimalType(9,2), true)) AS refund#4747)
    // Input: ListBuffer(cs_item_sk#1119, cs_ext_list_price#1129, cr_refunded_cash#1046, cr_reversed_charge#1047, cr_store_credit#1048)
    // Output: ListBuffer(cs_item_sk#1119, sale#4746, refund#4747)
    std::unordered_map<SW_Aggregate_TD_21360_key, SW_Aggregate_TD_21360_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_22611_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_22611_output.getInt32(i, 0);
        int32_t _cs_ext_list_price1129 = tbl_JOIN_INNER_TD_22611_output.getInt32(i, 1);
        int32_t _cr_refunded_cash1046 = tbl_JOIN_INNER_TD_22611_output.getInt32(i, 2);
        int32_t _cr_reversed_charge1047 = tbl_JOIN_INNER_TD_22611_output.getInt32(i, 3);
        int32_t _cr_store_credit1048 = tbl_JOIN_INNER_TD_22611_output.getInt32(i, 4);
        SW_Aggregate_TD_21360_key k = _cs_item_sk1119;
        int64_t _sale4746_sum_0 = _cs_ext_list_price1129;
        int64_t _refund4747_sum_1 = ((_cr_refunded_cash1046 + _cr_reversed_charge1047) + _cr_store_credit1048);
        SW_Aggregate_TD_21360_payload p{_sale4746_sum_0, _refund4747_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sale4746_sum_0 + _sale4746_sum_0;
            p._sale4746_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._refund4747_sum_1 + _refund4747_sum_1;
            p._refund4747_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_21360_output.setInt32(r, 0, (it.first));
        int32_t _sale4746 = (it.second)._sale4746_sum_0;
        tbl_Aggregate_TD_21360_output.setInt32(r, 1, _sale4746);
        int32_t _refund4747 = (it.second)._refund4747_sum_1;
        tbl_Aggregate_TD_21360_output.setInt32(r, 2, _refund4747);
        ++r;
    }
    tbl_Aggregate_TD_21360_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_21360_output #Row: " << tbl_Aggregate_TD_21360_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21899(Table &tbl_SerializeFromObject_TD_22788_input, Table &tbl_Filter_TD_21899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_item_sk#671) AND isnotnull(sr_ticket_number#678L)))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22788_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_22788_input.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_22788_input.getInt64(i, 1);
        if ((_sr_item_sk671!= 0) && (_sr_ticket_number678L!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_22788_input.getInt32(i, 0);
            tbl_Filter_TD_21899_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_22788_input.getInt64(i, 1);
            tbl_Filter_TD_21899_output.setInt64(r, 1, _sr_ticket_number678L_t);
            r++;
        }
    }
    tbl_Filter_TD_21899_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21899_output #Row: " << tbl_Filter_TD_21899_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21607(Table &tbl_SerializeFromObject_TD_22647_input, Table &tbl_Filter_TD_21607_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((isnotnull(ss_item_sk#1208) AND isnotnull(ss_ticket_number#1215L)) AND isnotnull(ss_sold_date_sk#1206)) AND (isnotnull(ss_store_sk#1213) AND isnotnull(ss_customer_sk#1209))) AND isnotnull(ss_cdemo_sk#1210)) AND ((isnotnull(ss_promo_sk#1214) AND isnotnull(ss_hdemo_sk#1211)) AND isnotnull(ss_addr_sk#1212))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22647_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 1);
        int64_t _ss_ticket_number1215L = tbl_SerializeFromObject_TD_22647_input.getInt64(i, 8);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 6);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 2);
        int32_t _ss_cdemo_sk1210 = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 3);
        int32_t _ss_promo_sk1214 = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 7);
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 4);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 5);
        if ((((((_ss_item_sk1208!= 0) && (_ss_ticket_number1215L!= 0)) && (_ss_sold_date_sk1206!= 0)) && ((_ss_store_sk1213!= 0) && (_ss_customer_sk1209!= 0))) && (_ss_cdemo_sk1210!= 0)) && (((_ss_promo_sk1214!= 0) && (_ss_hdemo_sk1211!= 0)) && (_ss_addr_sk1212!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 0);
            tbl_Filter_TD_21607_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 1);
            tbl_Filter_TD_21607_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 2);
            tbl_Filter_TD_21607_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int32_t _ss_cdemo_sk1210_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 3);
            tbl_Filter_TD_21607_output.setInt32(r, 3, _ss_cdemo_sk1210_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 4);
            tbl_Filter_TD_21607_output.setInt32(r, 4, _ss_hdemo_sk1211_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 5);
            tbl_Filter_TD_21607_output.setInt32(r, 5, _ss_addr_sk1212_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 6);
            tbl_Filter_TD_21607_output.setInt32(r, 6, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 7);
            tbl_Filter_TD_21607_output.setInt32(r, 7, _ss_promo_sk1214_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_22647_input.getInt64(i, 8);
            tbl_Filter_TD_21607_output.setInt64(r, 8, _ss_ticket_number1215L_t);
            int32_t _ss_wholesale_cost1217_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 9);
            tbl_Filter_TD_21607_output.setInt32(r, 9, _ss_wholesale_cost1217_t);
            int32_t _ss_list_price1218_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 10);
            tbl_Filter_TD_21607_output.setInt32(r, 10, _ss_list_price1218_t);
            int32_t _ss_coupon_amt1225_t = tbl_SerializeFromObject_TD_22647_input.getInt32(i, 11);
            tbl_Filter_TD_21607_output.setInt32(r, 11, _ss_coupon_amt1225_t);
            r++;
        }
    }
    tbl_Filter_TD_21607_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21607_output #Row: " << tbl_Filter_TD_21607_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20809(Table &tbl_Aggregate_TD_2160_output, Table &tbl_Filter_TD_20809_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sale#4746) AND (cast(sale#4746 as decimal(21,2)) > CheckOverflow((2.00 * promote_precision(refund#4747)), DecimalType(21,2), true))))
    // Input: ListBuffer(cs_item_sk#6013, sale#4746, refund#4747)
    // Output: ListBuffer(cs_item_sk#6013)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_2160_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sale4746 = tbl_Aggregate_TD_2160_output.getInt32(i, 1);
        int32_t _refund4747 = tbl_Aggregate_TD_2160_output.getInt32(i, 2);
        if ((_sale4746!= 0) && (_sale4746 > (2.00 * _refund4747))) {
            int32_t _cs_item_sk6013_t = tbl_Aggregate_TD_2160_output.getInt32(i, 0);
            tbl_Filter_TD_20809_output.setInt32(r, 0, _cs_item_sk6013_t);
            r++;
        }
    }
    tbl_Filter_TD_20809_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20809_output #Row: " << tbl_Filter_TD_20809_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_20919_key_leftMajor {
    int32_t _ss_item_sk5957;
    int64_t _ss_ticket_number5964L;
    bool operator==(const SW_JOIN_INNER_TD_20919_key_leftMajor& other) const {
        return ((_ss_item_sk5957 == other._ss_item_sk5957) && (_ss_ticket_number5964L == other._ss_ticket_number5964L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_20919_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_20919_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk5957)) + (hash<int64_t>()(k._ss_ticket_number5964L));
    }
};
}
struct SW_JOIN_INNER_TD_20919_payload_leftMajor {
    int32_t _ss_sold_date_sk5955;
    int32_t _ss_item_sk5957;
    int32_t _ss_customer_sk5958;
    int32_t _ss_cdemo_sk5959;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_store_sk5962;
    int32_t _ss_promo_sk5963;
    int64_t _ss_ticket_number5964L;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
};
struct SW_JOIN_INNER_TD_20919_key_rightMajor {
    int32_t _sr_item_sk5980;
    int64_t _sr_ticket_number5987L;
    bool operator==(const SW_JOIN_INNER_TD_20919_key_rightMajor& other) const {
        return ((_sr_item_sk5980 == other._sr_item_sk5980) && (_sr_ticket_number5987L == other._sr_ticket_number5987L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_20919_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_20919_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_item_sk5980)) + (hash<int64_t>()(k._sr_ticket_number5987L));
    }
};
}
struct SW_JOIN_INNER_TD_20919_payload_rightMajor {
    int32_t _sr_item_sk5980;
    int64_t _sr_ticket_number5987L;
};
void SW_JOIN_INNER_TD_20919(Table &tbl_Filter_TD_21387_output, Table &tbl_Filter_TD_21215_output, Table &tbl_JOIN_INNER_TD_20919_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ss_item_sk#5957 = sr_item_sk#5980) AND (ss_ticket_number#5964L = sr_ticket_number#5987L)))
    // Left Table: ListBuffer(ss_sold_date_sk#5955, ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_ticket_number#5964L, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974)
    // Right Table: ListBuffer(sr_item_sk#5980, sr_ticket_number#5987L)
    // Output Table: ListBuffer(ss_sold_date_sk#5955, ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974)
    int left_nrow = tbl_Filter_TD_21387_output.getNumRow();
    int right_nrow = tbl_Filter_TD_21215_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_20919_key_leftMajor, SW_JOIN_INNER_TD_20919_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_21387_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk5957_k = tbl_Filter_TD_21387_output.getInt32(i, 1);
            int64_t _ss_ticket_number5964L_k = tbl_Filter_TD_21387_output.getInt64(i, 8);
            SW_JOIN_INNER_TD_20919_key_leftMajor keyA{_ss_item_sk5957_k, _ss_ticket_number5964L_k};
            int32_t _ss_sold_date_sk5955 = tbl_Filter_TD_21387_output.getInt32(i, 0);
            int32_t _ss_item_sk5957 = tbl_Filter_TD_21387_output.getInt32(i, 1);
            int32_t _ss_customer_sk5958 = tbl_Filter_TD_21387_output.getInt32(i, 2);
            int32_t _ss_cdemo_sk5959 = tbl_Filter_TD_21387_output.getInt32(i, 3);
            int32_t _ss_hdemo_sk5960 = tbl_Filter_TD_21387_output.getInt32(i, 4);
            int32_t _ss_addr_sk5961 = tbl_Filter_TD_21387_output.getInt32(i, 5);
            int32_t _ss_store_sk5962 = tbl_Filter_TD_21387_output.getInt32(i, 6);
            int32_t _ss_promo_sk5963 = tbl_Filter_TD_21387_output.getInt32(i, 7);
            int64_t _ss_ticket_number5964L = tbl_Filter_TD_21387_output.getInt64(i, 8);
            int32_t _ss_wholesale_cost5966 = tbl_Filter_TD_21387_output.getInt32(i, 9);
            int32_t _ss_list_price5967 = tbl_Filter_TD_21387_output.getInt32(i, 10);
            int32_t _ss_coupon_amt5974 = tbl_Filter_TD_21387_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_20919_payload_leftMajor payloadA{_ss_sold_date_sk5955, _ss_item_sk5957, _ss_customer_sk5958, _ss_cdemo_sk5959, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_store_sk5962, _ss_promo_sk5963, _ss_ticket_number5964L, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_21215_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_item_sk5980_k = tbl_Filter_TD_21215_output.getInt32(i, 0);
            int64_t _sr_ticket_number5987L_k = tbl_Filter_TD_21215_output.getInt64(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_20919_key_leftMajor{_sr_item_sk5980_k, _sr_ticket_number5987L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk5955 = (it->second)._ss_sold_date_sk5955;
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_customer_sk5958 = (it->second)._ss_customer_sk5958;
                int32_t _ss_cdemo_sk5959 = (it->second)._ss_cdemo_sk5959;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_store_sk5962 = (it->second)._ss_store_sk5962;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int64_t _ss_ticket_number5964L = (it->second)._ss_ticket_number5964L;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _sr_item_sk5980 = tbl_Filter_TD_21215_output.getInt32(i, 0);
                int64_t _sr_ticket_number5987L = tbl_Filter_TD_21215_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 0, _ss_sold_date_sk5955);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 1, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 2, _ss_customer_sk5958);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 3, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 4, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 5, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 6, _ss_store_sk5962);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 7, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 8, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 9, _ss_list_price5967);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 10, _ss_coupon_amt5974);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_20919_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_20919_key_rightMajor, SW_JOIN_INNER_TD_20919_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_21215_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_item_sk5980_k = tbl_Filter_TD_21215_output.getInt32(i, 0);
            int64_t _sr_ticket_number5987L_k = tbl_Filter_TD_21215_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_20919_key_rightMajor keyA{_sr_item_sk5980_k, _sr_ticket_number5987L_k};
            int32_t _sr_item_sk5980 = tbl_Filter_TD_21215_output.getInt32(i, 0);
            int64_t _sr_ticket_number5987L = tbl_Filter_TD_21215_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_20919_payload_rightMajor payloadA{_sr_item_sk5980, _sr_ticket_number5987L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_21387_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk5957_k = tbl_Filter_TD_21387_output.getInt32(i, 1);
            int64_t _ss_ticket_number5964L_k = tbl_Filter_TD_21387_output.getInt64(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_20919_key_rightMajor{_ss_item_sk5957_k, _ss_ticket_number5964L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_item_sk5980 = (it->second)._sr_item_sk5980;
                int64_t _sr_ticket_number5987L = (it->second)._sr_ticket_number5987L;
                int32_t _ss_sold_date_sk5955 = tbl_Filter_TD_21387_output.getInt32(i, 0);
                int32_t _ss_item_sk5957 = tbl_Filter_TD_21387_output.getInt32(i, 1);
                int32_t _ss_customer_sk5958 = tbl_Filter_TD_21387_output.getInt32(i, 2);
                int32_t _ss_cdemo_sk5959 = tbl_Filter_TD_21387_output.getInt32(i, 3);
                int32_t _ss_hdemo_sk5960 = tbl_Filter_TD_21387_output.getInt32(i, 4);
                int32_t _ss_addr_sk5961 = tbl_Filter_TD_21387_output.getInt32(i, 5);
                int32_t _ss_store_sk5962 = tbl_Filter_TD_21387_output.getInt32(i, 6);
                int32_t _ss_promo_sk5963 = tbl_Filter_TD_21387_output.getInt32(i, 7);
                int64_t _ss_ticket_number5964L = tbl_Filter_TD_21387_output.getInt64(i, 8);
                int32_t _ss_wholesale_cost5966 = tbl_Filter_TD_21387_output.getInt32(i, 9);
                int32_t _ss_list_price5967 = tbl_Filter_TD_21387_output.getInt32(i, 10);
                int32_t _ss_coupon_amt5974 = tbl_Filter_TD_21387_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 0, _ss_sold_date_sk5955);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 1, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 2, _ss_customer_sk5958);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 3, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 4, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 5, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 6, _ss_store_sk5962);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 7, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 8, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 9, _ss_list_price5967);
                tbl_JOIN_INNER_TD_20919_output.setInt32(r, 10, _ss_coupon_amt5974);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_20919_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_20919_output #Row: " << tbl_JOIN_INNER_TD_20919_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20625(Table &tbl_Aggregate_TD_21360_output, Table &tbl_Filter_TD_20625_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sale#4746) AND (cast(sale#4746 as decimal(21,2)) > CheckOverflow((2.00 * promote_precision(refund#4747)), DecimalType(21,2), true))))
    // Input: ListBuffer(cs_item_sk#1119, sale#4746, refund#4747)
    // Output: ListBuffer(cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_21360_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sale4746 = tbl_Aggregate_TD_21360_output.getInt32(i, 1);
        int32_t _refund4747 = tbl_Aggregate_TD_21360_output.getInt32(i, 2);
        if ((_sale4746!= 0) && (_sale4746 > (2.00 * _refund4747))) {
            int32_t _cs_item_sk1119_t = tbl_Aggregate_TD_21360_output.getInt32(i, 0);
            tbl_Filter_TD_20625_output.setInt32(r, 0, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_20625_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20625_output #Row: " << tbl_Filter_TD_20625_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_20679_key_leftMajor {
    int32_t _ss_item_sk1208;
    int64_t _ss_ticket_number1215L;
    bool operator==(const SW_JOIN_INNER_TD_20679_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208) && (_ss_ticket_number1215L == other._ss_ticket_number1215L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_20679_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_20679_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208)) + (hash<int64_t>()(k._ss_ticket_number1215L));
    }
};
}
struct SW_JOIN_INNER_TD_20679_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
};
struct SW_JOIN_INNER_TD_20679_key_rightMajor {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    bool operator==(const SW_JOIN_INNER_TD_20679_key_rightMajor& other) const {
        return ((_sr_item_sk671 == other._sr_item_sk671) && (_sr_ticket_number678L == other._sr_ticket_number678L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_20679_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_20679_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_item_sk671)) + (hash<int64_t>()(k._sr_ticket_number678L));
    }
};
}
struct SW_JOIN_INNER_TD_20679_payload_rightMajor {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
};
void SW_JOIN_INNER_TD_20679(Table &tbl_Filter_TD_21607_output, Table &tbl_Filter_TD_21899_output, Table &tbl_JOIN_INNER_TD_20679_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ss_item_sk#1208 = sr_item_sk#671) AND (ss_ticket_number#1215L = sr_ticket_number#678L)))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_ticket_number#1215L, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225)
    int left_nrow = tbl_Filter_TD_21607_output.getNumRow();
    int right_nrow = tbl_Filter_TD_21899_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_20679_key_leftMajor, SW_JOIN_INNER_TD_20679_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_21607_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_21607_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_21607_output.getInt64(i, 8);
            SW_JOIN_INNER_TD_20679_key_leftMajor keyA{_ss_item_sk1208_k, _ss_ticket_number1215L_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_21607_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_21607_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_21607_output.getInt32(i, 2);
            int32_t _ss_cdemo_sk1210 = tbl_Filter_TD_21607_output.getInt32(i, 3);
            int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_21607_output.getInt32(i, 4);
            int32_t _ss_addr_sk1212 = tbl_Filter_TD_21607_output.getInt32(i, 5);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_21607_output.getInt32(i, 6);
            int32_t _ss_promo_sk1214 = tbl_Filter_TD_21607_output.getInt32(i, 7);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_21607_output.getInt64(i, 8);
            int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_21607_output.getInt32(i, 9);
            int32_t _ss_list_price1218 = tbl_Filter_TD_21607_output.getInt32(i, 10);
            int32_t _ss_coupon_amt1225 = tbl_Filter_TD_21607_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_20679_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_cdemo_sk1210, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_promo_sk1214, _ss_ticket_number1215L, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_21899_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_item_sk671_k = tbl_Filter_TD_21899_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_21899_output.getInt64(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_20679_key_leftMajor{_sr_item_sk671_k, _sr_ticket_number678L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _sr_item_sk671 = tbl_Filter_TD_21899_output.getInt32(i, 0);
                int64_t _sr_ticket_number678L = tbl_Filter_TD_21899_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 3, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 4, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 5, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 6, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 7, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 8, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 9, _ss_list_price1218);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 10, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_20679_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_20679_key_rightMajor, SW_JOIN_INNER_TD_20679_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_21899_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_item_sk671_k = tbl_Filter_TD_21899_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L_k = tbl_Filter_TD_21899_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_20679_key_rightMajor keyA{_sr_item_sk671_k, _sr_ticket_number678L_k};
            int32_t _sr_item_sk671 = tbl_Filter_TD_21899_output.getInt32(i, 0);
            int64_t _sr_ticket_number678L = tbl_Filter_TD_21899_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_20679_payload_rightMajor payloadA{_sr_item_sk671, _sr_ticket_number678L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_21607_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_21607_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L_k = tbl_Filter_TD_21607_output.getInt64(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_20679_key_rightMajor{_ss_item_sk1208_k, _ss_ticket_number1215L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it->second)._sr_ticket_number678L;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_21607_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_21607_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_21607_output.getInt32(i, 2);
                int32_t _ss_cdemo_sk1210 = tbl_Filter_TD_21607_output.getInt32(i, 3);
                int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_21607_output.getInt32(i, 4);
                int32_t _ss_addr_sk1212 = tbl_Filter_TD_21607_output.getInt32(i, 5);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_21607_output.getInt32(i, 6);
                int32_t _ss_promo_sk1214 = tbl_Filter_TD_21607_output.getInt32(i, 7);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_21607_output.getInt64(i, 8);
                int32_t _ss_wholesale_cost1217 = tbl_Filter_TD_21607_output.getInt32(i, 9);
                int32_t _ss_list_price1218 = tbl_Filter_TD_21607_output.getInt32(i, 10);
                int32_t _ss_coupon_amt1225 = tbl_Filter_TD_21607_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 3, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 4, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 5, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 6, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 7, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 8, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 9, _ss_list_price1218);
                tbl_JOIN_INNER_TD_20679_output.setInt32(r, 10, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_20679_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_20679_output #Row: " << tbl_JOIN_INNER_TD_20679_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19333(Table &tbl_SerializeFromObject_TD_20817_input, Table &tbl_Filter_TD_19333_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#6065) AND (d_year#6065 = 2000)) AND isnotnull(d_date_sk#6059)))
    // Input: ListBuffer(d_date_sk#6059, d_year#6065)
    // Output: ListBuffer(d_date_sk#6059, d_year#6065)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20817_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6065 = tbl_SerializeFromObject_TD_20817_input.getInt32(i, 1);
        int32_t _d_date_sk6059 = tbl_SerializeFromObject_TD_20817_input.getInt32(i, 0);
        if (((_d_year6065!= 0) && (_d_year6065 == 2000)) && (_d_date_sk6059!= 0)) {
            int32_t _d_date_sk6059_t = tbl_SerializeFromObject_TD_20817_input.getInt32(i, 0);
            tbl_Filter_TD_19333_output.setInt32(r, 0, _d_date_sk6059_t);
            int32_t _d_year6065_t = tbl_SerializeFromObject_TD_20817_input.getInt32(i, 1);
            tbl_Filter_TD_19333_output.setInt32(r, 1, _d_year6065_t);
            r++;
        }
    }
    tbl_Filter_TD_19333_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19333_output #Row: " << tbl_Filter_TD_19333_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19822_key_leftMajor {
    int32_t _ss_item_sk5957;
    bool operator==(const SW_JOIN_INNER_TD_19822_key_leftMajor& other) const {
        return ((_ss_item_sk5957 == other._ss_item_sk5957));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19822_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19822_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk5957));
    }
};
}
struct SW_JOIN_INNER_TD_19822_payload_leftMajor {
    int32_t _ss_sold_date_sk5955;
    int32_t _ss_item_sk5957;
    int32_t _ss_customer_sk5958;
    int32_t _ss_cdemo_sk5959;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_store_sk5962;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
};
struct SW_JOIN_INNER_TD_19822_key_rightMajor {
    int32_t _cs_item_sk6013;
    bool operator==(const SW_JOIN_INNER_TD_19822_key_rightMajor& other) const {
        return ((_cs_item_sk6013 == other._cs_item_sk6013));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19822_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19822_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk6013));
    }
};
}
struct SW_JOIN_INNER_TD_19822_payload_rightMajor {
    int32_t _cs_item_sk6013;
};
void SW_JOIN_INNER_TD_19822(Table &tbl_JOIN_INNER_TD_20919_output, Table &tbl_Filter_TD_20809_output, Table &tbl_JOIN_INNER_TD_19822_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#5957 = cs_item_sk#6013))
    // Left Table: ListBuffer(ss_sold_date_sk#5955, ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974)
    // Right Table: ListBuffer(cs_item_sk#6013)
    // Output Table: ListBuffer(ss_sold_date_sk#5955, ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974)
    int left_nrow = tbl_JOIN_INNER_TD_20919_output.getNumRow();
    int right_nrow = tbl_Filter_TD_20809_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19822_key_leftMajor, SW_JOIN_INNER_TD_19822_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_20919_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk5957_k = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19822_key_leftMajor keyA{_ss_item_sk5957_k};
            int32_t _ss_sold_date_sk5955 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 0);
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 1);
            int32_t _ss_customer_sk5958 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 2);
            int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 3);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 4);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 5);
            int32_t _ss_store_sk5962 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 6);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 7);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 8);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 9);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 10);
            SW_JOIN_INNER_TD_19822_payload_leftMajor payloadA{_ss_sold_date_sk5955, _ss_item_sk5957, _ss_customer_sk5958, _ss_cdemo_sk5959, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_store_sk5962, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20809_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk6013_k = tbl_Filter_TD_20809_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19822_key_leftMajor{_cs_item_sk6013_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk5955 = (it->second)._ss_sold_date_sk5955;
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_customer_sk5958 = (it->second)._ss_customer_sk5958;
                int32_t _ss_cdemo_sk5959 = (it->second)._ss_cdemo_sk5959;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_store_sk5962 = (it->second)._ss_store_sk5962;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _cs_item_sk6013 = tbl_Filter_TD_20809_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 0, _ss_sold_date_sk5955);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 1, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 2, _ss_customer_sk5958);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 3, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 4, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 5, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 6, _ss_store_sk5962);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 7, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 8, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 9, _ss_list_price5967);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 10, _ss_coupon_amt5974);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19822_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19822_key_rightMajor, SW_JOIN_INNER_TD_19822_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_20809_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk6013_k = tbl_Filter_TD_20809_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19822_key_rightMajor keyA{_cs_item_sk6013_k};
            int32_t _cs_item_sk6013 = tbl_Filter_TD_20809_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19822_payload_rightMajor payloadA{_cs_item_sk6013};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_20919_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk5957_k = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19822_key_rightMajor{_ss_item_sk5957_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk6013 = (it->second)._cs_item_sk6013;
                int32_t _ss_sold_date_sk5955 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 0);
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 1);
                int32_t _ss_customer_sk5958 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 2);
                int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 3);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 4);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 5);
                int32_t _ss_store_sk5962 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 6);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 7);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 8);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 9);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_20919_output.getInt32(i, 10);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 0, _ss_sold_date_sk5955);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 1, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 2, _ss_customer_sk5958);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 3, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 4, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 5, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 6, _ss_store_sk5962);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 7, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 8, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 9, _ss_list_price5967);
                tbl_JOIN_INNER_TD_19822_output.setInt32(r, 10, _ss_coupon_amt5974);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19822_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19822_output #Row: " << tbl_JOIN_INNER_TD_19822_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19880(Table &tbl_SerializeFromObject_TD_20453_input, Table &tbl_Filter_TD_19880_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 1999)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20453_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20453_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20453_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 1999)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20453_input.getInt32(i, 0);
            tbl_Filter_TD_19880_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_20453_input.getInt32(i, 1);
            tbl_Filter_TD_19880_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_19880_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19880_output #Row: " << tbl_Filter_TD_19880_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19689_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19689_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19689_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19689_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19689_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
};
struct SW_JOIN_INNER_TD_19689_key_rightMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_19689_key_rightMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19689_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19689_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_19689_payload_rightMajor {
    int32_t _cs_item_sk1119;
};
void SW_JOIN_INNER_TD_19689(Table &tbl_JOIN_INNER_TD_20679_output, Table &tbl_Filter_TD_20625_output, Table &tbl_JOIN_INNER_TD_19689_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = cs_item_sk#1119))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225)
    // Right Table: ListBuffer(cs_item_sk#1119)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225)
    int left_nrow = tbl_JOIN_INNER_TD_20679_output.getNumRow();
    int right_nrow = tbl_Filter_TD_20625_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19689_key_leftMajor, SW_JOIN_INNER_TD_19689_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_20679_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19689_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 2);
            int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 3);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 4);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 5);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 6);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 7);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 8);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 9);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 10);
            SW_JOIN_INNER_TD_19689_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_cdemo_sk1210, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20625_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_20625_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19689_key_leftMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _cs_item_sk1119 = tbl_Filter_TD_20625_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 3, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 4, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 5, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 6, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 7, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 8, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 9, _ss_list_price1218);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 10, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19689_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19689_key_rightMajor, SW_JOIN_INNER_TD_19689_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_20625_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_20625_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19689_key_rightMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_item_sk1119 = tbl_Filter_TD_20625_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19689_payload_rightMajor payloadA{_cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_20679_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19689_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 2);
                int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 3);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 4);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 5);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 6);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 7);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 8);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 9);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_20679_output.getInt32(i, 10);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 3, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 4, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 5, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 6, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 7, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 8, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 9, _ss_list_price1218);
                tbl_JOIN_INNER_TD_19689_output.setInt32(r, 10, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19689_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19689_output #Row: " << tbl_JOIN_INNER_TD_19689_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18863(Table &tbl_SerializeFromObject_TD_19527_input, Table &tbl_Filter_TD_18863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#6143) AND (isnotnull(s_store_name#6148) AND isnotnull(s_zip#6168))))
    // Input: ListBuffer(s_store_sk#6143, s_store_name#6148, s_zip#6168)
    // Output: ListBuffer(s_store_sk#6143, s_store_name#6148, s_zip#6168)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19527_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk6143 = tbl_SerializeFromObject_TD_19527_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148 = tbl_SerializeFromObject_TD_19527_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_zip6168 = tbl_SerializeFromObject_TD_19527_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk6143!= 0) && (（std::string(_isnotnulls_store_name6148.data()) != "NULL") && （std::string(_isnotnulls_zip6168.data()) != "NULL"))) {
            int32_t _s_store_sk6143_t = tbl_SerializeFromObject_TD_19527_input.getInt32(i, 0);
            tbl_Filter_TD_18863_output.setInt32(r, 0, _s_store_sk6143_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_t = tbl_SerializeFromObject_TD_19527_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_18863_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name6148_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_t = tbl_SerializeFromObject_TD_19527_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_18863_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_zip6168_t);
            r++;
        }
    }
    tbl_Filter_TD_18863_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18863_output #Row: " << tbl_Filter_TD_18863_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18144_key_leftMajor {
    int32_t _ss_sold_date_sk5955;
    bool operator==(const SW_JOIN_INNER_TD_18144_key_leftMajor& other) const {
        return ((_ss_sold_date_sk5955 == other._ss_sold_date_sk5955));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18144_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18144_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk5955));
    }
};
}
struct SW_JOIN_INNER_TD_18144_payload_leftMajor {
    int32_t _ss_sold_date_sk5955;
    int32_t _ss_item_sk5957;
    int32_t _ss_customer_sk5958;
    int32_t _ss_cdemo_sk5959;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_store_sk5962;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
};
struct SW_JOIN_INNER_TD_18144_key_rightMajor {
    int32_t _d_date_sk6059;
    bool operator==(const SW_JOIN_INNER_TD_18144_key_rightMajor& other) const {
        return ((_d_date_sk6059 == other._d_date_sk6059));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18144_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18144_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6059));
    }
};
}
struct SW_JOIN_INNER_TD_18144_payload_rightMajor {
    int32_t _d_date_sk6059;
    int32_t _d_year6065;
};
void SW_JOIN_INNER_TD_18144(Table &tbl_JOIN_INNER_TD_19822_output, Table &tbl_Filter_TD_19333_output, Table &tbl_JOIN_INNER_TD_18144_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#5955 = d_date_sk#6059))
    // Left Table: ListBuffer(ss_sold_date_sk#5955, ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974)
    // Right Table: ListBuffer(d_date_sk#6059, d_year#6065)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065)
    int left_nrow = tbl_JOIN_INNER_TD_19822_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19333_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18144_key_leftMajor, SW_JOIN_INNER_TD_18144_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19822_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk5955_k = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18144_key_leftMajor keyA{_ss_sold_date_sk5955_k};
            int32_t _ss_sold_date_sk5955 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 0);
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 1);
            int32_t _ss_customer_sk5958 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 2);
            int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 3);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 4);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 5);
            int32_t _ss_store_sk5962 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 6);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 7);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 8);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 9);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 10);
            SW_JOIN_INNER_TD_18144_payload_leftMajor payloadA{_ss_sold_date_sk5955, _ss_item_sk5957, _ss_customer_sk5958, _ss_cdemo_sk5959, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_store_sk5962, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19333_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6059_k = tbl_Filter_TD_19333_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18144_key_leftMajor{_d_date_sk6059_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk5955 = (it->second)._ss_sold_date_sk5955;
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_customer_sk5958 = (it->second)._ss_customer_sk5958;
                int32_t _ss_cdemo_sk5959 = (it->second)._ss_cdemo_sk5959;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_store_sk5962 = (it->second)._ss_store_sk5962;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_date_sk6059 = tbl_Filter_TD_19333_output.getInt32(i, 0);
                int32_t _d_year6065 = tbl_Filter_TD_19333_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 1, _ss_customer_sk5958);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 2, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 3, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 4, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 5, _ss_store_sk5962);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 6, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 7, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 8, _ss_list_price5967);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 9, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 10, _d_year6065);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18144_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18144_key_rightMajor, SW_JOIN_INNER_TD_18144_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19333_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6059_k = tbl_Filter_TD_19333_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18144_key_rightMajor keyA{_d_date_sk6059_k};
            int32_t _d_date_sk6059 = tbl_Filter_TD_19333_output.getInt32(i, 0);
            int32_t _d_year6065 = tbl_Filter_TD_19333_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_18144_payload_rightMajor payloadA{_d_date_sk6059, _d_year6065};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19822_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk5955_k = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18144_key_rightMajor{_ss_sold_date_sk5955_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6059 = (it->second)._d_date_sk6059;
                int32_t _d_year6065 = (it->second)._d_year6065;
                int32_t _ss_sold_date_sk5955 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 0);
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 1);
                int32_t _ss_customer_sk5958 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 2);
                int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 3);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 4);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 5);
                int32_t _ss_store_sk5962 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 6);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 7);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 8);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 9);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_19822_output.getInt32(i, 10);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 10, _d_year6065);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 1, _ss_customer_sk5958);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 2, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 3, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 4, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 5, _ss_store_sk5962);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 6, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 7, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 8, _ss_list_price5967);
                tbl_JOIN_INNER_TD_18144_output.setInt32(r, 9, _ss_coupon_amt5974);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18144_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18144_output #Row: " << tbl_JOIN_INNER_TD_18144_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18257(Table &tbl_SerializeFromObject_TD_1973_input, Table &tbl_Filter_TD_18257_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#378) AND (isnotnull(s_store_name#383) AND isnotnull(s_zip#403))))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383, s_zip#403)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383, s_zip#403)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1973_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_1973_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_SerializeFromObject_TD_1973_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _s_zip403 = tbl_SerializeFromObject_TD_1973_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk378!= 0) && (（std::string(_isnotnulls_store_name383.data()) != "NULL") && （std::string(_isnotnulls_zip403.data()) != "NULL"))) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_1973_input.getInt32(i, 0);
            tbl_Filter_TD_18257_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_1973_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_18257_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_t = tbl_SerializeFromObject_TD_1973_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_18257_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_zip403_t);
            r++;
        }
    }
    tbl_Filter_TD_18257_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18257_output #Row: " << tbl_Filter_TD_18257_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18270_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18270_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18270_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18270_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18270_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
};
struct SW_JOIN_INNER_TD_18270_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18270_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18270_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18270_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18270_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_18270(Table &tbl_JOIN_INNER_TD_19689_output, Table &tbl_Filter_TD_19880_output, Table &tbl_JOIN_INNER_TD_18270_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126)
    int left_nrow = tbl_JOIN_INNER_TD_19689_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19880_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18270_key_leftMajor, SW_JOIN_INNER_TD_18270_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19689_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18270_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 2);
            int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 3);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 4);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 5);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 6);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 7);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 8);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 9);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 10);
            SW_JOIN_INNER_TD_18270_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_cdemo_sk1210, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19880_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19880_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18270_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_date_sk120 = tbl_Filter_TD_19880_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_19880_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 2, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 3, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 4, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 5, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 6, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 7, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 8, _ss_list_price1218);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 9, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 10, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18270_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18270_key_rightMajor, SW_JOIN_INNER_TD_18270_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19880_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19880_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18270_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19880_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_19880_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_18270_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19689_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18270_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 2);
                int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 3);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 4);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 5);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 6);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 7);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 8);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 9);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_19689_output.getInt32(i, 10);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 10, _d_year126);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 2, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 3, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 4, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 5, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 6, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 7, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 8, _ss_list_price1218);
                tbl_JOIN_INNER_TD_18270_output.setInt32(r, 9, _ss_coupon_amt1225);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18270_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18270_output #Row: " << tbl_JOIN_INNER_TD_18270_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1749(Table &tbl_SerializeFromObject_TD_18405_input, Table &tbl_Filter_TD_1749_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(c_customer_sk#6172) AND ((isnotnull(c_first_sales_date_sk#6178) AND isnotnull(c_first_shipto_date_sk#6177)) AND isnotnull(c_current_cdemo_sk#6174))) AND (isnotnull(c_current_hdemo_sk#6175) AND isnotnull(c_current_addr_sk#6176))))
    // Input: ListBuffer(c_customer_sk#6172, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, c_first_shipto_date_sk#6177, c_first_sales_date_sk#6178)
    // Output: ListBuffer(c_customer_sk#6172, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, c_first_shipto_date_sk#6177, c_first_sales_date_sk#6178)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18405_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk6172 = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 0);
        int32_t _c_first_sales_date_sk6178 = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 5);
        int32_t _c_first_shipto_date_sk6177 = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 4);
        int32_t _c_current_cdemo_sk6174 = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 1);
        int32_t _c_current_hdemo_sk6175 = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 2);
        int32_t _c_current_addr_sk6176 = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 3);
        if (((_c_customer_sk6172!= 0) && (((_c_first_sales_date_sk6178!= 0) && (_c_first_shipto_date_sk6177!= 0)) && (_c_current_cdemo_sk6174!= 0))) && ((_c_current_hdemo_sk6175!= 0) && (_c_current_addr_sk6176!= 0))) {
            int32_t _c_customer_sk6172_t = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 0);
            tbl_Filter_TD_1749_output.setInt32(r, 0, _c_customer_sk6172_t);
            int32_t _c_current_cdemo_sk6174_t = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 1);
            tbl_Filter_TD_1749_output.setInt32(r, 1, _c_current_cdemo_sk6174_t);
            int32_t _c_current_hdemo_sk6175_t = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 2);
            tbl_Filter_TD_1749_output.setInt32(r, 2, _c_current_hdemo_sk6175_t);
            int32_t _c_current_addr_sk6176_t = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 3);
            tbl_Filter_TD_1749_output.setInt32(r, 3, _c_current_addr_sk6176_t);
            int32_t _c_first_shipto_date_sk6177_t = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 4);
            tbl_Filter_TD_1749_output.setInt32(r, 4, _c_first_shipto_date_sk6177_t);
            int32_t _c_first_sales_date_sk6178_t = tbl_SerializeFromObject_TD_18405_input.getInt32(i, 5);
            tbl_Filter_TD_1749_output.setInt32(r, 5, _c_first_sales_date_sk6178_t);
            r++;
        }
    }
    tbl_Filter_TD_1749_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1749_output #Row: " << tbl_Filter_TD_1749_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17724_key_leftMajor {
    int32_t _ss_store_sk5962;
    bool operator==(const SW_JOIN_INNER_TD_17724_key_leftMajor& other) const {
        return ((_ss_store_sk5962 == other._ss_store_sk5962));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17724_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17724_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk5962));
    }
};
}
struct SW_JOIN_INNER_TD_17724_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_customer_sk5958;
    int32_t _ss_cdemo_sk5959;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_store_sk5962;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
};
struct SW_JOIN_INNER_TD_17724_key_rightMajor {
    int32_t _s_store_sk6143;
    bool operator==(const SW_JOIN_INNER_TD_17724_key_rightMajor& other) const {
        return ((_s_store_sk6143 == other._s_store_sk6143));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17724_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17724_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk6143));
    }
};
}
struct SW_JOIN_INNER_TD_17724_payload_rightMajor {
    int32_t _s_store_sk6143;
    std::string _s_store_name6148;
    std::string _s_zip6168;
};
void SW_JOIN_INNER_TD_17724(Table &tbl_JOIN_INNER_TD_18144_output, Table &tbl_Filter_TD_18863_output, Table &tbl_JOIN_INNER_TD_17724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#5962 = s_store_sk#6143))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_store_sk#5962, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065)
    // Right Table: ListBuffer(s_store_sk#6143, s_store_name#6148, s_zip#6168)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168)
    int left_nrow = tbl_JOIN_INNER_TD_18144_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18863_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17724_key_leftMajor, SW_JOIN_INNER_TD_17724_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_18144_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk5962_k = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_17724_key_leftMajor keyA{_ss_store_sk5962_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 0);
            int32_t _ss_customer_sk5958 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 1);
            int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 2);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 3);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 4);
            int32_t _ss_store_sk5962 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 5);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 6);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 7);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 8);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 9);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 10);
            SW_JOIN_INNER_TD_17724_payload_leftMajor payloadA{_ss_item_sk5957, _ss_customer_sk5958, _ss_cdemo_sk5959, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_store_sk5962, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18863_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk6143_k = tbl_Filter_TD_18863_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17724_key_leftMajor{_s_store_sk6143_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_customer_sk5958 = (it->second)._ss_customer_sk5958;
                int32_t _ss_cdemo_sk5959 = (it->second)._ss_cdemo_sk5959;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_store_sk5962 = (it->second)._ss_store_sk5962;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                int32_t _s_store_sk6143 = tbl_Filter_TD_18863_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_Filter_TD_18863_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_Filter_TD_18863_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 1, _ss_customer_sk5958);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 2, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 3, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 4, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 5, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 6, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 7, _ss_list_price5967);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 8, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 9, _d_year6065);
                tbl_JOIN_INNER_TD_17724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_17724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _s_zip6168_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17724_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17724_key_rightMajor, SW_JOIN_INNER_TD_17724_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18863_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk6143_k = tbl_Filter_TD_18863_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17724_key_rightMajor keyA{_s_store_sk6143_k};
            int32_t _s_store_sk6143 = tbl_Filter_TD_18863_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_Filter_TD_18863_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_Filter_TD_18863_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            SW_JOIN_INNER_TD_17724_payload_rightMajor payloadA{_s_store_sk6143, _s_store_name6148, _s_zip6168};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_18144_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk5962_k = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17724_key_rightMajor{_ss_store_sk5962_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk6143 = (it->second)._s_store_sk6143;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 0);
                int32_t _ss_customer_sk5958 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 1);
                int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 2);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 3);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 4);
                int32_t _ss_store_sk5962 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 5);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 6);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 7);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 8);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 9);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_18144_output.getInt32(i, 10);
                tbl_JOIN_INNER_TD_17724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_17724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _s_zip6168_n);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 1, _ss_customer_sk5958);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 2, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 3, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 4, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 5, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 6, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 7, _ss_list_price5967);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 8, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_17724_output.setInt32(r, 9, _d_year6065);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17724_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17724_output #Row: " << tbl_JOIN_INNER_TD_17724_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17190(Table &tbl_SerializeFromObject_TD_1829_input, Table &tbl_Filter_TD_17190_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(c_customer_sk#0) AND ((isnotnull(c_first_sales_date_sk#6) AND isnotnull(c_first_shipto_date_sk#5)) AND isnotnull(c_current_cdemo_sk#2))) AND (isnotnull(c_current_hdemo_sk#3) AND isnotnull(c_current_addr_sk#4))))
    // Input: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, c_first_shipto_date_sk#5, c_first_sales_date_sk#6)
    // Output: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, c_first_shipto_date_sk#5, c_first_sales_date_sk#6)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1829_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 0);
        int32_t _c_first_sales_date_sk6 = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 5);
        int32_t _c_first_shipto_date_sk5 = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 4);
        int32_t _c_current_cdemo_sk2 = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 1);
        int32_t _c_current_hdemo_sk3 = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 2);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 3);
        if (((_c_customer_sk0!= 0) && (((_c_first_sales_date_sk6!= 0) && (_c_first_shipto_date_sk5!= 0)) && (_c_current_cdemo_sk2!= 0))) && ((_c_current_hdemo_sk3!= 0) && (_c_current_addr_sk4!= 0))) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 0);
            tbl_Filter_TD_17190_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_cdemo_sk2_t = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 1);
            tbl_Filter_TD_17190_output.setInt32(r, 1, _c_current_cdemo_sk2_t);
            int32_t _c_current_hdemo_sk3_t = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 2);
            tbl_Filter_TD_17190_output.setInt32(r, 2, _c_current_hdemo_sk3_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 3);
            tbl_Filter_TD_17190_output.setInt32(r, 3, _c_current_addr_sk4_t);
            int32_t _c_first_shipto_date_sk5_t = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 4);
            tbl_Filter_TD_17190_output.setInt32(r, 4, _c_first_shipto_date_sk5_t);
            int32_t _c_first_sales_date_sk6_t = tbl_SerializeFromObject_TD_1829_input.getInt32(i, 5);
            tbl_Filter_TD_17190_output.setInt32(r, 5, _c_first_sales_date_sk6_t);
            r++;
        }
    }
    tbl_Filter_TD_17190_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17190_output #Row: " << tbl_Filter_TD_17190_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17482_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_17482_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17482_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17482_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_17482_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
};
struct SW_JOIN_INNER_TD_17482_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_17482_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17482_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17482_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_17482_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
    std::string _s_zip403;
};
void SW_JOIN_INNER_TD_17482(Table &tbl_JOIN_INNER_TD_18270_output, Table &tbl_Filter_TD_18257_output, Table &tbl_JOIN_INNER_TD_17482_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126)
    // Right Table: ListBuffer(s_store_sk#378, s_store_name#383, s_zip#403)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403)
    int left_nrow = tbl_JOIN_INNER_TD_18270_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18257_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17482_key_leftMajor, SW_JOIN_INNER_TD_17482_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_18270_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_17482_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 1);
            int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 2);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 3);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 4);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 5);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 6);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 7);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 8);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 9);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 10);
            SW_JOIN_INNER_TD_17482_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_cdemo_sk1210, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18257_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_18257_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17482_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _s_store_sk378 = tbl_Filter_TD_18257_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_18257_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_18257_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 2, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 3, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 4, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 5, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 6, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 7, _ss_list_price1218);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 8, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 9, _d_year126);
                tbl_JOIN_INNER_TD_17482_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_store_name383_n);
                tbl_JOIN_INNER_TD_17482_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _s_zip403_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17482_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17482_key_rightMajor, SW_JOIN_INNER_TD_17482_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18257_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_18257_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17482_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_18257_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_18257_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_18257_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_17482_payload_rightMajor payloadA{_s_store_sk378, _s_store_name383, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_18270_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17482_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 1);
                int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 2);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 3);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 4);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 5);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 6);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 7);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 8);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 9);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_18270_output.getInt32(i, 10);
                tbl_JOIN_INNER_TD_17482_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_store_name383_n);
                tbl_JOIN_INNER_TD_17482_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _s_zip403_n);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 2, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 3, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 4, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 5, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 6, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 7, _ss_list_price1218);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 8, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_17482_output.setInt32(r, 9, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17482_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17482_output #Row: " << tbl_JOIN_INNER_TD_17482_output.getNumRow() << std::endl;
}

void SW_Filter_TD_16465(Table &tbl_SerializeFromObject_TD_17401_input, Table &tbl_Filter_TD_16465_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#6087))
    // Input: ListBuffer(d_date_sk#6087, d_year#6093)
    // Output: ListBuffer(d_date_sk#6087, d_year#6093)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_17401_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk6087 = tbl_SerializeFromObject_TD_17401_input.getInt32(i, 0);
        if (_d_date_sk6087!= 0) {
            int32_t _d_date_sk6087_t = tbl_SerializeFromObject_TD_17401_input.getInt32(i, 0);
            tbl_Filter_TD_16465_output.setInt32(r, 0, _d_date_sk6087_t);
            int32_t _d_year6093_t = tbl_SerializeFromObject_TD_17401_input.getInt32(i, 1);
            tbl_Filter_TD_16465_output.setInt32(r, 1, _d_year6093_t);
            r++;
        }
    }
    tbl_Filter_TD_16465_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_16465_output #Row: " << tbl_Filter_TD_16465_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16122_key_leftMajor {
    int32_t _ss_customer_sk5958;
    bool operator==(const SW_JOIN_INNER_TD_16122_key_leftMajor& other) const {
        return ((_ss_customer_sk5958 == other._ss_customer_sk5958));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16122_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16122_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk5958));
    }
};
}
struct SW_JOIN_INNER_TD_16122_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_customer_sk5958;
    int32_t _ss_cdemo_sk5959;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
};
struct SW_JOIN_INNER_TD_16122_key_rightMajor {
    int32_t _c_customer_sk6172;
    bool operator==(const SW_JOIN_INNER_TD_16122_key_rightMajor& other) const {
        return ((_c_customer_sk6172 == other._c_customer_sk6172));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16122_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16122_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk6172));
    }
};
}
struct SW_JOIN_INNER_TD_16122_payload_rightMajor {
    int32_t _c_customer_sk6172;
    int32_t _c_current_cdemo_sk6174;
    int32_t _c_current_hdemo_sk6175;
    int32_t _c_current_addr_sk6176;
    int32_t _c_first_shipto_date_sk6177;
    int32_t _c_first_sales_date_sk6178;
};
void SW_JOIN_INNER_TD_16122(Table &tbl_JOIN_INNER_TD_17724_output, Table &tbl_Filter_TD_1749_output, Table &tbl_JOIN_INNER_TD_16122_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#5958 = c_customer_sk#6172))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_customer_sk#5958, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168)
    // Right Table: ListBuffer(c_customer_sk#6172, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, c_first_shipto_date_sk#6177, c_first_sales_date_sk#6178)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, c_first_shipto_date_sk#6177, c_first_sales_date_sk#6178)
    int left_nrow = tbl_JOIN_INNER_TD_17724_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1749_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16122_key_leftMajor, SW_JOIN_INNER_TD_16122_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17724_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk5958_k = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_16122_key_leftMajor keyA{_ss_customer_sk5958_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 0);
            int32_t _ss_customer_sk5958 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 1);
            int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 2);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 3);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 4);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 5);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 6);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 7);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 8);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 9);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_17724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_17724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            SW_JOIN_INNER_TD_16122_payload_leftMajor payloadA{_ss_item_sk5957, _ss_customer_sk5958, _ss_cdemo_sk5959, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1749_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk6172_k = tbl_Filter_TD_1749_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16122_key_leftMajor{_c_customer_sk6172_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_customer_sk5958 = (it->second)._ss_customer_sk5958;
                int32_t _ss_cdemo_sk5959 = (it->second)._ss_cdemo_sk5959;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_customer_sk6172 = tbl_Filter_TD_1749_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk6174 = tbl_Filter_TD_1749_output.getInt32(i, 1);
                int32_t _c_current_hdemo_sk6175 = tbl_Filter_TD_1749_output.getInt32(i, 2);
                int32_t _c_current_addr_sk6176 = tbl_Filter_TD_1749_output.getInt32(i, 3);
                int32_t _c_first_shipto_date_sk6177 = tbl_Filter_TD_1749_output.getInt32(i, 4);
                int32_t _c_first_sales_date_sk6178 = tbl_Filter_TD_1749_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 1, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 2, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 3, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 4, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 5, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 6, _ss_list_price5967);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 7, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 8, _d_year6065);
                tbl_JOIN_INNER_TD_16122_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_16122_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip6168_n);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 11, _c_current_cdemo_sk6174);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 12, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 13, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 14, _c_first_shipto_date_sk6177);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 15, _c_first_sales_date_sk6178);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16122_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16122_key_rightMajor, SW_JOIN_INNER_TD_16122_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1749_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk6172_k = tbl_Filter_TD_1749_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16122_key_rightMajor keyA{_c_customer_sk6172_k};
            int32_t _c_customer_sk6172 = tbl_Filter_TD_1749_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk6174 = tbl_Filter_TD_1749_output.getInt32(i, 1);
            int32_t _c_current_hdemo_sk6175 = tbl_Filter_TD_1749_output.getInt32(i, 2);
            int32_t _c_current_addr_sk6176 = tbl_Filter_TD_1749_output.getInt32(i, 3);
            int32_t _c_first_shipto_date_sk6177 = tbl_Filter_TD_1749_output.getInt32(i, 4);
            int32_t _c_first_sales_date_sk6178 = tbl_Filter_TD_1749_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_16122_payload_rightMajor payloadA{_c_customer_sk6172, _c_current_cdemo_sk6174, _c_current_hdemo_sk6175, _c_current_addr_sk6176, _c_first_shipto_date_sk6177, _c_first_sales_date_sk6178};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17724_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk5958_k = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16122_key_rightMajor{_ss_customer_sk5958_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk6172 = (it->second)._c_customer_sk6172;
                int32_t _c_current_cdemo_sk6174 = (it->second)._c_current_cdemo_sk6174;
                int32_t _c_current_hdemo_sk6175 = (it->second)._c_current_hdemo_sk6175;
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _c_first_shipto_date_sk6177 = (it->second)._c_first_shipto_date_sk6177;
                int32_t _c_first_sales_date_sk6178 = (it->second)._c_first_sales_date_sk6178;
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 0);
                int32_t _ss_customer_sk5958 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 1);
                int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 2);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 3);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 4);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 5);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 6);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 7);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 8);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_17724_output.getInt32(i, 9);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_17724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_17724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 11, _c_current_cdemo_sk6174);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 12, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 13, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 14, _c_first_shipto_date_sk6177);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 15, _c_first_sales_date_sk6178);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 1, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 2, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 3, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 4, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 5, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 6, _ss_list_price5967);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 7, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_16122_output.setInt32(r, 8, _d_year6065);
                tbl_JOIN_INNER_TD_16122_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_16122_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip6168_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16122_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16122_output #Row: " << tbl_JOIN_INNER_TD_16122_output.getNumRow() << std::endl;
}

void SW_Filter_TD_16920(Table &tbl_SerializeFromObject_TD_17788_input, Table &tbl_Filter_TD_16920_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#4767))
    // Input: ListBuffer(d_date_sk#4767, d_year#4773)
    // Output: ListBuffer(d_date_sk#4767, d_year#4773)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_17788_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk4767 = tbl_SerializeFromObject_TD_17788_input.getInt32(i, 0);
        if (_d_date_sk4767!= 0) {
            int32_t _d_date_sk4767_t = tbl_SerializeFromObject_TD_17788_input.getInt32(i, 0);
            tbl_Filter_TD_16920_output.setInt32(r, 0, _d_date_sk4767_t);
            int32_t _d_year4773_t = tbl_SerializeFromObject_TD_17788_input.getInt32(i, 1);
            tbl_Filter_TD_16920_output.setInt32(r, 1, _d_year4773_t);
            r++;
        }
    }
    tbl_Filter_TD_16920_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_16920_output #Row: " << tbl_Filter_TD_16920_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16477_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_16477_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16477_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16477_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_16477_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
};
struct SW_JOIN_INNER_TD_16477_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_16477_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16477_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16477_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_16477_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
    int32_t _c_first_shipto_date_sk5;
    int32_t _c_first_sales_date_sk6;
};
void SW_JOIN_INNER_TD_16477(Table &tbl_JOIN_INNER_TD_17482_output, Table &tbl_Filter_TD_17190_output, Table &tbl_JOIN_INNER_TD_16477_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, c_first_shipto_date_sk#5, c_first_sales_date_sk#6)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, c_first_shipto_date_sk#5, c_first_sales_date_sk#6)
    int left_nrow = tbl_JOIN_INNER_TD_17482_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17190_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16477_key_leftMajor, SW_JOIN_INNER_TD_16477_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17482_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_16477_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 1);
            int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 2);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 3);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 4);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 5);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 6);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 7);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 8);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 9);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_17482_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_17482_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_16477_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_cdemo_sk1210, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17190_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_17190_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16477_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_customer_sk0 = tbl_Filter_TD_17190_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_17190_output.getInt32(i, 1);
                int32_t _c_current_hdemo_sk3 = tbl_Filter_TD_17190_output.getInt32(i, 2);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_17190_output.getInt32(i, 3);
                int32_t _c_first_shipto_date_sk5 = tbl_Filter_TD_17190_output.getInt32(i, 4);
                int32_t _c_first_sales_date_sk6 = tbl_Filter_TD_17190_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 1, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 2, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 3, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 4, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 5, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 6, _ss_list_price1218);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 7, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 8, _d_year126);
                tbl_JOIN_INNER_TD_16477_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name383_n);
                tbl_JOIN_INNER_TD_16477_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip403_n);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 11, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 12, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 13, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 14, _c_first_shipto_date_sk5);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 15, _c_first_sales_date_sk6);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16477_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16477_key_rightMajor, SW_JOIN_INNER_TD_16477_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17190_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_17190_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16477_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_17190_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_17190_output.getInt32(i, 1);
            int32_t _c_current_hdemo_sk3 = tbl_Filter_TD_17190_output.getInt32(i, 2);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_17190_output.getInt32(i, 3);
            int32_t _c_first_shipto_date_sk5 = tbl_Filter_TD_17190_output.getInt32(i, 4);
            int32_t _c_first_sales_date_sk6 = tbl_Filter_TD_17190_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_16477_payload_rightMajor payloadA{_c_customer_sk0, _c_current_cdemo_sk2, _c_current_hdemo_sk3, _c_current_addr_sk4, _c_first_shipto_date_sk5, _c_first_sales_date_sk6};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17482_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16477_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _c_first_shipto_date_sk5 = (it->second)._c_first_shipto_date_sk5;
                int32_t _c_first_sales_date_sk6 = (it->second)._c_first_sales_date_sk6;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 1);
                int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 2);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 3);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 4);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 5);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 6);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 7);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 8);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_17482_output.getInt32(i, 9);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_17482_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_17482_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 11, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 12, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 13, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 14, _c_first_shipto_date_sk5);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 15, _c_first_sales_date_sk6);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 1, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 2, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 3, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 4, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 5, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 6, _ss_list_price1218);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 7, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_16477_output.setInt32(r, 8, _d_year126);
                tbl_JOIN_INNER_TD_16477_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name383_n);
                tbl_JOIN_INNER_TD_16477_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip403_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16477_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16477_output #Row: " << tbl_JOIN_INNER_TD_16477_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1575(Table &tbl_SerializeFromObject_TD_16444_input, Table &tbl_Filter_TD_1575_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#6115))
    // Input: ListBuffer(d_date_sk#6115, d_year#6121)
    // Output: ListBuffer(d_date_sk#6115, d_year#6121)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_16444_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk6115 = tbl_SerializeFromObject_TD_16444_input.getInt32(i, 0);
        if (_d_date_sk6115!= 0) {
            int32_t _d_date_sk6115_t = tbl_SerializeFromObject_TD_16444_input.getInt32(i, 0);
            tbl_Filter_TD_1575_output.setInt32(r, 0, _d_date_sk6115_t);
            int32_t _d_year6121_t = tbl_SerializeFromObject_TD_16444_input.getInt32(i, 1);
            tbl_Filter_TD_1575_output.setInt32(r, 1, _d_year6121_t);
            r++;
        }
    }
    tbl_Filter_TD_1575_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1575_output #Row: " << tbl_Filter_TD_1575_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_15975_key_leftMajor {
    int32_t _c_first_sales_date_sk6178;
    bool operator==(const SW_JOIN_INNER_TD_15975_key_leftMajor& other) const {
        return ((_c_first_sales_date_sk6178 == other._c_first_sales_date_sk6178));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_15975_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_15975_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_first_sales_date_sk6178));
    }
};
}
struct SW_JOIN_INNER_TD_15975_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_cdemo_sk5959;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_cdemo_sk6174;
    int32_t _c_current_hdemo_sk6175;
    int32_t _c_current_addr_sk6176;
    int32_t _c_first_shipto_date_sk6177;
    int32_t _c_first_sales_date_sk6178;
};
struct SW_JOIN_INNER_TD_15975_key_rightMajor {
    int32_t _d_date_sk6087;
    bool operator==(const SW_JOIN_INNER_TD_15975_key_rightMajor& other) const {
        return ((_d_date_sk6087 == other._d_date_sk6087));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_15975_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_15975_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6087));
    }
};
}
struct SW_JOIN_INNER_TD_15975_payload_rightMajor {
    int32_t _d_date_sk6087;
    int32_t _d_year6093;
};
void SW_JOIN_INNER_TD_15975(Table &tbl_JOIN_INNER_TD_16122_output, Table &tbl_Filter_TD_16465_output, Table &tbl_JOIN_INNER_TD_15975_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_first_sales_date_sk#6178 = d_date_sk#6087))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, c_first_shipto_date_sk#6177, c_first_sales_date_sk#6178)
    // Right Table: ListBuffer(d_date_sk#6087, d_year#6093)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, c_first_shipto_date_sk#6177, d_year#6093)
    int left_nrow = tbl_JOIN_INNER_TD_16122_output.getNumRow();
    int right_nrow = tbl_Filter_TD_16465_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_15975_key_leftMajor, SW_JOIN_INNER_TD_15975_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16122_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_first_sales_date_sk6178_k = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 15);
            SW_JOIN_INNER_TD_15975_key_leftMajor keyA{_c_first_sales_date_sk6178_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 0);
            int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 2);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 3);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 4);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 5);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 6);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 7);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_16122_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_16122_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_cdemo_sk6174 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 11);
            int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 12);
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 13);
            int32_t _c_first_shipto_date_sk6177 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 14);
            int32_t _c_first_sales_date_sk6178 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 15);
            SW_JOIN_INNER_TD_15975_payload_leftMajor payloadA{_ss_item_sk5957, _ss_cdemo_sk5959, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_cdemo_sk6174, _c_current_hdemo_sk6175, _c_current_addr_sk6176, _c_first_shipto_date_sk6177, _c_first_sales_date_sk6178};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_16465_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6087_k = tbl_Filter_TD_16465_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_15975_key_leftMajor{_d_date_sk6087_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_cdemo_sk5959 = (it->second)._ss_cdemo_sk5959;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_cdemo_sk6174 = (it->second)._c_current_cdemo_sk6174;
                int32_t _c_current_hdemo_sk6175 = (it->second)._c_current_hdemo_sk6175;
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _c_first_shipto_date_sk6177 = (it->second)._c_first_shipto_date_sk6177;
                int32_t _c_first_sales_date_sk6178 = (it->second)._c_first_sales_date_sk6178;
                int32_t _d_date_sk6087 = tbl_Filter_TD_16465_output.getInt32(i, 0);
                int32_t _d_year6093 = tbl_Filter_TD_16465_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 1, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 2, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 3, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 4, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 5, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 6, _ss_list_price5967);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 7, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 8, _d_year6065);
                tbl_JOIN_INNER_TD_15975_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_15975_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip6168_n);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 11, _c_current_cdemo_sk6174);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 12, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 13, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 14, _c_first_shipto_date_sk6177);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 15, _d_year6093);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_15975_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_15975_key_rightMajor, SW_JOIN_INNER_TD_15975_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_16465_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6087_k = tbl_Filter_TD_16465_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_15975_key_rightMajor keyA{_d_date_sk6087_k};
            int32_t _d_date_sk6087 = tbl_Filter_TD_16465_output.getInt32(i, 0);
            int32_t _d_year6093 = tbl_Filter_TD_16465_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_15975_payload_rightMajor payloadA{_d_date_sk6087, _d_year6093};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_16122_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_first_sales_date_sk6178_k = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 15);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_15975_key_rightMajor{_c_first_sales_date_sk6178_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6087 = (it->second)._d_date_sk6087;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 0);
                int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 2);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 3);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 4);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 5);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 6);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 7);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_16122_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_16122_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_cdemo_sk6174 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 11);
                int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 12);
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 13);
                int32_t _c_first_shipto_date_sk6177 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 14);
                int32_t _c_first_sales_date_sk6178 = tbl_JOIN_INNER_TD_16122_output.getInt32(i, 15);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 15, _d_year6093);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 1, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 2, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 3, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 4, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 5, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 6, _ss_list_price5967);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 7, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 8, _d_year6065);
                tbl_JOIN_INNER_TD_15975_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_15975_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip6168_n);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 11, _c_current_cdemo_sk6174);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 12, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 13, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_15975_output.setInt32(r, 14, _c_first_shipto_date_sk6177);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_15975_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_15975_output #Row: " << tbl_JOIN_INNER_TD_15975_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1559(Table &tbl_SerializeFromObject_TD_16895_input, Table &tbl_Filter_TD_1559_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#4795))
    // Input: ListBuffer(d_date_sk#4795, d_year#4801)
    // Output: ListBuffer(d_date_sk#4795, d_year#4801)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_16895_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk4795 = tbl_SerializeFromObject_TD_16895_input.getInt32(i, 0);
        if (_d_date_sk4795!= 0) {
            int32_t _d_date_sk4795_t = tbl_SerializeFromObject_TD_16895_input.getInt32(i, 0);
            tbl_Filter_TD_1559_output.setInt32(r, 0, _d_date_sk4795_t);
            int32_t _d_year4801_t = tbl_SerializeFromObject_TD_16895_input.getInt32(i, 1);
            tbl_Filter_TD_1559_output.setInt32(r, 1, _d_year4801_t);
            r++;
        }
    }
    tbl_Filter_TD_1559_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1559_output #Row: " << tbl_Filter_TD_1559_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_15183_key_leftMajor {
    int32_t _c_first_sales_date_sk6;
    bool operator==(const SW_JOIN_INNER_TD_15183_key_leftMajor& other) const {
        return ((_c_first_sales_date_sk6 == other._c_first_sales_date_sk6));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_15183_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_15183_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_first_sales_date_sk6));
    }
};
}
struct SW_JOIN_INNER_TD_15183_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
    int32_t _c_first_shipto_date_sk5;
    int32_t _c_first_sales_date_sk6;
};
struct SW_JOIN_INNER_TD_15183_key_rightMajor {
    int32_t _d_date_sk4767;
    bool operator==(const SW_JOIN_INNER_TD_15183_key_rightMajor& other) const {
        return ((_d_date_sk4767 == other._d_date_sk4767));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_15183_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_15183_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4767));
    }
};
}
struct SW_JOIN_INNER_TD_15183_payload_rightMajor {
    int32_t _d_date_sk4767;
    int32_t _d_year4773;
};
void SW_JOIN_INNER_TD_15183(Table &tbl_JOIN_INNER_TD_16477_output, Table &tbl_Filter_TD_16920_output, Table &tbl_JOIN_INNER_TD_15183_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_first_sales_date_sk#6 = d_date_sk#4767))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, c_first_shipto_date_sk#5, c_first_sales_date_sk#6)
    // Right Table: ListBuffer(d_date_sk#4767, d_year#4773)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, c_first_shipto_date_sk#5, d_year#4773)
    int left_nrow = tbl_JOIN_INNER_TD_16477_output.getNumRow();
    int right_nrow = tbl_Filter_TD_16920_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_15183_key_leftMajor, SW_JOIN_INNER_TD_15183_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16477_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_first_sales_date_sk6_k = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 15);
            SW_JOIN_INNER_TD_15183_key_leftMajor keyA{_c_first_sales_date_sk6_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 0);
            int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 2);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 3);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 4);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 5);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 6);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 7);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_16477_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_16477_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 11);
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 12);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 13);
            int32_t _c_first_shipto_date_sk5 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 14);
            int32_t _c_first_sales_date_sk6 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 15);
            SW_JOIN_INNER_TD_15183_payload_leftMajor payloadA{_ss_item_sk1208, _ss_cdemo_sk1210, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_cdemo_sk2, _c_current_hdemo_sk3, _c_current_addr_sk4, _c_first_shipto_date_sk5, _c_first_sales_date_sk6};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_16920_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4767_k = tbl_Filter_TD_16920_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_15183_key_leftMajor{_d_date_sk4767_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _c_first_shipto_date_sk5 = (it->second)._c_first_shipto_date_sk5;
                int32_t _c_first_sales_date_sk6 = (it->second)._c_first_sales_date_sk6;
                int32_t _d_date_sk4767 = tbl_Filter_TD_16920_output.getInt32(i, 0);
                int32_t _d_year4773 = tbl_Filter_TD_16920_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 1, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 2, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 3, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 4, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 5, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 6, _ss_list_price1218);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 7, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 8, _d_year126);
                tbl_JOIN_INNER_TD_15183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name383_n);
                tbl_JOIN_INNER_TD_15183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip403_n);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 11, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 12, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 13, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 14, _c_first_shipto_date_sk5);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 15, _d_year4773);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_15183_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_15183_key_rightMajor, SW_JOIN_INNER_TD_15183_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_16920_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4767_k = tbl_Filter_TD_16920_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_15183_key_rightMajor keyA{_d_date_sk4767_k};
            int32_t _d_date_sk4767 = tbl_Filter_TD_16920_output.getInt32(i, 0);
            int32_t _d_year4773 = tbl_Filter_TD_16920_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_15183_payload_rightMajor payloadA{_d_date_sk4767, _d_year4773};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_16477_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_first_sales_date_sk6_k = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 15);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_15183_key_rightMajor{_c_first_sales_date_sk6_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4767 = (it->second)._d_date_sk4767;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 0);
                int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 2);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 3);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 4);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 5);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 6);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 7);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_16477_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_16477_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 11);
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 12);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 13);
                int32_t _c_first_shipto_date_sk5 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 14);
                int32_t _c_first_sales_date_sk6 = tbl_JOIN_INNER_TD_16477_output.getInt32(i, 15);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 15, _d_year4773);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 1, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 2, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 3, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 4, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 5, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 6, _ss_list_price1218);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 7, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 8, _d_year126);
                tbl_JOIN_INNER_TD_15183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name383_n);
                tbl_JOIN_INNER_TD_15183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip403_n);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 11, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 12, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 13, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_15183_output.setInt32(r, 14, _c_first_shipto_date_sk5);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_15183_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_15183_output #Row: " << tbl_JOIN_INNER_TD_15183_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14498(Table &tbl_SerializeFromObject_TD_15371_input, Table &tbl_Filter_TD_14498_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cd_demo_sk#6190) AND isnotnull(cd_marital_status#6192)))
    // Input: ListBuffer(cd_demo_sk#6190, cd_marital_status#6192)
    // Output: ListBuffer(cd_demo_sk#6190, cd_marital_status#6192)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15371_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk6190 = tbl_SerializeFromObject_TD_15371_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192 = tbl_SerializeFromObject_TD_15371_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cd_demo_sk6190!= 0) && （std::string(_isnotnullcd_marital_status6192.data()) != "NULL")) {
            int32_t _cd_demo_sk6190_t = tbl_SerializeFromObject_TD_15371_input.getInt32(i, 0);
            tbl_Filter_TD_14498_output.setInt32(r, 0, _cd_demo_sk6190_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_t = tbl_SerializeFromObject_TD_15371_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_14498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status6192_t);
            r++;
        }
    }
    tbl_Filter_TD_14498_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14498_output #Row: " << tbl_Filter_TD_14498_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_14960_key_leftMajor {
    int32_t _c_first_shipto_date_sk6177;
    bool operator==(const SW_JOIN_INNER_TD_14960_key_leftMajor& other) const {
        return ((_c_first_shipto_date_sk6177 == other._c_first_shipto_date_sk6177));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_14960_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_14960_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_first_shipto_date_sk6177));
    }
};
}
struct SW_JOIN_INNER_TD_14960_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_cdemo_sk5959;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_cdemo_sk6174;
    int32_t _c_current_hdemo_sk6175;
    int32_t _c_current_addr_sk6176;
    int32_t _c_first_shipto_date_sk6177;
    int32_t _d_year6093;
};
struct SW_JOIN_INNER_TD_14960_key_rightMajor {
    int32_t _d_date_sk6115;
    bool operator==(const SW_JOIN_INNER_TD_14960_key_rightMajor& other) const {
        return ((_d_date_sk6115 == other._d_date_sk6115));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_14960_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_14960_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6115));
    }
};
}
struct SW_JOIN_INNER_TD_14960_payload_rightMajor {
    int32_t _d_date_sk6115;
    int32_t _d_year6121;
};
void SW_JOIN_INNER_TD_14960(Table &tbl_JOIN_INNER_TD_15975_output, Table &tbl_Filter_TD_1575_output, Table &tbl_JOIN_INNER_TD_14960_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_first_shipto_date_sk#6177 = d_date_sk#6115))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, c_first_shipto_date_sk#6177, d_year#6093)
    // Right Table: ListBuffer(d_date_sk#6115, d_year#6121)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121)
    int left_nrow = tbl_JOIN_INNER_TD_15975_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1575_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_14960_key_leftMajor, SW_JOIN_INNER_TD_14960_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_15975_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_first_shipto_date_sk6177_k = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 14);
            SW_JOIN_INNER_TD_14960_key_leftMajor keyA{_c_first_shipto_date_sk6177_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 0);
            int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 2);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 3);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 4);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 5);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 6);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 7);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_15975_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_15975_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_cdemo_sk6174 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 11);
            int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 12);
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 13);
            int32_t _c_first_shipto_date_sk6177 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 14);
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 15);
            SW_JOIN_INNER_TD_14960_payload_leftMajor payloadA{_ss_item_sk5957, _ss_cdemo_sk5959, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_cdemo_sk6174, _c_current_hdemo_sk6175, _c_current_addr_sk6176, _c_first_shipto_date_sk6177, _d_year6093};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1575_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6115_k = tbl_Filter_TD_1575_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_14960_key_leftMajor{_d_date_sk6115_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_cdemo_sk5959 = (it->second)._ss_cdemo_sk5959;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_cdemo_sk6174 = (it->second)._c_current_cdemo_sk6174;
                int32_t _c_current_hdemo_sk6175 = (it->second)._c_current_hdemo_sk6175;
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _c_first_shipto_date_sk6177 = (it->second)._c_first_shipto_date_sk6177;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_date_sk6115 = tbl_Filter_TD_1575_output.getInt32(i, 0);
                int32_t _d_year6121 = tbl_Filter_TD_1575_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 1, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 2, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 3, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 4, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 5, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 6, _ss_list_price5967);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 7, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 8, _d_year6065);
                tbl_JOIN_INNER_TD_14960_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_14960_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip6168_n);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 11, _c_current_cdemo_sk6174);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 12, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 13, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 14, _d_year6093);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 15, _d_year6121);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_14960_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_14960_key_rightMajor, SW_JOIN_INNER_TD_14960_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1575_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6115_k = tbl_Filter_TD_1575_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_14960_key_rightMajor keyA{_d_date_sk6115_k};
            int32_t _d_date_sk6115 = tbl_Filter_TD_1575_output.getInt32(i, 0);
            int32_t _d_year6121 = tbl_Filter_TD_1575_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_14960_payload_rightMajor payloadA{_d_date_sk6115, _d_year6121};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_15975_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_first_shipto_date_sk6177_k = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 14);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_14960_key_rightMajor{_c_first_shipto_date_sk6177_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6115 = (it->second)._d_date_sk6115;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 0);
                int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 2);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 3);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 4);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 5);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 6);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 7);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_15975_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_15975_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_cdemo_sk6174 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 11);
                int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 12);
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 13);
                int32_t _c_first_shipto_date_sk6177 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 14);
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_15975_output.getInt32(i, 15);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 15, _d_year6121);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 1, _ss_cdemo_sk5959);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 2, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 3, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 4, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 5, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 6, _ss_list_price5967);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 7, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 8, _d_year6065);
                tbl_JOIN_INNER_TD_14960_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_14960_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip6168_n);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 11, _c_current_cdemo_sk6174);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 12, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 13, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_14960_output.setInt32(r, 14, _d_year6093);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_14960_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_14960_output #Row: " << tbl_JOIN_INNER_TD_14960_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14941(Table &tbl_SerializeFromObject_TD_15210_input, Table &tbl_Filter_TD_14941_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cd_demo_sk#93) AND isnotnull(cd_marital_status#95)))
    // Input: ListBuffer(cd_demo_sk#93, cd_marital_status#95)
    // Output: ListBuffer(cd_demo_sk#93, cd_marital_status#95)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15210_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_15210_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cd_demo_sk93!= 0) && （std::string(_isnotnullcd_marital_status95.data()) != "NULL")) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_15210_input.getInt32(i, 0);
            tbl_Filter_TD_14941_output.setInt32(r, 0, _cd_demo_sk93_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_t = tbl_SerializeFromObject_TD_15210_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_14941_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_t);
            r++;
        }
    }
    tbl_Filter_TD_14941_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14941_output #Row: " << tbl_Filter_TD_14941_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_14698_key_leftMajor {
    int32_t _c_first_shipto_date_sk5;
    bool operator==(const SW_JOIN_INNER_TD_14698_key_leftMajor& other) const {
        return ((_c_first_shipto_date_sk5 == other._c_first_shipto_date_sk5));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_14698_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_14698_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_first_shipto_date_sk5));
    }
};
}
struct SW_JOIN_INNER_TD_14698_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
    int32_t _c_first_shipto_date_sk5;
    int32_t _d_year4773;
};
struct SW_JOIN_INNER_TD_14698_key_rightMajor {
    int32_t _d_date_sk4795;
    bool operator==(const SW_JOIN_INNER_TD_14698_key_rightMajor& other) const {
        return ((_d_date_sk4795 == other._d_date_sk4795));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_14698_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_14698_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4795));
    }
};
}
struct SW_JOIN_INNER_TD_14698_payload_rightMajor {
    int32_t _d_date_sk4795;
    int32_t _d_year4801;
};
void SW_JOIN_INNER_TD_14698(Table &tbl_JOIN_INNER_TD_15183_output, Table &tbl_Filter_TD_1559_output, Table &tbl_JOIN_INNER_TD_14698_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_first_shipto_date_sk#5 = d_date_sk#4795))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, c_first_shipto_date_sk#5, d_year#4773)
    // Right Table: ListBuffer(d_date_sk#4795, d_year#4801)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801)
    int left_nrow = tbl_JOIN_INNER_TD_15183_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1559_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_14698_key_leftMajor, SW_JOIN_INNER_TD_14698_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_15183_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_first_shipto_date_sk5_k = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 14);
            SW_JOIN_INNER_TD_14698_key_leftMajor keyA{_c_first_shipto_date_sk5_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 0);
            int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 2);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 3);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 4);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 5);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 6);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 7);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_15183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_15183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 11);
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 12);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 13);
            int32_t _c_first_shipto_date_sk5 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 14);
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 15);
            SW_JOIN_INNER_TD_14698_payload_leftMajor payloadA{_ss_item_sk1208, _ss_cdemo_sk1210, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_cdemo_sk2, _c_current_hdemo_sk3, _c_current_addr_sk4, _c_first_shipto_date_sk5, _d_year4773};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1559_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4795_k = tbl_Filter_TD_1559_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_14698_key_leftMajor{_d_date_sk4795_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _c_first_shipto_date_sk5 = (it->second)._c_first_shipto_date_sk5;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_date_sk4795 = tbl_Filter_TD_1559_output.getInt32(i, 0);
                int32_t _d_year4801 = tbl_Filter_TD_1559_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 1, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 2, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 3, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 4, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 5, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 6, _ss_list_price1218);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 7, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 8, _d_year126);
                tbl_JOIN_INNER_TD_14698_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name383_n);
                tbl_JOIN_INNER_TD_14698_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip403_n);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 11, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 12, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 13, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 14, _d_year4773);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 15, _d_year4801);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_14698_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_14698_key_rightMajor, SW_JOIN_INNER_TD_14698_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1559_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4795_k = tbl_Filter_TD_1559_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_14698_key_rightMajor keyA{_d_date_sk4795_k};
            int32_t _d_date_sk4795 = tbl_Filter_TD_1559_output.getInt32(i, 0);
            int32_t _d_year4801 = tbl_Filter_TD_1559_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_14698_payload_rightMajor payloadA{_d_date_sk4795, _d_year4801};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_15183_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_first_shipto_date_sk5_k = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 14);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_14698_key_rightMajor{_c_first_shipto_date_sk5_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4795 = (it->second)._d_date_sk4795;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 0);
                int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 2);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 3);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 4);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 5);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 6);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 7);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_15183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_15183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 11);
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 12);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 13);
                int32_t _c_first_shipto_date_sk5 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 14);
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_15183_output.getInt32(i, 15);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 15, _d_year4801);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 1, _ss_cdemo_sk1210);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 2, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 3, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 4, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 5, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 6, _ss_list_price1218);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 7, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 8, _d_year126);
                tbl_JOIN_INNER_TD_14698_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_store_name383_n);
                tbl_JOIN_INNER_TD_14698_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _s_zip403_n);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 11, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 12, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 13, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_14698_output.setInt32(r, 14, _d_year4773);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_14698_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_14698_output #Row: " << tbl_JOIN_INNER_TD_14698_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13462(Table &tbl_SerializeFromObject_TD_14926_input, Table &tbl_Filter_TD_13462_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cd_demo_sk#6199) AND isnotnull(cd_marital_status#6201)))
    // Input: ListBuffer(cd_demo_sk#6199, cd_marital_status#6201)
    // Output: ListBuffer(cd_demo_sk#6199, cd_marital_status#6201)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14926_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk6199 = tbl_SerializeFromObject_TD_14926_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6201 = tbl_SerializeFromObject_TD_14926_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cd_demo_sk6199!= 0) && （std::string(_isnotnullcd_marital_status6201.data()) != "NULL")) {
            int32_t _cd_demo_sk6199_t = tbl_SerializeFromObject_TD_14926_input.getInt32(i, 0);
            tbl_Filter_TD_13462_output.setInt32(r, 0, _cd_demo_sk6199_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6201_t = tbl_SerializeFromObject_TD_14926_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_13462_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status6201_t);
            r++;
        }
    }
    tbl_Filter_TD_13462_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13462_output #Row: " << tbl_Filter_TD_13462_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13897_key_leftMajor {
    int32_t _ss_cdemo_sk5959;
    bool operator==(const SW_JOIN_INNER_TD_13897_key_leftMajor& other) const {
        return ((_ss_cdemo_sk5959 == other._ss_cdemo_sk5959));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13897_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13897_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_cdemo_sk5959));
    }
};
}
struct SW_JOIN_INNER_TD_13897_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_cdemo_sk5959;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_cdemo_sk6174;
    int32_t _c_current_hdemo_sk6175;
    int32_t _c_current_addr_sk6176;
    int32_t _d_year6093;
    int32_t _d_year6121;
};
struct SW_JOIN_INNER_TD_13897_key_rightMajor {
    int32_t _cd_demo_sk6190;
    bool operator==(const SW_JOIN_INNER_TD_13897_key_rightMajor& other) const {
        return ((_cd_demo_sk6190 == other._cd_demo_sk6190));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13897_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13897_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk6190));
    }
};
}
struct SW_JOIN_INNER_TD_13897_payload_rightMajor {
    int32_t _cd_demo_sk6190;
    std::string _cd_marital_status6192;
};
void SW_JOIN_INNER_TD_13897(Table &tbl_JOIN_INNER_TD_14960_output, Table &tbl_Filter_TD_14498_output, Table &tbl_JOIN_INNER_TD_13897_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_cdemo_sk#5959 = cd_demo_sk#6190))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_cdemo_sk#5959, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121)
    // Right Table: ListBuffer(cd_demo_sk#6190, cd_marital_status#6192)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121, cd_marital_status#6192)
    int left_nrow = tbl_JOIN_INNER_TD_14960_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14498_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13897_key_leftMajor, SW_JOIN_INNER_TD_13897_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_14960_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_cdemo_sk5959_k = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13897_key_leftMajor keyA{_ss_cdemo_sk5959_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 0);
            int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 2);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 3);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 4);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 5);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 6);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 7);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_14960_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_14960_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_cdemo_sk6174 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 11);
            int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 12);
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 13);
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 14);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 15);
            SW_JOIN_INNER_TD_13897_payload_leftMajor payloadA{_ss_item_sk5957, _ss_cdemo_sk5959, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_cdemo_sk6174, _c_current_hdemo_sk6175, _c_current_addr_sk6176, _d_year6093, _d_year6121};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14498_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk6190_k = tbl_Filter_TD_14498_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13897_key_leftMajor{_cd_demo_sk6190_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_cdemo_sk5959 = (it->second)._ss_cdemo_sk5959;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_cdemo_sk6174 = (it->second)._c_current_cdemo_sk6174;
                int32_t _c_current_hdemo_sk6175 = (it->second)._c_current_hdemo_sk6175;
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _cd_demo_sk6190 = tbl_Filter_TD_14498_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_n = tbl_Filter_TD_14498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_marital_status6192 = std::string(_cd_marital_status6192_n.data());
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 1, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 2, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 3, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 4, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 5, _ss_list_price5967);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 6, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 7, _d_year6065);
                tbl_JOIN_INNER_TD_13897_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_13897_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_zip6168_n);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 10, _c_current_cdemo_sk6174);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 11, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 12, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 13, _d_year6093);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 14, _d_year6121);
                tbl_JOIN_INNER_TD_13897_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _cd_marital_status6192_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13897_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13897_key_rightMajor, SW_JOIN_INNER_TD_13897_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14498_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk6190_k = tbl_Filter_TD_14498_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13897_key_rightMajor keyA{_cd_demo_sk6190_k};
            int32_t _cd_demo_sk6190 = tbl_Filter_TD_14498_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_n = tbl_Filter_TD_14498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status6192 = std::string(_cd_marital_status6192_n.data());
            SW_JOIN_INNER_TD_13897_payload_rightMajor payloadA{_cd_demo_sk6190, _cd_marital_status6192};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_14960_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_cdemo_sk5959_k = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13897_key_rightMajor{_ss_cdemo_sk5959_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk6190 = (it->second)._cd_demo_sk6190;
                std::string _cd_marital_status6192 = (it->second)._cd_marital_status6192;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_n{};
                memcpy(_cd_marital_status6192_n.data(), (_cd_marital_status6192).data(), (_cd_marital_status6192).length());
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 0);
                int32_t _ss_cdemo_sk5959 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 2);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 3);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 4);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 5);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 6);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 7);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_14960_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_14960_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_cdemo_sk6174 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 11);
                int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 12);
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 13);
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 14);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_14960_output.getInt32(i, 15);
                tbl_JOIN_INNER_TD_13897_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _cd_marital_status6192_n);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 1, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 2, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 3, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 4, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 5, _ss_list_price5967);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 6, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 7, _d_year6065);
                tbl_JOIN_INNER_TD_13897_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_13897_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_zip6168_n);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 10, _c_current_cdemo_sk6174);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 11, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 12, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 13, _d_year6093);
                tbl_JOIN_INNER_TD_13897_output.setInt32(r, 14, _d_year6121);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13897_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13897_output #Row: " << tbl_JOIN_INNER_TD_13897_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13368(Table &tbl_SerializeFromObject_TD_14814_input, Table &tbl_Filter_TD_13368_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cd_demo_sk#4823) AND isnotnull(cd_marital_status#4825)))
    // Input: ListBuffer(cd_demo_sk#4823, cd_marital_status#4825)
    // Output: ListBuffer(cd_demo_sk#4823, cd_marital_status#4825)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14814_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk4823 = tbl_SerializeFromObject_TD_14814_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status4825 = tbl_SerializeFromObject_TD_14814_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_cd_demo_sk4823!= 0) && （std::string(_isnotnullcd_marital_status4825.data()) != "NULL")) {
            int32_t _cd_demo_sk4823_t = tbl_SerializeFromObject_TD_14814_input.getInt32(i, 0);
            tbl_Filter_TD_13368_output.setInt32(r, 0, _cd_demo_sk4823_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status4825_t = tbl_SerializeFromObject_TD_14814_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_13368_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status4825_t);
            r++;
        }
    }
    tbl_Filter_TD_13368_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13368_output #Row: " << tbl_Filter_TD_13368_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13284_key_leftMajor {
    int32_t _ss_cdemo_sk1210;
    bool operator==(const SW_JOIN_INNER_TD_13284_key_leftMajor& other) const {
        return ((_ss_cdemo_sk1210 == other._ss_cdemo_sk1210));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13284_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13284_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_cdemo_sk1210));
    }
};
}
struct SW_JOIN_INNER_TD_13284_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_cdemo_sk1210;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
    int32_t _d_year4773;
    int32_t _d_year4801;
};
struct SW_JOIN_INNER_TD_13284_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_13284_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13284_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13284_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_13284_payload_rightMajor {
    int32_t _cd_demo_sk93;
    std::string _cd_marital_status95;
};
void SW_JOIN_INNER_TD_13284(Table &tbl_JOIN_INNER_TD_14698_output, Table &tbl_Filter_TD_14941_output, Table &tbl_JOIN_INNER_TD_13284_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_cdemo_sk#1210 = cd_demo_sk#93))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801)
    // Right Table: ListBuffer(cd_demo_sk#93, cd_marital_status#95)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801, cd_marital_status#95)
    int left_nrow = tbl_JOIN_INNER_TD_14698_output.getNumRow();
    int right_nrow = tbl_Filter_TD_14941_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13284_key_leftMajor, SW_JOIN_INNER_TD_13284_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_14698_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_cdemo_sk1210_k = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_13284_key_leftMajor keyA{_ss_cdemo_sk1210_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 0);
            int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 2);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 3);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 4);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 5);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 6);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 7);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_14698_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_14698_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 11);
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 12);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 13);
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 14);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 15);
            SW_JOIN_INNER_TD_13284_payload_leftMajor payloadA{_ss_item_sk1208, _ss_cdemo_sk1210, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_cdemo_sk2, _c_current_hdemo_sk3, _c_current_addr_sk4, _d_year4773, _d_year4801};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14941_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_14941_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13284_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_cdemo_sk1210 = (it->second)._ss_cdemo_sk1210;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_14941_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_14941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 3, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 4, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 5, _ss_list_price1218);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 6, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 7, _d_year126);
                tbl_JOIN_INNER_TD_13284_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_name383_n);
                tbl_JOIN_INNER_TD_13284_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_zip403_n);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 10, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 11, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 12, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 13, _d_year4773);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 14, _d_year4801);
                tbl_JOIN_INNER_TD_13284_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _cd_marital_status95_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13284_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13284_key_rightMajor, SW_JOIN_INNER_TD_13284_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_14941_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_14941_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_13284_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_14941_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_14941_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            SW_JOIN_INNER_TD_13284_payload_rightMajor payloadA{_cd_demo_sk93, _cd_marital_status95};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_14698_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_cdemo_sk1210_k = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13284_key_rightMajor{_ss_cdemo_sk1210_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 0);
                int32_t _ss_cdemo_sk1210 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 2);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 3);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 4);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 5);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 6);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 7);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_14698_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_14698_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 11);
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 12);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 13);
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 14);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_14698_output.getInt32(i, 15);
                tbl_JOIN_INNER_TD_13284_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 3, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 4, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 5, _ss_list_price1218);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 6, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 7, _d_year126);
                tbl_JOIN_INNER_TD_13284_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_name383_n);
                tbl_JOIN_INNER_TD_13284_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_zip403_n);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 10, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 11, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 12, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 13, _d_year4773);
                tbl_JOIN_INNER_TD_13284_output.setInt32(r, 14, _d_year4801);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13284_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13284_output #Row: " << tbl_JOIN_INNER_TD_13284_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1217(Table &tbl_SerializeFromObject_TD_13730_input, Table &tbl_Filter_TD_1217_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(p_promo_sk#6208))
    // Input: ListBuffer(p_promo_sk#6208)
    // Output: ListBuffer(p_promo_sk#6208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13730_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_promo_sk6208 = tbl_SerializeFromObject_TD_13730_input.getInt32(i, 0);
        if (_p_promo_sk6208!= 0) {
            int32_t _p_promo_sk6208_t = tbl_SerializeFromObject_TD_13730_input.getInt32(i, 0);
            tbl_Filter_TD_1217_output.setInt32(r, 0, _p_promo_sk6208_t);
            r++;
        }
    }
    tbl_Filter_TD_1217_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1217_output #Row: " << tbl_Filter_TD_1217_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12614_key_leftMajor {
    int32_t _c_current_cdemo_sk6174;
    std::string _cd_marital_status6192;
    bool operator==(const SW_JOIN_INNER_TD_12614_key_leftMajor& other) const {
        return ((_c_current_cdemo_sk6174 == other._c_current_cdemo_sk6174) && (_cd_marital_status6192 == other._cd_marital_status6192));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12614_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12614_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_cdemo_sk6174));
    }
};
}
struct SW_JOIN_INNER_TD_12614_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_cdemo_sk6174;
    int32_t _c_current_hdemo_sk6175;
    int32_t _c_current_addr_sk6176;
    int32_t _d_year6093;
    int32_t _d_year6121;
    std::string _cd_marital_status6192;
};
struct SW_JOIN_INNER_TD_12614_key_rightMajor {
    int32_t _cd_demo_sk6199;
    std::string _cd_marital_status6201;
    bool operator==(const SW_JOIN_INNER_TD_12614_key_rightMajor& other) const {
        return ((_cd_demo_sk6199 == other._cd_demo_sk6199) && (_cd_marital_status6201 == other._cd_marital_status6201));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12614_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12614_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk6199));
    }
};
}
struct SW_JOIN_INNER_TD_12614_payload_rightMajor {
    int32_t _cd_demo_sk6199;
    std::string _cd_marital_status6201;
};
void SW_JOIN_INNER_TD_12614(Table &tbl_JOIN_INNER_TD_13897_output, Table &tbl_Filter_TD_13462_output, Table &tbl_JOIN_INNER_TD_12614_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_current_cdemo_sk#6174 = cd_demo_sk#6199) AND NOT (cd_marital_status#6192 = cd_marital_status#6201)))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_cdemo_sk#6174, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121, cd_marital_status#6192)
    // Right Table: ListBuffer(cd_demo_sk#6199, cd_marital_status#6201)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121)
    int left_nrow = tbl_JOIN_INNER_TD_13897_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13462_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12614_key_leftMajor, SW_JOIN_INNER_TD_12614_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13897_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_cdemo_sk6174_k = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 10);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_k_n = tbl_JOIN_INNER_TD_13897_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _cd_marital_status6192_k = std::string(_cd_marital_status6192_k_n.data());
            SW_JOIN_INNER_TD_12614_key_leftMajor keyA{_c_current_cdemo_sk6174_k, _cd_marital_status6192_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 1);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 2);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 3);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 4);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 5);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 6);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_13897_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_13897_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_cdemo_sk6174 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 10);
            int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 11);
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 12);
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 13);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 14);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_n = tbl_JOIN_INNER_TD_13897_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _cd_marital_status6192 = std::string(_cd_marital_status6192_n.data());
            SW_JOIN_INNER_TD_12614_payload_leftMajor payloadA{_ss_item_sk5957, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_cdemo_sk6174, _c_current_hdemo_sk6175, _c_current_addr_sk6176, _d_year6093, _d_year6121, _cd_marital_status6192};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13462_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk6199_k = tbl_Filter_TD_13462_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6201_k_n = tbl_Filter_TD_13462_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status6201_k = std::string(_cd_marital_status6201_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12614_key_leftMajor{_cd_demo_sk6199_k, _cd_marital_status6201_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_cdemo_sk6174 = (it->second)._c_current_cdemo_sk6174;
                int32_t _c_current_hdemo_sk6175 = (it->second)._c_current_hdemo_sk6175;
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                std::string _cd_marital_status6192 = (it->second)._cd_marital_status6192;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_n{};
                memcpy(_cd_marital_status6192_n.data(), (_cd_marital_status6192).data(), (_cd_marital_status6192).length());
                int32_t _cd_demo_sk6199 = tbl_Filter_TD_13462_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6201_n = tbl_Filter_TD_13462_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_marital_status6201 = std::string(_cd_marital_status6201_n.data());
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 1, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 2, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 3, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 4, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 5, _ss_list_price5967);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 6, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 7, _d_year6065);
                tbl_JOIN_INNER_TD_12614_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_12614_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_zip6168_n);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 10, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 11, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 12, _d_year6093);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 13, _d_year6121);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12614_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12614_key_rightMajor, SW_JOIN_INNER_TD_12614_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13462_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk6199_k = tbl_Filter_TD_13462_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6201_k_n = tbl_Filter_TD_13462_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status6201_k = std::string(_cd_marital_status6201_k_n.data());
            SW_JOIN_INNER_TD_12614_key_rightMajor keyA{_cd_demo_sk6199_k, _cd_marital_status6201_k};
            int32_t _cd_demo_sk6199 = tbl_Filter_TD_13462_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6201_n = tbl_Filter_TD_13462_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status6201 = std::string(_cd_marital_status6201_n.data());
            SW_JOIN_INNER_TD_12614_payload_rightMajor payloadA{_cd_demo_sk6199, _cd_marital_status6201};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13897_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_cdemo_sk6174_k = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 10);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_k_n = tbl_JOIN_INNER_TD_13897_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _cd_marital_status6192_k = std::string(_cd_marital_status6192_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12614_key_rightMajor{_c_current_cdemo_sk6174_k, _cd_marital_status6192_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk6199 = (it->second)._cd_demo_sk6199;
                std::string _cd_marital_status6201 = (it->second)._cd_marital_status6201;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6201_n{};
                memcpy(_cd_marital_status6201_n.data(), (_cd_marital_status6201).data(), (_cd_marital_status6201).length());
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 1);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 2);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 3);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 4);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 5);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 6);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_13897_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_13897_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_cdemo_sk6174 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 10);
                int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 11);
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 12);
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 13);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_13897_output.getInt32(i, 14);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status6192_n = tbl_JOIN_INNER_TD_13897_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _cd_marital_status6192 = std::string(_cd_marital_status6192_n.data());
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 1, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 2, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 3, _ss_promo_sk5963);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 4, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 5, _ss_list_price5967);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 6, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 7, _d_year6065);
                tbl_JOIN_INNER_TD_12614_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_12614_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_zip6168_n);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 10, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 11, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 12, _d_year6093);
                tbl_JOIN_INNER_TD_12614_output.setInt32(r, 13, _d_year6121);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12614_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12614_output #Row: " << tbl_JOIN_INNER_TD_12614_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12587(Table &tbl_SerializeFromObject_TD_13359_input, Table &tbl_Filter_TD_12587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(p_promo_sk#294))
    // Input: ListBuffer(p_promo_sk#294)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13359_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_13359_input.getInt32(i, 0);
        if (_p_promo_sk294!= 0) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_13359_input.getInt32(i, 0);
            tbl_Filter_TD_12587_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_12587_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12587_output #Row: " << tbl_Filter_TD_12587_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_12366_key_leftMajor {
    int32_t _c_current_cdemo_sk2;
    std::string _cd_marital_status95;
    bool operator==(const SW_JOIN_INNER_TD_12366_key_leftMajor& other) const {
        return ((_c_current_cdemo_sk2 == other._c_current_cdemo_sk2) && (_cd_marital_status95 == other._cd_marital_status95));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12366_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12366_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_cdemo_sk2));
    }
};
}
struct SW_JOIN_INNER_TD_12366_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
    int32_t _d_year4773;
    int32_t _d_year4801;
    std::string _cd_marital_status95;
};
struct SW_JOIN_INNER_TD_12366_key_rightMajor {
    int32_t _cd_demo_sk4823;
    std::string _cd_marital_status4825;
    bool operator==(const SW_JOIN_INNER_TD_12366_key_rightMajor& other) const {
        return ((_cd_demo_sk4823 == other._cd_demo_sk4823) && (_cd_marital_status4825 == other._cd_marital_status4825));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12366_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12366_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk4823));
    }
};
}
struct SW_JOIN_INNER_TD_12366_payload_rightMajor {
    int32_t _cd_demo_sk4823;
    std::string _cd_marital_status4825;
};
void SW_JOIN_INNER_TD_12366(Table &tbl_JOIN_INNER_TD_13284_output, Table &tbl_Filter_TD_13368_output, Table &tbl_JOIN_INNER_TD_12366_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_current_cdemo_sk#2 = cd_demo_sk#4823) AND NOT (cd_marital_status#95 = cd_marital_status#4825)))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801, cd_marital_status#95)
    // Right Table: ListBuffer(cd_demo_sk#4823, cd_marital_status#4825)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801)
    int left_nrow = tbl_JOIN_INNER_TD_13284_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13368_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12366_key_leftMajor, SW_JOIN_INNER_TD_12366_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13284_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 10);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_k_n = tbl_JOIN_INNER_TD_13284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _cd_marital_status95_k = std::string(_cd_marital_status95_k_n.data());
            SW_JOIN_INNER_TD_12366_key_leftMajor keyA{_c_current_cdemo_sk2_k, _cd_marital_status95_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 2);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 3);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 4);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 5);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 6);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_13284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_13284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 10);
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 11);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 12);
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 13);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 14);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_JOIN_INNER_TD_13284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            SW_JOIN_INNER_TD_12366_payload_leftMajor payloadA{_ss_item_sk1208, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_cdemo_sk2, _c_current_hdemo_sk3, _c_current_addr_sk4, _d_year4773, _d_year4801, _cd_marital_status95};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13368_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk4823_k = tbl_Filter_TD_13368_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status4825_k_n = tbl_Filter_TD_13368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status4825_k = std::string(_cd_marital_status4825_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12366_key_leftMajor{_cd_demo_sk4823_k, _cd_marital_status4825_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                int32_t _cd_demo_sk4823 = tbl_Filter_TD_13368_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status4825_n = tbl_Filter_TD_13368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_marital_status4825 = std::string(_cd_marital_status4825_n.data());
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 3, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 4, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 5, _ss_list_price1218);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 6, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 7, _d_year126);
                tbl_JOIN_INNER_TD_12366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_name383_n);
                tbl_JOIN_INNER_TD_12366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_zip403_n);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 10, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 11, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 12, _d_year4773);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 13, _d_year4801);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12366_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12366_key_rightMajor, SW_JOIN_INNER_TD_12366_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13368_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk4823_k = tbl_Filter_TD_13368_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status4825_k_n = tbl_Filter_TD_13368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status4825_k = std::string(_cd_marital_status4825_k_n.data());
            SW_JOIN_INNER_TD_12366_key_rightMajor keyA{_cd_demo_sk4823_k, _cd_marital_status4825_k};
            int32_t _cd_demo_sk4823 = tbl_Filter_TD_13368_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status4825_n = tbl_Filter_TD_13368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status4825 = std::string(_cd_marital_status4825_n.data());
            SW_JOIN_INNER_TD_12366_payload_rightMajor payloadA{_cd_demo_sk4823, _cd_marital_status4825};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13284_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 10);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_k_n = tbl_JOIN_INNER_TD_13284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _cd_marital_status95_k = std::string(_cd_marital_status95_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12366_key_rightMajor{_c_current_cdemo_sk2_k, _cd_marital_status95_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk4823 = (it->second)._cd_demo_sk4823;
                std::string _cd_marital_status4825 = (it->second)._cd_marital_status4825;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status4825_n{};
                memcpy(_cd_marital_status4825_n.data(), (_cd_marital_status4825).data(), (_cd_marital_status4825).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 2);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 3);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 4);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 5);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 6);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_13284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_13284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 10);
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 11);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 12);
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 13);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_13284_output.getInt32(i, 14);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_JOIN_INNER_TD_13284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 3, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 4, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 5, _ss_list_price1218);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 6, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 7, _d_year126);
                tbl_JOIN_INNER_TD_12366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_store_name383_n);
                tbl_JOIN_INNER_TD_12366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _s_zip403_n);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 10, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 11, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 12, _d_year4773);
                tbl_JOIN_INNER_TD_12366_output.setInt32(r, 13, _d_year4801);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12366_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12366_output #Row: " << tbl_JOIN_INNER_TD_12366_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11841(Table &tbl_SerializeFromObject_TD_12137_input, Table &tbl_Filter_TD_11841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(hd_demo_sk#6227) AND isnotnull(hd_income_band_sk#6228)))
    // Input: ListBuffer(hd_demo_sk#6227, hd_income_band_sk#6228)
    // Output: ListBuffer(hd_demo_sk#6227, hd_income_band_sk#6228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12137_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_demo_sk6227 = tbl_SerializeFromObject_TD_12137_input.getInt32(i, 0);
        int32_t _hd_income_band_sk6228 = tbl_SerializeFromObject_TD_12137_input.getInt32(i, 1);
        if ((_hd_demo_sk6227!= 0) && (_hd_income_band_sk6228!= 0)) {
            int32_t _hd_demo_sk6227_t = tbl_SerializeFromObject_TD_12137_input.getInt32(i, 0);
            tbl_Filter_TD_11841_output.setInt32(r, 0, _hd_demo_sk6227_t);
            int32_t _hd_income_band_sk6228_t = tbl_SerializeFromObject_TD_12137_input.getInt32(i, 1);
            tbl_Filter_TD_11841_output.setInt32(r, 1, _hd_income_band_sk6228_t);
            r++;
        }
    }
    tbl_Filter_TD_11841_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11841_output #Row: " << tbl_Filter_TD_11841_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1133_key_leftMajor {
    int32_t _ss_promo_sk5963;
    bool operator==(const SW_JOIN_INNER_TD_1133_key_leftMajor& other) const {
        return ((_ss_promo_sk5963 == other._ss_promo_sk5963));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1133_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1133_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_promo_sk5963));
    }
};
}
struct SW_JOIN_INNER_TD_1133_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_promo_sk5963;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_hdemo_sk6175;
    int32_t _c_current_addr_sk6176;
    int32_t _d_year6093;
    int32_t _d_year6121;
};
struct SW_JOIN_INNER_TD_1133_key_rightMajor {
    int32_t _p_promo_sk6208;
    bool operator==(const SW_JOIN_INNER_TD_1133_key_rightMajor& other) const {
        return ((_p_promo_sk6208 == other._p_promo_sk6208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1133_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1133_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk6208));
    }
};
}
struct SW_JOIN_INNER_TD_1133_payload_rightMajor {
    int32_t _p_promo_sk6208;
};
void SW_JOIN_INNER_TD_1133(Table &tbl_JOIN_INNER_TD_12614_output, Table &tbl_Filter_TD_1217_output, Table &tbl_JOIN_INNER_TD_1133_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_promo_sk#5963 = p_promo_sk#6208))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_promo_sk#5963, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121)
    // Right Table: ListBuffer(p_promo_sk#6208)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121)
    int left_nrow = tbl_JOIN_INNER_TD_12614_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1217_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1133_key_leftMajor, SW_JOIN_INNER_TD_1133_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12614_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_promo_sk5963_k = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1133_key_leftMajor keyA{_ss_promo_sk5963_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 1);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 2);
            int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 3);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 4);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 5);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 6);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_12614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_12614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 10);
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 11);
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 12);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 13);
            SW_JOIN_INNER_TD_1133_payload_leftMajor payloadA{_ss_item_sk5957, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_promo_sk5963, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_hdemo_sk6175, _c_current_addr_sk6176, _d_year6093, _d_year6121};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1217_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk6208_k = tbl_Filter_TD_1217_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1133_key_leftMajor{_p_promo_sk6208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_promo_sk5963 = (it->second)._ss_promo_sk5963;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_hdemo_sk6175 = (it->second)._c_current_hdemo_sk6175;
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _p_promo_sk6208 = tbl_Filter_TD_1217_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 1, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 2, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 3, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 4, _ss_list_price5967);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 5, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 6, _d_year6065);
                tbl_JOIN_INNER_TD_1133_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_1133_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_zip6168_n);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 9, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 10, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 11, _d_year6093);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 12, _d_year6121);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1133_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1133_key_rightMajor, SW_JOIN_INNER_TD_1133_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1217_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk6208_k = tbl_Filter_TD_1217_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1133_key_rightMajor keyA{_p_promo_sk6208_k};
            int32_t _p_promo_sk6208 = tbl_Filter_TD_1217_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1133_payload_rightMajor payloadA{_p_promo_sk6208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12614_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_promo_sk5963_k = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1133_key_rightMajor{_ss_promo_sk5963_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk6208 = (it->second)._p_promo_sk6208;
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 1);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 2);
                int32_t _ss_promo_sk5963 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 3);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 4);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 5);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 6);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_12614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_12614_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 10);
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 11);
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 12);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_12614_output.getInt32(i, 13);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 1, _ss_hdemo_sk5960);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 2, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 3, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 4, _ss_list_price5967);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 5, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 6, _d_year6065);
                tbl_JOIN_INNER_TD_1133_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_1133_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_zip6168_n);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 9, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 10, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 11, _d_year6093);
                tbl_JOIN_INNER_TD_1133_output.setInt32(r, 12, _d_year6121);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1133_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1133_output #Row: " << tbl_JOIN_INNER_TD_1133_output.getNumRow() << std::endl;
}

void SW_Filter_TD_115(Table &tbl_SerializeFromObject_TD_12279_input, Table &tbl_Filter_TD_115_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(hd_demo_sk#204) AND isnotnull(hd_income_band_sk#205)))
    // Input: ListBuffer(hd_demo_sk#204, hd_income_band_sk#205)
    // Output: ListBuffer(hd_demo_sk#204, hd_income_band_sk#205)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12279_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_12279_input.getInt32(i, 0);
        int32_t _hd_income_band_sk205 = tbl_SerializeFromObject_TD_12279_input.getInt32(i, 1);
        if ((_hd_demo_sk204!= 0) && (_hd_income_band_sk205!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_12279_input.getInt32(i, 0);
            tbl_Filter_TD_115_output.setInt32(r, 0, _hd_demo_sk204_t);
            int32_t _hd_income_band_sk205_t = tbl_SerializeFromObject_TD_12279_input.getInt32(i, 1);
            tbl_Filter_TD_115_output.setInt32(r, 1, _hd_income_band_sk205_t);
            r++;
        }
    }
    tbl_Filter_TD_115_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_115_output #Row: " << tbl_Filter_TD_115_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11819_key_leftMajor {
    int32_t _ss_promo_sk1214;
    bool operator==(const SW_JOIN_INNER_TD_11819_key_leftMajor& other) const {
        return ((_ss_promo_sk1214 == other._ss_promo_sk1214));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11819_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11819_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_promo_sk1214));
    }
};
}
struct SW_JOIN_INNER_TD_11819_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_promo_sk1214;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
    int32_t _d_year4773;
    int32_t _d_year4801;
};
struct SW_JOIN_INNER_TD_11819_key_rightMajor {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_INNER_TD_11819_key_rightMajor& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11819_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11819_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_INNER_TD_11819_payload_rightMajor {
    int32_t _p_promo_sk294;
};
void SW_JOIN_INNER_TD_11819(Table &tbl_JOIN_INNER_TD_12366_output, Table &tbl_Filter_TD_12587_output, Table &tbl_JOIN_INNER_TD_11819_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_promo_sk#1214 = p_promo_sk#294))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_promo_sk#1214, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801)
    int left_nrow = tbl_JOIN_INNER_TD_12366_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12587_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11819_key_leftMajor, SW_JOIN_INNER_TD_11819_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_12366_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_11819_key_leftMajor keyA{_ss_promo_sk1214_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 2);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 3);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 4);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 5);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 6);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_12366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_12366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 10);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 11);
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 12);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 13);
            SW_JOIN_INNER_TD_11819_payload_leftMajor payloadA{_ss_item_sk1208, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_promo_sk1214, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_hdemo_sk3, _c_current_addr_sk4, _d_year4773, _d_year4801};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12587_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_12587_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11819_key_leftMajor{_p_promo_sk294_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _p_promo_sk294 = tbl_Filter_TD_12587_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 3, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 4, _ss_list_price1218);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 5, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 6, _d_year126);
                tbl_JOIN_INNER_TD_11819_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_store_name383_n);
                tbl_JOIN_INNER_TD_11819_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_zip403_n);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 9, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 10, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 11, _d_year4773);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 12, _d_year4801);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11819_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11819_key_rightMajor, SW_JOIN_INNER_TD_11819_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12587_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_12587_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11819_key_rightMajor keyA{_p_promo_sk294_k};
            int32_t _p_promo_sk294 = tbl_Filter_TD_12587_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11819_payload_rightMajor payloadA{_p_promo_sk294};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_12366_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11819_key_rightMajor{_ss_promo_sk1214_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk294 = (it->second)._p_promo_sk294;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 2);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 3);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 4);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 5);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 6);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_12366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_12366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 10);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 11);
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 12);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_12366_output.getInt32(i, 13);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 3, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 4, _ss_list_price1218);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 5, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 6, _d_year126);
                tbl_JOIN_INNER_TD_11819_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_store_name383_n);
                tbl_JOIN_INNER_TD_11819_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _s_zip403_n);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 9, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 10, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 11, _d_year4773);
                tbl_JOIN_INNER_TD_11819_output.setInt32(r, 12, _d_year4801);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11819_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11819_output #Row: " << tbl_JOIN_INNER_TD_11819_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10610(Table &tbl_SerializeFromObject_TD_11795_input, Table &tbl_Filter_TD_10610_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(hd_demo_sk#6232) AND isnotnull(hd_income_band_sk#6233)))
    // Input: ListBuffer(hd_demo_sk#6232, hd_income_band_sk#6233)
    // Output: ListBuffer(hd_demo_sk#6232, hd_income_band_sk#6233)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11795_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_demo_sk6232 = tbl_SerializeFromObject_TD_11795_input.getInt32(i, 0);
        int32_t _hd_income_band_sk6233 = tbl_SerializeFromObject_TD_11795_input.getInt32(i, 1);
        if ((_hd_demo_sk6232!= 0) && (_hd_income_band_sk6233!= 0)) {
            int32_t _hd_demo_sk6232_t = tbl_SerializeFromObject_TD_11795_input.getInt32(i, 0);
            tbl_Filter_TD_10610_output.setInt32(r, 0, _hd_demo_sk6232_t);
            int32_t _hd_income_band_sk6233_t = tbl_SerializeFromObject_TD_11795_input.getInt32(i, 1);
            tbl_Filter_TD_10610_output.setInt32(r, 1, _hd_income_band_sk6233_t);
            r++;
        }
    }
    tbl_Filter_TD_10610_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10610_output #Row: " << tbl_Filter_TD_10610_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10170_key_leftMajor {
    int32_t _ss_hdemo_sk5960;
    bool operator==(const SW_JOIN_INNER_TD_10170_key_leftMajor& other) const {
        return ((_ss_hdemo_sk5960 == other._ss_hdemo_sk5960));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10170_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10170_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk5960));
    }
};
}
struct SW_JOIN_INNER_TD_10170_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_hdemo_sk5960;
    int32_t _ss_addr_sk5961;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_hdemo_sk6175;
    int32_t _c_current_addr_sk6176;
    int32_t _d_year6093;
    int32_t _d_year6121;
};
struct SW_JOIN_INNER_TD_10170_key_rightMajor {
    int32_t _hd_demo_sk6227;
    bool operator==(const SW_JOIN_INNER_TD_10170_key_rightMajor& other) const {
        return ((_hd_demo_sk6227 == other._hd_demo_sk6227));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10170_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10170_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk6227));
    }
};
}
struct SW_JOIN_INNER_TD_10170_payload_rightMajor {
    int32_t _hd_demo_sk6227;
    int32_t _hd_income_band_sk6228;
};
void SW_JOIN_INNER_TD_10170(Table &tbl_JOIN_INNER_TD_1133_output, Table &tbl_Filter_TD_11841_output, Table &tbl_JOIN_INNER_TD_10170_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#5960 = hd_demo_sk#6227))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_hdemo_sk#5960, ss_addr_sk#5961, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121)
    // Right Table: ListBuffer(hd_demo_sk#6227, hd_income_band_sk#6228)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_addr_sk#5961, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121, hd_income_band_sk#6228)
    int left_nrow = tbl_JOIN_INNER_TD_1133_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11841_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10170_key_leftMajor, SW_JOIN_INNER_TD_10170_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1133_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk5960_k = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10170_key_leftMajor keyA{_ss_hdemo_sk5960_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 1);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 2);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 3);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 4);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 5);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 6);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_1133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_1133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 9);
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 10);
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 11);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 12);
            SW_JOIN_INNER_TD_10170_payload_leftMajor payloadA{_ss_item_sk5957, _ss_hdemo_sk5960, _ss_addr_sk5961, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_hdemo_sk6175, _c_current_addr_sk6176, _d_year6093, _d_year6121};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11841_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk6227_k = tbl_Filter_TD_11841_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10170_key_leftMajor{_hd_demo_sk6227_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_hdemo_sk5960 = (it->second)._ss_hdemo_sk5960;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_hdemo_sk6175 = (it->second)._c_current_hdemo_sk6175;
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _hd_demo_sk6227 = tbl_Filter_TD_11841_output.getInt32(i, 0);
                int32_t _hd_income_band_sk6228 = tbl_Filter_TD_11841_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 1, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 2, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 3, _ss_list_price5967);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 4, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 5, _d_year6065);
                tbl_JOIN_INNER_TD_10170_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_10170_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip6168_n);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 8, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 9, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 10, _d_year6093);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 11, _d_year6121);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 12, _hd_income_band_sk6228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10170_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10170_key_rightMajor, SW_JOIN_INNER_TD_10170_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11841_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk6227_k = tbl_Filter_TD_11841_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10170_key_rightMajor keyA{_hd_demo_sk6227_k};
            int32_t _hd_demo_sk6227 = tbl_Filter_TD_11841_output.getInt32(i, 0);
            int32_t _hd_income_band_sk6228 = tbl_Filter_TD_11841_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10170_payload_rightMajor payloadA{_hd_demo_sk6227, _hd_income_band_sk6228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1133_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk5960_k = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10170_key_rightMajor{_ss_hdemo_sk5960_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk6227 = (it->second)._hd_demo_sk6227;
                int32_t _hd_income_band_sk6228 = (it->second)._hd_income_band_sk6228;
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk5960 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 1);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 2);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 3);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 4);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 5);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 6);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_1133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_1133_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 9);
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 10);
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 11);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_1133_output.getInt32(i, 12);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 12, _hd_income_band_sk6228);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 1, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 2, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 3, _ss_list_price5967);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 4, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 5, _d_year6065);
                tbl_JOIN_INNER_TD_10170_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_10170_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip6168_n);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 8, _c_current_hdemo_sk6175);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 9, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 10, _d_year6093);
                tbl_JOIN_INNER_TD_10170_output.setInt32(r, 11, _d_year6121);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10170_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10170_output #Row: " << tbl_JOIN_INNER_TD_10170_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10925(Table &tbl_SerializeFromObject_TD_1192_input, Table &tbl_Filter_TD_10925_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(hd_demo_sk#4832) AND isnotnull(hd_income_band_sk#4833)))
    // Input: ListBuffer(hd_demo_sk#4832, hd_income_band_sk#4833)
    // Output: ListBuffer(hd_demo_sk#4832, hd_income_band_sk#4833)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1192_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_demo_sk4832 = tbl_SerializeFromObject_TD_1192_input.getInt32(i, 0);
        int32_t _hd_income_band_sk4833 = tbl_SerializeFromObject_TD_1192_input.getInt32(i, 1);
        if ((_hd_demo_sk4832!= 0) && (_hd_income_band_sk4833!= 0)) {
            int32_t _hd_demo_sk4832_t = tbl_SerializeFromObject_TD_1192_input.getInt32(i, 0);
            tbl_Filter_TD_10925_output.setInt32(r, 0, _hd_demo_sk4832_t);
            int32_t _hd_income_band_sk4833_t = tbl_SerializeFromObject_TD_1192_input.getInt32(i, 1);
            tbl_Filter_TD_10925_output.setInt32(r, 1, _hd_income_band_sk4833_t);
            r++;
        }
    }
    tbl_Filter_TD_10925_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10925_output #Row: " << tbl_Filter_TD_10925_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10624_key_leftMajor {
    int32_t _ss_hdemo_sk1211;
    bool operator==(const SW_JOIN_INNER_TD_10624_key_leftMajor& other) const {
        return ((_ss_hdemo_sk1211 == other._ss_hdemo_sk1211));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10624_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10624_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk1211));
    }
};
}
struct SW_JOIN_INNER_TD_10624_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
    int32_t _d_year4773;
    int32_t _d_year4801;
};
struct SW_JOIN_INNER_TD_10624_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_10624_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10624_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10624_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_10624_payload_rightMajor {
    int32_t _hd_demo_sk204;
    int32_t _hd_income_band_sk205;
};
void SW_JOIN_INNER_TD_10624(Table &tbl_JOIN_INNER_TD_11819_output, Table &tbl_Filter_TD_115_output, Table &tbl_JOIN_INNER_TD_10624_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#1211 = hd_demo_sk#204))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801)
    // Right Table: ListBuffer(hd_demo_sk#204, hd_income_band_sk#205)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801, hd_income_band_sk#205)
    int left_nrow = tbl_JOIN_INNER_TD_11819_output.getNumRow();
    int right_nrow = tbl_Filter_TD_115_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10624_key_leftMajor, SW_JOIN_INNER_TD_10624_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11819_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10624_key_leftMajor keyA{_ss_hdemo_sk1211_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 2);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 3);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 4);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 5);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 6);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_11819_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_11819_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 9);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 10);
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 11);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 12);
            SW_JOIN_INNER_TD_10624_payload_leftMajor payloadA{_ss_item_sk1208, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_hdemo_sk3, _c_current_addr_sk4, _d_year4773, _d_year4801};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_115_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_115_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10624_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _hd_demo_sk204 = tbl_Filter_TD_115_output.getInt32(i, 0);
                int32_t _hd_income_band_sk205 = tbl_Filter_TD_115_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 2, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 3, _ss_list_price1218);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 5, _d_year126);
                tbl_JOIN_INNER_TD_10624_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name383_n);
                tbl_JOIN_INNER_TD_10624_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip403_n);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 8, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 9, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 10, _d_year4773);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 11, _d_year4801);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 12, _hd_income_band_sk205);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10624_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10624_key_rightMajor, SW_JOIN_INNER_TD_10624_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_115_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_115_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10624_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_115_output.getInt32(i, 0);
            int32_t _hd_income_band_sk205 = tbl_Filter_TD_115_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10624_payload_rightMajor payloadA{_hd_demo_sk204, _hd_income_band_sk205};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11819_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10624_key_rightMajor{_ss_hdemo_sk1211_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _hd_income_band_sk205 = (it->second)._hd_income_band_sk205;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 2);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 3);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 4);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 5);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 6);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_11819_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_11819_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 9);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 10);
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 11);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_11819_output.getInt32(i, 12);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 12, _hd_income_band_sk205);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 2, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 3, _ss_list_price1218);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 5, _d_year126);
                tbl_JOIN_INNER_TD_10624_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name383_n);
                tbl_JOIN_INNER_TD_10624_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip403_n);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 8, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 9, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 10, _d_year4773);
                tbl_JOIN_INNER_TD_10624_output.setInt32(r, 11, _d_year4801);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10624_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10624_output #Row: " << tbl_JOIN_INNER_TD_10624_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9827(Table &tbl_SerializeFromObject_TD_10401_input, Table &tbl_Filter_TD_9827_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#6237))
    // Input: ListBuffer(ca_address_sk#6237, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246)
    // Output: ListBuffer(ca_address_sk#6237, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10401_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk6237 = tbl_SerializeFromObject_TD_10401_input.getInt32(i, 0);
        if (_ca_address_sk6237!= 0) {
            int32_t _ca_address_sk6237_t = tbl_SerializeFromObject_TD_10401_input.getInt32(i, 0);
            tbl_Filter_TD_9827_output.setInt32(r, 0, _ca_address_sk6237_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_t = tbl_SerializeFromObject_TD_10401_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9827_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_street_number6239_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_t = tbl_SerializeFromObject_TD_10401_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9827_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_street_name6240_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_t = tbl_SerializeFromObject_TD_10401_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_9827_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_city6243_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_t = tbl_SerializeFromObject_TD_10401_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_9827_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_zip6246_t);
            r++;
        }
    }
    tbl_Filter_TD_9827_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9827_output #Row: " << tbl_Filter_TD_9827_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_939_key_leftMajor {
    int32_t _c_current_hdemo_sk6175;
    bool operator==(const SW_JOIN_INNER_TD_939_key_leftMajor& other) const {
        return ((_c_current_hdemo_sk6175 == other._c_current_hdemo_sk6175));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_939_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_939_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_hdemo_sk6175));
    }
};
}
struct SW_JOIN_INNER_TD_939_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_addr_sk5961;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_hdemo_sk6175;
    int32_t _c_current_addr_sk6176;
    int32_t _d_year6093;
    int32_t _d_year6121;
    int32_t _hd_income_band_sk6228;
};
struct SW_JOIN_INNER_TD_939_key_rightMajor {
    int32_t _hd_demo_sk6232;
    bool operator==(const SW_JOIN_INNER_TD_939_key_rightMajor& other) const {
        return ((_hd_demo_sk6232 == other._hd_demo_sk6232));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_939_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_939_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk6232));
    }
};
}
struct SW_JOIN_INNER_TD_939_payload_rightMajor {
    int32_t _hd_demo_sk6232;
    int32_t _hd_income_band_sk6233;
};
void SW_JOIN_INNER_TD_939(Table &tbl_JOIN_INNER_TD_10170_output, Table &tbl_Filter_TD_10610_output, Table &tbl_JOIN_INNER_TD_939_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_hdemo_sk#6175 = hd_demo_sk#6232))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_addr_sk#5961, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_hdemo_sk#6175, c_current_addr_sk#6176, d_year#6093, d_year#6121, hd_income_band_sk#6228)
    // Right Table: ListBuffer(hd_demo_sk#6232, hd_income_band_sk#6233)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_addr_sk#5961, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_addr_sk#6176, d_year#6093, d_year#6121, hd_income_band_sk#6228, hd_income_band_sk#6233)
    int left_nrow = tbl_JOIN_INNER_TD_10170_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10610_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_939_key_leftMajor, SW_JOIN_INNER_TD_939_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10170_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_hdemo_sk6175_k = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_939_key_leftMajor keyA{_c_current_hdemo_sk6175_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 0);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 1);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 2);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 3);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 4);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_10170_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_10170_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 8);
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 9);
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 10);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 11);
            int32_t _hd_income_band_sk6228 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 12);
            SW_JOIN_INNER_TD_939_payload_leftMajor payloadA{_ss_item_sk5957, _ss_addr_sk5961, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_hdemo_sk6175, _c_current_addr_sk6176, _d_year6093, _d_year6121, _hd_income_band_sk6228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10610_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk6232_k = tbl_Filter_TD_10610_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_939_key_leftMajor{_hd_demo_sk6232_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_hdemo_sk6175 = (it->second)._c_current_hdemo_sk6175;
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _hd_income_band_sk6228 = (it->second)._hd_income_band_sk6228;
                int32_t _hd_demo_sk6232 = tbl_Filter_TD_10610_output.getInt32(i, 0);
                int32_t _hd_income_band_sk6233 = tbl_Filter_TD_10610_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 1, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 2, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 3, _ss_list_price5967);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 4, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 5, _d_year6065);
                tbl_JOIN_INNER_TD_939_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_939_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip6168_n);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 8, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 9, _d_year6093);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 10, _d_year6121);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 11, _hd_income_band_sk6228);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 12, _hd_income_band_sk6233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_939_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_939_key_rightMajor, SW_JOIN_INNER_TD_939_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10610_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk6232_k = tbl_Filter_TD_10610_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_939_key_rightMajor keyA{_hd_demo_sk6232_k};
            int32_t _hd_demo_sk6232 = tbl_Filter_TD_10610_output.getInt32(i, 0);
            int32_t _hd_income_band_sk6233 = tbl_Filter_TD_10610_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_939_payload_rightMajor payloadA{_hd_demo_sk6232, _hd_income_band_sk6233};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10170_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_hdemo_sk6175_k = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_939_key_rightMajor{_c_current_hdemo_sk6175_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk6232 = (it->second)._hd_demo_sk6232;
                int32_t _hd_income_band_sk6233 = (it->second)._hd_income_band_sk6233;
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 0);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 1);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 2);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 3);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 4);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_10170_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_10170_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_hdemo_sk6175 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 8);
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 9);
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 10);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 11);
                int32_t _hd_income_band_sk6228 = tbl_JOIN_INNER_TD_10170_output.getInt32(i, 12);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 12, _hd_income_band_sk6233);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 1, _ss_addr_sk5961);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 2, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 3, _ss_list_price5967);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 4, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 5, _d_year6065);
                tbl_JOIN_INNER_TD_939_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_939_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip6168_n);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 8, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 9, _d_year6093);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 10, _d_year6121);
                tbl_JOIN_INNER_TD_939_output.setInt32(r, 11, _hd_income_band_sk6228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_939_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_939_output #Row: " << tbl_JOIN_INNER_TD_939_output.getNumRow() << std::endl;
}

void SW_Filter_TD_958(Table &tbl_SerializeFromObject_TD_10144_input, Table &tbl_Filter_TD_958_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#54))
    // Input: ListBuffer(ca_address_sk#54, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63)
    // Output: ListBuffer(ca_address_sk#54, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10144_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_10144_input.getInt32(i, 0);
        if (_ca_address_sk54!= 0) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_10144_input.getInt32(i, 0);
            tbl_Filter_TD_958_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_t = tbl_SerializeFromObject_TD_10144_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_958_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_street_number56_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_t = tbl_SerializeFromObject_TD_10144_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_958_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_street_name57_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_t = tbl_SerializeFromObject_TD_10144_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_958_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_city60_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_t = tbl_SerializeFromObject_TD_10144_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_958_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_zip63_t);
            r++;
        }
    }
    tbl_Filter_TD_958_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_958_output #Row: " << tbl_Filter_TD_958_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9130_key_leftMajor {
    int32_t _c_current_hdemo_sk3;
    bool operator==(const SW_JOIN_INNER_TD_9130_key_leftMajor& other) const {
        return ((_c_current_hdemo_sk3 == other._c_current_hdemo_sk3));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9130_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9130_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_hdemo_sk3));
    }
};
}
struct SW_JOIN_INNER_TD_9130_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_addr_sk1212;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
    int32_t _d_year4773;
    int32_t _d_year4801;
    int32_t _hd_income_band_sk205;
};
struct SW_JOIN_INNER_TD_9130_key_rightMajor {
    int32_t _hd_demo_sk4832;
    bool operator==(const SW_JOIN_INNER_TD_9130_key_rightMajor& other) const {
        return ((_hd_demo_sk4832 == other._hd_demo_sk4832));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9130_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9130_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk4832));
    }
};
}
struct SW_JOIN_INNER_TD_9130_payload_rightMajor {
    int32_t _hd_demo_sk4832;
    int32_t _hd_income_band_sk4833;
};
void SW_JOIN_INNER_TD_9130(Table &tbl_JOIN_INNER_TD_10624_output, Table &tbl_Filter_TD_10925_output, Table &tbl_JOIN_INNER_TD_9130_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_hdemo_sk#3 = hd_demo_sk#4832))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_hdemo_sk#3, c_current_addr_sk#4, d_year#4773, d_year#4801, hd_income_band_sk#205)
    // Right Table: ListBuffer(hd_demo_sk#4832, hd_income_band_sk#4833)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_addr_sk#4, d_year#4773, d_year#4801, hd_income_band_sk#205, hd_income_band_sk#4833)
    int left_nrow = tbl_JOIN_INNER_TD_10624_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10925_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9130_key_leftMajor, SW_JOIN_INNER_TD_9130_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10624_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_hdemo_sk3_k = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_9130_key_leftMajor keyA{_c_current_hdemo_sk3_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 0);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 1);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 2);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 3);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 4);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_10624_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_10624_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 8);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 9);
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 10);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 11);
            int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 12);
            SW_JOIN_INNER_TD_9130_payload_leftMajor payloadA{_ss_item_sk1208, _ss_addr_sk1212, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_hdemo_sk3, _c_current_addr_sk4, _d_year4773, _d_year4801, _hd_income_band_sk205};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10925_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk4832_k = tbl_Filter_TD_10925_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9130_key_leftMajor{_hd_demo_sk4832_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _hd_income_band_sk205 = (it->second)._hd_income_band_sk205;
                int32_t _hd_demo_sk4832 = tbl_Filter_TD_10925_output.getInt32(i, 0);
                int32_t _hd_income_band_sk4833 = tbl_Filter_TD_10925_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 2, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 3, _ss_list_price1218);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 5, _d_year126);
                tbl_JOIN_INNER_TD_9130_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name383_n);
                tbl_JOIN_INNER_TD_9130_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip403_n);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 8, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 9, _d_year4773);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 10, _d_year4801);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 11, _hd_income_band_sk205);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 12, _hd_income_band_sk4833);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9130_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9130_key_rightMajor, SW_JOIN_INNER_TD_9130_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10925_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk4832_k = tbl_Filter_TD_10925_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9130_key_rightMajor keyA{_hd_demo_sk4832_k};
            int32_t _hd_demo_sk4832 = tbl_Filter_TD_10925_output.getInt32(i, 0);
            int32_t _hd_income_band_sk4833 = tbl_Filter_TD_10925_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9130_payload_rightMajor payloadA{_hd_demo_sk4832, _hd_income_band_sk4833};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10624_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_hdemo_sk3_k = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 8);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9130_key_rightMajor{_c_current_hdemo_sk3_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk4832 = (it->second)._hd_demo_sk4832;
                int32_t _hd_income_band_sk4833 = (it->second)._hd_income_band_sk4833;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 0);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 1);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 2);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 3);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 4);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_10624_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_10624_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 8);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 9);
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 10);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 11);
                int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_10624_output.getInt32(i, 12);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 12, _hd_income_band_sk4833);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 2, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 3, _ss_list_price1218);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 4, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 5, _d_year126);
                tbl_JOIN_INNER_TD_9130_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name383_n);
                tbl_JOIN_INNER_TD_9130_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip403_n);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 8, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 9, _d_year4773);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 10, _d_year4801);
                tbl_JOIN_INNER_TD_9130_output.setInt32(r, 11, _hd_income_band_sk205);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9130_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9130_output #Row: " << tbl_JOIN_INNER_TD_9130_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8500(Table &tbl_SerializeFromObject_TD_9196_input, Table &tbl_Filter_TD_8500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#6250))
    // Input: ListBuffer(ca_address_sk#6250, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    // Output: ListBuffer(ca_address_sk#6250, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9196_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk6250 = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 0);
        if (_ca_address_sk6250!= 0) {
            int32_t _ca_address_sk6250_t = tbl_SerializeFromObject_TD_9196_input.getInt32(i, 0);
            tbl_Filter_TD_8500_output.setInt32(r, 0, _ca_address_sk6250_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_t = tbl_SerializeFromObject_TD_9196_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_street_number6252_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_t = tbl_SerializeFromObject_TD_9196_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_street_name6253_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_t = tbl_SerializeFromObject_TD_9196_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_8500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_city6256_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_t = tbl_SerializeFromObject_TD_9196_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_8500_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_zip6259_t);
            r++;
        }
    }
    tbl_Filter_TD_8500_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8500_output #Row: " << tbl_Filter_TD_8500_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8928_key_leftMajor {
    int32_t _ss_addr_sk5961;
    bool operator==(const SW_JOIN_INNER_TD_8928_key_leftMajor& other) const {
        return ((_ss_addr_sk5961 == other._ss_addr_sk5961));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8928_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8928_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk5961));
    }
};
}
struct SW_JOIN_INNER_TD_8928_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_addr_sk5961;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_addr_sk6176;
    int32_t _d_year6093;
    int32_t _d_year6121;
    int32_t _hd_income_band_sk6228;
    int32_t _hd_income_band_sk6233;
};
struct SW_JOIN_INNER_TD_8928_key_rightMajor {
    int32_t _ca_address_sk6237;
    bool operator==(const SW_JOIN_INNER_TD_8928_key_rightMajor& other) const {
        return ((_ca_address_sk6237 == other._ca_address_sk6237));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8928_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8928_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk6237));
    }
};
}
struct SW_JOIN_INNER_TD_8928_payload_rightMajor {
    int32_t _ca_address_sk6237;
    std::string _ca_street_number6239;
    std::string _ca_street_name6240;
    std::string _ca_city6243;
    std::string _ca_zip6246;
};
void SW_JOIN_INNER_TD_8928(Table &tbl_JOIN_INNER_TD_939_output, Table &tbl_Filter_TD_9827_output, Table &tbl_JOIN_INNER_TD_8928_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#5961 = ca_address_sk#6237))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_addr_sk#5961, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_addr_sk#6176, d_year#6093, d_year#6121, hd_income_band_sk#6228, hd_income_band_sk#6233)
    // Right Table: ListBuffer(ca_address_sk#6237, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_addr_sk#6176, d_year#6093, d_year#6121, hd_income_band_sk#6228, hd_income_band_sk#6233, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246)
    int left_nrow = tbl_JOIN_INNER_TD_939_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9827_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8928_key_leftMajor, SW_JOIN_INNER_TD_8928_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_939_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk5961_k = tbl_JOIN_INNER_TD_939_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8928_key_leftMajor keyA{_ss_addr_sk5961_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 0);
            int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 1);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 2);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 3);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 4);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 8);
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 9);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 10);
            int32_t _hd_income_band_sk6228 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 11);
            int32_t _hd_income_band_sk6233 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 12);
            SW_JOIN_INNER_TD_8928_payload_leftMajor payloadA{_ss_item_sk5957, _ss_addr_sk5961, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_addr_sk6176, _d_year6093, _d_year6121, _hd_income_band_sk6228, _hd_income_band_sk6233};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9827_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk6237_k = tbl_Filter_TD_9827_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8928_key_leftMajor{_ca_address_sk6237_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_addr_sk5961 = (it->second)._ss_addr_sk5961;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _hd_income_band_sk6228 = (it->second)._hd_income_band_sk6228;
                int32_t _hd_income_band_sk6233 = (it->second)._hd_income_band_sk6233;
                int32_t _ca_address_sk6237 = tbl_Filter_TD_9827_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_Filter_TD_9827_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_Filter_TD_9827_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_Filter_TD_9827_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_city6243 = std::string(_ca_city6243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_Filter_TD_9827_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 1, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 2, _ss_list_price5967);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 3, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 4, _d_year6065);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip6168_n);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 7, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 8, _d_year6093);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 9, _d_year6121);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 10, _hd_income_band_sk6228);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 11, _hd_income_band_sk6233);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_city6243_n);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_zip6246_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8928_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8928_key_rightMajor, SW_JOIN_INNER_TD_8928_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9827_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk6237_k = tbl_Filter_TD_9827_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8928_key_rightMajor keyA{_ca_address_sk6237_k};
            int32_t _ca_address_sk6237 = tbl_Filter_TD_9827_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_Filter_TD_9827_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_Filter_TD_9827_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_Filter_TD_9827_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_city6243 = std::string(_ca_city6243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_Filter_TD_9827_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
            SW_JOIN_INNER_TD_8928_payload_rightMajor payloadA{_ca_address_sk6237, _ca_street_number6239, _ca_street_name6240, _ca_city6243, _ca_zip6246};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_939_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk5961_k = tbl_JOIN_INNER_TD_939_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8928_key_rightMajor{_ss_addr_sk5961_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk6237 = (it->second)._ca_address_sk6237;
                std::string _ca_street_number6239 = (it->second)._ca_street_number6239;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n{};
                memcpy(_ca_street_number6239_n.data(), (_ca_street_number6239).data(), (_ca_street_number6239).length());
                std::string _ca_street_name6240 = (it->second)._ca_street_name6240;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n{};
                memcpy(_ca_street_name6240_n.data(), (_ca_street_name6240).data(), (_ca_street_name6240).length());
                std::string _ca_city6243 = (it->second)._ca_city6243;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n{};
                memcpy(_ca_city6243_n.data(), (_ca_city6243).data(), (_ca_city6243).length());
                std::string _ca_zip6246 = (it->second)._ca_zip6246;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n{};
                memcpy(_ca_zip6246_n.data(), (_ca_zip6246).data(), (_ca_zip6246).length());
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 0);
                int32_t _ss_addr_sk5961 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 1);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 2);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 3);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 4);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 8);
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 9);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 10);
                int32_t _hd_income_band_sk6228 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 11);
                int32_t _hd_income_band_sk6233 = tbl_JOIN_INNER_TD_939_output.getInt32(i, 12);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_city6243_n);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_zip6246_n);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 1, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 2, _ss_list_price5967);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 3, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 4, _d_year6065);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_8928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip6168_n);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 7, _c_current_addr_sk6176);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 8, _d_year6093);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 9, _d_year6121);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 10, _hd_income_band_sk6228);
                tbl_JOIN_INNER_TD_8928_output.setInt32(r, 11, _hd_income_band_sk6233);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8928_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8928_output #Row: " << tbl_JOIN_INNER_TD_8928_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8498(Table &tbl_SerializeFromObject_TD_9677_input, Table &tbl_Filter_TD_8498_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#4837))
    // Input: ListBuffer(ca_address_sk#4837, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    // Output: ListBuffer(ca_address_sk#4837, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9677_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk4837 = tbl_SerializeFromObject_TD_9677_input.getInt32(i, 0);
        if (_ca_address_sk4837!= 0) {
            int32_t _ca_address_sk4837_t = tbl_SerializeFromObject_TD_9677_input.getInt32(i, 0);
            tbl_Filter_TD_8498_output.setInt32(r, 0, _ca_address_sk4837_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_t = tbl_SerializeFromObject_TD_9677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_street_number4839_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_t = tbl_SerializeFromObject_TD_9677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_street_name4840_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_t = tbl_SerializeFromObject_TD_9677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_8498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_city4843_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_t = tbl_SerializeFromObject_TD_9677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_8498_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_zip4846_t);
            r++;
        }
    }
    tbl_Filter_TD_8498_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8498_output #Row: " << tbl_Filter_TD_8498_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8636_key_leftMajor {
    int32_t _ss_addr_sk1212;
    bool operator==(const SW_JOIN_INNER_TD_8636_key_leftMajor& other) const {
        return ((_ss_addr_sk1212 == other._ss_addr_sk1212));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8636_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8636_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk1212));
    }
};
}
struct SW_JOIN_INNER_TD_8636_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_addr_sk1212;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_addr_sk4;
    int32_t _d_year4773;
    int32_t _d_year4801;
    int32_t _hd_income_band_sk205;
    int32_t _hd_income_band_sk4833;
};
struct SW_JOIN_INNER_TD_8636_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_8636_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8636_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8636_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_8636_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_street_number56;
    std::string _ca_street_name57;
    std::string _ca_city60;
    std::string _ca_zip63;
};
void SW_JOIN_INNER_TD_8636(Table &tbl_JOIN_INNER_TD_9130_output, Table &tbl_Filter_TD_958_output, Table &tbl_JOIN_INNER_TD_8636_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#1212 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_addr_sk#1212, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_addr_sk#4, d_year#4773, d_year#4801, hd_income_band_sk#205, hd_income_band_sk#4833)
    // Right Table: ListBuffer(ca_address_sk#54, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_addr_sk#4, d_year#4773, d_year#4801, hd_income_band_sk#205, hd_income_band_sk#4833, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63)
    int left_nrow = tbl_JOIN_INNER_TD_9130_output.getNumRow();
    int right_nrow = tbl_Filter_TD_958_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8636_key_leftMajor, SW_JOIN_INNER_TD_8636_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9130_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8636_key_leftMajor keyA{_ss_addr_sk1212_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 0);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 1);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 2);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 3);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 4);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_9130_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_9130_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 8);
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 9);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 10);
            int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 11);
            int32_t _hd_income_band_sk4833 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 12);
            SW_JOIN_INNER_TD_8636_payload_leftMajor payloadA{_ss_item_sk1208, _ss_addr_sk1212, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_addr_sk4, _d_year4773, _d_year4801, _hd_income_band_sk205, _hd_income_band_sk4833};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_958_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_958_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8636_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _hd_income_band_sk205 = (it->second)._hd_income_band_sk205;
                int32_t _hd_income_band_sk4833 = (it->second)._hd_income_band_sk4833;
                int32_t _ca_address_sk54 = tbl_Filter_TD_958_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_Filter_TD_958_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_Filter_TD_958_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Filter_TD_958_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_958_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 1, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip403_n);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 7, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 8, _d_year4773);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 9, _d_year4801);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 10, _hd_income_band_sk205);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 11, _hd_income_band_sk4833);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_city60_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_zip63_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8636_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8636_key_rightMajor, SW_JOIN_INNER_TD_8636_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_958_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_958_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8636_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_958_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_Filter_TD_958_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_Filter_TD_958_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Filter_TD_958_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_958_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            SW_JOIN_INNER_TD_8636_payload_rightMajor payloadA{_ca_address_sk54, _ca_street_number56, _ca_street_name57, _ca_city60, _ca_zip63};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9130_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8636_key_rightMajor{_ss_addr_sk1212_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_street_number56 = (it->second)._ca_street_number56;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n{};
                memcpy(_ca_street_number56_n.data(), (_ca_street_number56).data(), (_ca_street_number56).length());
                std::string _ca_street_name57 = (it->second)._ca_street_name57;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n{};
                memcpy(_ca_street_name57_n.data(), (_ca_street_name57).data(), (_ca_street_name57).length());
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 0);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 1);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 2);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 3);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 4);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_9130_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_9130_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 8);
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 9);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 10);
                int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 11);
                int32_t _hd_income_band_sk4833 = tbl_JOIN_INNER_TD_9130_output.getInt32(i, 12);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_city60_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_zip63_n);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 1, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_8636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip403_n);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 7, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 8, _d_year4773);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 9, _d_year4801);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 10, _hd_income_band_sk205);
                tbl_JOIN_INNER_TD_8636_output.setInt32(r, 11, _hd_income_band_sk4833);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8636_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8636_output #Row: " << tbl_JOIN_INNER_TD_8636_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7912(Table &tbl_SerializeFromObject_TD_8928_input, Table &tbl_Filter_TD_7912_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ib_income_band_sk#6263))
    // Input: ListBuffer(ib_income_band_sk#6263)
    // Output: ListBuffer(ib_income_band_sk#6263)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8928_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ib_income_band_sk6263 = tbl_SerializeFromObject_TD_8928_input.getInt32(i, 0);
        if (_ib_income_band_sk6263!= 0) {
            int32_t _ib_income_band_sk6263_t = tbl_SerializeFromObject_TD_8928_input.getInt32(i, 0);
            tbl_Filter_TD_7912_output.setInt32(r, 0, _ib_income_band_sk6263_t);
            r++;
        }
    }
    tbl_Filter_TD_7912_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7912_output #Row: " << tbl_Filter_TD_7912_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7413_key_leftMajor {
    int32_t _c_current_addr_sk6176;
    bool operator==(const SW_JOIN_INNER_TD_7413_key_leftMajor& other) const {
        return ((_c_current_addr_sk6176 == other._c_current_addr_sk6176));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7413_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7413_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk6176));
    }
};
}
struct SW_JOIN_INNER_TD_7413_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _c_current_addr_sk6176;
    int32_t _d_year6093;
    int32_t _d_year6121;
    int32_t _hd_income_band_sk6228;
    int32_t _hd_income_band_sk6233;
    std::string _ca_street_number6239;
    std::string _ca_street_name6240;
    std::string _ca_city6243;
    std::string _ca_zip6246;
};
struct SW_JOIN_INNER_TD_7413_key_rightMajor {
    int32_t _ca_address_sk6250;
    bool operator==(const SW_JOIN_INNER_TD_7413_key_rightMajor& other) const {
        return ((_ca_address_sk6250 == other._ca_address_sk6250));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7413_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7413_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk6250));
    }
};
}
struct SW_JOIN_INNER_TD_7413_payload_rightMajor {
    int32_t _ca_address_sk6250;
    std::string _ca_street_number6252;
    std::string _ca_street_name6253;
    std::string _ca_city6256;
    std::string _ca_zip6259;
};
void SW_JOIN_INNER_TD_7413(Table &tbl_JOIN_INNER_TD_8928_output, Table &tbl_Filter_TD_8500_output, Table &tbl_JOIN_INNER_TD_7413_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#6176 = ca_address_sk#6250))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, c_current_addr_sk#6176, d_year#6093, d_year#6121, hd_income_band_sk#6228, hd_income_band_sk#6233, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246)
    // Right Table: ListBuffer(ca_address_sk#6250, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, d_year#6093, d_year#6121, hd_income_band_sk#6228, hd_income_band_sk#6233, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    int left_nrow = tbl_JOIN_INNER_TD_8928_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8500_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7413_key_leftMajor, SW_JOIN_INNER_TD_7413_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8928_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk6176_k = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_7413_key_leftMajor keyA{_c_current_addr_sk6176_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 0);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 1);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 2);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 3);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 7);
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 8);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 9);
            int32_t _hd_income_band_sk6228 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 10);
            int32_t _hd_income_band_sk6233 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 11);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
            std::string _ca_city6243 = std::string(_ca_city6243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
            SW_JOIN_INNER_TD_7413_payload_leftMajor payloadA{_ss_item_sk5957, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _c_current_addr_sk6176, _d_year6093, _d_year6121, _hd_income_band_sk6228, _hd_income_band_sk6233, _ca_street_number6239, _ca_street_name6240, _ca_city6243, _ca_zip6246};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8500_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk6250_k = tbl_Filter_TD_8500_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7413_key_leftMajor{_ca_address_sk6250_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _c_current_addr_sk6176 = (it->second)._c_current_addr_sk6176;
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _hd_income_band_sk6228 = (it->second)._hd_income_band_sk6228;
                int32_t _hd_income_band_sk6233 = (it->second)._hd_income_band_sk6233;
                std::string _ca_street_number6239 = (it->second)._ca_street_number6239;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n{};
                memcpy(_ca_street_number6239_n.data(), (_ca_street_number6239).data(), (_ca_street_number6239).length());
                std::string _ca_street_name6240 = (it->second)._ca_street_name6240;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n{};
                memcpy(_ca_street_name6240_n.data(), (_ca_street_name6240).data(), (_ca_street_name6240).length());
                std::string _ca_city6243 = (it->second)._ca_city6243;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n{};
                memcpy(_ca_city6243_n.data(), (_ca_city6243).data(), (_ca_city6243).length());
                std::string _ca_zip6246 = (it->second)._ca_zip6246;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n{};
                memcpy(_ca_zip6246_n.data(), (_ca_zip6246).data(), (_ca_zip6246).length());
                int32_t _ca_address_sk6250 = tbl_Filter_TD_8500_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n = tbl_Filter_TD_8500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_street_number6252 = std::string(_ca_street_number6252_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n = tbl_Filter_TD_8500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_street_name6253 = std::string(_ca_street_name6253_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n = tbl_Filter_TD_8500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_city6256 = std::string(_ca_city6256_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n = tbl_Filter_TD_8500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_zip6259 = std::string(_ca_zip6259_n.data());
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 1, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 2, _ss_list_price5967);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 3, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 4, _d_year6065);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip6168_n);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 7, _d_year6093);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 8, _d_year6121);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 9, _hd_income_band_sk6228);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 10, _hd_income_band_sk6233);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_city6243_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_zip6246_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_street_number6252_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_street_name6253_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _ca_city6256_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 18, _ca_zip6259_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7413_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7413_key_rightMajor, SW_JOIN_INNER_TD_7413_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8500_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk6250_k = tbl_Filter_TD_8500_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7413_key_rightMajor keyA{_ca_address_sk6250_k};
            int32_t _ca_address_sk6250 = tbl_Filter_TD_8500_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n = tbl_Filter_TD_8500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_street_number6252 = std::string(_ca_street_number6252_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n = tbl_Filter_TD_8500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_street_name6253 = std::string(_ca_street_name6253_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n = tbl_Filter_TD_8500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_city6256 = std::string(_ca_city6256_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n = tbl_Filter_TD_8500_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_zip6259 = std::string(_ca_zip6259_n.data());
            SW_JOIN_INNER_TD_7413_payload_rightMajor payloadA{_ca_address_sk6250, _ca_street_number6252, _ca_street_name6253, _ca_city6256, _ca_zip6259};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8928_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk6176_k = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7413_key_rightMajor{_c_current_addr_sk6176_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk6250 = (it->second)._ca_address_sk6250;
                std::string _ca_street_number6252 = (it->second)._ca_street_number6252;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n{};
                memcpy(_ca_street_number6252_n.data(), (_ca_street_number6252).data(), (_ca_street_number6252).length());
                std::string _ca_street_name6253 = (it->second)._ca_street_name6253;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n{};
                memcpy(_ca_street_name6253_n.data(), (_ca_street_name6253).data(), (_ca_street_name6253).length());
                std::string _ca_city6256 = (it->second)._ca_city6256;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n{};
                memcpy(_ca_city6256_n.data(), (_ca_city6256).data(), (_ca_city6256).length());
                std::string _ca_zip6259 = (it->second)._ca_zip6259;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n{};
                memcpy(_ca_zip6259_n.data(), (_ca_zip6259).data(), (_ca_zip6259).length());
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 0);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 1);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 2);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 3);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _c_current_addr_sk6176 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 7);
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 8);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 9);
                int32_t _hd_income_band_sk6228 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 10);
                int32_t _hd_income_band_sk6233 = tbl_JOIN_INNER_TD_8928_output.getInt32(i, 11);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
                std::string _ca_city6243 = std::string(_ca_city6243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_JOIN_INNER_TD_8928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_street_number6252_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_street_name6253_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _ca_city6256_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 18, _ca_zip6259_n);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 1, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 2, _ss_list_price5967);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 3, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 4, _d_year6065);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip6168_n);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 7, _d_year6093);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 8, _d_year6121);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 9, _hd_income_band_sk6228);
                tbl_JOIN_INNER_TD_7413_output.setInt32(r, 10, _hd_income_band_sk6233);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_city6243_n);
                tbl_JOIN_INNER_TD_7413_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_zip6246_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7413_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7413_output #Row: " << tbl_JOIN_INNER_TD_7413_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7917(Table &tbl_SerializeFromObject_TD_827_input, Table &tbl_Filter_TD_7917_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ib_income_band_sk#219))
    // Input: ListBuffer(ib_income_band_sk#219)
    // Output: ListBuffer(ib_income_band_sk#219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_827_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ib_income_band_sk219 = tbl_SerializeFromObject_TD_827_input.getInt32(i, 0);
        if (_ib_income_band_sk219!= 0) {
            int32_t _ib_income_band_sk219_t = tbl_SerializeFromObject_TD_827_input.getInt32(i, 0);
            tbl_Filter_TD_7917_output.setInt32(r, 0, _ib_income_band_sk219_t);
            r++;
        }
    }
    tbl_Filter_TD_7917_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7917_output #Row: " << tbl_Filter_TD_7917_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7357_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_7357_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7357_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7357_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_7357_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _c_current_addr_sk4;
    int32_t _d_year4773;
    int32_t _d_year4801;
    int32_t _hd_income_band_sk205;
    int32_t _hd_income_band_sk4833;
    std::string _ca_street_number56;
    std::string _ca_street_name57;
    std::string _ca_city60;
    std::string _ca_zip63;
};
struct SW_JOIN_INNER_TD_7357_key_rightMajor {
    int32_t _ca_address_sk4837;
    bool operator==(const SW_JOIN_INNER_TD_7357_key_rightMajor& other) const {
        return ((_ca_address_sk4837 == other._ca_address_sk4837));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7357_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7357_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk4837));
    }
};
}
struct SW_JOIN_INNER_TD_7357_payload_rightMajor {
    int32_t _ca_address_sk4837;
    std::string _ca_street_number4839;
    std::string _ca_street_name4840;
    std::string _ca_city4843;
    std::string _ca_zip4846;
};
void SW_JOIN_INNER_TD_7357(Table &tbl_JOIN_INNER_TD_8636_output, Table &tbl_Filter_TD_8498_output, Table &tbl_JOIN_INNER_TD_7357_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#4837))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, c_current_addr_sk#4, d_year#4773, d_year#4801, hd_income_band_sk#205, hd_income_band_sk#4833, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63)
    // Right Table: ListBuffer(ca_address_sk#4837, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, d_year#4773, d_year#4801, hd_income_band_sk#205, hd_income_band_sk#4833, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    int left_nrow = tbl_JOIN_INNER_TD_8636_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8498_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7357_key_leftMajor, SW_JOIN_INNER_TD_7357_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8636_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_7357_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 0);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 1);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 2);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 7);
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 8);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 9);
            int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 10);
            int32_t _hd_income_band_sk4833 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 11);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            SW_JOIN_INNER_TD_7357_payload_leftMajor payloadA{_ss_item_sk1208, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _c_current_addr_sk4, _d_year4773, _d_year4801, _hd_income_band_sk205, _hd_income_band_sk4833, _ca_street_number56, _ca_street_name57, _ca_city60, _ca_zip63};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8498_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk4837_k = tbl_Filter_TD_8498_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7357_key_leftMajor{_ca_address_sk4837_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _hd_income_band_sk205 = (it->second)._hd_income_band_sk205;
                int32_t _hd_income_band_sk4833 = (it->second)._hd_income_band_sk4833;
                std::string _ca_street_number56 = (it->second)._ca_street_number56;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n{};
                memcpy(_ca_street_number56_n.data(), (_ca_street_number56).data(), (_ca_street_number56).length());
                std::string _ca_street_name57 = (it->second)._ca_street_name57;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n{};
                memcpy(_ca_street_name57_n.data(), (_ca_street_name57).data(), (_ca_street_name57).length());
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                int32_t _ca_address_sk4837 = tbl_Filter_TD_8498_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n = tbl_Filter_TD_8498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_street_number4839 = std::string(_ca_street_number4839_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n = tbl_Filter_TD_8498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_street_name4840 = std::string(_ca_street_name4840_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n = tbl_Filter_TD_8498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_city4843 = std::string(_ca_city4843_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n = tbl_Filter_TD_8498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_zip4846 = std::string(_ca_zip4846_n.data());
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 1, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip403_n);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 7, _d_year4773);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 8, _d_year4801);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 9, _hd_income_band_sk205);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 10, _hd_income_band_sk4833);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_city60_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_zip63_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_street_number4839_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_street_name4840_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _ca_city4843_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 18, _ca_zip4846_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7357_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7357_key_rightMajor, SW_JOIN_INNER_TD_7357_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8498_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk4837_k = tbl_Filter_TD_8498_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7357_key_rightMajor keyA{_ca_address_sk4837_k};
            int32_t _ca_address_sk4837 = tbl_Filter_TD_8498_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n = tbl_Filter_TD_8498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_street_number4839 = std::string(_ca_street_number4839_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n = tbl_Filter_TD_8498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_street_name4840 = std::string(_ca_street_name4840_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n = tbl_Filter_TD_8498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_city4843 = std::string(_ca_city4843_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n = tbl_Filter_TD_8498_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_zip4846 = std::string(_ca_zip4846_n.data());
            SW_JOIN_INNER_TD_7357_payload_rightMajor payloadA{_ca_address_sk4837, _ca_street_number4839, _ca_street_name4840, _ca_city4843, _ca_zip4846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8636_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7357_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk4837 = (it->second)._ca_address_sk4837;
                std::string _ca_street_number4839 = (it->second)._ca_street_number4839;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n{};
                memcpy(_ca_street_number4839_n.data(), (_ca_street_number4839).data(), (_ca_street_number4839).length());
                std::string _ca_street_name4840 = (it->second)._ca_street_name4840;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n{};
                memcpy(_ca_street_name4840_n.data(), (_ca_street_name4840).data(), (_ca_street_name4840).length());
                std::string _ca_city4843 = (it->second)._ca_city4843;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n{};
                memcpy(_ca_city4843_n.data(), (_ca_city4843).data(), (_ca_city4843).length());
                std::string _ca_zip4846 = (it->second)._ca_zip4846;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n{};
                memcpy(_ca_zip4846_n.data(), (_ca_zip4846).data(), (_ca_zip4846).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 0);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 1);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 2);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 7);
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 8);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 9);
                int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 10);
                int32_t _hd_income_band_sk4833 = tbl_JOIN_INNER_TD_8636_output.getInt32(i, 11);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_8636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_street_number4839_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_street_name4840_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _ca_city4843_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 18, _ca_zip4846_n);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 1, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip403_n);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 7, _d_year4773);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 8, _d_year4801);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 9, _hd_income_band_sk205);
                tbl_JOIN_INNER_TD_7357_output.setInt32(r, 10, _hd_income_band_sk4833);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_city60_n);
                tbl_JOIN_INNER_TD_7357_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_zip63_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7357_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7357_output #Row: " << tbl_JOIN_INNER_TD_7357_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6259(Table &tbl_SerializeFromObject_TD_7674_input, Table &tbl_Filter_TD_6259_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ib_income_band_sk#6266))
    // Input: ListBuffer(ib_income_band_sk#6266)
    // Output: ListBuffer(ib_income_band_sk#6266)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7674_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ib_income_band_sk6266 = tbl_SerializeFromObject_TD_7674_input.getInt32(i, 0);
        if (_ib_income_band_sk6266!= 0) {
            int32_t _ib_income_band_sk6266_t = tbl_SerializeFromObject_TD_7674_input.getInt32(i, 0);
            tbl_Filter_TD_6259_output.setInt32(r, 0, _ib_income_band_sk6266_t);
            r++;
        }
    }
    tbl_Filter_TD_6259_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6259_output #Row: " << tbl_Filter_TD_6259_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_691_key_leftMajor {
    int32_t _hd_income_band_sk6228;
    bool operator==(const SW_JOIN_INNER_TD_691_key_leftMajor& other) const {
        return ((_hd_income_band_sk6228 == other._hd_income_band_sk6228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_691_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_691_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_income_band_sk6228));
    }
};
}
struct SW_JOIN_INNER_TD_691_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _d_year6093;
    int32_t _d_year6121;
    int32_t _hd_income_band_sk6228;
    int32_t _hd_income_band_sk6233;
    std::string _ca_street_number6239;
    std::string _ca_street_name6240;
    std::string _ca_city6243;
    std::string _ca_zip6246;
    std::string _ca_street_number6252;
    std::string _ca_street_name6253;
    std::string _ca_city6256;
    std::string _ca_zip6259;
};
struct SW_JOIN_INNER_TD_691_key_rightMajor {
    int32_t _ib_income_band_sk6263;
    bool operator==(const SW_JOIN_INNER_TD_691_key_rightMajor& other) const {
        return ((_ib_income_band_sk6263 == other._ib_income_band_sk6263));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_691_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_691_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ib_income_band_sk6263));
    }
};
}
struct SW_JOIN_INNER_TD_691_payload_rightMajor {
    int32_t _ib_income_band_sk6263;
};
void SW_JOIN_INNER_TD_691(Table &tbl_JOIN_INNER_TD_7413_output, Table &tbl_Filter_TD_7912_output, Table &tbl_JOIN_INNER_TD_691_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((hd_income_band_sk#6228 = ib_income_band_sk#6263))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, d_year#6093, d_year#6121, hd_income_band_sk#6228, hd_income_band_sk#6233, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    // Right Table: ListBuffer(ib_income_band_sk#6263)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, d_year#6093, d_year#6121, hd_income_band_sk#6233, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    int left_nrow = tbl_JOIN_INNER_TD_7413_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7912_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_691_key_leftMajor, SW_JOIN_INNER_TD_691_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7413_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_income_band_sk6228_k = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_691_key_leftMajor keyA{_hd_income_band_sk6228_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 0);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 1);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 2);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 3);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 7);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 8);
            int32_t _hd_income_band_sk6228 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 9);
            int32_t _hd_income_band_sk6233 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 10);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _ca_city6243 = std::string(_ca_city6243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
            std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _ca_street_number6252 = std::string(_ca_street_number6252_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
            std::string _ca_street_name6253 = std::string(_ca_street_name6253_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
            std::string _ca_city6256 = std::string(_ca_city6256_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 18);
            std::string _ca_zip6259 = std::string(_ca_zip6259_n.data());
            SW_JOIN_INNER_TD_691_payload_leftMajor payloadA{_ss_item_sk5957, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _d_year6093, _d_year6121, _hd_income_band_sk6228, _hd_income_band_sk6233, _ca_street_number6239, _ca_street_name6240, _ca_city6243, _ca_zip6246, _ca_street_number6252, _ca_street_name6253, _ca_city6256, _ca_zip6259};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7912_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ib_income_band_sk6263_k = tbl_Filter_TD_7912_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_691_key_leftMajor{_ib_income_band_sk6263_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _hd_income_band_sk6228 = (it->second)._hd_income_band_sk6228;
                int32_t _hd_income_band_sk6233 = (it->second)._hd_income_band_sk6233;
                std::string _ca_street_number6239 = (it->second)._ca_street_number6239;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n{};
                memcpy(_ca_street_number6239_n.data(), (_ca_street_number6239).data(), (_ca_street_number6239).length());
                std::string _ca_street_name6240 = (it->second)._ca_street_name6240;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n{};
                memcpy(_ca_street_name6240_n.data(), (_ca_street_name6240).data(), (_ca_street_name6240).length());
                std::string _ca_city6243 = (it->second)._ca_city6243;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n{};
                memcpy(_ca_city6243_n.data(), (_ca_city6243).data(), (_ca_city6243).length());
                std::string _ca_zip6246 = (it->second)._ca_zip6246;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n{};
                memcpy(_ca_zip6246_n.data(), (_ca_zip6246).data(), (_ca_zip6246).length());
                std::string _ca_street_number6252 = (it->second)._ca_street_number6252;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n{};
                memcpy(_ca_street_number6252_n.data(), (_ca_street_number6252).data(), (_ca_street_number6252).length());
                std::string _ca_street_name6253 = (it->second)._ca_street_name6253;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n{};
                memcpy(_ca_street_name6253_n.data(), (_ca_street_name6253).data(), (_ca_street_name6253).length());
                std::string _ca_city6256 = (it->second)._ca_city6256;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n{};
                memcpy(_ca_city6256_n.data(), (_ca_city6256).data(), (_ca_city6256).length());
                std::string _ca_zip6259 = (it->second)._ca_zip6259;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n{};
                memcpy(_ca_zip6259_n.data(), (_ca_zip6259).data(), (_ca_zip6259).length());
                int32_t _ib_income_band_sk6263 = tbl_Filter_TD_7912_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 1, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 2, _ss_list_price5967);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 3, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 4, _d_year6065);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip6168_n);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 7, _d_year6093);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 8, _d_year6121);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 9, _hd_income_band_sk6233);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_city6243_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_zip6246_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_street_number6252_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_street_name6253_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_city6256_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _ca_zip6259_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_691_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_691_key_rightMajor, SW_JOIN_INNER_TD_691_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7912_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ib_income_band_sk6263_k = tbl_Filter_TD_7912_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_691_key_rightMajor keyA{_ib_income_band_sk6263_k};
            int32_t _ib_income_band_sk6263 = tbl_Filter_TD_7912_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_691_payload_rightMajor payloadA{_ib_income_band_sk6263};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7413_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_income_band_sk6228_k = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 9);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_691_key_rightMajor{_hd_income_band_sk6228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ib_income_band_sk6263 = (it->second)._ib_income_band_sk6263;
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 0);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 1);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 2);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 3);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 7);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 8);
                int32_t _hd_income_band_sk6228 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 9);
                int32_t _hd_income_band_sk6233 = tbl_JOIN_INNER_TD_7413_output.getInt32(i, 10);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _ca_city6243 = std::string(_ca_city6243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
                std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _ca_street_number6252 = std::string(_ca_street_number6252_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
                std::string _ca_street_name6253 = std::string(_ca_street_name6253_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
                std::string _ca_city6256 = std::string(_ca_city6256_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n = tbl_JOIN_INNER_TD_7413_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 18);
                std::string _ca_zip6259 = std::string(_ca_zip6259_n.data());
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 1, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 2, _ss_list_price5967);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 3, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 4, _d_year6065);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip6168_n);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 7, _d_year6093);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 8, _d_year6121);
                tbl_JOIN_INNER_TD_691_output.setInt32(r, 9, _hd_income_band_sk6233);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_city6243_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_zip6246_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_street_number6252_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_street_name6253_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_city6256_n);
                tbl_JOIN_INNER_TD_691_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _ca_zip6259_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_691_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_691_output #Row: " << tbl_JOIN_INNER_TD_691_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6813(Table &tbl_SerializeFromObject_TD_7576_input, Table &tbl_Filter_TD_6813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ib_income_band_sk#4850))
    // Input: ListBuffer(ib_income_band_sk#4850)
    // Output: ListBuffer(ib_income_band_sk#4850)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7576_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ib_income_band_sk4850 = tbl_SerializeFromObject_TD_7576_input.getInt32(i, 0);
        if (_ib_income_band_sk4850!= 0) {
            int32_t _ib_income_band_sk4850_t = tbl_SerializeFromObject_TD_7576_input.getInt32(i, 0);
            tbl_Filter_TD_6813_output.setInt32(r, 0, _ib_income_band_sk4850_t);
            r++;
        }
    }
    tbl_Filter_TD_6813_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6813_output #Row: " << tbl_Filter_TD_6813_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6496_key_leftMajor {
    int32_t _hd_income_band_sk205;
    bool operator==(const SW_JOIN_INNER_TD_6496_key_leftMajor& other) const {
        return ((_hd_income_band_sk205 == other._hd_income_band_sk205));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6496_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6496_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_income_band_sk205));
    }
};
}
struct SW_JOIN_INNER_TD_6496_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _d_year4773;
    int32_t _d_year4801;
    int32_t _hd_income_band_sk205;
    int32_t _hd_income_band_sk4833;
    std::string _ca_street_number56;
    std::string _ca_street_name57;
    std::string _ca_city60;
    std::string _ca_zip63;
    std::string _ca_street_number4839;
    std::string _ca_street_name4840;
    std::string _ca_city4843;
    std::string _ca_zip4846;
};
struct SW_JOIN_INNER_TD_6496_key_rightMajor {
    int32_t _ib_income_band_sk219;
    bool operator==(const SW_JOIN_INNER_TD_6496_key_rightMajor& other) const {
        return ((_ib_income_band_sk219 == other._ib_income_band_sk219));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6496_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6496_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ib_income_band_sk219));
    }
};
}
struct SW_JOIN_INNER_TD_6496_payload_rightMajor {
    int32_t _ib_income_band_sk219;
};
void SW_JOIN_INNER_TD_6496(Table &tbl_JOIN_INNER_TD_7357_output, Table &tbl_Filter_TD_7917_output, Table &tbl_JOIN_INNER_TD_6496_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((hd_income_band_sk#205 = ib_income_band_sk#219))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, d_year#4773, d_year#4801, hd_income_band_sk#205, hd_income_band_sk#4833, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    // Right Table: ListBuffer(ib_income_band_sk#219)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, d_year#4773, d_year#4801, hd_income_band_sk#4833, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    int left_nrow = tbl_JOIN_INNER_TD_7357_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7917_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6496_key_leftMajor, SW_JOIN_INNER_TD_6496_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7357_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_income_band_sk205_k = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_6496_key_leftMajor keyA{_hd_income_band_sk205_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 0);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 1);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 2);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 7);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 8);
            int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 9);
            int32_t _hd_income_band_sk4833 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 10);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _ca_street_number4839 = std::string(_ca_street_number4839_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
            std::string _ca_street_name4840 = std::string(_ca_street_name4840_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
            std::string _ca_city4843 = std::string(_ca_city4843_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 18);
            std::string _ca_zip4846 = std::string(_ca_zip4846_n.data());
            SW_JOIN_INNER_TD_6496_payload_leftMajor payloadA{_ss_item_sk1208, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _d_year4773, _d_year4801, _hd_income_band_sk205, _hd_income_band_sk4833, _ca_street_number56, _ca_street_name57, _ca_city60, _ca_zip63, _ca_street_number4839, _ca_street_name4840, _ca_city4843, _ca_zip4846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7917_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ib_income_band_sk219_k = tbl_Filter_TD_7917_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6496_key_leftMajor{_ib_income_band_sk219_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _hd_income_band_sk205 = (it->second)._hd_income_band_sk205;
                int32_t _hd_income_band_sk4833 = (it->second)._hd_income_band_sk4833;
                std::string _ca_street_number56 = (it->second)._ca_street_number56;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n{};
                memcpy(_ca_street_number56_n.data(), (_ca_street_number56).data(), (_ca_street_number56).length());
                std::string _ca_street_name57 = (it->second)._ca_street_name57;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n{};
                memcpy(_ca_street_name57_n.data(), (_ca_street_name57).data(), (_ca_street_name57).length());
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                std::string _ca_street_number4839 = (it->second)._ca_street_number4839;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n{};
                memcpy(_ca_street_number4839_n.data(), (_ca_street_number4839).data(), (_ca_street_number4839).length());
                std::string _ca_street_name4840 = (it->second)._ca_street_name4840;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n{};
                memcpy(_ca_street_name4840_n.data(), (_ca_street_name4840).data(), (_ca_street_name4840).length());
                std::string _ca_city4843 = (it->second)._ca_city4843;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n{};
                memcpy(_ca_city4843_n.data(), (_ca_city4843).data(), (_ca_city4843).length());
                std::string _ca_zip4846 = (it->second)._ca_zip4846;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n{};
                memcpy(_ca_zip4846_n.data(), (_ca_zip4846).data(), (_ca_zip4846).length());
                int32_t _ib_income_band_sk219 = tbl_Filter_TD_7917_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 1, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip403_n);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 7, _d_year4773);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 8, _d_year4801);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 9, _hd_income_band_sk4833);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_city60_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_zip63_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_street_number4839_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_street_name4840_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_city4843_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _ca_zip4846_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6496_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6496_key_rightMajor, SW_JOIN_INNER_TD_6496_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7917_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ib_income_band_sk219_k = tbl_Filter_TD_7917_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6496_key_rightMajor keyA{_ib_income_band_sk219_k};
            int32_t _ib_income_band_sk219 = tbl_Filter_TD_7917_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6496_payload_rightMajor payloadA{_ib_income_band_sk219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7357_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_income_band_sk205_k = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 9);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6496_key_rightMajor{_hd_income_band_sk205_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ib_income_band_sk219 = (it->second)._ib_income_band_sk219;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 0);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 1);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 2);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 7);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 8);
                int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 9);
                int32_t _hd_income_band_sk4833 = tbl_JOIN_INNER_TD_7357_output.getInt32(i, 10);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _ca_street_number4839 = std::string(_ca_street_number4839_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
                std::string _ca_street_name4840 = std::string(_ca_street_name4840_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
                std::string _ca_city4843 = std::string(_ca_city4843_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n = tbl_JOIN_INNER_TD_7357_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 18);
                std::string _ca_zip4846 = std::string(_ca_zip4846_n.data());
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 1, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip403_n);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 7, _d_year4773);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 8, _d_year4801);
                tbl_JOIN_INNER_TD_6496_output.setInt32(r, 9, _hd_income_band_sk4833);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_city60_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_zip63_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_street_number4839_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_street_name4840_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_city4843_n);
                tbl_JOIN_INNER_TD_6496_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _ca_zip4846_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6496_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6496_output #Row: " << tbl_JOIN_INNER_TD_6496_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5551(Table &tbl_SerializeFromObject_TD_612_input, Table &tbl_Filter_TD_5551_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#6274) AND ((((i_color#6286 IN (purple,burlywood,indian,spring,floral,medium) AND (i_current_price#6274 >= 64.00)) AND (i_current_price#6274 <= 74.00)) AND (i_current_price#6274 >= 65.00)) AND (i_current_price#6274 <= 79.00))) AND isnotnull(i_item_sk#6269)))
    // Input: ListBuffer(i_item_sk#6269, i_product_name#6290, i_current_price#6274, i_color#6286)
    // Output: ListBuffer(i_item_sk#6269, i_product_name#6290)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_612_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price6274 = tbl_SerializeFromObject_TD_612_input.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_color6286 = tbl_SerializeFromObject_TD_612_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _i_item_sk6269 = tbl_SerializeFromObject_TD_612_input.getInt32(i, 0);
        auto reuse_col_str_54 = std::string(_i_color6286.data());
        if (((_i_current_price6274!= 0) && ((((((reuse_col_str_54 == "purple") || (reuse_col_str_54 == "burlywood") || (reuse_col_str_54 == "indian") || (reuse_col_str_54 == "spring") || (reuse_col_str_54 == "floral") || (reuse_col_str_54 == "medium") || (0)) && (_i_current_price6274 >= 64.00)) && (_i_current_price6274 <= 74.00)) && (_i_current_price6274 >= 65.00)) && (_i_current_price6274 <= 79.00))) && (_i_item_sk6269!= 0)) {
            int32_t _i_item_sk6269_t = tbl_SerializeFromObject_TD_612_input.getInt32(i, 0);
            tbl_Filter_TD_5551_output.setInt32(r, 0, _i_item_sk6269_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name6290_t = tbl_SerializeFromObject_TD_612_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5551_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name6290_t);
            r++;
        }
    }
    tbl_Filter_TD_5551_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5551_output #Row: " << tbl_Filter_TD_5551_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5724_key_leftMajor {
    int32_t _hd_income_band_sk6233;
    bool operator==(const SW_JOIN_INNER_TD_5724_key_leftMajor& other) const {
        return ((_hd_income_band_sk6233 == other._hd_income_band_sk6233));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5724_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5724_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_income_band_sk6233));
    }
};
}
struct SW_JOIN_INNER_TD_5724_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _d_year6093;
    int32_t _d_year6121;
    int32_t _hd_income_band_sk6233;
    std::string _ca_street_number6239;
    std::string _ca_street_name6240;
    std::string _ca_city6243;
    std::string _ca_zip6246;
    std::string _ca_street_number6252;
    std::string _ca_street_name6253;
    std::string _ca_city6256;
    std::string _ca_zip6259;
};
struct SW_JOIN_INNER_TD_5724_key_rightMajor {
    int32_t _ib_income_band_sk6266;
    bool operator==(const SW_JOIN_INNER_TD_5724_key_rightMajor& other) const {
        return ((_ib_income_band_sk6266 == other._ib_income_band_sk6266));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5724_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5724_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ib_income_band_sk6266));
    }
};
}
struct SW_JOIN_INNER_TD_5724_payload_rightMajor {
    int32_t _ib_income_band_sk6266;
};
void SW_JOIN_INNER_TD_5724(Table &tbl_JOIN_INNER_TD_691_output, Table &tbl_Filter_TD_6259_output, Table &tbl_JOIN_INNER_TD_5724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((hd_income_band_sk#6233 = ib_income_band_sk#6266))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, d_year#6093, d_year#6121, hd_income_band_sk#6233, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    // Right Table: ListBuffer(ib_income_band_sk#6266)
    // Output Table: ListBuffer(ss_item_sk#5957, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, d_year#6093, d_year#6121, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    int left_nrow = tbl_JOIN_INNER_TD_691_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6259_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5724_key_leftMajor, SW_JOIN_INNER_TD_5724_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_691_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_income_band_sk6233_k = tbl_JOIN_INNER_TD_691_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_5724_key_leftMajor keyA{_hd_income_band_sk6233_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 0);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 1);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 2);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 3);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 7);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 8);
            int32_t _hd_income_band_sk6233 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 9);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _ca_city6243 = std::string(_ca_city6243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
            std::string _ca_street_number6252 = std::string(_ca_street_number6252_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _ca_street_name6253 = std::string(_ca_street_name6253_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
            std::string _ca_city6256 = std::string(_ca_city6256_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
            std::string _ca_zip6259 = std::string(_ca_zip6259_n.data());
            SW_JOIN_INNER_TD_5724_payload_leftMajor payloadA{_ss_item_sk5957, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _d_year6093, _d_year6121, _hd_income_band_sk6233, _ca_street_number6239, _ca_street_name6240, _ca_city6243, _ca_zip6246, _ca_street_number6252, _ca_street_name6253, _ca_city6256, _ca_zip6259};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6259_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ib_income_band_sk6266_k = tbl_Filter_TD_6259_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5724_key_leftMajor{_ib_income_band_sk6266_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                int32_t _hd_income_band_sk6233 = (it->second)._hd_income_band_sk6233;
                std::string _ca_street_number6239 = (it->second)._ca_street_number6239;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n{};
                memcpy(_ca_street_number6239_n.data(), (_ca_street_number6239).data(), (_ca_street_number6239).length());
                std::string _ca_street_name6240 = (it->second)._ca_street_name6240;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n{};
                memcpy(_ca_street_name6240_n.data(), (_ca_street_name6240).data(), (_ca_street_name6240).length());
                std::string _ca_city6243 = (it->second)._ca_city6243;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n{};
                memcpy(_ca_city6243_n.data(), (_ca_city6243).data(), (_ca_city6243).length());
                std::string _ca_zip6246 = (it->second)._ca_zip6246;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n{};
                memcpy(_ca_zip6246_n.data(), (_ca_zip6246).data(), (_ca_zip6246).length());
                std::string _ca_street_number6252 = (it->second)._ca_street_number6252;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n{};
                memcpy(_ca_street_number6252_n.data(), (_ca_street_number6252).data(), (_ca_street_number6252).length());
                std::string _ca_street_name6253 = (it->second)._ca_street_name6253;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n{};
                memcpy(_ca_street_name6253_n.data(), (_ca_street_name6253).data(), (_ca_street_name6253).length());
                std::string _ca_city6256 = (it->second)._ca_city6256;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n{};
                memcpy(_ca_city6256_n.data(), (_ca_city6256).data(), (_ca_city6256).length());
                std::string _ca_zip6259 = (it->second)._ca_zip6259;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n{};
                memcpy(_ca_zip6259_n.data(), (_ca_zip6259).data(), (_ca_zip6259).length());
                int32_t _ib_income_band_sk6266 = tbl_Filter_TD_6259_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 1, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 2, _ss_list_price5967);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 3, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 4, _d_year6065);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip6168_n);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 7, _d_year6093);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 8, _d_year6121);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_city6243_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_zip6246_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_number6252_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_street_name6253_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_city6256_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_zip6259_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5724_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5724_key_rightMajor, SW_JOIN_INNER_TD_5724_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6259_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ib_income_band_sk6266_k = tbl_Filter_TD_6259_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5724_key_rightMajor keyA{_ib_income_band_sk6266_k};
            int32_t _ib_income_band_sk6266 = tbl_Filter_TD_6259_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5724_payload_rightMajor payloadA{_ib_income_band_sk6266};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_691_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_income_band_sk6233_k = tbl_JOIN_INNER_TD_691_output.getInt32(i, 9);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5724_key_rightMajor{_hd_income_band_sk6233_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ib_income_band_sk6266 = (it->second)._ib_income_band_sk6266;
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 0);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 1);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 2);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 3);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 7);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 8);
                int32_t _hd_income_band_sk6233 = tbl_JOIN_INNER_TD_691_output.getInt32(i, 9);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _ca_city6243 = std::string(_ca_city6243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
                std::string _ca_street_number6252 = std::string(_ca_street_number6252_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _ca_street_name6253 = std::string(_ca_street_name6253_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
                std::string _ca_city6256 = std::string(_ca_city6256_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n = tbl_JOIN_INNER_TD_691_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
                std::string _ca_zip6259 = std::string(_ca_zip6259_n.data());
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 0, _ss_item_sk5957);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 1, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 2, _ss_list_price5967);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 3, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 4, _d_year6065);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip6168_n);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 7, _d_year6093);
                tbl_JOIN_INNER_TD_5724_output.setInt32(r, 8, _d_year6121);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_city6243_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_zip6246_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_number6252_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_street_name6253_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_city6256_n);
                tbl_JOIN_INNER_TD_5724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_zip6259_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5724_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5724_output #Row: " << tbl_JOIN_INNER_TD_5724_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5300(Table &tbl_SerializeFromObject_TD_698_input, Table &tbl_Filter_TD_5300_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_current_price#233) AND ((((i_color#245 IN (purple,burlywood,indian,spring,floral,medium) AND (i_current_price#233 >= 64.00)) AND (i_current_price#233 <= 74.00)) AND (i_current_price#233 >= 65.00)) AND (i_current_price#233 <= 79.00))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_product_name#249, i_current_price#233, i_color#245)
    // Output: ListBuffer(i_item_sk#228, i_product_name#249)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_698_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_SerializeFromObject_TD_698_input.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_color245 = tbl_SerializeFromObject_TD_698_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_698_input.getInt32(i, 0);
        auto reuse_col_str_620 = std::string(_i_color245.data());
        if (((_i_current_price233!= 0) && ((((((reuse_col_str_620 == "purple") || (reuse_col_str_620 == "burlywood") || (reuse_col_str_620 == "indian") || (reuse_col_str_620 == "spring") || (reuse_col_str_620 == "floral") || (reuse_col_str_620 == "medium") || (0)) && (_i_current_price233 >= 64.00)) && (_i_current_price233 <= 74.00)) && (_i_current_price233 >= 65.00)) && (_i_current_price233 <= 79.00))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_698_input.getInt32(i, 0);
            tbl_Filter_TD_5300_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_t = tbl_SerializeFromObject_TD_698_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5300_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_t);
            r++;
        }
    }
    tbl_Filter_TD_5300_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5300_output #Row: " << tbl_Filter_TD_5300_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5470_key_leftMajor {
    int32_t _hd_income_band_sk4833;
    bool operator==(const SW_JOIN_INNER_TD_5470_key_leftMajor& other) const {
        return ((_hd_income_band_sk4833 == other._hd_income_band_sk4833));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5470_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5470_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_income_band_sk4833));
    }
};
}
struct SW_JOIN_INNER_TD_5470_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _d_year4773;
    int32_t _d_year4801;
    int32_t _hd_income_band_sk4833;
    std::string _ca_street_number56;
    std::string _ca_street_name57;
    std::string _ca_city60;
    std::string _ca_zip63;
    std::string _ca_street_number4839;
    std::string _ca_street_name4840;
    std::string _ca_city4843;
    std::string _ca_zip4846;
};
struct SW_JOIN_INNER_TD_5470_key_rightMajor {
    int32_t _ib_income_band_sk4850;
    bool operator==(const SW_JOIN_INNER_TD_5470_key_rightMajor& other) const {
        return ((_ib_income_band_sk4850 == other._ib_income_band_sk4850));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5470_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5470_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ib_income_band_sk4850));
    }
};
}
struct SW_JOIN_INNER_TD_5470_payload_rightMajor {
    int32_t _ib_income_band_sk4850;
};
void SW_JOIN_INNER_TD_5470(Table &tbl_JOIN_INNER_TD_6496_output, Table &tbl_Filter_TD_6813_output, Table &tbl_JOIN_INNER_TD_5470_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((hd_income_band_sk#4833 = ib_income_band_sk#4850))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, d_year#4773, d_year#4801, hd_income_band_sk#4833, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    // Right Table: ListBuffer(ib_income_band_sk#4850)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, d_year#4773, d_year#4801, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    int left_nrow = tbl_JOIN_INNER_TD_6496_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6813_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5470_key_leftMajor, SW_JOIN_INNER_TD_5470_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6496_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_income_band_sk4833_k = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_5470_key_leftMajor keyA{_hd_income_band_sk4833_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 0);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 1);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 2);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 7);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 8);
            int32_t _hd_income_band_sk4833 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 9);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
            std::string _ca_street_number4839 = std::string(_ca_street_number4839_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _ca_street_name4840 = std::string(_ca_street_name4840_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
            std::string _ca_city4843 = std::string(_ca_city4843_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
            std::string _ca_zip4846 = std::string(_ca_zip4846_n.data());
            SW_JOIN_INNER_TD_5470_payload_leftMajor payloadA{_ss_item_sk1208, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _d_year4773, _d_year4801, _hd_income_band_sk4833, _ca_street_number56, _ca_street_name57, _ca_city60, _ca_zip63, _ca_street_number4839, _ca_street_name4840, _ca_city4843, _ca_zip4846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6813_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ib_income_band_sk4850_k = tbl_Filter_TD_6813_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5470_key_leftMajor{_ib_income_band_sk4850_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                int32_t _hd_income_band_sk4833 = (it->second)._hd_income_band_sk4833;
                std::string _ca_street_number56 = (it->second)._ca_street_number56;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n{};
                memcpy(_ca_street_number56_n.data(), (_ca_street_number56).data(), (_ca_street_number56).length());
                std::string _ca_street_name57 = (it->second)._ca_street_name57;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n{};
                memcpy(_ca_street_name57_n.data(), (_ca_street_name57).data(), (_ca_street_name57).length());
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                std::string _ca_street_number4839 = (it->second)._ca_street_number4839;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n{};
                memcpy(_ca_street_number4839_n.data(), (_ca_street_number4839).data(), (_ca_street_number4839).length());
                std::string _ca_street_name4840 = (it->second)._ca_street_name4840;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n{};
                memcpy(_ca_street_name4840_n.data(), (_ca_street_name4840).data(), (_ca_street_name4840).length());
                std::string _ca_city4843 = (it->second)._ca_city4843;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n{};
                memcpy(_ca_city4843_n.data(), (_ca_city4843).data(), (_ca_city4843).length());
                std::string _ca_zip4846 = (it->second)._ca_zip4846;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n{};
                memcpy(_ca_zip4846_n.data(), (_ca_zip4846).data(), (_ca_zip4846).length());
                int32_t _ib_income_band_sk4850 = tbl_Filter_TD_6813_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 1, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip403_n);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 7, _d_year4773);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 8, _d_year4801);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_city60_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_zip63_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_number4839_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_street_name4840_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_city4843_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_zip4846_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5470_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5470_key_rightMajor, SW_JOIN_INNER_TD_5470_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6813_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ib_income_band_sk4850_k = tbl_Filter_TD_6813_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5470_key_rightMajor keyA{_ib_income_band_sk4850_k};
            int32_t _ib_income_band_sk4850 = tbl_Filter_TD_6813_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5470_payload_rightMajor payloadA{_ib_income_band_sk4850};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6496_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_income_band_sk4833_k = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 9);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5470_key_rightMajor{_hd_income_band_sk4833_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ib_income_band_sk4850 = (it->second)._ib_income_band_sk4850;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 0);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 1);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 2);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 7);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 8);
                int32_t _hd_income_band_sk4833 = tbl_JOIN_INNER_TD_6496_output.getInt32(i, 9);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
                std::string _ca_street_number4839 = std::string(_ca_street_number4839_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _ca_street_name4840 = std::string(_ca_street_name4840_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
                std::string _ca_city4843 = std::string(_ca_city4843_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n = tbl_JOIN_INNER_TD_6496_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
                std::string _ca_zip4846 = std::string(_ca_zip4846_n.data());
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 1, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 2, _ss_list_price1218);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 3, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_zip403_n);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 7, _d_year4773);
                tbl_JOIN_INNER_TD_5470_output.setInt32(r, 8, _d_year4801);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_city60_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_zip63_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_number4839_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_street_name4840_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_city4843_n);
                tbl_JOIN_INNER_TD_5470_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 16, _ca_zip4846_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5470_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5470_output #Row: " << tbl_JOIN_INNER_TD_5470_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4630_key_leftMajor {
    int32_t _ss_item_sk5957;
    bool operator==(const SW_JOIN_INNER_TD_4630_key_leftMajor& other) const {
        return ((_ss_item_sk5957 == other._ss_item_sk5957));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4630_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4630_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk5957));
    }
};
}
struct SW_JOIN_INNER_TD_4630_payload_leftMajor {
    int32_t _ss_item_sk5957;
    int32_t _ss_wholesale_cost5966;
    int32_t _ss_list_price5967;
    int32_t _ss_coupon_amt5974;
    int32_t _d_year6065;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    int32_t _d_year6093;
    int32_t _d_year6121;
    std::string _ca_street_number6239;
    std::string _ca_street_name6240;
    std::string _ca_city6243;
    std::string _ca_zip6246;
    std::string _ca_street_number6252;
    std::string _ca_street_name6253;
    std::string _ca_city6256;
    std::string _ca_zip6259;
};
struct SW_JOIN_INNER_TD_4630_key_rightMajor {
    int32_t _i_item_sk6269;
    bool operator==(const SW_JOIN_INNER_TD_4630_key_rightMajor& other) const {
        return ((_i_item_sk6269 == other._i_item_sk6269));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4630_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4630_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6269));
    }
};
}
struct SW_JOIN_INNER_TD_4630_payload_rightMajor {
    int32_t _i_item_sk6269;
    std::string _i_product_name6290;
};
void SW_JOIN_INNER_TD_4630(Table &tbl_JOIN_INNER_TD_5724_output, Table &tbl_Filter_TD_5551_output, Table &tbl_JOIN_INNER_TD_4630_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#5957 = i_item_sk#6269))
    // Left Table: ListBuffer(ss_item_sk#5957, ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, s_store_name#6148, s_zip#6168, d_year#6093, d_year#6121, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259)
    // Right Table: ListBuffer(i_item_sk#6269, i_product_name#6290)
    // Output Table: ListBuffer(ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, d_year#6093, d_year#6121, s_store_name#6148, s_zip#6168, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259, i_item_sk#6269, i_product_name#6290)
    int left_nrow = tbl_JOIN_INNER_TD_5724_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5551_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4630_key_leftMajor, SW_JOIN_INNER_TD_4630_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5724_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk5957_k = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4630_key_leftMajor keyA{_ss_item_sk5957_k};
            int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 0);
            int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 1);
            int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 2);
            int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 3);
            int32_t _d_year6065 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_zip6168 = std::string(_s_zip6168_n.data());
            int32_t _d_year6093 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 7);
            int32_t _d_year6121 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_city6243 = std::string(_ca_city6243_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _ca_street_number6252 = std::string(_ca_street_number6252_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
            std::string _ca_street_name6253 = std::string(_ca_street_name6253_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _ca_city6256 = std::string(_ca_city6256_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
            std::string _ca_zip6259 = std::string(_ca_zip6259_n.data());
            SW_JOIN_INNER_TD_4630_payload_leftMajor payloadA{_ss_item_sk5957, _ss_wholesale_cost5966, _ss_list_price5967, _ss_coupon_amt5974, _d_year6065, _s_store_name6148, _s_zip6168, _d_year6093, _d_year6121, _ca_street_number6239, _ca_street_name6240, _ca_city6243, _ca_zip6246, _ca_street_number6252, _ca_street_name6253, _ca_city6256, _ca_zip6259};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5551_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6269_k = tbl_Filter_TD_5551_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4630_key_leftMajor{_i_item_sk6269_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk5957 = (it->second)._ss_item_sk5957;
                int32_t _ss_wholesale_cost5966 = (it->second)._ss_wholesale_cost5966;
                int32_t _ss_list_price5967 = (it->second)._ss_list_price5967;
                int32_t _ss_coupon_amt5974 = (it->second)._ss_coupon_amt5974;
                int32_t _d_year6065 = (it->second)._d_year6065;
                std::string _s_store_name6148 = (it->second)._s_store_name6148;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n{};
                memcpy(_s_store_name6148_n.data(), (_s_store_name6148).data(), (_s_store_name6148).length());
                std::string _s_zip6168 = (it->second)._s_zip6168;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n{};
                memcpy(_s_zip6168_n.data(), (_s_zip6168).data(), (_s_zip6168).length());
                int32_t _d_year6093 = (it->second)._d_year6093;
                int32_t _d_year6121 = (it->second)._d_year6121;
                std::string _ca_street_number6239 = (it->second)._ca_street_number6239;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n{};
                memcpy(_ca_street_number6239_n.data(), (_ca_street_number6239).data(), (_ca_street_number6239).length());
                std::string _ca_street_name6240 = (it->second)._ca_street_name6240;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n{};
                memcpy(_ca_street_name6240_n.data(), (_ca_street_name6240).data(), (_ca_street_name6240).length());
                std::string _ca_city6243 = (it->second)._ca_city6243;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n{};
                memcpy(_ca_city6243_n.data(), (_ca_city6243).data(), (_ca_city6243).length());
                std::string _ca_zip6246 = (it->second)._ca_zip6246;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n{};
                memcpy(_ca_zip6246_n.data(), (_ca_zip6246).data(), (_ca_zip6246).length());
                std::string _ca_street_number6252 = (it->second)._ca_street_number6252;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n{};
                memcpy(_ca_street_number6252_n.data(), (_ca_street_number6252).data(), (_ca_street_number6252).length());
                std::string _ca_street_name6253 = (it->second)._ca_street_name6253;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n{};
                memcpy(_ca_street_name6253_n.data(), (_ca_street_name6253).data(), (_ca_street_name6253).length());
                std::string _ca_city6256 = (it->second)._ca_city6256;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n{};
                memcpy(_ca_city6256_n.data(), (_ca_city6256).data(), (_ca_city6256).length());
                std::string _ca_zip6259 = (it->second)._ca_zip6259;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n{};
                memcpy(_ca_zip6259_n.data(), (_ca_zip6259).data(), (_ca_zip6259).length());
                int32_t _i_item_sk6269 = tbl_Filter_TD_5551_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name6290_n = tbl_Filter_TD_5551_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_product_name6290 = std::string(_i_product_name6290_n.data());
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 0, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 1, _ss_list_price5967);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 2, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 3, _d_year6065);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip6168_n);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 4, _d_year6093);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 5, _d_year6121);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_city6243_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip6246_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_number6252_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_name6253_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_city6256_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_zip6259_n);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 16, _i_item_sk6269);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _i_product_name6290_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4630_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4630_key_rightMajor, SW_JOIN_INNER_TD_4630_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5551_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6269_k = tbl_Filter_TD_5551_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4630_key_rightMajor keyA{_i_item_sk6269_k};
            int32_t _i_item_sk6269 = tbl_Filter_TD_5551_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name6290_n = tbl_Filter_TD_5551_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_product_name6290 = std::string(_i_product_name6290_n.data());
            SW_JOIN_INNER_TD_4630_payload_rightMajor payloadA{_i_item_sk6269, _i_product_name6290};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5724_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk5957_k = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4630_key_rightMajor{_ss_item_sk5957_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6269 = (it->second)._i_item_sk6269;
                std::string _i_product_name6290 = (it->second)._i_product_name6290;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name6290_n{};
                memcpy(_i_product_name6290_n.data(), (_i_product_name6290).data(), (_i_product_name6290).length());
                int32_t _ss_item_sk5957 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 0);
                int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 1);
                int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 2);
                int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 3);
                int32_t _d_year6065 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name6148 = std::string(_s_store_name6148_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip6168_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_zip6168 = std::string(_s_zip6168_n.data());
                int32_t _d_year6093 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 7);
                int32_t _d_year6121 = tbl_JOIN_INNER_TD_5724_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _ca_street_number6239 = std::string(_ca_street_number6239_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _ca_street_name6240 = std::string(_ca_street_name6240_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6243_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_city6243 = std::string(_ca_city6243_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _ca_zip6246 = std::string(_ca_zip6246_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _ca_street_number6252 = std::string(_ca_street_number6252_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
                std::string _ca_street_name6253 = std::string(_ca_street_name6253_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city6256_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _ca_city6256 = std::string(_ca_city6256_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259_n = tbl_JOIN_INNER_TD_5724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
                std::string _ca_zip6259 = std::string(_ca_zip6259_n.data());
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 16, _i_item_sk6269);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _i_product_name6290_n);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 0, _ss_wholesale_cost5966);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 1, _ss_list_price5967);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 2, _ss_coupon_amt5974);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 3, _d_year6065);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name6148_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip6168_n);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 4, _d_year6093);
                tbl_JOIN_INNER_TD_4630_output.setInt32(r, 5, _d_year6121);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_street_number6239_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_street_name6240_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_city6243_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip6246_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_number6252_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_name6253_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_city6256_n);
                tbl_JOIN_INNER_TD_4630_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_zip6259_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4630_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4630_output #Row: " << tbl_JOIN_INNER_TD_4630_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4497_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_4497_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4497_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4497_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_4497_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_wholesale_cost1217;
    int32_t _ss_list_price1218;
    int32_t _ss_coupon_amt1225;
    int32_t _d_year126;
    std::string _s_store_name383;
    std::string _s_zip403;
    int32_t _d_year4773;
    int32_t _d_year4801;
    std::string _ca_street_number56;
    std::string _ca_street_name57;
    std::string _ca_city60;
    std::string _ca_zip63;
    std::string _ca_street_number4839;
    std::string _ca_street_name4840;
    std::string _ca_city4843;
    std::string _ca_zip4846;
};
struct SW_JOIN_INNER_TD_4497_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_4497_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4497_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4497_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_4497_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_product_name249;
};
void SW_JOIN_INNER_TD_4497(Table &tbl_JOIN_INNER_TD_5470_output, Table &tbl_Filter_TD_5300_output, Table &tbl_JOIN_INNER_TD_4497_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, s_store_name#383, s_zip#403, d_year#4773, d_year#4801, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846)
    // Right Table: ListBuffer(i_item_sk#228, i_product_name#249)
    // Output Table: ListBuffer(ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, d_year#4773, d_year#4801, s_store_name#383, s_zip#403, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846, i_item_sk#228, i_product_name#249)
    int left_nrow = tbl_JOIN_INNER_TD_5470_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5300_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4497_key_leftMajor, SW_JOIN_INNER_TD_4497_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5470_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4497_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 0);
            int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 1);
            int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 2);
            int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 3);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            int32_t _d_year4773 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 7);
            int32_t _d_year4801 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 8);
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
            std::string _ca_street_number4839 = std::string(_ca_street_number4839_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
            std::string _ca_street_name4840 = std::string(_ca_street_name4840_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
            std::string _ca_city4843 = std::string(_ca_city4843_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
            std::string _ca_zip4846 = std::string(_ca_zip4846_n.data());
            SW_JOIN_INNER_TD_4497_payload_leftMajor payloadA{_ss_item_sk1208, _ss_wholesale_cost1217, _ss_list_price1218, _ss_coupon_amt1225, _d_year126, _s_store_name383, _s_zip403, _d_year4773, _d_year4801, _ca_street_number56, _ca_street_name57, _ca_city60, _ca_zip63, _ca_street_number4839, _ca_street_name4840, _ca_city4843, _ca_zip4846};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5300_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5300_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4497_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_wholesale_cost1217 = (it->second)._ss_wholesale_cost1217;
                int32_t _ss_list_price1218 = (it->second)._ss_list_price1218;
                int32_t _ss_coupon_amt1225 = (it->second)._ss_coupon_amt1225;
                int32_t _d_year126 = (it->second)._d_year126;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _d_year4773 = (it->second)._d_year4773;
                int32_t _d_year4801 = (it->second)._d_year4801;
                std::string _ca_street_number56 = (it->second)._ca_street_number56;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n{};
                memcpy(_ca_street_number56_n.data(), (_ca_street_number56).data(), (_ca_street_number56).length());
                std::string _ca_street_name57 = (it->second)._ca_street_name57;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n{};
                memcpy(_ca_street_name57_n.data(), (_ca_street_name57).data(), (_ca_street_name57).length());
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                std::string _ca_street_number4839 = (it->second)._ca_street_number4839;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n{};
                memcpy(_ca_street_number4839_n.data(), (_ca_street_number4839).data(), (_ca_street_number4839).length());
                std::string _ca_street_name4840 = (it->second)._ca_street_name4840;
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n{};
                memcpy(_ca_street_name4840_n.data(), (_ca_street_name4840).data(), (_ca_street_name4840).length());
                std::string _ca_city4843 = (it->second)._ca_city4843;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n{};
                memcpy(_ca_city4843_n.data(), (_ca_city4843).data(), (_ca_city4843).length());
                std::string _ca_zip4846 = (it->second)._ca_zip4846;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n{};
                memcpy(_ca_zip4846_n.data(), (_ca_zip4846).data(), (_ca_zip4846).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_5300_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_5300_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 0, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 1, _ss_list_price1218);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 2, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name383_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip403_n);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 4, _d_year4773);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 5, _d_year4801);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_city60_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip63_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_number4839_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_name4840_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_city4843_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_zip4846_n);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 16, _i_item_sk228);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4497_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4497_key_rightMajor, SW_JOIN_INNER_TD_4497_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5300_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_5300_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4497_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_5300_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_5300_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_4497_payload_rightMajor payloadA{_i_item_sk228, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5470_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4497_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 0);
                int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 1);
                int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 2);
                int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 3);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                int32_t _d_year4773 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 7);
                int32_t _d_year4801 = tbl_JOIN_INNER_TD_5470_output.getInt32(i, 8);
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _ca_street_number56 = std::string(_ca_street_number56_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _ca_street_name57 = std::string(_ca_street_name57_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
                std::string _ca_street_number4839 = std::string(_ca_street_number4839_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
                std::string _ca_street_name4840 = std::string(_ca_street_name4840_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_city4843_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
                std::string _ca_city4843 = std::string(_ca_city4843_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846_n = tbl_JOIN_INNER_TD_5470_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 16);
                std::string _ca_zip4846 = std::string(_ca_zip4846_n.data());
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 16, _i_item_sk228);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 17, _i_product_name249_n);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 0, _ss_wholesale_cost1217);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 1, _ss_list_price1218);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 2, _ss_coupon_amt1225);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 3, _d_year126);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _s_store_name383_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _s_zip403_n);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 4, _d_year4773);
                tbl_JOIN_INNER_TD_4497_output.setInt32(r, 5, _d_year4801);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _ca_street_number56_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _ca_street_name57_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _ca_city60_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _ca_zip63_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 12, _ca_street_number4839_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 13, _ca_street_name4840_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 14, _ca_city4843_n);
                tbl_JOIN_INNER_TD_4497_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 15, _ca_zip4846_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4497_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4497_output #Row: " << tbl_JOIN_INNER_TD_4497_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3862_key {
    std::string _i_product_name6290;
    int32_t _i_item_sk6269;
    std::string _s_store_name6148;
    std::string _s_zip6168;
    std::string _ca_street_number6239;
    std::string _ca_street_name6240;
    std::string _ca_city6243;
    std::string _ca_zip6246;
    std::string _ca_street_number6252;
    std::string _ca_street_name6253;
    std::string _ca_city6256;
    std::string _ca_zip6259;
    int32_t _d_year6065;
    int32_t _d_year6093;
    int32_t _d_year6121;
    bool operator==(const SW_Aggregate_TD_3862_key& other) const { return (_i_product_name6290 == other._i_product_name6290) && (_i_item_sk6269 == other._i_item_sk6269) && (_s_store_name6148 == other._s_store_name6148) && (_s_zip6168 == other._s_zip6168) && (_ca_street_number6239 == other._ca_street_number6239) && (_ca_street_name6240 == other._ca_street_name6240) && (_ca_city6243 == other._ca_city6243) && (_ca_zip6246 == other._ca_zip6246) && (_ca_street_number6252 == other._ca_street_number6252) && (_ca_street_name6253 == other._ca_street_name6253) && (_ca_city6256 == other._ca_city6256) && (_ca_zip6259 == other._ca_zip6259) && (_d_year6065 == other._d_year6065) && (_d_year6093 == other._d_year6093) && (_d_year6121 == other._d_year6121); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3862_key> {
    std::size_t operator() (const SW_Aggregate_TD_3862_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_product_name6290)) + (hash<int32_t>()(k._i_item_sk6269)) + (hash<string>()(k._s_store_name6148)) + (hash<string>()(k._s_zip6168)) + (hash<string>()(k._ca_street_number6239)) + (hash<string>()(k._ca_street_name6240)) + (hash<string>()(k._ca_city6243)) + (hash<string>()(k._ca_zip6246)) + (hash<string>()(k._ca_street_number6252)) + (hash<string>()(k._ca_street_name6253)) + (hash<string>()(k._ca_city6256)) + (hash<string>()(k._ca_zip6259)) + (hash<int32_t>()(k._d_year6065)) + (hash<int32_t>()(k._d_year6093)) + (hash<int32_t>()(k._d_year6121));
    }
};
}
struct SW_Aggregate_TD_3862_payload {
    int32_t _item_sk4862;
    std::string _store_name4863;
    std::string _store_zip4864;
    int32_t _syear4873;
    int64_t _cnt4876L_count_0;
    int32_t _s14877_sum_1;
    int32_t _s24878_sum_2;
    int32_t _s34879_sum_3;
};
void SW_Aggregate_TD_3862(Table &tbl_JOIN_INNER_TD_4630_output, Table &tbl_Aggregate_TD_3862_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_product_name#6290, i_item_sk#6269, s_store_name#6148, s_zip#6168, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259, d_year#6065, d_year#6093, d_year#6121, i_item_sk#6269 AS item_sk#4862, s_store_name#6148 AS store_name#4863, s_zip#6168 AS store_zip#4864, d_year#6065 AS syear#4873, count(1) AS cnt#4876L, MakeDecimal(sum(UnscaledValue(ss_wholesale_cost#5966)),17,2) AS s1#4877, MakeDecimal(sum(UnscaledValue(ss_list_price#5967)),17,2) AS s2#4878, MakeDecimal(sum(UnscaledValue(ss_coupon_amt#5974)),17,2) AS s3#4879)
    // Input: ListBuffer(ss_wholesale_cost#5966, ss_list_price#5967, ss_coupon_amt#5974, d_year#6065, d_year#6093, d_year#6121, s_store_name#6148, s_zip#6168, ca_street_number#6239, ca_street_name#6240, ca_city#6243, ca_zip#6246, ca_street_number#6252, ca_street_name#6253, ca_city#6256, ca_zip#6259, i_item_sk#6269, i_product_name#6290)
    // Output: ListBuffer(item_sk#4862, store_name#4863, store_zip#4864, syear#4873, cnt#4876L, s1#4877, s2#4878, s3#4879)
    std::unordered_map<SW_Aggregate_TD_3862_key, SW_Aggregate_TD_3862_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4630_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_wholesale_cost5966 = tbl_JOIN_INNER_TD_4630_output.getInt32(i, 0);
        int32_t _ss_list_price5967 = tbl_JOIN_INNER_TD_4630_output.getInt32(i, 1);
        int32_t _ss_coupon_amt5974 = tbl_JOIN_INNER_TD_4630_output.getInt32(i, 2);
        int32_t _d_year6065 = tbl_JOIN_INNER_TD_4630_output.getInt32(i, 3);
        int32_t _d_year6093 = tbl_JOIN_INNER_TD_4630_output.getInt32(i, 4);
        int32_t _d_year6121 = tbl_JOIN_INNER_TD_4630_output.getInt32(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name6148 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _s_zip6168 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6239 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6240 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city6243 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip6246 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number6252 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name6253 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city6256 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip6259 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
        int32_t _i_item_sk6269 = tbl_JOIN_INNER_TD_4630_output.getInt32(i, 16);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name6290 = tbl_JOIN_INNER_TD_4630_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
        SW_Aggregate_TD_3862_key k{std::string(_i_product_name6290.data()), _i_item_sk6269, std::string(_s_store_name6148.data()), std::string(_s_zip6168.data()), std::string(_ca_street_number6239.data()), std::string(_ca_street_name6240.data()), std::string(_ca_city6243.data()), std::string(_ca_zip6246.data()), std::string(_ca_street_number6252.data()), std::string(_ca_street_name6253.data()), std::string(_ca_city6256.data()), std::string(_ca_zip6259.data()), _d_year6065, _d_year6093, _d_year6121};
        int32_t _item_sk4862 = _i_item_sk6269;
        std::array<char, TPCDS_READ_MAX + 1> _store_name4863 = _s_store_name6148;
        std::array<char, TPCDS_READ_MAX + 1> _store_zip4864 = _s_zip6168;
        int32_t _syear4873 = _d_year6065;
        int64_t _cnt4876L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _s14877_sum_1 = _ss_wholesale_cost5966;
        int64_t _s24878_sum_2 = _ss_list_price5967;
        int64_t _s34879_sum_3 = _ss_coupon_amt5974;
        SW_Aggregate_TD_3862_payload p{_item_sk4862, std::string(_store_name4863.data()), std::string(_store_zip4864.data()), _syear4873, _cnt4876L_count_0, _s14877_sum_1, _s24878_sum_2, _s34879_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt4876L_count_0 + _cnt4876L_count_0;
            p._cnt4876L_count_0 = count_0;
            int32_t sum_1 = (it->second)._s14877_sum_1 + _s14877_sum_1;
            p._s14877_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._s24878_sum_2 + _s24878_sum_2;
            p._s24878_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._s34879_sum_3 + _s34879_sum_3;
            p._s34879_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_product_name6290 not required in the output table
        // _i_item_sk6269 not required in the output table
        // _s_store_name6148 not required in the output table
        // _s_zip6168 not required in the output table
        // _ca_street_number6239 not required in the output table
        // _ca_street_name6240 not required in the output table
        // _ca_city6243 not required in the output table
        // _ca_zip6246 not required in the output table
        // _ca_street_number6252 not required in the output table
        // _ca_street_name6253 not required in the output table
        // _ca_city6256 not required in the output table
        // _ca_zip6259 not required in the output table
        // _d_year6065 not required in the output table
        // _d_year6093 not required in the output table
        // _d_year6121 not required in the output table
        tbl_Aggregate_TD_3862_output.setInt32(r, 0, (it.second)._item_sk4862);
        std::array<char, TPCDS_READ_MAX + 1> _store_name4863_n{};
        memcpy(_store_name4863_n.data(), (it.second)._store_name4863.data(), (it.second)._store_name4863.length());
        tbl_Aggregate_TD_3862_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _store_name4863_n);
        std::array<char, TPCDS_READ_MAX + 1> _store_zip4864_n{};
        memcpy(_store_zip4864_n.data(), (it.second)._store_zip4864.data(), (it.second)._store_zip4864.length());
        tbl_Aggregate_TD_3862_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _store_zip4864_n);
        tbl_Aggregate_TD_3862_output.setInt32(r, 3, (it.second)._syear4873);
        int64_t _cnt4876L = (it.second)._cnt4876L_count_0;
        tbl_Aggregate_TD_3862_output.setInt64(r, 4, _cnt4876L);
        int32_t _s14877 = (it.second)._s14877_sum_1;
        tbl_Aggregate_TD_3862_output.setInt32(r, 5, _s14877);
        int32_t _s24878 = (it.second)._s24878_sum_2;
        tbl_Aggregate_TD_3862_output.setInt32(r, 6, _s24878);
        int32_t _s34879 = (it.second)._s34879_sum_3;
        tbl_Aggregate_TD_3862_output.setInt32(r, 7, _s34879);
        ++r;
    }
    tbl_Aggregate_TD_3862_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3862_output #Row: " << tbl_Aggregate_TD_3862_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3191_key {
    std::string _i_product_name249;
    int32_t _i_item_sk228;
    std::string _s_store_name383;
    std::string _s_zip403;
    std::string _ca_street_number56;
    std::string _ca_street_name57;
    std::string _ca_city60;
    std::string _ca_zip63;
    std::string _ca_street_number4839;
    std::string _ca_street_name4840;
    std::string _ca_city4843;
    std::string _ca_zip4846;
    int32_t _d_year126;
    int32_t _d_year4773;
    int32_t _d_year4801;
    bool operator==(const SW_Aggregate_TD_3191_key& other) const { return (_i_product_name249 == other._i_product_name249) && (_i_item_sk228 == other._i_item_sk228) && (_s_store_name383 == other._s_store_name383) && (_s_zip403 == other._s_zip403) && (_ca_street_number56 == other._ca_street_number56) && (_ca_street_name57 == other._ca_street_name57) && (_ca_city60 == other._ca_city60) && (_ca_zip63 == other._ca_zip63) && (_ca_street_number4839 == other._ca_street_number4839) && (_ca_street_name4840 == other._ca_street_name4840) && (_ca_city4843 == other._ca_city4843) && (_ca_zip4846 == other._ca_zip4846) && (_d_year126 == other._d_year126) && (_d_year4773 == other._d_year4773) && (_d_year4801 == other._d_year4801); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3191_key> {
    std::size_t operator() (const SW_Aggregate_TD_3191_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_product_name249)) + (hash<int32_t>()(k._i_item_sk228)) + (hash<string>()(k._s_store_name383)) + (hash<string>()(k._s_zip403)) + (hash<string>()(k._ca_street_number56)) + (hash<string>()(k._ca_street_name57)) + (hash<string>()(k._ca_city60)) + (hash<string>()(k._ca_zip63)) + (hash<string>()(k._ca_street_number4839)) + (hash<string>()(k._ca_street_name4840)) + (hash<string>()(k._ca_city4843)) + (hash<string>()(k._ca_zip4846)) + (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._d_year4773)) + (hash<int32_t>()(k._d_year4801));
    }
};
}
struct SW_Aggregate_TD_3191_payload {
    std::string _product_name4748;
    int32_t _item_sk4749;
    std::string _store_name4750;
    std::string _store_zip4751;
    std::string _b_street_number4752;
    std::string _b_streen_name4753;
    std::string _b_city4754;
    std::string _b_zip4755;
    std::string _c_street_number4756;
    std::string _c_street_name4757;
    std::string _c_city4758;
    std::string _c_zip4759;
    int32_t _syear4760;
    int64_t _cnt4763L_count_0;
    int32_t _s14764_sum_1;
    int32_t _s24765_sum_2;
    int32_t _s34766_sum_3;
};
void SW_Aggregate_TD_3191(Table &tbl_JOIN_INNER_TD_4497_output, Table &tbl_Aggregate_TD_3191_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_product_name#249, i_item_sk#228, s_store_name#383, s_zip#403, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846, d_year#126, d_year#4773, d_year#4801, i_product_name#249 AS product_name#4748, i_item_sk#228 AS item_sk#4749, s_store_name#383 AS store_name#4750, s_zip#403 AS store_zip#4751, ca_street_number#56 AS b_street_number#4752, ca_street_name#57 AS b_streen_name#4753, ca_city#60 AS b_city#4754, ca_zip#63 AS b_zip#4755, ca_street_number#4839 AS c_street_number#4756, ca_street_name#4840 AS c_street_name#4757, ca_city#4843 AS c_city#4758, ca_zip#4846 AS c_zip#4759, d_year#126 AS syear#4760, count(1) AS cnt#4763L, MakeDecimal(sum(UnscaledValue(ss_wholesale_cost#1217)),17,2) AS s1#4764, MakeDecimal(sum(UnscaledValue(ss_list_price#1218)),17,2) AS s2#4765, MakeDecimal(sum(UnscaledValue(ss_coupon_amt#1225)),17,2) AS s3#4766)
    // Input: ListBuffer(ss_wholesale_cost#1217, ss_list_price#1218, ss_coupon_amt#1225, d_year#126, d_year#4773, d_year#4801, s_store_name#383, s_zip#403, ca_street_number#56, ca_street_name#57, ca_city#60, ca_zip#63, ca_street_number#4839, ca_street_name#4840, ca_city#4843, ca_zip#4846, i_item_sk#228, i_product_name#249)
    // Output: ListBuffer(product_name#4748, item_sk#4749, store_name#4750, store_zip#4751, b_street_number#4752, b_streen_name#4753, b_city#4754, b_zip#4755, c_street_number#4756, c_street_name#4757, c_city#4758, c_zip#4759, syear#4760, cnt#4763L, s1#4764, s2#4765, s3#4766)
    std::unordered_map<SW_Aggregate_TD_3191_key, SW_Aggregate_TD_3191_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4497_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_wholesale_cost1217 = tbl_JOIN_INNER_TD_4497_output.getInt32(i, 0);
        int32_t _ss_list_price1218 = tbl_JOIN_INNER_TD_4497_output.getInt32(i, 1);
        int32_t _ss_coupon_amt1225 = tbl_JOIN_INNER_TD_4497_output.getInt32(i, 2);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4497_output.getInt32(i, 3);
        int32_t _d_year4773 = tbl_JOIN_INNER_TD_4497_output.getInt32(i, 4);
        int32_t _d_year4801 = tbl_JOIN_INNER_TD_4497_output.getInt32(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _s_zip403 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number56 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name57 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_number4839 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 12);
        std::array<char, TPCDS_READ_MAX + 1> _ca_street_name4840 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 13);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city4843 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 14);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip4846 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 15);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_4497_output.getInt32(i, 16);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249 = tbl_JOIN_INNER_TD_4497_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 17);
        SW_Aggregate_TD_3191_key k{std::string(_i_product_name249.data()), _i_item_sk228, std::string(_s_store_name383.data()), std::string(_s_zip403.data()), std::string(_ca_street_number56.data()), std::string(_ca_street_name57.data()), std::string(_ca_city60.data()), std::string(_ca_zip63.data()), std::string(_ca_street_number4839.data()), std::string(_ca_street_name4840.data()), std::string(_ca_city4843.data()), std::string(_ca_zip4846.data()), _d_year126, _d_year4773, _d_year4801};
        std::array<char, TPCDS_READ_MAX + 1> _product_name4748 = _i_product_name249;
        int32_t _item_sk4749 = _i_item_sk228;
        std::array<char, TPCDS_READ_MAX + 1> _store_name4750 = _s_store_name383;
        std::array<char, TPCDS_READ_MAX + 1> _store_zip4751 = _s_zip403;
        std::array<char, TPCDS_READ_MAX + 1> _b_street_number4752 = _ca_street_number56;
        std::array<char, TPCDS_READ_MAX + 1> _b_streen_name4753 = _ca_street_name57;
        std::array<char, TPCDS_READ_MAX + 1> _b_city4754 = _ca_city60;
        std::array<char, TPCDS_READ_MAX + 1> _b_zip4755 = _ca_zip63;
        std::array<char, TPCDS_READ_MAX + 1> _c_street_number4756 = _ca_street_number4839;
        std::array<char, TPCDS_READ_MAX + 1> _c_street_name4757 = _ca_street_name4840;
        std::array<char, TPCDS_READ_MAX + 1> _c_city4758 = _ca_city4843;
        std::array<char, TPCDS_READ_MAX + 1> _c_zip4759 = _ca_zip4846;
        int32_t _syear4760 = _d_year126;
        int64_t _cnt4763L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _s14764_sum_1 = _ss_wholesale_cost1217;
        int64_t _s24765_sum_2 = _ss_list_price1218;
        int64_t _s34766_sum_3 = _ss_coupon_amt1225;
        SW_Aggregate_TD_3191_payload p{std::string(_product_name4748.data()), _item_sk4749, std::string(_store_name4750.data()), std::string(_store_zip4751.data()), std::string(_b_street_number4752.data()), std::string(_b_streen_name4753.data()), std::string(_b_city4754.data()), std::string(_b_zip4755.data()), std::string(_c_street_number4756.data()), std::string(_c_street_name4757.data()), std::string(_c_city4758.data()), std::string(_c_zip4759.data()), _syear4760, _cnt4763L_count_0, _s14764_sum_1, _s24765_sum_2, _s34766_sum_3};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt4763L_count_0 + _cnt4763L_count_0;
            p._cnt4763L_count_0 = count_0;
            int32_t sum_1 = (it->second)._s14764_sum_1 + _s14764_sum_1;
            p._s14764_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._s24765_sum_2 + _s24765_sum_2;
            p._s24765_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._s34766_sum_3 + _s34766_sum_3;
            p._s34766_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_product_name249 not required in the output table
        // _i_item_sk228 not required in the output table
        // _s_store_name383 not required in the output table
        // _s_zip403 not required in the output table
        // _ca_street_number56 not required in the output table
        // _ca_street_name57 not required in the output table
        // _ca_city60 not required in the output table
        // _ca_zip63 not required in the output table
        // _ca_street_number4839 not required in the output table
        // _ca_street_name4840 not required in the output table
        // _ca_city4843 not required in the output table
        // _ca_zip4846 not required in the output table
        // _d_year126 not required in the output table
        // _d_year4773 not required in the output table
        // _d_year4801 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _product_name4748_n{};
        memcpy(_product_name4748_n.data(), (it.second)._product_name4748.data(), (it.second)._product_name4748.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _product_name4748_n);
        tbl_Aggregate_TD_3191_output.setInt32(r, 1, (it.second)._item_sk4749);
        std::array<char, TPCDS_READ_MAX + 1> _store_name4750_n{};
        memcpy(_store_name4750_n.data(), (it.second)._store_name4750.data(), (it.second)._store_name4750.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _store_name4750_n);
        std::array<char, TPCDS_READ_MAX + 1> _store_zip4751_n{};
        memcpy(_store_zip4751_n.data(), (it.second)._store_zip4751.data(), (it.second)._store_zip4751.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _store_zip4751_n);
        std::array<char, TPCDS_READ_MAX + 1> _b_street_number4752_n{};
        memcpy(_b_street_number4752_n.data(), (it.second)._b_street_number4752.data(), (it.second)._b_street_number4752.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _b_street_number4752_n);
        std::array<char, TPCDS_READ_MAX + 1> _b_streen_name4753_n{};
        memcpy(_b_streen_name4753_n.data(), (it.second)._b_streen_name4753.data(), (it.second)._b_streen_name4753.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _b_streen_name4753_n);
        std::array<char, TPCDS_READ_MAX + 1> _b_city4754_n{};
        memcpy(_b_city4754_n.data(), (it.second)._b_city4754.data(), (it.second)._b_city4754.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _b_city4754_n);
        std::array<char, TPCDS_READ_MAX + 1> _b_zip4755_n{};
        memcpy(_b_zip4755_n.data(), (it.second)._b_zip4755.data(), (it.second)._b_zip4755.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _b_zip4755_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_street_number4756_n{};
        memcpy(_c_street_number4756_n.data(), (it.second)._c_street_number4756.data(), (it.second)._c_street_number4756.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_street_number4756_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_street_name4757_n{};
        memcpy(_c_street_name4757_n.data(), (it.second)._c_street_name4757.data(), (it.second)._c_street_name4757.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_street_name4757_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_city4758_n{};
        memcpy(_c_city4758_n.data(), (it.second)._c_city4758.data(), (it.second)._c_city4758.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_city4758_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_zip4759_n{};
        memcpy(_c_zip4759_n.data(), (it.second)._c_zip4759.data(), (it.second)._c_zip4759.length());
        tbl_Aggregate_TD_3191_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _c_zip4759_n);
        tbl_Aggregate_TD_3191_output.setInt32(r, 12, (it.second)._syear4760);
        int64_t _cnt4763L = (it.second)._cnt4763L_count_0;
        tbl_Aggregate_TD_3191_output.setInt64(r, 13, _cnt4763L);
        int32_t _s14764 = (it.second)._s14764_sum_1;
        tbl_Aggregate_TD_3191_output.setInt32(r, 14, _s14764);
        int32_t _s24765 = (it.second)._s24765_sum_2;
        tbl_Aggregate_TD_3191_output.setInt32(r, 15, _s24765);
        int32_t _s34766 = (it.second)._s34766_sum_3;
        tbl_Aggregate_TD_3191_output.setInt32(r, 16, _s34766);
        ++r;
    }
    tbl_Aggregate_TD_3191_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3191_output #Row: " << tbl_Aggregate_TD_3191_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_216_key_leftMajor {
    int32_t _item_sk4749;
    std::string _store_name4750;
    std::string _store_zip4751;
    bool operator==(const SW_JOIN_INNER_TD_216_key_leftMajor& other) const {
        return ((_item_sk4749 == other._item_sk4749) && (_store_name4750 == other._store_name4750) && (_store_zip4751 == other._store_zip4751));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_216_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_216_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk4749)) + (hash<string>()(k._store_name4750)) + (hash<string>()(k._store_zip4751));
    }
};
}
struct SW_JOIN_INNER_TD_216_payload_leftMajor {
    std::string _product_name4748;
    int32_t _item_sk4749;
    std::string _store_name4750;
    std::string _store_zip4751;
    std::string _b_street_number4752;
    std::string _b_streen_name4753;
    std::string _b_city4754;
    std::string _b_zip4755;
    std::string _c_street_number4756;
    std::string _c_street_name4757;
    std::string _c_city4758;
    std::string _c_zip4759;
    int32_t _syear4760;
    int64_t _cnt4763L;
    int32_t _s14764;
    int32_t _s24765;
    int32_t _s34766;
};
struct SW_JOIN_INNER_TD_216_key_rightMajor {
    int32_t _item_sk4862;
    std::string _store_name4863;
    std::string _store_zip4864;
    bool operator==(const SW_JOIN_INNER_TD_216_key_rightMajor& other) const {
        return ((_item_sk4862 == other._item_sk4862) && (_store_name4863 == other._store_name4863) && (_store_zip4864 == other._store_zip4864));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_216_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_216_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk4862)) + (hash<string>()(k._store_name4863)) + (hash<string>()(k._store_zip4864));
    }
};
}
struct SW_JOIN_INNER_TD_216_payload_rightMajor {
    int32_t _item_sk4862;
    std::string _store_name4863;
    std::string _store_zip4864;
    int32_t _syear4873;
    int64_t _cnt4876L;
    int32_t _s14877;
    int32_t _s24878;
    int32_t _s34879;
};
void SW_JOIN_INNER_TD_216(Table &tbl_Aggregate_TD_3191_output, Table &tbl_Aggregate_TD_3862_output, Table &tbl_JOIN_INNER_TD_216_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((((item_sk#4749 = item_sk#4862) AND (cnt#4876L <= cnt#4763L)) AND (store_name#4750 = store_name#4863)) AND (store_zip#4751 = store_zip#4864)))
    // Left Table: ListBuffer(product_name#4748, item_sk#4749, store_name#4750, store_zip#4751, b_street_number#4752, b_streen_name#4753, b_city#4754, b_zip#4755, c_street_number#4756, c_street_name#4757, c_city#4758, c_zip#4759, syear#4760, cnt#4763L, s1#4764, s2#4765, s3#4766)
    // Right Table: ListBuffer(item_sk#4862, store_name#4863, store_zip#4864, syear#4873, cnt#4876L, s1#4877, s2#4878, s3#4879)
    // Output Table: ListBuffer(product_name#4748, store_name#4750, store_zip#4751, b_street_number#4752, b_streen_name#4753, b_city#4754, b_zip#4755, c_street_number#4756, c_street_name#4757, c_city#4758, c_zip#4759, syear#4760, cnt#4763L, s1#4764, s2#4765, s3#4766, s1#4877, s2#4878, s3#4879, syear#4873, cnt#4876L)
    int left_nrow = tbl_Aggregate_TD_3191_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3862_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_216_key_leftMajor, SW_JOIN_INNER_TD_216_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3191_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk4749_k = tbl_Aggregate_TD_3191_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _store_name4750_k_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _store_name4750_k = std::string(_store_name4750_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _store_zip4751_k_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _store_zip4751_k = std::string(_store_zip4751_k_n.data());
            SW_JOIN_INNER_TD_216_key_leftMajor keyA{_item_sk4749_k, _store_name4750_k, _store_zip4751_k};
            std::array<char, TPCDS_READ_MAX + 1> _product_name4748_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _product_name4748 = std::string(_product_name4748_n.data());
            int32_t _item_sk4749 = tbl_Aggregate_TD_3191_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _store_name4750_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _store_name4750 = std::string(_store_name4750_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _store_zip4751_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _store_zip4751 = std::string(_store_zip4751_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _b_street_number4752_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _b_street_number4752 = std::string(_b_street_number4752_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _b_streen_name4753_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _b_streen_name4753 = std::string(_b_streen_name4753_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _b_city4754_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _b_city4754 = std::string(_b_city4754_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _b_zip4755_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _b_zip4755 = std::string(_b_zip4755_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_street_number4756_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _c_street_number4756 = std::string(_c_street_number4756_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_street_name4757_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _c_street_name4757 = std::string(_c_street_name4757_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_city4758_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _c_city4758 = std::string(_c_city4758_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_zip4759_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _c_zip4759 = std::string(_c_zip4759_n.data());
            int32_t _syear4760 = tbl_Aggregate_TD_3191_output.getInt32(i, 12);
            int64_t _cnt4763L = tbl_Aggregate_TD_3191_output.getInt64(i, 13);
            int32_t _s14764 = tbl_Aggregate_TD_3191_output.getInt32(i, 14);
            int32_t _s24765 = tbl_Aggregate_TD_3191_output.getInt32(i, 15);
            int32_t _s34766 = tbl_Aggregate_TD_3191_output.getInt32(i, 16);
            SW_JOIN_INNER_TD_216_payload_leftMajor payloadA{_product_name4748, _item_sk4749, _store_name4750, _store_zip4751, _b_street_number4752, _b_streen_name4753, _b_city4754, _b_zip4755, _c_street_number4756, _c_street_name4757, _c_city4758, _c_zip4759, _syear4760, _cnt4763L, _s14764, _s24765, _s34766};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_3862_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _item_sk4862_k = tbl_Aggregate_TD_3862_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _store_name4863_k_n = tbl_Aggregate_TD_3862_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _store_name4863_k = std::string(_store_name4863_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _store_zip4864_k_n = tbl_Aggregate_TD_3862_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _store_zip4864_k = std::string(_store_zip4864_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_216_key_leftMajor{_item_sk4862_k, _store_name4863_k, _store_zip4864_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _product_name4748 = (it->second)._product_name4748;
                std::array<char, TPCDS_READ_MAX + 1> _product_name4748_n{};
                memcpy(_product_name4748_n.data(), (_product_name4748).data(), (_product_name4748).length());
                int32_t _item_sk4749 = (it->second)._item_sk4749;
                std::string _store_name4750 = (it->second)._store_name4750;
                std::array<char, TPCDS_READ_MAX + 1> _store_name4750_n{};
                memcpy(_store_name4750_n.data(), (_store_name4750).data(), (_store_name4750).length());
                std::string _store_zip4751 = (it->second)._store_zip4751;
                std::array<char, TPCDS_READ_MAX + 1> _store_zip4751_n{};
                memcpy(_store_zip4751_n.data(), (_store_zip4751).data(), (_store_zip4751).length());
                std::string _b_street_number4752 = (it->second)._b_street_number4752;
                std::array<char, TPCDS_READ_MAX + 1> _b_street_number4752_n{};
                memcpy(_b_street_number4752_n.data(), (_b_street_number4752).data(), (_b_street_number4752).length());
                std::string _b_streen_name4753 = (it->second)._b_streen_name4753;
                std::array<char, TPCDS_READ_MAX + 1> _b_streen_name4753_n{};
                memcpy(_b_streen_name4753_n.data(), (_b_streen_name4753).data(), (_b_streen_name4753).length());
                std::string _b_city4754 = (it->second)._b_city4754;
                std::array<char, TPCDS_READ_MAX + 1> _b_city4754_n{};
                memcpy(_b_city4754_n.data(), (_b_city4754).data(), (_b_city4754).length());
                std::string _b_zip4755 = (it->second)._b_zip4755;
                std::array<char, TPCDS_READ_MAX + 1> _b_zip4755_n{};
                memcpy(_b_zip4755_n.data(), (_b_zip4755).data(), (_b_zip4755).length());
                std::string _c_street_number4756 = (it->second)._c_street_number4756;
                std::array<char, TPCDS_READ_MAX + 1> _c_street_number4756_n{};
                memcpy(_c_street_number4756_n.data(), (_c_street_number4756).data(), (_c_street_number4756).length());
                std::string _c_street_name4757 = (it->second)._c_street_name4757;
                std::array<char, TPCDS_READ_MAX + 1> _c_street_name4757_n{};
                memcpy(_c_street_name4757_n.data(), (_c_street_name4757).data(), (_c_street_name4757).length());
                std::string _c_city4758 = (it->second)._c_city4758;
                std::array<char, TPCDS_READ_MAX + 1> _c_city4758_n{};
                memcpy(_c_city4758_n.data(), (_c_city4758).data(), (_c_city4758).length());
                std::string _c_zip4759 = (it->second)._c_zip4759;
                std::array<char, TPCDS_READ_MAX + 1> _c_zip4759_n{};
                memcpy(_c_zip4759_n.data(), (_c_zip4759).data(), (_c_zip4759).length());
                int32_t _syear4760 = (it->second)._syear4760;
                int64_t _cnt4763L = (it->second)._cnt4763L;
                int32_t _s14764 = (it->second)._s14764;
                int32_t _s24765 = (it->second)._s24765;
                int32_t _s34766 = (it->second)._s34766;
                int32_t _item_sk4862 = tbl_Aggregate_TD_3862_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _store_name4863_n = tbl_Aggregate_TD_3862_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _store_name4863 = std::string(_store_name4863_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _store_zip4864_n = tbl_Aggregate_TD_3862_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _store_zip4864 = std::string(_store_zip4864_n.data());
                int32_t _syear4873 = tbl_Aggregate_TD_3862_output.getInt32(i, 3);
                int64_t _cnt4876L = tbl_Aggregate_TD_3862_output.getInt64(i, 4);
                int32_t _s14877 = tbl_Aggregate_TD_3862_output.getInt32(i, 5);
                int32_t _s24878 = tbl_Aggregate_TD_3862_output.getInt32(i, 6);
                int32_t _s34879 = tbl_Aggregate_TD_3862_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _product_name4748_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _store_name4750_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _store_zip4751_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _b_street_number4752_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _b_streen_name4753_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _b_city4754_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _b_zip4755_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_street_number4756_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_street_name4757_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_city4758_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_zip4759_n);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 11, _syear4760);
                tbl_JOIN_INNER_TD_216_output.setInt64(r, 12, _cnt4763L);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 13, _s14764);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 14, _s24765);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 15, _s34766);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 19, _syear4873);
                tbl_JOIN_INNER_TD_216_output.setInt64(r, 20, _cnt4876L);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 16, _s14877);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 17, _s24878);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 18, _s34879);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_216_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_216_key_rightMajor, SW_JOIN_INNER_TD_216_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3862_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk4862_k = tbl_Aggregate_TD_3862_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _store_name4863_k_n = tbl_Aggregate_TD_3862_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _store_name4863_k = std::string(_store_name4863_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _store_zip4864_k_n = tbl_Aggregate_TD_3862_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _store_zip4864_k = std::string(_store_zip4864_k_n.data());
            SW_JOIN_INNER_TD_216_key_rightMajor keyA{_item_sk4862_k, _store_name4863_k, _store_zip4864_k};
            int32_t _item_sk4862 = tbl_Aggregate_TD_3862_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _store_name4863_n = tbl_Aggregate_TD_3862_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _store_name4863 = std::string(_store_name4863_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _store_zip4864_n = tbl_Aggregate_TD_3862_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _store_zip4864 = std::string(_store_zip4864_n.data());
            int32_t _syear4873 = tbl_Aggregate_TD_3862_output.getInt32(i, 3);
            int64_t _cnt4876L = tbl_Aggregate_TD_3862_output.getInt64(i, 4);
            int32_t _s14877 = tbl_Aggregate_TD_3862_output.getInt32(i, 5);
            int32_t _s24878 = tbl_Aggregate_TD_3862_output.getInt32(i, 6);
            int32_t _s34879 = tbl_Aggregate_TD_3862_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_216_payload_rightMajor payloadA{_item_sk4862, _store_name4863, _store_zip4864, _syear4873, _cnt4876L, _s14877, _s24878, _s34879};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_3191_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _item_sk4749_k = tbl_Aggregate_TD_3191_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _store_name4750_k_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _store_name4750_k = std::string(_store_name4750_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _store_zip4751_k_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _store_zip4751_k = std::string(_store_zip4751_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_216_key_rightMajor{_item_sk4749_k, _store_name4750_k, _store_zip4751_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _item_sk4862 = (it->second)._item_sk4862;
                std::string _store_name4863 = (it->second)._store_name4863;
                std::array<char, TPCDS_READ_MAX + 1> _store_name4863_n{};
                memcpy(_store_name4863_n.data(), (_store_name4863).data(), (_store_name4863).length());
                std::string _store_zip4864 = (it->second)._store_zip4864;
                std::array<char, TPCDS_READ_MAX + 1> _store_zip4864_n{};
                memcpy(_store_zip4864_n.data(), (_store_zip4864).data(), (_store_zip4864).length());
                int32_t _syear4873 = (it->second)._syear4873;
                int64_t _cnt4876L = (it->second)._cnt4876L;
                int32_t _s14877 = (it->second)._s14877;
                int32_t _s24878 = (it->second)._s24878;
                int32_t _s34879 = (it->second)._s34879;
                std::array<char, TPCDS_READ_MAX + 1> _product_name4748_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _product_name4748 = std::string(_product_name4748_n.data());
                int32_t _item_sk4749 = tbl_Aggregate_TD_3191_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _store_name4750_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _store_name4750 = std::string(_store_name4750_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _store_zip4751_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _store_zip4751 = std::string(_store_zip4751_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _b_street_number4752_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _b_street_number4752 = std::string(_b_street_number4752_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _b_streen_name4753_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _b_streen_name4753 = std::string(_b_streen_name4753_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _b_city4754_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _b_city4754 = std::string(_b_city4754_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _b_zip4755_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _b_zip4755 = std::string(_b_zip4755_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_street_number4756_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _c_street_number4756 = std::string(_c_street_number4756_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_street_name4757_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _c_street_name4757 = std::string(_c_street_name4757_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_city4758_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _c_city4758 = std::string(_c_city4758_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_zip4759_n = tbl_Aggregate_TD_3191_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _c_zip4759 = std::string(_c_zip4759_n.data());
                int32_t _syear4760 = tbl_Aggregate_TD_3191_output.getInt32(i, 12);
                int64_t _cnt4763L = tbl_Aggregate_TD_3191_output.getInt64(i, 13);
                int32_t _s14764 = tbl_Aggregate_TD_3191_output.getInt32(i, 14);
                int32_t _s24765 = tbl_Aggregate_TD_3191_output.getInt32(i, 15);
                int32_t _s34766 = tbl_Aggregate_TD_3191_output.getInt32(i, 16);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 19, _syear4873);
                tbl_JOIN_INNER_TD_216_output.setInt64(r, 20, _cnt4876L);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 16, _s14877);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 17, _s24878);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 18, _s34879);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _product_name4748_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _store_name4750_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _store_zip4751_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _b_street_number4752_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _b_streen_name4753_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _b_city4754_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _b_zip4755_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_street_number4756_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _c_street_name4757_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _c_city4758_n);
                tbl_JOIN_INNER_TD_216_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _c_zip4759_n);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 11, _syear4760);
                tbl_JOIN_INNER_TD_216_output.setInt64(r, 12, _cnt4763L);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 13, _s14764);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 14, _s24765);
                tbl_JOIN_INNER_TD_216_output.setInt32(r, 15, _s34766);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_216_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_216_output #Row: " << tbl_JOIN_INNER_TD_216_output.getNumRow() << std::endl;
}

void SW_Project_TD_1119(Table &tbl_JOIN_INNER_TD_216_output, Table &tbl_Project_TD_1119_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(s1#4877 AS cs2_s1#4741, s2#4878 AS cs2_s2#4742, s3#4879 AS cs2_s3#4743, syear#4873 AS cs2_syear#4744, cnt#4876L AS cs2_cnt#4745L)
    // Input: ListBuffer(product_name#4748, store_name#4750, store_zip#4751, b_street_number#4752, b_streen_name#4753, b_city#4754, b_zip#4755, c_street_number#4756, c_street_name#4757, c_city#4758, c_zip#4759, syear#4760, cnt#4763L, s1#4764, s2#4765, s3#4766, s1#4877, s2#4878, s3#4879, syear#4873, cnt#4876L)
    // Output: ListBuffer(product_name#4748, store_name#4750, store_zip#4751, b_street_number#4752, b_streen_name#4753, b_city#4754, b_zip#4755, c_street_number#4756, c_street_name#4757, c_city#4758, c_zip#4759, syear#4760, cnt#4763L, s1#4764, s2#4765, s3#4766, cs2_s1#4741, cs2_s2#4742, cs2_s3#4743, cs2_syear#4744, cs2_cnt#4745L, cnt#4876L)
    int nrow1 = tbl_JOIN_INNER_TD_216_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _product_name4748 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _store_name4750 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _store_zip4751 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _b_street_number4752 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _b_streen_name4753 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _b_city4754 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _b_zip4755 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _c_street_number4756 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _c_street_name4757 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _c_city4758 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _c_zip4759 = tbl_JOIN_INNER_TD_216_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
        int32_t _syear4760 = tbl_JOIN_INNER_TD_216_output.getInt32(i, 11);
        int64_t _cnt4763L = tbl_JOIN_INNER_TD_216_output.getInt64(i, 12);
        int32_t _s14764 = tbl_JOIN_INNER_TD_216_output.getInt32(i, 13);
        int32_t _s24765 = tbl_JOIN_INNER_TD_216_output.getInt32(i, 14);
        int32_t _s34766 = tbl_JOIN_INNER_TD_216_output.getInt32(i, 15);
        int32_t _s14877 = tbl_JOIN_INNER_TD_216_output.getInt32(i, 16);
        int32_t _s24878 = tbl_JOIN_INNER_TD_216_output.getInt32(i, 17);
        int32_t _s34879 = tbl_JOIN_INNER_TD_216_output.getInt32(i, 18);
        int32_t _syear4873 = tbl_JOIN_INNER_TD_216_output.getInt32(i, 19);
        int64_t _cnt4876L = tbl_JOIN_INNER_TD_216_output.getInt64(i, 20);
        int32_t _cs2_s14741 = _s14877;
        tbl_Project_TD_1119_output.setInt32(i, 16, _cs2_s14741);
        int32_t _cs2_s24742 = _s24878;
        tbl_Project_TD_1119_output.setInt32(i, 17, _cs2_s24742);
        int32_t _cs2_s34743 = _s34879;
        tbl_Project_TD_1119_output.setInt32(i, 18, _cs2_s34743);
        int32_t _cs2_syear4744 = _syear4873;
        tbl_Project_TD_1119_output.setInt32(i, 19, _cs2_syear4744);
        int64_t _cs2_cnt4745L = _cnt4876L;
        tbl_Project_TD_1119_output.setInt64(i, 20, _cs2_cnt4745L);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _product_name4748);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _store_name4750);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _store_zip4751);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _b_street_number4752);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 4, _b_streen_name4753);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 5, _b_city4754);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 6, _b_zip4755);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 7, _c_street_number4756);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 8, _c_street_name4757);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 9, _c_city4758);
        tbl_Project_TD_1119_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 10, _c_zip4759);
        tbl_Project_TD_1119_output.setInt32(i, 11, _syear4760);
        tbl_Project_TD_1119_output.setInt64(i, 12, _cnt4763L);
        tbl_Project_TD_1119_output.setInt32(i, 13, _s14764);
        tbl_Project_TD_1119_output.setInt32(i, 14, _s24765);
        tbl_Project_TD_1119_output.setInt32(i, 15, _s34766);
        tbl_Project_TD_1119_output.setInt64(i, 21, _cnt4876L);
    }
    tbl_Project_TD_1119_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1119_output #Row: " << tbl_Project_TD_1119_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0481(Table &tbl_Project_TD_1119_output, Table &tbl_Sort_TD_0481_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(product_name#4748 ASC NULLS FIRST, store_name#4750 ASC NULLS FIRST, cnt#4876L ASC NULLS FIRST)
    // Input: ListBuffer(product_name#4748, store_name#4750, store_zip#4751, b_street_number#4752, b_streen_name#4753, b_city#4754, b_zip#4755, c_street_number#4756, c_street_name#4757, c_city#4758, c_zip#4759, syear#4760, cnt#4763L, s1#4764, s2#4765, s3#4766, cs2_s1#4741, cs2_s2#4742, cs2_s3#4743, cs2_syear#4744, cs2_cnt#4745L, cnt#4876L)
    // Output: ListBuffer(product_name#4748, store_name#4750, store_zip#4751, b_street_number#4752, b_streen_name#4753, b_city#4754, b_zip#4755, c_street_number#4756, c_street_name#4757, c_city#4758, c_zip#4759, syear#4760, cnt#4763L, s1#4764, s2#4765, s3#4766, cs2_s1#4741, cs2_s2#4742, cs2_s3#4743, cs2_syear#4744, cs2_cnt#4745L, cnt#4876L)
    struct SW_Sort_TD_0481Row {
        std::string _product_name4748;
        std::string _store_name4750;
        std::string _store_zip4751;
        std::string _b_street_number4752;
        std::string _b_streen_name4753;
        std::string _b_city4754;
        std::string _b_zip4755;
        std::string _c_street_number4756;
        std::string _c_street_name4757;
        std::string _c_city4758;
        std::string _c_zip4759;
        int32_t _syear4760;
        int64_t _cnt4763L;
        int32_t _s14764;
        int32_t _s24765;
        int32_t _s34766;
        int32_t _cs2_s14741;
        int32_t _cs2_s24742;
        int32_t _cs2_s34743;
        int32_t _cs2_syear4744;
        int64_t _cs2_cnt4745L;
        int64_t _cnt4876L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0481Row& a, const SW_Sort_TD_0481Row& b) const { return 
 (a._product_name4748 < b._product_name4748) || 
 ((a._product_name4748 == b._product_name4748) && (a._store_name4750 < b._store_name4750)) || 
 ((a._product_name4748 == b._product_name4748) && (a._store_name4750 == b._store_name4750) && (a._cnt4876L < b._cnt4876L)); 
}
    }SW_Sort_TD_0481_order; 

    int nrow1 = tbl_Project_TD_1119_output.getNumRow();
    std::vector<SW_Sort_TD_0481Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _product_name4748 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _store_name4750 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _store_zip4751 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _b_street_number4752 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _b_streen_name4753 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _b_city4754 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _b_zip4755 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _c_street_number4756 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _c_street_name4757 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 8);
        std::array<char, TPCDS_READ_MAX + 1> _c_city4758 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 9);
        std::array<char, TPCDS_READ_MAX + 1> _c_zip4759 = tbl_Project_TD_1119_output.getcharN<char, TPCDS_READ_MAX +1>(i, 10);
        int32_t _syear4760 = tbl_Project_TD_1119_output.getInt32(i, 11);
        int64_t _cnt4763L = tbl_Project_TD_1119_output.getInt64(i, 12);
        int32_t _s14764 = tbl_Project_TD_1119_output.getInt32(i, 13);
        int32_t _s24765 = tbl_Project_TD_1119_output.getInt32(i, 14);
        int32_t _s34766 = tbl_Project_TD_1119_output.getInt32(i, 15);
        int32_t _cs2_s14741 = tbl_Project_TD_1119_output.getInt32(i, 16);
        int32_t _cs2_s24742 = tbl_Project_TD_1119_output.getInt32(i, 17);
        int32_t _cs2_s34743 = tbl_Project_TD_1119_output.getInt32(i, 18);
        int32_t _cs2_syear4744 = tbl_Project_TD_1119_output.getInt32(i, 19);
        int64_t _cs2_cnt4745L = tbl_Project_TD_1119_output.getInt64(i, 20);
        int64_t _cnt4876L = tbl_Project_TD_1119_output.getInt64(i, 21);
        SW_Sort_TD_0481Row t = {std::string(_product_name4748.data()),std::string(_store_name4750.data()),std::string(_store_zip4751.data()),std::string(_b_street_number4752.data()),std::string(_b_streen_name4753.data()),std::string(_b_city4754.data()),std::string(_b_zip4755.data()),std::string(_c_street_number4756.data()),std::string(_c_street_name4757.data()),std::string(_c_city4758.data()),std::string(_c_zip4759.data()),_syear4760,_cnt4763L,_s14764,_s24765,_s34766,_cs2_s14741,_cs2_s24742,_cs2_s34743,_cs2_syear4744,_cs2_cnt4745L,_cnt4876L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0481_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _product_name4748{};
        memcpy(_product_name4748.data(), (it._product_name4748).data(), (it._product_name4748).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _product_name4748);
        std::array<char, TPCDS_READ_MAX + 1> _store_name4750{};
        memcpy(_store_name4750.data(), (it._store_name4750).data(), (it._store_name4750).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _store_name4750);
        std::array<char, TPCDS_READ_MAX + 1> _store_zip4751{};
        memcpy(_store_zip4751.data(), (it._store_zip4751).data(), (it._store_zip4751).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _store_zip4751);
        std::array<char, TPCDS_READ_MAX + 1> _b_street_number4752{};
        memcpy(_b_street_number4752.data(), (it._b_street_number4752).data(), (it._b_street_number4752).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _b_street_number4752);
        std::array<char, TPCDS_READ_MAX + 1> _b_streen_name4753{};
        memcpy(_b_streen_name4753.data(), (it._b_streen_name4753).data(), (it._b_streen_name4753).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _b_streen_name4753);
        std::array<char, TPCDS_READ_MAX + 1> _b_city4754{};
        memcpy(_b_city4754.data(), (it._b_city4754).data(), (it._b_city4754).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 5, _b_city4754);
        std::array<char, TPCDS_READ_MAX + 1> _b_zip4755{};
        memcpy(_b_zip4755.data(), (it._b_zip4755).data(), (it._b_zip4755).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _b_zip4755);
        std::array<char, TPCDS_READ_MAX + 1> _c_street_number4756{};
        memcpy(_c_street_number4756.data(), (it._c_street_number4756).data(), (it._c_street_number4756).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 7, _c_street_number4756);
        std::array<char, TPCDS_READ_MAX + 1> _c_street_name4757{};
        memcpy(_c_street_name4757.data(), (it._c_street_name4757).data(), (it._c_street_name4757).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 8, _c_street_name4757);
        std::array<char, TPCDS_READ_MAX + 1> _c_city4758{};
        memcpy(_c_city4758.data(), (it._c_city4758).data(), (it._c_city4758).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 9, _c_city4758);
        std::array<char, TPCDS_READ_MAX + 1> _c_zip4759{};
        memcpy(_c_zip4759.data(), (it._c_zip4759).data(), (it._c_zip4759).length());
        tbl_Sort_TD_0481_output.setcharN<char, TPCDS_READ_MAX +1>(r, 10, _c_zip4759);
        tbl_Sort_TD_0481_output.setInt32(r, 11, it._syear4760);
        tbl_Sort_TD_0481_output.setInt64(r, 12, it._cnt4763L);
        tbl_Sort_TD_0481_output.setInt32(r, 13, it._s14764);
        tbl_Sort_TD_0481_output.setInt32(r, 14, it._s24765);
        tbl_Sort_TD_0481_output.setInt32(r, 15, it._s34766);
        tbl_Sort_TD_0481_output.setInt32(r, 16, it._cs2_s14741);
        tbl_Sort_TD_0481_output.setInt32(r, 17, it._cs2_s24742);
        tbl_Sort_TD_0481_output.setInt32(r, 18, it._cs2_s34743);
        tbl_Sort_TD_0481_output.setInt32(r, 19, it._cs2_syear4744);
        tbl_Sort_TD_0481_output.setInt64(r, 20, it._cs2_cnt4745L);
        tbl_Sort_TD_0481_output.setInt64(r, 21, it._cnt4876L);
        if (r < 10) {
            std::cout << (it._product_name4748).data() << " " << (it._store_name4750).data() << " " << (it._store_zip4751).data() << " " << (it._b_street_number4752).data() << " " << (it._b_streen_name4753).data() << " " << (it._b_city4754).data() << " " << (it._b_zip4755).data() << " " << (it._c_street_number4756).data() << " " << (it._c_street_name4757).data() << " " << (it._c_city4758).data() << " " << (it._c_zip4759).data() << " " << it._syear4760 << " " << it._cnt4763L << " " << it._s14764 << " " << it._s24765 << " " << it._s34766 << " " << it._cs2_s14741 << " " << it._cs2_s24742 << " " << it._cs2_s34743 << " " << it._cs2_syear4744 << " " << it._cs2_cnt4745L << " " << it._cnt4876L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0481_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0481_output #Row: " << tbl_Sort_TD_0481_output.getNumRow() << std::endl;
}

