#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_12470(Table &tbl_SerializeFromObject_TD_13728_input, Table &tbl_Filter_TD_12470_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_bill_customer_sk#7410) AND isnotnull(cs_sold_date_sk#7407)))
    // Input: ListBuffer(cs_sold_date_sk#7407, cs_bill_customer_sk#7410, cs_ext_discount_amt#7429, cs_ext_sales_price#7430, cs_ext_wholesale_cost#7431, cs_ext_list_price#7432)
    // Output: ListBuffer(cs_sold_date_sk#7407, cs_bill_customer_sk#7410, cs_ext_discount_amt#7429, cs_ext_sales_price#7430, cs_ext_wholesale_cost#7431, cs_ext_list_price#7432)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13728_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk7410 = tbl_SerializeFromObject_TD_13728_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk7407 = tbl_SerializeFromObject_TD_13728_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk7407_t = tbl_SerializeFromObject_TD_13728_input.getInt32(i, 0);
            tbl_Filter_TD_12470_output.setInt32(r, 0, _cs_sold_date_sk7407_t);
            int32_t _cs_bill_customer_sk7410_t = tbl_SerializeFromObject_TD_13728_input.getInt32(i, 1);
            tbl_Filter_TD_12470_output.setInt32(r, 1, _cs_bill_customer_sk7410_t);
            int32_t _cs_ext_discount_amt7429_t = tbl_SerializeFromObject_TD_13728_input.getInt32(i, 2);
            tbl_Filter_TD_12470_output.setInt32(r, 2, _cs_ext_discount_amt7429_t);
            int32_t _cs_ext_sales_price7430_t = tbl_SerializeFromObject_TD_13728_input.getInt32(i, 3);
            tbl_Filter_TD_12470_output.setInt32(r, 3, _cs_ext_sales_price7430_t);
            int32_t _cs_ext_wholesale_cost7431_t = tbl_SerializeFromObject_TD_13728_input.getInt32(i, 4);
            tbl_Filter_TD_12470_output.setInt32(r, 4, _cs_ext_wholesale_cost7431_t);
            int32_t _cs_ext_list_price7432_t = tbl_SerializeFromObject_TD_13728_input.getInt32(i, 5);
            tbl_Filter_TD_12470_output.setInt32(r, 5, _cs_ext_list_price7432_t);
            r++;
        }
    }
    tbl_Filter_TD_12470_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12470_output #Row: " << tbl_Filter_TD_12470_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12980(Table &tbl_SerializeFromObject_TD_13104_input, Table &tbl_Filter_TD_12980_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#7389) AND isnotnull(c_customer_id#7390)))
    // Input: ListBuffer(c_customer_sk#7389, c_customer_id#7390, c_first_name#7397, c_last_name#7398, c_preferred_cust_flag#7399, c_birth_country#7403, c_login#7404, c_email_address#7405)
    // Output: ListBuffer(c_customer_sk#7389, c_customer_id#7390, c_first_name#7397, c_last_name#7398, c_preferred_cust_flag#7399, c_birth_country#7403, c_login#7404, c_email_address#7405)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13104_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7389 = tbl_SerializeFromObject_TD_13104_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390 = tbl_SerializeFromObject_TD_13104_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _c_customer_sk7389_t = tbl_SerializeFromObject_TD_13104_input.getInt32(i, 0);
            tbl_Filter_TD_12980_output.setInt32(r, 0, _c_customer_sk7389_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390_t = tbl_SerializeFromObject_TD_13104_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id7390_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7397_t = tbl_SerializeFromObject_TD_13104_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name7397_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7398_t = tbl_SerializeFromObject_TD_13104_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_12980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name7398_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7399_t = tbl_SerializeFromObject_TD_13104_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_12980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag7399_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7403_t = tbl_SerializeFromObject_TD_13104_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_12980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country7403_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login7404_t = tbl_SerializeFromObject_TD_13104_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_12980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login7404_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7405_t = tbl_SerializeFromObject_TD_13104_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_12980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address7405_t);
            r++;
        }
    }
    tbl_Filter_TD_12980_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12980_output #Row: " << tbl_Filter_TD_12980_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12522(Table &tbl_SerializeFromObject_TD_13801_input, Table &tbl_Filter_TD_12522_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13801_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_13801_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_13801_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_13801_input.getInt32(i, 0);
            tbl_Filter_TD_12522_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_13801_input.getInt32(i, 1);
            tbl_Filter_TD_12522_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_ext_discount_amt1220_t = tbl_SerializeFromObject_TD_13801_input.getInt32(i, 2);
            tbl_Filter_TD_12522_output.setInt32(r, 2, _ss_ext_discount_amt1220_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_13801_input.getInt32(i, 3);
            tbl_Filter_TD_12522_output.setInt32(r, 3, _ss_ext_sales_price1221_t);
            int32_t _ss_ext_wholesale_cost1222_t = tbl_SerializeFromObject_TD_13801_input.getInt32(i, 4);
            tbl_Filter_TD_12522_output.setInt32(r, 4, _ss_ext_wholesale_cost1222_t);
            int32_t _ss_ext_list_price1223_t = tbl_SerializeFromObject_TD_13801_input.getInt32(i, 5);
            tbl_Filter_TD_12522_output.setInt32(r, 5, _ss_ext_list_price1223_t);
            r++;
        }
    }
    tbl_Filter_TD_12522_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12522_output #Row: " << tbl_Filter_TD_12522_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12338(Table &tbl_SerializeFromObject_TD_13917_input, Table &tbl_Filter_TD_12338_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_customer_id#1)))
    // Input: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    // Output: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13917_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_13917_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_SerializeFromObject_TD_13917_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_13917_input.getInt32(i, 0);
            tbl_Filter_TD_12338_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_13917_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12338_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_13917_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12338_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_13917_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_12338_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_t = tbl_SerializeFromObject_TD_13917_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_12338_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag10_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_t = tbl_SerializeFromObject_TD_13917_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_12338_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country14_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_t = tbl_SerializeFromObject_TD_13917_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_12338_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login15_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_t = tbl_SerializeFromObject_TD_13917_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_12338_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address16_t);
            r++;
        }
    }
    tbl_Filter_TD_12338_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12338_output #Row: " << tbl_Filter_TD_12338_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11182(Table &tbl_SerializeFromObject_TD_12506_input, Table &tbl_Filter_TD_11182_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#7447) AND (d_year#7447 = 2001)) AND isnotnull(d_date_sk#7441)))
    // Input: ListBuffer(d_date_sk#7441, d_year#7447)
    // Output: ListBuffer(d_date_sk#7441, d_year#7447)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12506_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7447 = tbl_SerializeFromObject_TD_12506_input.getInt32(i, 1);
        int32_t _d_date_sk7441 = tbl_SerializeFromObject_TD_12506_input.getInt32(i, 0);
        if (((1) && (_d_year7447 == 2001)) && (1)) {
            int32_t _d_date_sk7441_t = tbl_SerializeFromObject_TD_12506_input.getInt32(i, 0);
            tbl_Filter_TD_11182_output.setInt32(r, 0, _d_date_sk7441_t);
            int32_t _d_year7447_t = tbl_SerializeFromObject_TD_12506_input.getInt32(i, 1);
            tbl_Filter_TD_11182_output.setInt32(r, 1, _d_year7447_t);
            r++;
        }
    }
    tbl_Filter_TD_11182_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11182_output #Row: " << tbl_Filter_TD_11182_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11672_key_leftMajor {
    int32_t _c_customer_sk7389;
    bool operator==(const SW_JOIN_INNER_TD_11672_key_leftMajor& other) const {
        return ((_c_customer_sk7389 == other._c_customer_sk7389));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11672_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11672_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7389));
    }
};
}
struct SW_JOIN_INNER_TD_11672_payload_leftMajor {
    int32_t _c_customer_sk7389;
    std::string _c_customer_id7390;
    std::string _c_first_name7397;
    std::string _c_last_name7398;
    std::string _c_preferred_cust_flag7399;
    std::string _c_birth_country7403;
    std::string _c_login7404;
    std::string _c_email_address7405;
};
struct SW_JOIN_INNER_TD_11672_key_rightMajor {
    int32_t _cs_bill_customer_sk7410;
    bool operator==(const SW_JOIN_INNER_TD_11672_key_rightMajor& other) const {
        return ((_cs_bill_customer_sk7410 == other._cs_bill_customer_sk7410));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11672_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11672_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk7410));
    }
};
}
struct SW_JOIN_INNER_TD_11672_payload_rightMajor {
    int32_t _cs_sold_date_sk7407;
    int32_t _cs_bill_customer_sk7410;
    int32_t _cs_ext_discount_amt7429;
    int32_t _cs_ext_sales_price7430;
    int32_t _cs_ext_wholesale_cost7431;
    int32_t _cs_ext_list_price7432;
};
void SW_JOIN_INNER_TD_11672(Table &tbl_Filter_TD_12980_output, Table &tbl_Filter_TD_12470_output, Table &tbl_JOIN_INNER_TD_11672_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#7389 = cs_bill_customer_sk#7410))
    // Left Table: ListBuffer(c_customer_sk#7389, c_customer_id#7390, c_first_name#7397, c_last_name#7398, c_preferred_cust_flag#7399, c_birth_country#7403, c_login#7404, c_email_address#7405)
    // Right Table: ListBuffer(cs_sold_date_sk#7407, cs_bill_customer_sk#7410, cs_ext_discount_amt#7429, cs_ext_sales_price#7430, cs_ext_wholesale_cost#7431, cs_ext_list_price#7432)
    // Output Table: ListBuffer(c_customer_id#7390, c_first_name#7397, c_last_name#7398, c_preferred_cust_flag#7399, c_birth_country#7403, c_login#7404, c_email_address#7405, cs_sold_date_sk#7407, cs_ext_discount_amt#7429, cs_ext_sales_price#7430, cs_ext_wholesale_cost#7431, cs_ext_list_price#7432)
    int left_nrow = tbl_Filter_TD_12980_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12470_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11672_key_leftMajor, SW_JOIN_INNER_TD_11672_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12980_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7389_k = tbl_Filter_TD_12980_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11672_key_leftMajor keyA{_c_customer_sk7389_k};
            int32_t _c_customer_sk7389 = tbl_Filter_TD_12980_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id7390 = std::string(_c_customer_id7390_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7397_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name7397 = std::string(_c_first_name7397_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7398_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name7398 = std::string(_c_last_name7398_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7399_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag7399 = std::string(_c_preferred_cust_flag7399_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7403_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country7403 = std::string(_c_birth_country7403_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7404_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login7404 = std::string(_c_login7404_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7405_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address7405 = std::string(_c_email_address7405_n.data());
            SW_JOIN_INNER_TD_11672_payload_leftMajor payloadA{_c_customer_sk7389, _c_customer_id7390, _c_first_name7397, _c_last_name7398, _c_preferred_cust_flag7399, _c_birth_country7403, _c_login7404, _c_email_address7405};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12470_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk7410_k = tbl_Filter_TD_12470_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11672_key_leftMajor{_cs_bill_customer_sk7410_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7389 = (it->second)._c_customer_sk7389;
                std::string _c_customer_id7390 = (it->second)._c_customer_id7390;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390_n{};
                memcpy(_c_customer_id7390_n.data(), (_c_customer_id7390).data(), (_c_customer_id7390).length());
                std::string _c_first_name7397 = (it->second)._c_first_name7397;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7397_n{};
                memcpy(_c_first_name7397_n.data(), (_c_first_name7397).data(), (_c_first_name7397).length());
                std::string _c_last_name7398 = (it->second)._c_last_name7398;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7398_n{};
                memcpy(_c_last_name7398_n.data(), (_c_last_name7398).data(), (_c_last_name7398).length());
                std::string _c_preferred_cust_flag7399 = (it->second)._c_preferred_cust_flag7399;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7399_n{};
                memcpy(_c_preferred_cust_flag7399_n.data(), (_c_preferred_cust_flag7399).data(), (_c_preferred_cust_flag7399).length());
                std::string _c_birth_country7403 = (it->second)._c_birth_country7403;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7403_n{};
                memcpy(_c_birth_country7403_n.data(), (_c_birth_country7403).data(), (_c_birth_country7403).length());
                std::string _c_login7404 = (it->second)._c_login7404;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7404_n{};
                memcpy(_c_login7404_n.data(), (_c_login7404).data(), (_c_login7404).length());
                std::string _c_email_address7405 = (it->second)._c_email_address7405;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7405_n{};
                memcpy(_c_email_address7405_n.data(), (_c_email_address7405).data(), (_c_email_address7405).length());
                int32_t _cs_sold_date_sk7407 = tbl_Filter_TD_12470_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk7410 = tbl_Filter_TD_12470_output.getInt32(i, 1);
                int32_t _cs_ext_discount_amt7429 = tbl_Filter_TD_12470_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price7430 = tbl_Filter_TD_12470_output.getInt32(i, 3);
                int32_t _cs_ext_wholesale_cost7431 = tbl_Filter_TD_12470_output.getInt32(i, 4);
                int32_t _cs_ext_list_price7432 = tbl_Filter_TD_12470_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7390_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7397_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7398_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7399_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7403_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7404_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7405_n);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 7, _cs_sold_date_sk7407);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 8, _cs_ext_discount_amt7429);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 9, _cs_ext_sales_price7430);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 10, _cs_ext_wholesale_cost7431);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 11, _cs_ext_list_price7432);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11672_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11672_key_rightMajor, SW_JOIN_INNER_TD_11672_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12470_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk7410_k = tbl_Filter_TD_12470_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11672_key_rightMajor keyA{_cs_bill_customer_sk7410_k};
            int32_t _cs_sold_date_sk7407 = tbl_Filter_TD_12470_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk7410 = tbl_Filter_TD_12470_output.getInt32(i, 1);
            int32_t _cs_ext_discount_amt7429 = tbl_Filter_TD_12470_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price7430 = tbl_Filter_TD_12470_output.getInt32(i, 3);
            int32_t _cs_ext_wholesale_cost7431 = tbl_Filter_TD_12470_output.getInt32(i, 4);
            int32_t _cs_ext_list_price7432 = tbl_Filter_TD_12470_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11672_payload_rightMajor payloadA{_cs_sold_date_sk7407, _cs_bill_customer_sk7410, _cs_ext_discount_amt7429, _cs_ext_sales_price7430, _cs_ext_wholesale_cost7431, _cs_ext_list_price7432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12980_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7389_k = tbl_Filter_TD_12980_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11672_key_rightMajor{_c_customer_sk7389_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk7407 = (it->second)._cs_sold_date_sk7407;
                int32_t _cs_bill_customer_sk7410 = (it->second)._cs_bill_customer_sk7410;
                int32_t _cs_ext_discount_amt7429 = (it->second)._cs_ext_discount_amt7429;
                int32_t _cs_ext_sales_price7430 = (it->second)._cs_ext_sales_price7430;
                int32_t _cs_ext_wholesale_cost7431 = (it->second)._cs_ext_wholesale_cost7431;
                int32_t _cs_ext_list_price7432 = (it->second)._cs_ext_list_price7432;
                int32_t _c_customer_sk7389 = tbl_Filter_TD_12980_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id7390 = std::string(_c_customer_id7390_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7397_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name7397 = std::string(_c_first_name7397_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7398_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name7398 = std::string(_c_last_name7398_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7399_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag7399 = std::string(_c_preferred_cust_flag7399_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7403_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country7403 = std::string(_c_birth_country7403_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7404_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login7404 = std::string(_c_login7404_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7405_n = tbl_Filter_TD_12980_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address7405 = std::string(_c_email_address7405_n.data());
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 7, _cs_sold_date_sk7407);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 8, _cs_ext_discount_amt7429);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 9, _cs_ext_sales_price7430);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 10, _cs_ext_wholesale_cost7431);
                tbl_JOIN_INNER_TD_11672_output.setInt32(r, 11, _cs_ext_list_price7432);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7390_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7397_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7398_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7399_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7403_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7404_n);
                tbl_JOIN_INNER_TD_11672_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7405_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11672_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11672_output #Row: " << tbl_JOIN_INNER_TD_11672_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11371(Table &tbl_SerializeFromObject_TD_12636_input, Table &tbl_Filter_TD_11371_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#7102) AND isnotnull(ss_sold_date_sk#7099)))
    // Input: ListBuffer(ss_sold_date_sk#7099, ss_customer_sk#7102, ss_ext_discount_amt#7113, ss_ext_sales_price#7114, ss_ext_wholesale_cost#7115, ss_ext_list_price#7116)
    // Output: ListBuffer(ss_sold_date_sk#7099, ss_customer_sk#7102, ss_ext_discount_amt#7113, ss_ext_sales_price#7114, ss_ext_wholesale_cost#7115, ss_ext_list_price#7116)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12636_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk7102 = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk7099 = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk7099_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 0);
            tbl_Filter_TD_11371_output.setInt32(r, 0, _ss_sold_date_sk7099_t);
            int32_t _ss_customer_sk7102_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 1);
            tbl_Filter_TD_11371_output.setInt32(r, 1, _ss_customer_sk7102_t);
            int32_t _ss_ext_discount_amt7113_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 2);
            tbl_Filter_TD_11371_output.setInt32(r, 2, _ss_ext_discount_amt7113_t);
            int32_t _ss_ext_sales_price7114_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 3);
            tbl_Filter_TD_11371_output.setInt32(r, 3, _ss_ext_sales_price7114_t);
            int32_t _ss_ext_wholesale_cost7115_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 4);
            tbl_Filter_TD_11371_output.setInt32(r, 4, _ss_ext_wholesale_cost7115_t);
            int32_t _ss_ext_list_price7116_t = tbl_SerializeFromObject_TD_12636_input.getInt32(i, 5);
            tbl_Filter_TD_11371_output.setInt32(r, 5, _ss_ext_list_price7116_t);
            r++;
        }
    }
    tbl_Filter_TD_11371_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11371_output #Row: " << tbl_Filter_TD_11371_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11530(Table &tbl_SerializeFromObject_TD_12502_input, Table &tbl_Filter_TD_11530_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#7081) AND isnotnull(c_customer_id#7082)))
    // Input: ListBuffer(c_customer_sk#7081, c_customer_id#7082, c_first_name#7089, c_last_name#7090, c_preferred_cust_flag#7091, c_birth_country#7095, c_login#7096, c_email_address#7097)
    // Output: ListBuffer(c_customer_sk#7081, c_customer_id#7082, c_first_name#7089, c_last_name#7090, c_preferred_cust_flag#7091, c_birth_country#7095, c_login#7096, c_email_address#7097)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12502_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7081 = tbl_SerializeFromObject_TD_12502_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082 = tbl_SerializeFromObject_TD_12502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _c_customer_sk7081_t = tbl_SerializeFromObject_TD_12502_input.getInt32(i, 0);
            tbl_Filter_TD_11530_output.setInt32(r, 0, _c_customer_sk7081_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082_t = tbl_SerializeFromObject_TD_12502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11530_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id7082_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7089_t = tbl_SerializeFromObject_TD_12502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_11530_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name7089_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7090_t = tbl_SerializeFromObject_TD_12502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_11530_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name7090_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7091_t = tbl_SerializeFromObject_TD_12502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_11530_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag7091_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7095_t = tbl_SerializeFromObject_TD_12502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_11530_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country7095_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login7096_t = tbl_SerializeFromObject_TD_12502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_11530_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login7096_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7097_t = tbl_SerializeFromObject_TD_12502_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_11530_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address7097_t);
            r++;
        }
    }
    tbl_Filter_TD_11530_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11530_output #Row: " << tbl_Filter_TD_11530_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11531(Table &tbl_SerializeFromObject_TD_12537_input, Table &tbl_Filter_TD_11531_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2001)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12537_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12537_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12537_input.getInt32(i, 0);
        if (((1) && (_d_year126 == 2001)) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12537_input.getInt32(i, 0);
            tbl_Filter_TD_11531_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_12537_input.getInt32(i, 1);
            tbl_Filter_TD_11531_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_11531_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11531_output #Row: " << tbl_Filter_TD_11531_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11514_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_11514_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11514_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11514_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_11514_payload_leftMajor {
    int32_t _c_customer_sk0;
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
};
struct SW_JOIN_INNER_TD_11514_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_11514_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11514_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11514_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_11514_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_ext_discount_amt1220;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_ext_wholesale_cost1222;
    int32_t _ss_ext_list_price1223;
};
void SW_JOIN_INNER_TD_11514(Table &tbl_Filter_TD_12338_output, Table &tbl_Filter_TD_12522_output, Table &tbl_JOIN_INNER_TD_11514_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_sold_date_sk#1206, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    int left_nrow = tbl_Filter_TD_12338_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12522_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11514_key_leftMajor, SW_JOIN_INNER_TD_11514_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12338_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_12338_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11514_key_leftMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_12338_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login15 = std::string(_c_login15_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address16 = std::string(_c_email_address16_n.data());
            SW_JOIN_INNER_TD_11514_payload_leftMajor payloadA{_c_customer_sk0, _c_customer_id1, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10, _c_birth_country14, _c_login15, _c_email_address16};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12522_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_12522_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11514_key_leftMajor{_ss_customer_sk1209_k});
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
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12522_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_12522_output.getInt32(i, 1);
                int32_t _ss_ext_discount_amt1220 = tbl_Filter_TD_12522_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_12522_output.getInt32(i, 3);
                int32_t _ss_ext_wholesale_cost1222 = tbl_Filter_TD_12522_output.getInt32(i, 4);
                int32_t _ss_ext_list_price1223 = tbl_Filter_TD_12522_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 7, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 8, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 9, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 10, _ss_ext_wholesale_cost1222);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 11, _ss_ext_list_price1223);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11514_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11514_key_rightMajor, SW_JOIN_INNER_TD_11514_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12522_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_12522_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11514_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12522_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_12522_output.getInt32(i, 1);
            int32_t _ss_ext_discount_amt1220 = tbl_Filter_TD_12522_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_12522_output.getInt32(i, 3);
            int32_t _ss_ext_wholesale_cost1222 = tbl_Filter_TD_12522_output.getInt32(i, 4);
            int32_t _ss_ext_list_price1223 = tbl_Filter_TD_12522_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11514_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_ext_discount_amt1220, _ss_ext_sales_price1221, _ss_ext_wholesale_cost1222, _ss_ext_list_price1223};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12338_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_12338_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11514_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_ext_discount_amt1220 = (it->second)._ss_ext_discount_amt1220;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_ext_wholesale_cost1222 = (it->second)._ss_ext_wholesale_cost1222;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _c_customer_sk0 = tbl_Filter_TD_12338_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login15 = std::string(_c_login15_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Filter_TD_12338_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address16 = std::string(_c_email_address16_n.data());
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 7, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 8, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 9, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 10, _ss_ext_wholesale_cost1222);
                tbl_JOIN_INNER_TD_11514_output.setInt32(r, 11, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_11514_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11514_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11514_output #Row: " << tbl_JOIN_INNER_TD_11514_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10745(Table &tbl_SerializeFromObject_TD_1168_input, Table &tbl_Filter_TD_10745_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#7969) AND isnotnull(ws_sold_date_sk#7965)))
    // Input: ListBuffer(ws_sold_date_sk#7965, ws_bill_customer_sk#7969, ws_ext_discount_amt#7987, ws_ext_sales_price#7988, ws_ext_wholesale_cost#7989, ws_ext_list_price#7990)
    // Output: ListBuffer(ws_sold_date_sk#7965, ws_bill_customer_sk#7969, ws_ext_discount_amt#7987, ws_ext_sales_price#7988, ws_ext_wholesale_cost#7989, ws_ext_list_price#7990)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1168_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk7969 = tbl_SerializeFromObject_TD_1168_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk7965 = tbl_SerializeFromObject_TD_1168_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk7965_t = tbl_SerializeFromObject_TD_1168_input.getInt32(i, 0);
            tbl_Filter_TD_10745_output.setInt32(r, 0, _ws_sold_date_sk7965_t);
            int32_t _ws_bill_customer_sk7969_t = tbl_SerializeFromObject_TD_1168_input.getInt32(i, 1);
            tbl_Filter_TD_10745_output.setInt32(r, 1, _ws_bill_customer_sk7969_t);
            int32_t _ws_ext_discount_amt7987_t = tbl_SerializeFromObject_TD_1168_input.getInt32(i, 2);
            tbl_Filter_TD_10745_output.setInt32(r, 2, _ws_ext_discount_amt7987_t);
            int32_t _ws_ext_sales_price7988_t = tbl_SerializeFromObject_TD_1168_input.getInt32(i, 3);
            tbl_Filter_TD_10745_output.setInt32(r, 3, _ws_ext_sales_price7988_t);
            int32_t _ws_ext_wholesale_cost7989_t = tbl_SerializeFromObject_TD_1168_input.getInt32(i, 4);
            tbl_Filter_TD_10745_output.setInt32(r, 4, _ws_ext_wholesale_cost7989_t);
            int32_t _ws_ext_list_price7990_t = tbl_SerializeFromObject_TD_1168_input.getInt32(i, 5);
            tbl_Filter_TD_10745_output.setInt32(r, 5, _ws_ext_list_price7990_t);
            r++;
        }
    }
    tbl_Filter_TD_10745_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10745_output #Row: " << tbl_Filter_TD_10745_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10535(Table &tbl_SerializeFromObject_TD_11560_input, Table &tbl_Filter_TD_10535_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#7947) AND isnotnull(c_customer_id#7948)))
    // Input: ListBuffer(c_customer_sk#7947, c_customer_id#7948, c_first_name#7955, c_last_name#7956, c_preferred_cust_flag#7957, c_birth_country#7961, c_login#7962, c_email_address#7963)
    // Output: ListBuffer(c_customer_sk#7947, c_customer_id#7948, c_first_name#7955, c_last_name#7956, c_preferred_cust_flag#7957, c_birth_country#7961, c_login#7962, c_email_address#7963)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11560_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7947 = tbl_SerializeFromObject_TD_11560_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948 = tbl_SerializeFromObject_TD_11560_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _c_customer_sk7947_t = tbl_SerializeFromObject_TD_11560_input.getInt32(i, 0);
            tbl_Filter_TD_10535_output.setInt32(r, 0, _c_customer_sk7947_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948_t = tbl_SerializeFromObject_TD_11560_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10535_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id7948_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7955_t = tbl_SerializeFromObject_TD_11560_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10535_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name7955_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7956_t = tbl_SerializeFromObject_TD_11560_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10535_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name7956_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7957_t = tbl_SerializeFromObject_TD_11560_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_10535_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag7957_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7961_t = tbl_SerializeFromObject_TD_11560_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_10535_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country7961_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login7962_t = tbl_SerializeFromObject_TD_11560_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_10535_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login7962_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7963_t = tbl_SerializeFromObject_TD_11560_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_10535_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address7963_t);
            r++;
        }
    }
    tbl_Filter_TD_10535_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10535_output #Row: " << tbl_Filter_TD_10535_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10944_key_leftMajor {
    int32_t _cs_sold_date_sk7407;
    bool operator==(const SW_JOIN_INNER_TD_10944_key_leftMajor& other) const {
        return ((_cs_sold_date_sk7407 == other._cs_sold_date_sk7407));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10944_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10944_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk7407));
    }
};
}
struct SW_JOIN_INNER_TD_10944_payload_leftMajor {
    std::string _c_customer_id7390;
    std::string _c_first_name7397;
    std::string _c_last_name7398;
    std::string _c_preferred_cust_flag7399;
    std::string _c_birth_country7403;
    std::string _c_login7404;
    std::string _c_email_address7405;
    int32_t _cs_sold_date_sk7407;
    int32_t _cs_ext_discount_amt7429;
    int32_t _cs_ext_sales_price7430;
    int32_t _cs_ext_wholesale_cost7431;
    int32_t _cs_ext_list_price7432;
};
struct SW_JOIN_INNER_TD_10944_key_rightMajor {
    int32_t _d_date_sk7441;
    bool operator==(const SW_JOIN_INNER_TD_10944_key_rightMajor& other) const {
        return ((_d_date_sk7441 == other._d_date_sk7441));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10944_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10944_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7441));
    }
};
}
struct SW_JOIN_INNER_TD_10944_payload_rightMajor {
    int32_t _d_date_sk7441;
    int32_t _d_year7447;
};
void SW_JOIN_INNER_TD_10944(Table &tbl_JOIN_INNER_TD_11672_output, Table &tbl_Filter_TD_11182_output, Table &tbl_JOIN_INNER_TD_10944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#7407 = d_date_sk#7441))
    // Left Table: ListBuffer(c_customer_id#7390, c_first_name#7397, c_last_name#7398, c_preferred_cust_flag#7399, c_birth_country#7403, c_login#7404, c_email_address#7405, cs_sold_date_sk#7407, cs_ext_discount_amt#7429, cs_ext_sales_price#7430, cs_ext_wholesale_cost#7431, cs_ext_list_price#7432)
    // Right Table: ListBuffer(d_date_sk#7441, d_year#7447)
    // Output Table: ListBuffer(c_customer_id#7390, c_first_name#7397, c_last_name#7398, c_preferred_cust_flag#7399, c_birth_country#7403, c_login#7404, c_email_address#7405, cs_ext_discount_amt#7429, cs_ext_sales_price#7430, cs_ext_wholesale_cost#7431, cs_ext_list_price#7432, d_year#7447)
    int left_nrow = tbl_JOIN_INNER_TD_11672_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11182_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10944_key_leftMajor, SW_JOIN_INNER_TD_10944_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11672_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk7407_k = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10944_key_leftMajor keyA{_cs_sold_date_sk7407_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id7390 = std::string(_c_customer_id7390_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7397_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7397 = std::string(_c_first_name7397_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7398_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7398 = std::string(_c_last_name7398_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7399_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag7399 = std::string(_c_preferred_cust_flag7399_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7403_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country7403 = std::string(_c_birth_country7403_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7404_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login7404 = std::string(_c_login7404_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7405_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address7405 = std::string(_c_email_address7405_n.data());
            int32_t _cs_sold_date_sk7407 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 7);
            int32_t _cs_ext_discount_amt7429 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 8);
            int32_t _cs_ext_sales_price7430 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 9);
            int32_t _cs_ext_wholesale_cost7431 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 10);
            int32_t _cs_ext_list_price7432 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_10944_payload_leftMajor payloadA{_c_customer_id7390, _c_first_name7397, _c_last_name7398, _c_preferred_cust_flag7399, _c_birth_country7403, _c_login7404, _c_email_address7405, _cs_sold_date_sk7407, _cs_ext_discount_amt7429, _cs_ext_sales_price7430, _cs_ext_wholesale_cost7431, _cs_ext_list_price7432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11182_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7441_k = tbl_Filter_TD_11182_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10944_key_leftMajor{_d_date_sk7441_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id7390 = (it->second)._c_customer_id7390;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390_n{};
                memcpy(_c_customer_id7390_n.data(), (_c_customer_id7390).data(), (_c_customer_id7390).length());
                std::string _c_first_name7397 = (it->second)._c_first_name7397;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7397_n{};
                memcpy(_c_first_name7397_n.data(), (_c_first_name7397).data(), (_c_first_name7397).length());
                std::string _c_last_name7398 = (it->second)._c_last_name7398;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7398_n{};
                memcpy(_c_last_name7398_n.data(), (_c_last_name7398).data(), (_c_last_name7398).length());
                std::string _c_preferred_cust_flag7399 = (it->second)._c_preferred_cust_flag7399;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7399_n{};
                memcpy(_c_preferred_cust_flag7399_n.data(), (_c_preferred_cust_flag7399).data(), (_c_preferred_cust_flag7399).length());
                std::string _c_birth_country7403 = (it->second)._c_birth_country7403;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7403_n{};
                memcpy(_c_birth_country7403_n.data(), (_c_birth_country7403).data(), (_c_birth_country7403).length());
                std::string _c_login7404 = (it->second)._c_login7404;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7404_n{};
                memcpy(_c_login7404_n.data(), (_c_login7404).data(), (_c_login7404).length());
                std::string _c_email_address7405 = (it->second)._c_email_address7405;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7405_n{};
                memcpy(_c_email_address7405_n.data(), (_c_email_address7405).data(), (_c_email_address7405).length());
                int32_t _cs_sold_date_sk7407 = (it->second)._cs_sold_date_sk7407;
                int32_t _cs_ext_discount_amt7429 = (it->second)._cs_ext_discount_amt7429;
                int32_t _cs_ext_sales_price7430 = (it->second)._cs_ext_sales_price7430;
                int32_t _cs_ext_wholesale_cost7431 = (it->second)._cs_ext_wholesale_cost7431;
                int32_t _cs_ext_list_price7432 = (it->second)._cs_ext_list_price7432;
                int32_t _d_date_sk7441 = tbl_Filter_TD_11182_output.getInt32(i, 0);
                int32_t _d_year7447 = tbl_Filter_TD_11182_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7390_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7397_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7398_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7399_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7403_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7404_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7405_n);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 7, _cs_ext_discount_amt7429);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 8, _cs_ext_sales_price7430);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 9, _cs_ext_wholesale_cost7431);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 10, _cs_ext_list_price7432);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 11, _d_year7447);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10944_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10944_key_rightMajor, SW_JOIN_INNER_TD_10944_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11182_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7441_k = tbl_Filter_TD_11182_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10944_key_rightMajor keyA{_d_date_sk7441_k};
            int32_t _d_date_sk7441 = tbl_Filter_TD_11182_output.getInt32(i, 0);
            int32_t _d_year7447 = tbl_Filter_TD_11182_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10944_payload_rightMajor payloadA{_d_date_sk7441, _d_year7447};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11672_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk7407_k = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10944_key_rightMajor{_cs_sold_date_sk7407_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7441 = (it->second)._d_date_sk7441;
                int32_t _d_year7447 = (it->second)._d_year7447;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id7390 = std::string(_c_customer_id7390_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7397_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7397 = std::string(_c_first_name7397_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7398_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7398 = std::string(_c_last_name7398_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7399_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag7399 = std::string(_c_preferred_cust_flag7399_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7403_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country7403 = std::string(_c_birth_country7403_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7404_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login7404 = std::string(_c_login7404_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7405_n = tbl_JOIN_INNER_TD_11672_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address7405 = std::string(_c_email_address7405_n.data());
                int32_t _cs_sold_date_sk7407 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 7);
                int32_t _cs_ext_discount_amt7429 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 8);
                int32_t _cs_ext_sales_price7430 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 9);
                int32_t _cs_ext_wholesale_cost7431 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 10);
                int32_t _cs_ext_list_price7432 = tbl_JOIN_INNER_TD_11672_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 11, _d_year7447);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7390_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7397_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7398_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7399_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7403_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7404_n);
                tbl_JOIN_INNER_TD_10944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7405_n);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 7, _cs_ext_discount_amt7429);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 8, _cs_ext_sales_price7430);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 9, _cs_ext_wholesale_cost7431);
                tbl_JOIN_INNER_TD_10944_output.setInt32(r, 10, _cs_ext_list_price7432);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10944_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10944_output #Row: " << tbl_JOIN_INNER_TD_10944_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10696(Table &tbl_SerializeFromObject_TD_11607_input, Table &tbl_Filter_TD_10696_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#7128) AND (d_year#7128 = 2002)) AND isnotnull(d_date_sk#7122)))
    // Input: ListBuffer(d_date_sk#7122, d_year#7128)
    // Output: ListBuffer(d_date_sk#7122, d_year#7128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11607_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7128 = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 1);
        int32_t _d_date_sk7122 = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 0);
        if (((1) && (_d_year7128 == 2002)) && (1)) {
            int32_t _d_date_sk7122_t = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 0);
            tbl_Filter_TD_10696_output.setInt32(r, 0, _d_date_sk7122_t);
            int32_t _d_year7128_t = tbl_SerializeFromObject_TD_11607_input.getInt32(i, 1);
            tbl_Filter_TD_10696_output.setInt32(r, 1, _d_year7128_t);
            r++;
        }
    }
    tbl_Filter_TD_10696_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10696_output #Row: " << tbl_Filter_TD_10696_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10431_key_leftMajor {
    int32_t _c_customer_sk7081;
    bool operator==(const SW_JOIN_INNER_TD_10431_key_leftMajor& other) const {
        return ((_c_customer_sk7081 == other._c_customer_sk7081));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10431_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10431_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7081));
    }
};
}
struct SW_JOIN_INNER_TD_10431_payload_leftMajor {
    int32_t _c_customer_sk7081;
    std::string _c_customer_id7082;
    std::string _c_first_name7089;
    std::string _c_last_name7090;
    std::string _c_preferred_cust_flag7091;
    std::string _c_birth_country7095;
    std::string _c_login7096;
    std::string _c_email_address7097;
};
struct SW_JOIN_INNER_TD_10431_key_rightMajor {
    int32_t _ss_customer_sk7102;
    bool operator==(const SW_JOIN_INNER_TD_10431_key_rightMajor& other) const {
        return ((_ss_customer_sk7102 == other._ss_customer_sk7102));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10431_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10431_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk7102));
    }
};
}
struct SW_JOIN_INNER_TD_10431_payload_rightMajor {
    int32_t _ss_sold_date_sk7099;
    int32_t _ss_customer_sk7102;
    int32_t _ss_ext_discount_amt7113;
    int32_t _ss_ext_sales_price7114;
    int32_t _ss_ext_wholesale_cost7115;
    int32_t _ss_ext_list_price7116;
};
void SW_JOIN_INNER_TD_10431(Table &tbl_Filter_TD_11530_output, Table &tbl_Filter_TD_11371_output, Table &tbl_JOIN_INNER_TD_10431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#7081 = ss_customer_sk#7102))
    // Left Table: ListBuffer(c_customer_sk#7081, c_customer_id#7082, c_first_name#7089, c_last_name#7090, c_preferred_cust_flag#7091, c_birth_country#7095, c_login#7096, c_email_address#7097)
    // Right Table: ListBuffer(ss_sold_date_sk#7099, ss_customer_sk#7102, ss_ext_discount_amt#7113, ss_ext_sales_price#7114, ss_ext_wholesale_cost#7115, ss_ext_list_price#7116)
    // Output Table: ListBuffer(c_customer_id#7082, c_first_name#7089, c_last_name#7090, c_preferred_cust_flag#7091, c_birth_country#7095, c_login#7096, c_email_address#7097, ss_sold_date_sk#7099, ss_ext_discount_amt#7113, ss_ext_sales_price#7114, ss_ext_wholesale_cost#7115, ss_ext_list_price#7116)
    int left_nrow = tbl_Filter_TD_11530_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11371_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10431_key_leftMajor, SW_JOIN_INNER_TD_10431_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11530_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7081_k = tbl_Filter_TD_11530_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10431_key_leftMajor keyA{_c_customer_sk7081_k};
            int32_t _c_customer_sk7081 = tbl_Filter_TD_11530_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id7082 = std::string(_c_customer_id7082_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7089_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name7089 = std::string(_c_first_name7089_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7090_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name7090 = std::string(_c_last_name7090_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7091_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag7091 = std::string(_c_preferred_cust_flag7091_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7095_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country7095 = std::string(_c_birth_country7095_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7096_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login7096 = std::string(_c_login7096_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7097_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address7097 = std::string(_c_email_address7097_n.data());
            SW_JOIN_INNER_TD_10431_payload_leftMajor payloadA{_c_customer_sk7081, _c_customer_id7082, _c_first_name7089, _c_last_name7090, _c_preferred_cust_flag7091, _c_birth_country7095, _c_login7096, _c_email_address7097};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11371_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk7102_k = tbl_Filter_TD_11371_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10431_key_leftMajor{_ss_customer_sk7102_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7081 = (it->second)._c_customer_sk7081;
                std::string _c_customer_id7082 = (it->second)._c_customer_id7082;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082_n{};
                memcpy(_c_customer_id7082_n.data(), (_c_customer_id7082).data(), (_c_customer_id7082).length());
                std::string _c_first_name7089 = (it->second)._c_first_name7089;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7089_n{};
                memcpy(_c_first_name7089_n.data(), (_c_first_name7089).data(), (_c_first_name7089).length());
                std::string _c_last_name7090 = (it->second)._c_last_name7090;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7090_n{};
                memcpy(_c_last_name7090_n.data(), (_c_last_name7090).data(), (_c_last_name7090).length());
                std::string _c_preferred_cust_flag7091 = (it->second)._c_preferred_cust_flag7091;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7091_n{};
                memcpy(_c_preferred_cust_flag7091_n.data(), (_c_preferred_cust_flag7091).data(), (_c_preferred_cust_flag7091).length());
                std::string _c_birth_country7095 = (it->second)._c_birth_country7095;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7095_n{};
                memcpy(_c_birth_country7095_n.data(), (_c_birth_country7095).data(), (_c_birth_country7095).length());
                std::string _c_login7096 = (it->second)._c_login7096;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7096_n{};
                memcpy(_c_login7096_n.data(), (_c_login7096).data(), (_c_login7096).length());
                std::string _c_email_address7097 = (it->second)._c_email_address7097;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7097_n{};
                memcpy(_c_email_address7097_n.data(), (_c_email_address7097).data(), (_c_email_address7097).length());
                int32_t _ss_sold_date_sk7099 = tbl_Filter_TD_11371_output.getInt32(i, 0);
                int32_t _ss_customer_sk7102 = tbl_Filter_TD_11371_output.getInt32(i, 1);
                int32_t _ss_ext_discount_amt7113 = tbl_Filter_TD_11371_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price7114 = tbl_Filter_TD_11371_output.getInt32(i, 3);
                int32_t _ss_ext_wholesale_cost7115 = tbl_Filter_TD_11371_output.getInt32(i, 4);
                int32_t _ss_ext_list_price7116 = tbl_Filter_TD_11371_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7082_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7089_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7090_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7091_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7095_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7096_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7097_n);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 7, _ss_sold_date_sk7099);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 8, _ss_ext_discount_amt7113);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 9, _ss_ext_sales_price7114);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 10, _ss_ext_wholesale_cost7115);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 11, _ss_ext_list_price7116);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10431_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10431_key_rightMajor, SW_JOIN_INNER_TD_10431_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11371_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk7102_k = tbl_Filter_TD_11371_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10431_key_rightMajor keyA{_ss_customer_sk7102_k};
            int32_t _ss_sold_date_sk7099 = tbl_Filter_TD_11371_output.getInt32(i, 0);
            int32_t _ss_customer_sk7102 = tbl_Filter_TD_11371_output.getInt32(i, 1);
            int32_t _ss_ext_discount_amt7113 = tbl_Filter_TD_11371_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price7114 = tbl_Filter_TD_11371_output.getInt32(i, 3);
            int32_t _ss_ext_wholesale_cost7115 = tbl_Filter_TD_11371_output.getInt32(i, 4);
            int32_t _ss_ext_list_price7116 = tbl_Filter_TD_11371_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_10431_payload_rightMajor payloadA{_ss_sold_date_sk7099, _ss_customer_sk7102, _ss_ext_discount_amt7113, _ss_ext_sales_price7114, _ss_ext_wholesale_cost7115, _ss_ext_list_price7116};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11530_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7081_k = tbl_Filter_TD_11530_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10431_key_rightMajor{_c_customer_sk7081_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk7099 = (it->second)._ss_sold_date_sk7099;
                int32_t _ss_customer_sk7102 = (it->second)._ss_customer_sk7102;
                int32_t _ss_ext_discount_amt7113 = (it->second)._ss_ext_discount_amt7113;
                int32_t _ss_ext_sales_price7114 = (it->second)._ss_ext_sales_price7114;
                int32_t _ss_ext_wholesale_cost7115 = (it->second)._ss_ext_wholesale_cost7115;
                int32_t _ss_ext_list_price7116 = (it->second)._ss_ext_list_price7116;
                int32_t _c_customer_sk7081 = tbl_Filter_TD_11530_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id7082 = std::string(_c_customer_id7082_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7089_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name7089 = std::string(_c_first_name7089_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7090_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name7090 = std::string(_c_last_name7090_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7091_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag7091 = std::string(_c_preferred_cust_flag7091_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7095_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country7095 = std::string(_c_birth_country7095_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7096_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login7096 = std::string(_c_login7096_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7097_n = tbl_Filter_TD_11530_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address7097 = std::string(_c_email_address7097_n.data());
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 7, _ss_sold_date_sk7099);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 8, _ss_ext_discount_amt7113);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 9, _ss_ext_sales_price7114);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 10, _ss_ext_wholesale_cost7115);
                tbl_JOIN_INNER_TD_10431_output.setInt32(r, 11, _ss_ext_list_price7116);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7082_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7089_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7090_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7091_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7095_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7096_n);
                tbl_JOIN_INNER_TD_10431_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7097_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10431_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10431_output #Row: " << tbl_JOIN_INNER_TD_10431_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10209_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10209_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10209_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10209_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10209_payload_leftMajor {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_ext_discount_amt1220;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_ext_wholesale_cost1222;
    int32_t _ss_ext_list_price1223;
};
struct SW_JOIN_INNER_TD_10209_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10209_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10209_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10209_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10209_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_10209(Table &tbl_JOIN_INNER_TD_11514_output, Table &tbl_Filter_TD_11531_output, Table &tbl_JOIN_INNER_TD_10209_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_sold_date_sk#1206, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, d_year#126)
    int left_nrow = tbl_JOIN_INNER_TD_11514_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11531_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10209_key_leftMajor, SW_JOIN_INNER_TD_10209_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11514_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10209_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login15 = std::string(_c_login15_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address16 = std::string(_c_email_address16_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 7);
            int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 8);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 9);
            int32_t _ss_ext_wholesale_cost1222 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 10);
            int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_10209_payload_leftMajor payloadA{_c_customer_id1, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10, _c_birth_country14, _c_login15, _c_email_address16, _ss_sold_date_sk1206, _ss_ext_discount_amt1220, _ss_ext_sales_price1221, _ss_ext_wholesale_cost1222, _ss_ext_list_price1223};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11531_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11531_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10209_key_leftMajor{_d_date_sk120_k});
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
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_ext_wholesale_cost1222 = (it->second)._ss_ext_wholesale_cost1222;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _d_date_sk120 = tbl_Filter_TD_11531_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_11531_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 7, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 8, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 9, _ss_ext_wholesale_cost1222);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 10, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 11, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10209_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10209_key_rightMajor, SW_JOIN_INNER_TD_10209_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11531_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11531_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10209_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11531_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_11531_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10209_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11514_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10209_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login15 = std::string(_c_login15_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_JOIN_INNER_TD_11514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address16 = std::string(_c_email_address16_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 7);
                int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 8);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 9);
                int32_t _ss_ext_wholesale_cost1222 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 10);
                int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_11514_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 11, _d_year126);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_10209_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 7, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 8, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 9, _ss_ext_wholesale_cost1222);
                tbl_JOIN_INNER_TD_10209_output.setInt32(r, 10, _ss_ext_list_price1223);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10209_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10209_output #Row: " << tbl_JOIN_INNER_TD_10209_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9950(Table &tbl_SerializeFromObject_TD_10108_input, Table &tbl_Filter_TD_9950_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#8005) AND (d_year#8005 = 2001)) AND isnotnull(d_date_sk#7999)))
    // Input: ListBuffer(d_date_sk#7999, d_year#8005)
    // Output: ListBuffer(d_date_sk#7999, d_year#8005)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10108_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year8005 = tbl_SerializeFromObject_TD_10108_input.getInt32(i, 1);
        int32_t _d_date_sk7999 = tbl_SerializeFromObject_TD_10108_input.getInt32(i, 0);
        if (((1) && (_d_year8005 == 2001)) && (1)) {
            int32_t _d_date_sk7999_t = tbl_SerializeFromObject_TD_10108_input.getInt32(i, 0);
            tbl_Filter_TD_9950_output.setInt32(r, 0, _d_date_sk7999_t);
            int32_t _d_year8005_t = tbl_SerializeFromObject_TD_10108_input.getInt32(i, 1);
            tbl_Filter_TD_9950_output.setInt32(r, 1, _d_year8005_t);
            r++;
        }
    }
    tbl_Filter_TD_9950_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9950_output #Row: " << tbl_Filter_TD_9950_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9193_key_leftMajor {
    int32_t _c_customer_sk7947;
    bool operator==(const SW_JOIN_INNER_TD_9193_key_leftMajor& other) const {
        return ((_c_customer_sk7947 == other._c_customer_sk7947));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9193_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9193_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7947));
    }
};
}
struct SW_JOIN_INNER_TD_9193_payload_leftMajor {
    int32_t _c_customer_sk7947;
    std::string _c_customer_id7948;
    std::string _c_first_name7955;
    std::string _c_last_name7956;
    std::string _c_preferred_cust_flag7957;
    std::string _c_birth_country7961;
    std::string _c_login7962;
    std::string _c_email_address7963;
};
struct SW_JOIN_INNER_TD_9193_key_rightMajor {
    int32_t _ws_bill_customer_sk7969;
    bool operator==(const SW_JOIN_INNER_TD_9193_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk7969 == other._ws_bill_customer_sk7969));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9193_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9193_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk7969));
    }
};
}
struct SW_JOIN_INNER_TD_9193_payload_rightMajor {
    int32_t _ws_sold_date_sk7965;
    int32_t _ws_bill_customer_sk7969;
    int32_t _ws_ext_discount_amt7987;
    int32_t _ws_ext_sales_price7988;
    int32_t _ws_ext_wholesale_cost7989;
    int32_t _ws_ext_list_price7990;
};
void SW_JOIN_INNER_TD_9193(Table &tbl_Filter_TD_10535_output, Table &tbl_Filter_TD_10745_output, Table &tbl_JOIN_INNER_TD_9193_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#7947 = ws_bill_customer_sk#7969))
    // Left Table: ListBuffer(c_customer_sk#7947, c_customer_id#7948, c_first_name#7955, c_last_name#7956, c_preferred_cust_flag#7957, c_birth_country#7961, c_login#7962, c_email_address#7963)
    // Right Table: ListBuffer(ws_sold_date_sk#7965, ws_bill_customer_sk#7969, ws_ext_discount_amt#7987, ws_ext_sales_price#7988, ws_ext_wholesale_cost#7989, ws_ext_list_price#7990)
    // Output Table: ListBuffer(c_customer_id#7948, c_first_name#7955, c_last_name#7956, c_preferred_cust_flag#7957, c_birth_country#7961, c_login#7962, c_email_address#7963, ws_sold_date_sk#7965, ws_ext_discount_amt#7987, ws_ext_sales_price#7988, ws_ext_wholesale_cost#7989, ws_ext_list_price#7990)
    int left_nrow = tbl_Filter_TD_10535_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10745_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9193_key_leftMajor, SW_JOIN_INNER_TD_9193_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10535_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7947_k = tbl_Filter_TD_10535_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9193_key_leftMajor keyA{_c_customer_sk7947_k};
            int32_t _c_customer_sk7947 = tbl_Filter_TD_10535_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id7948 = std::string(_c_customer_id7948_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7955_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name7955 = std::string(_c_first_name7955_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7956_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name7956 = std::string(_c_last_name7956_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7957_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag7957 = std::string(_c_preferred_cust_flag7957_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7961_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country7961 = std::string(_c_birth_country7961_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7962_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login7962 = std::string(_c_login7962_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7963_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address7963 = std::string(_c_email_address7963_n.data());
            SW_JOIN_INNER_TD_9193_payload_leftMajor payloadA{_c_customer_sk7947, _c_customer_id7948, _c_first_name7955, _c_last_name7956, _c_preferred_cust_flag7957, _c_birth_country7961, _c_login7962, _c_email_address7963};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10745_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk7969_k = tbl_Filter_TD_10745_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9193_key_leftMajor{_ws_bill_customer_sk7969_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7947 = (it->second)._c_customer_sk7947;
                std::string _c_customer_id7948 = (it->second)._c_customer_id7948;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948_n{};
                memcpy(_c_customer_id7948_n.data(), (_c_customer_id7948).data(), (_c_customer_id7948).length());
                std::string _c_first_name7955 = (it->second)._c_first_name7955;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7955_n{};
                memcpy(_c_first_name7955_n.data(), (_c_first_name7955).data(), (_c_first_name7955).length());
                std::string _c_last_name7956 = (it->second)._c_last_name7956;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7956_n{};
                memcpy(_c_last_name7956_n.data(), (_c_last_name7956).data(), (_c_last_name7956).length());
                std::string _c_preferred_cust_flag7957 = (it->second)._c_preferred_cust_flag7957;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7957_n{};
                memcpy(_c_preferred_cust_flag7957_n.data(), (_c_preferred_cust_flag7957).data(), (_c_preferred_cust_flag7957).length());
                std::string _c_birth_country7961 = (it->second)._c_birth_country7961;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7961_n{};
                memcpy(_c_birth_country7961_n.data(), (_c_birth_country7961).data(), (_c_birth_country7961).length());
                std::string _c_login7962 = (it->second)._c_login7962;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7962_n{};
                memcpy(_c_login7962_n.data(), (_c_login7962).data(), (_c_login7962).length());
                std::string _c_email_address7963 = (it->second)._c_email_address7963;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7963_n{};
                memcpy(_c_email_address7963_n.data(), (_c_email_address7963).data(), (_c_email_address7963).length());
                int32_t _ws_sold_date_sk7965 = tbl_Filter_TD_10745_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk7969 = tbl_Filter_TD_10745_output.getInt32(i, 1);
                int32_t _ws_ext_discount_amt7987 = tbl_Filter_TD_10745_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price7988 = tbl_Filter_TD_10745_output.getInt32(i, 3);
                int32_t _ws_ext_wholesale_cost7989 = tbl_Filter_TD_10745_output.getInt32(i, 4);
                int32_t _ws_ext_list_price7990 = tbl_Filter_TD_10745_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7948_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7955_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7956_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7957_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7961_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7962_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7963_n);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 7, _ws_sold_date_sk7965);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 8, _ws_ext_discount_amt7987);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 9, _ws_ext_sales_price7988);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 10, _ws_ext_wholesale_cost7989);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 11, _ws_ext_list_price7990);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9193_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9193_key_rightMajor, SW_JOIN_INNER_TD_9193_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10745_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk7969_k = tbl_Filter_TD_10745_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9193_key_rightMajor keyA{_ws_bill_customer_sk7969_k};
            int32_t _ws_sold_date_sk7965 = tbl_Filter_TD_10745_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk7969 = tbl_Filter_TD_10745_output.getInt32(i, 1);
            int32_t _ws_ext_discount_amt7987 = tbl_Filter_TD_10745_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price7988 = tbl_Filter_TD_10745_output.getInt32(i, 3);
            int32_t _ws_ext_wholesale_cost7989 = tbl_Filter_TD_10745_output.getInt32(i, 4);
            int32_t _ws_ext_list_price7990 = tbl_Filter_TD_10745_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9193_payload_rightMajor payloadA{_ws_sold_date_sk7965, _ws_bill_customer_sk7969, _ws_ext_discount_amt7987, _ws_ext_sales_price7988, _ws_ext_wholesale_cost7989, _ws_ext_list_price7990};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10535_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7947_k = tbl_Filter_TD_10535_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9193_key_rightMajor{_c_customer_sk7947_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk7965 = (it->second)._ws_sold_date_sk7965;
                int32_t _ws_bill_customer_sk7969 = (it->second)._ws_bill_customer_sk7969;
                int32_t _ws_ext_discount_amt7987 = (it->second)._ws_ext_discount_amt7987;
                int32_t _ws_ext_sales_price7988 = (it->second)._ws_ext_sales_price7988;
                int32_t _ws_ext_wholesale_cost7989 = (it->second)._ws_ext_wholesale_cost7989;
                int32_t _ws_ext_list_price7990 = (it->second)._ws_ext_list_price7990;
                int32_t _c_customer_sk7947 = tbl_Filter_TD_10535_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id7948 = std::string(_c_customer_id7948_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7955_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name7955 = std::string(_c_first_name7955_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7956_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name7956 = std::string(_c_last_name7956_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7957_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag7957 = std::string(_c_preferred_cust_flag7957_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7961_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country7961 = std::string(_c_birth_country7961_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7962_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login7962 = std::string(_c_login7962_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7963_n = tbl_Filter_TD_10535_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address7963 = std::string(_c_email_address7963_n.data());
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 7, _ws_sold_date_sk7965);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 8, _ws_ext_discount_amt7987);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 9, _ws_ext_sales_price7988);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 10, _ws_ext_wholesale_cost7989);
                tbl_JOIN_INNER_TD_9193_output.setInt32(r, 11, _ws_ext_list_price7990);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7948_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7955_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7956_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7957_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7961_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7962_n);
                tbl_JOIN_INNER_TD_9193_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7963_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9193_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9193_output #Row: " << tbl_JOIN_INNER_TD_9193_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9533(Table &tbl_SerializeFromObject_TD_10301_input, Table &tbl_Filter_TD_9533_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_bill_customer_sk#7649) AND isnotnull(cs_sold_date_sk#7646)))
    // Input: ListBuffer(cs_sold_date_sk#7646, cs_bill_customer_sk#7649, cs_ext_discount_amt#7668, cs_ext_sales_price#7669, cs_ext_wholesale_cost#7670, cs_ext_list_price#7671)
    // Output: ListBuffer(cs_sold_date_sk#7646, cs_bill_customer_sk#7649, cs_ext_discount_amt#7668, cs_ext_sales_price#7669, cs_ext_wholesale_cost#7670, cs_ext_list_price#7671)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10301_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk7649 = tbl_SerializeFromObject_TD_10301_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk7646 = tbl_SerializeFromObject_TD_10301_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk7646_t = tbl_SerializeFromObject_TD_10301_input.getInt32(i, 0);
            tbl_Filter_TD_9533_output.setInt32(r, 0, _cs_sold_date_sk7646_t);
            int32_t _cs_bill_customer_sk7649_t = tbl_SerializeFromObject_TD_10301_input.getInt32(i, 1);
            tbl_Filter_TD_9533_output.setInt32(r, 1, _cs_bill_customer_sk7649_t);
            int32_t _cs_ext_discount_amt7668_t = tbl_SerializeFromObject_TD_10301_input.getInt32(i, 2);
            tbl_Filter_TD_9533_output.setInt32(r, 2, _cs_ext_discount_amt7668_t);
            int32_t _cs_ext_sales_price7669_t = tbl_SerializeFromObject_TD_10301_input.getInt32(i, 3);
            tbl_Filter_TD_9533_output.setInt32(r, 3, _cs_ext_sales_price7669_t);
            int32_t _cs_ext_wholesale_cost7670_t = tbl_SerializeFromObject_TD_10301_input.getInt32(i, 4);
            tbl_Filter_TD_9533_output.setInt32(r, 4, _cs_ext_wholesale_cost7670_t);
            int32_t _cs_ext_list_price7671_t = tbl_SerializeFromObject_TD_10301_input.getInt32(i, 5);
            tbl_Filter_TD_9533_output.setInt32(r, 5, _cs_ext_list_price7671_t);
            r++;
        }
    }
    tbl_Filter_TD_9533_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9533_output #Row: " << tbl_Filter_TD_9533_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9512(Table &tbl_SerializeFromObject_TD_10918_input, Table &tbl_Filter_TD_9512_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#7628) AND isnotnull(c_customer_id#7629)))
    // Input: ListBuffer(c_customer_sk#7628, c_customer_id#7629, c_first_name#7636, c_last_name#7637, c_preferred_cust_flag#7638, c_birth_country#7642, c_login#7643, c_email_address#7644)
    // Output: ListBuffer(c_customer_sk#7628, c_customer_id#7629, c_first_name#7636, c_last_name#7637, c_preferred_cust_flag#7638, c_birth_country#7642, c_login#7643, c_email_address#7644)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10918_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7628 = tbl_SerializeFromObject_TD_10918_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629 = tbl_SerializeFromObject_TD_10918_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _c_customer_sk7628_t = tbl_SerializeFromObject_TD_10918_input.getInt32(i, 0);
            tbl_Filter_TD_9512_output.setInt32(r, 0, _c_customer_sk7628_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629_t = tbl_SerializeFromObject_TD_10918_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id7629_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7636_t = tbl_SerializeFromObject_TD_10918_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name7636_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7637_t = tbl_SerializeFromObject_TD_10918_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_9512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name7637_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7638_t = tbl_SerializeFromObject_TD_10918_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_9512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag7638_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7642_t = tbl_SerializeFromObject_TD_10918_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_9512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country7642_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login7643_t = tbl_SerializeFromObject_TD_10918_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_9512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login7643_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7644_t = tbl_SerializeFromObject_TD_10918_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_9512_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address7644_t);
            r++;
        }
    }
    tbl_Filter_TD_9512_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9512_output #Row: " << tbl_Filter_TD_9512_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_913_key {
    std::string _c_customer_id7390;
    std::string _c_first_name7397;
    std::string _c_last_name7398;
    std::string _c_preferred_cust_flag7399;
    std::string _c_birth_country7403;
    std::string _c_login7404;
    std::string _c_email_address7405;
    int32_t _d_year7447;
    bool operator==(const SW_Aggregate_TD_913_key& other) const { return (_c_customer_id7390 == other._c_customer_id7390) && (_c_first_name7397 == other._c_first_name7397) && (_c_last_name7398 == other._c_last_name7398) && (_c_preferred_cust_flag7399 == other._c_preferred_cust_flag7399) && (_c_birth_country7403 == other._c_birth_country7403) && (_c_login7404 == other._c_login7404) && (_c_email_address7405 == other._c_email_address7405) && (_d_year7447 == other._d_year7447); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_913_key> {
    std::size_t operator() (const SW_Aggregate_TD_913_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id7390)) + (hash<string>()(k._c_first_name7397)) + (hash<string>()(k._c_last_name7398)) + (hash<string>()(k._c_preferred_cust_flag7399)) + (hash<string>()(k._c_birth_country7403)) + (hash<string>()(k._c_login7404)) + (hash<string>()(k._c_email_address7405)) + (hash<int32_t>()(k._d_year7447));
    }
};
}
struct SW_Aggregate_TD_913_payload {
    std::string _customer_id4133;
    int32_t _year_total4141_sum_0;
};
void SW_Aggregate_TD_913(Table &tbl_JOIN_INNER_TD_10944_output, Table &tbl_Aggregate_TD_913_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#7390, c_first_name#7397, c_last_name#7398, c_preferred_cust_flag#7399, c_birth_country#7403, c_login#7404, c_email_address#7405, d_year#7447, c_customer_id#7390 AS customer_id#4133, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(cs_ext_list_price#7432 as decimal(8,2))) - promote_precision(cast(cs_ext_wholesale_cost#7431 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(cs_ext_discount_amt#7429 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(cs_ext_sales_price#7430 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4141)
    // Input: ListBuffer(c_customer_id#7390, c_first_name#7397, c_last_name#7398, c_preferred_cust_flag#7399, c_birth_country#7403, c_login#7404, c_email_address#7405, cs_ext_discount_amt#7429, cs_ext_sales_price#7430, cs_ext_wholesale_cost#7431, cs_ext_list_price#7432, d_year#7447)
    // Output: ListBuffer(customer_id#4133, year_total#4141)
    std::unordered_map<SW_Aggregate_TD_913_key, SW_Aggregate_TD_913_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10944_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7390 = tbl_JOIN_INNER_TD_10944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7397 = tbl_JOIN_INNER_TD_10944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7398 = tbl_JOIN_INNER_TD_10944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7399 = tbl_JOIN_INNER_TD_10944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7403 = tbl_JOIN_INNER_TD_10944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login7404 = tbl_JOIN_INNER_TD_10944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address7405 = tbl_JOIN_INNER_TD_10944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _cs_ext_discount_amt7429 = tbl_JOIN_INNER_TD_10944_output.getInt32(i, 7);
        int32_t _cs_ext_sales_price7430 = tbl_JOIN_INNER_TD_10944_output.getInt32(i, 8);
        int32_t _cs_ext_wholesale_cost7431 = tbl_JOIN_INNER_TD_10944_output.getInt32(i, 9);
        int32_t _cs_ext_list_price7432 = tbl_JOIN_INNER_TD_10944_output.getInt32(i, 10);
        int32_t _d_year7447 = tbl_JOIN_INNER_TD_10944_output.getInt32(i, 11);
        SW_Aggregate_TD_913_key k{std::string(_c_customer_id7390.data()), std::string(_c_first_name7397.data()), std::string(_c_last_name7398.data()), std::string(_c_preferred_cust_flag7399.data()), std::string(_c_birth_country7403.data()), std::string(_c_login7404.data()), std::string(_c_email_address7405.data()), _d_year7447};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4133 = _c_customer_id7390;
        int64_t _year_total4141_sum_0 = ((((_cs_ext_list_price7432 - _cs_ext_wholesale_cost7431) - _cs_ext_discount_amt7429) + _cs_ext_sales_price7430) / 2.00);
        SW_Aggregate_TD_913_payload p{std::string(_customer_id4133.data()), _year_total4141_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4141_sum_0 + _year_total4141_sum_0;
            p._year_total4141_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id7390 not required in the output table
        // _c_first_name7397 not required in the output table
        // _c_last_name7398 not required in the output table
        // _c_preferred_cust_flag7399 not required in the output table
        // _c_birth_country7403 not required in the output table
        // _c_login7404 not required in the output table
        // _c_email_address7405 not required in the output table
        // _d_year7447 not required in the output table
        // Unsupported payload type: StringType
        int32_t _year_total4141 = (it.second)._year_total4141_sum_0;
        tbl_Aggregate_TD_913_output.setInt32(r, 1, _year_total4141);
        ++r;
    }
    tbl_Aggregate_TD_913_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_913_output #Row: " << tbl_Aggregate_TD_913_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9550_key_leftMajor {
    int32_t _ss_sold_date_sk7099;
    bool operator==(const SW_JOIN_INNER_TD_9550_key_leftMajor& other) const {
        return ((_ss_sold_date_sk7099 == other._ss_sold_date_sk7099));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9550_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9550_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk7099));
    }
};
}
struct SW_JOIN_INNER_TD_9550_payload_leftMajor {
    std::string _c_customer_id7082;
    std::string _c_first_name7089;
    std::string _c_last_name7090;
    std::string _c_preferred_cust_flag7091;
    std::string _c_birth_country7095;
    std::string _c_login7096;
    std::string _c_email_address7097;
    int32_t _ss_sold_date_sk7099;
    int32_t _ss_ext_discount_amt7113;
    int32_t _ss_ext_sales_price7114;
    int32_t _ss_ext_wholesale_cost7115;
    int32_t _ss_ext_list_price7116;
};
struct SW_JOIN_INNER_TD_9550_key_rightMajor {
    int32_t _d_date_sk7122;
    bool operator==(const SW_JOIN_INNER_TD_9550_key_rightMajor& other) const {
        return ((_d_date_sk7122 == other._d_date_sk7122));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9550_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9550_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7122));
    }
};
}
struct SW_JOIN_INNER_TD_9550_payload_rightMajor {
    int32_t _d_date_sk7122;
    int32_t _d_year7128;
};
void SW_JOIN_INNER_TD_9550(Table &tbl_JOIN_INNER_TD_10431_output, Table &tbl_Filter_TD_10696_output, Table &tbl_JOIN_INNER_TD_9550_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#7099 = d_date_sk#7122))
    // Left Table: ListBuffer(c_customer_id#7082, c_first_name#7089, c_last_name#7090, c_preferred_cust_flag#7091, c_birth_country#7095, c_login#7096, c_email_address#7097, ss_sold_date_sk#7099, ss_ext_discount_amt#7113, ss_ext_sales_price#7114, ss_ext_wholesale_cost#7115, ss_ext_list_price#7116)
    // Right Table: ListBuffer(d_date_sk#7122, d_year#7128)
    // Output Table: ListBuffer(c_customer_id#7082, c_first_name#7089, c_last_name#7090, c_preferred_cust_flag#7091, c_birth_country#7095, c_login#7096, c_email_address#7097, ss_ext_discount_amt#7113, ss_ext_sales_price#7114, ss_ext_wholesale_cost#7115, ss_ext_list_price#7116, d_year#7128)
    int left_nrow = tbl_JOIN_INNER_TD_10431_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10696_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9550_key_leftMajor, SW_JOIN_INNER_TD_9550_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10431_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk7099_k = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_9550_key_leftMajor keyA{_ss_sold_date_sk7099_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id7082 = std::string(_c_customer_id7082_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7089_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7089 = std::string(_c_first_name7089_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7090_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7090 = std::string(_c_last_name7090_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7091_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag7091 = std::string(_c_preferred_cust_flag7091_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7095_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country7095 = std::string(_c_birth_country7095_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7096_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login7096 = std::string(_c_login7096_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7097_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address7097 = std::string(_c_email_address7097_n.data());
            int32_t _ss_sold_date_sk7099 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 7);
            int32_t _ss_ext_discount_amt7113 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 8);
            int32_t _ss_ext_sales_price7114 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 9);
            int32_t _ss_ext_wholesale_cost7115 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 10);
            int32_t _ss_ext_list_price7116 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_9550_payload_leftMajor payloadA{_c_customer_id7082, _c_first_name7089, _c_last_name7090, _c_preferred_cust_flag7091, _c_birth_country7095, _c_login7096, _c_email_address7097, _ss_sold_date_sk7099, _ss_ext_discount_amt7113, _ss_ext_sales_price7114, _ss_ext_wholesale_cost7115, _ss_ext_list_price7116};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10696_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7122_k = tbl_Filter_TD_10696_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9550_key_leftMajor{_d_date_sk7122_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id7082 = (it->second)._c_customer_id7082;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082_n{};
                memcpy(_c_customer_id7082_n.data(), (_c_customer_id7082).data(), (_c_customer_id7082).length());
                std::string _c_first_name7089 = (it->second)._c_first_name7089;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7089_n{};
                memcpy(_c_first_name7089_n.data(), (_c_first_name7089).data(), (_c_first_name7089).length());
                std::string _c_last_name7090 = (it->second)._c_last_name7090;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7090_n{};
                memcpy(_c_last_name7090_n.data(), (_c_last_name7090).data(), (_c_last_name7090).length());
                std::string _c_preferred_cust_flag7091 = (it->second)._c_preferred_cust_flag7091;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7091_n{};
                memcpy(_c_preferred_cust_flag7091_n.data(), (_c_preferred_cust_flag7091).data(), (_c_preferred_cust_flag7091).length());
                std::string _c_birth_country7095 = (it->second)._c_birth_country7095;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7095_n{};
                memcpy(_c_birth_country7095_n.data(), (_c_birth_country7095).data(), (_c_birth_country7095).length());
                std::string _c_login7096 = (it->second)._c_login7096;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7096_n{};
                memcpy(_c_login7096_n.data(), (_c_login7096).data(), (_c_login7096).length());
                std::string _c_email_address7097 = (it->second)._c_email_address7097;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7097_n{};
                memcpy(_c_email_address7097_n.data(), (_c_email_address7097).data(), (_c_email_address7097).length());
                int32_t _ss_sold_date_sk7099 = (it->second)._ss_sold_date_sk7099;
                int32_t _ss_ext_discount_amt7113 = (it->second)._ss_ext_discount_amt7113;
                int32_t _ss_ext_sales_price7114 = (it->second)._ss_ext_sales_price7114;
                int32_t _ss_ext_wholesale_cost7115 = (it->second)._ss_ext_wholesale_cost7115;
                int32_t _ss_ext_list_price7116 = (it->second)._ss_ext_list_price7116;
                int32_t _d_date_sk7122 = tbl_Filter_TD_10696_output.getInt32(i, 0);
                int32_t _d_year7128 = tbl_Filter_TD_10696_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7082_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7089_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7090_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7091_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7095_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7096_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7097_n);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 7, _ss_ext_discount_amt7113);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 8, _ss_ext_sales_price7114);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 9, _ss_ext_wholesale_cost7115);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 10, _ss_ext_list_price7116);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 11, _d_year7128);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9550_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9550_key_rightMajor, SW_JOIN_INNER_TD_9550_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10696_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7122_k = tbl_Filter_TD_10696_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9550_key_rightMajor keyA{_d_date_sk7122_k};
            int32_t _d_date_sk7122 = tbl_Filter_TD_10696_output.getInt32(i, 0);
            int32_t _d_year7128 = tbl_Filter_TD_10696_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9550_payload_rightMajor payloadA{_d_date_sk7122, _d_year7128};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10431_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk7099_k = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9550_key_rightMajor{_ss_sold_date_sk7099_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7122 = (it->second)._d_date_sk7122;
                int32_t _d_year7128 = (it->second)._d_year7128;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id7082 = std::string(_c_customer_id7082_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7089_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7089 = std::string(_c_first_name7089_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7090_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7090 = std::string(_c_last_name7090_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7091_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag7091 = std::string(_c_preferred_cust_flag7091_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7095_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country7095 = std::string(_c_birth_country7095_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7096_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login7096 = std::string(_c_login7096_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7097_n = tbl_JOIN_INNER_TD_10431_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address7097 = std::string(_c_email_address7097_n.data());
                int32_t _ss_sold_date_sk7099 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 7);
                int32_t _ss_ext_discount_amt7113 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 8);
                int32_t _ss_ext_sales_price7114 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 9);
                int32_t _ss_ext_wholesale_cost7115 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 10);
                int32_t _ss_ext_list_price7116 = tbl_JOIN_INNER_TD_10431_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 11, _d_year7128);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7082_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7089_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7090_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7091_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7095_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7096_n);
                tbl_JOIN_INNER_TD_9550_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7097_n);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 7, _ss_ext_discount_amt7113);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 8, _ss_ext_sales_price7114);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 9, _ss_ext_wholesale_cost7115);
                tbl_JOIN_INNER_TD_9550_output.setInt32(r, 10, _ss_ext_list_price7116);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9550_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9550_output #Row: " << tbl_JOIN_INNER_TD_9550_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_9828_key {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
    int32_t _d_year126;
    bool operator==(const SW_Aggregate_TD_9828_key& other) const { return (_c_customer_id1 == other._c_customer_id1) && (_c_first_name8 == other._c_first_name8) && (_c_last_name9 == other._c_last_name9) && (_c_preferred_cust_flag10 == other._c_preferred_cust_flag10) && (_c_birth_country14 == other._c_birth_country14) && (_c_login15 == other._c_login15) && (_c_email_address16 == other._c_email_address16) && (_d_year126 == other._d_year126); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_9828_key> {
    std::size_t operator() (const SW_Aggregate_TD_9828_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id1)) + (hash<string>()(k._c_first_name8)) + (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_preferred_cust_flag10)) + (hash<string>()(k._c_birth_country14)) + (hash<string>()(k._c_login15)) + (hash<string>()(k._c_email_address16)) + (hash<int32_t>()(k._d_year126));
    }
};
}
struct SW_Aggregate_TD_9828_payload {
    std::string _customer_id4123;
    int32_t _year_total4131_sum_0;
};
void SW_Aggregate_TD_9828(Table &tbl_JOIN_INNER_TD_10209_output, Table &tbl_Aggregate_TD_9828_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, d_year#126, c_customer_id#1 AS customer_id#4123, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ss_ext_list_price#1223 as decimal(8,2))) - promote_precision(cast(ss_ext_wholesale_cost#1222 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(ss_ext_discount_amt#1220 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(ss_ext_sales_price#1221 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4131)
    // Input: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, d_year#126)
    // Output: ListBuffer(customer_id#4123, year_total#4131)
    std::unordered_map<SW_Aggregate_TD_9828_key, SW_Aggregate_TD_9828_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10209_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_10209_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_10209_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_10209_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10 = tbl_JOIN_INNER_TD_10209_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14 = tbl_JOIN_INNER_TD_10209_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login15 = tbl_JOIN_INNER_TD_10209_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address16 = tbl_JOIN_INNER_TD_10209_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_10209_output.getInt32(i, 7);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10209_output.getInt32(i, 8);
        int32_t _ss_ext_wholesale_cost1222 = tbl_JOIN_INNER_TD_10209_output.getInt32(i, 9);
        int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_10209_output.getInt32(i, 10);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_10209_output.getInt32(i, 11);
        SW_Aggregate_TD_9828_key k{std::string(_c_customer_id1.data()), std::string(_c_first_name8.data()), std::string(_c_last_name9.data()), std::string(_c_preferred_cust_flag10.data()), std::string(_c_birth_country14.data()), std::string(_c_login15.data()), std::string(_c_email_address16.data()), _d_year126};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4123 = _c_customer_id1;
        int64_t _year_total4131_sum_0 = ((((_ss_ext_list_price1223 - _ss_ext_wholesale_cost1222) - _ss_ext_discount_amt1220) + _ss_ext_sales_price1221) / 2.00);
        SW_Aggregate_TD_9828_payload p{std::string(_customer_id4123.data()), _year_total4131_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4131_sum_0 + _year_total4131_sum_0;
            p._year_total4131_sum_0 = sum_0;
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
        // Unsupported payload type: StringType
        int32_t _year_total4131 = (it.second)._year_total4131_sum_0;
        tbl_Aggregate_TD_9828_output.setInt32(r, 1, _year_total4131);
        ++r;
    }
    tbl_Aggregate_TD_9828_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9828_output #Row: " << tbl_Aggregate_TD_9828_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8612_key_leftMajor {
    int32_t _ws_sold_date_sk7965;
    bool operator==(const SW_JOIN_INNER_TD_8612_key_leftMajor& other) const {
        return ((_ws_sold_date_sk7965 == other._ws_sold_date_sk7965));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8612_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8612_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk7965));
    }
};
}
struct SW_JOIN_INNER_TD_8612_payload_leftMajor {
    std::string _c_customer_id7948;
    std::string _c_first_name7955;
    std::string _c_last_name7956;
    std::string _c_preferred_cust_flag7957;
    std::string _c_birth_country7961;
    std::string _c_login7962;
    std::string _c_email_address7963;
    int32_t _ws_sold_date_sk7965;
    int32_t _ws_ext_discount_amt7987;
    int32_t _ws_ext_sales_price7988;
    int32_t _ws_ext_wholesale_cost7989;
    int32_t _ws_ext_list_price7990;
};
struct SW_JOIN_INNER_TD_8612_key_rightMajor {
    int32_t _d_date_sk7999;
    bool operator==(const SW_JOIN_INNER_TD_8612_key_rightMajor& other) const {
        return ((_d_date_sk7999 == other._d_date_sk7999));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8612_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8612_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7999));
    }
};
}
struct SW_JOIN_INNER_TD_8612_payload_rightMajor {
    int32_t _d_date_sk7999;
    int32_t _d_year8005;
};
void SW_JOIN_INNER_TD_8612(Table &tbl_JOIN_INNER_TD_9193_output, Table &tbl_Filter_TD_9950_output, Table &tbl_JOIN_INNER_TD_8612_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#7965 = d_date_sk#7999))
    // Left Table: ListBuffer(c_customer_id#7948, c_first_name#7955, c_last_name#7956, c_preferred_cust_flag#7957, c_birth_country#7961, c_login#7962, c_email_address#7963, ws_sold_date_sk#7965, ws_ext_discount_amt#7987, ws_ext_sales_price#7988, ws_ext_wholesale_cost#7989, ws_ext_list_price#7990)
    // Right Table: ListBuffer(d_date_sk#7999, d_year#8005)
    // Output Table: ListBuffer(c_customer_id#7948, c_first_name#7955, c_last_name#7956, c_preferred_cust_flag#7957, c_birth_country#7961, c_login#7962, c_email_address#7963, ws_ext_discount_amt#7987, ws_ext_sales_price#7988, ws_ext_wholesale_cost#7989, ws_ext_list_price#7990, d_year#8005)
    int left_nrow = tbl_JOIN_INNER_TD_9193_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9950_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8612_key_leftMajor, SW_JOIN_INNER_TD_8612_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9193_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk7965_k = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8612_key_leftMajor keyA{_ws_sold_date_sk7965_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id7948 = std::string(_c_customer_id7948_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7955_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7955 = std::string(_c_first_name7955_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7956_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7956 = std::string(_c_last_name7956_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7957_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag7957 = std::string(_c_preferred_cust_flag7957_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7961_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country7961 = std::string(_c_birth_country7961_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7962_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login7962 = std::string(_c_login7962_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7963_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address7963 = std::string(_c_email_address7963_n.data());
            int32_t _ws_sold_date_sk7965 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 7);
            int32_t _ws_ext_discount_amt7987 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 8);
            int32_t _ws_ext_sales_price7988 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 9);
            int32_t _ws_ext_wholesale_cost7989 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 10);
            int32_t _ws_ext_list_price7990 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_8612_payload_leftMajor payloadA{_c_customer_id7948, _c_first_name7955, _c_last_name7956, _c_preferred_cust_flag7957, _c_birth_country7961, _c_login7962, _c_email_address7963, _ws_sold_date_sk7965, _ws_ext_discount_amt7987, _ws_ext_sales_price7988, _ws_ext_wholesale_cost7989, _ws_ext_list_price7990};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9950_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7999_k = tbl_Filter_TD_9950_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8612_key_leftMajor{_d_date_sk7999_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id7948 = (it->second)._c_customer_id7948;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948_n{};
                memcpy(_c_customer_id7948_n.data(), (_c_customer_id7948).data(), (_c_customer_id7948).length());
                std::string _c_first_name7955 = (it->second)._c_first_name7955;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7955_n{};
                memcpy(_c_first_name7955_n.data(), (_c_first_name7955).data(), (_c_first_name7955).length());
                std::string _c_last_name7956 = (it->second)._c_last_name7956;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7956_n{};
                memcpy(_c_last_name7956_n.data(), (_c_last_name7956).data(), (_c_last_name7956).length());
                std::string _c_preferred_cust_flag7957 = (it->second)._c_preferred_cust_flag7957;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7957_n{};
                memcpy(_c_preferred_cust_flag7957_n.data(), (_c_preferred_cust_flag7957).data(), (_c_preferred_cust_flag7957).length());
                std::string _c_birth_country7961 = (it->second)._c_birth_country7961;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7961_n{};
                memcpy(_c_birth_country7961_n.data(), (_c_birth_country7961).data(), (_c_birth_country7961).length());
                std::string _c_login7962 = (it->second)._c_login7962;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7962_n{};
                memcpy(_c_login7962_n.data(), (_c_login7962).data(), (_c_login7962).length());
                std::string _c_email_address7963 = (it->second)._c_email_address7963;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7963_n{};
                memcpy(_c_email_address7963_n.data(), (_c_email_address7963).data(), (_c_email_address7963).length());
                int32_t _ws_sold_date_sk7965 = (it->second)._ws_sold_date_sk7965;
                int32_t _ws_ext_discount_amt7987 = (it->second)._ws_ext_discount_amt7987;
                int32_t _ws_ext_sales_price7988 = (it->second)._ws_ext_sales_price7988;
                int32_t _ws_ext_wholesale_cost7989 = (it->second)._ws_ext_wholesale_cost7989;
                int32_t _ws_ext_list_price7990 = (it->second)._ws_ext_list_price7990;
                int32_t _d_date_sk7999 = tbl_Filter_TD_9950_output.getInt32(i, 0);
                int32_t _d_year8005 = tbl_Filter_TD_9950_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7948_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7955_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7956_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7957_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7961_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7962_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7963_n);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 7, _ws_ext_discount_amt7987);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 8, _ws_ext_sales_price7988);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 9, _ws_ext_wholesale_cost7989);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 10, _ws_ext_list_price7990);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 11, _d_year8005);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8612_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8612_key_rightMajor, SW_JOIN_INNER_TD_8612_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9950_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7999_k = tbl_Filter_TD_9950_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8612_key_rightMajor keyA{_d_date_sk7999_k};
            int32_t _d_date_sk7999 = tbl_Filter_TD_9950_output.getInt32(i, 0);
            int32_t _d_year8005 = tbl_Filter_TD_9950_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8612_payload_rightMajor payloadA{_d_date_sk7999, _d_year8005};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9193_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk7965_k = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8612_key_rightMajor{_ws_sold_date_sk7965_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7999 = (it->second)._d_date_sk7999;
                int32_t _d_year8005 = (it->second)._d_year8005;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id7948 = std::string(_c_customer_id7948_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7955_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7955 = std::string(_c_first_name7955_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7956_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7956 = std::string(_c_last_name7956_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7957_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag7957 = std::string(_c_preferred_cust_flag7957_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7961_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country7961 = std::string(_c_birth_country7961_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7962_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login7962 = std::string(_c_login7962_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7963_n = tbl_JOIN_INNER_TD_9193_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address7963 = std::string(_c_email_address7963_n.data());
                int32_t _ws_sold_date_sk7965 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 7);
                int32_t _ws_ext_discount_amt7987 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 8);
                int32_t _ws_ext_sales_price7988 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 9);
                int32_t _ws_ext_wholesale_cost7989 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 10);
                int32_t _ws_ext_list_price7990 = tbl_JOIN_INNER_TD_9193_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 11, _d_year8005);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7948_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7955_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7956_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7957_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7961_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7962_n);
                tbl_JOIN_INNER_TD_8612_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7963_n);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 7, _ws_ext_discount_amt7987);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 8, _ws_ext_sales_price7988);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 9, _ws_ext_wholesale_cost7989);
                tbl_JOIN_INNER_TD_8612_output.setInt32(r, 10, _ws_ext_list_price7990);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8612_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8612_output #Row: " << tbl_JOIN_INNER_TD_8612_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8316(Table &tbl_SerializeFromObject_TD_940_input, Table &tbl_Filter_TD_8316_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#7686) AND (d_year#7686 = 2002)) AND isnotnull(d_date_sk#7680)))
    // Input: ListBuffer(d_date_sk#7680, d_year#7686)
    // Output: ListBuffer(d_date_sk#7680, d_year#7686)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_940_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7686 = tbl_SerializeFromObject_TD_940_input.getInt32(i, 1);
        int32_t _d_date_sk7680 = tbl_SerializeFromObject_TD_940_input.getInt32(i, 0);
        if (((1) && (_d_year7686 == 2002)) && (1)) {
            int32_t _d_date_sk7680_t = tbl_SerializeFromObject_TD_940_input.getInt32(i, 0);
            tbl_Filter_TD_8316_output.setInt32(r, 0, _d_date_sk7680_t);
            int32_t _d_year7686_t = tbl_SerializeFromObject_TD_940_input.getInt32(i, 1);
            tbl_Filter_TD_8316_output.setInt32(r, 1, _d_year7686_t);
            r++;
        }
    }
    tbl_Filter_TD_8316_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8316_output #Row: " << tbl_Filter_TD_8316_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8905_key_leftMajor {
    int32_t _c_customer_sk7628;
    bool operator==(const SW_JOIN_INNER_TD_8905_key_leftMajor& other) const {
        return ((_c_customer_sk7628 == other._c_customer_sk7628));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8905_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8905_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7628));
    }
};
}
struct SW_JOIN_INNER_TD_8905_payload_leftMajor {
    int32_t _c_customer_sk7628;
    std::string _c_customer_id7629;
    std::string _c_first_name7636;
    std::string _c_last_name7637;
    std::string _c_preferred_cust_flag7638;
    std::string _c_birth_country7642;
    std::string _c_login7643;
    std::string _c_email_address7644;
};
struct SW_JOIN_INNER_TD_8905_key_rightMajor {
    int32_t _cs_bill_customer_sk7649;
    bool operator==(const SW_JOIN_INNER_TD_8905_key_rightMajor& other) const {
        return ((_cs_bill_customer_sk7649 == other._cs_bill_customer_sk7649));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8905_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8905_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk7649));
    }
};
}
struct SW_JOIN_INNER_TD_8905_payload_rightMajor {
    int32_t _cs_sold_date_sk7646;
    int32_t _cs_bill_customer_sk7649;
    int32_t _cs_ext_discount_amt7668;
    int32_t _cs_ext_sales_price7669;
    int32_t _cs_ext_wholesale_cost7670;
    int32_t _cs_ext_list_price7671;
};
void SW_JOIN_INNER_TD_8905(Table &tbl_Filter_TD_9512_output, Table &tbl_Filter_TD_9533_output, Table &tbl_JOIN_INNER_TD_8905_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#7628 = cs_bill_customer_sk#7649))
    // Left Table: ListBuffer(c_customer_sk#7628, c_customer_id#7629, c_first_name#7636, c_last_name#7637, c_preferred_cust_flag#7638, c_birth_country#7642, c_login#7643, c_email_address#7644)
    // Right Table: ListBuffer(cs_sold_date_sk#7646, cs_bill_customer_sk#7649, cs_ext_discount_amt#7668, cs_ext_sales_price#7669, cs_ext_wholesale_cost#7670, cs_ext_list_price#7671)
    // Output Table: ListBuffer(c_customer_id#7629, c_first_name#7636, c_last_name#7637, c_preferred_cust_flag#7638, c_birth_country#7642, c_login#7643, c_email_address#7644, cs_sold_date_sk#7646, cs_ext_discount_amt#7668, cs_ext_sales_price#7669, cs_ext_wholesale_cost#7670, cs_ext_list_price#7671)
    int left_nrow = tbl_Filter_TD_9512_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9533_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8905_key_leftMajor, SW_JOIN_INNER_TD_8905_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9512_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7628_k = tbl_Filter_TD_9512_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8905_key_leftMajor keyA{_c_customer_sk7628_k};
            int32_t _c_customer_sk7628 = tbl_Filter_TD_9512_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id7629 = std::string(_c_customer_id7629_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7636_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name7636 = std::string(_c_first_name7636_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7637_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name7637 = std::string(_c_last_name7637_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7638_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag7638 = std::string(_c_preferred_cust_flag7638_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7642_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country7642 = std::string(_c_birth_country7642_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7643_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login7643 = std::string(_c_login7643_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7644_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address7644 = std::string(_c_email_address7644_n.data());
            SW_JOIN_INNER_TD_8905_payload_leftMajor payloadA{_c_customer_sk7628, _c_customer_id7629, _c_first_name7636, _c_last_name7637, _c_preferred_cust_flag7638, _c_birth_country7642, _c_login7643, _c_email_address7644};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9533_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk7649_k = tbl_Filter_TD_9533_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8905_key_leftMajor{_cs_bill_customer_sk7649_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7628 = (it->second)._c_customer_sk7628;
                std::string _c_customer_id7629 = (it->second)._c_customer_id7629;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629_n{};
                memcpy(_c_customer_id7629_n.data(), (_c_customer_id7629).data(), (_c_customer_id7629).length());
                std::string _c_first_name7636 = (it->second)._c_first_name7636;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7636_n{};
                memcpy(_c_first_name7636_n.data(), (_c_first_name7636).data(), (_c_first_name7636).length());
                std::string _c_last_name7637 = (it->second)._c_last_name7637;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7637_n{};
                memcpy(_c_last_name7637_n.data(), (_c_last_name7637).data(), (_c_last_name7637).length());
                std::string _c_preferred_cust_flag7638 = (it->second)._c_preferred_cust_flag7638;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7638_n{};
                memcpy(_c_preferred_cust_flag7638_n.data(), (_c_preferred_cust_flag7638).data(), (_c_preferred_cust_flag7638).length());
                std::string _c_birth_country7642 = (it->second)._c_birth_country7642;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7642_n{};
                memcpy(_c_birth_country7642_n.data(), (_c_birth_country7642).data(), (_c_birth_country7642).length());
                std::string _c_login7643 = (it->second)._c_login7643;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7643_n{};
                memcpy(_c_login7643_n.data(), (_c_login7643).data(), (_c_login7643).length());
                std::string _c_email_address7644 = (it->second)._c_email_address7644;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7644_n{};
                memcpy(_c_email_address7644_n.data(), (_c_email_address7644).data(), (_c_email_address7644).length());
                int32_t _cs_sold_date_sk7646 = tbl_Filter_TD_9533_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk7649 = tbl_Filter_TD_9533_output.getInt32(i, 1);
                int32_t _cs_ext_discount_amt7668 = tbl_Filter_TD_9533_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price7669 = tbl_Filter_TD_9533_output.getInt32(i, 3);
                int32_t _cs_ext_wholesale_cost7670 = tbl_Filter_TD_9533_output.getInt32(i, 4);
                int32_t _cs_ext_list_price7671 = tbl_Filter_TD_9533_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7629_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7636_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7637_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7638_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7642_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7643_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7644_n);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 7, _cs_sold_date_sk7646);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 8, _cs_ext_discount_amt7668);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 9, _cs_ext_sales_price7669);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 10, _cs_ext_wholesale_cost7670);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 11, _cs_ext_list_price7671);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8905_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8905_key_rightMajor, SW_JOIN_INNER_TD_8905_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9533_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk7649_k = tbl_Filter_TD_9533_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8905_key_rightMajor keyA{_cs_bill_customer_sk7649_k};
            int32_t _cs_sold_date_sk7646 = tbl_Filter_TD_9533_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk7649 = tbl_Filter_TD_9533_output.getInt32(i, 1);
            int32_t _cs_ext_discount_amt7668 = tbl_Filter_TD_9533_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price7669 = tbl_Filter_TD_9533_output.getInt32(i, 3);
            int32_t _cs_ext_wholesale_cost7670 = tbl_Filter_TD_9533_output.getInt32(i, 4);
            int32_t _cs_ext_list_price7671 = tbl_Filter_TD_9533_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8905_payload_rightMajor payloadA{_cs_sold_date_sk7646, _cs_bill_customer_sk7649, _cs_ext_discount_amt7668, _cs_ext_sales_price7669, _cs_ext_wholesale_cost7670, _cs_ext_list_price7671};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9512_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7628_k = tbl_Filter_TD_9512_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8905_key_rightMajor{_c_customer_sk7628_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk7646 = (it->second)._cs_sold_date_sk7646;
                int32_t _cs_bill_customer_sk7649 = (it->second)._cs_bill_customer_sk7649;
                int32_t _cs_ext_discount_amt7668 = (it->second)._cs_ext_discount_amt7668;
                int32_t _cs_ext_sales_price7669 = (it->second)._cs_ext_sales_price7669;
                int32_t _cs_ext_wholesale_cost7670 = (it->second)._cs_ext_wholesale_cost7670;
                int32_t _cs_ext_list_price7671 = (it->second)._cs_ext_list_price7671;
                int32_t _c_customer_sk7628 = tbl_Filter_TD_9512_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id7629 = std::string(_c_customer_id7629_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7636_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name7636 = std::string(_c_first_name7636_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7637_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name7637 = std::string(_c_last_name7637_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7638_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag7638 = std::string(_c_preferred_cust_flag7638_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7642_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country7642 = std::string(_c_birth_country7642_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7643_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login7643 = std::string(_c_login7643_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7644_n = tbl_Filter_TD_9512_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address7644 = std::string(_c_email_address7644_n.data());
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 7, _cs_sold_date_sk7646);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 8, _cs_ext_discount_amt7668);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 9, _cs_ext_sales_price7669);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 10, _cs_ext_wholesale_cost7670);
                tbl_JOIN_INNER_TD_8905_output.setInt32(r, 11, _cs_ext_list_price7671);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7629_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7636_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7637_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7638_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7642_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7643_n);
                tbl_JOIN_INNER_TD_8905_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7644_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8905_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8905_output #Row: " << tbl_JOIN_INNER_TD_8905_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8753(Table &tbl_Aggregate_TD_913_output, Table &tbl_Filter_TD_8753_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#4141) AND (year_total#4141 > 0.000000)))
    // Input: ListBuffer(customer_id#4133, year_total#4141)
    // Output: ListBuffer(customer_id#4133, year_total#4141)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_913_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total4141 = tbl_Aggregate_TD_913_output.getInt32(i, 1);
        if ((1) && (_year_total4141 > 0.000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4133_t = tbl_Aggregate_TD_913_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8753_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4133_t);
            int32_t _year_total4141_t = tbl_Aggregate_TD_913_output.getInt32(i, 1);
            tbl_Filter_TD_8753_output.setInt32(r, 1, _year_total4141_t);
            r++;
        }
    }
    tbl_Filter_TD_8753_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8753_output #Row: " << tbl_Filter_TD_8753_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8715_key {
    std::string _c_customer_id7082;
    std::string _c_first_name7089;
    std::string _c_last_name7090;
    std::string _c_preferred_cust_flag7091;
    std::string _c_birth_country7095;
    std::string _c_login7096;
    std::string _c_email_address7097;
    int32_t _d_year7128;
    bool operator==(const SW_Aggregate_TD_8715_key& other) const { return (_c_customer_id7082 == other._c_customer_id7082) && (_c_first_name7089 == other._c_first_name7089) && (_c_last_name7090 == other._c_last_name7090) && (_c_preferred_cust_flag7091 == other._c_preferred_cust_flag7091) && (_c_birth_country7095 == other._c_birth_country7095) && (_c_login7096 == other._c_login7096) && (_c_email_address7097 == other._c_email_address7097) && (_d_year7128 == other._d_year7128); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8715_key> {
    std::size_t operator() (const SW_Aggregate_TD_8715_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id7082)) + (hash<string>()(k._c_first_name7089)) + (hash<string>()(k._c_last_name7090)) + (hash<string>()(k._c_preferred_cust_flag7091)) + (hash<string>()(k._c_birth_country7095)) + (hash<string>()(k._c_login7096)) + (hash<string>()(k._c_email_address7097)) + (hash<int32_t>()(k._d_year7128));
    }
};
}
struct SW_Aggregate_TD_8715_payload {
    std::string _customer_id4248;
    std::string _customer_first_name4249;
    std::string _customer_last_name4250;
    std::string _customer_preferred_cust_flag4251;
    int32_t _year_total4256_sum_0;
};
void SW_Aggregate_TD_8715(Table &tbl_JOIN_INNER_TD_9550_output, Table &tbl_Aggregate_TD_8715_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#7082, c_first_name#7089, c_last_name#7090, c_preferred_cust_flag#7091, c_birth_country#7095, c_login#7096, c_email_address#7097, d_year#7128, c_customer_id#7082 AS customer_id#4248, c_first_name#7089 AS customer_first_name#4249, c_last_name#7090 AS customer_last_name#4250, c_preferred_cust_flag#7091 AS customer_preferred_cust_flag#4251, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ss_ext_list_price#7116 as decimal(8,2))) - promote_precision(cast(ss_ext_wholesale_cost#7115 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(ss_ext_discount_amt#7113 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(ss_ext_sales_price#7114 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4256)
    // Input: ListBuffer(c_customer_id#7082, c_first_name#7089, c_last_name#7090, c_preferred_cust_flag#7091, c_birth_country#7095, c_login#7096, c_email_address#7097, ss_ext_discount_amt#7113, ss_ext_sales_price#7114, ss_ext_wholesale_cost#7115, ss_ext_list_price#7116, d_year#7128)
    // Output: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#4256)
    std::unordered_map<SW_Aggregate_TD_8715_key, SW_Aggregate_TD_8715_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9550_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7082 = tbl_JOIN_INNER_TD_9550_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7089 = tbl_JOIN_INNER_TD_9550_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7090 = tbl_JOIN_INNER_TD_9550_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7091 = tbl_JOIN_INNER_TD_9550_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7095 = tbl_JOIN_INNER_TD_9550_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login7096 = tbl_JOIN_INNER_TD_9550_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address7097 = tbl_JOIN_INNER_TD_9550_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ss_ext_discount_amt7113 = tbl_JOIN_INNER_TD_9550_output.getInt32(i, 7);
        int32_t _ss_ext_sales_price7114 = tbl_JOIN_INNER_TD_9550_output.getInt32(i, 8);
        int32_t _ss_ext_wholesale_cost7115 = tbl_JOIN_INNER_TD_9550_output.getInt32(i, 9);
        int32_t _ss_ext_list_price7116 = tbl_JOIN_INNER_TD_9550_output.getInt32(i, 10);
        int32_t _d_year7128 = tbl_JOIN_INNER_TD_9550_output.getInt32(i, 11);
        SW_Aggregate_TD_8715_key k{std::string(_c_customer_id7082.data()), std::string(_c_first_name7089.data()), std::string(_c_last_name7090.data()), std::string(_c_preferred_cust_flag7091.data()), std::string(_c_birth_country7095.data()), std::string(_c_login7096.data()), std::string(_c_email_address7097.data()), _d_year7128};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4248 = _c_customer_id7082;
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249 = _c_first_name7089;
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250 = _c_last_name7090;
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251 = _c_preferred_cust_flag7091;
        int64_t _year_total4256_sum_0 = ((((_ss_ext_list_price7116 - _ss_ext_wholesale_cost7115) - _ss_ext_discount_amt7113) + _ss_ext_sales_price7114) / 2.00);
        SW_Aggregate_TD_8715_payload p{std::string(_customer_id4248.data()), std::string(_customer_first_name4249.data()), std::string(_customer_last_name4250.data()), std::string(_customer_preferred_cust_flag4251.data()), _year_total4256_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4256_sum_0 + _year_total4256_sum_0;
            p._year_total4256_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id7082 not required in the output table
        // _c_first_name7089 not required in the output table
        // _c_last_name7090 not required in the output table
        // _c_preferred_cust_flag7091 not required in the output table
        // _c_birth_country7095 not required in the output table
        // _c_login7096 not required in the output table
        // _c_email_address7097 not required in the output table
        // _d_year7128 not required in the output table
        // Unsupported payload type: StringType
        // Unsupported payload type: StringType
        // Unsupported payload type: StringType
        // Unsupported payload type: StringType
        int32_t _year_total4256 = (it.second)._year_total4256_sum_0;
        tbl_Aggregate_TD_8715_output.setInt32(r, 4, _year_total4256);
        ++r;
    }
    tbl_Aggregate_TD_8715_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8715_output #Row: " << tbl_Aggregate_TD_8715_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8807(Table &tbl_Aggregate_TD_9828_output, Table &tbl_Filter_TD_8807_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#4131) AND (year_total#4131 > 0.000000)))
    // Input: ListBuffer(customer_id#4123, year_total#4131)
    // Output: ListBuffer(customer_id#4123, year_total#4131)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9828_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total4131 = tbl_Aggregate_TD_9828_output.getInt32(i, 1);
        if ((1) && (_year_total4131 > 0.000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_t = tbl_Aggregate_TD_9828_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8807_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_t);
            int32_t _year_total4131_t = tbl_Aggregate_TD_9828_output.getInt32(i, 1);
            tbl_Filter_TD_8807_output.setInt32(r, 1, _year_total4131_t);
            r++;
        }
    }
    tbl_Filter_TD_8807_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8807_output #Row: " << tbl_Filter_TD_8807_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7647(Table &tbl_SerializeFromObject_TD_8926_input, Table &tbl_Filter_TD_7647_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#8208) AND isnotnull(ws_sold_date_sk#8204)))
    // Input: ListBuffer(ws_sold_date_sk#8204, ws_bill_customer_sk#8208, ws_ext_discount_amt#8226, ws_ext_sales_price#8227, ws_ext_wholesale_cost#8228, ws_ext_list_price#8229)
    // Output: ListBuffer(ws_sold_date_sk#8204, ws_bill_customer_sk#8208, ws_ext_discount_amt#8226, ws_ext_sales_price#8227, ws_ext_wholesale_cost#8228, ws_ext_list_price#8229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8926_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk8208 = tbl_SerializeFromObject_TD_8926_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk8204 = tbl_SerializeFromObject_TD_8926_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk8204_t = tbl_SerializeFromObject_TD_8926_input.getInt32(i, 0);
            tbl_Filter_TD_7647_output.setInt32(r, 0, _ws_sold_date_sk8204_t);
            int32_t _ws_bill_customer_sk8208_t = tbl_SerializeFromObject_TD_8926_input.getInt32(i, 1);
            tbl_Filter_TD_7647_output.setInt32(r, 1, _ws_bill_customer_sk8208_t);
            int32_t _ws_ext_discount_amt8226_t = tbl_SerializeFromObject_TD_8926_input.getInt32(i, 2);
            tbl_Filter_TD_7647_output.setInt32(r, 2, _ws_ext_discount_amt8226_t);
            int32_t _ws_ext_sales_price8227_t = tbl_SerializeFromObject_TD_8926_input.getInt32(i, 3);
            tbl_Filter_TD_7647_output.setInt32(r, 3, _ws_ext_sales_price8227_t);
            int32_t _ws_ext_wholesale_cost8228_t = tbl_SerializeFromObject_TD_8926_input.getInt32(i, 4);
            tbl_Filter_TD_7647_output.setInt32(r, 4, _ws_ext_wholesale_cost8228_t);
            int32_t _ws_ext_list_price8229_t = tbl_SerializeFromObject_TD_8926_input.getInt32(i, 5);
            tbl_Filter_TD_7647_output.setInt32(r, 5, _ws_ext_list_price8229_t);
            r++;
        }
    }
    tbl_Filter_TD_7647_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7647_output #Row: " << tbl_Filter_TD_7647_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7928(Table &tbl_SerializeFromObject_TD_8482_input, Table &tbl_Filter_TD_7928_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#8186) AND isnotnull(c_customer_id#8187)))
    // Input: ListBuffer(c_customer_sk#8186, c_customer_id#8187, c_first_name#8194, c_last_name#8195, c_preferred_cust_flag#8196, c_birth_country#8200, c_login#8201, c_email_address#8202)
    // Output: ListBuffer(c_customer_sk#8186, c_customer_id#8187, c_first_name#8194, c_last_name#8195, c_preferred_cust_flag#8196, c_birth_country#8200, c_login#8201, c_email_address#8202)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8482_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk8186 = tbl_SerializeFromObject_TD_8482_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187 = tbl_SerializeFromObject_TD_8482_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((1) && (1)) {
            int32_t _c_customer_sk8186_t = tbl_SerializeFromObject_TD_8482_input.getInt32(i, 0);
            tbl_Filter_TD_7928_output.setInt32(r, 0, _c_customer_sk8186_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187_t = tbl_SerializeFromObject_TD_8482_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id8187_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8194_t = tbl_SerializeFromObject_TD_8482_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8194_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name8195_t = tbl_SerializeFromObject_TD_8482_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_7928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name8195_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8196_t = tbl_SerializeFromObject_TD_8482_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_7928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag8196_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8200_t = tbl_SerializeFromObject_TD_8482_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_7928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country8200_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login8201_t = tbl_SerializeFromObject_TD_8482_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_7928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login8201_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address8202_t = tbl_SerializeFromObject_TD_8482_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_7928_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address8202_t);
            r++;
        }
    }
    tbl_Filter_TD_7928_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7928_output #Row: " << tbl_Filter_TD_7928_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7545_key {
    std::string _c_customer_id7948;
    std::string _c_first_name7955;
    std::string _c_last_name7956;
    std::string _c_preferred_cust_flag7957;
    std::string _c_birth_country7961;
    std::string _c_login7962;
    std::string _c_email_address7963;
    int32_t _d_year8005;
    bool operator==(const SW_Aggregate_TD_7545_key& other) const { return (_c_customer_id7948 == other._c_customer_id7948) && (_c_first_name7955 == other._c_first_name7955) && (_c_last_name7956 == other._c_last_name7956) && (_c_preferred_cust_flag7957 == other._c_preferred_cust_flag7957) && (_c_birth_country7961 == other._c_birth_country7961) && (_c_login7962 == other._c_login7962) && (_c_email_address7963 == other._c_email_address7963) && (_d_year8005 == other._d_year8005); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7545_key> {
    std::size_t operator() (const SW_Aggregate_TD_7545_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id7948)) + (hash<string>()(k._c_first_name7955)) + (hash<string>()(k._c_last_name7956)) + (hash<string>()(k._c_preferred_cust_flag7957)) + (hash<string>()(k._c_birth_country7961)) + (hash<string>()(k._c_login7962)) + (hash<string>()(k._c_email_address7963)) + (hash<int32_t>()(k._d_year8005));
    }
};
}
struct SW_Aggregate_TD_7545_payload {
    std::string _customer_id4143;
    int32_t _year_total4151_sum_0;
};
void SW_Aggregate_TD_7545(Table &tbl_JOIN_INNER_TD_8612_output, Table &tbl_Aggregate_TD_7545_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#7948, c_first_name#7955, c_last_name#7956, c_preferred_cust_flag#7957, c_birth_country#7961, c_login#7962, c_email_address#7963, d_year#8005, c_customer_id#7948 AS customer_id#4143, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ws_ext_list_price#7990 as decimal(8,2))) - promote_precision(cast(ws_ext_wholesale_cost#7989 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(ws_ext_discount_amt#7987 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(ws_ext_sales_price#7988 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4151)
    // Input: ListBuffer(c_customer_id#7948, c_first_name#7955, c_last_name#7956, c_preferred_cust_flag#7957, c_birth_country#7961, c_login#7962, c_email_address#7963, ws_ext_discount_amt#7987, ws_ext_sales_price#7988, ws_ext_wholesale_cost#7989, ws_ext_list_price#7990, d_year#8005)
    // Output: ListBuffer(customer_id#4143, year_total#4151)
    std::unordered_map<SW_Aggregate_TD_7545_key, SW_Aggregate_TD_7545_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8612_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7948 = tbl_JOIN_INNER_TD_8612_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7955 = tbl_JOIN_INNER_TD_8612_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7956 = tbl_JOIN_INNER_TD_8612_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7957 = tbl_JOIN_INNER_TD_8612_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7961 = tbl_JOIN_INNER_TD_8612_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login7962 = tbl_JOIN_INNER_TD_8612_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address7963 = tbl_JOIN_INNER_TD_8612_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ws_ext_discount_amt7987 = tbl_JOIN_INNER_TD_8612_output.getInt32(i, 7);
        int32_t _ws_ext_sales_price7988 = tbl_JOIN_INNER_TD_8612_output.getInt32(i, 8);
        int32_t _ws_ext_wholesale_cost7989 = tbl_JOIN_INNER_TD_8612_output.getInt32(i, 9);
        int32_t _ws_ext_list_price7990 = tbl_JOIN_INNER_TD_8612_output.getInt32(i, 10);
        int32_t _d_year8005 = tbl_JOIN_INNER_TD_8612_output.getInt32(i, 11);
        SW_Aggregate_TD_7545_key k{std::string(_c_customer_id7948.data()), std::string(_c_first_name7955.data()), std::string(_c_last_name7956.data()), std::string(_c_preferred_cust_flag7957.data()), std::string(_c_birth_country7961.data()), std::string(_c_login7962.data()), std::string(_c_email_address7963.data()), _d_year8005};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4143 = _c_customer_id7948;
        int64_t _year_total4151_sum_0 = ((((_ws_ext_list_price7990 - _ws_ext_wholesale_cost7989) - _ws_ext_discount_amt7987) + _ws_ext_sales_price7988) / 2.00);
        SW_Aggregate_TD_7545_payload p{std::string(_customer_id4143.data()), _year_total4151_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4151_sum_0 + _year_total4151_sum_0;
            p._year_total4151_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id7948 not required in the output table
        // _c_first_name7955 not required in the output table
        // _c_last_name7956 not required in the output table
        // _c_preferred_cust_flag7957 not required in the output table
        // _c_birth_country7961 not required in the output table
        // _c_login7962 not required in the output table
        // _c_email_address7963 not required in the output table
        // _d_year8005 not required in the output table
        // Unsupported payload type: StringType
        int32_t _year_total4151 = (it.second)._year_total4151_sum_0;
        tbl_Aggregate_TD_7545_output.setInt32(r, 1, _year_total4151);
        ++r;
    }
    tbl_Aggregate_TD_7545_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7545_output #Row: " << tbl_Aggregate_TD_7545_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7499_key_leftMajor {
    int32_t _cs_sold_date_sk7646;
    bool operator==(const SW_JOIN_INNER_TD_7499_key_leftMajor& other) const {
        return ((_cs_sold_date_sk7646 == other._cs_sold_date_sk7646));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7499_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7499_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk7646));
    }
};
}
struct SW_JOIN_INNER_TD_7499_payload_leftMajor {
    std::string _c_customer_id7629;
    std::string _c_first_name7636;
    std::string _c_last_name7637;
    std::string _c_preferred_cust_flag7638;
    std::string _c_birth_country7642;
    std::string _c_login7643;
    std::string _c_email_address7644;
    int32_t _cs_sold_date_sk7646;
    int32_t _cs_ext_discount_amt7668;
    int32_t _cs_ext_sales_price7669;
    int32_t _cs_ext_wholesale_cost7670;
    int32_t _cs_ext_list_price7671;
};
struct SW_JOIN_INNER_TD_7499_key_rightMajor {
    int32_t _d_date_sk7680;
    bool operator==(const SW_JOIN_INNER_TD_7499_key_rightMajor& other) const {
        return ((_d_date_sk7680 == other._d_date_sk7680));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7499_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7499_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7680));
    }
};
}
struct SW_JOIN_INNER_TD_7499_payload_rightMajor {
    int32_t _d_date_sk7680;
    int32_t _d_year7686;
};
void SW_JOIN_INNER_TD_7499(Table &tbl_JOIN_INNER_TD_8905_output, Table &tbl_Filter_TD_8316_output, Table &tbl_JOIN_INNER_TD_7499_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#7646 = d_date_sk#7680))
    // Left Table: ListBuffer(c_customer_id#7629, c_first_name#7636, c_last_name#7637, c_preferred_cust_flag#7638, c_birth_country#7642, c_login#7643, c_email_address#7644, cs_sold_date_sk#7646, cs_ext_discount_amt#7668, cs_ext_sales_price#7669, cs_ext_wholesale_cost#7670, cs_ext_list_price#7671)
    // Right Table: ListBuffer(d_date_sk#7680, d_year#7686)
    // Output Table: ListBuffer(c_customer_id#7629, c_first_name#7636, c_last_name#7637, c_preferred_cust_flag#7638, c_birth_country#7642, c_login#7643, c_email_address#7644, cs_ext_discount_amt#7668, cs_ext_sales_price#7669, cs_ext_wholesale_cost#7670, cs_ext_list_price#7671, d_year#7686)
    int left_nrow = tbl_JOIN_INNER_TD_8905_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8316_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7499_key_leftMajor, SW_JOIN_INNER_TD_7499_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8905_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk7646_k = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_7499_key_leftMajor keyA{_cs_sold_date_sk7646_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id7629 = std::string(_c_customer_id7629_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7636_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7636 = std::string(_c_first_name7636_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7637_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7637 = std::string(_c_last_name7637_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7638_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag7638 = std::string(_c_preferred_cust_flag7638_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7642_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country7642 = std::string(_c_birth_country7642_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7643_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login7643 = std::string(_c_login7643_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7644_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address7644 = std::string(_c_email_address7644_n.data());
            int32_t _cs_sold_date_sk7646 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 7);
            int32_t _cs_ext_discount_amt7668 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 8);
            int32_t _cs_ext_sales_price7669 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 9);
            int32_t _cs_ext_wholesale_cost7670 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 10);
            int32_t _cs_ext_list_price7671 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_7499_payload_leftMajor payloadA{_c_customer_id7629, _c_first_name7636, _c_last_name7637, _c_preferred_cust_flag7638, _c_birth_country7642, _c_login7643, _c_email_address7644, _cs_sold_date_sk7646, _cs_ext_discount_amt7668, _cs_ext_sales_price7669, _cs_ext_wholesale_cost7670, _cs_ext_list_price7671};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8316_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7680_k = tbl_Filter_TD_8316_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7499_key_leftMajor{_d_date_sk7680_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id7629 = (it->second)._c_customer_id7629;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629_n{};
                memcpy(_c_customer_id7629_n.data(), (_c_customer_id7629).data(), (_c_customer_id7629).length());
                std::string _c_first_name7636 = (it->second)._c_first_name7636;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7636_n{};
                memcpy(_c_first_name7636_n.data(), (_c_first_name7636).data(), (_c_first_name7636).length());
                std::string _c_last_name7637 = (it->second)._c_last_name7637;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7637_n{};
                memcpy(_c_last_name7637_n.data(), (_c_last_name7637).data(), (_c_last_name7637).length());
                std::string _c_preferred_cust_flag7638 = (it->second)._c_preferred_cust_flag7638;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7638_n{};
                memcpy(_c_preferred_cust_flag7638_n.data(), (_c_preferred_cust_flag7638).data(), (_c_preferred_cust_flag7638).length());
                std::string _c_birth_country7642 = (it->second)._c_birth_country7642;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7642_n{};
                memcpy(_c_birth_country7642_n.data(), (_c_birth_country7642).data(), (_c_birth_country7642).length());
                std::string _c_login7643 = (it->second)._c_login7643;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7643_n{};
                memcpy(_c_login7643_n.data(), (_c_login7643).data(), (_c_login7643).length());
                std::string _c_email_address7644 = (it->second)._c_email_address7644;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7644_n{};
                memcpy(_c_email_address7644_n.data(), (_c_email_address7644).data(), (_c_email_address7644).length());
                int32_t _cs_sold_date_sk7646 = (it->second)._cs_sold_date_sk7646;
                int32_t _cs_ext_discount_amt7668 = (it->second)._cs_ext_discount_amt7668;
                int32_t _cs_ext_sales_price7669 = (it->second)._cs_ext_sales_price7669;
                int32_t _cs_ext_wholesale_cost7670 = (it->second)._cs_ext_wholesale_cost7670;
                int32_t _cs_ext_list_price7671 = (it->second)._cs_ext_list_price7671;
                int32_t _d_date_sk7680 = tbl_Filter_TD_8316_output.getInt32(i, 0);
                int32_t _d_year7686 = tbl_Filter_TD_8316_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7629_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7636_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7637_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7638_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7642_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7643_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7644_n);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 7, _cs_ext_discount_amt7668);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 8, _cs_ext_sales_price7669);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 9, _cs_ext_wholesale_cost7670);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 10, _cs_ext_list_price7671);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 11, _d_year7686);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7499_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7499_key_rightMajor, SW_JOIN_INNER_TD_7499_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8316_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7680_k = tbl_Filter_TD_8316_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7499_key_rightMajor keyA{_d_date_sk7680_k};
            int32_t _d_date_sk7680 = tbl_Filter_TD_8316_output.getInt32(i, 0);
            int32_t _d_year7686 = tbl_Filter_TD_8316_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7499_payload_rightMajor payloadA{_d_date_sk7680, _d_year7686};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8905_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk7646_k = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7499_key_rightMajor{_cs_sold_date_sk7646_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7680 = (it->second)._d_date_sk7680;
                int32_t _d_year7686 = (it->second)._d_year7686;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id7629 = std::string(_c_customer_id7629_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7636_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7636 = std::string(_c_first_name7636_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7637_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7637 = std::string(_c_last_name7637_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7638_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag7638 = std::string(_c_preferred_cust_flag7638_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7642_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country7642 = std::string(_c_birth_country7642_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7643_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login7643 = std::string(_c_login7643_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7644_n = tbl_JOIN_INNER_TD_8905_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address7644 = std::string(_c_email_address7644_n.data());
                int32_t _cs_sold_date_sk7646 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 7);
                int32_t _cs_ext_discount_amt7668 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 8);
                int32_t _cs_ext_sales_price7669 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 9);
                int32_t _cs_ext_wholesale_cost7670 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 10);
                int32_t _cs_ext_list_price7671 = tbl_JOIN_INNER_TD_8905_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 11, _d_year7686);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7629_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7636_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7637_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7638_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7642_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7643_n);
                tbl_JOIN_INNER_TD_7499_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7644_n);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 7, _cs_ext_discount_amt7668);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 8, _cs_ext_sales_price7669);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 9, _cs_ext_wholesale_cost7670);
                tbl_JOIN_INNER_TD_7499_output.setInt32(r, 10, _cs_ext_list_price7671);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7499_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7499_output #Row: " << tbl_JOIN_INNER_TD_7499_output.getNumRow() << std::endl;
}

void SW_Project_TD_7694(Table &tbl_Filter_TD_8753_output, Table &tbl_Project_TD_7694_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(customer_id#4133 AS customer_id#7549, year_total#4141 AS year_total#7557)
    // Input: ListBuffer(customer_id#4133, year_total#4141)
    // Output: ListBuffer(customer_id#7549, year_total#7557)
    int nrow1 = tbl_Filter_TD_8753_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4133 = tbl_Filter_TD_8753_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _year_total4141 = tbl_Filter_TD_8753_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_id7549 = _customer_id4133;
        tbl_Project_TD_7694_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id7549);
        int32_t _year_total7557 = _year_total4141;
        tbl_Project_TD_7694_output.setInt32(i, 1, _year_total7557);
    }
    tbl_Project_TD_7694_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_7694_output #Row: " << tbl_Project_TD_7694_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7647_key_leftMajor {
    std::string _customer_id4123;
    bool operator==(const SW_JOIN_INNER_TD_7647_key_leftMajor& other) const {
        return ((_customer_id4123 == other._customer_id4123));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7647_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7647_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4123));
    }
};
}
struct SW_JOIN_INNER_TD_7647_payload_leftMajor {
    std::string _customer_id4123;
    int32_t _year_total4131;
};
struct SW_JOIN_INNER_TD_7647_key_rightMajor {
    std::string _customer_id4248;
    bool operator==(const SW_JOIN_INNER_TD_7647_key_rightMajor& other) const {
        return ((_customer_id4248 == other._customer_id4248));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7647_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7647_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4248));
    }
};
}
struct SW_JOIN_INNER_TD_7647_payload_rightMajor {
    std::string _customer_id4248;
    std::string _customer_first_name4249;
    std::string _customer_last_name4250;
    std::string _customer_preferred_cust_flag4251;
    int32_t _year_total4256;
};
void SW_JOIN_INNER_TD_7647(Table &tbl_Filter_TD_8807_output, Table &tbl_Aggregate_TD_8715_output, Table &tbl_JOIN_INNER_TD_7647_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#4248 = customer_id#4123))
    // Left Table: ListBuffer(customer_id#4123, year_total#4131)
    // Right Table: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#4256)
    // Output Table: ListBuffer(customer_id#4123, year_total#4131, customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#4256)
    int left_nrow = tbl_Filter_TD_8807_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_8715_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7647_key_leftMajor, SW_JOIN_INNER_TD_7647_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8807_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_Filter_TD_8807_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            SW_JOIN_INNER_TD_7647_key_leftMajor keyA{_customer_id4123_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_Filter_TD_8807_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123 = std::string(_customer_id4123_n.data());
            int32_t _year_total4131 = tbl_Filter_TD_8807_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7647_payload_leftMajor payloadA{_customer_id4123, _year_total4131};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_8715_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_k_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4248_k = std::string(_customer_id4248_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7647_key_leftMajor{_customer_id4248_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4123 = (it->second)._customer_id4123;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n{};
                memcpy(_customer_id4123_n.data(), (_customer_id4123).data(), (_customer_id4123).length());
                int32_t _year_total4131 = (it->second)._year_total4131;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4248 = std::string(_customer_id4248_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
                int32_t _year_total4256 = tbl_Aggregate_TD_8715_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_n);
                tbl_JOIN_INNER_TD_7647_output.setInt32(r, 1, _year_total4131);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id4248_n);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag4251_n);
                tbl_JOIN_INNER_TD_7647_output.setInt32(r, 6, _year_total4256);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7647_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7647_key_rightMajor, SW_JOIN_INNER_TD_7647_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_8715_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_k_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4248_k = std::string(_customer_id4248_k_n.data());
            SW_JOIN_INNER_TD_7647_key_rightMajor keyA{_customer_id4248_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4248 = std::string(_customer_id4248_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_Aggregate_TD_8715_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
            int32_t _year_total4256 = tbl_Aggregate_TD_8715_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7647_payload_rightMajor payloadA{_customer_id4248, _customer_first_name4249, _customer_last_name4250, _customer_preferred_cust_flag4251, _year_total4256};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8807_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_Filter_TD_8807_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7647_key_rightMajor{_customer_id4123_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4248 = (it->second)._customer_id4248;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n{};
                memcpy(_customer_id4248_n.data(), (_customer_id4248).data(), (_customer_id4248).length());
                std::string _customer_first_name4249 = (it->second)._customer_first_name4249;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n{};
                memcpy(_customer_first_name4249_n.data(), (_customer_first_name4249).data(), (_customer_first_name4249).length());
                std::string _customer_last_name4250 = (it->second)._customer_last_name4250;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n{};
                memcpy(_customer_last_name4250_n.data(), (_customer_last_name4250).data(), (_customer_last_name4250).length());
                std::string _customer_preferred_cust_flag4251 = (it->second)._customer_preferred_cust_flag4251;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n{};
                memcpy(_customer_preferred_cust_flag4251_n.data(), (_customer_preferred_cust_flag4251).data(), (_customer_preferred_cust_flag4251).length());
                int32_t _year_total4256 = (it->second)._year_total4256;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_Filter_TD_8807_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4123 = std::string(_customer_id4123_n.data());
                int32_t _year_total4131 = tbl_Filter_TD_8807_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id4248_n);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag4251_n);
                tbl_JOIN_INNER_TD_7647_output.setInt32(r, 6, _year_total4256);
                tbl_JOIN_INNER_TD_7647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_n);
                tbl_JOIN_INNER_TD_7647_output.setInt32(r, 1, _year_total4131);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7647_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7647_output #Row: " << tbl_JOIN_INNER_TD_7647_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6367(Table &tbl_SerializeFromObject_TD_7408_input, Table &tbl_Filter_TD_6367_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#8244) AND (d_year#8244 = 2002)) AND isnotnull(d_date_sk#8238)))
    // Input: ListBuffer(d_date_sk#8238, d_year#8244)
    // Output: ListBuffer(d_date_sk#8238, d_year#8244)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7408_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year8244 = tbl_SerializeFromObject_TD_7408_input.getInt32(i, 1);
        int32_t _d_date_sk8238 = tbl_SerializeFromObject_TD_7408_input.getInt32(i, 0);
        if (((1) && (_d_year8244 == 2002)) && (1)) {
            int32_t _d_date_sk8238_t = tbl_SerializeFromObject_TD_7408_input.getInt32(i, 0);
            tbl_Filter_TD_6367_output.setInt32(r, 0, _d_date_sk8238_t);
            int32_t _d_year8244_t = tbl_SerializeFromObject_TD_7408_input.getInt32(i, 1);
            tbl_Filter_TD_6367_output.setInt32(r, 1, _d_year8244_t);
            r++;
        }
    }
    tbl_Filter_TD_6367_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6367_output #Row: " << tbl_Filter_TD_6367_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6668_key_leftMajor {
    int32_t _c_customer_sk8186;
    bool operator==(const SW_JOIN_INNER_TD_6668_key_leftMajor& other) const {
        return ((_c_customer_sk8186 == other._c_customer_sk8186));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6668_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6668_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk8186));
    }
};
}
struct SW_JOIN_INNER_TD_6668_payload_leftMajor {
    int32_t _c_customer_sk8186;
    std::string _c_customer_id8187;
    std::string _c_first_name8194;
    std::string _c_last_name8195;
    std::string _c_preferred_cust_flag8196;
    std::string _c_birth_country8200;
    std::string _c_login8201;
    std::string _c_email_address8202;
};
struct SW_JOIN_INNER_TD_6668_key_rightMajor {
    int32_t _ws_bill_customer_sk8208;
    bool operator==(const SW_JOIN_INNER_TD_6668_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk8208 == other._ws_bill_customer_sk8208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6668_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6668_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk8208));
    }
};
}
struct SW_JOIN_INNER_TD_6668_payload_rightMajor {
    int32_t _ws_sold_date_sk8204;
    int32_t _ws_bill_customer_sk8208;
    int32_t _ws_ext_discount_amt8226;
    int32_t _ws_ext_sales_price8227;
    int32_t _ws_ext_wholesale_cost8228;
    int32_t _ws_ext_list_price8229;
};
void SW_JOIN_INNER_TD_6668(Table &tbl_Filter_TD_7928_output, Table &tbl_Filter_TD_7647_output, Table &tbl_JOIN_INNER_TD_6668_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#8186 = ws_bill_customer_sk#8208))
    // Left Table: ListBuffer(c_customer_sk#8186, c_customer_id#8187, c_first_name#8194, c_last_name#8195, c_preferred_cust_flag#8196, c_birth_country#8200, c_login#8201, c_email_address#8202)
    // Right Table: ListBuffer(ws_sold_date_sk#8204, ws_bill_customer_sk#8208, ws_ext_discount_amt#8226, ws_ext_sales_price#8227, ws_ext_wholesale_cost#8228, ws_ext_list_price#8229)
    // Output Table: ListBuffer(c_customer_id#8187, c_first_name#8194, c_last_name#8195, c_preferred_cust_flag#8196, c_birth_country#8200, c_login#8201, c_email_address#8202, ws_sold_date_sk#8204, ws_ext_discount_amt#8226, ws_ext_sales_price#8227, ws_ext_wholesale_cost#8228, ws_ext_list_price#8229)
    int left_nrow = tbl_Filter_TD_7928_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7647_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6668_key_leftMajor, SW_JOIN_INNER_TD_6668_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7928_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk8186_k = tbl_Filter_TD_7928_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6668_key_leftMajor keyA{_c_customer_sk8186_k};
            int32_t _c_customer_sk8186 = tbl_Filter_TD_7928_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id8187 = std::string(_c_customer_id8187_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8194_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8194 = std::string(_c_first_name8194_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name8195_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name8195 = std::string(_c_last_name8195_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8196_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag8196 = std::string(_c_preferred_cust_flag8196_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8200_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country8200 = std::string(_c_birth_country8200_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login8201_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login8201 = std::string(_c_login8201_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address8202_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address8202 = std::string(_c_email_address8202_n.data());
            SW_JOIN_INNER_TD_6668_payload_leftMajor payloadA{_c_customer_sk8186, _c_customer_id8187, _c_first_name8194, _c_last_name8195, _c_preferred_cust_flag8196, _c_birth_country8200, _c_login8201, _c_email_address8202};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7647_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk8208_k = tbl_Filter_TD_7647_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6668_key_leftMajor{_ws_bill_customer_sk8208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk8186 = (it->second)._c_customer_sk8186;
                std::string _c_customer_id8187 = (it->second)._c_customer_id8187;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187_n{};
                memcpy(_c_customer_id8187_n.data(), (_c_customer_id8187).data(), (_c_customer_id8187).length());
                std::string _c_first_name8194 = (it->second)._c_first_name8194;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8194_n{};
                memcpy(_c_first_name8194_n.data(), (_c_first_name8194).data(), (_c_first_name8194).length());
                std::string _c_last_name8195 = (it->second)._c_last_name8195;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name8195_n{};
                memcpy(_c_last_name8195_n.data(), (_c_last_name8195).data(), (_c_last_name8195).length());
                std::string _c_preferred_cust_flag8196 = (it->second)._c_preferred_cust_flag8196;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8196_n{};
                memcpy(_c_preferred_cust_flag8196_n.data(), (_c_preferred_cust_flag8196).data(), (_c_preferred_cust_flag8196).length());
                std::string _c_birth_country8200 = (it->second)._c_birth_country8200;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8200_n{};
                memcpy(_c_birth_country8200_n.data(), (_c_birth_country8200).data(), (_c_birth_country8200).length());
                std::string _c_login8201 = (it->second)._c_login8201;
                std::array<char, TPCDS_READ_MAX + 1> _c_login8201_n{};
                memcpy(_c_login8201_n.data(), (_c_login8201).data(), (_c_login8201).length());
                std::string _c_email_address8202 = (it->second)._c_email_address8202;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address8202_n{};
                memcpy(_c_email_address8202_n.data(), (_c_email_address8202).data(), (_c_email_address8202).length());
                int32_t _ws_sold_date_sk8204 = tbl_Filter_TD_7647_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk8208 = tbl_Filter_TD_7647_output.getInt32(i, 1);
                int32_t _ws_ext_discount_amt8226 = tbl_Filter_TD_7647_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price8227 = tbl_Filter_TD_7647_output.getInt32(i, 3);
                int32_t _ws_ext_wholesale_cost8228 = tbl_Filter_TD_7647_output.getInt32(i, 4);
                int32_t _ws_ext_list_price8229 = tbl_Filter_TD_7647_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id8187_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8194_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name8195_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag8196_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country8200_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login8201_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address8202_n);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 7, _ws_sold_date_sk8204);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 8, _ws_ext_discount_amt8226);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 9, _ws_ext_sales_price8227);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 10, _ws_ext_wholesale_cost8228);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 11, _ws_ext_list_price8229);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6668_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6668_key_rightMajor, SW_JOIN_INNER_TD_6668_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7647_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk8208_k = tbl_Filter_TD_7647_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6668_key_rightMajor keyA{_ws_bill_customer_sk8208_k};
            int32_t _ws_sold_date_sk8204 = tbl_Filter_TD_7647_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk8208 = tbl_Filter_TD_7647_output.getInt32(i, 1);
            int32_t _ws_ext_discount_amt8226 = tbl_Filter_TD_7647_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price8227 = tbl_Filter_TD_7647_output.getInt32(i, 3);
            int32_t _ws_ext_wholesale_cost8228 = tbl_Filter_TD_7647_output.getInt32(i, 4);
            int32_t _ws_ext_list_price8229 = tbl_Filter_TD_7647_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_6668_payload_rightMajor payloadA{_ws_sold_date_sk8204, _ws_bill_customer_sk8208, _ws_ext_discount_amt8226, _ws_ext_sales_price8227, _ws_ext_wholesale_cost8228, _ws_ext_list_price8229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7928_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk8186_k = tbl_Filter_TD_7928_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6668_key_rightMajor{_c_customer_sk8186_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk8204 = (it->second)._ws_sold_date_sk8204;
                int32_t _ws_bill_customer_sk8208 = (it->second)._ws_bill_customer_sk8208;
                int32_t _ws_ext_discount_amt8226 = (it->second)._ws_ext_discount_amt8226;
                int32_t _ws_ext_sales_price8227 = (it->second)._ws_ext_sales_price8227;
                int32_t _ws_ext_wholesale_cost8228 = (it->second)._ws_ext_wholesale_cost8228;
                int32_t _ws_ext_list_price8229 = (it->second)._ws_ext_list_price8229;
                int32_t _c_customer_sk8186 = tbl_Filter_TD_7928_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id8187 = std::string(_c_customer_id8187_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8194_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8194 = std::string(_c_first_name8194_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name8195_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name8195 = std::string(_c_last_name8195_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8196_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag8196 = std::string(_c_preferred_cust_flag8196_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8200_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country8200 = std::string(_c_birth_country8200_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login8201_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login8201 = std::string(_c_login8201_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address8202_n = tbl_Filter_TD_7928_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address8202 = std::string(_c_email_address8202_n.data());
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 7, _ws_sold_date_sk8204);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 8, _ws_ext_discount_amt8226);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 9, _ws_ext_sales_price8227);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 10, _ws_ext_wholesale_cost8228);
                tbl_JOIN_INNER_TD_6668_output.setInt32(r, 11, _ws_ext_list_price8229);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id8187_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8194_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name8195_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag8196_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country8200_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login8201_n);
                tbl_JOIN_INNER_TD_6668_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address8202_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6668_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6668_output #Row: " << tbl_JOIN_INNER_TD_6668_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6844(Table &tbl_Aggregate_TD_7545_output, Table &tbl_Filter_TD_6844_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#4151) AND (year_total#4151 > 0.000000)))
    // Input: ListBuffer(customer_id#4143, year_total#4151)
    // Output: ListBuffer(customer_id#4143, year_total#4151)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7545_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total4151 = tbl_Aggregate_TD_7545_output.getInt32(i, 1);
        if ((1) && (_year_total4151 > 0.000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4143_t = tbl_Aggregate_TD_7545_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6844_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4143_t);
            int32_t _year_total4151_t = tbl_Aggregate_TD_7545_output.getInt32(i, 1);
            tbl_Filter_TD_6844_output.setInt32(r, 1, _year_total4151_t);
            r++;
        }
    }
    tbl_Filter_TD_6844_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6844_output #Row: " << tbl_Filter_TD_6844_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6190_key {
    std::string _c_customer_id7629;
    std::string _c_first_name7636;
    std::string _c_last_name7637;
    std::string _c_preferred_cust_flag7638;
    std::string _c_birth_country7642;
    std::string _c_login7643;
    std::string _c_email_address7644;
    int32_t _d_year7686;
    bool operator==(const SW_Aggregate_TD_6190_key& other) const { return (_c_customer_id7629 == other._c_customer_id7629) && (_c_first_name7636 == other._c_first_name7636) && (_c_last_name7637 == other._c_last_name7637) && (_c_preferred_cust_flag7638 == other._c_preferred_cust_flag7638) && (_c_birth_country7642 == other._c_birth_country7642) && (_c_login7643 == other._c_login7643) && (_c_email_address7644 == other._c_email_address7644) && (_d_year7686 == other._d_year7686); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6190_key> {
    std::size_t operator() (const SW_Aggregate_TD_6190_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id7629)) + (hash<string>()(k._c_first_name7636)) + (hash<string>()(k._c_last_name7637)) + (hash<string>()(k._c_preferred_cust_flag7638)) + (hash<string>()(k._c_birth_country7642)) + (hash<string>()(k._c_login7643)) + (hash<string>()(k._c_email_address7644)) + (hash<int32_t>()(k._d_year7686));
    }
};
}
struct SW_Aggregate_TD_6190_payload {
    std::string _customer_id4268;
    int32_t _year_total4276_sum_0;
};
void SW_Aggregate_TD_6190(Table &tbl_JOIN_INNER_TD_7499_output, Table &tbl_Aggregate_TD_6190_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#7629, c_first_name#7636, c_last_name#7637, c_preferred_cust_flag#7638, c_birth_country#7642, c_login#7643, c_email_address#7644, d_year#7686, c_customer_id#7629 AS customer_id#4268, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(cs_ext_list_price#7671 as decimal(8,2))) - promote_precision(cast(cs_ext_wholesale_cost#7670 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(cs_ext_discount_amt#7668 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(cs_ext_sales_price#7669 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4276)
    // Input: ListBuffer(c_customer_id#7629, c_first_name#7636, c_last_name#7637, c_preferred_cust_flag#7638, c_birth_country#7642, c_login#7643, c_email_address#7644, cs_ext_discount_amt#7668, cs_ext_sales_price#7669, cs_ext_wholesale_cost#7670, cs_ext_list_price#7671, d_year#7686)
    // Output: ListBuffer(customer_id#4268, year_total#4276)
    std::unordered_map<SW_Aggregate_TD_6190_key, SW_Aggregate_TD_6190_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7499_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7629 = tbl_JOIN_INNER_TD_7499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7636 = tbl_JOIN_INNER_TD_7499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7637 = tbl_JOIN_INNER_TD_7499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7638 = tbl_JOIN_INNER_TD_7499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7642 = tbl_JOIN_INNER_TD_7499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login7643 = tbl_JOIN_INNER_TD_7499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address7644 = tbl_JOIN_INNER_TD_7499_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _cs_ext_discount_amt7668 = tbl_JOIN_INNER_TD_7499_output.getInt32(i, 7);
        int32_t _cs_ext_sales_price7669 = tbl_JOIN_INNER_TD_7499_output.getInt32(i, 8);
        int32_t _cs_ext_wholesale_cost7670 = tbl_JOIN_INNER_TD_7499_output.getInt32(i, 9);
        int32_t _cs_ext_list_price7671 = tbl_JOIN_INNER_TD_7499_output.getInt32(i, 10);
        int32_t _d_year7686 = tbl_JOIN_INNER_TD_7499_output.getInt32(i, 11);
        SW_Aggregate_TD_6190_key k{std::string(_c_customer_id7629.data()), std::string(_c_first_name7636.data()), std::string(_c_last_name7637.data()), std::string(_c_preferred_cust_flag7638.data()), std::string(_c_birth_country7642.data()), std::string(_c_login7643.data()), std::string(_c_email_address7644.data()), _d_year7686};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4268 = _c_customer_id7629;
        int64_t _year_total4276_sum_0 = ((((_cs_ext_list_price7671 - _cs_ext_wholesale_cost7670) - _cs_ext_discount_amt7668) + _cs_ext_sales_price7669) / 2.00);
        SW_Aggregate_TD_6190_payload p{std::string(_customer_id4268.data()), _year_total4276_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4276_sum_0 + _year_total4276_sum_0;
            p._year_total4276_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id7629 not required in the output table
        // _c_first_name7636 not required in the output table
        // _c_last_name7637 not required in the output table
        // _c_preferred_cust_flag7638 not required in the output table
        // _c_birth_country7642 not required in the output table
        // _c_login7643 not required in the output table
        // _c_email_address7644 not required in the output table
        // _d_year7686 not required in the output table
        // Unsupported payload type: StringType
        int32_t _year_total4276 = (it.second)._year_total4276_sum_0;
        tbl_Aggregate_TD_6190_output.setInt32(r, 1, _year_total4276);
        ++r;
    }
    tbl_Aggregate_TD_6190_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6190_output #Row: " << tbl_Aggregate_TD_6190_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6415_key_leftMajor {
    std::string _customer_id4123;
    bool operator==(const SW_JOIN_INNER_TD_6415_key_leftMajor& other) const {
        return ((_customer_id4123 == other._customer_id4123));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6415_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6415_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4123));
    }
};
}
struct SW_JOIN_INNER_TD_6415_payload_leftMajor {
    std::string _customer_id4123;
    int32_t _year_total4131;
    std::string _customer_id4248;
    std::string _customer_first_name4249;
    std::string _customer_last_name4250;
    std::string _customer_preferred_cust_flag4251;
    int32_t _year_total4256;
};
struct SW_JOIN_INNER_TD_6415_key_rightMajor {
    std::string _customer_id7549;
    bool operator==(const SW_JOIN_INNER_TD_6415_key_rightMajor& other) const {
        return ((_customer_id7549 == other._customer_id7549));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6415_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6415_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id7549));
    }
};
}
struct SW_JOIN_INNER_TD_6415_payload_rightMajor {
    std::string _customer_id7549;
    int32_t _year_total7557;
};
void SW_JOIN_INNER_TD_6415(Table &tbl_JOIN_INNER_TD_7647_output, Table &tbl_Project_TD_7694_output, Table &tbl_JOIN_INNER_TD_6415_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#4123 = customer_id#7549))
    // Left Table: ListBuffer(customer_id#4123, year_total#4131, customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#4256)
    // Right Table: ListBuffer(customer_id#7549, year_total#7557)
    // Output Table: ListBuffer(customer_id#4123, year_total#4131, customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#4256, year_total#7557)
    int left_nrow = tbl_JOIN_INNER_TD_7647_output.getNumRow();
    int right_nrow = tbl_Project_TD_7694_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6415_key_leftMajor, SW_JOIN_INNER_TD_6415_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7647_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            SW_JOIN_INNER_TD_6415_key_leftMajor keyA{_customer_id4123_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123 = std::string(_customer_id4123_n.data());
            int32_t _year_total4131 = tbl_JOIN_INNER_TD_7647_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id4248 = std::string(_customer_id4248_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
            int32_t _year_total4256 = tbl_JOIN_INNER_TD_7647_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_6415_payload_leftMajor payloadA{_customer_id4123, _year_total4131, _customer_id4248, _customer_first_name4249, _customer_last_name4250, _customer_preferred_cust_flag4251, _year_total4256};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_7694_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id7549_k_n = tbl_Project_TD_7694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id7549_k = std::string(_customer_id7549_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6415_key_leftMajor{_customer_id7549_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4123 = (it->second)._customer_id4123;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n{};
                memcpy(_customer_id4123_n.data(), (_customer_id4123).data(), (_customer_id4123).length());
                int32_t _year_total4131 = (it->second)._year_total4131;
                std::string _customer_id4248 = (it->second)._customer_id4248;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n{};
                memcpy(_customer_id4248_n.data(), (_customer_id4248).data(), (_customer_id4248).length());
                std::string _customer_first_name4249 = (it->second)._customer_first_name4249;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n{};
                memcpy(_customer_first_name4249_n.data(), (_customer_first_name4249).data(), (_customer_first_name4249).length());
                std::string _customer_last_name4250 = (it->second)._customer_last_name4250;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n{};
                memcpy(_customer_last_name4250_n.data(), (_customer_last_name4250).data(), (_customer_last_name4250).length());
                std::string _customer_preferred_cust_flag4251 = (it->second)._customer_preferred_cust_flag4251;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n{};
                memcpy(_customer_preferred_cust_flag4251_n.data(), (_customer_preferred_cust_flag4251).data(), (_customer_preferred_cust_flag4251).length());
                int32_t _year_total4256 = (it->second)._year_total4256;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id7549_n = tbl_Project_TD_7694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id7549 = std::string(_customer_id7549_n.data());
                int32_t _year_total7557 = tbl_Project_TD_7694_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_n);
                tbl_JOIN_INNER_TD_6415_output.setInt32(r, 1, _year_total4131);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id4248_n);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag4251_n);
                tbl_JOIN_INNER_TD_6415_output.setInt32(r, 6, _year_total4256);
                tbl_JOIN_INNER_TD_6415_output.setInt32(r, 7, _year_total7557);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6415_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6415_key_rightMajor, SW_JOIN_INNER_TD_6415_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_7694_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id7549_k_n = tbl_Project_TD_7694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id7549_k = std::string(_customer_id7549_k_n.data());
            SW_JOIN_INNER_TD_6415_key_rightMajor keyA{_customer_id7549_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id7549_n = tbl_Project_TD_7694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id7549 = std::string(_customer_id7549_n.data());
            int32_t _year_total7557 = tbl_Project_TD_7694_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6415_payload_rightMajor payloadA{_customer_id7549, _year_total7557};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7647_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6415_key_rightMajor{_customer_id4123_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id7549 = (it->second)._customer_id7549;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id7549_n{};
                memcpy(_customer_id7549_n.data(), (_customer_id7549).data(), (_customer_id7549).length());
                int32_t _year_total7557 = (it->second)._year_total7557;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4123 = std::string(_customer_id4123_n.data());
                int32_t _year_total4131 = tbl_JOIN_INNER_TD_7647_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id4248 = std::string(_customer_id4248_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_JOIN_INNER_TD_7647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
                int32_t _year_total4256 = tbl_JOIN_INNER_TD_7647_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_6415_output.setInt32(r, 7, _year_total7557);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_n);
                tbl_JOIN_INNER_TD_6415_output.setInt32(r, 1, _year_total4131);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id4248_n);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_6415_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag4251_n);
                tbl_JOIN_INNER_TD_6415_output.setInt32(r, 6, _year_total4256);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6415_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6415_output #Row: " << tbl_JOIN_INNER_TD_6415_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5376_key_leftMajor {
    int32_t _ws_sold_date_sk8204;
    bool operator==(const SW_JOIN_INNER_TD_5376_key_leftMajor& other) const {
        return ((_ws_sold_date_sk8204 == other._ws_sold_date_sk8204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5376_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5376_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk8204));
    }
};
}
struct SW_JOIN_INNER_TD_5376_payload_leftMajor {
    std::string _c_customer_id8187;
    std::string _c_first_name8194;
    std::string _c_last_name8195;
    std::string _c_preferred_cust_flag8196;
    std::string _c_birth_country8200;
    std::string _c_login8201;
    std::string _c_email_address8202;
    int32_t _ws_sold_date_sk8204;
    int32_t _ws_ext_discount_amt8226;
    int32_t _ws_ext_sales_price8227;
    int32_t _ws_ext_wholesale_cost8228;
    int32_t _ws_ext_list_price8229;
};
struct SW_JOIN_INNER_TD_5376_key_rightMajor {
    int32_t _d_date_sk8238;
    bool operator==(const SW_JOIN_INNER_TD_5376_key_rightMajor& other) const {
        return ((_d_date_sk8238 == other._d_date_sk8238));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5376_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5376_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8238));
    }
};
}
struct SW_JOIN_INNER_TD_5376_payload_rightMajor {
    int32_t _d_date_sk8238;
    int32_t _d_year8244;
};
void SW_JOIN_INNER_TD_5376(Table &tbl_JOIN_INNER_TD_6668_output, Table &tbl_Filter_TD_6367_output, Table &tbl_JOIN_INNER_TD_5376_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#8204 = d_date_sk#8238))
    // Left Table: ListBuffer(c_customer_id#8187, c_first_name#8194, c_last_name#8195, c_preferred_cust_flag#8196, c_birth_country#8200, c_login#8201, c_email_address#8202, ws_sold_date_sk#8204, ws_ext_discount_amt#8226, ws_ext_sales_price#8227, ws_ext_wholesale_cost#8228, ws_ext_list_price#8229)
    // Right Table: ListBuffer(d_date_sk#8238, d_year#8244)
    // Output Table: ListBuffer(c_customer_id#8187, c_first_name#8194, c_last_name#8195, c_preferred_cust_flag#8196, c_birth_country#8200, c_login#8201, c_email_address#8202, ws_ext_discount_amt#8226, ws_ext_sales_price#8227, ws_ext_wholesale_cost#8228, ws_ext_list_price#8229, d_year#8244)
    int left_nrow = tbl_JOIN_INNER_TD_6668_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6367_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5376_key_leftMajor, SW_JOIN_INNER_TD_5376_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6668_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk8204_k = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_5376_key_leftMajor keyA{_ws_sold_date_sk8204_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id8187 = std::string(_c_customer_id8187_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8194_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8194 = std::string(_c_first_name8194_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name8195_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name8195 = std::string(_c_last_name8195_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8196_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag8196 = std::string(_c_preferred_cust_flag8196_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8200_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country8200 = std::string(_c_birth_country8200_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login8201_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login8201 = std::string(_c_login8201_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address8202_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address8202 = std::string(_c_email_address8202_n.data());
            int32_t _ws_sold_date_sk8204 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 7);
            int32_t _ws_ext_discount_amt8226 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 8);
            int32_t _ws_ext_sales_price8227 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 9);
            int32_t _ws_ext_wholesale_cost8228 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 10);
            int32_t _ws_ext_list_price8229 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_5376_payload_leftMajor payloadA{_c_customer_id8187, _c_first_name8194, _c_last_name8195, _c_preferred_cust_flag8196, _c_birth_country8200, _c_login8201, _c_email_address8202, _ws_sold_date_sk8204, _ws_ext_discount_amt8226, _ws_ext_sales_price8227, _ws_ext_wholesale_cost8228, _ws_ext_list_price8229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6367_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8238_k = tbl_Filter_TD_6367_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5376_key_leftMajor{_d_date_sk8238_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id8187 = (it->second)._c_customer_id8187;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187_n{};
                memcpy(_c_customer_id8187_n.data(), (_c_customer_id8187).data(), (_c_customer_id8187).length());
                std::string _c_first_name8194 = (it->second)._c_first_name8194;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8194_n{};
                memcpy(_c_first_name8194_n.data(), (_c_first_name8194).data(), (_c_first_name8194).length());
                std::string _c_last_name8195 = (it->second)._c_last_name8195;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name8195_n{};
                memcpy(_c_last_name8195_n.data(), (_c_last_name8195).data(), (_c_last_name8195).length());
                std::string _c_preferred_cust_flag8196 = (it->second)._c_preferred_cust_flag8196;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8196_n{};
                memcpy(_c_preferred_cust_flag8196_n.data(), (_c_preferred_cust_flag8196).data(), (_c_preferred_cust_flag8196).length());
                std::string _c_birth_country8200 = (it->second)._c_birth_country8200;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8200_n{};
                memcpy(_c_birth_country8200_n.data(), (_c_birth_country8200).data(), (_c_birth_country8200).length());
                std::string _c_login8201 = (it->second)._c_login8201;
                std::array<char, TPCDS_READ_MAX + 1> _c_login8201_n{};
                memcpy(_c_login8201_n.data(), (_c_login8201).data(), (_c_login8201).length());
                std::string _c_email_address8202 = (it->second)._c_email_address8202;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address8202_n{};
                memcpy(_c_email_address8202_n.data(), (_c_email_address8202).data(), (_c_email_address8202).length());
                int32_t _ws_sold_date_sk8204 = (it->second)._ws_sold_date_sk8204;
                int32_t _ws_ext_discount_amt8226 = (it->second)._ws_ext_discount_amt8226;
                int32_t _ws_ext_sales_price8227 = (it->second)._ws_ext_sales_price8227;
                int32_t _ws_ext_wholesale_cost8228 = (it->second)._ws_ext_wholesale_cost8228;
                int32_t _ws_ext_list_price8229 = (it->second)._ws_ext_list_price8229;
                int32_t _d_date_sk8238 = tbl_Filter_TD_6367_output.getInt32(i, 0);
                int32_t _d_year8244 = tbl_Filter_TD_6367_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id8187_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8194_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name8195_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag8196_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country8200_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login8201_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address8202_n);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 7, _ws_ext_discount_amt8226);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 8, _ws_ext_sales_price8227);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 9, _ws_ext_wholesale_cost8228);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 10, _ws_ext_list_price8229);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 11, _d_year8244);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5376_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5376_key_rightMajor, SW_JOIN_INNER_TD_5376_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6367_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8238_k = tbl_Filter_TD_6367_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5376_key_rightMajor keyA{_d_date_sk8238_k};
            int32_t _d_date_sk8238 = tbl_Filter_TD_6367_output.getInt32(i, 0);
            int32_t _d_year8244 = tbl_Filter_TD_6367_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5376_payload_rightMajor payloadA{_d_date_sk8238, _d_year8244};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6668_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk8204_k = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5376_key_rightMajor{_ws_sold_date_sk8204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8238 = (it->second)._d_date_sk8238;
                int32_t _d_year8244 = (it->second)._d_year8244;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id8187 = std::string(_c_customer_id8187_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8194_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8194 = std::string(_c_first_name8194_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name8195_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name8195 = std::string(_c_last_name8195_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8196_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag8196 = std::string(_c_preferred_cust_flag8196_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8200_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country8200 = std::string(_c_birth_country8200_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login8201_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login8201 = std::string(_c_login8201_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address8202_n = tbl_JOIN_INNER_TD_6668_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address8202 = std::string(_c_email_address8202_n.data());
                int32_t _ws_sold_date_sk8204 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 7);
                int32_t _ws_ext_discount_amt8226 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 8);
                int32_t _ws_ext_sales_price8227 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 9);
                int32_t _ws_ext_wholesale_cost8228 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 10);
                int32_t _ws_ext_list_price8229 = tbl_JOIN_INNER_TD_6668_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 11, _d_year8244);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id8187_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8194_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name8195_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag8196_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country8200_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login8201_n);
                tbl_JOIN_INNER_TD_5376_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address8202_n);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 7, _ws_ext_discount_amt8226);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 8, _ws_ext_sales_price8227);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 9, _ws_ext_wholesale_cost8228);
                tbl_JOIN_INNER_TD_5376_output.setInt32(r, 10, _ws_ext_list_price8229);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5376_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5376_output #Row: " << tbl_JOIN_INNER_TD_5376_output.getNumRow() << std::endl;
}

void SW_Project_TD_5514(Table &tbl_Filter_TD_6844_output, Table &tbl_Project_TD_5514_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(customer_id#4143 AS customer_id#8027, year_total#4151 AS year_total#8035)
    // Input: ListBuffer(customer_id#4143, year_total#4151)
    // Output: ListBuffer(customer_id#8027, year_total#8035)
    int nrow1 = tbl_Filter_TD_6844_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4143 = tbl_Filter_TD_6844_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _year_total4151 = tbl_Filter_TD_6844_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_id8027 = _customer_id4143;
        tbl_Project_TD_5514_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id8027);
        int32_t _year_total8035 = _year_total4151;
        tbl_Project_TD_5514_output.setInt32(i, 1, _year_total8035);
    }
    tbl_Project_TD_5514_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5514_output #Row: " << tbl_Project_TD_5514_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5640_key_leftMajor {
    std::string _customer_id4123;
    bool operator==(const SW_JOIN_INNER_TD_5640_key_leftMajor& other) const {
        return ((_customer_id4123 == other._customer_id4123));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5640_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5640_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4123));
    }
};
}
struct SW_JOIN_INNER_TD_5640_payload_leftMajor {
    std::string _customer_id4123;
    int32_t _year_total4131;
    std::string _customer_id4248;
    std::string _customer_first_name4249;
    std::string _customer_last_name4250;
    std::string _customer_preferred_cust_flag4251;
    int32_t _year_total4256;
    int32_t _year_total7557;
};
struct SW_JOIN_INNER_TD_5640_key_rightMajor {
    std::string _customer_id4268;
    bool operator==(const SW_JOIN_INNER_TD_5640_key_rightMajor& other) const {
        return ((_customer_id4268 == other._customer_id4268));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5640_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5640_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4268));
    }
};
}
struct SW_JOIN_INNER_TD_5640_payload_rightMajor {
    std::string _customer_id4268;
    int32_t _year_total4276;
};
void SW_JOIN_INNER_TD_5640(Table &tbl_JOIN_INNER_TD_6415_output, Table &tbl_Aggregate_TD_6190_output, Table &tbl_JOIN_INNER_TD_5640_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((customer_id#4123 = customer_id#4268) AND (CASE WHEN (year_total#7557 > 0.000000) THEN CheckOverflow((promote_precision(year_total#4276) / promote_precision(year_total#7557)), DecimalType(38,14), true) END > CASE WHEN (year_total#4131 > 0.000000) THEN CheckOverflow((promote_precision(year_total#4256) / promote_precision(year_total#4131)), DecimalType(38,14), true) END)))
    // Left Table: ListBuffer(customer_id#4123, year_total#4131, customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#4256, year_total#7557)
    // Right Table: ListBuffer(customer_id#4268, year_total#4276)
    // Output Table: ListBuffer(customer_id#4123, customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#7557, year_total#4276)
    int left_nrow = tbl_JOIN_INNER_TD_6415_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6190_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5640_key_leftMajor, SW_JOIN_INNER_TD_5640_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6415_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            SW_JOIN_INNER_TD_5640_key_leftMajor keyA{_customer_id4123_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123 = std::string(_customer_id4123_n.data());
            int32_t _year_total4131 = tbl_JOIN_INNER_TD_6415_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id4248 = std::string(_customer_id4248_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
            int32_t _year_total4256 = tbl_JOIN_INNER_TD_6415_output.getInt32(i, 6);
            int32_t _year_total7557 = tbl_JOIN_INNER_TD_6415_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_5640_payload_leftMajor payloadA{_customer_id4123, _year_total4131, _customer_id4248, _customer_first_name4249, _customer_last_name4250, _customer_preferred_cust_flag4251, _year_total4256, _year_total7557};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6190_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4268_k_n = tbl_Aggregate_TD_6190_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4268_k = std::string(_customer_id4268_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5640_key_leftMajor{_customer_id4268_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4123 = (it->second)._customer_id4123;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n{};
                memcpy(_customer_id4123_n.data(), (_customer_id4123).data(), (_customer_id4123).length());
                int32_t _year_total4131 = (it->second)._year_total4131;
                std::string _customer_id4248 = (it->second)._customer_id4248;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n{};
                memcpy(_customer_id4248_n.data(), (_customer_id4248).data(), (_customer_id4248).length());
                std::string _customer_first_name4249 = (it->second)._customer_first_name4249;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n{};
                memcpy(_customer_first_name4249_n.data(), (_customer_first_name4249).data(), (_customer_first_name4249).length());
                std::string _customer_last_name4250 = (it->second)._customer_last_name4250;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n{};
                memcpy(_customer_last_name4250_n.data(), (_customer_last_name4250).data(), (_customer_last_name4250).length());
                std::string _customer_preferred_cust_flag4251 = (it->second)._customer_preferred_cust_flag4251;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n{};
                memcpy(_customer_preferred_cust_flag4251_n.data(), (_customer_preferred_cust_flag4251).data(), (_customer_preferred_cust_flag4251).length());
                int32_t _year_total4256 = (it->second)._year_total4256;
                int32_t _year_total7557 = (it->second)._year_total7557;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4268_n = tbl_Aggregate_TD_6190_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4268 = std::string(_customer_id4268_n.data());
                int32_t _year_total4276 = tbl_Aggregate_TD_6190_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_n);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_id4248_n);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_preferred_cust_flag4251_n);
                tbl_JOIN_INNER_TD_5640_output.setInt32(r, 5, _year_total7557);
                tbl_JOIN_INNER_TD_5640_output.setInt32(r, 6, _year_total4276);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5640_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5640_key_rightMajor, SW_JOIN_INNER_TD_5640_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6190_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4268_k_n = tbl_Aggregate_TD_6190_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4268_k = std::string(_customer_id4268_k_n.data());
            SW_JOIN_INNER_TD_5640_key_rightMajor keyA{_customer_id4268_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4268_n = tbl_Aggregate_TD_6190_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4268 = std::string(_customer_id4268_n.data());
            int32_t _year_total4276 = tbl_Aggregate_TD_6190_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5640_payload_rightMajor payloadA{_customer_id4268, _year_total4276};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6415_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5640_key_rightMajor{_customer_id4123_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4268 = (it->second)._customer_id4268;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4268_n{};
                memcpy(_customer_id4268_n.data(), (_customer_id4268).data(), (_customer_id4268).length());
                int32_t _year_total4276 = (it->second)._year_total4276;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4123 = std::string(_customer_id4123_n.data());
                int32_t _year_total4131 = tbl_JOIN_INNER_TD_6415_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id4248 = std::string(_customer_id4248_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_JOIN_INNER_TD_6415_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
                int32_t _year_total4256 = tbl_JOIN_INNER_TD_6415_output.getInt32(i, 6);
                int32_t _year_total7557 = tbl_JOIN_INNER_TD_6415_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_5640_output.setInt32(r, 6, _year_total4276);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_n);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_id4248_n);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_5640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_preferred_cust_flag4251_n);
                tbl_JOIN_INNER_TD_5640_output.setInt32(r, 5, _year_total7557);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5640_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5640_output #Row: " << tbl_JOIN_INNER_TD_5640_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4939_key {
    std::string _c_customer_id8187;
    std::string _c_first_name8194;
    std::string _c_last_name8195;
    std::string _c_preferred_cust_flag8196;
    std::string _c_birth_country8200;
    std::string _c_login8201;
    std::string _c_email_address8202;
    int32_t _d_year8244;
    bool operator==(const SW_Aggregate_TD_4939_key& other) const { return (_c_customer_id8187 == other._c_customer_id8187) && (_c_first_name8194 == other._c_first_name8194) && (_c_last_name8195 == other._c_last_name8195) && (_c_preferred_cust_flag8196 == other._c_preferred_cust_flag8196) && (_c_birth_country8200 == other._c_birth_country8200) && (_c_login8201 == other._c_login8201) && (_c_email_address8202 == other._c_email_address8202) && (_d_year8244 == other._d_year8244); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4939_key> {
    std::size_t operator() (const SW_Aggregate_TD_4939_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id8187)) + (hash<string>()(k._c_first_name8194)) + (hash<string>()(k._c_last_name8195)) + (hash<string>()(k._c_preferred_cust_flag8196)) + (hash<string>()(k._c_birth_country8200)) + (hash<string>()(k._c_login8201)) + (hash<string>()(k._c_email_address8202)) + (hash<int32_t>()(k._d_year8244));
    }
};
}
struct SW_Aggregate_TD_4939_payload {
    std::string _customer_id4288;
    int32_t _year_total4296_sum_0;
};
void SW_Aggregate_TD_4939(Table &tbl_JOIN_INNER_TD_5376_output, Table &tbl_Aggregate_TD_4939_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#8187, c_first_name#8194, c_last_name#8195, c_preferred_cust_flag#8196, c_birth_country#8200, c_login#8201, c_email_address#8202, d_year#8244, c_customer_id#8187 AS customer_id#4288, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ws_ext_list_price#8229 as decimal(8,2))) - promote_precision(cast(ws_ext_wholesale_cost#8228 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(ws_ext_discount_amt#8226 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(ws_ext_sales_price#8227 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4296)
    // Input: ListBuffer(c_customer_id#8187, c_first_name#8194, c_last_name#8195, c_preferred_cust_flag#8196, c_birth_country#8200, c_login#8201, c_email_address#8202, ws_ext_discount_amt#8226, ws_ext_sales_price#8227, ws_ext_wholesale_cost#8228, ws_ext_list_price#8229, d_year#8244)
    // Output: ListBuffer(customer_id#4288, year_total#4296)
    std::unordered_map<SW_Aggregate_TD_4939_key, SW_Aggregate_TD_4939_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5376_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8187 = tbl_JOIN_INNER_TD_5376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8194 = tbl_JOIN_INNER_TD_5376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name8195 = tbl_JOIN_INNER_TD_5376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8196 = tbl_JOIN_INNER_TD_5376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8200 = tbl_JOIN_INNER_TD_5376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login8201 = tbl_JOIN_INNER_TD_5376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address8202 = tbl_JOIN_INNER_TD_5376_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ws_ext_discount_amt8226 = tbl_JOIN_INNER_TD_5376_output.getInt32(i, 7);
        int32_t _ws_ext_sales_price8227 = tbl_JOIN_INNER_TD_5376_output.getInt32(i, 8);
        int32_t _ws_ext_wholesale_cost8228 = tbl_JOIN_INNER_TD_5376_output.getInt32(i, 9);
        int32_t _ws_ext_list_price8229 = tbl_JOIN_INNER_TD_5376_output.getInt32(i, 10);
        int32_t _d_year8244 = tbl_JOIN_INNER_TD_5376_output.getInt32(i, 11);
        SW_Aggregate_TD_4939_key k{std::string(_c_customer_id8187.data()), std::string(_c_first_name8194.data()), std::string(_c_last_name8195.data()), std::string(_c_preferred_cust_flag8196.data()), std::string(_c_birth_country8200.data()), std::string(_c_login8201.data()), std::string(_c_email_address8202.data()), _d_year8244};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4288 = _c_customer_id8187;
        int64_t _year_total4296_sum_0 = ((((_ws_ext_list_price8229 - _ws_ext_wholesale_cost8228) - _ws_ext_discount_amt8226) + _ws_ext_sales_price8227) / 2.00);
        SW_Aggregate_TD_4939_payload p{std::string(_customer_id4288.data()), _year_total4296_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4296_sum_0 + _year_total4296_sum_0;
            p._year_total4296_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id8187 not required in the output table
        // _c_first_name8194 not required in the output table
        // _c_last_name8195 not required in the output table
        // _c_preferred_cust_flag8196 not required in the output table
        // _c_birth_country8200 not required in the output table
        // _c_login8201 not required in the output table
        // _c_email_address8202 not required in the output table
        // _d_year8244 not required in the output table
        // Unsupported payload type: StringType
        int32_t _year_total4296 = (it.second)._year_total4296_sum_0;
        tbl_Aggregate_TD_4939_output.setInt32(r, 1, _year_total4296);
        ++r;
    }
    tbl_Aggregate_TD_4939_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4939_output #Row: " << tbl_Aggregate_TD_4939_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4872_key_leftMajor {
    std::string _customer_id4123;
    bool operator==(const SW_JOIN_INNER_TD_4872_key_leftMajor& other) const {
        return ((_customer_id4123 == other._customer_id4123));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4872_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4872_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4123));
    }
};
}
struct SW_JOIN_INNER_TD_4872_payload_leftMajor {
    std::string _customer_id4123;
    std::string _customer_id4248;
    std::string _customer_first_name4249;
    std::string _customer_last_name4250;
    std::string _customer_preferred_cust_flag4251;
    int32_t _year_total7557;
    int32_t _year_total4276;
};
struct SW_JOIN_INNER_TD_4872_key_rightMajor {
    std::string _customer_id8027;
    bool operator==(const SW_JOIN_INNER_TD_4872_key_rightMajor& other) const {
        return ((_customer_id8027 == other._customer_id8027));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4872_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4872_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id8027));
    }
};
}
struct SW_JOIN_INNER_TD_4872_payload_rightMajor {
    std::string _customer_id8027;
    int32_t _year_total8035;
};
void SW_JOIN_INNER_TD_4872(Table &tbl_JOIN_INNER_TD_5640_output, Table &tbl_Project_TD_5514_output, Table &tbl_JOIN_INNER_TD_4872_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#4123 = customer_id#8027))
    // Left Table: ListBuffer(customer_id#4123, customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#7557, year_total#4276)
    // Right Table: ListBuffer(customer_id#8027, year_total#8035)
    // Output Table: ListBuffer(customer_id#4123, customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#7557, year_total#4276, year_total#8035)
    int left_nrow = tbl_JOIN_INNER_TD_5640_output.getNumRow();
    int right_nrow = tbl_Project_TD_5514_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4872_key_leftMajor, SW_JOIN_INNER_TD_4872_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5640_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            SW_JOIN_INNER_TD_4872_key_leftMajor keyA{_customer_id4123_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123 = std::string(_customer_id4123_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_id4248 = std::string(_customer_id4248_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
            int32_t _year_total7557 = tbl_JOIN_INNER_TD_5640_output.getInt32(i, 5);
            int32_t _year_total4276 = tbl_JOIN_INNER_TD_5640_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_4872_payload_leftMajor payloadA{_customer_id4123, _customer_id4248, _customer_first_name4249, _customer_last_name4250, _customer_preferred_cust_flag4251, _year_total7557, _year_total4276};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5514_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id8027_k_n = tbl_Project_TD_5514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id8027_k = std::string(_customer_id8027_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4872_key_leftMajor{_customer_id8027_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4123 = (it->second)._customer_id4123;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n{};
                memcpy(_customer_id4123_n.data(), (_customer_id4123).data(), (_customer_id4123).length());
                std::string _customer_id4248 = (it->second)._customer_id4248;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n{};
                memcpy(_customer_id4248_n.data(), (_customer_id4248).data(), (_customer_id4248).length());
                std::string _customer_first_name4249 = (it->second)._customer_first_name4249;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n{};
                memcpy(_customer_first_name4249_n.data(), (_customer_first_name4249).data(), (_customer_first_name4249).length());
                std::string _customer_last_name4250 = (it->second)._customer_last_name4250;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n{};
                memcpy(_customer_last_name4250_n.data(), (_customer_last_name4250).data(), (_customer_last_name4250).length());
                std::string _customer_preferred_cust_flag4251 = (it->second)._customer_preferred_cust_flag4251;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n{};
                memcpy(_customer_preferred_cust_flag4251_n.data(), (_customer_preferred_cust_flag4251).data(), (_customer_preferred_cust_flag4251).length());
                int32_t _year_total7557 = (it->second)._year_total7557;
                int32_t _year_total4276 = (it->second)._year_total4276;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id8027_n = tbl_Project_TD_5514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id8027 = std::string(_customer_id8027_n.data());
                int32_t _year_total8035 = tbl_Project_TD_5514_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_n);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_id4248_n);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_preferred_cust_flag4251_n);
                tbl_JOIN_INNER_TD_4872_output.setInt32(r, 5, _year_total7557);
                tbl_JOIN_INNER_TD_4872_output.setInt32(r, 6, _year_total4276);
                tbl_JOIN_INNER_TD_4872_output.setInt32(r, 7, _year_total8035);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4872_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4872_key_rightMajor, SW_JOIN_INNER_TD_4872_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5514_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id8027_k_n = tbl_Project_TD_5514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id8027_k = std::string(_customer_id8027_k_n.data());
            SW_JOIN_INNER_TD_4872_key_rightMajor keyA{_customer_id8027_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id8027_n = tbl_Project_TD_5514_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id8027 = std::string(_customer_id8027_n.data());
            int32_t _year_total8035 = tbl_Project_TD_5514_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4872_payload_rightMajor payloadA{_customer_id8027, _year_total8035};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5640_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4872_key_rightMajor{_customer_id4123_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id8027 = (it->second)._customer_id8027;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id8027_n{};
                memcpy(_customer_id8027_n.data(), (_customer_id8027).data(), (_customer_id8027).length());
                int32_t _year_total8035 = (it->second)._year_total8035;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4123 = std::string(_customer_id4123_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_id4248 = std::string(_customer_id4248_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_JOIN_INNER_TD_5640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
                int32_t _year_total7557 = tbl_JOIN_INNER_TD_5640_output.getInt32(i, 5);
                int32_t _year_total4276 = tbl_JOIN_INNER_TD_5640_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_4872_output.setInt32(r, 7, _year_total8035);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4123_n);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_id4248_n);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_4872_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_preferred_cust_flag4251_n);
                tbl_JOIN_INNER_TD_4872_output.setInt32(r, 5, _year_total7557);
                tbl_JOIN_INNER_TD_4872_output.setInt32(r, 6, _year_total4276);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4872_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4872_output #Row: " << tbl_JOIN_INNER_TD_4872_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3285_key_leftMajor {
    std::string _customer_id4123;
    bool operator==(const SW_JOIN_INNER_TD_3285_key_leftMajor& other) const {
        return ((_customer_id4123 == other._customer_id4123));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3285_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3285_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4123));
    }
};
}
struct SW_JOIN_INNER_TD_3285_payload_leftMajor {
    std::string _customer_id4123;
    std::string _customer_id4248;
    std::string _customer_first_name4249;
    std::string _customer_last_name4250;
    std::string _customer_preferred_cust_flag4251;
    int32_t _year_total7557;
    int32_t _year_total4276;
    int32_t _year_total8035;
};
struct SW_JOIN_INNER_TD_3285_key_rightMajor {
    std::string _customer_id4288;
    bool operator==(const SW_JOIN_INNER_TD_3285_key_rightMajor& other) const {
        return ((_customer_id4288 == other._customer_id4288));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3285_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3285_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4288));
    }
};
}
struct SW_JOIN_INNER_TD_3285_payload_rightMajor {
    std::string _customer_id4288;
    int32_t _year_total4296;
};
void SW_JOIN_INNER_TD_3285(Table &tbl_JOIN_INNER_TD_4872_output, Table &tbl_Aggregate_TD_4939_output, Table &tbl_JOIN_INNER_TD_3285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((customer_id#4123 = customer_id#4288) AND (CASE WHEN (year_total#7557 > 0.000000) THEN CheckOverflow((promote_precision(year_total#4276) / promote_precision(year_total#7557)), DecimalType(38,14), true) END > CASE WHEN (year_total#8035 > 0.000000) THEN CheckOverflow((promote_precision(year_total#4296) / promote_precision(year_total#8035)), DecimalType(38,14), true) END)))
    // Left Table: ListBuffer(customer_id#4123, customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251, year_total#7557, year_total#4276, year_total#8035)
    // Right Table: ListBuffer(customer_id#4288, year_total#4296)
    // Output Table: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251)
    int left_nrow = tbl_JOIN_INNER_TD_4872_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4939_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3285_key_leftMajor, SW_JOIN_INNER_TD_3285_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4872_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            SW_JOIN_INNER_TD_3285_key_leftMajor keyA{_customer_id4123_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123 = std::string(_customer_id4123_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_id4248 = std::string(_customer_id4248_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
            int32_t _year_total7557 = tbl_JOIN_INNER_TD_4872_output.getInt32(i, 5);
            int32_t _year_total4276 = tbl_JOIN_INNER_TD_4872_output.getInt32(i, 6);
            int32_t _year_total8035 = tbl_JOIN_INNER_TD_4872_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_3285_payload_leftMajor payloadA{_customer_id4123, _customer_id4248, _customer_first_name4249, _customer_last_name4250, _customer_preferred_cust_flag4251, _year_total7557, _year_total4276, _year_total8035};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_4939_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4288_k_n = tbl_Aggregate_TD_4939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4288_k = std::string(_customer_id4288_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3285_key_leftMajor{_customer_id4288_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4123 = (it->second)._customer_id4123;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n{};
                memcpy(_customer_id4123_n.data(), (_customer_id4123).data(), (_customer_id4123).length());
                std::string _customer_id4248 = (it->second)._customer_id4248;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n{};
                memcpy(_customer_id4248_n.data(), (_customer_id4248).data(), (_customer_id4248).length());
                std::string _customer_first_name4249 = (it->second)._customer_first_name4249;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n{};
                memcpy(_customer_first_name4249_n.data(), (_customer_first_name4249).data(), (_customer_first_name4249).length());
                std::string _customer_last_name4250 = (it->second)._customer_last_name4250;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n{};
                memcpy(_customer_last_name4250_n.data(), (_customer_last_name4250).data(), (_customer_last_name4250).length());
                std::string _customer_preferred_cust_flag4251 = (it->second)._customer_preferred_cust_flag4251;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n{};
                memcpy(_customer_preferred_cust_flag4251_n.data(), (_customer_preferred_cust_flag4251).data(), (_customer_preferred_cust_flag4251).length());
                int32_t _year_total7557 = (it->second)._year_total7557;
                int32_t _year_total4276 = (it->second)._year_total4276;
                int32_t _year_total8035 = (it->second)._year_total8035;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4288_n = tbl_Aggregate_TD_4939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4288 = std::string(_customer_id4288_n.data());
                int32_t _year_total4296 = tbl_Aggregate_TD_4939_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4248_n);
                tbl_JOIN_INNER_TD_3285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_3285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_3285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4251_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3285_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3285_key_rightMajor, SW_JOIN_INNER_TD_3285_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_4939_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4288_k_n = tbl_Aggregate_TD_4939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4288_k = std::string(_customer_id4288_k_n.data());
            SW_JOIN_INNER_TD_3285_key_rightMajor keyA{_customer_id4288_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4288_n = tbl_Aggregate_TD_4939_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4288 = std::string(_customer_id4288_n.data());
            int32_t _year_total4296 = tbl_Aggregate_TD_4939_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3285_payload_rightMajor payloadA{_customer_id4288, _year_total4296};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4872_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_k_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4123_k = std::string(_customer_id4123_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3285_key_rightMajor{_customer_id4123_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4288 = (it->second)._customer_id4288;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4288_n{};
                memcpy(_customer_id4288_n.data(), (_customer_id4288).data(), (_customer_id4288).length());
                int32_t _year_total4296 = (it->second)._year_total4296;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4123_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4123 = std::string(_customer_id4123_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_id4248 = std::string(_customer_id4248_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_first_name4249 = std::string(_customer_first_name4249_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_last_name4250 = std::string(_customer_last_name4250_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_JOIN_INNER_TD_4872_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_preferred_cust_flag4251 = std::string(_customer_preferred_cust_flag4251_n.data());
                int32_t _year_total7557 = tbl_JOIN_INNER_TD_4872_output.getInt32(i, 5);
                int32_t _year_total4276 = tbl_JOIN_INNER_TD_4872_output.getInt32(i, 6);
                int32_t _year_total8035 = tbl_JOIN_INNER_TD_4872_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_3285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4248_n);
                tbl_JOIN_INNER_TD_3285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4249_n);
                tbl_JOIN_INNER_TD_3285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4250_n);
                tbl_JOIN_INNER_TD_3285_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4251_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3285_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3285_output #Row: " << tbl_JOIN_INNER_TD_3285_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2679(Table &tbl_JOIN_INNER_TD_3285_output, Table &tbl_Sort_TD_2679_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(customer_id#4248 ASC NULLS FIRST, customer_first_name#4249 ASC NULLS FIRST, customer_last_name#4250 ASC NULLS FIRST, customer_preferred_cust_flag#4251 ASC NULLS FIRST)
    // Input: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251)
    // Output: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251)
    struct SW_Sort_TD_2679Row {
        std::string _customer_id4248;
        std::string _customer_first_name4249;
        std::string _customer_last_name4250;
        std::string _customer_preferred_cust_flag4251;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2679Row& a, const SW_Sort_TD_2679Row& b) const { return 
 (a._customer_id4248 < b._customer_id4248) || 
 ((a._customer_id4248 == b._customer_id4248) && (a._customer_first_name4249 < b._customer_first_name4249)) || 
 ((a._customer_id4248 == b._customer_id4248) && (a._customer_first_name4249 == b._customer_first_name4249) && (a._customer_last_name4250 < b._customer_last_name4250)) || 
 ((a._customer_id4248 == b._customer_id4248) && (a._customer_first_name4249 == b._customer_first_name4249) && (a._customer_last_name4250 == b._customer_last_name4250) && (a._customer_preferred_cust_flag4251 < b._customer_preferred_cust_flag4251)); 
}
    }SW_Sort_TD_2679_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3285_output.getNumRow();
    std::vector<SW_Sort_TD_2679Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4248 = tbl_JOIN_INNER_TD_3285_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249 = tbl_JOIN_INNER_TD_3285_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250 = tbl_JOIN_INNER_TD_3285_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251 = tbl_JOIN_INNER_TD_3285_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        SW_Sort_TD_2679Row t = {std::string(_customer_id4248.data()),std::string(_customer_first_name4249.data()),std::string(_customer_last_name4250.data()),std::string(_customer_preferred_cust_flag4251.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2679_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4248{};
        memcpy(_customer_id4248.data(), (it._customer_id4248).data(), (it._customer_id4248).length());
        tbl_Sort_TD_2679_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _customer_id4248);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249{};
        memcpy(_customer_first_name4249.data(), (it._customer_first_name4249).data(), (it._customer_first_name4249).length());
        tbl_Sort_TD_2679_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _customer_first_name4249);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250{};
        memcpy(_customer_last_name4250.data(), (it._customer_last_name4250).data(), (it._customer_last_name4250).length());
        tbl_Sort_TD_2679_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _customer_last_name4250);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251{};
        memcpy(_customer_preferred_cust_flag4251.data(), (it._customer_preferred_cust_flag4251).data(), (it._customer_preferred_cust_flag4251).length());
        tbl_Sort_TD_2679_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _customer_preferred_cust_flag4251);
        ++r;
    }
    tbl_Sort_TD_2679_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2679_output #Row: " << tbl_Sort_TD_2679_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1727(Table &tbl_Sort_TD_2679_output, Table &tbl_LocalLimit_TD_1727_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251)
    // Output: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_Sort_TD_2679_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1727_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4248_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_Sort_TD_2679_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1727_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4249_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_Sort_TD_2679_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1727_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4250_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_Sort_TD_2679_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1727_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4251_n);
        r++;
    }
    tbl_LocalLimit_TD_1727_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1727_output #Row: " << tbl_LocalLimit_TD_1727_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0329(Table &tbl_LocalLimit_TD_1727_output, Table &tbl_GlobalLimit_TD_0329_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251)
    // Output: ListBuffer(customer_id#4248, customer_first_name#4249, customer_last_name#4250, customer_preferred_cust_flag#4251)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4248_n = tbl_LocalLimit_TD_1727_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0329_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4248_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4249_n = tbl_LocalLimit_TD_1727_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0329_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4249_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4250_n = tbl_LocalLimit_TD_1727_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0329_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4250_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4251_n = tbl_LocalLimit_TD_1727_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0329_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4251_n);
        r++;
    }
    tbl_GlobalLimit_TD_0329_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0329_output #Row: " << tbl_GlobalLimit_TD_0329_output.getNumRow() << std::endl;
}

