#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10558(Table &tbl_SerializeFromObject_TD_11202_input, Table &tbl_Filter_TD_10558_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#6719))
    // Input: ListBuffer(w_warehouse_sk#6719, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731)
    // Output: ListBuffer(w_warehouse_sk#6719, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11202_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk6719 = tbl_SerializeFromObject_TD_11202_input.getInt32(i, 0);
        if (_w_warehouse_sk6719!= 0) {
            int32_t _w_warehouse_sk6719_t = tbl_SerializeFromObject_TD_11202_input.getInt32(i, 0);
            tbl_Filter_TD_10558_output.setInt32(r, 0, _w_warehouse_sk6719_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_t = tbl_SerializeFromObject_TD_11202_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name6721_t);
            int32_t _w_warehouse_sq_ft6722_t = tbl_SerializeFromObject_TD_11202_input.getInt32(i, 2);
            tbl_Filter_TD_10558_output.setInt32(r, 2, _w_warehouse_sq_ft6722_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_city6727_t = tbl_SerializeFromObject_TD_11202_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_city6727_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_county6728_t = tbl_SerializeFromObject_TD_11202_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_10558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_county6728_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_state6729_t = tbl_SerializeFromObject_TD_11202_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_10558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_state6729_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_country6731_t = tbl_SerializeFromObject_TD_11202_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_10558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_country6731_t);
            r++;
        }
    }
    tbl_Filter_TD_10558_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10558_output #Row: " << tbl_Filter_TD_10558_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10798(Table &tbl_SerializeFromObject_TD_11683_input, Table &tbl_Filter_TD_10798_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(cs_warehouse_sk#1118) AND isnotnull(cs_sold_date_sk#1104)) AND (isnotnull(cs_sold_time_sk#1105) AND isnotnull(cs_ship_mode_sk#1117))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_sold_time_sk#1105, cs_ship_mode_sk#1117, cs_warehouse_sk#1118, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_sold_time_sk#1105, cs_ship_mode_sk#1117, cs_warehouse_sk#1118, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11683_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_warehouse_sk1118 = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 3);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 0);
        int32_t _cs_sold_time_sk1105 = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 1);
        int32_t _cs_ship_mode_sk1117 = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 2);
        if (((_cs_warehouse_sk1118!= 0) && (_cs_sold_date_sk1104!= 0)) && ((_cs_sold_time_sk1105!= 0) && (_cs_ship_mode_sk1117!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 0);
            tbl_Filter_TD_10798_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_sold_time_sk1105_t = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 1);
            tbl_Filter_TD_10798_output.setInt32(r, 1, _cs_sold_time_sk1105_t);
            int32_t _cs_ship_mode_sk1117_t = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 2);
            tbl_Filter_TD_10798_output.setInt32(r, 2, _cs_ship_mode_sk1117_t);
            int32_t _cs_warehouse_sk1118_t = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 3);
            tbl_Filter_TD_10798_output.setInt32(r, 3, _cs_warehouse_sk1118_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 4);
            tbl_Filter_TD_10798_output.setInt32(r, 4, _cs_quantity1122_t);
            int32_t _cs_sales_price1125_t = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 5);
            tbl_Filter_TD_10798_output.setInt32(r, 5, _cs_sales_price1125_t);
            int32_t _cs_net_paid_inc_tax1134_t = tbl_SerializeFromObject_TD_11683_input.getInt32(i, 6);
            tbl_Filter_TD_10798_output.setInt32(r, 6, _cs_net_paid_inc_tax1134_t);
            r++;
        }
    }
    tbl_Filter_TD_10798_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10798_output #Row: " << tbl_Filter_TD_10798_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10163(Table &tbl_SerializeFromObject_TD_11174_input, Table &tbl_Filter_TD_10163_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(w_warehouse_sk#495))
    // Input: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507)
    // Output: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11174_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _w_warehouse_sk495 = tbl_SerializeFromObject_TD_11174_input.getInt32(i, 0);
        if (_w_warehouse_sk495!= 0) {
            int32_t _w_warehouse_sk495_t = tbl_SerializeFromObject_TD_11174_input.getInt32(i, 0);
            tbl_Filter_TD_10163_output.setInt32(r, 0, _w_warehouse_sk495_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_t = tbl_SerializeFromObject_TD_11174_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10163_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _w_warehouse_name497_t);
            int32_t _w_warehouse_sq_ft498_t = tbl_SerializeFromObject_TD_11174_input.getInt32(i, 2);
            tbl_Filter_TD_10163_output.setInt32(r, 2, _w_warehouse_sq_ft498_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_city503_t = tbl_SerializeFromObject_TD_11174_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10163_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_city503_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_county504_t = tbl_SerializeFromObject_TD_11174_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_10163_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_county504_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_t = tbl_SerializeFromObject_TD_11174_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_10163_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_state505_t);
            std::array<char, TPCDS_READ_MAX + 1> _w_country507_t = tbl_SerializeFromObject_TD_11174_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_10163_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_country507_t);
            r++;
        }
    }
    tbl_Filter_TD_10163_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10163_output #Row: " << tbl_Filter_TD_10163_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10672(Table &tbl_SerializeFromObject_TD_11901_input, Table &tbl_Filter_TD_10672_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ws_warehouse_sk#744) AND isnotnull(ws_sold_date_sk#729)) AND (isnotnull(ws_sold_time_sk#730) AND isnotnull(ws_ship_mode_sk#743))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_sold_time_sk#730, ws_ship_mode_sk#743, ws_warehouse_sk#744, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_sold_time_sk#730, ws_ship_mode_sk#743, ws_warehouse_sk#744, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11901_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_warehouse_sk744 = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 3);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 0);
        int32_t _ws_sold_time_sk730 = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 1);
        int32_t _ws_ship_mode_sk743 = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 2);
        if (((_ws_warehouse_sk744!= 0) && (_ws_sold_date_sk729!= 0)) && ((_ws_sold_time_sk730!= 0) && (_ws_ship_mode_sk743!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 0);
            tbl_Filter_TD_10672_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_sold_time_sk730_t = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 1);
            tbl_Filter_TD_10672_output.setInt32(r, 1, _ws_sold_time_sk730_t);
            int32_t _ws_ship_mode_sk743_t = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 2);
            tbl_Filter_TD_10672_output.setInt32(r, 2, _ws_ship_mode_sk743_t);
            int32_t _ws_warehouse_sk744_t = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 3);
            tbl_Filter_TD_10672_output.setInt32(r, 3, _ws_warehouse_sk744_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 4);
            tbl_Filter_TD_10672_output.setInt32(r, 4, _ws_quantity747_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 5);
            tbl_Filter_TD_10672_output.setInt32(r, 5, _ws_ext_sales_price752_t);
            int32_t _ws_net_paid758_t = tbl_SerializeFromObject_TD_11901_input.getInt32(i, 6);
            tbl_Filter_TD_10672_output.setInt32(r, 6, _ws_net_paid758_t);
            r++;
        }
    }
    tbl_Filter_TD_10672_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10672_output #Row: " << tbl_Filter_TD_10672_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9637(Table &tbl_SerializeFromObject_TD_1084_input, Table &tbl_Filter_TD_9637_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#6739) AND (d_year#6739 = 2001)) AND isnotnull(d_date_sk#6733)))
    // Input: ListBuffer(d_date_sk#6733, d_year#6739, d_moy#6741)
    // Output: ListBuffer(d_date_sk#6733, d_year#6739, d_moy#6741)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1084_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6739 = tbl_SerializeFromObject_TD_1084_input.getInt32(i, 1);
        int32_t _d_date_sk6733 = tbl_SerializeFromObject_TD_1084_input.getInt32(i, 0);
        if (((_d_year6739!= 0) && (_d_year6739 == 2001)) && (_d_date_sk6733!= 0)) {
            int32_t _d_date_sk6733_t = tbl_SerializeFromObject_TD_1084_input.getInt32(i, 0);
            tbl_Filter_TD_9637_output.setInt32(r, 0, _d_date_sk6733_t);
            int32_t _d_year6739_t = tbl_SerializeFromObject_TD_1084_input.getInt32(i, 1);
            tbl_Filter_TD_9637_output.setInt32(r, 1, _d_year6739_t);
            int32_t _d_moy6741_t = tbl_SerializeFromObject_TD_1084_input.getInt32(i, 2);
            tbl_Filter_TD_9637_output.setInt32(r, 2, _d_moy6741_t);
            r++;
        }
    }
    tbl_Filter_TD_9637_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9637_output #Row: " << tbl_Filter_TD_9637_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9818_key_leftMajor {
    int32_t _cs_warehouse_sk1118;
    bool operator==(const SW_JOIN_INNER_TD_9818_key_leftMajor& other) const {
        return ((_cs_warehouse_sk1118 == other._cs_warehouse_sk1118));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9818_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9818_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_warehouse_sk1118));
    }
};
}
struct SW_JOIN_INNER_TD_9818_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_sold_time_sk1105;
    int32_t _cs_ship_mode_sk1117;
    int32_t _cs_warehouse_sk1118;
    int32_t _cs_quantity1122;
    int32_t _cs_sales_price1125;
    int32_t _cs_net_paid_inc_tax1134;
};
struct SW_JOIN_INNER_TD_9818_key_rightMajor {
    int32_t _w_warehouse_sk6719;
    bool operator==(const SW_JOIN_INNER_TD_9818_key_rightMajor& other) const {
        return ((_w_warehouse_sk6719 == other._w_warehouse_sk6719));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9818_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9818_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk6719));
    }
};
}
struct SW_JOIN_INNER_TD_9818_payload_rightMajor {
    int32_t _w_warehouse_sk6719;
    std::string _w_warehouse_name6721;
    int32_t _w_warehouse_sq_ft6722;
    std::string _w_city6727;
    std::string _w_county6728;
    std::string _w_state6729;
    std::string _w_country6731;
};
void SW_JOIN_INNER_TD_9818(Table &tbl_Filter_TD_10798_output, Table &tbl_Filter_TD_10558_output, Table &tbl_JOIN_INNER_TD_9818_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_warehouse_sk#1118 = w_warehouse_sk#6719))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_sold_time_sk#1105, cs_ship_mode_sk#1117, cs_warehouse_sk#1118, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134)
    // Right Table: ListBuffer(w_warehouse_sk#6719, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_sold_time_sk#1105, cs_ship_mode_sk#1117, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731)
    int left_nrow = tbl_Filter_TD_10798_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10558_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9818_key_leftMajor, SW_JOIN_INNER_TD_9818_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10798_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_warehouse_sk1118_k = tbl_Filter_TD_10798_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9818_key_leftMajor keyA{_cs_warehouse_sk1118_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10798_output.getInt32(i, 0);
            int32_t _cs_sold_time_sk1105 = tbl_Filter_TD_10798_output.getInt32(i, 1);
            int32_t _cs_ship_mode_sk1117 = tbl_Filter_TD_10798_output.getInt32(i, 2);
            int32_t _cs_warehouse_sk1118 = tbl_Filter_TD_10798_output.getInt32(i, 3);
            int32_t _cs_quantity1122 = tbl_Filter_TD_10798_output.getInt32(i, 4);
            int32_t _cs_sales_price1125 = tbl_Filter_TD_10798_output.getInt32(i, 5);
            int32_t _cs_net_paid_inc_tax1134 = tbl_Filter_TD_10798_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_9818_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_sold_time_sk1105, _cs_ship_mode_sk1117, _cs_warehouse_sk1118, _cs_quantity1122, _cs_sales_price1125, _cs_net_paid_inc_tax1134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10558_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk6719_k = tbl_Filter_TD_10558_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9818_key_leftMajor{_w_warehouse_sk6719_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_sold_time_sk1105 = (it->second)._cs_sold_time_sk1105;
                int32_t _cs_ship_mode_sk1117 = (it->second)._cs_ship_mode_sk1117;
                int32_t _cs_warehouse_sk1118 = (it->second)._cs_warehouse_sk1118;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_net_paid_inc_tax1134 = (it->second)._cs_net_paid_inc_tax1134;
                int32_t _w_warehouse_sk6719 = tbl_Filter_TD_10558_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_warehouse_name6721 = std::string(_w_warehouse_name6721_n.data());
                int32_t _w_warehouse_sq_ft6722 = tbl_Filter_TD_10558_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _w_city6727 = std::string(_w_city6727_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_county6728 = std::string(_w_county6728_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _w_state6729 = std::string(_w_state6729_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _w_country6731 = std::string(_w_country6731_n.data());
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 1, _cs_sold_time_sk1105);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 2, _cs_ship_mode_sk1117);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 5, _cs_net_paid_inc_tax1134);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_warehouse_name6721_n);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 7, _w_warehouse_sq_ft6722);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_city6727_n);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_county6728_n);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _w_state6729_n);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _w_country6731_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9818_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9818_key_rightMajor, SW_JOIN_INNER_TD_9818_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10558_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk6719_k = tbl_Filter_TD_10558_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9818_key_rightMajor keyA{_w_warehouse_sk6719_k};
            int32_t _w_warehouse_sk6719 = tbl_Filter_TD_10558_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_warehouse_name6721 = std::string(_w_warehouse_name6721_n.data());
            int32_t _w_warehouse_sq_ft6722 = tbl_Filter_TD_10558_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _w_city6727 = std::string(_w_city6727_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_county6728 = std::string(_w_county6728_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _w_state6729 = std::string(_w_state6729_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_Filter_TD_10558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _w_country6731 = std::string(_w_country6731_n.data());
            SW_JOIN_INNER_TD_9818_payload_rightMajor payloadA{_w_warehouse_sk6719, _w_warehouse_name6721, _w_warehouse_sq_ft6722, _w_city6727, _w_county6728, _w_state6729, _w_country6731};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10798_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_warehouse_sk1118_k = tbl_Filter_TD_10798_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9818_key_rightMajor{_cs_warehouse_sk1118_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk6719 = (it->second)._w_warehouse_sk6719;
                std::string _w_warehouse_name6721 = (it->second)._w_warehouse_name6721;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n{};
                memcpy(_w_warehouse_name6721_n.data(), (_w_warehouse_name6721).data(), (_w_warehouse_name6721).length());
                int32_t _w_warehouse_sq_ft6722 = (it->second)._w_warehouse_sq_ft6722;
                std::string _w_city6727 = (it->second)._w_city6727;
                std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n{};
                memcpy(_w_city6727_n.data(), (_w_city6727).data(), (_w_city6727).length());
                std::string _w_county6728 = (it->second)._w_county6728;
                std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n{};
                memcpy(_w_county6728_n.data(), (_w_county6728).data(), (_w_county6728).length());
                std::string _w_state6729 = (it->second)._w_state6729;
                std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n{};
                memcpy(_w_state6729_n.data(), (_w_state6729).data(), (_w_state6729).length());
                std::string _w_country6731 = (it->second)._w_country6731;
                std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n{};
                memcpy(_w_country6731_n.data(), (_w_country6731).data(), (_w_country6731).length());
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_10798_output.getInt32(i, 0);
                int32_t _cs_sold_time_sk1105 = tbl_Filter_TD_10798_output.getInt32(i, 1);
                int32_t _cs_ship_mode_sk1117 = tbl_Filter_TD_10798_output.getInt32(i, 2);
                int32_t _cs_warehouse_sk1118 = tbl_Filter_TD_10798_output.getInt32(i, 3);
                int32_t _cs_quantity1122 = tbl_Filter_TD_10798_output.getInt32(i, 4);
                int32_t _cs_sales_price1125 = tbl_Filter_TD_10798_output.getInt32(i, 5);
                int32_t _cs_net_paid_inc_tax1134 = tbl_Filter_TD_10798_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_warehouse_name6721_n);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 7, _w_warehouse_sq_ft6722);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_city6727_n);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_county6728_n);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _w_state6729_n);
                tbl_JOIN_INNER_TD_9818_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _w_country6731_n);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 1, _cs_sold_time_sk1105);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 2, _cs_ship_mode_sk1117);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 4, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_9818_output.setInt32(r, 5, _cs_net_paid_inc_tax1134);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9818_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9818_output #Row: " << tbl_JOIN_INNER_TD_9818_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9224(Table &tbl_SerializeFromObject_TD_10847_input, Table &tbl_Filter_TD_9224_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2001)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10847_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10847_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10847_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2001)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10847_input.getInt32(i, 0);
            tbl_Filter_TD_9224_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_10847_input.getInt32(i, 1);
            tbl_Filter_TD_9224_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_10847_input.getInt32(i, 2);
            tbl_Filter_TD_9224_output.setInt32(r, 2, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_9224_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9224_output #Row: " << tbl_Filter_TD_9224_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9553_key_leftMajor {
    int32_t _ws_warehouse_sk744;
    bool operator==(const SW_JOIN_INNER_TD_9553_key_leftMajor& other) const {
        return ((_ws_warehouse_sk744 == other._ws_warehouse_sk744));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9553_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9553_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_warehouse_sk744));
    }
};
}
struct SW_JOIN_INNER_TD_9553_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_sold_time_sk730;
    int32_t _ws_ship_mode_sk743;
    int32_t _ws_warehouse_sk744;
    int32_t _ws_quantity747;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_paid758;
};
struct SW_JOIN_INNER_TD_9553_key_rightMajor {
    int32_t _w_warehouse_sk495;
    bool operator==(const SW_JOIN_INNER_TD_9553_key_rightMajor& other) const {
        return ((_w_warehouse_sk495 == other._w_warehouse_sk495));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9553_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9553_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._w_warehouse_sk495));
    }
};
}
struct SW_JOIN_INNER_TD_9553_payload_rightMajor {
    int32_t _w_warehouse_sk495;
    std::string _w_warehouse_name497;
    int32_t _w_warehouse_sq_ft498;
    std::string _w_city503;
    std::string _w_county504;
    std::string _w_state505;
    std::string _w_country507;
};
void SW_JOIN_INNER_TD_9553(Table &tbl_Filter_TD_10672_output, Table &tbl_Filter_TD_10163_output, Table &tbl_JOIN_INNER_TD_9553_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_warehouse_sk#744 = w_warehouse_sk#495))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_sold_time_sk#730, ws_ship_mode_sk#743, ws_warehouse_sk#744, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758)
    // Right Table: ListBuffer(w_warehouse_sk#495, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_sold_time_sk#730, ws_ship_mode_sk#743, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507)
    int left_nrow = tbl_Filter_TD_10672_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10163_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9553_key_leftMajor, SW_JOIN_INNER_TD_9553_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10672_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_warehouse_sk744_k = tbl_Filter_TD_10672_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9553_key_leftMajor keyA{_ws_warehouse_sk744_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10672_output.getInt32(i, 0);
            int32_t _ws_sold_time_sk730 = tbl_Filter_TD_10672_output.getInt32(i, 1);
            int32_t _ws_ship_mode_sk743 = tbl_Filter_TD_10672_output.getInt32(i, 2);
            int32_t _ws_warehouse_sk744 = tbl_Filter_TD_10672_output.getInt32(i, 3);
            int32_t _ws_quantity747 = tbl_Filter_TD_10672_output.getInt32(i, 4);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_10672_output.getInt32(i, 5);
            int32_t _ws_net_paid758 = tbl_Filter_TD_10672_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_9553_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_sold_time_sk730, _ws_ship_mode_sk743, _ws_warehouse_sk744, _ws_quantity747, _ws_ext_sales_price752, _ws_net_paid758};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10163_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_10163_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9553_key_leftMajor{_w_warehouse_sk495_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_sold_time_sk730 = (it->second)._ws_sold_time_sk730;
                int32_t _ws_ship_mode_sk743 = (it->second)._ws_ship_mode_sk743;
                int32_t _ws_warehouse_sk744 = (it->second)._ws_warehouse_sk744;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_paid758 = (it->second)._ws_net_paid758;
                int32_t _w_warehouse_sk495 = tbl_Filter_TD_10163_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                int32_t _w_warehouse_sq_ft498 = tbl_Filter_TD_10163_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _w_city503 = std::string(_w_city503_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_county504 = std::string(_w_county504_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _w_state505 = std::string(_w_state505_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _w_country507 = std::string(_w_country507_n.data());
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 1, _ws_sold_time_sk730);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 2, _ws_ship_mode_sk743);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 3, _ws_quantity747);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 5, _ws_net_paid758);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 7, _w_warehouse_sq_ft498);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_city503_n);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_county504_n);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _w_state505_n);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _w_country507_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9553_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9553_key_rightMajor, SW_JOIN_INNER_TD_9553_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10163_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _w_warehouse_sk495_k = tbl_Filter_TD_10163_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9553_key_rightMajor keyA{_w_warehouse_sk495_k};
            int32_t _w_warehouse_sk495 = tbl_Filter_TD_10163_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            int32_t _w_warehouse_sq_ft498 = tbl_Filter_TD_10163_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _w_city503 = std::string(_w_city503_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_county504 = std::string(_w_county504_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _w_state505 = std::string(_w_state505_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_Filter_TD_10163_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _w_country507 = std::string(_w_country507_n.data());
            SW_JOIN_INNER_TD_9553_payload_rightMajor payloadA{_w_warehouse_sk495, _w_warehouse_name497, _w_warehouse_sq_ft498, _w_city503, _w_county504, _w_state505, _w_country507};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10672_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_warehouse_sk744_k = tbl_Filter_TD_10672_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9553_key_rightMajor{_ws_warehouse_sk744_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _w_warehouse_sk495 = (it->second)._w_warehouse_sk495;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _w_warehouse_sq_ft498 = (it->second)._w_warehouse_sq_ft498;
                std::string _w_city503 = (it->second)._w_city503;
                std::array<char, TPCDS_READ_MAX + 1> _w_city503_n{};
                memcpy(_w_city503_n.data(), (_w_city503).data(), (_w_city503).length());
                std::string _w_county504 = (it->second)._w_county504;
                std::array<char, TPCDS_READ_MAX + 1> _w_county504_n{};
                memcpy(_w_county504_n.data(), (_w_county504).data(), (_w_county504).length());
                std::string _w_state505 = (it->second)._w_state505;
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n{};
                memcpy(_w_state505_n.data(), (_w_state505).data(), (_w_state505).length());
                std::string _w_country507 = (it->second)._w_country507;
                std::array<char, TPCDS_READ_MAX + 1> _w_country507_n{};
                memcpy(_w_country507_n.data(), (_w_country507).data(), (_w_country507).length());
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_10672_output.getInt32(i, 0);
                int32_t _ws_sold_time_sk730 = tbl_Filter_TD_10672_output.getInt32(i, 1);
                int32_t _ws_ship_mode_sk743 = tbl_Filter_TD_10672_output.getInt32(i, 2);
                int32_t _ws_warehouse_sk744 = tbl_Filter_TD_10672_output.getInt32(i, 3);
                int32_t _ws_quantity747 = tbl_Filter_TD_10672_output.getInt32(i, 4);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_10672_output.getInt32(i, 5);
                int32_t _ws_net_paid758 = tbl_Filter_TD_10672_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 7, _w_warehouse_sq_ft498);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_city503_n);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_county504_n);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _w_state505_n);
                tbl_JOIN_INNER_TD_9553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 11, _w_country507_n);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 1, _ws_sold_time_sk730);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 2, _ws_ship_mode_sk743);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 3, _ws_quantity747);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_9553_output.setInt32(r, 5, _ws_net_paid758);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9553_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9553_output #Row: " << tbl_JOIN_INNER_TD_9553_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8234(Table &tbl_SerializeFromObject_TD_9307_input, Table &tbl_Filter_TD_8234_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(t_time#6763) AND ((t_time#6763 >= 30838) AND (t_time#6763 <= 59638))) AND isnotnull(t_time_sk#6761)))
    // Input: ListBuffer(t_time_sk#6761, t_time#6763)
    // Output: ListBuffer(t_time_sk#6761)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9307_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_time6763 = tbl_SerializeFromObject_TD_9307_input.getInt32(i, 1);
        int32_t _t_time_sk6761 = tbl_SerializeFromObject_TD_9307_input.getInt32(i, 0);
        if (((_t_time6763!= 0) && ((_t_time6763 >= 30838) && (_t_time6763 <= 59638))) && (_t_time_sk6761!= 0)) {
            int32_t _t_time_sk6761_t = tbl_SerializeFromObject_TD_9307_input.getInt32(i, 0);
            tbl_Filter_TD_8234_output.setInt32(r, 0, _t_time_sk6761_t);
            r++;
        }
    }
    tbl_Filter_TD_8234_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8234_output #Row: " << tbl_Filter_TD_8234_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8809_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_8809_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8809_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8809_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_8809_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_sold_time_sk1105;
    int32_t _cs_ship_mode_sk1117;
    int32_t _cs_quantity1122;
    int32_t _cs_sales_price1125;
    int32_t _cs_net_paid_inc_tax1134;
    std::string _w_warehouse_name6721;
    int32_t _w_warehouse_sq_ft6722;
    std::string _w_city6727;
    std::string _w_county6728;
    std::string _w_state6729;
    std::string _w_country6731;
};
struct SW_JOIN_INNER_TD_8809_key_rightMajor {
    int32_t _d_date_sk6733;
    bool operator==(const SW_JOIN_INNER_TD_8809_key_rightMajor& other) const {
        return ((_d_date_sk6733 == other._d_date_sk6733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8809_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8809_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6733));
    }
};
}
struct SW_JOIN_INNER_TD_8809_payload_rightMajor {
    int32_t _d_date_sk6733;
    int32_t _d_year6739;
    int32_t _d_moy6741;
};
void SW_JOIN_INNER_TD_8809(Table &tbl_JOIN_INNER_TD_9818_output, Table &tbl_Filter_TD_9637_output, Table &tbl_JOIN_INNER_TD_8809_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#6733))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_sold_time_sk#1105, cs_ship_mode_sk#1117, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731)
    // Right Table: ListBuffer(d_date_sk#6733, d_year#6739, d_moy#6741)
    // Output Table: ListBuffer(cs_sold_time_sk#1105, cs_ship_mode_sk#1117, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731, d_year#6739, d_moy#6741)
    int left_nrow = tbl_JOIN_INNER_TD_9818_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9637_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8809_key_leftMajor, SW_JOIN_INNER_TD_8809_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9818_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8809_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 0);
            int32_t _cs_sold_time_sk1105 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 1);
            int32_t _cs_ship_mode_sk1117 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 2);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 3);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 4);
            int32_t _cs_net_paid_inc_tax1134 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _w_warehouse_name6721 = std::string(_w_warehouse_name6721_n.data());
            int32_t _w_warehouse_sq_ft6722 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_city6727 = std::string(_w_city6727_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _w_county6728 = std::string(_w_county6728_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _w_state6729 = std::string(_w_state6729_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _w_country6731 = std::string(_w_country6731_n.data());
            SW_JOIN_INNER_TD_8809_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_sold_time_sk1105, _cs_ship_mode_sk1117, _cs_quantity1122, _cs_sales_price1125, _cs_net_paid_inc_tax1134, _w_warehouse_name6721, _w_warehouse_sq_ft6722, _w_city6727, _w_county6728, _w_state6729, _w_country6731};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9637_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6733_k = tbl_Filter_TD_9637_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8809_key_leftMajor{_d_date_sk6733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_sold_time_sk1105 = (it->second)._cs_sold_time_sk1105;
                int32_t _cs_ship_mode_sk1117 = (it->second)._cs_ship_mode_sk1117;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_net_paid_inc_tax1134 = (it->second)._cs_net_paid_inc_tax1134;
                std::string _w_warehouse_name6721 = (it->second)._w_warehouse_name6721;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n{};
                memcpy(_w_warehouse_name6721_n.data(), (_w_warehouse_name6721).data(), (_w_warehouse_name6721).length());
                int32_t _w_warehouse_sq_ft6722 = (it->second)._w_warehouse_sq_ft6722;
                std::string _w_city6727 = (it->second)._w_city6727;
                std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n{};
                memcpy(_w_city6727_n.data(), (_w_city6727).data(), (_w_city6727).length());
                std::string _w_county6728 = (it->second)._w_county6728;
                std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n{};
                memcpy(_w_county6728_n.data(), (_w_county6728).data(), (_w_county6728).length());
                std::string _w_state6729 = (it->second)._w_state6729;
                std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n{};
                memcpy(_w_state6729_n.data(), (_w_state6729).data(), (_w_state6729).length());
                std::string _w_country6731 = (it->second)._w_country6731;
                std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n{};
                memcpy(_w_country6731_n.data(), (_w_country6731).data(), (_w_country6731).length());
                int32_t _d_date_sk6733 = tbl_Filter_TD_9637_output.getInt32(i, 0);
                int32_t _d_year6739 = tbl_Filter_TD_9637_output.getInt32(i, 1);
                int32_t _d_moy6741 = tbl_Filter_TD_9637_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 0, _cs_sold_time_sk1105);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 1, _cs_ship_mode_sk1117);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 4, _cs_net_paid_inc_tax1134);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_warehouse_name6721_n);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 6, _w_warehouse_sq_ft6722);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_city6727_n);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_county6728_n);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_state6729_n);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _w_country6731_n);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 11, _d_year6739);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 12, _d_moy6741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8809_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8809_key_rightMajor, SW_JOIN_INNER_TD_8809_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9637_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6733_k = tbl_Filter_TD_9637_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8809_key_rightMajor keyA{_d_date_sk6733_k};
            int32_t _d_date_sk6733 = tbl_Filter_TD_9637_output.getInt32(i, 0);
            int32_t _d_year6739 = tbl_Filter_TD_9637_output.getInt32(i, 1);
            int32_t _d_moy6741 = tbl_Filter_TD_9637_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8809_payload_rightMajor payloadA{_d_date_sk6733, _d_year6739, _d_moy6741};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9818_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8809_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6733 = (it->second)._d_date_sk6733;
                int32_t _d_year6739 = (it->second)._d_year6739;
                int32_t _d_moy6741 = (it->second)._d_moy6741;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 0);
                int32_t _cs_sold_time_sk1105 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 1);
                int32_t _cs_ship_mode_sk1117 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 2);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 3);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 4);
                int32_t _cs_net_paid_inc_tax1134 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _w_warehouse_name6721 = std::string(_w_warehouse_name6721_n.data());
                int32_t _w_warehouse_sq_ft6722 = tbl_JOIN_INNER_TD_9818_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_city6727 = std::string(_w_city6727_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _w_county6728 = std::string(_w_county6728_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _w_state6729 = std::string(_w_state6729_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_JOIN_INNER_TD_9818_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _w_country6731 = std::string(_w_country6731_n.data());
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 11, _d_year6739);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 12, _d_moy6741);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 0, _cs_sold_time_sk1105);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 1, _cs_ship_mode_sk1117);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 3, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 4, _cs_net_paid_inc_tax1134);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_warehouse_name6721_n);
                tbl_JOIN_INNER_TD_8809_output.setInt32(r, 6, _w_warehouse_sq_ft6722);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_city6727_n);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_county6728_n);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_state6729_n);
                tbl_JOIN_INNER_TD_8809_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _w_country6731_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8809_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8809_output #Row: " << tbl_JOIN_INNER_TD_8809_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8159(Table &tbl_SerializeFromObject_TD_9658_input, Table &tbl_Filter_TD_8159_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(t_time#467) AND ((t_time#467 >= 30838) AND (t_time#467 <= 59638))) AND isnotnull(t_time_sk#465)))
    // Input: ListBuffer(t_time_sk#465, t_time#467)
    // Output: ListBuffer(t_time_sk#465)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9658_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_time467 = tbl_SerializeFromObject_TD_9658_input.getInt32(i, 1);
        int32_t _t_time_sk465 = tbl_SerializeFromObject_TD_9658_input.getInt32(i, 0);
        if (((_t_time467!= 0) && ((_t_time467 >= 30838) && (_t_time467 <= 59638))) && (_t_time_sk465!= 0)) {
            int32_t _t_time_sk465_t = tbl_SerializeFromObject_TD_9658_input.getInt32(i, 0);
            tbl_Filter_TD_8159_output.setInt32(r, 0, _t_time_sk465_t);
            r++;
        }
    }
    tbl_Filter_TD_8159_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8159_output #Row: " << tbl_Filter_TD_8159_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_820_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_820_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_820_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_820_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_820_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_sold_time_sk730;
    int32_t _ws_ship_mode_sk743;
    int32_t _ws_quantity747;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_paid758;
    std::string _w_warehouse_name497;
    int32_t _w_warehouse_sq_ft498;
    std::string _w_city503;
    std::string _w_county504;
    std::string _w_state505;
    std::string _w_country507;
};
struct SW_JOIN_INNER_TD_820_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_820_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_820_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_820_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_820_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_moy128;
};
void SW_JOIN_INNER_TD_820(Table &tbl_JOIN_INNER_TD_9553_output, Table &tbl_Filter_TD_9224_output, Table &tbl_JOIN_INNER_TD_820_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#120))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_sold_time_sk#730, ws_ship_mode_sk#743, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output Table: ListBuffer(ws_sold_time_sk#730, ws_ship_mode_sk#743, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_9553_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9224_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_820_key_leftMajor, SW_JOIN_INNER_TD_820_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9553_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_820_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 0);
            int32_t _ws_sold_time_sk730 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 1);
            int32_t _ws_ship_mode_sk743 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 2);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 3);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 4);
            int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            int32_t _w_warehouse_sq_ft498 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 7);
            std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_city503 = std::string(_w_city503_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _w_county504 = std::string(_w_county504_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _w_state505 = std::string(_w_state505_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
            std::string _w_country507 = std::string(_w_country507_n.data());
            SW_JOIN_INNER_TD_820_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_sold_time_sk730, _ws_ship_mode_sk743, _ws_quantity747, _ws_ext_sales_price752, _ws_net_paid758, _w_warehouse_name497, _w_warehouse_sq_ft498, _w_city503, _w_county504, _w_state505, _w_country507};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9224_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9224_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_820_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_sold_time_sk730 = (it->second)._ws_sold_time_sk730;
                int32_t _ws_ship_mode_sk743 = (it->second)._ws_ship_mode_sk743;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_paid758 = (it->second)._ws_net_paid758;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _w_warehouse_sq_ft498 = (it->second)._w_warehouse_sq_ft498;
                std::string _w_city503 = (it->second)._w_city503;
                std::array<char, TPCDS_READ_MAX + 1> _w_city503_n{};
                memcpy(_w_city503_n.data(), (_w_city503).data(), (_w_city503).length());
                std::string _w_county504 = (it->second)._w_county504;
                std::array<char, TPCDS_READ_MAX + 1> _w_county504_n{};
                memcpy(_w_county504_n.data(), (_w_county504).data(), (_w_county504).length());
                std::string _w_state505 = (it->second)._w_state505;
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n{};
                memcpy(_w_state505_n.data(), (_w_state505).data(), (_w_state505).length());
                std::string _w_country507 = (it->second)._w_country507;
                std::array<char, TPCDS_READ_MAX + 1> _w_country507_n{};
                memcpy(_w_country507_n.data(), (_w_country507).data(), (_w_country507).length());
                int32_t _d_date_sk120 = tbl_Filter_TD_9224_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_9224_output.getInt32(i, 1);
                int32_t _d_moy128 = tbl_Filter_TD_9224_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 0, _ws_sold_time_sk730);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 1, _ws_ship_mode_sk743);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 3, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 4, _ws_net_paid758);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 6, _w_warehouse_sq_ft498);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_city503_n);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_county504_n);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_state505_n);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _w_country507_n);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 11, _d_year126);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 12, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_820_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_820_key_rightMajor, SW_JOIN_INNER_TD_820_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9224_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9224_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_820_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9224_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_9224_output.getInt32(i, 1);
            int32_t _d_moy128 = tbl_Filter_TD_9224_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_820_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9553_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_820_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 0);
                int32_t _ws_sold_time_sk730 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 1);
                int32_t _ws_ship_mode_sk743 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 2);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 3);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 4);
                int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                int32_t _w_warehouse_sq_ft498 = tbl_JOIN_INNER_TD_9553_output.getInt32(i, 7);
                std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_city503 = std::string(_w_city503_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _w_county504 = std::string(_w_county504_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _w_state505 = std::string(_w_state505_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_JOIN_INNER_TD_9553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 11);
                std::string _w_country507 = std::string(_w_country507_n.data());
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 11, _d_year126);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 12, _d_moy128);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 0, _ws_sold_time_sk730);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 1, _ws_ship_mode_sk743);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 3, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 4, _ws_net_paid758);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_820_output.setInt32(r, 6, _w_warehouse_sq_ft498);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_city503_n);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_county504_n);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_state505_n);
                tbl_JOIN_INNER_TD_820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 10, _w_country507_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_820_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_820_output #Row: " << tbl_JOIN_INNER_TD_820_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7288(Table &tbl_SerializeFromObject_TD_8984_input, Table &tbl_Filter_TD_7288_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((sm_carrier#6775 IN (DHL,BARIAN) AND isnotnull(sm_ship_mode_sk#6771)))
    // Input: ListBuffer(sm_ship_mode_sk#6771, sm_carrier#6775)
    // Output: ListBuffer(sm_ship_mode_sk#6771)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8984_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _sm_carrier6775 = tbl_SerializeFromObject_TD_8984_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _sm_ship_mode_sk6771 = tbl_SerializeFromObject_TD_8984_input.getInt32(i, 0);
        auto reuse_col_str_311 = std::string(_sm_carrier6775.data());
        if (((reuse_col_str_311 == "DHL") || (reuse_col_str_311 == "BARIAN") || (0)) && (_sm_ship_mode_sk6771!= 0)) {
            int32_t _sm_ship_mode_sk6771_t = tbl_SerializeFromObject_TD_8984_input.getInt32(i, 0);
            tbl_Filter_TD_7288_output.setInt32(r, 0, _sm_ship_mode_sk6771_t);
            r++;
        }
    }
    tbl_Filter_TD_7288_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7288_output #Row: " << tbl_Filter_TD_7288_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7431_key_leftMajor {
    int32_t _cs_sold_time_sk1105;
    bool operator==(const SW_JOIN_INNER_TD_7431_key_leftMajor& other) const {
        return ((_cs_sold_time_sk1105 == other._cs_sold_time_sk1105));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7431_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7431_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_time_sk1105));
    }
};
}
struct SW_JOIN_INNER_TD_7431_payload_leftMajor {
    int32_t _cs_sold_time_sk1105;
    int32_t _cs_ship_mode_sk1117;
    int32_t _cs_quantity1122;
    int32_t _cs_sales_price1125;
    int32_t _cs_net_paid_inc_tax1134;
    std::string _w_warehouse_name6721;
    int32_t _w_warehouse_sq_ft6722;
    std::string _w_city6727;
    std::string _w_county6728;
    std::string _w_state6729;
    std::string _w_country6731;
    int32_t _d_year6739;
    int32_t _d_moy6741;
};
struct SW_JOIN_INNER_TD_7431_key_rightMajor {
    int32_t _t_time_sk6761;
    bool operator==(const SW_JOIN_INNER_TD_7431_key_rightMajor& other) const {
        return ((_t_time_sk6761 == other._t_time_sk6761));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7431_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7431_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk6761));
    }
};
}
struct SW_JOIN_INNER_TD_7431_payload_rightMajor {
    int32_t _t_time_sk6761;
};
void SW_JOIN_INNER_TD_7431(Table &tbl_JOIN_INNER_TD_8809_output, Table &tbl_Filter_TD_8234_output, Table &tbl_JOIN_INNER_TD_7431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_time_sk#1105 = t_time_sk#6761))
    // Left Table: ListBuffer(cs_sold_time_sk#1105, cs_ship_mode_sk#1117, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731, d_year#6739, d_moy#6741)
    // Right Table: ListBuffer(t_time_sk#6761)
    // Output Table: ListBuffer(cs_ship_mode_sk#1117, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731, d_year#6739, d_moy#6741)
    int left_nrow = tbl_JOIN_INNER_TD_8809_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8234_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7431_key_leftMajor, SW_JOIN_INNER_TD_7431_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8809_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_time_sk1105_k = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7431_key_leftMajor keyA{_cs_sold_time_sk1105_k};
            int32_t _cs_sold_time_sk1105 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 0);
            int32_t _cs_ship_mode_sk1117 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 2);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 3);
            int32_t _cs_net_paid_inc_tax1134 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _w_warehouse_name6721 = std::string(_w_warehouse_name6721_n.data());
            int32_t _w_warehouse_sq_ft6722 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 6);
            std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _w_city6727 = std::string(_w_city6727_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_county6728 = std::string(_w_county6728_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _w_state6729 = std::string(_w_state6729_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _w_country6731 = std::string(_w_country6731_n.data());
            int32_t _d_year6739 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 11);
            int32_t _d_moy6741 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 12);
            SW_JOIN_INNER_TD_7431_payload_leftMajor payloadA{_cs_sold_time_sk1105, _cs_ship_mode_sk1117, _cs_quantity1122, _cs_sales_price1125, _cs_net_paid_inc_tax1134, _w_warehouse_name6721, _w_warehouse_sq_ft6722, _w_city6727, _w_county6728, _w_state6729, _w_country6731, _d_year6739, _d_moy6741};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8234_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk6761_k = tbl_Filter_TD_8234_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7431_key_leftMajor{_t_time_sk6761_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_time_sk1105 = (it->second)._cs_sold_time_sk1105;
                int32_t _cs_ship_mode_sk1117 = (it->second)._cs_ship_mode_sk1117;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_net_paid_inc_tax1134 = (it->second)._cs_net_paid_inc_tax1134;
                std::string _w_warehouse_name6721 = (it->second)._w_warehouse_name6721;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n{};
                memcpy(_w_warehouse_name6721_n.data(), (_w_warehouse_name6721).data(), (_w_warehouse_name6721).length());
                int32_t _w_warehouse_sq_ft6722 = (it->second)._w_warehouse_sq_ft6722;
                std::string _w_city6727 = (it->second)._w_city6727;
                std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n{};
                memcpy(_w_city6727_n.data(), (_w_city6727).data(), (_w_city6727).length());
                std::string _w_county6728 = (it->second)._w_county6728;
                std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n{};
                memcpy(_w_county6728_n.data(), (_w_county6728).data(), (_w_county6728).length());
                std::string _w_state6729 = (it->second)._w_state6729;
                std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n{};
                memcpy(_w_state6729_n.data(), (_w_state6729).data(), (_w_state6729).length());
                std::string _w_country6731 = (it->second)._w_country6731;
                std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n{};
                memcpy(_w_country6731_n.data(), (_w_country6731).data(), (_w_country6731).length());
                int32_t _d_year6739 = (it->second)._d_year6739;
                int32_t _d_moy6741 = (it->second)._d_moy6741;
                int32_t _t_time_sk6761 = tbl_Filter_TD_8234_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 0, _cs_ship_mode_sk1117);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 3, _cs_net_paid_inc_tax1134);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name6721_n);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 5, _w_warehouse_sq_ft6722);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_city6727_n);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_county6728_n);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_state6729_n);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_country6731_n);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 10, _d_year6739);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 11, _d_moy6741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7431_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7431_key_rightMajor, SW_JOIN_INNER_TD_7431_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8234_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk6761_k = tbl_Filter_TD_8234_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7431_key_rightMajor keyA{_t_time_sk6761_k};
            int32_t _t_time_sk6761 = tbl_Filter_TD_8234_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7431_payload_rightMajor payloadA{_t_time_sk6761};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8809_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_time_sk1105_k = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7431_key_rightMajor{_cs_sold_time_sk1105_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk6761 = (it->second)._t_time_sk6761;
                int32_t _cs_sold_time_sk1105 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 0);
                int32_t _cs_ship_mode_sk1117 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 2);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 3);
                int32_t _cs_net_paid_inc_tax1134 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _w_warehouse_name6721 = std::string(_w_warehouse_name6721_n.data());
                int32_t _w_warehouse_sq_ft6722 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 6);
                std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _w_city6727 = std::string(_w_city6727_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_county6728 = std::string(_w_county6728_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _w_state6729 = std::string(_w_state6729_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_JOIN_INNER_TD_8809_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _w_country6731 = std::string(_w_country6731_n.data());
                int32_t _d_year6739 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 11);
                int32_t _d_moy6741 = tbl_JOIN_INNER_TD_8809_output.getInt32(i, 12);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 0, _cs_ship_mode_sk1117);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 2, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 3, _cs_net_paid_inc_tax1134);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name6721_n);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 5, _w_warehouse_sq_ft6722);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_city6727_n);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_county6728_n);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_state6729_n);
                tbl_JOIN_INNER_TD_7431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_country6731_n);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 10, _d_year6739);
                tbl_JOIN_INNER_TD_7431_output.setInt32(r, 11, _d_moy6741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7431_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7431_output #Row: " << tbl_JOIN_INNER_TD_7431_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7464(Table &tbl_SerializeFromObject_TD_8548_input, Table &tbl_Filter_TD_7464_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((sm_carrier#364 IN (DHL,BARIAN) AND isnotnull(sm_ship_mode_sk#360)))
    // Input: ListBuffer(sm_ship_mode_sk#360, sm_carrier#364)
    // Output: ListBuffer(sm_ship_mode_sk#360)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8548_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _sm_carrier364 = tbl_SerializeFromObject_TD_8548_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _sm_ship_mode_sk360 = tbl_SerializeFromObject_TD_8548_input.getInt32(i, 0);
        auto reuse_col_str_815 = std::string(_sm_carrier364.data());
        if (((reuse_col_str_815 == "DHL") || (reuse_col_str_815 == "BARIAN") || (0)) && (_sm_ship_mode_sk360!= 0)) {
            int32_t _sm_ship_mode_sk360_t = tbl_SerializeFromObject_TD_8548_input.getInt32(i, 0);
            tbl_Filter_TD_7464_output.setInt32(r, 0, _sm_ship_mode_sk360_t);
            r++;
        }
    }
    tbl_Filter_TD_7464_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7464_output #Row: " << tbl_Filter_TD_7464_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7652_key_leftMajor {
    int32_t _ws_sold_time_sk730;
    bool operator==(const SW_JOIN_INNER_TD_7652_key_leftMajor& other) const {
        return ((_ws_sold_time_sk730 == other._ws_sold_time_sk730));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7652_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7652_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_time_sk730));
    }
};
}
struct SW_JOIN_INNER_TD_7652_payload_leftMajor {
    int32_t _ws_sold_time_sk730;
    int32_t _ws_ship_mode_sk743;
    int32_t _ws_quantity747;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_paid758;
    std::string _w_warehouse_name497;
    int32_t _w_warehouse_sq_ft498;
    std::string _w_city503;
    std::string _w_county504;
    std::string _w_state505;
    std::string _w_country507;
    int32_t _d_year126;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_7652_key_rightMajor {
    int32_t _t_time_sk465;
    bool operator==(const SW_JOIN_INNER_TD_7652_key_rightMajor& other) const {
        return ((_t_time_sk465 == other._t_time_sk465));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7652_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7652_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk465));
    }
};
}
struct SW_JOIN_INNER_TD_7652_payload_rightMajor {
    int32_t _t_time_sk465;
};
void SW_JOIN_INNER_TD_7652(Table &tbl_JOIN_INNER_TD_820_output, Table &tbl_Filter_TD_8159_output, Table &tbl_JOIN_INNER_TD_7652_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_time_sk#730 = t_time_sk#465))
    // Left Table: ListBuffer(ws_sold_time_sk#730, ws_ship_mode_sk#743, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, d_year#126, d_moy#128)
    // Right Table: ListBuffer(t_time_sk#465)
    // Output Table: ListBuffer(ws_ship_mode_sk#743, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_820_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8159_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7652_key_leftMajor, SW_JOIN_INNER_TD_7652_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_820_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_time_sk730_k = tbl_JOIN_INNER_TD_820_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7652_key_leftMajor keyA{_ws_sold_time_sk730_k};
            int32_t _ws_sold_time_sk730 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 0);
            int32_t _ws_ship_mode_sk743 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 1);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 3);
            int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            int32_t _w_warehouse_sq_ft498 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 6);
            std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _w_city503 = std::string(_w_city503_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_county504 = std::string(_w_county504_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _w_state505 = std::string(_w_state505_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
            std::string _w_country507 = std::string(_w_country507_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 11);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 12);
            SW_JOIN_INNER_TD_7652_payload_leftMajor payloadA{_ws_sold_time_sk730, _ws_ship_mode_sk743, _ws_quantity747, _ws_ext_sales_price752, _ws_net_paid758, _w_warehouse_name497, _w_warehouse_sq_ft498, _w_city503, _w_county504, _w_state505, _w_country507, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8159_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_8159_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7652_key_leftMajor{_t_time_sk465_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_time_sk730 = (it->second)._ws_sold_time_sk730;
                int32_t _ws_ship_mode_sk743 = (it->second)._ws_ship_mode_sk743;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_paid758 = (it->second)._ws_net_paid758;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _w_warehouse_sq_ft498 = (it->second)._w_warehouse_sq_ft498;
                std::string _w_city503 = (it->second)._w_city503;
                std::array<char, TPCDS_READ_MAX + 1> _w_city503_n{};
                memcpy(_w_city503_n.data(), (_w_city503).data(), (_w_city503).length());
                std::string _w_county504 = (it->second)._w_county504;
                std::array<char, TPCDS_READ_MAX + 1> _w_county504_n{};
                memcpy(_w_county504_n.data(), (_w_county504).data(), (_w_county504).length());
                std::string _w_state505 = (it->second)._w_state505;
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n{};
                memcpy(_w_state505_n.data(), (_w_state505).data(), (_w_state505).length());
                std::string _w_country507 = (it->second)._w_country507;
                std::array<char, TPCDS_READ_MAX + 1> _w_country507_n{};
                memcpy(_w_country507_n.data(), (_w_country507).data(), (_w_country507).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _t_time_sk465 = tbl_Filter_TD_8159_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 0, _ws_ship_mode_sk743);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 2, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 3, _ws_net_paid758);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 5, _w_warehouse_sq_ft498);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_city503_n);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_county504_n);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_state505_n);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_country507_n);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 10, _d_year126);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 11, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7652_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7652_key_rightMajor, SW_JOIN_INNER_TD_7652_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8159_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_8159_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7652_key_rightMajor keyA{_t_time_sk465_k};
            int32_t _t_time_sk465 = tbl_Filter_TD_8159_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7652_payload_rightMajor payloadA{_t_time_sk465};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_820_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_time_sk730_k = tbl_JOIN_INNER_TD_820_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7652_key_rightMajor{_ws_sold_time_sk730_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk465 = (it->second)._t_time_sk465;
                int32_t _ws_sold_time_sk730 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 0);
                int32_t _ws_ship_mode_sk743 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 1);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 3);
                int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                int32_t _w_warehouse_sq_ft498 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 6);
                std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _w_city503 = std::string(_w_city503_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_county504 = std::string(_w_county504_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _w_state505 = std::string(_w_state505_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_JOIN_INNER_TD_820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 10);
                std::string _w_country507 = std::string(_w_country507_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 11);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_820_output.getInt32(i, 12);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 0, _ws_ship_mode_sk743);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 2, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 3, _ws_net_paid758);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 5, _w_warehouse_sq_ft498);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_city503_n);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_county504_n);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_state505_n);
                tbl_JOIN_INNER_TD_7652_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 9, _w_country507_n);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 10, _d_year126);
                tbl_JOIN_INNER_TD_7652_output.setInt32(r, 11, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7652_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7652_output #Row: " << tbl_JOIN_INNER_TD_7652_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6285_key_leftMajor {
    int32_t _cs_ship_mode_sk1117;
    bool operator==(const SW_JOIN_INNER_TD_6285_key_leftMajor& other) const {
        return ((_cs_ship_mode_sk1117 == other._cs_ship_mode_sk1117));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6285_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6285_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_ship_mode_sk1117));
    }
};
}
struct SW_JOIN_INNER_TD_6285_payload_leftMajor {
    int32_t _cs_ship_mode_sk1117;
    int32_t _cs_quantity1122;
    int32_t _cs_sales_price1125;
    int32_t _cs_net_paid_inc_tax1134;
    std::string _w_warehouse_name6721;
    int32_t _w_warehouse_sq_ft6722;
    std::string _w_city6727;
    std::string _w_county6728;
    std::string _w_state6729;
    std::string _w_country6731;
    int32_t _d_year6739;
    int32_t _d_moy6741;
};
struct SW_JOIN_INNER_TD_6285_key_rightMajor {
    int32_t _sm_ship_mode_sk6771;
    bool operator==(const SW_JOIN_INNER_TD_6285_key_rightMajor& other) const {
        return ((_sm_ship_mode_sk6771 == other._sm_ship_mode_sk6771));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6285_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6285_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sm_ship_mode_sk6771));
    }
};
}
struct SW_JOIN_INNER_TD_6285_payload_rightMajor {
    int32_t _sm_ship_mode_sk6771;
};
void SW_JOIN_INNER_TD_6285(Table &tbl_JOIN_INNER_TD_7431_output, Table &tbl_Filter_TD_7288_output, Table &tbl_JOIN_INNER_TD_6285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_ship_mode_sk#1117 = sm_ship_mode_sk#6771))
    // Left Table: ListBuffer(cs_ship_mode_sk#1117, cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731, d_year#6739, d_moy#6741)
    // Right Table: ListBuffer(sm_ship_mode_sk#6771)
    // Output Table: ListBuffer(cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731, d_year#6739, d_moy#6741)
    int left_nrow = tbl_JOIN_INNER_TD_7431_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7288_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6285_key_leftMajor, SW_JOIN_INNER_TD_6285_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7431_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_ship_mode_sk1117_k = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6285_key_leftMajor keyA{_cs_ship_mode_sk1117_k};
            int32_t _cs_ship_mode_sk1117 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 0);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 1);
            int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 2);
            int32_t _cs_net_paid_inc_tax1134 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_warehouse_name6721 = std::string(_w_warehouse_name6721_n.data());
            int32_t _w_warehouse_sq_ft6722 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _w_city6727 = std::string(_w_city6727_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _w_county6728 = std::string(_w_county6728_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_state6729 = std::string(_w_state6729_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _w_country6731 = std::string(_w_country6731_n.data());
            int32_t _d_year6739 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 10);
            int32_t _d_moy6741 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_6285_payload_leftMajor payloadA{_cs_ship_mode_sk1117, _cs_quantity1122, _cs_sales_price1125, _cs_net_paid_inc_tax1134, _w_warehouse_name6721, _w_warehouse_sq_ft6722, _w_city6727, _w_county6728, _w_state6729, _w_country6731, _d_year6739, _d_moy6741};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7288_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sm_ship_mode_sk6771_k = tbl_Filter_TD_7288_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6285_key_leftMajor{_sm_ship_mode_sk6771_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_ship_mode_sk1117 = (it->second)._cs_ship_mode_sk1117;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_sales_price1125 = (it->second)._cs_sales_price1125;
                int32_t _cs_net_paid_inc_tax1134 = (it->second)._cs_net_paid_inc_tax1134;
                std::string _w_warehouse_name6721 = (it->second)._w_warehouse_name6721;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n{};
                memcpy(_w_warehouse_name6721_n.data(), (_w_warehouse_name6721).data(), (_w_warehouse_name6721).length());
                int32_t _w_warehouse_sq_ft6722 = (it->second)._w_warehouse_sq_ft6722;
                std::string _w_city6727 = (it->second)._w_city6727;
                std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n{};
                memcpy(_w_city6727_n.data(), (_w_city6727).data(), (_w_city6727).length());
                std::string _w_county6728 = (it->second)._w_county6728;
                std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n{};
                memcpy(_w_county6728_n.data(), (_w_county6728).data(), (_w_county6728).length());
                std::string _w_state6729 = (it->second)._w_state6729;
                std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n{};
                memcpy(_w_state6729_n.data(), (_w_state6729).data(), (_w_state6729).length());
                std::string _w_country6731 = (it->second)._w_country6731;
                std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n{};
                memcpy(_w_country6731_n.data(), (_w_country6731).data(), (_w_country6731).length());
                int32_t _d_year6739 = (it->second)._d_year6739;
                int32_t _d_moy6741 = (it->second)._d_moy6741;
                int32_t _sm_ship_mode_sk6771 = tbl_Filter_TD_7288_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 1, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 2, _cs_net_paid_inc_tax1134);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name6721_n);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 4, _w_warehouse_sq_ft6722);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_city6727_n);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_county6728_n);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_state6729_n);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_country6731_n);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 9, _d_year6739);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 10, _d_moy6741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6285_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6285_key_rightMajor, SW_JOIN_INNER_TD_6285_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7288_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sm_ship_mode_sk6771_k = tbl_Filter_TD_7288_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6285_key_rightMajor keyA{_sm_ship_mode_sk6771_k};
            int32_t _sm_ship_mode_sk6771 = tbl_Filter_TD_7288_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6285_payload_rightMajor payloadA{_sm_ship_mode_sk6771};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7431_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_ship_mode_sk1117_k = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6285_key_rightMajor{_cs_ship_mode_sk1117_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sm_ship_mode_sk6771 = (it->second)._sm_ship_mode_sk6771;
                int32_t _cs_ship_mode_sk1117 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 0);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 1);
                int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 2);
                int32_t _cs_net_paid_inc_tax1134 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_warehouse_name6721 = std::string(_w_warehouse_name6721_n.data());
                int32_t _w_warehouse_sq_ft6722 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _w_city6727 = std::string(_w_city6727_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _w_county6728 = std::string(_w_county6728_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_state6729 = std::string(_w_state6729_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_JOIN_INNER_TD_7431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _w_country6731 = std::string(_w_country6731_n.data());
                int32_t _d_year6739 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 10);
                int32_t _d_moy6741 = tbl_JOIN_INNER_TD_7431_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 1, _cs_sales_price1125);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 2, _cs_net_paid_inc_tax1134);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name6721_n);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 4, _w_warehouse_sq_ft6722);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_city6727_n);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_county6728_n);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_state6729_n);
                tbl_JOIN_INNER_TD_6285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_country6731_n);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 9, _d_year6739);
                tbl_JOIN_INNER_TD_6285_output.setInt32(r, 10, _d_moy6741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6285_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6285_output #Row: " << tbl_JOIN_INNER_TD_6285_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6889_key_leftMajor {
    int32_t _ws_ship_mode_sk743;
    bool operator==(const SW_JOIN_INNER_TD_6889_key_leftMajor& other) const {
        return ((_ws_ship_mode_sk743 == other._ws_ship_mode_sk743));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6889_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6889_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_ship_mode_sk743));
    }
};
}
struct SW_JOIN_INNER_TD_6889_payload_leftMajor {
    int32_t _ws_ship_mode_sk743;
    int32_t _ws_quantity747;
    int32_t _ws_ext_sales_price752;
    int32_t _ws_net_paid758;
    std::string _w_warehouse_name497;
    int32_t _w_warehouse_sq_ft498;
    std::string _w_city503;
    std::string _w_county504;
    std::string _w_state505;
    std::string _w_country507;
    int32_t _d_year126;
    int32_t _d_moy128;
};
struct SW_JOIN_INNER_TD_6889_key_rightMajor {
    int32_t _sm_ship_mode_sk360;
    bool operator==(const SW_JOIN_INNER_TD_6889_key_rightMajor& other) const {
        return ((_sm_ship_mode_sk360 == other._sm_ship_mode_sk360));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6889_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6889_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sm_ship_mode_sk360));
    }
};
}
struct SW_JOIN_INNER_TD_6889_payload_rightMajor {
    int32_t _sm_ship_mode_sk360;
};
void SW_JOIN_INNER_TD_6889(Table &tbl_JOIN_INNER_TD_7652_output, Table &tbl_Filter_TD_7464_output, Table &tbl_JOIN_INNER_TD_6889_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_ship_mode_sk#743 = sm_ship_mode_sk#360))
    // Left Table: ListBuffer(ws_ship_mode_sk#743, ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, d_year#126, d_moy#128)
    // Right Table: ListBuffer(sm_ship_mode_sk#360)
    // Output Table: ListBuffer(ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, d_year#126, d_moy#128)
    int left_nrow = tbl_JOIN_INNER_TD_7652_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7464_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6889_key_leftMajor, SW_JOIN_INNER_TD_6889_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7652_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_ship_mode_sk743_k = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6889_key_leftMajor keyA{_ws_ship_mode_sk743_k};
            int32_t _ws_ship_mode_sk743 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 2);
            int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 3);
            std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
            int32_t _w_warehouse_sq_ft498 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 5);
            std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _w_city503 = std::string(_w_city503_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _w_county504 = std::string(_w_county504_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
            std::string _w_state505 = std::string(_w_state505_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
            std::string _w_country507 = std::string(_w_country507_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 10);
            int32_t _d_moy128 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_6889_payload_leftMajor payloadA{_ws_ship_mode_sk743, _ws_quantity747, _ws_ext_sales_price752, _ws_net_paid758, _w_warehouse_name497, _w_warehouse_sq_ft498, _w_city503, _w_county504, _w_state505, _w_country507, _d_year126, _d_moy128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7464_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sm_ship_mode_sk360_k = tbl_Filter_TD_7464_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6889_key_leftMajor{_sm_ship_mode_sk360_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_ship_mode_sk743 = (it->second)._ws_ship_mode_sk743;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _ws_net_paid758 = (it->second)._ws_net_paid758;
                std::string _w_warehouse_name497 = (it->second)._w_warehouse_name497;
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n{};
                memcpy(_w_warehouse_name497_n.data(), (_w_warehouse_name497).data(), (_w_warehouse_name497).length());
                int32_t _w_warehouse_sq_ft498 = (it->second)._w_warehouse_sq_ft498;
                std::string _w_city503 = (it->second)._w_city503;
                std::array<char, TPCDS_READ_MAX + 1> _w_city503_n{};
                memcpy(_w_city503_n.data(), (_w_city503).data(), (_w_city503).length());
                std::string _w_county504 = (it->second)._w_county504;
                std::array<char, TPCDS_READ_MAX + 1> _w_county504_n{};
                memcpy(_w_county504_n.data(), (_w_county504).data(), (_w_county504).length());
                std::string _w_state505 = (it->second)._w_state505;
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n{};
                memcpy(_w_state505_n.data(), (_w_state505).data(), (_w_state505).length());
                std::string _w_country507 = (it->second)._w_country507;
                std::array<char, TPCDS_READ_MAX + 1> _w_country507_n{};
                memcpy(_w_country507_n.data(), (_w_country507).data(), (_w_country507).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_moy128 = (it->second)._d_moy128;
                int32_t _sm_ship_mode_sk360 = tbl_Filter_TD_7464_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 2, _ws_net_paid758);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 4, _w_warehouse_sq_ft498);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_city503_n);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_county504_n);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_state505_n);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_country507_n);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 9, _d_year126);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 10, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6889_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6889_key_rightMajor, SW_JOIN_INNER_TD_6889_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7464_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sm_ship_mode_sk360_k = tbl_Filter_TD_7464_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6889_key_rightMajor keyA{_sm_ship_mode_sk360_k};
            int32_t _sm_ship_mode_sk360 = tbl_Filter_TD_7464_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6889_payload_rightMajor payloadA{_sm_ship_mode_sk360};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7652_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_ship_mode_sk743_k = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6889_key_rightMajor{_ws_ship_mode_sk743_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sm_ship_mode_sk360 = (it->second)._sm_ship_mode_sk360;
                int32_t _ws_ship_mode_sk743 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 2);
                int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 3);
                std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _w_warehouse_name497 = std::string(_w_warehouse_name497_n.data());
                int32_t _w_warehouse_sq_ft498 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 5);
                std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _w_city503 = std::string(_w_city503_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _w_county504 = std::string(_w_county504_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
                std::string _w_state505 = std::string(_w_state505_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_JOIN_INNER_TD_7652_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 9);
                std::string _w_country507 = std::string(_w_country507_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 10);
                int32_t _d_moy128 = tbl_JOIN_INNER_TD_7652_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 2, _ws_net_paid758);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_warehouse_name497_n);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 4, _w_warehouse_sq_ft498);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_city503_n);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _w_county504_n);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _w_state505_n);
                tbl_JOIN_INNER_TD_6889_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 8, _w_country507_n);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 9, _d_year126);
                tbl_JOIN_INNER_TD_6889_output.setInt32(r, 10, _d_moy128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6889_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6889_output #Row: " << tbl_JOIN_INNER_TD_6889_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5382_key {
    std::string _w_warehouse_name6721;
    int32_t _w_warehouse_sq_ft6722;
    std::string _w_city6727;
    std::string _w_county6728;
    std::string _w_state6729;
    std::string _w_country6731;
    int32_t _d_year6739;
    bool operator==(const SW_Aggregate_TD_5382_key& other) const { return (_w_warehouse_name6721 == other._w_warehouse_name6721) && (_w_warehouse_sq_ft6722 == other._w_warehouse_sq_ft6722) && (_w_city6727 == other._w_city6727) && (_w_county6728 == other._w_county6728) && (_w_state6729 == other._w_state6729) && (_w_country6731 == other._w_country6731) && (_d_year6739 == other._d_year6739); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5382_key> {
    std::size_t operator() (const SW_Aggregate_TD_5382_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._w_warehouse_name6721)) + (hash<int32_t>()(k._w_warehouse_sq_ft6722)) + (hash<string>()(k._w_city6727)) + (hash<string>()(k._w_county6728)) + (hash<string>()(k._w_state6729)) + (hash<string>()(k._w_country6731)) + (hash<int32_t>()(k._d_year6739));
    }
};
}
struct SW_Aggregate_TD_5382_payload {
    std::string _ship_carriers6657;
    int32_t _year6658;
    int32_t _jan_sales6659_sum_0;
    int32_t _feb_sales6660_sum_1;
    int32_t _mar_sales6661_sum_2;
    int32_t _apr_sales6662_sum_3;
    int32_t _may_sales6663_sum_4;
    int32_t _jun_sales6664_sum_5;
    int32_t _jul_sales6665_sum_6;
    int32_t _aug_sales6666_sum_7;
    int32_t _sep_sales6667_sum_8;
    int32_t _oct_sales6668_sum_9;
    int32_t _nov_sales6669_sum_10;
    int32_t _dec_sales6670_sum_11;
    int32_t _jan_net6671_sum_12;
    int32_t _feb_net6672_sum_13;
    int32_t _mar_net6673_sum_14;
    int32_t _apr_net6674_sum_15;
    int32_t _may_net6675_sum_16;
    int32_t _jun_net6676_sum_17;
    int32_t _jul_net6677_sum_18;
    int32_t _aug_net6678_sum_19;
    int32_t _sep_net6679_sum_20;
    int32_t _oct_net6680_sum_21;
    int32_t _nov_net6681_sum_22;
    int32_t _dec_net6682_sum_23;
};
void SW_Aggregate_TD_5382(Table &tbl_JOIN_INNER_TD_6285_output, Table &tbl_Aggregate_TD_5382_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731, d_year#6739, DHL,BARIAN AS ship_carriers#6657, d_year#6739 AS year#6658, sum(CASE WHEN (d_moy#6741 = 1) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jan_sales#6659, sum(CASE WHEN (d_moy#6741 = 2) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS feb_sales#6660, sum(CASE WHEN (d_moy#6741 = 3) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS mar_sales#6661, sum(CASE WHEN (d_moy#6741 = 4) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS apr_sales#6662, sum(CASE WHEN (d_moy#6741 = 5) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS may_sales#6663, sum(CASE WHEN (d_moy#6741 = 6) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jun_sales#6664, sum(CASE WHEN (d_moy#6741 = 7) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jul_sales#6665, sum(CASE WHEN (d_moy#6741 = 8) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS aug_sales#6666, sum(CASE WHEN (d_moy#6741 = 9) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS sep_sales#6667, sum(CASE WHEN (d_moy#6741 = 10) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS oct_sales#6668, sum(CASE WHEN (d_moy#6741 = 11) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS nov_sales#6669, sum(CASE WHEN (d_moy#6741 = 12) THEN CheckOverflow((promote_precision(cast(cs_sales_price#1125 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS dec_sales#6670, sum(CASE WHEN (d_moy#6741 = 1) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jan_net#6671, sum(CASE WHEN (d_moy#6741 = 2) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS feb_net#6672, sum(CASE WHEN (d_moy#6741 = 3) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS mar_net#6673, sum(CASE WHEN (d_moy#6741 = 4) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS apr_net#6674, sum(CASE WHEN (d_moy#6741 = 5) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS may_net#6675, sum(CASE WHEN (d_moy#6741 = 6) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jun_net#6676, sum(CASE WHEN (d_moy#6741 = 7) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jul_net#6677, sum(CASE WHEN (d_moy#6741 = 8) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS aug_net#6678, sum(CASE WHEN (d_moy#6741 = 9) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS sep_net#6679, sum(CASE WHEN (d_moy#6741 = 10) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS oct_net#6680, sum(CASE WHEN (d_moy#6741 = 11) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS nov_net#6681, sum(CASE WHEN (d_moy#6741 = 12) THEN CheckOverflow((promote_precision(cast(cs_net_paid_inc_tax#1134 as decimal(12,2))) * promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS dec_net#6682)
    // Input: ListBuffer(cs_quantity#1122, cs_sales_price#1125, cs_net_paid_inc_tax#1134, w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731, d_year#6739, d_moy#6741)
    // Output: ListBuffer(w_warehouse_name#6721, w_warehouse_sq_ft#6722, w_city#6727, w_county#6728, w_state#6729, w_country#6731, ship_carriers#6657, year#6658, jan_sales#6659, feb_sales#6660, mar_sales#6661, apr_sales#6662, may_sales#6663, jun_sales#6664, jul_sales#6665, aug_sales#6666, sep_sales#6667, oct_sales#6668, nov_sales#6669, dec_sales#6670, jan_net#6671, feb_net#6672, mar_net#6673, apr_net#6674, may_net#6675, jun_net#6676, jul_net#6677, aug_net#6678, sep_net#6679, oct_net#6680, nov_net#6681, dec_net#6682)
    std::unordered_map<SW_Aggregate_TD_5382_key, SW_Aggregate_TD_5382_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6285_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6285_output.getInt32(i, 0);
        int32_t _cs_sales_price1125 = tbl_JOIN_INNER_TD_6285_output.getInt32(i, 1);
        int32_t _cs_net_paid_inc_tax1134 = tbl_JOIN_INNER_TD_6285_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721 = tbl_JOIN_INNER_TD_6285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _w_warehouse_sq_ft6722 = tbl_JOIN_INNER_TD_6285_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _w_city6727 = tbl_JOIN_INNER_TD_6285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _w_county6728 = tbl_JOIN_INNER_TD_6285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _w_state6729 = tbl_JOIN_INNER_TD_6285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _w_country6731 = tbl_JOIN_INNER_TD_6285_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        int32_t _d_year6739 = tbl_JOIN_INNER_TD_6285_output.getInt32(i, 9);
        int32_t _d_moy6741 = tbl_JOIN_INNER_TD_6285_output.getInt32(i, 10);
        SW_Aggregate_TD_5382_key k{std::string(_w_warehouse_name6721.data()), _w_warehouse_sq_ft6722, std::string(_w_city6727.data()), std::string(_w_county6728.data()), std::string(_w_state6729.data()), std::string(_w_country6731.data()), _d_year6739};
        std::string _ship_carriers6657 = "DHL,BARIAN";
        int32_t _year6658 = _d_year6739;
        int64_t _jan_sales6659_sum_0 = (_d_moy6741 == 1) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _feb_sales6660_sum_1 = (_d_moy6741 == 2) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _mar_sales6661_sum_2 = (_d_moy6741 == 3) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _apr_sales6662_sum_3 = (_d_moy6741 == 4) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _may_sales6663_sum_4 = (_d_moy6741 == 5) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _jun_sales6664_sum_5 = (_d_moy6741 == 6) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _jul_sales6665_sum_6 = (_d_moy6741 == 7) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _aug_sales6666_sum_7 = (_d_moy6741 == 8) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _sep_sales6667_sum_8 = (_d_moy6741 == 9) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _oct_sales6668_sum_9 = (_d_moy6741 == 10) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _nov_sales6669_sum_10 = (_d_moy6741 == 11) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _dec_sales6670_sum_11 = (_d_moy6741 == 12) ? (_cs_sales_price1125 * _cs_quantity1122) : 0.00;
        int64_t _jan_net6671_sum_12 = (_d_moy6741 == 1) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _feb_net6672_sum_13 = (_d_moy6741 == 2) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _mar_net6673_sum_14 = (_d_moy6741 == 3) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _apr_net6674_sum_15 = (_d_moy6741 == 4) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _may_net6675_sum_16 = (_d_moy6741 == 5) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _jun_net6676_sum_17 = (_d_moy6741 == 6) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _jul_net6677_sum_18 = (_d_moy6741 == 7) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _aug_net6678_sum_19 = (_d_moy6741 == 8) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _sep_net6679_sum_20 = (_d_moy6741 == 9) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _oct_net6680_sum_21 = (_d_moy6741 == 10) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _nov_net6681_sum_22 = (_d_moy6741 == 11) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        int64_t _dec_net6682_sum_23 = (_d_moy6741 == 12) ? (_cs_net_paid_inc_tax1134 * _cs_quantity1122) : 0.00;
        SW_Aggregate_TD_5382_payload p{std::string(_ship_carriers6657.data()), _year6658, _jan_sales6659_sum_0, _feb_sales6660_sum_1, _mar_sales6661_sum_2, _apr_sales6662_sum_3, _may_sales6663_sum_4, _jun_sales6664_sum_5, _jul_sales6665_sum_6, _aug_sales6666_sum_7, _sep_sales6667_sum_8, _oct_sales6668_sum_9, _nov_sales6669_sum_10, _dec_sales6670_sum_11, _jan_net6671_sum_12, _feb_net6672_sum_13, _mar_net6673_sum_14, _apr_net6674_sum_15, _may_net6675_sum_16, _jun_net6676_sum_17, _jul_net6677_sum_18, _aug_net6678_sum_19, _sep_net6679_sum_20, _oct_net6680_sum_21, _nov_net6681_sum_22, _dec_net6682_sum_23};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._jan_sales6659_sum_0 + _jan_sales6659_sum_0;
            p._jan_sales6659_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._feb_sales6660_sum_1 + _feb_sales6660_sum_1;
            p._feb_sales6660_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._mar_sales6661_sum_2 + _mar_sales6661_sum_2;
            p._mar_sales6661_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._apr_sales6662_sum_3 + _apr_sales6662_sum_3;
            p._apr_sales6662_sum_3 = sum_3;
            int32_t sum_4 = (it->second)._may_sales6663_sum_4 + _may_sales6663_sum_4;
            p._may_sales6663_sum_4 = sum_4;
            int32_t sum_5 = (it->second)._jun_sales6664_sum_5 + _jun_sales6664_sum_5;
            p._jun_sales6664_sum_5 = sum_5;
            int32_t sum_6 = (it->second)._jul_sales6665_sum_6 + _jul_sales6665_sum_6;
            p._jul_sales6665_sum_6 = sum_6;
            int32_t sum_7 = (it->second)._aug_sales6666_sum_7 + _aug_sales6666_sum_7;
            p._aug_sales6666_sum_7 = sum_7;
            int32_t sum_8 = (it->second)._sep_sales6667_sum_8 + _sep_sales6667_sum_8;
            p._sep_sales6667_sum_8 = sum_8;
            int32_t sum_9 = (it->second)._oct_sales6668_sum_9 + _oct_sales6668_sum_9;
            p._oct_sales6668_sum_9 = sum_9;
            int32_t sum_10 = (it->second)._nov_sales6669_sum_10 + _nov_sales6669_sum_10;
            p._nov_sales6669_sum_10 = sum_10;
            int32_t sum_11 = (it->second)._dec_sales6670_sum_11 + _dec_sales6670_sum_11;
            p._dec_sales6670_sum_11 = sum_11;
            int32_t sum_12 = (it->second)._jan_net6671_sum_12 + _jan_net6671_sum_12;
            p._jan_net6671_sum_12 = sum_12;
            int32_t sum_13 = (it->second)._feb_net6672_sum_13 + _feb_net6672_sum_13;
            p._feb_net6672_sum_13 = sum_13;
            int32_t sum_14 = (it->second)._mar_net6673_sum_14 + _mar_net6673_sum_14;
            p._mar_net6673_sum_14 = sum_14;
            int32_t sum_15 = (it->second)._apr_net6674_sum_15 + _apr_net6674_sum_15;
            p._apr_net6674_sum_15 = sum_15;
            int32_t sum_16 = (it->second)._may_net6675_sum_16 + _may_net6675_sum_16;
            p._may_net6675_sum_16 = sum_16;
            int32_t sum_17 = (it->second)._jun_net6676_sum_17 + _jun_net6676_sum_17;
            p._jun_net6676_sum_17 = sum_17;
            int32_t sum_18 = (it->second)._jul_net6677_sum_18 + _jul_net6677_sum_18;
            p._jul_net6677_sum_18 = sum_18;
            int32_t sum_19 = (it->second)._aug_net6678_sum_19 + _aug_net6678_sum_19;
            p._aug_net6678_sum_19 = sum_19;
            int32_t sum_20 = (it->second)._sep_net6679_sum_20 + _sep_net6679_sum_20;
            p._sep_net6679_sum_20 = sum_20;
            int32_t sum_21 = (it->second)._oct_net6680_sum_21 + _oct_net6680_sum_21;
            p._oct_net6680_sum_21 = sum_21;
            int32_t sum_22 = (it->second)._nov_net6681_sum_22 + _nov_net6681_sum_22;
            p._nov_net6681_sum_22 = sum_22;
            int32_t sum_23 = (it->second)._dec_net6682_sum_23 + _dec_net6682_sum_23;
            p._dec_net6682_sum_23 = sum_23;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721{};
        memcpy(_w_warehouse_name6721.data(), ((it.first)._w_warehouse_name6721).data(), ((it.first)._w_warehouse_name6721).length());
        tbl_Aggregate_TD_5382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name6721);
        tbl_Aggregate_TD_5382_output.setInt32(r, 1, (it.first)._w_warehouse_sq_ft6722);
        std::array<char, TPCDS_READ_MAX + 1> _w_city6727{};
        memcpy(_w_city6727.data(), ((it.first)._w_city6727).data(), ((it.first)._w_city6727).length());
        tbl_Aggregate_TD_5382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_city6727);
        std::array<char, TPCDS_READ_MAX + 1> _w_county6728{};
        memcpy(_w_county6728.data(), ((it.first)._w_county6728).data(), ((it.first)._w_county6728).length());
        tbl_Aggregate_TD_5382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_county6728);
        std::array<char, TPCDS_READ_MAX + 1> _w_state6729{};
        memcpy(_w_state6729.data(), ((it.first)._w_state6729).data(), ((it.first)._w_state6729).length());
        tbl_Aggregate_TD_5382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state6729);
        std::array<char, TPCDS_READ_MAX + 1> _w_country6731{};
        memcpy(_w_country6731.data(), ((it.first)._w_country6731).data(), ((it.first)._w_country6731).length());
        tbl_Aggregate_TD_5382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_country6731);
        // _d_year6739 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6657_n{};
        memcpy(_ship_carriers6657_n.data(), (it.second)._ship_carriers6657.data(), (it.second)._ship_carriers6657.length());
        tbl_Aggregate_TD_5382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ship_carriers6657_n);
        tbl_Aggregate_TD_5382_output.setInt32(r, 7, (it.second)._year6658);
        int32_t _jan_sales6659 = (it.second)._jan_sales6659_sum_0;
        tbl_Aggregate_TD_5382_output.setInt32(r, 8, _jan_sales6659);
        int32_t _feb_sales6660 = (it.second)._feb_sales6660_sum_1;
        tbl_Aggregate_TD_5382_output.setInt32(r, 9, _feb_sales6660);
        int32_t _mar_sales6661 = (it.second)._mar_sales6661_sum_2;
        tbl_Aggregate_TD_5382_output.setInt32(r, 10, _mar_sales6661);
        int32_t _apr_sales6662 = (it.second)._apr_sales6662_sum_3;
        tbl_Aggregate_TD_5382_output.setInt32(r, 11, _apr_sales6662);
        int32_t _may_sales6663 = (it.second)._may_sales6663_sum_4;
        tbl_Aggregate_TD_5382_output.setInt32(r, 12, _may_sales6663);
        int32_t _jun_sales6664 = (it.second)._jun_sales6664_sum_5;
        tbl_Aggregate_TD_5382_output.setInt32(r, 13, _jun_sales6664);
        int32_t _jul_sales6665 = (it.second)._jul_sales6665_sum_6;
        tbl_Aggregate_TD_5382_output.setInt32(r, 14, _jul_sales6665);
        int32_t _aug_sales6666 = (it.second)._aug_sales6666_sum_7;
        tbl_Aggregate_TD_5382_output.setInt32(r, 15, _aug_sales6666);
        int32_t _sep_sales6667 = (it.second)._sep_sales6667_sum_8;
        tbl_Aggregate_TD_5382_output.setInt32(r, 16, _sep_sales6667);
        int32_t _oct_sales6668 = (it.second)._oct_sales6668_sum_9;
        tbl_Aggregate_TD_5382_output.setInt32(r, 17, _oct_sales6668);
        int32_t _nov_sales6669 = (it.second)._nov_sales6669_sum_10;
        tbl_Aggregate_TD_5382_output.setInt32(r, 18, _nov_sales6669);
        int32_t _dec_sales6670 = (it.second)._dec_sales6670_sum_11;
        tbl_Aggregate_TD_5382_output.setInt32(r, 19, _dec_sales6670);
        int32_t _jan_net6671 = (it.second)._jan_net6671_sum_12;
        tbl_Aggregate_TD_5382_output.setInt32(r, 20, _jan_net6671);
        int32_t _feb_net6672 = (it.second)._feb_net6672_sum_13;
        tbl_Aggregate_TD_5382_output.setInt32(r, 21, _feb_net6672);
        int32_t _mar_net6673 = (it.second)._mar_net6673_sum_14;
        tbl_Aggregate_TD_5382_output.setInt32(r, 22, _mar_net6673);
        int32_t _apr_net6674 = (it.second)._apr_net6674_sum_15;
        tbl_Aggregate_TD_5382_output.setInt32(r, 23, _apr_net6674);
        int32_t _may_net6675 = (it.second)._may_net6675_sum_16;
        tbl_Aggregate_TD_5382_output.setInt32(r, 24, _may_net6675);
        int32_t _jun_net6676 = (it.second)._jun_net6676_sum_17;
        tbl_Aggregate_TD_5382_output.setInt32(r, 25, _jun_net6676);
        int32_t _jul_net6677 = (it.second)._jul_net6677_sum_18;
        tbl_Aggregate_TD_5382_output.setInt32(r, 26, _jul_net6677);
        int32_t _aug_net6678 = (it.second)._aug_net6678_sum_19;
        tbl_Aggregate_TD_5382_output.setInt32(r, 27, _aug_net6678);
        int32_t _sep_net6679 = (it.second)._sep_net6679_sum_20;
        tbl_Aggregate_TD_5382_output.setInt32(r, 28, _sep_net6679);
        int32_t _oct_net6680 = (it.second)._oct_net6680_sum_21;
        tbl_Aggregate_TD_5382_output.setInt32(r, 29, _oct_net6680);
        int32_t _nov_net6681 = (it.second)._nov_net6681_sum_22;
        tbl_Aggregate_TD_5382_output.setInt32(r, 30, _nov_net6681);
        int32_t _dec_net6682 = (it.second)._dec_net6682_sum_23;
        tbl_Aggregate_TD_5382_output.setInt32(r, 31, _dec_net6682);
        ++r;
    }
    tbl_Aggregate_TD_5382_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5382_output #Row: " << tbl_Aggregate_TD_5382_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5722_key {
    std::string _w_warehouse_name497;
    int32_t _w_warehouse_sq_ft498;
    std::string _w_city503;
    std::string _w_county504;
    std::string _w_state505;
    std::string _w_country507;
    int32_t _d_year126;
    bool operator==(const SW_Aggregate_TD_5722_key& other) const { return (_w_warehouse_name497 == other._w_warehouse_name497) && (_w_warehouse_sq_ft498 == other._w_warehouse_sq_ft498) && (_w_city503 == other._w_city503) && (_w_county504 == other._w_county504) && (_w_state505 == other._w_state505) && (_w_country507 == other._w_country507) && (_d_year126 == other._d_year126); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5722_key> {
    std::size_t operator() (const SW_Aggregate_TD_5722_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._w_warehouse_name497)) + (hash<int32_t>()(k._w_warehouse_sq_ft498)) + (hash<string>()(k._w_city503)) + (hash<string>()(k._w_county504)) + (hash<string>()(k._w_state505)) + (hash<string>()(k._w_country507)) + (hash<int32_t>()(k._d_year126));
    }
};
}
struct SW_Aggregate_TD_5722_payload {
    std::string _ship_carriers6631;
    int32_t _year6632;
    int32_t _jan_sales6633_sum_0;
    int32_t _feb_sales6634_sum_1;
    int32_t _mar_sales6635_sum_2;
    int32_t _apr_sales6636_sum_3;
    int32_t _may_sales6637_sum_4;
    int32_t _jun_sales6638_sum_5;
    int32_t _jul_sales6639_sum_6;
    int32_t _aug_sales6640_sum_7;
    int32_t _sep_sales6641_sum_8;
    int32_t _oct_sales6642_sum_9;
    int32_t _nov_sales6643_sum_10;
    int32_t _dec_sales6644_sum_11;
    int32_t _jan_net6645_sum_12;
    int32_t _feb_net6646_sum_13;
    int32_t _mar_net6647_sum_14;
    int32_t _apr_net6648_sum_15;
    int32_t _may_net6649_sum_16;
    int32_t _jun_net6650_sum_17;
    int32_t _jul_net6651_sum_18;
    int32_t _aug_net6652_sum_19;
    int32_t _sep_net6653_sum_20;
    int32_t _oct_net6654_sum_21;
    int32_t _nov_net6655_sum_22;
    int32_t _dec_net6656_sum_23;
};
void SW_Aggregate_TD_5722(Table &tbl_JOIN_INNER_TD_6889_output, Table &tbl_Aggregate_TD_5722_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, d_year#126, DHL,BARIAN AS ship_carriers#6631, d_year#126 AS year#6632, sum(CASE WHEN (d_moy#128 = 1) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jan_sales#6633, sum(CASE WHEN (d_moy#128 = 2) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS feb_sales#6634, sum(CASE WHEN (d_moy#128 = 3) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS mar_sales#6635, sum(CASE WHEN (d_moy#128 = 4) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS apr_sales#6636, sum(CASE WHEN (d_moy#128 = 5) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS may_sales#6637, sum(CASE WHEN (d_moy#128 = 6) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jun_sales#6638, sum(CASE WHEN (d_moy#128 = 7) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jul_sales#6639, sum(CASE WHEN (d_moy#128 = 8) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS aug_sales#6640, sum(CASE WHEN (d_moy#128 = 9) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS sep_sales#6641, sum(CASE WHEN (d_moy#128 = 10) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS oct_sales#6642, sum(CASE WHEN (d_moy#128 = 11) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS nov_sales#6643, sum(CASE WHEN (d_moy#128 = 12) THEN CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS dec_sales#6644, sum(CASE WHEN (d_moy#128 = 1) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jan_net#6645, sum(CASE WHEN (d_moy#128 = 2) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS feb_net#6646, sum(CASE WHEN (d_moy#128 = 3) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS mar_net#6647, sum(CASE WHEN (d_moy#128 = 4) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS apr_net#6648, sum(CASE WHEN (d_moy#128 = 5) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS may_net#6649, sum(CASE WHEN (d_moy#128 = 6) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jun_net#6650, sum(CASE WHEN (d_moy#128 = 7) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS jul_net#6651, sum(CASE WHEN (d_moy#128 = 8) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS aug_net#6652, sum(CASE WHEN (d_moy#128 = 9) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS sep_net#6653, sum(CASE WHEN (d_moy#128 = 10) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS oct_net#6654, sum(CASE WHEN (d_moy#128 = 11) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS nov_net#6655, sum(CASE WHEN (d_moy#128 = 12) THEN CheckOverflow((promote_precision(cast(ws_net_paid#758 as decimal(12,2))) * promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2)))), DecimalType(18,2), true) ELSE 0.00 END) AS dec_net#6656)
    // Input: ListBuffer(ws_quantity#747, ws_ext_sales_price#752, ws_net_paid#758, w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, d_year#126, d_moy#128)
    // Output: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6633, feb_sales#6634, mar_sales#6635, apr_sales#6636, may_sales#6637, jun_sales#6638, jul_sales#6639, aug_sales#6640, sep_sales#6641, oct_sales#6642, nov_sales#6643, dec_sales#6644, jan_net#6645, feb_net#6646, mar_net#6647, apr_net#6648, may_net#6649, jun_net#6650, jul_net#6651, aug_net#6652, sep_net#6653, oct_net#6654, nov_net#6655, dec_net#6656)
    std::unordered_map<SW_Aggregate_TD_5722_key, SW_Aggregate_TD_5722_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6889_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_6889_output.getInt32(i, 0);
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6889_output.getInt32(i, 1);
        int32_t _ws_net_paid758 = tbl_JOIN_INNER_TD_6889_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_JOIN_INNER_TD_6889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _w_warehouse_sq_ft498 = tbl_JOIN_INNER_TD_6889_output.getInt32(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _w_city503 = tbl_JOIN_INNER_TD_6889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504 = tbl_JOIN_INNER_TD_6889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505 = tbl_JOIN_INNER_TD_6889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507 = tbl_JOIN_INNER_TD_6889_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 8);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_6889_output.getInt32(i, 9);
        int32_t _d_moy128 = tbl_JOIN_INNER_TD_6889_output.getInt32(i, 10);
        SW_Aggregate_TD_5722_key k{std::string(_w_warehouse_name497.data()), _w_warehouse_sq_ft498, std::string(_w_city503.data()), std::string(_w_county504.data()), std::string(_w_state505.data()), std::string(_w_country507.data()), _d_year126};
        std::string _ship_carriers6631 = "DHL,BARIAN";
        int32_t _year6632 = _d_year126;
        int64_t _jan_sales6633_sum_0 = (_d_moy128 == 1) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _feb_sales6634_sum_1 = (_d_moy128 == 2) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _mar_sales6635_sum_2 = (_d_moy128 == 3) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _apr_sales6636_sum_3 = (_d_moy128 == 4) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _may_sales6637_sum_4 = (_d_moy128 == 5) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _jun_sales6638_sum_5 = (_d_moy128 == 6) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _jul_sales6639_sum_6 = (_d_moy128 == 7) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _aug_sales6640_sum_7 = (_d_moy128 == 8) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _sep_sales6641_sum_8 = (_d_moy128 == 9) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _oct_sales6642_sum_9 = (_d_moy128 == 10) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _nov_sales6643_sum_10 = (_d_moy128 == 11) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _dec_sales6644_sum_11 = (_d_moy128 == 12) ? (_ws_ext_sales_price752 * _ws_quantity747) : 0.00;
        int64_t _jan_net6645_sum_12 = (_d_moy128 == 1) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _feb_net6646_sum_13 = (_d_moy128 == 2) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _mar_net6647_sum_14 = (_d_moy128 == 3) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _apr_net6648_sum_15 = (_d_moy128 == 4) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _may_net6649_sum_16 = (_d_moy128 == 5) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _jun_net6650_sum_17 = (_d_moy128 == 6) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _jul_net6651_sum_18 = (_d_moy128 == 7) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _aug_net6652_sum_19 = (_d_moy128 == 8) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _sep_net6653_sum_20 = (_d_moy128 == 9) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _oct_net6654_sum_21 = (_d_moy128 == 10) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _nov_net6655_sum_22 = (_d_moy128 == 11) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        int64_t _dec_net6656_sum_23 = (_d_moy128 == 12) ? (_ws_net_paid758 * _ws_quantity747) : 0.00;
        SW_Aggregate_TD_5722_payload p{std::string(_ship_carriers6631.data()), _year6632, _jan_sales6633_sum_0, _feb_sales6634_sum_1, _mar_sales6635_sum_2, _apr_sales6636_sum_3, _may_sales6637_sum_4, _jun_sales6638_sum_5, _jul_sales6639_sum_6, _aug_sales6640_sum_7, _sep_sales6641_sum_8, _oct_sales6642_sum_9, _nov_sales6643_sum_10, _dec_sales6644_sum_11, _jan_net6645_sum_12, _feb_net6646_sum_13, _mar_net6647_sum_14, _apr_net6648_sum_15, _may_net6649_sum_16, _jun_net6650_sum_17, _jul_net6651_sum_18, _aug_net6652_sum_19, _sep_net6653_sum_20, _oct_net6654_sum_21, _nov_net6655_sum_22, _dec_net6656_sum_23};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._jan_sales6633_sum_0 + _jan_sales6633_sum_0;
            p._jan_sales6633_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._feb_sales6634_sum_1 + _feb_sales6634_sum_1;
            p._feb_sales6634_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._mar_sales6635_sum_2 + _mar_sales6635_sum_2;
            p._mar_sales6635_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._apr_sales6636_sum_3 + _apr_sales6636_sum_3;
            p._apr_sales6636_sum_3 = sum_3;
            int32_t sum_4 = (it->second)._may_sales6637_sum_4 + _may_sales6637_sum_4;
            p._may_sales6637_sum_4 = sum_4;
            int32_t sum_5 = (it->second)._jun_sales6638_sum_5 + _jun_sales6638_sum_5;
            p._jun_sales6638_sum_5 = sum_5;
            int32_t sum_6 = (it->second)._jul_sales6639_sum_6 + _jul_sales6639_sum_6;
            p._jul_sales6639_sum_6 = sum_6;
            int32_t sum_7 = (it->second)._aug_sales6640_sum_7 + _aug_sales6640_sum_7;
            p._aug_sales6640_sum_7 = sum_7;
            int32_t sum_8 = (it->second)._sep_sales6641_sum_8 + _sep_sales6641_sum_8;
            p._sep_sales6641_sum_8 = sum_8;
            int32_t sum_9 = (it->second)._oct_sales6642_sum_9 + _oct_sales6642_sum_9;
            p._oct_sales6642_sum_9 = sum_9;
            int32_t sum_10 = (it->second)._nov_sales6643_sum_10 + _nov_sales6643_sum_10;
            p._nov_sales6643_sum_10 = sum_10;
            int32_t sum_11 = (it->second)._dec_sales6644_sum_11 + _dec_sales6644_sum_11;
            p._dec_sales6644_sum_11 = sum_11;
            int32_t sum_12 = (it->second)._jan_net6645_sum_12 + _jan_net6645_sum_12;
            p._jan_net6645_sum_12 = sum_12;
            int32_t sum_13 = (it->second)._feb_net6646_sum_13 + _feb_net6646_sum_13;
            p._feb_net6646_sum_13 = sum_13;
            int32_t sum_14 = (it->second)._mar_net6647_sum_14 + _mar_net6647_sum_14;
            p._mar_net6647_sum_14 = sum_14;
            int32_t sum_15 = (it->second)._apr_net6648_sum_15 + _apr_net6648_sum_15;
            p._apr_net6648_sum_15 = sum_15;
            int32_t sum_16 = (it->second)._may_net6649_sum_16 + _may_net6649_sum_16;
            p._may_net6649_sum_16 = sum_16;
            int32_t sum_17 = (it->second)._jun_net6650_sum_17 + _jun_net6650_sum_17;
            p._jun_net6650_sum_17 = sum_17;
            int32_t sum_18 = (it->second)._jul_net6651_sum_18 + _jul_net6651_sum_18;
            p._jul_net6651_sum_18 = sum_18;
            int32_t sum_19 = (it->second)._aug_net6652_sum_19 + _aug_net6652_sum_19;
            p._aug_net6652_sum_19 = sum_19;
            int32_t sum_20 = (it->second)._sep_net6653_sum_20 + _sep_net6653_sum_20;
            p._sep_net6653_sum_20 = sum_20;
            int32_t sum_21 = (it->second)._oct_net6654_sum_21 + _oct_net6654_sum_21;
            p._oct_net6654_sum_21 = sum_21;
            int32_t sum_22 = (it->second)._nov_net6655_sum_22 + _nov_net6655_sum_22;
            p._nov_net6655_sum_22 = sum_22;
            int32_t sum_23 = (it->second)._dec_net6656_sum_23 + _dec_net6656_sum_23;
            p._dec_net6656_sum_23 = sum_23;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497{};
        memcpy(_w_warehouse_name497.data(), ((it.first)._w_warehouse_name497).data(), ((it.first)._w_warehouse_name497).length());
        tbl_Aggregate_TD_5722_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name497);
        tbl_Aggregate_TD_5722_output.setInt32(r, 1, (it.first)._w_warehouse_sq_ft498);
        std::array<char, TPCDS_READ_MAX + 1> _w_city503{};
        memcpy(_w_city503.data(), ((it.first)._w_city503).data(), ((it.first)._w_city503).length());
        tbl_Aggregate_TD_5722_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_city503);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504{};
        memcpy(_w_county504.data(), ((it.first)._w_county504).data(), ((it.first)._w_county504).length());
        tbl_Aggregate_TD_5722_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_county504);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505{};
        memcpy(_w_state505.data(), ((it.first)._w_state505).data(), ((it.first)._w_state505).length());
        tbl_Aggregate_TD_5722_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state505);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507{};
        memcpy(_w_country507.data(), ((it.first)._w_country507).data(), ((it.first)._w_country507).length());
        tbl_Aggregate_TD_5722_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_country507);
        // _d_year126 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6631_n{};
        memcpy(_ship_carriers6631_n.data(), (it.second)._ship_carriers6631.data(), (it.second)._ship_carriers6631.length());
        tbl_Aggregate_TD_5722_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ship_carriers6631_n);
        tbl_Aggregate_TD_5722_output.setInt32(r, 7, (it.second)._year6632);
        int32_t _jan_sales6633 = (it.second)._jan_sales6633_sum_0;
        tbl_Aggregate_TD_5722_output.setInt32(r, 8, _jan_sales6633);
        int32_t _feb_sales6634 = (it.second)._feb_sales6634_sum_1;
        tbl_Aggregate_TD_5722_output.setInt32(r, 9, _feb_sales6634);
        int32_t _mar_sales6635 = (it.second)._mar_sales6635_sum_2;
        tbl_Aggregate_TD_5722_output.setInt32(r, 10, _mar_sales6635);
        int32_t _apr_sales6636 = (it.second)._apr_sales6636_sum_3;
        tbl_Aggregate_TD_5722_output.setInt32(r, 11, _apr_sales6636);
        int32_t _may_sales6637 = (it.second)._may_sales6637_sum_4;
        tbl_Aggregate_TD_5722_output.setInt32(r, 12, _may_sales6637);
        int32_t _jun_sales6638 = (it.second)._jun_sales6638_sum_5;
        tbl_Aggregate_TD_5722_output.setInt32(r, 13, _jun_sales6638);
        int32_t _jul_sales6639 = (it.second)._jul_sales6639_sum_6;
        tbl_Aggregate_TD_5722_output.setInt32(r, 14, _jul_sales6639);
        int32_t _aug_sales6640 = (it.second)._aug_sales6640_sum_7;
        tbl_Aggregate_TD_5722_output.setInt32(r, 15, _aug_sales6640);
        int32_t _sep_sales6641 = (it.second)._sep_sales6641_sum_8;
        tbl_Aggregate_TD_5722_output.setInt32(r, 16, _sep_sales6641);
        int32_t _oct_sales6642 = (it.second)._oct_sales6642_sum_9;
        tbl_Aggregate_TD_5722_output.setInt32(r, 17, _oct_sales6642);
        int32_t _nov_sales6643 = (it.second)._nov_sales6643_sum_10;
        tbl_Aggregate_TD_5722_output.setInt32(r, 18, _nov_sales6643);
        int32_t _dec_sales6644 = (it.second)._dec_sales6644_sum_11;
        tbl_Aggregate_TD_5722_output.setInt32(r, 19, _dec_sales6644);
        int32_t _jan_net6645 = (it.second)._jan_net6645_sum_12;
        tbl_Aggregate_TD_5722_output.setInt32(r, 20, _jan_net6645);
        int32_t _feb_net6646 = (it.second)._feb_net6646_sum_13;
        tbl_Aggregate_TD_5722_output.setInt32(r, 21, _feb_net6646);
        int32_t _mar_net6647 = (it.second)._mar_net6647_sum_14;
        tbl_Aggregate_TD_5722_output.setInt32(r, 22, _mar_net6647);
        int32_t _apr_net6648 = (it.second)._apr_net6648_sum_15;
        tbl_Aggregate_TD_5722_output.setInt32(r, 23, _apr_net6648);
        int32_t _may_net6649 = (it.second)._may_net6649_sum_16;
        tbl_Aggregate_TD_5722_output.setInt32(r, 24, _may_net6649);
        int32_t _jun_net6650 = (it.second)._jun_net6650_sum_17;
        tbl_Aggregate_TD_5722_output.setInt32(r, 25, _jun_net6650);
        int32_t _jul_net6651 = (it.second)._jul_net6651_sum_18;
        tbl_Aggregate_TD_5722_output.setInt32(r, 26, _jul_net6651);
        int32_t _aug_net6652 = (it.second)._aug_net6652_sum_19;
        tbl_Aggregate_TD_5722_output.setInt32(r, 27, _aug_net6652);
        int32_t _sep_net6653 = (it.second)._sep_net6653_sum_20;
        tbl_Aggregate_TD_5722_output.setInt32(r, 28, _sep_net6653);
        int32_t _oct_net6654 = (it.second)._oct_net6654_sum_21;
        tbl_Aggregate_TD_5722_output.setInt32(r, 29, _oct_net6654);
        int32_t _nov_net6655 = (it.second)._nov_net6655_sum_22;
        tbl_Aggregate_TD_5722_output.setInt32(r, 30, _nov_net6655);
        int32_t _dec_net6656 = (it.second)._dec_net6656_sum_23;
        tbl_Aggregate_TD_5722_output.setInt32(r, 31, _dec_net6656);
        ++r;
    }
    tbl_Aggregate_TD_5722_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5722_output #Row: " << tbl_Aggregate_TD_5722_output.getNumRow() << std::endl;
}

void SW_Union_TD_4115(Table &tbl_Aggregate_TD_5722_output, Table &tbl_Aggregate_TD_5382_output, Table &tbl_Union_TD_4115_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6633, feb_sales#6634, mar_sales#6635, apr_sales#6636, may_sales#6637, jun_sales#6638, jul_sales#6639, aug_sales#6640, sep_sales#6641, oct_sales#6642, nov_sales#6643, dec_sales#6644, jan_net#6645, feb_net#6646, mar_net#6647, apr_net#6648, may_net#6649, jun_net#6650, jul_net#6651, aug_net#6652, sep_net#6653, oct_net#6654, nov_net#6655, dec_net#6656)
    int r = 0;
    int row0 = tbl_Aggregate_TD_5722_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name497_n);
        tbl_Union_TD_4115_output.setInt32(r, 1, tbl_Aggregate_TD_5722_output.getInt32(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_city503_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_county504_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state505_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_country507_n);
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6631_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ship_carriers6631_n);
        tbl_Union_TD_4115_output.setInt32(r, 7, tbl_Aggregate_TD_5722_output.getInt32(i, 7));
        tbl_Union_TD_4115_output.setInt32(r, 8, tbl_Aggregate_TD_5722_output.getInt32(i, 8));
        tbl_Union_TD_4115_output.setInt32(r, 9, tbl_Aggregate_TD_5722_output.getInt32(i, 9));
        tbl_Union_TD_4115_output.setInt32(r, 10, tbl_Aggregate_TD_5722_output.getInt32(i, 10));
        tbl_Union_TD_4115_output.setInt32(r, 11, tbl_Aggregate_TD_5722_output.getInt32(i, 11));
        tbl_Union_TD_4115_output.setInt32(r, 12, tbl_Aggregate_TD_5722_output.getInt32(i, 12));
        tbl_Union_TD_4115_output.setInt32(r, 13, tbl_Aggregate_TD_5722_output.getInt32(i, 13));
        tbl_Union_TD_4115_output.setInt32(r, 14, tbl_Aggregate_TD_5722_output.getInt32(i, 14));
        tbl_Union_TD_4115_output.setInt32(r, 15, tbl_Aggregate_TD_5722_output.getInt32(i, 15));
        tbl_Union_TD_4115_output.setInt32(r, 16, tbl_Aggregate_TD_5722_output.getInt32(i, 16));
        tbl_Union_TD_4115_output.setInt32(r, 17, tbl_Aggregate_TD_5722_output.getInt32(i, 17));
        tbl_Union_TD_4115_output.setInt32(r, 18, tbl_Aggregate_TD_5722_output.getInt32(i, 18));
        tbl_Union_TD_4115_output.setInt32(r, 19, tbl_Aggregate_TD_5722_output.getInt32(i, 19));
        tbl_Union_TD_4115_output.setInt32(r, 20, tbl_Aggregate_TD_5722_output.getInt32(i, 20));
        tbl_Union_TD_4115_output.setInt32(r, 21, tbl_Aggregate_TD_5722_output.getInt32(i, 21));
        tbl_Union_TD_4115_output.setInt32(r, 22, tbl_Aggregate_TD_5722_output.getInt32(i, 22));
        tbl_Union_TD_4115_output.setInt32(r, 23, tbl_Aggregate_TD_5722_output.getInt32(i, 23));
        tbl_Union_TD_4115_output.setInt32(r, 24, tbl_Aggregate_TD_5722_output.getInt32(i, 24));
        tbl_Union_TD_4115_output.setInt32(r, 25, tbl_Aggregate_TD_5722_output.getInt32(i, 25));
        tbl_Union_TD_4115_output.setInt32(r, 26, tbl_Aggregate_TD_5722_output.getInt32(i, 26));
        tbl_Union_TD_4115_output.setInt32(r, 27, tbl_Aggregate_TD_5722_output.getInt32(i, 27));
        tbl_Union_TD_4115_output.setInt32(r, 28, tbl_Aggregate_TD_5722_output.getInt32(i, 28));
        tbl_Union_TD_4115_output.setInt32(r, 29, tbl_Aggregate_TD_5722_output.getInt32(i, 29));
        tbl_Union_TD_4115_output.setInt32(r, 30, tbl_Aggregate_TD_5722_output.getInt32(i, 30));
        tbl_Union_TD_4115_output.setInt32(r, 31, tbl_Aggregate_TD_5722_output.getInt32(i, 31));
        ++r;
    }
    int row1 = tbl_Aggregate_TD_5382_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name6721_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name6721_n);
        tbl_Union_TD_4115_output.setInt32(r, 1, tbl_Aggregate_TD_5382_output.getInt32(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _w_city6727_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_city6727_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_county6728_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_county6728_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_state6729_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state6729_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_country6731_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_country6731_n);
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6657_n = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_Union_TD_4115_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ship_carriers6657_n);
        tbl_Union_TD_4115_output.setInt32(r, 7, tbl_Aggregate_TD_5382_output.getInt32(i, 7));
        tbl_Union_TD_4115_output.setInt32(r, 8, tbl_Aggregate_TD_5382_output.getInt32(i, 8));
        tbl_Union_TD_4115_output.setInt32(r, 9, tbl_Aggregate_TD_5382_output.getInt32(i, 9));
        tbl_Union_TD_4115_output.setInt32(r, 10, tbl_Aggregate_TD_5382_output.getInt32(i, 10));
        tbl_Union_TD_4115_output.setInt32(r, 11, tbl_Aggregate_TD_5382_output.getInt32(i, 11));
        tbl_Union_TD_4115_output.setInt32(r, 12, tbl_Aggregate_TD_5382_output.getInt32(i, 12));
        tbl_Union_TD_4115_output.setInt32(r, 13, tbl_Aggregate_TD_5382_output.getInt32(i, 13));
        tbl_Union_TD_4115_output.setInt32(r, 14, tbl_Aggregate_TD_5382_output.getInt32(i, 14));
        tbl_Union_TD_4115_output.setInt32(r, 15, tbl_Aggregate_TD_5382_output.getInt32(i, 15));
        tbl_Union_TD_4115_output.setInt32(r, 16, tbl_Aggregate_TD_5382_output.getInt32(i, 16));
        tbl_Union_TD_4115_output.setInt32(r, 17, tbl_Aggregate_TD_5382_output.getInt32(i, 17));
        tbl_Union_TD_4115_output.setInt32(r, 18, tbl_Aggregate_TD_5382_output.getInt32(i, 18));
        tbl_Union_TD_4115_output.setInt32(r, 19, tbl_Aggregate_TD_5382_output.getInt32(i, 19));
        tbl_Union_TD_4115_output.setInt32(r, 20, tbl_Aggregate_TD_5382_output.getInt32(i, 20));
        tbl_Union_TD_4115_output.setInt32(r, 21, tbl_Aggregate_TD_5382_output.getInt32(i, 21));
        tbl_Union_TD_4115_output.setInt32(r, 22, tbl_Aggregate_TD_5382_output.getInt32(i, 22));
        tbl_Union_TD_4115_output.setInt32(r, 23, tbl_Aggregate_TD_5382_output.getInt32(i, 23));
        tbl_Union_TD_4115_output.setInt32(r, 24, tbl_Aggregate_TD_5382_output.getInt32(i, 24));
        tbl_Union_TD_4115_output.setInt32(r, 25, tbl_Aggregate_TD_5382_output.getInt32(i, 25));
        tbl_Union_TD_4115_output.setInt32(r, 26, tbl_Aggregate_TD_5382_output.getInt32(i, 26));
        tbl_Union_TD_4115_output.setInt32(r, 27, tbl_Aggregate_TD_5382_output.getInt32(i, 27));
        tbl_Union_TD_4115_output.setInt32(r, 28, tbl_Aggregate_TD_5382_output.getInt32(i, 28));
        tbl_Union_TD_4115_output.setInt32(r, 29, tbl_Aggregate_TD_5382_output.getInt32(i, 29));
        tbl_Union_TD_4115_output.setInt32(r, 30, tbl_Aggregate_TD_5382_output.getInt32(i, 30));
        tbl_Union_TD_4115_output.setInt32(r, 31, tbl_Aggregate_TD_5382_output.getInt32(i, 31));
        ++r;
    }
    tbl_Union_TD_4115_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4115_output #Row: " << tbl_Union_TD_4115_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3208_key {
    std::string _w_warehouse_name497;
    int32_t _w_warehouse_sq_ft498;
    std::string _w_city503;
    std::string _w_county504;
    std::string _w_state505;
    std::string _w_country507;
    std::string _ship_carriers6631;
    int32_t _year6632;
    bool operator==(const SW_Aggregate_TD_3208_key& other) const { return (_w_warehouse_name497 == other._w_warehouse_name497) && (_w_warehouse_sq_ft498 == other._w_warehouse_sq_ft498) && (_w_city503 == other._w_city503) && (_w_county504 == other._w_county504) && (_w_state505 == other._w_state505) && (_w_country507 == other._w_country507) && (_ship_carriers6631 == other._ship_carriers6631) && (_year6632 == other._year6632); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3208_key> {
    std::size_t operator() (const SW_Aggregate_TD_3208_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._w_warehouse_name497)) + (hash<int32_t>()(k._w_warehouse_sq_ft498)) + (hash<string>()(k._w_city503)) + (hash<string>()(k._w_county504)) + (hash<string>()(k._w_state505)) + (hash<string>()(k._w_country507)) + (hash<string>()(k._ship_carriers6631)) + (hash<int32_t>()(k._year6632));
    }
};
}
struct SW_Aggregate_TD_3208_payload {
    int32_t _jan_sales6683_sum_0;
    int32_t _feb_sales6684_sum_1;
    int32_t _mar_sales6685_sum_2;
    int32_t _apr_sales6686_sum_3;
    int32_t _may_sales6687_sum_4;
    int32_t _jun_sales6688_sum_5;
    int32_t _jul_sales6689_sum_6;
    int32_t _aug_sales6690_sum_7;
    int32_t _sep_sales6691_sum_8;
    int32_t _oct_sales6692_sum_9;
    int32_t _nov_sales6693_sum_10;
    int32_t _dec_sales6694_sum_11;
    int32_t _jan_sales_per_sq_foot6695_sum_12;
    int32_t _feb_sales_per_sq_foot6696_sum_13;
    int32_t _mar_sales_per_sq_foot6697_sum_14;
    int32_t _apr_sales_per_sq_foot6698_sum_15;
    int32_t _may_sales_per_sq_foot6699_sum_16;
    int32_t _jun_sales_per_sq_foot6700_sum_17;
    int32_t _jul_sales_per_sq_foot6701_sum_18;
    int32_t _aug_sales_per_sq_foot6702_sum_19;
    int32_t _sep_sales_per_sq_foot6703_sum_20;
    int32_t _oct_sales_per_sq_foot6704_sum_21;
    int32_t _nov_sales_per_sq_foot6705_sum_22;
    int32_t _dec_sales_per_sq_foot6706_sum_23;
    int32_t _jan_net6707_sum_24;
    int32_t _feb_net6708_sum_25;
    int32_t _mar_net6709_sum_26;
    int32_t _apr_net6710_sum_27;
    int32_t _may_net6711_sum_28;
    int32_t _jun_net6712_sum_29;
    int32_t _jul_net6713_sum_30;
    int32_t _aug_net6714_sum_31;
    int32_t _sep_net6715_sum_32;
    int32_t _oct_net6716_sum_33;
    int32_t _nov_net6717_sum_34;
    int32_t _dec_net6718_sum_35;
};
void SW_Aggregate_TD_3208(Table &tbl_Union_TD_4115_output, Table &tbl_Aggregate_TD_3208_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, sum(jan_sales#6633) AS jan_sales#6683, sum(feb_sales#6634) AS feb_sales#6684, sum(mar_sales#6635) AS mar_sales#6685, sum(apr_sales#6636) AS apr_sales#6686, sum(may_sales#6637) AS may_sales#6687, sum(jun_sales#6638) AS jun_sales#6688, sum(jul_sales#6639) AS jul_sales#6689, sum(aug_sales#6640) AS aug_sales#6690, sum(sep_sales#6641) AS sep_sales#6691, sum(oct_sales#6642) AS oct_sales#6692, sum(nov_sales#6643) AS nov_sales#6693, sum(dec_sales#6644) AS dec_sales#6694, sum(CheckOverflow((promote_precision(jan_sales#6633) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS jan_sales_per_sq_foot#6695, sum(CheckOverflow((promote_precision(feb_sales#6634) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS feb_sales_per_sq_foot#6696, sum(CheckOverflow((promote_precision(mar_sales#6635) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS mar_sales_per_sq_foot#6697, sum(CheckOverflow((promote_precision(apr_sales#6636) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS apr_sales_per_sq_foot#6698, sum(CheckOverflow((promote_precision(may_sales#6637) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS may_sales_per_sq_foot#6699, sum(CheckOverflow((promote_precision(jun_sales#6638) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS jun_sales_per_sq_foot#6700, sum(CheckOverflow((promote_precision(jul_sales#6639) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS jul_sales_per_sq_foot#6701, sum(CheckOverflow((promote_precision(aug_sales#6640) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS aug_sales_per_sq_foot#6702, sum(CheckOverflow((promote_precision(sep_sales#6641) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS sep_sales_per_sq_foot#6703, sum(CheckOverflow((promote_precision(oct_sales#6642) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS oct_sales_per_sq_foot#6704, sum(CheckOverflow((promote_precision(nov_sales#6643) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS nov_sales_per_sq_foot#6705, sum(CheckOverflow((promote_precision(dec_sales#6644) / promote_precision(cast(cast(w_warehouse_sq_ft#498 as decimal(10,0)) as decimal(28,2)))), DecimalType(38,12), true)) AS dec_sales_per_sq_foot#6706, sum(jan_net#6645) AS jan_net#6707, sum(feb_net#6646) AS feb_net#6708, sum(mar_net#6647) AS mar_net#6709, sum(apr_net#6648) AS apr_net#6710, sum(may_net#6649) AS may_net#6711, sum(jun_net#6650) AS jun_net#6712, sum(jul_net#6651) AS jul_net#6713, sum(aug_net#6652) AS aug_net#6714, sum(sep_net#6653) AS sep_net#6715, sum(oct_net#6654) AS oct_net#6716, sum(nov_net#6655) AS nov_net#6717, sum(dec_net#6656) AS dec_net#6718)
    // Input: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6633, feb_sales#6634, mar_sales#6635, apr_sales#6636, may_sales#6637, jun_sales#6638, jul_sales#6639, aug_sales#6640, sep_sales#6641, oct_sales#6642, nov_sales#6643, dec_sales#6644, jan_net#6645, feb_net#6646, mar_net#6647, apr_net#6648, may_net#6649, jun_net#6650, jul_net#6651, aug_net#6652, sep_net#6653, oct_net#6654, nov_net#6655, dec_net#6656)
    // Output: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6683, feb_sales#6684, mar_sales#6685, apr_sales#6686, may_sales#6687, jun_sales#6688, jul_sales#6689, aug_sales#6690, sep_sales#6691, oct_sales#6692, nov_sales#6693, dec_sales#6694, jan_sales_per_sq_foot#6695, feb_sales_per_sq_foot#6696, mar_sales_per_sq_foot#6697, apr_sales_per_sq_foot#6698, may_sales_per_sq_foot#6699, jun_sales_per_sq_foot#6700, jul_sales_per_sq_foot#6701, aug_sales_per_sq_foot#6702, sep_sales_per_sq_foot#6703, oct_sales_per_sq_foot#6704, nov_sales_per_sq_foot#6705, dec_sales_per_sq_foot#6706, jan_net#6707, feb_net#6708, mar_net#6709, apr_net#6710, may_net#6711, jun_net#6712, jul_net#6713, aug_net#6714, sep_net#6715, oct_net#6716, nov_net#6717, dec_net#6718)
    std::unordered_map<SW_Aggregate_TD_3208_key, SW_Aggregate_TD_3208_payload> ht1;
    int nrow1 = tbl_Union_TD_4115_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _w_warehouse_sq_ft498 = tbl_Union_TD_4115_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _w_city503 = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504 = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505 = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507 = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6631 = tbl_Union_TD_4115_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _year6632 = tbl_Union_TD_4115_output.getInt32(i, 7);
        int32_t _jan_sales6633 = tbl_Union_TD_4115_output.getInt32(i, 8);
        int32_t _feb_sales6634 = tbl_Union_TD_4115_output.getInt32(i, 9);
        int32_t _mar_sales6635 = tbl_Union_TD_4115_output.getInt32(i, 10);
        int32_t _apr_sales6636 = tbl_Union_TD_4115_output.getInt32(i, 11);
        int32_t _may_sales6637 = tbl_Union_TD_4115_output.getInt32(i, 12);
        int32_t _jun_sales6638 = tbl_Union_TD_4115_output.getInt32(i, 13);
        int32_t _jul_sales6639 = tbl_Union_TD_4115_output.getInt32(i, 14);
        int32_t _aug_sales6640 = tbl_Union_TD_4115_output.getInt32(i, 15);
        int32_t _sep_sales6641 = tbl_Union_TD_4115_output.getInt32(i, 16);
        int32_t _oct_sales6642 = tbl_Union_TD_4115_output.getInt32(i, 17);
        int32_t _nov_sales6643 = tbl_Union_TD_4115_output.getInt32(i, 18);
        int32_t _dec_sales6644 = tbl_Union_TD_4115_output.getInt32(i, 19);
        int32_t _jan_net6645 = tbl_Union_TD_4115_output.getInt32(i, 20);
        int32_t _feb_net6646 = tbl_Union_TD_4115_output.getInt32(i, 21);
        int32_t _mar_net6647 = tbl_Union_TD_4115_output.getInt32(i, 22);
        int32_t _apr_net6648 = tbl_Union_TD_4115_output.getInt32(i, 23);
        int32_t _may_net6649 = tbl_Union_TD_4115_output.getInt32(i, 24);
        int32_t _jun_net6650 = tbl_Union_TD_4115_output.getInt32(i, 25);
        int32_t _jul_net6651 = tbl_Union_TD_4115_output.getInt32(i, 26);
        int32_t _aug_net6652 = tbl_Union_TD_4115_output.getInt32(i, 27);
        int32_t _sep_net6653 = tbl_Union_TD_4115_output.getInt32(i, 28);
        int32_t _oct_net6654 = tbl_Union_TD_4115_output.getInt32(i, 29);
        int32_t _nov_net6655 = tbl_Union_TD_4115_output.getInt32(i, 30);
        int32_t _dec_net6656 = tbl_Union_TD_4115_output.getInt32(i, 31);
        SW_Aggregate_TD_3208_key k{std::string(_w_warehouse_name497.data()), _w_warehouse_sq_ft498, std::string(_w_city503.data()), std::string(_w_county504.data()), std::string(_w_state505.data()), std::string(_w_country507.data()), std::string(_ship_carriers6631.data()), _year6632};
        int64_t _jan_sales6683_sum_0 = _jan_sales6633;
        int64_t _feb_sales6684_sum_1 = _feb_sales6634;
        int64_t _mar_sales6685_sum_2 = _mar_sales6635;
        int64_t _apr_sales6686_sum_3 = _apr_sales6636;
        int64_t _may_sales6687_sum_4 = _may_sales6637;
        int64_t _jun_sales6688_sum_5 = _jun_sales6638;
        int64_t _jul_sales6689_sum_6 = _jul_sales6639;
        int64_t _aug_sales6690_sum_7 = _aug_sales6640;
        int64_t _sep_sales6691_sum_8 = _sep_sales6641;
        int64_t _oct_sales6692_sum_9 = _oct_sales6642;
        int64_t _nov_sales6693_sum_10 = _nov_sales6643;
        int64_t _dec_sales6694_sum_11 = _dec_sales6644;
        int64_t _jan_sales_per_sq_foot6695_sum_12 = (_jan_sales6633 / _w_warehouse_sq_ft498);
        int64_t _feb_sales_per_sq_foot6696_sum_13 = (_feb_sales6634 / _w_warehouse_sq_ft498);
        int64_t _mar_sales_per_sq_foot6697_sum_14 = (_mar_sales6635 / _w_warehouse_sq_ft498);
        int64_t _apr_sales_per_sq_foot6698_sum_15 = (_apr_sales6636 / _w_warehouse_sq_ft498);
        int64_t _may_sales_per_sq_foot6699_sum_16 = (_may_sales6637 / _w_warehouse_sq_ft498);
        int64_t _jun_sales_per_sq_foot6700_sum_17 = (_jun_sales6638 / _w_warehouse_sq_ft498);
        int64_t _jul_sales_per_sq_foot6701_sum_18 = (_jul_sales6639 / _w_warehouse_sq_ft498);
        int64_t _aug_sales_per_sq_foot6702_sum_19 = (_aug_sales6640 / _w_warehouse_sq_ft498);
        int64_t _sep_sales_per_sq_foot6703_sum_20 = (_sep_sales6641 / _w_warehouse_sq_ft498);
        int64_t _oct_sales_per_sq_foot6704_sum_21 = (_oct_sales6642 / _w_warehouse_sq_ft498);
        int64_t _nov_sales_per_sq_foot6705_sum_22 = (_nov_sales6643 / _w_warehouse_sq_ft498);
        int64_t _dec_sales_per_sq_foot6706_sum_23 = (_dec_sales6644 / _w_warehouse_sq_ft498);
        int64_t _jan_net6707_sum_24 = _jan_net6645;
        int64_t _feb_net6708_sum_25 = _feb_net6646;
        int64_t _mar_net6709_sum_26 = _mar_net6647;
        int64_t _apr_net6710_sum_27 = _apr_net6648;
        int64_t _may_net6711_sum_28 = _may_net6649;
        int64_t _jun_net6712_sum_29 = _jun_net6650;
        int64_t _jul_net6713_sum_30 = _jul_net6651;
        int64_t _aug_net6714_sum_31 = _aug_net6652;
        int64_t _sep_net6715_sum_32 = _sep_net6653;
        int64_t _oct_net6716_sum_33 = _oct_net6654;
        int64_t _nov_net6717_sum_34 = _nov_net6655;
        int64_t _dec_net6718_sum_35 = _dec_net6656;
        SW_Aggregate_TD_3208_payload p{_jan_sales6683_sum_0, _feb_sales6684_sum_1, _mar_sales6685_sum_2, _apr_sales6686_sum_3, _may_sales6687_sum_4, _jun_sales6688_sum_5, _jul_sales6689_sum_6, _aug_sales6690_sum_7, _sep_sales6691_sum_8, _oct_sales6692_sum_9, _nov_sales6693_sum_10, _dec_sales6694_sum_11, _jan_sales_per_sq_foot6695_sum_12, _feb_sales_per_sq_foot6696_sum_13, _mar_sales_per_sq_foot6697_sum_14, _apr_sales_per_sq_foot6698_sum_15, _may_sales_per_sq_foot6699_sum_16, _jun_sales_per_sq_foot6700_sum_17, _jul_sales_per_sq_foot6701_sum_18, _aug_sales_per_sq_foot6702_sum_19, _sep_sales_per_sq_foot6703_sum_20, _oct_sales_per_sq_foot6704_sum_21, _nov_sales_per_sq_foot6705_sum_22, _dec_sales_per_sq_foot6706_sum_23, _jan_net6707_sum_24, _feb_net6708_sum_25, _mar_net6709_sum_26, _apr_net6710_sum_27, _may_net6711_sum_28, _jun_net6712_sum_29, _jul_net6713_sum_30, _aug_net6714_sum_31, _sep_net6715_sum_32, _oct_net6716_sum_33, _nov_net6717_sum_34, _dec_net6718_sum_35};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._jan_sales6683_sum_0 + _jan_sales6683_sum_0;
            p._jan_sales6683_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._feb_sales6684_sum_1 + _feb_sales6684_sum_1;
            p._feb_sales6684_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._mar_sales6685_sum_2 + _mar_sales6685_sum_2;
            p._mar_sales6685_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._apr_sales6686_sum_3 + _apr_sales6686_sum_3;
            p._apr_sales6686_sum_3 = sum_3;
            int32_t sum_4 = (it->second)._may_sales6687_sum_4 + _may_sales6687_sum_4;
            p._may_sales6687_sum_4 = sum_4;
            int32_t sum_5 = (it->second)._jun_sales6688_sum_5 + _jun_sales6688_sum_5;
            p._jun_sales6688_sum_5 = sum_5;
            int32_t sum_6 = (it->second)._jul_sales6689_sum_6 + _jul_sales6689_sum_6;
            p._jul_sales6689_sum_6 = sum_6;
            int32_t sum_7 = (it->second)._aug_sales6690_sum_7 + _aug_sales6690_sum_7;
            p._aug_sales6690_sum_7 = sum_7;
            int32_t sum_8 = (it->second)._sep_sales6691_sum_8 + _sep_sales6691_sum_8;
            p._sep_sales6691_sum_8 = sum_8;
            int32_t sum_9 = (it->second)._oct_sales6692_sum_9 + _oct_sales6692_sum_9;
            p._oct_sales6692_sum_9 = sum_9;
            int32_t sum_10 = (it->second)._nov_sales6693_sum_10 + _nov_sales6693_sum_10;
            p._nov_sales6693_sum_10 = sum_10;
            int32_t sum_11 = (it->second)._dec_sales6694_sum_11 + _dec_sales6694_sum_11;
            p._dec_sales6694_sum_11 = sum_11;
            int32_t sum_12 = (it->second)._jan_sales_per_sq_foot6695_sum_12 + _jan_sales_per_sq_foot6695_sum_12;
            p._jan_sales_per_sq_foot6695_sum_12 = sum_12;
            int32_t sum_13 = (it->second)._feb_sales_per_sq_foot6696_sum_13 + _feb_sales_per_sq_foot6696_sum_13;
            p._feb_sales_per_sq_foot6696_sum_13 = sum_13;
            int32_t sum_14 = (it->second)._mar_sales_per_sq_foot6697_sum_14 + _mar_sales_per_sq_foot6697_sum_14;
            p._mar_sales_per_sq_foot6697_sum_14 = sum_14;
            int32_t sum_15 = (it->second)._apr_sales_per_sq_foot6698_sum_15 + _apr_sales_per_sq_foot6698_sum_15;
            p._apr_sales_per_sq_foot6698_sum_15 = sum_15;
            int32_t sum_16 = (it->second)._may_sales_per_sq_foot6699_sum_16 + _may_sales_per_sq_foot6699_sum_16;
            p._may_sales_per_sq_foot6699_sum_16 = sum_16;
            int32_t sum_17 = (it->second)._jun_sales_per_sq_foot6700_sum_17 + _jun_sales_per_sq_foot6700_sum_17;
            p._jun_sales_per_sq_foot6700_sum_17 = sum_17;
            int32_t sum_18 = (it->second)._jul_sales_per_sq_foot6701_sum_18 + _jul_sales_per_sq_foot6701_sum_18;
            p._jul_sales_per_sq_foot6701_sum_18 = sum_18;
            int32_t sum_19 = (it->second)._aug_sales_per_sq_foot6702_sum_19 + _aug_sales_per_sq_foot6702_sum_19;
            p._aug_sales_per_sq_foot6702_sum_19 = sum_19;
            int32_t sum_20 = (it->second)._sep_sales_per_sq_foot6703_sum_20 + _sep_sales_per_sq_foot6703_sum_20;
            p._sep_sales_per_sq_foot6703_sum_20 = sum_20;
            int32_t sum_21 = (it->second)._oct_sales_per_sq_foot6704_sum_21 + _oct_sales_per_sq_foot6704_sum_21;
            p._oct_sales_per_sq_foot6704_sum_21 = sum_21;
            int32_t sum_22 = (it->second)._nov_sales_per_sq_foot6705_sum_22 + _nov_sales_per_sq_foot6705_sum_22;
            p._nov_sales_per_sq_foot6705_sum_22 = sum_22;
            int32_t sum_23 = (it->second)._dec_sales_per_sq_foot6706_sum_23 + _dec_sales_per_sq_foot6706_sum_23;
            p._dec_sales_per_sq_foot6706_sum_23 = sum_23;
            int32_t sum_24 = (it->second)._jan_net6707_sum_24 + _jan_net6707_sum_24;
            p._jan_net6707_sum_24 = sum_24;
            int32_t sum_25 = (it->second)._feb_net6708_sum_25 + _feb_net6708_sum_25;
            p._feb_net6708_sum_25 = sum_25;
            int32_t sum_26 = (it->second)._mar_net6709_sum_26 + _mar_net6709_sum_26;
            p._mar_net6709_sum_26 = sum_26;
            int32_t sum_27 = (it->second)._apr_net6710_sum_27 + _apr_net6710_sum_27;
            p._apr_net6710_sum_27 = sum_27;
            int32_t sum_28 = (it->second)._may_net6711_sum_28 + _may_net6711_sum_28;
            p._may_net6711_sum_28 = sum_28;
            int32_t sum_29 = (it->second)._jun_net6712_sum_29 + _jun_net6712_sum_29;
            p._jun_net6712_sum_29 = sum_29;
            int32_t sum_30 = (it->second)._jul_net6713_sum_30 + _jul_net6713_sum_30;
            p._jul_net6713_sum_30 = sum_30;
            int32_t sum_31 = (it->second)._aug_net6714_sum_31 + _aug_net6714_sum_31;
            p._aug_net6714_sum_31 = sum_31;
            int32_t sum_32 = (it->second)._sep_net6715_sum_32 + _sep_net6715_sum_32;
            p._sep_net6715_sum_32 = sum_32;
            int32_t sum_33 = (it->second)._oct_net6716_sum_33 + _oct_net6716_sum_33;
            p._oct_net6716_sum_33 = sum_33;
            int32_t sum_34 = (it->second)._nov_net6717_sum_34 + _nov_net6717_sum_34;
            p._nov_net6717_sum_34 = sum_34;
            int32_t sum_35 = (it->second)._dec_net6718_sum_35 + _dec_net6718_sum_35;
            p._dec_net6718_sum_35 = sum_35;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497{};
        memcpy(_w_warehouse_name497.data(), ((it.first)._w_warehouse_name497).data(), ((it.first)._w_warehouse_name497).length());
        tbl_Aggregate_TD_3208_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name497);
        tbl_Aggregate_TD_3208_output.setInt32(r, 1, (it.first)._w_warehouse_sq_ft498);
        std::array<char, TPCDS_READ_MAX + 1> _w_city503{};
        memcpy(_w_city503.data(), ((it.first)._w_city503).data(), ((it.first)._w_city503).length());
        tbl_Aggregate_TD_3208_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_city503);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504{};
        memcpy(_w_county504.data(), ((it.first)._w_county504).data(), ((it.first)._w_county504).length());
        tbl_Aggregate_TD_3208_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_county504);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505{};
        memcpy(_w_state505.data(), ((it.first)._w_state505).data(), ((it.first)._w_state505).length());
        tbl_Aggregate_TD_3208_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state505);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507{};
        memcpy(_w_country507.data(), ((it.first)._w_country507).data(), ((it.first)._w_country507).length());
        tbl_Aggregate_TD_3208_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_country507);
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6631{};
        memcpy(_ship_carriers6631.data(), ((it.first)._ship_carriers6631).data(), ((it.first)._ship_carriers6631).length());
        tbl_Aggregate_TD_3208_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ship_carriers6631);
        tbl_Aggregate_TD_3208_output.setInt32(r, 7, (it.first)._year6632);
        int32_t _jan_sales6683 = (it.second)._jan_sales6683_sum_0;
        tbl_Aggregate_TD_3208_output.setInt32(r, 8, _jan_sales6683);
        int32_t _feb_sales6684 = (it.second)._feb_sales6684_sum_1;
        tbl_Aggregate_TD_3208_output.setInt32(r, 9, _feb_sales6684);
        int32_t _mar_sales6685 = (it.second)._mar_sales6685_sum_2;
        tbl_Aggregate_TD_3208_output.setInt32(r, 10, _mar_sales6685);
        int32_t _apr_sales6686 = (it.second)._apr_sales6686_sum_3;
        tbl_Aggregate_TD_3208_output.setInt32(r, 11, _apr_sales6686);
        int32_t _may_sales6687 = (it.second)._may_sales6687_sum_4;
        tbl_Aggregate_TD_3208_output.setInt32(r, 12, _may_sales6687);
        int32_t _jun_sales6688 = (it.second)._jun_sales6688_sum_5;
        tbl_Aggregate_TD_3208_output.setInt32(r, 13, _jun_sales6688);
        int32_t _jul_sales6689 = (it.second)._jul_sales6689_sum_6;
        tbl_Aggregate_TD_3208_output.setInt32(r, 14, _jul_sales6689);
        int32_t _aug_sales6690 = (it.second)._aug_sales6690_sum_7;
        tbl_Aggregate_TD_3208_output.setInt32(r, 15, _aug_sales6690);
        int32_t _sep_sales6691 = (it.second)._sep_sales6691_sum_8;
        tbl_Aggregate_TD_3208_output.setInt32(r, 16, _sep_sales6691);
        int32_t _oct_sales6692 = (it.second)._oct_sales6692_sum_9;
        tbl_Aggregate_TD_3208_output.setInt32(r, 17, _oct_sales6692);
        int32_t _nov_sales6693 = (it.second)._nov_sales6693_sum_10;
        tbl_Aggregate_TD_3208_output.setInt32(r, 18, _nov_sales6693);
        int32_t _dec_sales6694 = (it.second)._dec_sales6694_sum_11;
        tbl_Aggregate_TD_3208_output.setInt32(r, 19, _dec_sales6694);
        int32_t _jan_sales_per_sq_foot6695 = (it.second)._jan_sales_per_sq_foot6695_sum_12;
        tbl_Aggregate_TD_3208_output.setInt32(r, 20, _jan_sales_per_sq_foot6695);
        int32_t _feb_sales_per_sq_foot6696 = (it.second)._feb_sales_per_sq_foot6696_sum_13;
        tbl_Aggregate_TD_3208_output.setInt32(r, 21, _feb_sales_per_sq_foot6696);
        int32_t _mar_sales_per_sq_foot6697 = (it.second)._mar_sales_per_sq_foot6697_sum_14;
        tbl_Aggregate_TD_3208_output.setInt32(r, 22, _mar_sales_per_sq_foot6697);
        int32_t _apr_sales_per_sq_foot6698 = (it.second)._apr_sales_per_sq_foot6698_sum_15;
        tbl_Aggregate_TD_3208_output.setInt32(r, 23, _apr_sales_per_sq_foot6698);
        int32_t _may_sales_per_sq_foot6699 = (it.second)._may_sales_per_sq_foot6699_sum_16;
        tbl_Aggregate_TD_3208_output.setInt32(r, 24, _may_sales_per_sq_foot6699);
        int32_t _jun_sales_per_sq_foot6700 = (it.second)._jun_sales_per_sq_foot6700_sum_17;
        tbl_Aggregate_TD_3208_output.setInt32(r, 25, _jun_sales_per_sq_foot6700);
        int32_t _jul_sales_per_sq_foot6701 = (it.second)._jul_sales_per_sq_foot6701_sum_18;
        tbl_Aggregate_TD_3208_output.setInt32(r, 26, _jul_sales_per_sq_foot6701);
        int32_t _aug_sales_per_sq_foot6702 = (it.second)._aug_sales_per_sq_foot6702_sum_19;
        tbl_Aggregate_TD_3208_output.setInt32(r, 27, _aug_sales_per_sq_foot6702);
        int32_t _sep_sales_per_sq_foot6703 = (it.second)._sep_sales_per_sq_foot6703_sum_20;
        tbl_Aggregate_TD_3208_output.setInt32(r, 28, _sep_sales_per_sq_foot6703);
        int32_t _oct_sales_per_sq_foot6704 = (it.second)._oct_sales_per_sq_foot6704_sum_21;
        tbl_Aggregate_TD_3208_output.setInt32(r, 29, _oct_sales_per_sq_foot6704);
        int32_t _nov_sales_per_sq_foot6705 = (it.second)._nov_sales_per_sq_foot6705_sum_22;
        tbl_Aggregate_TD_3208_output.setInt32(r, 30, _nov_sales_per_sq_foot6705);
        int32_t _dec_sales_per_sq_foot6706 = (it.second)._dec_sales_per_sq_foot6706_sum_23;
        tbl_Aggregate_TD_3208_output.setInt32(r, 31, _dec_sales_per_sq_foot6706);
        int32_t _jan_net6707 = (it.second)._jan_net6707_sum_24;
        tbl_Aggregate_TD_3208_output.setInt32(r, 32, _jan_net6707);
        int32_t _feb_net6708 = (it.second)._feb_net6708_sum_25;
        tbl_Aggregate_TD_3208_output.setInt32(r, 33, _feb_net6708);
        int32_t _mar_net6709 = (it.second)._mar_net6709_sum_26;
        tbl_Aggregate_TD_3208_output.setInt32(r, 34, _mar_net6709);
        int32_t _apr_net6710 = (it.second)._apr_net6710_sum_27;
        tbl_Aggregate_TD_3208_output.setInt32(r, 35, _apr_net6710);
        int32_t _may_net6711 = (it.second)._may_net6711_sum_28;
        tbl_Aggregate_TD_3208_output.setInt32(r, 36, _may_net6711);
        int32_t _jun_net6712 = (it.second)._jun_net6712_sum_29;
        tbl_Aggregate_TD_3208_output.setInt32(r, 37, _jun_net6712);
        int32_t _jul_net6713 = (it.second)._jul_net6713_sum_30;
        tbl_Aggregate_TD_3208_output.setInt32(r, 38, _jul_net6713);
        int32_t _aug_net6714 = (it.second)._aug_net6714_sum_31;
        tbl_Aggregate_TD_3208_output.setInt32(r, 39, _aug_net6714);
        int32_t _sep_net6715 = (it.second)._sep_net6715_sum_32;
        tbl_Aggregate_TD_3208_output.setInt32(r, 40, _sep_net6715);
        int32_t _oct_net6716 = (it.second)._oct_net6716_sum_33;
        tbl_Aggregate_TD_3208_output.setInt32(r, 41, _oct_net6716);
        int32_t _nov_net6717 = (it.second)._nov_net6717_sum_34;
        tbl_Aggregate_TD_3208_output.setInt32(r, 42, _nov_net6717);
        int32_t _dec_net6718 = (it.second)._dec_net6718_sum_35;
        tbl_Aggregate_TD_3208_output.setInt32(r, 43, _dec_net6718);
        ++r;
    }
    tbl_Aggregate_TD_3208_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3208_output #Row: " << tbl_Aggregate_TD_3208_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2221(Table &tbl_Aggregate_TD_3208_output, Table &tbl_Sort_TD_2221_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(w_warehouse_name#497 ASC NULLS FIRST)
    // Input: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6683, feb_sales#6684, mar_sales#6685, apr_sales#6686, may_sales#6687, jun_sales#6688, jul_sales#6689, aug_sales#6690, sep_sales#6691, oct_sales#6692, nov_sales#6693, dec_sales#6694, jan_sales_per_sq_foot#6695, feb_sales_per_sq_foot#6696, mar_sales_per_sq_foot#6697, apr_sales_per_sq_foot#6698, may_sales_per_sq_foot#6699, jun_sales_per_sq_foot#6700, jul_sales_per_sq_foot#6701, aug_sales_per_sq_foot#6702, sep_sales_per_sq_foot#6703, oct_sales_per_sq_foot#6704, nov_sales_per_sq_foot#6705, dec_sales_per_sq_foot#6706, jan_net#6707, feb_net#6708, mar_net#6709, apr_net#6710, may_net#6711, jun_net#6712, jul_net#6713, aug_net#6714, sep_net#6715, oct_net#6716, nov_net#6717, dec_net#6718)
    // Output: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6683, feb_sales#6684, mar_sales#6685, apr_sales#6686, may_sales#6687, jun_sales#6688, jul_sales#6689, aug_sales#6690, sep_sales#6691, oct_sales#6692, nov_sales#6693, dec_sales#6694, jan_sales_per_sq_foot#6695, feb_sales_per_sq_foot#6696, mar_sales_per_sq_foot#6697, apr_sales_per_sq_foot#6698, may_sales_per_sq_foot#6699, jun_sales_per_sq_foot#6700, jul_sales_per_sq_foot#6701, aug_sales_per_sq_foot#6702, sep_sales_per_sq_foot#6703, oct_sales_per_sq_foot#6704, nov_sales_per_sq_foot#6705, dec_sales_per_sq_foot#6706, jan_net#6707, feb_net#6708, mar_net#6709, apr_net#6710, may_net#6711, jun_net#6712, jul_net#6713, aug_net#6714, sep_net#6715, oct_net#6716, nov_net#6717, dec_net#6718)
    struct SW_Sort_TD_2221Row {
        std::string _w_warehouse_name497;
        int32_t _w_warehouse_sq_ft498;
        std::string _w_city503;
        std::string _w_county504;
        std::string _w_state505;
        std::string _w_country507;
        std::string _ship_carriers6631;
        int32_t _year6632;
        int32_t _jan_sales6683;
        int32_t _feb_sales6684;
        int32_t _mar_sales6685;
        int32_t _apr_sales6686;
        int32_t _may_sales6687;
        int32_t _jun_sales6688;
        int32_t _jul_sales6689;
        int32_t _aug_sales6690;
        int32_t _sep_sales6691;
        int32_t _oct_sales6692;
        int32_t _nov_sales6693;
        int32_t _dec_sales6694;
        int32_t _jan_sales_per_sq_foot6695;
        int32_t _feb_sales_per_sq_foot6696;
        int32_t _mar_sales_per_sq_foot6697;
        int32_t _apr_sales_per_sq_foot6698;
        int32_t _may_sales_per_sq_foot6699;
        int32_t _jun_sales_per_sq_foot6700;
        int32_t _jul_sales_per_sq_foot6701;
        int32_t _aug_sales_per_sq_foot6702;
        int32_t _sep_sales_per_sq_foot6703;
        int32_t _oct_sales_per_sq_foot6704;
        int32_t _nov_sales_per_sq_foot6705;
        int32_t _dec_sales_per_sq_foot6706;
        int32_t _jan_net6707;
        int32_t _feb_net6708;
        int32_t _mar_net6709;
        int32_t _apr_net6710;
        int32_t _may_net6711;
        int32_t _jun_net6712;
        int32_t _jul_net6713;
        int32_t _aug_net6714;
        int32_t _sep_net6715;
        int32_t _oct_net6716;
        int32_t _nov_net6717;
        int32_t _dec_net6718;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2221Row& a, const SW_Sort_TD_2221Row& b) const { return 
 (a._w_warehouse_name497 < b._w_warehouse_name497); 
}
    }SW_Sort_TD_2221_order; 

    int nrow1 = tbl_Aggregate_TD_3208_output.getNumRow();
    std::vector<SW_Sort_TD_2221Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497 = tbl_Aggregate_TD_3208_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _w_warehouse_sq_ft498 = tbl_Aggregate_TD_3208_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _w_city503 = tbl_Aggregate_TD_3208_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504 = tbl_Aggregate_TD_3208_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505 = tbl_Aggregate_TD_3208_output.getcharN<char, TPCDS_READ_MAX +1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507 = tbl_Aggregate_TD_3208_output.getcharN<char, TPCDS_READ_MAX +1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6631 = tbl_Aggregate_TD_3208_output.getcharN<char, TPCDS_READ_MAX +1>(i, 6);
        int32_t _year6632 = tbl_Aggregate_TD_3208_output.getInt32(i, 7);
        int32_t _jan_sales6683 = tbl_Aggregate_TD_3208_output.getInt32(i, 8);
        int32_t _feb_sales6684 = tbl_Aggregate_TD_3208_output.getInt32(i, 9);
        int32_t _mar_sales6685 = tbl_Aggregate_TD_3208_output.getInt32(i, 10);
        int32_t _apr_sales6686 = tbl_Aggregate_TD_3208_output.getInt32(i, 11);
        int32_t _may_sales6687 = tbl_Aggregate_TD_3208_output.getInt32(i, 12);
        int32_t _jun_sales6688 = tbl_Aggregate_TD_3208_output.getInt32(i, 13);
        int32_t _jul_sales6689 = tbl_Aggregate_TD_3208_output.getInt32(i, 14);
        int32_t _aug_sales6690 = tbl_Aggregate_TD_3208_output.getInt32(i, 15);
        int32_t _sep_sales6691 = tbl_Aggregate_TD_3208_output.getInt32(i, 16);
        int32_t _oct_sales6692 = tbl_Aggregate_TD_3208_output.getInt32(i, 17);
        int32_t _nov_sales6693 = tbl_Aggregate_TD_3208_output.getInt32(i, 18);
        int32_t _dec_sales6694 = tbl_Aggregate_TD_3208_output.getInt32(i, 19);
        int32_t _jan_sales_per_sq_foot6695 = tbl_Aggregate_TD_3208_output.getInt32(i, 20);
        int32_t _feb_sales_per_sq_foot6696 = tbl_Aggregate_TD_3208_output.getInt32(i, 21);
        int32_t _mar_sales_per_sq_foot6697 = tbl_Aggregate_TD_3208_output.getInt32(i, 22);
        int32_t _apr_sales_per_sq_foot6698 = tbl_Aggregate_TD_3208_output.getInt32(i, 23);
        int32_t _may_sales_per_sq_foot6699 = tbl_Aggregate_TD_3208_output.getInt32(i, 24);
        int32_t _jun_sales_per_sq_foot6700 = tbl_Aggregate_TD_3208_output.getInt32(i, 25);
        int32_t _jul_sales_per_sq_foot6701 = tbl_Aggregate_TD_3208_output.getInt32(i, 26);
        int32_t _aug_sales_per_sq_foot6702 = tbl_Aggregate_TD_3208_output.getInt32(i, 27);
        int32_t _sep_sales_per_sq_foot6703 = tbl_Aggregate_TD_3208_output.getInt32(i, 28);
        int32_t _oct_sales_per_sq_foot6704 = tbl_Aggregate_TD_3208_output.getInt32(i, 29);
        int32_t _nov_sales_per_sq_foot6705 = tbl_Aggregate_TD_3208_output.getInt32(i, 30);
        int32_t _dec_sales_per_sq_foot6706 = tbl_Aggregate_TD_3208_output.getInt32(i, 31);
        int32_t _jan_net6707 = tbl_Aggregate_TD_3208_output.getInt32(i, 32);
        int32_t _feb_net6708 = tbl_Aggregate_TD_3208_output.getInt32(i, 33);
        int32_t _mar_net6709 = tbl_Aggregate_TD_3208_output.getInt32(i, 34);
        int32_t _apr_net6710 = tbl_Aggregate_TD_3208_output.getInt32(i, 35);
        int32_t _may_net6711 = tbl_Aggregate_TD_3208_output.getInt32(i, 36);
        int32_t _jun_net6712 = tbl_Aggregate_TD_3208_output.getInt32(i, 37);
        int32_t _jul_net6713 = tbl_Aggregate_TD_3208_output.getInt32(i, 38);
        int32_t _aug_net6714 = tbl_Aggregate_TD_3208_output.getInt32(i, 39);
        int32_t _sep_net6715 = tbl_Aggregate_TD_3208_output.getInt32(i, 40);
        int32_t _oct_net6716 = tbl_Aggregate_TD_3208_output.getInt32(i, 41);
        int32_t _nov_net6717 = tbl_Aggregate_TD_3208_output.getInt32(i, 42);
        int32_t _dec_net6718 = tbl_Aggregate_TD_3208_output.getInt32(i, 43);
        SW_Sort_TD_2221Row t = {std::string(_w_warehouse_name497.data()),_w_warehouse_sq_ft498,std::string(_w_city503.data()),std::string(_w_county504.data()),std::string(_w_state505.data()),std::string(_w_country507.data()),std::string(_ship_carriers6631.data()),_year6632,_jan_sales6683,_feb_sales6684,_mar_sales6685,_apr_sales6686,_may_sales6687,_jun_sales6688,_jul_sales6689,_aug_sales6690,_sep_sales6691,_oct_sales6692,_nov_sales6693,_dec_sales6694,_jan_sales_per_sq_foot6695,_feb_sales_per_sq_foot6696,_mar_sales_per_sq_foot6697,_apr_sales_per_sq_foot6698,_may_sales_per_sq_foot6699,_jun_sales_per_sq_foot6700,_jul_sales_per_sq_foot6701,_aug_sales_per_sq_foot6702,_sep_sales_per_sq_foot6703,_oct_sales_per_sq_foot6704,_nov_sales_per_sq_foot6705,_dec_sales_per_sq_foot6706,_jan_net6707,_feb_net6708,_mar_net6709,_apr_net6710,_may_net6711,_jun_net6712,_jul_net6713,_aug_net6714,_sep_net6715,_oct_net6716,_nov_net6717,_dec_net6718};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2221_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497{};
        memcpy(_w_warehouse_name497.data(), (it._w_warehouse_name497).data(), (it._w_warehouse_name497).length());
        tbl_Sort_TD_2221_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _w_warehouse_name497);
        tbl_Sort_TD_2221_output.setInt32(r, 1, it._w_warehouse_sq_ft498);
        std::array<char, TPCDS_READ_MAX + 1> _w_city503{};
        memcpy(_w_city503.data(), (it._w_city503).data(), (it._w_city503).length());
        tbl_Sort_TD_2221_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _w_city503);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504{};
        memcpy(_w_county504.data(), (it._w_county504).data(), (it._w_county504).length());
        tbl_Sort_TD_2221_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _w_county504);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505{};
        memcpy(_w_state505.data(), (it._w_state505).data(), (it._w_state505).length());
        tbl_Sort_TD_2221_output.setcharN<char, TPCDS_READ_MAX +1>(r, 4, _w_state505);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507{};
        memcpy(_w_country507.data(), (it._w_country507).data(), (it._w_country507).length());
        tbl_Sort_TD_2221_output.setcharN<char, TPCDS_READ_MAX +1>(r, 5, _w_country507);
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6631{};
        memcpy(_ship_carriers6631.data(), (it._ship_carriers6631).data(), (it._ship_carriers6631).length());
        tbl_Sort_TD_2221_output.setcharN<char, TPCDS_READ_MAX +1>(r, 6, _ship_carriers6631);
        tbl_Sort_TD_2221_output.setInt32(r, 7, it._year6632);
        tbl_Sort_TD_2221_output.setInt32(r, 8, it._jan_sales6683);
        tbl_Sort_TD_2221_output.setInt32(r, 9, it._feb_sales6684);
        tbl_Sort_TD_2221_output.setInt32(r, 10, it._mar_sales6685);
        tbl_Sort_TD_2221_output.setInt32(r, 11, it._apr_sales6686);
        tbl_Sort_TD_2221_output.setInt32(r, 12, it._may_sales6687);
        tbl_Sort_TD_2221_output.setInt32(r, 13, it._jun_sales6688);
        tbl_Sort_TD_2221_output.setInt32(r, 14, it._jul_sales6689);
        tbl_Sort_TD_2221_output.setInt32(r, 15, it._aug_sales6690);
        tbl_Sort_TD_2221_output.setInt32(r, 16, it._sep_sales6691);
        tbl_Sort_TD_2221_output.setInt32(r, 17, it._oct_sales6692);
        tbl_Sort_TD_2221_output.setInt32(r, 18, it._nov_sales6693);
        tbl_Sort_TD_2221_output.setInt32(r, 19, it._dec_sales6694);
        tbl_Sort_TD_2221_output.setInt32(r, 20, it._jan_sales_per_sq_foot6695);
        tbl_Sort_TD_2221_output.setInt32(r, 21, it._feb_sales_per_sq_foot6696);
        tbl_Sort_TD_2221_output.setInt32(r, 22, it._mar_sales_per_sq_foot6697);
        tbl_Sort_TD_2221_output.setInt32(r, 23, it._apr_sales_per_sq_foot6698);
        tbl_Sort_TD_2221_output.setInt32(r, 24, it._may_sales_per_sq_foot6699);
        tbl_Sort_TD_2221_output.setInt32(r, 25, it._jun_sales_per_sq_foot6700);
        tbl_Sort_TD_2221_output.setInt32(r, 26, it._jul_sales_per_sq_foot6701);
        tbl_Sort_TD_2221_output.setInt32(r, 27, it._aug_sales_per_sq_foot6702);
        tbl_Sort_TD_2221_output.setInt32(r, 28, it._sep_sales_per_sq_foot6703);
        tbl_Sort_TD_2221_output.setInt32(r, 29, it._oct_sales_per_sq_foot6704);
        tbl_Sort_TD_2221_output.setInt32(r, 30, it._nov_sales_per_sq_foot6705);
        tbl_Sort_TD_2221_output.setInt32(r, 31, it._dec_sales_per_sq_foot6706);
        tbl_Sort_TD_2221_output.setInt32(r, 32, it._jan_net6707);
        tbl_Sort_TD_2221_output.setInt32(r, 33, it._feb_net6708);
        tbl_Sort_TD_2221_output.setInt32(r, 34, it._mar_net6709);
        tbl_Sort_TD_2221_output.setInt32(r, 35, it._apr_net6710);
        tbl_Sort_TD_2221_output.setInt32(r, 36, it._may_net6711);
        tbl_Sort_TD_2221_output.setInt32(r, 37, it._jun_net6712);
        tbl_Sort_TD_2221_output.setInt32(r, 38, it._jul_net6713);
        tbl_Sort_TD_2221_output.setInt32(r, 39, it._aug_net6714);
        tbl_Sort_TD_2221_output.setInt32(r, 40, it._sep_net6715);
        tbl_Sort_TD_2221_output.setInt32(r, 41, it._oct_net6716);
        tbl_Sort_TD_2221_output.setInt32(r, 42, it._nov_net6717);
        tbl_Sort_TD_2221_output.setInt32(r, 43, it._dec_net6718);
        ++r;
    }
    tbl_Sort_TD_2221_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2221_output #Row: " << tbl_Sort_TD_2221_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_176(Table &tbl_Sort_TD_2221_output, Table &tbl_LocalLimit_TD_176_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6683, feb_sales#6684, mar_sales#6685, apr_sales#6686, may_sales#6687, jun_sales#6688, jul_sales#6689, aug_sales#6690, sep_sales#6691, oct_sales#6692, nov_sales#6693, dec_sales#6694, jan_sales_per_sq_foot#6695, feb_sales_per_sq_foot#6696, mar_sales_per_sq_foot#6697, apr_sales_per_sq_foot#6698, may_sales_per_sq_foot#6699, jun_sales_per_sq_foot#6700, jul_sales_per_sq_foot#6701, aug_sales_per_sq_foot#6702, sep_sales_per_sq_foot#6703, oct_sales_per_sq_foot#6704, nov_sales_per_sq_foot#6705, dec_sales_per_sq_foot#6706, jan_net#6707, feb_net#6708, mar_net#6709, apr_net#6710, may_net#6711, jun_net#6712, jul_net#6713, aug_net#6714, sep_net#6715, oct_net#6716, nov_net#6717, dec_net#6718)
    // Output: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6683, feb_sales#6684, mar_sales#6685, apr_sales#6686, may_sales#6687, jun_sales#6688, jul_sales#6689, aug_sales#6690, sep_sales#6691, oct_sales#6692, nov_sales#6693, dec_sales#6694, jan_sales_per_sq_foot#6695, feb_sales_per_sq_foot#6696, mar_sales_per_sq_foot#6697, apr_sales_per_sq_foot#6698, may_sales_per_sq_foot#6699, jun_sales_per_sq_foot#6700, jul_sales_per_sq_foot#6701, aug_sales_per_sq_foot#6702, sep_sales_per_sq_foot#6703, oct_sales_per_sq_foot#6704, nov_sales_per_sq_foot#6705, dec_sales_per_sq_foot#6706, jan_net#6707, feb_net#6708, mar_net#6709, apr_net#6710, may_net#6711, jun_net#6712, jul_net#6713, aug_net#6714, sep_net#6715, oct_net#6716, nov_net#6717, dec_net#6718)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_Sort_TD_2221_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_176_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name497_n);
        tbl_LocalLimit_TD_176_output.setInt32(r, 1, tbl_Sort_TD_2221_output.getInt32(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_Sort_TD_2221_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_176_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_city503_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_Sort_TD_2221_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_176_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_county504_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_Sort_TD_2221_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_LocalLimit_TD_176_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state505_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_Sort_TD_2221_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_LocalLimit_TD_176_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_country507_n);
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6631_n = tbl_Sort_TD_2221_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_LocalLimit_TD_176_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ship_carriers6631_n);
        tbl_LocalLimit_TD_176_output.setInt32(r, 7, tbl_Sort_TD_2221_output.getInt32(i, 7));
        tbl_LocalLimit_TD_176_output.setInt32(r, 8, tbl_Sort_TD_2221_output.getInt32(i, 8));
        tbl_LocalLimit_TD_176_output.setInt32(r, 9, tbl_Sort_TD_2221_output.getInt32(i, 9));
        tbl_LocalLimit_TD_176_output.setInt32(r, 10, tbl_Sort_TD_2221_output.getInt32(i, 10));
        tbl_LocalLimit_TD_176_output.setInt32(r, 11, tbl_Sort_TD_2221_output.getInt32(i, 11));
        tbl_LocalLimit_TD_176_output.setInt32(r, 12, tbl_Sort_TD_2221_output.getInt32(i, 12));
        tbl_LocalLimit_TD_176_output.setInt32(r, 13, tbl_Sort_TD_2221_output.getInt32(i, 13));
        tbl_LocalLimit_TD_176_output.setInt32(r, 14, tbl_Sort_TD_2221_output.getInt32(i, 14));
        tbl_LocalLimit_TD_176_output.setInt32(r, 15, tbl_Sort_TD_2221_output.getInt32(i, 15));
        tbl_LocalLimit_TD_176_output.setInt32(r, 16, tbl_Sort_TD_2221_output.getInt32(i, 16));
        tbl_LocalLimit_TD_176_output.setInt32(r, 17, tbl_Sort_TD_2221_output.getInt32(i, 17));
        tbl_LocalLimit_TD_176_output.setInt32(r, 18, tbl_Sort_TD_2221_output.getInt32(i, 18));
        tbl_LocalLimit_TD_176_output.setInt32(r, 19, tbl_Sort_TD_2221_output.getInt32(i, 19));
        tbl_LocalLimit_TD_176_output.setInt32(r, 20, tbl_Sort_TD_2221_output.getInt32(i, 20));
        tbl_LocalLimit_TD_176_output.setInt32(r, 21, tbl_Sort_TD_2221_output.getInt32(i, 21));
        tbl_LocalLimit_TD_176_output.setInt32(r, 22, tbl_Sort_TD_2221_output.getInt32(i, 22));
        tbl_LocalLimit_TD_176_output.setInt32(r, 23, tbl_Sort_TD_2221_output.getInt32(i, 23));
        tbl_LocalLimit_TD_176_output.setInt32(r, 24, tbl_Sort_TD_2221_output.getInt32(i, 24));
        tbl_LocalLimit_TD_176_output.setInt32(r, 25, tbl_Sort_TD_2221_output.getInt32(i, 25));
        tbl_LocalLimit_TD_176_output.setInt32(r, 26, tbl_Sort_TD_2221_output.getInt32(i, 26));
        tbl_LocalLimit_TD_176_output.setInt32(r, 27, tbl_Sort_TD_2221_output.getInt32(i, 27));
        tbl_LocalLimit_TD_176_output.setInt32(r, 28, tbl_Sort_TD_2221_output.getInt32(i, 28));
        tbl_LocalLimit_TD_176_output.setInt32(r, 29, tbl_Sort_TD_2221_output.getInt32(i, 29));
        tbl_LocalLimit_TD_176_output.setInt32(r, 30, tbl_Sort_TD_2221_output.getInt32(i, 30));
        tbl_LocalLimit_TD_176_output.setInt32(r, 31, tbl_Sort_TD_2221_output.getInt32(i, 31));
        tbl_LocalLimit_TD_176_output.setInt32(r, 32, tbl_Sort_TD_2221_output.getInt32(i, 32));
        tbl_LocalLimit_TD_176_output.setInt32(r, 33, tbl_Sort_TD_2221_output.getInt32(i, 33));
        tbl_LocalLimit_TD_176_output.setInt32(r, 34, tbl_Sort_TD_2221_output.getInt32(i, 34));
        tbl_LocalLimit_TD_176_output.setInt32(r, 35, tbl_Sort_TD_2221_output.getInt32(i, 35));
        tbl_LocalLimit_TD_176_output.setInt32(r, 36, tbl_Sort_TD_2221_output.getInt32(i, 36));
        tbl_LocalLimit_TD_176_output.setInt32(r, 37, tbl_Sort_TD_2221_output.getInt32(i, 37));
        tbl_LocalLimit_TD_176_output.setInt32(r, 38, tbl_Sort_TD_2221_output.getInt32(i, 38));
        tbl_LocalLimit_TD_176_output.setInt32(r, 39, tbl_Sort_TD_2221_output.getInt32(i, 39));
        tbl_LocalLimit_TD_176_output.setInt32(r, 40, tbl_Sort_TD_2221_output.getInt32(i, 40));
        tbl_LocalLimit_TD_176_output.setInt32(r, 41, tbl_Sort_TD_2221_output.getInt32(i, 41));
        tbl_LocalLimit_TD_176_output.setInt32(r, 42, tbl_Sort_TD_2221_output.getInt32(i, 42));
        tbl_LocalLimit_TD_176_output.setInt32(r, 43, tbl_Sort_TD_2221_output.getInt32(i, 43));
        r++;
    }
    tbl_LocalLimit_TD_176_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_176_output #Row: " << tbl_LocalLimit_TD_176_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0880(Table &tbl_LocalLimit_TD_176_output, Table &tbl_GlobalLimit_TD_0880_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6683, feb_sales#6684, mar_sales#6685, apr_sales#6686, may_sales#6687, jun_sales#6688, jul_sales#6689, aug_sales#6690, sep_sales#6691, oct_sales#6692, nov_sales#6693, dec_sales#6694, jan_sales_per_sq_foot#6695, feb_sales_per_sq_foot#6696, mar_sales_per_sq_foot#6697, apr_sales_per_sq_foot#6698, may_sales_per_sq_foot#6699, jun_sales_per_sq_foot#6700, jul_sales_per_sq_foot#6701, aug_sales_per_sq_foot#6702, sep_sales_per_sq_foot#6703, oct_sales_per_sq_foot#6704, nov_sales_per_sq_foot#6705, dec_sales_per_sq_foot#6706, jan_net#6707, feb_net#6708, mar_net#6709, apr_net#6710, may_net#6711, jun_net#6712, jul_net#6713, aug_net#6714, sep_net#6715, oct_net#6716, nov_net#6717, dec_net#6718)
    // Output: ListBuffer(w_warehouse_name#497, w_warehouse_sq_ft#498, w_city#503, w_county#504, w_state#505, w_country#507, ship_carriers#6631, year#6632, jan_sales#6683, feb_sales#6684, mar_sales#6685, apr_sales#6686, may_sales#6687, jun_sales#6688, jul_sales#6689, aug_sales#6690, sep_sales#6691, oct_sales#6692, nov_sales#6693, dec_sales#6694, jan_sales_per_sq_foot#6695, feb_sales_per_sq_foot#6696, mar_sales_per_sq_foot#6697, apr_sales_per_sq_foot#6698, may_sales_per_sq_foot#6699, jun_sales_per_sq_foot#6700, jul_sales_per_sq_foot#6701, aug_sales_per_sq_foot#6702, sep_sales_per_sq_foot#6703, oct_sales_per_sq_foot#6704, nov_sales_per_sq_foot#6705, dec_sales_per_sq_foot#6706, jan_net#6707, feb_net#6708, mar_net#6709, apr_net#6710, may_net#6711, jun_net#6712, jul_net#6713, aug_net#6714, sep_net#6715, oct_net#6716, nov_net#6717, dec_net#6718)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _w_warehouse_name497_n = tbl_LocalLimit_TD_176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _w_warehouse_name497_n);
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 1, tbl_LocalLimit_TD_176_output.getInt32(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _w_city503_n = tbl_LocalLimit_TD_176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _w_city503_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_county504_n = tbl_LocalLimit_TD_176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _w_county504_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_state505_n = tbl_LocalLimit_TD_176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_GlobalLimit_TD_0880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _w_state505_n);
        std::array<char, TPCDS_READ_MAX + 1> _w_country507_n = tbl_LocalLimit_TD_176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        tbl_GlobalLimit_TD_0880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _w_country507_n);
        std::array<char, TPCDS_READ_MAX + 1> _ship_carriers6631_n = tbl_LocalLimit_TD_176_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        tbl_GlobalLimit_TD_0880_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _ship_carriers6631_n);
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 7, tbl_LocalLimit_TD_176_output.getInt32(i, 7));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 8, tbl_LocalLimit_TD_176_output.getInt32(i, 8));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 9, tbl_LocalLimit_TD_176_output.getInt32(i, 9));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 10, tbl_LocalLimit_TD_176_output.getInt32(i, 10));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 11, tbl_LocalLimit_TD_176_output.getInt32(i, 11));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 12, tbl_LocalLimit_TD_176_output.getInt32(i, 12));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 13, tbl_LocalLimit_TD_176_output.getInt32(i, 13));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 14, tbl_LocalLimit_TD_176_output.getInt32(i, 14));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 15, tbl_LocalLimit_TD_176_output.getInt32(i, 15));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 16, tbl_LocalLimit_TD_176_output.getInt32(i, 16));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 17, tbl_LocalLimit_TD_176_output.getInt32(i, 17));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 18, tbl_LocalLimit_TD_176_output.getInt32(i, 18));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 19, tbl_LocalLimit_TD_176_output.getInt32(i, 19));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 20, tbl_LocalLimit_TD_176_output.getInt32(i, 20));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 21, tbl_LocalLimit_TD_176_output.getInt32(i, 21));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 22, tbl_LocalLimit_TD_176_output.getInt32(i, 22));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 23, tbl_LocalLimit_TD_176_output.getInt32(i, 23));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 24, tbl_LocalLimit_TD_176_output.getInt32(i, 24));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 25, tbl_LocalLimit_TD_176_output.getInt32(i, 25));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 26, tbl_LocalLimit_TD_176_output.getInt32(i, 26));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 27, tbl_LocalLimit_TD_176_output.getInt32(i, 27));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 28, tbl_LocalLimit_TD_176_output.getInt32(i, 28));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 29, tbl_LocalLimit_TD_176_output.getInt32(i, 29));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 30, tbl_LocalLimit_TD_176_output.getInt32(i, 30));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 31, tbl_LocalLimit_TD_176_output.getInt32(i, 31));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 32, tbl_LocalLimit_TD_176_output.getInt32(i, 32));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 33, tbl_LocalLimit_TD_176_output.getInt32(i, 33));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 34, tbl_LocalLimit_TD_176_output.getInt32(i, 34));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 35, tbl_LocalLimit_TD_176_output.getInt32(i, 35));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 36, tbl_LocalLimit_TD_176_output.getInt32(i, 36));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 37, tbl_LocalLimit_TD_176_output.getInt32(i, 37));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 38, tbl_LocalLimit_TD_176_output.getInt32(i, 38));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 39, tbl_LocalLimit_TD_176_output.getInt32(i, 39));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 40, tbl_LocalLimit_TD_176_output.getInt32(i, 40));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 41, tbl_LocalLimit_TD_176_output.getInt32(i, 41));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 42, tbl_LocalLimit_TD_176_output.getInt32(i, 42));
        tbl_GlobalLimit_TD_0880_output.setInt32(r, 43, tbl_LocalLimit_TD_176_output.getInt32(i, 43));
        r++;
    }
    tbl_GlobalLimit_TD_0880_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0880_output #Row: " << tbl_GlobalLimit_TD_0880_output.getNumRow() << std::endl;
}

