#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7836(Table &tbl_SerializeFromObject_TD_8695_input, Table &tbl_Filter_TD_7836_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_category#9112))
    // Input: ListBuffer(i_current_price#9105, i_category#9112)
    // Output: ListBuffer(i_current_price#9105, i_category#9112)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8695_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9112 = tbl_SerializeFromObject_TD_8695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if （std::string(_isnotnulli_category9112.data()) != "NULL") {
            int32_t _i_current_price9105_t = tbl_SerializeFromObject_TD_8695_input.getInt32(i, 0);
            tbl_Filter_TD_7836_output.setInt32(r, 0, _i_current_price9105_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category9112_t = tbl_SerializeFromObject_TD_8695_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7836_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9112_t);
            r++;
        }
    }
    tbl_Filter_TD_7836_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7836_output #Row: " << tbl_Filter_TD_7836_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7458(Table &tbl_SerializeFromObject_TD_8537_input, Table &tbl_Filter_TD_7458_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#9078) AND isnotnull(d_moy#9080)) AND ((d_year#9078 = 2001) AND (d_moy#9080 = 1))))
    // Input: ListBuffer(d_month_seq#9075, d_year#9078, d_moy#9080)
    // Output: ListBuffer(d_month_seq#9075)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8537_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year9078 = tbl_SerializeFromObject_TD_8537_input.getInt32(i, 1);
        int32_t _d_moy9080 = tbl_SerializeFromObject_TD_8537_input.getInt32(i, 2);
        if (((_d_year9078!= 0) && (_d_moy9080!= 0)) && ((_d_year9078 == 2001) && (_d_moy9080 == 1))) {
            int32_t _d_month_seq9075_t = tbl_SerializeFromObject_TD_8537_input.getInt32(i, 0);
            tbl_Filter_TD_7458_output.setInt32(r, 0, _d_month_seq9075_t);
            r++;
        }
    }
    tbl_Filter_TD_7458_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7458_output #Row: " << tbl_Filter_TD_7458_output.getNumRow() << std::endl;
}

void SW_Filter_TD_715(Table &tbl_SerializeFromObject_TD_8275_input, Table &tbl_Filter_TD_715_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_current_addr_sk#4) AND isnotnull(c_customer_sk#0)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8275_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_8275_input.getInt32(i, 1);
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_8275_input.getInt32(i, 0);
        if ((_c_current_addr_sk4!= 0) && (_c_customer_sk0!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_8275_input.getInt32(i, 0);
            tbl_Filter_TD_715_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_8275_input.getInt32(i, 1);
            tbl_Filter_TD_715_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_715_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_715_output #Row: " << tbl_Filter_TD_715_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7961(Table &tbl_SerializeFromObject_TD_8956_input, Table &tbl_Filter_TD_7961_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#54))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8956_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_8956_input.getInt32(i, 0);
        if (_ca_address_sk54!= 0) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_8956_input.getInt32(i, 0);
            tbl_Filter_TD_7961_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_8956_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7961_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_7961_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7961_output #Row: " << tbl_Filter_TD_7961_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6178_key;
struct SW_Aggregate_TD_6178_payload {
    int32_t _avgi_current_price9071_avg_0;
};
void SW_Aggregate_TD_6178(Table &tbl_Filter_TD_7836_output, Table &tbl_Aggregate_TD_6178_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#9112, cast((avg(UnscaledValue(i_current_price#9105)) / 100.0) as decimal(11,6)) AS avg(i_current_price)#9071)
    // Input: ListBuffer(i_current_price#9105, i_category#9112)
    // Output: ListBuffer(avg(i_current_price)#9071, i_category#9112)
    std::unordered_map<SW_Aggregate_TD_6178_key, SW_Aggregate_TD_6178_payload> ht1;
    int nrow1 = tbl_Filter_TD_7836_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price9105 = tbl_Filter_TD_7836_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9112 = tbl_Filter_TD_7836_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_6178_key k = std::string(_i_category9112.data());
        int64_t _avgi_current_price9071_avg_0 = _i_current_price9105;
        SW_Aggregate_TD_6178_payload p{_avgi_current_price9071_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._avgi_current_price9071_avg_0 + _avgi_current_price9071_avg_0);
            p._avgi_current_price9071_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9112{};
        memcpy(_i_category9112.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_6178_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9112);
        int32_t _avgi_current_price9071 = ((it.second)._avgi_current_price9071_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_6178_output.setInt32(r, 0, _avgi_current_price9071);
        ++r;
    }
    tbl_Aggregate_TD_6178_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6178_output #Row: " << tbl_Aggregate_TD_6178_output.getNumRow() << std::endl;
}

void SW_Filter_TD_648(Table &tbl_SerializeFromObject_TD_7717_input, Table &tbl_Filter_TD_648_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_current_price#233) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7717_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_SerializeFromObject_TD_7717_input.getInt32(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7717_input.getInt32(i, 0);
        if ((_i_current_price233!= 0) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7717_input.getInt32(i, 0);
            tbl_Filter_TD_648_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_7717_input.getInt32(i, 1);
            tbl_Filter_TD_648_output.setInt32(r, 1, _i_current_price233_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_7717_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_648_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_648_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_648_output #Row: " << tbl_Filter_TD_648_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_6829_key;
struct SW_Aggregate_TD_6829_payload {
};
void SW_Aggregate_TD_6829(Table &tbl_Filter_TD_7458_output, Table &tbl_Aggregate_TD_6829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_month_seq#9075)
    // Input: ListBuffer(d_month_seq#9075)
    // Output: ListBuffer(d_month_seq#9075)
    std::unordered_map<SW_Aggregate_TD_6829_key, SW_Aggregate_TD_6829_payload> ht1;
    int nrow1 = tbl_Filter_TD_7458_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq9075 = tbl_Filter_TD_7458_output.getInt32(i, 0);
        SW_Aggregate_TD_6829_key k = _d_month_seq9075;
        SW_Aggregate_TD_6829_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_6829_output.setInt32(r, 0, (it.first));
        ++r;
    }
    tbl_Aggregate_TD_6829_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6829_output #Row: " << tbl_Aggregate_TD_6829_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6923(Table &tbl_SerializeFromObject_TD_7337_input, Table &tbl_Filter_TD_6923_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7337_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_7337_input.getInt32(i, 2);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_7337_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_7337_input.getInt32(i, 1);
        if ((_ss_customer_sk1209!= 0) && ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_7337_input.getInt32(i, 0);
            tbl_Filter_TD_6923_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_7337_input.getInt32(i, 1);
            tbl_Filter_TD_6923_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_7337_input.getInt32(i, 2);
            tbl_Filter_TD_6923_output.setInt32(r, 2, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_6923_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6923_output #Row: " << tbl_Filter_TD_6923_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6917_key_leftMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_6917_key_leftMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6917_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6917_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_6917_payload_leftMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
struct SW_JOIN_INNER_TD_6917_key_rightMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_6917_key_rightMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6917_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6917_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_6917_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_6917(Table &tbl_Filter_TD_7961_output, Table &tbl_Filter_TD_715_output, Table &tbl_JOIN_INNER_TD_6917_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#54 = c_current_addr_sk#4))
    // Left Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output Table: ListBuffer(ca_state#62, c_customer_sk#0)
    int left_nrow = tbl_Filter_TD_7961_output.getNumRow();
    int right_nrow = tbl_Filter_TD_715_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6917_key_leftMajor, SW_JOIN_INNER_TD_6917_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7961_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7961_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6917_key_leftMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_7961_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_7961_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_6917_payload_leftMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_715_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_715_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6917_key_leftMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_customer_sk0 = tbl_Filter_TD_715_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_715_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6917_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 1, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6917_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6917_key_rightMajor, SW_JOIN_INNER_TD_6917_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_715_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_715_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6917_key_rightMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_715_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_715_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6917_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7961_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7961_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6917_key_rightMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_7961_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_7961_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_6917_output.setInt32(r, 1, _c_customer_sk0);
                tbl_JOIN_INNER_TD_6917_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6917_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6917_output #Row: " << tbl_JOIN_INNER_TD_6917_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_5256_key {
    std::string _i_category9112;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_5256_key& other) const {
        return ((_i_category9112 == other._i_category9112));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_5256_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_5256_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category9112));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_5256_payload {
    int32_t _avgi_current_price9071;
    std::string _i_category9112;
};
void SW_JOIN_LEFTOUTER_TD_5256(Table &tbl_Filter_TD_648_output, Table &tbl_Aggregate_TD_6178_output, Table &tbl_JOIN_LEFTOUTER_TD_5256_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((i_category#9112 = i_category#240))
    // Left Table: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    // Right Table: ListBuffer(avg(i_current_price)#9071, i_category#9112)
    // Output Table: ListBuffer(i_item_sk#228, i_current_price#233, avg(i_current_price)#9071)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_5256_key, SW_JOIN_LEFTOUTER_TD_5256_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_6178_output.getNumRow();
    int nrow2 = tbl_Filter_TD_648_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9112_k_n = tbl_Aggregate_TD_6178_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::string _i_category9112_k = std::string(_i_category9112_k_n.data());
        SW_JOIN_LEFTOUTER_TD_5256_key keyA{_i_category9112_k};
        int32_t _avgi_current_price9071 = tbl_Aggregate_TD_6178_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9112_n = tbl_Aggregate_TD_6178_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::string _i_category9112 = std::string(_i_category9112_n.data());
        SW_JOIN_LEFTOUTER_TD_5256_payload payloadA{_avgi_current_price9071, _i_category9112};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_648_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::string _i_category240_k = std::string(_i_category240_k_n.data());
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_5256_key{_i_category240_k});
        int32_t _i_item_sk228 = tbl_Filter_TD_648_output.getInt32(i, 0);
        int32_t _i_current_price233 = tbl_Filter_TD_648_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_648_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_5256_key{_i_category240_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _avgi_current_price9071 = (it_it->second)._avgi_current_price9071;
                std::string _i_category9112_n = (it_it->second)._i_category9112;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9112{};
                memcpy(_i_category9112.data(), (_i_category9112_n).data(), (_i_category9112_n).length());
                tbl_JOIN_LEFTOUTER_TD_5256_output.setInt32(r, 2, _avgi_current_price9071);
                tbl_JOIN_LEFTOUTER_TD_5256_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_LEFTOUTER_TD_5256_output.setInt32(r, 1, _i_current_price233);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_5256_output.setInt32(r, 0, _i_item_sk228);
            tbl_JOIN_LEFTOUTER_TD_5256_output.setInt32(r, 1, _i_current_price233);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_5256_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_5256_output #Row: " << tbl_JOIN_LEFTOUTER_TD_5256_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5452(Table &tbl_SerializeFromObject_TD_6650_input, Table &tbl_Aggregate_TD_6829_output, Table &tbl_Filter_TD_5452_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND (d_month_seq#123 = scalar-subquery#9067 [])) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6650_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_6650_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_6650_input.getInt32(i, 0);
        if (((_d_month_seq123!= 0) && (_d_month_seq123 == tbl_Aggregate_TD_6829_output.getInt32(0, 0))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_6650_input.getInt32(i, 0);
            tbl_Filter_TD_5452_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_5452_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5452_output #Row: " << tbl_Filter_TD_5452_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5285_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_5285_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5285_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5285_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_5285_payload_leftMajor {
    std::string _ca_state62;
    int32_t _c_customer_sk0;
};
struct SW_JOIN_INNER_TD_5285_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_5285_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5285_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5285_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_5285_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
};
void SW_JOIN_INNER_TD_5285(Table &tbl_JOIN_INNER_TD_6917_output, Table &tbl_Filter_TD_6923_output, Table &tbl_JOIN_INNER_TD_5285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(ca_state#62, c_customer_sk#0)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Output Table: ListBuffer(ca_state#62, ss_sold_date_sk#1206, ss_item_sk#1208)
    int left_nrow = tbl_JOIN_INNER_TD_6917_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6923_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5285_key_leftMajor, SW_JOIN_INNER_TD_5285_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6917_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_JOIN_INNER_TD_6917_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5285_key_leftMajor keyA{_c_customer_sk0_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_6917_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_6917_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5285_payload_leftMajor payloadA{_ca_state62, _c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6923_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_6923_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5285_key_leftMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6923_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_6923_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_6923_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_5285_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_5285_output.setInt32(r, 2, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5285_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5285_key_rightMajor, SW_JOIN_INNER_TD_5285_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6923_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_6923_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5285_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_6923_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_6923_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_6923_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5285_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6917_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_JOIN_INNER_TD_6917_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5285_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_6917_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_6917_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5285_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_5285_output.setInt32(r, 2, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5285_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5285_output #Row: " << tbl_JOIN_INNER_TD_5285_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4946(Table &tbl_JOIN_LEFTOUTER_TD_5256_output, Table &tbl_Filter_TD_4946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cast(i_current_price#233 as decimal(14,7)) > CheckOverflow((1.200000 * promote_precision(avg(i_current_price)#9071)), DecimalType(14,7), true)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233, avg(i_current_price)#9071)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_5256_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_JOIN_LEFTOUTER_TD_5256_output.getInt32(i, 1);
        int32_t _avgi_current_price9071 = tbl_JOIN_LEFTOUTER_TD_5256_output.getInt32(i, 2);
        if (_i_current_price233 > (1.200000 * _avgi_current_price9071)) {
            int32_t _i_item_sk228_t = tbl_JOIN_LEFTOUTER_TD_5256_output.getInt32(i, 0);
            tbl_Filter_TD_4946_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_4946_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4946_output #Row: " << tbl_Filter_TD_4946_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4841_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_4841_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4841_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4841_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_4841_payload_leftMajor {
    std::string _ca_state62;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_4841_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_4841_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4841_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4841_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_4841_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_4841(Table &tbl_JOIN_INNER_TD_5285_output, Table &tbl_Filter_TD_5452_output, Table &tbl_JOIN_INNER_TD_4841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ca_state#62, ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ca_state#62, ss_item_sk#1208)
    int left_nrow = tbl_JOIN_INNER_TD_5285_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5452_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4841_key_leftMajor, SW_JOIN_INNER_TD_4841_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5285_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_5285_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4841_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_5285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_5285_output.getInt32(i, 1);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5285_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4841_payload_leftMajor payloadA{_ca_state62, _ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5452_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5452_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4841_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date_sk120 = tbl_Filter_TD_5452_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_4841_output.setInt32(r, 1, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4841_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4841_key_rightMajor, SW_JOIN_INNER_TD_4841_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5452_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_5452_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4841_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_5452_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4841_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5285_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_5285_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4841_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_5285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_5285_output.getInt32(i, 1);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5285_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_4841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_4841_output.setInt32(r, 1, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4841_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4841_output #Row: " << tbl_JOIN_INNER_TD_4841_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3693_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_3693_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3693_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3693_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_3693_payload_leftMajor {
    std::string _ca_state62;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_3693_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_3693_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3693_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3693_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_3693_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_3693(Table &tbl_JOIN_INNER_TD_4841_output, Table &tbl_Filter_TD_4946_output, Table &tbl_JOIN_INNER_TD_3693_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ca_state#62, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_4841_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4946_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3693_key_leftMajor, SW_JOIN_INNER_TD_3693_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4841_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_4841_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3693_key_leftMajor keyA{_ss_item_sk1208_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_4841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_4841_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3693_payload_leftMajor payloadA{_ca_state62, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4946_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4946_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3693_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk228 = tbl_Filter_TD_4946_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3693_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3693_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3693_key_rightMajor, SW_JOIN_INNER_TD_3693_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4946_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4946_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3693_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_4946_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3693_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4841_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_4841_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3693_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_4841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_4841_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3693_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3693_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3693_output #Row: " << tbl_JOIN_INNER_TD_3693_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_2352_key;
struct SW_Aggregate_TD_2352_payload {
    std::string _state9065;
    int64_t _cnt9066L_count_0;
};
void SW_Aggregate_TD_2352(Table &tbl_JOIN_INNER_TD_3693_output, Table &tbl_Aggregate_TD_2352_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_state#62, ca_state#62 AS state#9065, count(1) AS cnt#9066L)
    // Input: ListBuffer(ca_state#62)
    // Output: ListBuffer(state#9065, cnt#9066L)
    std::unordered_map<SW_Aggregate_TD_2352_key, SW_Aggregate_TD_2352_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_3693_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_3693_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        SW_Aggregate_TD_2352_key k = std::string(_ca_state62.data());
        std::array<char, TPCDS_READ_MAX + 1> _state9065 = _ca_state62;
        int64_t _cnt9066L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_2352_payload p{std::string(_state9065.data()), _cnt9066L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt9066L_count_0 + _cnt9066L_count_0;
            p._cnt9066L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ca_state62 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _state9065_n{};
        memcpy(_state9065_n.data(), (it.second)._state9065.data(), (it.second)._state9065.length());
        tbl_Aggregate_TD_2352_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _state9065_n);
        int64_t _cnt9066L = (it.second)._cnt9066L_count_0;
        tbl_Aggregate_TD_2352_output.setInt64(r, 1, _cnt9066L);
        ++r;
    }
    tbl_Aggregate_TD_2352_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2352_output #Row: " << tbl_Aggregate_TD_2352_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1673(Table &tbl_Aggregate_TD_2352_output, Table &tbl_Filter_TD_1673_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cnt#9066L >= 10))
    // Input: ListBuffer(state#9065, cnt#9066L)
    // Output: ListBuffer(state#9065, cnt#9066L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_2352_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt9066L = tbl_Aggregate_TD_2352_output.getInt64(i, 1);
        if (_cnt9066L >= 10) {
            std::array<char, TPCDS_READ_MAX + 1> _state9065_t = tbl_Aggregate_TD_2352_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_1673_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _state9065_t);
            int64_t _cnt9066L_t = tbl_Aggregate_TD_2352_output.getInt64(i, 1);
            tbl_Filter_TD_1673_output.setInt64(r, 1, _cnt9066L_t);
            r++;
        }
    }
    tbl_Filter_TD_1673_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1673_output #Row: " << tbl_Filter_TD_1673_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0119(Table &tbl_Filter_TD_1673_output, Table &tbl_Sort_TD_0119_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cnt#9066L ASC NULLS FIRST)
    // Input: ListBuffer(state#9065, cnt#9066L)
    // Output: ListBuffer(state#9065, cnt#9066L)
    struct SW_Sort_TD_0119Row {
        std::string _state9065;
        int64_t _cnt9066L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0119Row& a, const SW_Sort_TD_0119Row& b) const { return 
 (a._cnt9066L < b._cnt9066L); 
}
    }SW_Sort_TD_0119_order; 

    int nrow1 = tbl_Filter_TD_1673_output.getNumRow();
    std::vector<SW_Sort_TD_0119Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _state9065 = tbl_Filter_TD_1673_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int64_t _cnt9066L = tbl_Filter_TD_1673_output.getInt64(i, 1);
        SW_Sort_TD_0119Row t = {std::string(_state9065.data()),_cnt9066L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0119_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _state9065{};
        memcpy(_state9065.data(), (it._state9065).data(), (it._state9065).length());
        tbl_Sort_TD_0119_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _state9065);
        tbl_Sort_TD_0119_output.setInt64(r, 1, it._cnt9066L);
        if (r < 10) {
            std::cout << (it._state9065).data() << " " << it._cnt9066L << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0119_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0119_output #Row: " << tbl_Sort_TD_0119_output.getNumRow() << std::endl;
}

