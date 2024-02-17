#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_4889(Table &tbl_SerializeFromObject_TD_5195_input, Table &tbl_Filter_TD_4889_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#4044) AND ((d_month_seq#4044 >= 1200) AND (d_month_seq#4044 <= 1211))) AND isnotnull(d_date_sk#4041)))
    // Input: ListBuffer(d_date_sk#4041, d_month_seq#4044)
    // Output: ListBuffer(d_date_sk#4041)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5195_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq4044 = tbl_SerializeFromObject_TD_5195_input.getInt32(i, 1);
        int32_t _d_date_sk4041 = tbl_SerializeFromObject_TD_5195_input.getInt32(i, 0);
        if (((_d_month_seq4044!= 0) && ((_d_month_seq4044 >= 1200) && (_d_month_seq4044 <= 1211))) && (_d_date_sk4041!= 0)) {
            int32_t _d_date_sk4041_t = tbl_SerializeFromObject_TD_5195_input.getInt32(i, 0);
            tbl_Filter_TD_4889_output.setInt32(r, 0, _d_date_sk4041_t);
            r++;
        }
    }
    tbl_Filter_TD_4889_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4889_output #Row: " << tbl_Filter_TD_4889_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4479(Table &tbl_SerializeFromObject_TD_527_input, Table &tbl_Filter_TD_4479_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_527_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_527_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_527_input.getInt32(i, 0);
            tbl_Filter_TD_4479_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_527_input.getInt32(i, 1);
            tbl_Filter_TD_4479_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_527_input.getInt32(i, 2);
            tbl_Filter_TD_4479_output.setInt32(r, 2, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_4479_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4479_output #Row: " << tbl_Filter_TD_4479_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4229(Table &tbl_SerializeFromObject_TD_5650_input, Table &tbl_Filter_TD_4229_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5650_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_5650_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_5650_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_5650_input.getInt32(i, 0);
            tbl_Filter_TD_4229_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_4229_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4229_output #Row: " << tbl_Filter_TD_4229_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4373(Table &tbl_SerializeFromObject_TD_5170_input, Table &tbl_Filter_TD_4373_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#1206))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5170_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_5170_input.getInt32(i, 0);
        if (_ss_sold_date_sk1206!= 0) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_5170_input.getInt32(i, 0);
            tbl_Filter_TD_4373_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_5170_input.getInt32(i, 1);
            tbl_Filter_TD_4373_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_5170_input.getInt32(i, 2);
            tbl_Filter_TD_4373_output.setInt32(r, 2, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_4373_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4373_output #Row: " << tbl_Filter_TD_4373_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3485_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_3485_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3485_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3485_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_3485_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_3485_key_rightMajor {
    int32_t _d_date_sk4041;
    bool operator==(const SW_JOIN_INNER_TD_3485_key_rightMajor& other) const {
        return ((_d_date_sk4041 == other._d_date_sk4041));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3485_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3485_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4041));
    }
};
}
struct SW_JOIN_INNER_TD_3485_payload_rightMajor {
    int32_t _d_date_sk4041;
};
void SW_JOIN_INNER_TD_3485(Table &tbl_Filter_TD_4479_output, Table &tbl_Filter_TD_4889_output, Table &tbl_JOIN_INNER_TD_3485_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#4041))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Right Table: ListBuffer(d_date_sk#4041)
    // Output Table: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119)
    int left_nrow = tbl_Filter_TD_4479_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4889_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3485_key_leftMajor, SW_JOIN_INNER_TD_3485_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_4479_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_4479_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3485_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_4479_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_4479_output.getInt32(i, 1);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_4479_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3485_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4889_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4041_k = tbl_Filter_TD_4889_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3485_key_leftMajor{_d_date_sk4041_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _d_date_sk4041 = tbl_Filter_TD_4889_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3485_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_3485_output.setInt32(r, 1, _cs_item_sk1119);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3485_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3485_key_rightMajor, SW_JOIN_INNER_TD_3485_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4889_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4041_k = tbl_Filter_TD_4889_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3485_key_rightMajor keyA{_d_date_sk4041_k};
            int32_t _d_date_sk4041 = tbl_Filter_TD_4889_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3485_payload_rightMajor payloadA{_d_date_sk4041};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4479_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_4479_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3485_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4041 = (it->second)._d_date_sk4041;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_4479_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_4479_output.getInt32(i, 1);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_4479_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3485_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_3485_output.setInt32(r, 1, _cs_item_sk1119);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3485_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3485_output #Row: " << tbl_JOIN_INNER_TD_3485_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3314_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_3314_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3314_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3314_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_3314_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_3314_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_3314_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3314_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3314_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_3314_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_3314(Table &tbl_Filter_TD_4373_output, Table &tbl_Filter_TD_4229_output, Table &tbl_JOIN_INNER_TD_3314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209)
    int left_nrow = tbl_Filter_TD_4373_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4229_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3314_key_leftMajor, SW_JOIN_INNER_TD_3314_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_4373_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_4373_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3314_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_4373_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_4373_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_4373_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_3314_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4229_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_4229_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3314_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_4229_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3314_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_3314_output.setInt32(r, 1, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3314_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3314_key_rightMajor, SW_JOIN_INNER_TD_3314_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4229_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_4229_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3314_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_4229_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3314_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4373_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_4373_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3314_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_4373_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_4373_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_4373_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_3314_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_3314_output.setInt32(r, 1, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3314_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3314_output #Row: " << tbl_JOIN_INNER_TD_3314_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_2467_key {
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_item_sk1119;
    bool operator==(const SW_Aggregate_TD_2467_key& other) const { return (_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107) && (_cs_item_sk1119 == other._cs_item_sk1119); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_2467_key> {
    std::size_t operator() (const SW_Aggregate_TD_2467_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107)) + (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_Aggregate_TD_2467_payload {
    int32_t _customer_sk4039;
    int32_t _item_sk4040;
};
void SW_Aggregate_TD_2467(Table &tbl_JOIN_INNER_TD_3485_output, Table &tbl_Aggregate_TD_2467_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119, cs_bill_customer_sk#1107 AS customer_sk#4039, cs_item_sk#1119 AS item_sk#4040)
    // Input: ListBuffer(cs_bill_customer_sk#1107, cs_item_sk#1119)
    // Output: ListBuffer(customer_sk#4039, item_sk#4040)
    std::unordered_map<SW_Aggregate_TD_2467_key, SW_Aggregate_TD_2467_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_3485_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_3485_output.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_3485_output.getInt32(i, 1);
        SW_Aggregate_TD_2467_key k{_cs_bill_customer_sk1107, _cs_item_sk1119};
        int32_t _customer_sk4039 = _cs_bill_customer_sk1107;
        int32_t _item_sk4040 = _cs_item_sk1119;
        SW_Aggregate_TD_2467_payload p{_customer_sk4039, _item_sk4040};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cs_bill_customer_sk1107 not required in the output table
        // _cs_item_sk1119 not required in the output table
        tbl_Aggregate_TD_2467_output.setInt32(r, 0, (it.second)._customer_sk4039);
        tbl_Aggregate_TD_2467_output.setInt32(r, 1, (it.second)._item_sk4040);
        ++r;
    }
    tbl_Aggregate_TD_2467_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2467_output #Row: " << tbl_Aggregate_TD_2467_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_2857_key {
    int32_t _ss_customer_sk1209;
    int32_t _ss_item_sk1208;
    bool operator==(const SW_Aggregate_TD_2857_key& other) const { return (_ss_customer_sk1209 == other._ss_customer_sk1209) && (_ss_item_sk1208 == other._ss_item_sk1208); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_2857_key> {
    std::size_t operator() (const SW_Aggregate_TD_2857_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209)) + (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_Aggregate_TD_2857_payload {
    int32_t _customer_sk4037;
    int32_t _item_sk4038;
};
void SW_Aggregate_TD_2857(Table &tbl_JOIN_INNER_TD_3314_output, Table &tbl_Aggregate_TD_2857_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_customer_sk#1209, ss_item_sk#1208, ss_customer_sk#1209 AS customer_sk#4037, ss_item_sk#1208 AS item_sk#4038)
    // Input: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209)
    // Output: ListBuffer(customer_sk#4037, item_sk#4038)
    std::unordered_map<SW_Aggregate_TD_2857_key, SW_Aggregate_TD_2857_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_3314_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_3314_output.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_3314_output.getInt32(i, 1);
        SW_Aggregate_TD_2857_key k{_ss_customer_sk1209, _ss_item_sk1208};
        int32_t _customer_sk4037 = _ss_customer_sk1209;
        int32_t _item_sk4038 = _ss_item_sk1208;
        SW_Aggregate_TD_2857_payload p{_customer_sk4037, _item_sk4038};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_customer_sk1209 not required in the output table
        // _ss_item_sk1208 not required in the output table
        tbl_Aggregate_TD_2857_output.setInt32(r, 0, (it.second)._customer_sk4037);
        tbl_Aggregate_TD_2857_output.setInt32(r, 1, (it.second)._item_sk4038);
        ++r;
    }
    tbl_Aggregate_TD_2857_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2857_output #Row: " << tbl_Aggregate_TD_2857_output.getNumRow() << std::endl;
}

struct SW_JOIN_FULLOUTER_TD_1616_key {
    int32_t _customer_sk4039;
    int32_t _item_sk4040;
    bool operator==(const SW_JOIN_FULLOUTER_TD_1616_key& other) const {
        return ((_customer_sk4039 == other._customer_sk4039) && (_item_sk4040 == other._item_sk4040));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_FULLOUTER_TD_1616_key> {
    std::size_t operator() (const SW_JOIN_FULLOUTER_TD_1616_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._customer_sk4039)) + (hash<int32_t>()(k._item_sk4040));
    }
};
}
struct SW_JOIN_FULLOUTER_TD_1616_payload {
    int32_t _customer_sk4039;
    int32_t _item_sk4040;
};
void SW_JOIN_FULLOUTER_TD_1616(Table &tbl_Aggregate_TD_2857_output, Table &tbl_Aggregate_TD_2467_output, Table &tbl_JOIN_FULLOUTER_TD_1616_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_FULLOUTER
    // Operation: ListBuffer(((customer_sk#4037 = customer_sk#4039) AND (item_sk#4038 = item_sk#4040)))
    // Left Table: ListBuffer(customer_sk#4037, item_sk#4038)
    // Right Table: ListBuffer(customer_sk#4039, item_sk#4040)
    // Output Table: ListBuffer(customer_sk#4037, customer_sk#4039)
    std::unordered_multimap<SW_JOIN_FULLOUTER_TD_1616_key, SW_JOIN_FULLOUTER_TD_1616_payload> ht1;
    std::unordered_map<SW_JOIN_FULLOUTER_TD_1616_key, bool> ht1;
    int nrow1 = tbl_Aggregate_TD_2467_output.getNumRow();
    int nrow2 = tbl_Aggregate_TD_2857_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _customer_sk4039_k = tbl_Aggregate_TD_2467_output.getInt32(i, 0);
        int32_t _item_sk4040_k = tbl_Aggregate_TD_2467_output.getInt32(i, 1);
        SW_JOIN_FULLOUTER_TD_1616_key keyA{_customer_sk4039_k, _item_sk4040_k};
        int32_t _customer_sk4039 = tbl_Aggregate_TD_2467_output.getInt32(i, 0);
        int32_t _item_sk4040 = tbl_Aggregate_TD_2467_output.getInt32(i, 1);
        SW_JOIN_FULLOUTER_TD_1616_payload payloadA{_customer_sk4039, _item_sk4040};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _customer_sk4037_k = tbl_Aggregate_TD_2857_output.getInt32(i, 0);
        int32_t _item_sk4038_k = tbl_Aggregate_TD_2857_output.getInt32(i, 1);
        SW_JOIN_FULLOUTER_TD_1616_key key {_customer_sk4037_k, _item_sk4038_k};
        auto it = ht1.find(key);
        int32_t _customer_sk4037 = tbl_Aggregate_TD_2857_output.getInt32(i, 0);
        int32_t _item_sk4038 = tbl_Aggregate_TD_2857_output.getInt32(i, 1);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(key);
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _customer_sk4039 = (it_it->second)._customer_sk4039;
                int32_t _item_sk4040 = (it_it->second)._item_sk4040;
                tbl_JOIN_FULLOUTER_TD_1616_output.setInt32(r, 1, _customer_sk4039);
                tbl_JOIN_FULLOUTER_TD_1616_output.setInt32(r, 0, _customer_sk4037);
                it_it++;
                r++;
            }
            matched[key] = true;
        } else {
            tbl_JOIN_FULLOUTER_TD_1616_output.setInt32(r, 0, _customer_sk4037);
            r++;
        }
    }
    for (const auto& kv : ht1) {
        if (!matched[kv.first]) {
            tbl_JOIN_FULLOUTER_TD_1616_output.setInt32(r, 1, _customer_sk4039);
            r++
        }
    }
    tbl_JOIN_FULLOUTER_TD_1616_output.setNumRow(r);
    std::cout << "tbl_JOIN_FULLOUTER_TD_1616_output #Row: " << tbl_JOIN_FULLOUTER_TD_1616_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0754(Table &tbl_JOIN_FULLOUTER_TD_1616_output, Table &tbl_Aggregate_TD_0754_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(sum(CASE WHEN (isnotnull(customer_sk#4037) AND isnull(customer_sk#4039)) THEN 1 ELSE 0 END) AS store_only#4034L, sum(CASE WHEN (isnull(customer_sk#4037) AND isnotnull(customer_sk#4039)) THEN 1 ELSE 0 END) AS catalog_only#4035L, sum(CASE WHEN (isnotnull(customer_sk#4037) AND isnotnull(customer_sk#4039)) THEN 1 ELSE 0 END) AS store_and_catalog#4036L)
    // Input: ListBuffer(customer_sk#4037, customer_sk#4039)
    // Output: ListBuffer(store_only#4034L, catalog_only#4035L, store_and_catalog#4036L)
    int64_t sum_0 = 0;
    int64_t sum_1 = 0;
    int64_t sum_2 = 0;
    int nrow1 = tbl_JOIN_FULLOUTER_TD_1616_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _customer_sk4037 = tbl_JOIN_FULLOUTER_TD_1616_output.getInt32(i, 0);
        int32_t _customer_sk4039 = tbl_JOIN_FULLOUTER_TD_1616_output.getInt32(i, 1);
        int64_t _store_only4034L_sum_0 = (_customer_sk4037 && _customer_sk4039) ? 1 : 0;
        int64_t _catalog_only4035L_sum_1 = (_customer_sk4037 && _customer_sk4039) ? 1 : 0;
        int64_t _store_and_catalog4036L_sum_2 = (_customer_sk4037 && _customer_sk4039) ? 1 : 0;
        sum_0 += _store_only4034L_sum_0;
        sum_1 += _catalog_only4035L_sum_1;
        sum_2 += _store_and_catalog4036L_sum_2;
    }
    int r = 0;
    int64_t _store_only4034L = sum_0;
    tbl_Aggregate_TD_0754_output.setInt64(r++, 0, _store_only4034L);
    int64_t _catalog_only4035L = sum_1;
    tbl_Aggregate_TD_0754_output.setInt64(r++, 1, _catalog_only4035L);
    int64_t _store_and_catalog4036L = sum_2;
    tbl_Aggregate_TD_0754_output.setInt64(r++, 2, _store_and_catalog4036L);
    tbl_Aggregate_TD_0754_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0754_output #Row: " << tbl_Aggregate_TD_0754_output.getNumRow() << std::endl;
}

