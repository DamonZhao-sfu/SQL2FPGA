#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9837(Table &tbl_SerializeFromObject_TD_10158_input, Table &tbl_Filter_TD_9837_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_category#9091))
    // Input: ListBuffer(i_current_price#9084, i_category#9091)
    // Output: ListBuffer(i_current_price#9084, i_category#9091)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10158_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9091 = tbl_SerializeFromObject_TD_10158_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if (1) {
            int32_t _i_current_price9084_t = tbl_SerializeFromObject_TD_10158_input.getInt32(i, 0);
            tbl_Filter_TD_9837_output.setInt32(r, 0, _i_current_price9084_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category9091_t = tbl_SerializeFromObject_TD_10158_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9837_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9091_t);
            r++;
        }
    }
    tbl_Filter_TD_9837_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9837_output #Row: " << tbl_Filter_TD_9837_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9114(Table &tbl_SerializeFromObject_TD_10645_input, Table &tbl_Filter_TD_9114_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#9057) AND isnotnull(d_moy#9059)) AND ((d_year#9057 = 2001) AND (d_moy#9059 = 1))))
    // Input: ListBuffer(d_month_seq#9054, d_year#9057, d_moy#9059)
    // Output: ListBuffer(d_month_seq#9054)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10645_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year9057 = tbl_SerializeFromObject_TD_10645_input.getInt32(i, 1);
        int32_t _d_moy9059 = tbl_SerializeFromObject_TD_10645_input.getInt32(i, 2);
        if (((1) && (1)) && ((_d_year9057 == 2001) && (_d_moy9059 == 1))) {
            int32_t _d_month_seq9054_t = tbl_SerializeFromObject_TD_10645_input.getInt32(i, 0);
            tbl_Filter_TD_9114_output.setInt32(r, 0, _d_month_seq9054_t);
            r++;
        }
    }
    tbl_Filter_TD_9114_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9114_output #Row: " << tbl_Filter_TD_9114_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9831(Table &tbl_SerializeFromObject_TD_10955_input, Table &tbl_Filter_TD_9831_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_current_addr_sk#4) AND isnotnull(c_customer_sk#0)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10955_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_10955_input.getInt32(i, 1);
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_10955_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_10955_input.getInt32(i, 0);
            tbl_Filter_TD_9831_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_10955_input.getInt32(i, 1);
            tbl_Filter_TD_9831_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_9831_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9831_output #Row: " << tbl_Filter_TD_9831_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9643(Table &tbl_SerializeFromObject_TD_10349_input, Table &tbl_Filter_TD_9643_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#54))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10349_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_10349_input.getInt32(i, 0);
        if (1) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_10349_input.getInt32(i, 0);
            tbl_Filter_TD_9643_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_10349_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9643_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_9643_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9643_output #Row: " << tbl_Filter_TD_9643_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_8932_key;
struct SW_Aggregate_TD_8932_payload {
    int32_t _avgi_current_price9050_avg_0;
};
void SW_Aggregate_TD_8932(Table &tbl_Filter_TD_9837_output, Table &tbl_Aggregate_TD_8932_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_category#9091, cast((avg(UnscaledValue(i_current_price#9084)) / 100.0) as decimal(11,6)) AS avg(i_current_price)#9050)
    // Input: ListBuffer(i_current_price#9084, i_category#9091)
    // Output: ListBuffer(avg(i_current_price)#9050, i_category#9091)
    std::unordered_map<SW_Aggregate_TD_8932_key, SW_Aggregate_TD_8932_payload> ht1;
    int nrow1 = tbl_Filter_TD_9837_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price9084 = tbl_Filter_TD_9837_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9091 = tbl_Filter_TD_9837_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_8932_key k = std::string(_i_category9091.data());
        int64_t _avgi_current_price9050_avg_0 = _i_current_price9084;
        SW_Aggregate_TD_8932_payload p{_avgi_current_price9050_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t avg_0 = ((it->second)._avgi_current_price9050_avg_0 + _avgi_current_price9050_avg_0);
            p._avgi_current_price9050_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9091{};
        memcpy(_i_category9091.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_8932_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_category9091);
        int32_t _avgi_current_price9050 = ((it.second)._avgi_current_price9050_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_8932_output.setInt32(r, 0, _avgi_current_price9050);
        ++r;
    }
    tbl_Aggregate_TD_8932_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8932_output #Row: " << tbl_Aggregate_TD_8932_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8696(Table &tbl_SerializeFromObject_TD_997_input, Table &tbl_Filter_TD_8696_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_current_price#233) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_997_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_SerializeFromObject_TD_997_input.getInt32(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_997_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_997_input.getInt32(i, 0);
            tbl_Filter_TD_8696_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_current_price233_t = tbl_SerializeFromObject_TD_997_input.getInt32(i, 1);
            tbl_Filter_TD_8696_output.setInt32(r, 1, _i_current_price233_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_category240_t = tbl_SerializeFromObject_TD_997_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8696_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_category240_t);
            r++;
        }
    }
    tbl_Filter_TD_8696_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8696_output #Row: " << tbl_Filter_TD_8696_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8592_key;
struct SW_Aggregate_TD_8592_payload {
};
void SW_Aggregate_TD_8592(Table &tbl_Filter_TD_9114_output, Table &tbl_Aggregate_TD_8592_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_month_seq#9054)
    // Input: ListBuffer(d_month_seq#9054)
    // Output: ListBuffer(d_month_seq#9054)
    std::unordered_map<SW_Aggregate_TD_8592_key, SW_Aggregate_TD_8592_payload> ht1;
    int nrow1 = tbl_Filter_TD_9114_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq9054 = tbl_Filter_TD_9114_output.getInt32(i, 0);
        SW_Aggregate_TD_8592_key k = _d_month_seq9054;
        SW_Aggregate_TD_8592_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8592_output.setInt32(r, 0, (it.first));
        ++r;
    }
    tbl_Aggregate_TD_8592_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8592_output #Row: " << tbl_Aggregate_TD_8592_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8230(Table &tbl_SerializeFromObject_TD_9832_input, Table &tbl_Filter_TD_8230_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9832_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_9832_input.getInt32(i, 2);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_9832_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_9832_input.getInt32(i, 1);
        if ((1) && ((1) && (1))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_9832_input.getInt32(i, 0);
            tbl_Filter_TD_8230_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_9832_input.getInt32(i, 1);
            tbl_Filter_TD_8230_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_9832_input.getInt32(i, 2);
            tbl_Filter_TD_8230_output.setInt32(r, 2, _ss_customer_sk1209_t);
            r++;
        }
    }
    tbl_Filter_TD_8230_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8230_output #Row: " << tbl_Filter_TD_8230_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8362_key_leftMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_8362_key_leftMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8362_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8362_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_8362_payload_leftMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
struct SW_JOIN_INNER_TD_8362_key_rightMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_8362_key_rightMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8362_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8362_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_8362_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_8362(Table &tbl_Filter_TD_9643_output, Table &tbl_Filter_TD_9831_output, Table &tbl_JOIN_INNER_TD_8362_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#54 = c_current_addr_sk#4))
    // Left Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output Table: ListBuffer(ca_state#62, c_customer_sk#0)
    int left_nrow = tbl_Filter_TD_9643_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9831_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8362_key_leftMajor, SW_JOIN_INNER_TD_8362_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9643_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9643_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8362_key_leftMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_9643_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_9643_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_8362_payload_leftMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9831_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_9831_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8362_key_leftMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_customer_sk0 = tbl_Filter_TD_9831_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_9831_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8362_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_8362_output.setInt32(r, 1, _c_customer_sk0);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8362_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8362_key_rightMajor, SW_JOIN_INNER_TD_8362_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9831_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_9831_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8362_key_rightMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_9831_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_9831_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8362_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9643_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9643_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8362_key_rightMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_9643_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_9643_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_8362_output.setInt32(r, 1, _c_customer_sk0);
                tbl_JOIN_INNER_TD_8362_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8362_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8362_output #Row: " << tbl_JOIN_INNER_TD_8362_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_7299_key {
    std::string _i_category9091;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_7299_key& other) const {
        return ((_i_category9091 == other._i_category9091));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_7299_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_7299_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_category9091));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_7299_payload {
    int32_t _avgi_current_price9050;
    std::string _i_category9091;
};
void SW_JOIN_LEFTOUTER_TD_7299(Table &tbl_Filter_TD_8696_output, Table &tbl_Aggregate_TD_8932_output, Table &tbl_JOIN_LEFTOUTER_TD_7299_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((i_category#9091 = i_category#240))
    // Left Table: ListBuffer(i_item_sk#228, i_current_price#233, i_category#240)
    // Right Table: ListBuffer(avg(i_current_price)#9050, i_category#9091)
    // Output Table: ListBuffer(i_item_sk#228, i_current_price#233, avg(i_current_price)#9050)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_7299_key, SW_JOIN_LEFTOUTER_TD_7299_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_8932_output.getNumRow();
    int nrow2 = tbl_Filter_TD_8696_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category9091_k_n = tbl_Aggregate_TD_8932_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::string _i_category9091_k = std::string(_i_category9091_k_n.data());
        SW_JOIN_LEFTOUTER_TD_7299_key keyA{_i_category9091_k};
        int32_t _avgi_current_price9050 = tbl_Aggregate_TD_8932_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_category9091_n = tbl_Aggregate_TD_8932_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::string _i_category9091 = std::string(_i_category9091_n.data());
        SW_JOIN_LEFTOUTER_TD_7299_payload payloadA{_avgi_current_price9050, _i_category9091};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240_k_n = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::string _i_category240_k = std::string(_i_category240_k_n.data());
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_7299_key{_i_category240_k});
        int32_t _i_item_sk228 = tbl_Filter_TD_8696_output.getInt32(i, 0);
        int32_t _i_current_price233 = tbl_Filter_TD_8696_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_Filter_TD_8696_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_7299_key{_i_category240_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _avgi_current_price9050 = (it_it->second)._avgi_current_price9050;
                std::string _i_category9091_n = (it_it->second)._i_category9091;
                std::array<char, TPCDS_READ_MAX + 1> _i_category9091{};
                memcpy(_i_category9091.data(), (_i_category9091_n).data(), (_i_category9091_n).length());
                tbl_JOIN_LEFTOUTER_TD_7299_output.setInt32(r, 2, _avgi_current_price9050);
                tbl_JOIN_LEFTOUTER_TD_7299_output.setInt32(r, 0, _i_item_sk228);
                tbl_JOIN_LEFTOUTER_TD_7299_output.setInt32(r, 1, _i_current_price233);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_7299_output.setInt32(r, 0, _i_item_sk228);
            tbl_JOIN_LEFTOUTER_TD_7299_output.setInt32(r, 1, _i_current_price233);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_7299_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_7299_output #Row: " << tbl_JOIN_LEFTOUTER_TD_7299_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7921(Table &tbl_SerializeFromObject_TD_8781_input, Table &tbl_Aggregate_TD_8592_output, Table &tbl_Filter_TD_7921_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_month_seq#123) AND (d_month_seq#123 = scalar-subquery#9046 [])) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8781_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_8781_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8781_input.getInt32(i, 0);
        if (((1) && (_d_month_seq123 == tbl_Aggregate_TD_8592_output.getInt32(0, 0))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8781_input.getInt32(i, 0);
            tbl_Filter_TD_7921_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7921_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7921_output #Row: " << tbl_Filter_TD_7921_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7719_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_7719_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7719_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7719_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_7719_payload_leftMajor {
    std::string _ca_state62;
    int32_t _c_customer_sk0;
};
struct SW_JOIN_INNER_TD_7719_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_7719_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7719_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7719_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_7719_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
};
void SW_JOIN_INNER_TD_7719(Table &tbl_JOIN_INNER_TD_8362_output, Table &tbl_Filter_TD_8230_output, Table &tbl_JOIN_INNER_TD_7719_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(ca_state#62, c_customer_sk#0)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209)
    // Output Table: ListBuffer(ca_state#62, ss_sold_date_sk#1206, ss_item_sk#1208)
    int left_nrow = tbl_JOIN_INNER_TD_8362_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8230_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7719_key_leftMajor, SW_JOIN_INNER_TD_7719_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8362_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_JOIN_INNER_TD_8362_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7719_key_leftMajor keyA{_c_customer_sk0_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_8362_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_8362_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7719_payload_leftMajor payloadA{_ca_state62, _c_customer_sk0};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8230_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_8230_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7719_key_leftMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8230_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_8230_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_8230_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7719_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_7719_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7719_output.setInt32(r, 2, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7719_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7719_key_rightMajor, SW_JOIN_INNER_TD_7719_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8230_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_8230_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7719_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_8230_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_8230_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_8230_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7719_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8362_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_JOIN_INNER_TD_8362_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7719_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_8362_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _c_customer_sk0 = tbl_JOIN_INNER_TD_8362_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7719_output.setInt32(r, 1, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7719_output.setInt32(r, 2, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7719_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7719_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7719_output #Row: " << tbl_JOIN_INNER_TD_7719_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6144(Table &tbl_JOIN_LEFTOUTER_TD_7299_output, Table &tbl_Filter_TD_6144_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cast(i_current_price#233 as decimal(14,7)) > CheckOverflow((1.200000 * promote_precision(avg(i_current_price)#9050)), DecimalType(14,7), true)))
    // Input: ListBuffer(i_item_sk#228, i_current_price#233, avg(i_current_price)#9050)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_7299_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_current_price233 = tbl_JOIN_LEFTOUTER_TD_7299_output.getInt32(i, 1);
        int32_t _avgi_current_price9050 = tbl_JOIN_LEFTOUTER_TD_7299_output.getInt32(i, 2);
        if (_i_current_price233 > (1.200000 * _avgi_current_price9050)) {
            int32_t _i_item_sk228_t = tbl_JOIN_LEFTOUTER_TD_7299_output.getInt32(i, 0);
            tbl_Filter_TD_6144_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_6144_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6144_output #Row: " << tbl_Filter_TD_6144_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6355_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_6355_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6355_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6355_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_6355_payload_leftMajor {
    std::string _ca_state62;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_6355_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6355_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6355_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6355_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6355_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_6355(Table &tbl_JOIN_INNER_TD_7719_output, Table &tbl_Filter_TD_7921_output, Table &tbl_JOIN_INNER_TD_6355_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ca_state#62, ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ca_state#62, ss_item_sk#1208)
    int left_nrow = tbl_JOIN_INNER_TD_7719_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7921_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6355_key_leftMajor, SW_JOIN_INNER_TD_6355_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7719_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_7719_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6355_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_7719_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7719_output.getInt32(i, 1);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7719_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6355_payload_leftMajor payloadA{_ca_state62, _ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7921_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7921_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6355_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date_sk120 = tbl_Filter_TD_7921_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6355_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_6355_output.setInt32(r, 1, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6355_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6355_key_rightMajor, SW_JOIN_INNER_TD_6355_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7921_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7921_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6355_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7921_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6355_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7719_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_7719_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6355_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_7719_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7719_output.getInt32(i, 1);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7719_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6355_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                tbl_JOIN_INNER_TD_6355_output.setInt32(r, 1, _ss_item_sk1208);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6355_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6355_output #Row: " << tbl_JOIN_INNER_TD_6355_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5360_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_5360_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5360_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5360_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_5360_payload_leftMajor {
    std::string _ca_state62;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_5360_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5360_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5360_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5360_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5360_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_5360(Table &tbl_JOIN_INNER_TD_6355_output, Table &tbl_Filter_TD_6144_output, Table &tbl_JOIN_INNER_TD_5360_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ca_state#62, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(ca_state#62)
    int left_nrow = tbl_JOIN_INNER_TD_6355_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6144_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5360_key_leftMajor, SW_JOIN_INNER_TD_5360_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6355_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6355_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5360_key_leftMajor keyA{_ss_item_sk1208_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_6355_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6355_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5360_payload_leftMajor payloadA{_ca_state62, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6144_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6144_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5360_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk228 = tbl_Filter_TD_6144_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5360_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5360_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5360_key_rightMajor, SW_JOIN_INNER_TD_5360_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6144_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6144_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5360_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6144_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5360_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6355_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_6355_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5360_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_JOIN_INNER_TD_6355_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6355_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5360_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_state62_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5360_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5360_output #Row: " << tbl_JOIN_INNER_TD_5360_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_4818_key;
struct SW_Aggregate_TD_4818_payload {
    std::string _state9044;
    int64_t _cnt9045L_count_0;
};
void SW_Aggregate_TD_4818(Table &tbl_JOIN_INNER_TD_5360_output, Table &tbl_Aggregate_TD_4818_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_state#62, ca_state#62 AS state#9044, count(1) AS cnt#9045L)
    // Input: ListBuffer(ca_state#62)
    // Output: ListBuffer(state#9044, cnt#9045L)
    std::unordered_map<SW_Aggregate_TD_4818_key, SW_Aggregate_TD_4818_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5360_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_JOIN_INNER_TD_5360_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        SW_Aggregate_TD_4818_key k = std::string(_ca_state62.data());
        std::array<char, TPCDS_READ_MAX + 1> _state9044 = _ca_state62;
        int64_t _cnt9045L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_4818_payload p{std::string(_state9044.data()), _cnt9045L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt9045L_count_0 + _cnt9045L_count_0;
            p._cnt9045L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ca_state62 not required in the output table
        // Unsupported payload type: StringType
        int64_t _cnt9045L = (it.second)._cnt9045L_count_0;
        tbl_Aggregate_TD_4818_output.setInt64(r, 1, _cnt9045L);
        ++r;
    }
    tbl_Aggregate_TD_4818_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4818_output #Row: " << tbl_Aggregate_TD_4818_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3700(Table &tbl_Aggregate_TD_4818_output, Table &tbl_Filter_TD_3700_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cnt#9045L >= 10))
    // Input: ListBuffer(state#9044, cnt#9045L)
    // Output: ListBuffer(state#9044, cnt#9045L)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_4818_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt9045L = tbl_Aggregate_TD_4818_output.getInt64(i, 1);
        if (_cnt9045L >= 10) {
            std::array<char, TPCDS_READ_MAX + 1> _state9044_t = tbl_Aggregate_TD_4818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_3700_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _state9044_t);
            int64_t _cnt9045L_t = tbl_Aggregate_TD_4818_output.getInt64(i, 1);
            tbl_Filter_TD_3700_output.setInt64(r, 1, _cnt9045L_t);
            r++;
        }
    }
    tbl_Filter_TD_3700_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3700_output #Row: " << tbl_Filter_TD_3700_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2166(Table &tbl_Filter_TD_3700_output, Table &tbl_Sort_TD_2166_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(cnt#9045L ASC NULLS FIRST)
    // Input: ListBuffer(state#9044, cnt#9045L)
    // Output: ListBuffer(state#9044, cnt#9045L)
    struct SW_Sort_TD_2166Row {
        std::string _state9044;
        int64_t _cnt9045L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2166Row& a, const SW_Sort_TD_2166Row& b) const { return 
 (a._cnt9045L < b._cnt9045L); 
}
    }SW_Sort_TD_2166_order; 

    int nrow1 = tbl_Filter_TD_3700_output.getNumRow();
    std::vector<SW_Sort_TD_2166Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _state9044 = tbl_Filter_TD_3700_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int64_t _cnt9045L = tbl_Filter_TD_3700_output.getInt64(i, 1);
        SW_Sort_TD_2166Row t = {std::string(_state9044.data()),_cnt9045L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2166_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _state9044{};
        memcpy(_state9044.data(), (it._state9044).data(), (it._state9044).length());
        tbl_Sort_TD_2166_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _state9044);
        tbl_Sort_TD_2166_output.setInt64(r, 1, it._cnt9045L);
        ++r;
    }
    tbl_Sort_TD_2166_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2166_output #Row: " << tbl_Sort_TD_2166_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1116(Table &tbl_Sort_TD_2166_output, Table &tbl_LocalLimit_TD_1116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(state#9044, cnt#9045L)
    // Output: ListBuffer(state#9044, cnt#9045L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _state9044_n = tbl_Sort_TD_2166_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _state9044_n);
        tbl_LocalLimit_TD_1116_output.setInt32(r, 1, tbl_Sort_TD_2166_output.getInt64(i, 1));
        r++;
    }
    tbl_LocalLimit_TD_1116_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1116_output #Row: " << tbl_LocalLimit_TD_1116_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0194(Table &tbl_LocalLimit_TD_1116_output, Table &tbl_GlobalLimit_TD_0194_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(state#9044, cnt#9045L)
    // Output: ListBuffer(state#9044, cnt#9045L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _state9044_n = tbl_LocalLimit_TD_1116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0194_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _state9044_n);
        tbl_GlobalLimit_TD_0194_output.setInt32(r, 1, tbl_LocalLimit_TD_1116_output.getInt64(i, 1));
        r++;
    }
    tbl_GlobalLimit_TD_0194_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0194_output #Row: " << tbl_GlobalLimit_TD_0194_output.getNumRow() << std::endl;
}

