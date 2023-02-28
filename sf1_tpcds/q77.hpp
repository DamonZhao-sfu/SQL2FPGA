#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_11528910(Table &tbl_SerializeFromObject_TD_12621132_input, Table &tbl_Filter_TD_11528910_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#37047) AND ((d_date#37047 >= 2000-08-23) AND (d_date#37047 <= 2000-09-22))) AND isnotnull(d_date_sk#37045)))
    // Input: ListBuffer(d_date_sk#37045, d_date#37047)
    // Output: ListBuffer(d_date_sk#37045)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12621132_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date37047 = tbl_SerializeFromObject_TD_12621132_input.getInt32(i, 1);
        int32_t _d_date_sk37045 = tbl_SerializeFromObject_TD_12621132_input.getInt32(i, 0);
        if (((_d_date37047!= 0) && ((_d_date37047 >= 20000823) && (_d_date37047 <= 20000922))) && (_d_date_sk37045!= 0)) {
            int32_t _d_date_sk37045_t = tbl_SerializeFromObject_TD_12621132_input.getInt32(i, 0);
            tbl_Filter_TD_11528910_output.setInt32(r, 0, _d_date_sk37045_t);
            r++;
        }
    }
    tbl_Filter_TD_11528910_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11528910_output #Row: " << tbl_Filter_TD_11528910_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11494145(Table &tbl_SerializeFromObject_TD_12981049_input, Table &tbl_Filter_TD_11494145_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_returned_date_sk#831) AND isnotnull(wr_web_page_sk#842)))
    // Input: ListBuffer(wr_returned_date_sk#831, wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    // Output: ListBuffer(wr_returned_date_sk#831, wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12981049_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_returned_date_sk831 = tbl_SerializeFromObject_TD_12981049_input.getInt32(i, 0);
        int32_t _wr_web_page_sk842 = tbl_SerializeFromObject_TD_12981049_input.getInt32(i, 1);
        if ((_wr_returned_date_sk831!= 0) && (_wr_web_page_sk842!= 0)) {
            int32_t _wr_returned_date_sk831_t = tbl_SerializeFromObject_TD_12981049_input.getInt32(i, 0);
            tbl_Filter_TD_11494145_output.setInt32(r, 0, _wr_returned_date_sk831_t);
            int32_t _wr_web_page_sk842_t = tbl_SerializeFromObject_TD_12981049_input.getInt32(i, 1);
            tbl_Filter_TD_11494145_output.setInt32(r, 1, _wr_web_page_sk842_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_12981049_input.getInt32(i, 2);
            tbl_Filter_TD_11494145_output.setInt32(r, 2, _wr_return_amt846_t);
            int32_t _wr_net_loss854_t = tbl_SerializeFromObject_TD_12981049_input.getInt32(i, 3);
            tbl_Filter_TD_11494145_output.setInt32(r, 3, _wr_net_loss854_t);
            r++;
        }
    }
    tbl_Filter_TD_11494145_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11494145_output #Row: " << tbl_Filter_TD_11494145_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11118267(Table &tbl_SerializeFromObject_TD_12588298_input, Table &tbl_Filter_TD_11118267_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#37019) AND ((d_date#37019 >= 2000-08-23) AND (d_date#37019 <= 2000-09-22))) AND isnotnull(d_date_sk#37017)))
    // Input: ListBuffer(d_date_sk#37017, d_date#37019)
    // Output: ListBuffer(d_date_sk#37017)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12588298_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date37019 = tbl_SerializeFromObject_TD_12588298_input.getInt32(i, 1);
        int32_t _d_date_sk37017 = tbl_SerializeFromObject_TD_12588298_input.getInt32(i, 0);
        if (((_d_date37019!= 0) && ((_d_date37019 >= 20000823) && (_d_date37019 <= 20000922))) && (_d_date_sk37017!= 0)) {
            int32_t _d_date_sk37017_t = tbl_SerializeFromObject_TD_12588298_input.getInt32(i, 0);
            tbl_Filter_TD_11118267_output.setInt32(r, 0, _d_date_sk37017_t);
            r++;
        }
    }
    tbl_Filter_TD_11118267_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11118267_output #Row: " << tbl_Filter_TD_11118267_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11457199(Table &tbl_SerializeFromObject_TD_1237886_input, Table &tbl_Filter_TD_11457199_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_web_page_sk#741)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1237886_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_1237886_input.getInt32(i, 0);
        int32_t _ws_web_page_sk741 = tbl_SerializeFromObject_TD_1237886_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && (_ws_web_page_sk741!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_1237886_input.getInt32(i, 0);
            tbl_Filter_TD_11457199_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_web_page_sk741_t = tbl_SerializeFromObject_TD_1237886_input.getInt32(i, 1);
            tbl_Filter_TD_11457199_output.setInt32(r, 1, _ws_web_page_sk741_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_1237886_input.getInt32(i, 2);
            tbl_Filter_TD_11457199_output.setInt32(r, 2, _ws_ext_sales_price752_t);
            int32_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_1237886_input.getInt32(i, 3);
            tbl_Filter_TD_11457199_output.setInt32(r, 3, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_11457199_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11457199_output #Row: " << tbl_Filter_TD_11457199_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11372712(Table &tbl_SerializeFromObject_TD_12467270_input, Table &tbl_Filter_TD_11372712_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#36906) AND ((d_date#36906 >= 2000-08-23) AND (d_date#36906 <= 2000-09-22))) AND isnotnull(d_date_sk#36904)))
    // Input: ListBuffer(d_date_sk#36904, d_date#36906)
    // Output: ListBuffer(d_date_sk#36904)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12467270_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date36906 = tbl_SerializeFromObject_TD_12467270_input.getInt32(i, 1);
        int32_t _d_date_sk36904 = tbl_SerializeFromObject_TD_12467270_input.getInt32(i, 0);
        if (((_d_date36906!= 0) && ((_d_date36906 >= 20000823) && (_d_date36906 <= 20000922))) && (_d_date_sk36904!= 0)) {
            int32_t _d_date_sk36904_t = tbl_SerializeFromObject_TD_12467270_input.getInt32(i, 0);
            tbl_Filter_TD_11372712_output.setInt32(r, 0, _d_date_sk36904_t);
            r++;
        }
    }
    tbl_Filter_TD_11372712_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11372712_output #Row: " << tbl_Filter_TD_11372712_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11107844(Table &tbl_SerializeFromObject_TD_12885142_input, Table &tbl_Filter_TD_11107844_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_returned_date_sk#669) AND isnotnull(sr_store_sk#676)))
    // Input: ListBuffer(sr_returned_date_sk#669, sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    // Output: ListBuffer(sr_returned_date_sk#669, sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12885142_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_returned_date_sk669 = tbl_SerializeFromObject_TD_12885142_input.getInt32(i, 0);
        int32_t _sr_store_sk676 = tbl_SerializeFromObject_TD_12885142_input.getInt32(i, 1);
        if ((_sr_returned_date_sk669!= 0) && (_sr_store_sk676!= 0)) {
            int32_t _sr_returned_date_sk669_t = tbl_SerializeFromObject_TD_12885142_input.getInt32(i, 0);
            tbl_Filter_TD_11107844_output.setInt32(r, 0, _sr_returned_date_sk669_t);
            int32_t _sr_store_sk676_t = tbl_SerializeFromObject_TD_12885142_input.getInt32(i, 1);
            tbl_Filter_TD_11107844_output.setInt32(r, 1, _sr_store_sk676_t);
            int32_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_12885142_input.getInt32(i, 2);
            tbl_Filter_TD_11107844_output.setInt32(r, 2, _sr_return_amt680_t);
            int32_t _sr_net_loss688_t = tbl_SerializeFromObject_TD_12885142_input.getInt32(i, 3);
            tbl_Filter_TD_11107844_output.setInt32(r, 3, _sr_net_loss688_t);
            r++;
        }
    }
    tbl_Filter_TD_11107844_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11107844_output #Row: " << tbl_Filter_TD_11107844_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11935863(Table &tbl_SerializeFromObject_TD_12536393_input, Table &tbl_Filter_TD_11935863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-08-23) AND (d_date#122 <= 2000-09-22))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12536393_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_12536393_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12536393_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000823) && (_d_date122 <= 20000922))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12536393_input.getInt32(i, 0);
            tbl_Filter_TD_11935863_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_11935863_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11935863_output #Row: " << tbl_Filter_TD_11935863_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11718135(Table &tbl_SerializeFromObject_TD_12303208_input, Table &tbl_Filter_TD_11718135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12303208_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12303208_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12303208_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12303208_input.getInt32(i, 0);
            tbl_Filter_TD_11718135_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_12303208_input.getInt32(i, 1);
            tbl_Filter_TD_11718135_output.setInt32(r, 1, _ss_store_sk1213_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_12303208_input.getInt32(i, 2);
            tbl_Filter_TD_11718135_output.setInt32(r, 2, _ss_ext_sales_price1221_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_12303208_input.getInt32(i, 3);
            tbl_Filter_TD_11718135_output.setInt32(r, 3, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_11718135_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11718135_output #Row: " << tbl_Filter_TD_11718135_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10259758(Table &tbl_SerializeFromObject_TD_11883666_input, Table &tbl_Filter_TD_10259758_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wp_web_page_sk#37073))
    // Input: ListBuffer(wp_web_page_sk#37073)
    // Output: ListBuffer(wp_web_page_sk#37073)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11883666_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_web_page_sk37073 = tbl_SerializeFromObject_TD_11883666_input.getInt32(i, 0);
        if (_wp_web_page_sk37073!= 0) {
            int32_t _wp_web_page_sk37073_t = tbl_SerializeFromObject_TD_11883666_input.getInt32(i, 0);
            tbl_Filter_TD_10259758_output.setInt32(r, 0, _wp_web_page_sk37073_t);
            r++;
        }
    }
    tbl_Filter_TD_10259758_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10259758_output #Row: " << tbl_Filter_TD_10259758_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10521058_key_leftMajor {
    int32_t _wr_returned_date_sk831;
    bool operator==(const SW_JOIN_INNER_TD_10521058_key_leftMajor& other) const {
        return ((_wr_returned_date_sk831 == other._wr_returned_date_sk831));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10521058_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10521058_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_returned_date_sk831));
    }
};
}
struct SW_JOIN_INNER_TD_10521058_payload_leftMajor {
    int32_t _wr_returned_date_sk831;
    int32_t _wr_web_page_sk842;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_10521058_key_rightMajor {
    int32_t _d_date_sk37045;
    bool operator==(const SW_JOIN_INNER_TD_10521058_key_rightMajor& other) const {
        return ((_d_date_sk37045 == other._d_date_sk37045));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10521058_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10521058_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk37045));
    }
};
}
struct SW_JOIN_INNER_TD_10521058_payload_rightMajor {
    int32_t _d_date_sk37045;
};
void SW_JOIN_INNER_TD_10521058(Table &tbl_Filter_TD_11494145_output, Table &tbl_Filter_TD_11528910_output, Table &tbl_JOIN_INNER_TD_10521058_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_returned_date_sk#831 = d_date_sk#37045))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(d_date_sk#37045)
    // Output Table: ListBuffer(wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    int left_nrow = tbl_Filter_TD_11494145_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11528910_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10521058_key_leftMajor, SW_JOIN_INNER_TD_10521058_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11494145_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_Filter_TD_11494145_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10521058_key_leftMajor keyA{_wr_returned_date_sk831_k};
            int32_t _wr_returned_date_sk831 = tbl_Filter_TD_11494145_output.getInt32(i, 0);
            int32_t _wr_web_page_sk842 = tbl_Filter_TD_11494145_output.getInt32(i, 1);
            int32_t _wr_return_amt846 = tbl_Filter_TD_11494145_output.getInt32(i, 2);
            int32_t _wr_net_loss854 = tbl_Filter_TD_11494145_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10521058_payload_leftMajor payloadA{_wr_returned_date_sk831, _wr_web_page_sk842, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11528910_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk37045_k = tbl_Filter_TD_11528910_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10521058_key_leftMajor{_d_date_sk37045_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_returned_date_sk831 = (it->second)._wr_returned_date_sk831;
                int32_t _wr_web_page_sk842 = (it->second)._wr_web_page_sk842;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                int32_t _d_date_sk37045 = tbl_Filter_TD_11528910_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10521058_output.setInt32(r, 0, _wr_web_page_sk842);
                tbl_JOIN_INNER_TD_10521058_output.setInt32(r, 1, _wr_return_amt846);
                tbl_JOIN_INNER_TD_10521058_output.setInt32(r, 2, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10521058_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10521058_key_rightMajor, SW_JOIN_INNER_TD_10521058_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11528910_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk37045_k = tbl_Filter_TD_11528910_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10521058_key_rightMajor keyA{_d_date_sk37045_k};
            int32_t _d_date_sk37045 = tbl_Filter_TD_11528910_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10521058_payload_rightMajor payloadA{_d_date_sk37045};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11494145_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_returned_date_sk831_k = tbl_Filter_TD_11494145_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10521058_key_rightMajor{_wr_returned_date_sk831_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk37045 = (it->second)._d_date_sk37045;
                int32_t _wr_returned_date_sk831 = tbl_Filter_TD_11494145_output.getInt32(i, 0);
                int32_t _wr_web_page_sk842 = tbl_Filter_TD_11494145_output.getInt32(i, 1);
                int32_t _wr_return_amt846 = tbl_Filter_TD_11494145_output.getInt32(i, 2);
                int32_t _wr_net_loss854 = tbl_Filter_TD_11494145_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10521058_output.setInt32(r, 0, _wr_web_page_sk842);
                tbl_JOIN_INNER_TD_10521058_output.setInt32(r, 1, _wr_return_amt846);
                tbl_JOIN_INNER_TD_10521058_output.setInt32(r, 2, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10521058_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10521058_output #Row: " << tbl_JOIN_INNER_TD_10521058_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10643877(Table &tbl_SerializeFromObject_TD_11901338_input, Table &tbl_Filter_TD_10643877_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wp_web_page_sk#615))
    // Input: ListBuffer(wp_web_page_sk#615)
    // Output: ListBuffer(wp_web_page_sk#615)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11901338_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_web_page_sk615 = tbl_SerializeFromObject_TD_11901338_input.getInt32(i, 0);
        if (_wp_web_page_sk615!= 0) {
            int32_t _wp_web_page_sk615_t = tbl_SerializeFromObject_TD_11901338_input.getInt32(i, 0);
            tbl_Filter_TD_10643877_output.setInt32(r, 0, _wp_web_page_sk615_t);
            r++;
        }
    }
    tbl_Filter_TD_10643877_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10643877_output #Row: " << tbl_Filter_TD_10643877_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10868964_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_10868964_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10868964_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10868964_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_10868964_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_web_page_sk741;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_10868964_key_rightMajor {
    int32_t _d_date_sk37017;
    bool operator==(const SW_JOIN_INNER_TD_10868964_key_rightMajor& other) const {
        return ((_d_date_sk37017 == other._d_date_sk37017));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10868964_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10868964_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk37017));
    }
};
}
struct SW_JOIN_INNER_TD_10868964_payload_rightMajor {
    int32_t _d_date_sk37017;
};
void SW_JOIN_INNER_TD_10868964(Table &tbl_Filter_TD_11457199_output, Table &tbl_Filter_TD_11118267_output, Table &tbl_JOIN_INNER_TD_10868964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#37017))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    // Right Table: ListBuffer(d_date_sk#37017)
    // Output Table: ListBuffer(ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    int left_nrow = tbl_Filter_TD_11457199_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11118267_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10868964_key_leftMajor, SW_JOIN_INNER_TD_10868964_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11457199_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_11457199_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10868964_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11457199_output.getInt32(i, 0);
            int32_t _ws_web_page_sk741 = tbl_Filter_TD_11457199_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_11457199_output.getInt32(i, 2);
            int32_t _ws_net_profit762 = tbl_Filter_TD_11457199_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10868964_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_web_page_sk741, _ws_ext_sales_price752, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11118267_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk37017_k = tbl_Filter_TD_11118267_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10868964_key_leftMajor{_d_date_sk37017_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _d_date_sk37017 = tbl_Filter_TD_11118267_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10868964_output.setInt32(r, 0, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_10868964_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_10868964_output.setInt32(r, 2, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10868964_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10868964_key_rightMajor, SW_JOIN_INNER_TD_10868964_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11118267_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk37017_k = tbl_Filter_TD_11118267_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10868964_key_rightMajor keyA{_d_date_sk37017_k};
            int32_t _d_date_sk37017 = tbl_Filter_TD_11118267_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10868964_payload_rightMajor payloadA{_d_date_sk37017};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11457199_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_11457199_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10868964_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk37017 = (it->second)._d_date_sk37017;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11457199_output.getInt32(i, 0);
                int32_t _ws_web_page_sk741 = tbl_Filter_TD_11457199_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_11457199_output.getInt32(i, 2);
                int32_t _ws_net_profit762 = tbl_Filter_TD_11457199_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10868964_output.setInt32(r, 0, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_10868964_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_10868964_output.setInt32(r, 2, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10868964_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10868964_output #Row: " << tbl_JOIN_INNER_TD_10868964_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10996134(Table &tbl_SerializeFromObject_TD_1130358_input, Table &tbl_Filter_TD_10996134_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#36991) AND ((d_date#36991 >= 2000-08-23) AND (d_date#36991 <= 2000-09-22))) AND isnotnull(d_date_sk#36989)))
    // Input: ListBuffer(d_date_sk#36989, d_date#36991)
    // Output: ListBuffer(d_date_sk#36989)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1130358_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date36991 = tbl_SerializeFromObject_TD_1130358_input.getInt32(i, 1);
        int32_t _d_date_sk36989 = tbl_SerializeFromObject_TD_1130358_input.getInt32(i, 0);
        if (((_d_date36991!= 0) && ((_d_date36991 >= 20000823) && (_d_date36991 <= 20000922))) && (_d_date_sk36989!= 0)) {
            int32_t _d_date_sk36989_t = tbl_SerializeFromObject_TD_1130358_input.getInt32(i, 0);
            tbl_Filter_TD_10996134_output.setInt32(r, 0, _d_date_sk36989_t);
            r++;
        }
    }
    tbl_Filter_TD_10996134_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10996134_output #Row: " << tbl_Filter_TD_10996134_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10172532(Table &tbl_SerializeFromObject_TD_11533116_input, Table &tbl_Filter_TD_10172532_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cr_returned_date_sk#1023))
    // Input: ListBuffer(cr_returned_date_sk#1023, cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(cr_returned_date_sk#1023, cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11533116_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_11533116_input.getInt32(i, 0);
        if (_cr_returned_date_sk1023!= 0) {
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_11533116_input.getInt32(i, 0);
            tbl_Filter_TD_10172532_output.setInt32(r, 0, _cr_returned_date_sk1023_t);
            int32_t _cr_call_center_sk1034_t = tbl_SerializeFromObject_TD_11533116_input.getInt32(i, 1);
            tbl_Filter_TD_10172532_output.setInt32(r, 1, _cr_call_center_sk1034_t);
            int32_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_11533116_input.getInt32(i, 2);
            tbl_Filter_TD_10172532_output.setInt32(r, 2, _cr_return_amount1041_t);
            int32_t _cr_net_loss1049_t = tbl_SerializeFromObject_TD_11533116_input.getInt32(i, 3);
            tbl_Filter_TD_10172532_output.setInt32(r, 3, _cr_net_loss1049_t);
            r++;
        }
    }
    tbl_Filter_TD_10172532_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10172532_output #Row: " << tbl_Filter_TD_10172532_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10890291(Table &tbl_SerializeFromObject_TD_11487734_input, Table &tbl_Filter_TD_10890291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#36963) AND ((d_date#36963 >= 2000-08-23) AND (d_date#36963 <= 2000-09-22))) AND isnotnull(d_date_sk#36961)))
    // Input: ListBuffer(d_date_sk#36961, d_date#36963)
    // Output: ListBuffer(d_date_sk#36961)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11487734_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date36963 = tbl_SerializeFromObject_TD_11487734_input.getInt32(i, 1);
        int32_t _d_date_sk36961 = tbl_SerializeFromObject_TD_11487734_input.getInt32(i, 0);
        if (((_d_date36963!= 0) && ((_d_date36963 >= 20000823) && (_d_date36963 <= 20000922))) && (_d_date_sk36961!= 0)) {
            int32_t _d_date_sk36961_t = tbl_SerializeFromObject_TD_11487734_input.getInt32(i, 0);
            tbl_Filter_TD_10890291_output.setInt32(r, 0, _d_date_sk36961_t);
            r++;
        }
    }
    tbl_Filter_TD_10890291_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10890291_output #Row: " << tbl_Filter_TD_10890291_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10351614(Table &tbl_SerializeFromObject_TD_11204257_input, Table &tbl_Filter_TD_10351614_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11204257_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_11204257_input.getInt32(i, 0);
        if (_cs_sold_date_sk1104!= 0) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_11204257_input.getInt32(i, 0);
            tbl_Filter_TD_10351614_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_call_center_sk1115_t = tbl_SerializeFromObject_TD_11204257_input.getInt32(i, 1);
            tbl_Filter_TD_10351614_output.setInt32(r, 1, _cs_call_center_sk1115_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_11204257_input.getInt32(i, 2);
            tbl_Filter_TD_10351614_output.setInt32(r, 2, _cs_ext_sales_price1127_t);
            int32_t _cs_net_profit1137_t = tbl_SerializeFromObject_TD_11204257_input.getInt32(i, 3);
            tbl_Filter_TD_10351614_output.setInt32(r, 3, _cs_net_profit1137_t);
            r++;
        }
    }
    tbl_Filter_TD_10351614_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10351614_output #Row: " << tbl_Filter_TD_10351614_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10411018(Table &tbl_SerializeFromObject_TD_11996293_input, Table &tbl_Filter_TD_10411018_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#36932))
    // Input: ListBuffer(s_store_sk#36932)
    // Output: ListBuffer(s_store_sk#36932)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11996293_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk36932 = tbl_SerializeFromObject_TD_11996293_input.getInt32(i, 0);
        if (_s_store_sk36932!= 0) {
            int32_t _s_store_sk36932_t = tbl_SerializeFromObject_TD_11996293_input.getInt32(i, 0);
            tbl_Filter_TD_10411018_output.setInt32(r, 0, _s_store_sk36932_t);
            r++;
        }
    }
    tbl_Filter_TD_10411018_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10411018_output #Row: " << tbl_Filter_TD_10411018_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10914634_key_leftMajor {
    int32_t _sr_returned_date_sk669;
    bool operator==(const SW_JOIN_INNER_TD_10914634_key_leftMajor& other) const {
        return ((_sr_returned_date_sk669 == other._sr_returned_date_sk669));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10914634_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10914634_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_returned_date_sk669));
    }
};
}
struct SW_JOIN_INNER_TD_10914634_payload_leftMajor {
    int32_t _sr_returned_date_sk669;
    int32_t _sr_store_sk676;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_10914634_key_rightMajor {
    int32_t _d_date_sk36904;
    bool operator==(const SW_JOIN_INNER_TD_10914634_key_rightMajor& other) const {
        return ((_d_date_sk36904 == other._d_date_sk36904));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10914634_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10914634_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk36904));
    }
};
}
struct SW_JOIN_INNER_TD_10914634_payload_rightMajor {
    int32_t _d_date_sk36904;
};
void SW_JOIN_INNER_TD_10914634(Table &tbl_Filter_TD_11107844_output, Table &tbl_Filter_TD_11372712_output, Table &tbl_JOIN_INNER_TD_10914634_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_returned_date_sk#669 = d_date_sk#36904))
    // Left Table: ListBuffer(sr_returned_date_sk#669, sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    // Right Table: ListBuffer(d_date_sk#36904)
    // Output Table: ListBuffer(sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    int left_nrow = tbl_Filter_TD_11107844_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11372712_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10914634_key_leftMajor, SW_JOIN_INNER_TD_10914634_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11107844_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_Filter_TD_11107844_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10914634_key_leftMajor keyA{_sr_returned_date_sk669_k};
            int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11107844_output.getInt32(i, 0);
            int32_t _sr_store_sk676 = tbl_Filter_TD_11107844_output.getInt32(i, 1);
            int32_t _sr_return_amt680 = tbl_Filter_TD_11107844_output.getInt32(i, 2);
            int32_t _sr_net_loss688 = tbl_Filter_TD_11107844_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10914634_payload_leftMajor payloadA{_sr_returned_date_sk669, _sr_store_sk676, _sr_return_amt680, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11372712_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk36904_k = tbl_Filter_TD_11372712_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10914634_key_leftMajor{_d_date_sk36904_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_returned_date_sk669 = (it->second)._sr_returned_date_sk669;
                int32_t _sr_store_sk676 = (it->second)._sr_store_sk676;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _d_date_sk36904 = tbl_Filter_TD_11372712_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10914634_output.setInt32(r, 0, _sr_store_sk676);
                tbl_JOIN_INNER_TD_10914634_output.setInt32(r, 1, _sr_return_amt680);
                tbl_JOIN_INNER_TD_10914634_output.setInt32(r, 2, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10914634_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10914634_key_rightMajor, SW_JOIN_INNER_TD_10914634_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11372712_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk36904_k = tbl_Filter_TD_11372712_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10914634_key_rightMajor keyA{_d_date_sk36904_k};
            int32_t _d_date_sk36904 = tbl_Filter_TD_11372712_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10914634_payload_rightMajor payloadA{_d_date_sk36904};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11107844_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_returned_date_sk669_k = tbl_Filter_TD_11107844_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10914634_key_rightMajor{_sr_returned_date_sk669_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk36904 = (it->second)._d_date_sk36904;
                int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11107844_output.getInt32(i, 0);
                int32_t _sr_store_sk676 = tbl_Filter_TD_11107844_output.getInt32(i, 1);
                int32_t _sr_return_amt680 = tbl_Filter_TD_11107844_output.getInt32(i, 2);
                int32_t _sr_net_loss688 = tbl_Filter_TD_11107844_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10914634_output.setInt32(r, 0, _sr_store_sk676);
                tbl_JOIN_INNER_TD_10914634_output.setInt32(r, 1, _sr_return_amt680);
                tbl_JOIN_INNER_TD_10914634_output.setInt32(r, 2, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10914634_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10914634_output #Row: " << tbl_JOIN_INNER_TD_10914634_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1077998(Table &tbl_SerializeFromObject_TD_11844590_input, Table &tbl_Filter_TD_1077998_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11844590_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_11844590_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_11844590_input.getInt32(i, 0);
            tbl_Filter_TD_1077998_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_1077998_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1077998_output #Row: " << tbl_Filter_TD_1077998_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10149163_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10149163_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10149163_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10149163_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10149163_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_10149163_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10149163_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10149163_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10149163_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10149163_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_10149163(Table &tbl_Filter_TD_11718135_output, Table &tbl_Filter_TD_11935863_output, Table &tbl_JOIN_INNER_TD_10149163_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    int left_nrow = tbl_Filter_TD_11718135_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11935863_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10149163_key_leftMajor, SW_JOIN_INNER_TD_10149163_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11718135_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_11718135_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10149163_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11718135_output.getInt32(i, 0);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_11718135_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_11718135_output.getInt32(i, 2);
            int32_t _ss_net_profit1228 = tbl_Filter_TD_11718135_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10149163_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_store_sk1213, _ss_ext_sales_price1221, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11935863_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11935863_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10149163_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _d_date_sk120 = tbl_Filter_TD_11935863_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10149163_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10149163_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10149163_output.setInt32(r, 2, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10149163_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10149163_key_rightMajor, SW_JOIN_INNER_TD_10149163_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11935863_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11935863_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10149163_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11935863_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10149163_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11718135_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_11718135_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10149163_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11718135_output.getInt32(i, 0);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_11718135_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_11718135_output.getInt32(i, 2);
                int32_t _ss_net_profit1228 = tbl_Filter_TD_11718135_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10149163_output.setInt32(r, 0, _ss_store_sk1213);
                tbl_JOIN_INNER_TD_10149163_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10149163_output.setInt32(r, 2, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10149163_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10149163_output #Row: " << tbl_JOIN_INNER_TD_10149163_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9902581_key_leftMajor {
    int32_t _wr_web_page_sk842;
    bool operator==(const SW_JOIN_INNER_TD_9902581_key_leftMajor& other) const {
        return ((_wr_web_page_sk842 == other._wr_web_page_sk842));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9902581_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9902581_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wr_web_page_sk842));
    }
};
}
struct SW_JOIN_INNER_TD_9902581_payload_leftMajor {
    int32_t _wr_web_page_sk842;
    int32_t _wr_return_amt846;
    int32_t _wr_net_loss854;
};
struct SW_JOIN_INNER_TD_9902581_key_rightMajor {
    int32_t _wp_web_page_sk37073;
    bool operator==(const SW_JOIN_INNER_TD_9902581_key_rightMajor& other) const {
        return ((_wp_web_page_sk37073 == other._wp_web_page_sk37073));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9902581_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9902581_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk37073));
    }
};
}
struct SW_JOIN_INNER_TD_9902581_payload_rightMajor {
    int32_t _wp_web_page_sk37073;
};
void SW_JOIN_INNER_TD_9902581(Table &tbl_JOIN_INNER_TD_10521058_output, Table &tbl_Filter_TD_10259758_output, Table &tbl_JOIN_INNER_TD_9902581_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wr_web_page_sk#842 = wp_web_page_sk#37073))
    // Left Table: ListBuffer(wr_web_page_sk#842, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(wp_web_page_sk#37073)
    // Output Table: ListBuffer(wr_return_amt#846, wr_net_loss#854, wp_web_page_sk#37073)
    int left_nrow = tbl_JOIN_INNER_TD_10521058_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10259758_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9902581_key_leftMajor, SW_JOIN_INNER_TD_9902581_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10521058_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wr_web_page_sk842_k = tbl_JOIN_INNER_TD_10521058_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9902581_key_leftMajor keyA{_wr_web_page_sk842_k};
            int32_t _wr_web_page_sk842 = tbl_JOIN_INNER_TD_10521058_output.getInt32(i, 0);
            int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10521058_output.getInt32(i, 1);
            int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_10521058_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9902581_payload_leftMajor payloadA{_wr_web_page_sk842, _wr_return_amt846, _wr_net_loss854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10259758_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wp_web_page_sk37073_k = tbl_Filter_TD_10259758_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9902581_key_leftMajor{_wp_web_page_sk37073_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wr_web_page_sk842 = (it->second)._wr_web_page_sk842;
                int32_t _wr_return_amt846 = (it->second)._wr_return_amt846;
                int32_t _wr_net_loss854 = (it->second)._wr_net_loss854;
                int32_t _wp_web_page_sk37073 = tbl_Filter_TD_10259758_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9902581_output.setInt32(r, 0, _wr_return_amt846);
                tbl_JOIN_INNER_TD_9902581_output.setInt32(r, 1, _wr_net_loss854);
                tbl_JOIN_INNER_TD_9902581_output.setInt32(r, 2, _wp_web_page_sk37073);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9902581_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9902581_key_rightMajor, SW_JOIN_INNER_TD_9902581_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10259758_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wp_web_page_sk37073_k = tbl_Filter_TD_10259758_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9902581_key_rightMajor keyA{_wp_web_page_sk37073_k};
            int32_t _wp_web_page_sk37073 = tbl_Filter_TD_10259758_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9902581_payload_rightMajor payloadA{_wp_web_page_sk37073};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10521058_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wr_web_page_sk842_k = tbl_JOIN_INNER_TD_10521058_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9902581_key_rightMajor{_wr_web_page_sk842_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wp_web_page_sk37073 = (it->second)._wp_web_page_sk37073;
                int32_t _wr_web_page_sk842 = tbl_JOIN_INNER_TD_10521058_output.getInt32(i, 0);
                int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_10521058_output.getInt32(i, 1);
                int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_10521058_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9902581_output.setInt32(r, 2, _wp_web_page_sk37073);
                tbl_JOIN_INNER_TD_9902581_output.setInt32(r, 0, _wr_return_amt846);
                tbl_JOIN_INNER_TD_9902581_output.setInt32(r, 1, _wr_net_loss854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9902581_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9902581_output #Row: " << tbl_JOIN_INNER_TD_9902581_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9143848_key_leftMajor {
    int32_t _ws_web_page_sk741;
    bool operator==(const SW_JOIN_INNER_TD_9143848_key_leftMajor& other) const {
        return ((_ws_web_page_sk741 == other._ws_web_page_sk741));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9143848_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9143848_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_page_sk741));
    }
};
}
struct SW_JOIN_INNER_TD_9143848_payload_leftMajor {
    int32_t _ws_web_page_sk741;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_profit762;
};
struct SW_JOIN_INNER_TD_9143848_key_rightMajor {
    int32_t _wp_web_page_sk615;
    bool operator==(const SW_JOIN_INNER_TD_9143848_key_rightMajor& other) const {
        return ((_wp_web_page_sk615 == other._wp_web_page_sk615));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9143848_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9143848_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk615));
    }
};
}
struct SW_JOIN_INNER_TD_9143848_payload_rightMajor {
    int32_t _wp_web_page_sk615;
};
void SW_JOIN_INNER_TD_9143848(Table &tbl_JOIN_INNER_TD_10868964_output, Table &tbl_Filter_TD_10643877_output, Table &tbl_JOIN_INNER_TD_9143848_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_page_sk#741 = wp_web_page_sk#615))
    // Left Table: ListBuffer(ws_web_page_sk#741, ws_ext_sales_price#752, ws_net_profit#762)
    // Right Table: ListBuffer(wp_web_page_sk#615)
    // Output Table: ListBuffer(ws_ext_sales_price#752, ws_net_profit#762, wp_web_page_sk#615)
    int left_nrow = tbl_JOIN_INNER_TD_10868964_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10643877_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9143848_key_leftMajor, SW_JOIN_INNER_TD_9143848_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10868964_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_10868964_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9143848_key_leftMajor keyA{_ws_web_page_sk741_k};
            int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_10868964_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_10868964_output.getInt32(i, 1);
            int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10868964_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9143848_payload_leftMajor payloadA{_ws_web_page_sk741, _ws_ext_sales_price752, _ws_net_profit762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10643877_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_10643877_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9143848_key_leftMajor{_wp_web_page_sk615_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_profit762 = (it->second)._ws_net_profit762;
                int32_t _wp_web_page_sk615 = tbl_Filter_TD_10643877_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9143848_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_9143848_output.setInt32(r, 1, _ws_net_profit762);
                tbl_JOIN_INNER_TD_9143848_output.setInt32(r, 2, _wp_web_page_sk615);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9143848_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9143848_key_rightMajor, SW_JOIN_INNER_TD_9143848_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10643877_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_10643877_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9143848_key_rightMajor keyA{_wp_web_page_sk615_k};
            int32_t _wp_web_page_sk615 = tbl_Filter_TD_10643877_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9143848_payload_rightMajor payloadA{_wp_web_page_sk615};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10868964_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_10868964_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9143848_key_rightMajor{_ws_web_page_sk741_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wp_web_page_sk615 = (it->second)._wp_web_page_sk615;
                int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_10868964_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_10868964_output.getInt32(i, 1);
                int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_10868964_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9143848_output.setInt32(r, 2, _wp_web_page_sk615);
                tbl_JOIN_INNER_TD_9143848_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_9143848_output.setInt32(r, 1, _ws_net_profit762);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9143848_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9143848_output #Row: " << tbl_JOIN_INNER_TD_9143848_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9321756_key_leftMajor {
    int32_t _cr_returned_date_sk1023;
    bool operator==(const SW_JOIN_INNER_TD_9321756_key_leftMajor& other) const {
        return ((_cr_returned_date_sk1023 == other._cr_returned_date_sk1023));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9321756_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9321756_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cr_returned_date_sk1023));
    }
};
}
struct SW_JOIN_INNER_TD_9321756_payload_leftMajor {
    int32_t _cr_returned_date_sk1023;
    int32_t _cr_call_center_sk1034;
    int32_t _cr_return_amount1041;
    int32_t _cr_net_loss1049;
};
struct SW_JOIN_INNER_TD_9321756_key_rightMajor {
    int32_t _d_date_sk36989;
    bool operator==(const SW_JOIN_INNER_TD_9321756_key_rightMajor& other) const {
        return ((_d_date_sk36989 == other._d_date_sk36989));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9321756_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9321756_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk36989));
    }
};
}
struct SW_JOIN_INNER_TD_9321756_payload_rightMajor {
    int32_t _d_date_sk36989;
};
void SW_JOIN_INNER_TD_9321756(Table &tbl_Filter_TD_10172532_output, Table &tbl_Filter_TD_10996134_output, Table &tbl_JOIN_INNER_TD_9321756_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cr_returned_date_sk#1023 = d_date_sk#36989))
    // Left Table: ListBuffer(cr_returned_date_sk#1023, cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    // Right Table: ListBuffer(d_date_sk#36989)
    // Output Table: ListBuffer(cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    int left_nrow = tbl_Filter_TD_10172532_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10996134_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9321756_key_leftMajor, SW_JOIN_INNER_TD_9321756_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10172532_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_Filter_TD_10172532_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9321756_key_leftMajor keyA{_cr_returned_date_sk1023_k};
            int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_10172532_output.getInt32(i, 0);
            int32_t _cr_call_center_sk1034 = tbl_Filter_TD_10172532_output.getInt32(i, 1);
            int32_t _cr_return_amount1041 = tbl_Filter_TD_10172532_output.getInt32(i, 2);
            int32_t _cr_net_loss1049 = tbl_Filter_TD_10172532_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9321756_payload_leftMajor payloadA{_cr_returned_date_sk1023, _cr_call_center_sk1034, _cr_return_amount1041, _cr_net_loss1049};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10996134_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk36989_k = tbl_Filter_TD_10996134_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9321756_key_leftMajor{_d_date_sk36989_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cr_returned_date_sk1023 = (it->second)._cr_returned_date_sk1023;
                int32_t _cr_call_center_sk1034 = (it->second)._cr_call_center_sk1034;
                int32_t _cr_return_amount1041 = (it->second)._cr_return_amount1041;
                int32_t _cr_net_loss1049 = (it->second)._cr_net_loss1049;
                int32_t _d_date_sk36989 = tbl_Filter_TD_10996134_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9321756_output.setInt32(r, 0, _cr_call_center_sk1034);
                tbl_JOIN_INNER_TD_9321756_output.setInt32(r, 1, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_9321756_output.setInt32(r, 2, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9321756_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9321756_key_rightMajor, SW_JOIN_INNER_TD_9321756_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10996134_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk36989_k = tbl_Filter_TD_10996134_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9321756_key_rightMajor keyA{_d_date_sk36989_k};
            int32_t _d_date_sk36989 = tbl_Filter_TD_10996134_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9321756_payload_rightMajor payloadA{_d_date_sk36989};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10172532_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cr_returned_date_sk1023_k = tbl_Filter_TD_10172532_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9321756_key_rightMajor{_cr_returned_date_sk1023_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk36989 = (it->second)._d_date_sk36989;
                int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_10172532_output.getInt32(i, 0);
                int32_t _cr_call_center_sk1034 = tbl_Filter_TD_10172532_output.getInt32(i, 1);
                int32_t _cr_return_amount1041 = tbl_Filter_TD_10172532_output.getInt32(i, 2);
                int32_t _cr_net_loss1049 = tbl_Filter_TD_10172532_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9321756_output.setInt32(r, 0, _cr_call_center_sk1034);
                tbl_JOIN_INNER_TD_9321756_output.setInt32(r, 1, _cr_return_amount1041);
                tbl_JOIN_INNER_TD_9321756_output.setInt32(r, 2, _cr_net_loss1049);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9321756_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9321756_output #Row: " << tbl_JOIN_INNER_TD_9321756_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9360037_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_9360037_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9360037_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9360037_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_9360037_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_call_center_sk1115;
    int32_t _cs_ext_sales_price1127;
    int32_t _cs_net_profit1137;
};
struct SW_JOIN_INNER_TD_9360037_key_rightMajor {
    int32_t _d_date_sk36961;
    bool operator==(const SW_JOIN_INNER_TD_9360037_key_rightMajor& other) const {
        return ((_d_date_sk36961 == other._d_date_sk36961));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9360037_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9360037_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk36961));
    }
};
}
struct SW_JOIN_INNER_TD_9360037_payload_rightMajor {
    int32_t _d_date_sk36961;
};
void SW_JOIN_INNER_TD_9360037(Table &tbl_Filter_TD_10351614_output, Table &tbl_Filter_TD_10890291_output, Table &tbl_JOIN_INNER_TD_9360037_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#36961))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Right Table: ListBuffer(d_date_sk#36961)
    // Output Table: ListBuffer(cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    int left_nrow = tbl_Filter_TD_10351614_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10890291_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9360037_key_leftMajor, SW_JOIN_INNER_TD_9360037_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10351614_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_10351614_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9360037_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10351614_output.getInt32(i, 0);
            int32_t _cs_call_center_sk1115 = tbl_Filter_TD_10351614_output.getInt32(i, 1);
            int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_10351614_output.getInt32(i, 2);
            int32_t _cs_net_profit1137 = tbl_Filter_TD_10351614_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9360037_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_call_center_sk1115, _cs_ext_sales_price1127, _cs_net_profit1137};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10890291_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk36961_k = tbl_Filter_TD_10890291_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9360037_key_leftMajor{_d_date_sk36961_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_call_center_sk1115 = (it->second)._cs_call_center_sk1115;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _cs_net_profit1137 = (it->second)._cs_net_profit1137;
                int32_t _d_date_sk36961 = tbl_Filter_TD_10890291_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9360037_output.setInt32(r, 0, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_9360037_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_9360037_output.setInt32(r, 2, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9360037_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9360037_key_rightMajor, SW_JOIN_INNER_TD_9360037_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10890291_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk36961_k = tbl_Filter_TD_10890291_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9360037_key_rightMajor keyA{_d_date_sk36961_k};
            int32_t _d_date_sk36961 = tbl_Filter_TD_10890291_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9360037_payload_rightMajor payloadA{_d_date_sk36961};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10351614_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_Filter_TD_10351614_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9360037_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk36961 = (it->second)._d_date_sk36961;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10351614_output.getInt32(i, 0);
                int32_t _cs_call_center_sk1115 = tbl_Filter_TD_10351614_output.getInt32(i, 1);
                int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_10351614_output.getInt32(i, 2);
                int32_t _cs_net_profit1137 = tbl_Filter_TD_10351614_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9360037_output.setInt32(r, 0, _cs_call_center_sk1115);
                tbl_JOIN_INNER_TD_9360037_output.setInt32(r, 1, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_9360037_output.setInt32(r, 2, _cs_net_profit1137);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9360037_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9360037_output #Row: " << tbl_JOIN_INNER_TD_9360037_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_97289_key_leftMajor {
    int32_t _sr_store_sk676;
    bool operator==(const SW_JOIN_INNER_TD_97289_key_leftMajor& other) const {
        return ((_sr_store_sk676 == other._sr_store_sk676));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_97289_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_97289_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sr_store_sk676));
    }
};
}
struct SW_JOIN_INNER_TD_97289_payload_leftMajor {
    int32_t _sr_store_sk676;
    int32_t _sr_return_amt680;
    int32_t _sr_net_loss688;
};
struct SW_JOIN_INNER_TD_97289_key_rightMajor {
    int32_t _s_store_sk36932;
    bool operator==(const SW_JOIN_INNER_TD_97289_key_rightMajor& other) const {
        return ((_s_store_sk36932 == other._s_store_sk36932));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_97289_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_97289_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk36932));
    }
};
}
struct SW_JOIN_INNER_TD_97289_payload_rightMajor {
    int32_t _s_store_sk36932;
};
void SW_JOIN_INNER_TD_97289(Table &tbl_JOIN_INNER_TD_10914634_output, Table &tbl_Filter_TD_10411018_output, Table &tbl_JOIN_INNER_TD_97289_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sr_store_sk#676 = s_store_sk#36932))
    // Left Table: ListBuffer(sr_store_sk#676, sr_return_amt#680, sr_net_loss#688)
    // Right Table: ListBuffer(s_store_sk#36932)
    // Output Table: ListBuffer(sr_return_amt#680, sr_net_loss#688, s_store_sk#36932)
    int left_nrow = tbl_JOIN_INNER_TD_10914634_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10411018_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_97289_key_leftMajor, SW_JOIN_INNER_TD_97289_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10914634_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sr_store_sk676_k = tbl_JOIN_INNER_TD_10914634_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_97289_key_leftMajor keyA{_sr_store_sk676_k};
            int32_t _sr_store_sk676 = tbl_JOIN_INNER_TD_10914634_output.getInt32(i, 0);
            int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10914634_output.getInt32(i, 1);
            int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10914634_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_97289_payload_leftMajor payloadA{_sr_store_sk676, _sr_return_amt680, _sr_net_loss688};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10411018_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk36932_k = tbl_Filter_TD_10411018_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_97289_key_leftMajor{_s_store_sk36932_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sr_store_sk676 = (it->second)._sr_store_sk676;
                int32_t _sr_return_amt680 = (it->second)._sr_return_amt680;
                int32_t _sr_net_loss688 = (it->second)._sr_net_loss688;
                int32_t _s_store_sk36932 = tbl_Filter_TD_10411018_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_97289_output.setInt32(r, 0, _sr_return_amt680);
                tbl_JOIN_INNER_TD_97289_output.setInt32(r, 1, _sr_net_loss688);
                tbl_JOIN_INNER_TD_97289_output.setInt32(r, 2, _s_store_sk36932);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_97289_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_97289_key_rightMajor, SW_JOIN_INNER_TD_97289_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10411018_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk36932_k = tbl_Filter_TD_10411018_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_97289_key_rightMajor keyA{_s_store_sk36932_k};
            int32_t _s_store_sk36932 = tbl_Filter_TD_10411018_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_97289_payload_rightMajor payloadA{_s_store_sk36932};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10914634_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sr_store_sk676_k = tbl_JOIN_INNER_TD_10914634_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_97289_key_rightMajor{_sr_store_sk676_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk36932 = (it->second)._s_store_sk36932;
                int32_t _sr_store_sk676 = tbl_JOIN_INNER_TD_10914634_output.getInt32(i, 0);
                int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_10914634_output.getInt32(i, 1);
                int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_10914634_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_97289_output.setInt32(r, 2, _s_store_sk36932);
                tbl_JOIN_INNER_TD_97289_output.setInt32(r, 0, _sr_return_amt680);
                tbl_JOIN_INNER_TD_97289_output.setInt32(r, 1, _sr_net_loss688);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_97289_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_97289_output #Row: " << tbl_JOIN_INNER_TD_97289_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9581032_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_9581032_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9581032_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9581032_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_9581032_payload_leftMajor {
    int32_t _ss_store_sk1213;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_9581032_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_9581032_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9581032_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9581032_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_9581032_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_9581032(Table &tbl_JOIN_INNER_TD_10149163_output, Table &tbl_Filter_TD_1077998_output, Table &tbl_JOIN_INNER_TD_9581032_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_store_sk#1213, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, s_store_sk#378)
    int left_nrow = tbl_JOIN_INNER_TD_10149163_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1077998_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9581032_key_leftMajor, SW_JOIN_INNER_TD_9581032_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10149163_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_10149163_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9581032_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10149163_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10149163_output.getInt32(i, 1);
            int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10149163_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9581032_payload_leftMajor payloadA{_ss_store_sk1213, _ss_ext_sales_price1221, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1077998_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_1077998_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9581032_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _s_store_sk378 = tbl_Filter_TD_1077998_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9581032_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9581032_output.setInt32(r, 1, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_9581032_output.setInt32(r, 2, _s_store_sk378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9581032_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9581032_key_rightMajor, SW_JOIN_INNER_TD_9581032_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1077998_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_1077998_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9581032_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_1077998_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9581032_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10149163_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_10149163_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9581032_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_10149163_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10149163_output.getInt32(i, 1);
                int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_10149163_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9581032_output.setInt32(r, 2, _s_store_sk378);
                tbl_JOIN_INNER_TD_9581032_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_9581032_output.setInt32(r, 1, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9581032_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9581032_output #Row: " << tbl_JOIN_INNER_TD_9581032_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8699995_key;
struct SW_Aggregate_TD_8699995_payload {
    int32_t _returns36902_sum_0;
    int32_t _profit_loss36903_sum_1;
};
void SW_Aggregate_TD_8699995(Table &tbl_JOIN_INNER_TD_9902581_output, Table &tbl_Aggregate_TD_8699995_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(wp_web_page_sk#37073, MakeDecimal(sum(UnscaledValue(wr_return_amt#846)),17,2) AS returns#36902, MakeDecimal(sum(UnscaledValue(wr_net_loss#854)),17,2) AS profit_loss#36903)
    // Input: ListBuffer(wr_return_amt#846, wr_net_loss#854, wp_web_page_sk#37073)
    // Output: ListBuffer(wp_web_page_sk#37073, returns#36902, profit_loss#36903)
    std::unordered_map<SW_Aggregate_TD_8699995_key, SW_Aggregate_TD_8699995_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9902581_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_return_amt846 = tbl_JOIN_INNER_TD_9902581_output.getInt32(i, 0);
        int32_t _wr_net_loss854 = tbl_JOIN_INNER_TD_9902581_output.getInt32(i, 1);
        int32_t _wp_web_page_sk37073 = tbl_JOIN_INNER_TD_9902581_output.getInt32(i, 2);
        SW_Aggregate_TD_8699995_key k = _wp_web_page_sk37073;
        int64_t _returns36902_sum_0 = _wr_return_amt846;
        int64_t _profit_loss36903_sum_1 = _wr_net_loss854;
        SW_Aggregate_TD_8699995_payload p{_returns36902_sum_0, _profit_loss36903_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._returns36902_sum_0 + _returns36902_sum_0;
            p._returns36902_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._profit_loss36903_sum_1 + _profit_loss36903_sum_1;
            p._profit_loss36903_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8699995_output.setInt32(r, 0, (it.first));
        int32_t _returns36902 = (it.second)._returns36902_sum_0;
        tbl_Aggregate_TD_8699995_output.setInt32(r, 1, _returns36902);
        int32_t _profit_loss36903 = (it.second)._profit_loss36903_sum_1;
        tbl_Aggregate_TD_8699995_output.setInt32(r, 2, _profit_loss36903);
        ++r;
    }
    tbl_Aggregate_TD_8699995_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8699995_output #Row: " << tbl_Aggregate_TD_8699995_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_845339_key;
struct SW_Aggregate_TD_845339_payload {
    int32_t _sales36900_sum_0;
    int32_t _profit36901_sum_1;
};
void SW_Aggregate_TD_845339(Table &tbl_JOIN_INNER_TD_9143848_output, Table &tbl_Aggregate_TD_845339_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(wp_web_page_sk#615, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS sales#36900, MakeDecimal(sum(UnscaledValue(ws_net_profit#762)),17,2) AS profit#36901)
    // Input: ListBuffer(ws_ext_sales_price#752, ws_net_profit#762, wp_web_page_sk#615)
    // Output: ListBuffer(wp_web_page_sk#615, sales#36900, profit#36901)
    std::unordered_map<SW_Aggregate_TD_845339_key, SW_Aggregate_TD_845339_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9143848_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_9143848_output.getInt32(i, 0);
        int32_t _ws_net_profit762 = tbl_JOIN_INNER_TD_9143848_output.getInt32(i, 1);
        int32_t _wp_web_page_sk615 = tbl_JOIN_INNER_TD_9143848_output.getInt32(i, 2);
        SW_Aggregate_TD_845339_key k = _wp_web_page_sk615;
        int64_t _sales36900_sum_0 = _ws_ext_sales_price752;
        int64_t _profit36901_sum_1 = _ws_net_profit762;
        SW_Aggregate_TD_845339_payload p{_sales36900_sum_0, _profit36901_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales36900_sum_0 + _sales36900_sum_0;
            p._sales36900_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._profit36901_sum_1 + _profit36901_sum_1;
            p._profit36901_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_845339_output.setInt32(r, 0, (it.first));
        int32_t _sales36900 = (it.second)._sales36900_sum_0;
        tbl_Aggregate_TD_845339_output.setInt32(r, 1, _sales36900);
        int32_t _profit36901 = (it.second)._profit36901_sum_1;
        tbl_Aggregate_TD_845339_output.setInt32(r, 2, _profit36901);
        ++r;
    }
    tbl_Aggregate_TD_845339_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_845339_output #Row: " << tbl_Aggregate_TD_845339_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_824008_key;
struct SW_Aggregate_TD_824008_payload {
    int32_t _returns36898_sum_0;
    int32_t _profit_loss36899_sum_1;
};
void SW_Aggregate_TD_824008(Table &tbl_JOIN_INNER_TD_9321756_output, Table &tbl_Aggregate_TD_824008_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cr_call_center_sk#1034, MakeDecimal(sum(UnscaledValue(cr_return_amount#1041)),17,2) AS returns#36898, MakeDecimal(sum(UnscaledValue(cr_net_loss#1049)),17,2) AS profit_loss#36899)
    // Input: ListBuffer(cr_call_center_sk#1034, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(returns#36898, profit_loss#36899)
    std::unordered_map<SW_Aggregate_TD_824008_key, SW_Aggregate_TD_824008_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9321756_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_call_center_sk1034 = tbl_JOIN_INNER_TD_9321756_output.getInt32(i, 0);
        int32_t _cr_return_amount1041 = tbl_JOIN_INNER_TD_9321756_output.getInt32(i, 1);
        int32_t _cr_net_loss1049 = tbl_JOIN_INNER_TD_9321756_output.getInt32(i, 2);
        SW_Aggregate_TD_824008_key k = _cr_call_center_sk1034;
        int64_t _returns36898_sum_0 = _cr_return_amount1041;
        int64_t _profit_loss36899_sum_1 = _cr_net_loss1049;
        SW_Aggregate_TD_824008_payload p{_returns36898_sum_0, _profit_loss36899_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._returns36898_sum_0 + _returns36898_sum_0;
            p._returns36898_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._profit_loss36899_sum_1 + _profit_loss36899_sum_1;
            p._profit_loss36899_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cr_call_center_sk1034 not required in the output table
        int32_t _returns36898 = (it.second)._returns36898_sum_0;
        tbl_Aggregate_TD_824008_output.setInt32(r, 0, _returns36898);
        int32_t _profit_loss36899 = (it.second)._profit_loss36899_sum_1;
        tbl_Aggregate_TD_824008_output.setInt32(r, 1, _profit_loss36899);
        ++r;
    }
    tbl_Aggregate_TD_824008_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_824008_output #Row: " << tbl_Aggregate_TD_824008_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8629408_key;
struct SW_Aggregate_TD_8629408_payload {
    int32_t _sales36896_sum_0;
    int32_t _profit36897_sum_1;
};
void SW_Aggregate_TD_8629408(Table &tbl_JOIN_INNER_TD_9360037_output, Table &tbl_Aggregate_TD_8629408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cs_call_center_sk#1115, MakeDecimal(sum(UnscaledValue(cs_ext_sales_price#1127)),17,2) AS sales#36896, MakeDecimal(sum(UnscaledValue(cs_net_profit#1137)),17,2) AS profit#36897)
    // Input: ListBuffer(cs_call_center_sk#1115, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(cs_call_center_sk#1115, sales#36896, profit#36897)
    std::unordered_map<SW_Aggregate_TD_8629408_key, SW_Aggregate_TD_8629408_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9360037_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_call_center_sk1115 = tbl_JOIN_INNER_TD_9360037_output.getInt32(i, 0);
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_9360037_output.getInt32(i, 1);
        int32_t _cs_net_profit1137 = tbl_JOIN_INNER_TD_9360037_output.getInt32(i, 2);
        SW_Aggregate_TD_8629408_key k = _cs_call_center_sk1115;
        int64_t _sales36896_sum_0 = _cs_ext_sales_price1127;
        int64_t _profit36897_sum_1 = _cs_net_profit1137;
        SW_Aggregate_TD_8629408_payload p{_sales36896_sum_0, _profit36897_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales36896_sum_0 + _sales36896_sum_0;
            p._sales36896_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._profit36897_sum_1 + _profit36897_sum_1;
            p._profit36897_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8629408_output.setInt32(r, 0, (it.first));
        int32_t _sales36896 = (it.second)._sales36896_sum_0;
        tbl_Aggregate_TD_8629408_output.setInt32(r, 1, _sales36896);
        int32_t _profit36897 = (it.second)._profit36897_sum_1;
        tbl_Aggregate_TD_8629408_output.setInt32(r, 2, _profit36897);
        ++r;
    }
    tbl_Aggregate_TD_8629408_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8629408_output #Row: " << tbl_Aggregate_TD_8629408_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8163500_key;
struct SW_Aggregate_TD_8163500_payload {
    int32_t _returns36894_sum_0;
    int32_t _profit_loss36895_sum_1;
};
void SW_Aggregate_TD_8163500(Table &tbl_JOIN_INNER_TD_97289_output, Table &tbl_Aggregate_TD_8163500_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_sk#36932, MakeDecimal(sum(UnscaledValue(sr_return_amt#680)),17,2) AS returns#36894, MakeDecimal(sum(UnscaledValue(sr_net_loss#688)),17,2) AS profit_loss#36895)
    // Input: ListBuffer(sr_return_amt#680, sr_net_loss#688, s_store_sk#36932)
    // Output: ListBuffer(s_store_sk#36932, returns#36894, profit_loss#36895)
    std::unordered_map<SW_Aggregate_TD_8163500_key, SW_Aggregate_TD_8163500_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_97289_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_return_amt680 = tbl_JOIN_INNER_TD_97289_output.getInt32(i, 0);
        int32_t _sr_net_loss688 = tbl_JOIN_INNER_TD_97289_output.getInt32(i, 1);
        int32_t _s_store_sk36932 = tbl_JOIN_INNER_TD_97289_output.getInt32(i, 2);
        SW_Aggregate_TD_8163500_key k = _s_store_sk36932;
        int64_t _returns36894_sum_0 = _sr_return_amt680;
        int64_t _profit_loss36895_sum_1 = _sr_net_loss688;
        SW_Aggregate_TD_8163500_payload p{_returns36894_sum_0, _profit_loss36895_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._returns36894_sum_0 + _returns36894_sum_0;
            p._returns36894_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._profit_loss36895_sum_1 + _profit_loss36895_sum_1;
            p._profit_loss36895_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8163500_output.setInt32(r, 0, (it.first));
        int32_t _returns36894 = (it.second)._returns36894_sum_0;
        tbl_Aggregate_TD_8163500_output.setInt32(r, 1, _returns36894);
        int32_t _profit_loss36895 = (it.second)._profit_loss36895_sum_1;
        tbl_Aggregate_TD_8163500_output.setInt32(r, 2, _profit_loss36895);
        ++r;
    }
    tbl_Aggregate_TD_8163500_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8163500_output #Row: " << tbl_Aggregate_TD_8163500_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_8266797_key;
struct SW_Aggregate_TD_8266797_payload {
    int32_t _sales36892_sum_0;
    int32_t _profit36893_sum_1;
};
void SW_Aggregate_TD_8266797(Table &tbl_JOIN_INNER_TD_9581032_output, Table &tbl_Aggregate_TD_8266797_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_sk#378, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS sales#36892, MakeDecimal(sum(UnscaledValue(ss_net_profit#1228)),17,2) AS profit#36893)
    // Input: ListBuffer(ss_ext_sales_price#1221, ss_net_profit#1228, s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378, sales#36892, profit#36893)
    std::unordered_map<SW_Aggregate_TD_8266797_key, SW_Aggregate_TD_8266797_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9581032_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9581032_output.getInt32(i, 0);
        int32_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_9581032_output.getInt32(i, 1);
        int32_t _s_store_sk378 = tbl_JOIN_INNER_TD_9581032_output.getInt32(i, 2);
        SW_Aggregate_TD_8266797_key k = _s_store_sk378;
        int64_t _sales36892_sum_0 = _ss_ext_sales_price1221;
        int64_t _profit36893_sum_1 = _ss_net_profit1228;
        SW_Aggregate_TD_8266797_payload p{_sales36892_sum_0, _profit36893_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales36892_sum_0 + _sales36892_sum_0;
            p._sales36892_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._profit36893_sum_1 + _profit36893_sum_1;
            p._profit36893_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8266797_output.setInt32(r, 0, (it.first));
        int32_t _sales36892 = (it.second)._sales36892_sum_0;
        tbl_Aggregate_TD_8266797_output.setInt32(r, 1, _sales36892);
        int32_t _profit36893 = (it.second)._profit36893_sum_1;
        tbl_Aggregate_TD_8266797_output.setInt32(r, 2, _profit36893);
        ++r;
    }
    tbl_Aggregate_TD_8266797_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8266797_output #Row: " << tbl_Aggregate_TD_8266797_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_7182339_key {
    int32_t _wp_web_page_sk37073;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_7182339_key& other) const {
        return ((_wp_web_page_sk37073 == other._wp_web_page_sk37073));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_7182339_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_7182339_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk37073));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_7182339_payload {
    int32_t _wp_web_page_sk37073;
    int32_t _returns36902;
    int32_t _profit_loss36903;
};
void SW_JOIN_LEFTOUTER_TD_7182339(Table &tbl_Aggregate_TD_845339_output, Table &tbl_Aggregate_TD_8699995_output, Table &tbl_JOIN_LEFTOUTER_TD_7182339_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((wp_web_page_sk#615 = wp_web_page_sk#37073))
    // Left Table: ListBuffer(wp_web_page_sk#615, sales#36900, profit#36901)
    // Right Table: ListBuffer(wp_web_page_sk#37073, returns#36902, profit_loss#36903)
    // Output Table: ListBuffer(sales#36900, returns#36902, profit#36901, profit_loss#36903, wp_web_page_sk#615)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_7182339_key, SW_JOIN_LEFTOUTER_TD_7182339_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_8699995_output.getNumRow();
    int nrow2 = tbl_Aggregate_TD_845339_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_web_page_sk37073_k = tbl_Aggregate_TD_8699995_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_7182339_key keyA{_wp_web_page_sk37073_k};
        int32_t _wp_web_page_sk37073 = tbl_Aggregate_TD_8699995_output.getInt32(i, 0);
        int32_t _returns36902 = tbl_Aggregate_TD_8699995_output.getInt32(i, 1);
        int32_t _profit_loss36903 = tbl_Aggregate_TD_8699995_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_7182339_payload payloadA{_wp_web_page_sk37073, _returns36902, _profit_loss36903};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _wp_web_page_sk615_k = tbl_Aggregate_TD_845339_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_7182339_key{_wp_web_page_sk615_k});
        int32_t _wp_web_page_sk615 = tbl_Aggregate_TD_845339_output.getInt32(i, 0);
        int32_t _sales36900 = tbl_Aggregate_TD_845339_output.getInt32(i, 1);
        int32_t _profit36901 = tbl_Aggregate_TD_845339_output.getInt32(i, 2);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_7182339_key{_wp_web_page_sk615_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _wp_web_page_sk37073 = (it_it->second)._wp_web_page_sk37073;
                int32_t _returns36902 = (it_it->second)._returns36902;
                int32_t _profit_loss36903 = (it_it->second)._profit_loss36903;
                tbl_JOIN_LEFTOUTER_TD_7182339_output.setInt32(r, 1, _returns36902);
                tbl_JOIN_LEFTOUTER_TD_7182339_output.setInt32(r, 3, _profit_loss36903);
                tbl_JOIN_LEFTOUTER_TD_7182339_output.setInt32(r, 4, _wp_web_page_sk615);
                tbl_JOIN_LEFTOUTER_TD_7182339_output.setInt32(r, 0, _sales36900);
                tbl_JOIN_LEFTOUTER_TD_7182339_output.setInt32(r, 2, _profit36901);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_7182339_output.setInt32(r, 4, _wp_web_page_sk615);
            tbl_JOIN_LEFTOUTER_TD_7182339_output.setInt32(r, 0, _sales36900);
            tbl_JOIN_LEFTOUTER_TD_7182339_output.setInt32(r, 2, _profit36901);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_7182339_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_7182339_output #Row: " << tbl_JOIN_LEFTOUTER_TD_7182339_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_7354027(Table &tbl_Aggregate_TD_8629408_output, Table &tbl_Aggregate_TD_824008_output, Table &tbl_JOIN_CROSS_TD_7354027_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(cs_call_center_sk#1115, sales#36896, profit#36897)
    // Right Table: ListBuffer(returns#36898, profit_loss#36899)
    // Output Table: ListBuffer(sales#36896, returns#36898, profit#36897, profit_loss#36899, cs_call_center_sk#1115)
    int left_nrow = tbl_Aggregate_TD_8629408_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_824008_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_7354027_output.setInt32(r, 0, tbl_Aggregate_TD_8629408_output.getInt32(i, 0));
            tbl_JOIN_CROSS_TD_7354027_output.setInt32(r, 1, tbl_Aggregate_TD_8629408_output.getInt32(i, 1));
            tbl_JOIN_CROSS_TD_7354027_output.setInt32(r, 2, tbl_Aggregate_TD_8629408_output.getInt32(i, 2));
            tbl_JOIN_CROSS_TD_7354027_output.setInt32(r, 3, tbl_Aggregate_TD_824008_output.getInt32(j, 0));
            tbl_JOIN_CROSS_TD_7354027_output.setInt32(r, 4, tbl_Aggregate_TD_824008_output.getInt32(j, 1));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_7354027_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_7354027_output #Row: " << tbl_JOIN_CROSS_TD_7354027_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_7963559_key {
    int32_t _s_store_sk36932;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_7963559_key& other) const {
        return ((_s_store_sk36932 == other._s_store_sk36932));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_7963559_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_7963559_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk36932));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_7963559_payload {
    int32_t _s_store_sk36932;
    int32_t _returns36894;
    int32_t _profit_loss36895;
};
void SW_JOIN_LEFTOUTER_TD_7963559(Table &tbl_Aggregate_TD_8266797_output, Table &tbl_Aggregate_TD_8163500_output, Table &tbl_JOIN_LEFTOUTER_TD_7963559_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer((s_store_sk#378 = s_store_sk#36932))
    // Left Table: ListBuffer(s_store_sk#378, sales#36892, profit#36893)
    // Right Table: ListBuffer(s_store_sk#36932, returns#36894, profit_loss#36895)
    // Output Table: ListBuffer(sales#36892, returns#36894, profit#36893, profit_loss#36895, s_store_sk#378)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_7963559_key, SW_JOIN_LEFTOUTER_TD_7963559_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_8163500_output.getNumRow();
    int nrow2 = tbl_Aggregate_TD_8266797_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk36932_k = tbl_Aggregate_TD_8163500_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_7963559_key keyA{_s_store_sk36932_k};
        int32_t _s_store_sk36932 = tbl_Aggregate_TD_8163500_output.getInt32(i, 0);
        int32_t _returns36894 = tbl_Aggregate_TD_8163500_output.getInt32(i, 1);
        int32_t _profit_loss36895 = tbl_Aggregate_TD_8163500_output.getInt32(i, 2);
        SW_JOIN_LEFTOUTER_TD_7963559_payload payloadA{_s_store_sk36932, _returns36894, _profit_loss36895};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int32_t _s_store_sk378_k = tbl_Aggregate_TD_8266797_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_7963559_key{_s_store_sk378_k});
        int32_t _s_store_sk378 = tbl_Aggregate_TD_8266797_output.getInt32(i, 0);
        int32_t _sales36892 = tbl_Aggregate_TD_8266797_output.getInt32(i, 1);
        int32_t _profit36893 = tbl_Aggregate_TD_8266797_output.getInt32(i, 2);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_7963559_key{_s_store_sk378_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _s_store_sk36932 = (it_it->second)._s_store_sk36932;
                int32_t _returns36894 = (it_it->second)._returns36894;
                int32_t _profit_loss36895 = (it_it->second)._profit_loss36895;
                tbl_JOIN_LEFTOUTER_TD_7963559_output.setInt32(r, 1, _returns36894);
                tbl_JOIN_LEFTOUTER_TD_7963559_output.setInt32(r, 3, _profit_loss36895);
                tbl_JOIN_LEFTOUTER_TD_7963559_output.setInt32(r, 4, _s_store_sk378);
                tbl_JOIN_LEFTOUTER_TD_7963559_output.setInt32(r, 0, _sales36892);
                tbl_JOIN_LEFTOUTER_TD_7963559_output.setInt32(r, 2, _profit36893);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_7963559_output.setInt32(r, 4, _s_store_sk378);
            tbl_JOIN_LEFTOUTER_TD_7963559_output.setInt32(r, 0, _sales36892);
            tbl_JOIN_LEFTOUTER_TD_7963559_output.setInt32(r, 2, _profit36893);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_7963559_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_7963559_output #Row: " << tbl_JOIN_LEFTOUTER_TD_7963559_output.getNumRow() << std::endl;
}

void SW_Project_TD_6288007(Table &tbl_JOIN_LEFTOUTER_TD_7182339_output, Table &tbl_Project_TD_6288007_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(coalesce(returns#36902, 0.00) AS returns#36887, CheckOverflow((promote_precision(cast(profit#36901 as decimal(18,2))) - promote_precision(cast(coalesce(profit_loss#36903, 0.00) as decimal(18,2)))), DecimalType(18,2), true) AS profit#36888, web channel AS channel#37442, wp_web_page_sk#615 AS id#37443)
    // Input: ListBuffer(sales#36900, returns#36902, profit#36901, profit_loss#36903, wp_web_page_sk#615)
    // Output: ListBuffer(sales#36900, returns#36887, profit#36888, channel#37442, id#37443)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_7182339_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales36900 = tbl_JOIN_LEFTOUTER_TD_7182339_output.getInt32(i, 0);
        int32_t _returns36902 = tbl_JOIN_LEFTOUTER_TD_7182339_output.getInt32(i, 1);
        int32_t _profit36901 = tbl_JOIN_LEFTOUTER_TD_7182339_output.getInt32(i, 2);
        int32_t _profit_loss36903 = tbl_JOIN_LEFTOUTER_TD_7182339_output.getInt32(i, 3);
        int32_t _wp_web_page_sk615 = tbl_JOIN_LEFTOUTER_TD_7182339_output.getInt32(i, 4);
        int32_t _returns36887 = _returns36902 != 0 ? _returns36902 : 0.00;
        tbl_Project_TD_6288007_output.setInt32(i, 1, _returns36887);
        int32_t _profit36888 = (_profit36901 - _profit_loss36903 != 0 ? _profit_loss36903 : 0.00);
        tbl_Project_TD_6288007_output.setInt32(i, 2, _profit36888);
        std::string _channel37442_str = "web channel";
        std::array<char, TPCDS_READ_MAX + 1> _channel37442{};
        memcpy(_channel37442.data(), _channel37442_str.data(), (_channel37442_str).length());
        tbl_Project_TD_6288007_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _channel37442);
        int32_t _id37443 = _wp_web_page_sk615;
        tbl_Project_TD_6288007_output.setInt32(i, 4, _id37443);
        tbl_Project_TD_6288007_output.setInt32(i, 0, _sales36900);
    }
    tbl_Project_TD_6288007_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6288007_output #Row: " << tbl_Project_TD_6288007_output.getNumRow() << std::endl;
}

void SW_Project_TD_6956181(Table &tbl_JOIN_CROSS_TD_7354027_output, Table &tbl_Project_TD_6956181_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(profit#36897 as decimal(18,2))) - promote_precision(cast(profit_loss#36899 as decimal(18,2)))), DecimalType(18,2), true) AS profit#36884, catalog channel AS channel#37440, cs_call_center_sk#1115 AS id#37441)
    // Input: ListBuffer(sales#36896, returns#36898, profit#36897, profit_loss#36899, cs_call_center_sk#1115)
    // Output: ListBuffer(sales#36896, returns#36898, profit#36884, channel#37440, id#37441)
    int nrow1 = tbl_JOIN_CROSS_TD_7354027_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales36896 = tbl_JOIN_CROSS_TD_7354027_output.getInt32(i, 0);
        int32_t _returns36898 = tbl_JOIN_CROSS_TD_7354027_output.getInt32(i, 1);
        int32_t _profit36897 = tbl_JOIN_CROSS_TD_7354027_output.getInt32(i, 2);
        int32_t _profit_loss36899 = tbl_JOIN_CROSS_TD_7354027_output.getInt32(i, 3);
        int32_t _cs_call_center_sk1115 = tbl_JOIN_CROSS_TD_7354027_output.getInt32(i, 4);
        int32_t _profit36884 = (_profit36897 - _profit_loss36899);
        tbl_Project_TD_6956181_output.setInt32(i, 2, _profit36884);
        std::string _channel37440_str = "catalog channel";
        std::array<char, TPCDS_READ_MAX + 1> _channel37440{};
        memcpy(_channel37440.data(), _channel37440_str.data(), (_channel37440_str).length());
        tbl_Project_TD_6956181_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _channel37440);
        int32_t _id37441 = _cs_call_center_sk1115;
        tbl_Project_TD_6956181_output.setInt32(i, 4, _id37441);
        tbl_Project_TD_6956181_output.setInt32(i, 0, _sales36896);
        tbl_Project_TD_6956181_output.setInt32(i, 1, _returns36898);
    }
    tbl_Project_TD_6956181_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6956181_output #Row: " << tbl_Project_TD_6956181_output.getNumRow() << std::endl;
}

void SW_Project_TD_6116365(Table &tbl_JOIN_LEFTOUTER_TD_7963559_output, Table &tbl_Project_TD_6116365_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(coalesce(returns#36894, 0.00) AS returns#36880, CheckOverflow((promote_precision(cast(profit#36893 as decimal(18,2))) - promote_precision(cast(coalesce(profit_loss#36895, 0.00) as decimal(18,2)))), DecimalType(18,2), true) AS profit#36881, store channel AS channel#37102, s_store_sk#378 AS id#37103)
    // Input: ListBuffer(sales#36892, returns#36894, profit#36893, profit_loss#36895, s_store_sk#378)
    // Output: ListBuffer(sales#36892, returns#36880, profit#36881, channel#37102, id#37103)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_7963559_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales36892 = tbl_JOIN_LEFTOUTER_TD_7963559_output.getInt32(i, 0);
        int32_t _returns36894 = tbl_JOIN_LEFTOUTER_TD_7963559_output.getInt32(i, 1);
        int32_t _profit36893 = tbl_JOIN_LEFTOUTER_TD_7963559_output.getInt32(i, 2);
        int32_t _profit_loss36895 = tbl_JOIN_LEFTOUTER_TD_7963559_output.getInt32(i, 3);
        int32_t _s_store_sk378 = tbl_JOIN_LEFTOUTER_TD_7963559_output.getInt32(i, 4);
        int32_t _returns36880 = _returns36894 != 0 ? _returns36894 : 0.00;
        tbl_Project_TD_6116365_output.setInt32(i, 1, _returns36880);
        int32_t _profit36881 = (_profit36893 - _profit_loss36895 != 0 ? _profit_loss36895 : 0.00);
        tbl_Project_TD_6116365_output.setInt32(i, 2, _profit36881);
        std::string _channel37102_str = "store channel";
        std::array<char, TPCDS_READ_MAX + 1> _channel37102{};
        memcpy(_channel37102.data(), _channel37102_str.data(), (_channel37102_str).length());
        tbl_Project_TD_6116365_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 3, _channel37102);
        int32_t _id37103 = _s_store_sk378;
        tbl_Project_TD_6116365_output.setInt32(i, 4, _id37103);
        tbl_Project_TD_6116365_output.setInt32(i, 0, _sales36892);
    }
    tbl_Project_TD_6116365_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6116365_output #Row: " << tbl_Project_TD_6116365_output.getNumRow() << std::endl;
}

void SW_Union_TD_5633386(Table &tbl_Project_TD_6116365_output, Table &tbl_Project_TD_6956181_output, Table &tbl_Project_TD_6288007_output, Table &tbl_Union_TD_5633386_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#36892, returns#36880, profit#36881, channel#37102, id#37103)
    int r = 0;
    int row0 = tbl_Project_TD_6116365_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_5633386_output.setInt32(r, 0, tbl_Project_TD_6116365_output.getInt32(i, 0));
        tbl_Union_TD_5633386_output.setInt32(r, 1, tbl_Project_TD_6116365_output.getInt32(i, 1));
        tbl_Union_TD_5633386_output.setInt32(r, 2, tbl_Project_TD_6116365_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel37102_n = tbl_Union_TD_5633386_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5633386_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel37102_n);
        tbl_Union_TD_5633386_output.setInt32(r, 4, tbl_Project_TD_6116365_output.getInt32(i, 4));
        ++r;
    }
    int row1 = tbl_Project_TD_6956181_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_5633386_output.setInt32(r, 0, tbl_Project_TD_6956181_output.getInt32(i, 0));
        tbl_Union_TD_5633386_output.setInt32(r, 1, tbl_Project_TD_6956181_output.getInt32(i, 1));
        tbl_Union_TD_5633386_output.setInt32(r, 2, tbl_Project_TD_6956181_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel37440_n = tbl_Union_TD_5633386_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5633386_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel37440_n);
        tbl_Union_TD_5633386_output.setInt32(r, 4, tbl_Project_TD_6956181_output.getInt32(i, 4));
        ++r;
    }
    int row2 = tbl_Project_TD_6288007_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_5633386_output.setInt32(r, 0, tbl_Project_TD_6288007_output.getInt32(i, 0));
        tbl_Union_TD_5633386_output.setInt32(r, 1, tbl_Project_TD_6288007_output.getInt32(i, 1));
        tbl_Union_TD_5633386_output.setInt32(r, 2, tbl_Project_TD_6288007_output.getInt32(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel37442_n = tbl_Union_TD_5633386_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5633386_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel37442_n);
        tbl_Union_TD_5633386_output.setInt32(r, 4, tbl_Project_TD_6288007_output.getInt32(i, 4));
        ++r;
    }
    tbl_Union_TD_5633386_output.setNumRow(r);
    std::cout << "tbl_Union_TD_5633386_output #Row: " << tbl_Union_TD_5633386_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4572228(Table &tbl_Union_TD_5633386_output, Table &tbl_Expand_TD_4572228_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(sales#36892, returns#36880, profit#36881, channel#37102, id#37103)
    // Output: ListBuffer(sales#36892, returns#36880, profit#36881, channel#37105, id#37106, spark_grouping_id#37104L)
    std::cout << "tbl_Expand_TD_4572228_output #Row: " << tbl_Expand_TD_4572228_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3995729_key {
    std::string _channel37105;
    int32_t _id37106;
    int64_t _spark_grouping_id37104L;
    bool operator==(const SW_Aggregate_TD_3995729_key& other) const { return (_channel37105 == other._channel37105) && (_id37106 == other._id37106) && (_spark_grouping_id37104L == other._spark_grouping_id37104L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3995729_key> {
    std::size_t operator() (const SW_Aggregate_TD_3995729_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel37105)) + (hash<int32_t>()(k._id37106)) + (hash<int64_t>()(k._spark_grouping_id37104L));
    }
};
}
struct SW_Aggregate_TD_3995729_payload {
    int32_t _sales36889_sum_0;
    int32_t _returns36890_sum_1;
    int32_t _profit36891_sum_2;
};
void SW_Aggregate_TD_3995729(Table &tbl_Expand_TD_4572228_output, Table &tbl_Aggregate_TD_3995729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#37105, id#37106, spark_grouping_id#37104L, sum(sales#36892) AS sales#36889, sum(returns#36880) AS returns#36890, sum(profit#36881) AS profit#36891)
    // Input: ListBuffer(sales#36892, returns#36880, profit#36881, channel#37105, id#37106, spark_grouping_id#37104L)
    // Output: ListBuffer(channel#37105, id#37106, sales#36889, returns#36890, profit#36891)
    std::unordered_map<SW_Aggregate_TD_3995729_key, SW_Aggregate_TD_3995729_payload> ht1;
    int nrow1 = tbl_Expand_TD_4572228_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales36892 = tbl_Expand_TD_4572228_output.getInt32(i, 0);
        int32_t _returns36880 = tbl_Expand_TD_4572228_output.getInt32(i, 1);
        int32_t _profit36881 = tbl_Expand_TD_4572228_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _channel37105 = tbl_Expand_TD_4572228_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _id37106 = tbl_Expand_TD_4572228_output.getInt32(i, 4);
        int64_t _spark_grouping_id37104L = tbl_Expand_TD_4572228_output.getInt64(i, 5);
        SW_Aggregate_TD_3995729_key k{std::string(_channel37105.data()), _id37106, _spark_grouping_id37104L};
        int64_t _sales36889_sum_0 = _sales36892;
        int64_t _returns36890_sum_1 = _returns36880;
        int64_t _profit36891_sum_2 = _profit36881;
        SW_Aggregate_TD_3995729_payload p{_sales36889_sum_0, _returns36890_sum_1, _profit36891_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales36889_sum_0 + _sales36889_sum_0;
            p._sales36889_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns36890_sum_1 + _returns36890_sum_1;
            p._returns36890_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit36891_sum_2 + _profit36891_sum_2;
            p._profit36891_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel37105{};
        memcpy(_channel37105.data(), ((it.first)._channel37105).data(), ((it.first)._channel37105).length());
        tbl_Aggregate_TD_3995729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel37105);
        tbl_Aggregate_TD_3995729_output.setInt32(r, 1, (it.first)._id37106);
        // _spark_grouping_id37104L not required in the output table
        int32_t _sales36889 = (it.second)._sales36889_sum_0;
        tbl_Aggregate_TD_3995729_output.setInt32(r, 2, _sales36889);
        int32_t _returns36890 = (it.second)._returns36890_sum_1;
        tbl_Aggregate_TD_3995729_output.setInt32(r, 3, _returns36890);
        int32_t _profit36891 = (it.second)._profit36891_sum_2;
        tbl_Aggregate_TD_3995729_output.setInt32(r, 4, _profit36891);
        ++r;
    }
    tbl_Aggregate_TD_3995729_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3995729_output #Row: " << tbl_Aggregate_TD_3995729_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2824057(Table &tbl_Aggregate_TD_3995729_output, Table &tbl_Sort_TD_2824057_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#37105 ASC NULLS FIRST, id#37106 ASC NULLS FIRST)
    // Input: ListBuffer(channel#37105, id#37106, sales#36889, returns#36890, profit#36891)
    // Output: ListBuffer(channel#37105, id#37106, sales#36889, returns#36890, profit#36891)
    struct SW_Sort_TD_2824057Row {
        std::string _channel37105;
        int32_t _id37106;
        int32_t _sales36889;
        int32_t _returns36890;
        int32_t _profit36891;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2824057Row& a, const SW_Sort_TD_2824057Row& b) const { return 
 (a._channel37105 < b._channel37105) || 
 ((a._channel37105 == b._channel37105) && (a._id37106 < b._id37106)); 
}
    }SW_Sort_TD_2824057_order; 

    int nrow1 = tbl_Aggregate_TD_3995729_output.getNumRow();
    std::vector<SW_Sort_TD_2824057Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel37105 = tbl_Aggregate_TD_3995729_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _id37106 = tbl_Aggregate_TD_3995729_output.getInt32(i, 1);
        int32_t _sales36889 = tbl_Aggregate_TD_3995729_output.getInt32(i, 2);
        int32_t _returns36890 = tbl_Aggregate_TD_3995729_output.getInt32(i, 3);
        int32_t _profit36891 = tbl_Aggregate_TD_3995729_output.getInt32(i, 4);
        SW_Sort_TD_2824057Row t = {std::string(_channel37105.data()),_id37106,_sales36889,_returns36890,_profit36891};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2824057_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel37105{};
        memcpy(_channel37105.data(), (it._channel37105).data(), (it._channel37105).length());
        tbl_Sort_TD_2824057_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel37105);
        tbl_Sort_TD_2824057_output.setInt32(r, 1, it._id37106);
        tbl_Sort_TD_2824057_output.setInt32(r, 2, it._sales36889);
        tbl_Sort_TD_2824057_output.setInt32(r, 3, it._returns36890);
        tbl_Sort_TD_2824057_output.setInt32(r, 4, it._profit36891);
        ++r;
    }
    tbl_Sort_TD_2824057_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2824057_output #Row: " << tbl_Sort_TD_2824057_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1490524(Table &tbl_Sort_TD_2824057_output, Table &tbl_LocalLimit_TD_1490524_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#37105, id#37106, sales#36889, returns#36890, profit#36891)
    // Output: ListBuffer(channel#37105, id#37106, sales#36889, returns#36890, profit#36891)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel37105_n = tbl_Sort_TD_2824057_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1490524_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel37105_n);
        tbl_LocalLimit_TD_1490524_output.setInt32(r, 1, tbl_Sort_TD_2824057_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1490524_output.setInt32(r, 2, tbl_Sort_TD_2824057_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1490524_output.setInt32(r, 3, tbl_Sort_TD_2824057_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1490524_output.setInt32(r, 4, tbl_Sort_TD_2824057_output.getInt32(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1490524_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1490524_output #Row: " << tbl_LocalLimit_TD_1490524_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0310628(Table &tbl_LocalLimit_TD_1490524_output, Table &tbl_GlobalLimit_TD_0310628_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#37105, id#37106, sales#36889, returns#36890, profit#36891)
    // Output: ListBuffer(channel#37105, id#37106, sales#36889, returns#36890, profit#36891)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel37105_n = tbl_LocalLimit_TD_1490524_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0310628_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel37105_n);
        tbl_GlobalLimit_TD_0310628_output.setInt32(r, 1, tbl_LocalLimit_TD_1490524_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0310628_output.setInt32(r, 2, tbl_LocalLimit_TD_1490524_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0310628_output.setInt32(r, 3, tbl_LocalLimit_TD_1490524_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0310628_output.setInt32(r, 4, tbl_LocalLimit_TD_1490524_output.getInt32(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_0310628_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0310628_output #Row: " << tbl_GlobalLimit_TD_0310628_output.getNumRow() << std::endl;
}

