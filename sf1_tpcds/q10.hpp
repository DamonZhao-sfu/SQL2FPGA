#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_1122637(Table &tbl_SerializeFromObject_TD_12993833_input, Table &tbl_Filter_TD_1122637_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND (((d_year#126 = 2002) AND (d_moy#128 >= 1)) AND (d_moy#128 <= 4))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12993833_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12993833_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_12993833_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12993833_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && (((_d_year126 == 2002) && (_d_moy128 >= 1)) && (_d_moy128 <= 4))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12993833_input.getInt32(i, 0);
            tbl_Filter_TD_1122637_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_1122637_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1122637_output #Row: " << tbl_Filter_TD_1122637_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11773973(Table &tbl_SerializeFromObject_TD_12761392_input, Table &tbl_Filter_TD_11773973_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#1206))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12761392_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12761392_input.getInt32(i, 0);
        if (_ss_sold_date_sk1206!= 0) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12761392_input.getInt32(i, 0);
            tbl_Filter_TD_11773973_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_12761392_input.getInt32(i, 1);
            tbl_Filter_TD_11773973_output.setInt32(r, 1, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_11773973_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11773973_output #Row: " << tbl_Filter_TD_11773973_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10689630(Table &tbl_SerializeFromObject_TD_11650475_input, Table &tbl_Filter_TD_10689630_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#10204) AND isnotnull(d_moy#10206)) AND (((d_year#10204 = 2002) AND (d_moy#10206 >= 1)) AND (d_moy#10206 <= 4))) AND isnotnull(d_date_sk#10198)))
    // Input: ListBuffer(d_date_sk#10198, d_year#10204, d_moy#10206)
    // Output: ListBuffer(d_date_sk#10198)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11650475_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year10204 = tbl_SerializeFromObject_TD_11650475_input.getInt32(i, 1);
        int32_t _d_moy10206 = tbl_SerializeFromObject_TD_11650475_input.getInt32(i, 2);
        int32_t _d_date_sk10198 = tbl_SerializeFromObject_TD_11650475_input.getInt32(i, 0);
        if ((((_d_year10204!= 0) && (_d_moy10206!= 0)) && (((_d_year10204 == 2002) && (_d_moy10206 >= 1)) && (_d_moy10206 <= 4))) && (_d_date_sk10198!= 0)) {
            int32_t _d_date_sk10198_t = tbl_SerializeFromObject_TD_11650475_input.getInt32(i, 0);
            tbl_Filter_TD_10689630_output.setInt32(r, 0, _d_date_sk10198_t);
            r++;
        }
    }
    tbl_Filter_TD_10689630_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10689630_output #Row: " << tbl_Filter_TD_10689630_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10767661(Table &tbl_SerializeFromObject_TD_1127202_input, Table &tbl_Filter_TD_10767661_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#729))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1127202_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_1127202_input.getInt32(i, 0);
        if (_ws_sold_date_sk729!= 0) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_1127202_input.getInt32(i, 0);
            tbl_Filter_TD_10767661_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_1127202_input.getInt32(i, 1);
            tbl_Filter_TD_10767661_output.setInt32(r, 1, _ws_bill_customer_sk733_t);
            r++;
        }
    }
    tbl_Filter_TD_10767661_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10767661_output #Row: " << tbl_Filter_TD_10767661_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10439456_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10439456_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10439456_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10439456_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10439456_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
};
struct SW_JOIN_INNER_TD_10439456_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10439456_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10439456_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10439456_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10439456_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10439456(Table &tbl_Filter_TD_11773973_output, Table &tbl_Filter_TD_1122637_output, Table &tbl_JOIN_INNER_TD_10439456_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_customer_sk#1209)
    int left_nrow = tbl_Filter_TD_11773973_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1122637_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10439456_key_leftMajor, SW_JOIN_INNER_TD_10439456_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11773973_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_11773973_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10439456_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11773973_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_11773973_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10439456_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1122637_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_1122637_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10439456_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _d_date_sk120 = tbl_Filter_TD_1122637_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10439456_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10439456_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10439456_key_rightMajor, SW_JOIN_INNER_TD_10439456_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1122637_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_1122637_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10439456_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_1122637_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10439456_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11773973_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_11773973_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10439456_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11773973_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_11773973_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10439456_output.setInt32(r, 0, _ss_customer_sk1209);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10439456_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10439456_output #Row: " << tbl_JOIN_INNER_TD_10439456_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10164186(Table &tbl_SerializeFromObject_TD_1187070_input, Table &tbl_Filter_TD_10164186_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_current_addr_sk#4) AND isnotnull(c_current_cdemo_sk#2)))
    // Input: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1187070_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_1187070_input.getInt32(i, 2);
        int32_t _c_current_cdemo_sk2 = tbl_SerializeFromObject_TD_1187070_input.getInt32(i, 1);
        if ((_c_current_addr_sk4!= 0) && (_c_current_cdemo_sk2!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_1187070_input.getInt32(i, 0);
            tbl_Filter_TD_10164186_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_cdemo_sk2_t = tbl_SerializeFromObject_TD_1187070_input.getInt32(i, 1);
            tbl_Filter_TD_10164186_output.setInt32(r, 1, _c_current_cdemo_sk2_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_1187070_input.getInt32(i, 2);
            tbl_Filter_TD_10164186_output.setInt32(r, 2, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_10164186_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10164186_output #Row: " << tbl_Filter_TD_10164186_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9255422(Table &tbl_SerializeFromObject_TD_10910729_input, Table &tbl_Filter_TD_9255422_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#10232) AND isnotnull(d_moy#10234)) AND (((d_year#10232 = 2002) AND (d_moy#10234 >= 1)) AND (d_moy#10234 <= 4))) AND isnotnull(d_date_sk#10226)))
    // Input: ListBuffer(d_date_sk#10226, d_year#10232, d_moy#10234)
    // Output: ListBuffer(d_date_sk#10226)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10910729_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year10232 = tbl_SerializeFromObject_TD_10910729_input.getInt32(i, 1);
        int32_t _d_moy10234 = tbl_SerializeFromObject_TD_10910729_input.getInt32(i, 2);
        int32_t _d_date_sk10226 = tbl_SerializeFromObject_TD_10910729_input.getInt32(i, 0);
        if ((((_d_year10232!= 0) && (_d_moy10234!= 0)) && (((_d_year10232 == 2002) && (_d_moy10234 >= 1)) && (_d_moy10234 <= 4))) && (_d_date_sk10226!= 0)) {
            int32_t _d_date_sk10226_t = tbl_SerializeFromObject_TD_10910729_input.getInt32(i, 0);
            tbl_Filter_TD_9255422_output.setInt32(r, 0, _d_date_sk10226_t);
            r++;
        }
    }
    tbl_Filter_TD_9255422_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9255422_output #Row: " << tbl_Filter_TD_9255422_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9201270(Table &tbl_SerializeFromObject_TD_10963132_input, Table &tbl_Filter_TD_9201270_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10963132_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10963132_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10963132_input.getInt32(i, 0);
            tbl_Filter_TD_9201270_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ship_customer_sk1111_t = tbl_SerializeFromObject_TD_10963132_input.getInt32(i, 1);
            tbl_Filter_TD_9201270_output.setInt32(r, 1, _cs_ship_customer_sk1111_t);
            r++;
        }
    }
    tbl_Filter_TD_9201270_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9201270_output #Row: " << tbl_Filter_TD_9201270_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9977278_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_9977278_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9977278_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9977278_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_9977278_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
};
struct SW_JOIN_INNER_TD_9977278_key_rightMajor {
    int32_t _d_date_sk10198;
    bool operator==(const SW_JOIN_INNER_TD_9977278_key_rightMajor& other) const {
        return ((_d_date_sk10198 == other._d_date_sk10198));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9977278_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9977278_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk10198));
    }
};
}
struct SW_JOIN_INNER_TD_9977278_payload_rightMajor {
    int32_t _d_date_sk10198;
};
void SW_JOIN_INNER_TD_9977278(Table &tbl_Filter_TD_10767661_output, Table &tbl_Filter_TD_10689630_output, Table &tbl_JOIN_INNER_TD_9977278_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#10198))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733)
    // Right Table: ListBuffer(d_date_sk#10198)
    // Output Table: ListBuffer(ws_bill_customer_sk#733)
    int left_nrow = tbl_Filter_TD_10767661_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10689630_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9977278_key_leftMajor, SW_JOIN_INNER_TD_9977278_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10767661_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_10767661_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9977278_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10767661_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_10767661_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9977278_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10689630_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk10198_k = tbl_Filter_TD_10689630_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9977278_key_leftMajor{_d_date_sk10198_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _d_date_sk10198 = tbl_Filter_TD_10689630_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9977278_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9977278_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9977278_key_rightMajor, SW_JOIN_INNER_TD_9977278_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10689630_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk10198_k = tbl_Filter_TD_10689630_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9977278_key_rightMajor keyA{_d_date_sk10198_k};
            int32_t _d_date_sk10198 = tbl_Filter_TD_10689630_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9977278_payload_rightMajor payloadA{_d_date_sk10198};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10767661_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_10767661_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9977278_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk10198 = (it->second)._d_date_sk10198;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10767661_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_10767661_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9977278_output.setInt32(r, 0, _ws_bill_customer_sk733);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9977278_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9977278_output #Row: " << tbl_JOIN_INNER_TD_9977278_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_9978870_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_9978870_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_9978870_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_9978870_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_9978870_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_LEFTSEMI_TD_9978870_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_9978870_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_9978870_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_9978870_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_9978870_payload_rightMajor {
    int32_t _ss_customer_sk1209;
};
void SW_JOIN_LEFTSEMI_TD_9978870(Table &tbl_Filter_TD_10164186_output, Table &tbl_JOIN_INNER_TD_10439456_output, Table &tbl_JOIN_LEFTSEMI_TD_9978870_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ss_customer_sk#1209)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    int left_nrow = tbl_Filter_TD_10164186_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_10439456_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_9978870_key_rightMajor, SW_JOIN_LEFTSEMI_TD_9978870_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10439456_output.getNumRow();
        int nrow2 = tbl_Filter_TD_10164186_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_10439456_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_9978870_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_10439456_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_9978870_payload_rightMajor payloadA{_ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10164186_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_9978870_key_rightMajor{_c_customer_sk0_k});
            if (it != ht1.end()) {
                int32_t _c_customer_sk0 = tbl_Filter_TD_10164186_output.getInt32(i, 0);
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_10164186_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_10164186_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_9978870_output.setInt32(r, 0, _c_customer_sk0);
                tbl_JOIN_LEFTSEMI_TD_9978870_output.setInt32(r, 1, _c_current_cdemo_sk2);
                tbl_JOIN_LEFTSEMI_TD_9978870_output.setInt32(r, 2, _c_current_addr_sk4);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_9978870_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_9978870_output #Row: " << tbl_JOIN_LEFTSEMI_TD_9978870_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8261332_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_8261332_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8261332_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8261332_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_8261332_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_ship_customer_sk1111;
};
struct SW_JOIN_INNER_TD_8261332_key_rightMajor {
    int32_t _d_date_sk10226;
    bool operator==(const SW_JOIN_INNER_TD_8261332_key_rightMajor& other) const {
        return ((_d_date_sk10226 == other._d_date_sk10226));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8261332_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8261332_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk10226));
    }
};
}
struct SW_JOIN_INNER_TD_8261332_payload_rightMajor {
    int32_t _d_date_sk10226;
};
void SW_JOIN_INNER_TD_8261332(Table &tbl_Filter_TD_9201270_output, Table &tbl_Filter_TD_9255422_output, Table &tbl_JOIN_INNER_TD_8261332_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#10226))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_ship_customer_sk#1111)
    // Right Table: ListBuffer(d_date_sk#10226)
    // Output Table: ListBuffer(cs_ship_customer_sk#1111)
    int left_nrow = tbl_Filter_TD_9201270_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9255422_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8261332_key_leftMajor, SW_JOIN_INNER_TD_8261332_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9201270_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9201270_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8261332_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9201270_output.getInt32(i, 0);
            int32_t _cs_ship_customer_sk1111 = tbl_Filter_TD_9201270_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8261332_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_ship_customer_sk1111};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9255422_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk10226_k = tbl_Filter_TD_9255422_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8261332_key_leftMajor{_d_date_sk10226_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_ship_customer_sk1111 = (it->second)._cs_ship_customer_sk1111;
                int32_t _d_date_sk10226 = tbl_Filter_TD_9255422_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8261332_output.setInt32(r, 0, _cs_ship_customer_sk1111);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8261332_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8261332_key_rightMajor, SW_JOIN_INNER_TD_8261332_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9255422_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk10226_k = tbl_Filter_TD_9255422_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8261332_key_rightMajor keyA{_d_date_sk10226_k};
            int32_t _d_date_sk10226 = tbl_Filter_TD_9255422_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8261332_payload_rightMajor payloadA{_d_date_sk10226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9201270_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_9201270_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8261332_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk10226 = (it->second)._d_date_sk10226;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9201270_output.getInt32(i, 0);
                int32_t _cs_ship_customer_sk1111 = tbl_Filter_TD_9201270_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8261332_output.setInt32(r, 0, _cs_ship_customer_sk1111);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8261332_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8261332_output #Row: " << tbl_JOIN_INNER_TD_8261332_output.getNumRow() << std::endl;
}

struct SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_rightMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_payload_rightMajor {
    int32_t _ws_bill_customer_sk733;
};
void SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670(Table &tbl_JOIN_LEFTSEMI_TD_9978870_output, Table &tbl_JOIN_INNER_TD_9977278_output, Table &tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_EXISTENCEJOINEXISTS10345
    // Operation: ListBuffer((c_customer_sk#0 = ws_bill_customer_sk#733))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ws_bill_customer_sk#733)
    // Output Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, exists#10345)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_9978870_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_9977278_output.getNumRow();
    std::unordered_map<SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_rightMajor, SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_payload_rightMajor> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9977278_output.getNumRow();
    int nrow2 = tbl_JOIN_LEFTSEMI_TD_9978870_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk733_k = tbl_JOIN_INNER_TD_9977278_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_rightMajor keyA{_ws_bill_customer_sk733_k};
        int32_t _ws_bill_customer_sk733 = tbl_JOIN_INNER_TD_9977278_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_payload_rightMajor payloadA{_ws_bill_customer_sk733};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _c_customer_sk0_k = tbl_JOIN_LEFTSEMI_TD_9978870_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_key_rightMajor{_c_customer_sk0_k});
        if (it != ht1.end()) {
            int32_t _c_customer_sk0 = tbl_JOIN_LEFTSEMI_TD_9978870_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_LEFTSEMI_TD_9978870_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4 = tbl_JOIN_LEFTSEMI_TD_9978870_output.getInt32(i, 2);
            tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.setInt32(r, 0, _c_customer_sk0);
            tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.setInt32(r, 1, _c_current_cdemo_sk2);
            tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.setInt32(r, 2, _c_current_addr_sk4);
            tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.setInt32(r, 3, 1);
            r++;
        }
    }
    tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.setNumRow(r);
    std::cout << "tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output #Row: " << tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getNumRow() << std::endl;
}

struct SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_payload_leftMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
    int32_t _exists10345;
};
struct SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_rightMajor {
    int32_t _cs_ship_customer_sk1111;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_rightMajor& other) const {
        return ((_cs_ship_customer_sk1111 == other._cs_ship_customer_sk1111));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_ship_customer_sk1111));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_payload_rightMajor {
    int32_t _cs_ship_customer_sk1111;
};
void SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529(Table &tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output, Table &tbl_JOIN_INNER_TD_8261332_output, Table &tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_EXISTENCEJOINEXISTS10346
    // Operation: ListBuffer((c_customer_sk#0 = cs_ship_customer_sk#1111))
    // Left Table: ListBuffer(c_customer_sk#0, c_current_cdemo_sk#2, c_current_addr_sk#4, exists#10345)
    // Right Table: ListBuffer(cs_ship_customer_sk#1111)
    // Output Table: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4, exists#10345, exists#10346)
    int left_nrow = tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_8261332_output.getNumRow();
    std::unordered_map<SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_rightMajor, SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_payload_rightMajor> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8261332_output.getNumRow();
    int nrow2 = tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_ship_customer_sk1111_k = tbl_JOIN_INNER_TD_8261332_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_rightMajor keyA{_cs_ship_customer_sk1111_k};
        int32_t _cs_ship_customer_sk1111 = tbl_JOIN_INNER_TD_8261332_output.getInt32(i, 0);
        SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_payload_rightMajor payloadA{_cs_ship_customer_sk1111};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _c_customer_sk0_k = tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_key_rightMajor{_c_customer_sk0_k});
        if (it != ht1.end()) {
            int32_t _c_customer_sk0 = tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getInt32(i, 0);
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4 = tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getInt32(i, 2);
            int32_t _exists10345 = tbl_JOIN_EXISTENCEJOINEXISTS10345_TD_8706670_output.getInt32(i, 3);
            tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.setInt32(r, 0, _c_current_cdemo_sk2);
            tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.setInt32(r, 1, _c_current_addr_sk4);
             tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.setInt32(r, 2, _exists10345);
            tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.setInt32(r, 3, 1);
            r++;
        }
    }
    tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.setNumRow(r);
    std::cout << "tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output #Row: " << tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6320906(Table &tbl_SerializeFromObject_TD_7310343_input, Table &tbl_Filter_TD_6320906_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((ca_county#61 IN (Rush County,Toole County,Jefferson County,Dona Ana County,La Porte County) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_county#61)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7310343_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_SerializeFromObject_TD_7310343_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_7310343_input.getInt32(i, 0);
        auto reuse_col_str_678 = std::string(_ca_county61.data());
        if (((reuse_col_str_678 == "Rush County") || (reuse_col_str_678 == "Toole County") || (reuse_col_str_678 == "Jefferson County") || (reuse_col_str_678 == "Dona Ana County") || (reuse_col_str_678 == "La Porte County") || (0)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_7310343_input.getInt32(i, 0);
            tbl_Filter_TD_6320906_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_6320906_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6320906_output #Row: " << tbl_Filter_TD_6320906_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6428178(Table &tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output, Table &tbl_Filter_TD_6428178_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((exists#10345 OR exists#10346))
    // Input: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4, exists#10345, exists#10346)
    // Output: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _exists10345 = tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.getInt32(i, 2);
        int32_t _exists10346 = tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.getInt32(i, 3);
        if (_exists10345 || _exists10346) {
            int32_t _c_current_cdemo_sk2_t = tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.getInt32(i, 0);
            tbl_Filter_TD_6428178_output.setInt32(r, 0, _c_current_cdemo_sk2_t);
            int32_t _c_current_addr_sk4_t = tbl_JOIN_EXISTENCEJOINEXISTS10346_TD_7856529_output.getInt32(i, 1);
            tbl_Filter_TD_6428178_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_6428178_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6428178_output #Row: " << tbl_Filter_TD_6428178_output.getNumRow() << std::endl;
}

void SW_Filter_TD_560259(Table &tbl_SerializeFromObject_TD_6781528_input, Table &tbl_Filter_TD_560259_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cd_demo_sk#93))
    // Input: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6781528_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_6781528_input.getInt32(i, 0);
        if (_cd_demo_sk93!= 0) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_6781528_input.getInt32(i, 0);
            tbl_Filter_TD_560259_output.setInt32(r, 0, _cd_demo_sk93_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_t = tbl_SerializeFromObject_TD_6781528_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_560259_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_gender94_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_t = tbl_SerializeFromObject_TD_6781528_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_560259_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_marital_status95_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_t = tbl_SerializeFromObject_TD_6781528_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_560259_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _cd_education_status96_t);
            int32_t _cd_purchase_estimate97_t = tbl_SerializeFromObject_TD_6781528_input.getInt32(i, 4);
            tbl_Filter_TD_560259_output.setInt32(r, 4, _cd_purchase_estimate97_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_t = tbl_SerializeFromObject_TD_6781528_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_560259_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _cd_credit_rating98_t);
            int32_t _cd_dep_count99_t = tbl_SerializeFromObject_TD_6781528_input.getInt32(i, 6);
            tbl_Filter_TD_560259_output.setInt32(r, 6, _cd_dep_count99_t);
            int32_t _cd_dep_employed_count100_t = tbl_SerializeFromObject_TD_6781528_input.getInt32(i, 7);
            tbl_Filter_TD_560259_output.setInt32(r, 7, _cd_dep_employed_count100_t);
            int32_t _cd_dep_college_count101_t = tbl_SerializeFromObject_TD_6781528_input.getInt32(i, 8);
            tbl_Filter_TD_560259_output.setInt32(r, 8, _cd_dep_college_count101_t);
            r++;
        }
    }
    tbl_Filter_TD_560259_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_560259_output #Row: " << tbl_Filter_TD_560259_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5148695_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_5148695_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5148695_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5148695_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_5148695_payload_leftMajor {
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_5148695_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_5148695_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5148695_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5148695_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_5148695_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_5148695(Table &tbl_Filter_TD_6428178_output, Table &tbl_Filter_TD_6320906_output, Table &tbl_JOIN_INNER_TD_5148695_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(c_current_cdemo_sk#2, c_current_addr_sk#4)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(c_current_cdemo_sk#2)
    int left_nrow = tbl_Filter_TD_6428178_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6320906_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5148695_key_leftMajor, SW_JOIN_INNER_TD_5148695_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6428178_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_6428178_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5148695_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_6428178_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_6428178_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5148695_payload_leftMajor payloadA{_c_current_cdemo_sk2, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6320906_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6320906_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5148695_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_6320906_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5148695_output.setInt32(r, 0, _c_current_cdemo_sk2);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5148695_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5148695_key_rightMajor, SW_JOIN_INNER_TD_5148695_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6320906_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_6320906_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5148695_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_6320906_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5148695_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6428178_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_6428178_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5148695_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_6428178_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_6428178_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5148695_output.setInt32(r, 0, _c_current_cdemo_sk2);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5148695_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5148695_output #Row: " << tbl_JOIN_INNER_TD_5148695_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4463414_key_leftMajor {
    int32_t _c_current_cdemo_sk2;
    bool operator==(const SW_JOIN_INNER_TD_4463414_key_leftMajor& other) const {
        return ((_c_current_cdemo_sk2 == other._c_current_cdemo_sk2));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4463414_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4463414_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_cdemo_sk2));
    }
};
}
struct SW_JOIN_INNER_TD_4463414_payload_leftMajor {
    int32_t _c_current_cdemo_sk2;
};
struct SW_JOIN_INNER_TD_4463414_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_4463414_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4463414_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4463414_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_4463414_payload_rightMajor {
    int32_t _cd_demo_sk93;
    std::string _cd_gender94;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
    int32_t _cd_purchase_estimate97;
    std::string _cd_credit_rating98;
    int32_t _cd_dep_count99;
    int32_t _cd_dep_employed_count100;
    int32_t _cd_dep_college_count101;
};
void SW_JOIN_INNER_TD_4463414(Table &tbl_JOIN_INNER_TD_5148695_output, Table &tbl_Filter_TD_560259_output, Table &tbl_JOIN_INNER_TD_4463414_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cd_demo_sk#93 = c_current_cdemo_sk#2))
    // Left Table: ListBuffer(c_current_cdemo_sk#2)
    // Right Table: ListBuffer(cd_demo_sk#93, cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output Table: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    int left_nrow = tbl_JOIN_INNER_TD_5148695_output.getNumRow();
    int right_nrow = tbl_Filter_TD_560259_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4463414_key_leftMajor, SW_JOIN_INNER_TD_4463414_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5148695_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_5148695_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4463414_key_leftMajor keyA{_c_current_cdemo_sk2_k};
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_5148695_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4463414_payload_leftMajor payloadA{_c_current_cdemo_sk2};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_560259_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_560259_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4463414_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_560259_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Filter_TD_560259_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_gender94 = std::string(_cd_gender94_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_560259_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_560259_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
                int32_t _cd_purchase_estimate97 = tbl_Filter_TD_560259_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Filter_TD_560259_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _cd_credit_rating98 = std::string(_cd_credit_rating98_n.data());
                int32_t _cd_dep_count99 = tbl_Filter_TD_560259_output.getInt32(i, 6);
                int32_t _cd_dep_employed_count100 = tbl_Filter_TD_560259_output.getInt32(i, 7);
                int32_t _cd_dep_college_count101 = tbl_Filter_TD_560259_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_4463414_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
                tbl_JOIN_INNER_TD_4463414_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_4463414_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
                tbl_JOIN_INNER_TD_4463414_output.setInt32(r, 3, _cd_purchase_estimate97);
                tbl_JOIN_INNER_TD_4463414_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cd_credit_rating98_n);
                tbl_JOIN_INNER_TD_4463414_output.setInt32(r, 5, _cd_dep_count99);
                tbl_JOIN_INNER_TD_4463414_output.setInt32(r, 6, _cd_dep_employed_count100);
                tbl_JOIN_INNER_TD_4463414_output.setInt32(r, 7, _cd_dep_college_count101);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4463414_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4463414_key_rightMajor, SW_JOIN_INNER_TD_4463414_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_560259_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_560259_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4463414_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_560259_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Filter_TD_560259_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_gender94 = std::string(_cd_gender94_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_560259_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_560259_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
            int32_t _cd_purchase_estimate97 = tbl_Filter_TD_560259_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Filter_TD_560259_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _cd_credit_rating98 = std::string(_cd_credit_rating98_n.data());
            int32_t _cd_dep_count99 = tbl_Filter_TD_560259_output.getInt32(i, 6);
            int32_t _cd_dep_employed_count100 = tbl_Filter_TD_560259_output.getInt32(i, 7);
            int32_t _cd_dep_college_count101 = tbl_Filter_TD_560259_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_4463414_payload_rightMajor payloadA{_cd_demo_sk93, _cd_gender94, _cd_marital_status95, _cd_education_status96, _cd_purchase_estimate97, _cd_credit_rating98, _cd_dep_count99, _cd_dep_employed_count100, _cd_dep_college_count101};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5148695_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_5148695_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4463414_key_rightMajor{_c_current_cdemo_sk2_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                std::string _cd_gender94 = (it->second)._cd_gender94;
                std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n{};
                memcpy(_cd_gender94_n.data(), (_cd_gender94).data(), (_cd_gender94).length());
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                std::string _cd_education_status96 = (it->second)._cd_education_status96;
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n{};
                memcpy(_cd_education_status96_n.data(), (_cd_education_status96).data(), (_cd_education_status96).length());
                int32_t _cd_purchase_estimate97 = (it->second)._cd_purchase_estimate97;
                std::string _cd_credit_rating98 = (it->second)._cd_credit_rating98;
                std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n{};
                memcpy(_cd_credit_rating98_n.data(), (_cd_credit_rating98).data(), (_cd_credit_rating98).length());
                int32_t _cd_dep_count99 = (it->second)._cd_dep_count99;
                int32_t _cd_dep_employed_count100 = (it->second)._cd_dep_employed_count100;
                int32_t _cd_dep_college_count101 = (it->second)._cd_dep_college_count101;
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_5148695_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4463414_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
                tbl_JOIN_INNER_TD_4463414_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
                tbl_JOIN_INNER_TD_4463414_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
                tbl_JOIN_INNER_TD_4463414_output.setInt32(r, 3, _cd_purchase_estimate97);
                tbl_JOIN_INNER_TD_4463414_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cd_credit_rating98_n);
                tbl_JOIN_INNER_TD_4463414_output.setInt32(r, 5, _cd_dep_count99);
                tbl_JOIN_INNER_TD_4463414_output.setInt32(r, 6, _cd_dep_employed_count100);
                tbl_JOIN_INNER_TD_4463414_output.setInt32(r, 7, _cd_dep_college_count101);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4463414_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4463414_output #Row: " << tbl_JOIN_INNER_TD_4463414_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3565576_key {
    std::string _cd_gender94;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
    int32_t _cd_purchase_estimate97;
    std::string _cd_credit_rating98;
    int32_t _cd_dep_count99;
    int32_t _cd_dep_employed_count100;
    int32_t _cd_dep_college_count101;
    bool operator==(const SW_Aggregate_TD_3565576_key& other) const { return (_cd_gender94 == other._cd_gender94) && (_cd_marital_status95 == other._cd_marital_status95) && (_cd_education_status96 == other._cd_education_status96) && (_cd_purchase_estimate97 == other._cd_purchase_estimate97) && (_cd_credit_rating98 == other._cd_credit_rating98) && (_cd_dep_count99 == other._cd_dep_count99) && (_cd_dep_employed_count100 == other._cd_dep_employed_count100) && (_cd_dep_college_count101 == other._cd_dep_college_count101); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3565576_key> {
    std::size_t operator() (const SW_Aggregate_TD_3565576_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._cd_gender94)) + (hash<string>()(k._cd_marital_status95)) + (hash<string>()(k._cd_education_status96)) + (hash<int32_t>()(k._cd_purchase_estimate97)) + (hash<string>()(k._cd_credit_rating98)) + (hash<int32_t>()(k._cd_dep_count99)) + (hash<int32_t>()(k._cd_dep_employed_count100)) + (hash<int32_t>()(k._cd_dep_college_count101));
    }
};
}
struct SW_Aggregate_TD_3565576_payload {
    int64_t _cnt110183L_count_0;
    int64_t _cnt210184L_count_1;
    int64_t _cnt310185L_count_2;
    int64_t _cnt410186L_count_3;
    int64_t _cnt510187L_count_4;
    int64_t _cnt610188L_count_5;
};
void SW_Aggregate_TD_3565576(Table &tbl_JOIN_INNER_TD_4463414_output, Table &tbl_Aggregate_TD_3565576_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101, count(1) AS cnt1#10183L, count(1) AS cnt2#10184L, count(1) AS cnt3#10185L, count(1) AS cnt4#10186L, count(1) AS cnt5#10187L, count(1) AS cnt6#10188L)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cd_purchase_estimate#97, cd_credit_rating#98, cd_dep_count#99, cd_dep_employed_count#100, cd_dep_college_count#101)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10183L, cd_purchase_estimate#97, cnt2#10184L, cd_credit_rating#98, cnt3#10185L, cd_dep_count#99, cnt4#10186L, cd_dep_employed_count#100, cnt5#10187L, cd_dep_college_count#101, cnt6#10188L)
    std::unordered_map<SW_Aggregate_TD_3565576_key, SW_Aggregate_TD_3565576_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4463414_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_JOIN_INNER_TD_4463414_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_JOIN_INNER_TD_4463414_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_JOIN_INNER_TD_4463414_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _cd_purchase_estimate97 = tbl_JOIN_INNER_TD_4463414_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98 = tbl_JOIN_INNER_TD_4463414_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _cd_dep_count99 = tbl_JOIN_INNER_TD_4463414_output.getInt32(i, 5);
        int32_t _cd_dep_employed_count100 = tbl_JOIN_INNER_TD_4463414_output.getInt32(i, 6);
        int32_t _cd_dep_college_count101 = tbl_JOIN_INNER_TD_4463414_output.getInt32(i, 7);
        SW_Aggregate_TD_3565576_key k{std::string(_cd_gender94.data()), std::string(_cd_marital_status95.data()), std::string(_cd_education_status96.data()), _cd_purchase_estimate97, std::string(_cd_credit_rating98.data()), _cd_dep_count99, _cd_dep_employed_count100, _cd_dep_college_count101};
        int64_t _cnt110183L_count_0 = 1 != 0 ? 1 : 0;
        int64_t _cnt210184L_count_1 = 1 != 0 ? 1 : 0;
        int64_t _cnt310185L_count_2 = 1 != 0 ? 1 : 0;
        int64_t _cnt410186L_count_3 = 1 != 0 ? 1 : 0;
        int64_t _cnt510187L_count_4 = 1 != 0 ? 1 : 0;
        int64_t _cnt610188L_count_5 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_3565576_payload p{_cnt110183L_count_0, _cnt210184L_count_1, _cnt310185L_count_2, _cnt410186L_count_3, _cnt510187L_count_4, _cnt610188L_count_5};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt110183L_count_0 + _cnt110183L_count_0;
            p._cnt110183L_count_0 = count_0;
            int64_t count_1 = (it->second)._cnt210184L_count_1 + _cnt210184L_count_1;
            p._cnt210184L_count_1 = count_1;
            int64_t count_2 = (it->second)._cnt310185L_count_2 + _cnt310185L_count_2;
            p._cnt310185L_count_2 = count_2;
            int64_t count_3 = (it->second)._cnt410186L_count_3 + _cnt410186L_count_3;
            p._cnt410186L_count_3 = count_3;
            int64_t count_4 = (it->second)._cnt510187L_count_4 + _cnt510187L_count_4;
            p._cnt510187L_count_4 = count_4;
            int64_t count_5 = (it->second)._cnt610188L_count_5 + _cnt610188L_count_5;
            p._cnt610188L_count_5 = count_5;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94{};
        memcpy(_cd_gender94.data(), ((it.first)._cd_gender94).data(), ((it.first)._cd_gender94).length());
        tbl_Aggregate_TD_3565576_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95{};
        memcpy(_cd_marital_status95.data(), ((it.first)._cd_marital_status95).data(), ((it.first)._cd_marital_status95).length());
        tbl_Aggregate_TD_3565576_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96{};
        memcpy(_cd_education_status96.data(), ((it.first)._cd_education_status96).data(), ((it.first)._cd_education_status96).length());
        tbl_Aggregate_TD_3565576_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96);
        tbl_Aggregate_TD_3565576_output.setInt32(r, 4, (it.first)._cd_purchase_estimate97);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98{};
        memcpy(_cd_credit_rating98.data(), ((it.first)._cd_credit_rating98).data(), ((it.first)._cd_credit_rating98).length());
        tbl_Aggregate_TD_3565576_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98);
        tbl_Aggregate_TD_3565576_output.setInt32(r, 8, (it.first)._cd_dep_count99);
        tbl_Aggregate_TD_3565576_output.setInt32(r, 10, (it.first)._cd_dep_employed_count100);
        tbl_Aggregate_TD_3565576_output.setInt32(r, 12, (it.first)._cd_dep_college_count101);
        int64_t _cnt110183L = (it.second)._cnt110183L_count_0;
        tbl_Aggregate_TD_3565576_output.setInt64(r, 3, _cnt110183L);
        int64_t _cnt210184L = (it.second)._cnt210184L_count_1;
        tbl_Aggregate_TD_3565576_output.setInt64(r, 5, _cnt210184L);
        int64_t _cnt310185L = (it.second)._cnt310185L_count_2;
        tbl_Aggregate_TD_3565576_output.setInt64(r, 7, _cnt310185L);
        int64_t _cnt410186L = (it.second)._cnt410186L_count_3;
        tbl_Aggregate_TD_3565576_output.setInt64(r, 9, _cnt410186L);
        int64_t _cnt510187L = (it.second)._cnt510187L_count_4;
        tbl_Aggregate_TD_3565576_output.setInt64(r, 11, _cnt510187L);
        int64_t _cnt610188L = (it.second)._cnt610188L_count_5;
        tbl_Aggregate_TD_3565576_output.setInt64(r, 13, _cnt610188L);
        ++r;
    }
    tbl_Aggregate_TD_3565576_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3565576_output #Row: " << tbl_Aggregate_TD_3565576_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2614205(Table &tbl_Aggregate_TD_3565576_output, Table &tbl_Sort_TD_2614205_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cd_gender#94 ASC NULLS FIRST, cd_marital_status#95 ASC NULLS FIRST, cd_education_status#96 ASC NULLS FIRST, cd_purchase_estimate#97 ASC NULLS FIRST, cd_credit_rating#98 ASC NULLS FIRST, cd_dep_count#99 ASC NULLS FIRST, cd_dep_employed_count#100 ASC NULLS FIRST, cd_dep_college_count#101 ASC NULLS FIRST)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10183L, cd_purchase_estimate#97, cnt2#10184L, cd_credit_rating#98, cnt3#10185L, cd_dep_count#99, cnt4#10186L, cd_dep_employed_count#100, cnt5#10187L, cd_dep_college_count#101, cnt6#10188L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10183L, cd_purchase_estimate#97, cnt2#10184L, cd_credit_rating#98, cnt3#10185L, cd_dep_count#99, cnt4#10186L, cd_dep_employed_count#100, cnt5#10187L, cd_dep_college_count#101, cnt6#10188L)
    struct SW_Sort_TD_2614205Row {
        std::string _cd_gender94;
        std::string _cd_marital_status95;
        std::string _cd_education_status96;
        int64_t _cnt110183L;
        int32_t _cd_purchase_estimate97;
        int64_t _cnt210184L;
        std::string _cd_credit_rating98;
        int64_t _cnt310185L;
        int32_t _cd_dep_count99;
        int64_t _cnt410186L;
        int32_t _cd_dep_employed_count100;
        int64_t _cnt510187L;
        int32_t _cd_dep_college_count101;
        int64_t _cnt610188L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2614205Row& a, const SW_Sort_TD_2614205Row& b) const { return 
 (a._cd_gender94 < b._cd_gender94) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 < b._cd_marital_status95)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 < b._cd_education_status96)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 < b._cd_purchase_estimate97)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 < b._cd_credit_rating98)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 == b._cd_credit_rating98) && (a._cd_dep_count99 < b._cd_dep_count99)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 == b._cd_credit_rating98) && (a._cd_dep_count99 == b._cd_dep_count99) && (a._cd_dep_employed_count100 < b._cd_dep_employed_count100)) || 
 ((a._cd_gender94 == b._cd_gender94) && (a._cd_marital_status95 == b._cd_marital_status95) && (a._cd_education_status96 == b._cd_education_status96) && (a._cd_purchase_estimate97 == b._cd_purchase_estimate97) && (a._cd_credit_rating98 == b._cd_credit_rating98) && (a._cd_dep_count99 == b._cd_dep_count99) && (a._cd_dep_employed_count100 == b._cd_dep_employed_count100) && (a._cd_dep_college_count101 < b._cd_dep_college_count101)); 
}
    }SW_Sort_TD_2614205_order; 

    int nrow1 = tbl_Aggregate_TD_3565576_output.getNumRow();
    std::vector<SW_Sort_TD_2614205Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94 = tbl_Aggregate_TD_3565576_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_Aggregate_TD_3565576_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_Aggregate_TD_3565576_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        int64_t _cnt110183L = tbl_Aggregate_TD_3565576_output.getInt64(i, 3);
        int32_t _cd_purchase_estimate97 = tbl_Aggregate_TD_3565576_output.getInt32(i, 4);
        int64_t _cnt210184L = tbl_Aggregate_TD_3565576_output.getInt64(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98 = tbl_Aggregate_TD_3565576_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        int64_t _cnt310185L = tbl_Aggregate_TD_3565576_output.getInt64(i, 7);
        int32_t _cd_dep_count99 = tbl_Aggregate_TD_3565576_output.getInt32(i, 8);
        int64_t _cnt410186L = tbl_Aggregate_TD_3565576_output.getInt64(i, 9);
        int32_t _cd_dep_employed_count100 = tbl_Aggregate_TD_3565576_output.getInt32(i, 10);
        int64_t _cnt510187L = tbl_Aggregate_TD_3565576_output.getInt64(i, 11);
        int32_t _cd_dep_college_count101 = tbl_Aggregate_TD_3565576_output.getInt32(i, 12);
        int64_t _cnt610188L = tbl_Aggregate_TD_3565576_output.getInt64(i, 13);
        SW_Sort_TD_2614205Row t = {std::string(_cd_gender94.data()),std::string(_cd_marital_status95.data()),std::string(_cd_education_status96.data()),_cnt110183L,_cd_purchase_estimate97,_cnt210184L,std::string(_cd_credit_rating98.data()),_cnt310185L,_cd_dep_count99,_cnt410186L,_cd_dep_employed_count100,_cnt510187L,_cd_dep_college_count101,_cnt610188L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2614205_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94{};
        memcpy(_cd_gender94.data(), (it._cd_gender94).data(), (it._cd_gender94).length());
        tbl_Sort_TD_2614205_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _cd_gender94);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95{};
        memcpy(_cd_marital_status95.data(), (it._cd_marital_status95).data(), (it._cd_marital_status95).length());
        tbl_Sort_TD_2614205_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _cd_marital_status95);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96{};
        memcpy(_cd_education_status96.data(), (it._cd_education_status96).data(), (it._cd_education_status96).length());
        tbl_Sort_TD_2614205_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _cd_education_status96);
        tbl_Sort_TD_2614205_output.setInt64(r, 3, it._cnt110183L);
        tbl_Sort_TD_2614205_output.setInt32(r, 4, it._cd_purchase_estimate97);
        tbl_Sort_TD_2614205_output.setInt64(r, 5, it._cnt210184L);
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98{};
        memcpy(_cd_credit_rating98.data(), (it._cd_credit_rating98).data(), (it._cd_credit_rating98).length());
        tbl_Sort_TD_2614205_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _cd_credit_rating98);
        tbl_Sort_TD_2614205_output.setInt64(r, 7, it._cnt310185L);
        tbl_Sort_TD_2614205_output.setInt32(r, 8, it._cd_dep_count99);
        tbl_Sort_TD_2614205_output.setInt64(r, 9, it._cnt410186L);
        tbl_Sort_TD_2614205_output.setInt32(r, 10, it._cd_dep_employed_count100);
        tbl_Sort_TD_2614205_output.setInt64(r, 11, it._cnt510187L);
        tbl_Sort_TD_2614205_output.setInt32(r, 12, it._cd_dep_college_count101);
        tbl_Sort_TD_2614205_output.setInt64(r, 13, it._cnt610188L);
        ++r;
    }
    tbl_Sort_TD_2614205_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2614205_output #Row: " << tbl_Sort_TD_2614205_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1642505(Table &tbl_Sort_TD_2614205_output, Table &tbl_LocalLimit_TD_1642505_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10183L, cd_purchase_estimate#97, cnt2#10184L, cd_credit_rating#98, cnt3#10185L, cd_dep_count#99, cnt4#10186L, cd_dep_employed_count#100, cnt5#10187L, cd_dep_college_count#101, cnt6#10188L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10183L, cd_purchase_estimate#97, cnt2#10184L, cd_credit_rating#98, cnt3#10185L, cd_dep_count#99, cnt4#10186L, cd_dep_employed_count#100, cnt5#10187L, cd_dep_college_count#101, cnt6#10188L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_Sort_TD_2614205_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1642505_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Sort_TD_2614205_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1642505_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Sort_TD_2614205_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1642505_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
        tbl_LocalLimit_TD_1642505_output.setInt64(r, 3, tbl_Sort_TD_2614205_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1642505_output.setInt32(r, 4, tbl_Sort_TD_2614205_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1642505_output.setInt64(r, 5, tbl_Sort_TD_2614205_output.getInt64(i, 5));
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_Sort_TD_2614205_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_LocalLimit_TD_1642505_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98_n);
        tbl_LocalLimit_TD_1642505_output.setInt64(r, 7, tbl_Sort_TD_2614205_output.getInt64(i, 7));
        tbl_LocalLimit_TD_1642505_output.setInt32(r, 8, tbl_Sort_TD_2614205_output.getInt32(i, 8));
        tbl_LocalLimit_TD_1642505_output.setInt64(r, 9, tbl_Sort_TD_2614205_output.getInt64(i, 9));
        tbl_LocalLimit_TD_1642505_output.setInt32(r, 10, tbl_Sort_TD_2614205_output.getInt32(i, 10));
        tbl_LocalLimit_TD_1642505_output.setInt64(r, 11, tbl_Sort_TD_2614205_output.getInt64(i, 11));
        tbl_LocalLimit_TD_1642505_output.setInt32(r, 12, tbl_Sort_TD_2614205_output.getInt32(i, 12));
        tbl_LocalLimit_TD_1642505_output.setInt64(r, 13, tbl_Sort_TD_2614205_output.getInt64(i, 13));
        r++;
    }
    tbl_LocalLimit_TD_1642505_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1642505_output #Row: " << tbl_LocalLimit_TD_1642505_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0925461(Table &tbl_LocalLimit_TD_1642505_output, Table &tbl_GlobalLimit_TD_0925461_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10183L, cd_purchase_estimate#97, cnt2#10184L, cd_credit_rating#98, cnt3#10185L, cd_dep_count#99, cnt4#10186L, cd_dep_employed_count#100, cnt5#10187L, cd_dep_college_count#101, cnt6#10188L)
    // Output: ListBuffer(cd_gender#94, cd_marital_status#95, cd_education_status#96, cnt1#10183L, cd_purchase_estimate#97, cnt2#10184L, cd_credit_rating#98, cnt3#10185L, cd_dep_count#99, cnt4#10186L, cd_dep_employed_count#100, cnt5#10187L, cd_dep_college_count#101, cnt6#10188L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _cd_gender94_n = tbl_LocalLimit_TD_1642505_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0925461_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _cd_gender94_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_LocalLimit_TD_1642505_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0925461_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_n);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_LocalLimit_TD_1642505_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0925461_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_n);
        tbl_GlobalLimit_TD_0925461_output.setInt64(r, 3, tbl_LocalLimit_TD_1642505_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_0925461_output.setInt32(r, 4, tbl_LocalLimit_TD_1642505_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0925461_output.setInt64(r, 5, tbl_LocalLimit_TD_1642505_output.getInt64(i, 5));
        std::array<char, TPCDS_READ_MAX + 1> _cd_credit_rating98_n = tbl_LocalLimit_TD_1642505_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_GlobalLimit_TD_0925461_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _cd_credit_rating98_n);
        tbl_GlobalLimit_TD_0925461_output.setInt64(r, 7, tbl_LocalLimit_TD_1642505_output.getInt64(i, 7));
        tbl_GlobalLimit_TD_0925461_output.setInt32(r, 8, tbl_LocalLimit_TD_1642505_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0925461_output.setInt64(r, 9, tbl_LocalLimit_TD_1642505_output.getInt64(i, 9));
        tbl_GlobalLimit_TD_0925461_output.setInt32(r, 10, tbl_LocalLimit_TD_1642505_output.getInt32(i, 10));
        tbl_GlobalLimit_TD_0925461_output.setInt64(r, 11, tbl_LocalLimit_TD_1642505_output.getInt64(i, 11));
        tbl_GlobalLimit_TD_0925461_output.setInt32(r, 12, tbl_LocalLimit_TD_1642505_output.getInt32(i, 12));
        tbl_GlobalLimit_TD_0925461_output.setInt64(r, 13, tbl_LocalLimit_TD_1642505_output.getInt64(i, 13));
        r++;
    }
    tbl_GlobalLimit_TD_0925461_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0925461_output #Row: " << tbl_GlobalLimit_TD_0925461_output.getNumRow() << std::endl;
}

