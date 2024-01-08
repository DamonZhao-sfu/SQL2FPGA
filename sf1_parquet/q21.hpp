#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9156(Table &tbl_SerializeFromObject_TD_10181_input, Table &tbl_Filter_TD_9156_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(l_receiptdate#1132) AND isnotnull(l_commitdate#1131)) AND (cast(regexp_replace(cast(l_receiptdate#1132 as string), -, , 1) as int) > cast(regexp_replace(cast(l_commitdate#1131 as string), -, , 1) as int))))
    // Input: ListBuffer(l_orderkey#1121L, l_suppkey#1123L, l_receiptdate#1132, l_commitdate#1131)
    // Output: ListBuffer(l_orderkey#1121L, l_suppkey#1123L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10181_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_receiptdate1132 = tbl_SerializeFromObject_TD_10181_input.getInt32(i, 2);
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_commitdate1131 = tbl_SerializeFromObject_TD_10181_input.getInt32(i, 3);
        if (((1) && (1)) && (_l_receiptdate1132 > _l_commitdate1131)) {
            int64_t _l_orderkey1121L_t = tbl_SerializeFromObject_TD_10181_input.getInt64(i, 0);
            tbl_Filter_TD_9156_output.setInt64(r, 0, _l_orderkey1121L_t);
            int64_t _l_suppkey1123L_t = tbl_SerializeFromObject_TD_10181_input.getInt64(i, 1);
            tbl_Filter_TD_9156_output.setInt64(r, 1, _l_suppkey1123L_t);
            r++;
        }
    }
    tbl_Filter_TD_9156_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9156_output #Row: " << tbl_Filter_TD_9156_output.getNumRow() << std::endl;
}

void SW_Project_TD_9203(Table &tbl_SerializeFromObject_TD_10495_input, Table &tbl_Project_TD_9203_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#1105L as int) AS l_orderkey#32#1204, cast(l_suppkey#1107L as int) AS l_suppkey#66#1206)
    // Input: ListBuffer(l_orderkey#1105L, l_suppkey#1107L)
    // Output: ListBuffer(l_orderkey#32#1204, l_suppkey#66#1206)
    int nrow1 = tbl_SerializeFromObject_TD_10495_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_orderkey1105L = tbl_SerializeFromObject_TD_10495_input.getInt64(i, 0);
        int64_t _l_suppkey1107L = tbl_SerializeFromObject_TD_10495_input.getInt64(i, 1);
        int32_t _l_orderkey321204 = _l_orderkey1105L;
        tbl_Project_TD_9203_output.setInt32(i, 0, _l_orderkey321204);
        int32_t _l_suppkey661206 = _l_suppkey1107L;
        tbl_Project_TD_9203_output.setInt32(i, 1, _l_suppkey661206);
    }
    tbl_Project_TD_9203_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_9203_output #Row: " << tbl_Project_TD_9203_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9369(Table &tbl_SerializeFromObject_TD_10622_input, Table &tbl_Filter_TD_9369_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(l_receiptdate#11) AND isnotnull(l_commitdate#10)) AND (cast(regexp_replace(cast(l_receiptdate#11 as string), -, , 1) as int) > cast(regexp_replace(cast(l_commitdate#10 as string), -, , 1) as int))) AND isnotnull(cast(l_suppkey#2L as int))) AND isnotnull(cast(l_orderkey#0L as int))))
    // Input: ListBuffer(l_orderkey#0L, l_suppkey#2L, l_receiptdate#11, l_commitdate#10)
    // Output: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10622_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_receiptdate11 = tbl_SerializeFromObject_TD_10622_input.getInt32(i, 2);
        // Unsupported column typeDateType default to IntegerType
        int32_t _l_commitdate10 = tbl_SerializeFromObject_TD_10622_input.getInt32(i, 3);
        int64_t _l_suppkey2L = tbl_SerializeFromObject_TD_10622_input.getInt64(i, 1);
        int64_t _l_orderkey0L = tbl_SerializeFromObject_TD_10622_input.getInt64(i, 0);
        if (((((1) && (1)) && (_l_receiptdate11 > _l_commitdate10)) && (1)) && (1)) {
            int64_t _l_orderkey0L_t = tbl_SerializeFromObject_TD_10622_input.getInt64(i, 0);
            tbl_Filter_TD_9369_output.setInt64(r, 0, _l_orderkey0L_t);
            int64_t _l_suppkey2L_t = tbl_SerializeFromObject_TD_10622_input.getInt64(i, 1);
            tbl_Filter_TD_9369_output.setInt64(r, 1, _l_suppkey2L_t);
            r++;
        }
    }
    tbl_Filter_TD_9369_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9369_output #Row: " << tbl_Filter_TD_9369_output.getNumRow() << std::endl;
}

void SW_Project_TD_8792(Table &tbl_Filter_TD_9156_output, Table &tbl_Project_TD_8792_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#1121L as int) AS l_orderkey#32#1217, cast(l_suppkey#1123L as int) AS l_suppkey#66#1219)
    // Input: ListBuffer(l_orderkey#1121L, l_suppkey#1123L)
    // Output: ListBuffer(l_orderkey#32#1217, l_suppkey#66#1219)
    int nrow1 = tbl_Filter_TD_9156_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_orderkey1121L = tbl_Filter_TD_9156_output.getInt64(i, 0);
        int64_t _l_suppkey1123L = tbl_Filter_TD_9156_output.getInt64(i, 1);
        int32_t _l_orderkey321217 = _l_orderkey1121L;
        tbl_Project_TD_8792_output.setInt32(i, 0, _l_orderkey321217);
        int32_t _l_suppkey661219 = _l_suppkey1123L;
        tbl_Project_TD_8792_output.setInt32(i, 1, _l_suppkey661219);
    }
    tbl_Project_TD_8792_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8792_output #Row: " << tbl_Project_TD_8792_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_810_key_leftMajor {
    int64_t _l_orderkey0L;
    int64_t _l_suppkey2L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_810_key_leftMajor& other) const {
        return ((_l_orderkey0L == other._l_orderkey0L) && (_l_suppkey2L != other._l_suppkey2L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_810_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_810_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._l_orderkey0L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_810_payload_leftMajor {
    int64_t _l_orderkey0L;
    int64_t _l_suppkey2L;
};
struct SW_JOIN_LEFTSEMI_TD_810_key_rightMajor {
    int32_t _l_orderkey321204;
    int32_t _l_suppkey661206;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_810_key_rightMajor& other) const {
        return ((_l_orderkey321204 == other._l_orderkey321204) && (_l_suppkey661206 != other._l_suppkey661206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_810_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_810_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_orderkey321204));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_810_payload_rightMajor {
    int32_t _l_orderkey321204;
    int32_t _l_suppkey661206;
};
void SW_JOIN_LEFTSEMI_TD_810(Table &tbl_Filter_TD_9369_output, Table &tbl_Project_TD_9203_output, Table &tbl_JOIN_LEFTSEMI_TD_810_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer(((l_orderkey#32#1204 = cast(l_orderkey#0L as int)) AND NOT (l_suppkey#66#1206 = cast(l_suppkey#2L as int))))
    // Left Table: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    // Right Table: ListBuffer(l_orderkey#32#1204, l_suppkey#66#1206)
    // Output Table: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    int left_nrow = tbl_Filter_TD_9369_output.getNumRow();
    int right_nrow = tbl_Project_TD_9203_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_810_key_rightMajor, SW_JOIN_LEFTSEMI_TD_810_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_9203_output.getNumRow();
        int nrow2 = tbl_Filter_TD_9369_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _l_orderkey321204_k = tbl_Project_TD_9203_output.getInt32(i, 0);
            int32_t _l_suppkey661206_k = tbl_Project_TD_9203_output.getInt32(i, 1);
            SW_JOIN_LEFTSEMI_TD_810_key_rightMajor keyA{_l_orderkey321204_k, _l_suppkey661206_k};
            int32_t _l_orderkey321204 = tbl_Project_TD_9203_output.getInt32(i, 0);
            int32_t _l_suppkey661206 = tbl_Project_TD_9203_output.getInt32(i, 1);
            SW_JOIN_LEFTSEMI_TD_810_payload_rightMajor payloadA{_l_orderkey321204, _l_suppkey661206};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _l_orderkey0L_k = tbl_Filter_TD_9369_output.getInt64(i, 0);
            int64_t _l_suppkey2L_k = tbl_Filter_TD_9369_output.getInt64(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_810_key_rightMajor{_l_orderkey0L_k, _l_suppkey2L_k});
            if (it != ht1.end()) {
                int64_t _l_orderkey0L = tbl_Filter_TD_9369_output.getInt64(i, 0);
                int64_t _l_suppkey2L = tbl_Filter_TD_9369_output.getInt64(i, 1);
                if (_l_orderkey321204 == _l_orderkey0L) {
                    tbl_JOIN_LEFTSEMI_TD_810_output.setInt64(r, 0, _l_orderkey0L);
                    tbl_JOIN_LEFTSEMI_TD_810_output.setInt64(r, 1, _l_suppkey2L);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTSEMI_TD_810_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_810_output #Row: " << tbl_JOIN_LEFTSEMI_TD_810_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_77_key_leftMajor {
    int64_t _l_orderkey0L;
    int64_t _l_suppkey2L;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_77_key_leftMajor& other) const {
        return ((_l_orderkey0L == other._l_orderkey0L) && (_l_suppkey2L != other._l_suppkey2L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_77_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_77_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._l_orderkey0L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_77_payload_leftMajor {
    int64_t _l_orderkey0L;
    int64_t _l_suppkey2L;
};
struct SW_JOIN_LEFTSEMI_TD_77_key_rightMajor {
    int32_t _l_orderkey321217;
    int32_t _l_suppkey661219;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_77_key_rightMajor& other) const {
        return ((_l_orderkey321217 == other._l_orderkey321217) && (_l_suppkey661219 != other._l_suppkey661219));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_77_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_77_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_orderkey321217));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_77_payload_rightMajor {
    int32_t _l_orderkey321217;
    int32_t _l_suppkey661219;
};
void SW_JOIN_LEFTSEMI_TD_77(Table &tbl_JOIN_LEFTSEMI_TD_810_output, Table &tbl_Project_TD_8792_output, Table &tbl_JOIN_LEFTSEMI_TD_77_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer(((l_orderkey#32#1217 = cast(l_orderkey#0L as int)) AND NOT (l_suppkey#66#1219 = cast(l_suppkey#2L as int))))
    // Left Table: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    // Right Table: ListBuffer(l_orderkey#32#1217, l_suppkey#66#1219)
    // Output Table: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_810_output.getNumRow();
    int right_nrow = tbl_Project_TD_8792_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_77_key_rightMajor, SW_JOIN_LEFTSEMI_TD_77_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_8792_output.getNumRow();
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_810_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _l_orderkey321217_k = tbl_Project_TD_8792_output.getInt32(i, 0);
            int32_t _l_suppkey661219_k = tbl_Project_TD_8792_output.getInt32(i, 1);
            SW_JOIN_LEFTSEMI_TD_77_key_rightMajor keyA{_l_orderkey321217_k, _l_suppkey661219_k};
            int32_t _l_orderkey321217 = tbl_Project_TD_8792_output.getInt32(i, 0);
            int32_t _l_suppkey661219 = tbl_Project_TD_8792_output.getInt32(i, 1);
            SW_JOIN_LEFTSEMI_TD_77_payload_rightMajor payloadA{_l_orderkey321217, _l_suppkey661219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _l_orderkey0L_k = tbl_JOIN_LEFTSEMI_TD_810_output.getInt64(i, 0);
            int64_t _l_suppkey2L_k = tbl_JOIN_LEFTSEMI_TD_810_output.getInt64(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_77_key_rightMajor{_l_orderkey0L_k, _l_suppkey2L_k});
            if (it != ht1.end()) {
                int64_t _l_orderkey0L = tbl_JOIN_LEFTSEMI_TD_810_output.getInt64(i, 0);
                int64_t _l_suppkey2L = tbl_JOIN_LEFTSEMI_TD_810_output.getInt64(i, 1);
                if (_l_orderkey321217 == _l_orderkey0L) {
                    tbl_JOIN_LEFTSEMI_TD_77_output.setInt64(r, 0, _l_orderkey0L);
                    tbl_JOIN_LEFTSEMI_TD_77_output.setInt64(r, 1, _l_suppkey2L);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTSEMI_TD_77_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_77_output #Row: " << tbl_JOIN_LEFTSEMI_TD_77_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_6964_key_leftMajor {
    int32_t _l_orderkey321217;
    int32_t _l_suppkey661219;
    bool operator==(const SW_JOIN_LEFTANTI_TD_6964_key_leftMajor& other) const {
        return ((_l_orderkey321217 == other._l_orderkey321217) && (_l_suppkey661219 != other._l_suppkey661219));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_6964_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_6964_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._l_orderkey321217));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_6964_payload_leftMajor {
    int32_t _l_orderkey321217;
    int32_t _l_suppkey661219;
};
struct SW_JOIN_LEFTANTI_TD_6964_key_rightMajor {
    int64_t _l_orderkey0L;
    int64_t _l_suppkey2L;
    bool operator==(const SW_JOIN_LEFTANTI_TD_6964_key_rightMajor& other) const {
        return ((_l_orderkey0L == other._l_orderkey0L) && (_l_suppkey2L != other._l_suppkey2L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_6964_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_6964_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._l_orderkey0L));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_6964_payload_rightMajor {
    int64_t _l_orderkey0L;
    int64_t _l_suppkey2L;
};
void SW_JOIN_LEFTANTI_TD_6964(Table &tbl_Project_TD_8792_output, Table &tbl_JOIN_LEFTSEMI_TD_77_output, Table &tbl_JOIN_LEFTANTI_TD_6964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer(((l_orderkey#32#1217 = cast(l_orderkey#0L as int)) AND NOT (l_suppkey#66#1219 = cast(l_suppkey#2L as int))))
    // Left Table: ListBuffer(l_orderkey#32#1217, l_suppkey#66#1219)
    // Right Table: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    // Output Table: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    int left_nrow = tbl_Project_TD_8792_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_77_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_6964_key_rightMajor, SW_JOIN_LEFTANTI_TD_6964_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_77_output.getNumRow();
        int nrow2 = tbl_Project_TD_8792_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _l_orderkey0L_k = tbl_JOIN_LEFTSEMI_TD_77_output.getInt64(i, 0);
            int64_t _l_suppkey2L_k = tbl_JOIN_LEFTSEMI_TD_77_output.getInt64(i, 1);
            SW_JOIN_LEFTANTI_TD_6964_key_rightMajor keyA{_l_orderkey0L_k, _l_suppkey2L_k};
            int64_t _l_orderkey0L = tbl_JOIN_LEFTSEMI_TD_77_output.getInt64(i, 0);
            int64_t _l_suppkey2L = tbl_JOIN_LEFTSEMI_TD_77_output.getInt64(i, 1);
            SW_JOIN_LEFTANTI_TD_6964_payload_rightMajor payloadA{_l_orderkey0L, _l_suppkey2L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _l_orderkey321217_k = tbl_Project_TD_8792_output.getInt32(i, 0);
            int32_t _l_suppkey661219_k = tbl_Project_TD_8792_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_6964_key_rightMajor{_l_orderkey321217_k, _l_suppkey661219_k});
            if (it == ht1.end()) {
                int32_t _l_orderkey321217 = tbl_Project_TD_8792_output.getInt32(i, 0);
                int32_t _l_suppkey661219 = tbl_Project_TD_8792_output.getInt32(i, 1);
                if (_l_orderkey321217 == _l_orderkey0L) {
                tbl_JOIN_LEFTANTI_TD_6964_output.setInt32(r, 0, _l_orderkey321217);
                tbl_JOIN_LEFTANTI_TD_6964_output.setInt32(r, 1, _l_suppkey661219);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTANTI_TD_6964_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_6964_output #Row: " << tbl_JOIN_LEFTANTI_TD_6964_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5581(Table &tbl_SerializeFromObject_TD_6476_input, Table &tbl_Filter_TD_5581_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(o_orderstatus#326) AND (cast(o_orderstatus#326 as int) = 70)) AND isnotnull(cast(o_orderkey#324L as int))))
    // Input: ListBuffer(o_orderkey#324L, o_orderstatus#326)
    // Output: ListBuffer(o_orderkey#324L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6476_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _o_orderstatus326 = tbl_SerializeFromObject_TD_6476_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _o_orderkey324L = tbl_SerializeFromObject_TD_6476_input.getInt64(i, 0);
        if (((1) && (_o_orderstatus326 == 70)) && (1)) {
            int64_t _o_orderkey324L_t = tbl_SerializeFromObject_TD_6476_input.getInt64(i, 0);
            tbl_Filter_TD_5581_output.setInt64(r, 0, _o_orderkey324L_t);
            r++;
        }
    }
    tbl_Filter_TD_5581_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5581_output #Row: " << tbl_Filter_TD_5581_output.getNumRow() << std::endl;
}

void SW_Project_TD_5470(Table &tbl_JOIN_LEFTANTI_TD_6964_output, Table &tbl_Project_TD_5470_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(l_orderkey#0L as int) AS l_orderkey#32, cast(l_suppkey#2L as int) AS l_suppkey#66)
    // Input: ListBuffer(l_orderkey#0L, l_suppkey#2L)
    // Output: ListBuffer(l_orderkey#32, l_suppkey#66)
    int nrow1 = tbl_JOIN_LEFTANTI_TD_6964_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _l_orderkey0L = tbl_JOIN_LEFTANTI_TD_6964_output.getInt64(i, 0);
        int64_t _l_suppkey2L = tbl_JOIN_LEFTANTI_TD_6964_output.getInt64(i, 1);
        int32_t _l_orderkey32 = _l_orderkey0L;
        tbl_Project_TD_5470_output.setInt32(i, 0, _l_orderkey32);
        int32_t _l_suppkey66 = _l_suppkey2L;
        tbl_Project_TD_5470_output.setInt32(i, 1, _l_suppkey66);
    }
    tbl_Project_TD_5470_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5470_output #Row: " << tbl_Project_TD_5470_output.getNumRow() << std::endl;
}

void SW_Project_TD_5923(Table &tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute, Table &tbl_Project_TD_5923_output) {
    // StringRowIDSubstitution: true StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(s_suppkey#484L as int) AS s_suppkey#498, cast(s_nationkey#487L as int) AS s_nationkey#506)
    // Input: ListBuffer(s_suppkey#484L, s_name#485, s_nationkey#487L)
    // Output: ListBuffer(s_suppkey#498, s_name#485, s_nationkey#506)
    int nrow1 = tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _s_suppkey484L = tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.getInt64(i, 0);
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _s_nationkey487L = tbl_SerializeFromObject_TD_7579_input_stringRowIDSubstitute.getInt64(i, 2);
        int32_t _s_suppkey498 = _s_suppkey484L;
        tbl_Project_TD_5923_output.setInt32(i, 0, _s_suppkey498);
        int32_t _s_nationkey506 = _s_nationkey487L;
        tbl_Project_TD_5923_output.setInt32(i, 2, _s_nationkey506);
        tbl_Project_TD_5923_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1, _s_name485);
    }
    tbl_Project_TD_5923_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5923_output #Row: " << tbl_Project_TD_5923_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4760(Table &tbl_SerializeFromObject_TD_536_input, Table &tbl_Filter_TD_4760_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(n_name#297) AND (n_name#297 = JAPAN)) AND isnotnull(cast(n_nationkey#296L as int))))
    // Input: ListBuffer(n_nationkey#296L, n_name#297)
    // Output: ListBuffer(n_nationkey#296L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_536_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _n_name297 = tbl_SerializeFromObject_TD_536_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(i, 1);
        int64_t _n_nationkey296L = tbl_SerializeFromObject_TD_536_input.getInt64(i, 0);
        if (((1) && (std::string(_n_name297.data()) == "JAPAN")) && (1)) {
            int64_t _n_nationkey296L_t = tbl_SerializeFromObject_TD_536_input.getInt64(i, 0);
            tbl_Filter_TD_4760_output.setInt64(r, 0, _n_nationkey296L_t);
            r++;
        }
    }
    tbl_Filter_TD_4760_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4760_output #Row: " << tbl_Filter_TD_4760_output.getNumRow() << std::endl;
}

void SW_Project_TD_4410(Table &tbl_Filter_TD_5581_output, Table &tbl_Project_TD_4410_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(o_orderkey#324L as int) AS o_orderkey#342)
    // Input: ListBuffer(o_orderkey#324L)
    // Output: ListBuffer(o_orderkey#342)
    int nrow1 = tbl_Filter_TD_5581_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _o_orderkey324L = tbl_Filter_TD_5581_output.getInt64(i, 0);
        int32_t _o_orderkey342 = _o_orderkey324L;
        tbl_Project_TD_4410_output.setInt32(i, 0, _o_orderkey342);
    }
    tbl_Project_TD_4410_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4410_output #Row: " << tbl_Project_TD_4410_output.getNumRow() << std::endl;
}


void SW_Project_TD_3929(Table &tbl_Filter_TD_4760_output, Table &tbl_Project_TD_3929_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cast(n_nationkey#296L as int) AS n_nationkey#304)
    // Input: ListBuffer(n_nationkey#296L)
    // Output: ListBuffer(n_nationkey#304)
    int nrow1 = tbl_Filter_TD_4760_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _n_nationkey296L = tbl_Filter_TD_4760_output.getInt64(i, 0);
        int32_t _n_nationkey304 = _n_nationkey296L;
        tbl_Project_TD_3929_output.setInt32(i, 0, _n_nationkey304);
    }
    tbl_Project_TD_3929_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3929_output #Row: " << tbl_Project_TD_3929_output.getNumRow() << std::endl;
}



typedef std::string SW_Aggregate_TD_1351_key;
struct SW_Aggregate_TD_1351_payload {
    int64_t _numwait1101L_count_0;
};
void SW_Aggregate_TD_1351(Table &tbl_JOIN_INNER_TD_2444_output, Table &tbl_SerializeFromObject_TD_7579_input, Table &tbl_Aggregate_TD_1351_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: true
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_name#485, count(1) AS numwait#1101L)
    // Input: ListBuffer(s_name#485)
    // Output: ListBuffer(s_name#485, numwait#1101L)
    std::unordered_map<SW_Aggregate_TD_1351_key, SW_Aggregate_TD_1351_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_2444_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_SerializeFromObject_TD_7579_input.getcharN<char, TPCH_READ_REGION_LEN + 1>(tbl_JOIN_INNER_TD_2444_output.getInt32(i, 0), 1);
        SW_Aggregate_TD_1351_key k = std::string(_s_name485.data());
        int64_t _numwait1101L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_1351_payload p{_numwait1101L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._numwait1101L_count_0 + _numwait1101L_count_0;
            p._numwait1101L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_1351_output.setcharN<char, TPCH_READ_REGION_LEN + 1>(r, 0, _s_name485);
        int64_t _numwait1101L = (it.second)._numwait1101L_count_0;
        tbl_Aggregate_TD_1351_output.setInt64(r, 1, _numwait1101L);
        ++r;
    }
    tbl_Aggregate_TD_1351_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1351_output #Row: " << tbl_Aggregate_TD_1351_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0610(Table &tbl_Aggregate_TD_1351_output, Table &tbl_Sort_TD_0610_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(numwait#1101L DESC NULLS LAST, s_name#485 ASC NULLS FIRST)
    // Input: ListBuffer(s_name#485, numwait#1101L)
    // Output: ListBuffer(s_name#485, numwait#1101L)
    struct SW_Sort_TD_0610Row {
        std::string _s_name485;
        int64_t _numwait1101L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0610Row& a, const SW_Sort_TD_0610Row& b) const { return 
 (a._numwait1101L > b._numwait1101L) || 
 ((a._numwait1101L == b._numwait1101L) && (a._s_name485 < b._s_name485)); 
}
    }SW_Sort_TD_0610_order; 

    int nrow1 = tbl_Aggregate_TD_1351_output.getNumRow();
    std::vector<SW_Sort_TD_0610Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485 = tbl_Aggregate_TD_1351_output.getcharN<char, TPCH_READ_REGION_LEN +1>(i, 0);
        int64_t _numwait1101L = tbl_Aggregate_TD_1351_output.getInt64(i, 1);
        SW_Sort_TD_0610Row t = {std::string(_s_name485.data()),_numwait1101L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0610_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCH_READ_REGION_LEN + 1> _s_name485{};
        memcpy(_s_name485.data(), (it._s_name485).data(), (it._s_name485).length());
        tbl_Sort_TD_0610_output.setcharN<char, TPCH_READ_REGION_LEN +1>(r, 0, _s_name485);
        tbl_Sort_TD_0610_output.setInt64(r, 1, it._numwait1101L);
        if (r < 10) {
            std::cout << (it._s_name485).data() << " " << it._numwait1101L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0610_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0610_output #Row: " << tbl_Sort_TD_0610_output.getNumRow() << std::endl;
}

