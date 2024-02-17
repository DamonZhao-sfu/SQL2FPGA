#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_8198(Table &tbl_SerializeFromObject_TD_9800_input, Table &tbl_Filter_TD_8198_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#7512) AND ((d_month_seq#7512 >= 1200) AND (d_month_seq#7512 <= 1211))) AND isnotnull(d_date_sk#7509)))
    // Input: ListBuffer(d_date_sk#7509, d_date#7511, d_month_seq#7512)
    // Output: ListBuffer(d_date_sk#7509, d_date#7511)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9800_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq7512 = tbl_SerializeFromObject_TD_9800_input.getInt32(i, 2);
        int32_t _d_date_sk7509 = tbl_SerializeFromObject_TD_9800_input.getInt32(i, 0);
        if (((_d_month_seq7512!= 0) && ((_d_month_seq7512 >= 1200) && (_d_month_seq7512 <= 1211))) && (_d_date_sk7509!= 0)) {
            int32_t _d_date_sk7509_t = tbl_SerializeFromObject_TD_9800_input.getInt32(i, 0);
            tbl_Filter_TD_8198_output.setInt32(r, 0, _d_date_sk7509_t);
            int32_t _d_date7511_t = tbl_SerializeFromObject_TD_9800_input.getInt32(i, 1);
            tbl_Filter_TD_8198_output.setInt32(r, 1, _d_date7511_t);
            r++;
        }
    }
    tbl_Filter_TD_8198_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8198_output #Row: " << tbl_Filter_TD_8198_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8570(Table &tbl_SerializeFromObject_TD_933_input, Table &tbl_Filter_TD_8570_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_bill_customer_sk#1107)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_933_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_933_input.getInt32(i, 0);
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_933_input.getInt32(i, 1);
        if ((_cs_sold_date_sk1104!= 0) && (_cs_bill_customer_sk1107!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_933_input.getInt32(i, 0);
            tbl_Filter_TD_8570_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_933_input.getInt32(i, 1);
            tbl_Filter_TD_8570_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            r++;
        }
    }
    tbl_Filter_TD_8570_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8570_output #Row: " << tbl_Filter_TD_8570_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8943(Table &tbl_SerializeFromObject_TD_9493_input, Table &tbl_Filter_TD_8943_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND ((d_month_seq#123 >= 1200) AND (d_month_seq#123 <= 1211))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9493_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_9493_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9493_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && ((_d_month_seq123 >= 1200) && (_d_month_seq123 <= 1211))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9493_input.getInt32(i, 0);
            tbl_Filter_TD_8943_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_9493_input.getInt32(i, 1);
            tbl_Filter_TD_8943_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_8943_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8943_output #Row: " << tbl_Filter_TD_8943_output.getNumRow() << std::endl;
}

void SW_Filter_TD_896(Table &tbl_SerializeFromObject_TD_9376_input, Table &tbl_Filter_TD_896_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_customer_sk#1209)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9376_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9376_input.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_9376_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_customer_sk1209!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9376_input.getInt32(i, 0);
            tbl_Filter_TD_896_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_9376_input.getInt32(i, 1);
            tbl_Filter_TD_896_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_896_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_896_output #Row: " << tbl_Filter_TD_896_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7326(Table &tbl_SerializeFromObject_TD_8399_input, Table &tbl_Filter_TD_7326_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#7537))
    // Input: ListBuffer(c_customer_sk#7537, c_first_name#7545, c_last_name#7546)
    // Output: ListBuffer(c_customer_sk#7537, c_first_name#7545, c_last_name#7546)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8399_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7537 = tbl_SerializeFromObject_TD_8399_input.getInt32(i, 0);
        if (_c_customer_sk7537!= 0) {
            int32_t _c_customer_sk7537_t = tbl_SerializeFromObject_TD_8399_input.getInt32(i, 0);
            tbl_Filter_TD_7326_output.setInt32(r, 0, _c_customer_sk7537_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7545_t = tbl_SerializeFromObject_TD_8399_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7326_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7545_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7546_t = tbl_SerializeFromObject_TD_8399_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7326_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7546_t);
            r++;
        }
    }
    tbl_Filter_TD_7326_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7326_output #Row: " << tbl_Filter_TD_7326_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7569_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_7569_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7569_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7569_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_7569_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
};
struct SW_JOIN_INNER_TD_7569_key_rightMajor {
    int32_t _d_date_sk7509;
    bool operator==(const SW_JOIN_INNER_TD_7569_key_rightMajor& other) const {
        return ((_d_date_sk7509 == other._d_date_sk7509));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7569_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7569_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7509));
    }
};
}
struct SW_JOIN_INNER_TD_7569_payload_rightMajor {
    int32_t _d_date_sk7509;
    int32_t _d_date7511;
};
void SW_JOIN_INNER_TD_7569(Table &tbl_Filter_TD_8570_output, Table &tbl_Filter_TD_8198_output, Table &tbl_JOIN_INNER_TD_7569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#7509))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107)
    // Right Table: ListBuffer(d_date_sk#7509, d_date#7511)
    // Output Table: ListBuffer(cs_bill_customer_sk#1107, d_date#7511)
    int left_nrow = tbl_Filter_TD_8570_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8198_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7569_key_leftMajor, SW_JOIN_INNER_TD_7569_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8570_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8570_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7569_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8570_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8570_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7569_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8198_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7509_k = tbl_Filter_TD_8198_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7569_key_leftMajor{_d_date_sk7509_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _d_date_sk7509 = tbl_Filter_TD_8198_output.getInt32(i, 0);
                int32_t _d_date7511 = tbl_Filter_TD_8198_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7569_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                tbl_JOIN_INNER_TD_7569_output.setInt32(r, 1, _d_date7511);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7569_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7569_key_rightMajor, SW_JOIN_INNER_TD_7569_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8198_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7509_k = tbl_Filter_TD_8198_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7569_key_rightMajor keyA{_d_date_sk7509_k};
            int32_t _d_date_sk7509 = tbl_Filter_TD_8198_output.getInt32(i, 0);
            int32_t _d_date7511 = tbl_Filter_TD_8198_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7569_payload_rightMajor payloadA{_d_date_sk7509, _d_date7511};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8570_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_8570_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7569_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7509 = (it->second)._d_date_sk7509;
                int32_t _d_date7511 = (it->second)._d_date7511;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_8570_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_Filter_TD_8570_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7569_output.setInt32(r, 1, _d_date7511);
                tbl_JOIN_INNER_TD_7569_output.setInt32(r, 0, _cs_bill_customer_sk1107);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7569_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7569_output #Row: " << tbl_JOIN_INNER_TD_7569_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7489(Table &tbl_SerializeFromObject_TD_8785_input, Table &tbl_Filter_TD_7489_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8785_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_8785_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_8785_input.getInt32(i, 0);
            tbl_Filter_TD_7489_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_8785_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7489_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_8785_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7489_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_7489_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7489_output #Row: " << tbl_Filter_TD_7489_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7364_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_7364_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7364_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7364_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_7364_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_7364_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7364_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7364_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7364_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7364_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
void SW_JOIN_INNER_TD_7364(Table &tbl_Filter_TD_896_output, Table &tbl_Filter_TD_8943_output, Table &tbl_JOIN_INNER_TD_7364_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120, d_date#122)
    // Output Table: ListBuffer(ss_customer_sk#1209, d_date#122)
    int left_nrow = tbl_Filter_TD_896_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8943_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7364_key_leftMajor, SW_JOIN_INNER_TD_7364_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_896_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_896_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7364_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_896_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_896_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7364_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8943_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8943_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7364_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_8943_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_8943_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7364_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7364_output.setInt32(r, 1, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7364_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7364_key_rightMajor, SW_JOIN_INNER_TD_7364_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8943_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_8943_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7364_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_8943_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_Filter_TD_8943_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7364_payload_rightMajor payloadA{_d_date_sk120, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_896_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_896_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7364_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_896_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_896_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7364_output.setInt32(r, 1, _d_date122);
                tbl_JOIN_INNER_TD_7364_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7364_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7364_output #Row: " << tbl_JOIN_INNER_TD_7364_output.getNumRow() << std::endl;
}

void SW_Filter_TD_63(Table &tbl_SerializeFromObject_TD_7548_input, Table &tbl_Filter_TD_63_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#7558) AND ((d_month_seq#7558 >= 1200) AND (d_month_seq#7558 <= 1211))) AND isnotnull(d_date_sk#7555)))
    // Input: ListBuffer(d_date_sk#7555, d_date#7557, d_month_seq#7558)
    // Output: ListBuffer(d_date_sk#7555, d_date#7557)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7548_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq7558 = tbl_SerializeFromObject_TD_7548_input.getInt32(i, 2);
        int32_t _d_date_sk7555 = tbl_SerializeFromObject_TD_7548_input.getInt32(i, 0);
        if (((_d_month_seq7558!= 0) && ((_d_month_seq7558 >= 1200) && (_d_month_seq7558 <= 1211))) && (_d_date_sk7555!= 0)) {
            int32_t _d_date_sk7555_t = tbl_SerializeFromObject_TD_7548_input.getInt32(i, 0);
            tbl_Filter_TD_63_output.setInt32(r, 0, _d_date_sk7555_t);
            int32_t _d_date7557_t = tbl_SerializeFromObject_TD_7548_input.getInt32(i, 1);
            tbl_Filter_TD_63_output.setInt32(r, 1, _d_date7557_t);
            r++;
        }
    }
    tbl_Filter_TD_63_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_63_output #Row: " << tbl_Filter_TD_63_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6124(Table &tbl_SerializeFromObject_TD_7139_input, Table &tbl_Filter_TD_6124_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_customer_sk#733)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7139_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_7139_input.getInt32(i, 0);
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_7139_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && (_ws_bill_customer_sk733!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_7139_input.getInt32(i, 0);
            tbl_Filter_TD_6124_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_7139_input.getInt32(i, 1);
            tbl_Filter_TD_6124_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_6124_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6124_output #Row: " << tbl_Filter_TD_6124_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6267_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_INNER_TD_6267_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6267_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6267_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_INNER_TD_6267_payload_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    int32_t _d_date7511;
};
struct SW_JOIN_INNER_TD_6267_key_rightMajor {
    int32_t _c_customer_sk7537;
    bool operator==(const SW_JOIN_INNER_TD_6267_key_rightMajor& other) const {
        return ((_c_customer_sk7537 == other._c_customer_sk7537));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6267_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6267_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7537));
    }
};
}
struct SW_JOIN_INNER_TD_6267_payload_rightMajor {
    int32_t _c_customer_sk7537;
    std::string _c_first_name7545;
    std::string _c_last_name7546;
};
void SW_JOIN_INNER_TD_6267(Table &tbl_JOIN_INNER_TD_7569_output, Table &tbl_Filter_TD_7326_output, Table &tbl_JOIN_INNER_TD_6267_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#7537))
    // Left Table: ListBuffer(cs_bill_customer_sk#1107, d_date#7511)
    // Right Table: ListBuffer(c_customer_sk#7537, c_first_name#7545, c_last_name#7546)
    // Output Table: ListBuffer(c_last_name#7546, c_first_name#7545, d_date#7511)
    int left_nrow = tbl_JOIN_INNER_TD_7569_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7326_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6267_key_leftMajor, SW_JOIN_INNER_TD_6267_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7569_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7569_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6267_key_leftMajor keyA{_cs_bill_customer_sk1107_k};
            int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7569_output.getInt32(i, 0);
            int32_t _d_date7511 = tbl_JOIN_INNER_TD_7569_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6267_payload_leftMajor payloadA{_cs_bill_customer_sk1107, _d_date7511};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7326_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7537_k = tbl_Filter_TD_7326_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6267_key_leftMajor{_c_customer_sk7537_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _d_date7511 = (it->second)._d_date7511;
                int32_t _c_customer_sk7537 = tbl_Filter_TD_7326_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7545_n = tbl_Filter_TD_7326_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7545 = std::string(_c_first_name7545_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7546_n = tbl_Filter_TD_7326_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7546 = std::string(_c_last_name7546_n.data());
                tbl_JOIN_INNER_TD_6267_output.setInt32(r, 2, _d_date7511);
                tbl_JOIN_INNER_TD_6267_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7545_n);
                tbl_JOIN_INNER_TD_6267_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name7546_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6267_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6267_key_rightMajor, SW_JOIN_INNER_TD_6267_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7326_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7537_k = tbl_Filter_TD_7326_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6267_key_rightMajor keyA{_c_customer_sk7537_k};
            int32_t _c_customer_sk7537 = tbl_Filter_TD_7326_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7545_n = tbl_Filter_TD_7326_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7545 = std::string(_c_first_name7545_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7546_n = tbl_Filter_TD_7326_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7546 = std::string(_c_last_name7546_n.data());
            SW_JOIN_INNER_TD_6267_payload_rightMajor payloadA{_c_customer_sk7537, _c_first_name7545, _c_last_name7546};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7569_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_INNER_TD_7569_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6267_key_rightMajor{_cs_bill_customer_sk1107_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7537 = (it->second)._c_customer_sk7537;
                std::string _c_first_name7545 = (it->second)._c_first_name7545;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7545_n{};
                memcpy(_c_first_name7545_n.data(), (_c_first_name7545).data(), (_c_first_name7545).length());
                std::string _c_last_name7546 = (it->second)._c_last_name7546;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7546_n{};
                memcpy(_c_last_name7546_n.data(), (_c_last_name7546).data(), (_c_last_name7546).length());
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_INNER_TD_7569_output.getInt32(i, 0);
                int32_t _d_date7511 = tbl_JOIN_INNER_TD_7569_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6267_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7545_n);
                tbl_JOIN_INNER_TD_6267_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name7546_n);
                tbl_JOIN_INNER_TD_6267_output.setInt32(r, 2, _d_date7511);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6267_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6267_output #Row: " << tbl_JOIN_INNER_TD_6267_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6456_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_6456_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6456_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6456_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_6456_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_6456_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_6456_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6456_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6456_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_6456_payload_rightMajor {
    int32_t _c_customer_sk0;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_6456(Table &tbl_JOIN_INNER_TD_7364_output, Table &tbl_Filter_TD_7489_output, Table &tbl_JOIN_INNER_TD_6456_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_customer_sk#1209, d_date#122)
    // Right Table: ListBuffer(c_customer_sk#0, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_JOIN_INNER_TD_7364_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7489_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6456_key_leftMajor, SW_JOIN_INNER_TD_6456_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7364_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7364_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6456_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7364_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_7364_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6456_payload_leftMajor payloadA{_ss_customer_sk1209, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7489_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7489_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6456_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _c_customer_sk0 = tbl_Filter_TD_7489_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 2, _d_date122);
                tbl_JOIN_INNER_TD_6456_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6456_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6456_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6456_key_rightMajor, SW_JOIN_INNER_TD_6456_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7489_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_7489_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6456_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_7489_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_7489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_7489_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_6456_payload_rightMajor payloadA{_c_customer_sk0, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7364_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_7364_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6456_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7364_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_7364_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6456_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_6456_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_6456_output.setInt32(r, 2, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6456_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6456_output #Row: " << tbl_JOIN_INNER_TD_6456_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5529(Table &tbl_SerializeFromObject_TD_6457_input, Table &tbl_Filter_TD_5529_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#7583))
    // Input: ListBuffer(c_customer_sk#7583, c_first_name#7591, c_last_name#7592)
    // Output: ListBuffer(c_customer_sk#7583, c_first_name#7591, c_last_name#7592)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6457_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7583 = tbl_SerializeFromObject_TD_6457_input.getInt32(i, 0);
        if (_c_customer_sk7583!= 0) {
            int32_t _c_customer_sk7583_t = tbl_SerializeFromObject_TD_6457_input.getInt32(i, 0);
            tbl_Filter_TD_5529_output.setInt32(r, 0, _c_customer_sk7583_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7591_t = tbl_SerializeFromObject_TD_6457_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5529_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7591_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7592_t = tbl_SerializeFromObject_TD_6457_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5529_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7592_t);
            r++;
        }
    }
    tbl_Filter_TD_5529_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5529_output #Row: " << tbl_Filter_TD_5529_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5222_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_5222_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5222_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5222_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_5222_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
};
struct SW_JOIN_INNER_TD_5222_key_rightMajor {
    int32_t _d_date_sk7555;
    bool operator==(const SW_JOIN_INNER_TD_5222_key_rightMajor& other) const {
        return ((_d_date_sk7555 == other._d_date_sk7555));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5222_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5222_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7555));
    }
};
}
struct SW_JOIN_INNER_TD_5222_payload_rightMajor {
    int32_t _d_date_sk7555;
    int32_t _d_date7557;
};
void SW_JOIN_INNER_TD_5222(Table &tbl_Filter_TD_6124_output, Table &tbl_Filter_TD_63_output, Table &tbl_JOIN_INNER_TD_5222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#7555))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Right Table: ListBuffer(d_date_sk#7555, d_date#7557)
    // Output Table: ListBuffer(ws_bill_customer_sk#733, d_date#7557)
    int left_nrow = tbl_Filter_TD_6124_output.getNumRow();
    int right_nrow = tbl_Filter_TD_63_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5222_key_leftMajor, SW_JOIN_INNER_TD_5222_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6124_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_6124_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5222_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_6124_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_6124_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5222_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_63_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7555_k = tbl_Filter_TD_63_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5222_key_leftMajor{_d_date_sk7555_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date_sk7555 = tbl_Filter_TD_63_output.getInt32(i, 0);
                int32_t _d_date7557 = tbl_Filter_TD_63_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5222_output.setInt32(r, 0, _ws_bill_customer_sk733);
                tbl_JOIN_INNER_TD_5222_output.setInt32(r, 1, _d_date7557);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5222_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5222_key_rightMajor, SW_JOIN_INNER_TD_5222_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_63_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7555_k = tbl_Filter_TD_63_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5222_key_rightMajor keyA{_d_date_sk7555_k};
            int32_t _d_date_sk7555 = tbl_Filter_TD_63_output.getInt32(i, 0);
            int32_t _d_date7557 = tbl_Filter_TD_63_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5222_payload_rightMajor payloadA{_d_date_sk7555, _d_date7557};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6124_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_6124_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5222_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7555 = (it->second)._d_date_sk7555;
                int32_t _d_date7557 = (it->second)._d_date7557;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_6124_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_6124_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5222_output.setInt32(r, 1, _d_date7557);
                tbl_JOIN_INNER_TD_5222_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5222_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5222_output #Row: " << tbl_JOIN_INNER_TD_5222_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5224_key {
    std::string _c_last_name7546;
    std::string _c_first_name7545;
    int32_t _d_date7511;
    bool operator==(const SW_Aggregate_TD_5224_key& other) const { return (_c_last_name7546 == other._c_last_name7546) && (_c_first_name7545 == other._c_first_name7545) && (_d_date7511 == other._d_date7511); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5224_key> {
    std::size_t operator() (const SW_Aggregate_TD_5224_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name7546)) + (hash<string>()(k._c_first_name7545)) + (hash<int32_t>()(k._d_date7511));
    }
};
}
struct SW_Aggregate_TD_5224_payload {
};
void SW_Aggregate_TD_5224(Table &tbl_JOIN_INNER_TD_6267_output, Table &tbl_Aggregate_TD_5224_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#7546, c_first_name#7545, d_date#7511)
    // Input: ListBuffer(c_last_name#7546, c_first_name#7545, d_date#7511)
    // Output: ListBuffer(c_last_name#7546, c_first_name#7545, d_date#7511)
    std::unordered_map<SW_Aggregate_TD_5224_key, SW_Aggregate_TD_5224_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6267_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7546 = tbl_JOIN_INNER_TD_6267_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7545 = tbl_JOIN_INNER_TD_6267_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date7511 = tbl_JOIN_INNER_TD_6267_output.getInt32(i, 2);
        SW_Aggregate_TD_5224_key k{std::string(_c_last_name7546.data()), std::string(_c_first_name7545.data()), _d_date7511};
        SW_Aggregate_TD_5224_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7546{};
        memcpy(_c_last_name7546.data(), ((it.first)._c_last_name7546).data(), ((it.first)._c_last_name7546).length());
        tbl_Aggregate_TD_5224_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name7546);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7545{};
        memcpy(_c_first_name7545.data(), ((it.first)._c_first_name7545).data(), ((it.first)._c_first_name7545).length());
        tbl_Aggregate_TD_5224_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7545);
        tbl_Aggregate_TD_5224_output.setInt32(r, 2, (it.first)._d_date7511);
        ++r;
    }
    tbl_Aggregate_TD_5224_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5224_output #Row: " << tbl_Aggregate_TD_5224_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5946_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_5946_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5946_key> {
    std::size_t operator() (const SW_Aggregate_TD_5946_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_5946_payload {
};
void SW_Aggregate_TD_5946(Table &tbl_JOIN_INNER_TD_6456_output, Table &tbl_Aggregate_TD_5946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_5946_key, SW_Aggregate_TD_5946_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6456_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_6456_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_6456_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_INNER_TD_6456_output.getInt32(i, 2);
        SW_Aggregate_TD_5946_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_5946_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_5946_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_5946_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_5946_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_5946_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5946_output #Row: " << tbl_Aggregate_TD_5946_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4934_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_INNER_TD_4934_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4934_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4934_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_INNER_TD_4934_payload_leftMajor {
    int32_t _ws_bill_customer_sk733;
    int32_t _d_date7557;
};
struct SW_JOIN_INNER_TD_4934_key_rightMajor {
    int32_t _c_customer_sk7583;
    bool operator==(const SW_JOIN_INNER_TD_4934_key_rightMajor& other) const {
        return ((_c_customer_sk7583 == other._c_customer_sk7583));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4934_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4934_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7583));
    }
};
}
struct SW_JOIN_INNER_TD_4934_payload_rightMajor {
    int32_t _c_customer_sk7583;
    std::string _c_first_name7591;
    std::string _c_last_name7592;
};
void SW_JOIN_INNER_TD_4934(Table &tbl_JOIN_INNER_TD_5222_output, Table &tbl_Filter_TD_5529_output, Table &tbl_JOIN_INNER_TD_4934_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#7583))
    // Left Table: ListBuffer(ws_bill_customer_sk#733, d_date#7557)
    // Right Table: ListBuffer(c_customer_sk#7583, c_first_name#7591, c_last_name#7592)
    // Output Table: ListBuffer(c_last_name#7592, c_first_name#7591, d_date#7557)
    int left_nrow = tbl_JOIN_INNER_TD_5222_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5529_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4934_key_leftMajor, SW_JOIN_INNER_TD_4934_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5222_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5222_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4934_key_leftMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5222_output.getInt32(i, 0);
            int32_t _d_date7557 = tbl_JOIN_INNER_TD_5222_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4934_payload_leftMajor payloadA{_ws_bill_customer_sk733, _d_date7557};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5529_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7583_k = tbl_Filter_TD_5529_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4934_key_leftMajor{_c_customer_sk7583_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date7557 = (it->second)._d_date7557;
                int32_t _c_customer_sk7583 = tbl_Filter_TD_5529_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7591_n = tbl_Filter_TD_5529_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7591 = std::string(_c_first_name7591_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7592_n = tbl_Filter_TD_5529_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7592 = std::string(_c_last_name7592_n.data());
                tbl_JOIN_INNER_TD_4934_output.setInt32(r, 2, _d_date7557);
                tbl_JOIN_INNER_TD_4934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7591_n);
                tbl_JOIN_INNER_TD_4934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name7592_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4934_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4934_key_rightMajor, SW_JOIN_INNER_TD_4934_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5529_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7583_k = tbl_Filter_TD_5529_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4934_key_rightMajor keyA{_c_customer_sk7583_k};
            int32_t _c_customer_sk7583 = tbl_Filter_TD_5529_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7591_n = tbl_Filter_TD_5529_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7591 = std::string(_c_first_name7591_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7592_n = tbl_Filter_TD_5529_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7592 = std::string(_c_last_name7592_n.data());
            SW_JOIN_INNER_TD_4934_payload_rightMajor payloadA{_c_customer_sk7583, _c_first_name7591, _c_last_name7592};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5222_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_5222_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4934_key_rightMajor{_ws_bill_customer_sk733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7583 = (it->second)._c_customer_sk7583;
                std::string _c_first_name7591 = (it->second)._c_first_name7591;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7591_n{};
                memcpy(_c_first_name7591_n.data(), (_c_first_name7591).data(), (_c_first_name7591).length());
                std::string _c_last_name7592 = (it->second)._c_last_name7592;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7592_n{};
                memcpy(_c_last_name7592_n.data(), (_c_last_name7592).data(), (_c_last_name7592).length());
                int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_5222_output.getInt32(i, 0);
                int32_t _d_date7557 = tbl_JOIN_INNER_TD_5222_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7591_n);
                tbl_JOIN_INNER_TD_4934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name7592_n);
                tbl_JOIN_INNER_TD_4934_output.setInt32(r, 2, _d_date7557);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4934_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4934_output #Row: " << tbl_JOIN_INNER_TD_4934_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_4869_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_4869_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_4869_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_4869_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_4869_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTSEMI_TD_4869_key_rightMajor {
    std::string _c_last_name7546;
    std::string _c_first_name7545;
    int32_t _d_date7511;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_4869_key_rightMajor& other) const {
        return ((_c_last_name7546 == other._c_last_name7546) && (_c_first_name7545 == other._c_first_name7545) && (_d_date7511 == other._d_date7511));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_4869_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_4869_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name7546)) + (hash<string>()(k._c_first_name7545)) + (hash<int32_t>()(k._d_date7511));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_4869_payload_rightMajor {
    std::string _c_last_name7546;
    std::string _c_first_name7545;
    int32_t _d_date7511;
};
void SW_JOIN_LEFTSEMI_TD_4869(Table &tbl_Aggregate_TD_5946_output, Table &tbl_Aggregate_TD_5224_output, Table &tbl_JOIN_LEFTSEMI_TD_4869_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#7546) AND (c_first_name#8 <=> c_first_name#7545)) AND (d_date#122 <=> d_date#7511)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#7546, c_first_name#7545, d_date#7511)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_5946_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5224_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_4869_key_rightMajor, SW_JOIN_LEFTSEMI_TD_4869_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5224_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_5946_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7546_k_n = tbl_Aggregate_TD_5224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name7546_k = std::string(_c_last_name7546_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7545_k_n = tbl_Aggregate_TD_5224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7545_k = std::string(_c_first_name7545_k_n.data());
            int32_t _d_date7511_k = tbl_Aggregate_TD_5224_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_4869_key_rightMajor keyA{_c_last_name7546_k, _c_first_name7545_k, _d_date7511_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7546_n = tbl_Aggregate_TD_5224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name7546 = std::string(_c_last_name7546_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7545_n = tbl_Aggregate_TD_5224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7545 = std::string(_c_first_name7545_n.data());
            int32_t _d_date7511 = tbl_Aggregate_TD_5224_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_4869_payload_rightMajor payloadA{_c_last_name7546, _c_first_name7545, _d_date7511};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_5946_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_5946_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_5946_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_4869_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it != ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_5946_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_5946_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_5946_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_4869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTSEMI_TD_4869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTSEMI_TD_4869_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_4869_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_4869_output #Row: " << tbl_JOIN_LEFTSEMI_TD_4869_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3354_key {
    std::string _c_last_name7592;
    std::string _c_first_name7591;
    int32_t _d_date7557;
    bool operator==(const SW_Aggregate_TD_3354_key& other) const { return (_c_last_name7592 == other._c_last_name7592) && (_c_first_name7591 == other._c_first_name7591) && (_d_date7557 == other._d_date7557); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3354_key> {
    std::size_t operator() (const SW_Aggregate_TD_3354_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name7592)) + (hash<string>()(k._c_first_name7591)) + (hash<int32_t>()(k._d_date7557));
    }
};
}
struct SW_Aggregate_TD_3354_payload {
};
void SW_Aggregate_TD_3354(Table &tbl_JOIN_INNER_TD_4934_output, Table &tbl_Aggregate_TD_3354_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#7592, c_first_name#7591, d_date#7557)
    // Input: ListBuffer(c_last_name#7592, c_first_name#7591, d_date#7557)
    // Output: ListBuffer(c_last_name#7592, c_first_name#7591, d_date#7557)
    std::unordered_map<SW_Aggregate_TD_3354_key, SW_Aggregate_TD_3354_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4934_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7592 = tbl_JOIN_INNER_TD_4934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7591 = tbl_JOIN_INNER_TD_4934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date7557 = tbl_JOIN_INNER_TD_4934_output.getInt32(i, 2);
        SW_Aggregate_TD_3354_key k{std::string(_c_last_name7592.data()), std::string(_c_first_name7591.data()), _d_date7557};
        SW_Aggregate_TD_3354_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7592{};
        memcpy(_c_last_name7592.data(), ((it.first)._c_last_name7592).data(), ((it.first)._c_last_name7592).length());
        tbl_Aggregate_TD_3354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name7592);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7591{};
        memcpy(_c_first_name7591.data(), ((it.first)._c_first_name7591).data(), ((it.first)._c_first_name7591).length());
        tbl_Aggregate_TD_3354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7591);
        tbl_Aggregate_TD_3354_output.setInt32(r, 2, (it.first)._d_date7557);
        ++r;
    }
    tbl_Aggregate_TD_3354_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3354_output #Row: " << tbl_Aggregate_TD_3354_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3468_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_3468_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3468_key> {
    std::size_t operator() (const SW_Aggregate_TD_3468_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_3468_payload {
};
void SW_Aggregate_TD_3468(Table &tbl_JOIN_LEFTSEMI_TD_4869_output, Table &tbl_Aggregate_TD_3468_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    std::unordered_map<SW_Aggregate_TD_3468_key, SW_Aggregate_TD_3468_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_4869_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTSEMI_TD_4869_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTSEMI_TD_4869_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTSEMI_TD_4869_output.getInt32(i, 2);
        SW_Aggregate_TD_3468_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_3468_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), ((it.first)._c_last_name9).data(), ((it.first)._c_last_name9).length());
        tbl_Aggregate_TD_3468_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), ((it.first)._c_first_name8).data(), ((it.first)._c_first_name8).length());
        tbl_Aggregate_TD_3468_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
        tbl_Aggregate_TD_3468_output.setInt32(r, 2, (it.first)._d_date122);
        ++r;
    }
    tbl_Aggregate_TD_3468_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3468_output #Row: " << tbl_Aggregate_TD_3468_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_2911_key_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2911_key_leftMajor& other) const {
        return ((_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2911_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2911_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2911_payload_leftMajor {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTSEMI_TD_2911_key_rightMajor {
    std::string _c_last_name7592;
    std::string _c_first_name7591;
    int32_t _d_date7557;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2911_key_rightMajor& other) const {
        return ((_c_last_name7592 == other._c_last_name7592) && (_c_first_name7591 == other._c_first_name7591) && (_d_date7557 == other._d_date7557));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2911_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2911_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name7592)) + (hash<string>()(k._c_first_name7591)) + (hash<int32_t>()(k._d_date7557));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2911_payload_rightMajor {
    std::string _c_last_name7592;
    std::string _c_first_name7591;
    int32_t _d_date7557;
};
void SW_JOIN_LEFTSEMI_TD_2911(Table &tbl_Aggregate_TD_3468_output, Table &tbl_Aggregate_TD_3354_output, Table &tbl_JOIN_LEFTSEMI_TD_2911_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((c_last_name#9 <=> c_last_name#7592) AND (c_first_name#8 <=> c_first_name#7591)) AND (d_date#122 <=> d_date#7557)))
    // Left Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Right Table: ListBuffer(c_last_name#7592, c_first_name#7591, d_date#7557)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    int left_nrow = tbl_Aggregate_TD_3468_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3354_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_2911_key_rightMajor, SW_JOIN_LEFTSEMI_TD_2911_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3354_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_3468_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7592_k_n = tbl_Aggregate_TD_3354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name7592_k = std::string(_c_last_name7592_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7591_k_n = tbl_Aggregate_TD_3354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7591_k = std::string(_c_first_name7591_k_n.data());
            int32_t _d_date7557_k = tbl_Aggregate_TD_3354_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2911_key_rightMajor keyA{_c_last_name7592_k, _c_first_name7591_k, _d_date7557_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7592_n = tbl_Aggregate_TD_3354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name7592 = std::string(_c_last_name7592_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7591_n = tbl_Aggregate_TD_3354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7591 = std::string(_c_first_name7591_n.data());
            int32_t _d_date7557 = tbl_Aggregate_TD_3354_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2911_payload_rightMajor payloadA{_c_last_name7592, _c_first_name7591, _d_date7557};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_k_n = tbl_Aggregate_TD_3468_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_last_name9_k = std::string(_c_last_name9_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_k_n = tbl_Aggregate_TD_3468_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8_k = std::string(_c_first_name8_k_n.data());
            int32_t _d_date122_k = tbl_Aggregate_TD_3468_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_2911_key_rightMajor{_c_last_name9_k, _c_first_name8_k, _d_date122_k});
            if (it != ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_Aggregate_TD_3468_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_Aggregate_TD_3468_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                int32_t _d_date122 = tbl_Aggregate_TD_3468_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_2911_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9);
                tbl_JOIN_LEFTSEMI_TD_2911_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8);
                tbl_JOIN_LEFTSEMI_TD_2911_output.setInt32(r, 2, _d_date122);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_2911_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_2911_output #Row: " << tbl_JOIN_LEFTSEMI_TD_2911_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1176_key {
    std::string _c_last_name9;
    std::string _c_first_name8;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_1176_key& other) const { return (_c_last_name9 == other._c_last_name9) && (_c_first_name8 == other._c_first_name8) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1176_key> {
    std::size_t operator() (const SW_Aggregate_TD_1176_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_first_name8)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_1176_payload {
};
void SW_Aggregate_TD_1176(Table &tbl_JOIN_LEFTSEMI_TD_2911_output, Table &NULL) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, d_date#122)
    // Output: ListBuffer()
    std::unordered_map<SW_Aggregate_TD_1176_key, SW_Aggregate_TD_1176_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_2911_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_LEFTSEMI_TD_2911_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_LEFTSEMI_TD_2911_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _d_date122 = tbl_JOIN_LEFTSEMI_TD_2911_output.getInt32(i, 2);
        SW_Aggregate_TD_1176_key k{std::string(_c_last_name9.data()), std::string(_c_first_name8.data()), _d_date122};
        SW_Aggregate_TD_1176_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_last_name9 not required in the output table
        // _c_first_name8 not required in the output table
        // _d_date122 not required in the output table
        ++r;
    }
    NULL.setNumRow(r);
    std::cout << "NULL #Row: " << NULL.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0863(Table &NULL, Table &tbl_Aggregate_TD_0863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#7602L)
    // Input: ListBuffer()
    // Output: ListBuffer(count(1)#7602L)
    int64_t count_0 = 0;
    int nrow1 = NULL.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _count17602L_count_0 = 1;
        count_0 += _count17602L_count_0;
    }
    int r = 0;
    int64_t _count17602L = count_0;
    tbl_Aggregate_TD_0863_output.setInt64(r++, 0, _count17602L);
    tbl_Aggregate_TD_0863_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0863_output #Row: " << tbl_Aggregate_TD_0863_output.getNumRow() << std::endl;
}

