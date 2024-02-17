#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10937(Table &tbl_SerializeFromObject_TD_11693_input, Table &tbl_Filter_TD_10937_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#5215) AND isnotnull(ws_sold_date_sk#5211)))
    // Input: ListBuffer(ws_sold_date_sk#5211, ws_bill_customer_sk#5215, ws_net_paid#5240)
    // Output: ListBuffer(ws_sold_date_sk#5211, ws_bill_customer_sk#5215, ws_net_paid#5240)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11693_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk5215 = tbl_SerializeFromObject_TD_11693_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk5211 = tbl_SerializeFromObject_TD_11693_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk5215!= 0) && (_ws_sold_date_sk5211!= 0)) {
            int32_t _ws_sold_date_sk5211_t = tbl_SerializeFromObject_TD_11693_input.getInt32(i, 0);
            tbl_Filter_TD_10937_output.setInt32(r, 0, _ws_sold_date_sk5211_t);
            int32_t _ws_bill_customer_sk5215_t = tbl_SerializeFromObject_TD_11693_input.getInt32(i, 1);
            tbl_Filter_TD_10937_output.setInt32(r, 1, _ws_bill_customer_sk5215_t);
            int32_t _ws_net_paid5240_t = tbl_SerializeFromObject_TD_11693_input.getInt32(i, 2);
            tbl_Filter_TD_10937_output.setInt32(r, 2, _ws_net_paid5240_t);
            r++;
        }
    }
    tbl_Filter_TD_10937_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10937_output #Row: " << tbl_Filter_TD_10937_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10757(Table &tbl_SerializeFromObject_TD_11435_input, Table &tbl_Filter_TD_10757_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#5193) AND isnotnull(c_customer_id#5194)))
    // Input: ListBuffer(c_customer_sk#5193, c_customer_id#5194, c_first_name#5201, c_last_name#5202)
    // Output: ListBuffer(c_customer_sk#5193, c_customer_id#5194, c_first_name#5201, c_last_name#5202)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11435_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk5193 = tbl_SerializeFromObject_TD_11435_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194 = tbl_SerializeFromObject_TD_11435_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk5193!= 0) && （std::string(_isnotnullc_customer_id5194.data()) != "NULL")) {
            int32_t _c_customer_sk5193_t = tbl_SerializeFromObject_TD_11435_input.getInt32(i, 0);
            tbl_Filter_TD_10757_output.setInt32(r, 0, _c_customer_sk5193_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194_t = tbl_SerializeFromObject_TD_11435_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10757_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id5194_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5201_t = tbl_SerializeFromObject_TD_11435_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10757_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name5201_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5202_t = tbl_SerializeFromObject_TD_11435_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10757_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name5202_t);
            r++;
        }
    }
    tbl_Filter_TD_10757_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10757_output #Row: " << tbl_Filter_TD_10757_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1049(Table &tbl_SerializeFromObject_TD_11697_input, Table &tbl_Filter_TD_1049_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_net_paid#1226)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_net_paid#1226)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11697_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_11697_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11697_input.getInt32(i, 0);
        if ((_ss_customer_sk1209!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11697_input.getInt32(i, 0);
            tbl_Filter_TD_1049_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_11697_input.getInt32(i, 1);
            tbl_Filter_TD_1049_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_net_paid1226_t = tbl_SerializeFromObject_TD_11697_input.getInt32(i, 2);
            tbl_Filter_TD_1049_output.setInt32(r, 2, _ss_net_paid1226_t);
            r++;
        }
    }
    tbl_Filter_TD_1049_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1049_output #Row: " << tbl_Filter_TD_1049_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10580(Table &tbl_SerializeFromObject_TD_11217_input, Table &tbl_Filter_TD_10580_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_customer_id#1)))
    // Input: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9)
    // Output: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11217_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_11217_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_SerializeFromObject_TD_11217_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk0!= 0) && （std::string(_isnotnullc_customer_id1.data()) != "NULL")) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_11217_input.getInt32(i, 0);
            tbl_Filter_TD_10580_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_11217_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10580_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_11217_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10580_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_11217_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10580_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_t);
            r++;
        }
    }
    tbl_Filter_TD_10580_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10580_output #Row: " << tbl_Filter_TD_10580_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9455(Table &tbl_SerializeFromObject_TD_10361_input, Table &tbl_Filter_TD_9455_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#5251) AND ((d_year#5251 = 2001) AND d_year#5251 IN (2001,2002))) AND isnotnull(d_date_sk#5245)))
    // Input: ListBuffer(d_date_sk#5245, d_year#5251)
    // Output: ListBuffer(d_date_sk#5245, d_year#5251)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10361_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5251 = tbl_SerializeFromObject_TD_10361_input.getInt32(i, 1);
        int32_t _d_date_sk5245 = tbl_SerializeFromObject_TD_10361_input.getInt32(i, 0);
        auto reuse_col_str_921 = _d_year5251;
        if (((_d_year5251!= 0) && ((_d_year5251 == 2001) && ((reuse_col_str_921 == 2001) || (reuse_col_str_921 == 2002) || (0)))) && (_d_date_sk5245!= 0)) {
            int32_t _d_date_sk5245_t = tbl_SerializeFromObject_TD_10361_input.getInt32(i, 0);
            tbl_Filter_TD_9455_output.setInt32(r, 0, _d_date_sk5245_t);
            int32_t _d_year5251_t = tbl_SerializeFromObject_TD_10361_input.getInt32(i, 1);
            tbl_Filter_TD_9455_output.setInt32(r, 1, _d_year5251_t);
            r++;
        }
    }
    tbl_Filter_TD_9455_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9455_output #Row: " << tbl_Filter_TD_9455_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9651_key_leftMajor {
    int32_t _c_customer_sk5193;
    bool operator==(const SW_JOIN_INNER_TD_9651_key_leftMajor& other) const {
        return ((_c_customer_sk5193 == other._c_customer_sk5193));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9651_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9651_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk5193));
    }
};
}
struct SW_JOIN_INNER_TD_9651_payload_leftMajor {
    int32_t _c_customer_sk5193;
    std::string _c_customer_id5194;
    std::string _c_first_name5201;
    std::string _c_last_name5202;
};
struct SW_JOIN_INNER_TD_9651_key_rightMajor {
    int32_t _ws_bill_customer_sk5215;
    bool operator==(const SW_JOIN_INNER_TD_9651_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk5215 == other._ws_bill_customer_sk5215));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9651_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9651_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk5215));
    }
};
}
struct SW_JOIN_INNER_TD_9651_payload_rightMajor {
    int32_t _ws_sold_date_sk5211;
    int32_t _ws_bill_customer_sk5215;
    int32_t _ws_net_paid5240;
};
void SW_JOIN_INNER_TD_9651(Table &tbl_Filter_TD_10757_output, Table &tbl_Filter_TD_10937_output, Table &tbl_JOIN_INNER_TD_9651_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#5193 = ws_bill_customer_sk#5215))
    // Left Table: ListBuffer(c_customer_sk#5193, c_customer_id#5194, c_first_name#5201, c_last_name#5202)
    // Right Table: ListBuffer(ws_sold_date_sk#5211, ws_bill_customer_sk#5215, ws_net_paid#5240)
    // Output Table: ListBuffer(c_customer_id#5194, c_first_name#5201, c_last_name#5202, ws_sold_date_sk#5211, ws_net_paid#5240)
    int left_nrow = tbl_Filter_TD_10757_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10937_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9651_key_leftMajor, SW_JOIN_INNER_TD_9651_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10757_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk5193_k = tbl_Filter_TD_10757_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9651_key_leftMajor keyA{_c_customer_sk5193_k};
            int32_t _c_customer_sk5193 = tbl_Filter_TD_10757_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194_n = tbl_Filter_TD_10757_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id5194 = std::string(_c_customer_id5194_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5201_n = tbl_Filter_TD_10757_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name5201 = std::string(_c_first_name5201_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5202_n = tbl_Filter_TD_10757_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name5202 = std::string(_c_last_name5202_n.data());
            SW_JOIN_INNER_TD_9651_payload_leftMajor payloadA{_c_customer_sk5193, _c_customer_id5194, _c_first_name5201, _c_last_name5202};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10937_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk5215_k = tbl_Filter_TD_10937_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9651_key_leftMajor{_ws_bill_customer_sk5215_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk5193 = (it->second)._c_customer_sk5193;
                std::string _c_customer_id5194 = (it->second)._c_customer_id5194;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194_n{};
                memcpy(_c_customer_id5194_n.data(), (_c_customer_id5194).data(), (_c_customer_id5194).length());
                std::string _c_first_name5201 = (it->second)._c_first_name5201;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5201_n{};
                memcpy(_c_first_name5201_n.data(), (_c_first_name5201).data(), (_c_first_name5201).length());
                std::string _c_last_name5202 = (it->second)._c_last_name5202;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5202_n{};
                memcpy(_c_last_name5202_n.data(), (_c_last_name5202).data(), (_c_last_name5202).length());
                int32_t _ws_sold_date_sk5211 = tbl_Filter_TD_10937_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk5215 = tbl_Filter_TD_10937_output.getInt32(i, 1);
                int32_t _ws_net_paid5240 = tbl_Filter_TD_10937_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9651_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5194_n);
                tbl_JOIN_INNER_TD_9651_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5201_n);
                tbl_JOIN_INNER_TD_9651_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5202_n);
                tbl_JOIN_INNER_TD_9651_output.setInt32(r, 3, _ws_sold_date_sk5211);
                tbl_JOIN_INNER_TD_9651_output.setInt32(r, 4, _ws_net_paid5240);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9651_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9651_key_rightMajor, SW_JOIN_INNER_TD_9651_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10937_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk5215_k = tbl_Filter_TD_10937_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9651_key_rightMajor keyA{_ws_bill_customer_sk5215_k};
            int32_t _ws_sold_date_sk5211 = tbl_Filter_TD_10937_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk5215 = tbl_Filter_TD_10937_output.getInt32(i, 1);
            int32_t _ws_net_paid5240 = tbl_Filter_TD_10937_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9651_payload_rightMajor payloadA{_ws_sold_date_sk5211, _ws_bill_customer_sk5215, _ws_net_paid5240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10757_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk5193_k = tbl_Filter_TD_10757_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9651_key_rightMajor{_c_customer_sk5193_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk5211 = (it->second)._ws_sold_date_sk5211;
                int32_t _ws_bill_customer_sk5215 = (it->second)._ws_bill_customer_sk5215;
                int32_t _ws_net_paid5240 = (it->second)._ws_net_paid5240;
                int32_t _c_customer_sk5193 = tbl_Filter_TD_10757_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194_n = tbl_Filter_TD_10757_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id5194 = std::string(_c_customer_id5194_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5201_n = tbl_Filter_TD_10757_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name5201 = std::string(_c_first_name5201_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5202_n = tbl_Filter_TD_10757_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name5202 = std::string(_c_last_name5202_n.data());
                tbl_JOIN_INNER_TD_9651_output.setInt32(r, 3, _ws_sold_date_sk5211);
                tbl_JOIN_INNER_TD_9651_output.setInt32(r, 4, _ws_net_paid5240);
                tbl_JOIN_INNER_TD_9651_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5194_n);
                tbl_JOIN_INNER_TD_9651_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5201_n);
                tbl_JOIN_INNER_TD_9651_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5202_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9651_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9651_output #Row: " << tbl_JOIN_INNER_TD_9651_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9465(Table &tbl_SerializeFromObject_TD_10929_input, Table &tbl_Filter_TD_9465_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#4990) AND isnotnull(ss_sold_date_sk#4987)))
    // Input: ListBuffer(ss_sold_date_sk#4987, ss_customer_sk#4990, ss_net_paid#5007)
    // Output: ListBuffer(ss_sold_date_sk#4987, ss_customer_sk#4990, ss_net_paid#5007)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10929_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk4990 = tbl_SerializeFromObject_TD_10929_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk4987 = tbl_SerializeFromObject_TD_10929_input.getInt32(i, 0);
        if ((_ss_customer_sk4990!= 0) && (_ss_sold_date_sk4987!= 0)) {
            int32_t _ss_sold_date_sk4987_t = tbl_SerializeFromObject_TD_10929_input.getInt32(i, 0);
            tbl_Filter_TD_9465_output.setInt32(r, 0, _ss_sold_date_sk4987_t);
            int32_t _ss_customer_sk4990_t = tbl_SerializeFromObject_TD_10929_input.getInt32(i, 1);
            tbl_Filter_TD_9465_output.setInt32(r, 1, _ss_customer_sk4990_t);
            int32_t _ss_net_paid5007_t = tbl_SerializeFromObject_TD_10929_input.getInt32(i, 2);
            tbl_Filter_TD_9465_output.setInt32(r, 2, _ss_net_paid5007_t);
            r++;
        }
    }
    tbl_Filter_TD_9465_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9465_output #Row: " << tbl_Filter_TD_9465_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9238(Table &tbl_SerializeFromObject_TD_1099_input, Table &tbl_Filter_TD_9238_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#4969) AND isnotnull(c_customer_id#4970)))
    // Input: ListBuffer(c_customer_sk#4969, c_customer_id#4970, c_first_name#4977, c_last_name#4978)
    // Output: ListBuffer(c_customer_sk#4969, c_customer_id#4970, c_first_name#4977, c_last_name#4978)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1099_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk4969 = tbl_SerializeFromObject_TD_1099_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970 = tbl_SerializeFromObject_TD_1099_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk4969!= 0) && （std::string(_isnotnullc_customer_id4970.data()) != "NULL")) {
            int32_t _c_customer_sk4969_t = tbl_SerializeFromObject_TD_1099_input.getInt32(i, 0);
            tbl_Filter_TD_9238_output.setInt32(r, 0, _c_customer_sk4969_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970_t = tbl_SerializeFromObject_TD_1099_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9238_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id4970_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4977_t = tbl_SerializeFromObject_TD_1099_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9238_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name4977_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4978_t = tbl_SerializeFromObject_TD_1099_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_9238_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name4978_t);
            r++;
        }
    }
    tbl_Filter_TD_9238_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9238_output #Row: " << tbl_Filter_TD_9238_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9925(Table &tbl_SerializeFromObject_TD_10568_input, Table &tbl_Filter_TD_9925_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 = 2001) AND d_year#126 IN (2001,2002))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10568_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10568_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10568_input.getInt32(i, 0);
        auto reuse_col_str_311 = _d_year126;
        if (((_d_year126!= 0) && ((_d_year126 == 2001) && ((reuse_col_str_311 == 2001) || (reuse_col_str_311 == 2002) || (0)))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10568_input.getInt32(i, 0);
            tbl_Filter_TD_9925_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_10568_input.getInt32(i, 1);
            tbl_Filter_TD_9925_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_9925_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9925_output #Row: " << tbl_Filter_TD_9925_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9886_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_9886_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9886_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9886_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_9886_payload_leftMajor {
    int32_t _c_customer_sk0;
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
};
struct SW_JOIN_INNER_TD_9886_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_9886_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9886_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9886_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_9886_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_net_paid1226;
};
void SW_JOIN_INNER_TD_9886(Table &tbl_Filter_TD_10580_output, Table &tbl_Filter_TD_1049_output, Table &tbl_JOIN_INNER_TD_9886_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_net_paid#1226)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, ss_sold_date_sk#1206, ss_net_paid#1226)
    int left_nrow = tbl_Filter_TD_10580_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1049_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9886_key_leftMajor, SW_JOIN_INNER_TD_9886_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10580_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10580_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9886_key_leftMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_10580_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_10580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_10580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_10580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            SW_JOIN_INNER_TD_9886_payload_leftMajor payloadA{_c_customer_sk0, _c_customer_id1, _c_first_name8, _c_last_name9};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1049_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_1049_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9886_key_leftMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1049_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_1049_output.getInt32(i, 1);
                int32_t _ss_net_paid1226 = tbl_Filter_TD_1049_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_9886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_9886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_9886_output.setInt32(r, 3, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9886_output.setInt32(r, 4, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9886_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9886_key_rightMajor, SW_JOIN_INNER_TD_9886_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1049_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_1049_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9886_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_1049_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_1049_output.getInt32(i, 1);
            int32_t _ss_net_paid1226 = tbl_Filter_TD_1049_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9886_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10580_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10580_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9886_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _c_customer_sk0 = tbl_Filter_TD_10580_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_10580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_10580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_10580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                tbl_JOIN_INNER_TD_9886_output.setInt32(r, 3, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9886_output.setInt32(r, 4, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_9886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_9886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_9886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9886_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9886_output #Row: " << tbl_JOIN_INNER_TD_9886_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8711_key_leftMajor {
    int32_t _ws_sold_date_sk5211;
    bool operator==(const SW_JOIN_INNER_TD_8711_key_leftMajor& other) const {
        return ((_ws_sold_date_sk5211 == other._ws_sold_date_sk5211));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8711_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8711_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk5211));
    }
};
}
struct SW_JOIN_INNER_TD_8711_payload_leftMajor {
    std::string _c_customer_id5194;
    std::string _c_first_name5201;
    std::string _c_last_name5202;
    int32_t _ws_sold_date_sk5211;
    int32_t _ws_net_paid5240;
};
struct SW_JOIN_INNER_TD_8711_key_rightMajor {
    int32_t _d_date_sk5245;
    bool operator==(const SW_JOIN_INNER_TD_8711_key_rightMajor& other) const {
        return ((_d_date_sk5245 == other._d_date_sk5245));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8711_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8711_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5245));
    }
};
}
struct SW_JOIN_INNER_TD_8711_payload_rightMajor {
    int32_t _d_date_sk5245;
    int32_t _d_year5251;
};
void SW_JOIN_INNER_TD_8711(Table &tbl_JOIN_INNER_TD_9651_output, Table &tbl_Filter_TD_9455_output, Table &tbl_JOIN_INNER_TD_8711_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#5211 = d_date_sk#5245))
    // Left Table: ListBuffer(c_customer_id#5194, c_first_name#5201, c_last_name#5202, ws_sold_date_sk#5211, ws_net_paid#5240)
    // Right Table: ListBuffer(d_date_sk#5245, d_year#5251)
    // Output Table: ListBuffer(c_customer_id#5194, c_first_name#5201, c_last_name#5202, ws_net_paid#5240, d_year#5251)
    int left_nrow = tbl_JOIN_INNER_TD_9651_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9455_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8711_key_leftMajor, SW_JOIN_INNER_TD_8711_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9651_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk5211_k = tbl_JOIN_INNER_TD_9651_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8711_key_leftMajor keyA{_ws_sold_date_sk5211_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194_n = tbl_JOIN_INNER_TD_9651_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id5194 = std::string(_c_customer_id5194_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5201_n = tbl_JOIN_INNER_TD_9651_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name5201 = std::string(_c_first_name5201_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5202_n = tbl_JOIN_INNER_TD_9651_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name5202 = std::string(_c_last_name5202_n.data());
            int32_t _ws_sold_date_sk5211 = tbl_JOIN_INNER_TD_9651_output.getInt32(i, 3);
            int32_t _ws_net_paid5240 = tbl_JOIN_INNER_TD_9651_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_8711_payload_leftMajor payloadA{_c_customer_id5194, _c_first_name5201, _c_last_name5202, _ws_sold_date_sk5211, _ws_net_paid5240};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9455_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5245_k = tbl_Filter_TD_9455_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8711_key_leftMajor{_d_date_sk5245_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id5194 = (it->second)._c_customer_id5194;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194_n{};
                memcpy(_c_customer_id5194_n.data(), (_c_customer_id5194).data(), (_c_customer_id5194).length());
                std::string _c_first_name5201 = (it->second)._c_first_name5201;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5201_n{};
                memcpy(_c_first_name5201_n.data(), (_c_first_name5201).data(), (_c_first_name5201).length());
                std::string _c_last_name5202 = (it->second)._c_last_name5202;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5202_n{};
                memcpy(_c_last_name5202_n.data(), (_c_last_name5202).data(), (_c_last_name5202).length());
                int32_t _ws_sold_date_sk5211 = (it->second)._ws_sold_date_sk5211;
                int32_t _ws_net_paid5240 = (it->second)._ws_net_paid5240;
                int32_t _d_date_sk5245 = tbl_Filter_TD_9455_output.getInt32(i, 0);
                int32_t _d_year5251 = tbl_Filter_TD_9455_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8711_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5194_n);
                tbl_JOIN_INNER_TD_8711_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5201_n);
                tbl_JOIN_INNER_TD_8711_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5202_n);
                tbl_JOIN_INNER_TD_8711_output.setInt32(r, 3, _ws_net_paid5240);
                tbl_JOIN_INNER_TD_8711_output.setInt32(r, 4, _d_year5251);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8711_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8711_key_rightMajor, SW_JOIN_INNER_TD_8711_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9455_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5245_k = tbl_Filter_TD_9455_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8711_key_rightMajor keyA{_d_date_sk5245_k};
            int32_t _d_date_sk5245 = tbl_Filter_TD_9455_output.getInt32(i, 0);
            int32_t _d_year5251 = tbl_Filter_TD_9455_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8711_payload_rightMajor payloadA{_d_date_sk5245, _d_year5251};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9651_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk5211_k = tbl_JOIN_INNER_TD_9651_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8711_key_rightMajor{_ws_sold_date_sk5211_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5245 = (it->second)._d_date_sk5245;
                int32_t _d_year5251 = (it->second)._d_year5251;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194_n = tbl_JOIN_INNER_TD_9651_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id5194 = std::string(_c_customer_id5194_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5201_n = tbl_JOIN_INNER_TD_9651_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name5201 = std::string(_c_first_name5201_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5202_n = tbl_JOIN_INNER_TD_9651_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name5202 = std::string(_c_last_name5202_n.data());
                int32_t _ws_sold_date_sk5211 = tbl_JOIN_INNER_TD_9651_output.getInt32(i, 3);
                int32_t _ws_net_paid5240 = tbl_JOIN_INNER_TD_9651_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_8711_output.setInt32(r, 4, _d_year5251);
                tbl_JOIN_INNER_TD_8711_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5194_n);
                tbl_JOIN_INNER_TD_8711_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5201_n);
                tbl_JOIN_INNER_TD_8711_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5202_n);
                tbl_JOIN_INNER_TD_8711_output.setInt32(r, 3, _ws_net_paid5240);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8711_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8711_output #Row: " << tbl_JOIN_INNER_TD_8711_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8521(Table &tbl_SerializeFromObject_TD_9951_input, Table &tbl_Filter_TD_8521_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#5016) AND ((d_year#5016 = 2002) AND d_year#5016 IN (2001,2002))) AND isnotnull(d_date_sk#5010)))
    // Input: ListBuffer(d_date_sk#5010, d_year#5016)
    // Output: ListBuffer(d_date_sk#5010, d_year#5016)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9951_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5016 = tbl_SerializeFromObject_TD_9951_input.getInt32(i, 1);
        int32_t _d_date_sk5010 = tbl_SerializeFromObject_TD_9951_input.getInt32(i, 0);
        auto reuse_col_str_461 = _d_year5016;
        if (((_d_year5016!= 0) && ((_d_year5016 == 2002) && ((reuse_col_str_461 == 2001) || (reuse_col_str_461 == 2002) || (0)))) && (_d_date_sk5010!= 0)) {
            int32_t _d_date_sk5010_t = tbl_SerializeFromObject_TD_9951_input.getInt32(i, 0);
            tbl_Filter_TD_8521_output.setInt32(r, 0, _d_date_sk5010_t);
            int32_t _d_year5016_t = tbl_SerializeFromObject_TD_9951_input.getInt32(i, 1);
            tbl_Filter_TD_8521_output.setInt32(r, 1, _d_year5016_t);
            r++;
        }
    }
    tbl_Filter_TD_8521_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8521_output #Row: " << tbl_Filter_TD_8521_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_829_key_leftMajor {
    int32_t _c_customer_sk4969;
    bool operator==(const SW_JOIN_INNER_TD_829_key_leftMajor& other) const {
        return ((_c_customer_sk4969 == other._c_customer_sk4969));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_829_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_829_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk4969));
    }
};
}
struct SW_JOIN_INNER_TD_829_payload_leftMajor {
    int32_t _c_customer_sk4969;
    std::string _c_customer_id4970;
    std::string _c_first_name4977;
    std::string _c_last_name4978;
};
struct SW_JOIN_INNER_TD_829_key_rightMajor {
    int32_t _ss_customer_sk4990;
    bool operator==(const SW_JOIN_INNER_TD_829_key_rightMajor& other) const {
        return ((_ss_customer_sk4990 == other._ss_customer_sk4990));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_829_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_829_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk4990));
    }
};
}
struct SW_JOIN_INNER_TD_829_payload_rightMajor {
    int32_t _ss_sold_date_sk4987;
    int32_t _ss_customer_sk4990;
    int32_t _ss_net_paid5007;
};
void SW_JOIN_INNER_TD_829(Table &tbl_Filter_TD_9238_output, Table &tbl_Filter_TD_9465_output, Table &tbl_JOIN_INNER_TD_829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#4969 = ss_customer_sk#4990))
    // Left Table: ListBuffer(c_customer_sk#4969, c_customer_id#4970, c_first_name#4977, c_last_name#4978)
    // Right Table: ListBuffer(ss_sold_date_sk#4987, ss_customer_sk#4990, ss_net_paid#5007)
    // Output Table: ListBuffer(c_customer_id#4970, c_first_name#4977, c_last_name#4978, ss_sold_date_sk#4987, ss_net_paid#5007)
    int left_nrow = tbl_Filter_TD_9238_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9465_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_829_key_leftMajor, SW_JOIN_INNER_TD_829_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9238_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk4969_k = tbl_Filter_TD_9238_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_829_key_leftMajor keyA{_c_customer_sk4969_k};
            int32_t _c_customer_sk4969 = tbl_Filter_TD_9238_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970_n = tbl_Filter_TD_9238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id4970 = std::string(_c_customer_id4970_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4977_n = tbl_Filter_TD_9238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name4977 = std::string(_c_first_name4977_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4978_n = tbl_Filter_TD_9238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name4978 = std::string(_c_last_name4978_n.data());
            SW_JOIN_INNER_TD_829_payload_leftMajor payloadA{_c_customer_sk4969, _c_customer_id4970, _c_first_name4977, _c_last_name4978};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9465_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk4990_k = tbl_Filter_TD_9465_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_829_key_leftMajor{_ss_customer_sk4990_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk4969 = (it->second)._c_customer_sk4969;
                std::string _c_customer_id4970 = (it->second)._c_customer_id4970;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970_n{};
                memcpy(_c_customer_id4970_n.data(), (_c_customer_id4970).data(), (_c_customer_id4970).length());
                std::string _c_first_name4977 = (it->second)._c_first_name4977;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4977_n{};
                memcpy(_c_first_name4977_n.data(), (_c_first_name4977).data(), (_c_first_name4977).length());
                std::string _c_last_name4978 = (it->second)._c_last_name4978;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4978_n{};
                memcpy(_c_last_name4978_n.data(), (_c_last_name4978).data(), (_c_last_name4978).length());
                int32_t _ss_sold_date_sk4987 = tbl_Filter_TD_9465_output.getInt32(i, 0);
                int32_t _ss_customer_sk4990 = tbl_Filter_TD_9465_output.getInt32(i, 1);
                int32_t _ss_net_paid5007 = tbl_Filter_TD_9465_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_829_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4970_n);
                tbl_JOIN_INNER_TD_829_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4977_n);
                tbl_JOIN_INNER_TD_829_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4978_n);
                tbl_JOIN_INNER_TD_829_output.setInt32(r, 3, _ss_sold_date_sk4987);
                tbl_JOIN_INNER_TD_829_output.setInt32(r, 4, _ss_net_paid5007);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_829_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_829_key_rightMajor, SW_JOIN_INNER_TD_829_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9465_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk4990_k = tbl_Filter_TD_9465_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_829_key_rightMajor keyA{_ss_customer_sk4990_k};
            int32_t _ss_sold_date_sk4987 = tbl_Filter_TD_9465_output.getInt32(i, 0);
            int32_t _ss_customer_sk4990 = tbl_Filter_TD_9465_output.getInt32(i, 1);
            int32_t _ss_net_paid5007 = tbl_Filter_TD_9465_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_829_payload_rightMajor payloadA{_ss_sold_date_sk4987, _ss_customer_sk4990, _ss_net_paid5007};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9238_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk4969_k = tbl_Filter_TD_9238_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_829_key_rightMajor{_c_customer_sk4969_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk4987 = (it->second)._ss_sold_date_sk4987;
                int32_t _ss_customer_sk4990 = (it->second)._ss_customer_sk4990;
                int32_t _ss_net_paid5007 = (it->second)._ss_net_paid5007;
                int32_t _c_customer_sk4969 = tbl_Filter_TD_9238_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970_n = tbl_Filter_TD_9238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id4970 = std::string(_c_customer_id4970_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4977_n = tbl_Filter_TD_9238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name4977 = std::string(_c_first_name4977_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4978_n = tbl_Filter_TD_9238_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name4978 = std::string(_c_last_name4978_n.data());
                tbl_JOIN_INNER_TD_829_output.setInt32(r, 3, _ss_sold_date_sk4987);
                tbl_JOIN_INNER_TD_829_output.setInt32(r, 4, _ss_net_paid5007);
                tbl_JOIN_INNER_TD_829_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4970_n);
                tbl_JOIN_INNER_TD_829_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4977_n);
                tbl_JOIN_INNER_TD_829_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4978_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_829_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_829_output #Row: " << tbl_JOIN_INNER_TD_829_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8521_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8521_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8521_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8521_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8521_payload_leftMajor {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_net_paid1226;
};
struct SW_JOIN_INNER_TD_8521_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8521_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8521_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8521_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8521_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_8521(Table &tbl_JOIN_INNER_TD_9886_output, Table &tbl_Filter_TD_9925_output, Table &tbl_JOIN_INNER_TD_8521_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, ss_sold_date_sk#1206, ss_net_paid#1226)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, ss_net_paid#1226, d_year#126)
    int left_nrow = tbl_JOIN_INNER_TD_9886_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9925_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8521_key_leftMajor, SW_JOIN_INNER_TD_8521_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9886_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9886_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8521_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_9886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_9886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_9886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9886_output.getInt32(i, 3);
            int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_9886_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_8521_payload_leftMajor payloadA{_c_customer_id1, _c_first_name8, _c_last_name9, _ss_sold_date_sk1206, _ss_net_paid1226};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9925_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9925_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8521_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id1 = (it->second)._c_customer_id1;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n{};
                memcpy(_c_customer_id1_n.data(), (_c_customer_id1).data(), (_c_customer_id1).length());
                std::string _c_first_name8 = (it->second)._c_first_name8;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n{};
                memcpy(_c_first_name8_n.data(), (_c_first_name8).data(), (_c_first_name8).length());
                std::string _c_last_name9 = (it->second)._c_last_name9;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n{};
                memcpy(_c_last_name9_n.data(), (_c_last_name9).data(), (_c_last_name9).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_net_paid1226 = (it->second)._ss_net_paid1226;
                int32_t _d_date_sk120 = tbl_Filter_TD_9925_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_9925_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8521_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_8521_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_8521_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_8521_output.setInt32(r, 3, _ss_net_paid1226);
                tbl_JOIN_INNER_TD_8521_output.setInt32(r, 4, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8521_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8521_key_rightMajor, SW_JOIN_INNER_TD_8521_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9925_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_9925_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8521_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_9925_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_9925_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8521_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9886_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9886_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8521_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_9886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_9886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_9886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9886_output.getInt32(i, 3);
                int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_9886_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_8521_output.setInt32(r, 4, _d_year126);
                tbl_JOIN_INNER_TD_8521_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_8521_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_8521_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_8521_output.setInt32(r, 3, _ss_net_paid1226);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8521_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8521_output #Row: " << tbl_JOIN_INNER_TD_8521_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7526(Table &tbl_SerializeFromObject_TD_8922_input, Table &tbl_Filter_TD_7526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#5370) AND isnotnull(ws_sold_date_sk#5366)))
    // Input: ListBuffer(ws_sold_date_sk#5366, ws_bill_customer_sk#5370, ws_net_paid#5395)
    // Output: ListBuffer(ws_sold_date_sk#5366, ws_bill_customer_sk#5370, ws_net_paid#5395)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8922_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk5370 = tbl_SerializeFromObject_TD_8922_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk5366 = tbl_SerializeFromObject_TD_8922_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk5370!= 0) && (_ws_sold_date_sk5366!= 0)) {
            int32_t _ws_sold_date_sk5366_t = tbl_SerializeFromObject_TD_8922_input.getInt32(i, 0);
            tbl_Filter_TD_7526_output.setInt32(r, 0, _ws_sold_date_sk5366_t);
            int32_t _ws_bill_customer_sk5370_t = tbl_SerializeFromObject_TD_8922_input.getInt32(i, 1);
            tbl_Filter_TD_7526_output.setInt32(r, 1, _ws_bill_customer_sk5370_t);
            int32_t _ws_net_paid5395_t = tbl_SerializeFromObject_TD_8922_input.getInt32(i, 2);
            tbl_Filter_TD_7526_output.setInt32(r, 2, _ws_net_paid5395_t);
            r++;
        }
    }
    tbl_Filter_TD_7526_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7526_output #Row: " << tbl_Filter_TD_7526_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7212(Table &tbl_SerializeFromObject_TD_89_input, Table &tbl_Filter_TD_7212_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#5348) AND isnotnull(c_customer_id#5349)))
    // Input: ListBuffer(c_customer_sk#5348, c_customer_id#5349, c_first_name#5356, c_last_name#5357)
    // Output: ListBuffer(c_customer_sk#5348, c_customer_id#5349, c_first_name#5356, c_last_name#5357)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_89_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk5348 = tbl_SerializeFromObject_TD_89_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349 = tbl_SerializeFromObject_TD_89_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk5348!= 0) && （std::string(_isnotnullc_customer_id5349.data()) != "NULL")) {
            int32_t _c_customer_sk5348_t = tbl_SerializeFromObject_TD_89_input.getInt32(i, 0);
            tbl_Filter_TD_7212_output.setInt32(r, 0, _c_customer_sk5348_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349_t = tbl_SerializeFromObject_TD_89_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id5349_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5356_t = tbl_SerializeFromObject_TD_89_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name5356_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5357_t = tbl_SerializeFromObject_TD_89_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_7212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name5357_t);
            r++;
        }
    }
    tbl_Filter_TD_7212_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7212_output #Row: " << tbl_Filter_TD_7212_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7535_key {
    std::string _c_customer_id5194;
    std::string _c_first_name5201;
    std::string _c_last_name5202;
    int32_t _d_year5251;
    bool operator==(const SW_Aggregate_TD_7535_key& other) const { return (_c_customer_id5194 == other._c_customer_id5194) && (_c_first_name5201 == other._c_first_name5201) && (_c_last_name5202 == other._c_last_name5202) && (_d_year5251 == other._d_year5251); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7535_key> {
    std::size_t operator() (const SW_Aggregate_TD_7535_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id5194)) + (hash<string>()(k._c_first_name5201)) + (hash<string>()(k._c_last_name5202)) + (hash<int32_t>()(k._d_year5251));
    }
};
}
struct SW_Aggregate_TD_7535_payload {
    std::string _customer_id3856;
    int32_t _year_total3860_sum_0;
};
void SW_Aggregate_TD_7535(Table &tbl_JOIN_INNER_TD_8711_output, Table &tbl_Aggregate_TD_7535_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#5194, c_first_name#5201, c_last_name#5202, d_year#5251, c_customer_id#5194 AS customer_id#3856, MakeDecimal(sum(UnscaledValue(ws_net_paid#5240)),17,2) AS year_total#3860)
    // Input: ListBuffer(c_customer_id#5194, c_first_name#5201, c_last_name#5202, ws_net_paid#5240, d_year#5251)
    // Output: ListBuffer(customer_id#3856, year_total#3860)
    std::unordered_map<SW_Aggregate_TD_7535_key, SW_Aggregate_TD_7535_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8711_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5194 = tbl_JOIN_INNER_TD_8711_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name5201 = tbl_JOIN_INNER_TD_8711_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name5202 = tbl_JOIN_INNER_TD_8711_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _ws_net_paid5240 = tbl_JOIN_INNER_TD_8711_output.getInt32(i, 3);
        int32_t _d_year5251 = tbl_JOIN_INNER_TD_8711_output.getInt32(i, 4);
        SW_Aggregate_TD_7535_key k{std::string(_c_customer_id5194.data()), std::string(_c_first_name5201.data()), std::string(_c_last_name5202.data()), _d_year5251};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3856 = _c_customer_id5194;
        int64_t _year_total3860_sum_0 = _ws_net_paid5240;
        SW_Aggregate_TD_7535_payload p{std::string(_customer_id3856.data()), _year_total3860_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total3860_sum_0 + _year_total3860_sum_0;
            p._year_total3860_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id5194 not required in the output table
        // _c_first_name5201 not required in the output table
        // _c_last_name5202 not required in the output table
        // _d_year5251 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3856_n{};
        memcpy(_customer_id3856_n.data(), (it.second)._customer_id3856.data(), (it.second)._customer_id3856.length());
        tbl_Aggregate_TD_7535_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3856_n);
        int32_t _year_total3860 = (it.second)._year_total3860_sum_0;
        tbl_Aggregate_TD_7535_output.setInt32(r, 1, _year_total3860);
        ++r;
    }
    tbl_Aggregate_TD_7535_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7535_output #Row: " << tbl_Aggregate_TD_7535_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7845_key_leftMajor {
    int32_t _ss_sold_date_sk4987;
    bool operator==(const SW_JOIN_INNER_TD_7845_key_leftMajor& other) const {
        return ((_ss_sold_date_sk4987 == other._ss_sold_date_sk4987));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7845_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7845_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk4987));
    }
};
}
struct SW_JOIN_INNER_TD_7845_payload_leftMajor {
    std::string _c_customer_id4970;
    std::string _c_first_name4977;
    std::string _c_last_name4978;
    int32_t _ss_sold_date_sk4987;
    int32_t _ss_net_paid5007;
};
struct SW_JOIN_INNER_TD_7845_key_rightMajor {
    int32_t _d_date_sk5010;
    bool operator==(const SW_JOIN_INNER_TD_7845_key_rightMajor& other) const {
        return ((_d_date_sk5010 == other._d_date_sk5010));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7845_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7845_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5010));
    }
};
}
struct SW_JOIN_INNER_TD_7845_payload_rightMajor {
    int32_t _d_date_sk5010;
    int32_t _d_year5016;
};
void SW_JOIN_INNER_TD_7845(Table &tbl_JOIN_INNER_TD_829_output, Table &tbl_Filter_TD_8521_output, Table &tbl_JOIN_INNER_TD_7845_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#4987 = d_date_sk#5010))
    // Left Table: ListBuffer(c_customer_id#4970, c_first_name#4977, c_last_name#4978, ss_sold_date_sk#4987, ss_net_paid#5007)
    // Right Table: ListBuffer(d_date_sk#5010, d_year#5016)
    // Output Table: ListBuffer(c_customer_id#4970, c_first_name#4977, c_last_name#4978, ss_net_paid#5007, d_year#5016)
    int left_nrow = tbl_JOIN_INNER_TD_829_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8521_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7845_key_leftMajor, SW_JOIN_INNER_TD_7845_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_829_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk4987_k = tbl_JOIN_INNER_TD_829_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7845_key_leftMajor keyA{_ss_sold_date_sk4987_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970_n = tbl_JOIN_INNER_TD_829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id4970 = std::string(_c_customer_id4970_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name4977_n = tbl_JOIN_INNER_TD_829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name4977 = std::string(_c_first_name4977_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name4978_n = tbl_JOIN_INNER_TD_829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name4978 = std::string(_c_last_name4978_n.data());
            int32_t _ss_sold_date_sk4987 = tbl_JOIN_INNER_TD_829_output.getInt32(i, 3);
            int32_t _ss_net_paid5007 = tbl_JOIN_INNER_TD_829_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7845_payload_leftMajor payloadA{_c_customer_id4970, _c_first_name4977, _c_last_name4978, _ss_sold_date_sk4987, _ss_net_paid5007};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8521_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5010_k = tbl_Filter_TD_8521_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7845_key_leftMajor{_d_date_sk5010_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id4970 = (it->second)._c_customer_id4970;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970_n{};
                memcpy(_c_customer_id4970_n.data(), (_c_customer_id4970).data(), (_c_customer_id4970).length());
                std::string _c_first_name4977 = (it->second)._c_first_name4977;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4977_n{};
                memcpy(_c_first_name4977_n.data(), (_c_first_name4977).data(), (_c_first_name4977).length());
                std::string _c_last_name4978 = (it->second)._c_last_name4978;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4978_n{};
                memcpy(_c_last_name4978_n.data(), (_c_last_name4978).data(), (_c_last_name4978).length());
                int32_t _ss_sold_date_sk4987 = (it->second)._ss_sold_date_sk4987;
                int32_t _ss_net_paid5007 = (it->second)._ss_net_paid5007;
                int32_t _d_date_sk5010 = tbl_Filter_TD_8521_output.getInt32(i, 0);
                int32_t _d_year5016 = tbl_Filter_TD_8521_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7845_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4970_n);
                tbl_JOIN_INNER_TD_7845_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4977_n);
                tbl_JOIN_INNER_TD_7845_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4978_n);
                tbl_JOIN_INNER_TD_7845_output.setInt32(r, 3, _ss_net_paid5007);
                tbl_JOIN_INNER_TD_7845_output.setInt32(r, 4, _d_year5016);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7845_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7845_key_rightMajor, SW_JOIN_INNER_TD_7845_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8521_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5010_k = tbl_Filter_TD_8521_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7845_key_rightMajor keyA{_d_date_sk5010_k};
            int32_t _d_date_sk5010 = tbl_Filter_TD_8521_output.getInt32(i, 0);
            int32_t _d_year5016 = tbl_Filter_TD_8521_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7845_payload_rightMajor payloadA{_d_date_sk5010, _d_year5016};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_829_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk4987_k = tbl_JOIN_INNER_TD_829_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7845_key_rightMajor{_ss_sold_date_sk4987_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5010 = (it->second)._d_date_sk5010;
                int32_t _d_year5016 = (it->second)._d_year5016;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970_n = tbl_JOIN_INNER_TD_829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id4970 = std::string(_c_customer_id4970_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name4977_n = tbl_JOIN_INNER_TD_829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name4977 = std::string(_c_first_name4977_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name4978_n = tbl_JOIN_INNER_TD_829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name4978 = std::string(_c_last_name4978_n.data());
                int32_t _ss_sold_date_sk4987 = tbl_JOIN_INNER_TD_829_output.getInt32(i, 3);
                int32_t _ss_net_paid5007 = tbl_JOIN_INNER_TD_829_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7845_output.setInt32(r, 4, _d_year5016);
                tbl_JOIN_INNER_TD_7845_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id4970_n);
                tbl_JOIN_INNER_TD_7845_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name4977_n);
                tbl_JOIN_INNER_TD_7845_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name4978_n);
                tbl_JOIN_INNER_TD_7845_output.setInt32(r, 3, _ss_net_paid5007);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7845_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7845_output #Row: " << tbl_JOIN_INNER_TD_7845_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7573_key {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    int32_t _d_year126;
    bool operator==(const SW_Aggregate_TD_7573_key& other) const { return (_c_customer_id1 == other._c_customer_id1) && (_c_first_name8 == other._c_first_name8) && (_c_last_name9 == other._c_last_name9) && (_d_year126 == other._d_year126); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7573_key> {
    std::size_t operator() (const SW_Aggregate_TD_7573_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id1)) + (hash<string>()(k._c_first_name8)) + (hash<string>()(k._c_last_name9)) + (hash<int32_t>()(k._d_year126));
    }
};
}
struct SW_Aggregate_TD_7573_payload {
    std::string _customer_id3850;
    int32_t _year_total3854_sum_0;
};
void SW_Aggregate_TD_7573(Table &tbl_JOIN_INNER_TD_8521_output, Table &tbl_Aggregate_TD_7573_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, d_year#126, c_customer_id#1 AS customer_id#3850, MakeDecimal(sum(UnscaledValue(ss_net_paid#1226)),17,2) AS year_total#3854)
    // Input: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, ss_net_paid#1226, d_year#126)
    // Output: ListBuffer(customer_id#3850, year_total#3854)
    std::unordered_map<SW_Aggregate_TD_7573_key, SW_Aggregate_TD_7573_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8521_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_8521_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_8521_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_8521_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _ss_net_paid1226 = tbl_JOIN_INNER_TD_8521_output.getInt32(i, 3);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_8521_output.getInt32(i, 4);
        SW_Aggregate_TD_7573_key k{std::string(_c_customer_id1.data()), std::string(_c_first_name8.data()), std::string(_c_last_name9.data()), _d_year126};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3850 = _c_customer_id1;
        int64_t _year_total3854_sum_0 = _ss_net_paid1226;
        SW_Aggregate_TD_7573_payload p{std::string(_customer_id3850.data()), _year_total3854_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total3854_sum_0 + _year_total3854_sum_0;
            p._year_total3854_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id1 not required in the output table
        // _c_first_name8 not required in the output table
        // _c_last_name9 not required in the output table
        // _d_year126 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n{};
        memcpy(_customer_id3850_n.data(), (it.second)._customer_id3850.data(), (it.second)._customer_id3850.length());
        tbl_Aggregate_TD_7573_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3850_n);
        int32_t _year_total3854 = (it.second)._year_total3854_sum_0;
        tbl_Aggregate_TD_7573_output.setInt32(r, 1, _year_total3854);
        ++r;
    }
    tbl_Aggregate_TD_7573_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7573_output #Row: " << tbl_Aggregate_TD_7573_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6498(Table &tbl_SerializeFromObject_TD_7904_input, Table &tbl_Filter_TD_6498_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#5406) AND ((d_year#5406 = 2002) AND d_year#5406 IN (2001,2002))) AND isnotnull(d_date_sk#5400)))
    // Input: ListBuffer(d_date_sk#5400, d_year#5406)
    // Output: ListBuffer(d_date_sk#5400, d_year#5406)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7904_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5406 = tbl_SerializeFromObject_TD_7904_input.getInt32(i, 1);
        int32_t _d_date_sk5400 = tbl_SerializeFromObject_TD_7904_input.getInt32(i, 0);
        auto reuse_col_str_452 = _d_year5406;
        if (((_d_year5406!= 0) && ((_d_year5406 == 2002) && ((reuse_col_str_452 == 2001) || (reuse_col_str_452 == 2002) || (0)))) && (_d_date_sk5400!= 0)) {
            int32_t _d_date_sk5400_t = tbl_SerializeFromObject_TD_7904_input.getInt32(i, 0);
            tbl_Filter_TD_6498_output.setInt32(r, 0, _d_date_sk5400_t);
            int32_t _d_year5406_t = tbl_SerializeFromObject_TD_7904_input.getInt32(i, 1);
            tbl_Filter_TD_6498_output.setInt32(r, 1, _d_year5406_t);
            r++;
        }
    }
    tbl_Filter_TD_6498_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6498_output #Row: " << tbl_Filter_TD_6498_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6224_key_leftMajor {
    int32_t _c_customer_sk5348;
    bool operator==(const SW_JOIN_INNER_TD_6224_key_leftMajor& other) const {
        return ((_c_customer_sk5348 == other._c_customer_sk5348));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6224_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6224_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk5348));
    }
};
}
struct SW_JOIN_INNER_TD_6224_payload_leftMajor {
    int32_t _c_customer_sk5348;
    std::string _c_customer_id5349;
    std::string _c_first_name5356;
    std::string _c_last_name5357;
};
struct SW_JOIN_INNER_TD_6224_key_rightMajor {
    int32_t _ws_bill_customer_sk5370;
    bool operator==(const SW_JOIN_INNER_TD_6224_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk5370 == other._ws_bill_customer_sk5370));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6224_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6224_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk5370));
    }
};
}
struct SW_JOIN_INNER_TD_6224_payload_rightMajor {
    int32_t _ws_sold_date_sk5366;
    int32_t _ws_bill_customer_sk5370;
    int32_t _ws_net_paid5395;
};
void SW_JOIN_INNER_TD_6224(Table &tbl_Filter_TD_7212_output, Table &tbl_Filter_TD_7526_output, Table &tbl_JOIN_INNER_TD_6224_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#5348 = ws_bill_customer_sk#5370))
    // Left Table: ListBuffer(c_customer_sk#5348, c_customer_id#5349, c_first_name#5356, c_last_name#5357)
    // Right Table: ListBuffer(ws_sold_date_sk#5366, ws_bill_customer_sk#5370, ws_net_paid#5395)
    // Output Table: ListBuffer(c_customer_id#5349, c_first_name#5356, c_last_name#5357, ws_sold_date_sk#5366, ws_net_paid#5395)
    int left_nrow = tbl_Filter_TD_7212_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7526_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6224_key_leftMajor, SW_JOIN_INNER_TD_6224_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7212_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk5348_k = tbl_Filter_TD_7212_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6224_key_leftMajor keyA{_c_customer_sk5348_k};
            int32_t _c_customer_sk5348 = tbl_Filter_TD_7212_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349_n = tbl_Filter_TD_7212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id5349 = std::string(_c_customer_id5349_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5356_n = tbl_Filter_TD_7212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name5356 = std::string(_c_first_name5356_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5357_n = tbl_Filter_TD_7212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name5357 = std::string(_c_last_name5357_n.data());
            SW_JOIN_INNER_TD_6224_payload_leftMajor payloadA{_c_customer_sk5348, _c_customer_id5349, _c_first_name5356, _c_last_name5357};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7526_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk5370_k = tbl_Filter_TD_7526_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6224_key_leftMajor{_ws_bill_customer_sk5370_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk5348 = (it->second)._c_customer_sk5348;
                std::string _c_customer_id5349 = (it->second)._c_customer_id5349;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349_n{};
                memcpy(_c_customer_id5349_n.data(), (_c_customer_id5349).data(), (_c_customer_id5349).length());
                std::string _c_first_name5356 = (it->second)._c_first_name5356;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5356_n{};
                memcpy(_c_first_name5356_n.data(), (_c_first_name5356).data(), (_c_first_name5356).length());
                std::string _c_last_name5357 = (it->second)._c_last_name5357;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5357_n{};
                memcpy(_c_last_name5357_n.data(), (_c_last_name5357).data(), (_c_last_name5357).length());
                int32_t _ws_sold_date_sk5366 = tbl_Filter_TD_7526_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk5370 = tbl_Filter_TD_7526_output.getInt32(i, 1);
                int32_t _ws_net_paid5395 = tbl_Filter_TD_7526_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6224_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5349_n);
                tbl_JOIN_INNER_TD_6224_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5356_n);
                tbl_JOIN_INNER_TD_6224_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5357_n);
                tbl_JOIN_INNER_TD_6224_output.setInt32(r, 3, _ws_sold_date_sk5366);
                tbl_JOIN_INNER_TD_6224_output.setInt32(r, 4, _ws_net_paid5395);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6224_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6224_key_rightMajor, SW_JOIN_INNER_TD_6224_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7526_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk5370_k = tbl_Filter_TD_7526_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6224_key_rightMajor keyA{_ws_bill_customer_sk5370_k};
            int32_t _ws_sold_date_sk5366 = tbl_Filter_TD_7526_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk5370 = tbl_Filter_TD_7526_output.getInt32(i, 1);
            int32_t _ws_net_paid5395 = tbl_Filter_TD_7526_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6224_payload_rightMajor payloadA{_ws_sold_date_sk5366, _ws_bill_customer_sk5370, _ws_net_paid5395};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7212_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk5348_k = tbl_Filter_TD_7212_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6224_key_rightMajor{_c_customer_sk5348_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk5366 = (it->second)._ws_sold_date_sk5366;
                int32_t _ws_bill_customer_sk5370 = (it->second)._ws_bill_customer_sk5370;
                int32_t _ws_net_paid5395 = (it->second)._ws_net_paid5395;
                int32_t _c_customer_sk5348 = tbl_Filter_TD_7212_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349_n = tbl_Filter_TD_7212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id5349 = std::string(_c_customer_id5349_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5356_n = tbl_Filter_TD_7212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name5356 = std::string(_c_first_name5356_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5357_n = tbl_Filter_TD_7212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name5357 = std::string(_c_last_name5357_n.data());
                tbl_JOIN_INNER_TD_6224_output.setInt32(r, 3, _ws_sold_date_sk5366);
                tbl_JOIN_INNER_TD_6224_output.setInt32(r, 4, _ws_net_paid5395);
                tbl_JOIN_INNER_TD_6224_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5349_n);
                tbl_JOIN_INNER_TD_6224_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5356_n);
                tbl_JOIN_INNER_TD_6224_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5357_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6224_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6224_output #Row: " << tbl_JOIN_INNER_TD_6224_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6452(Table &tbl_Aggregate_TD_7535_output, Table &tbl_Filter_TD_6452_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#3860) AND (year_total#3860 > 0.00)))
    // Input: ListBuffer(customer_id#3856, year_total#3860)
    // Output: ListBuffer(customer_id#3856, year_total#3860)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7535_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total3860 = tbl_Aggregate_TD_7535_output.getInt32(i, 1);
        if ((_year_total3860!= 0) && (_year_total3860 > 0.00)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3856_t = tbl_Aggregate_TD_7535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6452_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3856_t);
            int32_t _year_total3860_t = tbl_Aggregate_TD_7535_output.getInt32(i, 1);
            tbl_Filter_TD_6452_output.setInt32(r, 1, _year_total3860_t);
            r++;
        }
    }
    tbl_Filter_TD_6452_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6452_output #Row: " << tbl_Filter_TD_6452_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6794_key {
    std::string _c_customer_id4970;
    std::string _c_first_name4977;
    std::string _c_last_name4978;
    int32_t _d_year5016;
    bool operator==(const SW_Aggregate_TD_6794_key& other) const { return (_c_customer_id4970 == other._c_customer_id4970) && (_c_first_name4977 == other._c_first_name4977) && (_c_last_name4978 == other._c_last_name4978) && (_d_year5016 == other._d_year5016); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6794_key> {
    std::size_t operator() (const SW_Aggregate_TD_6794_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id4970)) + (hash<string>()(k._c_first_name4977)) + (hash<string>()(k._c_last_name4978)) + (hash<int32_t>()(k._d_year5016));
    }
};
}
struct SW_Aggregate_TD_6794_payload {
    std::string _customer_id3910;
    std::string _customer_first_name3911;
    std::string _customer_last_name3912;
    int32_t _year_total3914_sum_0;
};
void SW_Aggregate_TD_6794(Table &tbl_JOIN_INNER_TD_7845_output, Table &tbl_Aggregate_TD_6794_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#4970, c_first_name#4977, c_last_name#4978, d_year#5016, c_customer_id#4970 AS customer_id#3910, c_first_name#4977 AS customer_first_name#3911, c_last_name#4978 AS customer_last_name#3912, MakeDecimal(sum(UnscaledValue(ss_net_paid#5007)),17,2) AS year_total#3914)
    // Input: ListBuffer(c_customer_id#4970, c_first_name#4977, c_last_name#4978, ss_net_paid#5007, d_year#5016)
    // Output: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912, year_total#3914)
    std::unordered_map<SW_Aggregate_TD_6794_key, SW_Aggregate_TD_6794_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7845_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id4970 = tbl_JOIN_INNER_TD_7845_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name4977 = tbl_JOIN_INNER_TD_7845_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name4978 = tbl_JOIN_INNER_TD_7845_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _ss_net_paid5007 = tbl_JOIN_INNER_TD_7845_output.getInt32(i, 3);
        int32_t _d_year5016 = tbl_JOIN_INNER_TD_7845_output.getInt32(i, 4);
        SW_Aggregate_TD_6794_key k{std::string(_c_customer_id4970.data()), std::string(_c_first_name4977.data()), std::string(_c_last_name4978.data()), _d_year5016};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3910 = _c_customer_id4970;
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911 = _c_first_name4977;
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912 = _c_last_name4978;
        int64_t _year_total3914_sum_0 = _ss_net_paid5007;
        SW_Aggregate_TD_6794_payload p{std::string(_customer_id3910.data()), std::string(_customer_first_name3911.data()), std::string(_customer_last_name3912.data()), _year_total3914_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total3914_sum_0 + _year_total3914_sum_0;
            p._year_total3914_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id4970 not required in the output table
        // _c_first_name4977 not required in the output table
        // _c_last_name4978 not required in the output table
        // _d_year5016 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n{};
        memcpy(_customer_id3910_n.data(), (it.second)._customer_id3910.data(), (it.second)._customer_id3910.length());
        tbl_Aggregate_TD_6794_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3910_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n{};
        memcpy(_customer_first_name3911_n.data(), (it.second)._customer_first_name3911.data(), (it.second)._customer_first_name3911.length());
        tbl_Aggregate_TD_6794_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3911_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n{};
        memcpy(_customer_last_name3912_n.data(), (it.second)._customer_last_name3912.data(), (it.second)._customer_last_name3912.length());
        tbl_Aggregate_TD_6794_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3912_n);
        int32_t _year_total3914 = (it.second)._year_total3914_sum_0;
        tbl_Aggregate_TD_6794_output.setInt32(r, 3, _year_total3914);
        ++r;
    }
    tbl_Aggregate_TD_6794_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6794_output #Row: " << tbl_Aggregate_TD_6794_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6250(Table &tbl_Aggregate_TD_7573_output, Table &tbl_Filter_TD_6250_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#3854) AND (year_total#3854 > 0.00)))
    // Input: ListBuffer(customer_id#3850, year_total#3854)
    // Output: ListBuffer(customer_id#3850, year_total#3854)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7573_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total3854 = tbl_Aggregate_TD_7573_output.getInt32(i, 1);
        if ((_year_total3854!= 0) && (_year_total3854 > 0.00)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_t = tbl_Aggregate_TD_7573_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6250_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3850_t);
            int32_t _year_total3854_t = tbl_Aggregate_TD_7573_output.getInt32(i, 1);
            tbl_Filter_TD_6250_output.setInt32(r, 1, _year_total3854_t);
            r++;
        }
    }
    tbl_Filter_TD_6250_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6250_output #Row: " << tbl_Filter_TD_6250_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5874_key_leftMajor {
    int32_t _ws_sold_date_sk5366;
    bool operator==(const SW_JOIN_INNER_TD_5874_key_leftMajor& other) const {
        return ((_ws_sold_date_sk5366 == other._ws_sold_date_sk5366));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5874_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5874_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk5366));
    }
};
}
struct SW_JOIN_INNER_TD_5874_payload_leftMajor {
    std::string _c_customer_id5349;
    std::string _c_first_name5356;
    std::string _c_last_name5357;
    int32_t _ws_sold_date_sk5366;
    int32_t _ws_net_paid5395;
};
struct SW_JOIN_INNER_TD_5874_key_rightMajor {
    int32_t _d_date_sk5400;
    bool operator==(const SW_JOIN_INNER_TD_5874_key_rightMajor& other) const {
        return ((_d_date_sk5400 == other._d_date_sk5400));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5874_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5874_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5400));
    }
};
}
struct SW_JOIN_INNER_TD_5874_payload_rightMajor {
    int32_t _d_date_sk5400;
    int32_t _d_year5406;
};
void SW_JOIN_INNER_TD_5874(Table &tbl_JOIN_INNER_TD_6224_output, Table &tbl_Filter_TD_6498_output, Table &tbl_JOIN_INNER_TD_5874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#5366 = d_date_sk#5400))
    // Left Table: ListBuffer(c_customer_id#5349, c_first_name#5356, c_last_name#5357, ws_sold_date_sk#5366, ws_net_paid#5395)
    // Right Table: ListBuffer(d_date_sk#5400, d_year#5406)
    // Output Table: ListBuffer(c_customer_id#5349, c_first_name#5356, c_last_name#5357, ws_net_paid#5395, d_year#5406)
    int left_nrow = tbl_JOIN_INNER_TD_6224_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6498_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5874_key_leftMajor, SW_JOIN_INNER_TD_5874_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6224_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk5366_k = tbl_JOIN_INNER_TD_6224_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_5874_key_leftMajor keyA{_ws_sold_date_sk5366_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349_n = tbl_JOIN_INNER_TD_6224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id5349 = std::string(_c_customer_id5349_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name5356_n = tbl_JOIN_INNER_TD_6224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name5356 = std::string(_c_first_name5356_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name5357_n = tbl_JOIN_INNER_TD_6224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name5357 = std::string(_c_last_name5357_n.data());
            int32_t _ws_sold_date_sk5366 = tbl_JOIN_INNER_TD_6224_output.getInt32(i, 3);
            int32_t _ws_net_paid5395 = tbl_JOIN_INNER_TD_6224_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5874_payload_leftMajor payloadA{_c_customer_id5349, _c_first_name5356, _c_last_name5357, _ws_sold_date_sk5366, _ws_net_paid5395};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6498_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5400_k = tbl_Filter_TD_6498_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5874_key_leftMajor{_d_date_sk5400_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id5349 = (it->second)._c_customer_id5349;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349_n{};
                memcpy(_c_customer_id5349_n.data(), (_c_customer_id5349).data(), (_c_customer_id5349).length());
                std::string _c_first_name5356 = (it->second)._c_first_name5356;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5356_n{};
                memcpy(_c_first_name5356_n.data(), (_c_first_name5356).data(), (_c_first_name5356).length());
                std::string _c_last_name5357 = (it->second)._c_last_name5357;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5357_n{};
                memcpy(_c_last_name5357_n.data(), (_c_last_name5357).data(), (_c_last_name5357).length());
                int32_t _ws_sold_date_sk5366 = (it->second)._ws_sold_date_sk5366;
                int32_t _ws_net_paid5395 = (it->second)._ws_net_paid5395;
                int32_t _d_date_sk5400 = tbl_Filter_TD_6498_output.getInt32(i, 0);
                int32_t _d_year5406 = tbl_Filter_TD_6498_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5349_n);
                tbl_JOIN_INNER_TD_5874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5356_n);
                tbl_JOIN_INNER_TD_5874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5357_n);
                tbl_JOIN_INNER_TD_5874_output.setInt32(r, 3, _ws_net_paid5395);
                tbl_JOIN_INNER_TD_5874_output.setInt32(r, 4, _d_year5406);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5874_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5874_key_rightMajor, SW_JOIN_INNER_TD_5874_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6498_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5400_k = tbl_Filter_TD_6498_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5874_key_rightMajor keyA{_d_date_sk5400_k};
            int32_t _d_date_sk5400 = tbl_Filter_TD_6498_output.getInt32(i, 0);
            int32_t _d_year5406 = tbl_Filter_TD_6498_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5874_payload_rightMajor payloadA{_d_date_sk5400, _d_year5406};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6224_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk5366_k = tbl_JOIN_INNER_TD_6224_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5874_key_rightMajor{_ws_sold_date_sk5366_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5400 = (it->second)._d_date_sk5400;
                int32_t _d_year5406 = (it->second)._d_year5406;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349_n = tbl_JOIN_INNER_TD_6224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id5349 = std::string(_c_customer_id5349_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name5356_n = tbl_JOIN_INNER_TD_6224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name5356 = std::string(_c_first_name5356_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name5357_n = tbl_JOIN_INNER_TD_6224_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name5357 = std::string(_c_last_name5357_n.data());
                int32_t _ws_sold_date_sk5366 = tbl_JOIN_INNER_TD_6224_output.getInt32(i, 3);
                int32_t _ws_net_paid5395 = tbl_JOIN_INNER_TD_6224_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_5874_output.setInt32(r, 4, _d_year5406);
                tbl_JOIN_INNER_TD_5874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id5349_n);
                tbl_JOIN_INNER_TD_5874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name5356_n);
                tbl_JOIN_INNER_TD_5874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name5357_n);
                tbl_JOIN_INNER_TD_5874_output.setInt32(r, 3, _ws_net_paid5395);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5874_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5874_output #Row: " << tbl_JOIN_INNER_TD_5874_output.getNumRow() << std::endl;
}

void SW_Project_TD_5450(Table &tbl_Filter_TD_6452_output, Table &tbl_Project_TD_5450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(customer_id#3856 AS customer_id#5273, year_total#3860 AS year_total#5277)
    // Input: ListBuffer(customer_id#3856, year_total#3860)
    // Output: ListBuffer(customer_id#5273, year_total#5277)
    int nrow1 = tbl_Filter_TD_6452_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3856 = tbl_Filter_TD_6452_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _year_total3860 = tbl_Filter_TD_6452_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_id5273 = _customer_id3856;
        tbl_Project_TD_5450_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id5273);
        int32_t _year_total5277 = _year_total3860;
        tbl_Project_TD_5450_output.setInt32(i, 1, _year_total5277);
    }
    tbl_Project_TD_5450_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5450_output #Row: " << tbl_Project_TD_5450_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5683_key_leftMajor {
    std::string _customer_id3850;
    bool operator==(const SW_JOIN_INNER_TD_5683_key_leftMajor& other) const {
        return ((_customer_id3850 == other._customer_id3850));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5683_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5683_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3850));
    }
};
}
struct SW_JOIN_INNER_TD_5683_payload_leftMajor {
    std::string _customer_id3850;
    int32_t _year_total3854;
};
struct SW_JOIN_INNER_TD_5683_key_rightMajor {
    std::string _customer_id3910;
    bool operator==(const SW_JOIN_INNER_TD_5683_key_rightMajor& other) const {
        return ((_customer_id3910 == other._customer_id3910));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5683_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5683_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3910));
    }
};
}
struct SW_JOIN_INNER_TD_5683_payload_rightMajor {
    std::string _customer_id3910;
    std::string _customer_first_name3911;
    std::string _customer_last_name3912;
    int32_t _year_total3914;
};
void SW_JOIN_INNER_TD_5683(Table &tbl_Filter_TD_6250_output, Table &tbl_Aggregate_TD_6794_output, Table &tbl_JOIN_INNER_TD_5683_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#3910 = customer_id#3850))
    // Left Table: ListBuffer(customer_id#3850, year_total#3854)
    // Right Table: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912, year_total#3914)
    // Output Table: ListBuffer(customer_id#3850, year_total#3854, customer_id#3910, customer_first_name#3911, customer_last_name#3912, year_total#3914)
    int left_nrow = tbl_Filter_TD_6250_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6794_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5683_key_leftMajor, SW_JOIN_INNER_TD_5683_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6250_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_k_n = tbl_Filter_TD_6250_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850_k = std::string(_customer_id3850_k_n.data());
            SW_JOIN_INNER_TD_5683_key_leftMajor keyA{_customer_id3850_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n = tbl_Filter_TD_6250_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850 = std::string(_customer_id3850_n.data());
            int32_t _year_total3854 = tbl_Filter_TD_6250_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5683_payload_leftMajor payloadA{_customer_id3850, _year_total3854};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6794_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_k_n = tbl_Aggregate_TD_6794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3910_k = std::string(_customer_id3910_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5683_key_leftMajor{_customer_id3910_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3850 = (it->second)._customer_id3850;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n{};
                memcpy(_customer_id3850_n.data(), (_customer_id3850).data(), (_customer_id3850).length());
                int32_t _year_total3854 = (it->second)._year_total3854;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n = tbl_Aggregate_TD_6794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3910 = std::string(_customer_id3910_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n = tbl_Aggregate_TD_6794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_first_name3911 = std::string(_customer_first_name3911_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n = tbl_Aggregate_TD_6794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_last_name3912 = std::string(_customer_last_name3912_n.data());
                int32_t _year_total3914 = tbl_Aggregate_TD_6794_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_5683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3850_n);
                tbl_JOIN_INNER_TD_5683_output.setInt32(r, 1, _year_total3854);
                tbl_JOIN_INNER_TD_5683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id3910_n);
                tbl_JOIN_INNER_TD_5683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name3911_n);
                tbl_JOIN_INNER_TD_5683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name3912_n);
                tbl_JOIN_INNER_TD_5683_output.setInt32(r, 5, _year_total3914);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5683_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5683_key_rightMajor, SW_JOIN_INNER_TD_5683_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6794_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_k_n = tbl_Aggregate_TD_6794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3910_k = std::string(_customer_id3910_k_n.data());
            SW_JOIN_INNER_TD_5683_key_rightMajor keyA{_customer_id3910_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n = tbl_Aggregate_TD_6794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3910 = std::string(_customer_id3910_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n = tbl_Aggregate_TD_6794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_first_name3911 = std::string(_customer_first_name3911_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n = tbl_Aggregate_TD_6794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_last_name3912 = std::string(_customer_last_name3912_n.data());
            int32_t _year_total3914 = tbl_Aggregate_TD_6794_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_5683_payload_rightMajor payloadA{_customer_id3910, _customer_first_name3911, _customer_last_name3912, _year_total3914};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6250_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_k_n = tbl_Filter_TD_6250_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850_k = std::string(_customer_id3850_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5683_key_rightMajor{_customer_id3850_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3910 = (it->second)._customer_id3910;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n{};
                memcpy(_customer_id3910_n.data(), (_customer_id3910).data(), (_customer_id3910).length());
                std::string _customer_first_name3911 = (it->second)._customer_first_name3911;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n{};
                memcpy(_customer_first_name3911_n.data(), (_customer_first_name3911).data(), (_customer_first_name3911).length());
                std::string _customer_last_name3912 = (it->second)._customer_last_name3912;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n{};
                memcpy(_customer_last_name3912_n.data(), (_customer_last_name3912).data(), (_customer_last_name3912).length());
                int32_t _year_total3914 = (it->second)._year_total3914;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n = tbl_Filter_TD_6250_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3850 = std::string(_customer_id3850_n.data());
                int32_t _year_total3854 = tbl_Filter_TD_6250_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id3910_n);
                tbl_JOIN_INNER_TD_5683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name3911_n);
                tbl_JOIN_INNER_TD_5683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name3912_n);
                tbl_JOIN_INNER_TD_5683_output.setInt32(r, 5, _year_total3914);
                tbl_JOIN_INNER_TD_5683_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3850_n);
                tbl_JOIN_INNER_TD_5683_output.setInt32(r, 1, _year_total3854);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5683_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5683_output #Row: " << tbl_JOIN_INNER_TD_5683_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4794_key {
    std::string _c_customer_id5349;
    std::string _c_first_name5356;
    std::string _c_last_name5357;
    int32_t _d_year5406;
    bool operator==(const SW_Aggregate_TD_4794_key& other) const { return (_c_customer_id5349 == other._c_customer_id5349) && (_c_first_name5356 == other._c_first_name5356) && (_c_last_name5357 == other._c_last_name5357) && (_d_year5406 == other._d_year5406); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4794_key> {
    std::size_t operator() (const SW_Aggregate_TD_4794_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id5349)) + (hash<string>()(k._c_first_name5356)) + (hash<string>()(k._c_last_name5357)) + (hash<int32_t>()(k._d_year5406));
    }
};
}
struct SW_Aggregate_TD_4794_payload {
    std::string _customer_id3922;
    int32_t _year_total3926_sum_0;
};
void SW_Aggregate_TD_4794(Table &tbl_JOIN_INNER_TD_5874_output, Table &tbl_Aggregate_TD_4794_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#5349, c_first_name#5356, c_last_name#5357, d_year#5406, c_customer_id#5349 AS customer_id#3922, MakeDecimal(sum(UnscaledValue(ws_net_paid#5395)),17,2) AS year_total#3926)
    // Input: ListBuffer(c_customer_id#5349, c_first_name#5356, c_last_name#5357, ws_net_paid#5395, d_year#5406)
    // Output: ListBuffer(customer_id#3922, year_total#3926)
    std::unordered_map<SW_Aggregate_TD_4794_key, SW_Aggregate_TD_4794_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5874_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id5349 = tbl_JOIN_INNER_TD_5874_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name5356 = tbl_JOIN_INNER_TD_5874_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name5357 = tbl_JOIN_INNER_TD_5874_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _ws_net_paid5395 = tbl_JOIN_INNER_TD_5874_output.getInt32(i, 3);
        int32_t _d_year5406 = tbl_JOIN_INNER_TD_5874_output.getInt32(i, 4);
        SW_Aggregate_TD_4794_key k{std::string(_c_customer_id5349.data()), std::string(_c_first_name5356.data()), std::string(_c_last_name5357.data()), _d_year5406};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3922 = _c_customer_id5349;
        int64_t _year_total3926_sum_0 = _ws_net_paid5395;
        SW_Aggregate_TD_4794_payload p{std::string(_customer_id3922.data()), _year_total3926_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total3926_sum_0 + _year_total3926_sum_0;
            p._year_total3926_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id5349 not required in the output table
        // _c_first_name5356 not required in the output table
        // _c_last_name5357 not required in the output table
        // _d_year5406 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3922_n{};
        memcpy(_customer_id3922_n.data(), (it.second)._customer_id3922.data(), (it.second)._customer_id3922.length());
        tbl_Aggregate_TD_4794_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3922_n);
        int32_t _year_total3926 = (it.second)._year_total3926_sum_0;
        tbl_Aggregate_TD_4794_output.setInt32(r, 1, _year_total3926);
        ++r;
    }
    tbl_Aggregate_TD_4794_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4794_output #Row: " << tbl_Aggregate_TD_4794_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_471_key_leftMajor {
    std::string _customer_id3850;
    bool operator==(const SW_JOIN_INNER_TD_471_key_leftMajor& other) const {
        return ((_customer_id3850 == other._customer_id3850));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_471_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_471_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3850));
    }
};
}
struct SW_JOIN_INNER_TD_471_payload_leftMajor {
    std::string _customer_id3850;
    int32_t _year_total3854;
    std::string _customer_id3910;
    std::string _customer_first_name3911;
    std::string _customer_last_name3912;
    int32_t _year_total3914;
};
struct SW_JOIN_INNER_TD_471_key_rightMajor {
    std::string _customer_id5273;
    bool operator==(const SW_JOIN_INNER_TD_471_key_rightMajor& other) const {
        return ((_customer_id5273 == other._customer_id5273));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_471_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_471_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id5273));
    }
};
}
struct SW_JOIN_INNER_TD_471_payload_rightMajor {
    std::string _customer_id5273;
    int32_t _year_total5277;
};
void SW_JOIN_INNER_TD_471(Table &tbl_JOIN_INNER_TD_5683_output, Table &tbl_Project_TD_5450_output, Table &tbl_JOIN_INNER_TD_471_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#3850 = customer_id#5273))
    // Left Table: ListBuffer(customer_id#3850, year_total#3854, customer_id#3910, customer_first_name#3911, customer_last_name#3912, year_total#3914)
    // Right Table: ListBuffer(customer_id#5273, year_total#5277)
    // Output Table: ListBuffer(customer_id#3850, year_total#3854, customer_id#3910, customer_first_name#3911, customer_last_name#3912, year_total#3914, year_total#5277)
    int left_nrow = tbl_JOIN_INNER_TD_5683_output.getNumRow();
    int right_nrow = tbl_Project_TD_5450_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_471_key_leftMajor, SW_JOIN_INNER_TD_471_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5683_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_k_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850_k = std::string(_customer_id3850_k_n.data());
            SW_JOIN_INNER_TD_471_key_leftMajor keyA{_customer_id3850_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850 = std::string(_customer_id3850_n.data());
            int32_t _year_total3854 = tbl_JOIN_INNER_TD_5683_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id3910 = std::string(_customer_id3910_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name3911 = std::string(_customer_first_name3911_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name3912 = std::string(_customer_last_name3912_n.data());
            int32_t _year_total3914 = tbl_JOIN_INNER_TD_5683_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_471_payload_leftMajor payloadA{_customer_id3850, _year_total3854, _customer_id3910, _customer_first_name3911, _customer_last_name3912, _year_total3914};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5450_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id5273_k_n = tbl_Project_TD_5450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id5273_k = std::string(_customer_id5273_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_471_key_leftMajor{_customer_id5273_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3850 = (it->second)._customer_id3850;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n{};
                memcpy(_customer_id3850_n.data(), (_customer_id3850).data(), (_customer_id3850).length());
                int32_t _year_total3854 = (it->second)._year_total3854;
                std::string _customer_id3910 = (it->second)._customer_id3910;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n{};
                memcpy(_customer_id3910_n.data(), (_customer_id3910).data(), (_customer_id3910).length());
                std::string _customer_first_name3911 = (it->second)._customer_first_name3911;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n{};
                memcpy(_customer_first_name3911_n.data(), (_customer_first_name3911).data(), (_customer_first_name3911).length());
                std::string _customer_last_name3912 = (it->second)._customer_last_name3912;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n{};
                memcpy(_customer_last_name3912_n.data(), (_customer_last_name3912).data(), (_customer_last_name3912).length());
                int32_t _year_total3914 = (it->second)._year_total3914;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id5273_n = tbl_Project_TD_5450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id5273 = std::string(_customer_id5273_n.data());
                int32_t _year_total5277 = tbl_Project_TD_5450_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_471_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3850_n);
                tbl_JOIN_INNER_TD_471_output.setInt32(r, 1, _year_total3854);
                tbl_JOIN_INNER_TD_471_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id3910_n);
                tbl_JOIN_INNER_TD_471_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name3911_n);
                tbl_JOIN_INNER_TD_471_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name3912_n);
                tbl_JOIN_INNER_TD_471_output.setInt32(r, 5, _year_total3914);
                tbl_JOIN_INNER_TD_471_output.setInt32(r, 6, _year_total5277);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_471_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_471_key_rightMajor, SW_JOIN_INNER_TD_471_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5450_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id5273_k_n = tbl_Project_TD_5450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id5273_k = std::string(_customer_id5273_k_n.data());
            SW_JOIN_INNER_TD_471_key_rightMajor keyA{_customer_id5273_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id5273_n = tbl_Project_TD_5450_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id5273 = std::string(_customer_id5273_n.data());
            int32_t _year_total5277 = tbl_Project_TD_5450_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_471_payload_rightMajor payloadA{_customer_id5273, _year_total5277};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5683_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_k_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850_k = std::string(_customer_id3850_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_471_key_rightMajor{_customer_id3850_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id5273 = (it->second)._customer_id5273;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id5273_n{};
                memcpy(_customer_id5273_n.data(), (_customer_id5273).data(), (_customer_id5273).length());
                int32_t _year_total5277 = (it->second)._year_total5277;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3850 = std::string(_customer_id3850_n.data());
                int32_t _year_total3854 = tbl_JOIN_INNER_TD_5683_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id3910 = std::string(_customer_id3910_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name3911 = std::string(_customer_first_name3911_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n = tbl_JOIN_INNER_TD_5683_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name3912 = std::string(_customer_last_name3912_n.data());
                int32_t _year_total3914 = tbl_JOIN_INNER_TD_5683_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_471_output.setInt32(r, 6, _year_total5277);
                tbl_JOIN_INNER_TD_471_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3850_n);
                tbl_JOIN_INNER_TD_471_output.setInt32(r, 1, _year_total3854);
                tbl_JOIN_INNER_TD_471_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id3910_n);
                tbl_JOIN_INNER_TD_471_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name3911_n);
                tbl_JOIN_INNER_TD_471_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name3912_n);
                tbl_JOIN_INNER_TD_471_output.setInt32(r, 5, _year_total3914);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_471_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_471_output #Row: " << tbl_JOIN_INNER_TD_471_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3395_key_leftMajor {
    std::string _customer_id3850;
    bool operator==(const SW_JOIN_INNER_TD_3395_key_leftMajor& other) const {
        return ((_customer_id3850 == other._customer_id3850));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3395_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3395_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3850));
    }
};
}
struct SW_JOIN_INNER_TD_3395_payload_leftMajor {
    std::string _customer_id3850;
    int32_t _year_total3854;
    std::string _customer_id3910;
    std::string _customer_first_name3911;
    std::string _customer_last_name3912;
    int32_t _year_total3914;
    int32_t _year_total5277;
};
struct SW_JOIN_INNER_TD_3395_key_rightMajor {
    std::string _customer_id3922;
    bool operator==(const SW_JOIN_INNER_TD_3395_key_rightMajor& other) const {
        return ((_customer_id3922 == other._customer_id3922));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3395_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3395_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id3922));
    }
};
}
struct SW_JOIN_INNER_TD_3395_payload_rightMajor {
    std::string _customer_id3922;
    int32_t _year_total3926;
};
void SW_JOIN_INNER_TD_3395(Table &tbl_JOIN_INNER_TD_471_output, Table &tbl_Aggregate_TD_4794_output, Table &tbl_JOIN_INNER_TD_3395_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((customer_id#3850 = customer_id#3922) AND (CASE WHEN (year_total#5277 > 0.00) THEN CheckOverflow((promote_precision(year_total#3926) / promote_precision(year_total#5277)), DecimalType(37,20), true) END > CASE WHEN (year_total#3854 > 0.00) THEN CheckOverflow((promote_precision(year_total#3914) / promote_precision(year_total#3854)), DecimalType(37,20), true) END)))
    // Left Table: ListBuffer(customer_id#3850, year_total#3854, customer_id#3910, customer_first_name#3911, customer_last_name#3912, year_total#3914, year_total#5277)
    // Right Table: ListBuffer(customer_id#3922, year_total#3926)
    // Output Table: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912)
    int left_nrow = tbl_JOIN_INNER_TD_471_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4794_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3395_key_leftMajor, SW_JOIN_INNER_TD_3395_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_471_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_k_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850_k = std::string(_customer_id3850_k_n.data());
            SW_JOIN_INNER_TD_3395_key_leftMajor keyA{_customer_id3850_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850 = std::string(_customer_id3850_n.data());
            int32_t _year_total3854 = tbl_JOIN_INNER_TD_471_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id3910 = std::string(_customer_id3910_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name3911 = std::string(_customer_first_name3911_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name3912 = std::string(_customer_last_name3912_n.data());
            int32_t _year_total3914 = tbl_JOIN_INNER_TD_471_output.getInt32(i, 5);
            int32_t _year_total5277 = tbl_JOIN_INNER_TD_471_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_3395_payload_leftMajor payloadA{_customer_id3850, _year_total3854, _customer_id3910, _customer_first_name3911, _customer_last_name3912, _year_total3914, _year_total5277};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_4794_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3922_k_n = tbl_Aggregate_TD_4794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3922_k = std::string(_customer_id3922_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3395_key_leftMajor{_customer_id3922_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3850 = (it->second)._customer_id3850;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n{};
                memcpy(_customer_id3850_n.data(), (_customer_id3850).data(), (_customer_id3850).length());
                int32_t _year_total3854 = (it->second)._year_total3854;
                std::string _customer_id3910 = (it->second)._customer_id3910;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n{};
                memcpy(_customer_id3910_n.data(), (_customer_id3910).data(), (_customer_id3910).length());
                std::string _customer_first_name3911 = (it->second)._customer_first_name3911;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n{};
                memcpy(_customer_first_name3911_n.data(), (_customer_first_name3911).data(), (_customer_first_name3911).length());
                std::string _customer_last_name3912 = (it->second)._customer_last_name3912;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n{};
                memcpy(_customer_last_name3912_n.data(), (_customer_last_name3912).data(), (_customer_last_name3912).length());
                int32_t _year_total3914 = (it->second)._year_total3914;
                int32_t _year_total5277 = (it->second)._year_total5277;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3922_n = tbl_Aggregate_TD_4794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3922 = std::string(_customer_id3922_n.data());
                int32_t _year_total3926 = tbl_Aggregate_TD_4794_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3395_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3910_n);
                tbl_JOIN_INNER_TD_3395_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3911_n);
                tbl_JOIN_INNER_TD_3395_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3912_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3395_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3395_key_rightMajor, SW_JOIN_INNER_TD_3395_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_4794_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3922_k_n = tbl_Aggregate_TD_4794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3922_k = std::string(_customer_id3922_k_n.data());
            SW_JOIN_INNER_TD_3395_key_rightMajor keyA{_customer_id3922_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3922_n = tbl_Aggregate_TD_4794_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3922 = std::string(_customer_id3922_n.data());
            int32_t _year_total3926 = tbl_Aggregate_TD_4794_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3395_payload_rightMajor payloadA{_customer_id3922, _year_total3926};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_471_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_k_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id3850_k = std::string(_customer_id3850_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3395_key_rightMajor{_customer_id3850_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id3922 = (it->second)._customer_id3922;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3922_n{};
                memcpy(_customer_id3922_n.data(), (_customer_id3922).data(), (_customer_id3922).length());
                int32_t _year_total3926 = (it->second)._year_total3926;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3850_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id3850 = std::string(_customer_id3850_n.data());
                int32_t _year_total3854 = tbl_JOIN_INNER_TD_471_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id3910 = std::string(_customer_id3910_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name3911 = std::string(_customer_first_name3911_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n = tbl_JOIN_INNER_TD_471_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name3912 = std::string(_customer_last_name3912_n.data());
                int32_t _year_total3914 = tbl_JOIN_INNER_TD_471_output.getInt32(i, 5);
                int32_t _year_total5277 = tbl_JOIN_INNER_TD_471_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_3395_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3910_n);
                tbl_JOIN_INNER_TD_3395_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3911_n);
                tbl_JOIN_INNER_TD_3395_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3912_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3395_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3395_output #Row: " << tbl_JOIN_INNER_TD_3395_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2881(Table &tbl_JOIN_INNER_TD_3395_output, Table &tbl_Sort_TD_2881_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(customer_id#3910 ASC NULLS FIRST, customer_id#3910 ASC NULLS FIRST, customer_id#3910 ASC NULLS FIRST)
    // Input: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912)
    // Output: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912)
    struct SW_Sort_TD_2881Row {
        std::string _customer_id3910;
        std::string _customer_first_name3911;
        std::string _customer_last_name3912;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2881Row& a, const SW_Sort_TD_2881Row& b) const { return 
 (a._customer_id3910 < b._customer_id3910) || 
 ((a._customer_id3910 == b._customer_id3910) && (a._customer_id3910 < b._customer_id3910)) || 
 ((a._customer_id3910 == b._customer_id3910) && (a._customer_id3910 == b._customer_id3910) && (a._customer_id3910 < b._customer_id3910)); 
}
    }SW_Sort_TD_2881_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3395_output.getNumRow();
    std::vector<SW_Sort_TD_2881Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3910 = tbl_JOIN_INNER_TD_3395_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911 = tbl_JOIN_INNER_TD_3395_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912 = tbl_JOIN_INNER_TD_3395_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        SW_Sort_TD_2881Row t = {std::string(_customer_id3910.data()),std::string(_customer_first_name3911.data()),std::string(_customer_last_name3912.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2881_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3910{};
        memcpy(_customer_id3910.data(), (it._customer_id3910).data(), (it._customer_id3910).length());
        tbl_Sort_TD_2881_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _customer_id3910);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911{};
        memcpy(_customer_first_name3911.data(), (it._customer_first_name3911).data(), (it._customer_first_name3911).length());
        tbl_Sort_TD_2881_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _customer_first_name3911);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912{};
        memcpy(_customer_last_name3912.data(), (it._customer_last_name3912).data(), (it._customer_last_name3912).length());
        tbl_Sort_TD_2881_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _customer_last_name3912);
        ++r;
    }
    tbl_Sort_TD_2881_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2881_output #Row: " << tbl_Sort_TD_2881_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1212(Table &tbl_Sort_TD_2881_output, Table &tbl_LocalLimit_TD_1212_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912)
    // Output: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n = tbl_Sort_TD_2881_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3910_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n = tbl_Sort_TD_2881_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3911_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n = tbl_Sort_TD_2881_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1212_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3912_n);
        r++;
    }
    tbl_LocalLimit_TD_1212_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1212_output #Row: " << tbl_LocalLimit_TD_1212_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0585(Table &tbl_LocalLimit_TD_1212_output, Table &tbl_GlobalLimit_TD_0585_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912)
    // Output: ListBuffer(customer_id#3910, customer_first_name#3911, customer_last_name#3912)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id3910_n = tbl_LocalLimit_TD_1212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0585_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id3910_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name3911_n = tbl_LocalLimit_TD_1212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0585_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name3911_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name3912_n = tbl_LocalLimit_TD_1212_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0585_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name3912_n);
        r++;
    }
    tbl_GlobalLimit_TD_0585_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0585_output #Row: " << tbl_GlobalLimit_TD_0585_output.getNumRow() << std::endl;
}

