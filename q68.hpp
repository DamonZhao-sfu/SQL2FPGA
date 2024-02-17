#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_1037(Table &tbl_SerializeFromObject_TD_11644_input, Table &tbl_Filter_TD_1037_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_dom#129) AND (((d_dom#129 >= 1) AND (d_dom#129 <= 2)) AND d_year#126 IN (1999,2000,2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_dom#129, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11644_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_dom129 = tbl_SerializeFromObject_TD_11644_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_11644_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11644_input.getInt32(i, 0);
        auto reuse_col_str_172 = _d_year126;
        if (((_d_dom129!= 0) && (((_d_dom129 >= 1) && (_d_dom129 <= 2)) && ((reuse_col_str_172 == 1999) || (reuse_col_str_172 == 2000) || (reuse_col_str_172 == 2001) || (0)))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11644_input.getInt32(i, 0);
            tbl_Filter_TD_1037_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_1037_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1037_output #Row: " << tbl_Filter_TD_1037_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10356(Table &tbl_SerializeFromObject_TD_11988_input, Table &tbl_Filter_TD_10356_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)) AND ((isnotnull(ss_hdemo_sk#1211) AND isnotnull(ss_addr_sk#1212)) AND isnotnull(ss_customer_sk#1209))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11988_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 4);
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 2);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 3);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 1);
        if (((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) && (((_ss_hdemo_sk1211!= 0) && (_ss_addr_sk1212!= 0)) && (_ss_customer_sk1209!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 0);
            tbl_Filter_TD_10356_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 1);
            tbl_Filter_TD_10356_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 2);
            tbl_Filter_TD_10356_output.setInt32(r, 2, _ss_hdemo_sk1211_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 3);
            tbl_Filter_TD_10356_output.setInt32(r, 3, _ss_addr_sk1212_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 4);
            tbl_Filter_TD_10356_output.setInt32(r, 4, _ss_store_sk1213_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_11988_input.getInt64(i, 5);
            tbl_Filter_TD_10356_output.setInt64(r, 5, _ss_ticket_number1215L_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 6);
            tbl_Filter_TD_10356_output.setInt32(r, 6, _ss_ext_sales_price1221_t);
            int32_t _ss_ext_list_price1223_t = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 7);
            tbl_Filter_TD_10356_output.setInt32(r, 7, _ss_ext_list_price1223_t);
            int32_t _ss_ext_tax1224_t = tbl_SerializeFromObject_TD_11988_input.getInt32(i, 8);
            tbl_Filter_TD_10356_output.setInt32(r, 8, _ss_ext_tax1224_t);
            r++;
        }
    }
    tbl_Filter_TD_10356_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10356_output #Row: " << tbl_Filter_TD_10356_output.getNumRow() << std::endl;
}

void SW_Filter_TD_922(Table &tbl_SerializeFromObject_TD_10705_input, Table &tbl_Filter_TD_922_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((s_city#400 IN (Midway,Fairview) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_city#400)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10705_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_city400 = tbl_SerializeFromObject_TD_10705_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_10705_input.getInt32(i, 0);
        auto reuse_col_str_962 = std::string(_s_city400.data());
        if (((reuse_col_str_962 == "Midway") || (reuse_col_str_962 == "Fairview") || (0)) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_10705_input.getInt32(i, 0);
            tbl_Filter_TD_922_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_922_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_922_output #Row: " << tbl_Filter_TD_922_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9775_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_9775_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9775_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9775_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_9775_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_ext_list_price1223;
    int32_t _ss_ext_tax1224;
};
struct SW_JOIN_INNER_TD_9775_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_9775_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9775_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9775_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_9775_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_9775(Table &tbl_Filter_TD_10356_output, Table &tbl_Filter_TD_1037_output, Table &tbl_JOIN_INNER_TD_9775_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    int left_nrow = tbl_Filter_TD_10356_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1037_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9775_key_leftMajor, SW_JOIN_INNER_TD_9775_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10356_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10356_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9775_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10356_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_10356_output.getInt32(i, 1);
            int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_10356_output.getInt32(i, 2);
            int32_t _ss_addr_sk1212 = tbl_Filter_TD_10356_output.getInt32(i, 3);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_10356_output.getInt32(i, 4);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_10356_output.getInt64(i, 5);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_10356_output.getInt32(i, 6);
            int32_t _ss_ext_list_price1223 = tbl_Filter_TD_10356_output.getInt32(i, 7);
            int32_t _ss_ext_tax1224 = tbl_Filter_TD_10356_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_9775_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_ticket_number1215L, _ss_ext_sales_price1221, _ss_ext_list_price1223, _ss_ext_tax1224};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1037_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_1037_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9775_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _ss_ext_tax1224 = (it->second)._ss_ext_tax1224;
                int32_t _d_date_sk120 = tbl_Filter_TD_1037_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9775_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 5, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 6, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 7, _ss_ext_tax1224);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9775_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9775_key_rightMajor, SW_JOIN_INNER_TD_9775_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1037_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_1037_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9775_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_1037_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9775_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10356_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10356_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9775_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10356_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_10356_output.getInt32(i, 1);
                int32_t _ss_hdemo_sk1211 = tbl_Filter_TD_10356_output.getInt32(i, 2);
                int32_t _ss_addr_sk1212 = tbl_Filter_TD_10356_output.getInt32(i, 3);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_10356_output.getInt32(i, 4);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_10356_output.getInt64(i, 5);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_10356_output.getInt32(i, 6);
                int32_t _ss_ext_list_price1223 = tbl_Filter_TD_10356_output.getInt32(i, 7);
                int32_t _ss_ext_tax1224 = tbl_Filter_TD_10356_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 3, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_9775_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 5, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 6, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_9775_output.setInt32(r, 7, _ss_ext_tax1224);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9775_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9775_output #Row: " << tbl_JOIN_INNER_TD_9775_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8237(Table &tbl_SerializeFromObject_TD_971_input, Table &tbl_Filter_TD_8237_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((hd_dep_count#207 = 4) OR (hd_vehicle_count#208 = 3)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207, hd_vehicle_count#208)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_971_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_971_input.getInt32(i, 1);
        int32_t _hd_vehicle_count208 = tbl_SerializeFromObject_TD_971_input.getInt32(i, 2);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_971_input.getInt32(i, 0);
        if (((_hd_dep_count207 == 4) || (_hd_vehicle_count208 == 3)) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_971_input.getInt32(i, 0);
            tbl_Filter_TD_8237_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_8237_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8237_output #Row: " << tbl_Filter_TD_8237_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8602_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_8602_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8602_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8602_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_8602_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int32_t _ss_store_sk1213;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_ext_list_price1223;
    int32_t _ss_ext_tax1224;
};
struct SW_JOIN_INNER_TD_8602_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_8602_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8602_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8602_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_8602_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_8602(Table &tbl_JOIN_INNER_TD_9775_output, Table &tbl_Filter_TD_922_output, Table &tbl_JOIN_INNER_TD_8602_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    int left_nrow = tbl_JOIN_INNER_TD_9775_output.getNumRow();
    int right_nrow = tbl_Filter_TD_922_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8602_key_leftMajor, SW_JOIN_INNER_TD_8602_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9775_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8602_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 3);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_9775_output.getInt64(i, 4);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 5);
            int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 6);
            int32_t _ss_ext_tax1224 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8602_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_store_sk1213, _ss_ticket_number1215L, _ss_ext_sales_price1221, _ss_ext_list_price1223, _ss_ext_tax1224};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_922_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_922_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8602_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _ss_ext_tax1224 = (it->second)._ss_ext_tax1224;
                int32_t _s_store_sk378 = tbl_Filter_TD_922_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8602_output.setInt64(r, 3, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 5, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 6, _ss_ext_tax1224);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8602_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8602_key_rightMajor, SW_JOIN_INNER_TD_8602_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_922_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_922_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8602_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_922_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8602_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9775_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8602_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 3);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_9775_output.getInt64(i, 4);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 5);
                int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 6);
                int32_t _ss_ext_tax1224 = tbl_JOIN_INNER_TD_9775_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 1, _ss_hdemo_sk1211);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 2, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_8602_output.setInt64(r, 3, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 5, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_8602_output.setInt32(r, 6, _ss_ext_tax1224);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8602_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8602_output #Row: " << tbl_JOIN_INNER_TD_8602_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7155(Table &tbl_SerializeFromObject_TD_8485_input, Table &tbl_Filter_TD_7155_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_city#60)))
    // Input: ListBuffer(ca_address_sk#54, ca_city#60)
    // Output: ListBuffer(ca_address_sk#54, ca_city#60)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8485_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_8485_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_SerializeFromObject_TD_8485_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && （std::string(_isnotnullca_city60.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_8485_input.getInt32(i, 0);
            tbl_Filter_TD_7155_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_t = tbl_SerializeFromObject_TD_8485_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7155_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city60_t);
            r++;
        }
    }
    tbl_Filter_TD_7155_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7155_output #Row: " << tbl_Filter_TD_7155_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7866_key_leftMajor {
    int32_t _ss_hdemo_sk1211;
    bool operator==(const SW_JOIN_INNER_TD_7866_key_leftMajor& other) const {
        return ((_ss_hdemo_sk1211 == other._ss_hdemo_sk1211));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7866_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7866_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_hdemo_sk1211));
    }
};
}
struct SW_JOIN_INNER_TD_7866_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_hdemo_sk1211;
    int32_t _ss_addr_sk1212;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_ext_list_price1223;
    int32_t _ss_ext_tax1224;
};
struct SW_JOIN_INNER_TD_7866_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_7866_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7866_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7866_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_7866_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_7866(Table &tbl_JOIN_INNER_TD_8602_output, Table &tbl_Filter_TD_8237_output, Table &tbl_JOIN_INNER_TD_7866_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_hdemo_sk#1211 = hd_demo_sk#204))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    int left_nrow = tbl_JOIN_INNER_TD_8602_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8237_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7866_key_leftMajor, SW_JOIN_INNER_TD_7866_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8602_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7866_key_leftMajor keyA{_ss_hdemo_sk1211_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 0);
            int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 1);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 2);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_8602_output.getInt64(i, 3);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 4);
            int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 5);
            int32_t _ss_ext_tax1224 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_7866_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_hdemo_sk1211, _ss_addr_sk1212, _ss_ticket_number1215L, _ss_ext_sales_price1221, _ss_ext_list_price1223, _ss_ext_tax1224};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8237_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_8237_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7866_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_hdemo_sk1211 = (it->second)._ss_hdemo_sk1211;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _ss_ext_tax1224 = (it->second)._ss_ext_tax1224;
                int32_t _hd_demo_sk204 = tbl_Filter_TD_8237_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_7866_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 4, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 5, _ss_ext_tax1224);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7866_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7866_key_rightMajor, SW_JOIN_INNER_TD_7866_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8237_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_8237_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7866_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_8237_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7866_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8602_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_hdemo_sk1211_k = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7866_key_rightMajor{_ss_hdemo_sk1211_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 0);
                int32_t _ss_hdemo_sk1211 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 1);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 2);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_8602_output.getInt64(i, 3);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 4);
                int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 5);
                int32_t _ss_ext_tax1224 = tbl_JOIN_INNER_TD_8602_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_7866_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 4, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_7866_output.setInt32(r, 5, _ss_ext_tax1224);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7866_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7866_output #Row: " << tbl_JOIN_INNER_TD_7866_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6913_key_leftMajor {
    int32_t _ss_addr_sk1212;
    bool operator==(const SW_JOIN_INNER_TD_6913_key_leftMajor& other) const {
        return ((_ss_addr_sk1212 == other._ss_addr_sk1212));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6913_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6913_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk1212));
    }
};
}
struct SW_JOIN_INNER_TD_6913_payload_leftMajor {
    int32_t _ss_customer_sk1209;
    int32_t _ss_addr_sk1212;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_ext_list_price1223;
    int32_t _ss_ext_tax1224;
};
struct SW_JOIN_INNER_TD_6913_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_6913_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6913_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6913_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_6913_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_city60;
};
void SW_JOIN_INNER_TD_6913(Table &tbl_JOIN_INNER_TD_7866_output, Table &tbl_Filter_TD_7155_output, Table &tbl_JOIN_INNER_TD_6913_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#1212 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224)
    // Right Table: ListBuffer(ca_address_sk#54, ca_city#60)
    // Output Table: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224, ca_city#60)
    int left_nrow = tbl_JOIN_INNER_TD_7866_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7155_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6913_key_leftMajor, SW_JOIN_INNER_TD_6913_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7866_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6913_key_leftMajor keyA{_ss_addr_sk1212_k};
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 0);
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_7866_output.getInt64(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 3);
            int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 4);
            int32_t _ss_ext_tax1224 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_6913_payload_leftMajor payloadA{_ss_customer_sk1209, _ss_addr_sk1212, _ss_ticket_number1215L, _ss_ext_sales_price1221, _ss_ext_list_price1223, _ss_ext_tax1224};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7155_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7155_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6913_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _ss_ext_tax1224 = (it->second)._ss_ext_tax1224;
                int32_t _ca_address_sk54 = tbl_Filter_TD_7155_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Filter_TD_7155_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_city60 = std::string(_ca_city60_n.data());
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_6913_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 4, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 5, _ss_ext_tax1224);
                tbl_JOIN_INNER_TD_6913_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_city60_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6913_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6913_key_rightMajor, SW_JOIN_INNER_TD_6913_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7155_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7155_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6913_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_7155_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n = tbl_Filter_TD_7155_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city60 = std::string(_ca_city60_n.data());
            SW_JOIN_INNER_TD_6913_payload_rightMajor payloadA{_ca_address_sk54, _ca_city60};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7866_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6913_key_rightMajor{_ss_addr_sk1212_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_city60 = (it->second)._ca_city60;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city60_n{};
                memcpy(_ca_city60_n.data(), (_ca_city60).data(), (_ca_city60).length());
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 0);
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 1);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_7866_output.getInt64(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 3);
                int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 4);
                int32_t _ss_ext_tax1224 = tbl_JOIN_INNER_TD_7866_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_6913_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ca_city60_n);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 0, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 1, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_6913_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 4, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_6913_output.setInt32(r, 5, _ss_ext_tax1224);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6913_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6913_output #Row: " << tbl_JOIN_INNER_TD_6913_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5231(Table &tbl_SerializeFromObject_TD_6776_input, Table &tbl_Filter_TD_5231_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6776_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_6776_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_6776_input.getInt32(i, 1);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_6776_input.getInt32(i, 0);
            tbl_Filter_TD_5231_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_6776_input.getInt32(i, 1);
            tbl_Filter_TD_5231_output.setInt32(r, 1, _c_current_addr_sk4_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_6776_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_5231_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_6776_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_5231_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_5231_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5231_output #Row: " << tbl_Filter_TD_5231_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5655_key {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_customer_sk1209;
    int32_t _ss_addr_sk1212;
    std::string _ca_city60;
    bool operator==(const SW_Aggregate_TD_5655_key& other) const { return (_ss_ticket_number1215L == other._ss_ticket_number1215L) && (_ss_customer_sk1209 == other._ss_customer_sk1209) && (_ss_addr_sk1212 == other._ss_addr_sk1212) && (_ca_city60 == other._ca_city60); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5655_key> {
    std::size_t operator() (const SW_Aggregate_TD_5655_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ss_ticket_number1215L)) + (hash<int32_t>()(k._ss_customer_sk1209)) + (hash<int32_t>()(k._ss_addr_sk1212)) + (hash<string>()(k._ca_city60));
    }
};
}
struct SW_Aggregate_TD_5655_payload {
    std::string _bought_city10433;
    int32_t _extended_price10434_sum_0;
    int32_t _list_price10435_sum_1;
    int32_t _extended_tax10436_sum_2;
};
void SW_Aggregate_TD_5655(Table &tbl_JOIN_INNER_TD_6913_output, Table &tbl_Aggregate_TD_5655_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, ss_addr_sk#1212, ca_city#60, ca_city#60 AS bought_city#10433, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS extended_price#10434, MakeDecimal(sum(UnscaledValue(ss_ext_list_price#1223)),17,2) AS list_price#10435, MakeDecimal(sum(UnscaledValue(ss_ext_tax#1224)),17,2) AS extended_tax#10436)
    // Input: ListBuffer(ss_customer_sk#1209, ss_addr_sk#1212, ss_ticket_number#1215L, ss_ext_sales_price#1221, ss_ext_list_price#1223, ss_ext_tax#1224, ca_city#60)
    // Output: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, bought_city#10433, extended_price#10434, list_price#10435, extended_tax#10436)
    std::unordered_map<SW_Aggregate_TD_5655_key, SW_Aggregate_TD_5655_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6913_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6913_output.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_6913_output.getInt32(i, 1);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_6913_output.getInt64(i, 2);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6913_output.getInt32(i, 3);
        int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_6913_output.getInt32(i, 4);
        int32_t _ss_ext_tax1224 = tbl_JOIN_INNER_TD_6913_output.getInt32(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city60 = tbl_JOIN_INNER_TD_6913_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        SW_Aggregate_TD_5655_key k{_ss_ticket_number1215L, _ss_customer_sk1209, _ss_addr_sk1212, std::string(_ca_city60.data())};
        std::array<char, TPCDS_READ_MAX + 1> _bought_city10433 = _ca_city60;
        int64_t _extended_price10434_sum_0 = _ss_ext_sales_price1221;
        int64_t _list_price10435_sum_1 = _ss_ext_list_price1223;
        int64_t _extended_tax10436_sum_2 = _ss_ext_tax1224;
        SW_Aggregate_TD_5655_payload p{std::string(_bought_city10433.data()), _extended_price10434_sum_0, _list_price10435_sum_1, _extended_tax10436_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._extended_price10434_sum_0 + _extended_price10434_sum_0;
            p._extended_price10434_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._list_price10435_sum_1 + _list_price10435_sum_1;
            p._list_price10435_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._extended_tax10436_sum_2 + _extended_tax10436_sum_2;
            p._extended_tax10436_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5655_output.setInt64(r, 0, (it.first)._ss_ticket_number1215L);
        tbl_Aggregate_TD_5655_output.setInt32(r, 1, (it.first)._ss_customer_sk1209);
        // _ss_addr_sk1212 not required in the output table
        // _ca_city60 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n{};
        memcpy(_bought_city10433_n.data(), (it.second)._bought_city10433.data(), (it.second)._bought_city10433.length());
        tbl_Aggregate_TD_5655_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _bought_city10433_n);
        int32_t _extended_price10434 = (it.second)._extended_price10434_sum_0;
        tbl_Aggregate_TD_5655_output.setInt32(r, 3, _extended_price10434);
        int32_t _list_price10435 = (it.second)._list_price10435_sum_1;
        tbl_Aggregate_TD_5655_output.setInt32(r, 4, _list_price10435);
        int32_t _extended_tax10436 = (it.second)._extended_tax10436_sum_2;
        tbl_Aggregate_TD_5655_output.setInt32(r, 5, _extended_tax10436);
        ++r;
    }
    tbl_Aggregate_TD_5655_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5655_output #Row: " << tbl_Aggregate_TD_5655_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4747(Table &tbl_SerializeFromObject_TD_5310_input, Table &tbl_Filter_TD_4747_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#10437) AND isnotnull(ca_city#10443)))
    // Input: ListBuffer(ca_address_sk#10437, ca_city#10443)
    // Output: ListBuffer(ca_address_sk#10437, ca_city#10443)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5310_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk10437 = tbl_SerializeFromObject_TD_5310_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city10443 = tbl_SerializeFromObject_TD_5310_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk10437!= 0) && （std::string(_isnotnullca_city10443.data()) != "NULL")) {
            int32_t _ca_address_sk10437_t = tbl_SerializeFromObject_TD_5310_input.getInt32(i, 0);
            tbl_Filter_TD_4747_output.setInt32(r, 0, _ca_address_sk10437_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city10443_t = tbl_SerializeFromObject_TD_5310_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_4747_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_city10443_t);
            r++;
        }
    }
    tbl_Filter_TD_4747_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4747_output #Row: " << tbl_Filter_TD_4747_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4103_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_4103_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4103_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4103_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_4103_payload_leftMajor {
    int64_t _ss_ticket_number1215L;
    int32_t _ss_customer_sk1209;
    std::string _bought_city10433;
    int32_t _extended_price10434;
    int32_t _list_price10435;
    int32_t _extended_tax10436;
};
struct SW_JOIN_INNER_TD_4103_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_4103_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4103_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4103_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_4103_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
void SW_JOIN_INNER_TD_4103(Table &tbl_Aggregate_TD_5655_output, Table &tbl_Filter_TD_5231_output, Table &tbl_JOIN_INNER_TD_4103_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_ticket_number#1215L, ss_customer_sk#1209, bought_city#10433, extended_price#10434, list_price#10435, extended_tax#10436)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    // Output Table: ListBuffer(ss_ticket_number#1215L, bought_city#10433, extended_price#10434, list_price#10435, extended_tax#10436, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    int left_nrow = tbl_Aggregate_TD_5655_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5231_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4103_key_leftMajor, SW_JOIN_INNER_TD_4103_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5655_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Aggregate_TD_5655_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4103_key_leftMajor keyA{_ss_customer_sk1209_k};
            int64_t _ss_ticket_number1215L = tbl_Aggregate_TD_5655_output.getInt64(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_5655_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n = tbl_Aggregate_TD_5655_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _bought_city10433 = std::string(_bought_city10433_n.data());
            int32_t _extended_price10434 = tbl_Aggregate_TD_5655_output.getInt32(i, 3);
            int32_t _list_price10435 = tbl_Aggregate_TD_5655_output.getInt32(i, 4);
            int32_t _extended_tax10436 = tbl_Aggregate_TD_5655_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_4103_payload_leftMajor payloadA{_ss_ticket_number1215L, _ss_customer_sk1209, _bought_city10433, _extended_price10434, _list_price10435, _extended_tax10436};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5231_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5231_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4103_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                std::string _bought_city10433 = (it->second)._bought_city10433;
                std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n{};
                memcpy(_bought_city10433_n.data(), (_bought_city10433).data(), (_bought_city10433).length());
                int32_t _extended_price10434 = (it->second)._extended_price10434;
                int32_t _list_price10435 = (it->second)._list_price10435;
                int32_t _extended_tax10436 = (it->second)._extended_tax10436;
                int32_t _c_customer_sk0 = tbl_Filter_TD_5231_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_5231_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5231_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5231_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_4103_output.setInt64(r, 0, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_4103_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _bought_city10433_n);
                tbl_JOIN_INNER_TD_4103_output.setInt32(r, 2, _extended_price10434);
                tbl_JOIN_INNER_TD_4103_output.setInt32(r, 3, _list_price10435);
                tbl_JOIN_INNER_TD_4103_output.setInt32(r, 4, _extended_tax10436);
                tbl_JOIN_INNER_TD_4103_output.setInt32(r, 5, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_4103_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4103_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4103_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4103_key_rightMajor, SW_JOIN_INNER_TD_4103_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5231_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_5231_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4103_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_5231_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_5231_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_5231_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_5231_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_4103_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5655_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Aggregate_TD_5655_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4103_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int64_t _ss_ticket_number1215L = tbl_Aggregate_TD_5655_output.getInt64(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Aggregate_TD_5655_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n = tbl_Aggregate_TD_5655_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _bought_city10433 = std::string(_bought_city10433_n.data());
                int32_t _extended_price10434 = tbl_Aggregate_TD_5655_output.getInt32(i, 3);
                int32_t _list_price10435 = tbl_Aggregate_TD_5655_output.getInt32(i, 4);
                int32_t _extended_tax10436 = tbl_Aggregate_TD_5655_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_4103_output.setInt32(r, 5, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_4103_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_first_name8_n);
                tbl_JOIN_INNER_TD_4103_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_last_name9_n);
                tbl_JOIN_INNER_TD_4103_output.setInt64(r, 0, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_4103_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _bought_city10433_n);
                tbl_JOIN_INNER_TD_4103_output.setInt32(r, 2, _extended_price10434);
                tbl_JOIN_INNER_TD_4103_output.setInt32(r, 3, _list_price10435);
                tbl_JOIN_INNER_TD_4103_output.setInt32(r, 4, _extended_tax10436);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4103_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4103_output #Row: " << tbl_JOIN_INNER_TD_4103_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3869_key_leftMajor {
    int32_t _c_current_addr_sk4;
    std::string _bought_city10433;
    bool operator==(const SW_JOIN_INNER_TD_3869_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4) && (_bought_city10433 == other._bought_city10433));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3869_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3869_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_3869_payload_leftMajor {
    int64_t _ss_ticket_number1215L;
    std::string _bought_city10433;
    int32_t _extended_price10434;
    int32_t _list_price10435;
    int32_t _extended_tax10436;
    int32_t _c_current_addr_sk4;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
struct SW_JOIN_INNER_TD_3869_key_rightMajor {
    int32_t _ca_address_sk10437;
    std::string _ca_city10443;
    bool operator==(const SW_JOIN_INNER_TD_3869_key_rightMajor& other) const {
        return ((_ca_address_sk10437 == other._ca_address_sk10437) && (_ca_city10443 == other._ca_city10443));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3869_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3869_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk10437));
    }
};
}
struct SW_JOIN_INNER_TD_3869_payload_rightMajor {
    int32_t _ca_address_sk10437;
    std::string _ca_city10443;
};
void SW_JOIN_INNER_TD_3869(Table &tbl_JOIN_INNER_TD_4103_output, Table &tbl_Filter_TD_4747_output, Table &tbl_JOIN_INNER_TD_3869_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((c_current_addr_sk#4 = ca_address_sk#10437) AND NOT (ca_city#10443 = bought_city#10433)))
    // Left Table: ListBuffer(ss_ticket_number#1215L, bought_city#10433, extended_price#10434, list_price#10435, extended_tax#10436, c_current_addr_sk#4, c_first_name#8, c_last_name#9)
    // Right Table: ListBuffer(ca_address_sk#10437, ca_city#10443)
    // Output Table: ListBuffer(c_last_name#9, c_first_name#8, ca_city#10443, bought_city#10433, ss_ticket_number#1215L, extended_price#10434, extended_tax#10436, list_price#10435)
    int left_nrow = tbl_JOIN_INNER_TD_4103_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4747_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3869_key_leftMajor, SW_JOIN_INNER_TD_3869_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4103_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_k_n = tbl_JOIN_INNER_TD_4103_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _bought_city10433_k = std::string(_bought_city10433_k_n.data());
            SW_JOIN_INNER_TD_3869_key_leftMajor keyA{_c_current_addr_sk4_k, _bought_city10433_k};
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_4103_output.getInt64(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n = tbl_JOIN_INNER_TD_4103_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _bought_city10433 = std::string(_bought_city10433_n.data());
            int32_t _extended_price10434 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 2);
            int32_t _list_price10435 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 3);
            int32_t _extended_tax10436 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 4);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_4103_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_4103_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_3869_payload_leftMajor payloadA{_ss_ticket_number1215L, _bought_city10433, _extended_price10434, _list_price10435, _extended_tax10436, _c_current_addr_sk4, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4747_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk10437_k = tbl_Filter_TD_4747_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city10443_k_n = tbl_Filter_TD_4747_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city10443_k = std::string(_ca_city10443_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3869_key_leftMajor{_ca_address_sk10437_k, _ca_city10443_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                std::string _bought_city10433 = (it->second)._bought_city10433;
                std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n{};
                memcpy(_bought_city10433_n.data(), (_bought_city10433).data(), (_bought_city10433).length());
                int32_t _extended_price10434 = (it->second)._extended_price10434;
                int32_t _list_price10435 = (it->second)._list_price10435;
                int32_t _extended_tax10436 = (it->second)._extended_tax10436;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ca_address_sk10437 = tbl_Filter_TD_4747_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_city10443_n = tbl_Filter_TD_4747_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_city10443 = std::string(_ca_city10443_n.data());
                tbl_JOIN_INNER_TD_3869_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_3869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _bought_city10433_n);
                tbl_JOIN_INNER_TD_3869_output.setInt32(r, 5, _extended_price10434);
                tbl_JOIN_INNER_TD_3869_output.setInt32(r, 7, _list_price10435);
                tbl_JOIN_INNER_TD_3869_output.setInt32(r, 6, _extended_tax10436);
                tbl_JOIN_INNER_TD_3869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                tbl_JOIN_INNER_TD_3869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city10443_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3869_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3869_key_rightMajor, SW_JOIN_INNER_TD_3869_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4747_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk10437_k = tbl_Filter_TD_4747_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city10443_k_n = tbl_Filter_TD_4747_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city10443_k = std::string(_ca_city10443_k_n.data());
            SW_JOIN_INNER_TD_3869_key_rightMajor keyA{_ca_address_sk10437_k, _ca_city10443_k};
            int32_t _ca_address_sk10437 = tbl_Filter_TD_4747_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_city10443_n = tbl_Filter_TD_4747_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_city10443 = std::string(_ca_city10443_n.data());
            SW_JOIN_INNER_TD_3869_payload_rightMajor payloadA{_ca_address_sk10437, _ca_city10443};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4103_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_k_n = tbl_JOIN_INNER_TD_4103_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _bought_city10433_k = std::string(_bought_city10433_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3869_key_rightMajor{_c_current_addr_sk4_k, _bought_city10433_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk10437 = (it->second)._ca_address_sk10437;
                std::string _ca_city10443 = (it->second)._ca_city10443;
                std::array<char, TPCDS_READ_MAX + 1> _ca_city10443_n{};
                memcpy(_ca_city10443_n.data(), (_ca_city10443).data(), (_ca_city10443).length());
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_4103_output.getInt64(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n = tbl_JOIN_INNER_TD_4103_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _bought_city10433 = std::string(_bought_city10433_n.data());
                int32_t _extended_price10434 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 2);
                int32_t _list_price10435 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 3);
                int32_t _extended_tax10436 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 4);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_4103_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_4103_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_3869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city10443_n);
                tbl_JOIN_INNER_TD_3869_output.setInt64(r, 4, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_3869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _bought_city10433_n);
                tbl_JOIN_INNER_TD_3869_output.setInt32(r, 5, _extended_price10434);
                tbl_JOIN_INNER_TD_3869_output.setInt32(r, 7, _list_price10435);
                tbl_JOIN_INNER_TD_3869_output.setInt32(r, 6, _extended_tax10436);
                tbl_JOIN_INNER_TD_3869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_3869_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3869_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3869_output #Row: " << tbl_JOIN_INNER_TD_3869_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2910(Table &tbl_JOIN_INNER_TD_3869_output, Table &tbl_Sort_TD_2910_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_last_name#9 ASC NULLS FIRST, ss_ticket_number#1215L ASC NULLS FIRST)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, ca_city#10443, bought_city#10433, ss_ticket_number#1215L, extended_price#10434, extended_tax#10436, list_price#10435)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, ca_city#10443, bought_city#10433, ss_ticket_number#1215L, extended_price#10434, extended_tax#10436, list_price#10435)
    struct SW_Sort_TD_2910Row {
        std::string _c_last_name9;
        std::string _c_first_name8;
        std::string _ca_city10443;
        std::string _bought_city10433;
        int64_t _ss_ticket_number1215L;
        int32_t _extended_price10434;
        int32_t _extended_tax10436;
        int32_t _list_price10435;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2910Row& a, const SW_Sort_TD_2910Row& b) const { return 
 (a._c_last_name9 < b._c_last_name9) || 
 ((a._c_last_name9 == b._c_last_name9) && (a._ss_ticket_number1215L < b._ss_ticket_number1215L)); 
}
    }SW_Sort_TD_2910_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3869_output.getNumRow();
    std::vector<SW_Sort_TD_2910Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_3869_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_3869_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city10443 = tbl_JOIN_INNER_TD_3869_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _bought_city10433 = tbl_JOIN_INNER_TD_3869_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_3869_output.getInt64(i, 4);
        int32_t _extended_price10434 = tbl_JOIN_INNER_TD_3869_output.getInt32(i, 5);
        int32_t _extended_tax10436 = tbl_JOIN_INNER_TD_3869_output.getInt32(i, 6);
        int32_t _list_price10435 = tbl_JOIN_INNER_TD_3869_output.getInt32(i, 7);
        SW_Sort_TD_2910Row t = {std::string(_c_last_name9.data()),std::string(_c_first_name8.data()),std::string(_ca_city10443.data()),std::string(_bought_city10433.data()),_ss_ticket_number1215L,_extended_price10434,_extended_tax10436,_list_price10435};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2910_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9{};
        memcpy(_c_last_name9.data(), (it._c_last_name9).data(), (it._c_last_name9).length());
        tbl_Sort_TD_2910_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_last_name9);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8{};
        memcpy(_c_first_name8.data(), (it._c_first_name8).data(), (it._c_first_name8).length());
        tbl_Sort_TD_2910_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_first_name8);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city10443{};
        memcpy(_ca_city10443.data(), (it._ca_city10443).data(), (it._ca_city10443).length());
        tbl_Sort_TD_2910_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _ca_city10443);
        std::array<char, TPCDS_READ_MAX + 1> _bought_city10433{};
        memcpy(_bought_city10433.data(), (it._bought_city10433).data(), (it._bought_city10433).length());
        tbl_Sort_TD_2910_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _bought_city10433);
        tbl_Sort_TD_2910_output.setInt64(r, 4, it._ss_ticket_number1215L);
        tbl_Sort_TD_2910_output.setInt32(r, 5, it._extended_price10434);
        tbl_Sort_TD_2910_output.setInt32(r, 6, it._extended_tax10436);
        tbl_Sort_TD_2910_output.setInt32(r, 7, it._list_price10435);
        ++r;
    }
    tbl_Sort_TD_2910_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2910_output #Row: " << tbl_Sort_TD_2910_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1322(Table &tbl_Sort_TD_2910_output, Table &tbl_LocalLimit_TD_1322_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, ca_city#10443, bought_city#10433, ss_ticket_number#1215L, extended_price#10434, extended_tax#10436, list_price#10435)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, ca_city#10443, bought_city#10433, ss_ticket_number#1215L, extended_price#10434, extended_tax#10436, list_price#10435)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Sort_TD_2910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1322_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Sort_TD_2910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1322_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city10443_n = tbl_Sort_TD_2910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1322_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city10443_n);
        std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n = tbl_Sort_TD_2910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1322_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _bought_city10433_n);
        tbl_LocalLimit_TD_1322_output.setInt32(r, 4, tbl_Sort_TD_2910_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1322_output.setInt32(r, 5, tbl_Sort_TD_2910_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1322_output.setInt32(r, 6, tbl_Sort_TD_2910_output.getInt32(i, 6));
        tbl_LocalLimit_TD_1322_output.setInt32(r, 7, tbl_Sort_TD_2910_output.getInt32(i, 7));
        r++;
    }
    tbl_LocalLimit_TD_1322_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1322_output #Row: " << tbl_LocalLimit_TD_1322_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0924(Table &tbl_LocalLimit_TD_1322_output, Table &tbl_GlobalLimit_TD_0924_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(c_last_name#9, c_first_name#8, ca_city#10443, bought_city#10433, ss_ticket_number#1215L, extended_price#10434, extended_tax#10436, list_price#10435)
    // Output: ListBuffer(c_last_name#9, c_first_name#8, ca_city#10443, bought_city#10433, ss_ticket_number#1215L, extended_price#10434, extended_tax#10436, list_price#10435)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_LocalLimit_TD_1322_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0924_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name9_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_LocalLimit_TD_1322_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0924_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
        std::array<char, TPCDS_READ_MAX + 1> _ca_city10443_n = tbl_LocalLimit_TD_1322_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0924_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _ca_city10443_n);
        std::array<char, TPCDS_READ_MAX + 1> _bought_city10433_n = tbl_LocalLimit_TD_1322_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0924_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _bought_city10433_n);
        tbl_GlobalLimit_TD_0924_output.setInt32(r, 4, tbl_LocalLimit_TD_1322_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_0924_output.setInt32(r, 5, tbl_LocalLimit_TD_1322_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0924_output.setInt32(r, 6, tbl_LocalLimit_TD_1322_output.getInt32(i, 6));
        tbl_GlobalLimit_TD_0924_output.setInt32(r, 7, tbl_LocalLimit_TD_1322_output.getInt32(i, 7));
        r++;
    }
    tbl_GlobalLimit_TD_0924_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0924_output #Row: " << tbl_GlobalLimit_TD_0924_output.getNumRow() << std::endl;
}

