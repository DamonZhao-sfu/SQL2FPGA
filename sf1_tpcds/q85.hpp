#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_11794714(Table &tbl_SerializeFromObject_TD_12988764_input, Table &tbl_Filter_TD_11794714_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(wr_item_sk#833) AND isnotnull(wr_order_number#844L)) AND isnotnull(wr_refunded_cdemo_sk#835)) AND ((isnotnull(wr_returning_cdemo_sk#839) AND isnotnull(wr_refunded_addr_sk#837)) AND isnotnull(wr_reason_sk#843))))
    // Input: ListBuffer(wr_item_sk#833, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_order_number#844L, wr_fee#849, wr_refunded_cash#851)
    // Output: ListBuffer(wr_item_sk#833, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_order_number#844L, wr_fee#849, wr_refunded_cash#851)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12988764_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_12988764_input.getInt64(i, 5);
        int32_t _wr_refunded_cdemo_sk835 = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 1);
        int32_t _wr_returning_cdemo_sk839 = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 3);
        int32_t _wr_refunded_addr_sk837 = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 2);
        int32_t _wr_reason_sk843 = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 4);
        if ((((_wr_item_sk833!= 0) && (_wr_order_number844L!= 0)) && (_wr_refunded_cdemo_sk835!= 0)) && (((_wr_returning_cdemo_sk839!= 0) && (_wr_refunded_addr_sk837!= 0)) && (_wr_reason_sk843!= 0))) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 0);
            tbl_Filter_TD_11794714_output.setInt32(r, 0, _wr_item_sk833_t);
            int32_t _wr_refunded_cdemo_sk835_t = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 1);
            tbl_Filter_TD_11794714_output.setInt32(r, 1, _wr_refunded_cdemo_sk835_t);
            int32_t _wr_refunded_addr_sk837_t = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 2);
            tbl_Filter_TD_11794714_output.setInt32(r, 2, _wr_refunded_addr_sk837_t);
            int32_t _wr_returning_cdemo_sk839_t = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 3);
            tbl_Filter_TD_11794714_output.setInt32(r, 3, _wr_returning_cdemo_sk839_t);
            int32_t _wr_reason_sk843_t = tbl_SerializeFromObject_TD_12988764_input.getInt32(i, 4);
            tbl_Filter_TD_11794714_output.setInt32(r, 4, _wr_reason_sk843_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_12988764_input.getInt64(i, 5);
            tbl_Filter_TD_11794714_output.setInt64(r, 5, _wr_order_number844L_t);
            int64_t _wr_fee849_t = tbl_SerializeFromObject_TD_12988764_input.getInt64(i, 6);
            tbl_Filter_TD_11794714_output.setInt64(r, 6, _wr_fee849_t);
            int64_t _wr_refunded_cash851_t = tbl_SerializeFromObject_TD_12988764_input.getInt64(i, 7);
            tbl_Filter_TD_11794714_output.setInt64(r, 7, _wr_refunded_cash851_t);
            r++;
        }
    }
    tbl_Filter_TD_11794714_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11794714_output #Row: " << tbl_Filter_TD_11794714_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11238772(Table &tbl_SerializeFromObject_TD_12674893_input, Table &tbl_Filter_TD_11238772_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((isnotnull(ws_item_sk#732) AND isnotnull(ws_order_number#746L)) AND isnotnull(ws_web_page_sk#741)) AND isnotnull(ws_sold_date_sk#729)) AND (((((ws_sales_price#750 >= 100.00) AND (ws_sales_price#750 <= 150.00)) OR ((ws_sales_price#750 >= 50.00) AND (ws_sales_price#750 <= 100.00))) OR ((ws_sales_price#750 >= 150.00) AND (ws_sales_price#750 <= 200.00))) AND ((((ws_net_profit#762 >= 100.00) AND (ws_net_profit#762 <= 200.00)) OR ((ws_net_profit#762 >= 150.00) AND (ws_net_profit#762 <= 300.00))) OR ((ws_net_profit#762 >= 50.00) AND (ws_net_profit#762 <= 250.00))))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_page_sk#741, ws_order_number#746L, ws_quantity#747, ws_sales_price#750, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_page_sk#741, ws_order_number#746L, ws_quantity#747, ws_sales_price#750, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12674893_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_12674893_input.getInt32(i, 1);
        int64_t _ws_order_number746L = tbl_SerializeFromObject_TD_12674893_input.getInt64(i, 3);
        int32_t _ws_web_page_sk741 = tbl_SerializeFromObject_TD_12674893_input.getInt32(i, 2);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_12674893_input.getInt32(i, 0);
        int64_t _ws_sales_price750 = tbl_SerializeFromObject_TD_12674893_input.getInt64(i, 5);
        int64_t _ws_net_profit762 = tbl_SerializeFromObject_TD_12674893_input.getInt64(i, 6);
        if (((((_ws_item_sk732!= 0) && (_ws_order_number746L!= 0)) && (_ws_web_page_sk741!= 0)) && (_ws_sold_date_sk729!= 0)) && (((((_ws_sales_price750 >= 100.00) && (_ws_sales_price750 <= 150.00)) || ((_ws_sales_price750 >= 50.00) && (_ws_sales_price750 <= 100.00))) || ((_ws_sales_price750 >= 150.00) && (_ws_sales_price750 <= 200.00))) && ((((_ws_net_profit762 >= 100.00) && (_ws_net_profit762 <= 200.00)) || ((_ws_net_profit762 >= 150.00) && (_ws_net_profit762 <= 300.00))) || ((_ws_net_profit762 >= 50.00) && (_ws_net_profit762 <= 250.00))))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_12674893_input.getInt32(i, 0);
            tbl_Filter_TD_11238772_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_12674893_input.getInt32(i, 1);
            tbl_Filter_TD_11238772_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_web_page_sk741_t = tbl_SerializeFromObject_TD_12674893_input.getInt32(i, 2);
            tbl_Filter_TD_11238772_output.setInt32(r, 2, _ws_web_page_sk741_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_12674893_input.getInt64(i, 3);
            tbl_Filter_TD_11238772_output.setInt64(r, 3, _ws_order_number746L_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_12674893_input.getInt32(i, 4);
            tbl_Filter_TD_11238772_output.setInt32(r, 4, _ws_quantity747_t);
            int64_t _ws_sales_price750_t = tbl_SerializeFromObject_TD_12674893_input.getInt64(i, 5);
            tbl_Filter_TD_11238772_output.setInt64(r, 5, _ws_sales_price750_t);
            int64_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_12674893_input.getInt64(i, 6);
            tbl_Filter_TD_11238772_output.setInt64(r, 6, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_11238772_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11238772_output #Row: " << tbl_Filter_TD_11238772_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10440582(Table &tbl_SerializeFromObject_TD_11841978_input, Table &tbl_Filter_TD_10440582_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wp_web_page_sk#615))
    // Input: ListBuffer(wp_web_page_sk#615)
    // Output: ListBuffer(wp_web_page_sk#615)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11841978_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_web_page_sk615 = tbl_SerializeFromObject_TD_11841978_input.getInt32(i, 0);
        if (_wp_web_page_sk615!= 0) {
            int32_t _wp_web_page_sk615_t = tbl_SerializeFromObject_TD_11841978_input.getInt32(i, 0);
            tbl_Filter_TD_10440582_output.setInt32(r, 0, _wp_web_page_sk615_t);
            r++;
        }
    }
    tbl_Filter_TD_10440582_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10440582_output #Row: " << tbl_Filter_TD_10440582_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10963168_key_leftMajor {
    int32_t _ws_item_sk732;
    int64_t _ws_order_number746L;
    bool operator==(const SW_JOIN_INNER_TD_10963168_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732) && (_ws_order_number746L == other._ws_order_number746L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10963168_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10963168_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732)) + (hash<int64_t>()(k._ws_order_number746L));
    }
};
}
struct SW_JOIN_INNER_TD_10963168_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int32_t _ws_web_page_sk741;
    int64_t _ws_order_number746L;
    int32_t _ws_quantity747;
    int64_t _ws_sales_price750;
    int64_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_10963168_key_rightMajor {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    bool operator==(const SW_JOIN_INNER_TD_10963168_key_rightMajor& other) const {
        return ((_wr_item_sk833 == other._wr_item_sk833) && (_wr_order_number844L == other._wr_order_number844L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10963168_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10963168_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_item_sk833)) + (hash<int64_t>()(k._wr_order_number844L));
    }
};
}
struct SW_JOIN_INNER_TD_10963168_payload_rightMajor {
    int32_t _wr_item_sk833;
    int32_t _wr_refunded_cdemo_sk835;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_returning_cdemo_sk839;
    int32_t _wr_reason_sk843;
    int64_t _wr_order_number844L;
    int64_t _wr_fee849;
    int64_t _wr_refunded_cash851;
};
void SW_JOIN_INNER_TD_10963168(Table &tbl_Filter_TD_11238772_output, Table &tbl_Filter_TD_11794714_output, Table &tbl_JOIN_INNER_TD_10963168_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ws_item_sk#732 = wr_item_sk#833) AND (ws_order_number#746L = wr_order_number#844L)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_web_page_sk#741, ws_order_number#746L, ws_quantity#747, ws_sales_price#750, ws_net_profit#762)
    // Right Table: ListBuffer(wr_item_sk#833, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_order_number#844L, wr_fee#849, wr_refunded_cash#851)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_quantity#747, ws_sales_price#750, ws_net_profit#762, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_Filter_TD_11238772_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11794714_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10963168_key_leftMajor, SW_JOIN_INNER_TD_10963168_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11238772_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_11238772_output.getInt32(i, 1);
            int64_t _ws_order_number746L_k = tbl_Filter_TD_11238772_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_10963168_key_leftMajor keyA{_ws_item_sk732_k, _ws_order_number746L_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11238772_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_11238772_output.getInt32(i, 1);
            int32_t _ws_web_page_sk741 = tbl_Filter_TD_11238772_output.getInt32(i, 2);
            int64_t _ws_order_number746L = tbl_Filter_TD_11238772_output.getInt64(i, 3);
            int32_t _ws_quantity747 = tbl_Filter_TD_11238772_output.getInt32(i, 4);
            int64_t _ws_sales_price750 = tbl_Filter_TD_11238772_output.getInt64(i, 5);
            int64_t _ws_net_profit762 = tbl_Filter_TD_11238772_output.getInt64(i, 6);
            SW_JOIN_INNER_TD_10963168_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_web_page_sk741, _ws_order_number746L, _ws_quantity747, _ws_sales_price750, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11794714_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_11794714_output.getInt32(i, 0);
            int64_t _wr_order_number844L_k = tbl_Filter_TD_11794714_output.getInt64(i, 5);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10963168_key_leftMajor{_wr_item_sk833_k, _wr_order_number844L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int64_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int64_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_item_sk833 = tbl_Filter_TD_11794714_output.getInt32(i, 0);
                int32_t _wr_refunded_cdemo_sk835 = tbl_Filter_TD_11794714_output.getInt32(i, 1);
                int32_t _wr_refunded_addr_sk837 = tbl_Filter_TD_11794714_output.getInt32(i, 2);
                int32_t _wr_returning_cdemo_sk839 = tbl_Filter_TD_11794714_output.getInt32(i, 3);
                int32_t _wr_reason_sk843 = tbl_Filter_TD_11794714_output.getInt32(i, 4);
                int64_t _wr_order_number844L = tbl_Filter_TD_11794714_output.getInt64(i, 5);
                int64_t _wr_fee849 = tbl_Filter_TD_11794714_output.getInt64(i, 6);
                int64_t _wr_refunded_cash851 = tbl_Filter_TD_11794714_output.getInt64(i, 7);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 1, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_10963168_output.setInt64(r, 3, _ws_sales_price750);
                tbl_JOIN_INNER_TD_10963168_output.setInt64(r, 4, _ws_net_profit762);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 5, _wr_refunded_cdemo_sk835);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 6, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 7, _wr_returning_cdemo_sk839);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 8, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_10963168_output.setInt64(r, 9, _wr_fee849);
                tbl_JOIN_INNER_TD_10963168_output.setInt64(r, 10, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10963168_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10963168_key_rightMajor, SW_JOIN_INNER_TD_10963168_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11794714_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_11794714_output.getInt32(i, 0);
            int64_t _wr_order_number844L_k = tbl_Filter_TD_11794714_output.getInt64(i, 5);
            SW_JOIN_INNER_TD_10963168_key_rightMajor keyA{_wr_item_sk833_k, _wr_order_number844L_k};
            int32_t _wr_item_sk833 = tbl_Filter_TD_11794714_output.getInt32(i, 0);
            int32_t _wr_refunded_cdemo_sk835 = tbl_Filter_TD_11794714_output.getInt32(i, 1);
            int32_t _wr_refunded_addr_sk837 = tbl_Filter_TD_11794714_output.getInt32(i, 2);
            int32_t _wr_returning_cdemo_sk839 = tbl_Filter_TD_11794714_output.getInt32(i, 3);
            int32_t _wr_reason_sk843 = tbl_Filter_TD_11794714_output.getInt32(i, 4);
            int64_t _wr_order_number844L = tbl_Filter_TD_11794714_output.getInt64(i, 5);
            int64_t _wr_fee849 = tbl_Filter_TD_11794714_output.getInt64(i, 6);
            int64_t _wr_refunded_cash851 = tbl_Filter_TD_11794714_output.getInt64(i, 7);
            SW_JOIN_INNER_TD_10963168_payload_rightMajor payloadA{_wr_item_sk833, _wr_refunded_cdemo_sk835, _wr_refunded_addr_sk837, _wr_returning_cdemo_sk839, _wr_reason_sk843, _wr_order_number844L, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11238772_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_11238772_output.getInt32(i, 1);
            int64_t _ws_order_number746L_k = tbl_Filter_TD_11238772_output.getInt64(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10963168_key_rightMajor{_ws_item_sk732_k, _ws_order_number746L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_item_sk833 = (it->second)._wr_item_sk833;
                int32_t _wr_refunded_cdemo_sk835 = (it->second)._wr_refunded_cdemo_sk835;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_returning_cdemo_sk839 = (it->second)._wr_returning_cdemo_sk839;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int64_t _wr_order_number844L = (it->second)._wr_order_number844L;
                int64_t _wr_fee849 = (it->second)._wr_fee849;
                int64_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11238772_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_11238772_output.getInt32(i, 1);
                int32_t _ws_web_page_sk741 = tbl_Filter_TD_11238772_output.getInt32(i, 2);
                int64_t _ws_order_number746L = tbl_Filter_TD_11238772_output.getInt64(i, 3);
                int32_t _ws_quantity747 = tbl_Filter_TD_11238772_output.getInt32(i, 4);
                int64_t _ws_sales_price750 = tbl_Filter_TD_11238772_output.getInt64(i, 5);
                int64_t _ws_net_profit762 = tbl_Filter_TD_11238772_output.getInt64(i, 6);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 5, _wr_refunded_cdemo_sk835);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 6, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 7, _wr_returning_cdemo_sk839);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 8, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_10963168_output.setInt64(r, 9, _wr_fee849);
                tbl_JOIN_INNER_TD_10963168_output.setInt64(r, 10, _wr_refunded_cash851);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 1, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_10963168_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_10963168_output.setInt64(r, 3, _ws_sales_price750);
                tbl_JOIN_INNER_TD_10963168_output.setInt64(r, 4, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10963168_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10963168_output #Row: " << tbl_JOIN_INNER_TD_10963168_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9969837(Table &tbl_SerializeFromObject_TD_10967032_input, Table &tbl_Filter_TD_9969837_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cd_demo_sk#93) AND (isnotnull(cd_marital_status#95) AND isnotnull(cd_education_status#96))) AND ((((cd_marital_status#95 = M) AND (cd_education_status#96 = Advanced Degree)) OR ((cd_marital_status#95 = S) AND (cd_education_status#96 = College))) OR ((cd_marital_status#95 = W) AND (cd_education_status#96 = 2 yr Degree)))))
    // Input: ListBuffer(cd_demo_sk#93, cd_marital_status#95, cd_education_status#96)
    // Output: ListBuffer(cd_demo_sk#93, cd_marital_status#95, cd_education_status#96)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10967032_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk93 = tbl_SerializeFromObject_TD_10967032_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95 = tbl_SerializeFromObject_TD_10967032_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96 = tbl_SerializeFromObject_TD_10967032_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if (((_cd_demo_sk93!= 0) && ((std::string(_cd_marital_status95.data()) != "NULL") && (std::string(_cd_education_status96.data()) != "NULL"))) && ((((std::string(_cd_marital_status95.data()) == "M") && (std::string(_cd_education_status96.data()) == "Advanced Degree")) || ((std::string(_cd_marital_status95.data()) == "S") && (std::string(_cd_education_status96.data()) == "College"))) || ((std::string(_cd_marital_status95.data()) == "W") && (std::string(_cd_education_status96.data()) == "2 yr Degree")))) {
            int32_t _cd_demo_sk93_t = tbl_SerializeFromObject_TD_10967032_input.getInt32(i, 0);
            tbl_Filter_TD_9969837_output.setInt32(r, 0, _cd_demo_sk93_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_t = tbl_SerializeFromObject_TD_10967032_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9969837_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status95_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_t = tbl_SerializeFromObject_TD_10967032_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9969837_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status96_t);
            r++;
        }
    }
    tbl_Filter_TD_9969837_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9969837_output #Row: " << tbl_Filter_TD_9969837_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9576697_key_leftMajor {
    int32_t _ws_web_page_sk741;
    bool operator==(const SW_JOIN_INNER_TD_9576697_key_leftMajor& other) const {
        return ((_ws_web_page_sk741 == other._ws_web_page_sk741));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9576697_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9576697_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_page_sk741));
    }
};
}
struct SW_JOIN_INNER_TD_9576697_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_web_page_sk741;
    int32_t _ws_quantity747;
    int64_t _ws_sales_price750;
    int64_t _ws_net_profit762;
    int32_t _wr_refunded_cdemo_sk835;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_returning_cdemo_sk839;
    int32_t _wr_reason_sk843;
    int64_t _wr_fee849;
    int64_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_9576697_key_rightMajor {
    int32_t _wp_web_page_sk615;
    bool operator==(const SW_JOIN_INNER_TD_9576697_key_rightMajor& other) const {
        return ((_wp_web_page_sk615 == other._wp_web_page_sk615));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9576697_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9576697_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk615));
    }
};
}
struct SW_JOIN_INNER_TD_9576697_payload_rightMajor {
    int32_t _wp_web_page_sk615;
};
void SW_JOIN_INNER_TD_9576697(Table &tbl_JOIN_INNER_TD_10963168_output, Table &tbl_Filter_TD_10440582_output, Table &tbl_JOIN_INNER_TD_9576697_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_page_sk#741 = wp_web_page_sk#615))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_quantity#747, ws_sales_price#750, ws_net_profit#762, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(wp_web_page_sk#615)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_sales_price#750, ws_net_profit#762, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_JOIN_INNER_TD_10963168_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10440582_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9576697_key_leftMajor, SW_JOIN_INNER_TD_9576697_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10963168_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9576697_key_leftMajor keyA{_ws_web_page_sk741_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 0);
            int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 1);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 2);
            int64_t _ws_sales_price750 = tbl_JOIN_INNER_TD_10963168_output.getInt64(i, 3);
            int64_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10963168_output.getInt64(i, 4);
            int32_t _wr_refunded_cdemo_sk835 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 5);
            int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 6);
            int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 7);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 8);
            int64_t _wr_fee849 = tbl_JOIN_INNER_TD_10963168_output.getInt64(i, 9);
            int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_10963168_output.getInt64(i, 10);
            SW_JOIN_INNER_TD_9576697_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_web_page_sk741, _ws_quantity747, _ws_sales_price750, _ws_net_profit762, _wr_refunded_cdemo_sk835, _wr_refunded_addr_sk837, _wr_returning_cdemo_sk839, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10440582_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_10440582_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9576697_key_leftMajor{_wp_web_page_sk615_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int64_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int64_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_refunded_cdemo_sk835 = (it->second)._wr_refunded_cdemo_sk835;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_returning_cdemo_sk839 = (it->second)._wr_returning_cdemo_sk839;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int64_t _wr_fee849 = (it->second)._wr_fee849;
                int64_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _wp_web_page_sk615 = tbl_Filter_TD_10440582_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_9576697_output.setInt64(r, 2, _ws_sales_price750);
                tbl_JOIN_INNER_TD_9576697_output.setInt64(r, 3, _ws_net_profit762);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 4, _wr_refunded_cdemo_sk835);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 5, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 6, _wr_returning_cdemo_sk839);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 7, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_9576697_output.setInt64(r, 8, _wr_fee849);
                tbl_JOIN_INNER_TD_9576697_output.setInt64(r, 9, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9576697_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9576697_key_rightMajor, SW_JOIN_INNER_TD_9576697_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10440582_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_10440582_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9576697_key_rightMajor keyA{_wp_web_page_sk615_k};
            int32_t _wp_web_page_sk615 = tbl_Filter_TD_10440582_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9576697_payload_rightMajor payloadA{_wp_web_page_sk615};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10963168_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9576697_key_rightMajor{_ws_web_page_sk741_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wp_web_page_sk615 = (it->second)._wp_web_page_sk615;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 0);
                int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 1);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 2);
                int64_t _ws_sales_price750 = tbl_JOIN_INNER_TD_10963168_output.getInt64(i, 3);
                int64_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10963168_output.getInt64(i, 4);
                int32_t _wr_refunded_cdemo_sk835 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 5);
                int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 6);
                int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 7);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_10963168_output.getInt32(i, 8);
                int64_t _wr_fee849 = tbl_JOIN_INNER_TD_10963168_output.getInt64(i, 9);
                int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_10963168_output.getInt64(i, 10);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_9576697_output.setInt64(r, 2, _ws_sales_price750);
                tbl_JOIN_INNER_TD_9576697_output.setInt64(r, 3, _ws_net_profit762);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 4, _wr_refunded_cdemo_sk835);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 5, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 6, _wr_returning_cdemo_sk839);
                tbl_JOIN_INNER_TD_9576697_output.setInt32(r, 7, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_9576697_output.setInt64(r, 8, _wr_fee849);
                tbl_JOIN_INNER_TD_9576697_output.setInt64(r, 9, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9576697_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9576697_output #Row: " << tbl_JOIN_INNER_TD_9576697_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8686270(Table &tbl_SerializeFromObject_TD_9174688_input, Table &tbl_Filter_TD_8686270_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cd_demo_sk#3544) AND isnotnull(cd_marital_status#3546)) AND isnotnull(cd_education_status#3547)))
    // Input: ListBuffer(cd_demo_sk#3544, cd_marital_status#3546, cd_education_status#3547)
    // Output: ListBuffer(cd_demo_sk#3544, cd_marital_status#3546, cd_education_status#3547)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9174688_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cd_demo_sk3544 = tbl_SerializeFromObject_TD_9174688_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status3546 = tbl_SerializeFromObject_TD_9174688_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _cd_education_status3547 = tbl_SerializeFromObject_TD_9174688_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if (((_cd_demo_sk3544!= 0) && (std::string(_cd_marital_status3546.data()) != "NULL")) && (std::string(_cd_education_status3547.data()) != "NULL")) {
            int32_t _cd_demo_sk3544_t = tbl_SerializeFromObject_TD_9174688_input.getInt32(i, 0);
            tbl_Filter_TD_8686270_output.setInt32(r, 0, _cd_demo_sk3544_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status3546_t = tbl_SerializeFromObject_TD_9174688_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8686270_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cd_marital_status3546_t);
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status3547_t = tbl_SerializeFromObject_TD_9174688_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8686270_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _cd_education_status3547_t);
            r++;
        }
    }
    tbl_Filter_TD_8686270_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8686270_output #Row: " << tbl_Filter_TD_8686270_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8438855_key_leftMajor {
    int32_t _wr_refunded_cdemo_sk835;
    bool operator==(const SW_JOIN_INNER_TD_8438855_key_leftMajor& other) const {
        return ((_wr_refunded_cdemo_sk835 == other._wr_refunded_cdemo_sk835));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8438855_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8438855_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_refunded_cdemo_sk835));
    }
};
}
struct SW_JOIN_INNER_TD_8438855_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int64_t _ws_sales_price750;
    int64_t _ws_net_profit762;
    int32_t _wr_refunded_cdemo_sk835;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_returning_cdemo_sk839;
    int32_t _wr_reason_sk843;
    int64_t _wr_fee849;
    int64_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_8438855_key_rightMajor {
    int32_t _cd_demo_sk93;
    bool operator==(const SW_JOIN_INNER_TD_8438855_key_rightMajor& other) const {
        return ((_cd_demo_sk93 == other._cd_demo_sk93));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8438855_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8438855_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk93));
    }
};
}
struct SW_JOIN_INNER_TD_8438855_payload_rightMajor {
    int32_t _cd_demo_sk93;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
};
void SW_JOIN_INNER_TD_8438855(Table &tbl_JOIN_INNER_TD_9576697_output, Table &tbl_Filter_TD_9969837_output, Table &tbl_JOIN_INNER_TD_8438855_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((((cd_marital_status#95 = M) AND (cd_education_status#96 = Advanced Degree)) AND (ws_sales_price#750 >= 100.00)) AND (ws_sales_price#750 <= 150.00)) OR ((((cd_marital_status#95 = S) AND (cd_education_status#96 = College)) AND (ws_sales_price#750 >= 50.00)) AND (ws_sales_price#750 <= 100.00))) OR ((((cd_marital_status#95 = W) AND (cd_education_status#96 = 2 yr Degree)) AND (ws_sales_price#750 >= 150.00)) AND (ws_sales_price#750 <= 200.00))) AND (cd_demo_sk#93 = wr_refunded_cdemo_sk#835)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_sales_price#750, ws_net_profit#762, wr_refunded_cdemo_sk#835, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(cd_demo_sk#93, cd_marital_status#95, cd_education_status#96)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_net_profit#762, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851, cd_marital_status#95, cd_education_status#96)
    int left_nrow = tbl_JOIN_INNER_TD_9576697_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9969837_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8438855_key_leftMajor, SW_JOIN_INNER_TD_8438855_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9576697_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_refunded_cdemo_sk835_k = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_8438855_key_leftMajor keyA{_wr_refunded_cdemo_sk835_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 1);
            int64_t _ws_sales_price750 = tbl_JOIN_INNER_TD_9576697_output.getInt64(i, 2);
            int64_t _ws_net_profit762 = tbl_JOIN_INNER_TD_9576697_output.getInt64(i, 3);
            int32_t _wr_refunded_cdemo_sk835 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 4);
            int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 5);
            int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 6);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 7);
            int64_t _wr_fee849 = tbl_JOIN_INNER_TD_9576697_output.getInt64(i, 8);
            int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_9576697_output.getInt64(i, 9);
            SW_JOIN_INNER_TD_8438855_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _ws_sales_price750, _ws_net_profit762, _wr_refunded_cdemo_sk835, _wr_refunded_addr_sk837, _wr_returning_cdemo_sk839, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9969837_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_9969837_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8438855_key_leftMajor{_cd_demo_sk93_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int64_t _ws_sales_price750 = (it->second)._ws_sales_price750;
                int64_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_refunded_cdemo_sk835 = (it->second)._wr_refunded_cdemo_sk835;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_returning_cdemo_sk839 = (it->second)._wr_returning_cdemo_sk839;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int64_t _wr_fee849 = (it->second)._wr_fee849;
                int64_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _cd_demo_sk93 = tbl_Filter_TD_9969837_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_9969837_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_9969837_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
                if ((((((_cd_marital_status95 == "M") && (_cd_education_status96 == "Advanced Degree")) && (_ws_sales_price750 >= 100.00)) && (_ws_sales_price750 <= 150.00)) || ((((_cd_marital_status95 == "S") && (_cd_education_status96 == "College")) && (_ws_sales_price750 >= 50.00)) && (_ws_sales_price750 <= 100.00))) || ((((_cd_marital_status95 == "W") && (_cd_education_status96 == "2 yr Degree")) && (_ws_sales_price750 >= 150.00)) && (_ws_sales_price750 <= 200.00))) {
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 0, _ws_sold_date_sk729);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 1, _ws_quantity747);
                    tbl_JOIN_INNER_TD_8438855_output.setInt64(r, 2, _ws_net_profit762);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 3, _wr_refunded_addr_sk837);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 4, _wr_returning_cdemo_sk839);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 5, _wr_reason_sk843);
                    tbl_JOIN_INNER_TD_8438855_output.setInt64(r, 6, _wr_fee849);
                    tbl_JOIN_INNER_TD_8438855_output.setInt64(r, 7, _wr_refunded_cash851);
                    tbl_JOIN_INNER_TD_8438855_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _cd_marital_status95_n);
                    tbl_JOIN_INNER_TD_8438855_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _cd_education_status96_n);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_8438855_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8438855_key_rightMajor, SW_JOIN_INNER_TD_8438855_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9969837_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk93_k = tbl_Filter_TD_9969837_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8438855_key_rightMajor keyA{_cd_demo_sk93_k};
            int32_t _cd_demo_sk93 = tbl_Filter_TD_9969837_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_Filter_TD_9969837_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_Filter_TD_9969837_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
            SW_JOIN_INNER_TD_8438855_payload_rightMajor payloadA{_cd_demo_sk93, _cd_marital_status95, _cd_education_status96};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9576697_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_refunded_cdemo_sk835_k = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8438855_key_rightMajor{_wr_refunded_cdemo_sk835_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk93 = (it->second)._cd_demo_sk93;
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                std::string _cd_education_status96 = (it->second)._cd_education_status96;
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n{};
                memcpy(_cd_education_status96_n.data(), (_cd_education_status96).data(), (_cd_education_status96).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 1);
                int64_t _ws_sales_price750 = tbl_JOIN_INNER_TD_9576697_output.getInt64(i, 2);
                int64_t _ws_net_profit762 = tbl_JOIN_INNER_TD_9576697_output.getInt64(i, 3);
                int32_t _wr_refunded_cdemo_sk835 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 4);
                int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 5);
                int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 6);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_9576697_output.getInt32(i, 7);
                int64_t _wr_fee849 = tbl_JOIN_INNER_TD_9576697_output.getInt64(i, 8);
                int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_9576697_output.getInt64(i, 9);
                if ((((((_cd_marital_status95 == "M") && (_cd_education_status96 == "Advanced Degree")) && (_ws_sales_price750 >= 100.00)) && (_ws_sales_price750 <= 150.00)) || ((((_cd_marital_status95 == "S") && (_cd_education_status96 == "College")) && (_ws_sales_price750 >= 50.00)) && (_ws_sales_price750 <= 100.00))) || ((((_cd_marital_status95 == "W") && (_cd_education_status96 == "2 yr Degree")) && (_ws_sales_price750 >= 150.00)) && (_ws_sales_price750 <= 200.00))) {
                    tbl_JOIN_INNER_TD_8438855_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _cd_marital_status95_n);
                    tbl_JOIN_INNER_TD_8438855_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _cd_education_status96_n);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 0, _ws_sold_date_sk729);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 1, _ws_quantity747);
                    tbl_JOIN_INNER_TD_8438855_output.setInt64(r, 2, _ws_net_profit762);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 3, _wr_refunded_addr_sk837);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 4, _wr_returning_cdemo_sk839);
                    tbl_JOIN_INNER_TD_8438855_output.setInt32(r, 5, _wr_reason_sk843);
                    tbl_JOIN_INNER_TD_8438855_output.setInt64(r, 6, _wr_fee849);
                    tbl_JOIN_INNER_TD_8438855_output.setInt64(r, 7, _wr_refunded_cash851);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_8438855_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8438855_output #Row: " << tbl_JOIN_INNER_TD_8438855_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7622118(Table &tbl_SerializeFromObject_TD_8662169_input, Table &tbl_Filter_TD_7622118_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(ca_country#64) AND (ca_country#64 = United States)) AND isnotnull(ca_address_sk#54)) AND ((ca_state#62 IN (IN,OH,NJ) OR ca_state#62 IN (WI,CT,KY)) OR ca_state#62 IN (LA,IA,AR))))
    // Input: ListBuffer(ca_address_sk#54, ca_state#62, ca_country#64)
    // Output: ListBuffer(ca_address_sk#54, ca_state#62)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8662169_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_country64 = tbl_SerializeFromObject_TD_8662169_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_8662169_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_state62 = tbl_SerializeFromObject_TD_8662169_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        auto reuse_col_str_931 = std::string(_ca_state62.data());
        auto reuse_col_str_815 = std::string(_ca_state62.data());
        auto reuse_col_str_567 = std::string(_ca_state62.data());
        if ((((std::string(_ca_country64.data()) != "NULL") && (std::string(_ca_country64.data()) == "United States")) && (_ca_address_sk54!= 0)) && ((((reuse_col_str_931 == "IN") || (reuse_col_str_931 == "OH") || (reuse_col_str_931 == "NJ") || (0)) || ((reuse_col_str_815 == "WI") || (reuse_col_str_815 == "CT") || (reuse_col_str_815 == "KY") || (0))) || ((reuse_col_str_567 == "LA") || (reuse_col_str_567 == "IA") || (reuse_col_str_567 == "AR") || (0)))) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_8662169_input.getInt32(i, 0);
            tbl_Filter_TD_7622118_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_t = tbl_SerializeFromObject_TD_8662169_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7622118_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_state62_t);
            r++;
        }
    }
    tbl_Filter_TD_7622118_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7622118_output #Row: " << tbl_Filter_TD_7622118_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7811337_key_leftMajor {
    int32_t _wr_returning_cdemo_sk839;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
    bool operator==(const SW_JOIN_INNER_TD_7811337_key_leftMajor& other) const {
        return ((_wr_returning_cdemo_sk839 == other._wr_returning_cdemo_sk839) && (_cd_marital_status95 == other._cd_marital_status95) && (_cd_education_status96 == other._cd_education_status96));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7811337_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7811337_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returning_cdemo_sk839)) + (hash<string>()(k._cd_marital_status95)) + (hash<string>()(k._cd_education_status96));
    }
};
}
struct SW_JOIN_INNER_TD_7811337_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int64_t _ws_net_profit762;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_returning_cdemo_sk839;
    int32_t _wr_reason_sk843;
    int64_t _wr_fee849;
    int64_t _wr_refunded_cash851;
    std::string _cd_marital_status95;
    std::string _cd_education_status96;
};
struct SW_JOIN_INNER_TD_7811337_key_rightMajor {
    int32_t _cd_demo_sk3544;
    std::string _cd_marital_status3546;
    std::string _cd_education_status3547;
    bool operator==(const SW_JOIN_INNER_TD_7811337_key_rightMajor& other) const {
        return ((_cd_demo_sk3544 == other._cd_demo_sk3544) && (_cd_marital_status3546 == other._cd_marital_status3546) && (_cd_education_status3547 == other._cd_education_status3547));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7811337_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7811337_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cd_demo_sk3544)) + (hash<string>()(k._cd_marital_status3546)) + (hash<string>()(k._cd_education_status3547));
    }
};
}
struct SW_JOIN_INNER_TD_7811337_payload_rightMajor {
    int32_t _cd_demo_sk3544;
    std::string _cd_marital_status3546;
    std::string _cd_education_status3547;
};
void SW_JOIN_INNER_TD_7811337(Table &tbl_JOIN_INNER_TD_8438855_output, Table &tbl_Filter_TD_8686270_output, Table &tbl_JOIN_INNER_TD_7811337_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((cd_demo_sk#3544 = wr_returning_cdemo_sk#839) AND (cd_marital_status#95 = cd_marital_status#3546)) AND (cd_education_status#96 = cd_education_status#3547)))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_net_profit#762, wr_refunded_addr_sk#837, wr_returning_cdemo_sk#839, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851, cd_marital_status#95, cd_education_status#96)
    // Right Table: ListBuffer(cd_demo_sk#3544, cd_marital_status#3546, cd_education_status#3547)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_net_profit#762, wr_refunded_addr_sk#837, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_JOIN_INNER_TD_8438855_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8686270_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7811337_key_leftMajor, SW_JOIN_INNER_TD_7811337_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8438855_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returning_cdemo_sk839_k = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_k_n = tbl_JOIN_INNER_TD_8438855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _cd_marital_status95_k = std::string(_cd_marital_status95_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_k_n = tbl_JOIN_INNER_TD_8438855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _cd_education_status96_k = std::string(_cd_education_status96_k_n.data());
            SW_JOIN_INNER_TD_7811337_key_leftMajor keyA{_wr_returning_cdemo_sk839_k, _cd_marital_status95_k, _cd_education_status96_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 1);
            int64_t _ws_net_profit762 = tbl_JOIN_INNER_TD_8438855_output.getInt64(i, 2);
            int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 3);
            int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 4);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 5);
            int64_t _wr_fee849 = tbl_JOIN_INNER_TD_8438855_output.getInt64(i, 6);
            int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_8438855_output.getInt64(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_JOIN_INNER_TD_8438855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_JOIN_INNER_TD_8438855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
            SW_JOIN_INNER_TD_7811337_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _ws_net_profit762, _wr_refunded_addr_sk837, _wr_returning_cdemo_sk839, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851, _cd_marital_status95, _cd_education_status96};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8686270_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cd_demo_sk3544_k = tbl_Filter_TD_8686270_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status3546_k_n = tbl_Filter_TD_8686270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status3546_k = std::string(_cd_marital_status3546_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status3547_k_n = tbl_Filter_TD_8686270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_education_status3547_k = std::string(_cd_education_status3547_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7811337_key_leftMajor{_cd_demo_sk3544_k, _cd_marital_status3546_k, _cd_education_status3547_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int64_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_returning_cdemo_sk839 = (it->second)._wr_returning_cdemo_sk839;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int64_t _wr_fee849 = (it->second)._wr_fee849;
                int64_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                std::string _cd_marital_status95 = (it->second)._cd_marital_status95;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n{};
                memcpy(_cd_marital_status95_n.data(), (_cd_marital_status95).data(), (_cd_marital_status95).length());
                std::string _cd_education_status96 = (it->second)._cd_education_status96;
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n{};
                memcpy(_cd_education_status96_n.data(), (_cd_education_status96).data(), (_cd_education_status96).length());
                int32_t _cd_demo_sk3544 = tbl_Filter_TD_8686270_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status3546_n = tbl_Filter_TD_8686270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cd_marital_status3546 = std::string(_cd_marital_status3546_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status3547_n = tbl_Filter_TD_8686270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _cd_education_status3547 = std::string(_cd_education_status3547_n.data());
                tbl_JOIN_INNER_TD_7811337_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7811337_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_7811337_output.setInt64(r, 2, _ws_net_profit762);
                tbl_JOIN_INNER_TD_7811337_output.setInt32(r, 3, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_7811337_output.setInt32(r, 4, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_7811337_output.setInt64(r, 5, _wr_fee849);
                tbl_JOIN_INNER_TD_7811337_output.setInt64(r, 6, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7811337_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7811337_key_rightMajor, SW_JOIN_INNER_TD_7811337_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8686270_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cd_demo_sk3544_k = tbl_Filter_TD_8686270_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status3546_k_n = tbl_Filter_TD_8686270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status3546_k = std::string(_cd_marital_status3546_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status3547_k_n = tbl_Filter_TD_8686270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_education_status3547_k = std::string(_cd_education_status3547_k_n.data());
            SW_JOIN_INNER_TD_7811337_key_rightMajor keyA{_cd_demo_sk3544_k, _cd_marital_status3546_k, _cd_education_status3547_k};
            int32_t _cd_demo_sk3544 = tbl_Filter_TD_8686270_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status3546_n = tbl_Filter_TD_8686270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cd_marital_status3546 = std::string(_cd_marital_status3546_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status3547_n = tbl_Filter_TD_8686270_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _cd_education_status3547 = std::string(_cd_education_status3547_n.data());
            SW_JOIN_INNER_TD_7811337_payload_rightMajor payloadA{_cd_demo_sk3544, _cd_marital_status3546, _cd_education_status3547};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8438855_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returning_cdemo_sk839_k = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_k_n = tbl_JOIN_INNER_TD_8438855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _cd_marital_status95_k = std::string(_cd_marital_status95_k_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_k_n = tbl_JOIN_INNER_TD_8438855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _cd_education_status96_k = std::string(_cd_education_status96_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7811337_key_rightMajor{_wr_returning_cdemo_sk839_k, _cd_marital_status95_k, _cd_education_status96_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cd_demo_sk3544 = (it->second)._cd_demo_sk3544;
                std::string _cd_marital_status3546 = (it->second)._cd_marital_status3546;
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status3546_n{};
                memcpy(_cd_marital_status3546_n.data(), (_cd_marital_status3546).data(), (_cd_marital_status3546).length());
                std::string _cd_education_status3547 = (it->second)._cd_education_status3547;
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status3547_n{};
                memcpy(_cd_education_status3547_n.data(), (_cd_education_status3547).data(), (_cd_education_status3547).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 1);
                int64_t _ws_net_profit762 = tbl_JOIN_INNER_TD_8438855_output.getInt64(i, 2);
                int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 3);
                int32_t _wr_returning_cdemo_sk839 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 4);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_8438855_output.getInt32(i, 5);
                int64_t _wr_fee849 = tbl_JOIN_INNER_TD_8438855_output.getInt64(i, 6);
                int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_8438855_output.getInt64(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _cd_marital_status95_n = tbl_JOIN_INNER_TD_8438855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _cd_marital_status95 = std::string(_cd_marital_status95_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _cd_education_status96_n = tbl_JOIN_INNER_TD_8438855_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _cd_education_status96 = std::string(_cd_education_status96_n.data());
                tbl_JOIN_INNER_TD_7811337_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_7811337_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_7811337_output.setInt64(r, 2, _ws_net_profit762);
                tbl_JOIN_INNER_TD_7811337_output.setInt32(r, 3, _wr_refunded_addr_sk837);
                tbl_JOIN_INNER_TD_7811337_output.setInt32(r, 4, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_7811337_output.setInt64(r, 5, _wr_fee849);
                tbl_JOIN_INNER_TD_7811337_output.setInt64(r, 6, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7811337_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7811337_output #Row: " << tbl_JOIN_INNER_TD_7811337_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6818358(Table &tbl_SerializeFromObject_TD_7704692_input, Table &tbl_Filter_TD_6818358_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2000)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7704692_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_7704692_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_7704692_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2000)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_7704692_input.getInt32(i, 0);
            tbl_Filter_TD_6818358_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_6818358_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6818358_output #Row: " << tbl_Filter_TD_6818358_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6220601_key_leftMajor {
    int32_t _wr_refunded_addr_sk837;
    bool operator==(const SW_JOIN_INNER_TD_6220601_key_leftMajor& other) const {
        return ((_wr_refunded_addr_sk837 == other._wr_refunded_addr_sk837));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6220601_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6220601_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_refunded_addr_sk837));
    }
};
}
struct SW_JOIN_INNER_TD_6220601_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int64_t _ws_net_profit762;
    int32_t _wr_refunded_addr_sk837;
    int32_t _wr_reason_sk843;
    int64_t _wr_fee849;
    int64_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_6220601_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_6220601_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6220601_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6220601_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_6220601_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_state62;
};
void SW_JOIN_INNER_TD_6220601(Table &tbl_JOIN_INNER_TD_7811337_output, Table &tbl_Filter_TD_7622118_output, Table &tbl_JOIN_INNER_TD_6220601_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ca_address_sk#54 = wr_refunded_addr_sk#837) AND ((((ca_state#62 IN (IN,OH,NJ) AND (ws_net_profit#762 >= 100.00)) AND (ws_net_profit#762 <= 200.00)) OR ((ca_state#62 IN (WI,CT,KY) AND (ws_net_profit#762 >= 150.00)) AND (ws_net_profit#762 <= 300.00))) OR ((ca_state#62 IN (LA,IA,AR) AND (ws_net_profit#762 >= 50.00)) AND (ws_net_profit#762 <= 250.00)))))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_net_profit#762, wr_refunded_addr_sk#837, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(ca_address_sk#54, ca_state#62)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    int left_nrow = tbl_JOIN_INNER_TD_7811337_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7622118_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6220601_key_leftMajor, SW_JOIN_INNER_TD_6220601_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7811337_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_refunded_addr_sk837_k = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6220601_key_leftMajor keyA{_wr_refunded_addr_sk837_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 1);
            int64_t _ws_net_profit762 = tbl_JOIN_INNER_TD_7811337_output.getInt64(i, 2);
            int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 3);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 4);
            int64_t _wr_fee849 = tbl_JOIN_INNER_TD_7811337_output.getInt64(i, 5);
            int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_7811337_output.getInt64(i, 6);
            SW_JOIN_INNER_TD_6220601_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _ws_net_profit762, _wr_refunded_addr_sk837, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7622118_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7622118_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6220601_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int64_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wr_refunded_addr_sk837 = (it->second)._wr_refunded_addr_sk837;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int64_t _wr_fee849 = (it->second)._wr_fee849;
                int64_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _ca_address_sk54 = tbl_Filter_TD_7622118_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_7622118_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_state62 = std::string(_ca_state62_n.data());
                tbl_JOIN_INNER_TD_6220601_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_6220601_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_6220601_output.setInt32(r, 2, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_6220601_output.setInt64(r, 3, _wr_fee849);
                tbl_JOIN_INNER_TD_6220601_output.setInt64(r, 4, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6220601_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6220601_key_rightMajor, SW_JOIN_INNER_TD_6220601_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7622118_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_7622118_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6220601_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_7622118_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n = tbl_Filter_TD_7622118_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_state62 = std::string(_ca_state62_n.data());
            SW_JOIN_INNER_TD_6220601_payload_rightMajor payloadA{_ca_address_sk54, _ca_state62};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7811337_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_refunded_addr_sk837_k = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6220601_key_rightMajor{_wr_refunded_addr_sk837_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_state62 = (it->second)._ca_state62;
                std::array<char, TPCDS_READ_MAX + 1> _ca_state62_n{};
                memcpy(_ca_state62_n.data(), (_ca_state62).data(), (_ca_state62).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 1);
                int64_t _ws_net_profit762 = tbl_JOIN_INNER_TD_7811337_output.getInt64(i, 2);
                int32_t _wr_refunded_addr_sk837 = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 3);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_7811337_output.getInt32(i, 4);
                int64_t _wr_fee849 = tbl_JOIN_INNER_TD_7811337_output.getInt64(i, 5);
                int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_7811337_output.getInt64(i, 6);
                tbl_JOIN_INNER_TD_6220601_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_6220601_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_6220601_output.setInt32(r, 2, _wr_reason_sk843);
                tbl_JOIN_INNER_TD_6220601_output.setInt64(r, 3, _wr_fee849);
                tbl_JOIN_INNER_TD_6220601_output.setInt64(r, 4, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6220601_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6220601_output #Row: " << tbl_JOIN_INNER_TD_6220601_output.getNumRow() << std::endl;
}

void SW_Filter_TD_593692(Table &tbl_SerializeFromObject_TD_653671_input, Table &tbl_Filter_TD_593692_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(r_reason_sk#351))
    // Input: ListBuffer(r_reason_sk#351, r_reason_desc#353)
    // Output: ListBuffer(r_reason_sk#351, r_reason_desc#353)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_653671_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _r_reason_sk351 = tbl_SerializeFromObject_TD_653671_input.getInt32(i, 0);
        if (_r_reason_sk351!= 0) {
            int32_t _r_reason_sk351_t = tbl_SerializeFromObject_TD_653671_input.getInt32(i, 0);
            tbl_Filter_TD_593692_output.setInt32(r, 0, _r_reason_sk351_t);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_t = tbl_SerializeFromObject_TD_653671_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_593692_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _r_reason_desc353_t);
            r++;
        }
    }
    tbl_Filter_TD_593692_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_593692_output #Row: " << tbl_Filter_TD_593692_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_4897087_key_leftMajor {
    int32_t _wr_reason_sk843;
    bool operator==(const SW_JOIN_INNER_TD_4897087_key_leftMajor& other) const {
        return ((_wr_reason_sk843 == other._wr_reason_sk843));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4897087_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4897087_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_reason_sk843));
    }
};
}
struct SW_JOIN_INNER_TD_4897087_payload_leftMajor {
    int32_t _ws_quantity747;
    int32_t _wr_reason_sk843;
    int64_t _wr_fee849;
    int64_t _wr_refunded_cash851;
};
struct SW_JOIN_INNER_TD_4897087_key_rightMajor {
    int32_t _r_reason_sk351;
    bool operator==(const SW_JOIN_INNER_TD_4897087_key_rightMajor& other) const {
        return ((_r_reason_sk351 == other._r_reason_sk351));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4897087_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4897087_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._r_reason_sk351));
    }
};
}
struct SW_JOIN_INNER_TD_4897087_payload_rightMajor {
    int32_t _r_reason_sk351;
    std::string _r_reason_desc353;
};
void SW_JOIN_INNER_TD_4897087(Table &tbl_JOIN_INNER_TD_5925652_output, Table &tbl_Filter_TD_593692_output, Table &tbl_JOIN_INNER_TD_4897087_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((r_reason_sk#351 = wr_reason_sk#843))
    // Left Table: ListBuffer(ws_quantity#747, wr_reason_sk#843, wr_fee#849, wr_refunded_cash#851)
    // Right Table: ListBuffer(r_reason_sk#351, r_reason_desc#353)
    // Output Table: ListBuffer(ws_quantity#747, wr_fee#849, wr_refunded_cash#851, r_reason_desc#353)
    int left_nrow = tbl_JOIN_INNER_TD_5925652_output.getNumRow();
    int right_nrow = tbl_Filter_TD_593692_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4897087_key_leftMajor, SW_JOIN_INNER_TD_4897087_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5925652_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_reason_sk843_k = tbl_JOIN_INNER_TD_5925652_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4897087_key_leftMajor keyA{_wr_reason_sk843_k};
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_5925652_output.getInt32(i, 0);
            int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_5925652_output.getInt32(i, 1);
            int64_t _wr_fee849 = tbl_JOIN_INNER_TD_5925652_output.getInt64(i, 2);
            int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_5925652_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_4897087_payload_leftMajor payloadA{_ws_quantity747, _wr_reason_sk843, _wr_fee849, _wr_refunded_cash851};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_593692_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _r_reason_sk351_k = tbl_Filter_TD_593692_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4897087_key_leftMajor{_r_reason_sk351_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _wr_reason_sk843 = (it->second)._wr_reason_sk843;
                int64_t _wr_fee849 = (it->second)._wr_fee849;
                int64_t _wr_refunded_cash851 = (it->second)._wr_refunded_cash851;
                int32_t _r_reason_sk351 = tbl_Filter_TD_593692_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_n = tbl_Filter_TD_593692_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _r_reason_desc353 = std::string(_r_reason_desc353_n.data());
                tbl_JOIN_INNER_TD_4897087_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_4897087_output.setInt64(r, 1, _wr_fee849);
                tbl_JOIN_INNER_TD_4897087_output.setInt64(r, 2, _wr_refunded_cash851);
                tbl_JOIN_INNER_TD_4897087_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _r_reason_desc353_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4897087_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4897087_key_rightMajor, SW_JOIN_INNER_TD_4897087_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_593692_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _r_reason_sk351_k = tbl_Filter_TD_593692_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4897087_key_rightMajor keyA{_r_reason_sk351_k};
            int32_t _r_reason_sk351 = tbl_Filter_TD_593692_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_n = tbl_Filter_TD_593692_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _r_reason_desc353 = std::string(_r_reason_desc353_n.data());
            SW_JOIN_INNER_TD_4897087_payload_rightMajor payloadA{_r_reason_sk351, _r_reason_desc353};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5925652_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_reason_sk843_k = tbl_JOIN_INNER_TD_5925652_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4897087_key_rightMajor{_wr_reason_sk843_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _r_reason_sk351 = (it->second)._r_reason_sk351;
                std::string _r_reason_desc353 = (it->second)._r_reason_desc353;
                std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353_n{};
                memcpy(_r_reason_desc353_n.data(), (_r_reason_desc353).data(), (_r_reason_desc353).length());
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_5925652_output.getInt32(i, 0);
                int32_t _wr_reason_sk843 = tbl_JOIN_INNER_TD_5925652_output.getInt32(i, 1);
                int64_t _wr_fee849 = tbl_JOIN_INNER_TD_5925652_output.getInt64(i, 2);
                int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_5925652_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_4897087_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _r_reason_desc353_n);
                tbl_JOIN_INNER_TD_4897087_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_4897087_output.setInt64(r, 1, _wr_fee849);
                tbl_JOIN_INNER_TD_4897087_output.setInt64(r, 2, _wr_refunded_cash851);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4897087_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4897087_output #Row: " << tbl_JOIN_INNER_TD_4897087_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3215716_key;
struct SW_Aggregate_TD_3215716_payload {
    std::string substr_r_reason_desc_1_20;
    int64_t _avgws_quantity3557_avg_0;
    int64_t _avgwr_refunded_cash3558_avg_1;
    int64_t _avgwr_fee3559_avg_2;
};
void SW_Aggregate_TD_3215716(Table &tbl_JOIN_INNER_TD_4897087_output, Table &tbl_Aggregate_TD_3215716_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(r_reason_desc#353, substr(r_reason_desc#353, 1, 20) AS substr(r_reason_desc, 1, 20)#3556, avg(ws_quantity#747) AS avg(ws_quantity)#3557, cast((avg(UnscaledValue(wr_refunded_cash#851)) / 100.0) as decimal(11,6)) AS avg(wr_refunded_cash)#3558, cast((avg(UnscaledValue(wr_fee#849)) / 100.0) as decimal(11,6)) AS avg(wr_fee)#3559)
    // Input: ListBuffer(ws_quantity#747, wr_fee#849, wr_refunded_cash#851, r_reason_desc#353)
    // Output: ListBuffer(substr(r_reason_desc, 1, 20)#3556, avg(ws_quantity)#3557, avg(wr_refunded_cash)#3558, avg(wr_fee)#3559)
    std::unordered_map<SW_Aggregate_TD_3215716_key, SW_Aggregate_TD_3215716_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4897087_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_4897087_output.getInt32(i, 0);
        int64_t _wr_fee849 = tbl_JOIN_INNER_TD_4897087_output.getInt64(i, 1);
        int64_t _wr_refunded_cash851 = tbl_JOIN_INNER_TD_4897087_output.getInt64(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _r_reason_desc353 = tbl_JOIN_INNER_TD_4897087_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_3215716_key k = std::string(_r_reason_desc353.data());
        std::string substr_r_reason_desc_1_20 = std::string(_r_reason_desc353.data()).substr(0, 20);
        int64_t _avgws_quantity3557_avg_0 = _ws_quantity747;
        int64_t _avgwr_refunded_cash3558_avg_1 = _wr_refunded_cash851;
        int64_t _avgwr_fee3559_avg_2 = _wr_fee849;
        SW_Aggregate_TD_3215716_payload p{std::string(substr_r_reason_desc_1_20.data()), _avgws_quantity3557_avg_0, _avgwr_refunded_cash3558_avg_1, _avgwr_fee3559_avg_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._avgws_quantity3557_avg_0 + _avgws_quantity3557_avg_0);
            p._avgws_quantity3557_avg_0 = avg_0;
            int64_t avg_1 = ((it->second)._avgwr_refunded_cash3558_avg_1 + _avgwr_refunded_cash3558_avg_1);
            p._avgwr_refunded_cash3558_avg_1 = avg_1;
            int64_t avg_2 = ((it->second)._avgwr_fee3559_avg_2 + _avgwr_fee3559_avg_2);
            p._avgwr_fee3559_avg_2 = avg_2;
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
        tbl_Aggregate_TD_3215716_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, substr_r_reason_desc_1_20_n);
        int64_t _avgws_quantity3557 = (it.second)._avgws_quantity3557_avg_0 / nrow1;
        tbl_Aggregate_TD_3215716_output.setInt64(r, 1, _avgws_quantity3557);
        int64_t _avgwr_refunded_cash3558 = ((it.second)._avgwr_refunded_cash3558_avg_1 / nrow1 / 100.0);
        tbl_Aggregate_TD_3215716_output.setInt64(r, 2, _avgwr_refunded_cash3558);
        int64_t _avgwr_fee3559 = ((it.second)._avgwr_fee3559_avg_2 / nrow1 / 100.0);
        tbl_Aggregate_TD_3215716_output.setInt64(r, 3, _avgwr_fee3559);
        ++r;
    }
    tbl_Aggregate_TD_3215716_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3215716_output #Row: " << tbl_Aggregate_TD_3215716_output.getNumRow() << std::endl;
}

void SW_Sort_TD_262009(Table &tbl_Aggregate_TD_3215716_output, Table &tbl_Sort_TD_262009_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(substr(r_reason_desc, 1, 20)#3556 ASC NULLS FIRST, avg(ws_quantity)#3557 ASC NULLS FIRST, avg(wr_refunded_cash)#3558 ASC NULLS FIRST, avg(wr_fee)#3559 ASC NULLS FIRST)
    // Input: ListBuffer(substr(r_reason_desc, 1, 20)#3556, avg(ws_quantity)#3557, avg(wr_refunded_cash)#3558, avg(wr_fee)#3559)
    // Output: ListBuffer(substr(r_reason_desc, 1, 20)#3556, avg(ws_quantity)#3557, avg(wr_refunded_cash)#3558, avg(wr_fee)#3559)
    struct SW_Sort_TD_262009Row {
        std::string substr_r_reason_desc_1_20;
        int64_t _avgws_quantity3557;
        int64_t _avgwr_refunded_cash3558;
        int64_t _avgwr_fee3559;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_262009Row& a, const SW_Sort_TD_262009Row& b) const { return 
 (a.substr_r_reason_desc_1_20 < b.substr_r_reason_desc_1_20) || 
 ((a.substr_r_reason_desc_1_20 == b.substr_r_reason_desc_1_20) && (a._avgws_quantity3557 < b._avgws_quantity3557)) || 
 ((a.substr_r_reason_desc_1_20 == b.substr_r_reason_desc_1_20) && (a._avgws_quantity3557 == b._avgws_quantity3557) && (a._avgwr_refunded_cash3558 < b._avgwr_refunded_cash3558)) || 
 ((a.substr_r_reason_desc_1_20 == b.substr_r_reason_desc_1_20) && (a._avgws_quantity3557 == b._avgws_quantity3557) && (a._avgwr_refunded_cash3558 == b._avgwr_refunded_cash3558) && (a._avgwr_fee3559 < b._avgwr_fee3559)); 
}
    }SW_Sort_TD_262009_order; 

    int nrow1 = tbl_Aggregate_TD_3215716_output.getNumRow();
    std::vector<SW_Sort_TD_262009Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20 = tbl_Aggregate_TD_3215716_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _avgws_quantity3557 = tbl_Aggregate_TD_3215716_output.getInt32(i, 1);
        int64_t _avgwr_refunded_cash3558 = tbl_Aggregate_TD_3215716_output.getInt64(i, 2);
        int64_t _avgwr_fee3559 = tbl_Aggregate_TD_3215716_output.getInt64(i, 3);
        SW_Sort_TD_262009Row t = {std::string(substr_r_reason_desc_1_20.data()),_avgws_quantity3557,_avgwr_refunded_cash3558,_avgwr_fee3559};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_262009_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20{};
        memcpy(substr_r_reason_desc_1_20.data(), (it.substr_r_reason_desc_1_20).data(), (it.substr_r_reason_desc_1_20).length());
        tbl_Sort_TD_262009_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, substr_r_reason_desc_1_20);
        tbl_Sort_TD_262009_output.setInt32(r, 1, it._avgws_quantity3557);
        tbl_Sort_TD_262009_output.setInt64(r, 2, it._avgwr_refunded_cash3558);
        tbl_Sort_TD_262009_output.setInt64(r, 3, it._avgwr_fee3559);
        ++r;
    }
    tbl_Sort_TD_262009_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_262009_output #Row: " << tbl_Sort_TD_262009_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1951222(Table &tbl_Sort_TD_262009_output, Table &tbl_LocalLimit_TD_1951222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(substr(r_reason_desc, 1, 20)#3556, avg(ws_quantity)#3557, avg(wr_refunded_cash)#3558, avg(wr_fee)#3559)
    // Output: ListBuffer(substr(r_reason_desc, 1, 20)#3556, avg(ws_quantity)#3557, avg(wr_refunded_cash)#3558, avg(wr_fee)#3559)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20_n = tbl_Sort_TD_262009_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1951222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, substr_r_reason_desc_1_20_n);
        tbl_LocalLimit_TD_1951222_output.setInt64(r, 1, tbl_Sort_TD_262009_output.getInt64(i, 1));
        tbl_LocalLimit_TD_1951222_output.setInt64(r, 2, tbl_Sort_TD_262009_output.getInt64(i, 2));
        tbl_LocalLimit_TD_1951222_output.setInt64(r, 3, tbl_Sort_TD_262009_output.getInt64(i, 3));
        r++;
    }
    tbl_LocalLimit_TD_1951222_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1951222_output #Row: " << tbl_LocalLimit_TD_1951222_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0112166(Table &tbl_LocalLimit_TD_1951222_output, Table &tbl_GlobalLimit_TD_0112166_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(substr(r_reason_desc, 1, 20)#3556, avg(ws_quantity)#3557, avg(wr_refunded_cash)#3558, avg(wr_fee)#3559)
    // Output: ListBuffer(substr(r_reason_desc, 1, 20)#3556, avg(ws_quantity)#3557, avg(wr_refunded_cash)#3558, avg(wr_fee)#3559)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> substr_r_reason_desc_1_20_n = tbl_LocalLimit_TD_1951222_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0112166_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, substr_r_reason_desc_1_20_n);
        tbl_GlobalLimit_TD_0112166_output.setInt64(r, 1, tbl_LocalLimit_TD_1951222_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0112166_output.setInt64(r, 2, tbl_LocalLimit_TD_1951222_output.getInt64(i, 2));
        tbl_GlobalLimit_TD_0112166_output.setInt64(r, 3, tbl_LocalLimit_TD_1951222_output.getInt64(i, 3));
        r++;
    }
    tbl_GlobalLimit_TD_0112166_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0112166_output #Row: " << tbl_GlobalLimit_TD_0112166_output.getNumRow() << std::endl;
}

