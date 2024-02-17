#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11581(Table &tbl_SerializeFromObject_TD_12171_input, Table &tbl_Filter_TD_11581_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#7069) AND ((d_date#7069 >= 2000-08-23) AND (d_date#7069 <= 2000-09-22))) AND isnotnull(d_date_sk#7067)))
    // Input: ListBuffer(d_date_sk#7067, d_date#7069)
    // Output: ListBuffer(d_date_sk#7067)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12171_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date7069 = tbl_SerializeFromObject_TD_12171_input.getInt32(i, 1);
        int32_t _d_date_sk7067 = tbl_SerializeFromObject_TD_12171_input.getInt32(i, 0);
        if (((_d_date7069!= 0) && ((_d_date7069 >= 20000823) && (_d_date7069 <= 20000922))) && (_d_date_sk7067!= 0)) {
            int32_t _d_date_sk7067_t = tbl_SerializeFromObject_TD_12171_input.getInt32(i, 0);
            tbl_Filter_TD_11581_output.setInt32(r, 0, _d_date_sk7067_t);
            r++;
        }
    }
    tbl_Filter_TD_11581_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11581_output #Row: " << tbl_Filter_TD_11581_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11306(Table &tbl_SerializeFromObject_TD_12885_input, Table &tbl_Filter_TD_11306_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_returned_date_sk#831) AND isnotnull(wr_web_page_sk#842)))
    // Input: ListBuffer(wr_returned_date_sk#831, wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    // Output: ListBuffer(wr_returned_date_sk#831, wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12885_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_returned_date_sk831 = tbl_SerializeFromObject_TD_12885_input.getInt32(i, 0);
        int32_t _wr_web_page_sk842 = tbl_SerializeFromObject_TD_12885_input.getInt32(i, 1);
        if ((_wr_returned_date_sk831!= 0) && (_wr_web_page_sk842!= 0)) {
            int32_t _wr_returned_date_sk831_t = tbl_SerializeFromObject_TD_12885_input.getInt32(i, 0);
            tbl_Filter_TD_11306_output.setInt32(r, 0, _wr_returned_date_sk831_t);
            int32_t _wr_web_page_sk842_t = tbl_SerializeFromObject_TD_12885_input.getInt32(i, 1);
            tbl_Filter_TD_11306_output.setInt32(r, 1, _wr_web_page_sk842_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_12885_input.getInt32(i, 2);
            tbl_Filter_TD_11306_output.setInt32(r, 2, _wr_return_amt846_t);
            int32_t _wr_net_loss854_t = tbl_SerializeFromObject_TD_12885_input.getInt32(i, 3);
            tbl_Filter_TD_11306_output.setInt32(r, 3, _wr_net_loss854_t);
            r++;
        }
    }
    tbl_Filter_TD_11306_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11306_output #Row: " << tbl_Filter_TD_11306_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11471(Table &tbl_SerializeFromObject_TD_12361_input, Table &tbl_Filter_TD_11471_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#7041) AND ((d_date#7041 >= 2000-08-23) AND (d_date#7041 <= 2000-09-22))) AND isnotnull(d_date_sk#7039)))
    // Input: ListBuffer(d_date_sk#7039, d_date#7041)
    // Output: ListBuffer(d_date_sk#7039)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12361_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date7041 = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 1);
        int32_t _d_date_sk7039 = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 0);
        if (((_d_date7041!= 0) && ((_d_date7041 >= 20000823) && (_d_date7041 <= 20000922))) && (_d_date_sk7039!= 0)) {
            int32_t _d_date_sk7039_t = tbl_SerializeFromObject_TD_12361_input.getInt32(i, 0);
            tbl_Filter_TD_11471_output.setInt32(r, 0, _d_date_sk7039_t);
            r++;
        }
    }
    tbl_Filter_TD_11471_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11471_output #Row: " << tbl_Filter_TD_11471_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11323(Table &tbl_SerializeFromObject_TD_12306_input, Table &tbl_Filter_TD_11323_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_web_page_sk#741)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12306_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_12306_input.getInt32(i, 0);
        int32_t _ws_web_page_sk741 = tbl_SerializeFromObject_TD_12306_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && (_ws_web_page_sk741!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_12306_input.getInt32(i, 0);
            tbl_Filter_TD_11323_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_web_page_sk741_t = tbl_SerializeFromObject_TD_12306_input.getInt32(i, 1);
            tbl_Filter_TD_11323_output.setInt32(r, 1, _ws_web_page_sk741_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_12306_input.getInt32(i, 2);
            tbl_Filter_TD_11323_output.setInt32(r, 2, _ws_ext_sales_price752_t);
            int32_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_12306_input.getInt32(i, 3);
            tbl_Filter_TD_11323_output.setInt32(r, 3, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_11323_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11323_output #Row: " << tbl_Filter_TD_11323_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11122(Table &tbl_SerializeFromObject_TD_12365_input, Table &tbl_Filter_TD_11122_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#6928) AND ((d_date#6928 >= 2000-08-23) AND (d_date#6928 <= 2000-09-22))) AND isnotnull(d_date_sk#6926)))
    // Input: ListBuffer(d_date_sk#6926, d_date#6928)
    // Output: ListBuffer(d_date_sk#6926)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12365_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date6928 = tbl_SerializeFromObject_TD_12365_input.getInt32(i, 1);
        int32_t _d_date_sk6926 = tbl_SerializeFromObject_TD_12365_input.getInt32(i, 0);
        if (((_d_date6928!= 0) && ((_d_date6928 >= 20000823) && (_d_date6928 <= 20000922))) && (_d_date_sk6926!= 0)) {
            int32_t _d_date_sk6926_t = tbl_SerializeFromObject_TD_12365_input.getInt32(i, 0);
            tbl_Filter_TD_11122_output.setInt32(r, 0, _d_date_sk6926_t);
            r++;
        }
    }
    tbl_Filter_TD_11122_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11122_output #Row: " << tbl_Filter_TD_11122_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11580(Table &tbl_SerializeFromObject_TD_12505_input, Table &tbl_Filter_TD_11580_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_returned_date_sk#669) AND isnotnull(sr_store_sk#676)))
    // Input: ListBuffer(sr_returned_date_sk#669, sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    // Output: ListBuffer(sr_returned_date_sk#669, sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12505_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_returned_date_sk669 = tbl_SerializeFromObject_TD_12505_input.getInt32(i, 0);
        int32_t _sr_store_sk676 = tbl_SerializeFromObject_TD_12505_input.getInt32(i, 1);
        if ((_sr_returned_date_sk669!= 0) && (_sr_store_sk676!= 0)) {
            int32_t _sr_returned_date_sk669_t = tbl_SerializeFromObject_TD_12505_input.getInt32(i, 0);
            tbl_Filter_TD_11580_output.setInt32(r, 0, _sr_returned_date_sk669_t);
            int32_t _sr_store_sk676_t = tbl_SerializeFromObject_TD_12505_input.getInt32(i, 1);
            tbl_Filter_TD_11580_output.setInt32(r, 1, _sr_store_sk676_t);
            int32_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_12505_input.getInt32(i, 2);
            tbl_Filter_TD_11580_output.setInt32(r, 2, _sr_return_amt680_t);
            int32_t _sr_net_loss688_t = tbl_SerializeFromObject_TD_12505_input.getInt32(i, 3);
            tbl_Filter_TD_11580_output.setInt32(r, 3, _sr_net_loss688_t);
            r++;
        }
    }
    tbl_Filter_TD_11580_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11580_output #Row: " << tbl_Filter_TD_11580_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11869(Table &tbl_SerializeFromObject_TD_12935_input, Table &tbl_Filter_TD_11869_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-08-23) AND (d_date#122 <= 2000-09-22))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12935_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_12935_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12935_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000823) && (_d_date122 <= 20000922))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12935_input.getInt32(i, 0);
            tbl_Filter_TD_11869_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11869_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11869_output #Row: " << tbl_Filter_TD_11869_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1119(Table &tbl_SerializeFromObject_TD_12415_input, Table &tbl_Filter_TD_1119_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12415_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12415_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12415_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12415_input.getInt32(i, 0);
            tbl_Filter_TD_1119_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_12415_input.getInt32(i, 1);
            tbl_Filter_TD_1119_output.setInt32(r, 1, _ss_store_sk1213_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_12415_input.getInt32(i, 2);
            tbl_Filter_TD_1119_output.setInt32(r, 2, _ss_ext_sales_price1221_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_12415_input.getInt32(i, 3);
            tbl_Filter_TD_1119_output.setInt32(r, 3, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_1119_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1119_output #Row: " << tbl_Filter_TD_1119_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10322(Table &tbl_SerializeFromObject_TD_1151_input, Table &tbl_Filter_TD_10322_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wp_web_page_sk#7095))
    // Input: ListBuffer(wp_web_page_sk#7095)
    // Output: ListBuffer(wp_web_page_sk#7095)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1151_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_web_page_sk7095 = tbl_SerializeFromObject_TD_1151_input.getInt32(i, 0);
        if (_wp_web_page_sk7095!= 0) {
            int32_t _wp_web_page_sk7095_t = tbl_SerializeFromObject_TD_1151_input.getInt32(i, 0);
            tbl_Filter_TD_10322_output.setInt32(r, 0, _wp_web_page_sk7095_t);
            r++;
        }
    }
    tbl_Filter_TD_10322_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10322_output #Row: " << tbl_Filter_TD_10322_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10613_key_leftMajor {
    int32_t _wr_returned_date_sk831;
    bool operator==(const SW_JOIN_INNER_TD_10613_key_leftMajor& other) const {
        return ((_wr_returned_date_sk831 == other._wr_returned_date_sk831));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10613_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10613_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returned_date_sk831));
    }
};
}
struct SW_JOIN_INNER_TD_10613_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_web_page_sk842;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_10613_key_rightMajor {
    int32_t _d_date_sk7067;
    bool operator==(const SW_JOIN_INNER_TD_10613_key_rightMajor& other) const {
        return ((_d_date_sk7067 == other._d_date_sk7067));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10613_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10613_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7067));
    }
};
}
struct SW_JOIN_INNER_TD_10613_payload_rightMajor {
    int32_t _d_date_sk7067;
};
void SW_JOIN_INNER_TD_10613(Table &tbl_Filter_TD_11306_output, Table &tbl_Filter_TD_11581_output, Table &tbl_JOIN_INNER_TD_10613_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_returned_date_sk#831 = d_date_sk#7067))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(d_date_sk#7067)
    // Output Table: ListBuffer(wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    int left_nrow = tbl_Filter_TD_11306_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11581_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10613_key_leftMajor, SW_JOIN_INNER_TD_10613_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11306_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_Filter_TD_11306_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10613_key_leftMajor keyA{_wr_returned_date_sk831_k};
            int32_t _wr_returned_date_sk831 = tbl_Filter_TD_11306_output.getInt32(i, 0);
            int32_t _wr_web_page_sk842 = tbl_Filter_TD_11306_output.getInt32(i, 1);
            int32_t _wr_return_amt846 = tbl_Filter_TD_11306_output.getInt32(i, 2);
            int32_t _wr_net_loss854 = tbl_Filter_TD_11306_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10613_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_web_page_sk842, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11581_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7067_k = tbl_Filter_TD_11581_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10613_key_leftMajor{_d_date_sk7067_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_web_page_sk842 = (it->second)._wr_web_page_sk842;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                int32_t _d_date_sk7067 = tbl_Filter_TD_11581_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10613_output.setInt32(r, 0, _wr_web_page_sk842);
                tbl_JOIN_INNER_TD_10613_output.setInt32(r, 1, _wr_return_amt846);
                tbl_JOIN_INNER_TD_10613_output.setInt32(r, 2, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10613_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10613_key_rightMajor, SW_JOIN_INNER_TD_10613_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11581_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7067_k = tbl_Filter_TD_11581_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10613_key_rightMajor keyA{_d_date_sk7067_k};
            int32_t _d_date_sk7067 = tbl_Filter_TD_11581_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10613_payload_rightMajor payloadA{_d_date_sk7067};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11306_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_Filter_TD_11306_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10613_key_rightMajor{_wr_returned_date_sk831_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7067 = (it->second)._d_date_sk7067;
                int32_t _wr_returned_date_sk831 = tbl_Filter_TD_11306_output.getInt32(i, 0);
                int32_t _wr_web_page_sk842 = tbl_Filter_TD_11306_output.getInt32(i, 1);
                int32_t _wr_return_amt846 = tbl_Filter_TD_11306_output.getInt32(i, 2);
                int32_t _wr_net_loss854 = tbl_Filter_TD_11306_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10613_output.setInt32(r, 0, _wr_web_page_sk842);
                tbl_JOIN_INNER_TD_10613_output.setInt32(r, 1, _wr_return_amt846);
                tbl_JOIN_INNER_TD_10613_output.setInt32(r, 2, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10613_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10613_output #Row: " << tbl_JOIN_INNER_TD_10613_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1055(Table &tbl_SerializeFromObject_TD_11500_input, Table &tbl_Filter_TD_1055_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wp_web_page_sk#615))
    // Input: ListBuffer(wp_web_page_sk#615)
    // Output: ListBuffer(wp_web_page_sk#615)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11500_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_web_page_sk615 = tbl_SerializeFromObject_TD_11500_input.getInt32(i, 0);
        if (_wp_web_page_sk615!= 0) {
            int32_t _wp_web_page_sk615_t = tbl_SerializeFromObject_TD_11500_input.getInt32(i, 0);
            tbl_Filter_TD_1055_output.setInt32(r, 0, _wp_web_page_sk615_t);
            r++;
        }
    }
    tbl_Filter_TD_1055_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1055_output #Row: " << tbl_Filter_TD_1055_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1071_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_1071_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1071_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1071_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_1071_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_web_page_sk741;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_1071_key_rightMajor {
    int32_t _d_date_sk7039;
    bool operator==(const SW_JOIN_INNER_TD_1071_key_rightMajor& other) const {
        return ((_d_date_sk7039 == other._d_date_sk7039));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1071_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1071_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7039));
    }
};
}
struct SW_JOIN_INNER_TD_1071_payload_rightMajor {
    int32_t _d_date_sk7039;
};
void SW_JOIN_INNER_TD_1071(Table &tbl_Filter_TD_11323_output, Table &tbl_Filter_TD_11471_output, Table &tbl_JOIN_INNER_TD_1071_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#7039))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    // Right Table: ListBuffer(d_date_sk#7039)
    // Output Table: ListBuffer(ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    int left_nrow = tbl_Filter_TD_11323_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11471_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1071_key_leftMajor, SW_JOIN_INNER_TD_1071_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11323_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_11323_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1071_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11323_output.getInt32(i, 0);
            int32_t _ws_web_page_sk741 = tbl_Filter_TD_11323_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_11323_output.getInt32(i, 2);
            int32_t _ws_net_profit762 = tbl_Filter_TD_11323_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1071_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_web_page_sk741, _ws_ext_sales_price752, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11471_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7039_k = tbl_Filter_TD_11471_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1071_key_leftMajor{_d_date_sk7039_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _d_date_sk7039 = tbl_Filter_TD_11471_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1071_output.setInt32(r, 0, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_1071_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_1071_output.setInt32(r, 2, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1071_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1071_key_rightMajor, SW_JOIN_INNER_TD_1071_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11471_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7039_k = tbl_Filter_TD_11471_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1071_key_rightMajor keyA{_d_date_sk7039_k};
            int32_t _d_date_sk7039 = tbl_Filter_TD_11471_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1071_payload_rightMajor payloadA{_d_date_sk7039};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11323_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_11323_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1071_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7039 = (it->second)._d_date_sk7039;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11323_output.getInt32(i, 0);
                int32_t _ws_web_page_sk741 = tbl_Filter_TD_11323_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_11323_output.getInt32(i, 2);
                int32_t _ws_net_profit762 = tbl_Filter_TD_11323_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1071_output.setInt32(r, 0, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_1071_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_1071_output.setInt32(r, 2, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1071_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1071_output #Row: " << tbl_JOIN_INNER_TD_1071_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1046(Table &tbl_SerializeFromObject_TD_11285_input, Table &tbl_Filter_TD_1046_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#7013) AND ((d_date#7013 >= 2000-08-23) AND (d_date#7013 <= 2000-09-22))) AND isnotnull(d_date_sk#7011)))
    // Input: ListBuffer(d_date_sk#7011, d_date#7013)
    // Output: ListBuffer(d_date_sk#7011)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11285_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date7013 = tbl_SerializeFromObject_TD_11285_input.getInt32(i, 1);
        int32_t _d_date_sk7011 = tbl_SerializeFromObject_TD_11285_input.getInt32(i, 0);
        if (((_d_date7013!= 0) && ((_d_date7013 >= 20000823) && (_d_date7013 <= 20000922))) && (_d_date_sk7011!= 0)) {
            int32_t _d_date_sk7011_t = tbl_SerializeFromObject_TD_11285_input.getInt32(i, 0);
            tbl_Filter_TD_1046_output.setInt32(r, 0, _d_date_sk7011_t);
            r++;
        }
    }
    tbl_Filter_TD_1046_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1046_output #Row: " << tbl_Filter_TD_1046_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10528(Table &tbl_SerializeFromObject_TD_1116_input, Table &tbl_Filter_TD_10528_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cr_returned_date_sk#1023))
    // Input: ListBuffer(cr_returned_date_sk#1023, cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(cr_returned_date_sk#1023, cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1116_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_1116_input.getInt32(i, 0);
        if (_cr_returned_date_sk1023!= 0) {
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_1116_input.getInt32(i, 0);
            tbl_Filter_TD_10528_output.setInt32(r, 0, _cr_returned_date_sk1023_t);
            int32_t _cr_call_center_sk1034_t = tbl_SerializeFromObject_TD_1116_input.getInt32(i, 1);
            tbl_Filter_TD_10528_output.setInt32(r, 1, _cr_call_center_sk1034_t);
            int32_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_1116_input.getInt32(i, 2);
            tbl_Filter_TD_10528_output.setInt32(r, 2, _cr_return_amount1041_t);
            int32_t _cr_net_loss1049_t = tbl_SerializeFromObject_TD_1116_input.getInt32(i, 3);
            tbl_Filter_TD_10528_output.setInt32(r, 3, _cr_net_loss1049_t);
            r++;
        }
    }
    tbl_Filter_TD_10528_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10528_output #Row: " << tbl_Filter_TD_10528_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10179(Table &tbl_SerializeFromObject_TD_11802_input, Table &tbl_Filter_TD_10179_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#6985) AND ((d_date#6985 >= 2000-08-23) AND (d_date#6985 <= 2000-09-22))) AND isnotnull(d_date_sk#6983)))
    // Input: ListBuffer(d_date_sk#6983, d_date#6985)
    // Output: ListBuffer(d_date_sk#6983)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11802_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date6985 = tbl_SerializeFromObject_TD_11802_input.getInt32(i, 1);
        int32_t _d_date_sk6983 = tbl_SerializeFromObject_TD_11802_input.getInt32(i, 0);
        if (((_d_date6985!= 0) && ((_d_date6985 >= 20000823) && (_d_date6985 <= 20000922))) && (_d_date_sk6983!= 0)) {
            int32_t _d_date_sk6983_t = tbl_SerializeFromObject_TD_11802_input.getInt32(i, 0);
            tbl_Filter_TD_10179_output.setInt32(r, 0, _d_date_sk6983_t);
            r++;
        }
    }
    tbl_Filter_TD_10179_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10179_output #Row: " << tbl_Filter_TD_10179_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10994(Table &tbl_SerializeFromObject_TD_11171_input, Table &tbl_Filter_TD_10994_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11171_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_11171_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_11171_input.getInt32(i, 0);
            tbl_Filter_TD_10994_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_call_center_sk1115_t = tbl_SerializeFromObject_TD_11171_input.getInt32(i, 1);
            tbl_Filter_TD_10994_output.setInt32(r, 1, _cs_call_center_sk1115_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_11171_input.getInt32(i, 2);
            tbl_Filter_TD_10994_output.setInt32(r, 2, _cs_ext_sales_price1127_t);
            int32_t _cs_net_profit1137_t = tbl_SerializeFromObject_TD_11171_input.getInt32(i, 3);
            tbl_Filter_TD_10994_output.setInt32(r, 3, _cs_net_profit1137_t);
            r++;
        }
    }
    tbl_Filter_TD_10994_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10994_output #Row: " << tbl_Filter_TD_10994_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1028(Table &tbl_SerializeFromObject_TD_11794_input, Table &tbl_Filter_TD_1028_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#6954))
    // Input: ListBuffer(s_store_sk#6954)
    // Output: ListBuffer(s_store_sk#6954)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11794_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk6954 = tbl_SerializeFromObject_TD_11794_input.getInt32(i, 0);
        if (_s_store_sk6954!= 0) {
            int32_t _s_store_sk6954_t = tbl_SerializeFromObject_TD_11794_input.getInt32(i, 0);
            tbl_Filter_TD_1028_output.setInt32(r, 0, _s_store_sk6954_t);
            r++;
        }
    }
    tbl_Filter_TD_1028_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1028_output #Row: " << tbl_Filter_TD_1028_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10173_key_leftMajor {
    int32_t _sr_returned_date_sk669;
    bool operator==(const SW_JOIN_INNER_TD_10173_key_leftMajor& other) const {
        return ((_sr_returned_date_sk669 == other._sr_returned_date_sk669));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10173_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10173_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_returned_date_sk669));
    }
};
}
struct SW_JOIN_INNER_TD_10173_payload_leftMajor {
    int32_t _sr_returned_date_sk669;
    int32_t _sr_store_sk676;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_10173_key_rightMajor {
    int32_t _d_date_sk6926;
    bool operator==(const SW_JOIN_INNER_TD_10173_key_rightMajor& other) const {
        return ((_d_date_sk6926 == other._d_date_sk6926));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10173_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10173_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6926));
    }
};
}
struct SW_JOIN_INNER_TD_10173_payload_rightMajor {
    int32_t _d_date_sk6926;
};
void SW_JOIN_INNER_TD_10173(Table &tbl_Filter_TD_11580_output, Table &tbl_Filter_TD_11122_output, Table &tbl_JOIN_INNER_TD_10173_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_returned_date_sk#669 = d_date_sk#6926))
    // Left Table: ListBuffer(sr_returned_date_sk#669, sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    // Right Table: ListBuffer(d_date_sk#6926)
    // Output Table: ListBuffer(sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    int left_nrow = tbl_Filter_TD_11580_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11122_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10173_key_leftMajor, SW_JOIN_INNER_TD_10173_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11580_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_Filter_TD_11580_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10173_key_leftMajor keyA{_sr_returned_date_sk669_k};
            int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11580_output.getInt32(i, 0);
            int32_t _sr_store_sk676 = tbl_Filter_TD_11580_output.getInt32(i, 1);
            int32_t _sr_return_amt680 = tbl_Filter_TD_11580_output.getInt32(i, 2);
            int32_t _sr_net_loss688 = tbl_Filter_TD_11580_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10173_payload_leftMajor payloadA{_sr_returned_date_sk669, _sr_store_sk676, _sr_return_amt680, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11122_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6926_k = tbl_Filter_TD_11122_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10173_key_leftMajor{_d_date_sk6926_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_store_sk676 = (it->second)._sr_store_sk676;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _d_date_sk6926 = tbl_Filter_TD_11122_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10173_output.setInt32(r, 0, _sr_store_sk676);
                tbl_JOIN_INNER_TD_10173_output.setInt32(r, 1, _sr_return_amt680);
                tbl_JOIN_INNER_TD_10173_output.setInt32(r, 2, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10173_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10173_key_rightMajor, SW_JOIN_INNER_TD_10173_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11122_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6926_k = tbl_Filter_TD_11122_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10173_key_rightMajor keyA{_d_date_sk6926_k};
            int32_t _d_date_sk6926 = tbl_Filter_TD_11122_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10173_payload_rightMajor payloadA{_d_date_sk6926};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11580_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_Filter_TD_11580_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10173_key_rightMajor{_sr_returned_date_sk669_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6926 = (it->second)._d_date_sk6926;
                int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11580_output.getInt32(i, 0);
                int32_t _sr_store_sk676 = tbl_Filter_TD_11580_output.getInt32(i, 1);
                int32_t _sr_return_amt680 = tbl_Filter_TD_11580_output.getInt32(i, 2);
                int32_t _sr_net_loss688 = tbl_Filter_TD_11580_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10173_output.setInt32(r, 0, _sr_store_sk676);
                tbl_JOIN_INNER_TD_10173_output.setInt32(r, 1, _sr_return_amt680);
                tbl_JOIN_INNER_TD_10173_output.setInt32(r, 2, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10173_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10173_output #Row: " << tbl_JOIN_INNER_TD_10173_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1061(Table &tbl_SerializeFromObject_TD_11803_input, Table &tbl_Filter_TD_1061_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11803_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_11803_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_11803_input.getInt32(i, 0);
            tbl_Filter_TD_1061_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_1061_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1061_output #Row: " << tbl_Filter_TD_1061_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10908_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10908_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10908_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10908_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10908_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_10908_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10908_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10908_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10908_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10908_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10908(Table &tbl_Filter_TD_1119_output, Table &tbl_Filter_TD_11869_output, Table &tbl_JOIN_INNER_TD_10908_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    int left_nrow = tbl_Filter_TD_1119_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11869_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10908_key_leftMajor, SW_JOIN_INNER_TD_10908_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1119_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_1119_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10908_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1119_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_1119_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_1119_output.getInt32(i, 2);
            int32_t _ss_net_profit1228 = tbl_Filter_TD_1119_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10908_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_store_sk1213, _ss_ext_sales_price1221, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11869_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11869_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10908_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _d_date_sk120 = tbl_Filter_TD_11869_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10908_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10908_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10908_output.setInt32(r, 2, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10908_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10908_key_rightMajor, SW_JOIN_INNER_TD_10908_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11869_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11869_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10908_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11869_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10908_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1119_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_1119_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10908_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1119_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_1119_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_1119_output.getInt32(i, 2);
                int32_t _ss_net_profit1228 = tbl_Filter_TD_1119_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10908_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10908_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10908_output.setInt32(r, 2, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10908_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10908_output #Row: " << tbl_JOIN_INNER_TD_10908_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9584_key_leftMajor {
    int32_t _wr_web_page_sk842;
    bool operator==(const SW_JOIN_INNER_TD_9584_key_leftMajor& other) const {
        return ((_wr_web_page_sk842 == other._wr_web_page_sk842));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9584_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9584_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_web_page_sk842));
    }
};
}
struct SW_JOIN_INNER_TD_9584_payload_leftMajor {
    int32_t _wr_web_page_sk842;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_9584_key_rightMajor {
    int32_t _wp_web_page_sk7095;
    bool operator==(const SW_JOIN_INNER_TD_9584_key_rightMajor& other) const {
        return ((_wp_web_page_sk7095 == other._wp_web_page_sk7095));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9584_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9584_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk7095));
    }
};
}
struct SW_JOIN_INNER_TD_9584_payload_rightMajor {
    int32_t _wp_web_page_sk7095;
};
void SW_JOIN_INNER_TD_9584(Table &tbl_JOIN_INNER_TD_10613_output, Table &tbl_Filter_TD_10322_output, Table &tbl_JOIN_INNER_TD_9584_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_web_page_sk#842 = wp_web_page_sk#7095))
    // Left Table: ListBuffer(wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(wp_web_page_sk#7095)
    // Output Table: ListBuffer(wr_return_amt#846, wr_net_loss#854, wp_web_page_sk#7095)
    int left_nrow = tbl_JOIN_INNER_TD_10613_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10322_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9584_key_leftMajor, SW_JOIN_INNER_TD_9584_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10613_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_web_page_sk842_k = tbl_JOIN_INNER_TD_10613_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9584_key_leftMajor keyA{_wr_web_page_sk842_k};
            int32_t _wr_web_page_sk842 = tbl_JOIN_INNER_TD_10613_output.getInt32(i, 0);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10613_output.getInt32(i, 1);
            int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_10613_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9584_payload_leftMajor payloadA{_wr_web_page_sk842, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10322_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wp_web_page_sk7095_k = tbl_Filter_TD_10322_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9584_key_leftMajor{_wp_web_page_sk7095_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_web_page_sk842 = (it->second)._wr_web_page_sk842;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                int32_t _wp_web_page_sk7095 = tbl_Filter_TD_10322_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9584_output.setInt32(r, 0, _wr_return_amt846);
                tbl_JOIN_INNER_TD_9584_output.setInt32(r, 1, _wr_net_loss854);
                tbl_JOIN_INNER_TD_9584_output.setInt32(r, 2, _wp_web_page_sk7095);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9584_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9584_key_rightMajor, SW_JOIN_INNER_TD_9584_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10322_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wp_web_page_sk7095_k = tbl_Filter_TD_10322_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9584_key_rightMajor keyA{_wp_web_page_sk7095_k};
            int32_t _wp_web_page_sk7095 = tbl_Filter_TD_10322_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9584_payload_rightMajor payloadA{_wp_web_page_sk7095};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10613_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_web_page_sk842_k = tbl_JOIN_INNER_TD_10613_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9584_key_rightMajor{_wr_web_page_sk842_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wp_web_page_sk7095 = (it->second)._wp_web_page_sk7095;
                int32_t _wr_web_page_sk842 = tbl_JOIN_INNER_TD_10613_output.getInt32(i, 0);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10613_output.getInt32(i, 1);
                int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_10613_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9584_output.setInt32(r, 2, _wp_web_page_sk7095);
                tbl_JOIN_INNER_TD_9584_output.setInt32(r, 0, _wr_return_amt846);
                tbl_JOIN_INNER_TD_9584_output.setInt32(r, 1, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9584_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9584_output #Row: " << tbl_JOIN_INNER_TD_9584_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9626_key_leftMajor {
    int32_t _ws_web_page_sk741;
    bool operator==(const SW_JOIN_INNER_TD_9626_key_leftMajor& other) const {
        return ((_ws_web_page_sk741 == other._ws_web_page_sk741));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9626_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9626_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_page_sk741));
    }
};
}
struct SW_JOIN_INNER_TD_9626_payload_leftMajor {
    int32_t _ws_web_page_sk741;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_9626_key_rightMajor {
    int32_t _wp_web_page_sk615;
    bool operator==(const SW_JOIN_INNER_TD_9626_key_rightMajor& other) const {
        return ((_wp_web_page_sk615 == other._wp_web_page_sk615));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9626_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9626_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk615));
    }
};
}
struct SW_JOIN_INNER_TD_9626_payload_rightMajor {
    int32_t _wp_web_page_sk615;
};
void SW_JOIN_INNER_TD_9626(Table &tbl_JOIN_INNER_TD_1071_output, Table &tbl_Filter_TD_1055_output, Table &tbl_JOIN_INNER_TD_9626_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_page_sk#741 = wp_web_page_sk#615))
    // Left Table: ListBuffer(ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    // Right Table: ListBuffer(wp_web_page_sk#615)
    // Output Table: ListBuffer(ws_ext_sales_price#752, ws_net_profit#762, wp_web_page_sk#615)
    int left_nrow = tbl_JOIN_INNER_TD_1071_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1055_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9626_key_leftMajor, SW_JOIN_INNER_TD_9626_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1071_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_1071_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9626_key_leftMajor keyA{_ws_web_page_sk741_k};
            int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_1071_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_1071_output.getInt32(i, 1);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_1071_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9626_payload_leftMajor payloadA{_ws_web_page_sk741, _ws_ext_sales_price752, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1055_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_1055_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9626_key_leftMajor{_wp_web_page_sk615_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wp_web_page_sk615 = tbl_Filter_TD_1055_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9626_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_9626_output.setInt32(r, 1, _ws_net_profit762);
                tbl_JOIN_INNER_TD_9626_output.setInt32(r, 2, _wp_web_page_sk615);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9626_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9626_key_rightMajor, SW_JOIN_INNER_TD_9626_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1055_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_1055_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9626_key_rightMajor keyA{_wp_web_page_sk615_k};
            int32_t _wp_web_page_sk615 = tbl_Filter_TD_1055_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9626_payload_rightMajor payloadA{_wp_web_page_sk615};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1071_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_1071_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9626_key_rightMajor{_ws_web_page_sk741_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wp_web_page_sk615 = (it->second)._wp_web_page_sk615;
                int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_1071_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_1071_output.getInt32(i, 1);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_1071_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9626_output.setInt32(r, 2, _wp_web_page_sk615);
                tbl_JOIN_INNER_TD_9626_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_9626_output.setInt32(r, 1, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9626_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9626_output #Row: " << tbl_JOIN_INNER_TD_9626_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9725_key_leftMajor {
    int32_t _cr_returned_date_sk1023;
    bool operator==(const SW_JOIN_INNER_TD_9725_key_leftMajor& other) const {
        return ((_cr_returned_date_sk1023 == other._cr_returned_date_sk1023));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9725_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9725_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returned_date_sk1023));
    }
};
}
struct SW_JOIN_INNER_TD_9725_payload_leftMajor {
    int32_t _cr_returned_date_sk1023;
    int32_t _cr_call_center_sk1034;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
};
struct SW_JOIN_INNER_TD_9725_key_rightMajor {
    int32_t _d_date_sk7011;
    bool operator==(const SW_JOIN_INNER_TD_9725_key_rightMajor& other) const {
        return ((_d_date_sk7011 == other._d_date_sk7011));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9725_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9725_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7011));
    }
};
}
struct SW_JOIN_INNER_TD_9725_payload_rightMajor {
    int32_t _d_date_sk7011;
};
void SW_JOIN_INNER_TD_9725(Table &tbl_Filter_TD_10528_output, Table &tbl_Filter_TD_1046_output, Table &tbl_JOIN_INNER_TD_9725_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returned_date_sk#1023 = d_date_sk#7011))
    // Left Table: ListBuffer(cr_returned_date_sk#1023, cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    // Right Table: ListBuffer(d_date_sk#7011)
    // Output Table: ListBuffer(cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    int left_nrow = tbl_Filter_TD_10528_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1046_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9725_key_leftMajor, SW_JOIN_INNER_TD_9725_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10528_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_Filter_TD_10528_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9725_key_leftMajor keyA{_cr_returned_date_sk1023_k};
            int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_10528_output.getInt32(i, 0);
            int32_t _cr_call_center_sk1034 = tbl_Filter_TD_10528_output.getInt32(i, 1);
            int32_t _cr_return_amount1041 = tbl_Filter_TD_10528_output.getInt32(i, 2);
            int32_t _cr_net_loss1049 = tbl_Filter_TD_10528_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9725_payload_leftMajor payloadA{_cr_returned_date_sk1023, _cr_call_center_sk1034, _cr_return_amount1041, _cr_net_loss1049};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1046_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7011_k = tbl_Filter_TD_1046_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9725_key_leftMajor{_d_date_sk7011_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returned_date_sk1023 = (it->second)._cr_returned_date_sk1023;
                int32_t _cr_call_center_sk1034 = (it->second)._cr_call_center_sk1034;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it->second)._cr_net_loss1049;
                int32_t _d_date_sk7011 = tbl_Filter_TD_1046_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9725_output.setInt32(r, 0, _cr_call_center_sk1034);
                tbl_JOIN_INNER_TD_9725_output.setInt32(r, 1, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_9725_output.setInt32(r, 2, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9725_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9725_key_rightMajor, SW_JOIN_INNER_TD_9725_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1046_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7011_k = tbl_Filter_TD_1046_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9725_key_rightMajor keyA{_d_date_sk7011_k};
            int32_t _d_date_sk7011 = tbl_Filter_TD_1046_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9725_payload_rightMajor payloadA{_d_date_sk7011};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10528_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_Filter_TD_10528_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9725_key_rightMajor{_cr_returned_date_sk1023_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7011 = (it->second)._d_date_sk7011;
                int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_10528_output.getInt32(i, 0);
                int32_t _cr_call_center_sk1034 = tbl_Filter_TD_10528_output.getInt32(i, 1);
                int32_t _cr_return_amount1041 = tbl_Filter_TD_10528_output.getInt32(i, 2);
                int32_t _cr_net_loss1049 = tbl_Filter_TD_10528_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9725_output.setInt32(r, 0, _cr_call_center_sk1034);
                tbl_JOIN_INNER_TD_9725_output.setInt32(r, 1, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_9725_output.setInt32(r, 2, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9725_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9725_output #Row: " << tbl_JOIN_INNER_TD_9725_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9899_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_9899_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9899_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9899_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_9899_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
};
struct SW_JOIN_INNER_TD_9899_key_rightMajor {
    int32_t _d_date_sk6983;
    bool operator==(const SW_JOIN_INNER_TD_9899_key_rightMajor& other) const {
        return ((_d_date_sk6983 == other._d_date_sk6983));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9899_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9899_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6983));
    }
};
}
struct SW_JOIN_INNER_TD_9899_payload_rightMajor {
    int32_t _d_date_sk6983;
};
void SW_JOIN_INNER_TD_9899(Table &tbl_Filter_TD_10994_output, Table &tbl_Filter_TD_10179_output, Table &tbl_JOIN_INNER_TD_9899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#6983))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Right Table: ListBuffer(d_date_sk#6983)
    // Output Table: ListBuffer(cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    int left_nrow = tbl_Filter_TD_10994_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10179_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9899_key_leftMajor, SW_JOIN_INNER_TD_9899_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10994_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_10994_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9899_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10994_output.getInt32(i, 0);
            int32_t _cs_call_center_sk1115 = tbl_Filter_TD_10994_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_10994_output.getInt32(i, 2);
            int32_t _cs_net_profit1137 = tbl_Filter_TD_10994_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9899_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_call_center_sk1115, _cs_ext_sales_price1127, _cs_net_profit1137};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10179_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6983_k = tbl_Filter_TD_10179_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9899_key_leftMajor{_d_date_sk6983_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_call_center_sk1115 = (it->second)._cs_call_center_sk1115;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _d_date_sk6983 = tbl_Filter_TD_10179_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9899_output.setInt32(r, 0, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_9899_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_9899_output.setInt32(r, 2, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9899_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9899_key_rightMajor, SW_JOIN_INNER_TD_9899_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10179_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6983_k = tbl_Filter_TD_10179_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9899_key_rightMajor keyA{_d_date_sk6983_k};
            int32_t _d_date_sk6983 = tbl_Filter_TD_10179_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9899_payload_rightMajor payloadA{_d_date_sk6983};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10994_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_10994_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9899_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6983 = (it->second)._d_date_sk6983;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10994_output.getInt32(i, 0);
                int32_t _cs_call_center_sk1115 = tbl_Filter_TD_10994_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_10994_output.getInt32(i, 2);
                int32_t _cs_net_profit1137 = tbl_Filter_TD_10994_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9899_output.setInt32(r, 0, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_9899_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_9899_output.setInt32(r, 2, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9899_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9899_output #Row: " << tbl_JOIN_INNER_TD_9899_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9582_key_leftMajor {
    int32_t _sr_store_sk676;
    bool operator==(const SW_JOIN_INNER_TD_9582_key_leftMajor& other) const {
        return ((_sr_store_sk676 == other._sr_store_sk676));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9582_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9582_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_store_sk676));
    }
};
}
struct SW_JOIN_INNER_TD_9582_payload_leftMajor {
    int32_t _sr_store_sk676;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_9582_key_rightMajor {
    int32_t _s_store_sk6954;
    bool operator==(const SW_JOIN_INNER_TD_9582_key_rightMajor& other) const {
        return ((_s_store_sk6954 == other._s_store_sk6954));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9582_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9582_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk6954));
    }
};
}
struct SW_JOIN_INNER_TD_9582_payload_rightMajor {
    int32_t _s_store_sk6954;
};
void SW_JOIN_INNER_TD_9582(Table &tbl_JOIN_INNER_TD_10173_output, Table &tbl_Filter_TD_1028_output, Table &tbl_JOIN_INNER_TD_9582_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_store_sk#676 = s_store_sk#6954))
    // Left Table: ListBuffer(sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    // Right Table: ListBuffer(s_store_sk#6954)
    // Output Table: ListBuffer(sr_return_amt#680, sr_net_loss#688, s_store_sk#6954)
    int left_nrow = tbl_JOIN_INNER_TD_10173_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1028_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9582_key_leftMajor, SW_JOIN_INNER_TD_9582_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10173_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_store_sk676_k = tbl_JOIN_INNER_TD_10173_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9582_key_leftMajor keyA{_sr_store_sk676_k};
            int32_t _sr_store_sk676 = tbl_JOIN_INNER_TD_10173_output.getInt32(i, 0);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10173_output.getInt32(i, 1);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10173_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9582_payload_leftMajor payloadA{_sr_store_sk676, _sr_return_amt680, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1028_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk6954_k = tbl_Filter_TD_1028_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9582_key_leftMajor{_s_store_sk6954_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_store_sk676 = (it->second)._sr_store_sk676;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _s_store_sk6954 = tbl_Filter_TD_1028_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9582_output.setInt32(r, 0, _sr_return_amt680);
                tbl_JOIN_INNER_TD_9582_output.setInt32(r, 1, _sr_net_loss688);
                tbl_JOIN_INNER_TD_9582_output.setInt32(r, 2, _s_store_sk6954);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9582_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9582_key_rightMajor, SW_JOIN_INNER_TD_9582_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1028_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk6954_k = tbl_Filter_TD_1028_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9582_key_rightMajor keyA{_s_store_sk6954_k};
            int32_t _s_store_sk6954 = tbl_Filter_TD_1028_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9582_payload_rightMajor payloadA{_s_store_sk6954};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10173_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_store_sk676_k = tbl_JOIN_INNER_TD_10173_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9582_key_rightMajor{_sr_store_sk676_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk6954 = (it->second)._s_store_sk6954;
                int32_t _sr_store_sk676 = tbl_JOIN_INNER_TD_10173_output.getInt32(i, 0);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10173_output.getInt32(i, 1);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10173_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9582_output.setInt32(r, 2, _s_store_sk6954);
                tbl_JOIN_INNER_TD_9582_output.setInt32(r, 0, _sr_return_amt680);
                tbl_JOIN_INNER_TD_9582_output.setInt32(r, 1, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9582_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9582_output #Row: " << tbl_JOIN_INNER_TD_9582_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9764_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_9764_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9764_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9764_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_9764_payload_leftMajor {
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_9764_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_9764_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9764_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9764_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_9764_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_9764(Table &tbl_JOIN_INNER_TD_10908_output, Table &tbl_Filter_TD_1061_output, Table &tbl_JOIN_INNER_TD_9764_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, s_store_sk#378)
    int left_nrow = tbl_JOIN_INNER_TD_10908_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1061_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9764_key_leftMajor, SW_JOIN_INNER_TD_9764_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10908_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_10908_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9764_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10908_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10908_output.getInt32(i, 1);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10908_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9764_payload_leftMajor payloadA{_ss_store_sk1213, _ss_ext_sales_price1221, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1061_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_1061_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9764_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _s_store_sk378 = tbl_Filter_TD_1061_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9764_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9764_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_9764_output.setInt32(r, 2, _s_store_sk378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9764_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9764_key_rightMajor, SW_JOIN_INNER_TD_9764_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1061_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_1061_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9764_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_1061_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9764_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10908_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_10908_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9764_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10908_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10908_output.getInt32(i, 1);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10908_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9764_output.setInt32(r, 2, _s_store_sk378);
                tbl_JOIN_INNER_TD_9764_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9764_output.setInt32(r, 1, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9764_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9764_output #Row: " << tbl_JOIN_INNER_TD_9764_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8690_key;
struct SW_Aggregate_TD_8690_payload {
    int32_t _returns6924_sum_0;
    int32_t _profit_loss6925_sum_1;
};
void SW_Aggregate_TD_8690(Table &tbl_JOIN_INNER_TD_9584_output, Table &tbl_Aggregate_TD_8690_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(wp_web_page_sk#7095, MakeDecimal(sum(UnscaledValue(wr_return_amt#846)),17,2) AS returns#6924, MakeDecimal(sum(UnscaledValue(wr_net_loss#854)),17,2) AS profit_loss#6925)
    // Input: ListBuffer(wr_return_amt#846, wr_net_loss#854, wp_web_page_sk#7095)
    // Output: ListBuffer(wp_web_page_sk#7095, returns#6924, profit_loss#6925)
    std::unordered_map<SW_Aggregate_TD_8690_key, SW_Aggregate_TD_8690_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9584_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_9584_output.getInt32(i, 0);
        int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_9584_output.getInt32(i, 1);
        int32_t _wp_web_page_sk7095 = tbl_JOIN_INNER_TD_9584_output.getInt32(i, 2);
        SW_Aggregate_TD_8690_key k = _wp_web_page_sk7095;
        int64_t _returns6924_sum_0 = _wr_return_amt846;
        int64_t _profit_loss6925_sum_1 = _wr_net_loss854;
        SW_Aggregate_TD_8690_payload p{_returns6924_sum_0, _profit_loss6925_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._returns6924_sum_0 + _returns6924_sum_0;
            p._returns6924_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._profit_loss6925_sum_1 + _profit_loss6925_sum_1;
            p._profit_loss6925_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8690_output.setInt32(r, 0, (it.first));
        int32_t _returns6924 = (it.second)._returns6924_sum_0;
        tbl_Aggregate_TD_8690_output.setInt32(r, 1, _returns6924);
        int32_t _profit_loss6925 = (it.second)._profit_loss6925_sum_1;
        tbl_Aggregate_TD_8690_output.setInt32(r, 2, _profit_loss6925);
        ++r;
    }
    tbl_Aggregate_TD_8690_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8690_output #Row: " << tbl_Aggregate_TD_8690_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8619_key;
struct SW_Aggregate_TD_8619_payload {
    int32_t _sales6922_sum_0;
    int32_t _profit6923_sum_1;
};
void SW_Aggregate_TD_8619(Table &tbl_JOIN_INNER_TD_9626_output, Table &tbl_Aggregate_TD_8619_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(wp_web_page_sk#615, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS sales#6922, MakeDecimal(sum(UnscaledValue(ws_net_profit#762)),17,2) AS profit#6923)
    // Input: ListBuffer(ws_ext_sales_price#752, ws_net_profit#762, wp_web_page_sk#615)
    // Output: ListBuffer(wp_web_page_sk#615, sales#6922, profit#6923)
    std::unordered_map<SW_Aggregate_TD_8619_key, SW_Aggregate_TD_8619_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9626_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_9626_output.getInt32(i, 0);
        int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_9626_output.getInt32(i, 1);
        int32_t _wp_web_page_sk615 = tbl_JOIN_INNER_TD_9626_output.getInt32(i, 2);
        SW_Aggregate_TD_8619_key k = _wp_web_page_sk615;
        int64_t _sales6922_sum_0 = _ws_ext_sales_price752;
        int64_t _profit6923_sum_1 = _ws_net_profit762;
        SW_Aggregate_TD_8619_payload p{_sales6922_sum_0, _profit6923_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales6922_sum_0 + _sales6922_sum_0;
            p._sales6922_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._profit6923_sum_1 + _profit6923_sum_1;
            p._profit6923_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8619_output.setInt32(r, 0, (it.first));
        int32_t _sales6922 = (it.second)._sales6922_sum_0;
        tbl_Aggregate_TD_8619_output.setInt32(r, 1, _sales6922);
        int32_t _profit6923 = (it.second)._profit6923_sum_1;
        tbl_Aggregate_TD_8619_output.setInt32(r, 2, _profit6923);
        ++r;
    }
    tbl_Aggregate_TD_8619_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8619_output #Row: " << tbl_Aggregate_TD_8619_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8291_key;
struct SW_Aggregate_TD_8291_payload {
    int32_t _returns6920_sum_0;
    int32_t _profit_loss6921_sum_1;
};
void SW_Aggregate_TD_8291(Table &tbl_JOIN_INNER_TD_9725_output, Table &tbl_Aggregate_TD_8291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cr_call_center_sk#1034, MakeDecimal(sum(UnscaledValue(cr_return_amount#1041)),17,2) AS returns#6920, MakeDecimal(sum(UnscaledValue(cr_net_loss#1049)),17,2) AS profit_loss#6921)
    // Input: ListBuffer(cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(returns#6920, profit_loss#6921)
    std::unordered_map<SW_Aggregate_TD_8291_key, SW_Aggregate_TD_8291_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9725_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_call_center_sk1034 = tbl_JOIN_INNER_TD_9725_output.getInt32(i, 0);
        int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_9725_output.getInt32(i, 1);
        int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_9725_output.getInt32(i, 2);
        SW_Aggregate_TD_8291_key k = _cr_call_center_sk1034;
        int64_t _returns6920_sum_0 = _cr_return_amount1041;
        int64_t _profit_loss6921_sum_1 = _cr_net_loss1049;
        SW_Aggregate_TD_8291_payload p{_returns6920_sum_0, _profit_loss6921_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._returns6920_sum_0 + _returns6920_sum_0;
            p._returns6920_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._profit_loss6921_sum_1 + _profit_loss6921_sum_1;
            p._profit_loss6921_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cr_call_center_sk1034 not required in the output table
        int32_t _returns6920 = (it.second)._returns6920_sum_0;
        tbl_Aggregate_TD_8291_output.setInt32(r, 0, _returns6920);
        int32_t _profit_loss6921 = (it.second)._profit_loss6921_sum_1;
        tbl_Aggregate_TD_8291_output.setInt32(r, 1, _profit_loss6921);
        ++r;
    }
    tbl_Aggregate_TD_8291_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8291_output #Row: " << tbl_Aggregate_TD_8291_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8812_key;
struct SW_Aggregate_TD_8812_payload {
    int32_t _sales6918_sum_0;
    int32_t _profit6919_sum_1;
};
void SW_Aggregate_TD_8812(Table &tbl_JOIN_INNER_TD_9899_output, Table &tbl_Aggregate_TD_8812_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_call_center_sk#1115, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS sales#6918, MakeDecimal(sum(UnscaledValue(cs_net_profit#1137)),17,2) AS profit#6919)
    // Input: ListBuffer(cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(cs_call_center_sk#1115, sales#6918, profit#6919)
    std::unordered_map<SW_Aggregate_TD_8812_key, SW_Aggregate_TD_8812_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9899_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_9899_output.getInt32(i, 0);
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_9899_output.getInt32(i, 1);
        int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9899_output.getInt32(i, 2);
        SW_Aggregate_TD_8812_key k = _cs_call_center_sk1115;
        int64_t _sales6918_sum_0 = _cs_ext_sales_price1127;
        int64_t _profit6919_sum_1 = _cs_net_profit1137;
        SW_Aggregate_TD_8812_payload p{_sales6918_sum_0, _profit6919_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales6918_sum_0 + _sales6918_sum_0;
            p._sales6918_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._profit6919_sum_1 + _profit6919_sum_1;
            p._profit6919_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8812_output.setInt32(r, 0, (it.first));
        int32_t _sales6918 = (it.second)._sales6918_sum_0;
        tbl_Aggregate_TD_8812_output.setInt32(r, 1, _sales6918);
        int32_t _profit6919 = (it.second)._profit6919_sum_1;
        tbl_Aggregate_TD_8812_output.setInt32(r, 2, _profit6919);
        ++r;
    }
    tbl_Aggregate_TD_8812_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8812_output #Row: " << tbl_Aggregate_TD_8812_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8960_key;
struct SW_Aggregate_TD_8960_payload {
    int32_t _returns6916_sum_0;
    int32_t _profit_loss6917_sum_1;
};
void SW_Aggregate_TD_8960(Table &tbl_JOIN_INNER_TD_9582_output, Table &tbl_Aggregate_TD_8960_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_sk#6954, MakeDecimal(sum(UnscaledValue(sr_return_amt#680)),17,2) AS returns#6916, MakeDecimal(sum(UnscaledValue(sr_net_loss#688)),17,2) AS profit_loss#6917)
    // Input: ListBuffer(sr_return_amt#680, sr_net_loss#688, s_store_sk#6954)
    // Output: ListBuffer(s_store_sk#6954, returns#6916, profit_loss#6917)
    std::unordered_map<SW_Aggregate_TD_8960_key, SW_Aggregate_TD_8960_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9582_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_9582_output.getInt32(i, 0);
        int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_9582_output.getInt32(i, 1);
        int32_t _s_store_sk6954 = tbl_JOIN_INNER_TD_9582_output.getInt32(i, 2);
        SW_Aggregate_TD_8960_key k = _s_store_sk6954;
        int64_t _returns6916_sum_0 = _sr_return_amt680;
        int64_t _profit_loss6917_sum_1 = _sr_net_loss688;
        SW_Aggregate_TD_8960_payload p{_returns6916_sum_0, _profit_loss6917_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._returns6916_sum_0 + _returns6916_sum_0;
            p._returns6916_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._profit_loss6917_sum_1 + _profit_loss6917_sum_1;
            p._profit_loss6917_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8960_output.setInt32(r, 0, (it.first));
        int32_t _returns6916 = (it.second)._returns6916_sum_0;
        tbl_Aggregate_TD_8960_output.setInt32(r, 1, _returns6916);
        int32_t _profit_loss6917 = (it.second)._profit_loss6917_sum_1;
        tbl_Aggregate_TD_8960_output.setInt32(r, 2, _profit_loss6917);
        ++r;
    }
    tbl_Aggregate_TD_8960_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8960_output #Row: " << tbl_Aggregate_TD_8960_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8431_key;
struct SW_Aggregate_TD_8431_payload {
    int32_t _sales6914_sum_0;
    int32_t _profit6915_sum_1;
};
void SW_Aggregate_TD_8431(Table &tbl_JOIN_INNER_TD_9764_output, Table &tbl_Aggregate_TD_8431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_sk#378, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS sales#6914, MakeDecimal(sum(UnscaledValue(ss_net_profit#1228)),17,2) AS profit#6915)
    // Input: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378, sales#6914, profit#6915)
    std::unordered_map<SW_Aggregate_TD_8431_key, SW_Aggregate_TD_8431_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9764_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9764_output.getInt32(i, 0);
        int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9764_output.getInt32(i, 1);
        int32_t _s_store_sk378 = tbl_JOIN_INNER_TD_9764_output.getInt32(i, 2);
        SW_Aggregate_TD_8431_key k = _s_store_sk378;
        int64_t _sales6914_sum_0 = _ss_ext_sales_price1221;
        int64_t _profit6915_sum_1 = _ss_net_profit1228;
        SW_Aggregate_TD_8431_payload p{_sales6914_sum_0, _profit6915_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales6914_sum_0 + _sales6914_sum_0;
            p._sales6914_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._profit6915_sum_1 + _profit6915_sum_1;
            p._profit6915_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8431_output.setInt32(r, 0, (it.first));
        int32_t _sales6914 = (it.second)._sales6914_sum_0;
        tbl_Aggregate_TD_8431_output.setInt32(r, 1, _sales6914);
        int32_t _profit6915 = (it.second)._profit6915_sum_1;
        tbl_Aggregate_TD_8431_output.setInt32(r, 2, _profit6915);
        ++r;
    }
    tbl_Aggregate_TD_8431_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8431_output #Row: " << tbl_Aggregate_TD_8431_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_7195_key {
    int32_t _wp_web_page_sk7095;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_7195_key& other) const {
        return ((_wp_web_page_sk7095 == other._wp_web_page_sk7095));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_7195_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_7195_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk7095));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_7195_payload {
    int32_t _wp_web_page_sk7095;
    int32_t _returns6924;
    int32_t _profit_loss6925;
};
void SW_JOIN_LEFTOUTER_TD_7195(Table &tbl_Aggregate_TD_8619_output, Table &tbl_Aggregate_TD_8690_output, Table &tbl_JOIN_LEFTOUTER_TD_7195_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((wp_web_page_sk#615 = wp_web_page_sk#7095))
    // Left Table: ListBuffer(wp_web_page_sk#615, sales#6922, profit#6923)
    // Right Table: ListBuffer(wp_web_page_sk#7095, returns#6924, profit_loss#6925)
    // Output Table: ListBuffer(sales#6922, returns#6924, profit#6923, profit_loss#6925, wp_web_page_sk#615)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_7195_key, SW_JOIN_LEFTOUTER_TD_7195_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_8690_output.getNumRow();
    int nrow2 = tbl_Aggregate_TD_8619_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_web_page_sk7095_k = tbl_Aggregate_TD_8690_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_7195_key keyA{_wp_web_page_sk7095_k};
        int32_t _wp_web_page_sk7095 = tbl_Aggregate_TD_8690_output.getInt32(i, 0);
        int32_t _returns6924 = tbl_Aggregate_TD_8690_output.getInt32(i, 1);
        int32_t _profit_loss6925 = tbl_Aggregate_TD_8690_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_7195_payload payloadA{_wp_web_page_sk7095, _returns6924, _profit_loss6925};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _wp_web_page_sk615_k = tbl_Aggregate_TD_8619_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_7195_key{_wp_web_page_sk615_k});
        int32_t _wp_web_page_sk615 = tbl_Aggregate_TD_8619_output.getInt32(i, 0);
        int32_t _sales6922 = tbl_Aggregate_TD_8619_output.getInt32(i, 1);
        int32_t _profit6923 = tbl_Aggregate_TD_8619_output.getInt32(i, 2);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_7195_key{_wp_web_page_sk615_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _wp_web_page_sk7095 = (it_it->second)._wp_web_page_sk7095;
                int32_t _returns6924 = (it_it->second)._returns6924;
                int32_t _profit_loss6925 = (it_it->second)._profit_loss6925;
                tbl_JOIN_LEFTOUTER_TD_7195_output.setInt32(r, 1, _returns6924);
                tbl_JOIN_LEFTOUTER_TD_7195_output.setInt32(r, 3, _profit_loss6925);
                tbl_JOIN_LEFTOUTER_TD_7195_output.setInt32(r, 4, _wp_web_page_sk615);
                tbl_JOIN_LEFTOUTER_TD_7195_output.setInt32(r, 0, _sales6922);
                tbl_JOIN_LEFTOUTER_TD_7195_output.setInt32(r, 2, _profit6923);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_7195_output.setInt32(r, 4, _wp_web_page_sk615);
            tbl_JOIN_LEFTOUTER_TD_7195_output.setInt32(r, 0, _sales6922);
            tbl_JOIN_LEFTOUTER_TD_7195_output.setInt32(r, 2, _profit6923);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_7195_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_7195_output #Row: " << tbl_JOIN_LEFTOUTER_TD_7195_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_7750(Table &tbl_Aggregate_TD_8812_output, Table &tbl_Aggregate_TD_8291_output, Table &tbl_JOIN_CROSS_TD_7750_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(cs_call_center_sk#1115, sales#6918, profit#6919)
    // Right Table: ListBuffer(returns#6920, profit_loss#6921)
    // Output Table: ListBuffer(sales#6918, returns#6920, profit#6919, profit_loss#6921, cs_call_center_sk#1115)
    int left_nrow = tbl_Aggregate_TD_8812_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_8291_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_7750_output.setInt32(r, 0, tbl_Aggregate_TD_8812_output.getInt32(i, 0));
        tbl_JOIN_CROSS_TD_7750_output.setInt32(r, 1, tbl_Aggregate_TD_8812_output.getInt32(i, 1));
        tbl_JOIN_CROSS_TD_7750_output.setInt32(r, 2, tbl_Aggregate_TD_8812_output.getInt32(i, 2));
        tbl_JOIN_CROSS_TD_7750_output.setInt32(r, 3, tbl_Aggregate_TD_8291_output.getInt32(j, 3));
        tbl_JOIN_CROSS_TD_7750_output.setInt32(r, 4, tbl_Aggregate_TD_8291_output.getInt32(j, 4));
        ++r;
    }
    tbl_JOIN_CROSS_TD_7750_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_7750_output #Row: " << tbl_JOIN_CROSS_TD_7750_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_7362_key {
    int32_t _s_store_sk6954;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_7362_key& other) const {
        return ((_s_store_sk6954 == other._s_store_sk6954));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_7362_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_7362_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk6954));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_7362_payload {
    int32_t _s_store_sk6954;
    int32_t _returns6916;
    int32_t _profit_loss6917;
};
void SW_JOIN_LEFTOUTER_TD_7362(Table &tbl_Aggregate_TD_8431_output, Table &tbl_Aggregate_TD_8960_output, Table &tbl_JOIN_LEFTOUTER_TD_7362_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((s_store_sk#378 = s_store_sk#6954))
    // Left Table: ListBuffer(s_store_sk#378, sales#6914, profit#6915)
    // Right Table: ListBuffer(s_store_sk#6954, returns#6916, profit_loss#6917)
    // Output Table: ListBuffer(sales#6914, returns#6916, profit#6915, profit_loss#6917, s_store_sk#378)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_7362_key, SW_JOIN_LEFTOUTER_TD_7362_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_8960_output.getNumRow();
    int nrow2 = tbl_Aggregate_TD_8431_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk6954_k = tbl_Aggregate_TD_8960_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_7362_key keyA{_s_store_sk6954_k};
        int32_t _s_store_sk6954 = tbl_Aggregate_TD_8960_output.getInt32(i, 0);
        int32_t _returns6916 = tbl_Aggregate_TD_8960_output.getInt32(i, 1);
        int32_t _profit_loss6917 = tbl_Aggregate_TD_8960_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_7362_payload payloadA{_s_store_sk6954, _returns6916, _profit_loss6917};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _s_store_sk378_k = tbl_Aggregate_TD_8431_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_7362_key{_s_store_sk378_k});
        int32_t _s_store_sk378 = tbl_Aggregate_TD_8431_output.getInt32(i, 0);
        int32_t _sales6914 = tbl_Aggregate_TD_8431_output.getInt32(i, 1);
        int32_t _profit6915 = tbl_Aggregate_TD_8431_output.getInt32(i, 2);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_7362_key{_s_store_sk378_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _s_store_sk6954 = (it_it->second)._s_store_sk6954;
                int32_t _returns6916 = (it_it->second)._returns6916;
                int32_t _profit_loss6917 = (it_it->second)._profit_loss6917;
                tbl_JOIN_LEFTOUTER_TD_7362_output.setInt32(r, 1, _returns6916);
                tbl_JOIN_LEFTOUTER_TD_7362_output.setInt32(r, 3, _profit_loss6917);
                tbl_JOIN_LEFTOUTER_TD_7362_output.setInt32(r, 4, _s_store_sk378);
                tbl_JOIN_LEFTOUTER_TD_7362_output.setInt32(r, 0, _sales6914);
                tbl_JOIN_LEFTOUTER_TD_7362_output.setInt32(r, 2, _profit6915);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_7362_output.setInt32(r, 4, _s_store_sk378);
            tbl_JOIN_LEFTOUTER_TD_7362_output.setInt32(r, 0, _sales6914);
            tbl_JOIN_LEFTOUTER_TD_7362_output.setInt32(r, 2, _profit6915);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_7362_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_7362_output #Row: " << tbl_JOIN_LEFTOUTER_TD_7362_output.getNumRow() << std::endl;
}

void SW_Project_TD_6820(Table &tbl_JOIN_LEFTOUTER_TD_7195_output, Table &tbl_Project_TD_6820_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(coalesce(returns#6924, 0.00) AS returns#6909, CheckOverflow((promote_precision(cast(profit#6923 as decimal(18,2))) - promote_precision(cast(coalesce(profit_loss#6925, 0.00) as decimal(18,2)))), DecimalType(18,2), true) AS profit#6910, web channel AS channel#7464, wp_web_page_sk#615 AS id#7465)
    // Input: ListBuffer(sales#6922, returns#6924, profit#6923, profit_loss#6925, wp_web_page_sk#615)
    // Output: ListBuffer(sales#6922, returns#6909, profit#6910, channel#7464, id#7465)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_7195_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales6922 = tbl_JOIN_LEFTOUTER_TD_7195_output.getInt32(i, 0);
        int32_t _returns6924 = tbl_JOIN_LEFTOUTER_TD_7195_output.getInt32(i, 1);
        int32_t _profit6923 = tbl_JOIN_LEFTOUTER_TD_7195_output.getInt32(i, 2);
        int32_t _profit_loss6925 = tbl_JOIN_LEFTOUTER_TD_7195_output.getInt32(i, 3);
        int32_t _wp_web_page_sk615 = tbl_JOIN_LEFTOUTER_TD_7195_output.getInt32(i, 4);
        int32_t _returns6909 = _returns6924;
        tbl_Project_TD_6820_output.setInt32(i, 1, _returns6909);
        int32_t _profit6910 = (_profit6923 - _profit_loss6925);
        tbl_Project_TD_6820_output.setInt32(i, 2, _profit6910);
        std::string _channel7464_str = "web channel";
        std::array<char, TPCDS_READ_MAX + 1> _channel7464{};
        memcpy(_channel7464.data(), _channel7464_str.data(), (_channel7464_str).length());
        tbl_Project_TD_6820_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _channel7464);
        int32_t _id7465 = _wp_web_page_sk615;
        tbl_Project_TD_6820_output.setInt32(i, 4, _id7465);
        tbl_Project_TD_6820_output.setInt32(i, 0, _sales6922);
    }
    tbl_Project_TD_6820_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6820_output #Row: " << tbl_Project_TD_6820_output.getNumRow() << std::endl;
}

void SW_Project_TD_6263(Table &tbl_JOIN_CROSS_TD_7750_output, Table &tbl_Project_TD_6263_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(profit#6919 as decimal(18,2))) - promote_precision(cast(profit_loss#6921 as decimal(18,2)))), DecimalType(18,2), true) AS profit#6906, catalog channel AS channel#7462, cs_call_center_sk#1115 AS id#7463)
    // Input: ListBuffer(sales#6918, returns#6920, profit#6919, profit_loss#6921, cs_call_center_sk#1115)
    // Output: ListBuffer(sales#6918, returns#6920, profit#6906, channel#7462, id#7463)
    int nrow1 = tbl_JOIN_CROSS_TD_7750_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales6918 = tbl_JOIN_CROSS_TD_7750_output.getInt32(i, 0);
        int32_t _returns6920 = tbl_JOIN_CROSS_TD_7750_output.getInt32(i, 1);
        int32_t _profit6919 = tbl_JOIN_CROSS_TD_7750_output.getInt32(i, 2);
        int32_t _profit_loss6921 = tbl_JOIN_CROSS_TD_7750_output.getInt32(i, 3);
        int32_t _cs_call_center_sk1115 = tbl_JOIN_CROSS_TD_7750_output.getInt32(i, 4);
        int32_t _profit6906 = (_profit6919 - _profit_loss6921);
        tbl_Project_TD_6263_output.setInt32(i, 2, _profit6906);
        std::string _channel7462_str = "catalog channel";
        std::array<char, TPCDS_READ_MAX + 1> _channel7462{};
        memcpy(_channel7462.data(), _channel7462_str.data(), (_channel7462_str).length());
        tbl_Project_TD_6263_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _channel7462);
        int32_t _id7463 = _cs_call_center_sk1115;
        tbl_Project_TD_6263_output.setInt32(i, 4, _id7463);
        tbl_Project_TD_6263_output.setInt32(i, 0, _sales6918);
        tbl_Project_TD_6263_output.setInt32(i, 1, _returns6920);
    }
    tbl_Project_TD_6263_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6263_output #Row: " << tbl_Project_TD_6263_output.getNumRow() << std::endl;
}

void SW_Project_TD_6273(Table &tbl_JOIN_LEFTOUTER_TD_7362_output, Table &tbl_Project_TD_6273_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(coalesce(returns#6916, 0.00) AS returns#6902, CheckOverflow((promote_precision(cast(profit#6915 as decimal(18,2))) - promote_precision(cast(coalesce(profit_loss#6917, 0.00) as decimal(18,2)))), DecimalType(18,2), true) AS profit#6903, store channel AS channel#7124, s_store_sk#378 AS id#7125)
    // Input: ListBuffer(sales#6914, returns#6916, profit#6915, profit_loss#6917, s_store_sk#378)
    // Output: ListBuffer(sales#6914, returns#6902, profit#6903, channel#7124, id#7125)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_7362_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales6914 = tbl_JOIN_LEFTOUTER_TD_7362_output.getInt32(i, 0);
        int32_t _returns6916 = tbl_JOIN_LEFTOUTER_TD_7362_output.getInt32(i, 1);
        int32_t _profit6915 = tbl_JOIN_LEFTOUTER_TD_7362_output.getInt32(i, 2);
        int32_t _profit_loss6917 = tbl_JOIN_LEFTOUTER_TD_7362_output.getInt32(i, 3);
        int32_t _s_store_sk378 = tbl_JOIN_LEFTOUTER_TD_7362_output.getInt32(i, 4);
        int32_t _returns6902 = _returns6916;
        tbl_Project_TD_6273_output.setInt32(i, 1, _returns6902);
        int32_t _profit6903 = (_profit6915 - _profit_loss6917);
        tbl_Project_TD_6273_output.setInt32(i, 2, _profit6903);
        std::string _channel7124_str = "store channel";
        std::array<char, TPCDS_READ_MAX + 1> _channel7124{};
        memcpy(_channel7124.data(), _channel7124_str.data(), (_channel7124_str).length());
        tbl_Project_TD_6273_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _channel7124);
        int32_t _id7125 = _s_store_sk378;
        tbl_Project_TD_6273_output.setInt32(i, 4, _id7125);
        tbl_Project_TD_6273_output.setInt32(i, 0, _sales6914);
    }
    tbl_Project_TD_6273_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6273_output #Row: " << tbl_Project_TD_6273_output.getNumRow() << std::endl;
}

void SW_Union_TD_5742(Table &tbl_Project_TD_6273_output, Table &tbl_Project_TD_6263_output, Table &tbl_Project_TD_6820_output, Table &tbl_Union_TD_5742_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#6914, returns#6902, profit#6903, channel#7124, id#7125)
    int r = 0;
    int row0 = tbl_Project_TD_6273_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_5742_output.setInt32(r, 0, tbl_Project_TD_6273_output.getInt32(i, 0));
        tbl_Union_TD_5742_output.setInt32(r, 1, tbl_Project_TD_6273_output.getInt32(i, 1));
        tbl_Union_TD_5742_output.setInt32(r, 2, tbl_Project_TD_6273_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel7124_n = tbl_Union_TD_5742_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5742_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel7124_n);
        tbl_Union_TD_5742_output.setInt32(r, 4, tbl_Project_TD_6273_output.getInt32(i, 4));
        ++r;
    }
    int row1 = tbl_Project_TD_6263_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_5742_output.setInt32(r, 0, tbl_Project_TD_6263_output.getInt32(i, 0));
        tbl_Union_TD_5742_output.setInt32(r, 1, tbl_Project_TD_6263_output.getInt32(i, 1));
        tbl_Union_TD_5742_output.setInt32(r, 2, tbl_Project_TD_6263_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel7462_n = tbl_Union_TD_5742_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5742_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel7462_n);
        tbl_Union_TD_5742_output.setInt32(r, 4, tbl_Project_TD_6263_output.getInt32(i, 4));
        ++r;
    }
    int row2 = tbl_Project_TD_6820_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_5742_output.setInt32(r, 0, tbl_Project_TD_6820_output.getInt32(i, 0));
        tbl_Union_TD_5742_output.setInt32(r, 1, tbl_Project_TD_6820_output.getInt32(i, 1));
        tbl_Union_TD_5742_output.setInt32(r, 2, tbl_Project_TD_6820_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel7464_n = tbl_Union_TD_5742_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5742_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel7464_n);
        tbl_Union_TD_5742_output.setInt32(r, 4, tbl_Project_TD_6820_output.getInt32(i, 4));
        ++r;
    }
    tbl_Union_TD_5742_output.setNumRow(r);
    std::cout << "tbl_Union_TD_5742_output #Row: " << tbl_Union_TD_5742_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4479(Table &tbl_Union_TD_5742_output, Table &tbl_Expand_TD_4479_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(sales#6914, returns#6902, profit#6903, channel#7124, id#7125)
    // Output: ListBuffer(sales#6914, returns#6902, profit#6903, channel#7127, id#7128, spark_grouping_id#7126L)
    std::cout << "tbl_Expand_TD_4479_output #Row: " << tbl_Expand_TD_4479_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3167_key {
    std::string _channel7127;
    int32_t _id7128;
    int64_t _spark_grouping_id7126L;
    bool operator==(const SW_Aggregate_TD_3167_key& other) const { return (_channel7127 == other._channel7127) && (_id7128 == other._id7128) && (_spark_grouping_id7126L == other._spark_grouping_id7126L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3167_key> {
    std::size_t operator() (const SW_Aggregate_TD_3167_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel7127)) + (hash<int32_t>()(k._id7128)) + (hash<int64_t>()(k._spark_grouping_id7126L));
    }
};
}
struct SW_Aggregate_TD_3167_payload {
    int32_t _sales6911_sum_0;
    int32_t _returns6912_sum_1;
    int32_t _profit6913_sum_2;
};
void SW_Aggregate_TD_3167(Table &tbl_Expand_TD_4479_output, Table &tbl_Aggregate_TD_3167_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#7127, id#7128, spark_grouping_id#7126L, sum(sales#6914) AS sales#6911, sum(returns#6902) AS returns#6912, sum(profit#6903) AS profit#6913)
    // Input: ListBuffer(sales#6914, returns#6902, profit#6903, channel#7127, id#7128, spark_grouping_id#7126L)
    // Output: ListBuffer(channel#7127, id#7128, sales#6911, returns#6912, profit#6913)
    std::unordered_map<SW_Aggregate_TD_3167_key, SW_Aggregate_TD_3167_payload> ht1;
    int nrow1 = tbl_Expand_TD_4479_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales6914 = tbl_Expand_TD_4479_output.getInt32(i, 0);
        int32_t _returns6902 = tbl_Expand_TD_4479_output.getInt32(i, 1);
        int32_t _profit6903 = tbl_Expand_TD_4479_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _channel7127 = tbl_Expand_TD_4479_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _id7128 = tbl_Expand_TD_4479_output.getInt32(i, 4);
        int64_t _spark_grouping_id7126L = tbl_Expand_TD_4479_output.getInt64(i, 5);
        SW_Aggregate_TD_3167_key k{std::string(_channel7127.data()), _id7128, _spark_grouping_id7126L};
        int64_t _sales6911_sum_0 = _sales6914;
        int64_t _returns6912_sum_1 = _returns6902;
        int64_t _profit6913_sum_2 = _profit6903;
        SW_Aggregate_TD_3167_payload p{_sales6911_sum_0, _returns6912_sum_1, _profit6913_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales6911_sum_0 + _sales6911_sum_0;
            p._sales6911_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns6912_sum_1 + _returns6912_sum_1;
            p._returns6912_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit6913_sum_2 + _profit6913_sum_2;
            p._profit6913_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel7127{};
        memcpy(_channel7127.data(), ((it.first)._channel7127).data(), ((it.first)._channel7127).length());
        tbl_Aggregate_TD_3167_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel7127);
        tbl_Aggregate_TD_3167_output.setInt32(r, 1, (it.first)._id7128);
        // _spark_grouping_id7126L not required in the output table
        int32_t _sales6911 = (it.second)._sales6911_sum_0;
        tbl_Aggregate_TD_3167_output.setInt32(r, 2, _sales6911);
        int32_t _returns6912 = (it.second)._returns6912_sum_1;
        tbl_Aggregate_TD_3167_output.setInt32(r, 3, _returns6912);
        int32_t _profit6913 = (it.second)._profit6913_sum_2;
        tbl_Aggregate_TD_3167_output.setInt32(r, 4, _profit6913);
        ++r;
    }
    tbl_Aggregate_TD_3167_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3167_output #Row: " << tbl_Aggregate_TD_3167_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2629(Table &tbl_Aggregate_TD_3167_output, Table &tbl_Sort_TD_2629_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#7127 ASC NULLS FIRST, id#7128 ASC NULLS FIRST)
    // Input: ListBuffer(channel#7127, id#7128, sales#6911, returns#6912, profit#6913)
    // Output: ListBuffer(channel#7127, id#7128, sales#6911, returns#6912, profit#6913)
    struct SW_Sort_TD_2629Row {
        std::string _channel7127;
        int32_t _id7128;
        int32_t _sales6911;
        int32_t _returns6912;
        int32_t _profit6913;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2629Row& a, const SW_Sort_TD_2629Row& b) const { return 
 (a._channel7127 < b._channel7127) || 
 ((a._channel7127 == b._channel7127) && (a._id7128 < b._id7128)); 
}
    }SW_Sort_TD_2629_order; 

    int nrow1 = tbl_Aggregate_TD_3167_output.getNumRow();
    std::vector<SW_Sort_TD_2629Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel7127 = tbl_Aggregate_TD_3167_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _id7128 = tbl_Aggregate_TD_3167_output.getInt32(i, 1);
        int32_t _sales6911 = tbl_Aggregate_TD_3167_output.getInt32(i, 2);
        int32_t _returns6912 = tbl_Aggregate_TD_3167_output.getInt32(i, 3);
        int32_t _profit6913 = tbl_Aggregate_TD_3167_output.getInt32(i, 4);
        SW_Sort_TD_2629Row t = {std::string(_channel7127.data()),_id7128,_sales6911,_returns6912,_profit6913};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2629_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel7127{};
        memcpy(_channel7127.data(), (it._channel7127).data(), (it._channel7127).length());
        tbl_Sort_TD_2629_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel7127);
        tbl_Sort_TD_2629_output.setInt32(r, 1, it._id7128);
        tbl_Sort_TD_2629_output.setInt32(r, 2, it._sales6911);
        tbl_Sort_TD_2629_output.setInt32(r, 3, it._returns6912);
        tbl_Sort_TD_2629_output.setInt32(r, 4, it._profit6913);
        ++r;
    }
    tbl_Sort_TD_2629_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2629_output #Row: " << tbl_Sort_TD_2629_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1987(Table &tbl_Sort_TD_2629_output, Table &tbl_LocalLimit_TD_1987_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#7127, id#7128, sales#6911, returns#6912, profit#6913)
    // Output: ListBuffer(channel#7127, id#7128, sales#6911, returns#6912, profit#6913)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel7127_n = tbl_Sort_TD_2629_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1987_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel7127_n);
        tbl_LocalLimit_TD_1987_output.setInt32(r, 1, tbl_Sort_TD_2629_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1987_output.setInt32(r, 2, tbl_Sort_TD_2629_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1987_output.setInt32(r, 3, tbl_Sort_TD_2629_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1987_output.setInt32(r, 4, tbl_Sort_TD_2629_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1987_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1987_output #Row: " << tbl_LocalLimit_TD_1987_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0610(Table &tbl_LocalLimit_TD_1987_output, Table &tbl_GlobalLimit_TD_0610_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#7127, id#7128, sales#6911, returns#6912, profit#6913)
    // Output: ListBuffer(channel#7127, id#7128, sales#6911, returns#6912, profit#6913)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel7127_n = tbl_LocalLimit_TD_1987_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0610_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel7127_n);
        tbl_GlobalLimit_TD_0610_output.setInt32(r, 1, tbl_LocalLimit_TD_1987_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0610_output.setInt32(r, 2, tbl_LocalLimit_TD_1987_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0610_output.setInt32(r, 3, tbl_LocalLimit_TD_1987_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0610_output.setInt32(r, 4, tbl_LocalLimit_TD_1987_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0610_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0610_output #Row: " << tbl_GlobalLimit_TD_0610_output.getNumRow() << std::endl;
}

