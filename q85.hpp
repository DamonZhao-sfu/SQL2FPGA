#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_11778(Table &tbl_SerializeFromObject_TD_12661_input, Table &tbl_Filter_TD_11778_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(wr_item_sk#833) AND isnotnull(wr_order_number#844L)) AND isnotnull(wr_refunded_cdemo_sk#835)) AND ((isnotnull(wr_returning_cdemo_sk#839) AND isnotnull(wr_refunded_addr_sk#837)) AND isnotnull(wr_reason_sk#843))))
    // Input: ListBuffer(wr_item_sk#833, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_order_number#844L, wr_fee#849, wr_refunded_cash#851)
    // Output: ListBuffer(wr_item_sk#833, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_order_number#844L, wr_fee#849, wr_refunded_cash#851)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12661_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_12661_input.getInt64(i, 5);
        int32_t _wr_refunded_cdemo_sk835 = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 1);
        int32_t _wr_returning_cdemo_sk839 = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 3);
        int32_t _wr_refunded_addr_sk837 = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 2);
        int32_t _wr_reason_sk843 = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 4);
        if ((((_wr_item_sk833!= 0) && (_wr_order_number844L!= 0)) && (_wr_refunded_cdemo_sk835!= 0)) && (((_wr_returning_cdemo_sk839!= 0) && (_wr_refunded_addr_sk837!= 0)) && (_wr_reason_sk843!= 0))) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 0);
            tbl_Filter_TD_11778_output.setInt32(r, 0, _wr_item_sk833_t);
            int32_t _wr_refunded_cdemo_sk835_t = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 1);
            tbl_Filter_TD_11778_output.setInt32(r, 1, _wr_refunded_cdemo_sk835_t);
            int32_t _wr_refunded_addr_sk837_t = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 2);
            tbl_Filter_TD_11778_output.setInt32(r, 2, _wr_refunded_addr_sk837_t);
            int32_t _wr_returning_cdemo_sk839_t = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 3);
            tbl_Filter_TD_11778_output.setInt32(r, 3, _wr_returning_cdemo_sk839_t);
            int32_t _wr_reason_sk843_t = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 4);
            tbl_Filter_TD_11778_output.setInt32(r, 4, _wr_reason_sk843_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_12661_input.getInt64(i, 5);
            tbl_Filter_TD_11778_output.setInt64(r, 5, _wr_order_number844L_t);
            int32_t _wr_fee849_t = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 6);
            tbl_Filter_TD_11778_output.setInt32(r, 6, _wr_fee849_t);
            int32_t _wr_refunded_cash851_t = tbl_SerializeFromObject_TD_12661_input.getInt32(i, 7);
            tbl_Filter_TD_11778_output.setInt32(r, 7, _wr_refunded_cash851_t);
            r++;
        }
    }
    tbl_Filter_TD_11778_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11778_output #Row: " << tbl_Filter_TD_11778_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11340(Table &tbl_SerializeFromObject_TD_12175_input, Table &tbl_Filter_TD_11340_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(ws_item_sk#732) AND isnotnull(ws_order_number#746L)) AND isnotnull(ws_web_page_sk#741)) AND isnotnull(ws_sold_date_sk#729)) AND (((((ws_sales_price#750 >= 100.00) AND (ws_sales_price#750 <= 150.00)) OR ((ws_sales_price#750 >= 50.00) AND (ws_sales_price#750 <= 100.00))) OR ((ws_sales_price#750 >= 150.00) AND (ws_sales_price#750 <= 200.00))) AND ((((ws_net_profit#762 >= 100.00) AND (ws_net_profit#762 <= 200.00)) OR ((ws_net_profit#762 >= 150.00) AND (ws_net_profit#762 <= 300.00))) OR ((ws_net_profit#762 >= 50.00) AND (ws_net_profit#762 <= 250.00))))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_page_sk#741, ws_order_number#746L, ws_quantity#747, ws_sales_price#750, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_page_sk#741, ws_order_number#746L, ws_quantity#747, ws_sales_price#750, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12175_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 1);
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_12175_input.getInt64(i, 3);
        int32_t _ws_web_page_sk741 = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 2);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 0);
        int32_t _ws_sales_price750 = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 5);
        int32_t _ws_net_profit762 = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 6);
        if (((((_ws_item_sk732!= 0) && (_ws_order_number746L!= 0)) && (_ws_web_page_sk741!= 0)) && (_ws_sold_date_sk729!= 0)) && (((((_ws_sales_price750 >= 100.00) && (_ws_sales_price750 <= 150.00)) || ((_ws_sales_price750 >= 50.00) && (_ws_sales_price750 <= 100.00))) || ((_ws_sales_price750 >= 150.00) && (_ws_sales_price750 <= 200.00))) && ((((_ws_net_profit762 >= 100.00) && (_ws_net_profit762 <= 200.00)) || ((_ws_net_profit762 >= 150.00) && (_ws_net_profit762 <= 300.00))) || ((_ws_net_profit762 >= 50.00) && (_ws_net_profit762 <= 250.00))))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 0);
            tbl_Filter_TD_11340_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 1);
            tbl_Filter_TD_11340_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_web_page_sk741_t = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 2);
            tbl_Filter_TD_11340_output.setInt32(r, 2, _ws_web_page_sk741_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_12175_input.getInt64(i, 3);
            tbl_Filter_TD_11340_output.setInt64(r, 3, _ws_order_number746L_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 4);
            tbl_Filter_TD_11340_output.setInt32(r, 4, _ws_quantity747_t);
            int32_t _ws_sales_price750_t = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 5);
            tbl_Filter_TD_11340_output.setInt32(r, 5, _ws_sales_price750_t);
            int32_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_12175_input.getInt32(i, 6);
            tbl_Filter_TD_11340_output.setInt32(r, 6, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_11340_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11340_output #Row: " << tbl_Filter_TD_11340_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10506(Table &tbl_SerializeFromObject_TD_11764_input, Table &tbl_Filter_TD_10506_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wp_web_page_sk#615))
    // Input: ListBuffer(wp_web_page_sk#615)
    // Output: ListBuffer(wp_web_page_sk#615)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11764_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_web_page_sk615 = tbl_SerializeFromObject_TD_11764_input.getInt32(i, 0);
        if (_wp_web_page_sk615!= 0) {
            int32_t _wp_web_page_sk615_t = tbl_SerializeFromObject_TD_11764_input.getInt32(i, 0);
            tbl_Filter_TD_10506_output.setInt32(r, 0, _wp_web_page_sk615_t);
            r++;
        }
    }
    tbl_Filter_TD_10506_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10506_output #Row: " << tbl_Filter_TD_10506_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10450_key_leftMajor {
    int32_t _ws_item_sk732;
    int64_t _ws_order_number746L;
    bool operator==(const SW_JOIN_INNER_TD_10450_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732) && (_ws_order_number746L == other._ws_order_number746L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10450_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10450_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732)) + (hash<int64_t>()(k._ws_order_number746L));
    }
};
}
struct SW_JOIN_INNER_TD_10450_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_web_page_sk741;
    int64_t _ws_order_number746L;
    int32_t _ws_quantity747;
    int32_t _ws_sales_price750;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_10450_key_rightMajor {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    bool operator==(const SW_JOIN_INNER_TD_10450_key_rightMajor& other) const {
        return ((_wr_item_sk833 == other._wr_item_sk833) && (_wr_order_number844L == other._wr_order_number844L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10450_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10450_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_item_sk833)) + (hash<int64_t>()(k._wr_order_number844L));
    }
};
}
struct SW_JOIN_INNER_TD_10450_payload_rightMajor {
    int32_t _wr_item_sk833;
    int32_t _wr_refunded_cdemo_sk835;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_returning_cdemo_sk839;
    int32_t _wr_reason_sk843;
    int64_t _wr_order_number844L;
    int32_t _wr_fee849;
    int32_t _wr_refunded_cash851;
};
void SW_JOIN_INNER_TD_10450(Table &tbl_Filter_TD_11340_output, Table &tbl_Filter_TD_11778_output, Table &tbl_JOIN_INNER_TD_10450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ws_item_sk#732 = wr_item_sk#833) AND (ws_order_number#746L = wr_order_number#844L)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_page_sk#741, ws_order_number#746L, ws_quantity#747, ws_sales_price#750, ws_net_profit#762)
    // Right Table: ListBuffer(wr_item_sk#833, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_order_number#844L, wr_fee#849, wr_refunded_cash#851)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_quantity#747, ws_sales_price#750, ws_net_profit#762, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_Filter_TD_11340_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11778_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10450_key_leftMajor, SW_JOIN_INNER_TD_10450_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11340_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_11340_output.getInt32(i, 1);
            int64_t _ws_order_number746L_k = tbl_Filter_TD_11340_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_10450_key_leftMajor keyA{_ws_item_sk732_k, _ws_order_number746L_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11340_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_11340_output.getInt32(i, 1);
            int32_t _ws_web_page_sk741 = tbl_Filter_TD_11340_output.getInt32(i, 2);
            int64_t _ws_order_number746L = tbl_Filter_TD_11340_output.getInt64(i, 3);
            int32_t _ws_quantity747 = tbl_Filter_TD_11340_output.getInt32(i, 4);
            int32_t _ws_sales_price750 = tbl_Filter_TD_11340_output.getInt32(i, 5);
            int32_t _ws_net_profit762 = tbl_Filter_TD_11340_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_10450_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_web_page_sk741, _ws_order_number746L, _ws_quantity747, _ws_sales_price750, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11778_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_11778_output.getInt32(i, 0);
            int64_t _wr_order_number844L_k = tbl_Filter_TD_11778_output.getInt64(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10450_key_leftMajor{_wr_item_sk833_k, _wr_order_number844L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_item_sk833 = tbl_Filter_TD_11778_output.getInt32(i, 0);
                int32_t _wr_refunded_cdemo_sk835 = tbl_Filter_TD_11778_output.getInt32(i, 1);
                int32_t _wr_refunded_addr_sk837 = tbl_Filter_TD_11778_output.getInt32(i, 2);
                int32_t _wr_returning_cdemo_sk839 = tbl_Filter_TD_11778_output.getInt32(i, 3);
                int32_t _wr_reason_sk843 = tbl_Filter_TD_11778_output.getInt32(i, 4);
                int64_t _wr_order_number844L = tbl_Filter_TD_11778_output.getInt64(i, 5);
                int32_t _wr_fee849 = tbl_Filter_TD_11778_output.getInt32(i, 6);
                int32_t _wr_refunded_cash851 = tbl_Filter_TD_11778_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 1, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 3, _ws_sales_price750);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 4, _ws_net_profit762);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 5, _wr_refunded_cdemo_sk835);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 6, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 7, _wr_returning_cdemo_sk839);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 8, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 9, _wr_fee849);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 10, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10450_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10450_key_rightMajor, SW_JOIN_INNER_TD_10450_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11778_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_11778_output.getInt32(i, 0);
            int64_t _wr_order_number844L_k = tbl_Filter_TD_11778_output.getInt64(i, 5);
            SW_JOIN_INNER_TD_10450_key_rightMajor keyA{_wr_item_sk833_k, _wr_order_number844L_k};
            int32_t _wr_item_sk833 = tbl_Filter_TD_11778_output.getInt32(i, 0);
            int32_t _wr_refunded_cdemo_sk835 = tbl_Filter_TD_11778_output.getInt32(i, 1);
            int32_t _wr_refunded_addr_sk837 = tbl_Filter_TD_11778_output.getInt32(i, 2);
            int32_t _wr_returning_cdemo_sk839 = tbl_Filter_TD_11778_output.getInt32(i, 3);
            int32_t _wr_reason_sk843 = tbl_Filter_TD_11778_output.getInt32(i, 4);
            int64_t _wr_order_number844L = tbl_Filter_TD_11778_output.getInt64(i, 5);
            int32_t _wr_fee849 = tbl_Filter_TD_11778_output.getInt32(i, 6);
            int32_t _wr_refunded_cash851 = tbl_Filter_TD_11778_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10450_payload_rightMajor payloadA{_wr_item_sk833, _wr_refunded_cdemo_sk835, _wr_refunded_addr_sk837, _wr_returning_cdemo_sk839, _wr_reason_sk843, _wr_order_number844L, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11340_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_11340_output.getInt32(i, 1);
            int64_t _ws_order_number746L_k = tbl_Filter_TD_11340_output.getInt64(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10450_key_rightMajor{_ws_item_sk732_k, _ws_order_number746L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_item_sk833 = (it->second)._wr_item_sk833;
                int32_t _wr_refunded_cdemo_sk835 = (it->second)._wr_refunded_cdemo_sk835;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_returning_cdemo_sk839 = (it->second)._wr_returning_cdemo_sk839;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int64_t _wr_order_number844L = (it->second)._wr_order_number844L;
                int32_t _wr_fee849 = (it->second)._wr_fee849;
                int32_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11340_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_11340_output.getInt32(i, 1);
                int32_t _ws_web_page_sk741 = tbl_Filter_TD_11340_output.getInt32(i, 2);
                int64_t _ws_order_number746L = tbl_Filter_TD_11340_output.getInt64(i, 3);
                int32_t _ws_quantity747 = tbl_Filter_TD_11340_output.getInt32(i, 4);
                int32_t _ws_sales_price750 = tbl_Filter_TD_11340_output.getInt32(i, 5);
                int32_t _ws_net_profit762 = tbl_Filter_TD_11340_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 5, _wr_refunded_cdemo_sk835);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 6, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 7, _wr_returning_cdemo_sk839);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 8, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 9, _wr_fee849);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 10, _wr_refunded_cash851);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 1, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 3, _ws_sales_price750);
                tbl_JOIN_INNER_TD_10450_output.setInt32(r, 4, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10450_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10450_output #Row: " << tbl_JOIN_INNER_TD_10450_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9665(Table &tbl_SerializeFromObject_TD_10279_input, Table &tbl_Filter_TD_9665_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cd_demo_sk#93) AND (isnotnull(cd_marital_status#95) AND isnotnull(cd_education_status#96))) AND ((((cd_marital_status#95 = M) AND (cd_education_status#96 = Advanced Degree)) OR ((cd_marital_status#95 = S) AND (cd_education_status#96 = College))) OR ((cd_marital_status#95 = W) AND (cd_education_status#96 = 2 yr Degree)))))
    // Input: ListBuffer(cd_demo_sk#93, cd_marital_status#95, cd_education_status#96)
    // Output: ListBuffer(cd_demo_sk#93, cd_marital_status#95, cd_education_status#96)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10279_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_10279_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_10279_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_SerializeFromObject_TD_10279_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if (((_cd_demo_sk93!= 0) && (（std::string(_isnotnullcd_marital_status95.data()) != "NULL") && （std::string(_isnotnullcd_education_status96.data()) != "NULL"))) && ((((std::string(_cd_marital_status95.data()) == "M") && (std::string(_cd_education_status96.data()) == "Advanced Degree")) || ((std::string(_cd_marital_status95.data()) == "S") && (std::string(_cd_education_status96.data()) == "College"))) || ((std::string(_cd_marital_status95.data()) == "W") && (std::string(_cd_education_status96.data()) == "2 yr Degree")))) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_10279_input.getInt32(i, 0);
            tbl_Filter_TD_9665_output.setInt32(r, 0, _cd_demo_sk93_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_t = tbl_SerializeFromObject_TD_10279_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9665_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_t = tbl_SerializeFromObject_TD_10279_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9665_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_t);
            r++;
        }
    }
    tbl_Filter_TD_9665_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9665_output #Row: " << tbl_Filter_TD_9665_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9831_key_leftMajor {
    int32_t _ws_web_page_sk741;
    bool operator==(const SW_JOIN_INNER_TD_9831_key_leftMajor& other) const {
        return ((_ws_web_page_sk741 == other._ws_web_page_sk741));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9831_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9831_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_page_sk741));
    }
};
}
struct SW_JOIN_INNER_TD_9831_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_web_page_sk741;
    int32_t _ws_quantity747;
    int32_t _ws_sales_price750;
    int32_t _ws_net_profit762;
    int32_t _wr_refunded_cdemo_sk835;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_returning_cdemo_sk839;
    int32_t _wr_reason_sk843;
    int32_t _wr_fee849;
    int32_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_9831_key_rightMajor {
    int32_t _wp_web_page_sk615;
    bool operator==(const SW_JOIN_INNER_TD_9831_key_rightMajor& other) const {
        return ((_wp_web_page_sk615 == other._wp_web_page_sk615));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9831_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9831_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk615));
    }
};
}
struct SW_JOIN_INNER_TD_9831_payload_rightMajor {
    int32_t _wp_web_page_sk615;
};
void SW_JOIN_INNER_TD_9831(Table &tbl_JOIN_INNER_TD_10450_output, Table &tbl_Filter_TD_10506_output, Table &tbl_JOIN_INNER_TD_9831_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_page_sk#741 = wp_web_page_sk#615))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_quantity#747, ws_sales_price#750, ws_net_profit#762, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(wp_web_page_sk#615)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_sales_price#750, ws_net_profit#762, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_JOIN_INNER_TD_10450_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10506_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9831_key_leftMajor, SW_JOIN_INNER_TD_9831_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10450_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9831_key_leftMajor keyA{_ws_web_page_sk741_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 0);
            int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 1);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 2);
            int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 3);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 4);
            int32_t _wr_refunded_cdemo_sk835 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 5);
            int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 6);
            int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 7);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 8);
            int32_t _wr_fee849 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 9);
            int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 10);
            SW_JOIN_INNER_TD_9831_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_web_page_sk741, _ws_quantity747, _ws_sales_price750, _ws_net_profit762, _wr_refunded_cdemo_sk835, _wr_refunded_addr_sk837, _wr_returning_cdemo_sk839, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10506_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_10506_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9831_key_leftMajor{_wp_web_page_sk615_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_refunded_cdemo_sk835 = (it->second)._wr_refunded_cdemo_sk835;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_returning_cdemo_sk839 = (it->second)._wr_returning_cdemo_sk839;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int32_t _wr_fee849 = (it->second)._wr_fee849;
                int32_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _wp_web_page_sk615 = tbl_Filter_TD_10506_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 2, _ws_sales_price750);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 3, _ws_net_profit762);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 4, _wr_refunded_cdemo_sk835);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 5, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 6, _wr_returning_cdemo_sk839);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 7, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 8, _wr_fee849);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 9, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9831_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9831_key_rightMajor, SW_JOIN_INNER_TD_9831_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10506_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_10506_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9831_key_rightMajor keyA{_wp_web_page_sk615_k};
            int32_t _wp_web_page_sk615 = tbl_Filter_TD_10506_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9831_payload_rightMajor payloadA{_wp_web_page_sk615};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10450_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9831_key_rightMajor{_ws_web_page_sk741_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wp_web_page_sk615 = (it->second)._wp_web_page_sk615;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 0);
                int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 1);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 2);
                int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 3);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 4);
                int32_t _wr_refunded_cdemo_sk835 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 5);
                int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 6);
                int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 7);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 8);
                int32_t _wr_fee849 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 9);
                int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_10450_output.getInt32(i, 10);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 2, _ws_sales_price750);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 3, _ws_net_profit762);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 4, _wr_refunded_cdemo_sk835);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 5, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 6, _wr_returning_cdemo_sk839);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 7, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 8, _wr_fee849);
                tbl_JOIN_INNER_TD_9831_output.setInt32(r, 9, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9831_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9831_output #Row: " << tbl_JOIN_INNER_TD_9831_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8315(Table &tbl_SerializeFromObject_TD_9484_input, Table &tbl_Filter_TD_8315_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cd_demo_sk#9309) AND isnotnull(cd_marital_status#9311)) AND isnotnull(cd_education_status#9312)))
    // Input: ListBuffer(cd_demo_sk#9309, cd_marital_status#9311, cd_education_status#9312)
    // Output: ListBuffer(cd_demo_sk#9309, cd_marital_status#9311, cd_education_status#9312)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9484_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk9309 = tbl_SerializeFromObject_TD_9484_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status9311 = tbl_SerializeFromObject_TD_9484_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status9312 = tbl_SerializeFromObject_TD_9484_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if (((_cd_demo_sk9309!= 0) && （std::string(_isnotnullcd_marital_status9311.data()) != "NULL")) && （std::string(_isnotnullcd_education_status9312.data()) != "NULL")) {
            int32_t _cd_demo_sk9309_t = tbl_SerializeFromObject_TD_9484_input.getInt32(i, 0);
            tbl_Filter_TD_8315_output.setInt32(r, 0, _cd_demo_sk9309_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status9311_t = tbl_SerializeFromObject_TD_9484_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8315_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status9311_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status9312_t = tbl_SerializeFromObject_TD_9484_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8315_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status9312_t);
            r++;
        }
    }
    tbl_Filter_TD_8315_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8315_output #Row: " << tbl_Filter_TD_8315_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8683_key_leftMajor {
    int32_t _wr_refunded_cdemo_sk835;
    bool operator==(const SW_JOIN_INNER_TD_8683_key_leftMajor& other) const {
        return ((_wr_refunded_cdemo_sk835 == other._wr_refunded_cdemo_sk835));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8683_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8683_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_refunded_cdemo_sk835));
    }
};
}
struct SW_JOIN_INNER_TD_8683_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int32_t _ws_sales_price750;
    int32_t _ws_net_profit762;
    int32_t _wr_refunded_cdemo_sk835;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_returning_cdemo_sk839;
    int32_t _wr_reason_sk843;
    int32_t _wr_fee849;
    int32_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_8683_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_8683_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8683_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8683_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_8683_payload_rightMajor {
    int32_t _cd_demo_sk93;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
};
void SW_JOIN_INNER_TD_8683(Table &tbl_JOIN_INNER_TD_9831_output, Table &tbl_Filter_TD_9665_output, Table &tbl_JOIN_INNER_TD_8683_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((((cd_marital_status#95 = M) AND (cd_education_status#96 = Advanced Degree)) AND (ws_sales_price#750 >= 100.00)) AND (ws_sales_price#750 <= 150.00)) OR ((((cd_marital_status#95 = S) AND (cd_education_status#96 = College)) AND (ws_sales_price#750 >= 50.00)) AND (ws_sales_price#750 <= 100.00))) OR ((((cd_marital_status#95 = W) AND (cd_education_status#96 = 2 yr Degree)) AND (ws_sales_price#750 >= 150.00)) AND (ws_sales_price#750 <= 200.00))) AND (cd_demo_sk#93 = wr_refunded_cdemo_sk#835)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_sales_price#750, ws_net_profit#762, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(cd_demo_sk#93, cd_marital_status#95, cd_education_status#96)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_net_profit#762, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851, cd_marital_status#95, cd_education_status#96)
    int left_nrow = tbl_JOIN_INNER_TD_9831_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9665_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8683_key_leftMajor, SW_JOIN_INNER_TD_8683_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9831_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_refunded_cdemo_sk835_k = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_8683_key_leftMajor keyA{_wr_refunded_cdemo_sk835_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 1);
            int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 2);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 3);
            int32_t _wr_refunded_cdemo_sk835 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 4);
            int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 5);
            int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 6);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 7);
            int32_t _wr_fee849 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 8);
            int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_8683_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _ws_sales_price750, _ws_net_profit762, _wr_refunded_cdemo_sk835, _wr_refunded_addr_sk837, _wr_returning_cdemo_sk839, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9665_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_9665_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8683_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_refunded_cdemo_sk835 = (it->second)._wr_refunded_cdemo_sk835;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_returning_cdemo_sk839 = (it->second)._wr_returning_cdemo_sk839;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int32_t _wr_fee849 = (it->second)._wr_fee849;
                int32_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_9665_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_9665_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_9665_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
                if ((((((_cd_marital_status95 == "M") && (_cd_education_status96 == "Advanced Degree")) && (_ws_sales_price750 >= 100.00)) && (_ws_sales_price750 <= 150.00)) || ((((_cd_marital_status95 == "S") && (_cd_education_status96 == "College")) && (_ws_sales_price750 >= 50.00)) && (_ws_sales_price750 <= 100.00))) || ((((_cd_marital_status95 == "W") && (_cd_education_status96 == "2 yr Degree")) && (_ws_sales_price750 >= 150.00)) && (_ws_sales_price750 <= 200.00))) {
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 0, _ws_sold_date_sk729);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 1, _ws_quantity747);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 2, _ws_net_profit762);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 3, _wr_refunded_addr_sk837);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 4, _wr_returning_cdemo_sk839);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 5, _wr_reason_sk843);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 6, _wr_fee849);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 7, _wr_refunded_cash851);
                    tbl_JOIN_INNER_TD_8683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _cd_marital_status95_n);
                    tbl_JOIN_INNER_TD_8683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _cd_education_status96_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_8683_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8683_key_rightMajor, SW_JOIN_INNER_TD_8683_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9665_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_9665_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8683_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_9665_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_9665_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_9665_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
            SW_JOIN_INNER_TD_8683_payload_rightMajor payloadA{_cd_demo_sk93, _cd_marital_status95, _cd_education_status96};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9831_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_refunded_cdemo_sk835_k = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8683_key_rightMajor{_wr_refunded_cdemo_sk835_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                std::string _cd_education_status96 = (it->second)._cd_education_status96;
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n{};
                memcpy(_cd_education_status96_n.data(), (_cd_education_status96).data(), (_cd_education_status96).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 1);
                int32_t _ws_sales_price750 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 2);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 3);
                int32_t _wr_refunded_cdemo_sk835 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 4);
                int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 5);
                int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 6);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 7);
                int32_t _wr_fee849 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 8);
                int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_9831_output.getInt32(i, 9);
                if ((((((_cd_marital_status95 == "M") && (_cd_education_status96 == "Advanced Degree")) && (_ws_sales_price750 >= 100.00)) && (_ws_sales_price750 <= 150.00)) || ((((_cd_marital_status95 == "S") && (_cd_education_status96 == "College")) && (_ws_sales_price750 >= 50.00)) && (_ws_sales_price750 <= 100.00))) || ((((_cd_marital_status95 == "W") && (_cd_education_status96 == "2 yr Degree")) && (_ws_sales_price750 >= 150.00)) && (_ws_sales_price750 <= 200.00))) {
                    tbl_JOIN_INNER_TD_8683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _cd_marital_status95_n);
                    tbl_JOIN_INNER_TD_8683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _cd_education_status96_n);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 0, _ws_sold_date_sk729);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 1, _ws_quantity747);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 2, _ws_net_profit762);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 3, _wr_refunded_addr_sk837);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 4, _wr_returning_cdemo_sk839);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 5, _wr_reason_sk843);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 6, _wr_fee849);
                    tbl_JOIN_INNER_TD_8683_output.setInt32(r, 7, _wr_refunded_cash851);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_8683_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8683_output #Row: " << tbl_JOIN_INNER_TD_8683_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7168(Table &tbl_SerializeFromObject_TD_8398_input, Table &tbl_Filter_TD_7168_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ca_country#64) AND (ca_country#64 = United States)) AND isnotnull(ca_address_sk#54)) AND ((ca_state#62 IN (IN,OH,NJ) OR ca_state#62 IN (WI,CT,KY)) OR ca_state#62 IN (LA,IA,AR))))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62, ca_country#64)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8398_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_country64 = tbl_SerializeFromObject_TD_8398_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_8398_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_8398_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        auto reuse_col_str_713 = std::string(_ca_state62.data());
        auto reuse_col_str_357 = std::string(_ca_state62.data());
        auto reuse_col_str_289 = std::string(_ca_state62.data());
        if (((（std::string(_isnotnullca_country64.data()) != "NULL") && (std::string(_ca_country64.data()) == "United States")) && (_ca_address_sk54!= 0)) && ((((reuse_col_str_713 == "IN") || (reuse_col_str_713 == "OH") || (reuse_col_str_713 == "NJ") || (0)) || ((reuse_col_str_357 == "WI") || (reuse_col_str_357 == "CT") || (reuse_col_str_357 == "KY") || (0))) || ((reuse_col_str_289 == "LA") || (reuse_col_str_289 == "IA") || (reuse_col_str_289 == "AR") || (0)))) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_8398_input.getInt32(i, 0);
            tbl_Filter_TD_7168_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_8398_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_7168_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7168_output #Row: " << tbl_Filter_TD_7168_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7466_key_leftMajor {
    int32_t _wr_returning_cdemo_sk839;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
    bool operator==(const SW_JOIN_INNER_TD_7466_key_leftMajor& other) const {
        return ((_wr_returning_cdemo_sk839 == other._wr_returning_cdemo_sk839) && (_cd_marital_status95 == other._cd_marital_status95) && (_cd_education_status96 == other._cd_education_status96));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7466_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7466_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returning_cdemo_sk839)) + (hash<string>()(k._cd_marital_status95)) + (hash<string>()(k._cd_education_status96));
    }
};
}
struct SW_JOIN_INNER_TD_7466_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int32_t _ws_net_profit762;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_returning_cdemo_sk839;
    int32_t _wr_reason_sk843;
    int32_t _wr_fee849;
    int32_t _wr_refunded_cash851;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
};
struct SW_JOIN_INNER_TD_7466_key_rightMajor {
    int32_t _cd_demo_sk9309;
    std::string _cd_marital_status9311;
    std::string _cd_education_status9312;
    bool operator==(const SW_JOIN_INNER_TD_7466_key_rightMajor& other) const {
        return ((_cd_demo_sk9309 == other._cd_demo_sk9309) && (_cd_marital_status9311 == other._cd_marital_status9311) && (_cd_education_status9312 == other._cd_education_status9312));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7466_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7466_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk9309)) + (hash<string>()(k._cd_marital_status9311)) + (hash<string>()(k._cd_education_status9312));
    }
};
}
struct SW_JOIN_INNER_TD_7466_payload_rightMajor {
    int32_t _cd_demo_sk9309;
    std::string _cd_marital_status9311;
    std::string _cd_education_status9312;
};
void SW_JOIN_INNER_TD_7466(Table &tbl_JOIN_INNER_TD_8683_output, Table &tbl_Filter_TD_8315_output, Table &tbl_JOIN_INNER_TD_7466_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((cd_demo_sk#9309 = wr_returning_cdemo_sk#839) AND (cd_marital_status#95 = cd_marital_status#9311)) AND (cd_education_status#96 = cd_education_status#9312)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_net_profit#762, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851, cd_marital_status#95, cd_education_status#96)
    // Right Table: ListBuffer(cd_demo_sk#9309, cd_marital_status#9311, cd_education_status#9312)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_net_profit#762, wr_refunded_addr_sk#837, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_JOIN_INNER_TD_8683_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8315_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7466_key_leftMajor, SW_JOIN_INNER_TD_7466_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8683_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returning_cdemo_sk839_k = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_k_n = tbl_JOIN_INNER_TD_8683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _cd_marital_status95_k = std::string(_cd_marital_status95_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_k_n = tbl_JOIN_INNER_TD_8683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _cd_education_status96_k = std::string(_cd_education_status96_k_n.data());
            SW_JOIN_INNER_TD_7466_key_leftMajor keyA{_wr_returning_cdemo_sk839_k, _cd_marital_status95_k, _cd_education_status96_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 1);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 2);
            int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 3);
            int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 4);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 5);
            int32_t _wr_fee849 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 6);
            int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_JOIN_INNER_TD_8683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_JOIN_INNER_TD_8683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
            SW_JOIN_INNER_TD_7466_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _ws_net_profit762, _wr_refunded_addr_sk837, _wr_returning_cdemo_sk839, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851, _cd_marital_status95, _cd_education_status96};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8315_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk9309_k = tbl_Filter_TD_8315_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status9311_k_n = tbl_Filter_TD_8315_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status9311_k = std::string(_cd_marital_status9311_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status9312_k_n = tbl_Filter_TD_8315_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_education_status9312_k = std::string(_cd_education_status9312_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7466_key_leftMajor{_cd_demo_sk9309_k, _cd_marital_status9311_k, _cd_education_status9312_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_returning_cdemo_sk839 = (it->second)._wr_returning_cdemo_sk839;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int32_t _wr_fee849 = (it->second)._wr_fee849;
                int32_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                std::string _cd_education_status96 = (it->second)._cd_education_status96;
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n{};
                memcpy(_cd_education_status96_n.data(), (_cd_education_status96).data(), (_cd_education_status96).length());
                int32_t _cd_demo_sk9309 = tbl_Filter_TD_8315_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status9311_n = tbl_Filter_TD_8315_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_marital_status9311 = std::string(_cd_marital_status9311_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status9312_n = tbl_Filter_TD_8315_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cd_education_status9312 = std::string(_cd_education_status9312_n.data());
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 2, _ws_net_profit762);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 3, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 4, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 5, _wr_fee849);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 6, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7466_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7466_key_rightMajor, SW_JOIN_INNER_TD_7466_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8315_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk9309_k = tbl_Filter_TD_8315_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status9311_k_n = tbl_Filter_TD_8315_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status9311_k = std::string(_cd_marital_status9311_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status9312_k_n = tbl_Filter_TD_8315_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_education_status9312_k = std::string(_cd_education_status9312_k_n.data());
            SW_JOIN_INNER_TD_7466_key_rightMajor keyA{_cd_demo_sk9309_k, _cd_marital_status9311_k, _cd_education_status9312_k};
            int32_t _cd_demo_sk9309 = tbl_Filter_TD_8315_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status9311_n = tbl_Filter_TD_8315_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status9311 = std::string(_cd_marital_status9311_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status9312_n = tbl_Filter_TD_8315_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_education_status9312 = std::string(_cd_education_status9312_n.data());
            SW_JOIN_INNER_TD_7466_payload_rightMajor payloadA{_cd_demo_sk9309, _cd_marital_status9311, _cd_education_status9312};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8683_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returning_cdemo_sk839_k = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_k_n = tbl_JOIN_INNER_TD_8683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _cd_marital_status95_k = std::string(_cd_marital_status95_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_k_n = tbl_JOIN_INNER_TD_8683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _cd_education_status96_k = std::string(_cd_education_status96_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7466_key_rightMajor{_wr_returning_cdemo_sk839_k, _cd_marital_status95_k, _cd_education_status96_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk9309 = (it->second)._cd_demo_sk9309;
                std::string _cd_marital_status9311 = (it->second)._cd_marital_status9311;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status9311_n{};
                memcpy(_cd_marital_status9311_n.data(), (_cd_marital_status9311).data(), (_cd_marital_status9311).length());
                std::string _cd_education_status9312 = (it->second)._cd_education_status9312;
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status9312_n{};
                memcpy(_cd_education_status9312_n.data(), (_cd_education_status9312).data(), (_cd_education_status9312).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 1);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 2);
                int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 3);
                int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 4);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 5);
                int32_t _wr_fee849 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 6);
                int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_8683_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_JOIN_INNER_TD_8683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_JOIN_INNER_TD_8683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 2, _ws_net_profit762);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 3, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 4, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 5, _wr_fee849);
                tbl_JOIN_INNER_TD_7466_output.setInt32(r, 6, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7466_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7466_output #Row: " << tbl_JOIN_INNER_TD_7466_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6628(Table &tbl_SerializeFromObject_TD_7441_input, Table &tbl_Filter_TD_6628_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7441_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_7441_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_7441_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_7441_input.getInt32(i, 0);
            tbl_Filter_TD_6628_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_6628_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6628_output #Row: " << tbl_Filter_TD_6628_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6831_key_leftMajor {
    int32_t _wr_refunded_addr_sk837;
    bool operator==(const SW_JOIN_INNER_TD_6831_key_leftMajor& other) const {
        return ((_wr_refunded_addr_sk837 == other._wr_refunded_addr_sk837));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6831_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6831_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_refunded_addr_sk837));
    }
};
}
struct SW_JOIN_INNER_TD_6831_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int32_t _ws_net_profit762;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_reason_sk843;
    int32_t _wr_fee849;
    int32_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_6831_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_6831_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6831_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6831_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_6831_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_6831(Table &tbl_JOIN_INNER_TD_7466_output, Table &tbl_Filter_TD_7168_output, Table &tbl_JOIN_INNER_TD_6831_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ca_address_sk#54 = wr_refunded_addr_sk#837) AND ((((ca_state#62 IN (IN,OH,NJ) AND (ws_net_profit#762 >= 100.00)) AND (ws_net_profit#762 <= 200.00)) OR ((ca_state#62 IN (WI,CT,KY) AND (ws_net_profit#762 >= 150.00)) AND (ws_net_profit#762 <= 300.00))) OR ((ca_state#62 IN (LA,IA,AR) AND (ws_net_profit#762 >= 50.00)) AND (ws_net_profit#762 <= 250.00)))))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_net_profit#762, wr_refunded_addr_sk#837, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_JOIN_INNER_TD_7466_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7168_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6831_key_leftMajor, SW_JOIN_INNER_TD_6831_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7466_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_refunded_addr_sk837_k = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6831_key_leftMajor keyA{_wr_refunded_addr_sk837_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 1);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 2);
            int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 3);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 4);
            int32_t _wr_fee849 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 5);
            int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_6831_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _ws_net_profit762, _wr_refunded_addr_sk837, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7168_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7168_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6831_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int32_t _wr_fee849 = (it->second)._wr_fee849;
                int32_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _ca_address_sk54 = tbl_Filter_TD_7168_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_7168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 2, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 3, _wr_fee849);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 4, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6831_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6831_key_rightMajor, SW_JOIN_INNER_TD_6831_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7168_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7168_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6831_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_7168_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_7168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_6831_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7466_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_refunded_addr_sk837_k = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6831_key_rightMajor{_wr_refunded_addr_sk837_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 1);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 2);
                int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 3);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 4);
                int32_t _wr_fee849 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 5);
                int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_7466_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 2, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 3, _wr_fee849);
                tbl_JOIN_INNER_TD_6831_output.setInt32(r, 4, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6831_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6831_output #Row: " << tbl_JOIN_INNER_TD_6831_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5826(Table &tbl_SerializeFromObject_TD_6600_input, Table &tbl_Filter_TD_5826_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(r_reason_sk#351))
    // Input: ListBuffer(r_reason_sk#351, r_reason_desc#353)
    // Output: ListBuffer(r_reason_sk#351, r_reason_desc#353)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6600_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_SerializeFromObject_TD_6600_input.getInt32(i, 0);
        if (_r_reason_sk351!= 0) {
            int32_t _r_reason_sk351_t = tbl_SerializeFromObject_TD_6600_input.getInt32(i, 0);
            tbl_Filter_TD_5826_output.setInt32(r, 0, _r_reason_sk351_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_t = tbl_SerializeFromObject_TD_6600_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5826_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _r_reason_desc353_t);
            r++;
        }
    }
    tbl_Filter_TD_5826_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5826_output #Row: " << tbl_Filter_TD_5826_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5991_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_5991_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5991_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5991_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_5991_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int32_t _wr_reason_sk843;
    int32_t _wr_fee849;
    int32_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_5991_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_5991_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5991_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5991_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_5991_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_5991(Table &tbl_JOIN_INNER_TD_6831_output, Table &tbl_Filter_TD_6628_output, Table &tbl_JOIN_INNER_TD_5991_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ws_quantity#747, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_JOIN_INNER_TD_6831_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6628_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5991_key_leftMajor, SW_JOIN_INNER_TD_5991_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6831_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5991_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 1);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 2);
            int32_t _wr_fee849 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 3);
            int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5991_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6628_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6628_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5991_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int32_t _wr_fee849 = (it->second)._wr_fee849;
                int32_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _d_date_sk120 = tbl_Filter_TD_6628_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5991_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_5991_output.setInt32(r, 1, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_5991_output.setInt32(r, 2, _wr_fee849);
                tbl_JOIN_INNER_TD_5991_output.setInt32(r, 3, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5991_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5991_key_rightMajor, SW_JOIN_INNER_TD_5991_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6628_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_6628_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5991_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_6628_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5991_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6831_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5991_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 1);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 2);
                int32_t _wr_fee849 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 3);
                int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_6831_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_5991_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_5991_output.setInt32(r, 1, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_5991_output.setInt32(r, 2, _wr_fee849);
                tbl_JOIN_INNER_TD_5991_output.setInt32(r, 3, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5991_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5991_output #Row: " << tbl_JOIN_INNER_TD_5991_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4880_key_leftMajor {
    int32_t _wr_reason_sk843;
    bool operator==(const SW_JOIN_INNER_TD_4880_key_leftMajor& other) const {
        return ((_wr_reason_sk843 == other._wr_reason_sk843));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4880_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4880_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_reason_sk843));
    }
};
}
struct SW_JOIN_INNER_TD_4880_payload_leftMajor {
    int32_t _ws_quantity747;
    int32_t _wr_reason_sk843;
    int32_t _wr_fee849;
    int32_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_4880_key_rightMajor {
    int32_t _r_reason_sk351;
    bool operator==(const SW_JOIN_INNER_TD_4880_key_rightMajor& other) const {
        return ((_r_reason_sk351 == other._r_reason_sk351));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4880_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4880_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._r_reason_sk351));
    }
};
}
struct SW_JOIN_INNER_TD_4880_payload_rightMajor {
    int32_t _r_reason_sk351;
    std::string _r_reason_desc353;
};
void SW_JOIN_INNER_TD_4880(Table &tbl_JOIN_INNER_TD_5991_output, Table &tbl_Filter_TD_5826_output, Table &tbl_JOIN_INNER_TD_4880_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((r_reason_sk#351 = wr_reason_sk#843))
    // Left Table: ListBuffer(ws_quantity#747, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(r_reason_sk#351, r_reason_desc#353)
    // Output Table: ListBuffer(ws_quantity#747, wr_fee#849, wr_refunded_cash#851, r_reason_desc#353)
    int left_nrow = tbl_JOIN_INNER_TD_5991_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5826_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4880_key_leftMajor, SW_JOIN_INNER_TD_4880_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5991_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_reason_sk843_k = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4880_key_leftMajor keyA{_wr_reason_sk843_k};
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 0);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 1);
            int32_t _wr_fee849 = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 2);
            int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_4880_payload_leftMajor payloadA{_ws_quantity747, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5826_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _r_reason_sk351_k = tbl_Filter_TD_5826_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4880_key_leftMajor{_r_reason_sk351_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int32_t _wr_fee849 = (it->second)._wr_fee849;
                int32_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _r_reason_sk351 = tbl_Filter_TD_5826_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_n = tbl_Filter_TD_5826_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _r_reason_desc353 = std::string(_r_reason_desc353_n.data());
                tbl_JOIN_INNER_TD_4880_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_4880_output.setInt32(r, 1, _wr_fee849);
                tbl_JOIN_INNER_TD_4880_output.setInt32(r, 2, _wr_refunded_cash851);
                tbl_JOIN_INNER_TD_4880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _r_reason_desc353_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4880_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4880_key_rightMajor, SW_JOIN_INNER_TD_4880_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5826_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _r_reason_sk351_k = tbl_Filter_TD_5826_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4880_key_rightMajor keyA{_r_reason_sk351_k};
            int32_t _r_reason_sk351 = tbl_Filter_TD_5826_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_n = tbl_Filter_TD_5826_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _r_reason_desc353 = std::string(_r_reason_desc353_n.data());
            SW_JOIN_INNER_TD_4880_payload_rightMajor payloadA{_r_reason_sk351, _r_reason_desc353};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5991_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_reason_sk843_k = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4880_key_rightMajor{_wr_reason_sk843_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _r_reason_sk351 = (it->second)._r_reason_sk351;
                std::string _r_reason_desc353 = (it->second)._r_reason_desc353;
                std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_n{};
                memcpy(_r_reason_desc353_n.data(), (_r_reason_desc353).data(), (_r_reason_desc353).length());
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 0);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 1);
                int32_t _wr_fee849 = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 2);
                int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_5991_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_4880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _r_reason_desc353_n);
                tbl_JOIN_INNER_TD_4880_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_4880_output.setInt32(r, 1, _wr_fee849);
                tbl_JOIN_INNER_TD_4880_output.setInt32(r, 2, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4880_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4880_output #Row: " << tbl_JOIN_INNER_TD_4880_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3334_key;
struct SW_Aggregate_TD_3334_payload {
    std::string substr_r_reason_desc_1_20;
    int64_t _avgws_quantity9322_avg_0;
    int32_t _avgwr_refunded_cash9323_avg_1;
    int32_t _avgwr_fee9324_avg_2;
};
void SW_Aggregate_TD_3334(Table &tbl_JOIN_INNER_TD_4880_output, Table &tbl_Aggregate_TD_3334_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(r_reason_desc#353, substr(r_reason_desc#353, 1, 20) AS substr(r_reason_desc, 1, 20)#9321, avg(ws_quantity#747) AS avg(ws_quantity)#9322, cast((avg(UnscaledValue(wr_refunded_cash#851)) / 100.0) as decimal(11,6)) AS avg(wr_refunded_cash)#9323, cast((avg(UnscaledValue(wr_fee#849)) / 100.0) as decimal(11,6)) AS avg(wr_fee)#9324)
    // Input: ListBuffer(ws_quantity#747, wr_fee#849, wr_refunded_cash#851, r_reason_desc#353)
    // Output: ListBuffer(substr(r_reason_desc, 1, 20)#9321, avg(ws_quantity)#9322, avg(wr_refunded_cash)#9323, avg(wr_fee)#9324)
    std::unordered_map<SW_Aggregate_TD_3334_key, SW_Aggregate_TD_3334_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4880_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_4880_output.getInt32(i, 0);
        int32_t _wr_fee849 = tbl_JOIN_INNER_TD_4880_output.getInt32(i, 1);
        int32_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_4880_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353 = tbl_JOIN_INNER_TD_4880_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_3334_key k = std::string(_r_reason_desc353.data());
        std::string substr_r_reason_desc_1_20 = std::string(_r_reason_desc353.data()).substr(0, 20);
        int64_t _avgws_quantity9322_avg_0 = _ws_quantity747;
        int64_t _avgwr_refunded_cash9323_avg_1 = _wr_refunded_cash851;
        int64_t _avgwr_fee9324_avg_2 = _wr_fee849;
        SW_Aggregate_TD_3334_payload p{std::string(substr_r_reason_desc_1_20.data()), _avgws_quantity9322_avg_0, _avgwr_refunded_cash9323_avg_1, _avgwr_fee9324_avg_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            // Unsupported payload Type
            p._avgws_quantity9322_avg_0 = avg_0;
            int64_t avg_1 = ((it->second)._avgwr_refunded_cash9323_avg_1 + _avgwr_refunded_cash9323_avg_1);
            p._avgwr_refunded_cash9323_avg_1 = avg_1;
            int64_t avg_2 = ((it->second)._avgwr_fee9324_avg_2 + _avgwr_fee9324_avg_2);
            p._avgwr_fee9324_avg_2 = avg_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _r_reason_desc353 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20_n{};
        memcpy(substr_r_reason_desc_1_20_n.data(), (it.second).substr_r_reason_desc_1_20.data(), (it.second).substr_r_reason_desc_1_20.length());
        tbl_Aggregate_TD_3334_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, substr_r_reason_desc_1_20_n);
        int64_t _avgws_quantity9322 = (it.second)._avgws_quantity9322_avg_0 / nrow1;
        // Unsupported payload type: DoubleType
        int32_t _avgwr_refunded_cash9323 = ((it.second)._avgwr_refunded_cash9323_avg_1 / nrow1 / 100.0);
        tbl_Aggregate_TD_3334_output.setInt32(r, 2, _avgwr_refunded_cash9323);
        int32_t _avgwr_fee9324 = ((it.second)._avgwr_fee9324_avg_2 / nrow1 / 100.0);
        tbl_Aggregate_TD_3334_output.setInt32(r, 3, _avgwr_fee9324);
        ++r;
    }
    tbl_Aggregate_TD_3334_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3334_output #Row: " << tbl_Aggregate_TD_3334_output.getNumRow() << std::endl;
}

void SW_Sort_TD_284(Table &tbl_Aggregate_TD_3334_output, Table &tbl_Sort_TD_284_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(substr(r_reason_desc, 1, 20)#9321 ASC NULLS FIRST, avg(ws_quantity)#9322 ASC NULLS FIRST, avg(wr_refunded_cash)#9323 ASC NULLS FIRST, avg(wr_fee)#9324 ASC NULLS FIRST)
    // Input: ListBuffer(substr(r_reason_desc, 1, 20)#9321, avg(ws_quantity)#9322, avg(wr_refunded_cash)#9323, avg(wr_fee)#9324)
    // Output: ListBuffer(substr(r_reason_desc, 1, 20)#9321, avg(ws_quantity)#9322, avg(wr_refunded_cash)#9323, avg(wr_fee)#9324)
    struct SW_Sort_TD_284Row {
        std::string substr_r_reason_desc_1_20;
        int32_t _avgws_quantity9322;
        int32_t _avgwr_refunded_cash9323;
        int32_t _avgwr_fee9324;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_284Row& a, const SW_Sort_TD_284Row& b) const { return 
 || 
 ((a.substr_r_reason_desc_1_20 == b.substr_r_reason_desc_1_20) && (a._avgws_quantity9322 < b._avgws_quantity9322)) || 
 ((a.substr_r_reason_desc_1_20 == b.substr_r_reason_desc_1_20) && (a._avgws_quantity9322 == b._avgws_quantity9322) && (a._avgwr_refunded_cash9323 < b._avgwr_refunded_cash9323)) || 
 ((a.substr_r_reason_desc_1_20 == b.substr_r_reason_desc_1_20) && (a._avgws_quantity9322 == b._avgws_quantity9322) && (a._avgwr_refunded_cash9323 == b._avgwr_refunded_cash9323) && (a._avgwr_fee9324 < b._avgwr_fee9324)); 
}
    }SW_Sort_TD_284_order; 

    int nrow1 = tbl_Aggregate_TD_3334_output.getNumRow();
    std::vector<SW_Sort_TD_284Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20 = tbl_Aggregate_TD_3334_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _avgws_quantity9322 = tbl_Aggregate_TD_3334_output.getInt32(i, 1);
        int32_t _avgwr_refunded_cash9323 = tbl_Aggregate_TD_3334_output.getInt32(i, 2);
        int32_t _avgwr_fee9324 = tbl_Aggregate_TD_3334_output.getInt32(i, 3);
        SW_Sort_TD_284Row t = {std::string(substr_r_reason_desc_1_20.data()),_avgws_quantity9322,_avgwr_refunded_cash9323,_avgwr_fee9324};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_284_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20{};
        memcpy(substr_r_reason_desc_1_20.data(), (it.substr_r_reason_desc_1_20).data(), (it.substr_r_reason_desc_1_20).length());
        tbl_Sort_TD_284_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, substr_r_reason_desc_1_20);
        tbl_Sort_TD_284_output.setInt32(r, 1, it._avgws_quantity9322);
        tbl_Sort_TD_284_output.setInt32(r, 2, it._avgwr_refunded_cash9323);
        tbl_Sort_TD_284_output.setInt32(r, 3, it._avgwr_fee9324);
        ++r;
    }
    tbl_Sort_TD_284_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_284_output #Row: " << tbl_Sort_TD_284_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1624(Table &tbl_Sort_TD_284_output, Table &tbl_LocalLimit_TD_1624_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(substr(r_reason_desc, 1, 20)#9321, avg(ws_quantity)#9322, avg(wr_refunded_cash)#9323, avg(wr_fee)#9324)
    // Output: ListBuffer(substr(r_reason_desc, 1, 20)#9321, avg(ws_quantity)#9322, avg(wr_refunded_cash)#9323, avg(wr_fee)#9324)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20_n = tbl_Sort_TD_284_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1624_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, substr_r_reason_desc_1_20_n);
        // Unsupported Expand key typeDoubleType
        tbl_LocalLimit_TD_1624_output.setInt32(r, 2, tbl_Sort_TD_284_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1624_output.setInt32(r, 3, tbl_Sort_TD_284_output.getInt32(i, 3));
        r++;
    }
    tbl_LocalLimit_TD_1624_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1624_output #Row: " << tbl_LocalLimit_TD_1624_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0864(Table &tbl_LocalLimit_TD_1624_output, Table &tbl_GlobalLimit_TD_0864_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(substr(r_reason_desc, 1, 20)#9321, avg(ws_quantity)#9322, avg(wr_refunded_cash)#9323, avg(wr_fee)#9324)
    // Output: ListBuffer(substr(r_reason_desc, 1, 20)#9321, avg(ws_quantity)#9322, avg(wr_refunded_cash)#9323, avg(wr_fee)#9324)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20_n = tbl_LocalLimit_TD_1624_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0864_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, substr_r_reason_desc_1_20_n);
        // Unsupported Expand key typeDoubleType
        tbl_GlobalLimit_TD_0864_output.setInt32(r, 2, tbl_LocalLimit_TD_1624_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0864_output.setInt32(r, 3, tbl_LocalLimit_TD_1624_output.getInt32(i, 3));
        r++;
    }
    tbl_GlobalLimit_TD_0864_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0864_output #Row: " << tbl_GlobalLimit_TD_0864_output.getNumRow() << std::endl;
}

