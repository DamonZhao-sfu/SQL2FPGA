#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10945(Table &tbl_SerializeFromObject_TD_11939_input, Table &tbl_Filter_TD_10945_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11939_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_11939_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_11939_input.getInt32(i, 1);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_11939_input.getInt32(i, 0);
            tbl_Filter_TD_10945_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_11939_input.getInt32(i, 1);
            tbl_Filter_TD_10945_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_10945_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10945_output #Row: " << tbl_Filter_TD_10945_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10400(Table &tbl_SerializeFromObject_TD_11800_input, Table &tbl_Filter_TD_10400_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#733) AND (isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_item_sk#732))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_sales_price#750)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_sales_price#750)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11800_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_11800_input.getInt32(i, 2);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_11800_input.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_11800_input.getInt32(i, 1);
        if ((_ws_bill_customer_sk733!= 0) && ((_ws_sold_date_sk729!= 0) && (_ws_item_sk732!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_11800_input.getInt32(i, 0);
            tbl_Filter_TD_10400_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_11800_input.getInt32(i, 1);
            tbl_Filter_TD_10400_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_11800_input.getInt32(i, 2);
            tbl_Filter_TD_10400_output.setInt32(r, 2, _ws_bill_customer_sk733_t);
            int32_t _ws_sales_price750_t = tbl_SerializeFromObject_TD_11800_input.getInt32(i, 3);
            tbl_Filter_TD_10400_output.setInt32(r, 3, _ws_sales_price750_t);
            r++;
        }
    }
    tbl_Filter_TD_10400_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10400_output #Row: " << tbl_Filter_TD_10400_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9787(Table &tbl_SerializeFromObject_TD_10699_input, Table &tbl_Filter_TD_9787_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#54))
    // Input: ListBuffer(ca_address_sk#54, ca_city#60, ca_zip#63)
    // Output: ListBuffer(ca_address_sk#54, ca_city#60, ca_zip#63)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10699_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_10699_input.getInt32(i, 0);
        if (_ca_address_sk54!= 0) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_10699_input.getInt32(i, 0);
            tbl_Filter_TD_9787_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_t = tbl_SerializeFromObject_TD_10699_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_t = tbl_SerializeFromObject_TD_10699_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_zip63_t);
            r++;
        }
    }
    tbl_Filter_TD_9787_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9787_output #Row: " << tbl_Filter_TD_9787_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9199_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_INNER_TD_9199_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9199_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9199_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_INNER_TD_9199_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_bill_customer_sk733;
    int32_t _ws_sales_price750;
};
struct SW_JOIN_INNER_TD_9199_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_9199_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9199_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9199_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_9199_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_9199(Table &tbl_Filter_TD_10400_output, Table &tbl_Filter_TD_10945_output, Table &tbl_JOIN_INNER_TD_9199_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#0))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_sales_price#750)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750, c_current_addr_sk#4)
    int left_nrow = tbl_Filter_TD_10400_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10945_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9199_key_leftMajor, SW_JOIN_INNER_TD_9199_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10400_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_Filter_TD_10400_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9199_key_leftMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10400_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_10400_output.getInt32(i, 1);
            int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_10400_output.getInt32(i, 2);
            int32_t _ws_sales_price750 = tbl_Filter_TD_10400_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9199_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_bill_customer_sk733, _ws_sales_price750};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10945_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10945_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9199_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _c_customer_sk0 = tbl_Filter_TD_10945_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_10945_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9199_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_9199_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_9199_output.setInt32(r, 2, _ws_sales_price750);
                tbl_JOIN_INNER_TD_9199_output.setInt32(r, 3, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9199_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9199_key_rightMajor, SW_JOIN_INNER_TD_9199_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10945_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10945_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9199_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_10945_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_10945_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9199_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10400_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_Filter_TD_10400_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9199_key_rightMajor{_ws_bill_customer_sk733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10400_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_10400_output.getInt32(i, 1);
                int32_t _ws_bill_customer_sk733 = tbl_Filter_TD_10400_output.getInt32(i, 2);
                int32_t _ws_sales_price750 = tbl_Filter_TD_10400_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9199_output.setInt32(r, 3, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_9199_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_9199_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_9199_output.setInt32(r, 2, _ws_sales_price750);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9199_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9199_output #Row: " << tbl_JOIN_INNER_TD_9199_output.getNumRow() << std::endl;
}

void SW_Filter_TD_867(Table &tbl_SerializeFromObject_TD_9759_input, Table &tbl_Filter_TD_867_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#130) AND isnotnull(d_year#126)) AND ((d_qoy#130 = 2) AND (d_year#126 = 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_qoy#130, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9759_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy130 = tbl_SerializeFromObject_TD_9759_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_9759_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_9759_input.getInt32(i, 0);
        if ((((_d_qoy130!= 0) && (_d_year126!= 0)) && ((_d_qoy130 == 2) && (_d_year126 == 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_9759_input.getInt32(i, 0);
            tbl_Filter_TD_867_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_867_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_867_output #Row: " << tbl_Filter_TD_867_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_840_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_840_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_840_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_840_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_840_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_sales_price750;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_840_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_840_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_840_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_840_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_840_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_city60;
    std::string _ca_zip63;
};
void SW_JOIN_INNER_TD_840(Table &tbl_JOIN_INNER_TD_9199_output, Table &tbl_Filter_TD_9787_output, Table &tbl_JOIN_INNER_TD_840_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_current_addr_sk#4 = ca_address_sk#54))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750, c_current_addr_sk#4)
    // Right Table: ListBuffer(ca_address_sk#54, ca_city#60, ca_zip#63)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750, ca_city#60, ca_zip#63)
    int left_nrow = tbl_JOIN_INNER_TD_9199_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9787_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_840_key_leftMajor, SW_JOIN_INNER_TD_840_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9199_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_840_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 1);
            int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 2);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_840_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_sales_price750, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9787_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9787_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_840_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_9787_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Filter_TD_9787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_9787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                tbl_JOIN_INNER_TD_840_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_840_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_840_output.setInt32(r, 2, _ws_sales_price750);
                tbl_JOIN_INNER_TD_840_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_city60_n);
                tbl_JOIN_INNER_TD_840_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_zip63_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_840_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_840_key_rightMajor, SW_JOIN_INNER_TD_840_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9787_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9787_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_840_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_9787_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Filter_TD_9787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Filter_TD_9787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            SW_JOIN_INNER_TD_840_payload_rightMajor payloadA{_ca_address_sk54, _ca_city60, _ca_zip63};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9199_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_840_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 1);
                int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 2);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_9199_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_840_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_city60_n);
                tbl_JOIN_INNER_TD_840_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _ca_zip63_n);
                tbl_JOIN_INNER_TD_840_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_840_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_840_output.setInt32(r, 2, _ws_sales_price750);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_840_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_840_output #Row: " << tbl_JOIN_INNER_TD_840_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7807(Table &tbl_SerializeFromObject_TD_8630_input, Table &tbl_Filter_TD_7807_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output: ListBuffer(i_item_sk#228, i_item_id#229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8630_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_8630_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_8630_input.getInt32(i, 0);
            tbl_Filter_TD_7807_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_t = tbl_SerializeFromObject_TD_8630_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7807_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_id229_t);
            r++;
        }
    }
    tbl_Filter_TD_7807_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7807_output #Row: " << tbl_Filter_TD_7807_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7939_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_7939_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7939_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7939_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_7939_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_sales_price750;
    std::string _ca_city60;
    std::string _ca_zip63;
};
struct SW_JOIN_INNER_TD_7939_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_7939_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7939_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7939_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_7939_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_7939(Table &tbl_JOIN_INNER_TD_840_output, Table &tbl_Filter_TD_867_output, Table &tbl_JOIN_INNER_TD_7939_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_sales_price#750, ca_city#60, ca_zip#63)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ws_item_sk#732, ws_sales_price#750, ca_city#60, ca_zip#63)
    int left_nrow = tbl_JOIN_INNER_TD_840_output.getNumRow();
    int right_nrow = tbl_Filter_TD_867_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7939_key_leftMajor, SW_JOIN_INNER_TD_7939_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_840_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_840_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7939_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_840_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_840_output.getInt32(i, 1);
            int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_840_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            SW_JOIN_INNER_TD_7939_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_sales_price750, _ca_city60, _ca_zip63};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_867_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_867_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7939_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_867_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 1, _ws_sales_price750);
                tbl_JOIN_INNER_TD_7939_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city60_n);
                tbl_JOIN_INNER_TD_7939_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_zip63_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7939_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7939_key_rightMajor, SW_JOIN_INNER_TD_7939_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_867_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_867_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7939_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_867_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7939_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_840_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_840_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7939_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_840_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_840_output.getInt32(i, 1);
                int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_840_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_840_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_7939_output.setInt32(r, 1, _ws_sales_price750);
                tbl_JOIN_INNER_TD_7939_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city60_n);
                tbl_JOIN_INNER_TD_7939_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_zip63_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7939_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7939_output #Row: " << tbl_JOIN_INNER_TD_7939_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6764(Table &tbl_SerializeFromObject_TD_7319_input, Table &tbl_Filter_TD_6764_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(i_item_sk#5102 IN (2,3,5,7,11,13,17,19,23,29))
    // Input: ListBuffer(i_item_id#5103, i_item_sk#5102)
    // Output: ListBuffer(i_item_id#5103)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7319_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk5102 = tbl_SerializeFromObject_TD_7319_input.getInt32(i, 1);
        auto reuse_col_str_421 = _i_item_sk5102;
        if ((reuse_col_str_421 == 2) || (reuse_col_str_421 == 3) || (reuse_col_str_421 == 5) || (reuse_col_str_421 == 7) || (reuse_col_str_421 == 11) || (reuse_col_str_421 == 13) || (reuse_col_str_421 == 17) || (reuse_col_str_421 == 19) || (reuse_col_str_421 == 23) || (reuse_col_str_421 == 29) || (0)) {
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id5103_t = tbl_SerializeFromObject_TD_7319_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6764_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_item_id5103_t);
            r++;
        }
    }
    tbl_Filter_TD_6764_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6764_output #Row: " << tbl_Filter_TD_6764_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6244_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_6244_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6244_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6244_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_6244_payload_leftMajor {
    int32_t _ws_item_sk732;
    int32_t _ws_sales_price750;
    std::string _ca_city60;
    std::string _ca_zip63;
};
struct SW_JOIN_INNER_TD_6244_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_6244_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6244_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6244_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_6244_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_id229;
};
void SW_JOIN_INNER_TD_6244(Table &tbl_JOIN_INNER_TD_7939_output, Table &tbl_Filter_TD_7807_output, Table &tbl_JOIN_INNER_TD_6244_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#228))
    // Left Table: ListBuffer(ws_item_sk#732, ws_sales_price#750, ca_city#60, ca_zip#63)
    // Right Table: ListBuffer(i_item_sk#228, i_item_id#229)
    // Output Table: ListBuffer(ws_sales_price#750, ca_city#60, ca_zip#63, i_item_id#229)
    int left_nrow = tbl_JOIN_INNER_TD_7939_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7807_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6244_key_leftMajor, SW_JOIN_INNER_TD_6244_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7939_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6244_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_7939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_7939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_zip63 = std::string(_ca_zip63_n.data());
            SW_JOIN_INNER_TD_6244_payload_leftMajor payloadA{_ws_item_sk732, _ws_sales_price750, _ca_city60, _ca_zip63};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7807_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_7807_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6244_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                std::string _ca_zip63 = (it->second)._ca_zip63;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n{};
                memcpy(_ca_zip63_n.data(), (_ca_zip63).data(), (_ca_zip63).length());
                int32_t _i_item_sk228 = tbl_Filter_TD_7807_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_7807_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_id229 = std::string(_i_item_id229_n.data());
                tbl_JOIN_INNER_TD_6244_output.setInt32(r, 0, _ws_sales_price750);
                tbl_JOIN_INNER_TD_6244_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60_n);
                tbl_JOIN_INNER_TD_6244_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_zip63_n);
                tbl_JOIN_INNER_TD_6244_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_id229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6244_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6244_key_rightMajor, SW_JOIN_INNER_TD_6244_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7807_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_7807_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6244_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_7807_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n = tbl_Filter_TD_7807_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_id229 = std::string(_i_item_id229_n.data());
            SW_JOIN_INNER_TD_6244_payload_rightMajor payloadA{_i_item_sk228, _i_item_id229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7939_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6244_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_id229 = (it->second)._i_item_id229;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_n{};
                memcpy(_i_item_id229_n.data(), (_i_item_id229).data(), (_i_item_id229).length());
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 0);
                int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_7939_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_JOIN_INNER_TD_7939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_JOIN_INNER_TD_7939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_zip63 = std::string(_ca_zip63_n.data());
                tbl_JOIN_INNER_TD_6244_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _i_item_id229_n);
                tbl_JOIN_INNER_TD_6244_output.setInt32(r, 0, _ws_sales_price750);
                tbl_JOIN_INNER_TD_6244_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60_n);
                tbl_JOIN_INNER_TD_6244_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_zip63_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6244_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6244_output #Row: " << tbl_JOIN_INNER_TD_6244_output.getNumRow() << std::endl;
}

struct SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_leftMajor {
    std::string _i_item_id229;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_leftMajor& other) const {
        return ((_i_item_id229 == other._i_item_id229));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id229));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_payload_leftMajor {
    int32_t _ws_sales_price750;
    std::string _ca_city60;
    std::string _ca_zip63;
    std::string _i_item_id229;
};
struct SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_rightMajor {
    std::string _i_item_id5103;
    bool operator==(const SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_rightMajor& other) const {
        return ((_i_item_id5103 == other._i_item_id5103));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_item_id5103));
    }
};
}
struct SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_payload_rightMajor {
    std::string _i_item_id5103;
};
void SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499(Table &tbl_JOIN_INNER_TD_6244_output, Table &tbl_Filter_TD_6764_output, Table &tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_EXISTENCEJOIN(EXISTS#5157)
    // Operation: ListBuffer((i_item_id#229 = i_item_id#5103))
    // Left Table: ListBuffer(ws_sales_price#750, ca_city#60, ca_zip#63, i_item_id#229)
    // Right Table: ListBuffer(i_item_id#5103)
    // Output Table: ListBuffer(ws_sales_price#750, ca_city#60, ca_zip#63, exists#5157)
    int left_nrow = tbl_JOIN_INNER_TD_6244_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6764_output.getNumRow();
    std::unordered_map<SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_rightMajor, SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_payload_rightMajor> ht1;
    int nrow1 = tbl_Filter_TD_6764_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_6244_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id5103_k_n = tbl_Filter_TD_6764_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::string _i_item_id5103_k = std::string(_i_item_id5103_k_n.data());
        SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_rightMajor keyA{_i_item_id5103_k};
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id5103_n = tbl_Filter_TD_6764_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::string _i_item_id5103 = std::string(_i_item_id5103_n.data());
        SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_payload_rightMajor payloadA{_i_item_id5103};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_item_id229_k_n = tbl_JOIN_INNER_TD_6244_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::string _i_item_id229_k = std::string(_i_item_id229_k_n.data());
        auto it = ht1.find(SW_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_key_rightMajor{_i_item_id229_k});
        if (it != ht1.end()) {
            int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_6244_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_JOIN_INNER_TD_6244_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_JOIN_INNER_TD_6244_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_id229 = tbl_JOIN_INNER_TD_6244_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.setInt32(r, 0, _ws_sales_price750);
            tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60);
            tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_zip63);
            tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.setInt32(r, 3, 1);
            r++;
        }
    }
    tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.setNumRow(r);
    std::cout << "tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output #Row: " << tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4716(Table &tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output, Table &tbl_Filter_TD_4716_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((substr(ca_zip#63, 1, 5) IN (85669,86197,88274,83405,86475,85392,85460,80348,81792) OR exists#5157))
    // Input: ListBuffer(ws_sales_price#750, ca_city#60, ca_zip#63, exists#5157)
    // Output: ListBuffer(ws_sales_price#750, ca_city#60, ca_zip#63)
    int r = 0;
    int nrow1 = tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _exists5157 = tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.getInt32(i, 3);
        auto reuse_col_str_909 = std::string(_ca_zip63.data()).substr(0, 5);
        if (((reuse_col_str_909 == "85669") || (reuse_col_str_909 == "86197") || (reuse_col_str_909 == "88274") || (reuse_col_str_909 == "83405") || (reuse_col_str_909 == "86475") || (reuse_col_str_909 == "85392") || (reuse_col_str_909 == "85460") || (reuse_col_str_909 == "80348") || (reuse_col_str_909 == "81792") || (0)) || _exists5157) {
            int32_t _ws_sales_price750_t = tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.getInt32(i, 0);
            tbl_Filter_TD_4716_output.setInt32(r, 0, _ws_sales_price750_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_t = tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_4716_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_t = tbl_JOIN_EXISTENCEJOINEXISTS5157_TD_5499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_4716_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_zip63_t);
            r++;
        }
    }
    tbl_Filter_TD_4716_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4716_output #Row: " << tbl_Filter_TD_4716_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3384_key {
    std::string _ca_zip63;
    std::string _ca_city60;
    bool operator==(const SW_Aggregate_TD_3384_key& other) const { return (_ca_zip63 == other._ca_zip63) && (_ca_city60 == other._ca_city60); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3384_key> {
    std::size_t operator() (const SW_Aggregate_TD_3384_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_zip63)) + (hash<string>()(k._ca_city60));
    }
};
}
struct SW_Aggregate_TD_3384_payload {
    int32_t _sumws_sales_price5125_sum_0;
};
void SW_Aggregate_TD_3384(Table &tbl_Filter_TD_4716_output, Table &tbl_Aggregate_TD_3384_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_zip#63, ca_city#60, MakeDecimal(sum(UnscaledValue(ws_sales_price#750)),17,2) AS sum(ws_sales_price)#5125)
    // Input: ListBuffer(ws_sales_price#750, ca_city#60, ca_zip#63)
    // Output: ListBuffer(ca_zip#63, ca_city#60, sum(ws_sales_price)#5125)
    std::unordered_map<SW_Aggregate_TD_3384_key, SW_Aggregate_TD_3384_payload> ht1;
    int nrow1 = tbl_Filter_TD_4716_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sales_price750 = tbl_Filter_TD_4716_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_Filter_TD_4716_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_Filter_TD_4716_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_3384_key k{std::string(_ca_zip63.data()), std::string(_ca_city60.data())};
        int64_t _sumws_sales_price5125_sum_0 = _ws_sales_price750;
        SW_Aggregate_TD_3384_payload p{_sumws_sales_price5125_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sumws_sales_price5125_sum_0 + _sumws_sales_price5125_sum_0;
            p._sumws_sales_price5125_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63{};
        memcpy(_ca_zip63.data(), ((it.first)._ca_zip63).data(), ((it.first)._ca_zip63).length());
        tbl_Aggregate_TD_3384_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip63);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60{};
        memcpy(_ca_city60.data(), ((it.first)._ca_city60).data(), ((it.first)._ca_city60).length());
        tbl_Aggregate_TD_3384_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60);
        int32_t _sumws_sales_price5125 = (it.second)._sumws_sales_price5125_sum_0;
        tbl_Aggregate_TD_3384_output.setInt32(r, 2, _sumws_sales_price5125);
        ++r;
    }
    tbl_Aggregate_TD_3384_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3384_output #Row: " << tbl_Aggregate_TD_3384_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2813(Table &tbl_Aggregate_TD_3384_output, Table &tbl_Sort_TD_2813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ca_zip#63 ASC NULLS FIRST, ca_city#60 ASC NULLS FIRST)
    // Input: ListBuffer(ca_zip#63, ca_city#60, sum(ws_sales_price)#5125)
    // Output: ListBuffer(ca_zip#63, ca_city#60, sum(ws_sales_price)#5125)
    struct SW_Sort_TD_2813Row {
        std::string _ca_zip63;
        std::string _ca_city60;
        int32_t _sumws_sales_price5125;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2813Row& a, const SW_Sort_TD_2813Row& b) const { return 
 (a._ca_zip63 < b._ca_zip63) || 
 ((a._ca_zip63 == b._ca_zip63) && (a._ca_city60 < b._ca_city60)); 
}
    }SW_Sort_TD_2813_order; 

    int nrow1 = tbl_Aggregate_TD_3384_output.getNumRow();
    std::vector<SW_Sort_TD_2813Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_Aggregate_TD_3384_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_Aggregate_TD_3384_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _sumws_sales_price5125 = tbl_Aggregate_TD_3384_output.getInt32(i, 2);
        SW_Sort_TD_2813Row t = {std::string(_ca_zip63.data()),std::string(_ca_city60.data()),_sumws_sales_price5125};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2813_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63{};
        memcpy(_ca_zip63.data(), (it._ca_zip63).data(), (it._ca_zip63).length());
        tbl_Sort_TD_2813_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _ca_zip63);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60{};
        memcpy(_ca_city60.data(), (it._ca_city60).data(), (it._ca_city60).length());
        tbl_Sort_TD_2813_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _ca_city60);
        tbl_Sort_TD_2813_output.setInt32(r, 2, it._sumws_sales_price5125);
        ++r;
    }
    tbl_Sort_TD_2813_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2813_output #Row: " << tbl_Sort_TD_2813_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1554(Table &tbl_Sort_TD_2813_output, Table &tbl_LocalLimit_TD_1554_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(ca_zip#63, ca_city#60, sum(ws_sales_price)#5125)
    // Output: ListBuffer(ca_zip#63, ca_city#60, sum(ws_sales_price)#5125)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_Sort_TD_2813_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1554_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip63_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Sort_TD_2813_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1554_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60_n);
        tbl_LocalLimit_TD_1554_output.setInt32(r, 2, tbl_Sort_TD_2813_output.getInt32(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1554_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1554_output #Row: " << tbl_LocalLimit_TD_1554_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0964(Table &tbl_LocalLimit_TD_1554_output, Table &tbl_GlobalLimit_TD_0964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(ca_zip#63, ca_city#60, sum(ws_sales_price)#5125)
    // Output: ListBuffer(ca_zip#63, ca_city#60, sum(ws_sales_price)#5125)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_n = tbl_LocalLimit_TD_1554_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0964_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip63_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_LocalLimit_TD_1554_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0964_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60_n);
        tbl_GlobalLimit_TD_0964_output.setInt32(r, 2, tbl_LocalLimit_TD_1554_output.getInt32(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0964_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0964_output #Row: " << tbl_GlobalLimit_TD_0964_output.getNumRow() << std::endl;
}

