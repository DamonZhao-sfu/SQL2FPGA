#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10585(Table &tbl_SerializeFromObject_TD_11469_input, Table &tbl_Filter_TD_10585_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(d_date#9029 IN (2000-06-30,2000-09-27,2000-11-17))
    // Input: ListBuffer(d_week_seq#9031, d_date#9029)
    // Output: ListBuffer(d_week_seq#9031)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11469_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date9029 = tbl_SerializeFromObject_TD_11469_input.getInt32(i, 1);
        
        if (Unrecognized filtering typeUnrecognized filtering typeUnrecognized filtering type(0)) {
            int32_t _d_week_seq9031_t = tbl_SerializeFromObject_TD_11469_input.getInt32(i, 0);
            tbl_Filter_TD_10585_output.setInt32(r, 0, _d_week_seq9031_t);
            r++;
        }
    }
    tbl_Filter_TD_10585_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10585_output #Row: " << tbl_Filter_TD_10585_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10909(Table &tbl_SerializeFromObject_TD_11617_input, Table &tbl_Filter_TD_10909_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(d_date#9001 IN (2000-06-30,2000-09-27,2000-11-17))
    // Input: ListBuffer(d_week_seq#9003, d_date#9001)
    // Output: ListBuffer(d_week_seq#9003)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11617_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date9001 = tbl_SerializeFromObject_TD_11617_input.getInt32(i, 1);
        
        if (Unrecognized filtering typeUnrecognized filtering typeUnrecognized filtering type(0)) {
            int32_t _d_week_seq9003_t = tbl_SerializeFromObject_TD_11617_input.getInt32(i, 0);
            tbl_Filter_TD_10909_output.setInt32(r, 0, _d_week_seq9003_t);
            r++;
        }
    }
    tbl_Filter_TD_10909_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10909_output #Row: " << tbl_Filter_TD_10909_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9531(Table &tbl_SerializeFromObject_TD_10700_input, Table &tbl_Filter_TD_9531_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(d_date#9057 IN (2000-06-30,2000-09-27,2000-11-17))
    // Input: ListBuffer(d_week_seq#9059, d_date#9057)
    // Output: ListBuffer(d_week_seq#9059)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10700_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date9057 = tbl_SerializeFromObject_TD_10700_input.getInt32(i, 1);
        
        if (Unrecognized filtering typeUnrecognized filtering typeUnrecognized filtering type(0)) {
            int32_t _d_week_seq9059_t = tbl_SerializeFromObject_TD_10700_input.getInt32(i, 0);
            tbl_Filter_TD_9531_output.setInt32(r, 0, _d_week_seq9059_t);
            r++;
        }
    }
    tbl_Filter_TD_9531_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9531_output #Row: " << tbl_Filter_TD_9531_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_9201_key_leftMajor {
    int32_t _d_week_seq9115;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_9201_key_leftMajor& other) const {
        return ((_d_week_seq9115 == other._d_week_seq9115));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_9201_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_9201_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq9115));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_9201_payload_leftMajor {
    int32_t _d_date9113;
    int32_t _d_week_seq9115;
};
struct SW_JOIN_LEFTSEMI_TD_9201_key_rightMajor {
    int32_t _d_week_seq9031;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_9201_key_rightMajor& other) const {
        return ((_d_week_seq9031 == other._d_week_seq9031));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_9201_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_9201_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq9031));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_9201_payload_rightMajor {
    int32_t _d_week_seq9031;
};
void SW_JOIN_LEFTSEMI_TD_9201(Table &tbl_SerializeFromObject_TD_10138_input, Table &tbl_Filter_TD_10585_output, Table &tbl_JOIN_LEFTSEMI_TD_9201_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((d_week_seq#9115 = d_week_seq#9031))
    // Left Table: ListBuffer(d_date#9113, d_week_seq#9115)
    // Right Table: ListBuffer(d_week_seq#9031)
    // Output Table: ListBuffer(d_date#9113)
    int left_nrow = tbl_SerializeFromObject_TD_10138_input.getNumRow();
    int right_nrow = tbl_Filter_TD_10585_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_9201_key_rightMajor, SW_JOIN_LEFTSEMI_TD_9201_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10585_output.getNumRow();
        int nrow2 = tbl_SerializeFromObject_TD_10138_input.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq9031_k = tbl_Filter_TD_10585_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_9201_key_rightMajor keyA{_d_week_seq9031_k};
            int32_t _d_week_seq9031 = tbl_Filter_TD_10585_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_9201_payload_rightMajor payloadA{_d_week_seq9031};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq9115_k = tbl_SerializeFromObject_TD_10138_input.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_9201_key_rightMajor{_d_week_seq9115_k});
            if (it != ht1.end()) {
                int32_t _d_date9113 = tbl_SerializeFromObject_TD_10138_input.getInt32(i, 0);
                int32_t _d_week_seq9115 = tbl_SerializeFromObject_TD_10138_input.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_9201_output.setInt32(r, 0, _d_date9113);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_9201_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_9201_output #Row: " << tbl_JOIN_LEFTSEMI_TD_9201_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9896(Table &tbl_SerializeFromObject_TD_10922_input, Table &tbl_Filter_TD_9896_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#8921))
    // Input: ListBuffer(d_date_sk#8921, d_date#8923)
    // Output: ListBuffer(d_date_sk#8921, d_date#8923)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10922_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk8921 = tbl_SerializeFromObject_TD_10922_input.getInt32(i, 0);
        if (_d_date_sk8921!= 0) {
            int32_t _d_date_sk8921_t = tbl_SerializeFromObject_TD_10922_input.getInt32(i, 0);
            tbl_Filter_TD_9896_output.setInt32(r, 0, _d_date_sk8921_t);
            int32_t _d_date8923_t = tbl_SerializeFromObject_TD_10922_input.getInt32(i, 1);
            tbl_Filter_TD_9896_output.setInt32(r, 1, _d_date8923_t);
            r++;
        }
    }
    tbl_Filter_TD_9896_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9896_output #Row: " << tbl_Filter_TD_9896_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9484(Table &tbl_SerializeFromObject_TD_10859_input, Table &tbl_Filter_TD_9484_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#8899) AND isnotnull(i_item_id#8900)))
    // Input: ListBuffer(i_item_sk#8899, i_item_id#8900)
    // Output: ListBuffer(i_item_sk#8899, i_item_id#8900)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10859_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk8899 = tbl_SerializeFromObject_TD_10859_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900 = tbl_SerializeFromObject_TD_10859_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk8899!= 0) && （std::string(_isnotnulli_item_id8900.data()) != "NULL")) {
            int32_t _i_item_sk8899_t = tbl_SerializeFromObject_TD_10859_input.getInt32(i, 0);
            tbl_Filter_TD_9484_output.setInt32(r, 0, _i_item_sk8899_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900_t = tbl_SerializeFromObject_TD_10859_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9484_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8900_t);
            r++;
        }
    }
    tbl_Filter_TD_9484_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9484_output #Row: " << tbl_Filter_TD_9484_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9659(Table &tbl_SerializeFromObject_TD_10835_input, Table &tbl_Filter_TD_9659_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_item_sk#1025) AND isnotnull(cr_returned_date_sk#1023)))
    // Input: ListBuffer(cr_returned_date_sk#1023, cr_item_sk#1025, cr_return_quantity#1040)
    // Output: ListBuffer(cr_returned_date_sk#1023, cr_item_sk#1025, cr_return_quantity#1040)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10835_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_10835_input.getInt32(i, 1);
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_10835_input.getInt32(i, 0);
        if ((_cr_item_sk1025!= 0) && (_cr_returned_date_sk1023!= 0)) {
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_10835_input.getInt32(i, 0);
            tbl_Filter_TD_9659_output.setInt32(r, 0, _cr_returned_date_sk1023_t);
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_10835_input.getInt32(i, 1);
            tbl_Filter_TD_9659_output.setInt32(r, 1, _cr_item_sk1025_t);
            int32_t _cr_return_quantity1040_t = tbl_SerializeFromObject_TD_10835_input.getInt32(i, 2);
            tbl_Filter_TD_9659_output.setInt32(r, 2, _cr_return_quantity1040_t);
            r++;
        }
    }
    tbl_Filter_TD_9659_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9659_output #Row: " << tbl_Filter_TD_9659_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_9899_key_leftMajor {
    int32_t _d_week_seq9087;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_9899_key_leftMajor& other) const {
        return ((_d_week_seq9087 == other._d_week_seq9087));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_9899_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_9899_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq9087));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_9899_payload_leftMajor {
    int32_t _d_date9085;
    int32_t _d_week_seq9087;
};
struct SW_JOIN_LEFTSEMI_TD_9899_key_rightMajor {
    int32_t _d_week_seq9003;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_9899_key_rightMajor& other) const {
        return ((_d_week_seq9003 == other._d_week_seq9003));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_9899_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_9899_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq9003));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_9899_payload_rightMajor {
    int32_t _d_week_seq9003;
};
void SW_JOIN_LEFTSEMI_TD_9899(Table &tbl_SerializeFromObject_TD_10310_input, Table &tbl_Filter_TD_10909_output, Table &tbl_JOIN_LEFTSEMI_TD_9899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((d_week_seq#9087 = d_week_seq#9003))
    // Left Table: ListBuffer(d_date#9085, d_week_seq#9087)
    // Right Table: ListBuffer(d_week_seq#9003)
    // Output Table: ListBuffer(d_date#9085)
    int left_nrow = tbl_SerializeFromObject_TD_10310_input.getNumRow();
    int right_nrow = tbl_Filter_TD_10909_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_9899_key_rightMajor, SW_JOIN_LEFTSEMI_TD_9899_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10909_output.getNumRow();
        int nrow2 = tbl_SerializeFromObject_TD_10310_input.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq9003_k = tbl_Filter_TD_10909_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_9899_key_rightMajor keyA{_d_week_seq9003_k};
            int32_t _d_week_seq9003 = tbl_Filter_TD_10909_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_9899_payload_rightMajor payloadA{_d_week_seq9003};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq9087_k = tbl_SerializeFromObject_TD_10310_input.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_9899_key_rightMajor{_d_week_seq9087_k});
            if (it != ht1.end()) {
                int32_t _d_date9085 = tbl_SerializeFromObject_TD_10310_input.getInt32(i, 0);
                int32_t _d_week_seq9087 = tbl_SerializeFromObject_TD_10310_input.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_9899_output.setInt32(r, 0, _d_date9085);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_9899_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_9899_output #Row: " << tbl_JOIN_LEFTSEMI_TD_9899_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9861(Table &tbl_SerializeFromObject_TD_10494_input, Table &tbl_Filter_TD_9861_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#120))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10494_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10494_input.getInt32(i, 0);
        if (_d_date_sk120!= 0) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10494_input.getInt32(i, 0);
            tbl_Filter_TD_9861_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_10494_input.getInt32(i, 1);
            tbl_Filter_TD_9861_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_9861_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9861_output #Row: " << tbl_Filter_TD_9861_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9830(Table &tbl_SerializeFromObject_TD_10535_input, Table &tbl_Filter_TD_9830_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#228) AND isnotnull(i_item_id#229)))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10535_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10535_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_SerializeFromObject_TD_10535_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk228!= 0) && （std::string(_isnotnulli_item_id229.data()) != "NULL")) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10535_input.getInt32(i, 0);
            tbl_Filter_TD_9830_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_10535_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9830_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_9830_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9830_output #Row: " << tbl_Filter_TD_9830_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9403(Table &tbl_SerializeFromObject_TD_10187_input, Table &tbl_Filter_TD_9403_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_item_sk#671) AND isnotnull(sr_returned_date_sk#669)))
    // Input: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_return_quantity#679)
    // Output: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_return_quantity#679)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10187_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_10187_input.getInt32(i, 1);
        int32_t _sr_returned_date_sk669 = tbl_SerializeFromObject_TD_10187_input.getInt32(i, 0);
        if ((_sr_item_sk671!= 0) && (_sr_returned_date_sk669!= 0)) {
            int32_t _sr_returned_date_sk669_t = tbl_SerializeFromObject_TD_10187_input.getInt32(i, 0);
            tbl_Filter_TD_9403_output.setInt32(r, 0, _sr_returned_date_sk669_t);
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_10187_input.getInt32(i, 1);
            tbl_Filter_TD_9403_output.setInt32(r, 1, _sr_item_sk671_t);
            int32_t _sr_return_quantity679_t = tbl_SerializeFromObject_TD_10187_input.getInt32(i, 2);
            tbl_Filter_TD_9403_output.setInt32(r, 2, _sr_return_quantity679_t);
            r++;
        }
    }
    tbl_Filter_TD_9403_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9403_output #Row: " << tbl_Filter_TD_9403_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_861_key_leftMajor {
    int32_t _d_week_seq9143;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_861_key_leftMajor& other) const {
        return ((_d_week_seq9143 == other._d_week_seq9143));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_861_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_861_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq9143));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_861_payload_leftMajor {
    int32_t _d_date9141;
    int32_t _d_week_seq9143;
};
struct SW_JOIN_LEFTSEMI_TD_861_key_rightMajor {
    int32_t _d_week_seq9059;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_861_key_rightMajor& other) const {
        return ((_d_week_seq9059 == other._d_week_seq9059));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_861_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_861_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq9059));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_861_payload_rightMajor {
    int32_t _d_week_seq9059;
};
void SW_JOIN_LEFTSEMI_TD_861(Table &tbl_SerializeFromObject_TD_9474_input, Table &tbl_Filter_TD_9531_output, Table &tbl_JOIN_LEFTSEMI_TD_861_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((d_week_seq#9143 = d_week_seq#9059))
    // Left Table: ListBuffer(d_date#9141, d_week_seq#9143)
    // Right Table: ListBuffer(d_week_seq#9059)
    // Output Table: ListBuffer(d_date#9141)
    int left_nrow = tbl_SerializeFromObject_TD_9474_input.getNumRow();
    int right_nrow = tbl_Filter_TD_9531_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_861_key_rightMajor, SW_JOIN_LEFTSEMI_TD_861_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9531_output.getNumRow();
        int nrow2 = tbl_SerializeFromObject_TD_9474_input.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq9059_k = tbl_Filter_TD_9531_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_861_key_rightMajor keyA{_d_week_seq9059_k};
            int32_t _d_week_seq9059 = tbl_Filter_TD_9531_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_861_payload_rightMajor payloadA{_d_week_seq9059};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq9143_k = tbl_SerializeFromObject_TD_9474_input.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_861_key_rightMajor{_d_week_seq9143_k});
            if (it != ht1.end()) {
                int32_t _d_date9141 = tbl_SerializeFromObject_TD_9474_input.getInt32(i, 0);
                int32_t _d_week_seq9143 = tbl_SerializeFromObject_TD_9474_input.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_861_output.setInt32(r, 0, _d_date9141);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_861_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_861_output #Row: " << tbl_JOIN_LEFTSEMI_TD_861_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8520(Table &tbl_SerializeFromObject_TD_9924_input, Table &tbl_Filter_TD_8520_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(d_date_sk#8971))
    // Input: ListBuffer(d_date_sk#8971, d_date#8973)
    // Output: ListBuffer(d_date_sk#8971, d_date#8973)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9924_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk8971 = tbl_SerializeFromObject_TD_9924_input.getInt32(i, 0);
        if (_d_date_sk8971!= 0) {
            int32_t _d_date_sk8971_t = tbl_SerializeFromObject_TD_9924_input.getInt32(i, 0);
            tbl_Filter_TD_8520_output.setInt32(r, 0, _d_date_sk8971_t);
            int32_t _d_date8973_t = tbl_SerializeFromObject_TD_9924_input.getInt32(i, 1);
            tbl_Filter_TD_8520_output.setInt32(r, 1, _d_date8973_t);
            r++;
        }
    }
    tbl_Filter_TD_8520_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8520_output #Row: " << tbl_Filter_TD_8520_output.getNumRow() << std::endl;
}

void SW_Filter_TD_891(Table &tbl_SerializeFromObject_TD_9957_input, Table &tbl_Filter_TD_891_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#8949) AND isnotnull(i_item_id#8950)))
    // Input: ListBuffer(i_item_sk#8949, i_item_id#8950)
    // Output: ListBuffer(i_item_sk#8949, i_item_id#8950)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9957_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk8949 = tbl_SerializeFromObject_TD_9957_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950 = tbl_SerializeFromObject_TD_9957_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_i_item_sk8949!= 0) && （std::string(_isnotnulli_item_id8950.data()) != "NULL")) {
            int32_t _i_item_sk8949_t = tbl_SerializeFromObject_TD_9957_input.getInt32(i, 0);
            tbl_Filter_TD_891_output.setInt32(r, 0, _i_item_sk8949_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950_t = tbl_SerializeFromObject_TD_9957_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_891_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8950_t);
            r++;
        }
    }
    tbl_Filter_TD_891_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_891_output #Row: " << tbl_Filter_TD_891_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8965(Table &tbl_SerializeFromObject_TD_9341_input, Table &tbl_Filter_TD_8965_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_item_sk#833) AND isnotnull(wr_returned_date_sk#831)))
    // Input: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_return_quantity#845)
    // Output: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_return_quantity#845)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9341_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_9341_input.getInt32(i, 1);
        int32_t _wr_returned_date_sk831 = tbl_SerializeFromObject_TD_9341_input.getInt32(i, 0);
        if ((_wr_item_sk833!= 0) && (_wr_returned_date_sk831!= 0)) {
            int32_t _wr_returned_date_sk831_t = tbl_SerializeFromObject_TD_9341_input.getInt32(i, 0);
            tbl_Filter_TD_8965_output.setInt32(r, 0, _wr_returned_date_sk831_t);
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_9341_input.getInt32(i, 1);
            tbl_Filter_TD_8965_output.setInt32(r, 1, _wr_item_sk833_t);
            int32_t _wr_return_quantity845_t = tbl_SerializeFromObject_TD_9341_input.getInt32(i, 2);
            tbl_Filter_TD_8965_output.setInt32(r, 2, _wr_return_quantity845_t);
            r++;
        }
    }
    tbl_Filter_TD_8965_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8965_output #Row: " << tbl_Filter_TD_8965_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_8296_key_leftMajor {
    int32_t _d_date8923;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8296_key_leftMajor& other) const {
        return ((_d_date8923 == other._d_date8923));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8296_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8296_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date8923));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8296_payload_leftMajor {
    int32_t _d_date_sk8921;
    int32_t _d_date8923;
};
struct SW_JOIN_LEFTSEMI_TD_8296_key_rightMajor {
    int32_t _d_date9113;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8296_key_rightMajor& other) const {
        return ((_d_date9113 == other._d_date9113));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8296_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8296_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date9113));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8296_payload_rightMajor {
    int32_t _d_date9113;
};
void SW_JOIN_LEFTSEMI_TD_8296(Table &tbl_Filter_TD_9896_output, Table &tbl_JOIN_LEFTSEMI_TD_9201_output, Table &tbl_JOIN_LEFTSEMI_TD_8296_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((d_date#8923 = d_date#9113))
    // Left Table: ListBuffer(d_date_sk#8921, d_date#8923)
    // Right Table: ListBuffer(d_date#9113)
    // Output Table: ListBuffer(d_date_sk#8921)
    int left_nrow = tbl_Filter_TD_9896_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_9201_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_8296_key_rightMajor, SW_JOIN_LEFTSEMI_TD_8296_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_9201_output.getNumRow();
        int nrow2 = tbl_Filter_TD_9896_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date9113_k = tbl_JOIN_LEFTSEMI_TD_9201_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8296_key_rightMajor keyA{_d_date9113_k};
            int32_t _d_date9113 = tbl_JOIN_LEFTSEMI_TD_9201_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8296_payload_rightMajor payloadA{_d_date9113};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date8923_k = tbl_Filter_TD_9896_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_8296_key_rightMajor{_d_date8923_k});
            if (it != ht1.end()) {
                int32_t _d_date_sk8921 = tbl_Filter_TD_9896_output.getInt32(i, 0);
                int32_t _d_date8923 = tbl_Filter_TD_9896_output.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_8296_output.setInt32(r, 0, _d_date_sk8921);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_8296_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_8296_output #Row: " << tbl_JOIN_LEFTSEMI_TD_8296_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8195_key_leftMajor {
    int32_t _cr_item_sk1025;
    bool operator==(const SW_JOIN_INNER_TD_8195_key_leftMajor& other) const {
        return ((_cr_item_sk1025 == other._cr_item_sk1025));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8195_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8195_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_item_sk1025));
    }
};
}
struct SW_JOIN_INNER_TD_8195_payload_leftMajor {
    int32_t _cr_returned_date_sk1023;
    int32_t _cr_item_sk1025;
    int32_t _cr_return_quantity1040;
};
struct SW_JOIN_INNER_TD_8195_key_rightMajor {
    int32_t _i_item_sk8899;
    bool operator==(const SW_JOIN_INNER_TD_8195_key_rightMajor& other) const {
        return ((_i_item_sk8899 == other._i_item_sk8899));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8195_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8195_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk8899));
    }
};
}
struct SW_JOIN_INNER_TD_8195_payload_rightMajor {
    int32_t _i_item_sk8899;
    std::string _i_item_id8900;
};
void SW_JOIN_INNER_TD_8195(Table &tbl_Filter_TD_9659_output, Table &tbl_Filter_TD_9484_output, Table &tbl_JOIN_INNER_TD_8195_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_item_sk#1025 = i_item_sk#8899))
    // Left Table: ListBuffer(cr_returned_date_sk#1023, cr_item_sk#1025, cr_return_quantity#1040)
    // Right Table: ListBuffer(i_item_sk#8899, i_item_id#8900)
    // Output Table: ListBuffer(cr_returned_date_sk#1023, cr_return_quantity#1040, i_item_id#8900)
    int left_nrow = tbl_Filter_TD_9659_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9484_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8195_key_leftMajor, SW_JOIN_INNER_TD_8195_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9659_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_9659_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8195_key_leftMajor keyA{_cr_item_sk1025_k};
            int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_9659_output.getInt32(i, 0);
            int32_t _cr_item_sk1025 = tbl_Filter_TD_9659_output.getInt32(i, 1);
            int32_t _cr_return_quantity1040 = tbl_Filter_TD_9659_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8195_payload_leftMajor payloadA{_cr_returned_date_sk1023, _cr_item_sk1025, _cr_return_quantity1040};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9484_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk8899_k = tbl_Filter_TD_9484_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8195_key_leftMajor{_i_item_sk8899_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returned_date_sk1023 = (it->second)._cr_returned_date_sk1023;
                int32_t _cr_item_sk1025 = (it->second)._cr_item_sk1025;
                int32_t _cr_return_quantity1040 = (it->second)._cr_return_quantity1040;
                int32_t _i_item_sk8899 = tbl_Filter_TD_9484_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900_n = tbl_Filter_TD_9484_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id8900 = std::string(_i_item_id8900_n.data());
                tbl_JOIN_INNER_TD_8195_output.setInt32(r, 0, _cr_returned_date_sk1023);
                tbl_JOIN_INNER_TD_8195_output.setInt32(r, 1, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_8195_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id8900_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8195_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8195_key_rightMajor, SW_JOIN_INNER_TD_8195_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9484_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk8899_k = tbl_Filter_TD_9484_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8195_key_rightMajor keyA{_i_item_sk8899_k};
            int32_t _i_item_sk8899 = tbl_Filter_TD_9484_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900_n = tbl_Filter_TD_9484_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id8900 = std::string(_i_item_id8900_n.data());
            SW_JOIN_INNER_TD_8195_payload_rightMajor payloadA{_i_item_sk8899, _i_item_id8900};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9659_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_item_sk1025_k = tbl_Filter_TD_9659_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8195_key_rightMajor{_cr_item_sk1025_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk8899 = (it->second)._i_item_sk8899;
                std::string _i_item_id8900 = (it->second)._i_item_id8900;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900_n{};
                memcpy(_i_item_id8900_n.data(), (_i_item_id8900).data(), (_i_item_id8900).length());
                int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_9659_output.getInt32(i, 0);
                int32_t _cr_item_sk1025 = tbl_Filter_TD_9659_output.getInt32(i, 1);
                int32_t _cr_return_quantity1040 = tbl_Filter_TD_9659_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8195_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id8900_n);
                tbl_JOIN_INNER_TD_8195_output.setInt32(r, 0, _cr_returned_date_sk1023);
                tbl_JOIN_INNER_TD_8195_output.setInt32(r, 1, _cr_return_quantity1040);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8195_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8195_output #Row: " << tbl_JOIN_INNER_TD_8195_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_8457_key_leftMajor {
    int32_t _d_date122;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8457_key_leftMajor& other) const {
        return ((_d_date122 == other._d_date122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8457_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8457_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8457_payload_leftMajor {
    int32_t _d_date_sk120;
    int32_t _d_date122;
};
struct SW_JOIN_LEFTSEMI_TD_8457_key_rightMajor {
    int32_t _d_date9085;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_8457_key_rightMajor& other) const {
        return ((_d_date9085 == other._d_date9085));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_8457_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_8457_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date9085));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_8457_payload_rightMajor {
    int32_t _d_date9085;
};
void SW_JOIN_LEFTSEMI_TD_8457(Table &tbl_Filter_TD_9861_output, Table &tbl_JOIN_LEFTSEMI_TD_9899_output, Table &tbl_JOIN_LEFTSEMI_TD_8457_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((d_date#122 = d_date#9085))
    // Left Table: ListBuffer(d_date_sk#120, d_date#122)
    // Right Table: ListBuffer(d_date#9085)
    // Output Table: ListBuffer(d_date_sk#120)
    int left_nrow = tbl_Filter_TD_9861_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_9899_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_8457_key_rightMajor, SW_JOIN_LEFTSEMI_TD_8457_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_9899_output.getNumRow();
        int nrow2 = tbl_Filter_TD_9861_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date9085_k = tbl_JOIN_LEFTSEMI_TD_9899_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8457_key_rightMajor keyA{_d_date9085_k};
            int32_t _d_date9085 = tbl_JOIN_LEFTSEMI_TD_9899_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_8457_payload_rightMajor payloadA{_d_date9085};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date122_k = tbl_Filter_TD_9861_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_8457_key_rightMajor{_d_date122_k});
            if (it != ht1.end()) {
                int32_t _d_date_sk120 = tbl_Filter_TD_9861_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_Filter_TD_9861_output.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_8457_output.setInt32(r, 0, _d_date_sk120);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_8457_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_8457_output #Row: " << tbl_JOIN_LEFTSEMI_TD_8457_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8117_key_leftMajor {
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_INNER_TD_8117_key_leftMajor& other) const {
        return ((_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8117_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8117_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_INNER_TD_8117_payload_leftMajor {
    int32_t _sr_returned_date_sk669;
    int32_t _sr_item_sk671;
    int32_t _sr_return_quantity679;
};
struct SW_JOIN_INNER_TD_8117_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_8117_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8117_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8117_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_8117_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_8117(Table &tbl_Filter_TD_9403_output, Table &tbl_Filter_TD_9830_output, Table &tbl_JOIN_INNER_TD_8117_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_item_sk#671 = i_item_sk#228))
    // Left Table: ListBuffer(sr_returned_date_sk#669, sr_item_sk#671, sr_return_quantity#679)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(sr_returned_date_sk#669, sr_return_quantity#679, i_item_id#229)
    int left_nrow = tbl_Filter_TD_9403_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9830_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8117_key_leftMajor, SW_JOIN_INNER_TD_8117_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9403_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_item_sk671_k = tbl_Filter_TD_9403_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8117_key_leftMajor keyA{_sr_item_sk671_k};
            int32_t _sr_returned_date_sk669 = tbl_Filter_TD_9403_output.getInt32(i, 0);
            int32_t _sr_item_sk671 = tbl_Filter_TD_9403_output.getInt32(i, 1);
            int32_t _sr_return_quantity679 = tbl_Filter_TD_9403_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8117_payload_leftMajor payloadA{_sr_returned_date_sk669, _sr_item_sk671, _sr_return_quantity679};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9830_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9830_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8117_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_item_sk671 = (it->second)._sr_item_sk671;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                int32_t _i_item_sk228 = tbl_Filter_TD_9830_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_9830_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_8117_output.setInt32(r, 0, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_8117_output.setInt32(r, 1, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_8117_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8117_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8117_key_rightMajor, SW_JOIN_INNER_TD_8117_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9830_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_9830_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8117_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_9830_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_9830_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_8117_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9403_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_item_sk671_k = tbl_Filter_TD_9403_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8117_key_rightMajor{_sr_item_sk671_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _sr_returned_date_sk669 = tbl_Filter_TD_9403_output.getInt32(i, 0);
                int32_t _sr_item_sk671 = tbl_Filter_TD_9403_output.getInt32(i, 1);
                int32_t _sr_return_quantity679 = tbl_Filter_TD_9403_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8117_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id229_n);
                tbl_JOIN_INNER_TD_8117_output.setInt32(r, 0, _sr_returned_date_sk669);
                tbl_JOIN_INNER_TD_8117_output.setInt32(r, 1, _sr_return_quantity679);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8117_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8117_output #Row: " << tbl_JOIN_INNER_TD_8117_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_760_key_leftMajor {
    int32_t _d_date8973;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_760_key_leftMajor& other) const {
        return ((_d_date8973 == other._d_date8973));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_760_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_760_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date8973));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_760_payload_leftMajor {
    int32_t _d_date_sk8971;
    int32_t _d_date8973;
};
struct SW_JOIN_LEFTSEMI_TD_760_key_rightMajor {
    int32_t _d_date9141;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_760_key_rightMajor& other) const {
        return ((_d_date9141 == other._d_date9141));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_760_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_760_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date9141));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_760_payload_rightMajor {
    int32_t _d_date9141;
};
void SW_JOIN_LEFTSEMI_TD_760(Table &tbl_Filter_TD_8520_output, Table &tbl_JOIN_LEFTSEMI_TD_861_output, Table &tbl_JOIN_LEFTSEMI_TD_760_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((d_date#8973 = d_date#9141))
    // Left Table: ListBuffer(d_date_sk#8971, d_date#8973)
    // Right Table: ListBuffer(d_date#9141)
    // Output Table: ListBuffer(d_date_sk#8971)
    int left_nrow = tbl_Filter_TD_8520_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_861_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_760_key_rightMajor, SW_JOIN_LEFTSEMI_TD_760_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_861_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8520_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date9141_k = tbl_JOIN_LEFTSEMI_TD_861_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_760_key_rightMajor keyA{_d_date9141_k};
            int32_t _d_date9141 = tbl_JOIN_LEFTSEMI_TD_861_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_760_payload_rightMajor payloadA{_d_date9141};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date8973_k = tbl_Filter_TD_8520_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_760_key_rightMajor{_d_date8973_k});
            if (it != ht1.end()) {
                int32_t _d_date_sk8971 = tbl_Filter_TD_8520_output.getInt32(i, 0);
                int32_t _d_date8973 = tbl_Filter_TD_8520_output.getInt32(i, 1);
                tbl_JOIN_LEFTSEMI_TD_760_output.setInt32(r, 0, _d_date_sk8971);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_760_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_760_output #Row: " << tbl_JOIN_LEFTSEMI_TD_760_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_749_key_leftMajor {
    int32_t _wr_item_sk833;
    bool operator==(const SW_JOIN_INNER_TD_749_key_leftMajor& other) const {
        return ((_wr_item_sk833 == other._wr_item_sk833));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_749_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_749_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_item_sk833));
    }
};
}
struct SW_JOIN_INNER_TD_749_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_item_sk833;
    int32_t _wr_return_quantity845;
};
struct SW_JOIN_INNER_TD_749_key_rightMajor {
    int32_t _i_item_sk8949;
    bool operator==(const SW_JOIN_INNER_TD_749_key_rightMajor& other) const {
        return ((_i_item_sk8949 == other._i_item_sk8949));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_749_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_749_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk8949));
    }
};
}
struct SW_JOIN_INNER_TD_749_payload_rightMajor {
    int32_t _i_item_sk8949;
    std::string _i_item_id8950;
};
void SW_JOIN_INNER_TD_749(Table &tbl_Filter_TD_8965_output, Table &tbl_Filter_TD_891_output, Table &tbl_JOIN_INNER_TD_749_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_item_sk#833 = i_item_sk#8949))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_return_quantity#845)
    // Right Table: ListBuffer(i_item_sk#8949, i_item_id#8950)
    // Output Table: ListBuffer(wr_returned_date_sk#831, wr_return_quantity#845, i_item_id#8950)
    int left_nrow = tbl_Filter_TD_8965_output.getNumRow();
    int right_nrow = tbl_Filter_TD_891_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_749_key_leftMajor, SW_JOIN_INNER_TD_749_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8965_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_8965_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_749_key_leftMajor keyA{_wr_item_sk833_k};
            int32_t _wr_returned_date_sk831 = tbl_Filter_TD_8965_output.getInt32(i, 0);
            int32_t _wr_item_sk833 = tbl_Filter_TD_8965_output.getInt32(i, 1);
            int32_t _wr_return_quantity845 = tbl_Filter_TD_8965_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_749_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_item_sk833, _wr_return_quantity845};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_891_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk8949_k = tbl_Filter_TD_891_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_749_key_leftMajor{_i_item_sk8949_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_item_sk833 = (it->second)._wr_item_sk833;
                int32_t _wr_return_quantity845 = (it->second)._wr_return_quantity845;
                int32_t _i_item_sk8949 = tbl_Filter_TD_891_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950_n = tbl_Filter_TD_891_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id8950 = std::string(_i_item_id8950_n.data());
                tbl_JOIN_INNER_TD_749_output.setInt32(r, 0, _wr_returned_date_sk831);
                tbl_JOIN_INNER_TD_749_output.setInt32(r, 1, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_749_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id8950_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_749_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_749_key_rightMajor, SW_JOIN_INNER_TD_749_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_891_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk8949_k = tbl_Filter_TD_891_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_749_key_rightMajor keyA{_i_item_sk8949_k};
            int32_t _i_item_sk8949 = tbl_Filter_TD_891_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950_n = tbl_Filter_TD_891_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id8950 = std::string(_i_item_id8950_n.data());
            SW_JOIN_INNER_TD_749_payload_rightMajor payloadA{_i_item_sk8949, _i_item_id8950};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8965_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_8965_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_749_key_rightMajor{_wr_item_sk833_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk8949 = (it->second)._i_item_sk8949;
                std::string _i_item_id8950 = (it->second)._i_item_id8950;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950_n{};
                memcpy(_i_item_id8950_n.data(), (_i_item_id8950).data(), (_i_item_id8950).length());
                int32_t _wr_returned_date_sk831 = tbl_Filter_TD_8965_output.getInt32(i, 0);
                int32_t _wr_item_sk833 = tbl_Filter_TD_8965_output.getInt32(i, 1);
                int32_t _wr_return_quantity845 = tbl_Filter_TD_8965_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_749_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_id8950_n);
                tbl_JOIN_INNER_TD_749_output.setInt32(r, 0, _wr_returned_date_sk831);
                tbl_JOIN_INNER_TD_749_output.setInt32(r, 1, _wr_return_quantity845);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_749_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_749_output #Row: " << tbl_JOIN_INNER_TD_749_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7874_key_leftMajor {
    int32_t _cr_returned_date_sk1023;
    bool operator==(const SW_JOIN_INNER_TD_7874_key_leftMajor& other) const {
        return ((_cr_returned_date_sk1023 == other._cr_returned_date_sk1023));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7874_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7874_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returned_date_sk1023));
    }
};
}
struct SW_JOIN_INNER_TD_7874_payload_leftMajor {
    int32_t _cr_returned_date_sk1023;
    int32_t _cr_return_quantity1040;
    std::string _i_item_id8900;
};
struct SW_JOIN_INNER_TD_7874_key_rightMajor {
    int32_t _d_date_sk8921;
    bool operator==(const SW_JOIN_INNER_TD_7874_key_rightMajor& other) const {
        return ((_d_date_sk8921 == other._d_date_sk8921));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7874_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7874_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8921));
    }
};
}
struct SW_JOIN_INNER_TD_7874_payload_rightMajor {
    int32_t _d_date_sk8921;
};
void SW_JOIN_INNER_TD_7874(Table &tbl_JOIN_INNER_TD_8195_output, Table &tbl_JOIN_LEFTSEMI_TD_8296_output, Table &tbl_JOIN_INNER_TD_7874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returned_date_sk#1023 = d_date_sk#8921))
    // Left Table: ListBuffer(cr_returned_date_sk#1023, cr_return_quantity#1040, i_item_id#8900)
    // Right Table: ListBuffer(d_date_sk#8921)
    // Output Table: ListBuffer(cr_return_quantity#1040, i_item_id#8900)
    int left_nrow = tbl_JOIN_INNER_TD_8195_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_8296_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7874_key_leftMajor, SW_JOIN_INNER_TD_7874_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8195_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_JOIN_INNER_TD_8195_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7874_key_leftMajor keyA{_cr_returned_date_sk1023_k};
            int32_t _cr_returned_date_sk1023 = tbl_JOIN_INNER_TD_8195_output.getInt32(i, 0);
            int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_8195_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900_n = tbl_JOIN_INNER_TD_8195_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id8900 = std::string(_i_item_id8900_n.data());
            SW_JOIN_INNER_TD_7874_payload_leftMajor payloadA{_cr_returned_date_sk1023, _cr_return_quantity1040, _i_item_id8900};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_8296_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8921_k = tbl_JOIN_LEFTSEMI_TD_8296_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7874_key_leftMajor{_d_date_sk8921_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returned_date_sk1023 = (it->second)._cr_returned_date_sk1023;
                int32_t _cr_return_quantity1040 = (it->second)._cr_return_quantity1040;
                std::string _i_item_id8900 = (it->second)._i_item_id8900;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900_n{};
                memcpy(_i_item_id8900_n.data(), (_i_item_id8900).data(), (_i_item_id8900).length());
                int32_t _d_date_sk8921 = tbl_JOIN_LEFTSEMI_TD_8296_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7874_output.setInt32(r, 0, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_7874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8900_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7874_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7874_key_rightMajor, SW_JOIN_INNER_TD_7874_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_8296_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8921_k = tbl_JOIN_LEFTSEMI_TD_8296_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7874_key_rightMajor keyA{_d_date_sk8921_k};
            int32_t _d_date_sk8921 = tbl_JOIN_LEFTSEMI_TD_8296_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7874_payload_rightMajor payloadA{_d_date_sk8921};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8195_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_JOIN_INNER_TD_8195_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7874_key_rightMajor{_cr_returned_date_sk1023_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8921 = (it->second)._d_date_sk8921;
                int32_t _cr_returned_date_sk1023 = tbl_JOIN_INNER_TD_8195_output.getInt32(i, 0);
                int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_8195_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900_n = tbl_JOIN_INNER_TD_8195_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id8900 = std::string(_i_item_id8900_n.data());
                tbl_JOIN_INNER_TD_7874_output.setInt32(r, 0, _cr_return_quantity1040);
                tbl_JOIN_INNER_TD_7874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8900_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7874_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7874_output #Row: " << tbl_JOIN_INNER_TD_7874_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7760_key_leftMajor {
    int32_t _sr_returned_date_sk669;
    bool operator==(const SW_JOIN_INNER_TD_7760_key_leftMajor& other) const {
        return ((_sr_returned_date_sk669 == other._sr_returned_date_sk669));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7760_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7760_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_returned_date_sk669));
    }
};
}
struct SW_JOIN_INNER_TD_7760_payload_leftMajor {
    int32_t _sr_returned_date_sk669;
    int32_t _sr_return_quantity679;
    std::string _i_item_id229;
};
struct SW_JOIN_INNER_TD_7760_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7760_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7760_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7760_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7760_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_7760(Table &tbl_JOIN_INNER_TD_8117_output, Table &tbl_JOIN_LEFTSEMI_TD_8457_output, Table &tbl_JOIN_INNER_TD_7760_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_returned_date_sk#669 = d_date_sk#120))
    // Left Table: ListBuffer(sr_returned_date_sk#669, sr_return_quantity#679, i_item_id#229)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(sr_return_quantity#679, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_8117_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_8457_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7760_key_leftMajor, SW_JOIN_INNER_TD_7760_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8117_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_JOIN_INNER_TD_8117_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7760_key_leftMajor keyA{_sr_returned_date_sk669_k};
            int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_8117_output.getInt32(i, 0);
            int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_8117_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_8117_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_7760_payload_leftMajor payloadA{_sr_returned_date_sk669, _sr_return_quantity679, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_8457_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_JOIN_LEFTSEMI_TD_8457_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7760_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_return_quantity679 = (it->second)._sr_return_quantity679;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _d_date_sk120 = tbl_JOIN_LEFTSEMI_TD_8457_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7760_output.setInt32(r, 0, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_7760_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7760_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7760_key_rightMajor, SW_JOIN_INNER_TD_7760_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_8457_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_JOIN_LEFTSEMI_TD_8457_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7760_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_JOIN_LEFTSEMI_TD_8457_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7760_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8117_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_JOIN_INNER_TD_8117_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7760_key_rightMajor{_sr_returned_date_sk669_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _sr_returned_date_sk669 = tbl_JOIN_INNER_TD_8117_output.getInt32(i, 0);
                int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_8117_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_JOIN_INNER_TD_8117_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_7760_output.setInt32(r, 0, _sr_return_quantity679);
                tbl_JOIN_INNER_TD_7760_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7760_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7760_output #Row: " << tbl_JOIN_INNER_TD_7760_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6573_key_leftMajor {
    int32_t _wr_returned_date_sk831;
    bool operator==(const SW_JOIN_INNER_TD_6573_key_leftMajor& other) const {
        return ((_wr_returned_date_sk831 == other._wr_returned_date_sk831));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6573_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6573_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returned_date_sk831));
    }
};
}
struct SW_JOIN_INNER_TD_6573_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_return_quantity845;
    std::string _i_item_id8950;
};
struct SW_JOIN_INNER_TD_6573_key_rightMajor {
    int32_t _d_date_sk8971;
    bool operator==(const SW_JOIN_INNER_TD_6573_key_rightMajor& other) const {
        return ((_d_date_sk8971 == other._d_date_sk8971));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6573_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6573_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8971));
    }
};
}
struct SW_JOIN_INNER_TD_6573_payload_rightMajor {
    int32_t _d_date_sk8971;
};
void SW_JOIN_INNER_TD_6573(Table &tbl_JOIN_INNER_TD_749_output, Table &tbl_JOIN_LEFTSEMI_TD_760_output, Table &tbl_JOIN_INNER_TD_6573_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_returned_date_sk#831 = d_date_sk#8971))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_return_quantity#845, i_item_id#8950)
    // Right Table: ListBuffer(d_date_sk#8971)
    // Output Table: ListBuffer(wr_return_quantity#845, i_item_id#8950)
    int left_nrow = tbl_JOIN_INNER_TD_749_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_760_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6573_key_leftMajor, SW_JOIN_INNER_TD_6573_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_749_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_JOIN_INNER_TD_749_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6573_key_leftMajor keyA{_wr_returned_date_sk831_k};
            int32_t _wr_returned_date_sk831 = tbl_JOIN_INNER_TD_749_output.getInt32(i, 0);
            int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_749_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950_n = tbl_JOIN_INNER_TD_749_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_item_id8950 = std::string(_i_item_id8950_n.data());
            SW_JOIN_INNER_TD_6573_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_return_quantity845, _i_item_id8950};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_760_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8971_k = tbl_JOIN_LEFTSEMI_TD_760_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6573_key_leftMajor{_d_date_sk8971_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_return_quantity845 = (it->second)._wr_return_quantity845;
                std::string _i_item_id8950 = (it->second)._i_item_id8950;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950_n{};
                memcpy(_i_item_id8950_n.data(), (_i_item_id8950).data(), (_i_item_id8950).length());
                int32_t _d_date_sk8971 = tbl_JOIN_LEFTSEMI_TD_760_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6573_output.setInt32(r, 0, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_6573_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8950_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6573_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6573_key_rightMajor, SW_JOIN_INNER_TD_6573_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_760_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8971_k = tbl_JOIN_LEFTSEMI_TD_760_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6573_key_rightMajor keyA{_d_date_sk8971_k};
            int32_t _d_date_sk8971 = tbl_JOIN_LEFTSEMI_TD_760_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6573_payload_rightMajor payloadA{_d_date_sk8971};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_749_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_JOIN_INNER_TD_749_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6573_key_rightMajor{_wr_returned_date_sk831_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8971 = (it->second)._d_date_sk8971;
                int32_t _wr_returned_date_sk831 = tbl_JOIN_INNER_TD_749_output.getInt32(i, 0);
                int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_749_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950_n = tbl_JOIN_INNER_TD_749_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_item_id8950 = std::string(_i_item_id8950_n.data());
                tbl_JOIN_INNER_TD_6573_output.setInt32(r, 0, _wr_return_quantity845);
                tbl_JOIN_INNER_TD_6573_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id8950_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6573_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6573_output #Row: " << tbl_JOIN_INNER_TD_6573_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6720_key;
struct SW_Aggregate_TD_6720_payload {
    std::string _item_id8891;
    int64_t _cr_item_qty8892L_sum_0;
};
void SW_Aggregate_TD_6720(Table &tbl_JOIN_INNER_TD_7874_output, Table &tbl_Aggregate_TD_6720_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#8900, i_item_id#8900 AS item_id#8891, sum(cr_return_quantity#1040) AS cr_item_qty#8892L)
    // Input: ListBuffer(cr_return_quantity#1040, i_item_id#8900)
    // Output: ListBuffer(item_id#8891, cr_item_qty#8892L)
    std::unordered_map<SW_Aggregate_TD_6720_key, SW_Aggregate_TD_6720_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7874_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_return_quantity1040 = tbl_JOIN_INNER_TD_7874_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8900 = tbl_JOIN_INNER_TD_7874_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_6720_key k = std::string(_i_item_id8900.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id8891 = _i_item_id8900;
        int64_t _cr_item_qty8892L_sum_0 = _cr_return_quantity1040;
        SW_Aggregate_TD_6720_payload p{std::string(_item_id8891.data()), _cr_item_qty8892L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._cr_item_qty8892L_sum_0 + _cr_item_qty8892L_sum_0;
            p._cr_item_qty8892L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_item_id8900 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _item_id8891_n{};
        memcpy(_item_id8891_n.data(), (it.second)._item_id8891.data(), (it.second)._item_id8891.length());
        tbl_Aggregate_TD_6720_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8891_n);
        int64_t _cr_item_qty8892L = (it.second)._cr_item_qty8892L_sum_0;
        tbl_Aggregate_TD_6720_output.setInt64(r, 1, _cr_item_qty8892L);
        ++r;
    }
    tbl_Aggregate_TD_6720_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6720_output #Row: " << tbl_Aggregate_TD_6720_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6875_key;
struct SW_Aggregate_TD_6875_payload {
    std::string _item_id8887;
    int64_t _sr_item_qty8888L_sum_0;
};
void SW_Aggregate_TD_6875(Table &tbl_JOIN_INNER_TD_7760_output, Table &tbl_Aggregate_TD_6875_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#229, i_item_id#229 AS item_id#8887, sum(sr_return_quantity#679) AS sr_item_qty#8888L)
    // Input: ListBuffer(sr_return_quantity#679, i_item_id#229)
    // Output: ListBuffer(item_id#8887, sr_item_qty#8888L)
    std::unordered_map<SW_Aggregate_TD_6875_key, SW_Aggregate_TD_6875_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7760_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_return_quantity679 = tbl_JOIN_INNER_TD_7760_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_7760_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_6875_key k = std::string(_i_item_id229.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id8887 = _i_item_id229;
        int64_t _sr_item_qty8888L_sum_0 = _sr_return_quantity679;
        SW_Aggregate_TD_6875_payload p{std::string(_item_id8887.data()), _sr_item_qty8888L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sr_item_qty8888L_sum_0 + _sr_item_qty8888L_sum_0;
            p._sr_item_qty8888L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_item_id229 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n{};
        memcpy(_item_id8887_n.data(), (it.second)._item_id8887.data(), (it.second)._item_id8887.length());
        tbl_Aggregate_TD_6875_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8887_n);
        int64_t _sr_item_qty8888L = (it.second)._sr_item_qty8888L_sum_0;
        tbl_Aggregate_TD_6875_output.setInt64(r, 1, _sr_item_qty8888L);
        ++r;
    }
    tbl_Aggregate_TD_6875_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6875_output #Row: " << tbl_Aggregate_TD_6875_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_5247_key;
struct SW_Aggregate_TD_5247_payload {
    std::string _item_id8895;
    int64_t _wr_item_qty8896L_sum_0;
};
void SW_Aggregate_TD_5247(Table &tbl_JOIN_INNER_TD_6573_output, Table &tbl_Aggregate_TD_5247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_item_id#8950, i_item_id#8950 AS item_id#8895, sum(wr_return_quantity#845) AS wr_item_qty#8896L)
    // Input: ListBuffer(wr_return_quantity#845, i_item_id#8950)
    // Output: ListBuffer(item_id#8895, wr_item_qty#8896L)
    std::unordered_map<SW_Aggregate_TD_5247_key, SW_Aggregate_TD_5247_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6573_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_return_quantity845 = tbl_JOIN_INNER_TD_6573_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id8950 = tbl_JOIN_INNER_TD_6573_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_5247_key k = std::string(_i_item_id8950.data());
        std::array<char, TPCDS_READ_MAX + 1> _item_id8895 = _i_item_id8950;
        int64_t _wr_item_qty8896L_sum_0 = _wr_return_quantity845;
        SW_Aggregate_TD_5247_payload p{std::string(_item_id8895.data()), _wr_item_qty8896L_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._wr_item_qty8896L_sum_0 + _wr_item_qty8896L_sum_0;
            p._wr_item_qty8896L_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_item_id8950 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _item_id8895_n{};
        memcpy(_item_id8895_n.data(), (it.second)._item_id8895.data(), (it.second)._item_id8895.length());
        tbl_Aggregate_TD_5247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8895_n);
        int64_t _wr_item_qty8896L = (it.second)._wr_item_qty8896L_sum_0;
        tbl_Aggregate_TD_5247_output.setInt64(r, 1, _wr_item_qty8896L);
        ++r;
    }
    tbl_Aggregate_TD_5247_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5247_output #Row: " << tbl_Aggregate_TD_5247_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5233_key_leftMajor {
    std::string _item_id8887;
    bool operator==(const SW_JOIN_INNER_TD_5233_key_leftMajor& other) const {
        return ((_item_id8887 == other._item_id8887));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5233_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5233_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id8887));
    }
};
}
struct SW_JOIN_INNER_TD_5233_payload_leftMajor {
    std::string _item_id8887;
    int64_t _sr_item_qty8888L;
};
struct SW_JOIN_INNER_TD_5233_key_rightMajor {
    std::string _item_id8891;
    bool operator==(const SW_JOIN_INNER_TD_5233_key_rightMajor& other) const {
        return ((_item_id8891 == other._item_id8891));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5233_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5233_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id8891));
    }
};
}
struct SW_JOIN_INNER_TD_5233_payload_rightMajor {
    std::string _item_id8891;
    int64_t _cr_item_qty8892L;
};
void SW_JOIN_INNER_TD_5233(Table &tbl_Aggregate_TD_6875_output, Table &tbl_Aggregate_TD_6720_output, Table &tbl_JOIN_INNER_TD_5233_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((item_id#8887 = item_id#8891))
    // Left Table: ListBuffer(item_id#8887, sr_item_qty#8888L)
    // Right Table: ListBuffer(item_id#8891, cr_item_qty#8892L)
    // Output Table: ListBuffer(item_id#8887, sr_item_qty#8888L, cr_item_qty#8892L)
    int left_nrow = tbl_Aggregate_TD_6875_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6720_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5233_key_leftMajor, SW_JOIN_INNER_TD_5233_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6875_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id8887_k_n = tbl_Aggregate_TD_6875_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8887_k = std::string(_item_id8887_k_n.data());
            SW_JOIN_INNER_TD_5233_key_leftMajor keyA{_item_id8887_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n = tbl_Aggregate_TD_6875_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8887 = std::string(_item_id8887_n.data());
            int64_t _sr_item_qty8888L = tbl_Aggregate_TD_6875_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_5233_payload_leftMajor payloadA{_item_id8887, _sr_item_qty8888L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6720_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id8891_k_n = tbl_Aggregate_TD_6720_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8891_k = std::string(_item_id8891_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5233_key_leftMajor{_item_id8891_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id8887 = (it->second)._item_id8887;
                std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n{};
                memcpy(_item_id8887_n.data(), (_item_id8887).data(), (_item_id8887).length());
                int64_t _sr_item_qty8888L = (it->second)._sr_item_qty8888L;
                std::array<char, TPCDS_READ_MAX + 1> _item_id8891_n = tbl_Aggregate_TD_6720_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id8891 = std::string(_item_id8891_n.data());
                int64_t _cr_item_qty8892L = tbl_Aggregate_TD_6720_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_5233_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8887_n);
                tbl_JOIN_INNER_TD_5233_output.setInt64(r, 1, _sr_item_qty8888L);
                tbl_JOIN_INNER_TD_5233_output.setInt64(r, 2, _cr_item_qty8892L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5233_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5233_key_rightMajor, SW_JOIN_INNER_TD_5233_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6720_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id8891_k_n = tbl_Aggregate_TD_6720_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8891_k = std::string(_item_id8891_k_n.data());
            SW_JOIN_INNER_TD_5233_key_rightMajor keyA{_item_id8891_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id8891_n = tbl_Aggregate_TD_6720_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8891 = std::string(_item_id8891_n.data());
            int64_t _cr_item_qty8892L = tbl_Aggregate_TD_6720_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_5233_payload_rightMajor payloadA{_item_id8891, _cr_item_qty8892L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6875_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id8887_k_n = tbl_Aggregate_TD_6875_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8887_k = std::string(_item_id8887_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5233_key_rightMajor{_item_id8887_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id8891 = (it->second)._item_id8891;
                std::array<char, TPCDS_READ_MAX + 1> _item_id8891_n{};
                memcpy(_item_id8891_n.data(), (_item_id8891).data(), (_item_id8891).length());
                int64_t _cr_item_qty8892L = (it->second)._cr_item_qty8892L;
                std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n = tbl_Aggregate_TD_6875_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id8887 = std::string(_item_id8887_n.data());
                int64_t _sr_item_qty8888L = tbl_Aggregate_TD_6875_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_5233_output.setInt64(r, 2, _cr_item_qty8892L);
                tbl_JOIN_INNER_TD_5233_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8887_n);
                tbl_JOIN_INNER_TD_5233_output.setInt64(r, 1, _sr_item_qty8888L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5233_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5233_output #Row: " << tbl_JOIN_INNER_TD_5233_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4817_key_leftMajor {
    std::string _item_id8887;
    bool operator==(const SW_JOIN_INNER_TD_4817_key_leftMajor& other) const {
        return ((_item_id8887 == other._item_id8887));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4817_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4817_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id8887));
    }
};
}
struct SW_JOIN_INNER_TD_4817_payload_leftMajor {
    std::string _item_id8887;
    int64_t _sr_item_qty8888L;
    int64_t _cr_item_qty8892L;
};
struct SW_JOIN_INNER_TD_4817_key_rightMajor {
    std::string _item_id8895;
    bool operator==(const SW_JOIN_INNER_TD_4817_key_rightMajor& other) const {
        return ((_item_id8895 == other._item_id8895));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4817_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4817_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._item_id8895));
    }
};
}
struct SW_JOIN_INNER_TD_4817_payload_rightMajor {
    std::string _item_id8895;
    int64_t _wr_item_qty8896L;
};
void SW_JOIN_INNER_TD_4817(Table &tbl_JOIN_INNER_TD_5233_output, Table &tbl_Aggregate_TD_5247_output, Table &tbl_JOIN_INNER_TD_4817_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((item_id#8887 = item_id#8895))
    // Left Table: ListBuffer(item_id#8887, sr_item_qty#8888L, cr_item_qty#8892L)
    // Right Table: ListBuffer(item_id#8895, wr_item_qty#8896L)
    // Output Table: ListBuffer(item_id#8887, sr_item_qty#8888L, cr_item_qty#8892L, wr_item_qty#8896L)
    int left_nrow = tbl_JOIN_INNER_TD_5233_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5247_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4817_key_leftMajor, SW_JOIN_INNER_TD_4817_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5233_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id8887_k_n = tbl_JOIN_INNER_TD_5233_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8887_k = std::string(_item_id8887_k_n.data());
            SW_JOIN_INNER_TD_4817_key_leftMajor keyA{_item_id8887_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n = tbl_JOIN_INNER_TD_5233_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8887 = std::string(_item_id8887_n.data());
            int64_t _sr_item_qty8888L = tbl_JOIN_INNER_TD_5233_output.getInt64(i, 1);
            int64_t _cr_item_qty8892L = tbl_JOIN_INNER_TD_5233_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_4817_payload_leftMajor payloadA{_item_id8887, _sr_item_qty8888L, _cr_item_qty8892L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5247_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id8895_k_n = tbl_Aggregate_TD_5247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8895_k = std::string(_item_id8895_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4817_key_leftMajor{_item_id8895_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id8887 = (it->second)._item_id8887;
                std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n{};
                memcpy(_item_id8887_n.data(), (_item_id8887).data(), (_item_id8887).length());
                int64_t _sr_item_qty8888L = (it->second)._sr_item_qty8888L;
                int64_t _cr_item_qty8892L = (it->second)._cr_item_qty8892L;
                std::array<char, TPCDS_READ_MAX + 1> _item_id8895_n = tbl_Aggregate_TD_5247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id8895 = std::string(_item_id8895_n.data());
                int64_t _wr_item_qty8896L = tbl_Aggregate_TD_5247_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_4817_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8887_n);
                tbl_JOIN_INNER_TD_4817_output.setInt64(r, 1, _sr_item_qty8888L);
                tbl_JOIN_INNER_TD_4817_output.setInt64(r, 2, _cr_item_qty8892L);
                tbl_JOIN_INNER_TD_4817_output.setInt64(r, 3, _wr_item_qty8896L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4817_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4817_key_rightMajor, SW_JOIN_INNER_TD_4817_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5247_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id8895_k_n = tbl_Aggregate_TD_5247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8895_k = std::string(_item_id8895_k_n.data());
            SW_JOIN_INNER_TD_4817_key_rightMajor keyA{_item_id8895_k};
            std::array<char, TPCDS_READ_MAX + 1> _item_id8895_n = tbl_Aggregate_TD_5247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8895 = std::string(_item_id8895_n.data());
            int64_t _wr_item_qty8896L = tbl_Aggregate_TD_5247_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_4817_payload_rightMajor payloadA{_item_id8895, _wr_item_qty8896L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5233_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _item_id8887_k_n = tbl_JOIN_INNER_TD_5233_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _item_id8887_k = std::string(_item_id8887_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4817_key_rightMajor{_item_id8887_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _item_id8895 = (it->second)._item_id8895;
                std::array<char, TPCDS_READ_MAX + 1> _item_id8895_n{};
                memcpy(_item_id8895_n.data(), (_item_id8895).data(), (_item_id8895).length());
                int64_t _wr_item_qty8896L = (it->second)._wr_item_qty8896L;
                std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n = tbl_JOIN_INNER_TD_5233_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _item_id8887 = std::string(_item_id8887_n.data());
                int64_t _sr_item_qty8888L = tbl_JOIN_INNER_TD_5233_output.getInt64(i, 1);
                int64_t _cr_item_qty8892L = tbl_JOIN_INNER_TD_5233_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_4817_output.setInt64(r, 3, _wr_item_qty8896L);
                tbl_JOIN_INNER_TD_4817_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8887_n);
                tbl_JOIN_INNER_TD_4817_output.setInt64(r, 1, _sr_item_qty8888L);
                tbl_JOIN_INNER_TD_4817_output.setInt64(r, 2, _cr_item_qty8892L);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4817_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4817_output #Row: " << tbl_JOIN_INNER_TD_4817_output.getNumRow() << std::endl;
}

void SW_Project_TD_3182(Table &tbl_JOIN_INNER_TD_4817_output, Table &tbl_Project_TD_3182_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((((cast(sr_item_qty#8888L as double) / cast(((sr_item_qty#8888L + cr_item_qty#8892L) + wr_item_qty#8896L) as double)) / 3.0) * 100.0) AS sr_dev#8883, (((cast(cr_item_qty#8892L as double) / cast(((sr_item_qty#8888L + cr_item_qty#8892L) + wr_item_qty#8896L) as double)) / 3.0) * 100.0) AS cr_dev#8884, (((cast(wr_item_qty#8896L as double) / cast(((sr_item_qty#8888L + cr_item_qty#8892L) + wr_item_qty#8896L) as double)) / 3.0) * 100.0) AS wr_dev#8885, CheckOverflow((promote_precision(cast(cast(((sr_item_qty#8888L + cr_item_qty#8892L) + wr_item_qty#8896L) as decimal(20,0)) as decimal(21,1))) / 3.0), DecimalType(27,6), true) AS average#8886)
    // Input: ListBuffer(item_id#8887, sr_item_qty#8888L, cr_item_qty#8892L, wr_item_qty#8896L)
    // Output: ListBuffer(item_id#8887, sr_item_qty#8888L, sr_dev#8883, cr_item_qty#8892L, cr_dev#8884, wr_item_qty#8896L, wr_dev#8885, average#8886)
    int nrow1 = tbl_JOIN_INNER_TD_4817_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id8887 = tbl_JOIN_INNER_TD_4817_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int64_t _sr_item_qty8888L = tbl_JOIN_INNER_TD_4817_output.getInt64(i, 1);
        int64_t _cr_item_qty8892L = tbl_JOIN_INNER_TD_4817_output.getInt64(i, 2);
        int64_t _wr_item_qty8896L = tbl_JOIN_INNER_TD_4817_output.getInt64(i, 3);
        int64_t _sr_dev8883 = (((_sr_item_qty8888L / ((_sr_item_qty8888L + _cr_item_qty8892L) + _wr_item_qty8896L)) / 3.0) * 100.0);
        tbl_Project_TD_3182_output.setInt64(i, 2, _sr_dev8883);
        int64_t _cr_dev8884 = (((_cr_item_qty8892L / ((_sr_item_qty8888L + _cr_item_qty8892L) + _wr_item_qty8896L)) / 3.0) * 100.0);
        tbl_Project_TD_3182_output.setInt64(i, 4, _cr_dev8884);
        int64_t _wr_dev8885 = (((_wr_item_qty8896L / ((_sr_item_qty8888L + _cr_item_qty8892L) + _wr_item_qty8896L)) / 3.0) * 100.0);
        tbl_Project_TD_3182_output.setInt64(i, 6, _wr_dev8885);
        int32_t _average8886 = (((_sr_item_qty8888L + _cr_item_qty8892L) + _wr_item_qty8896L) / 3.0);
        tbl_Project_TD_3182_output.setInt32(i, 7, _average8886);
        tbl_Project_TD_3182_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _item_id8887);
        tbl_Project_TD_3182_output.setInt64(i, 1, _sr_item_qty8888L);
        tbl_Project_TD_3182_output.setInt64(i, 3, _cr_item_qty8892L);
        tbl_Project_TD_3182_output.setInt64(i, 5, _wr_item_qty8896L);
    }
    tbl_Project_TD_3182_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3182_output #Row: " << tbl_Project_TD_3182_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2913(Table &tbl_Project_TD_3182_output, Table &tbl_Sort_TD_2913_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(item_id#8887 ASC NULLS FIRST, sr_item_qty#8888L ASC NULLS FIRST)
    // Input: ListBuffer(item_id#8887, sr_item_qty#8888L, sr_dev#8883, cr_item_qty#8892L, cr_dev#8884, wr_item_qty#8896L, wr_dev#8885, average#8886)
    // Output: ListBuffer(item_id#8887, sr_item_qty#8888L, sr_dev#8883, cr_item_qty#8892L, cr_dev#8884, wr_item_qty#8896L, wr_dev#8885, average#8886)
    struct SW_Sort_TD_2913Row {
        std::string _item_id8887;
        int64_t _sr_item_qty8888L;
        int64_t _sr_dev8883;
        int64_t _cr_item_qty8892L;
        int64_t _cr_dev8884;
        int64_t _wr_item_qty8896L;
        int64_t _wr_dev8885;
        int32_t _average8886;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2913Row& a, const SW_Sort_TD_2913Row& b) const { return 
 (a._item_id8887 < b._item_id8887) || 
 ((a._item_id8887 == b._item_id8887) && (a._sr_item_qty8888L < b._sr_item_qty8888L)); 
}
    }SW_Sort_TD_2913_order; 

    int nrow1 = tbl_Project_TD_3182_output.getNumRow();
    std::vector<SW_Sort_TD_2913Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id8887 = tbl_Project_TD_3182_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int64_t _sr_item_qty8888L = tbl_Project_TD_3182_output.getInt64(i, 1);
        int64_t _sr_dev8883 = tbl_Project_TD_3182_output.getInt64(i, 2);
        int64_t _cr_item_qty8892L = tbl_Project_TD_3182_output.getInt64(i, 3);
        int64_t _cr_dev8884 = tbl_Project_TD_3182_output.getInt64(i, 4);
        int64_t _wr_item_qty8896L = tbl_Project_TD_3182_output.getInt64(i, 5);
        int64_t _wr_dev8885 = tbl_Project_TD_3182_output.getInt64(i, 6);
        int32_t _average8886 = tbl_Project_TD_3182_output.getInt32(i, 7);
        SW_Sort_TD_2913Row t = {std::string(_item_id8887.data()),_sr_item_qty8888L,_sr_dev8883,_cr_item_qty8892L,_cr_dev8884,_wr_item_qty8896L,_wr_dev8885,_average8886};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2913_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id8887{};
        memcpy(_item_id8887.data(), (it._item_id8887).data(), (it._item_id8887).length());
        tbl_Sort_TD_2913_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _item_id8887);
        tbl_Sort_TD_2913_output.setInt64(r, 1, it._sr_item_qty8888L);
        tbl_Sort_TD_2913_output.setInt64(r, 2, it._sr_dev8883);
        tbl_Sort_TD_2913_output.setInt64(r, 3, it._cr_item_qty8892L);
        tbl_Sort_TD_2913_output.setInt64(r, 4, it._cr_dev8884);
        tbl_Sort_TD_2913_output.setInt64(r, 5, it._wr_item_qty8896L);
        tbl_Sort_TD_2913_output.setInt64(r, 6, it._wr_dev8885);
        tbl_Sort_TD_2913_output.setInt32(r, 7, it._average8886);
        ++r;
    }
    tbl_Sort_TD_2913_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2913_output #Row: " << tbl_Sort_TD_2913_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_196(Table &tbl_Sort_TD_2913_output, Table &tbl_LocalLimit_TD_196_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(item_id#8887, sr_item_qty#8888L, sr_dev#8883, cr_item_qty#8892L, cr_dev#8884, wr_item_qty#8896L, wr_dev#8885, average#8886)
    // Output: ListBuffer(item_id#8887, sr_item_qty#8888L, sr_dev#8883, cr_item_qty#8892L, cr_dev#8884, wr_item_qty#8896L, wr_dev#8885, average#8886)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n = tbl_Sort_TD_2913_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_196_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8887_n);
        tbl_LocalLimit_TD_196_output.setInt32(r, 1, tbl_Sort_TD_2913_output.getInt64(i, 1));
        tbl_LocalLimit_TD_196_output.setInt32(r, 2, tbl_Sort_TD_2913_output.getInt64(i, 2));
        tbl_LocalLimit_TD_196_output.setInt32(r, 3, tbl_Sort_TD_2913_output.getInt64(i, 3));
        tbl_LocalLimit_TD_196_output.setInt32(r, 4, tbl_Sort_TD_2913_output.getInt64(i, 4));
        tbl_LocalLimit_TD_196_output.setInt32(r, 5, tbl_Sort_TD_2913_output.getInt64(i, 5));
        tbl_LocalLimit_TD_196_output.setInt32(r, 6, tbl_Sort_TD_2913_output.getInt64(i, 6));
        tbl_LocalLimit_TD_196_output.setInt32(r, 7, tbl_Sort_TD_2913_output.getInt32(i, 7));
        r++;
    }
    tbl_LocalLimit_TD_196_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_196_output #Row: " << tbl_LocalLimit_TD_196_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0347(Table &tbl_LocalLimit_TD_196_output, Table &tbl_GlobalLimit_TD_0347_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(item_id#8887, sr_item_qty#8888L, sr_dev#8883, cr_item_qty#8892L, cr_dev#8884, wr_item_qty#8896L, wr_dev#8885, average#8886)
    // Output: ListBuffer(item_id#8887, sr_item_qty#8888L, sr_dev#8883, cr_item_qty#8892L, cr_dev#8884, wr_item_qty#8896L, wr_dev#8885, average#8886)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _item_id8887_n = tbl_LocalLimit_TD_196_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0347_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _item_id8887_n);
        tbl_GlobalLimit_TD_0347_output.setInt32(r, 1, tbl_LocalLimit_TD_196_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0347_output.setInt32(r, 2, tbl_LocalLimit_TD_196_output.getInt64(i, 2));
        tbl_GlobalLimit_TD_0347_output.setInt32(r, 3, tbl_LocalLimit_TD_196_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0347_output.setInt32(r, 4, tbl_LocalLimit_TD_196_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0347_output.setInt32(r, 5, tbl_LocalLimit_TD_196_output.getInt64(i, 5));
        tbl_GlobalLimit_TD_0347_output.setInt32(r, 6, tbl_LocalLimit_TD_196_output.getInt64(i, 6));
        tbl_GlobalLimit_TD_0347_output.setInt32(r, 7, tbl_LocalLimit_TD_196_output.getInt32(i, 7));
        r++;
    }
    tbl_GlobalLimit_TD_0347_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0347_output #Row: " << tbl_GlobalLimit_TD_0347_output.getNumRow() << std::endl;
}

