#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_12192(Table &tbl_SerializeFromObject_TD_13215_input, Table &tbl_Filter_TD_12192_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ws_item_sk#8556) AND isnotnull(ws_order_number#8570L)) AND isnotnull(ws_web_site_sk#8566)))
    // Input: ListBuffer(ws_item_sk#8556, ws_web_site_sk#8566, ws_order_number#8570L)
    // Output: ListBuffer(ws_item_sk#8556, ws_web_site_sk#8566, ws_order_number#8570L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13215_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk8556 = tbl_SerializeFromObject_TD_13215_input.getInt32(i, 0);
        int64_t _ws_order_number8570L = tbl_SerializeFromObject_TD_13215_input.getInt64(i, 2);
        int32_t _ws_web_site_sk8566 = tbl_SerializeFromObject_TD_13215_input.getInt32(i, 1);
        if (((1) && (1)) && (1)) {
            int32_t _ws_item_sk8556_t = tbl_SerializeFromObject_TD_13215_input.getInt32(i, 0);
            tbl_Filter_TD_12192_output.setInt32(r, 0, _ws_item_sk8556_t);
            int32_t _ws_web_site_sk8566_t = tbl_SerializeFromObject_TD_13215_input.getInt32(i, 1);
            tbl_Filter_TD_12192_output.setInt32(r, 1, _ws_web_site_sk8566_t);
            int64_t _ws_order_number8570L_t = tbl_SerializeFromObject_TD_13215_input.getInt64(i, 2);
            tbl_Filter_TD_12192_output.setInt64(r, 2, _ws_order_number8570L_t);
            r++;
        }
    }
    tbl_Filter_TD_12192_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12192_output #Row: " << tbl_Filter_TD_12192_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12594(Table &tbl_SerializeFromObject_TD_13958_input, Table &tbl_Filter_TD_12594_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wr_returned_date_sk#831))
    // Input: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    // Output: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13958_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_returned_date_sk831 = tbl_SerializeFromObject_TD_13958_input.getInt32(i, 0);
        if (1) {
            int32_t _wr_returned_date_sk831_t = tbl_SerializeFromObject_TD_13958_input.getInt32(i, 0);
            tbl_Filter_TD_12594_output.setInt32(r, 0, _wr_returned_date_sk831_t);
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_13958_input.getInt32(i, 1);
            tbl_Filter_TD_12594_output.setInt32(r, 1, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_13958_input.getInt64(i, 2);
            tbl_Filter_TD_12594_output.setInt64(r, 2, _wr_order_number844L_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_13958_input.getInt32(i, 3);
            tbl_Filter_TD_12594_output.setInt32(r, 3, _wr_return_amt846_t);
            int32_t _wr_net_loss854_t = tbl_SerializeFromObject_TD_13958_input.getInt32(i, 4);
            tbl_Filter_TD_12594_output.setInt32(r, 4, _wr_net_loss854_t);
            r++;
        }
    }
    tbl_Filter_TD_12594_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12594_output #Row: " << tbl_Filter_TD_12594_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11758_key_leftMajor {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    bool operator==(const SW_JOIN_INNER_TD_11758_key_leftMajor& other) const {
        return ((_wr_item_sk833 == other._wr_item_sk833) && (_wr_order_number844L == other._wr_order_number844L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11758_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11758_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_item_sk833)) + (hash<int64_t>()(k._wr_order_number844L));
    }
};
}
struct SW_JOIN_INNER_TD_11758_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_11758_key_rightMajor {
    int32_t _ws_item_sk8556;
    int64_t _ws_order_number8570L;
    bool operator==(const SW_JOIN_INNER_TD_11758_key_rightMajor& other) const {
        return ((_ws_item_sk8556 == other._ws_item_sk8556) && (_ws_order_number8570L == other._ws_order_number8570L));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11758_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11758_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk8556)) + (hash<int64_t>()(k._ws_order_number8570L));
    }
};
}
struct SW_JOIN_INNER_TD_11758_payload_rightMajor {
    int32_t _ws_item_sk8556;
    int32_t _ws_web_site_sk8566;
    int64_t _ws_order_number8570L;
};
void SW_JOIN_INNER_TD_11758(Table &tbl_Filter_TD_12594_output, Table &tbl_Filter_TD_12192_output, Table &tbl_JOIN_INNER_TD_11758_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((wr_item_sk#833 = ws_item_sk#8556) AND (wr_order_number#844L = ws_order_number#8570L)))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(ws_item_sk#8556, ws_web_site_sk#8566, ws_order_number#8570L)
    // Output Table: ListBuffer(ws_web_site_sk#8566, wr_returned_date_sk#831, wr_return_amt#846, wr_net_loss#854)
    int left_nrow = tbl_Filter_TD_12594_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12192_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11758_key_leftMajor, SW_JOIN_INNER_TD_11758_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12594_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_12594_output.getInt32(i, 1);
            int64_t _wr_order_number844L_k = tbl_Filter_TD_12594_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_11758_key_leftMajor keyA{_wr_item_sk833_k, _wr_order_number844L_k};
            int32_t _wr_returned_date_sk831 = tbl_Filter_TD_12594_output.getInt32(i, 0);
            int32_t _wr_item_sk833 = tbl_Filter_TD_12594_output.getInt32(i, 1);
            int64_t _wr_order_number844L = tbl_Filter_TD_12594_output.getInt64(i, 2);
            int32_t _wr_return_amt846 = tbl_Filter_TD_12594_output.getInt32(i, 3);
            int32_t _wr_net_loss854 = tbl_Filter_TD_12594_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11758_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_item_sk833, _wr_order_number844L, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12192_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk8556_k = tbl_Filter_TD_12192_output.getInt32(i, 0);
            int64_t _ws_order_number8570L_k = tbl_Filter_TD_12192_output.getInt64(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11758_key_leftMajor{_ws_item_sk8556_k, _ws_order_number8570L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_item_sk833 = (it->second)._wr_item_sk833;
                int64_t _wr_order_number844L = (it->second)._wr_order_number844L;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                int32_t _ws_item_sk8556 = tbl_Filter_TD_12192_output.getInt32(i, 0);
                int32_t _ws_web_site_sk8566 = tbl_Filter_TD_12192_output.getInt32(i, 1);
                int64_t _ws_order_number8570L = tbl_Filter_TD_12192_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_11758_output.setInt32(r, 1, _wr_returned_date_sk831);
                tbl_JOIN_INNER_TD_11758_output.setInt32(r, 2, _wr_return_amt846);
                tbl_JOIN_INNER_TD_11758_output.setInt32(r, 3, _wr_net_loss854);
                tbl_JOIN_INNER_TD_11758_output.setInt32(r, 0, _ws_web_site_sk8566);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11758_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11758_key_rightMajor, SW_JOIN_INNER_TD_11758_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12192_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk8556_k = tbl_Filter_TD_12192_output.getInt32(i, 0);
            int64_t _ws_order_number8570L_k = tbl_Filter_TD_12192_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_11758_key_rightMajor keyA{_ws_item_sk8556_k, _ws_order_number8570L_k};
            int32_t _ws_item_sk8556 = tbl_Filter_TD_12192_output.getInt32(i, 0);
            int32_t _ws_web_site_sk8566 = tbl_Filter_TD_12192_output.getInt32(i, 1);
            int64_t _ws_order_number8570L = tbl_Filter_TD_12192_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_11758_payload_rightMajor payloadA{_ws_item_sk8556, _ws_web_site_sk8566, _ws_order_number8570L};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12594_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_item_sk833_k = tbl_Filter_TD_12594_output.getInt32(i, 1);
            int64_t _wr_order_number844L_k = tbl_Filter_TD_12594_output.getInt64(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11758_key_rightMajor{_wr_item_sk833_k, _wr_order_number844L_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_item_sk8556 = (it->second)._ws_item_sk8556;
                int32_t _ws_web_site_sk8566 = (it->second)._ws_web_site_sk8566;
                int64_t _ws_order_number8570L = (it->second)._ws_order_number8570L;
                int32_t _wr_returned_date_sk831 = tbl_Filter_TD_12594_output.getInt32(i, 0);
                int32_t _wr_item_sk833 = tbl_Filter_TD_12594_output.getInt32(i, 1);
                int64_t _wr_order_number844L = tbl_Filter_TD_12594_output.getInt64(i, 2);
                int32_t _wr_return_amt846 = tbl_Filter_TD_12594_output.getInt32(i, 3);
                int32_t _wr_net_loss854 = tbl_Filter_TD_12594_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11758_output.setInt32(r, 0, _ws_web_site_sk8566);
                tbl_JOIN_INNER_TD_11758_output.setInt32(r, 1, _wr_returned_date_sk831);
                tbl_JOIN_INNER_TD_11758_output.setInt32(r, 2, _wr_return_amt846);
                tbl_JOIN_INNER_TD_11758_output.setInt32(r, 3, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11758_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11758_output #Row: " << tbl_JOIN_INNER_TD_11758_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11186(Table &tbl_SerializeFromObject_TD_12863_input, Table &tbl_Filter_TD_11186_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_web_site_sk#742)))
    // Input: ListBuffer(ws_web_site_sk#742, ws_sold_date_sk#729, ws_ext_sales_price#752, ws_net_profit#762)
    // Output: ListBuffer(ws_web_site_sk#742, ws_sold_date_sk#729, ws_ext_sales_price#752, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12863_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_12863_input.getInt32(i, 1);
        int32_t _ws_web_site_sk742 = tbl_SerializeFromObject_TD_12863_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_web_site_sk742_t = tbl_SerializeFromObject_TD_12863_input.getInt32(i, 0);
            tbl_Filter_TD_11186_output.setInt32(r, 0, _ws_web_site_sk742_t);
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_12863_input.getInt32(i, 1);
            tbl_Filter_TD_11186_output.setInt32(r, 1, _ws_sold_date_sk729_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_12863_input.getInt32(i, 2);
            tbl_Filter_TD_11186_output.setInt32(r, 2, _ws_ext_sales_price752_t);
            int32_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_12863_input.getInt32(i, 3);
            tbl_Filter_TD_11186_output.setInt32(r, 3, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_11186_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11186_output #Row: " << tbl_Filter_TD_11186_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11867(Table &tbl_SerializeFromObject_TD_12502_input, Table &tbl_Filter_TD_11867_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_returned_date_sk#1023) AND isnotnull(cr_catalog_page_sk#1035)))
    // Input: ListBuffer(cr_catalog_page_sk#1035, cr_returned_date_sk#1023, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(cr_catalog_page_sk#1035, cr_returned_date_sk#1023, cr_return_amount#1041, cr_net_loss#1049)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12502_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_12502_input.getInt32(i, 1);
        int32_t _cr_catalog_page_sk1035 = tbl_SerializeFromObject_TD_12502_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cr_catalog_page_sk1035_t = tbl_SerializeFromObject_TD_12502_input.getInt32(i, 0);
            tbl_Filter_TD_11867_output.setInt32(r, 0, _cr_catalog_page_sk1035_t);
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_12502_input.getInt32(i, 1);
            tbl_Filter_TD_11867_output.setInt32(r, 1, _cr_returned_date_sk1023_t);
            int32_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_12502_input.getInt32(i, 2);
            tbl_Filter_TD_11867_output.setInt32(r, 2, _cr_return_amount1041_t);
            int32_t _cr_net_loss1049_t = tbl_SerializeFromObject_TD_12502_input.getInt32(i, 3);
            tbl_Filter_TD_11867_output.setInt32(r, 3, _cr_net_loss1049_t);
            r++;
        }
    }
    tbl_Filter_TD_11867_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11867_output #Row: " << tbl_Filter_TD_11867_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11886(Table &tbl_SerializeFromObject_TD_12323_input, Table &tbl_Filter_TD_11886_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_catalog_page_sk#1116)))
    // Input: ListBuffer(cs_catalog_page_sk#1116, cs_sold_date_sk#1104, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(cs_catalog_page_sk#1116, cs_sold_date_sk#1104, cs_ext_sales_price#1127, cs_net_profit#1137)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12323_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_12323_input.getInt32(i, 1);
        int32_t _cs_catalog_page_sk1116 = tbl_SerializeFromObject_TD_12323_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_catalog_page_sk1116_t = tbl_SerializeFromObject_TD_12323_input.getInt32(i, 0);
            tbl_Filter_TD_11886_output.setInt32(r, 0, _cs_catalog_page_sk1116_t);
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_12323_input.getInt32(i, 1);
            tbl_Filter_TD_11886_output.setInt32(r, 1, _cs_sold_date_sk1104_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_12323_input.getInt32(i, 2);
            tbl_Filter_TD_11886_output.setInt32(r, 2, _cs_ext_sales_price1127_t);
            int32_t _cs_net_profit1137_t = tbl_SerializeFromObject_TD_12323_input.getInt32(i, 3);
            tbl_Filter_TD_11886_output.setInt32(r, 3, _cs_net_profit1137_t);
            r++;
        }
    }
    tbl_Filter_TD_11886_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11886_output #Row: " << tbl_Filter_TD_11886_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11684(Table &tbl_SerializeFromObject_TD_12424_input, Table &tbl_Filter_TD_11684_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_returned_date_sk#669) AND isnotnull(sr_store_sk#676)))
    // Input: ListBuffer(sr_store_sk#676, sr_returned_date_sk#669, sr_return_amt#680, sr_net_loss#688)
    // Output: ListBuffer(sr_store_sk#676, sr_returned_date_sk#669, sr_return_amt#680, sr_net_loss#688)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12424_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_returned_date_sk669 = tbl_SerializeFromObject_TD_12424_input.getInt32(i, 1);
        int32_t _sr_store_sk676 = tbl_SerializeFromObject_TD_12424_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _sr_store_sk676_t = tbl_SerializeFromObject_TD_12424_input.getInt32(i, 0);
            tbl_Filter_TD_11684_output.setInt32(r, 0, _sr_store_sk676_t);
            int32_t _sr_returned_date_sk669_t = tbl_SerializeFromObject_TD_12424_input.getInt32(i, 1);
            tbl_Filter_TD_11684_output.setInt32(r, 1, _sr_returned_date_sk669_t);
            int32_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_12424_input.getInt32(i, 2);
            tbl_Filter_TD_11684_output.setInt32(r, 2, _sr_return_amt680_t);
            int32_t _sr_net_loss688_t = tbl_SerializeFromObject_TD_12424_input.getInt32(i, 3);
            tbl_Filter_TD_11684_output.setInt32(r, 3, _sr_net_loss688_t);
            r++;
        }
    }
    tbl_Filter_TD_11684_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11684_output #Row: " << tbl_Filter_TD_11684_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11733(Table &tbl_SerializeFromObject_TD_12119_input, Table &tbl_Filter_TD_11733_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)))
    // Input: ListBuffer(ss_store_sk#1213, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(ss_store_sk#1213, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12119_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12119_input.getInt32(i, 1);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12119_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_12119_input.getInt32(i, 0);
            tbl_Filter_TD_11733_output.setInt32(r, 0, _ss_store_sk1213_t);
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12119_input.getInt32(i, 1);
            tbl_Filter_TD_11733_output.setInt32(r, 1, _ss_sold_date_sk1206_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_12119_input.getInt32(i, 2);
            tbl_Filter_TD_11733_output.setInt32(r, 2, _ss_ext_sales_price1221_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_12119_input.getInt32(i, 3);
            tbl_Filter_TD_11733_output.setInt32(r, 3, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_11733_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11733_output #Row: " << tbl_Filter_TD_11733_output.getNumRow() << std::endl;
}

void SW_Project_TD_10339(Table &tbl_JOIN_INNER_TD_11758_output, Table &tbl_Project_TD_10339_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_web_site_sk#8566 AS wsr_web_site_sk#8515, wr_returned_date_sk#831 AS date_sk#8516, 0.00 AS sales_price#8517, 0.00 AS profit#8518, wr_return_amt#846 AS return_amt#8519, wr_net_loss#854 AS net_loss#8520)
    // Input: ListBuffer(ws_web_site_sk#8566, wr_returned_date_sk#831, wr_return_amt#846, wr_net_loss#854)
    // Output: ListBuffer(wsr_web_site_sk#8515, date_sk#8516, sales_price#8517, profit#8518, return_amt#8519, net_loss#8520)
    int nrow1 = tbl_JOIN_INNER_TD_11758_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_web_site_sk8566 = tbl_JOIN_INNER_TD_11758_output.getInt32(i, 0);
        int32_t _wr_returned_date_sk831 = tbl_JOIN_INNER_TD_11758_output.getInt32(i, 1);
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_11758_output.getInt32(i, 2);
        int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_11758_output.getInt32(i, 3);
        int32_t _wsr_web_site_sk8515 = _ws_web_site_sk8566;
        tbl_Project_TD_10339_output.setInt32(i, 0, _wsr_web_site_sk8515);
        int32_t _date_sk8516 = _wr_returned_date_sk831;
        tbl_Project_TD_10339_output.setInt32(i, 1, _date_sk8516);
        int32_t _sales_price8517 = 0.00;
        tbl_Project_TD_10339_output.setInt32(i, 2, _sales_price8517);
        int32_t _profit8518 = 0.00;
        tbl_Project_TD_10339_output.setInt32(i, 3, _profit8518);
        int32_t _return_amt8519 = _wr_return_amt846;
        tbl_Project_TD_10339_output.setInt32(i, 4, _return_amt8519);
        int32_t _net_loss8520 = _wr_net_loss854;
        tbl_Project_TD_10339_output.setInt32(i, 5, _net_loss8520);
    }
    tbl_Project_TD_10339_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10339_output #Row: " << tbl_Project_TD_10339_output.getNumRow() << std::endl;
}

void SW_Project_TD_10264(Table &tbl_Filter_TD_11186_output, Table &tbl_Project_TD_10264_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_web_site_sk#742 AS wsr_web_site_sk#8509, ws_sold_date_sk#729 AS date_sk#8510, ws_ext_sales_price#752 AS sales_price#8511, ws_net_profit#762 AS profit#8512, 0.00 AS return_amt#8513, 0.00 AS net_loss#8514)
    // Input: ListBuffer(ws_web_site_sk#742, ws_sold_date_sk#729, ws_ext_sales_price#752, ws_net_profit#762)
    // Output: ListBuffer(wsr_web_site_sk#8509, date_sk#8510, sales_price#8511, profit#8512, return_amt#8513, net_loss#8514)
    int nrow1 = tbl_Filter_TD_11186_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_web_site_sk742 = tbl_Filter_TD_11186_output.getInt32(i, 0);
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11186_output.getInt32(i, 1);
        int32_t _ws_ext_sales_price752 = tbl_Filter_TD_11186_output.getInt32(i, 2);
        int32_t _ws_net_profit762 = tbl_Filter_TD_11186_output.getInt32(i, 3);
        int32_t _wsr_web_site_sk8509 = _ws_web_site_sk742;
        tbl_Project_TD_10264_output.setInt32(i, 0, _wsr_web_site_sk8509);
        int32_t _date_sk8510 = _ws_sold_date_sk729;
        tbl_Project_TD_10264_output.setInt32(i, 1, _date_sk8510);
        int32_t _sales_price8511 = _ws_ext_sales_price752;
        tbl_Project_TD_10264_output.setInt32(i, 2, _sales_price8511);
        int32_t _profit8512 = _ws_net_profit762;
        tbl_Project_TD_10264_output.setInt32(i, 3, _profit8512);
        int32_t _return_amt8513 = 0.00;
        tbl_Project_TD_10264_output.setInt32(i, 4, _return_amt8513);
        int32_t _net_loss8514 = 0.00;
        tbl_Project_TD_10264_output.setInt32(i, 5, _net_loss8514);
    }
    tbl_Project_TD_10264_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10264_output #Row: " << tbl_Project_TD_10264_output.getNumRow() << std::endl;
}

void SW_Project_TD_10541(Table &tbl_Filter_TD_11867_output, Table &tbl_Project_TD_10541_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cr_catalog_page_sk#1035 AS page_sk#8499, cr_returned_date_sk#1023 AS date_sk#8500, 0.00 AS sales_price#8501, 0.00 AS profit#8502, cr_return_amount#1041 AS return_amt#8503, cr_net_loss#1049 AS net_loss#8504)
    // Input: ListBuffer(cr_catalog_page_sk#1035, cr_returned_date_sk#1023, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(page_sk#8499, date_sk#8500, sales_price#8501, profit#8502, return_amt#8503, net_loss#8504)
    int nrow1 = tbl_Filter_TD_11867_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_catalog_page_sk1035 = tbl_Filter_TD_11867_output.getInt32(i, 0);
        int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_11867_output.getInt32(i, 1);
        int32_t _cr_return_amount1041 = tbl_Filter_TD_11867_output.getInt32(i, 2);
        int32_t _cr_net_loss1049 = tbl_Filter_TD_11867_output.getInt32(i, 3);
        int32_t _page_sk8499 = _cr_catalog_page_sk1035;
        tbl_Project_TD_10541_output.setInt32(i, 0, _page_sk8499);
        int32_t _date_sk8500 = _cr_returned_date_sk1023;
        tbl_Project_TD_10541_output.setInt32(i, 1, _date_sk8500);
        int32_t _sales_price8501 = 0.00;
        tbl_Project_TD_10541_output.setInt32(i, 2, _sales_price8501);
        int32_t _profit8502 = 0.00;
        tbl_Project_TD_10541_output.setInt32(i, 3, _profit8502);
        int32_t _return_amt8503 = _cr_return_amount1041;
        tbl_Project_TD_10541_output.setInt32(i, 4, _return_amt8503);
        int32_t _net_loss8504 = _cr_net_loss1049;
        tbl_Project_TD_10541_output.setInt32(i, 5, _net_loss8504);
    }
    tbl_Project_TD_10541_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10541_output #Row: " << tbl_Project_TD_10541_output.getNumRow() << std::endl;
}

void SW_Project_TD_10989(Table &tbl_Filter_TD_11886_output, Table &tbl_Project_TD_10989_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_catalog_page_sk#1116 AS page_sk#8493, cs_sold_date_sk#1104 AS date_sk#8494, cs_ext_sales_price#1127 AS sales_price#8495, cs_net_profit#1137 AS profit#8496, 0.00 AS return_amt#8497, 0.00 AS net_loss#8498)
    // Input: ListBuffer(cs_catalog_page_sk#1116, cs_sold_date_sk#1104, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(page_sk#8493, date_sk#8494, sales_price#8495, profit#8496, return_amt#8497, net_loss#8498)
    int nrow1 = tbl_Filter_TD_11886_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_catalog_page_sk1116 = tbl_Filter_TD_11886_output.getInt32(i, 0);
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_11886_output.getInt32(i, 1);
        int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_11886_output.getInt32(i, 2);
        int32_t _cs_net_profit1137 = tbl_Filter_TD_11886_output.getInt32(i, 3);
        int32_t _page_sk8493 = _cs_catalog_page_sk1116;
        tbl_Project_TD_10989_output.setInt32(i, 0, _page_sk8493);
        int32_t _date_sk8494 = _cs_sold_date_sk1104;
        tbl_Project_TD_10989_output.setInt32(i, 1, _date_sk8494);
        int32_t _sales_price8495 = _cs_ext_sales_price1127;
        tbl_Project_TD_10989_output.setInt32(i, 2, _sales_price8495);
        int32_t _profit8496 = _cs_net_profit1137;
        tbl_Project_TD_10989_output.setInt32(i, 3, _profit8496);
        int32_t _return_amt8497 = 0.00;
        tbl_Project_TD_10989_output.setInt32(i, 4, _return_amt8497);
        int32_t _net_loss8498 = 0.00;
        tbl_Project_TD_10989_output.setInt32(i, 5, _net_loss8498);
    }
    tbl_Project_TD_10989_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10989_output #Row: " << tbl_Project_TD_10989_output.getNumRow() << std::endl;
}

void SW_Project_TD_10859(Table &tbl_Filter_TD_11684_output, Table &tbl_Project_TD_10859_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sr_store_sk#676 AS store_sk#8483, sr_returned_date_sk#669 AS date_sk#8484, 0.00 AS sales_price#8485, 0.00 AS profit#8486, sr_return_amt#680 AS return_amt#8487, sr_net_loss#688 AS net_loss#8488)
    // Input: ListBuffer(sr_store_sk#676, sr_returned_date_sk#669, sr_return_amt#680, sr_net_loss#688)
    // Output: ListBuffer(store_sk#8483, date_sk#8484, sales_price#8485, profit#8486, return_amt#8487, net_loss#8488)
    int nrow1 = tbl_Filter_TD_11684_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_store_sk676 = tbl_Filter_TD_11684_output.getInt32(i, 0);
        int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11684_output.getInt32(i, 1);
        int32_t _sr_return_amt680 = tbl_Filter_TD_11684_output.getInt32(i, 2);
        int32_t _sr_net_loss688 = tbl_Filter_TD_11684_output.getInt32(i, 3);
        int32_t _store_sk8483 = _sr_store_sk676;
        tbl_Project_TD_10859_output.setInt32(i, 0, _store_sk8483);
        int32_t _date_sk8484 = _sr_returned_date_sk669;
        tbl_Project_TD_10859_output.setInt32(i, 1, _date_sk8484);
        int32_t _sales_price8485 = 0.00;
        tbl_Project_TD_10859_output.setInt32(i, 2, _sales_price8485);
        int32_t _profit8486 = 0.00;
        tbl_Project_TD_10859_output.setInt32(i, 3, _profit8486);
        int32_t _return_amt8487 = _sr_return_amt680;
        tbl_Project_TD_10859_output.setInt32(i, 4, _return_amt8487);
        int32_t _net_loss8488 = _sr_net_loss688;
        tbl_Project_TD_10859_output.setInt32(i, 5, _net_loss8488);
    }
    tbl_Project_TD_10859_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10859_output #Row: " << tbl_Project_TD_10859_output.getNumRow() << std::endl;
}

void SW_Project_TD_1079(Table &tbl_Filter_TD_11733_output, Table &tbl_Project_TD_1079_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_store_sk#1213 AS store_sk#8477, ss_sold_date_sk#1206 AS date_sk#8478, ss_ext_sales_price#1221 AS sales_price#8479, ss_net_profit#1228 AS profit#8480, 0.00 AS return_amt#8481, 0.00 AS net_loss#8482)
    // Input: ListBuffer(ss_store_sk#1213, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(store_sk#8477, date_sk#8478, sales_price#8479, profit#8480, return_amt#8481, net_loss#8482)
    int nrow1 = tbl_Filter_TD_11733_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_Filter_TD_11733_output.getInt32(i, 0);
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11733_output.getInt32(i, 1);
        int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_11733_output.getInt32(i, 2);
        int32_t _ss_net_profit1228 = tbl_Filter_TD_11733_output.getInt32(i, 3);
        int32_t _store_sk8477 = _ss_store_sk1213;
        tbl_Project_TD_1079_output.setInt32(i, 0, _store_sk8477);
        int32_t _date_sk8478 = _ss_sold_date_sk1206;
        tbl_Project_TD_1079_output.setInt32(i, 1, _date_sk8478);
        int32_t _sales_price8479 = _ss_ext_sales_price1221;
        tbl_Project_TD_1079_output.setInt32(i, 2, _sales_price8479);
        int32_t _profit8480 = _ss_net_profit1228;
        tbl_Project_TD_1079_output.setInt32(i, 3, _profit8480);
        int32_t _return_amt8481 = 0.00;
        tbl_Project_TD_1079_output.setInt32(i, 4, _return_amt8481);
        int32_t _net_loss8482 = 0.00;
        tbl_Project_TD_1079_output.setInt32(i, 5, _net_loss8482);
    }
    tbl_Project_TD_1079_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1079_output #Row: " << tbl_Project_TD_1079_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9457(Table &tbl_SerializeFromObject_TD_10667_input, Table &tbl_Filter_TD_9457_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#8589) AND ((d_date#8589 >= 2000-08-23) AND (d_date#8589 <= 2000-09-06))) AND isnotnull(d_date_sk#8587)))
    // Input: ListBuffer(d_date_sk#8587, d_date#8589)
    // Output: ListBuffer(d_date_sk#8587)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10667_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date8589 = tbl_SerializeFromObject_TD_10667_input.getInt32(i, 1);
        int32_t _d_date_sk8587 = tbl_SerializeFromObject_TD_10667_input.getInt32(i, 0);
        if (((1) && ((_d_date8589 >= 2000-08-23) && (_d_date8589 <= 2000-09-06))) && (1)) {
            int32_t _d_date_sk8587_t = tbl_SerializeFromObject_TD_10667_input.getInt32(i, 0);
            tbl_Filter_TD_9457_output.setInt32(r, 0, _d_date_sk8587_t);
            r++;
        }
    }
    tbl_Filter_TD_9457_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9457_output #Row: " << tbl_Filter_TD_9457_output.getNumRow() << std::endl;
}

void SW_Union_TD_9321(Table &tbl_Project_TD_10264_output, Table &tbl_Project_TD_10339_output, Table &tbl_Union_TD_9321_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(wsr_web_site_sk#8509, date_sk#8510, sales_price#8511, profit#8512, return_amt#8513, net_loss#8514)
    int r = 0;
    int row0 = tbl_Project_TD_10264_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9321_output.setInt32(r, 0, tbl_Project_TD_10264_output.getInt32(i, 0));
        tbl_Union_TD_9321_output.setInt32(r, 1, tbl_Project_TD_10264_output.getInt32(i, 1));
        tbl_Union_TD_9321_output.setInt32(r, 2, tbl_Project_TD_10264_output.getInt32(i, 2));
        tbl_Union_TD_9321_output.setInt32(r, 3, tbl_Project_TD_10264_output.getInt32(i, 3));
        tbl_Union_TD_9321_output.setInt32(r, 4, tbl_Project_TD_10264_output.getInt32(i, 4));
        tbl_Union_TD_9321_output.setInt32(r, 5, tbl_Project_TD_10264_output.getInt32(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_10339_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9321_output.setInt32(r, 0, tbl_Project_TD_10339_output.getInt32(i, 0));
        tbl_Union_TD_9321_output.setInt32(r, 1, tbl_Project_TD_10339_output.getInt32(i, 1));
        tbl_Union_TD_9321_output.setInt32(r, 2, tbl_Project_TD_10339_output.getInt32(i, 2));
        tbl_Union_TD_9321_output.setInt32(r, 3, tbl_Project_TD_10339_output.getInt32(i, 3));
        tbl_Union_TD_9321_output.setInt32(r, 4, tbl_Project_TD_10339_output.getInt32(i, 4));
        tbl_Union_TD_9321_output.setInt32(r, 5, tbl_Project_TD_10339_output.getInt32(i, 5));
        ++r;
    }
    tbl_Union_TD_9321_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9321_output #Row: " << tbl_Union_TD_9321_output.getNumRow() << std::endl;
}

void SW_Filter_TD_914(Table &tbl_SerializeFromObject_TD_10824_input, Table &tbl_Filter_TD_914_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#8527) AND ((d_date#8527 >= 2000-08-23) AND (d_date#8527 <= 2000-09-06))) AND isnotnull(d_date_sk#8525)))
    // Input: ListBuffer(d_date_sk#8525, d_date#8527)
    // Output: ListBuffer(d_date_sk#8525)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10824_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date8527 = tbl_SerializeFromObject_TD_10824_input.getInt32(i, 1);
        int32_t _d_date_sk8525 = tbl_SerializeFromObject_TD_10824_input.getInt32(i, 0);
        if (((1) && ((_d_date8527 >= 2000-08-23) && (_d_date8527 <= 2000-09-06))) && (1)) {
            int32_t _d_date_sk8525_t = tbl_SerializeFromObject_TD_10824_input.getInt32(i, 0);
            tbl_Filter_TD_914_output.setInt32(r, 0, _d_date_sk8525_t);
            r++;
        }
    }
    tbl_Filter_TD_914_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_914_output #Row: " << tbl_Filter_TD_914_output.getNumRow() << std::endl;
}

void SW_Union_TD_919(Table &tbl_Project_TD_10989_output, Table &tbl_Project_TD_10541_output, Table &tbl_Union_TD_919_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(page_sk#8493, date_sk#8494, sales_price#8495, profit#8496, return_amt#8497, net_loss#8498)
    int r = 0;
    int row0 = tbl_Project_TD_10989_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_919_output.setInt32(r, 0, tbl_Project_TD_10989_output.getInt32(i, 0));
        tbl_Union_TD_919_output.setInt32(r, 1, tbl_Project_TD_10989_output.getInt32(i, 1));
        tbl_Union_TD_919_output.setInt32(r, 2, tbl_Project_TD_10989_output.getInt32(i, 2));
        tbl_Union_TD_919_output.setInt32(r, 3, tbl_Project_TD_10989_output.getInt32(i, 3));
        tbl_Union_TD_919_output.setInt32(r, 4, tbl_Project_TD_10989_output.getInt32(i, 4));
        tbl_Union_TD_919_output.setInt32(r, 5, tbl_Project_TD_10989_output.getInt32(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_10541_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_919_output.setInt32(r, 0, tbl_Project_TD_10541_output.getInt32(i, 0));
        tbl_Union_TD_919_output.setInt32(r, 1, tbl_Project_TD_10541_output.getInt32(i, 1));
        tbl_Union_TD_919_output.setInt32(r, 2, tbl_Project_TD_10541_output.getInt32(i, 2));
        tbl_Union_TD_919_output.setInt32(r, 3, tbl_Project_TD_10541_output.getInt32(i, 3));
        tbl_Union_TD_919_output.setInt32(r, 4, tbl_Project_TD_10541_output.getInt32(i, 4));
        tbl_Union_TD_919_output.setInt32(r, 5, tbl_Project_TD_10541_output.getInt32(i, 5));
        ++r;
    }
    tbl_Union_TD_919_output.setNumRow(r);
    std::cout << "tbl_Union_TD_919_output #Row: " << tbl_Union_TD_919_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9483(Table &tbl_SerializeFromObject_TD_10904_input, Table &tbl_Filter_TD_9483_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-08-23) AND (d_date#122 <= 2000-09-06))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10904_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_10904_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10904_input.getInt32(i, 0);
        if (((1) && ((_d_date122 >= 2000-08-23) && (_d_date122 <= 2000-09-06))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10904_input.getInt32(i, 0);
            tbl_Filter_TD_9483_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9483_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9483_output #Row: " << tbl_Filter_TD_9483_output.getNumRow() << std::endl;
}

void SW_Union_TD_9307(Table &tbl_Project_TD_1079_output, Table &tbl_Project_TD_10859_output, Table &tbl_Union_TD_9307_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(store_sk#8477, date_sk#8478, sales_price#8479, profit#8480, return_amt#8481, net_loss#8482)
    int r = 0;
    int row0 = tbl_Project_TD_1079_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9307_output.setInt32(r, 0, tbl_Project_TD_1079_output.getInt32(i, 0));
        tbl_Union_TD_9307_output.setInt32(r, 1, tbl_Project_TD_1079_output.getInt32(i, 1));
        tbl_Union_TD_9307_output.setInt32(r, 2, tbl_Project_TD_1079_output.getInt32(i, 2));
        tbl_Union_TD_9307_output.setInt32(r, 3, tbl_Project_TD_1079_output.getInt32(i, 3));
        tbl_Union_TD_9307_output.setInt32(r, 4, tbl_Project_TD_1079_output.getInt32(i, 4));
        tbl_Union_TD_9307_output.setInt32(r, 5, tbl_Project_TD_1079_output.getInt32(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_10859_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9307_output.setInt32(r, 0, tbl_Project_TD_10859_output.getInt32(i, 0));
        tbl_Union_TD_9307_output.setInt32(r, 1, tbl_Project_TD_10859_output.getInt32(i, 1));
        tbl_Union_TD_9307_output.setInt32(r, 2, tbl_Project_TD_10859_output.getInt32(i, 2));
        tbl_Union_TD_9307_output.setInt32(r, 3, tbl_Project_TD_10859_output.getInt32(i, 3));
        tbl_Union_TD_9307_output.setInt32(r, 4, tbl_Project_TD_10859_output.getInt32(i, 4));
        tbl_Union_TD_9307_output.setInt32(r, 5, tbl_Project_TD_10859_output.getInt32(i, 5));
        ++r;
    }
    tbl_Union_TD_9307_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9307_output #Row: " << tbl_Union_TD_9307_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8533(Table &tbl_SerializeFromObject_TD_9408_input, Table &tbl_Filter_TD_8533_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(web_site_sk#537))
    // Input: ListBuffer(web_site_sk#537, web_site_id#538)
    // Output: ListBuffer(web_site_sk#537, web_site_id#538)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9408_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _web_site_sk537 = tbl_SerializeFromObject_TD_9408_input.getInt32(i, 0);
        if (1) {
            int32_t _web_site_sk537_t = tbl_SerializeFromObject_TD_9408_input.getInt32(i, 0);
            tbl_Filter_TD_8533_output.setInt32(r, 0, _web_site_sk537_t);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_t = tbl_SerializeFromObject_TD_9408_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8533_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _web_site_id538_t);
            r++;
        }
    }
    tbl_Filter_TD_8533_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8533_output #Row: " << tbl_Filter_TD_8533_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8846_key_leftMajor {
    int32_t _date_sk8510;
    bool operator==(const SW_JOIN_INNER_TD_8846_key_leftMajor& other) const {
        return ((_date_sk8510 == other._date_sk8510));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8846_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8846_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._date_sk8510));
    }
};
}
struct SW_JOIN_INNER_TD_8846_payload_leftMajor {
    int32_t _wsr_web_site_sk8509;
    int32_t _date_sk8510;
    int32_t _sales_price8511;
    int32_t _profit8512;
    int32_t _return_amt8513;
    int32_t _net_loss8514;
};
struct SW_JOIN_INNER_TD_8846_key_rightMajor {
    int32_t _d_date_sk8587;
    bool operator==(const SW_JOIN_INNER_TD_8846_key_rightMajor& other) const {
        return ((_d_date_sk8587 == other._d_date_sk8587));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8846_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8846_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8587));
    }
};
}
struct SW_JOIN_INNER_TD_8846_payload_rightMajor {
    int32_t _d_date_sk8587;
};
void SW_JOIN_INNER_TD_8846(Table &tbl_Union_TD_9321_output, Table &tbl_Filter_TD_9457_output, Table &tbl_JOIN_INNER_TD_8846_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((date_sk#8510 = d_date_sk#8587))
    // Left Table: ListBuffer(wsr_web_site_sk#8509, date_sk#8510, sales_price#8511, profit#8512, return_amt#8513, net_loss#8514)
    // Right Table: ListBuffer(d_date_sk#8587)
    // Output Table: ListBuffer(wsr_web_site_sk#8509, sales_price#8511, profit#8512, return_amt#8513, net_loss#8514)
    int left_nrow = tbl_Union_TD_9321_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9457_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8846_key_leftMajor, SW_JOIN_INNER_TD_8846_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_9321_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _date_sk8510_k = tbl_Union_TD_9321_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8846_key_leftMajor keyA{_date_sk8510_k};
            int32_t _wsr_web_site_sk8509 = tbl_Union_TD_9321_output.getInt32(i, 0);
            int32_t _date_sk8510 = tbl_Union_TD_9321_output.getInt32(i, 1);
            int32_t _sales_price8511 = tbl_Union_TD_9321_output.getInt32(i, 2);
            int32_t _profit8512 = tbl_Union_TD_9321_output.getInt32(i, 3);
            int32_t _return_amt8513 = tbl_Union_TD_9321_output.getInt32(i, 4);
            int32_t _net_loss8514 = tbl_Union_TD_9321_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8846_payload_leftMajor payloadA{_wsr_web_site_sk8509, _date_sk8510, _sales_price8511, _profit8512, _return_amt8513, _net_loss8514};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9457_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8587_k = tbl_Filter_TD_9457_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8846_key_leftMajor{_d_date_sk8587_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wsr_web_site_sk8509 = (it->second)._wsr_web_site_sk8509;
                int32_t _date_sk8510 = (it->second)._date_sk8510;
                int32_t _sales_price8511 = (it->second)._sales_price8511;
                int32_t _profit8512 = (it->second)._profit8512;
                int32_t _return_amt8513 = (it->second)._return_amt8513;
                int32_t _net_loss8514 = (it->second)._net_loss8514;
                int32_t _d_date_sk8587 = tbl_Filter_TD_9457_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 0, _wsr_web_site_sk8509);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 1, _sales_price8511);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 2, _profit8512);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 3, _return_amt8513);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 4, _net_loss8514);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8846_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8846_key_rightMajor, SW_JOIN_INNER_TD_8846_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9457_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8587_k = tbl_Filter_TD_9457_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8846_key_rightMajor keyA{_d_date_sk8587_k};
            int32_t _d_date_sk8587 = tbl_Filter_TD_9457_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8846_payload_rightMajor payloadA{_d_date_sk8587};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_9321_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _date_sk8510_k = tbl_Union_TD_9321_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8846_key_rightMajor{_date_sk8510_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8587 = (it->second)._d_date_sk8587;
                int32_t _wsr_web_site_sk8509 = tbl_Union_TD_9321_output.getInt32(i, 0);
                int32_t _date_sk8510 = tbl_Union_TD_9321_output.getInt32(i, 1);
                int32_t _sales_price8511 = tbl_Union_TD_9321_output.getInt32(i, 2);
                int32_t _profit8512 = tbl_Union_TD_9321_output.getInt32(i, 3);
                int32_t _return_amt8513 = tbl_Union_TD_9321_output.getInt32(i, 4);
                int32_t _net_loss8514 = tbl_Union_TD_9321_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 0, _wsr_web_site_sk8509);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 1, _sales_price8511);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 2, _profit8512);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 3, _return_amt8513);
                tbl_JOIN_INNER_TD_8846_output.setInt32(r, 4, _net_loss8514);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8846_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8846_output #Row: " << tbl_JOIN_INNER_TD_8846_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8371(Table &tbl_SerializeFromObject_TD_9211_input, Table &tbl_Filter_TD_8371_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cp_catalog_page_sk#996))
    // Input: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    // Output: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9211_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cp_catalog_page_sk996 = tbl_SerializeFromObject_TD_9211_input.getInt32(i, 0);
        if (1) {
            int32_t _cp_catalog_page_sk996_t = tbl_SerializeFromObject_TD_9211_input.getInt32(i, 0);
            tbl_Filter_TD_8371_output.setInt32(r, 0, _cp_catalog_page_sk996_t);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_t = tbl_SerializeFromObject_TD_9211_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8371_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cp_catalog_page_id997_t);
            r++;
        }
    }
    tbl_Filter_TD_8371_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8371_output #Row: " << tbl_Filter_TD_8371_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8670_key_leftMajor {
    int32_t _date_sk8494;
    bool operator==(const SW_JOIN_INNER_TD_8670_key_leftMajor& other) const {
        return ((_date_sk8494 == other._date_sk8494));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8670_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8670_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._date_sk8494));
    }
};
}
struct SW_JOIN_INNER_TD_8670_payload_leftMajor {
    int32_t _page_sk8493;
    int32_t _date_sk8494;
    int32_t _sales_price8495;
    int32_t _profit8496;
    int32_t _return_amt8497;
    int32_t _net_loss8498;
};
struct SW_JOIN_INNER_TD_8670_key_rightMajor {
    int32_t _d_date_sk8525;
    bool operator==(const SW_JOIN_INNER_TD_8670_key_rightMajor& other) const {
        return ((_d_date_sk8525 == other._d_date_sk8525));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8670_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8670_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8525));
    }
};
}
struct SW_JOIN_INNER_TD_8670_payload_rightMajor {
    int32_t _d_date_sk8525;
};
void SW_JOIN_INNER_TD_8670(Table &tbl_Union_TD_919_output, Table &tbl_Filter_TD_914_output, Table &tbl_JOIN_INNER_TD_8670_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((date_sk#8494 = d_date_sk#8525))
    // Left Table: ListBuffer(page_sk#8493, date_sk#8494, sales_price#8495, profit#8496, return_amt#8497, net_loss#8498)
    // Right Table: ListBuffer(d_date_sk#8525)
    // Output Table: ListBuffer(page_sk#8493, sales_price#8495, profit#8496, return_amt#8497, net_loss#8498)
    int left_nrow = tbl_Union_TD_919_output.getNumRow();
    int right_nrow = tbl_Filter_TD_914_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8670_key_leftMajor, SW_JOIN_INNER_TD_8670_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_919_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _date_sk8494_k = tbl_Union_TD_919_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8670_key_leftMajor keyA{_date_sk8494_k};
            int32_t _page_sk8493 = tbl_Union_TD_919_output.getInt32(i, 0);
            int32_t _date_sk8494 = tbl_Union_TD_919_output.getInt32(i, 1);
            int32_t _sales_price8495 = tbl_Union_TD_919_output.getInt32(i, 2);
            int32_t _profit8496 = tbl_Union_TD_919_output.getInt32(i, 3);
            int32_t _return_amt8497 = tbl_Union_TD_919_output.getInt32(i, 4);
            int32_t _net_loss8498 = tbl_Union_TD_919_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8670_payload_leftMajor payloadA{_page_sk8493, _date_sk8494, _sales_price8495, _profit8496, _return_amt8497, _net_loss8498};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_914_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8525_k = tbl_Filter_TD_914_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8670_key_leftMajor{_d_date_sk8525_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _page_sk8493 = (it->second)._page_sk8493;
                int32_t _date_sk8494 = (it->second)._date_sk8494;
                int32_t _sales_price8495 = (it->second)._sales_price8495;
                int32_t _profit8496 = (it->second)._profit8496;
                int32_t _return_amt8497 = (it->second)._return_amt8497;
                int32_t _net_loss8498 = (it->second)._net_loss8498;
                int32_t _d_date_sk8525 = tbl_Filter_TD_914_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 0, _page_sk8493);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 1, _sales_price8495);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 2, _profit8496);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 3, _return_amt8497);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 4, _net_loss8498);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8670_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8670_key_rightMajor, SW_JOIN_INNER_TD_8670_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_914_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8525_k = tbl_Filter_TD_914_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8670_key_rightMajor keyA{_d_date_sk8525_k};
            int32_t _d_date_sk8525 = tbl_Filter_TD_914_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8670_payload_rightMajor payloadA{_d_date_sk8525};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_919_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _date_sk8494_k = tbl_Union_TD_919_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8670_key_rightMajor{_date_sk8494_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8525 = (it->second)._d_date_sk8525;
                int32_t _page_sk8493 = tbl_Union_TD_919_output.getInt32(i, 0);
                int32_t _date_sk8494 = tbl_Union_TD_919_output.getInt32(i, 1);
                int32_t _sales_price8495 = tbl_Union_TD_919_output.getInt32(i, 2);
                int32_t _profit8496 = tbl_Union_TD_919_output.getInt32(i, 3);
                int32_t _return_amt8497 = tbl_Union_TD_919_output.getInt32(i, 4);
                int32_t _net_loss8498 = tbl_Union_TD_919_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 0, _page_sk8493);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 1, _sales_price8495);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 2, _profit8496);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 3, _return_amt8497);
                tbl_JOIN_INNER_TD_8670_output.setInt32(r, 4, _net_loss8498);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8670_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8670_output #Row: " << tbl_JOIN_INNER_TD_8670_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8849(Table &tbl_SerializeFromObject_TD_9811_input, Table &tbl_Filter_TD_8849_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output: ListBuffer(s_store_sk#378, s_store_id#379)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9811_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_9811_input.getInt32(i, 0);
        if (1) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_9811_input.getInt32(i, 0);
            tbl_Filter_TD_8849_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_t = tbl_SerializeFromObject_TD_9811_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8849_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id379_t);
            r++;
        }
    }
    tbl_Filter_TD_8849_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8849_output #Row: " << tbl_Filter_TD_8849_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8151_key_leftMajor {
    int32_t _date_sk8478;
    bool operator==(const SW_JOIN_INNER_TD_8151_key_leftMajor& other) const {
        return ((_date_sk8478 == other._date_sk8478));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8151_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8151_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._date_sk8478));
    }
};
}
struct SW_JOIN_INNER_TD_8151_payload_leftMajor {
    int32_t _store_sk8477;
    int32_t _date_sk8478;
    int32_t _sales_price8479;
    int32_t _profit8480;
    int32_t _return_amt8481;
    int32_t _net_loss8482;
};
struct SW_JOIN_INNER_TD_8151_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8151_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8151_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8151_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8151_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_8151(Table &tbl_Union_TD_9307_output, Table &tbl_Filter_TD_9483_output, Table &tbl_JOIN_INNER_TD_8151_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((date_sk#8478 = d_date_sk#120))
    // Left Table: ListBuffer(store_sk#8477, date_sk#8478, sales_price#8479, profit#8480, return_amt#8481, net_loss#8482)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(store_sk#8477, sales_price#8479, profit#8480, return_amt#8481, net_loss#8482)
    int left_nrow = tbl_Union_TD_9307_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9483_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8151_key_leftMajor, SW_JOIN_INNER_TD_8151_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_9307_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _date_sk8478_k = tbl_Union_TD_9307_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8151_key_leftMajor keyA{_date_sk8478_k};
            int32_t _store_sk8477 = tbl_Union_TD_9307_output.getInt32(i, 0);
            int32_t _date_sk8478 = tbl_Union_TD_9307_output.getInt32(i, 1);
            int32_t _sales_price8479 = tbl_Union_TD_9307_output.getInt32(i, 2);
            int32_t _profit8480 = tbl_Union_TD_9307_output.getInt32(i, 3);
            int32_t _return_amt8481 = tbl_Union_TD_9307_output.getInt32(i, 4);
            int32_t _net_loss8482 = tbl_Union_TD_9307_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8151_payload_leftMajor payloadA{_store_sk8477, _date_sk8478, _sales_price8479, _profit8480, _return_amt8481, _net_loss8482};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9483_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9483_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8151_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _store_sk8477 = (it->second)._store_sk8477;
                int32_t _date_sk8478 = (it->second)._date_sk8478;
                int32_t _sales_price8479 = (it->second)._sales_price8479;
                int32_t _profit8480 = (it->second)._profit8480;
                int32_t _return_amt8481 = (it->second)._return_amt8481;
                int32_t _net_loss8482 = (it->second)._net_loss8482;
                int32_t _d_date_sk120 = tbl_Filter_TD_9483_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 0, _store_sk8477);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 1, _sales_price8479);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 2, _profit8480);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 3, _return_amt8481);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 4, _net_loss8482);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8151_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8151_key_rightMajor, SW_JOIN_INNER_TD_8151_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9483_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9483_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8151_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9483_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8151_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_9307_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _date_sk8478_k = tbl_Union_TD_9307_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8151_key_rightMajor{_date_sk8478_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _store_sk8477 = tbl_Union_TD_9307_output.getInt32(i, 0);
                int32_t _date_sk8478 = tbl_Union_TD_9307_output.getInt32(i, 1);
                int32_t _sales_price8479 = tbl_Union_TD_9307_output.getInt32(i, 2);
                int32_t _profit8480 = tbl_Union_TD_9307_output.getInt32(i, 3);
                int32_t _return_amt8481 = tbl_Union_TD_9307_output.getInt32(i, 4);
                int32_t _net_loss8482 = tbl_Union_TD_9307_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 0, _store_sk8477);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 1, _sales_price8479);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 2, _profit8480);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 3, _return_amt8481);
                tbl_JOIN_INNER_TD_8151_output.setInt32(r, 4, _net_loss8482);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8151_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8151_output #Row: " << tbl_JOIN_INNER_TD_8151_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7422_key_leftMajor {
    int32_t _wsr_web_site_sk8509;
    bool operator==(const SW_JOIN_INNER_TD_7422_key_leftMajor& other) const {
        return ((_wsr_web_site_sk8509 == other._wsr_web_site_sk8509));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7422_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7422_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wsr_web_site_sk8509));
    }
};
}
struct SW_JOIN_INNER_TD_7422_payload_leftMajor {
    int32_t _wsr_web_site_sk8509;
    int32_t _sales_price8511;
    int32_t _profit8512;
    int32_t _return_amt8513;
    int32_t _net_loss8514;
};
struct SW_JOIN_INNER_TD_7422_key_rightMajor {
    int32_t _web_site_sk537;
    bool operator==(const SW_JOIN_INNER_TD_7422_key_rightMajor& other) const {
        return ((_web_site_sk537 == other._web_site_sk537));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7422_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7422_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._web_site_sk537));
    }
};
}
struct SW_JOIN_INNER_TD_7422_payload_rightMajor {
    int32_t _web_site_sk537;
    std::string _web_site_id538;
};
void SW_JOIN_INNER_TD_7422(Table &tbl_JOIN_INNER_TD_8846_output, Table &tbl_Filter_TD_8533_output, Table &tbl_JOIN_INNER_TD_7422_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wsr_web_site_sk#8509 = web_site_sk#537))
    // Left Table: ListBuffer(wsr_web_site_sk#8509, sales_price#8511, profit#8512, return_amt#8513, net_loss#8514)
    // Right Table: ListBuffer(web_site_sk#537, web_site_id#538)
    // Output Table: ListBuffer(sales_price#8511, profit#8512, return_amt#8513, net_loss#8514, web_site_id#538)
    int left_nrow = tbl_JOIN_INNER_TD_8846_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8533_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7422_key_leftMajor, SW_JOIN_INNER_TD_7422_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8846_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wsr_web_site_sk8509_k = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7422_key_leftMajor keyA{_wsr_web_site_sk8509_k};
            int32_t _wsr_web_site_sk8509 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 0);
            int32_t _sales_price8511 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 1);
            int32_t _profit8512 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 2);
            int32_t _return_amt8513 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 3);
            int32_t _net_loss8514 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7422_payload_leftMajor payloadA{_wsr_web_site_sk8509, _sales_price8511, _profit8512, _return_amt8513, _net_loss8514};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8533_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_8533_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7422_key_leftMajor{_web_site_sk537_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wsr_web_site_sk8509 = (it->second)._wsr_web_site_sk8509;
                int32_t _sales_price8511 = (it->second)._sales_price8511;
                int32_t _profit8512 = (it->second)._profit8512;
                int32_t _return_amt8513 = (it->second)._return_amt8513;
                int32_t _net_loss8514 = (it->second)._net_loss8514;
                int32_t _web_site_sk537 = tbl_Filter_TD_8533_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_Filter_TD_8533_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _web_site_id538 = std::string(_web_site_id538_n.data());
                tbl_JOIN_INNER_TD_7422_output.setInt32(r, 0, _sales_price8511);
                tbl_JOIN_INNER_TD_7422_output.setInt32(r, 1, _profit8512);
                tbl_JOIN_INNER_TD_7422_output.setInt32(r, 2, _return_amt8513);
                tbl_JOIN_INNER_TD_7422_output.setInt32(r, 3, _net_loss8514);
                tbl_JOIN_INNER_TD_7422_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7422_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7422_key_rightMajor, SW_JOIN_INNER_TD_7422_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8533_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_8533_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7422_key_rightMajor keyA{_web_site_sk537_k};
            int32_t _web_site_sk537 = tbl_Filter_TD_8533_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_Filter_TD_8533_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _web_site_id538 = std::string(_web_site_id538_n.data());
            SW_JOIN_INNER_TD_7422_payload_rightMajor payloadA{_web_site_sk537, _web_site_id538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8846_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wsr_web_site_sk8509_k = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7422_key_rightMajor{_wsr_web_site_sk8509_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _web_site_sk537 = (it->second)._web_site_sk537;
                std::string _web_site_id538 = (it->second)._web_site_id538;
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n{};
                memcpy(_web_site_id538_n.data(), (_web_site_id538).data(), (_web_site_id538).length());
                int32_t _wsr_web_site_sk8509 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 0);
                int32_t _sales_price8511 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 1);
                int32_t _profit8512 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 2);
                int32_t _return_amt8513 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 3);
                int32_t _net_loss8514 = tbl_JOIN_INNER_TD_8846_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7422_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _web_site_id538_n);
                tbl_JOIN_INNER_TD_7422_output.setInt32(r, 0, _sales_price8511);
                tbl_JOIN_INNER_TD_7422_output.setInt32(r, 1, _profit8512);
                tbl_JOIN_INNER_TD_7422_output.setInt32(r, 2, _return_amt8513);
                tbl_JOIN_INNER_TD_7422_output.setInt32(r, 3, _net_loss8514);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7422_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7422_output #Row: " << tbl_JOIN_INNER_TD_7422_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7149_key_leftMajor {
    int32_t _page_sk8493;
    bool operator==(const SW_JOIN_INNER_TD_7149_key_leftMajor& other) const {
        return ((_page_sk8493 == other._page_sk8493));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7149_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7149_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._page_sk8493));
    }
};
}
struct SW_JOIN_INNER_TD_7149_payload_leftMajor {
    int32_t _page_sk8493;
    int32_t _sales_price8495;
    int32_t _profit8496;
    int32_t _return_amt8497;
    int32_t _net_loss8498;
};
struct SW_JOIN_INNER_TD_7149_key_rightMajor {
    int32_t _cp_catalog_page_sk996;
    bool operator==(const SW_JOIN_INNER_TD_7149_key_rightMajor& other) const {
        return ((_cp_catalog_page_sk996 == other._cp_catalog_page_sk996));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7149_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7149_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cp_catalog_page_sk996));
    }
};
}
struct SW_JOIN_INNER_TD_7149_payload_rightMajor {
    int32_t _cp_catalog_page_sk996;
    std::string _cp_catalog_page_id997;
};
void SW_JOIN_INNER_TD_7149(Table &tbl_JOIN_INNER_TD_8670_output, Table &tbl_Filter_TD_8371_output, Table &tbl_JOIN_INNER_TD_7149_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((page_sk#8493 = cp_catalog_page_sk#996))
    // Left Table: ListBuffer(page_sk#8493, sales_price#8495, profit#8496, return_amt#8497, net_loss#8498)
    // Right Table: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    // Output Table: ListBuffer(sales_price#8495, profit#8496, return_amt#8497, net_loss#8498, cp_catalog_page_id#997)
    int left_nrow = tbl_JOIN_INNER_TD_8670_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8371_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7149_key_leftMajor, SW_JOIN_INNER_TD_7149_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8670_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _page_sk8493_k = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7149_key_leftMajor keyA{_page_sk8493_k};
            int32_t _page_sk8493 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 0);
            int32_t _sales_price8495 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 1);
            int32_t _profit8496 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 2);
            int32_t _return_amt8497 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 3);
            int32_t _net_loss8498 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7149_payload_leftMajor payloadA{_page_sk8493, _sales_price8495, _profit8496, _return_amt8497, _net_loss8498};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8371_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cp_catalog_page_sk996_k = tbl_Filter_TD_8371_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7149_key_leftMajor{_cp_catalog_page_sk996_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _page_sk8493 = (it->second)._page_sk8493;
                int32_t _sales_price8495 = (it->second)._sales_price8495;
                int32_t _profit8496 = (it->second)._profit8496;
                int32_t _return_amt8497 = (it->second)._return_amt8497;
                int32_t _net_loss8498 = (it->second)._net_loss8498;
                int32_t _cp_catalog_page_sk996 = tbl_Filter_TD_8371_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_Filter_TD_8371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
                tbl_JOIN_INNER_TD_7149_output.setInt32(r, 0, _sales_price8495);
                tbl_JOIN_INNER_TD_7149_output.setInt32(r, 1, _profit8496);
                tbl_JOIN_INNER_TD_7149_output.setInt32(r, 2, _return_amt8497);
                tbl_JOIN_INNER_TD_7149_output.setInt32(r, 3, _net_loss8498);
                tbl_JOIN_INNER_TD_7149_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7149_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7149_key_rightMajor, SW_JOIN_INNER_TD_7149_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8371_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cp_catalog_page_sk996_k = tbl_Filter_TD_8371_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7149_key_rightMajor keyA{_cp_catalog_page_sk996_k};
            int32_t _cp_catalog_page_sk996 = tbl_Filter_TD_8371_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_Filter_TD_8371_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
            SW_JOIN_INNER_TD_7149_payload_rightMajor payloadA{_cp_catalog_page_sk996, _cp_catalog_page_id997};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8670_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _page_sk8493_k = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7149_key_rightMajor{_page_sk8493_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cp_catalog_page_sk996 = (it->second)._cp_catalog_page_sk996;
                std::string _cp_catalog_page_id997 = (it->second)._cp_catalog_page_id997;
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n{};
                memcpy(_cp_catalog_page_id997_n.data(), (_cp_catalog_page_id997).data(), (_cp_catalog_page_id997).length());
                int32_t _page_sk8493 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 0);
                int32_t _sales_price8495 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 1);
                int32_t _profit8496 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 2);
                int32_t _return_amt8497 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 3);
                int32_t _net_loss8498 = tbl_JOIN_INNER_TD_8670_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7149_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cp_catalog_page_id997_n);
                tbl_JOIN_INNER_TD_7149_output.setInt32(r, 0, _sales_price8495);
                tbl_JOIN_INNER_TD_7149_output.setInt32(r, 1, _profit8496);
                tbl_JOIN_INNER_TD_7149_output.setInt32(r, 2, _return_amt8497);
                tbl_JOIN_INNER_TD_7149_output.setInt32(r, 3, _net_loss8498);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7149_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7149_output #Row: " << tbl_JOIN_INNER_TD_7149_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7146_key_leftMajor {
    int32_t _store_sk8477;
    bool operator==(const SW_JOIN_INNER_TD_7146_key_leftMajor& other) const {
        return ((_store_sk8477 == other._store_sk8477));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7146_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7146_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._store_sk8477));
    }
};
}
struct SW_JOIN_INNER_TD_7146_payload_leftMajor {
    int32_t _store_sk8477;
    int32_t _sales_price8479;
    int32_t _profit8480;
    int32_t _return_amt8481;
    int32_t _net_loss8482;
};
struct SW_JOIN_INNER_TD_7146_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_7146_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7146_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7146_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_7146_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_id379;
};
void SW_JOIN_INNER_TD_7146(Table &tbl_JOIN_INNER_TD_8151_output, Table &tbl_Filter_TD_8849_output, Table &tbl_JOIN_INNER_TD_7146_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((store_sk#8477 = s_store_sk#378))
    // Left Table: ListBuffer(store_sk#8477, sales_price#8479, profit#8480, return_amt#8481, net_loss#8482)
    // Right Table: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output Table: ListBuffer(sales_price#8479, profit#8480, return_amt#8481, net_loss#8482, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_8151_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8849_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7146_key_leftMajor, SW_JOIN_INNER_TD_7146_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8151_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _store_sk8477_k = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7146_key_leftMajor keyA{_store_sk8477_k};
            int32_t _store_sk8477 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 0);
            int32_t _sales_price8479 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 1);
            int32_t _profit8480 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 2);
            int32_t _return_amt8481 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 3);
            int32_t _net_loss8482 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7146_payload_leftMajor payloadA{_store_sk8477, _sales_price8479, _profit8480, _return_amt8481, _net_loss8482};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8849_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_8849_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7146_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _store_sk8477 = (it->second)._store_sk8477;
                int32_t _sales_price8479 = (it->second)._sales_price8479;
                int32_t _profit8480 = (it->second)._profit8480;
                int32_t _return_amt8481 = (it->second)._return_amt8481;
                int32_t _net_loss8482 = (it->second)._net_loss8482;
                int32_t _s_store_sk378 = tbl_Filter_TD_8849_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_8849_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_7146_output.setInt32(r, 0, _sales_price8479);
                tbl_JOIN_INNER_TD_7146_output.setInt32(r, 1, _profit8480);
                tbl_JOIN_INNER_TD_7146_output.setInt32(r, 2, _return_amt8481);
                tbl_JOIN_INNER_TD_7146_output.setInt32(r, 3, _net_loss8482);
                tbl_JOIN_INNER_TD_7146_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7146_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7146_key_rightMajor, SW_JOIN_INNER_TD_7146_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8849_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_8849_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7146_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_8849_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_8849_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_7146_payload_rightMajor payloadA{_s_store_sk378, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8151_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _store_sk8477_k = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7146_key_rightMajor{_store_sk8477_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                int32_t _store_sk8477 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 0);
                int32_t _sales_price8479 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 1);
                int32_t _profit8480 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 2);
                int32_t _return_amt8481 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 3);
                int32_t _net_loss8482 = tbl_JOIN_INNER_TD_8151_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7146_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                tbl_JOIN_INNER_TD_7146_output.setInt32(r, 0, _sales_price8479);
                tbl_JOIN_INNER_TD_7146_output.setInt32(r, 1, _profit8480);
                tbl_JOIN_INNER_TD_7146_output.setInt32(r, 2, _return_amt8481);
                tbl_JOIN_INNER_TD_7146_output.setInt32(r, 3, _net_loss8482);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7146_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7146_output #Row: " << tbl_JOIN_INNER_TD_7146_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6963_key;
struct SW_Aggregate_TD_6963_payload {
    int32_t _sales8521_sum_0;
    int32_t _returns8523_sum_1;
    int32_t _profit8473_sum_2;
    int32_t _profit8473_sum_3;
    std::string _channel8922;
    std::string _id8923;
};
void SW_Aggregate_TD_6963(Table &tbl_JOIN_INNER_TD_7422_output, Table &tbl_Aggregate_TD_6963_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(web_site_id#538, MakeDecimal(sum(UnscaledValue(sales_price#8511)),17,2) AS sales#8521, MakeDecimal(sum(UnscaledValue(return_amt#8513)),17,2) AS returns#8523, CheckOverflow((promote_precision(cast(MakeDecimal(sum(UnscaledValue(profit#8512)),17,2) as decimal(18,2))) - promote_precision(cast(MakeDecimal(sum(UnscaledValue(net_loss#8514)),17,2) as decimal(18,2)))), DecimalType(18,2), true) AS profit#8473, web channel AS channel#8922, concat(web_site, web_site_id#538) AS id#8923)
    // Input: ListBuffer(sales_price#8511, profit#8512, return_amt#8513, net_loss#8514, web_site_id#538)
    // Output: ListBuffer(sales#8521, returns#8523, profit#8473, channel#8922, id#8923)
    std::unordered_map<SW_Aggregate_TD_6963_key, SW_Aggregate_TD_6963_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7422_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales_price8511 = tbl_JOIN_INNER_TD_7422_output.getInt32(i, 0);
        int32_t _profit8512 = tbl_JOIN_INNER_TD_7422_output.getInt32(i, 1);
        int32_t _return_amt8513 = tbl_JOIN_INNER_TD_7422_output.getInt32(i, 2);
        int32_t _net_loss8514 = tbl_JOIN_INNER_TD_7422_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _web_site_id538 = tbl_JOIN_INNER_TD_7422_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6963_key k = std::string(_web_site_id538.data());
        int64_t _sales8521_sum_0 = _sales_price8511;
        int64_t _returns8523_sum_1 = _return_amt8513;
        int64_t _profit8473_sum_2 = _profit8512;
        int64_t _profit8473_sum_3 = _net_loss8514;
        std::string _channel8922 = "web channel";
        std::array<char, TPCDS_READ_MAX + 1> _id8923 = std::string("web_site").append(std::string(_web_site_id538.data());
        SW_Aggregate_TD_6963_payload p{_sales8521_sum_0, _returns8523_sum_1, _profit8473_sum_2, _profit8473_sum_3, std::string(_channel8922.data()), std::string(_id8923.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales8521_sum_0 + _sales8521_sum_0;
            p._sales8521_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns8523_sum_1 + _returns8523_sum_1;
            p._returns8523_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit8473_sum_2 + _profit8473_sum_2;
            p._profit8473_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._profit8473_sum_3 + _profit8473_sum_3;
            p._profit8473_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _web_site_id538 not required in the output table
        int32_t _sales8521 = (it.second)._sales8521_sum_0;
        tbl_Aggregate_TD_6963_output.setInt32(r, 0, _sales8521);
        int32_t _returns8523 = (it.second)._returns8523_sum_1;
        tbl_Aggregate_TD_6963_output.setInt32(r, 1, _returns8523);
        int32_t _profit8473 = ((it.second)._profit8473_sum_2 - (it.second)._profit8473_sum_3);
        tbl_Aggregate_TD_6963_output.setInt32(r, 2, _profit8473);
        // Unsupported payload type: StringType
        // Unsupported payload type: StringType
        ++r;
    }
    tbl_Aggregate_TD_6963_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6963_output #Row: " << tbl_Aggregate_TD_6963_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6760_key;
struct SW_Aggregate_TD_6760_payload {
    int32_t _sales8505_sum_0;
    int32_t _returns8507_sum_1;
    int32_t _profit8470_sum_2;
    int32_t _profit8470_sum_3;
    std::string _channel8920;
    std::string _id8921;
};
void SW_Aggregate_TD_6760(Table &tbl_JOIN_INNER_TD_7149_output, Table &tbl_Aggregate_TD_6760_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cp_catalog_page_id#997, MakeDecimal(sum(UnscaledValue(sales_price#8495)),17,2) AS sales#8505, MakeDecimal(sum(UnscaledValue(return_amt#8497)),17,2) AS returns#8507, CheckOverflow((promote_precision(cast(MakeDecimal(sum(UnscaledValue(profit#8496)),17,2) as decimal(18,2))) - promote_precision(cast(MakeDecimal(sum(UnscaledValue(net_loss#8498)),17,2) as decimal(18,2)))), DecimalType(18,2), true) AS profit#8470, catalog channel AS channel#8920, concat(catalog_page, cp_catalog_page_id#997) AS id#8921)
    // Input: ListBuffer(sales_price#8495, profit#8496, return_amt#8497, net_loss#8498, cp_catalog_page_id#997)
    // Output: ListBuffer(sales#8505, returns#8507, profit#8470, channel#8920, id#8921)
    std::unordered_map<SW_Aggregate_TD_6760_key, SW_Aggregate_TD_6760_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7149_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales_price8495 = tbl_JOIN_INNER_TD_7149_output.getInt32(i, 0);
        int32_t _profit8496 = tbl_JOIN_INNER_TD_7149_output.getInt32(i, 1);
        int32_t _return_amt8497 = tbl_JOIN_INNER_TD_7149_output.getInt32(i, 2);
        int32_t _net_loss8498 = tbl_JOIN_INNER_TD_7149_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997 = tbl_JOIN_INNER_TD_7149_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6760_key k = std::string(_cp_catalog_page_id997.data());
        int64_t _sales8505_sum_0 = _sales_price8495;
        int64_t _returns8507_sum_1 = _return_amt8497;
        int64_t _profit8470_sum_2 = _profit8496;
        int64_t _profit8470_sum_3 = _net_loss8498;
        std::string _channel8920 = "catalog channel";
        std::array<char, TPCDS_READ_MAX + 1> _id8921 = std::string("catalog_page").append(std::string(_cp_catalog_page_id997.data());
        SW_Aggregate_TD_6760_payload p{_sales8505_sum_0, _returns8507_sum_1, _profit8470_sum_2, _profit8470_sum_3, std::string(_channel8920.data()), std::string(_id8921.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales8505_sum_0 + _sales8505_sum_0;
            p._sales8505_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns8507_sum_1 + _returns8507_sum_1;
            p._returns8507_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit8470_sum_2 + _profit8470_sum_2;
            p._profit8470_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._profit8470_sum_3 + _profit8470_sum_3;
            p._profit8470_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cp_catalog_page_id997 not required in the output table
        int32_t _sales8505 = (it.second)._sales8505_sum_0;
        tbl_Aggregate_TD_6760_output.setInt32(r, 0, _sales8505);
        int32_t _returns8507 = (it.second)._returns8507_sum_1;
        tbl_Aggregate_TD_6760_output.setInt32(r, 1, _returns8507);
        int32_t _profit8470 = ((it.second)._profit8470_sum_2 - (it.second)._profit8470_sum_3);
        tbl_Aggregate_TD_6760_output.setInt32(r, 2, _profit8470);
        // Unsupported payload type: StringType
        // Unsupported payload type: StringType
        ++r;
    }
    tbl_Aggregate_TD_6760_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6760_output #Row: " << tbl_Aggregate_TD_6760_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_649_key;
struct SW_Aggregate_TD_649_payload {
    int32_t _sales8489_sum_0;
    int32_t _returns8491_sum_1;
    int32_t _profit8467_sum_2;
    int32_t _profit8467_sum_3;
    std::string _channel8630;
    std::string _id8631;
};
void SW_Aggregate_TD_649(Table &tbl_JOIN_INNER_TD_7146_output, Table &tbl_Aggregate_TD_649_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_id#379, MakeDecimal(sum(UnscaledValue(sales_price#8479)),17,2) AS sales#8489, MakeDecimal(sum(UnscaledValue(return_amt#8481)),17,2) AS returns#8491, CheckOverflow((promote_precision(cast(MakeDecimal(sum(UnscaledValue(profit#8480)),17,2) as decimal(18,2))) - promote_precision(cast(MakeDecimal(sum(UnscaledValue(net_loss#8482)),17,2) as decimal(18,2)))), DecimalType(18,2), true) AS profit#8467, store channel AS channel#8630, concat(store, s_store_id#379) AS id#8631)
    // Input: ListBuffer(sales_price#8479, profit#8480, return_amt#8481, net_loss#8482, s_store_id#379)
    // Output: ListBuffer(sales#8489, returns#8491, profit#8467, channel#8630, id#8631)
    std::unordered_map<SW_Aggregate_TD_649_key, SW_Aggregate_TD_649_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7146_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales_price8479 = tbl_JOIN_INNER_TD_7146_output.getInt32(i, 0);
        int32_t _profit8480 = tbl_JOIN_INNER_TD_7146_output.getInt32(i, 1);
        int32_t _return_amt8481 = tbl_JOIN_INNER_TD_7146_output.getInt32(i, 2);
        int32_t _net_loss8482 = tbl_JOIN_INNER_TD_7146_output.getInt32(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379 = tbl_JOIN_INNER_TD_7146_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_649_key k = std::string(_s_store_id379.data());
        int64_t _sales8489_sum_0 = _sales_price8479;
        int64_t _returns8491_sum_1 = _return_amt8481;
        int64_t _profit8467_sum_2 = _profit8480;
        int64_t _profit8467_sum_3 = _net_loss8482;
        std::string _channel8630 = "store channel";
        std::array<char, TPCDS_READ_MAX + 1> _id8631 = std::string("store").append(std::string(_s_store_id379.data());
        SW_Aggregate_TD_649_payload p{_sales8489_sum_0, _returns8491_sum_1, _profit8467_sum_2, _profit8467_sum_3, std::string(_channel8630.data()), std::string(_id8631.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales8489_sum_0 + _sales8489_sum_0;
            p._sales8489_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns8491_sum_1 + _returns8491_sum_1;
            p._returns8491_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit8467_sum_2 + _profit8467_sum_2;
            p._profit8467_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._profit8467_sum_3 + _profit8467_sum_3;
            p._profit8467_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _s_store_id379 not required in the output table
        int32_t _sales8489 = (it.second)._sales8489_sum_0;
        tbl_Aggregate_TD_649_output.setInt32(r, 0, _sales8489);
        int32_t _returns8491 = (it.second)._returns8491_sum_1;
        tbl_Aggregate_TD_649_output.setInt32(r, 1, _returns8491);
        int32_t _profit8467 = ((it.second)._profit8467_sum_2 - (it.second)._profit8467_sum_3);
        tbl_Aggregate_TD_649_output.setInt32(r, 2, _profit8467);
        // Unsupported payload type: StringType
        // Unsupported payload type: StringType
        ++r;
    }
    tbl_Aggregate_TD_649_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_649_output #Row: " << tbl_Aggregate_TD_649_output.getNumRow() << std::endl;
}

void SW_Union_TD_5348(Table &tbl_Aggregate_TD_649_output, Table &tbl_Aggregate_TD_6760_output, Table &tbl_Aggregate_TD_6963_output, Table &tbl_Union_TD_5348_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#8489, returns#8491, profit#8467, channel#8630, id#8631)
    int r = 0;
    int row0 = tbl_Aggregate_TD_649_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_5348_output.setInt32(r, 0, tbl_Aggregate_TD_649_output.getInt32(i, 0));
        tbl_Union_TD_5348_output.setInt32(r, 1, tbl_Aggregate_TD_649_output.getInt32(i, 1));
        tbl_Union_TD_5348_output.setInt32(r, 2, tbl_Aggregate_TD_649_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8630_n = tbl_Union_TD_5348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8630_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8631_n = tbl_Union_TD_5348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8631_n);
        ++r;
    }
    int row1 = tbl_Aggregate_TD_6760_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_5348_output.setInt32(r, 0, tbl_Aggregate_TD_6760_output.getInt32(i, 0));
        tbl_Union_TD_5348_output.setInt32(r, 1, tbl_Aggregate_TD_6760_output.getInt32(i, 1));
        tbl_Union_TD_5348_output.setInt32(r, 2, tbl_Aggregate_TD_6760_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8920_n = tbl_Union_TD_5348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8920_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8921_n = tbl_Union_TD_5348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8921_n);
        ++r;
    }
    int row2 = tbl_Aggregate_TD_6963_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_5348_output.setInt32(r, 0, tbl_Aggregate_TD_6963_output.getInt32(i, 0));
        tbl_Union_TD_5348_output.setInt32(r, 1, tbl_Aggregate_TD_6963_output.getInt32(i, 1));
        tbl_Union_TD_5348_output.setInt32(r, 2, tbl_Aggregate_TD_6963_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8922_n = tbl_Union_TD_5348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8922_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8923_n = tbl_Union_TD_5348_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5348_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8923_n);
        ++r;
    }
    tbl_Union_TD_5348_output.setNumRow(r);
    std::cout << "tbl_Union_TD_5348_output #Row: " << tbl_Union_TD_5348_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4408(Table &tbl_Union_TD_5348_output, Table &tbl_Expand_TD_4408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(sales#8489, returns#8491, profit#8467, channel#8630, id#8631)
    // Output: ListBuffer(sales#8489, returns#8491, profit#8467, channel#8633, id#8634, spark_grouping_id#8632L)
    std::cout << "tbl_Expand_TD_4408_output #Row: " << tbl_Expand_TD_4408_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3474_key {
    std::string _channel8633;
    std::string _id8634;
    int64_t _spark_grouping_id8632L;
    bool operator==(const SW_Aggregate_TD_3474_key& other) const { return (_channel8633 == other._channel8633) && (_id8634 == other._id8634) && (_spark_grouping_id8632L == other._spark_grouping_id8632L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3474_key> {
    std::size_t operator() (const SW_Aggregate_TD_3474_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel8633)) + (hash<string>()(k._id8634)) + (hash<int64_t>()(k._spark_grouping_id8632L));
    }
};
}
struct SW_Aggregate_TD_3474_payload {
    int32_t _sales8474_sum_0;
    int32_t _returns8475_sum_1;
    int32_t _profit8476_sum_2;
};
void SW_Aggregate_TD_3474(Table &tbl_Expand_TD_4408_output, Table &tbl_Aggregate_TD_3474_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#8633, id#8634, spark_grouping_id#8632L, sum(sales#8489) AS sales#8474, sum(returns#8491) AS returns#8475, sum(profit#8467) AS profit#8476)
    // Input: ListBuffer(sales#8489, returns#8491, profit#8467, channel#8633, id#8634, spark_grouping_id#8632L)
    // Output: ListBuffer(channel#8633, id#8634, sales#8474, returns#8475, profit#8476)
    std::unordered_map<SW_Aggregate_TD_3474_key, SW_Aggregate_TD_3474_payload> ht1;
    int nrow1 = tbl_Expand_TD_4408_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales8489 = tbl_Expand_TD_4408_output.getInt32(i, 0);
        int32_t _returns8491 = tbl_Expand_TD_4408_output.getInt32(i, 1);
        int32_t _profit8467 = tbl_Expand_TD_4408_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _channel8633 = tbl_Expand_TD_4408_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _id8634 = tbl_Expand_TD_4408_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int64_t _spark_grouping_id8632L = tbl_Expand_TD_4408_output.getInt64(i, 5);
        SW_Aggregate_TD_3474_key k{std::string(_channel8633.data()), std::string(_id8634.data()), _spark_grouping_id8632L};
        int64_t _sales8474_sum_0 = _sales8489;
        int64_t _returns8475_sum_1 = _returns8491;
        int64_t _profit8476_sum_2 = _profit8467;
        SW_Aggregate_TD_3474_payload p{_sales8474_sum_0, _returns8475_sum_1, _profit8476_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales8474_sum_0 + _sales8474_sum_0;
            p._sales8474_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._returns8475_sum_1 + _returns8475_sum_1;
            p._returns8475_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._profit8476_sum_2 + _profit8476_sum_2;
            p._profit8476_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8633{};
        memcpy(_channel8633.data(), ((it.first)._channel8633).data(), ((it.first)._channel8633).length());
        tbl_Aggregate_TD_3474_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8633);
        std::array<char, TPCDS_READ_MAX + 1> _id8634{};
        memcpy(_id8634.data(), ((it.first)._id8634).data(), ((it.first)._id8634).length());
        tbl_Aggregate_TD_3474_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8634);
        // _spark_grouping_id8632L not required in the output table
        int32_t _sales8474 = (it.second)._sales8474_sum_0;
        tbl_Aggregate_TD_3474_output.setInt32(r, 2, _sales8474);
        int32_t _returns8475 = (it.second)._returns8475_sum_1;
        tbl_Aggregate_TD_3474_output.setInt32(r, 3, _returns8475);
        int32_t _profit8476 = (it.second)._profit8476_sum_2;
        tbl_Aggregate_TD_3474_output.setInt32(r, 4, _profit8476);
        ++r;
    }
    tbl_Aggregate_TD_3474_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3474_output #Row: " << tbl_Aggregate_TD_3474_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2238(Table &tbl_Aggregate_TD_3474_output, Table &tbl_Sort_TD_2238_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#8633 ASC NULLS FIRST, id#8634 ASC NULLS FIRST)
    // Input: ListBuffer(channel#8633, id#8634, sales#8474, returns#8475, profit#8476)
    // Output: ListBuffer(channel#8633, id#8634, sales#8474, returns#8475, profit#8476)
    struct SW_Sort_TD_2238Row {
        std::string _channel8633;
        std::string _id8634;
        int32_t _sales8474;
        int32_t _returns8475;
        int32_t _profit8476;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2238Row& a, const SW_Sort_TD_2238Row& b) const { return 
 (a._channel8633 < b._channel8633) || 
 ((a._channel8633 == b._channel8633) && (a._id8634 < b._id8634)); 
}
    }SW_Sort_TD_2238_order; 

    int nrow1 = tbl_Aggregate_TD_3474_output.getNumRow();
    std::vector<SW_Sort_TD_2238Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8633 = tbl_Aggregate_TD_3474_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _id8634 = tbl_Aggregate_TD_3474_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _sales8474 = tbl_Aggregate_TD_3474_output.getInt32(i, 2);
        int32_t _returns8475 = tbl_Aggregate_TD_3474_output.getInt32(i, 3);
        int32_t _profit8476 = tbl_Aggregate_TD_3474_output.getInt32(i, 4);
        SW_Sort_TD_2238Row t = {std::string(_channel8633.data()),std::string(_id8634.data()),_sales8474,_returns8475,_profit8476};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2238_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8633{};
        memcpy(_channel8633.data(), (it._channel8633).data(), (it._channel8633).length());
        tbl_Sort_TD_2238_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel8633);
        std::array<char, TPCDS_READ_MAX + 1> _id8634{};
        memcpy(_id8634.data(), (it._id8634).data(), (it._id8634).length());
        tbl_Sort_TD_2238_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _id8634);
        tbl_Sort_TD_2238_output.setInt32(r, 2, it._sales8474);
        tbl_Sort_TD_2238_output.setInt32(r, 3, it._returns8475);
        tbl_Sort_TD_2238_output.setInt32(r, 4, it._profit8476);
        ++r;
    }
    tbl_Sort_TD_2238_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2238_output #Row: " << tbl_Sort_TD_2238_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1179(Table &tbl_Sort_TD_2238_output, Table &tbl_LocalLimit_TD_1179_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#8633, id#8634, sales#8474, returns#8475, profit#8476)
    // Output: ListBuffer(channel#8633, id#8634, sales#8474, returns#8475, profit#8476)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8633_n = tbl_Sort_TD_2238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1179_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8633_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8634_n = tbl_Sort_TD_2238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1179_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8634_n);
        tbl_LocalLimit_TD_1179_output.setInt32(r, 2, tbl_Sort_TD_2238_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1179_output.setInt32(r, 3, tbl_Sort_TD_2238_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1179_output.setInt32(r, 4, tbl_Sort_TD_2238_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1179_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1179_output #Row: " << tbl_LocalLimit_TD_1179_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_08(Table &tbl_LocalLimit_TD_1179_output, Table &tbl_GlobalLimit_TD_08_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#8633, id#8634, sales#8474, returns#8475, profit#8476)
    // Output: ListBuffer(channel#8633, id#8634, sales#8474, returns#8475, profit#8476)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8633_n = tbl_LocalLimit_TD_1179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_08_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8633_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8634_n = tbl_LocalLimit_TD_1179_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_08_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8634_n);
        tbl_GlobalLimit_TD_08_output.setInt32(r, 2, tbl_LocalLimit_TD_1179_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_08_output.setInt32(r, 3, tbl_LocalLimit_TD_1179_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_08_output.setInt32(r, 4, tbl_LocalLimit_TD_1179_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_08_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_08_output #Row: " << tbl_GlobalLimit_TD_08_output.getNumRow() << std::endl;
}

