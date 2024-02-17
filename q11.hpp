#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10854(Table &tbl_SerializeFromObject_TD_11341_input, Table &tbl_Filter_TD_10854_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#11800) AND isnotnull(ws_sold_date_sk#11796)))
    // Input: ListBuffer(ws_sold_date_sk#11796, ws_bill_customer_sk#11800, ws_ext_discount_amt#11818, ws_ext_list_price#11821)
    // Output: ListBuffer(ws_sold_date_sk#11796, ws_bill_customer_sk#11800, ws_ext_discount_amt#11818, ws_ext_list_price#11821)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11341_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk11800 = tbl_SerializeFromObject_TD_11341_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk11796 = tbl_SerializeFromObject_TD_11341_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk11800!= 0) && (_ws_sold_date_sk11796!= 0)) {
            int32_t _ws_sold_date_sk11796_t = tbl_SerializeFromObject_TD_11341_input.getInt32(i, 0);
            tbl_Filter_TD_10854_output.setInt32(r, 0, _ws_sold_date_sk11796_t);
            int32_t _ws_bill_customer_sk11800_t = tbl_SerializeFromObject_TD_11341_input.getInt32(i, 1);
            tbl_Filter_TD_10854_output.setInt32(r, 1, _ws_bill_customer_sk11800_t);
            int32_t _ws_ext_discount_amt11818_t = tbl_SerializeFromObject_TD_11341_input.getInt32(i, 2);
            tbl_Filter_TD_10854_output.setInt32(r, 2, _ws_ext_discount_amt11818_t);
            int32_t _ws_ext_list_price11821_t = tbl_SerializeFromObject_TD_11341_input.getInt32(i, 3);
            tbl_Filter_TD_10854_output.setInt32(r, 3, _ws_ext_list_price11821_t);
            r++;
        }
    }
    tbl_Filter_TD_10854_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10854_output #Row: " << tbl_Filter_TD_10854_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10292(Table &tbl_SerializeFromObject_TD_11783_input, Table &tbl_Filter_TD_10292_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#11778) AND isnotnull(c_customer_id#11779)))
    // Input: ListBuffer(c_customer_sk#11778, c_customer_id#11779, c_first_name#11786, c_last_name#11787, c_preferred_cust_flag#11788, c_birth_country#11792, c_login#11793, c_email_address#11794)
    // Output: ListBuffer(c_customer_sk#11778, c_customer_id#11779, c_first_name#11786, c_last_name#11787, c_preferred_cust_flag#11788, c_birth_country#11792, c_login#11793, c_email_address#11794)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11783_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk11778 = tbl_SerializeFromObject_TD_11783_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779 = tbl_SerializeFromObject_TD_11783_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk11778!= 0) && （std::string(_isnotnullc_customer_id11779.data()) != "NULL")) {
            int32_t _c_customer_sk11778_t = tbl_SerializeFromObject_TD_11783_input.getInt32(i, 0);
            tbl_Filter_TD_10292_output.setInt32(r, 0, _c_customer_sk11778_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779_t = tbl_SerializeFromObject_TD_11783_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10292_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id11779_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11786_t = tbl_SerializeFromObject_TD_11783_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10292_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name11786_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11787_t = tbl_SerializeFromObject_TD_11783_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10292_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name11787_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11788_t = tbl_SerializeFromObject_TD_11783_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_10292_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag11788_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11792_t = tbl_SerializeFromObject_TD_11783_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_10292_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country11792_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login11793_t = tbl_SerializeFromObject_TD_11783_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_10292_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login11793_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11794_t = tbl_SerializeFromObject_TD_11783_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_10292_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address11794_t);
            r++;
        }
    }
    tbl_Filter_TD_10292_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10292_output #Row: " << tbl_Filter_TD_10292_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10781(Table &tbl_SerializeFromObject_TD_11760_input, Table &tbl_Filter_TD_10781_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_list_price#1223)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_list_price#1223)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11760_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_11760_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11760_input.getInt32(i, 0);
        if ((_ss_customer_sk1209!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11760_input.getInt32(i, 0);
            tbl_Filter_TD_10781_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_11760_input.getInt32(i, 1);
            tbl_Filter_TD_10781_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_ext_discount_amt1220_t = tbl_SerializeFromObject_TD_11760_input.getInt32(i, 2);
            tbl_Filter_TD_10781_output.setInt32(r, 2, _ss_ext_discount_amt1220_t);
            int32_t _ss_ext_list_price1223_t = tbl_SerializeFromObject_TD_11760_input.getInt32(i, 3);
            tbl_Filter_TD_10781_output.setInt32(r, 3, _ss_ext_list_price1223_t);
            r++;
        }
    }
    tbl_Filter_TD_10781_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10781_output #Row: " << tbl_Filter_TD_10781_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10354(Table &tbl_SerializeFromObject_TD_11521_input, Table &tbl_Filter_TD_10354_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_customer_id#1)))
    // Input: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    // Output: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11521_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_11521_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_SerializeFromObject_TD_11521_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk0!= 0) && （std::string(_isnotnullc_customer_id1.data()) != "NULL")) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_11521_input.getInt32(i, 0);
            tbl_Filter_TD_10354_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_11521_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_11521_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_11521_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_t = tbl_SerializeFromObject_TD_11521_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_10354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag10_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_t = tbl_SerializeFromObject_TD_11521_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_10354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country14_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_t = tbl_SerializeFromObject_TD_11521_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_10354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login15_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_t = tbl_SerializeFromObject_TD_11521_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_10354_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address16_t);
            r++;
        }
    }
    tbl_Filter_TD_10354_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10354_output #Row: " << tbl_Filter_TD_10354_output.getNumRow() << std::endl;
}

void SW_Filter_TD_971(Table &tbl_SerializeFromObject_TD_10143_input, Table &tbl_Filter_TD_971_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#11836) AND (d_year#11836 = 2001)) AND isnotnull(d_date_sk#11830)))
    // Input: ListBuffer(d_date_sk#11830, d_year#11836)
    // Output: ListBuffer(d_date_sk#11830, d_year#11836)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10143_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year11836 = tbl_SerializeFromObject_TD_10143_input.getInt32(i, 1);
        int32_t _d_date_sk11830 = tbl_SerializeFromObject_TD_10143_input.getInt32(i, 0);
        if (((_d_year11836!= 0) && (_d_year11836 == 2001)) && (_d_date_sk11830!= 0)) {
            int32_t _d_date_sk11830_t = tbl_SerializeFromObject_TD_10143_input.getInt32(i, 0);
            tbl_Filter_TD_971_output.setInt32(r, 0, _d_date_sk11830_t);
            int32_t _d_year11836_t = tbl_SerializeFromObject_TD_10143_input.getInt32(i, 1);
            tbl_Filter_TD_971_output.setInt32(r, 1, _d_year11836_t);
            r++;
        }
    }
    tbl_Filter_TD_971_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_971_output #Row: " << tbl_Filter_TD_971_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_950_key_leftMajor {
    int32_t _c_customer_sk11778;
    bool operator==(const SW_JOIN_INNER_TD_950_key_leftMajor& other) const {
        return ((_c_customer_sk11778 == other._c_customer_sk11778));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_950_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_950_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk11778));
    }
};
}
struct SW_JOIN_INNER_TD_950_payload_leftMajor {
    int32_t _c_customer_sk11778;
    std::string _c_customer_id11779;
    std::string _c_first_name11786;
    std::string _c_last_name11787;
    std::string _c_preferred_cust_flag11788;
    std::string _c_birth_country11792;
    std::string _c_login11793;
    std::string _c_email_address11794;
};
struct SW_JOIN_INNER_TD_950_key_rightMajor {
    int32_t _ws_bill_customer_sk11800;
    bool operator==(const SW_JOIN_INNER_TD_950_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk11800 == other._ws_bill_customer_sk11800));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_950_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_950_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk11800));
    }
};
}
struct SW_JOIN_INNER_TD_950_payload_rightMajor {
    int32_t _ws_sold_date_sk11796;
    int32_t _ws_bill_customer_sk11800;
    int32_t _ws_ext_discount_amt11818;
    int32_t _ws_ext_list_price11821;
};
void SW_JOIN_INNER_TD_950(Table &tbl_Filter_TD_10292_output, Table &tbl_Filter_TD_10854_output, Table &tbl_JOIN_INNER_TD_950_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#11778 = ws_bill_customer_sk#11800))
    // Left Table: ListBuffer(c_customer_sk#11778, c_customer_id#11779, c_first_name#11786, c_last_name#11787, c_preferred_cust_flag#11788, c_birth_country#11792, c_login#11793, c_email_address#11794)
    // Right Table: ListBuffer(ws_sold_date_sk#11796, ws_bill_customer_sk#11800, ws_ext_discount_amt#11818, ws_ext_list_price#11821)
    // Output Table: ListBuffer(c_customer_id#11779, c_first_name#11786, c_last_name#11787, c_preferred_cust_flag#11788, c_birth_country#11792, c_login#11793, c_email_address#11794, ws_sold_date_sk#11796, ws_ext_discount_amt#11818, ws_ext_list_price#11821)
    int left_nrow = tbl_Filter_TD_10292_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10854_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_950_key_leftMajor, SW_JOIN_INNER_TD_950_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10292_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk11778_k = tbl_Filter_TD_10292_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_950_key_leftMajor keyA{_c_customer_sk11778_k};
            int32_t _c_customer_sk11778 = tbl_Filter_TD_10292_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id11779 = std::string(_c_customer_id11779_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11786_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name11786 = std::string(_c_first_name11786_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11787_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name11787 = std::string(_c_last_name11787_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11788_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag11788 = std::string(_c_preferred_cust_flag11788_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11792_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country11792 = std::string(_c_birth_country11792_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login11793_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login11793 = std::string(_c_login11793_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11794_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address11794 = std::string(_c_email_address11794_n.data());
            SW_JOIN_INNER_TD_950_payload_leftMajor payloadA{_c_customer_sk11778, _c_customer_id11779, _c_first_name11786, _c_last_name11787, _c_preferred_cust_flag11788, _c_birth_country11792, _c_login11793, _c_email_address11794};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10854_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk11800_k = tbl_Filter_TD_10854_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_950_key_leftMajor{_ws_bill_customer_sk11800_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk11778 = (it->second)._c_customer_sk11778;
                std::string _c_customer_id11779 = (it->second)._c_customer_id11779;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779_n{};
                memcpy(_c_customer_id11779_n.data(), (_c_customer_id11779).data(), (_c_customer_id11779).length());
                std::string _c_first_name11786 = (it->second)._c_first_name11786;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11786_n{};
                memcpy(_c_first_name11786_n.data(), (_c_first_name11786).data(), (_c_first_name11786).length());
                std::string _c_last_name11787 = (it->second)._c_last_name11787;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11787_n{};
                memcpy(_c_last_name11787_n.data(), (_c_last_name11787).data(), (_c_last_name11787).length());
                std::string _c_preferred_cust_flag11788 = (it->second)._c_preferred_cust_flag11788;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11788_n{};
                memcpy(_c_preferred_cust_flag11788_n.data(), (_c_preferred_cust_flag11788).data(), (_c_preferred_cust_flag11788).length());
                std::string _c_birth_country11792 = (it->second)._c_birth_country11792;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11792_n{};
                memcpy(_c_birth_country11792_n.data(), (_c_birth_country11792).data(), (_c_birth_country11792).length());
                std::string _c_login11793 = (it->second)._c_login11793;
                std::array<char, TPCDS_READ_MAX + 1> _c_login11793_n{};
                memcpy(_c_login11793_n.data(), (_c_login11793).data(), (_c_login11793).length());
                std::string _c_email_address11794 = (it->second)._c_email_address11794;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11794_n{};
                memcpy(_c_email_address11794_n.data(), (_c_email_address11794).data(), (_c_email_address11794).length());
                int32_t _ws_sold_date_sk11796 = tbl_Filter_TD_10854_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk11800 = tbl_Filter_TD_10854_output.getInt32(i, 1);
                int32_t _ws_ext_discount_amt11818 = tbl_Filter_TD_10854_output.getInt32(i, 2);
                int32_t _ws_ext_list_price11821 = tbl_Filter_TD_10854_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11779_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11786_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11787_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11788_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11792_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11793_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11794_n);
                tbl_JOIN_INNER_TD_950_output.setInt32(r, 7, _ws_sold_date_sk11796);
                tbl_JOIN_INNER_TD_950_output.setInt32(r, 8, _ws_ext_discount_amt11818);
                tbl_JOIN_INNER_TD_950_output.setInt32(r, 9, _ws_ext_list_price11821);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_950_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_950_key_rightMajor, SW_JOIN_INNER_TD_950_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10854_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk11800_k = tbl_Filter_TD_10854_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_950_key_rightMajor keyA{_ws_bill_customer_sk11800_k};
            int32_t _ws_sold_date_sk11796 = tbl_Filter_TD_10854_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk11800 = tbl_Filter_TD_10854_output.getInt32(i, 1);
            int32_t _ws_ext_discount_amt11818 = tbl_Filter_TD_10854_output.getInt32(i, 2);
            int32_t _ws_ext_list_price11821 = tbl_Filter_TD_10854_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_950_payload_rightMajor payloadA{_ws_sold_date_sk11796, _ws_bill_customer_sk11800, _ws_ext_discount_amt11818, _ws_ext_list_price11821};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10292_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk11778_k = tbl_Filter_TD_10292_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_950_key_rightMajor{_c_customer_sk11778_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk11796 = (it->second)._ws_sold_date_sk11796;
                int32_t _ws_bill_customer_sk11800 = (it->second)._ws_bill_customer_sk11800;
                int32_t _ws_ext_discount_amt11818 = (it->second)._ws_ext_discount_amt11818;
                int32_t _ws_ext_list_price11821 = (it->second)._ws_ext_list_price11821;
                int32_t _c_customer_sk11778 = tbl_Filter_TD_10292_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id11779 = std::string(_c_customer_id11779_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11786_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name11786 = std::string(_c_first_name11786_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11787_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name11787 = std::string(_c_last_name11787_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11788_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag11788 = std::string(_c_preferred_cust_flag11788_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11792_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country11792 = std::string(_c_birth_country11792_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login11793_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login11793 = std::string(_c_login11793_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11794_n = tbl_Filter_TD_10292_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address11794 = std::string(_c_email_address11794_n.data());
                tbl_JOIN_INNER_TD_950_output.setInt32(r, 7, _ws_sold_date_sk11796);
                tbl_JOIN_INNER_TD_950_output.setInt32(r, 8, _ws_ext_discount_amt11818);
                tbl_JOIN_INNER_TD_950_output.setInt32(r, 9, _ws_ext_list_price11821);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11779_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11786_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11787_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11788_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11792_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11793_n);
                tbl_JOIN_INNER_TD_950_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11794_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_950_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_950_output #Row: " << tbl_JOIN_INNER_TD_950_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9743(Table &tbl_SerializeFromObject_TD_10507_input, Table &tbl_Filter_TD_9743_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#11571) AND isnotnull(ss_sold_date_sk#11568)))
    // Input: ListBuffer(ss_sold_date_sk#11568, ss_customer_sk#11571, ss_ext_discount_amt#11582, ss_ext_list_price#11585)
    // Output: ListBuffer(ss_sold_date_sk#11568, ss_customer_sk#11571, ss_ext_discount_amt#11582, ss_ext_list_price#11585)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10507_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk11571 = tbl_SerializeFromObject_TD_10507_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk11568 = tbl_SerializeFromObject_TD_10507_input.getInt32(i, 0);
        if ((_ss_customer_sk11571!= 0) && (_ss_sold_date_sk11568!= 0)) {
            int32_t _ss_sold_date_sk11568_t = tbl_SerializeFromObject_TD_10507_input.getInt32(i, 0);
            tbl_Filter_TD_9743_output.setInt32(r, 0, _ss_sold_date_sk11568_t);
            int32_t _ss_customer_sk11571_t = tbl_SerializeFromObject_TD_10507_input.getInt32(i, 1);
            tbl_Filter_TD_9743_output.setInt32(r, 1, _ss_customer_sk11571_t);
            int32_t _ss_ext_discount_amt11582_t = tbl_SerializeFromObject_TD_10507_input.getInt32(i, 2);
            tbl_Filter_TD_9743_output.setInt32(r, 2, _ss_ext_discount_amt11582_t);
            int32_t _ss_ext_list_price11585_t = tbl_SerializeFromObject_TD_10507_input.getInt32(i, 3);
            tbl_Filter_TD_9743_output.setInt32(r, 3, _ss_ext_list_price11585_t);
            r++;
        }
    }
    tbl_Filter_TD_9743_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9743_output #Row: " << tbl_Filter_TD_9743_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9397(Table &tbl_SerializeFromObject_TD_10677_input, Table &tbl_Filter_TD_9397_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#11550) AND isnotnull(c_customer_id#11551)))
    // Input: ListBuffer(c_customer_sk#11550, c_customer_id#11551, c_first_name#11558, c_last_name#11559, c_preferred_cust_flag#11560, c_birth_country#11564, c_login#11565, c_email_address#11566)
    // Output: ListBuffer(c_customer_sk#11550, c_customer_id#11551, c_first_name#11558, c_last_name#11559, c_preferred_cust_flag#11560, c_birth_country#11564, c_login#11565, c_email_address#11566)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10677_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk11550 = tbl_SerializeFromObject_TD_10677_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551 = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk11550!= 0) && （std::string(_isnotnullc_customer_id11551.data()) != "NULL")) {
            int32_t _c_customer_sk11550_t = tbl_SerializeFromObject_TD_10677_input.getInt32(i, 0);
            tbl_Filter_TD_9397_output.setInt32(r, 0, _c_customer_sk11550_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551_t = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9397_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id11551_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11558_t = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9397_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name11558_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11559_t = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_9397_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name11559_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11560_t = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_9397_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag11560_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11564_t = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_9397_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country11564_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login11565_t = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_9397_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login11565_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11566_t = tbl_SerializeFromObject_TD_10677_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_9397_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address11566_t);
            r++;
        }
    }
    tbl_Filter_TD_9397_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9397_output #Row: " << tbl_Filter_TD_9397_output.getNumRow() << std::endl;
}

void SW_Filter_TD_976(Table &tbl_SerializeFromObject_TD_10152_input, Table &tbl_Filter_TD_976_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2001)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10152_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10152_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10152_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2001)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10152_input.getInt32(i, 0);
            tbl_Filter_TD_976_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_10152_input.getInt32(i, 1);
            tbl_Filter_TD_976_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_976_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_976_output #Row: " << tbl_Filter_TD_976_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9841_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_9841_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9841_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9841_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_9841_payload_leftMajor {
    int32_t _c_customer_sk0;
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
};
struct SW_JOIN_INNER_TD_9841_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_9841_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9841_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9841_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_9841_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_ext_discount_amt1220;
    int32_t _ss_ext_list_price1223;
};
void SW_JOIN_INNER_TD_9841(Table &tbl_Filter_TD_10354_output, Table &tbl_Filter_TD_10781_output, Table &tbl_JOIN_INNER_TD_9841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_list_price#1223)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_sold_date_sk#1206, ss_ext_discount_amt#1220, ss_ext_list_price#1223)
    int left_nrow = tbl_Filter_TD_10354_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10781_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9841_key_leftMajor, SW_JOIN_INNER_TD_9841_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10354_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10354_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9841_key_leftMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_10354_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login15 = std::string(_c_login15_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address16 = std::string(_c_email_address16_n.data());
            SW_JOIN_INNER_TD_9841_payload_leftMajor payloadA{_c_customer_sk0, _c_customer_id1, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10, _c_birth_country14, _c_login15, _c_email_address16};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10781_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_10781_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9841_key_leftMajor{_ss_customer_sk1209_k});
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
                std::string _c_preferred_cust_flag10 = (it->second)._c_preferred_cust_flag10;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n{};
                memcpy(_c_preferred_cust_flag10_n.data(), (_c_preferred_cust_flag10).data(), (_c_preferred_cust_flag10).length());
                std::string _c_birth_country14 = (it->second)._c_birth_country14;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n{};
                memcpy(_c_birth_country14_n.data(), (_c_birth_country14).data(), (_c_birth_country14).length());
                std::string _c_login15 = (it->second)._c_login15;
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n{};
                memcpy(_c_login15_n.data(), (_c_login15).data(), (_c_login15).length());
                std::string _c_email_address16 = (it->second)._c_email_address16;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n{};
                memcpy(_c_email_address16_n.data(), (_c_email_address16).data(), (_c_email_address16).length());
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10781_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_10781_output.getInt32(i, 1);
                int32_t _ss_ext_discount_amt1220 = tbl_Filter_TD_10781_output.getInt32(i, 2);
                int32_t _ss_ext_list_price1223 = tbl_Filter_TD_10781_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_9841_output.setInt32(r, 7, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9841_output.setInt32(r, 8, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_9841_output.setInt32(r, 9, _ss_ext_list_price1223);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9841_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9841_key_rightMajor, SW_JOIN_INNER_TD_9841_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10781_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_10781_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9841_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10781_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_10781_output.getInt32(i, 1);
            int32_t _ss_ext_discount_amt1220 = tbl_Filter_TD_10781_output.getInt32(i, 2);
            int32_t _ss_ext_list_price1223 = tbl_Filter_TD_10781_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_9841_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_ext_discount_amt1220, _ss_ext_list_price1223};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10354_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_10354_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9841_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_ext_discount_amt1220 = (it->second)._ss_ext_discount_amt1220;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _c_customer_sk0 = tbl_Filter_TD_10354_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login15 = std::string(_c_login15_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Filter_TD_10354_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address16 = std::string(_c_email_address16_n.data());
                tbl_JOIN_INNER_TD_9841_output.setInt32(r, 7, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_9841_output.setInt32(r, 8, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_9841_output.setInt32(r, 9, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_9841_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9841_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9841_output #Row: " << tbl_JOIN_INNER_TD_9841_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8712_key_leftMajor {
    int32_t _ws_sold_date_sk11796;
    bool operator==(const SW_JOIN_INNER_TD_8712_key_leftMajor& other) const {
        return ((_ws_sold_date_sk11796 == other._ws_sold_date_sk11796));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8712_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8712_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk11796));
    }
};
}
struct SW_JOIN_INNER_TD_8712_payload_leftMajor {
    std::string _c_customer_id11779;
    std::string _c_first_name11786;
    std::string _c_last_name11787;
    std::string _c_preferred_cust_flag11788;
    std::string _c_birth_country11792;
    std::string _c_login11793;
    std::string _c_email_address11794;
    int32_t _ws_sold_date_sk11796;
    int32_t _ws_ext_discount_amt11818;
    int32_t _ws_ext_list_price11821;
};
struct SW_JOIN_INNER_TD_8712_key_rightMajor {
    int32_t _d_date_sk11830;
    bool operator==(const SW_JOIN_INNER_TD_8712_key_rightMajor& other) const {
        return ((_d_date_sk11830 == other._d_date_sk11830));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8712_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8712_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk11830));
    }
};
}
struct SW_JOIN_INNER_TD_8712_payload_rightMajor {
    int32_t _d_date_sk11830;
    int32_t _d_year11836;
};
void SW_JOIN_INNER_TD_8712(Table &tbl_JOIN_INNER_TD_950_output, Table &tbl_Filter_TD_971_output, Table &tbl_JOIN_INNER_TD_8712_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#11796 = d_date_sk#11830))
    // Left Table: ListBuffer(c_customer_id#11779, c_first_name#11786, c_last_name#11787, c_preferred_cust_flag#11788, c_birth_country#11792, c_login#11793, c_email_address#11794, ws_sold_date_sk#11796, ws_ext_discount_amt#11818, ws_ext_list_price#11821)
    // Right Table: ListBuffer(d_date_sk#11830, d_year#11836)
    // Output Table: ListBuffer(c_customer_id#11779, c_first_name#11786, c_last_name#11787, c_preferred_cust_flag#11788, c_birth_country#11792, c_login#11793, c_email_address#11794, ws_ext_discount_amt#11818, ws_ext_list_price#11821, d_year#11836)
    int left_nrow = tbl_JOIN_INNER_TD_950_output.getNumRow();
    int right_nrow = tbl_Filter_TD_971_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8712_key_leftMajor, SW_JOIN_INNER_TD_8712_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_950_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk11796_k = tbl_JOIN_INNER_TD_950_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8712_key_leftMajor keyA{_ws_sold_date_sk11796_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id11779 = std::string(_c_customer_id11779_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11786_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name11786 = std::string(_c_first_name11786_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11787_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name11787 = std::string(_c_last_name11787_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11788_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag11788 = std::string(_c_preferred_cust_flag11788_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11792_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country11792 = std::string(_c_birth_country11792_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login11793_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login11793 = std::string(_c_login11793_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11794_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address11794 = std::string(_c_email_address11794_n.data());
            int32_t _ws_sold_date_sk11796 = tbl_JOIN_INNER_TD_950_output.getInt32(i, 7);
            int32_t _ws_ext_discount_amt11818 = tbl_JOIN_INNER_TD_950_output.getInt32(i, 8);
            int32_t _ws_ext_list_price11821 = tbl_JOIN_INNER_TD_950_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_8712_payload_leftMajor payloadA{_c_customer_id11779, _c_first_name11786, _c_last_name11787, _c_preferred_cust_flag11788, _c_birth_country11792, _c_login11793, _c_email_address11794, _ws_sold_date_sk11796, _ws_ext_discount_amt11818, _ws_ext_list_price11821};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_971_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk11830_k = tbl_Filter_TD_971_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8712_key_leftMajor{_d_date_sk11830_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id11779 = (it->second)._c_customer_id11779;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779_n{};
                memcpy(_c_customer_id11779_n.data(), (_c_customer_id11779).data(), (_c_customer_id11779).length());
                std::string _c_first_name11786 = (it->second)._c_first_name11786;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11786_n{};
                memcpy(_c_first_name11786_n.data(), (_c_first_name11786).data(), (_c_first_name11786).length());
                std::string _c_last_name11787 = (it->second)._c_last_name11787;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11787_n{};
                memcpy(_c_last_name11787_n.data(), (_c_last_name11787).data(), (_c_last_name11787).length());
                std::string _c_preferred_cust_flag11788 = (it->second)._c_preferred_cust_flag11788;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11788_n{};
                memcpy(_c_preferred_cust_flag11788_n.data(), (_c_preferred_cust_flag11788).data(), (_c_preferred_cust_flag11788).length());
                std::string _c_birth_country11792 = (it->second)._c_birth_country11792;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11792_n{};
                memcpy(_c_birth_country11792_n.data(), (_c_birth_country11792).data(), (_c_birth_country11792).length());
                std::string _c_login11793 = (it->second)._c_login11793;
                std::array<char, TPCDS_READ_MAX + 1> _c_login11793_n{};
                memcpy(_c_login11793_n.data(), (_c_login11793).data(), (_c_login11793).length());
                std::string _c_email_address11794 = (it->second)._c_email_address11794;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11794_n{};
                memcpy(_c_email_address11794_n.data(), (_c_email_address11794).data(), (_c_email_address11794).length());
                int32_t _ws_sold_date_sk11796 = (it->second)._ws_sold_date_sk11796;
                int32_t _ws_ext_discount_amt11818 = (it->second)._ws_ext_discount_amt11818;
                int32_t _ws_ext_list_price11821 = (it->second)._ws_ext_list_price11821;
                int32_t _d_date_sk11830 = tbl_Filter_TD_971_output.getInt32(i, 0);
                int32_t _d_year11836 = tbl_Filter_TD_971_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11779_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11786_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11787_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11788_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11792_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11793_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11794_n);
                tbl_JOIN_INNER_TD_8712_output.setInt32(r, 7, _ws_ext_discount_amt11818);
                tbl_JOIN_INNER_TD_8712_output.setInt32(r, 8, _ws_ext_list_price11821);
                tbl_JOIN_INNER_TD_8712_output.setInt32(r, 9, _d_year11836);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8712_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8712_key_rightMajor, SW_JOIN_INNER_TD_8712_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_971_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk11830_k = tbl_Filter_TD_971_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8712_key_rightMajor keyA{_d_date_sk11830_k};
            int32_t _d_date_sk11830 = tbl_Filter_TD_971_output.getInt32(i, 0);
            int32_t _d_year11836 = tbl_Filter_TD_971_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8712_payload_rightMajor payloadA{_d_date_sk11830, _d_year11836};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_950_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk11796_k = tbl_JOIN_INNER_TD_950_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8712_key_rightMajor{_ws_sold_date_sk11796_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk11830 = (it->second)._d_date_sk11830;
                int32_t _d_year11836 = (it->second)._d_year11836;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id11779 = std::string(_c_customer_id11779_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11786_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name11786 = std::string(_c_first_name11786_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11787_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name11787 = std::string(_c_last_name11787_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11788_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag11788 = std::string(_c_preferred_cust_flag11788_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11792_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country11792 = std::string(_c_birth_country11792_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login11793_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login11793 = std::string(_c_login11793_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11794_n = tbl_JOIN_INNER_TD_950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address11794 = std::string(_c_email_address11794_n.data());
                int32_t _ws_sold_date_sk11796 = tbl_JOIN_INNER_TD_950_output.getInt32(i, 7);
                int32_t _ws_ext_discount_amt11818 = tbl_JOIN_INNER_TD_950_output.getInt32(i, 8);
                int32_t _ws_ext_list_price11821 = tbl_JOIN_INNER_TD_950_output.getInt32(i, 9);
                tbl_JOIN_INNER_TD_8712_output.setInt32(r, 9, _d_year11836);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11779_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11786_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11787_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11788_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11792_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11793_n);
                tbl_JOIN_INNER_TD_8712_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11794_n);
                tbl_JOIN_INNER_TD_8712_output.setInt32(r, 7, _ws_ext_discount_amt11818);
                tbl_JOIN_INNER_TD_8712_output.setInt32(r, 8, _ws_ext_list_price11821);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8712_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8712_output #Row: " << tbl_JOIN_INNER_TD_8712_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8722(Table &tbl_SerializeFromObject_TD_9763_input, Table &tbl_Filter_TD_8722_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#11597) AND (d_year#11597 = 2002)) AND isnotnull(d_date_sk#11591)))
    // Input: ListBuffer(d_date_sk#11591, d_year#11597)
    // Output: ListBuffer(d_date_sk#11591, d_year#11597)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9763_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year11597 = tbl_SerializeFromObject_TD_9763_input.getInt32(i, 1);
        int32_t _d_date_sk11591 = tbl_SerializeFromObject_TD_9763_input.getInt32(i, 0);
        if (((_d_year11597!= 0) && (_d_year11597 == 2002)) && (_d_date_sk11591!= 0)) {
            int32_t _d_date_sk11591_t = tbl_SerializeFromObject_TD_9763_input.getInt32(i, 0);
            tbl_Filter_TD_8722_output.setInt32(r, 0, _d_date_sk11591_t);
            int32_t _d_year11597_t = tbl_SerializeFromObject_TD_9763_input.getInt32(i, 1);
            tbl_Filter_TD_8722_output.setInt32(r, 1, _d_year11597_t);
            r++;
        }
    }
    tbl_Filter_TD_8722_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8722_output #Row: " << tbl_Filter_TD_8722_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8980_key_leftMajor {
    int32_t _c_customer_sk11550;
    bool operator==(const SW_JOIN_INNER_TD_8980_key_leftMajor& other) const {
        return ((_c_customer_sk11550 == other._c_customer_sk11550));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8980_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8980_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk11550));
    }
};
}
struct SW_JOIN_INNER_TD_8980_payload_leftMajor {
    int32_t _c_customer_sk11550;
    std::string _c_customer_id11551;
    std::string _c_first_name11558;
    std::string _c_last_name11559;
    std::string _c_preferred_cust_flag11560;
    std::string _c_birth_country11564;
    std::string _c_login11565;
    std::string _c_email_address11566;
};
struct SW_JOIN_INNER_TD_8980_key_rightMajor {
    int32_t _ss_customer_sk11571;
    bool operator==(const SW_JOIN_INNER_TD_8980_key_rightMajor& other) const {
        return ((_ss_customer_sk11571 == other._ss_customer_sk11571));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8980_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8980_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk11571));
    }
};
}
struct SW_JOIN_INNER_TD_8980_payload_rightMajor {
    int32_t _ss_sold_date_sk11568;
    int32_t _ss_customer_sk11571;
    int32_t _ss_ext_discount_amt11582;
    int32_t _ss_ext_list_price11585;
};
void SW_JOIN_INNER_TD_8980(Table &tbl_Filter_TD_9397_output, Table &tbl_Filter_TD_9743_output, Table &tbl_JOIN_INNER_TD_8980_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#11550 = ss_customer_sk#11571))
    // Left Table: ListBuffer(c_customer_sk#11550, c_customer_id#11551, c_first_name#11558, c_last_name#11559, c_preferred_cust_flag#11560, c_birth_country#11564, c_login#11565, c_email_address#11566)
    // Right Table: ListBuffer(ss_sold_date_sk#11568, ss_customer_sk#11571, ss_ext_discount_amt#11582, ss_ext_list_price#11585)
    // Output Table: ListBuffer(c_customer_id#11551, c_first_name#11558, c_last_name#11559, c_preferred_cust_flag#11560, c_birth_country#11564, c_login#11565, c_email_address#11566, ss_sold_date_sk#11568, ss_ext_discount_amt#11582, ss_ext_list_price#11585)
    int left_nrow = tbl_Filter_TD_9397_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9743_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8980_key_leftMajor, SW_JOIN_INNER_TD_8980_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9397_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk11550_k = tbl_Filter_TD_9397_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8980_key_leftMajor keyA{_c_customer_sk11550_k};
            int32_t _c_customer_sk11550 = tbl_Filter_TD_9397_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id11551 = std::string(_c_customer_id11551_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11558_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name11558 = std::string(_c_first_name11558_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11559_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name11559 = std::string(_c_last_name11559_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11560_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag11560 = std::string(_c_preferred_cust_flag11560_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11564_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country11564 = std::string(_c_birth_country11564_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login11565_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login11565 = std::string(_c_login11565_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11566_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address11566 = std::string(_c_email_address11566_n.data());
            SW_JOIN_INNER_TD_8980_payload_leftMajor payloadA{_c_customer_sk11550, _c_customer_id11551, _c_first_name11558, _c_last_name11559, _c_preferred_cust_flag11560, _c_birth_country11564, _c_login11565, _c_email_address11566};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9743_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk11571_k = tbl_Filter_TD_9743_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8980_key_leftMajor{_ss_customer_sk11571_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk11550 = (it->second)._c_customer_sk11550;
                std::string _c_customer_id11551 = (it->second)._c_customer_id11551;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551_n{};
                memcpy(_c_customer_id11551_n.data(), (_c_customer_id11551).data(), (_c_customer_id11551).length());
                std::string _c_first_name11558 = (it->second)._c_first_name11558;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11558_n{};
                memcpy(_c_first_name11558_n.data(), (_c_first_name11558).data(), (_c_first_name11558).length());
                std::string _c_last_name11559 = (it->second)._c_last_name11559;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11559_n{};
                memcpy(_c_last_name11559_n.data(), (_c_last_name11559).data(), (_c_last_name11559).length());
                std::string _c_preferred_cust_flag11560 = (it->second)._c_preferred_cust_flag11560;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11560_n{};
                memcpy(_c_preferred_cust_flag11560_n.data(), (_c_preferred_cust_flag11560).data(), (_c_preferred_cust_flag11560).length());
                std::string _c_birth_country11564 = (it->second)._c_birth_country11564;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11564_n{};
                memcpy(_c_birth_country11564_n.data(), (_c_birth_country11564).data(), (_c_birth_country11564).length());
                std::string _c_login11565 = (it->second)._c_login11565;
                std::array<char, TPCDS_READ_MAX + 1> _c_login11565_n{};
                memcpy(_c_login11565_n.data(), (_c_login11565).data(), (_c_login11565).length());
                std::string _c_email_address11566 = (it->second)._c_email_address11566;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11566_n{};
                memcpy(_c_email_address11566_n.data(), (_c_email_address11566).data(), (_c_email_address11566).length());
                int32_t _ss_sold_date_sk11568 = tbl_Filter_TD_9743_output.getInt32(i, 0);
                int32_t _ss_customer_sk11571 = tbl_Filter_TD_9743_output.getInt32(i, 1);
                int32_t _ss_ext_discount_amt11582 = tbl_Filter_TD_9743_output.getInt32(i, 2);
                int32_t _ss_ext_list_price11585 = tbl_Filter_TD_9743_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11551_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11558_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11559_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11560_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11564_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11565_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11566_n);
                tbl_JOIN_INNER_TD_8980_output.setInt32(r, 7, _ss_sold_date_sk11568);
                tbl_JOIN_INNER_TD_8980_output.setInt32(r, 8, _ss_ext_discount_amt11582);
                tbl_JOIN_INNER_TD_8980_output.setInt32(r, 9, _ss_ext_list_price11585);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8980_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8980_key_rightMajor, SW_JOIN_INNER_TD_8980_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9743_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk11571_k = tbl_Filter_TD_9743_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8980_key_rightMajor keyA{_ss_customer_sk11571_k};
            int32_t _ss_sold_date_sk11568 = tbl_Filter_TD_9743_output.getInt32(i, 0);
            int32_t _ss_customer_sk11571 = tbl_Filter_TD_9743_output.getInt32(i, 1);
            int32_t _ss_ext_discount_amt11582 = tbl_Filter_TD_9743_output.getInt32(i, 2);
            int32_t _ss_ext_list_price11585 = tbl_Filter_TD_9743_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8980_payload_rightMajor payloadA{_ss_sold_date_sk11568, _ss_customer_sk11571, _ss_ext_discount_amt11582, _ss_ext_list_price11585};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9397_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk11550_k = tbl_Filter_TD_9397_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8980_key_rightMajor{_c_customer_sk11550_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk11568 = (it->second)._ss_sold_date_sk11568;
                int32_t _ss_customer_sk11571 = (it->second)._ss_customer_sk11571;
                int32_t _ss_ext_discount_amt11582 = (it->second)._ss_ext_discount_amt11582;
                int32_t _ss_ext_list_price11585 = (it->second)._ss_ext_list_price11585;
                int32_t _c_customer_sk11550 = tbl_Filter_TD_9397_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id11551 = std::string(_c_customer_id11551_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11558_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name11558 = std::string(_c_first_name11558_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11559_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name11559 = std::string(_c_last_name11559_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11560_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag11560 = std::string(_c_preferred_cust_flag11560_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11564_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country11564 = std::string(_c_birth_country11564_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login11565_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login11565 = std::string(_c_login11565_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11566_n = tbl_Filter_TD_9397_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address11566 = std::string(_c_email_address11566_n.data());
                tbl_JOIN_INNER_TD_8980_output.setInt32(r, 7, _ss_sold_date_sk11568);
                tbl_JOIN_INNER_TD_8980_output.setInt32(r, 8, _ss_ext_discount_amt11582);
                tbl_JOIN_INNER_TD_8980_output.setInt32(r, 9, _ss_ext_list_price11585);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11551_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11558_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11559_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11560_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11564_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11565_n);
                tbl_JOIN_INNER_TD_8980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11566_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8980_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8980_output #Row: " << tbl_JOIN_INNER_TD_8980_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8957_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_8957_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8957_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8957_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_8957_payload_leftMajor {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_ext_discount_amt1220;
    int32_t _ss_ext_list_price1223;
};
struct SW_JOIN_INNER_TD_8957_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_8957_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8957_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8957_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_8957_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_8957(Table &tbl_JOIN_INNER_TD_9841_output, Table &tbl_Filter_TD_976_output, Table &tbl_JOIN_INNER_TD_8957_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_sold_date_sk#1206, ss_ext_discount_amt#1220, ss_ext_list_price#1223)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_ext_discount_amt#1220, ss_ext_list_price#1223, d_year#126)
    int left_nrow = tbl_JOIN_INNER_TD_9841_output.getNumRow();
    int right_nrow = tbl_Filter_TD_976_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8957_key_leftMajor, SW_JOIN_INNER_TD_8957_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9841_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9841_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8957_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login15 = std::string(_c_login15_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address16 = std::string(_c_email_address16_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9841_output.getInt32(i, 7);
            int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_9841_output.getInt32(i, 8);
            int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_9841_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_8957_payload_leftMajor payloadA{_c_customer_id1, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10, _c_birth_country14, _c_login15, _c_email_address16, _ss_sold_date_sk1206, _ss_ext_discount_amt1220, _ss_ext_list_price1223};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_976_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_976_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8957_key_leftMajor{_d_date_sk120_k});
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
                std::string _c_preferred_cust_flag10 = (it->second)._c_preferred_cust_flag10;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n{};
                memcpy(_c_preferred_cust_flag10_n.data(), (_c_preferred_cust_flag10).data(), (_c_preferred_cust_flag10).length());
                std::string _c_birth_country14 = (it->second)._c_birth_country14;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n{};
                memcpy(_c_birth_country14_n.data(), (_c_birth_country14).data(), (_c_birth_country14).length());
                std::string _c_login15 = (it->second)._c_login15;
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n{};
                memcpy(_c_login15_n.data(), (_c_login15).data(), (_c_login15).length());
                std::string _c_email_address16 = (it->second)._c_email_address16;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n{};
                memcpy(_c_email_address16_n.data(), (_c_email_address16).data(), (_c_email_address16).length());
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_ext_discount_amt1220 = (it->second)._ss_ext_discount_amt1220;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _d_date_sk120 = tbl_Filter_TD_976_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_976_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_8957_output.setInt32(r, 7, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_8957_output.setInt32(r, 8, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_8957_output.setInt32(r, 9, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8957_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8957_key_rightMajor, SW_JOIN_INNER_TD_8957_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_976_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_976_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8957_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_976_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_976_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8957_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9841_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_9841_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8957_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login15 = std::string(_c_login15_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_JOIN_INNER_TD_9841_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address16 = std::string(_c_email_address16_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_9841_output.getInt32(i, 7);
                int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_9841_output.getInt32(i, 8);
                int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_9841_output.getInt32(i, 9);
                tbl_JOIN_INNER_TD_8957_output.setInt32(r, 9, _d_year126);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_8957_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_8957_output.setInt32(r, 7, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_8957_output.setInt32(r, 8, _ss_ext_list_price1223);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8957_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8957_output #Row: " << tbl_JOIN_INNER_TD_8957_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7675(Table &tbl_SerializeFromObject_TD_8862_input, Table &tbl_Filter_TD_7675_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#11959) AND isnotnull(ws_sold_date_sk#11955)))
    // Input: ListBuffer(ws_sold_date_sk#11955, ws_bill_customer_sk#11959, ws_ext_discount_amt#11977, ws_ext_list_price#11980)
    // Output: ListBuffer(ws_sold_date_sk#11955, ws_bill_customer_sk#11959, ws_ext_discount_amt#11977, ws_ext_list_price#11980)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8862_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk11959 = tbl_SerializeFromObject_TD_8862_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk11955 = tbl_SerializeFromObject_TD_8862_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk11959!= 0) && (_ws_sold_date_sk11955!= 0)) {
            int32_t _ws_sold_date_sk11955_t = tbl_SerializeFromObject_TD_8862_input.getInt32(i, 0);
            tbl_Filter_TD_7675_output.setInt32(r, 0, _ws_sold_date_sk11955_t);
            int32_t _ws_bill_customer_sk11959_t = tbl_SerializeFromObject_TD_8862_input.getInt32(i, 1);
            tbl_Filter_TD_7675_output.setInt32(r, 1, _ws_bill_customer_sk11959_t);
            int32_t _ws_ext_discount_amt11977_t = tbl_SerializeFromObject_TD_8862_input.getInt32(i, 2);
            tbl_Filter_TD_7675_output.setInt32(r, 2, _ws_ext_discount_amt11977_t);
            int32_t _ws_ext_list_price11980_t = tbl_SerializeFromObject_TD_8862_input.getInt32(i, 3);
            tbl_Filter_TD_7675_output.setInt32(r, 3, _ws_ext_list_price11980_t);
            r++;
        }
    }
    tbl_Filter_TD_7675_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7675_output #Row: " << tbl_Filter_TD_7675_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7677(Table &tbl_SerializeFromObject_TD_8577_input, Table &tbl_Filter_TD_7677_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#11937) AND isnotnull(c_customer_id#11938)))
    // Input: ListBuffer(c_customer_sk#11937, c_customer_id#11938, c_first_name#11945, c_last_name#11946, c_preferred_cust_flag#11947, c_birth_country#11951, c_login#11952, c_email_address#11953)
    // Output: ListBuffer(c_customer_sk#11937, c_customer_id#11938, c_first_name#11945, c_last_name#11946, c_preferred_cust_flag#11947, c_birth_country#11951, c_login#11952, c_email_address#11953)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8577_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk11937 = tbl_SerializeFromObject_TD_8577_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938 = tbl_SerializeFromObject_TD_8577_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk11937!= 0) && （std::string(_isnotnullc_customer_id11938.data()) != "NULL")) {
            int32_t _c_customer_sk11937_t = tbl_SerializeFromObject_TD_8577_input.getInt32(i, 0);
            tbl_Filter_TD_7677_output.setInt32(r, 0, _c_customer_sk11937_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938_t = tbl_SerializeFromObject_TD_8577_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id11938_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11945_t = tbl_SerializeFromObject_TD_8577_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name11945_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11946_t = tbl_SerializeFromObject_TD_8577_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_7677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name11946_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11947_t = tbl_SerializeFromObject_TD_8577_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_7677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag11947_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11951_t = tbl_SerializeFromObject_TD_8577_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_7677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country11951_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login11952_t = tbl_SerializeFromObject_TD_8577_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_7677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login11952_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11953_t = tbl_SerializeFromObject_TD_8577_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_7677_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address11953_t);
            r++;
        }
    }
    tbl_Filter_TD_7677_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7677_output #Row: " << tbl_Filter_TD_7677_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7959_key {
    std::string _c_customer_id11779;
    std::string _c_first_name11786;
    std::string _c_last_name11787;
    std::string _c_preferred_cust_flag11788;
    std::string _c_birth_country11792;
    std::string _c_login11793;
    std::string _c_email_address11794;
    int32_t _d_year11836;
    bool operator==(const SW_Aggregate_TD_7959_key& other) const { return (_c_customer_id11779 == other._c_customer_id11779) && (_c_first_name11786 == other._c_first_name11786) && (_c_last_name11787 == other._c_last_name11787) && (_c_preferred_cust_flag11788 == other._c_preferred_cust_flag11788) && (_c_birth_country11792 == other._c_birth_country11792) && (_c_login11793 == other._c_login11793) && (_c_email_address11794 == other._c_email_address11794) && (_d_year11836 == other._d_year11836); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7959_key> {
    std::size_t operator() (const SW_Aggregate_TD_7959_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id11779)) + (hash<string>()(k._c_first_name11786)) + (hash<string>()(k._c_last_name11787)) + (hash<string>()(k._c_preferred_cust_flag11788)) + (hash<string>()(k._c_birth_country11792)) + (hash<string>()(k._c_login11793)) + (hash<string>()(k._c_email_address11794)) + (hash<int32_t>()(k._d_year11836));
    }
};
}
struct SW_Aggregate_TD_7959_payload {
    std::string _customer_id10367;
    int32_t _year_total10375_sum_0;
};
void SW_Aggregate_TD_7959(Table &tbl_JOIN_INNER_TD_8712_output, Table &tbl_Aggregate_TD_7959_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#11779, c_first_name#11786, c_last_name#11787, c_preferred_cust_flag#11788, c_birth_country#11792, c_login#11793, c_email_address#11794, d_year#11836, c_customer_id#11779 AS customer_id#10367, MakeDecimal(sum(UnscaledValue(CheckOverflow((promote_precision(cast(ws_ext_list_price#11821 as decimal(8,2))) - promote_precision(cast(ws_ext_discount_amt#11818 as decimal(8,2)))), DecimalType(8,2), true))),18,2) AS year_total#10375)
    // Input: ListBuffer(c_customer_id#11779, c_first_name#11786, c_last_name#11787, c_preferred_cust_flag#11788, c_birth_country#11792, c_login#11793, c_email_address#11794, ws_ext_discount_amt#11818, ws_ext_list_price#11821, d_year#11836)
    // Output: ListBuffer(customer_id#10367, year_total#10375)
    std::unordered_map<SW_Aggregate_TD_7959_key, SW_Aggregate_TD_7959_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8712_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11779 = tbl_JOIN_INNER_TD_8712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name11786 = tbl_JOIN_INNER_TD_8712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name11787 = tbl_JOIN_INNER_TD_8712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11788 = tbl_JOIN_INNER_TD_8712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11792 = tbl_JOIN_INNER_TD_8712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login11793 = tbl_JOIN_INNER_TD_8712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address11794 = tbl_JOIN_INNER_TD_8712_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ws_ext_discount_amt11818 = tbl_JOIN_INNER_TD_8712_output.getInt32(i, 7);
        int32_t _ws_ext_list_price11821 = tbl_JOIN_INNER_TD_8712_output.getInt32(i, 8);
        int32_t _d_year11836 = tbl_JOIN_INNER_TD_8712_output.getInt32(i, 9);
        SW_Aggregate_TD_7959_key k{std::string(_c_customer_id11779.data()), std::string(_c_first_name11786.data()), std::string(_c_last_name11787.data()), std::string(_c_preferred_cust_flag11788.data()), std::string(_c_birth_country11792.data()), std::string(_c_login11793.data()), std::string(_c_email_address11794.data()), _d_year11836};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10367 = _c_customer_id11779;
        int64_t _year_total10375_sum_0 = (_ws_ext_list_price11821 - _ws_ext_discount_amt11818);
        SW_Aggregate_TD_7959_payload p{std::string(_customer_id10367.data()), _year_total10375_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total10375_sum_0 + _year_total10375_sum_0;
            p._year_total10375_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id11779 not required in the output table
        // _c_first_name11786 not required in the output table
        // _c_last_name11787 not required in the output table
        // _c_preferred_cust_flag11788 not required in the output table
        // _c_birth_country11792 not required in the output table
        // _c_login11793 not required in the output table
        // _c_email_address11794 not required in the output table
        // _d_year11836 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10367_n{};
        memcpy(_customer_id10367_n.data(), (it.second)._customer_id10367.data(), (it.second)._customer_id10367.length());
        tbl_Aggregate_TD_7959_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10367_n);
        int32_t _year_total10375 = (it.second)._year_total10375_sum_0;
        tbl_Aggregate_TD_7959_output.setInt32(r, 1, _year_total10375);
        ++r;
    }
    tbl_Aggregate_TD_7959_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7959_output #Row: " << tbl_Aggregate_TD_7959_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7934_key_leftMajor {
    int32_t _ss_sold_date_sk11568;
    bool operator==(const SW_JOIN_INNER_TD_7934_key_leftMajor& other) const {
        return ((_ss_sold_date_sk11568 == other._ss_sold_date_sk11568));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7934_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7934_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk11568));
    }
};
}
struct SW_JOIN_INNER_TD_7934_payload_leftMajor {
    std::string _c_customer_id11551;
    std::string _c_first_name11558;
    std::string _c_last_name11559;
    std::string _c_preferred_cust_flag11560;
    std::string _c_birth_country11564;
    std::string _c_login11565;
    std::string _c_email_address11566;
    int32_t _ss_sold_date_sk11568;
    int32_t _ss_ext_discount_amt11582;
    int32_t _ss_ext_list_price11585;
};
struct SW_JOIN_INNER_TD_7934_key_rightMajor {
    int32_t _d_date_sk11591;
    bool operator==(const SW_JOIN_INNER_TD_7934_key_rightMajor& other) const {
        return ((_d_date_sk11591 == other._d_date_sk11591));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7934_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7934_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk11591));
    }
};
}
struct SW_JOIN_INNER_TD_7934_payload_rightMajor {
    int32_t _d_date_sk11591;
    int32_t _d_year11597;
};
void SW_JOIN_INNER_TD_7934(Table &tbl_JOIN_INNER_TD_8980_output, Table &tbl_Filter_TD_8722_output, Table &tbl_JOIN_INNER_TD_7934_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#11568 = d_date_sk#11591))
    // Left Table: ListBuffer(c_customer_id#11551, c_first_name#11558, c_last_name#11559, c_preferred_cust_flag#11560, c_birth_country#11564, c_login#11565, c_email_address#11566, ss_sold_date_sk#11568, ss_ext_discount_amt#11582, ss_ext_list_price#11585)
    // Right Table: ListBuffer(d_date_sk#11591, d_year#11597)
    // Output Table: ListBuffer(c_customer_id#11551, c_first_name#11558, c_last_name#11559, c_preferred_cust_flag#11560, c_birth_country#11564, c_login#11565, c_email_address#11566, ss_ext_discount_amt#11582, ss_ext_list_price#11585, d_year#11597)
    int left_nrow = tbl_JOIN_INNER_TD_8980_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8722_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7934_key_leftMajor, SW_JOIN_INNER_TD_7934_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8980_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk11568_k = tbl_JOIN_INNER_TD_8980_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_7934_key_leftMajor keyA{_ss_sold_date_sk11568_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id11551 = std::string(_c_customer_id11551_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11558_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name11558 = std::string(_c_first_name11558_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11559_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name11559 = std::string(_c_last_name11559_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11560_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag11560 = std::string(_c_preferred_cust_flag11560_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11564_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country11564 = std::string(_c_birth_country11564_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login11565_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login11565 = std::string(_c_login11565_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11566_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address11566 = std::string(_c_email_address11566_n.data());
            int32_t _ss_sold_date_sk11568 = tbl_JOIN_INNER_TD_8980_output.getInt32(i, 7);
            int32_t _ss_ext_discount_amt11582 = tbl_JOIN_INNER_TD_8980_output.getInt32(i, 8);
            int32_t _ss_ext_list_price11585 = tbl_JOIN_INNER_TD_8980_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_7934_payload_leftMajor payloadA{_c_customer_id11551, _c_first_name11558, _c_last_name11559, _c_preferred_cust_flag11560, _c_birth_country11564, _c_login11565, _c_email_address11566, _ss_sold_date_sk11568, _ss_ext_discount_amt11582, _ss_ext_list_price11585};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8722_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk11591_k = tbl_Filter_TD_8722_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7934_key_leftMajor{_d_date_sk11591_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id11551 = (it->second)._c_customer_id11551;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551_n{};
                memcpy(_c_customer_id11551_n.data(), (_c_customer_id11551).data(), (_c_customer_id11551).length());
                std::string _c_first_name11558 = (it->second)._c_first_name11558;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11558_n{};
                memcpy(_c_first_name11558_n.data(), (_c_first_name11558).data(), (_c_first_name11558).length());
                std::string _c_last_name11559 = (it->second)._c_last_name11559;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11559_n{};
                memcpy(_c_last_name11559_n.data(), (_c_last_name11559).data(), (_c_last_name11559).length());
                std::string _c_preferred_cust_flag11560 = (it->second)._c_preferred_cust_flag11560;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11560_n{};
                memcpy(_c_preferred_cust_flag11560_n.data(), (_c_preferred_cust_flag11560).data(), (_c_preferred_cust_flag11560).length());
                std::string _c_birth_country11564 = (it->second)._c_birth_country11564;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11564_n{};
                memcpy(_c_birth_country11564_n.data(), (_c_birth_country11564).data(), (_c_birth_country11564).length());
                std::string _c_login11565 = (it->second)._c_login11565;
                std::array<char, TPCDS_READ_MAX + 1> _c_login11565_n{};
                memcpy(_c_login11565_n.data(), (_c_login11565).data(), (_c_login11565).length());
                std::string _c_email_address11566 = (it->second)._c_email_address11566;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11566_n{};
                memcpy(_c_email_address11566_n.data(), (_c_email_address11566).data(), (_c_email_address11566).length());
                int32_t _ss_sold_date_sk11568 = (it->second)._ss_sold_date_sk11568;
                int32_t _ss_ext_discount_amt11582 = (it->second)._ss_ext_discount_amt11582;
                int32_t _ss_ext_list_price11585 = (it->second)._ss_ext_list_price11585;
                int32_t _d_date_sk11591 = tbl_Filter_TD_8722_output.getInt32(i, 0);
                int32_t _d_year11597 = tbl_Filter_TD_8722_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11551_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11558_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11559_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11560_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11564_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11565_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11566_n);
                tbl_JOIN_INNER_TD_7934_output.setInt32(r, 7, _ss_ext_discount_amt11582);
                tbl_JOIN_INNER_TD_7934_output.setInt32(r, 8, _ss_ext_list_price11585);
                tbl_JOIN_INNER_TD_7934_output.setInt32(r, 9, _d_year11597);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7934_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7934_key_rightMajor, SW_JOIN_INNER_TD_7934_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8722_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk11591_k = tbl_Filter_TD_8722_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7934_key_rightMajor keyA{_d_date_sk11591_k};
            int32_t _d_date_sk11591 = tbl_Filter_TD_8722_output.getInt32(i, 0);
            int32_t _d_year11597 = tbl_Filter_TD_8722_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7934_payload_rightMajor payloadA{_d_date_sk11591, _d_year11597};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8980_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk11568_k = tbl_JOIN_INNER_TD_8980_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7934_key_rightMajor{_ss_sold_date_sk11568_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk11591 = (it->second)._d_date_sk11591;
                int32_t _d_year11597 = (it->second)._d_year11597;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id11551 = std::string(_c_customer_id11551_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11558_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name11558 = std::string(_c_first_name11558_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11559_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name11559 = std::string(_c_last_name11559_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11560_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag11560 = std::string(_c_preferred_cust_flag11560_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11564_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country11564 = std::string(_c_birth_country11564_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login11565_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login11565 = std::string(_c_login11565_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11566_n = tbl_JOIN_INNER_TD_8980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address11566 = std::string(_c_email_address11566_n.data());
                int32_t _ss_sold_date_sk11568 = tbl_JOIN_INNER_TD_8980_output.getInt32(i, 7);
                int32_t _ss_ext_discount_amt11582 = tbl_JOIN_INNER_TD_8980_output.getInt32(i, 8);
                int32_t _ss_ext_list_price11585 = tbl_JOIN_INNER_TD_8980_output.getInt32(i, 9);
                tbl_JOIN_INNER_TD_7934_output.setInt32(r, 9, _d_year11597);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11551_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11558_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11559_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11560_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11564_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11565_n);
                tbl_JOIN_INNER_TD_7934_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11566_n);
                tbl_JOIN_INNER_TD_7934_output.setInt32(r, 7, _ss_ext_discount_amt11582);
                tbl_JOIN_INNER_TD_7934_output.setInt32(r, 8, _ss_ext_list_price11585);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7934_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7934_output #Row: " << tbl_JOIN_INNER_TD_7934_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_737_key {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
    int32_t _d_year126;
    bool operator==(const SW_Aggregate_TD_737_key& other) const { return (_c_customer_id1 == other._c_customer_id1) && (_c_first_name8 == other._c_first_name8) && (_c_last_name9 == other._c_last_name9) && (_c_preferred_cust_flag10 == other._c_preferred_cust_flag10) && (_c_birth_country14 == other._c_birth_country14) && (_c_login15 == other._c_login15) && (_c_email_address16 == other._c_email_address16) && (_d_year126 == other._d_year126); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_737_key> {
    std::size_t operator() (const SW_Aggregate_TD_737_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id1)) + (hash<string>()(k._c_first_name8)) + (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_preferred_cust_flag10)) + (hash<string>()(k._c_birth_country14)) + (hash<string>()(k._c_login15)) + (hash<string>()(k._c_email_address16)) + (hash<int32_t>()(k._d_year126));
    }
};
}
struct SW_Aggregate_TD_737_payload {
    std::string _customer_id10357;
    int32_t _year_total10365_sum_0;
};
void SW_Aggregate_TD_737(Table &tbl_JOIN_INNER_TD_8957_output, Table &tbl_Aggregate_TD_737_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, d_year#126, c_customer_id#1 AS customer_id#10357, MakeDecimal(sum(UnscaledValue(CheckOverflow((promote_precision(cast(ss_ext_list_price#1223 as decimal(8,2))) - promote_precision(cast(ss_ext_discount_amt#1220 as decimal(8,2)))), DecimalType(8,2), true))),18,2) AS year_total#10365)
    // Input: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_ext_discount_amt#1220, ss_ext_list_price#1223, d_year#126)
    // Output: ListBuffer(customer_id#10357, year_total#10365)
    std::unordered_map<SW_Aggregate_TD_737_key, SW_Aggregate_TD_737_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8957_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_8957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_8957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_8957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10 = tbl_JOIN_INNER_TD_8957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14 = tbl_JOIN_INNER_TD_8957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login15 = tbl_JOIN_INNER_TD_8957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address16 = tbl_JOIN_INNER_TD_8957_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_8957_output.getInt32(i, 7);
        int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_8957_output.getInt32(i, 8);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_8957_output.getInt32(i, 9);
        SW_Aggregate_TD_737_key k{std::string(_c_customer_id1.data()), std::string(_c_first_name8.data()), std::string(_c_last_name9.data()), std::string(_c_preferred_cust_flag10.data()), std::string(_c_birth_country14.data()), std::string(_c_login15.data()), std::string(_c_email_address16.data()), _d_year126};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10357 = _c_customer_id1;
        int64_t _year_total10365_sum_0 = (_ss_ext_list_price1223 - _ss_ext_discount_amt1220);
        SW_Aggregate_TD_737_payload p{std::string(_customer_id10357.data()), _year_total10365_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total10365_sum_0 + _year_total10365_sum_0;
            p._year_total10365_sum_0 = sum_0;
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
        // _c_preferred_cust_flag10 not required in the output table
        // _c_birth_country14 not required in the output table
        // _c_login15 not required in the output table
        // _c_email_address16 not required in the output table
        // _d_year126 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n{};
        memcpy(_customer_id10357_n.data(), (it.second)._customer_id10357.data(), (it.second)._customer_id10357.length());
        tbl_Aggregate_TD_737_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10357_n);
        int32_t _year_total10365 = (it.second)._year_total10365_sum_0;
        tbl_Aggregate_TD_737_output.setInt32(r, 1, _year_total10365);
        ++r;
    }
    tbl_Aggregate_TD_737_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_737_output #Row: " << tbl_Aggregate_TD_737_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6200(Table &tbl_SerializeFromObject_TD_7853_input, Table &tbl_Filter_TD_6200_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#11995) AND (d_year#11995 = 2002)) AND isnotnull(d_date_sk#11989)))
    // Input: ListBuffer(d_date_sk#11989, d_year#11995)
    // Output: ListBuffer(d_date_sk#11989, d_year#11995)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7853_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year11995 = tbl_SerializeFromObject_TD_7853_input.getInt32(i, 1);
        int32_t _d_date_sk11989 = tbl_SerializeFromObject_TD_7853_input.getInt32(i, 0);
        if (((_d_year11995!= 0) && (_d_year11995 == 2002)) && (_d_date_sk11989!= 0)) {
            int32_t _d_date_sk11989_t = tbl_SerializeFromObject_TD_7853_input.getInt32(i, 0);
            tbl_Filter_TD_6200_output.setInt32(r, 0, _d_date_sk11989_t);
            int32_t _d_year11995_t = tbl_SerializeFromObject_TD_7853_input.getInt32(i, 1);
            tbl_Filter_TD_6200_output.setInt32(r, 1, _d_year11995_t);
            r++;
        }
    }
    tbl_Filter_TD_6200_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6200_output #Row: " << tbl_Filter_TD_6200_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6785_key_leftMajor {
    int32_t _c_customer_sk11937;
    bool operator==(const SW_JOIN_INNER_TD_6785_key_leftMajor& other) const {
        return ((_c_customer_sk11937 == other._c_customer_sk11937));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6785_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6785_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk11937));
    }
};
}
struct SW_JOIN_INNER_TD_6785_payload_leftMajor {
    int32_t _c_customer_sk11937;
    std::string _c_customer_id11938;
    std::string _c_first_name11945;
    std::string _c_last_name11946;
    std::string _c_preferred_cust_flag11947;
    std::string _c_birth_country11951;
    std::string _c_login11952;
    std::string _c_email_address11953;
};
struct SW_JOIN_INNER_TD_6785_key_rightMajor {
    int32_t _ws_bill_customer_sk11959;
    bool operator==(const SW_JOIN_INNER_TD_6785_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk11959 == other._ws_bill_customer_sk11959));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6785_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6785_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk11959));
    }
};
}
struct SW_JOIN_INNER_TD_6785_payload_rightMajor {
    int32_t _ws_sold_date_sk11955;
    int32_t _ws_bill_customer_sk11959;
    int32_t _ws_ext_discount_amt11977;
    int32_t _ws_ext_list_price11980;
};
void SW_JOIN_INNER_TD_6785(Table &tbl_Filter_TD_7677_output, Table &tbl_Filter_TD_7675_output, Table &tbl_JOIN_INNER_TD_6785_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#11937 = ws_bill_customer_sk#11959))
    // Left Table: ListBuffer(c_customer_sk#11937, c_customer_id#11938, c_first_name#11945, c_last_name#11946, c_preferred_cust_flag#11947, c_birth_country#11951, c_login#11952, c_email_address#11953)
    // Right Table: ListBuffer(ws_sold_date_sk#11955, ws_bill_customer_sk#11959, ws_ext_discount_amt#11977, ws_ext_list_price#11980)
    // Output Table: ListBuffer(c_customer_id#11938, c_first_name#11945, c_last_name#11946, c_preferred_cust_flag#11947, c_birth_country#11951, c_login#11952, c_email_address#11953, ws_sold_date_sk#11955, ws_ext_discount_amt#11977, ws_ext_list_price#11980)
    int left_nrow = tbl_Filter_TD_7677_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7675_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6785_key_leftMajor, SW_JOIN_INNER_TD_6785_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7677_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk11937_k = tbl_Filter_TD_7677_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6785_key_leftMajor keyA{_c_customer_sk11937_k};
            int32_t _c_customer_sk11937 = tbl_Filter_TD_7677_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id11938 = std::string(_c_customer_id11938_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11945_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name11945 = std::string(_c_first_name11945_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11946_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name11946 = std::string(_c_last_name11946_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11947_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag11947 = std::string(_c_preferred_cust_flag11947_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11951_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country11951 = std::string(_c_birth_country11951_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login11952_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login11952 = std::string(_c_login11952_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11953_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address11953 = std::string(_c_email_address11953_n.data());
            SW_JOIN_INNER_TD_6785_payload_leftMajor payloadA{_c_customer_sk11937, _c_customer_id11938, _c_first_name11945, _c_last_name11946, _c_preferred_cust_flag11947, _c_birth_country11951, _c_login11952, _c_email_address11953};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7675_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk11959_k = tbl_Filter_TD_7675_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6785_key_leftMajor{_ws_bill_customer_sk11959_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk11937 = (it->second)._c_customer_sk11937;
                std::string _c_customer_id11938 = (it->second)._c_customer_id11938;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938_n{};
                memcpy(_c_customer_id11938_n.data(), (_c_customer_id11938).data(), (_c_customer_id11938).length());
                std::string _c_first_name11945 = (it->second)._c_first_name11945;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11945_n{};
                memcpy(_c_first_name11945_n.data(), (_c_first_name11945).data(), (_c_first_name11945).length());
                std::string _c_last_name11946 = (it->second)._c_last_name11946;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11946_n{};
                memcpy(_c_last_name11946_n.data(), (_c_last_name11946).data(), (_c_last_name11946).length());
                std::string _c_preferred_cust_flag11947 = (it->second)._c_preferred_cust_flag11947;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11947_n{};
                memcpy(_c_preferred_cust_flag11947_n.data(), (_c_preferred_cust_flag11947).data(), (_c_preferred_cust_flag11947).length());
                std::string _c_birth_country11951 = (it->second)._c_birth_country11951;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11951_n{};
                memcpy(_c_birth_country11951_n.data(), (_c_birth_country11951).data(), (_c_birth_country11951).length());
                std::string _c_login11952 = (it->second)._c_login11952;
                std::array<char, TPCDS_READ_MAX + 1> _c_login11952_n{};
                memcpy(_c_login11952_n.data(), (_c_login11952).data(), (_c_login11952).length());
                std::string _c_email_address11953 = (it->second)._c_email_address11953;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11953_n{};
                memcpy(_c_email_address11953_n.data(), (_c_email_address11953).data(), (_c_email_address11953).length());
                int32_t _ws_sold_date_sk11955 = tbl_Filter_TD_7675_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk11959 = tbl_Filter_TD_7675_output.getInt32(i, 1);
                int32_t _ws_ext_discount_amt11977 = tbl_Filter_TD_7675_output.getInt32(i, 2);
                int32_t _ws_ext_list_price11980 = tbl_Filter_TD_7675_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11938_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11945_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11946_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11947_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11951_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11952_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11953_n);
                tbl_JOIN_INNER_TD_6785_output.setInt32(r, 7, _ws_sold_date_sk11955);
                tbl_JOIN_INNER_TD_6785_output.setInt32(r, 8, _ws_ext_discount_amt11977);
                tbl_JOIN_INNER_TD_6785_output.setInt32(r, 9, _ws_ext_list_price11980);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6785_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6785_key_rightMajor, SW_JOIN_INNER_TD_6785_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7675_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk11959_k = tbl_Filter_TD_7675_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6785_key_rightMajor keyA{_ws_bill_customer_sk11959_k};
            int32_t _ws_sold_date_sk11955 = tbl_Filter_TD_7675_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk11959 = tbl_Filter_TD_7675_output.getInt32(i, 1);
            int32_t _ws_ext_discount_amt11977 = tbl_Filter_TD_7675_output.getInt32(i, 2);
            int32_t _ws_ext_list_price11980 = tbl_Filter_TD_7675_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6785_payload_rightMajor payloadA{_ws_sold_date_sk11955, _ws_bill_customer_sk11959, _ws_ext_discount_amt11977, _ws_ext_list_price11980};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7677_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk11937_k = tbl_Filter_TD_7677_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6785_key_rightMajor{_c_customer_sk11937_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk11955 = (it->second)._ws_sold_date_sk11955;
                int32_t _ws_bill_customer_sk11959 = (it->second)._ws_bill_customer_sk11959;
                int32_t _ws_ext_discount_amt11977 = (it->second)._ws_ext_discount_amt11977;
                int32_t _ws_ext_list_price11980 = (it->second)._ws_ext_list_price11980;
                int32_t _c_customer_sk11937 = tbl_Filter_TD_7677_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id11938 = std::string(_c_customer_id11938_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11945_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name11945 = std::string(_c_first_name11945_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11946_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name11946 = std::string(_c_last_name11946_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11947_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag11947 = std::string(_c_preferred_cust_flag11947_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11951_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country11951 = std::string(_c_birth_country11951_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login11952_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login11952 = std::string(_c_login11952_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11953_n = tbl_Filter_TD_7677_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address11953 = std::string(_c_email_address11953_n.data());
                tbl_JOIN_INNER_TD_6785_output.setInt32(r, 7, _ws_sold_date_sk11955);
                tbl_JOIN_INNER_TD_6785_output.setInt32(r, 8, _ws_ext_discount_amt11977);
                tbl_JOIN_INNER_TD_6785_output.setInt32(r, 9, _ws_ext_list_price11980);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11938_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11945_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11946_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11947_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11951_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11952_n);
                tbl_JOIN_INNER_TD_6785_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11953_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6785_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6785_output #Row: " << tbl_JOIN_INNER_TD_6785_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6665(Table &tbl_Aggregate_TD_7959_output, Table &tbl_Filter_TD_6665_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#10375) AND (year_total#10375 > 0.00)))
    // Input: ListBuffer(customer_id#10367, year_total#10375)
    // Output: ListBuffer(customer_id#10367, year_total#10375)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7959_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total10375 = tbl_Aggregate_TD_7959_output.getInt32(i, 1);
        if ((_year_total10375!= 0) && (_year_total10375 > 0.00)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10367_t = tbl_Aggregate_TD_7959_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6665_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10367_t);
            int32_t _year_total10375_t = tbl_Aggregate_TD_7959_output.getInt32(i, 1);
            tbl_Filter_TD_6665_output.setInt32(r, 1, _year_total10375_t);
            r++;
        }
    }
    tbl_Filter_TD_6665_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6665_output #Row: " << tbl_Filter_TD_6665_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6948_key {
    std::string _c_customer_id11551;
    std::string _c_first_name11558;
    std::string _c_last_name11559;
    std::string _c_preferred_cust_flag11560;
    std::string _c_birth_country11564;
    std::string _c_login11565;
    std::string _c_email_address11566;
    int32_t _d_year11597;
    bool operator==(const SW_Aggregate_TD_6948_key& other) const { return (_c_customer_id11551 == other._c_customer_id11551) && (_c_first_name11558 == other._c_first_name11558) && (_c_last_name11559 == other._c_last_name11559) && (_c_preferred_cust_flag11560 == other._c_preferred_cust_flag11560) && (_c_birth_country11564 == other._c_birth_country11564) && (_c_login11565 == other._c_login11565) && (_c_email_address11566 == other._c_email_address11566) && (_d_year11597 == other._d_year11597); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6948_key> {
    std::size_t operator() (const SW_Aggregate_TD_6948_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id11551)) + (hash<string>()(k._c_first_name11558)) + (hash<string>()(k._c_last_name11559)) + (hash<string>()(k._c_preferred_cust_flag11560)) + (hash<string>()(k._c_birth_country11564)) + (hash<string>()(k._c_login11565)) + (hash<string>()(k._c_email_address11566)) + (hash<int32_t>()(k._d_year11597));
    }
};
}
struct SW_Aggregate_TD_6948_payload {
    std::string _customer_id10425;
    std::string _customer_first_name10426;
    std::string _customer_last_name10427;
    std::string _customer_preferred_cust_flag10428;
    int32_t _year_total10433_sum_0;
};
void SW_Aggregate_TD_6948(Table &tbl_JOIN_INNER_TD_7934_output, Table &tbl_Aggregate_TD_6948_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#11551, c_first_name#11558, c_last_name#11559, c_preferred_cust_flag#11560, c_birth_country#11564, c_login#11565, c_email_address#11566, d_year#11597, c_customer_id#11551 AS customer_id#10425, c_first_name#11558 AS customer_first_name#10426, c_last_name#11559 AS customer_last_name#10427, c_preferred_cust_flag#11560 AS customer_preferred_cust_flag#10428, MakeDecimal(sum(UnscaledValue(CheckOverflow((promote_precision(cast(ss_ext_list_price#11585 as decimal(8,2))) - promote_precision(cast(ss_ext_discount_amt#11582 as decimal(8,2)))), DecimalType(8,2), true))),18,2) AS year_total#10433)
    // Input: ListBuffer(c_customer_id#11551, c_first_name#11558, c_last_name#11559, c_preferred_cust_flag#11560, c_birth_country#11564, c_login#11565, c_email_address#11566, ss_ext_discount_amt#11582, ss_ext_list_price#11585, d_year#11597)
    // Output: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428, year_total#10433)
    std::unordered_map<SW_Aggregate_TD_6948_key, SW_Aggregate_TD_6948_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7934_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11551 = tbl_JOIN_INNER_TD_7934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name11558 = tbl_JOIN_INNER_TD_7934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name11559 = tbl_JOIN_INNER_TD_7934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11560 = tbl_JOIN_INNER_TD_7934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11564 = tbl_JOIN_INNER_TD_7934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login11565 = tbl_JOIN_INNER_TD_7934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address11566 = tbl_JOIN_INNER_TD_7934_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ss_ext_discount_amt11582 = tbl_JOIN_INNER_TD_7934_output.getInt32(i, 7);
        int32_t _ss_ext_list_price11585 = tbl_JOIN_INNER_TD_7934_output.getInt32(i, 8);
        int32_t _d_year11597 = tbl_JOIN_INNER_TD_7934_output.getInt32(i, 9);
        SW_Aggregate_TD_6948_key k{std::string(_c_customer_id11551.data()), std::string(_c_first_name11558.data()), std::string(_c_last_name11559.data()), std::string(_c_preferred_cust_flag11560.data()), std::string(_c_birth_country11564.data()), std::string(_c_login11565.data()), std::string(_c_email_address11566.data()), _d_year11597};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10425 = _c_customer_id11551;
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426 = _c_first_name11558;
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427 = _c_last_name11559;
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428 = _c_preferred_cust_flag11560;
        int64_t _year_total10433_sum_0 = (_ss_ext_list_price11585 - _ss_ext_discount_amt11582);
        SW_Aggregate_TD_6948_payload p{std::string(_customer_id10425.data()), std::string(_customer_first_name10426.data()), std::string(_customer_last_name10427.data()), std::string(_customer_preferred_cust_flag10428.data()), _year_total10433_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total10433_sum_0 + _year_total10433_sum_0;
            p._year_total10433_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id11551 not required in the output table
        // _c_first_name11558 not required in the output table
        // _c_last_name11559 not required in the output table
        // _c_preferred_cust_flag11560 not required in the output table
        // _c_birth_country11564 not required in the output table
        // _c_login11565 not required in the output table
        // _c_email_address11566 not required in the output table
        // _d_year11597 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n{};
        memcpy(_customer_id10425_n.data(), (it.second)._customer_id10425.data(), (it.second)._customer_id10425.length());
        tbl_Aggregate_TD_6948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10425_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n{};
        memcpy(_customer_first_name10426_n.data(), (it.second)._customer_first_name10426.data(), (it.second)._customer_first_name10426.length());
        tbl_Aggregate_TD_6948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name10426_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n{};
        memcpy(_customer_last_name10427_n.data(), (it.second)._customer_last_name10427.data(), (it.second)._customer_last_name10427.length());
        tbl_Aggregate_TD_6948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name10427_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n{};
        memcpy(_customer_preferred_cust_flag10428_n.data(), (it.second)._customer_preferred_cust_flag10428.data(), (it.second)._customer_preferred_cust_flag10428.length());
        tbl_Aggregate_TD_6948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag10428_n);
        int32_t _year_total10433 = (it.second)._year_total10433_sum_0;
        tbl_Aggregate_TD_6948_output.setInt32(r, 4, _year_total10433);
        ++r;
    }
    tbl_Aggregate_TD_6948_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6948_output #Row: " << tbl_Aggregate_TD_6948_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6829(Table &tbl_Aggregate_TD_737_output, Table &tbl_Filter_TD_6829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#10365) AND (year_total#10365 > 0.00)))
    // Input: ListBuffer(customer_id#10357, year_total#10365)
    // Output: ListBuffer(customer_id#10357, year_total#10365)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_737_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total10365 = tbl_Aggregate_TD_737_output.getInt32(i, 1);
        if ((_year_total10365!= 0) && (_year_total10365 > 0.00)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_t = tbl_Aggregate_TD_737_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6829_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10357_t);
            int32_t _year_total10365_t = tbl_Aggregate_TD_737_output.getInt32(i, 1);
            tbl_Filter_TD_6829_output.setInt32(r, 1, _year_total10365_t);
            r++;
        }
    }
    tbl_Filter_TD_6829_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6829_output #Row: " << tbl_Filter_TD_6829_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5406_key_leftMajor {
    int32_t _ws_sold_date_sk11955;
    bool operator==(const SW_JOIN_INNER_TD_5406_key_leftMajor& other) const {
        return ((_ws_sold_date_sk11955 == other._ws_sold_date_sk11955));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5406_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5406_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk11955));
    }
};
}
struct SW_JOIN_INNER_TD_5406_payload_leftMajor {
    std::string _c_customer_id11938;
    std::string _c_first_name11945;
    std::string _c_last_name11946;
    std::string _c_preferred_cust_flag11947;
    std::string _c_birth_country11951;
    std::string _c_login11952;
    std::string _c_email_address11953;
    int32_t _ws_sold_date_sk11955;
    int32_t _ws_ext_discount_amt11977;
    int32_t _ws_ext_list_price11980;
};
struct SW_JOIN_INNER_TD_5406_key_rightMajor {
    int32_t _d_date_sk11989;
    bool operator==(const SW_JOIN_INNER_TD_5406_key_rightMajor& other) const {
        return ((_d_date_sk11989 == other._d_date_sk11989));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5406_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5406_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk11989));
    }
};
}
struct SW_JOIN_INNER_TD_5406_payload_rightMajor {
    int32_t _d_date_sk11989;
    int32_t _d_year11995;
};
void SW_JOIN_INNER_TD_5406(Table &tbl_JOIN_INNER_TD_6785_output, Table &tbl_Filter_TD_6200_output, Table &tbl_JOIN_INNER_TD_5406_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#11955 = d_date_sk#11989))
    // Left Table: ListBuffer(c_customer_id#11938, c_first_name#11945, c_last_name#11946, c_preferred_cust_flag#11947, c_birth_country#11951, c_login#11952, c_email_address#11953, ws_sold_date_sk#11955, ws_ext_discount_amt#11977, ws_ext_list_price#11980)
    // Right Table: ListBuffer(d_date_sk#11989, d_year#11995)
    // Output Table: ListBuffer(c_customer_id#11938, c_first_name#11945, c_last_name#11946, c_preferred_cust_flag#11947, c_birth_country#11951, c_login#11952, c_email_address#11953, ws_ext_discount_amt#11977, ws_ext_list_price#11980, d_year#11995)
    int left_nrow = tbl_JOIN_INNER_TD_6785_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6200_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5406_key_leftMajor, SW_JOIN_INNER_TD_5406_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6785_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk11955_k = tbl_JOIN_INNER_TD_6785_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_5406_key_leftMajor keyA{_ws_sold_date_sk11955_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id11938 = std::string(_c_customer_id11938_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name11945_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name11945 = std::string(_c_first_name11945_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name11946_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name11946 = std::string(_c_last_name11946_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11947_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag11947 = std::string(_c_preferred_cust_flag11947_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11951_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country11951 = std::string(_c_birth_country11951_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login11952_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login11952 = std::string(_c_login11952_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address11953_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address11953 = std::string(_c_email_address11953_n.data());
            int32_t _ws_sold_date_sk11955 = tbl_JOIN_INNER_TD_6785_output.getInt32(i, 7);
            int32_t _ws_ext_discount_amt11977 = tbl_JOIN_INNER_TD_6785_output.getInt32(i, 8);
            int32_t _ws_ext_list_price11980 = tbl_JOIN_INNER_TD_6785_output.getInt32(i, 9);
            SW_JOIN_INNER_TD_5406_payload_leftMajor payloadA{_c_customer_id11938, _c_first_name11945, _c_last_name11946, _c_preferred_cust_flag11947, _c_birth_country11951, _c_login11952, _c_email_address11953, _ws_sold_date_sk11955, _ws_ext_discount_amt11977, _ws_ext_list_price11980};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6200_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk11989_k = tbl_Filter_TD_6200_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5406_key_leftMajor{_d_date_sk11989_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id11938 = (it->second)._c_customer_id11938;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938_n{};
                memcpy(_c_customer_id11938_n.data(), (_c_customer_id11938).data(), (_c_customer_id11938).length());
                std::string _c_first_name11945 = (it->second)._c_first_name11945;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11945_n{};
                memcpy(_c_first_name11945_n.data(), (_c_first_name11945).data(), (_c_first_name11945).length());
                std::string _c_last_name11946 = (it->second)._c_last_name11946;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11946_n{};
                memcpy(_c_last_name11946_n.data(), (_c_last_name11946).data(), (_c_last_name11946).length());
                std::string _c_preferred_cust_flag11947 = (it->second)._c_preferred_cust_flag11947;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11947_n{};
                memcpy(_c_preferred_cust_flag11947_n.data(), (_c_preferred_cust_flag11947).data(), (_c_preferred_cust_flag11947).length());
                std::string _c_birth_country11951 = (it->second)._c_birth_country11951;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11951_n{};
                memcpy(_c_birth_country11951_n.data(), (_c_birth_country11951).data(), (_c_birth_country11951).length());
                std::string _c_login11952 = (it->second)._c_login11952;
                std::array<char, TPCDS_READ_MAX + 1> _c_login11952_n{};
                memcpy(_c_login11952_n.data(), (_c_login11952).data(), (_c_login11952).length());
                std::string _c_email_address11953 = (it->second)._c_email_address11953;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11953_n{};
                memcpy(_c_email_address11953_n.data(), (_c_email_address11953).data(), (_c_email_address11953).length());
                int32_t _ws_sold_date_sk11955 = (it->second)._ws_sold_date_sk11955;
                int32_t _ws_ext_discount_amt11977 = (it->second)._ws_ext_discount_amt11977;
                int32_t _ws_ext_list_price11980 = (it->second)._ws_ext_list_price11980;
                int32_t _d_date_sk11989 = tbl_Filter_TD_6200_output.getInt32(i, 0);
                int32_t _d_year11995 = tbl_Filter_TD_6200_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11938_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11945_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11946_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11947_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11951_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11952_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11953_n);
                tbl_JOIN_INNER_TD_5406_output.setInt32(r, 7, _ws_ext_discount_amt11977);
                tbl_JOIN_INNER_TD_5406_output.setInt32(r, 8, _ws_ext_list_price11980);
                tbl_JOIN_INNER_TD_5406_output.setInt32(r, 9, _d_year11995);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5406_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5406_key_rightMajor, SW_JOIN_INNER_TD_5406_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6200_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk11989_k = tbl_Filter_TD_6200_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5406_key_rightMajor keyA{_d_date_sk11989_k};
            int32_t _d_date_sk11989 = tbl_Filter_TD_6200_output.getInt32(i, 0);
            int32_t _d_year11995 = tbl_Filter_TD_6200_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5406_payload_rightMajor payloadA{_d_date_sk11989, _d_year11995};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6785_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk11955_k = tbl_JOIN_INNER_TD_6785_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5406_key_rightMajor{_ws_sold_date_sk11955_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk11989 = (it->second)._d_date_sk11989;
                int32_t _d_year11995 = (it->second)._d_year11995;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id11938 = std::string(_c_customer_id11938_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name11945_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name11945 = std::string(_c_first_name11945_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name11946_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name11946 = std::string(_c_last_name11946_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11947_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag11947 = std::string(_c_preferred_cust_flag11947_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11951_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country11951 = std::string(_c_birth_country11951_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login11952_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login11952 = std::string(_c_login11952_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address11953_n = tbl_JOIN_INNER_TD_6785_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address11953 = std::string(_c_email_address11953_n.data());
                int32_t _ws_sold_date_sk11955 = tbl_JOIN_INNER_TD_6785_output.getInt32(i, 7);
                int32_t _ws_ext_discount_amt11977 = tbl_JOIN_INNER_TD_6785_output.getInt32(i, 8);
                int32_t _ws_ext_list_price11980 = tbl_JOIN_INNER_TD_6785_output.getInt32(i, 9);
                tbl_JOIN_INNER_TD_5406_output.setInt32(r, 9, _d_year11995);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id11938_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name11945_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name11946_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag11947_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country11951_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login11952_n);
                tbl_JOIN_INNER_TD_5406_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address11953_n);
                tbl_JOIN_INNER_TD_5406_output.setInt32(r, 7, _ws_ext_discount_amt11977);
                tbl_JOIN_INNER_TD_5406_output.setInt32(r, 8, _ws_ext_list_price11980);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5406_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5406_output #Row: " << tbl_JOIN_INNER_TD_5406_output.getNumRow() << std::endl;
}

void SW_Project_TD_5468(Table &tbl_Filter_TD_6665_output, Table &tbl_Project_TD_5468_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(customer_id#10367 AS customer_id#11858, year_total#10375 AS year_total#11866)
    // Input: ListBuffer(customer_id#10367, year_total#10375)
    // Output: ListBuffer(customer_id#11858, year_total#11866)
    int nrow1 = tbl_Filter_TD_6665_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10367 = tbl_Filter_TD_6665_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _year_total10375 = tbl_Filter_TD_6665_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_id11858 = _customer_id10367;
        tbl_Project_TD_5468_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id11858);
        int32_t _year_total11866 = _year_total10375;
        tbl_Project_TD_5468_output.setInt32(i, 1, _year_total11866);
    }
    tbl_Project_TD_5468_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5468_output #Row: " << tbl_Project_TD_5468_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5299_key_leftMajor {
    std::string _customer_id10357;
    bool operator==(const SW_JOIN_INNER_TD_5299_key_leftMajor& other) const {
        return ((_customer_id10357 == other._customer_id10357));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5299_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5299_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id10357));
    }
};
}
struct SW_JOIN_INNER_TD_5299_payload_leftMajor {
    std::string _customer_id10357;
    int32_t _year_total10365;
};
struct SW_JOIN_INNER_TD_5299_key_rightMajor {
    std::string _customer_id10425;
    bool operator==(const SW_JOIN_INNER_TD_5299_key_rightMajor& other) const {
        return ((_customer_id10425 == other._customer_id10425));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5299_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5299_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id10425));
    }
};
}
struct SW_JOIN_INNER_TD_5299_payload_rightMajor {
    std::string _customer_id10425;
    std::string _customer_first_name10426;
    std::string _customer_last_name10427;
    std::string _customer_preferred_cust_flag10428;
    int32_t _year_total10433;
};
void SW_JOIN_INNER_TD_5299(Table &tbl_Filter_TD_6829_output, Table &tbl_Aggregate_TD_6948_output, Table &tbl_JOIN_INNER_TD_5299_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#10425 = customer_id#10357))
    // Left Table: ListBuffer(customer_id#10357, year_total#10365)
    // Right Table: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428, year_total#10433)
    // Output Table: ListBuffer(customer_id#10357, year_total#10365, customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428, year_total#10433)
    int left_nrow = tbl_Filter_TD_6829_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6948_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5299_key_leftMajor, SW_JOIN_INNER_TD_5299_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6829_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_k_n = tbl_Filter_TD_6829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357_k = std::string(_customer_id10357_k_n.data());
            SW_JOIN_INNER_TD_5299_key_leftMajor keyA{_customer_id10357_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n = tbl_Filter_TD_6829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357 = std::string(_customer_id10357_n.data());
            int32_t _year_total10365 = tbl_Filter_TD_6829_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5299_payload_leftMajor payloadA{_customer_id10357, _year_total10365};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6948_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_k_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10425_k = std::string(_customer_id10425_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5299_key_leftMajor{_customer_id10425_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id10357 = (it->second)._customer_id10357;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n{};
                memcpy(_customer_id10357_n.data(), (_customer_id10357).data(), (_customer_id10357).length());
                int32_t _year_total10365 = (it->second)._year_total10365;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id10425 = std::string(_customer_id10425_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_first_name10426 = std::string(_customer_first_name10426_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_last_name10427 = std::string(_customer_last_name10427_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_preferred_cust_flag10428 = std::string(_customer_preferred_cust_flag10428_n.data());
                int32_t _year_total10433 = tbl_Aggregate_TD_6948_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10357_n);
                tbl_JOIN_INNER_TD_5299_output.setInt32(r, 1, _year_total10365);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id10425_n);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name10426_n);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name10427_n);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag10428_n);
                tbl_JOIN_INNER_TD_5299_output.setInt32(r, 6, _year_total10433);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5299_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5299_key_rightMajor, SW_JOIN_INNER_TD_5299_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6948_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_k_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10425_k = std::string(_customer_id10425_k_n.data());
            SW_JOIN_INNER_TD_5299_key_rightMajor keyA{_customer_id10425_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10425 = std::string(_customer_id10425_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_first_name10426 = std::string(_customer_first_name10426_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_last_name10427 = std::string(_customer_last_name10427_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n = tbl_Aggregate_TD_6948_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_preferred_cust_flag10428 = std::string(_customer_preferred_cust_flag10428_n.data());
            int32_t _year_total10433 = tbl_Aggregate_TD_6948_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5299_payload_rightMajor payloadA{_customer_id10425, _customer_first_name10426, _customer_last_name10427, _customer_preferred_cust_flag10428, _year_total10433};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6829_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_k_n = tbl_Filter_TD_6829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357_k = std::string(_customer_id10357_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5299_key_rightMajor{_customer_id10357_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id10425 = (it->second)._customer_id10425;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n{};
                memcpy(_customer_id10425_n.data(), (_customer_id10425).data(), (_customer_id10425).length());
                std::string _customer_first_name10426 = (it->second)._customer_first_name10426;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n{};
                memcpy(_customer_first_name10426_n.data(), (_customer_first_name10426).data(), (_customer_first_name10426).length());
                std::string _customer_last_name10427 = (it->second)._customer_last_name10427;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n{};
                memcpy(_customer_last_name10427_n.data(), (_customer_last_name10427).data(), (_customer_last_name10427).length());
                std::string _customer_preferred_cust_flag10428 = (it->second)._customer_preferred_cust_flag10428;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n{};
                memcpy(_customer_preferred_cust_flag10428_n.data(), (_customer_preferred_cust_flag10428).data(), (_customer_preferred_cust_flag10428).length());
                int32_t _year_total10433 = (it->second)._year_total10433;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n = tbl_Filter_TD_6829_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id10357 = std::string(_customer_id10357_n.data());
                int32_t _year_total10365 = tbl_Filter_TD_6829_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id10425_n);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name10426_n);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name10427_n);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag10428_n);
                tbl_JOIN_INNER_TD_5299_output.setInt32(r, 6, _year_total10433);
                tbl_JOIN_INNER_TD_5299_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10357_n);
                tbl_JOIN_INNER_TD_5299_output.setInt32(r, 1, _year_total10365);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5299_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5299_output #Row: " << tbl_JOIN_INNER_TD_5299_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4636_key {
    std::string _c_customer_id11938;
    std::string _c_first_name11945;
    std::string _c_last_name11946;
    std::string _c_preferred_cust_flag11947;
    std::string _c_birth_country11951;
    std::string _c_login11952;
    std::string _c_email_address11953;
    int32_t _d_year11995;
    bool operator==(const SW_Aggregate_TD_4636_key& other) const { return (_c_customer_id11938 == other._c_customer_id11938) && (_c_first_name11945 == other._c_first_name11945) && (_c_last_name11946 == other._c_last_name11946) && (_c_preferred_cust_flag11947 == other._c_preferred_cust_flag11947) && (_c_birth_country11951 == other._c_birth_country11951) && (_c_login11952 == other._c_login11952) && (_c_email_address11953 == other._c_email_address11953) && (_d_year11995 == other._d_year11995); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4636_key> {
    std::size_t operator() (const SW_Aggregate_TD_4636_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id11938)) + (hash<string>()(k._c_first_name11945)) + (hash<string>()(k._c_last_name11946)) + (hash<string>()(k._c_preferred_cust_flag11947)) + (hash<string>()(k._c_birth_country11951)) + (hash<string>()(k._c_login11952)) + (hash<string>()(k._c_email_address11953)) + (hash<int32_t>()(k._d_year11995));
    }
};
}
struct SW_Aggregate_TD_4636_payload {
    std::string _customer_id10445;
    int32_t _year_total10453_sum_0;
};
void SW_Aggregate_TD_4636(Table &tbl_JOIN_INNER_TD_5406_output, Table &tbl_Aggregate_TD_4636_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#11938, c_first_name#11945, c_last_name#11946, c_preferred_cust_flag#11947, c_birth_country#11951, c_login#11952, c_email_address#11953, d_year#11995, c_customer_id#11938 AS customer_id#10445, MakeDecimal(sum(UnscaledValue(CheckOverflow((promote_precision(cast(ws_ext_list_price#11980 as decimal(8,2))) - promote_precision(cast(ws_ext_discount_amt#11977 as decimal(8,2)))), DecimalType(8,2), true))),18,2) AS year_total#10453)
    // Input: ListBuffer(c_customer_id#11938, c_first_name#11945, c_last_name#11946, c_preferred_cust_flag#11947, c_birth_country#11951, c_login#11952, c_email_address#11953, ws_ext_discount_amt#11977, ws_ext_list_price#11980, d_year#11995)
    // Output: ListBuffer(customer_id#10445, year_total#10453)
    std::unordered_map<SW_Aggregate_TD_4636_key, SW_Aggregate_TD_4636_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5406_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id11938 = tbl_JOIN_INNER_TD_5406_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name11945 = tbl_JOIN_INNER_TD_5406_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name11946 = tbl_JOIN_INNER_TD_5406_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag11947 = tbl_JOIN_INNER_TD_5406_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country11951 = tbl_JOIN_INNER_TD_5406_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login11952 = tbl_JOIN_INNER_TD_5406_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address11953 = tbl_JOIN_INNER_TD_5406_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ws_ext_discount_amt11977 = tbl_JOIN_INNER_TD_5406_output.getInt32(i, 7);
        int32_t _ws_ext_list_price11980 = tbl_JOIN_INNER_TD_5406_output.getInt32(i, 8);
        int32_t _d_year11995 = tbl_JOIN_INNER_TD_5406_output.getInt32(i, 9);
        SW_Aggregate_TD_4636_key k{std::string(_c_customer_id11938.data()), std::string(_c_first_name11945.data()), std::string(_c_last_name11946.data()), std::string(_c_preferred_cust_flag11947.data()), std::string(_c_birth_country11951.data()), std::string(_c_login11952.data()), std::string(_c_email_address11953.data()), _d_year11995};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10445 = _c_customer_id11938;
        int64_t _year_total10453_sum_0 = (_ws_ext_list_price11980 - _ws_ext_discount_amt11977);
        SW_Aggregate_TD_4636_payload p{std::string(_customer_id10445.data()), _year_total10453_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total10453_sum_0 + _year_total10453_sum_0;
            p._year_total10453_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id11938 not required in the output table
        // _c_first_name11945 not required in the output table
        // _c_last_name11946 not required in the output table
        // _c_preferred_cust_flag11947 not required in the output table
        // _c_birth_country11951 not required in the output table
        // _c_login11952 not required in the output table
        // _c_email_address11953 not required in the output table
        // _d_year11995 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10445_n{};
        memcpy(_customer_id10445_n.data(), (it.second)._customer_id10445.data(), (it.second)._customer_id10445.length());
        tbl_Aggregate_TD_4636_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10445_n);
        int32_t _year_total10453 = (it.second)._year_total10453_sum_0;
        tbl_Aggregate_TD_4636_output.setInt32(r, 1, _year_total10453);
        ++r;
    }
    tbl_Aggregate_TD_4636_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4636_output #Row: " << tbl_Aggregate_TD_4636_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4599_key_leftMajor {
    std::string _customer_id10357;
    bool operator==(const SW_JOIN_INNER_TD_4599_key_leftMajor& other) const {
        return ((_customer_id10357 == other._customer_id10357));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4599_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4599_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id10357));
    }
};
}
struct SW_JOIN_INNER_TD_4599_payload_leftMajor {
    std::string _customer_id10357;
    int32_t _year_total10365;
    std::string _customer_id10425;
    std::string _customer_first_name10426;
    std::string _customer_last_name10427;
    std::string _customer_preferred_cust_flag10428;
    int32_t _year_total10433;
};
struct SW_JOIN_INNER_TD_4599_key_rightMajor {
    std::string _customer_id11858;
    bool operator==(const SW_JOIN_INNER_TD_4599_key_rightMajor& other) const {
        return ((_customer_id11858 == other._customer_id11858));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4599_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4599_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id11858));
    }
};
}
struct SW_JOIN_INNER_TD_4599_payload_rightMajor {
    std::string _customer_id11858;
    int32_t _year_total11866;
};
void SW_JOIN_INNER_TD_4599(Table &tbl_JOIN_INNER_TD_5299_output, Table &tbl_Project_TD_5468_output, Table &tbl_JOIN_INNER_TD_4599_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#10357 = customer_id#11858))
    // Left Table: ListBuffer(customer_id#10357, year_total#10365, customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428, year_total#10433)
    // Right Table: ListBuffer(customer_id#11858, year_total#11866)
    // Output Table: ListBuffer(customer_id#10357, year_total#10365, customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428, year_total#10433, year_total#11866)
    int left_nrow = tbl_JOIN_INNER_TD_5299_output.getNumRow();
    int right_nrow = tbl_Project_TD_5468_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4599_key_leftMajor, SW_JOIN_INNER_TD_4599_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5299_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_k_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357_k = std::string(_customer_id10357_k_n.data());
            SW_JOIN_INNER_TD_4599_key_leftMajor keyA{_customer_id10357_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357 = std::string(_customer_id10357_n.data());
            int32_t _year_total10365 = tbl_JOIN_INNER_TD_5299_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id10425 = std::string(_customer_id10425_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name10426 = std::string(_customer_first_name10426_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name10427 = std::string(_customer_last_name10427_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _customer_preferred_cust_flag10428 = std::string(_customer_preferred_cust_flag10428_n.data());
            int32_t _year_total10433 = tbl_JOIN_INNER_TD_5299_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_4599_payload_leftMajor payloadA{_customer_id10357, _year_total10365, _customer_id10425, _customer_first_name10426, _customer_last_name10427, _customer_preferred_cust_flag10428, _year_total10433};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5468_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id11858_k_n = tbl_Project_TD_5468_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id11858_k = std::string(_customer_id11858_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4599_key_leftMajor{_customer_id11858_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id10357 = (it->second)._customer_id10357;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n{};
                memcpy(_customer_id10357_n.data(), (_customer_id10357).data(), (_customer_id10357).length());
                int32_t _year_total10365 = (it->second)._year_total10365;
                std::string _customer_id10425 = (it->second)._customer_id10425;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n{};
                memcpy(_customer_id10425_n.data(), (_customer_id10425).data(), (_customer_id10425).length());
                std::string _customer_first_name10426 = (it->second)._customer_first_name10426;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n{};
                memcpy(_customer_first_name10426_n.data(), (_customer_first_name10426).data(), (_customer_first_name10426).length());
                std::string _customer_last_name10427 = (it->second)._customer_last_name10427;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n{};
                memcpy(_customer_last_name10427_n.data(), (_customer_last_name10427).data(), (_customer_last_name10427).length());
                std::string _customer_preferred_cust_flag10428 = (it->second)._customer_preferred_cust_flag10428;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n{};
                memcpy(_customer_preferred_cust_flag10428_n.data(), (_customer_preferred_cust_flag10428).data(), (_customer_preferred_cust_flag10428).length());
                int32_t _year_total10433 = (it->second)._year_total10433;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id11858_n = tbl_Project_TD_5468_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id11858 = std::string(_customer_id11858_n.data());
                int32_t _year_total11866 = tbl_Project_TD_5468_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10357_n);
                tbl_JOIN_INNER_TD_4599_output.setInt32(r, 1, _year_total10365);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id10425_n);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name10426_n);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name10427_n);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag10428_n);
                tbl_JOIN_INNER_TD_4599_output.setInt32(r, 6, _year_total10433);
                tbl_JOIN_INNER_TD_4599_output.setInt32(r, 7, _year_total11866);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4599_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4599_key_rightMajor, SW_JOIN_INNER_TD_4599_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5468_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id11858_k_n = tbl_Project_TD_5468_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id11858_k = std::string(_customer_id11858_k_n.data());
            SW_JOIN_INNER_TD_4599_key_rightMajor keyA{_customer_id11858_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id11858_n = tbl_Project_TD_5468_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id11858 = std::string(_customer_id11858_n.data());
            int32_t _year_total11866 = tbl_Project_TD_5468_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4599_payload_rightMajor payloadA{_customer_id11858, _year_total11866};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5299_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_k_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357_k = std::string(_customer_id10357_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4599_key_rightMajor{_customer_id10357_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id11858 = (it->second)._customer_id11858;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id11858_n{};
                memcpy(_customer_id11858_n.data(), (_customer_id11858).data(), (_customer_id11858).length());
                int32_t _year_total11866 = (it->second)._year_total11866;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id10357 = std::string(_customer_id10357_n.data());
                int32_t _year_total10365 = tbl_JOIN_INNER_TD_5299_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id10425 = std::string(_customer_id10425_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name10426 = std::string(_customer_first_name10426_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name10427 = std::string(_customer_last_name10427_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n = tbl_JOIN_INNER_TD_5299_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _customer_preferred_cust_flag10428 = std::string(_customer_preferred_cust_flag10428_n.data());
                int32_t _year_total10433 = tbl_JOIN_INNER_TD_5299_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_4599_output.setInt32(r, 7, _year_total11866);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10357_n);
                tbl_JOIN_INNER_TD_4599_output.setInt32(r, 1, _year_total10365);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id10425_n);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name10426_n);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name10427_n);
                tbl_JOIN_INNER_TD_4599_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag10428_n);
                tbl_JOIN_INNER_TD_4599_output.setInt32(r, 6, _year_total10433);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4599_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4599_output #Row: " << tbl_JOIN_INNER_TD_4599_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3532_key_leftMajor {
    std::string _customer_id10357;
    bool operator==(const SW_JOIN_INNER_TD_3532_key_leftMajor& other) const {
        return ((_customer_id10357 == other._customer_id10357));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3532_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3532_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id10357));
    }
};
}
struct SW_JOIN_INNER_TD_3532_payload_leftMajor {
    std::string _customer_id10357;
    int32_t _year_total10365;
    std::string _customer_id10425;
    std::string _customer_first_name10426;
    std::string _customer_last_name10427;
    std::string _customer_preferred_cust_flag10428;
    int32_t _year_total10433;
    int32_t _year_total11866;
};
struct SW_JOIN_INNER_TD_3532_key_rightMajor {
    std::string _customer_id10445;
    bool operator==(const SW_JOIN_INNER_TD_3532_key_rightMajor& other) const {
        return ((_customer_id10445 == other._customer_id10445));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3532_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3532_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id10445));
    }
};
}
struct SW_JOIN_INNER_TD_3532_payload_rightMajor {
    std::string _customer_id10445;
    int32_t _year_total10453;
};
void SW_JOIN_INNER_TD_3532(Table &tbl_JOIN_INNER_TD_4599_output, Table &tbl_Aggregate_TD_4636_output, Table &tbl_JOIN_INNER_TD_3532_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((customer_id#10357 = customer_id#10445) AND (CASE WHEN (year_total#11866 > 0.00) THEN CheckOverflow((promote_precision(year_total#10453) / promote_precision(year_total#11866)), DecimalType(38,20), true) ELSE 0E-20 END > CASE WHEN (year_total#10365 > 0.00) THEN CheckOverflow((promote_precision(year_total#10433) / promote_precision(year_total#10365)), DecimalType(38,20), true) ELSE 0E-20 END)))
    // Left Table: ListBuffer(customer_id#10357, year_total#10365, customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428, year_total#10433, year_total#11866)
    // Right Table: ListBuffer(customer_id#10445, year_total#10453)
    // Output Table: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428)
    int left_nrow = tbl_JOIN_INNER_TD_4599_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4636_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3532_key_leftMajor, SW_JOIN_INNER_TD_3532_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4599_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_k_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357_k = std::string(_customer_id10357_k_n.data());
            SW_JOIN_INNER_TD_3532_key_leftMajor keyA{_customer_id10357_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357 = std::string(_customer_id10357_n.data());
            int32_t _year_total10365 = tbl_JOIN_INNER_TD_4599_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id10425 = std::string(_customer_id10425_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name10426 = std::string(_customer_first_name10426_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name10427 = std::string(_customer_last_name10427_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _customer_preferred_cust_flag10428 = std::string(_customer_preferred_cust_flag10428_n.data());
            int32_t _year_total10433 = tbl_JOIN_INNER_TD_4599_output.getInt32(i, 6);
            int32_t _year_total11866 = tbl_JOIN_INNER_TD_4599_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_3532_payload_leftMajor payloadA{_customer_id10357, _year_total10365, _customer_id10425, _customer_first_name10426, _customer_last_name10427, _customer_preferred_cust_flag10428, _year_total10433, _year_total11866};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_4636_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10445_k_n = tbl_Aggregate_TD_4636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10445_k = std::string(_customer_id10445_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3532_key_leftMajor{_customer_id10445_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id10357 = (it->second)._customer_id10357;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n{};
                memcpy(_customer_id10357_n.data(), (_customer_id10357).data(), (_customer_id10357).length());
                int32_t _year_total10365 = (it->second)._year_total10365;
                std::string _customer_id10425 = (it->second)._customer_id10425;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n{};
                memcpy(_customer_id10425_n.data(), (_customer_id10425).data(), (_customer_id10425).length());
                std::string _customer_first_name10426 = (it->second)._customer_first_name10426;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n{};
                memcpy(_customer_first_name10426_n.data(), (_customer_first_name10426).data(), (_customer_first_name10426).length());
                std::string _customer_last_name10427 = (it->second)._customer_last_name10427;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n{};
                memcpy(_customer_last_name10427_n.data(), (_customer_last_name10427).data(), (_customer_last_name10427).length());
                std::string _customer_preferred_cust_flag10428 = (it->second)._customer_preferred_cust_flag10428;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n{};
                memcpy(_customer_preferred_cust_flag10428_n.data(), (_customer_preferred_cust_flag10428).data(), (_customer_preferred_cust_flag10428).length());
                int32_t _year_total10433 = (it->second)._year_total10433;
                int32_t _year_total11866 = (it->second)._year_total11866;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10445_n = tbl_Aggregate_TD_4636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id10445 = std::string(_customer_id10445_n.data());
                int32_t _year_total10453 = tbl_Aggregate_TD_4636_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3532_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10425_n);
                tbl_JOIN_INNER_TD_3532_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name10426_n);
                tbl_JOIN_INNER_TD_3532_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name10427_n);
                tbl_JOIN_INNER_TD_3532_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag10428_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3532_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3532_key_rightMajor, SW_JOIN_INNER_TD_3532_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_4636_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10445_k_n = tbl_Aggregate_TD_4636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10445_k = std::string(_customer_id10445_k_n.data());
            SW_JOIN_INNER_TD_3532_key_rightMajor keyA{_customer_id10445_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10445_n = tbl_Aggregate_TD_4636_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10445 = std::string(_customer_id10445_n.data());
            int32_t _year_total10453 = tbl_Aggregate_TD_4636_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3532_payload_rightMajor payloadA{_customer_id10445, _year_total10453};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4599_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_k_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id10357_k = std::string(_customer_id10357_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3532_key_rightMajor{_customer_id10357_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id10445 = (it->second)._customer_id10445;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10445_n{};
                memcpy(_customer_id10445_n.data(), (_customer_id10445).data(), (_customer_id10445).length());
                int32_t _year_total10453 = (it->second)._year_total10453;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10357_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id10357 = std::string(_customer_id10357_n.data());
                int32_t _year_total10365 = tbl_JOIN_INNER_TD_4599_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id10425 = std::string(_customer_id10425_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name10426 = std::string(_customer_first_name10426_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name10427 = std::string(_customer_last_name10427_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n = tbl_JOIN_INNER_TD_4599_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _customer_preferred_cust_flag10428 = std::string(_customer_preferred_cust_flag10428_n.data());
                int32_t _year_total10433 = tbl_JOIN_INNER_TD_4599_output.getInt32(i, 6);
                int32_t _year_total11866 = tbl_JOIN_INNER_TD_4599_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_3532_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10425_n);
                tbl_JOIN_INNER_TD_3532_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name10426_n);
                tbl_JOIN_INNER_TD_3532_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name10427_n);
                tbl_JOIN_INNER_TD_3532_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag10428_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3532_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3532_output #Row: " << tbl_JOIN_INNER_TD_3532_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2729(Table &tbl_JOIN_INNER_TD_3532_output, Table &tbl_Sort_TD_2729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(customer_id#10425 ASC NULLS FIRST, customer_first_name#10426 ASC NULLS FIRST, customer_last_name#10427 ASC NULLS FIRST, customer_preferred_cust_flag#10428 ASC NULLS FIRST)
    // Input: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428)
    // Output: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428)
    struct SW_Sort_TD_2729Row {
        std::string _customer_id10425;
        std::string _customer_first_name10426;
        std::string _customer_last_name10427;
        std::string _customer_preferred_cust_flag10428;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2729Row& a, const SW_Sort_TD_2729Row& b) const { return 
 (a._customer_id10425 < b._customer_id10425) || 
 ((a._customer_id10425 == b._customer_id10425) && (a._customer_first_name10426 < b._customer_first_name10426)) || 
 ((a._customer_id10425 == b._customer_id10425) && (a._customer_first_name10426 == b._customer_first_name10426) && (a._customer_last_name10427 < b._customer_last_name10427)) || 
 ((a._customer_id10425 == b._customer_id10425) && (a._customer_first_name10426 == b._customer_first_name10426) && (a._customer_last_name10427 == b._customer_last_name10427) && (a._customer_preferred_cust_flag10428 < b._customer_preferred_cust_flag10428)); 
}
    }SW_Sort_TD_2729_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3532_output.getNumRow();
    std::vector<SW_Sort_TD_2729Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10425 = tbl_JOIN_INNER_TD_3532_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426 = tbl_JOIN_INNER_TD_3532_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427 = tbl_JOIN_INNER_TD_3532_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428 = tbl_JOIN_INNER_TD_3532_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        SW_Sort_TD_2729Row t = {std::string(_customer_id10425.data()),std::string(_customer_first_name10426.data()),std::string(_customer_last_name10427.data()),std::string(_customer_preferred_cust_flag10428.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2729_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10425{};
        memcpy(_customer_id10425.data(), (it._customer_id10425).data(), (it._customer_id10425).length());
        tbl_Sort_TD_2729_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _customer_id10425);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426{};
        memcpy(_customer_first_name10426.data(), (it._customer_first_name10426).data(), (it._customer_first_name10426).length());
        tbl_Sort_TD_2729_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _customer_first_name10426);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427{};
        memcpy(_customer_last_name10427.data(), (it._customer_last_name10427).data(), (it._customer_last_name10427).length());
        tbl_Sort_TD_2729_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _customer_last_name10427);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428{};
        memcpy(_customer_preferred_cust_flag10428.data(), (it._customer_preferred_cust_flag10428).data(), (it._customer_preferred_cust_flag10428).length());
        tbl_Sort_TD_2729_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _customer_preferred_cust_flag10428);
        ++r;
    }
    tbl_Sort_TD_2729_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2729_output #Row: " << tbl_Sort_TD_2729_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1105(Table &tbl_Sort_TD_2729_output, Table &tbl_LocalLimit_TD_1105_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428)
    // Output: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n = tbl_Sort_TD_2729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1105_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10425_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n = tbl_Sort_TD_2729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1105_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name10426_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n = tbl_Sort_TD_2729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1105_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name10427_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n = tbl_Sort_TD_2729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1105_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag10428_n);
        r++;
    }
    tbl_LocalLimit_TD_1105_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1105_output #Row: " << tbl_LocalLimit_TD_1105_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0138(Table &tbl_LocalLimit_TD_1105_output, Table &tbl_GlobalLimit_TD_0138_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428)
    // Output: ListBuffer(customer_id#10425, customer_first_name#10426, customer_last_name#10427, customer_preferred_cust_flag#10428)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id10425_n = tbl_LocalLimit_TD_1105_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0138_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id10425_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name10426_n = tbl_LocalLimit_TD_1105_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0138_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name10426_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name10427_n = tbl_LocalLimit_TD_1105_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0138_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name10427_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag10428_n = tbl_LocalLimit_TD_1105_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0138_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag10428_n);
        r++;
    }
    tbl_GlobalLimit_TD_0138_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0138_output #Row: " << tbl_GlobalLimit_TD_0138_output.getNumRow() << std::endl;
}

