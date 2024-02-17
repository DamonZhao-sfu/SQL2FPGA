#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6646(Table &tbl_SerializeFromObject_TD_7460_input, Table &tbl_Filter_TD_6646_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ws_ship_date_sk#731) AND isnotnull(ws_ship_addr_sk#740)) AND isnotnull(ws_web_site_sk#742)))
    // Input: ListBuffer(ws_ship_date_sk#731, ws_ship_addr_sk#740, ws_web_site_sk#742, ws_warehouse_sk#744, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    // Output: ListBuffer(ws_ship_date_sk#731, ws_ship_addr_sk#740, ws_web_site_sk#742, ws_warehouse_sk#744, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7460_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_date_sk731 = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 0);
        int32_t _ws_ship_addr_sk740 = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 1);
        int32_t _ws_web_site_sk742 = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 2);
        if (((_ws_ship_date_sk731!= 0) && (_ws_ship_addr_sk740!= 0)) && (_ws_web_site_sk742!= 0)) {
            int32_t _ws_ship_date_sk731_t = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 0);
            tbl_Filter_TD_6646_output.setInt32(r, 0, _ws_ship_date_sk731_t);
            int32_t _ws_ship_addr_sk740_t = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 1);
            tbl_Filter_TD_6646_output.setInt32(r, 1, _ws_ship_addr_sk740_t);
            int32_t _ws_web_site_sk742_t = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 2);
            tbl_Filter_TD_6646_output.setInt32(r, 2, _ws_web_site_sk742_t);
            int32_t _ws_warehouse_sk744_t = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 3);
            tbl_Filter_TD_6646_output.setInt32(r, 3, _ws_warehouse_sk744_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_7460_input.getInt64(i, 4);
            tbl_Filter_TD_6646_output.setInt64(r, 4, _ws_order_number746L_t);
            int32_t _ws_ext_ship_cost757_t = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 5);
            tbl_Filter_TD_6646_output.setInt32(r, 5, _ws_ext_ship_cost757_t);
            int32_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_7460_input.getInt32(i, 6);
            tbl_Filter_TD_6646_output.setInt32(r, 6, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_6646_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6646_output #Row: " << tbl_Filter_TD_6646_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_5296_key_leftMajor {
    int64_t _ws_order_number746L;
    int32_t _ws_warehouse_sk744;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_5296_key_leftMajor& other) const {
        return ((_ws_order_number746L == other._ws_order_number746L) && (_ws_warehouse_sk744 == other._ws_warehouse_sk744));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_5296_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_5296_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number746L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_5296_payload_leftMajor {
    int32_t _ws_ship_date_sk731;
    int32_t _ws_ship_addr_sk740;
    int32_t _ws_web_site_sk742;
    int32_t _ws_warehouse_sk744;
    int64_t _ws_order_number746L;
    int32_t _ws_ext_ship_cost757;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_LEFTSEMI_TD_5296_key_rightMajor {
    int64_t _ws_order_number10630L;
    int32_t _ws_warehouse_sk10628;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_5296_key_rightMajor& other) const {
        return ((_ws_order_number10630L == other._ws_order_number10630L) && (_ws_warehouse_sk10628 == other._ws_warehouse_sk10628));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_5296_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_5296_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number10630L));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_5296_payload_rightMajor {
    int32_t _ws_warehouse_sk10628;
    int64_t _ws_order_number10630L;
};
void SW_JOIN_LEFTSEMI_TD_5296(Table &tbl_Filter_TD_6646_output, Table &tbl_SerializeFromObject_TD_6349_input, Table &tbl_JOIN_LEFTSEMI_TD_5296_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer(((ws_order_number#746L = ws_order_number#10630L) AND NOT (ws_warehouse_sk#744 = ws_warehouse_sk#10628)))
    // Left Table: ListBuffer(ws_ship_date_sk#731, ws_ship_addr_sk#740, ws_web_site_sk#742, ws_warehouse_sk#744, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    // Right Table: ListBuffer(ws_warehouse_sk#10628, ws_order_number#10630L)
    // Output Table: ListBuffer(ws_ship_date_sk#731, ws_ship_addr_sk#740, ws_web_site_sk#742, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    int left_nrow = tbl_Filter_TD_6646_output.getNumRow();
    int right_nrow = tbl_SerializeFromObject_TD_6349_input.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_5296_key_rightMajor, SW_JOIN_LEFTSEMI_TD_5296_payload_rightMajor> ht1;
        int nrow1 = tbl_SerializeFromObject_TD_6349_input.getNumRow();
        int nrow2 = tbl_Filter_TD_6646_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _ws_order_number10630L_k = tbl_SerializeFromObject_TD_6349_input.getInt64(i, 1);
            int32_t _ws_warehouse_sk10628_k = tbl_SerializeFromObject_TD_6349_input.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_5296_key_rightMajor keyA{_ws_order_number10630L_k, _ws_warehouse_sk10628_k};
            int32_t _ws_warehouse_sk10628 = tbl_SerializeFromObject_TD_6349_input.getInt32(i, 0);
            int64_t _ws_order_number10630L = tbl_SerializeFromObject_TD_6349_input.getInt64(i, 1);
            SW_JOIN_LEFTSEMI_TD_5296_payload_rightMajor payloadA{_ws_warehouse_sk10628, _ws_order_number10630L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number746L_k = tbl_Filter_TD_6646_output.getInt64(i, 4);
            int32_t _ws_warehouse_sk744_k = tbl_Filter_TD_6646_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_5296_key_rightMajor{_ws_order_number746L_k, _ws_warehouse_sk744_k});
            if (it != ht1.end()) {
                int32_t _ws_ship_date_sk731 = tbl_Filter_TD_6646_output.getInt32(i, 0);
                int32_t _ws_ship_addr_sk740 = tbl_Filter_TD_6646_output.getInt32(i, 1);
                int32_t _ws_web_site_sk742 = tbl_Filter_TD_6646_output.getInt32(i, 2);
                int32_t _ws_warehouse_sk744 = tbl_Filter_TD_6646_output.getInt32(i, 3);
                int64_t _ws_order_number746L = tbl_Filter_TD_6646_output.getInt64(i, 4);
                int32_t _ws_ext_ship_cost757 = tbl_Filter_TD_6646_output.getInt32(i, 5);
                int32_t _ws_net_profit762 = tbl_Filter_TD_6646_output.getInt32(i, 6);
                tbl_JOIN_LEFTSEMI_TD_5296_output.setInt32(r, 0, _ws_ship_date_sk731);
                tbl_JOIN_LEFTSEMI_TD_5296_output.setInt32(r, 1, _ws_ship_addr_sk740);
                tbl_JOIN_LEFTSEMI_TD_5296_output.setInt32(r, 2, _ws_web_site_sk742);
                tbl_JOIN_LEFTSEMI_TD_5296_output.setInt64(r, 3, _ws_order_number746L);
                tbl_JOIN_LEFTSEMI_TD_5296_output.setInt32(r, 4, _ws_ext_ship_cost757);
                tbl_JOIN_LEFTSEMI_TD_5296_output.setInt32(r, 5, _ws_net_profit762);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_5296_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_5296_output #Row: " << tbl_JOIN_LEFTSEMI_TD_5296_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4599(Table &tbl_SerializeFromObject_TD_5514_input, Table &tbl_Filter_TD_4599_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 1999-02-01) AND (d_date#122 <= 1999-04-02))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5514_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_5514_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_5514_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 19990201) && (_d_date122 <= 19990402))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_5514_input.getInt32(i, 0);
            tbl_Filter_TD_4599_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_4599_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4599_output #Row: " << tbl_Filter_TD_4599_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTANTI_TD_4927_key_leftMajor {
    int64_t _ws_order_number746L;
    bool operator==(const SW_JOIN_LEFTANTI_TD_4927_key_leftMajor& other) const {
        return ((_ws_order_number746L == other._ws_order_number746L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_4927_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_4927_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._ws_order_number746L));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_4927_payload_leftMajor {
    int32_t _ws_ship_date_sk731;
    int32_t _ws_ship_addr_sk740;
    int32_t _ws_web_site_sk742;
    int64_t _ws_order_number746L;
    int32_t _ws_ext_ship_cost757;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_LEFTANTI_TD_4927_key_rightMajor {
    int64_t _wr_order_number844L;
    bool operator==(const SW_JOIN_LEFTANTI_TD_4927_key_rightMajor& other) const {
        return ((_wr_order_number844L == other._wr_order_number844L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTANTI_TD_4927_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTANTI_TD_4927_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number844L));
    }
};
}
struct SW_JOIN_LEFTANTI_TD_4927_payload_rightMajor {
    int64_t _wr_order_number844L;
};
void SW_JOIN_LEFTANTI_TD_4927(Table &tbl_JOIN_LEFTSEMI_TD_5296_output, Table &tbl_SerializeFromObject_TD_5910_input, Table &tbl_JOIN_LEFTANTI_TD_4927_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTANTI
    // Operation: ListBuffer((ws_order_number#746L = wr_order_number#844L))
    // Left Table: ListBuffer(ws_ship_date_sk#731, ws_ship_addr_sk#740, ws_web_site_sk#742, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    // Right Table: ListBuffer(wr_order_number#844L)
    // Output Table: ListBuffer(ws_ship_date_sk#731, ws_ship_addr_sk#740, ws_web_site_sk#742, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_5296_output.getNumRow();
    int right_nrow = tbl_SerializeFromObject_TD_5910_input.getNumRow();
        std::unordered_map<SW_JOIN_LEFTANTI_TD_4927_key_rightMajor, SW_JOIN_LEFTANTI_TD_4927_payload_rightMajor> ht1;
        int nrow1 = tbl_SerializeFromObject_TD_5910_input.getNumRow();
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_5296_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int64_t _wr_order_number844L_k = tbl_SerializeFromObject_TD_5910_input.getInt64(i, 0);
            SW_JOIN_LEFTANTI_TD_4927_key_rightMajor keyA{_wr_order_number844L_k};
            int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_5910_input.getInt64(i, 0);
            SW_JOIN_LEFTANTI_TD_4927_payload_rightMajor payloadA{_wr_order_number844L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int64_t _ws_order_number746L_k = tbl_JOIN_LEFTSEMI_TD_5296_output.getInt64(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTANTI_TD_4927_key_rightMajor{_ws_order_number746L_k});
            if (it == ht1.end()) {
                int32_t _ws_ship_date_sk731 = tbl_JOIN_LEFTSEMI_TD_5296_output.getInt32(i, 0);
                int32_t _ws_ship_addr_sk740 = tbl_JOIN_LEFTSEMI_TD_5296_output.getInt32(i, 1);
                int32_t _ws_web_site_sk742 = tbl_JOIN_LEFTSEMI_TD_5296_output.getInt32(i, 2);
                int64_t _ws_order_number746L = tbl_JOIN_LEFTSEMI_TD_5296_output.getInt64(i, 3);
                int32_t _ws_ext_ship_cost757 = tbl_JOIN_LEFTSEMI_TD_5296_output.getInt32(i, 4);
                int32_t _ws_net_profit762 = tbl_JOIN_LEFTSEMI_TD_5296_output.getInt32(i, 5);
                tbl_JOIN_LEFTANTI_TD_4927_output.setInt32(r, 0, _ws_ship_date_sk731);
                tbl_JOIN_LEFTANTI_TD_4927_output.setInt32(r, 1, _ws_ship_addr_sk740);
                tbl_JOIN_LEFTANTI_TD_4927_output.setInt32(r, 2, _ws_web_site_sk742);
                tbl_JOIN_LEFTANTI_TD_4927_output.setInt64(r, 3, _ws_order_number746L);
                tbl_JOIN_LEFTANTI_TD_4927_output.setInt32(r, 4, _ws_ext_ship_cost757);
                tbl_JOIN_LEFTANTI_TD_4927_output.setInt32(r, 5, _ws_net_profit762);
                r++;
            }
        }
        tbl_JOIN_LEFTANTI_TD_4927_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTANTI_TD_4927_output #Row: " << tbl_JOIN_LEFTANTI_TD_4927_output.getNumRow() << std::endl;
}

void SW_Filter_TD_351(Table &tbl_SerializeFromObject_TD_4317_input, Table &tbl_Filter_TD_351_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_state#62) AND (ca_state#62 = IL)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4317_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_4317_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_4317_input.getInt32(i, 0);
        if ((（std::string(_isnotnullca_state62.data()) != "NULL") && (std::string(_ca_state62.data()) == "IL")) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_4317_input.getInt32(i, 0);
            tbl_Filter_TD_351_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_351_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_351_output #Row: " << tbl_Filter_TD_351_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3753_key_leftMajor {
    int32_t _ws_ship_date_sk731;
    bool operator==(const SW_JOIN_INNER_TD_3753_key_leftMajor& other) const {
        return ((_ws_ship_date_sk731 == other._ws_ship_date_sk731));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3753_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3753_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_ship_date_sk731));
    }
};
}
struct SW_JOIN_INNER_TD_3753_payload_leftMajor {
    int32_t _ws_ship_date_sk731;
    int32_t _ws_ship_addr_sk740;
    int32_t _ws_web_site_sk742;
    int64_t _ws_order_number746L;
    int32_t _ws_ext_ship_cost757;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_3753_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_3753_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3753_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3753_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_3753_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_3753(Table &tbl_JOIN_LEFTANTI_TD_4927_output, Table &tbl_Filter_TD_4599_output, Table &tbl_JOIN_INNER_TD_3753_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_ship_date_sk#731 = d_date_sk#120))
    // Left Table: ListBuffer(ws_ship_date_sk#731, ws_ship_addr_sk#740, ws_web_site_sk#742, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ws_ship_addr_sk#740, ws_web_site_sk#742, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    int left_nrow = tbl_JOIN_LEFTANTI_TD_4927_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4599_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3753_key_leftMajor, SW_JOIN_INNER_TD_3753_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTANTI_TD_4927_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_ship_date_sk731_k = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3753_key_leftMajor keyA{_ws_ship_date_sk731_k};
            int32_t _ws_ship_date_sk731 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 0);
            int32_t _ws_ship_addr_sk740 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 1);
            int32_t _ws_web_site_sk742 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 2);
            int64_t _ws_order_number746L = tbl_JOIN_LEFTANTI_TD_4927_output.getInt64(i, 3);
            int32_t _ws_ext_ship_cost757 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 4);
            int32_t _ws_net_profit762 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_3753_payload_leftMajor payloadA{_ws_ship_date_sk731, _ws_ship_addr_sk740, _ws_web_site_sk742, _ws_order_number746L, _ws_ext_ship_cost757, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4599_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_4599_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3753_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_ship_date_sk731 = (it->second)._ws_ship_date_sk731;
                int32_t _ws_ship_addr_sk740 = (it->second)._ws_ship_addr_sk740;
                int32_t _ws_web_site_sk742 = (it->second)._ws_web_site_sk742;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_ext_ship_cost757 = (it->second)._ws_ext_ship_cost757;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _d_date_sk120 = tbl_Filter_TD_4599_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3753_output.setInt32(r, 0, _ws_ship_addr_sk740);
                tbl_JOIN_INNER_TD_3753_output.setInt32(r, 1, _ws_web_site_sk742);
                tbl_JOIN_INNER_TD_3753_output.setInt64(r, 2, _ws_order_number746L);
                tbl_JOIN_INNER_TD_3753_output.setInt32(r, 3, _ws_ext_ship_cost757);
                tbl_JOIN_INNER_TD_3753_output.setInt32(r, 4, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3753_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3753_key_rightMajor, SW_JOIN_INNER_TD_3753_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4599_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_4599_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3753_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_4599_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3753_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTANTI_TD_4927_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_ship_date_sk731_k = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3753_key_rightMajor{_ws_ship_date_sk731_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ws_ship_date_sk731 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 0);
                int32_t _ws_ship_addr_sk740 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 1);
                int32_t _ws_web_site_sk742 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 2);
                int64_t _ws_order_number746L = tbl_JOIN_LEFTANTI_TD_4927_output.getInt64(i, 3);
                int32_t _ws_ext_ship_cost757 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 4);
                int32_t _ws_net_profit762 = tbl_JOIN_LEFTANTI_TD_4927_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_3753_output.setInt32(r, 0, _ws_ship_addr_sk740);
                tbl_JOIN_INNER_TD_3753_output.setInt32(r, 1, _ws_web_site_sk742);
                tbl_JOIN_INNER_TD_3753_output.setInt64(r, 2, _ws_order_number746L);
                tbl_JOIN_INNER_TD_3753_output.setInt32(r, 3, _ws_ext_ship_cost757);
                tbl_JOIN_INNER_TD_3753_output.setInt32(r, 4, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3753_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3753_output #Row: " << tbl_JOIN_INNER_TD_3753_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2173(Table &tbl_SerializeFromObject_TD_3180_input, Table &tbl_Filter_TD_2173_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(web_company_name#551) AND (web_company_name#551 = pri)) AND isnotnull(web_site_sk#537)))
    // Input: ListBuffer(web_site_sk#537, web_company_name#551)
    // Output: ListBuffer(web_site_sk#537)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3180_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _web_company_name551 = tbl_SerializeFromObject_TD_3180_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _web_site_sk537 = tbl_SerializeFromObject_TD_3180_input.getInt32(i, 0);
        if ((（std::string(_isnotnullweb_company_name551.data()) != "NULL") && (std::string(_web_company_name551.data()) == "pri")) && (_web_site_sk537!= 0)) {
            int32_t _web_site_sk537_t = tbl_SerializeFromObject_TD_3180_input.getInt32(i, 0);
            tbl_Filter_TD_2173_output.setInt32(r, 0, _web_site_sk537_t);
            r++;
        }
    }
    tbl_Filter_TD_2173_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2173_output #Row: " << tbl_Filter_TD_2173_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2816_key_leftMajor {
    int32_t _ws_ship_addr_sk740;
    bool operator==(const SW_JOIN_INNER_TD_2816_key_leftMajor& other) const {
        return ((_ws_ship_addr_sk740 == other._ws_ship_addr_sk740));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2816_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2816_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_ship_addr_sk740));
    }
};
}
struct SW_JOIN_INNER_TD_2816_payload_leftMajor {
    int32_t _ws_ship_addr_sk740;
    int32_t _ws_web_site_sk742;
    int64_t _ws_order_number746L;
    int32_t _ws_ext_ship_cost757;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_2816_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_2816_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2816_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2816_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_2816_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_2816(Table &tbl_JOIN_INNER_TD_3753_output, Table &tbl_Filter_TD_351_output, Table &tbl_JOIN_INNER_TD_2816_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_ship_addr_sk#740 = ca_address_sk#54))
    // Left Table: ListBuffer(ws_ship_addr_sk#740, ws_web_site_sk#742, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(ws_web_site_sk#742, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    int left_nrow = tbl_JOIN_INNER_TD_3753_output.getNumRow();
    int right_nrow = tbl_Filter_TD_351_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2816_key_leftMajor, SW_JOIN_INNER_TD_2816_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3753_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_ship_addr_sk740_k = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2816_key_leftMajor keyA{_ws_ship_addr_sk740_k};
            int32_t _ws_ship_addr_sk740 = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 0);
            int32_t _ws_web_site_sk742 = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 1);
            int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_3753_output.getInt64(i, 2);
            int32_t _ws_ext_ship_cost757 = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 3);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_2816_payload_leftMajor payloadA{_ws_ship_addr_sk740, _ws_web_site_sk742, _ws_order_number746L, _ws_ext_ship_cost757, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_351_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_351_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2816_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_ship_addr_sk740 = (it->second)._ws_ship_addr_sk740;
                int32_t _ws_web_site_sk742 = (it->second)._ws_web_site_sk742;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_ext_ship_cost757 = (it->second)._ws_ext_ship_cost757;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _ca_address_sk54 = tbl_Filter_TD_351_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_2816_output.setInt32(r, 0, _ws_web_site_sk742);
                tbl_JOIN_INNER_TD_2816_output.setInt64(r, 1, _ws_order_number746L);
                tbl_JOIN_INNER_TD_2816_output.setInt32(r, 2, _ws_ext_ship_cost757);
                tbl_JOIN_INNER_TD_2816_output.setInt32(r, 3, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2816_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2816_key_rightMajor, SW_JOIN_INNER_TD_2816_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_351_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_351_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2816_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_351_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2816_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3753_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_ship_addr_sk740_k = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2816_key_rightMajor{_ws_ship_addr_sk740_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _ws_ship_addr_sk740 = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 0);
                int32_t _ws_web_site_sk742 = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 1);
                int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_3753_output.getInt64(i, 2);
                int32_t _ws_ext_ship_cost757 = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 3);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_3753_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_2816_output.setInt32(r, 0, _ws_web_site_sk742);
                tbl_JOIN_INNER_TD_2816_output.setInt64(r, 1, _ws_order_number746L);
                tbl_JOIN_INNER_TD_2816_output.setInt32(r, 2, _ws_ext_ship_cost757);
                tbl_JOIN_INNER_TD_2816_output.setInt32(r, 3, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2816_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2816_output #Row: " << tbl_JOIN_INNER_TD_2816_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1664_key_leftMajor {
    int32_t _ws_web_site_sk742;
    bool operator==(const SW_JOIN_INNER_TD_1664_key_leftMajor& other) const {
        return ((_ws_web_site_sk742 == other._ws_web_site_sk742));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1664_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1664_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_site_sk742));
    }
};
}
struct SW_JOIN_INNER_TD_1664_payload_leftMajor {
    int32_t _ws_web_site_sk742;
    int64_t _ws_order_number746L;
    int32_t _ws_ext_ship_cost757;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_1664_key_rightMajor {
    int32_t _web_site_sk537;
    bool operator==(const SW_JOIN_INNER_TD_1664_key_rightMajor& other) const {
        return ((_web_site_sk537 == other._web_site_sk537));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1664_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1664_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._web_site_sk537));
    }
};
}
struct SW_JOIN_INNER_TD_1664_payload_rightMajor {
    int32_t _web_site_sk537;
};
void SW_JOIN_INNER_TD_1664(Table &tbl_JOIN_INNER_TD_2816_output, Table &tbl_Filter_TD_2173_output, Table &tbl_JOIN_INNER_TD_1664_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_site_sk#742 = web_site_sk#537))
    // Left Table: ListBuffer(ws_web_site_sk#742, ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    // Right Table: ListBuffer(web_site_sk#537)
    // Output Table: ListBuffer(ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    int left_nrow = tbl_JOIN_INNER_TD_2816_output.getNumRow();
    int right_nrow = tbl_Filter_TD_2173_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1664_key_leftMajor, SW_JOIN_INNER_TD_1664_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2816_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_site_sk742_k = tbl_JOIN_INNER_TD_2816_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1664_key_leftMajor keyA{_ws_web_site_sk742_k};
            int32_t _ws_web_site_sk742 = tbl_JOIN_INNER_TD_2816_output.getInt32(i, 0);
            int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_2816_output.getInt64(i, 1);
            int32_t _ws_ext_ship_cost757 = tbl_JOIN_INNER_TD_2816_output.getInt32(i, 2);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_2816_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1664_payload_leftMajor payloadA{_ws_web_site_sk742, _ws_order_number746L, _ws_ext_ship_cost757, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2173_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_2173_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1664_key_leftMajor{_web_site_sk537_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_web_site_sk742 = (it->second)._ws_web_site_sk742;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_ext_ship_cost757 = (it->second)._ws_ext_ship_cost757;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _web_site_sk537 = tbl_Filter_TD_2173_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1664_output.setInt64(r, 0, _ws_order_number746L);
                tbl_JOIN_INNER_TD_1664_output.setInt32(r, 1, _ws_ext_ship_cost757);
                tbl_JOIN_INNER_TD_1664_output.setInt32(r, 2, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1664_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1664_key_rightMajor, SW_JOIN_INNER_TD_1664_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_2173_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_2173_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1664_key_rightMajor keyA{_web_site_sk537_k};
            int32_t _web_site_sk537 = tbl_Filter_TD_2173_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1664_payload_rightMajor payloadA{_web_site_sk537};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_2816_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_site_sk742_k = tbl_JOIN_INNER_TD_2816_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1664_key_rightMajor{_ws_web_site_sk742_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _web_site_sk537 = (it->second)._web_site_sk537;
                int32_t _ws_web_site_sk742 = tbl_JOIN_INNER_TD_2816_output.getInt32(i, 0);
                int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_2816_output.getInt64(i, 1);
                int32_t _ws_ext_ship_cost757 = tbl_JOIN_INNER_TD_2816_output.getInt32(i, 2);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_2816_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1664_output.setInt64(r, 0, _ws_order_number746L);
                tbl_JOIN_INNER_TD_1664_output.setInt32(r, 1, _ws_ext_ship_cost757);
                tbl_JOIN_INNER_TD_1664_output.setInt32(r, 2, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1664_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1664_output #Row: " << tbl_JOIN_INNER_TD_1664_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_0575(Table &tbl_JOIN_INNER_TD_1664_output, Table &tbl_Aggregate_TD_0575_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(distinct ws_order_number#746L) AS order count#10608L, MakeDecimal(sum(UnscaledValue(ws_ext_ship_cost#757)),17,2) AS total shipping cost#10609, MakeDecimal(sum(UnscaledValue(ws_net_profit#762)),17,2) AS total net profit#10610)
    // Input: ListBuffer(ws_order_number#746L, ws_ext_ship_cost#757, ws_net_profit#762)
    // Output: ListBuffer(order count#10608L, total shipping cost#10609, total net profit#10610)
    int64_t count_0 = 0;
    int64_t sum_1 = 0;
    int64_t sum_2 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1664_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_1664_output.getInt64(i, 0);
        int32_t _ws_ext_ship_cost757 = tbl_JOIN_INNER_TD_1664_output.getInt32(i, 1);
        int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_1664_output.getInt32(i, 2);
        int64_t _count10608L_count_0 = _ws_order_number746L;
        int64_t _cost10609_sum_1 = _ws_ext_ship_cost757;
        int64_t _profit10610_sum_2 = _ws_net_profit762;
        count_0 += _count10608L_count_0;
        sum_1 += _cost10609_sum_1;
        sum_2 += _profit10610_sum_2;
    }
    int r = 0;
    int64_t _count10608L = count_0;
    tbl_Aggregate_TD_0575_output.setInt64(r++, 0, _count10608L);
    int32_t _cost10609 = sum_1;
    tbl_Aggregate_TD_0575_output.setInt32(r++, 1, _cost10609);
    int32_t _profit10610 = sum_2;
    tbl_Aggregate_TD_0575_output.setInt32(r++, 2, _profit10610);
    tbl_Aggregate_TD_0575_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0575_output #Row: " << tbl_Aggregate_TD_0575_output.getNumRow() << std::endl;
}

