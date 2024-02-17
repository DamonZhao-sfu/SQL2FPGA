#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10426(Table &tbl_SerializeFromObject_TD_11571_input, Table &tbl_Filter_TD_10426_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_city#60) AND (ca_city#60 = Edgewood)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_city#60)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11571_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_SerializeFromObject_TD_11571_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_11571_input.getInt32(i, 0);
        if ((（std::string(_isnotnullca_city60.data()) != "NULL") && (std::string(_ca_city60.data()) == "Edgewood")) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_11571_input.getInt32(i, 0);
            tbl_Filter_TD_10426_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_10426_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10426_output #Row: " << tbl_Filter_TD_10426_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10589(Table &tbl_SerializeFromObject_TD_11204_input, Table &tbl_Filter_TD_10589_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_current_addr_sk#4) AND (isnotnull(c_current_cdemo_sk#2) AND isnotnull(c_current_hdemo_sk#3))))
    // Input: ListBuffer(c_customer_id#1, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_id#1, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11204_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_11204_input.getInt32(i, 3);
        int32_t _c_current_cdemo_sk2 = tbl_SerializeFromObject_TD_11204_input.getInt32(i, 1);
        int32_t _c_current_hdemo_sk3 = tbl_SerializeFromObject_TD_11204_input.getInt32(i, 2);
        if ((_c_current_addr_sk4!= 0) && ((_c_current_cdemo_sk2!= 0) && (_c_current_hdemo_sk3!= 0))) {
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_11204_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_10589_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_t);
            int32_t _c_current_cdemo_sk2_t = tbl_SerializeFromObject_TD_11204_input.getInt32(i, 1);
            tbl_Filter_TD_10589_output.setInt32(r, 1, _c_current_cdemo_sk2_t);
            int32_t _c_current_hdemo_sk3_t = tbl_SerializeFromObject_TD_11204_input.getInt32(i, 2);
            tbl_Filter_TD_10589_output.setInt32(r, 2, _c_current_hdemo_sk3_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_11204_input.getInt32(i, 3);
            tbl_Filter_TD_10589_output.setInt32(r, 3, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_10589_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10589_output #Row: " << tbl_Filter_TD_10589_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9910(Table &tbl_SerializeFromObject_TD_10480_input, Table &tbl_Filter_TD_9910_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cd_demo_sk#93))
    // Input: ListBuffer(cd_demo_sk#93)
    // Output: ListBuffer(cd_demo_sk#93)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10480_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_10480_input.getInt32(i, 0);
        if (_cd_demo_sk93!= 0) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_10480_input.getInt32(i, 0);
            tbl_Filter_TD_9910_output.setInt32(r, 0, _cd_demo_sk93_t);
            r++;
        }
    }
    tbl_Filter_TD_9910_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9910_output #Row: " << tbl_Filter_TD_9910_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9578_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_9578_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9578_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9578_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_9578_payload_leftMajor {
    std::string _c_customer_id1;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_hdemo_sk3;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_9578_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_9578_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9578_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9578_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_9578_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_9578(Table &tbl_Filter_TD_10589_output, Table &tbl_Filter_TD_10426_output, Table &tbl_JOIN_INNER_TD_9578_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(c_customer_id#1, c_current_cdemo_sk#2, c_current_hdemo_sk#3, c_current_addr_sk#4)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(c_customer_id#1, c_current_cdemo_sk#2, c_current_hdemo_sk#3)
    int left_nrow = tbl_Filter_TD_10589_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10426_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9578_key_leftMajor, SW_JOIN_INNER_TD_9578_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10589_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_10589_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9578_key_leftMajor keyA{_c_current_addr_sk4_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_10589_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_10589_output.getInt32(i, 1);
            int32_t _c_current_hdemo_sk3 = tbl_Filter_TD_10589_output.getInt32(i, 2);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_10589_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9578_payload_leftMajor payloadA{_c_customer_id1, _c_current_cdemo_sk2, _c_current_hdemo_sk3, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10426_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_10426_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9578_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_10426_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9578_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_9578_output.setInt32(r, 1, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_9578_output.setInt32(r, 2, _c_current_hdemo_sk3);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9578_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9578_key_rightMajor, SW_JOIN_INNER_TD_9578_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10426_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_10426_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9578_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_10426_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9578_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10589_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_10589_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9578_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_10589_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_cdemo_sk2 = tbl_Filter_TD_10589_output.getInt32(i, 1);
                int32_t _c_current_hdemo_sk3 = tbl_Filter_TD_10589_output.getInt32(i, 2);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_10589_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9578_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_9578_output.setInt32(r, 1, _c_current_cdemo_sk2);
                tbl_JOIN_INNER_TD_9578_output.setInt32(r, 2, _c_current_hdemo_sk3);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9578_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9578_output #Row: " << tbl_JOIN_INNER_TD_9578_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8418(Table &tbl_SerializeFromObject_TD_9656_input, Table &tbl_Filter_TD_8418_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(hd_demo_sk#204) AND isnotnull(hd_income_band_sk#205)))
    // Input: ListBuffer(hd_demo_sk#204, hd_income_band_sk#205)
    // Output: ListBuffer(hd_demo_sk#204, hd_income_band_sk#205)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9656_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_9656_input.getInt32(i, 0);
        int32_t _hd_income_band_sk205 = tbl_SerializeFromObject_TD_9656_input.getInt32(i, 1);
        if ((_hd_demo_sk204!= 0) && (_hd_income_band_sk205!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_9656_input.getInt32(i, 0);
            tbl_Filter_TD_8418_output.setInt32(r, 0, _hd_demo_sk204_t);
            int32_t _hd_income_band_sk205_t = tbl_SerializeFromObject_TD_9656_input.getInt32(i, 1);
            tbl_Filter_TD_8418_output.setInt32(r, 1, _hd_income_band_sk205_t);
            r++;
        }
    }
    tbl_Filter_TD_8418_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8418_output #Row: " << tbl_Filter_TD_8418_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_865_key_leftMajor {
    int32_t _c_current_cdemo_sk2;
    bool operator==(const SW_JOIN_INNER_TD_865_key_leftMajor& other) const {
        return ((_c_current_cdemo_sk2 == other._c_current_cdemo_sk2));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_865_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_865_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_cdemo_sk2));
    }
};
}
struct SW_JOIN_INNER_TD_865_payload_leftMajor {
    std::string _c_customer_id1;
    int32_t _c_current_cdemo_sk2;
    int32_t _c_current_hdemo_sk3;
};
struct SW_JOIN_INNER_TD_865_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_865_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_865_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_865_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_865_payload_rightMajor {
    int32_t _cd_demo_sk93;
};
void SW_JOIN_INNER_TD_865(Table &tbl_JOIN_INNER_TD_9578_output, Table &tbl_Filter_TD_9910_output, Table &tbl_JOIN_INNER_TD_865_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cd_demo_sk#93 = c_current_cdemo_sk#2))
    // Left Table: ListBuffer(c_customer_id#1, c_current_cdemo_sk#2, c_current_hdemo_sk#3)
    // Right Table: ListBuffer(cd_demo_sk#93)
    // Output Table: ListBuffer(c_customer_id#1, c_current_hdemo_sk#3, cd_demo_sk#93)
    int left_nrow = tbl_JOIN_INNER_TD_9578_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9910_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_865_key_leftMajor, SW_JOIN_INNER_TD_865_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9578_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_9578_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_865_key_leftMajor keyA{_c_current_cdemo_sk2_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_9578_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_9578_output.getInt32(i, 1);
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_9578_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_865_payload_leftMajor payloadA{_c_customer_id1, _c_current_cdemo_sk2, _c_current_hdemo_sk3};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9910_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_9910_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_865_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                int32_t _c_current_cdemo_sk2 = (it->second)._c_current_cdemo_sk2;
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_9910_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_865_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_865_output.setInt32(r, 1, _c_current_hdemo_sk3);
                tbl_JOIN_INNER_TD_865_output.setInt32(r, 2, _cd_demo_sk93);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_865_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_865_key_rightMajor, SW_JOIN_INNER_TD_865_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9910_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_9910_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_865_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_9910_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_865_payload_rightMajor payloadA{_cd_demo_sk93};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9578_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_cdemo_sk2_k = tbl_JOIN_INNER_TD_9578_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_865_key_rightMajor{_c_current_cdemo_sk2_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_9578_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_cdemo_sk2 = tbl_JOIN_INNER_TD_9578_output.getInt32(i, 1);
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_9578_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_865_output.setInt32(r, 2, _cd_demo_sk93);
                tbl_JOIN_INNER_TD_865_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_865_output.setInt32(r, 1, _c_current_hdemo_sk3);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_865_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_865_output #Row: " << tbl_JOIN_INNER_TD_865_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7424(Table &tbl_SerializeFromObject_TD_8983_input, Table &tbl_Filter_TD_7424_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ib_lower_bound#220) AND isnotnull(ib_upper_bound#221)) AND ((ib_lower_bound#220 >= 38128) AND (ib_upper_bound#221 <= 88128))) AND isnotnull(ib_income_band_sk#219)))
    // Input: ListBuffer(ib_income_band_sk#219, ib_lower_bound#220, ib_upper_bound#221)
    // Output: ListBuffer(ib_income_band_sk#219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8983_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ib_lower_bound220 = tbl_SerializeFromObject_TD_8983_input.getInt32(i, 1);
        int32_t _ib_upper_bound221 = tbl_SerializeFromObject_TD_8983_input.getInt32(i, 2);
        int32_t _ib_income_band_sk219 = tbl_SerializeFromObject_TD_8983_input.getInt32(i, 0);
        if ((((_ib_lower_bound220!= 0) && (_ib_upper_bound221!= 0)) && ((_ib_lower_bound220 >= 38128) && (_ib_upper_bound221 <= 88128))) && (_ib_income_band_sk219!= 0)) {
            int32_t _ib_income_band_sk219_t = tbl_SerializeFromObject_TD_8983_input.getInt32(i, 0);
            tbl_Filter_TD_7424_output.setInt32(r, 0, _ib_income_band_sk219_t);
            r++;
        }
    }
    tbl_Filter_TD_7424_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7424_output #Row: " << tbl_Filter_TD_7424_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7813_key_leftMajor {
    int32_t _c_current_hdemo_sk3;
    bool operator==(const SW_JOIN_INNER_TD_7813_key_leftMajor& other) const {
        return ((_c_current_hdemo_sk3 == other._c_current_hdemo_sk3));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7813_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7813_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_hdemo_sk3));
    }
};
}
struct SW_JOIN_INNER_TD_7813_payload_leftMajor {
    std::string _c_customer_id1;
    int32_t _c_current_hdemo_sk3;
    int32_t _cd_demo_sk93;
};
struct SW_JOIN_INNER_TD_7813_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_7813_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7813_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7813_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_7813_payload_rightMajor {
    int32_t _hd_demo_sk204;
    int32_t _hd_income_band_sk205;
};
void SW_JOIN_INNER_TD_7813(Table &tbl_JOIN_INNER_TD_865_output, Table &tbl_Filter_TD_8418_output, Table &tbl_JOIN_INNER_TD_7813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((hd_demo_sk#204 = c_current_hdemo_sk#3))
    // Left Table: ListBuffer(c_customer_id#1, c_current_hdemo_sk#3, cd_demo_sk#93)
    // Right Table: ListBuffer(hd_demo_sk#204, hd_income_band_sk#205)
    // Output Table: ListBuffer(c_customer_id#1, cd_demo_sk#93, hd_income_band_sk#205)
    int left_nrow = tbl_JOIN_INNER_TD_865_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8418_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7813_key_leftMajor, SW_JOIN_INNER_TD_7813_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_865_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_hdemo_sk3_k = tbl_JOIN_INNER_TD_865_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7813_key_leftMajor keyA{_c_current_hdemo_sk3_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_865_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_865_output.getInt32(i, 1);
            int32_t _cd_demo_sk93 = tbl_JOIN_INNER_TD_865_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7813_payload_leftMajor payloadA{_c_customer_id1, _c_current_hdemo_sk3, _cd_demo_sk93};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8418_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_8418_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7813_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                int32_t _c_current_hdemo_sk3 = (it->second)._c_current_hdemo_sk3;
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                int32_t _hd_demo_sk204 = tbl_Filter_TD_8418_output.getInt32(i, 0);
                int32_t _hd_income_band_sk205 = tbl_Filter_TD_8418_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7813_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_7813_output.setInt32(r, 1, _cd_demo_sk93);
                tbl_JOIN_INNER_TD_7813_output.setInt32(r, 2, _hd_income_band_sk205);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7813_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7813_key_rightMajor, SW_JOIN_INNER_TD_7813_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8418_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_8418_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7813_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_8418_output.getInt32(i, 0);
            int32_t _hd_income_band_sk205 = tbl_Filter_TD_8418_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7813_payload_rightMajor payloadA{_hd_demo_sk204, _hd_income_band_sk205};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_865_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_hdemo_sk3_k = tbl_JOIN_INNER_TD_865_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7813_key_rightMajor{_c_current_hdemo_sk3_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _hd_income_band_sk205 = (it->second)._hd_income_band_sk205;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_865_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _c_current_hdemo_sk3 = tbl_JOIN_INNER_TD_865_output.getInt32(i, 1);
                int32_t _cd_demo_sk93 = tbl_JOIN_INNER_TD_865_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7813_output.setInt32(r, 2, _hd_income_band_sk205);
                tbl_JOIN_INNER_TD_7813_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_7813_output.setInt32(r, 1, _cd_demo_sk93);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7813_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7813_output #Row: " << tbl_JOIN_INNER_TD_7813_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6339(Table &tbl_SerializeFromObject_TD_7795_input, Table &tbl_Filter_TD_6339_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(sr_cdemo_sk#673))
    // Input: ListBuffer(sr_cdemo_sk#673)
    // Output: ListBuffer(sr_cdemo_sk#673)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7795_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_cdemo_sk673 = tbl_SerializeFromObject_TD_7795_input.getInt32(i, 0);
        if (_sr_cdemo_sk673!= 0) {
            int32_t _sr_cdemo_sk673_t = tbl_SerializeFromObject_TD_7795_input.getInt32(i, 0);
            tbl_Filter_TD_6339_output.setInt32(r, 0, _sr_cdemo_sk673_t);
            r++;
        }
    }
    tbl_Filter_TD_6339_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6339_output #Row: " << tbl_Filter_TD_6339_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6111_key_leftMajor {
    int32_t _hd_income_band_sk205;
    bool operator==(const SW_JOIN_INNER_TD_6111_key_leftMajor& other) const {
        return ((_hd_income_band_sk205 == other._hd_income_band_sk205));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6111_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6111_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_income_band_sk205));
    }
};
}
struct SW_JOIN_INNER_TD_6111_payload_leftMajor {
    std::string _c_customer_id1;
    int32_t _cd_demo_sk93;
    int32_t _hd_income_band_sk205;
};
struct SW_JOIN_INNER_TD_6111_key_rightMajor {
    int32_t _ib_income_band_sk219;
    bool operator==(const SW_JOIN_INNER_TD_6111_key_rightMajor& other) const {
        return ((_ib_income_band_sk219 == other._ib_income_band_sk219));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6111_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6111_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ib_income_band_sk219));
    }
};
}
struct SW_JOIN_INNER_TD_6111_payload_rightMajor {
    int32_t _ib_income_band_sk219;
};
void SW_JOIN_INNER_TD_6111(Table &tbl_JOIN_INNER_TD_7813_output, Table &tbl_Filter_TD_7424_output, Table &tbl_JOIN_INNER_TD_6111_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ib_income_band_sk#219 = hd_income_band_sk#205))
    // Left Table: ListBuffer(c_customer_id#1, cd_demo_sk#93, hd_income_band_sk#205)
    // Right Table: ListBuffer(ib_income_band_sk#219)
    // Output Table: ListBuffer(c_customer_id#1, cd_demo_sk#93)
    int left_nrow = tbl_JOIN_INNER_TD_7813_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7424_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6111_key_leftMajor, SW_JOIN_INNER_TD_6111_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7813_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_income_band_sk205_k = tbl_JOIN_INNER_TD_7813_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6111_key_leftMajor keyA{_hd_income_band_sk205_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_7813_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _cd_demo_sk93 = tbl_JOIN_INNER_TD_7813_output.getInt32(i, 1);
            int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_7813_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6111_payload_leftMajor payloadA{_c_customer_id1, _cd_demo_sk93, _hd_income_band_sk205};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7424_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ib_income_band_sk219_k = tbl_Filter_TD_7424_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6111_key_leftMajor{_ib_income_band_sk219_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                int32_t _hd_income_band_sk205 = (it->second)._hd_income_band_sk205;
                int32_t _ib_income_band_sk219 = tbl_Filter_TD_7424_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6111_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_6111_output.setInt32(r, 1, _cd_demo_sk93);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6111_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6111_key_rightMajor, SW_JOIN_INNER_TD_6111_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7424_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ib_income_band_sk219_k = tbl_Filter_TD_7424_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6111_key_rightMajor keyA{_ib_income_band_sk219_k};
            int32_t _ib_income_band_sk219 = tbl_Filter_TD_7424_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6111_payload_rightMajor payloadA{_ib_income_band_sk219};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7813_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_income_band_sk205_k = tbl_JOIN_INNER_TD_7813_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6111_key_rightMajor{_hd_income_band_sk205_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ib_income_band_sk219 = (it->second)._ib_income_band_sk219;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_7813_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _cd_demo_sk93 = tbl_JOIN_INNER_TD_7813_output.getInt32(i, 1);
                int32_t _hd_income_band_sk205 = tbl_JOIN_INNER_TD_7813_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6111_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_6111_output.setInt32(r, 1, _cd_demo_sk93);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6111_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6111_output #Row: " << tbl_JOIN_INNER_TD_6111_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5111_key_leftMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_5111_key_leftMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5111_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5111_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_5111_payload_leftMajor {
    std::string _c_customer_id1;
    int32_t _cd_demo_sk93;
};
struct SW_JOIN_INNER_TD_5111_key_rightMajor {
    int32_t _sr_cdemo_sk673;
    bool operator==(const SW_JOIN_INNER_TD_5111_key_rightMajor& other) const {
        return ((_sr_cdemo_sk673 == other._sr_cdemo_sk673));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5111_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5111_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_cdemo_sk673));
    }
};
}
struct SW_JOIN_INNER_TD_5111_payload_rightMajor {
    int32_t _sr_cdemo_sk673;
};
void SW_JOIN_INNER_TD_5111(Table &tbl_JOIN_INNER_TD_6111_output, Table &tbl_Filter_TD_6339_output, Table &tbl_JOIN_INNER_TD_5111_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_cdemo_sk#673 = cd_demo_sk#93))
    // Left Table: ListBuffer(c_customer_id#1, cd_demo_sk#93)
    // Right Table: ListBuffer(sr_cdemo_sk#673)
    // Output Table: ListBuffer(c_customer_id#1)
    int left_nrow = tbl_JOIN_INNER_TD_6111_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6339_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5111_key_leftMajor, SW_JOIN_INNER_TD_5111_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6111_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_JOIN_INNER_TD_6111_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5111_key_leftMajor keyA{_cd_demo_sk93_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_6111_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            int32_t _cd_demo_sk93 = tbl_JOIN_INNER_TD_6111_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5111_payload_leftMajor payloadA{_c_customer_id1, _cd_demo_sk93};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6339_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_cdemo_sk673_k = tbl_Filter_TD_6339_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5111_key_leftMajor{_sr_cdemo_sk673_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                int32_t _sr_cdemo_sk673 = tbl_Filter_TD_6339_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5111_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5111_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5111_key_rightMajor, SW_JOIN_INNER_TD_5111_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6339_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_cdemo_sk673_k = tbl_Filter_TD_6339_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5111_key_rightMajor keyA{_sr_cdemo_sk673_k};
            int32_t _sr_cdemo_sk673 = tbl_Filter_TD_6339_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5111_payload_rightMajor payloadA{_sr_cdemo_sk673};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6111_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_JOIN_INNER_TD_6111_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5111_key_rightMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_cdemo_sk673 = (it->second)._sr_cdemo_sk673;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_6111_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                int32_t _cd_demo_sk93 = tbl_JOIN_INNER_TD_6111_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5111_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5111_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5111_output #Row: " << tbl_JOIN_INNER_TD_5111_output.getNumRow() << std::endl;
}

void SW_Project_TD_4995(Table &tbl_JOIN_INNER_TD_5111_output, Table &tbl_Project_TD_4995_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(c_customer_id#1 AS customer_id#9291)
    // Input: ListBuffer(c_customer_id#1)
    // Output: ListBuffer(customer_id#9291, c_customer_id#1)
    int nrow1 = tbl_JOIN_INNER_TD_5111_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_5111_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _customer_id9291 = _c_customer_id1;
        tbl_Project_TD_4995_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id9291);
        tbl_Project_TD_4995_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _c_customer_id1);
    }
    tbl_Project_TD_4995_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_4995_output #Row: " << tbl_Project_TD_4995_output.getNumRow() << std::endl;
}

void SW_Sort_TD_3389(Table &tbl_Project_TD_4995_output, Table &tbl_Sort_TD_3389_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_customer_id#1 ASC NULLS FIRST)
    // Input: ListBuffer(customer_id#9291, c_customer_id#1)
    // Output: ListBuffer(customer_id#9291, c_customer_id#1)
    struct SW_Sort_TD_3389Row {
        std::string _customer_id9291;
        std::string _c_customer_id1;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_3389Row& a, const SW_Sort_TD_3389Row& b) const { return 
 (a._c_customer_id1 < b._c_customer_id1); 
}
    }SW_Sort_TD_3389_order; 

    int nrow1 = tbl_Project_TD_4995_output.getNumRow();
    std::vector<SW_Sort_TD_3389Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id9291 = tbl_Project_TD_4995_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_Project_TD_4995_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        SW_Sort_TD_3389Row t = {std::string(_customer_id9291.data()),std::string(_c_customer_id1.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_3389_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id9291{};
        memcpy(_customer_id9291.data(), (it._customer_id9291).data(), (it._customer_id9291).length());
        tbl_Sort_TD_3389_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _customer_id9291);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1{};
        memcpy(_c_customer_id1.data(), (it._c_customer_id1).data(), (it._c_customer_id1).length());
        tbl_Sort_TD_3389_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_customer_id1);
        ++r;
    }
    tbl_Sort_TD_3389_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_3389_output #Row: " << tbl_Sort_TD_3389_output.getNumRow() << std::endl;
}

void SW_Project_TD_2509(Table &tbl_Sort_TD_3389_output, Table &tbl_Project_TD_2509_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(null AS customername#9292)
    // Input: ListBuffer(customer_id#9291, c_customer_id#1)
    // Output: ListBuffer(customer_id#9291, customername#9292)
    int nrow1 = tbl_Sort_TD_3389_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id9291 = tbl_Sort_TD_3389_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_Sort_TD_3389_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _customername9292 = null;
        tbl_Project_TD_2509_output.setInt64(i, 1, _customername9292);
        tbl_Project_TD_2509_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id9291);
    }
    tbl_Project_TD_2509_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_2509_output #Row: " << tbl_Project_TD_2509_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1353(Table &tbl_Project_TD_2509_output, Table &tbl_LocalLimit_TD_1353_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(customer_id#9291, customername#9292)
    // Output: ListBuffer(customer_id#9291, customername#9292)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id9291_n = tbl_Project_TD_2509_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1353_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id9291_n);
        tbl_LocalLimit_TD_1353_output.setInt32(r, 1, tbl_Project_TD_2509_output.getInt64(i, 1));
        r++;
    }
    tbl_LocalLimit_TD_1353_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1353_output #Row: " << tbl_LocalLimit_TD_1353_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0170(Table &tbl_LocalLimit_TD_1353_output, Table &tbl_GlobalLimit_TD_0170_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(customer_id#9291, customername#9292)
    // Output: ListBuffer(customer_id#9291, customername#9292)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id9291_n = tbl_LocalLimit_TD_1353_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0170_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id9291_n);
        tbl_GlobalLimit_TD_0170_output.setInt32(r, 1, tbl_LocalLimit_TD_1353_output.getInt64(i, 1));
        r++;
    }
    tbl_GlobalLimit_TD_0170_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0170_output #Row: " << tbl_GlobalLimit_TD_0170_output.getNumRow() << std::endl;
}

